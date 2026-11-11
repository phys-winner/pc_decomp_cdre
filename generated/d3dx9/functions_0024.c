#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120E069C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E069Cu);

L_120E069C:
    edi = edi; /* 0x120E069C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E069E: push ebp */
    ebp = esp; /* 0x120E069F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x120E06A1: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E06A7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E06AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E06AE: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E06B1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E06B4: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E06B5: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E06B8: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E06B9: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x78)) = eax; /* 0x120E06BC: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E06BF: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120E06C2: push edi */
    MEM32(ebp + (-0x38)) = ecx; /* 0x120E06C3: mov dword ptr [ebp - 0x38], ecx */
    MEM32(ebp + (-0x48)) = ebx; /* 0x120E06C6: mov dword ptr [ebp - 0x48], ebx */
    MEM32(ebp + (-0x74)) = eax; /* 0x120E06C9: mov dword ptr [ebp - 0x74], eax */
    MEM32(ebp + (-0x7C)) = esi; /* 0x120E06CC: mov dword ptr [ebp - 0x7c], esi */
    RECOMP_CALL(sub_120E05A6); /* 0x120E06CF: call 0x120e05a6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x120E06D4: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x34); /* 0x120E06D6: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x120E06D9: push ecx */
    PUSH32(esp, ebx); /* 0x120E06DA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x120E06DB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120E06DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E075C; /* 0x120E06E0: je 0x120e075c */
L_120E06E2:
    edi = ebp + (-0x5C); /* 0x120E06E2: lea edi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E06E5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E06E6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E06E7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E06E8: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x5C)); /* 0x120E06E9: mov eax, dword ptr [ebp - 0x5c] */
    /* test eax, eax */ /* 0x120E06EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0752; /* 0x120E06EE: js 0x120e0752 */
L_120E06F0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E06F0: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x54)); /* 0x120E06F3: mov esi, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x120E06F6: mov dword ptr [ebp - 0x4c], ecx */
    /* cmp esi, ecx */ /* 0x120E06F9: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0752; /* 0x120E06FB: ja 0x120e0752 */
L_120E06FD:
    /* cmp eax, esi */ /* 0x120E06FD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E0752; /* 0x120E06FF: jg 0x120e0752 */
L_120E0701:
    edi = MEM32(ebp + (-0x58)); /* 0x120E0701: mov edi, dword ptr [ebp - 0x58] */
    /* test edi, edi */ /* 0x120E0704: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0752; /* 0x120E0706: js 0x120e0752 */
L_120E0708:
    edx = MEM32(ebp + (-0x18)); /* 0x120E0708: mov edx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x50)); /* 0x120E070B: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x60)) = edx; /* 0x120E070E: mov dword ptr [ebp - 0x60], edx */
    /* cmp eax, edx */ /* 0x120E0711: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0752; /* 0x120E0713: ja 0x120e0752 */
L_120E0715:
    /* cmp edi, eax */ /* 0x120E0715: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E0752; /* 0x120E0717: jg 0x120e0752 */
L_120E0719:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0719: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x5C)), ebx */ /* 0x120E071B: cmp dword ptr [ebp - 0x5c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0733; /* 0x120E071E: jne 0x120e0733 */
L_120E0720:
    /* cmp esi, ecx */ /* 0x120E0720: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0733; /* 0x120E0722: jne 0x120e0733 */
L_120E0724:
    /* test edi, edi */ /* 0x120E0724: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0733; /* 0x120E0726: jne 0x120e0733 */
L_120E0728:
    /* cmp eax, edx */ /* 0x120E0728: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0733; /* 0x120E072A: jne 0x120e0733 */
L_120E072C:
    esi = ebx; /* 0x120E072C: mov esi, ebx */
    MEM32(ebp + (-0x44)) = ebx; /* 0x120E072E: mov dword ptr [ebp - 0x44], ebx */
    goto L_120E0739; /* 0x120E0731: jmp 0x120e0739 */
L_120E0733:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E0733: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E0735: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x44)) = esi; /* 0x120E0736: mov dword ptr [ebp - 0x44], esi */
L_120E0739:
    eax = MEM32(ebp + 0x1C); /* 0x120E0739: mov eax, dword ptr [ebp + 0x1c] */
    /* test LO8(eax), 1 */ /* 0x120E073C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E074D; /* 0x120E073E: jne 0x120e074d */
L_120E0740:
    /* test esi, esi */ /* 0x120E0740: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E074D; /* 0x120E0742: jne 0x120e074d */
L_120E0744:
    MEM32(ebp + (-0x64)) = 1; /* 0x120E0744: mov dword ptr [ebp - 0x64], 1 */
    goto L_120E078B; /* 0x120E074B: jmp 0x120e078b */
L_120E074D:
    MEM32(ebp + (-0x64)) = ebx; /* 0x120E074D: mov dword ptr [ebp - 0x64], ebx */
    goto L_120E078B; /* 0x120E0750: jmp 0x120e078b */
L_120E0752:
    eax = 0x8876086Cu; /* 0x120E0752: mov eax, 0x8876086c */
    goto L_120E0C7D; /* 0x120E0757: jmp 0x120e0c7d */
L_120E075C:
    eax = MEM32(ebp + 0x1C); /* 0x120E075C: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E075F: mov ecx, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x18)); /* 0x120E0762: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0765: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x120E0767: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x120E0769: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120E076C: mov edi, ebx */
    esi = ebx; /* 0x120E076E: mov esi, ebx */
    MEM32(ebp + (-0x64)) = eax; /* 0x120E0770: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E0773: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x120E0776: mov dword ptr [ebp - 0x5c], ebx */
    MEM32(ebp + (-0x58)) = edi; /* 0x120E0779: mov dword ptr [ebp - 0x58], edi */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x120E077C: mov dword ptr [ebp - 0x4c], ecx */
    MEM32(ebp + (-0x54)) = ecx; /* 0x120E077F: mov dword ptr [ebp - 0x54], ecx */
    MEM32(ebp + (-0x60)) = edx; /* 0x120E0782: mov dword ptr [ebp - 0x60], edx */
    MEM32(ebp + (-0x50)) = edx; /* 0x120E0785: mov dword ptr [ebp - 0x50], edx */
    MEM32(ebp + (-0x44)) = esi; /* 0x120E0788: mov dword ptr [ebp - 0x44], esi */
L_120E078B:
    edi = eax; /* 0x120E078B: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    edi = edi & 0x00010000u; /* 0x120E078D: and edi, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x70)) = edi; /* 0x120E0793: mov dword ptr [ebp - 0x70], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0994; /* 0x120E0796: je 0x120e0994 */
L_120E079C:
    eax = MEM32(ebp + (-0x34)); /* 0x120E079C: mov eax, dword ptr [ebp - 0x34] */
    esi = ebx; /* 0x120E079F: mov esi, ebx */
    MEM32(ebp + (-0x68)) = esi; /* 0x120E07A1: mov dword ptr [ebp - 0x68], esi */
    /* cmp eax, 0x31545844u */ /* 0x120E07A4: cmp eax, 0x31545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E07C7; /* 0x120E07A9: je 0x120e07c7 */
L_120E07AB:
    /* cmp eax, 0x32545844u */ /* 0x120E07AB: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E07C7; /* 0x120E07B0: je 0x120e07c7 */
L_120E07B2:
    /* cmp eax, 0x33545844u */ /* 0x120E07B2: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E07C7; /* 0x120E07B7: je 0x120e07c7 */
L_120E07B9:
    /* cmp eax, 0x34545844u */ /* 0x120E07B9: cmp eax, 0x34545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E07C7; /* 0x120E07BE: je 0x120e07c7 */
L_120E07C0:
    /* cmp eax, 0x35545844u */ /* 0x120E07C0: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E07DC; /* 0x120E07C5: jne 0x120e07dc */
L_120E07C7:
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x120E07C7: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(edx), 3 */ /* 0x120E07C9: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E07DC; /* 0x120E07CC: je 0x120e07dc */
L_120E07CE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E07CE: inc esi */
    _flag_k = FK_INC;
    eax = edx; /* 0x120E07CF: mov eax, edx */
    ecx = esi; /* 0x120E07D1: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x120E07D3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x120E07D3: shl eax, cl */
    /* test LO8(eax), 3 */ /* 0x120E07D5: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E07CE; /* 0x120E07D7: jne 0x120e07ce */
L_120E07D9:
    MEM32(ebp + (-0x68)) = esi; /* 0x120E07D9: mov dword ptr [ebp - 0x68], esi */
L_120E07DC:
    edi = MEM32(ebp + (-0x38)); /* 0x120E07DC: mov edi, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0x48)); /* 0x120E07DF: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(ecx); /* 0x120E07E2: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120E07E4: add edi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120E07E7: push edi */
    PUSH32(esp, ecx); /* 0x120E07E8: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120E07E9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x38)); /* 0x120E07EC: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E07EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x28)), 3 */ /* 0x120E07F1: cmp dword ptr [ebp - 0x28], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E07F5: push ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E07F6: sete al */
    esi = MEM32(edi); /* 0x120E07F9: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x120E07FB: add ecx, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x120E07FE: push ecx */
    edx = MEM32(esi); /* 0x120E07FF: mov edx, dword ptr [esi] */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x120E0801: mov dword ptr [ebp - 0x3c], ecx */
    ecx = MEM32(ebp + (-0x68)); /* 0x120E0804: mov ecx, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120E0807: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E080A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x120E080B: push dword ptr [ebp - 0x34] */
    eax = ecx + 0x1; /* 0x120E080E: lea eax, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x120E0811: push ebx */
    PUSH32(esp, eax); /* 0x120E0812: push eax */
    eax = MEM32(ebp + (-0x60)); /* 0x120E0813: mov eax, dword ptr [ebp - 0x60] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x120E0816: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x120E0816: shl eax, cl */
    PUSH32(esp, eax); /* 0x120E0818: push eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x120E0819: mov eax, dword ptr [ebp - 0x4c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x120E081C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x120E081C: shl eax, cl */
    PUSH32(esp, eax); /* 0x120E081E: push eax */
    PUSH32(esp, esi); /* 0x120E081F: push esi */
    RECOMP_ICALL(MEM32(edx + 0x5C)); /* 0x120E0820: call dword ptr [edx + 0x5c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x3C)); /* 0x120E0823: mov esi, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x40)) = eax; /* 0x120E0826: mov dword ptr [ebp - 0x40], eax */
    /* test eax, eax */ /* 0x120E0829: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E095A; /* 0x120E082B: js 0x120e095a */
L_120E0831:
    edx = MEM32(ebp + (-0x38)); /* 0x120E0831: mov edx, dword ptr [ebp - 0x38] */
    ecx = MEM32(esi); /* 0x120E0834: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x120E0836: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x120E0838: add edx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x120E083B: push edx */
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120E083C: push dword ptr [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x120E083F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x120E0840: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40)) = eax; /* 0x120E0843: mov dword ptr [ebp - 0x40], eax */
    /* test eax, eax */ /* 0x120E0846: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E095A; /* 0x120E0848: js 0x120e095a */
L_120E084E:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x120E084E: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0943; /* 0x120E0852: jne 0x120e0943 */
L_120E0858:
    PUSH32(esp, 1); /* 0x120E0858: push 1 */
    MEM32(ebp + (-0x40)) = ebx; /* 0x120E085A: mov dword ptr [ebp - 0x40], ebx */
    RECOMP_CALL(sub_12019381); /* 0x120E085D: call 0x12019381 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120E0862: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x120E0865: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120E0868: push dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_120E04BA); /* 0x120E086B: call 0x120e04ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E0870: push ebx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E0871: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_CALL(sub_12019381); /* 0x120E0874: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x120E0879: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_120E0943; /* 0x120E087D: jge 0x120e0943 */
L_120E0883:
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x120E0883: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E08C3; /* 0x120E0887: je 0x120e08c3 */
L_120E0889:
    eax = MEM32(ebp + (-0x38)); /* 0x120E0889: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(eax + 0x8); /* 0x120E088C: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x120E088F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E089F; /* 0x120E0891: je 0x120e089f */
L_120E0893:
    eax = MEM32(ecx); /* 0x120E0893: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0895: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0896: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120E0899:
    eax = MEM32(ebp + (-0x38)); /* 0x120E0899: mov eax, dword ptr [ebp - 0x38] */
    MEM32(eax + 0x8) = ebx; /* 0x120E089C: mov dword ptr [eax + 8], ebx */
L_120E089F:
    ecx = MEM32(esi); /* 0x120E089F: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120E08A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E08AD; /* 0x120E08A3: je 0x120e08ad */
L_120E08A5:
    eax = MEM32(ecx); /* 0x120E08A5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E08A7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E08A8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = ebx; /* 0x120E08AB: mov dword ptr [esi], ebx */
L_120E08AD:
    ecx = MEM32(edi); /* 0x120E08AD: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x120E08AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E08BB; /* 0x120E08B1: je 0x120e08bb */
L_120E08B3:
    eax = MEM32(ecx); /* 0x120E08B3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E08B5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E08B6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x120E08B9: mov dword ptr [edi], ebx */
L_120E08BB:
    eax = MEM32(ebp + (-0x3C)); /* 0x120E08BB: mov eax, dword ptr [ebp - 0x3c] */
    goto L_120E0C7D; /* 0x120E08BE: jmp 0x120e0c7d */
L_120E08C3:
    eax = MEM32(edi); /* 0x120E08C3: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120E08C5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x120E08C7: push ebx */
    edx = ebp + (-0x40); /* 0x120E08C8: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x120E08CB: push edx */
    PUSH32(esp, 1); /* 0x120E08CC: push 1 */
    PUSH32(esp, ebx); /* 0x120E08CE: push ebx */
    PUSH32(esp, ebx); /* 0x120E08CF: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x120E08D0: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x120E08D3: push dword ptr [ebp - 0x60] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x120E08D6: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x120E08D9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x70)); /* 0x120E08DA: call dword ptr [ecx + 0x70] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E08DD: mov dword ptr [ebp - 0x3c], eax */
    /* test eax, eax */ /* 0x120E08E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E08F6; /* 0x120E08E2: jns 0x120e08f6 */
L_120E08E4:
    eax = MEM32(ebp + (-0x38)); /* 0x120E08E4: mov eax, dword ptr [ebp - 0x38] */
    edx = MEM32(eax + 0x8); /* 0x120E08E7: mov edx, dword ptr [eax + 8] */
    /* test edx, edx */ /* 0x120E08EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E089F; /* 0x120E08EC: je 0x120e089f */
L_120E08EE:
    ecx = MEM32(edx); /* 0x120E08EE: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x120E08F0: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120E08F1: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120E0899; /* 0x120E08F4: jmp 0x120e0899 */
L_120E08F6:
    eax = MEM32(edi); /* 0x120E08F6: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120E08F8: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x120E08FA: push ebx */
    PUSH32(esp, ebx); /* 0x120E08FB: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x120E08FC: push dword ptr [ebp - 0x40] */
    PUSH32(esp, ebx); /* 0x120E08FF: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120E0900: push dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x120E0903: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x88)); /* 0x120E0904: call dword ptr [ecx + 0x88] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E090A: mov dword ptr [ebp - 0x3c], eax */
    /* test eax, eax */ /* 0x120E090D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E091F; /* 0x120E090F: jns 0x120e091f */
L_120E0911:
    ecx = MEM32(ebp + (-0x40)); /* 0x120E0911: mov ecx, dword ptr [ebp - 0x40] */
    edx = MEM32(ecx); /* 0x120E0914: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0916: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120E0917: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120E0889; /* 0x120E091A: jmp 0x120e0889 */
L_120E091F:
    eax = MEM32(ebp + (-0x38)); /* 0x120E091F: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x120E0922: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x120E0925: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_120E04BA); /* 0x120E0928: call 0x120e04ba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x40)); /* 0x120E092D: mov ecx, dword ptr [ebp - 0x40] */
    edx = MEM32(ecx); /* 0x120E0930: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0932: push ecx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E0933: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x120E0936: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x120E0939: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E0889; /* 0x120E093D: jl 0x120e0889 */
L_120E0943:
    eax = MEM32(ebp + (-0x38)); /* 0x120E0943: mov eax, dword ptr [ebp - 0x38] */
    eax = MEM32(eax + 0x8); /* 0x120E0946: mov eax, dword ptr [eax + 8] */
    edx = MEM32(ebp + (-0x18)); /* 0x120E0949: mov edx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E094C: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x44)); /* 0x120E094F: mov esi, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x120E0952: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E0955: mov eax, dword ptr [ebp + 0x1c] */
    goto L_120E099A; /* 0x120E0958: jmp 0x120e099a */
L_120E095A:
    eax = MEM32(ebp + (-0x38)); /* 0x120E095A: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(eax + 0x8); /* 0x120E095D: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x120E0960: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0970; /* 0x120E0962: je 0x120e0970 */
L_120E0964:
    eax = MEM32(ecx); /* 0x120E0964: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0966: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0967: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x120E096A: mov eax, dword ptr [ebp - 0x38] */
    MEM32(eax + 0x8) = ebx; /* 0x120E096D: mov dword ptr [eax + 8], ebx */
L_120E0970:
    ecx = MEM32(esi); /* 0x120E0970: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120E0972: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E097E; /* 0x120E0974: je 0x120e097e */
L_120E0976:
    eax = MEM32(ecx); /* 0x120E0976: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0978: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0979: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = ebx; /* 0x120E097C: mov dword ptr [esi], ebx */
L_120E097E:
    ecx = MEM32(edi); /* 0x120E097E: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x120E0980: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E098C; /* 0x120E0982: je 0x120e098c */
L_120E0984:
    eax = MEM32(ecx); /* 0x120E0984: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0986: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0987: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x120E098A: mov dword ptr [edi], ebx */
L_120E098C:
    eax = MEM32(ebp + (-0x40)); /* 0x120E098C: mov eax, dword ptr [ebp - 0x40] */
    goto L_120E0C7D; /* 0x120E098F: jmp 0x120e0c7d */
L_120E0994:
    edi = MEM32(ebp + (-0x48)); /* 0x120E0994: mov edi, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x4C)) = edi; /* 0x120E0997: mov dword ptr [ebp - 0x4c], edi */
L_120E099A:
    eax = (uint32_t)LO8(eax); /* 0x120E099A: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E099D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E099F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x120E09A0: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80u)); _flag_b = (uint32_t)((eax | 0x80u));
    eax = eax | 0x80u; /* 0x120E09A2: or eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E09A7: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E09A7: shl eax, 4 */
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x120E09AA: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = eax; /* 0x120E09AE: mov dword ptr [ebp - 0x40], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0A2E; /* 0x120E09B1: je 0x120e0a2e */
L_120E09B3:
    /* cmp MEM32(ebp + (-0x70)), 0 */ /* 0x120E09B3: cmp dword ptr [ebp - 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0A2E; /* 0x120E09B7: jne 0x120e0a2e */
L_120E09B9:
    /* test MEM32(ebp + (-0x2C)), 0x200u */ /* 0x120E09B9: test dword ptr [ebp - 0x2c], 0x200 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0A2E; /* 0x120E09C0: je 0x120e0a2e */
L_120E09C2:
    /* test MEM32(ebp + 0x1C), 0x00020000u */ /* 0x120E09C2: test dword ptr [ebp + 0x1c], 0x20000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E09DD; /* 0x120E09C9: je 0x120e09dd */
L_120E09CB:
    _flag_a = (uint32_t)((eax | 0x2000u)); _flag_b = (uint32_t)((eax | 0x2000u));
    eax = eax | 0x2000u; /* 0x120E09CB: or eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x120E09D0: mov esi, ebx */
    MEM32(ebp + (-0x40)) = eax; /* 0x120E09D2: mov dword ptr [ebp - 0x40], eax */
    MEM32(ebp + (-0x44)) = esi; /* 0x120E09D5: mov dword ptr [ebp - 0x44], esi */
    goto L_120E0AD3; /* 0x120E09D8: jmp 0x120e0ad3 */
L_120E09DD:
    PUSH32(esp, edi); /* 0x120E09DD: push edi */
    RECOMP_CALL(sub_12019381); /* 0x120E09DE: call 0x12019381 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x120E09E3: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(ecx); /* 0x120E09E6: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x6C); /* 0x120E09E8: lea edx, [ebp - 0x6c] */
    PUSH32(esp, edx); /* 0x120E09EB: push edx */
    PUSH32(esp, 0x12001A68u); /* 0x120E09EC: push 0x12001a68 */
    PUSH32(esp, ecx); /* 0x120E09F1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x120E09F2: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E09F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0A22; /* 0x120E09F7: js 0x120e0a22 */
L_120E09F9:
    eax = MEM32(ebp + (-0x6C)); /* 0x120E09F9: mov eax, dword ptr [ebp - 0x6c] */
    ecx = MEM32(eax); /* 0x120E09FC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E09FE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x120E09FF: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x120E0A02: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0A12; /* 0x120E0A04: jne 0x120e0a12 */
L_120E0A06:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x40)) | 0x2000u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x40)) | 0x2000u));
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) | 0x2000u; /* 0x120E0A06: or dword ptr [ebp - 0x40], 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x120E0A0D: mov esi, ebx */
    MEM32(ebp + (-0x44)) = esi; /* 0x120E0A0F: mov dword ptr [ebp - 0x44], esi */
L_120E0A12:
    ecx = MEM32(ebp + (-0x6C)); /* 0x120E0A12: mov ecx, dword ptr [ebp - 0x6c] */
    /* test ecx, ecx */ /* 0x120E0A15: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0A22; /* 0x120E0A17: je 0x120e0a22 */
L_120E0A19:
    eax = MEM32(ecx); /* 0x120E0A19: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0A1B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0A1C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = ebx; /* 0x120E0A1F: mov dword ptr [ebp - 0x6c], ebx */
L_120E0A22:
    PUSH32(esp, ebx); /* 0x120E0A22: push ebx */
    RECOMP_CALL(sub_12019381); /* 0x120E0A23: call 0x12019381 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x120E0A28: mov edx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E0A2B: mov ecx, dword ptr [ebp - 0x1c] */
L_120E0A2E:
    /* test esi, esi */ /* 0x120E0A2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0AC9; /* 0x120E0A30: je 0x120e0ac9 */
L_120E0A36:
    eax = MEM32(ebp + (-0x34)); /* 0x120E0A36: mov eax, dword ptr [ebp - 0x34] */
    esi = 0x34545844u; /* 0x120E0A39: mov esi, 0x34545844 */
    /* cmp eax, esi */ /* 0x120E0A3E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E0B2C; /* 0x120E0A40: jg 0x120e0b2c */
L_120E0A46:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0A6C; /* 0x120E0A46: je 0x120e0a6c */
L_120E0A48:
    /* cmp eax, 0x31545844u */ /* 0x120E0A48: cmp eax, 0x31545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0A6C; /* 0x120E0A4D: je 0x120e0a6c */
L_120E0A4F:
    /* cmp eax, 0x32545844u */ /* 0x120E0A4F: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0A6C; /* 0x120E0A54: je 0x120e0a6c */
L_120E0A56:
    /* cmp eax, 0x32595559u */ /* 0x120E0A56: cmp eax, 0x32595559 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0B61; /* 0x120E0A5B: je 0x120e0b61 */
L_120E0A61:
    /* cmp eax, 0x33545844u */ /* 0x120E0A61: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0B4C; /* 0x120E0A66: jne 0x120e0b4c */
L_120E0A6C:
    eax = MEM32(ebp + (-0x5C)); /* 0x120E0A6C: mov eax, dword ptr [ebp - 0x5c] */
    esi = MEM32(ebp + (-0x54)); /* 0x120E0A6F: mov esi, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E0A72: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E0A75: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E0A78: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120E0A7B: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E0A7E: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = eax; /* 0x120E0A81: mov dword ptr [ebp - 0x60], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E0A84: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x120E0A87: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x120E0A8A: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x120E0A8D: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x120E0A90: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E0A93: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x120E0A96: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E0A99: mov dword ptr [ebp - 8], eax */
    /* cmp esi, ecx */ /* 0x120E0A9C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E0AA5; /* 0x120E0A9E: jbe 0x120e0aa5 */
L_120E0AA0:
    esi = ecx; /* 0x120E0AA0: mov esi, ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x120E0AA2: mov dword ptr [ebp - 0xc], esi */
L_120E0AA5:
    /* cmp eax, edx */ /* 0x120E0AA5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E0AAE; /* 0x120E0AA7: jbe 0x120e0aae */
L_120E0AA9:
    eax = edx; /* 0x120E0AA9: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E0AAB: mov dword ptr [ebp - 8], eax */
L_120E0AAE:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x120E0AAE: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0AB2: jne 0x120e0ac4 */
L_120E0AB4:
    /* cmp esi, ecx */ /* 0x120E0AB4: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0AB6: jne 0x120e0ac4 */
L_120E0AB8:
    /* cmp MEM32(ebp + (-0x60)), 0 */ /* 0x120E0AB8: cmp dword ptr [ebp - 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0ABC: jne 0x120e0ac4 */
L_120E0ABE:
    esi = ebx; /* 0x120E0ABE: mov esi, ebx */
    /* cmp eax, edx */ /* 0x120E0AC0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0AC6; /* 0x120E0AC2: je 0x120e0ac6 */
L_120E0AC4:
    esi = edi; /* 0x120E0AC4: mov esi, edi */
L_120E0AC6:
    MEM32(ebp + (-0x44)) = esi; /* 0x120E0AC6: mov dword ptr [ebp - 0x44], esi */
L_120E0AC9:
    /* cmp MEM32(ebp + (-0x70)), 0 */ /* 0x120E0AC9: cmp dword ptr [ebp - 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0BB9; /* 0x120E0ACD: jne 0x120e0bb9 */
L_120E0AD3:
    PUSH32(esp, edi); /* 0x120E0AD3: push edi */
    RECOMP_CALL(sub_12019381); /* 0x120E0AD4: call 0x12019381 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x120E0AD9: push dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x4C)); /* 0x120E0ADC: mov edx, dword ptr [ebp - 0x4c] */
    ecx = MEM32(edx); /* 0x120E0ADF: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E0AE1: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E0AE3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ebp + (-0x14); /* 0x120E0AE5: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120E0AE8: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120E0AEA: push eax */
    eax = ebp + (-0x84); /* 0x120E0AEB: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E0AF1: push eax */
    PUSH32(esp, edx); /* 0x120E0AF2: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x120E0AF3: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E0AF6: push ebx */
    esi = eax; /* 0x120E0AF7: mov esi, eax */
    RECOMP_CALL(sub_12019381); /* 0x120E0AF9: call 0x12019381 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x120E0AFE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E0BE2; /* 0x120E0B00: jns 0x120e0be2 */
L_120E0B06:
    eax = MEM32(ebp + 0x1C); /* 0x120E0B06: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x38)); /* 0x120E0B09: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)((eax | 0x00010000u)); _flag_b = (uint32_t)((eax | 0x00010000u));
    eax = eax | 0x00010000u; /* 0x120E0B0C: or eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120E0B11: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E0B12: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + (-0x74)); /* 0x120E0B15: mov eax, dword ptr [ebp - 0x74] */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x120E0B18: push dword ptr [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x120E0B1B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120E0B1C: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x120E0B1F: push dword ptr [ebp - 0x78] */
    RECOMP_CALL(sub_120E069C); /* 0x120E0B22: call 0x120e069c */
    RECOMP_FLAGS_IN();
    goto L_120E0C7D; /* 0x120E0B27: jmp 0x120e0c7d */
L_120E0B2C:
    /* cmp eax, 0x35545844u */ /* 0x120E0B2C: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0A6C; /* 0x120E0B31: je 0x120e0a6c */
L_120E0B37:
    /* cmp eax, 0x42475247u */ /* 0x120E0B37: cmp eax, 0x42475247 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42475247u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0B61; /* 0x120E0B3C: je 0x120e0b61 */
L_120E0B3E:
    /* cmp eax, 0x47424752u */ /* 0x120E0B3E: cmp eax, 0x47424752 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47424752u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0B61; /* 0x120E0B43: je 0x120e0b61 */
L_120E0B45:
    /* cmp eax, 0x59565955u */ /* 0x120E0B45: cmp eax, 0x59565955 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0B61; /* 0x120E0B4A: je 0x120e0b61 */
L_120E0B4C:
    esi = ebp + (-0x5C); /* 0x120E0B4C: lea esi, [ebp - 0x5c] */
    edi = ebp + (-0x14); /* 0x120E0B4F: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0B52: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0B53: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0B54: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0B55: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x44)); /* 0x120E0B56: mov esi, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E0B59: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E0B5B: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120E0AC9; /* 0x120E0B5C: jmp 0x120e0ac9 */
L_120E0B61:
    eax = MEM32(ebp + (-0x5C)); /* 0x120E0B61: mov eax, dword ptr [ebp - 0x5c] */
    esi = MEM32(ebp + (-0x58)); /* 0x120E0B64: mov esi, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x120E0B67: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x120E0B6A: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E0B6D: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x120E0B70: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E0B73: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = esi; /* 0x120E0B74: mov dword ptr [ebp - 0x10], esi */
    esi = MEM32(ebp + (-0x50)); /* 0x120E0B77: mov esi, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x120E0B7A: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x120E0B7D: mov dword ptr [ebp - 8], esi */
    esi = MEM32(ebp + (-0x58)); /* 0x120E0B80: mov esi, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E0B83: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, ecx */ /* 0x120E0B86: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E0B8F; /* 0x120E0B88: jbe 0x120e0b8f */
L_120E0B8A:
    eax = ecx; /* 0x120E0B8A: mov eax, ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E0B8C: mov dword ptr [ebp - 0xc], eax */
L_120E0B8F:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x120E0B8F: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0B93: jne 0x120e0ac4 */
L_120E0B99:
    /* cmp eax, ecx */ /* 0x120E0B99: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0B9B: jne 0x120e0ac4 */
L_120E0BA1:
    /* test esi, esi */ /* 0x120E0BA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0BA3: jne 0x120e0ac4 */
L_120E0BA9:
    /* cmp MEM32(ebp + (-0x50)), edx */ /* 0x120E0BA9: cmp dword ptr [ebp - 0x50], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0AC4; /* 0x120E0BAC: jne 0x120e0ac4 */
L_120E0BB2:
    esi = ebx; /* 0x120E0BB2: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_120E0AC6; /* 0x120E0BB4: jmp 0x120e0ac6 */
L_120E0BB9:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x120E0BB9: push dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x4C)); /* 0x120E0BBC: mov edx, dword ptr [ebp - 0x4c] */
    ecx = MEM32(edx); /* 0x120E0BBF: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E0BC1: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E0BC3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ebp + (-0x14); /* 0x120E0BC5: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120E0BC8: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120E0BCA: push eax */
    eax = ebp + (-0x84); /* 0x120E0BCB: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E0BD1: push eax */
    PUSH32(esp, edx); /* 0x120E0BD2: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x120E0BD3: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x44)); /* 0x120E0BD6: mov esi, dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x120E0BD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E0BE5; /* 0x120E0BDB: jns 0x120e0be5 */
L_120E0BDD:
    goto L_120E0C7D; /* 0x120E0BDD: jmp 0x120e0c7d */
L_120E0BE2:
    esi = MEM32(ebp + (-0x44)); /* 0x120E0BE2: mov esi, dword ptr [ebp - 0x44] */
L_120E0BE5:
    /* test esi, esi */ /* 0x120E0BE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0C0D; /* 0x120E0BE7: je 0x120e0c0d */
L_120E0BE9:
    eax = MEM32(ebp + (-0x5C)); /* 0x120E0BE9: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x120E0BEC: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E0BEF: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x120E0BF2: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x120E0BF5: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = eax; /* 0x120E0BF8: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x120E0BFB: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x120E0BFE: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x58)) = eax; /* 0x120E0C01: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x120E0C04: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x120E0C07: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = eax; /* 0x120E0C0A: mov dword ptr [ebp - 0x50], eax */
L_120E0C0D:
    ecx = MEM32(ebp + (-0x78)); /* 0x120E0C0D: mov ecx, dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0x80)); /* 0x120E0C10: mov eax, dword ptr [ebp - 0x80] */
    MEM32(ecx) = eax; /* 0x120E0C13: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x120E0C15: mov eax, dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + (-0x38)); /* 0x120E0C18: mov edx, dword ptr [ebp - 0x38] */
    MEM32(ecx + 0x4) = eax; /* 0x120E0C1B: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x84)); /* 0x120E0C1E: mov eax, dword ptr [ebp - 0x84] */
    MEM32(ecx + 0x8) = eax; /* 0x120E0C24: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x120E0C27: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ecx + 0x24) = edi; /* 0x120E0C2A: mov dword ptr [ecx + 0x24], edi */
    MEM32(ecx + 0x18) = eax; /* 0x120E0C2D: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x120E0C30: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ecx + 0x1C) = eax; /* 0x120E0C33: mov dword ptr [ecx + 0x1c], eax */
    edi = ecx + 0x28; /* 0x120E0C36: lea edi, [ecx + 0x28] */
    esi = ebp + (-0x5C); /* 0x120E0C39: lea esi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0C3C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0C3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E0C3F: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0C40: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ecx + 0x3C) = eax; /* 0x120E0C41: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x40) = eax; /* 0x120E0C44: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E0C47: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x4C) = eax; /* 0x120E0C4A: mov dword ptr [ecx + 0x4c], eax */
    eax = MEM32(ebp + (-0x74)); /* 0x120E0C4D: mov eax, dword ptr [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0C50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ecx + 0x50) = eax; /* 0x120E0C51: mov dword ptr [ecx + 0x50], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E0C54: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0xC) = ebx; /* 0x120E0C57: mov dword ptr [ecx + 0xc], ebx */
    MEM32(ecx + 0x10) = ebx; /* 0x120E0C5A: mov dword ptr [ecx + 0x10], ebx */
    MEM32(ecx + 0x14) = ebx; /* 0x120E0C5D: mov dword ptr [ecx + 0x14], ebx */
    MEM32(ecx + 0x20) = ebx; /* 0x120E0C60: mov dword ptr [ecx + 0x20], ebx */
    MEM32(ecx + 0x38) = ebx; /* 0x120E0C63: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x44) = ebx; /* 0x120E0C66: mov dword ptr [ecx + 0x44], ebx */
    MEM32(ecx + 0x48) = ebx; /* 0x120E0C69: mov dword ptr [ecx + 0x48], ebx */
    ecx = MEM32(ebp + (-0x48)); /* 0x120E0C6C: mov ecx, dword ptr [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E0C6F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edx + 0x4) = ecx; /* 0x120E0C70: mov dword ptr [edx + 4], ecx */
    MEM32(edx) = eax; /* 0x120E0C73: mov dword ptr [edx], eax */
    eax = MEM32(ecx); /* 0x120E0C75: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0C77: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120E0C78: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0C7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0C7D:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E0C7D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E0C80: pop edi */
    esi = POP32_VAL(esp); /* 0x120E0C81: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E0C82: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E0C84: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E0C85: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E0C8A: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E0C8B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E0C93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E0C93u);

    goto L_120E0C93;
L_120E0669:
    edi = edi; /* 0x120E0669: mov edi, edi */
    PUSH32(esp, esi); /* 0x120E066B: push esi */
    esi = ecx; /* 0x120E066C: mov esi, ecx */
    ecx = MEM32(esi); /* 0x120E066E: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120E0670: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0689; /* 0x120E0672: je 0x120e0689 */
L_120E0674:
    eax = MEM32(ecx); /* 0x120E0674: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0676: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x120E0677: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x120E067A: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120E067C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0689; /* 0x120E067E: je 0x120e0689 */
L_120E0680:
    eax = MEM32(ecx); /* 0x120E0680: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0682: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0683: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120E0686: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0689:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0689: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E068B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E068C: ret  */
L_120E0C93:
    RECOMP_BACKEDGE();
    goto L_120E0669; /* 0x120E0C93: jmp 0x120e0669 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120E0C9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E0C9Du);

L_120E0C9D:
    edi = edi; /* 0x120E0C9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E0C9F: push ebp */
    ebp = esp; /* 0x120E0CA0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x120E0CA2: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E0CA5: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E0CAA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E0CAC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E0CAF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E0CB2: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E0CB3: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E0CB6: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E0CB7: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E0CBA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E0CBB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = ecx; /* 0x120E0CBD: mov dword ptr [ebp - 0x64], ecx */
    MEM32(ebp + (-0x60)) = eax; /* 0x120E0CC0: mov dword ptr [ebp - 0x60], eax */
    MEM32(ebp + (-0x58)) = ebx; /* 0x120E0CC3: mov dword ptr [ebp - 0x58], ebx */
    /* cmp MEM32(ecx), edi */ /* 0x120E0CC6: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0CCF; /* 0x120E0CC8: je 0x120e0ccf */
L_120E0CCA:
    RECOMP_CALL(sub_120E0669); /* 0x120E0CCA: call 0x120e0669 */
    RECOMP_FLAGS_IN();
L_120E0CCF:
    eax = MEM32(ebx); /* 0x120E0CCF: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x38); /* 0x120E0CD1: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x120E0CD4: push ecx */
    PUSH32(esp, ebx); /* 0x120E0CD5: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x120E0CD6: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x28)); /* 0x120E0CD9: mov edx, dword ptr [ebp - 0x28] */
    /* test esi, esi */ /* 0x120E0CDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0D57; /* 0x120E0CDE: je 0x120e0d57 */
L_120E0CE0:
    PUSH32(esp, 6); /* 0x120E0CE0: push 6 */
    ecx = POP32_VAL(esp); /* 0x120E0CE2: pop ecx */
    edi = ebp + (-0x50); /* 0x120E0CE3: lea edi, [ebp - 0x50] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120E0CE6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x48)); /* 0x120E0CE8: mov eax, dword ptr [ebp - 0x48] */
    /* cmp eax, edx */ /* 0x120E0CEB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0CED: ja 0x120e0d4d */
L_120E0CEF:
    /* cmp MEM32(ebp + (-0x50)), eax */ /* 0x120E0CEF: cmp dword ptr [ebp - 0x50], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0CF2: ja 0x120e0d4d */
L_120E0CF4:
    edi = MEM32(ebp + (-0x24)); /* 0x120E0CF4: mov edi, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x44)); /* 0x120E0CF7: mov eax, dword ptr [ebp - 0x44] */
    /* cmp eax, edi */ /* 0x120E0CFA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0CFC: ja 0x120e0d4d */
L_120E0CFE:
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x120E0CFE: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0D01: ja 0x120e0d4d */
L_120E0D03:
    esi = MEM32(ebp + (-0x3C)); /* 0x120E0D03: mov esi, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x20)); /* 0x120E0D06: mov ebx, dword ptr [ebp - 0x20] */
    /* cmp esi, ebx */ /* 0x120E0D09: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0D0B: ja 0x120e0d4d */
L_120E0D0D:
    ecx = MEM32(ebp + (-0x40)); /* 0x120E0D0D: mov ecx, dword ptr [ebp - 0x40] */
    /* cmp ecx, esi */ /* 0x120E0D10: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0D12: ja 0x120e0d4d */
L_120E0D14:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x120E0D14: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D18: jne 0x120e0d35 */
L_120E0D1A:
    /* cmp MEM32(ebp + (-0x48)), edx */ /* 0x120E0D1A: cmp dword ptr [ebp - 0x48], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D1D: jne 0x120e0d35 */
L_120E0D1F:
    /* cmp MEM32(ebp + (-0x4C)), 0 */ /* 0x120E0D1F: cmp dword ptr [ebp - 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D23: jne 0x120e0d35 */
L_120E0D25:
    /* cmp eax, edi */ /* 0x120E0D25: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D27: jne 0x120e0d35 */
L_120E0D29:
    /* test ecx, ecx */ /* 0x120E0D29: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D2B: jne 0x120e0d35 */
L_120E0D2D:
    /* cmp esi, ebx */ /* 0x120E0D2D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D35; /* 0x120E0D2F: jne 0x120e0d35 */
L_120E0D31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0D31: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E0D38; /* 0x120E0D33: jmp 0x120e0d38 */
L_120E0D35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0D35: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E0D37: inc ebx */
    _flag_k = FK_INC;
L_120E0D38:
    ecx = MEM32(ebp + 0x1C); /* 0x120E0D38: mov ecx, dword ptr [ebp + 0x1c] */
    /* test LO8(ecx), 1 */ /* 0x120E0D3B: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0D49; /* 0x120E0D3E: jne 0x120e0d49 */
L_120E0D40:
    /* test ebx, ebx */ /* 0x120E0D40: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0D49; /* 0x120E0D42: jne 0x120e0d49 */
L_120E0D44:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0D44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E0D46: inc eax */
    _flag_k = FK_INC;
    goto L_120E0D7B; /* 0x120E0D47: jmp 0x120e0d7b */
L_120E0D49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0D49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E0D7B; /* 0x120E0D4B: jmp 0x120e0d7b */
L_120E0D4D:
    eax = 0x8876086Cu; /* 0x120E0D4D: mov eax, 0x8876086c */
    goto L_120E0E41; /* 0x120E0D52: jmp 0x120e0e41 */
L_120E0D57:
    ecx = MEM32(ebp + 0x1C); /* 0x120E0D57: mov ecx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + (-0x20)); /* 0x120E0D5A: mov esi, dword ptr [ebp - 0x20] */
    eax = ecx; /* 0x120E0D5D: mov eax, ecx */
    MEM32(ebp + (-0x50)) = edi; /* 0x120E0D5F: mov dword ptr [ebp - 0x50], edi */
    MEM32(ebp + (-0x4C)) = edi; /* 0x120E0D62: mov dword ptr [ebp - 0x4c], edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x120E0D65: mov dword ptr [ebp - 0x40], edi */
    edi = MEM32(ebp + (-0x24)); /* 0x120E0D68: mov edi, dword ptr [ebp - 0x24] */
    eax = ~eax; /* 0x120E0D6B: not eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0D6D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = edx; /* 0x120E0D6F: mov dword ptr [ebp - 0x48], edx */
    MEM32(ebp + (-0x44)) = edi; /* 0x120E0D72: mov dword ptr [ebp - 0x44], edi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x120E0D75: mov dword ptr [ebp - 0x3c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x120E0D78: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0D7B:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x120E0D7B: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0D8A; /* 0x120E0D7F: jne 0x120e0d8a */
L_120E0D81:
    /* test MEM32(ebp + (-0x30)), 0x200u */ /* 0x120E0D81: test dword ptr [ebp - 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0D4D; /* 0x120E0D88: je 0x120e0d4d */
L_120E0D8A:
    esi = (uint32_t)LO8(ecx); /* 0x120E0D8A: movzx esi, cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x120E0D8D: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | 0x80u)); _flag_b = (uint32_t)((esi | 0x80u));
    esi = esi | 0x80u; /* 0x120E0D90: or esi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x120E0D96: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x120E0D96: shl esi, 4 */
    MEM32(ebp + (-0x54)) = esi; /* 0x120E0D99: mov dword ptr [ebp - 0x54], esi */
    /* test eax, eax */ /* 0x120E0D9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0EA6; /* 0x120E0D9E: je 0x120e0ea6 */
L_120E0DA4:
    /* test MEM32(ebp + (-0x30)), 0x200u */ /* 0x120E0DA4: test dword ptr [ebp - 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0EA6; /* 0x120E0DAB: je 0x120e0ea6 */
L_120E0DB1:
    /* test ecx, 0x00020000u */ /* 0x120E0DB1: test ecx, 0x20000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0E52; /* 0x120E0DB7: je 0x120e0e52 */
L_120E0DBD:
    _flag_a = (uint32_t)((esi | 0x2000u)); _flag_b = (uint32_t)((esi | 0x2000u));
    esi = esi | 0x2000u; /* 0x120E0DBD: or esi, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0DC3:
    ebx = MEM32(ebp + (-0x58)); /* 0x120E0DC3: mov ebx, dword ptr [ebp - 0x58] */
    eax = MEM32(ebx); /* 0x120E0DC6: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x120E0DC8: push esi */
    PUSH32(esp, 0); /* 0x120E0DC9: push 0 */
    ecx = ebp + (-0x74); /* 0x120E0DCB: lea ecx, [ebp - 0x74] */
    PUSH32(esp, ecx); /* 0x120E0DCE: push ecx */
    PUSH32(esp, ebx); /* 0x120E0DCF: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x120E0DD0: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E0DD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0E41; /* 0x120E0DD5: js 0x120e0e41 */
L_120E0DD7:
    edx = MEM32(ebp + (-0x60)); /* 0x120E0DD7: mov edx, dword ptr [ebp - 0x60] */
    eax = MEM32(ebp + (-0x6C)); /* 0x120E0DDA: mov eax, dword ptr [ebp - 0x6c] */
    MEM32(edx) = eax; /* 0x120E0DDD: mov dword ptr [edx], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x120E0DDF: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(edx + 0x44)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x44) = MEM32(edx + 0x44) & 0; /* 0x120E0DE2: and dword ptr [edx + 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x48) = MEM32(edx + 0x48) & 0; /* 0x120E0DE6: and dword ptr [edx + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x4) = eax; /* 0x120E0DEA: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + (-0x74)); /* 0x120E0DED: mov eax, dword ptr [ebp - 0x74] */
    MEM32(edx + 0x8) = eax; /* 0x120E0DF0: mov dword ptr [edx + 8], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x120E0DF3: mov eax, dword ptr [ebp - 0x70] */
    MEM32(edx + 0xC) = eax; /* 0x120E0DF6: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x120E0DF9: mov eax, dword ptr [ebp - 0x28] */
    MEM32(edx + 0x18) = eax; /* 0x120E0DFC: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x120E0DFF: mov eax, dword ptr [ebp - 0x24] */
    MEM32(edx + 0x1C) = eax; /* 0x120E0E02: mov dword ptr [edx + 0x1c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x120E0E05: mov eax, dword ptr [ebp - 0x20] */
    MEM32(edx + 0x24) = eax; /* 0x120E0E08: mov dword ptr [edx + 0x24], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E0E0B: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E0E0E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x4C) = eax; /* 0x120E0E10: mov dword ptr [edx + 0x4c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E0E13: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x10) = ecx; /* 0x120E0E16: mov dword ptr [edx + 0x10], ecx */
    MEM32(edx + 0x14) = ecx; /* 0x120E0E19: mov dword ptr [edx + 0x14], ecx */
    MEM32(edx + 0x20) = ecx; /* 0x120E0E1C: mov dword ptr [edx + 0x20], ecx */
    PUSH32(esp, 6); /* 0x120E0E1F: push 6 */
    MEM32(edx + 0x50) = eax; /* 0x120E0E21: mov dword ptr [edx + 0x50], eax */
    eax = MEM32(ebp + (-0x64)); /* 0x120E0E24: mov eax, dword ptr [ebp - 0x64] */
    ecx = POP32_VAL(esp); /* 0x120E0E27: pop ecx */
    edi = edx + 0x28; /* 0x120E0E28: lea edi, [edx + 0x28] */
    esi = ebp + (-0x50); /* 0x120E0E2B: lea esi, [ebp - 0x50] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120E0E2E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edx + 0x40) = 1; /* 0x120E0E30: mov dword ptr [edx + 0x40], 1 */
    MEM32(eax) = ebx; /* 0x120E0E37: mov dword ptr [eax], ebx */
    eax = MEM32(ebx); /* 0x120E0E39: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x120E0E3B: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120E0E3C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E0E3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0E41:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E0E41: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E0E44: pop edi */
    esi = POP32_VAL(esp); /* 0x120E0E45: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E0E46: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E0E48: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E0E49: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E0E4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E0E4F: ret 0x18 */
L_120E0E52:
    PUSH32(esp, 1); /* 0x120E0E52: push 1 */
    RECOMP_CALL(sub_12019381); /* 0x120E0E54: call 0x12019381 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x58)); /* 0x120E0E59: mov ecx, dword ptr [ebp - 0x58] */
    eax = MEM32(ecx); /* 0x120E0E5C: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x5C); /* 0x120E0E5E: lea edx, [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x120E0E61: push edx */
    PUSH32(esp, 0x12001A78u); /* 0x120E0E62: push 0x12001a78 */
    PUSH32(esp, ecx); /* 0x120E0E67: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x120E0E68: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E0E6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0E99; /* 0x120E0E6D: js 0x120e0e99 */
L_120E0E6F:
    eax = MEM32(ebp + (-0x5C)); /* 0x120E0E6F: mov eax, dword ptr [ebp - 0x5c] */
    ecx = MEM32(eax); /* 0x120E0E72: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E0E74: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x120E0E75: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x120E0E78: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0E88; /* 0x120E0E7B: jne 0x120e0e88 */
L_120E0E7D:
    _flag_a = (uint32_t)((esi | 0x2000u)); _flag_b = (uint32_t)((esi | 0x2000u));
    esi = esi | 0x2000u; /* 0x120E0E7D: or esi, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x54)) = esi; /* 0x120E0E83: mov dword ptr [ebp - 0x54], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0E86: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0E88:
    ecx = MEM32(ebp + (-0x5C)); /* 0x120E0E88: mov ecx, dword ptr [ebp - 0x5c] */
    /* test ecx, ecx */ /* 0x120E0E8B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0E99; /* 0x120E0E8D: je 0x120e0e99 */
L_120E0E8F:
    eax = MEM32(ecx); /* 0x120E0E8F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E0E91: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E0E92: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0; /* 0x120E0E95: and dword ptr [ebp - 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E0E99:
    PUSH32(esp, 0); /* 0x120E0E99: push 0 */
    RECOMP_CALL(sub_12019381); /* 0x120E0E9B: call 0x12019381 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24)); /* 0x120E0EA0: mov edi, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x28)); /* 0x120E0EA3: mov edx, dword ptr [ebp - 0x28] */
L_120E0EA6:
    /* test ebx, ebx */ /* 0x120E0EA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0DC3; /* 0x120E0EA8: je 0x120e0dc3 */
L_120E0EAE:
    eax = MEM32(ebp + (-0x38)); /* 0x120E0EAE: mov eax, dword ptr [ebp - 0x38] */
    ecx = 0x34545844u; /* 0x120E0EB1: mov ecx, 0x34545844 */
    /* cmp eax, ecx */ /* 0x120E0EB6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E0FB7; /* 0x120E0EB8: jg 0x120e0fb7 */
L_120E0EBE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0EE4; /* 0x120E0EBE: je 0x120e0ee4 */
L_120E0EC0:
    /* cmp eax, 0x31545844u */ /* 0x120E0EC0: cmp eax, 0x31545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0EE4; /* 0x120E0EC5: je 0x120e0ee4 */
L_120E0EC7:
    /* cmp eax, 0x32545844u */ /* 0x120E0EC7: cmp eax, 0x32545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0EE4; /* 0x120E0ECC: je 0x120e0ee4 */
L_120E0ECE:
    /* cmp eax, 0x32595559u */ /* 0x120E0ECE: cmp eax, 0x32595559 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0FEA; /* 0x120E0ED3: je 0x120e0fea */
L_120E0ED9:
    /* cmp eax, 0x33545844u */ /* 0x120E0ED9: cmp eax, 0x33545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0FD7; /* 0x120E0EDE: jne 0x120e0fd7 */
L_120E0EE4:
    eax = MEM32(ebp + (-0x50)); /* 0x120E0EE4: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x48)); /* 0x120E0EE7: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x120E0EEA: push -4 */
    ebx = POP32_VAL(esp); /* 0x120E0EEC: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x120E0EED: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x54)) = eax; /* 0x120E0EEF: mov dword ptr [ebp - 0x54], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E0EF2: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x120E0EF5: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x120E0EF8: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x120E0EFA: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E0EFD: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x120E0F00: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x120E0F03: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x120E0F06: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x120E0F08: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x120E0F0B: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x40)); /* 0x120E0F0D: mov ebx, dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E0F10: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x3C)); /* 0x120E0F13: mov ebx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E0F16: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E0F19: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E0F1C: mov dword ptr [ebp - 8], ebx */
    /* cmp ecx, edx */ /* 0x120E0F1F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E0F28; /* 0x120E0F21: jbe 0x120e0f28 */
L_120E0F23:
    ecx = edx; /* 0x120E0F23: mov ecx, edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E0F25: mov dword ptr [ebp - 0x14], ecx */
L_120E0F28:
    /* cmp eax, edi */ /* 0x120E0F28: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E0F31; /* 0x120E0F2A: jbe 0x120e0f31 */
L_120E0F2C:
    eax = edi; /* 0x120E0F2C: mov eax, edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E0F2E: mov dword ptr [ebp - 0x10], eax */
L_120E0F31:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x120E0F31: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F54; /* 0x120E0F35: jne 0x120e0f54 */
L_120E0F37:
    /* cmp ecx, edx */ /* 0x120E0F37: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F54; /* 0x120E0F39: jne 0x120e0f54 */
L_120E0F3B:
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x120E0F3B: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F54; /* 0x120E0F3F: jne 0x120e0f54 */
L_120E0F41:
    /* cmp eax, edi */ /* 0x120E0F41: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F54; /* 0x120E0F43: jne 0x120e0f54 */
L_120E0F45:
    /* cmp MEM32(ebp + (-0x40)), 0 */ /* 0x120E0F45: cmp dword ptr [ebp - 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F54; /* 0x120E0F49: jne 0x120e0f54 */
L_120E0F4B:
    /* cmp ebx, MEM32(ebp + (-0x20)) */ /* 0x120E0F4B: cmp ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0DC3; /* 0x120E0F4E: je 0x120e0dc3 */
L_120E0F54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E0F54: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E0F56: inc ebx */
    _flag_k = FK_INC;
L_120E0F57:
    /* test ebx, ebx */ /* 0x120E0F57: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E0DC3; /* 0x120E0F59: je 0x120e0dc3 */
L_120E0F5F:
    ebx = MEM32(ebp + (-0x3C)); /* 0x120E0F5F: mov ebx, dword ptr [ebp - 0x3c] */
L_120E0F62:
    edi = MEM32(ebp + (-0x40)); /* 0x120E0F62: mov edi, dword ptr [ebp - 0x40] */
L_120E0F65:
    ecx = MEM32(ebp + (-0x58)); /* 0x120E0F65: mov ecx, dword ptr [ebp - 0x58] */
    eax = MEM32(ecx); /* 0x120E0F68: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120E0F6A: push esi */
    edx = ebp + (-0x1C); /* 0x120E0F6B: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x120E0F6E: push edx */
    edx = ebp + (-0x74); /* 0x120E0F6F: lea edx, [ebp - 0x74] */
    PUSH32(esp, edx); /* 0x120E0F72: push edx */
    PUSH32(esp, ecx); /* 0x120E0F73: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x120E0F74: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E0F77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E0E41; /* 0x120E0F79: js 0x120e0e41 */
L_120E0F7F:
    eax = MEM32(ebp + (-0x50)); /* 0x120E0F7F: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x120E0F82: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0xC)); /* 0x120E0F85: sub edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = eax; /* 0x120E0F88: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x120E0F8B: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x120E0F8E: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = edi; /* 0x120E0F91: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x48)) = eax; /* 0x120E0F94: mov dword ptr [ebp - 0x48], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x120E0F97: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x120E0F9A: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4C)) = eax; /* 0x120E0F9D: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x120E0FA0: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x120E0FA3: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0xC)); /* 0x120E0FA6: sub ebx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = eax; /* 0x120E0FA9: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x120E0FAC: mov dword ptr [ebp - 0x3c], ebx */
    ebx = MEM32(ebp + (-0x58)); /* 0x120E0FAF: mov ebx, dword ptr [ebp - 0x58] */
    RECOMP_BACKEDGE();
    goto L_120E0DD7; /* 0x120E0FB2: jmp 0x120e0dd7 */
L_120E0FB7:
    /* cmp eax, 0x35545844u */ /* 0x120E0FB7: cmp eax, 0x35545844 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0EE4; /* 0x120E0FBC: je 0x120e0ee4 */
L_120E0FC2:
    /* cmp eax, 0x42475247u */ /* 0x120E0FC2: cmp eax, 0x42475247 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x42475247u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0FEA; /* 0x120E0FC7: je 0x120e0fea */
L_120E0FC9:
    /* cmp eax, 0x47424752u */ /* 0x120E0FC9: cmp eax, 0x47424752 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47424752u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0FEA; /* 0x120E0FCE: je 0x120e0fea */
L_120E0FD0:
    /* cmp eax, 0x59565955u */ /* 0x120E0FD0: cmp eax, 0x59565955 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0FEA; /* 0x120E0FD5: je 0x120e0fea */
L_120E0FD7:
    PUSH32(esp, 6); /* 0x120E0FD7: push 6 */
    ecx = POP32_VAL(esp); /* 0x120E0FD9: pop ecx */
    esi = ebp + (-0x50); /* 0x120E0FDA: lea esi, [ebp - 0x50] */
    edi = ebp + (-0x1C); /* 0x120E0FDD: lea edi, [ebp - 0x1c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120E0FE0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x54)); /* 0x120E0FE2: mov esi, dword ptr [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_120E0F57; /* 0x120E0FE5: jmp 0x120e0f57 */
L_120E0FEA:
    ebx = MEM32(ebp + (-0x4C)); /* 0x120E0FEA: mov ebx, dword ptr [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x50)); /* 0x120E0FED: mov ecx, dword ptr [ebp - 0x50] */
    eax = MEM32(ebp + (-0x48)); /* 0x120E0FF0: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120E0FF3: mov dword ptr [ebp - 0x18], ebx */
    ebx = MEM32(ebp + (-0x44)); /* 0x120E0FF6: mov ebx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x120E0FF9: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E0FFC: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + (-0x40)); /* 0x120E0FFF: mov ebx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E1002: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x120E1003: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E1006: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x3C)); /* 0x120E1009: mov ebx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120E100C: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E100F: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E1012: mov dword ptr [ebp - 8], ebx */
    /* cmp eax, edx */ /* 0x120E1015: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E101E; /* 0x120E1017: jbe 0x120e101e */
L_120E1019:
    eax = edx; /* 0x120E1019: mov eax, edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E101B: mov dword ptr [ebp - 0x14], eax */
L_120E101E:
    /* test ecx, ecx */ /* 0x120E101E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0F62; /* 0x120E1020: jne 0x120e0f62 */
L_120E1026:
    /* cmp eax, edx */ /* 0x120E1026: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F62; /* 0x120E1028: jne 0x120e0f62 */
L_120E102E:
    /* cmp MEM32(ebp + (-0x4C)), ecx */ /* 0x120E102E: cmp dword ptr [ebp - 0x4c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F62; /* 0x120E1031: jne 0x120e0f62 */
L_120E1037:
    /* cmp MEM32(ebp + (-0x44)), edi */ /* 0x120E1037: cmp dword ptr [ebp - 0x44], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x120E103A: mov edi, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E0F65; /* 0x120E103D: jne 0x120e0f65 */
L_120E1043:
    /* test edi, edi */ /* 0x120E1043: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E0F65; /* 0x120E1045: jne 0x120e0f65 */
L_120E104B:
    /* cmp ebx, MEM32(ebp + (-0x20)) */ /* 0x120E104B: cmp ebx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E0DC3; /* 0x120E104E: je 0x120e0dc3 */
L_120E1054:
    RECOMP_BACKEDGE();
    goto L_120E0F65; /* 0x120E1054: jmp 0x120e0f65 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120E105E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E105Eu);

L_120E105E:
    edi = edi; /* 0x120E105E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1060: push ebp */
    ebp = esp; /* 0x120E1061: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E1063: push ecx */
    SET_LO16(eax, LO16(ecx)); /* 0x120E1064: mov ax, cx */
    if (11u) _cf = (((LO16(eax)) >> 10) & 1u); /* 0x120E1067: shr ax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 11u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 11u); /* 0x120E1067: shr ax, 0xb */
    eax = (uint32_t)LO16(eax); /* 0x120E106B: movzx eax, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E106E: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x120E1071: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x120E1073: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x120E1073: shr eax, 5 */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x120E1076: fild dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x120E1079: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(0x12007CA0)); /* 0x120E107C: fld qword ptr [0x12007ca0] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E1082: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x120E1085: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[1] *= _st[0]; /* 0x120E1088: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E108A: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E108C: fstp dword ptr [edx] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x120E108E: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120E1091: mov dword ptr [ebp - 4], ecx */
    _st[0] *= *(double*)ADDR(0x12007C90); /* 0x120E1094: fmul qword ptr [0x12007c90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x120E109A: fstp dword ptr [edx + 4] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x120E109D: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E10A0: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x120E10A2: fstp dword ptr [edx + 8] */
    fp_push(1.0); /* 0x120E10A5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xC) = _v; } /* 0x120E10A7: fstp dword ptr [edx + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E10AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E10AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E10B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E10B1u);

L_120E10B1:
    edi = edi; /* 0x120E10B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E10B3: push ebp */
    ebp = esp; /* 0x120E10B4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E10B6: push ecx */
    fp_push(0.0); /* 0x120E10B7: fldz  */
    PUSH32(esp, 0x10u); /* 0x120E10B9: push 0x10 */
    fp_push(0.0); /* 0x120E10BB: fldz  */
    ecx = eax + 0xC; /* 0x120E10BD: lea ecx, [eax + 0xc] */
    fp_push(1.0); /* 0x120E10C0: fld1  */
    edx = POP32_VAL(esp); /* 0x120E10C2: pop edx */
    goto L_120E10C7; /* 0x120E10C3: jmp 0x120e10c7 */
L_120E10C5:
    fp_xch(1); /* 0x120E10C5: fxch st(1) */
L_120E10C7:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E10C7: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x120E10C9: fucomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E10CB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E10CD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E10DF; /* 0x120E10D0: jp 0x120e10df */
L_120E10D2:
    fp_xch(1); /* 0x120E10D2: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x120E10D4: fst dword ptr [ecx - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x120E10D7: fst dword ptr [ecx - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x120E10DA: fst dword ptr [ecx - 4] */
    goto L_120E114A; /* 0x120E10DD: jmp 0x120e114a */
L_120E10DF:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E10DF: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E10E1: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E10E3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E10E5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1148; /* 0x120E10E8: jp 0x120e1148 */
L_120E10EA:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E10EA: fld dword ptr [ecx] */
    fp_push(_st[1]); /* 0x120E10EC: fld st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E10EE: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E10F0: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E10F3: fld dword ptr [ecx - 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E10F6: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E10F8: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E10FA: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120E10FC: fld dword ptr [ebp - 4] */
    /* test HI8(eax), 0x41u */ /* 0x120E10FF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E110D; /* 0x120E1102: jne 0x120e110d */
L_120E1104:
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E1104: fld dword ptr [ecx - 0xc] */
    fp_push(_st[1]); /* 0x120E1107: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1109: fmulp st(1) */
    goto L_120E110F; /* 0x120E110B: jmp 0x120e110f */
L_120E110D:
    fp_push(_st[1]); /* 0x120E110D: fld st(1) */
L_120E110F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x120E110F: fstp dword ptr [ecx - 0xc] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E1112: fld dword ptr [ecx - 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1115: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1117: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1119: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E111B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1129; /* 0x120E111E: jne 0x120e1129 */
L_120E1120:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E1120: fld dword ptr [ecx - 8] */
    fp_push(_st[1]); /* 0x120E1123: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1125: fmulp st(1) */
    goto L_120E112B; /* 0x120E1127: jmp 0x120e112b */
L_120E1129:
    fp_push(_st[1]); /* 0x120E1129: fld st(1) */
L_120E112B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x120E112B: fstp dword ptr [ecx - 8] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E112E: fld dword ptr [ecx - 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1131: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1133: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1135: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1137: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1141; /* 0x120E113A: jne 0x120e1141 */
L_120E113C:
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x120E113C: fmul dword ptr [ecx - 4] */
    goto L_120E1145; /* 0x120E113F: jmp 0x120e1145 */
L_120E1141:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1141: fstp st(0) */
    fp_push(_st[0]); /* 0x120E1143: fld st(0) */
L_120E1145:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x120E1145: fstp dword ptr [ecx - 4] */
L_120E1148:
    fp_xch(1); /* 0x120E1148: fxch st(1) */
L_120E114A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E114A: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E114D: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E10C5; /* 0x120E114E: jne 0x120e10c5 */
L_120E1154:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1154: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1156: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1158: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E115A: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E115C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E115D: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E1163(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1163u);

L_120E1163:
    edi = edi; /* 0x120E1163: mov edi, edi */
    PUSH32(esp, esi); /* 0x120E1165: push esi */
    edx = ecx + 0xC; /* 0x120E1166: lea edx, [ecx + 0xc] */
    PUSH32(esp, 0x10u); /* 0x120E1169: push 0x10 */
    esi = eax + 0x8; /* 0x120E116B: lea esi, [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x120E116E: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = POP32_VAL(esp); /* 0x120E1170: pop eax */
L_120E1171:
    fp_push(*(float*)&MEM32(ecx + esi + (-0x8))); /* 0x120E1171: fld dword ptr [ecx + esi - 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120E1175: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x120E1177: fstp dword ptr [esi - 8] */
    fp_push(*(float*)&MEM32(edx + (-0x8))); /* 0x120E117A: fld dword ptr [edx - 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120E117D: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x120E117F: fstp dword ptr [esi - 4] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x120E1182: fld dword ptr [edx - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120E1185: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120E1187: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120E1189: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx)); /* 0x120E118C: fld dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E118E: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E1191: dec eax */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x120E1192: fstp dword ptr [esi - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E1171; /* 0x120E1195: jne 0x120e1171 */
L_120E1197:
    esi = POP32_VAL(esp); /* 0x120E1197: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E1198: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E119E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E119Eu);

L_120E119E:
    edi = edi; /* 0x120E119E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E11A0: push ebp */
    ebp = esp; /* 0x120E11A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E11A3: push ecx */
    PUSH32(esp, ecx); /* 0x120E11A4: push ecx */
    PUSH32(esp, esi); /* 0x120E11A5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E11A6: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120E11A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E11C7; /* 0x120E11AB: jne 0x120e11c7 */
L_120E11AD:
    eax = (uint32_t)MEM8(ecx); /* 0x120E11AD: movzx eax, byte ptr [ecx] */
    MEM32(ebp + 0x8) = eax; /* 0x120E11B0: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E11B3: fild dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(0x12001948); /* 0x120E11B6: fdiv qword ptr [0x12001948] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E11BC: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E11BF: fld dword ptr [ebp + 8] */
    goto L_120E1298; /* 0x120E11C2: jmp 0x120e1298 */
L_120E11C7:
    /* cmp esi, 1 */ /* 0x120E11C7: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E11E7; /* 0x120E11CA: jne 0x120e11e7 */
L_120E11CC:
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x120E11CC: movzx eax, byte ptr [ecx + 1] */
    MEM32(ebp + 0x8) = eax; /* 0x120E11D0: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E11D3: fild dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(0x12001948); /* 0x120E11D6: fdiv qword ptr [0x12001948] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E11DC: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E11DF: fld dword ptr [ebp + 8] */
    goto L_120E1298; /* 0x120E11E2: jmp 0x120e1298 */
L_120E11E7:
    SET_LO8(edx, MEM8(ecx)); /* 0x120E11E7: mov dl, byte ptr [ecx] */
    eax = (uint32_t)LO8(edx); /* 0x120E11E9: movzx eax, dl */
    MEM32(ebp + 0x8) = eax; /* 0x120E11EC: mov dword ptr [ebp + 8], eax */
    SET_LO8(ecx, MEM8(ecx + 0x1)); /* 0x120E11EF: mov cl, byte ptr [ecx + 1] */
    eax = (uint32_t)LO8(ecx); /* 0x120E11F2: movzx eax, cl */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E11F5: fild dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12001948)); /* 0x120E11F8: fld qword ptr [0x12001948] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E11FE: mov dword ptr [ebp - 4], eax */
    _st[1] /= _st[0]; /* 0x120E1201: fdiv st(1), st(0) */
    fp_xch(1); /* 0x120E1203: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1205: fstp dword ptr [ebp + 8] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x120E1208: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E120B: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E120D: fstp dword ptr [ebp - 4] */
    /* cmp LO8(edx), LO8(ecx) */ /* 0x120E1210: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E124E; /* 0x120E1212: jbe 0x120e124e */
L_120E1214:
    PUSH32(esp, 7); /* 0x120E1214: push 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E1216: dec esi */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x120E1217: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120E1218: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E121A: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x120E121D: fild dword ptr [ebp - 8] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E1228; /* 0x120E1220: jns 0x120e1228 */
L_120E1222:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1222: fadd dword ptr [0x120014d0] */
L_120E1228:
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120E1228: fmul dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x120E122B: mov dword ptr [ebp + 8], esi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E122E: fild dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120E1231: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E123B; /* 0x120E1233: jns 0x120e123b */
L_120E1235:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1235: fadd dword ptr [0x120014d0] */
L_120E123B:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x120E123B: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E123E: faddp st(1) */
    _st[0] /= *(double*)ADDR(0x12005B90); /* 0x120E1240: fdiv qword ptr [0x12005b90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1246: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E1249: fld dword ptr [ebp + 8] */
    goto L_120E1298; /* 0x120E124C: jmp 0x120e1298 */
L_120E124E:
    /* cmp esi, 6 */ /* 0x120E124E: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1257; /* 0x120E1251: jne 0x120e1257 */
L_120E1253:
    fp_push(0.0); /* 0x120E1253: fldz  */
    goto L_120E1298; /* 0x120E1255: jmp 0x120e1298 */
L_120E1257:
    /* cmp esi, 7 */ /* 0x120E1257: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1260; /* 0x120E125A: jne 0x120e1260 */
L_120E125C:
    fp_push(1.0); /* 0x120E125C: fld1  */
    goto L_120E1298; /* 0x120E125E: jmp 0x120e1298 */
L_120E1260:
    PUSH32(esp, 5); /* 0x120E1260: push 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E1262: dec esi */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x120E1263: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120E1264: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E1266: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x120E1269: fild dword ptr [ebp - 8] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E1274; /* 0x120E126C: jns 0x120e1274 */
L_120E126E:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E126E: fadd dword ptr [0x120014d0] */
L_120E1274:
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120E1274: fmul dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x120E1277: mov dword ptr [ebp + 8], esi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E127A: fild dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120E127D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E1287; /* 0x120E127F: jns 0x120e1287 */
L_120E1281:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1281: fadd dword ptr [0x120014d0] */
L_120E1287:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x120E1287: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E128A: faddp st(1) */
    _st[0] /= *(double*)ADDR(0x12005420); /* 0x120E128C: fdiv qword ptr [0x12005420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1292: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E1295: fld dword ptr [ebp + 8] */
L_120E1298:
    esi = POP32_VAL(esp); /* 0x120E1298: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1299: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E129A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E12A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E12A2u);

L_120E12A2:
    edi = edi; /* 0x120E12A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E12A4: push ebp */
    ebp = esp; /* 0x120E12A5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E12A7: push esi */
    PUSH32(esp, edi); /* 0x120E12A8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E12A9: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x120E12AC: mov eax, edi */
    PUSH32(esp, 7); /* 0x120E12AE: push 7 */
    edx = POP32_VAL(esp); /* 0x120E12B0: pop edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x120E12B1: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x120E12B3: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x120E12B3: shr eax, 3 */
    edi = (uint32_t)((int32_t)edi * (int32_t)3); /* 0x120E12B6: imul edi, edi, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x120E12B9: imul eax, eax, 3 */
    esi = eax + ecx + 0x2; /* 0x120E12BC: lea esi, [eax + ecx + 2] */
    eax = MEM32(ebp + 0xC); /* 0x120E12C0: mov eax, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x120E12C3: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x120E12C5: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x120E12C5: shl edx, cl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x120E12C7: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x120E12C7: shl eax, cl */
    edi = POP32_VAL(esp); /* 0x120E12C9: pop edi */
    edx = ~edx; /* 0x120E12CA: not edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    edx = edx & MEM32(esi); /* 0x120E12CC: and edx, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x120E12CE: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edx; /* 0x120E12D0: mov dword ptr [esi], edx */
    esi = POP32_VAL(esp); /* 0x120E12D2: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E12D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E12D4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E12DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E12DCu);

L_120E12DC:
    edi = edi; /* 0x120E12DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E12DE: push ebp */
    ebp = esp; /* 0x120E12DF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E12E1: push ecx */
    PUSH32(esp, ecx); /* 0x120E12E2: push ecx */
    PUSH32(esp, ebx); /* 0x120E12E3: push ebx */
    SET_HI8(ebx, MEM8(ecx)); /* 0x120E12E4: mov bh, byte ptr [ecx] */
    eax = (uint32_t)HI8(ebx); /* 0x120E12E6: movzx eax, bh */
    PUSH32(esp, 0xFFFFFF81u); /* 0x120E12E9: push -0x7f */
    edx = POP32_VAL(esp); /* 0x120E12EB: pop edx */
    /* cmp eax, 0xFFFFFF80u */ /* 0x120E12EC: cmp eax, -0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E12F3; /* 0x120E12EF: jne 0x120e12f3 */
L_120E12F1:
    SET_LO8(eax, LO8(edx)); /* 0x120E12F1: mov al, dl */
L_120E12F3:
    SET_LO8(ebx, MEM8(ecx + 0x1)); /* 0x120E12F3: mov bl, byte ptr [ecx + 1] */
    ecx = (uint32_t)LO8(ebx); /* 0x120E12F6: movzx ecx, bl */
    /* cmp ecx, 0xFFFFFF80u */ /* 0x120E12F9: cmp ecx, -0x80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E1300; /* 0x120E12FC: je 0x120e1300 */
L_120E12FE:
    SET_LO8(edx, LO8(ecx)); /* 0x120E12FE: mov dl, cl */
L_120E1300:
    ecx = MEM32(ebp + 0x8); /* 0x120E1300: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E1303: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1321; /* 0x120E1305: jne 0x120e1321 */
L_120E1307:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x120E1307: movsx eax, al */
    MEM32(ebp + 0x8) = eax; /* 0x120E130A: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E130D: fild dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(0x12007CE0); /* 0x120E1310: fdiv qword ptr [0x12007ce0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1316: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E1319: fld dword ptr [ebp + 8] */
    goto L_120E13F0; /* 0x120E131C: jmp 0x120e13f0 */
L_120E1321:
    /* cmp ecx, 1 */ /* 0x120E1321: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1340; /* 0x120E1324: jne 0x120e1340 */
L_120E1326:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x120E1326: movsx eax, dl */
    MEM32(ebp + 0x8) = eax; /* 0x120E1329: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E132C: fild dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(0x12007CE0); /* 0x120E132F: fdiv qword ptr [0x12007ce0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1335: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E1338: fld dword ptr [ebp + 8] */
    goto L_120E13F0; /* 0x120E133B: jmp 0x120e13f0 */
L_120E1340:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x120E1340: movsx eax, al */
    MEM32(ebp + 0x8) = eax; /* 0x120E1343: mov dword ptr [ebp + 8], eax */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x120E1346: movsx eax, dl */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E1349: fild dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12007CE0)); /* 0x120E134C: fld qword ptr [0x12007ce0] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E1352: mov dword ptr [ebp - 4], eax */
    _st[1] /= _st[0]; /* 0x120E1355: fdiv st(1), st(0) */
    fp_xch(1); /* 0x120E1357: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1359: fstp dword ptr [ebp + 8] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x120E135C: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E135F: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E1361: fstp dword ptr [ebp - 4] */
    /* cmp HI8(ebx), LO8(ebx) */ /* 0x120E1364: cmp bh, bl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E13A2; /* 0x120E1366: jbe 0x120e13a2 */
L_120E1368:
    PUSH32(esp, 7); /* 0x120E1368: push 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E136A: dec ecx */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x120E136B: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E136C: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E136E: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x120E1371: fild dword ptr [ebp - 8] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E137C; /* 0x120E1374: jns 0x120e137c */
L_120E1376:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1376: fadd dword ptr [0x120014d0] */
L_120E137C:
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120E137C: fmul dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x120E137F: mov dword ptr [ebp + 8], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E1382: fild dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E1385: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E138F; /* 0x120E1387: jns 0x120e138f */
L_120E1389:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1389: fadd dword ptr [0x120014d0] */
L_120E138F:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x120E138F: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E1392: faddp st(1) */
    _st[0] /= *(double*)ADDR(0x12005B90); /* 0x120E1394: fdiv qword ptr [0x12005b90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E139A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E139D: fld dword ptr [ebp + 8] */
    goto L_120E13F0; /* 0x120E13A0: jmp 0x120e13f0 */
L_120E13A2:
    /* cmp ecx, 6 */ /* 0x120E13A2: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E13AF; /* 0x120E13A5: jne 0x120e13af */
L_120E13A7:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120E13A7: fld dword ptr [0x12001748] */
    goto L_120E13F0; /* 0x120E13AD: jmp 0x120e13f0 */
L_120E13AF:
    /* cmp ecx, 7 */ /* 0x120E13AF: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E13B8; /* 0x120E13B2: jne 0x120e13b8 */
L_120E13B4:
    fp_push(1.0); /* 0x120E13B4: fld1  */
    goto L_120E13F0; /* 0x120E13B6: jmp 0x120e13f0 */
L_120E13B8:
    PUSH32(esp, 5); /* 0x120E13B8: push 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E13BA: dec ecx */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x120E13BB: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E13BC: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E13BE: mov dword ptr [ebp - 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x120E13C1: fild dword ptr [ebp - 8] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E13CC; /* 0x120E13C4: jns 0x120e13cc */
L_120E13C6:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E13C6: fadd dword ptr [0x120014d0] */
L_120E13CC:
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x120E13CC: fmul dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x120E13CF: mov dword ptr [ebp + 8], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E13D2: fild dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E13D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E13DF; /* 0x120E13D7: jns 0x120e13df */
L_120E13D9:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E13D9: fadd dword ptr [0x120014d0] */
L_120E13DF:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x120E13DF: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E13E2: faddp st(1) */
    _st[0] /= *(double*)ADDR(0x12005420); /* 0x120E13E4: fdiv qword ptr [0x12005420] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E13EA: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E13ED: fld dword ptr [ebp + 8] */
L_120E13F0:
    ebx = POP32_VAL(esp); /* 0x120E13F0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E13F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E13F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E13FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E13FAu);

L_120E13FA:
    edi = edi; /* 0x120E13FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E13FC: push ebp */
    ebp = esp; /* 0x120E13FD: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120E13FF: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)LO8(eax); /* 0x120E1403: movzx eax, al */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E1420; /* 0x120E1406: je 0x120e1420 */
L_120E1408:
    MEM32(ebp + 0x8) = eax; /* 0x120E1408: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E140B: fild dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x120080E8)); /* 0x120E140E: fld qword ptr [0x120080e8] */
    _st[1] -= _st[0]; /* 0x120E1414: fsub st(1), st(0) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x120E1416: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1418: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E141B: fld dword ptr [ebp + 8] */
    goto L_120E1432; /* 0x120E141E: jmp 0x120e1432 */
L_120E1420:
    MEM32(ebp + 0x8) = eax; /* 0x120E1420: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E1423: fild dword ptr [ebp + 8] */
    _st[0] /= *(double*)ADDR(0x12001948); /* 0x120E1426: fdiv qword ptr [0x12001948] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E142C: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E142F: fld dword ptr [ebp + 8] */
L_120E1432:
    ebp = POP32_VAL(esp); /* 0x120E1432: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E1433: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E143B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E143Bu);

L_120E143B:
    edi = edi; /* 0x120E143B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E143D: push ebp */
    ebp = esp; /* 0x120E143E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E1440: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E1443: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E1448: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E144A: mov dword ptr [ebp - 4], eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x120E144D: mov al, byte ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E1450: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E1451: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E1454: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E1455: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120E1458: push esi */
    RECOMP_CALL(sub_120E13FA); /* 0x120E1459: call 0x120e13fa */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E145E: fstp dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x120E1461: push esi */
    SET_LO8(eax, LO8(ecx)); /* 0x120E1462: mov al, cl */
    RECOMP_CALL(sub_120E13FA); /* 0x120E1464: call 0x120e13fa */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1469: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E146C: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E146F: fst dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1472: fld dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E1475: fst dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x120E1478: fld st(1) */
    /* cmp MEM8(ebp + 0x10), LO8(ecx) */ /* 0x120E147A: cmp byte ptr [ebp + 0x10], cl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E150E; /* 0x120E147D: jae 0x120e150e */
L_120E1483:
    fp_push(*(double*)ADDR(0x120055D0)); /* 0x120E1483: fld qword ptr [0x120055d0] */
    _st[1] *= _st[0]; /* 0x120E1489: fmul st(1), st(0) */
    fp_push(_st[2]); /* 0x120E148B: fld st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E148D: faddp st(2) */
    fp_push(*(double*)ADDR(0x12005B90)); /* 0x120E148F: fld qword ptr [0x12005b90] */
    _st[2] /= _st[0]; /* 0x120E1495: fdiv st(2), st(0) */
    fp_xch(2); /* 0x120E1497: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E1499: fstp dword ptr [ebp - 0x1c] */
    fp_push(_st[2]); /* 0x120E149C: fld st(2) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120E149E: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x120E14A4: fmul st(1), st(0) */
    fp_push(*(double*)ADDR(0x12005420)); /* 0x120E14A6: fld qword ptr [0x12005420] */
    _st[6] *= _st[0]; /* 0x120E14AC: fmul st(6), st(0) */
    fp_xch(2); /* 0x120E14AE: fxch st(2) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x120E14B0: faddp st(6) */
    fp_xch(5); /* 0x120E14B2: fxch st(5) */
    _st[0] /= _st[3]; /* 0x120E14B4: fdiv st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E14B6: fstp dword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x120E14B9: fld qword ptr [0x12001ea8] */
    _st[4] *= _st[0]; /* 0x120E14BF: fmul st(4), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E14C1: fld dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(0x12005418)); /* 0x120E14C4: fld qword ptr [0x12005418] */
    _st[1] *= _st[0]; /* 0x120E14CA: fmul st(1), st(0) */
    fp_xch(6); /* 0x120E14CC: fxch st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E14CE: faddp st(1) */
    _st[0] /= _st[4]; /* 0x120E14D0: fdiv st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E14D2: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E14D5: fld dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120E14D8: fmulp st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x120E14DA: fmul dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120E14DD: faddp st(4) */
    fp_xch(3); /* 0x120E14DF: fxch st(3) */
    _st[0] /= _st[2]; /* 0x120E14E1: fdiv st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E14E3: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E14E6: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x120E14E9: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120E14EB: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E14ED: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x120E14F0: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x120E14F2: fmulp st(6) */
    fp_xch(4); /* 0x120E14F4: fxch st(4) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120E14F6: faddp st(5) */
    fp_xch(4); /* 0x120E14F8: fxch st(4) */
    _st[0] /= _st[2]; /* 0x120E14FA: fdiv st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E14FC: fstp dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E14FF: fmulp st(3) */
    fp_xch(2); /* 0x120E1501: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E1503: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E1505: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E1507: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x120E150A: fldz  */
    goto L_120E1579; /* 0x120E150C: jmp 0x120e1579 */
L_120E150E:
    fp_push(*(double*)ADDR(0x12005418)); /* 0x120E150E: fld qword ptr [0x12005418] */
    _st[1] *= _st[0]; /* 0x120E1514: fmul st(1), st(0) */
    fp_push(_st[2]); /* 0x120E1516: fld st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E1518: faddp st(2) */
    fp_push(*(double*)ADDR(0x12005420)); /* 0x120E151A: fld qword ptr [0x12005420] */
    _st[2] /= _st[0]; /* 0x120E1520: fdiv st(2), st(0) */
    fp_xch(2); /* 0x120E1522: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E1524: fstp dword ptr [ebp - 0x1c] */
    fp_push(_st[2]); /* 0x120E1527: fld st(2) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120E1529: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x120E152F: fmul st(1), st(0) */
    fp_push(_st[5]); /* 0x120E1531: fld st(5) */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x120E1533: fld qword ptr [0x12001ea8] */
    _st[1] *= _st[0]; /* 0x120E1539: fmul st(1), st(0) */
    fp_xch(3); /* 0x120E153B: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E153D: faddp st(1) */
    _st[0] /= _st[4]; /* 0x120E153F: fdiv st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E1541: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[4]); /* 0x120E1544: fld st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E1546: fmulp st(2) */
    fp_push(_st[5]); /* 0x120E1548: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E154A: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E154C: faddp st(1) */
    _st[0] /= _st[2]; /* 0x120E154E: fdiv st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E1550: fstp dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E1553: fmulp st(2) */
    fp_xch(1); /* 0x120E1555: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E1557: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x120E1559: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E155B: fstp dword ptr [ebp - 0x10] */
    /* test esi, esi */ /* 0x120E155E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E156F; /* 0x120E1560: je 0x120e156f */
L_120E1562:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120E1562: fld dword ptr [0x12001748] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E1568: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x120E156B: fldz  */
    goto L_120E1574; /* 0x120E156D: jmp 0x120e1574 */
L_120E156F:
    fp_push(0.0); /* 0x120E156F: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E1571: fst dword ptr [ebp - 0xc] */
L_120E1574:
    fp_push(1.0); /* 0x120E1574: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E1576: fstp dword ptr [ebp - 8] */
L_120E1579:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E1579: fstp dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E157B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120E157D: fld dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x12001764)); /* 0x120E1580: fld dword ptr [0x12001764] */
L_120E1586:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1586: fst dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E1589: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E158B: fld dword ptr [ebp - 0x28] */
L_120E158E:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x24))); /* 0x120E158E: fld dword ptr [ebp + ecx*4 - 0x24] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120E1592: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1594: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1597: fld dword ptr [ebp - 0x28] */
    _st[0] = fabs(_st[0]); /* 0x120E159A: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E159C: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E159F: fld dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E15A2: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E15A5: fld dword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E15A8: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E15AA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E15AC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E15BB; /* 0x120E15AF: jp 0x120e15bb */
L_120E15B1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E15B1: fstp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E15B3: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E15B6: fld dword ptr [ebp - 0x28] */
    goto L_120E15BD; /* 0x120E15B9: jmp 0x120e15bd */
L_120E15BB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E15BB: fstp st(0) */
L_120E15BD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E15BD: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 8 */ /* 0x120E15BE: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E158E; /* 0x120E15C1: jb 0x120e158e */
L_120E15C3:
    _st[0] *= _st[0]; /* 0x120E15C3: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x120E15C5: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E15C7: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E15CA: fld dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x120E15CD: fst dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E15CF: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E15D1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E15D3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E15EA; /* 0x120E15D6: je 0x120e15ea */
L_120E15D8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E15D8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E15D9: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x120E15DC: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1586; /* 0x120E15DF: jb 0x120e1586 */
L_120E15E1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E15E1: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E15E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E15E5: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E15E7: inc eax */
    _flag_k = FK_INC;
    goto L_120E15F0; /* 0x120E15E8: jmp 0x120e15f0 */
L_120E15EA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E15EA: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E15EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E15EE: fstp dword ptr [edx] */
L_120E15F0:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E15F0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E15F3: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E15F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E15F6: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E15F7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E15FC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120E15FD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120E1605(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1605u);

L_120E1605:
    edi = edi; /* 0x120E1605: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1607: push ebp */
    ebp = esp; /* 0x120E1608: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E160A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E160D: push ebx */
    PUSH32(esp, esi); /* 0x120E160E: push esi */
    PUSH32(esp, edi); /* 0x120E160F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120E1610: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x120E1613: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E161F; /* 0x120E1615: je 0x120e161f */
L_120E1617:
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x120E1617: fld dword ptr [0x12001748] */
    goto L_120E1621; /* 0x120E161D: jmp 0x120e1621 */
L_120E161F:
    fp_push(0.0); /* 0x120E161F: fldz  */
L_120E1621:
    esi = MEM32(ebp + 0x8); /* 0x120E1621: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E1624: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(esi)); /* 0x120E1627: fld dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E1629: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E162B: fstp dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x120E162E: mov dword ptr [ebp - 8], edx */
    fp_push(*(float*)&MEM32(esi)); /* 0x120E1631: fld dword ptr [esi] */
    ecx = edx; /* 0x120E1633: mov ecx, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E1635: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120E1638: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E163B: fld dword ptr [ebp + 8] */
L_120E163E:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E163E: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1641: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1643: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1645: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1657; /* 0x120E1648: jp 0x120e1657 */
L_120E164A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E164A: fstp st(0) */
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E164C: fld dword ptr [esi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E164F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E1652: fld dword ptr [ebp + 8] */
    goto L_120E1670; /* 0x120E1655: jmp 0x120e1670 */
L_120E1657:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E1657: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E165A: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E165C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E165E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1670; /* 0x120E1661: jne 0x120e1670 */
L_120E1663:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1663: fstp st(1) */
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E1665: fld dword ptr [esi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E1668: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120E166B: fld dword ptr [ebp - 4] */
    fp_xch(1); /* 0x120E166E: fxch st(1) */
L_120E1670:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E1670: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E1671: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E163E; /* 0x120E1674: jb 0x120e163e */
L_120E1676:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120E1676: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x120E1679: fld st(0) */
    fp_push(_st[2]); /* 0x120E167B: fld st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E167D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E167F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E1681: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E169A; /* 0x120E1684: jnp 0x120e169a */
L_120E1686:
    fp_push(_st[2]); /* 0x120E1686: fld st(2) */
    fp_push(1.0); /* 0x120E1688: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E168A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E168C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E168E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E169A; /* 0x120E1691: jnp 0x120e169a */
L_120E1693:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1693: fstp st(0) */
    MEM32(ebp + (-0x14)) = edx; /* 0x120E1695: mov dword ptr [ebp - 0x14], edx */
    goto L_120E170B; /* 0x120E1698: jmp 0x120e170b */
L_120E169A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E169A: fstp st(1) */
    MEM32(ebp + (-0x14)) = 1; /* 0x120E169C: mov dword ptr [ebp - 0x14], 1 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E16A3: fstp st(1) */
    ecx = edx; /* 0x120E16A5: mov ecx, edx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E16A7: fst dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x120E16AA: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E16AC: fst dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120E16AF: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E16B2: fld dword ptr [ebp + 8] */
L_120E16B5:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E16B5: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E16B8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E16BA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E16BC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E16D8; /* 0x120E16BF: jp 0x120e16d8 */
L_120E16C1:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E16C1: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120E16C4: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E16C6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E16C8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E16D8; /* 0x120E16CB: jne 0x120e16d8 */
L_120E16CD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E16CD: fstp st(0) */
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E16CF: fld dword ptr [esi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x120E16D2: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x120E16D5: fld dword ptr [ebp + 8] */
L_120E16D8:
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E16D8: fld dword ptr [esi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E16DB: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E16DD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E16DF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E16FF; /* 0x120E16E2: jne 0x120e16ff */
L_120E16E4:
    fp_xch(2); /* 0x120E16E4: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + ecx * 4)); /* 0x120E16E6: fcom dword ptr [esi + ecx*4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E16E9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E16EB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E16FD; /* 0x120E16EE: jne 0x120e16fd */
L_120E16F0:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E16F0: fstp st(1) */
    fp_push(*(float*)&MEM32(esi + ecx * 4)); /* 0x120E16F2: fld dword ptr [esi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E16F5: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120E16F8: fld dword ptr [ebp - 4] */
    fp_xch(1); /* 0x120E16FB: fxch st(1) */
L_120E16FD:
    fp_xch(2); /* 0x120E16FD: fxch st(2) */
L_120E16FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E16FF: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E1700: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E16B5; /* 0x120E1703: jb 0x120e16b5 */
L_120E1705:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1705: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1707: fstp st(1) */
    fp_xch(1); /* 0x120E1709: fxch st(1) */
L_120E170B:
    fp_push(*(double*)ADDR(0x12001948)); /* 0x120E170B: fld qword ptr [0x12001948] */
    fp_push(*(double*)ADDR(0x120080E8)); /* 0x120E1711: fld qword ptr [0x120080e8] */
    /* test edi, edi */ /* 0x120E1717: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E1723; /* 0x120E1719: je 0x120e1723 */
L_120E171B:
    _st[2] *= _st[0]; /* 0x120E171B: fmul st(2), st(0) */
    _st[2] += _st[0]; /* 0x120E171D: fadd st(2), st(0) */
    fp_xch(2); /* 0x120E171F: fxch st(2) */
    goto L_120E1727; /* 0x120E1721: jmp 0x120e1727 */
L_120E1723:
    fp_xch(2); /* 0x120E1723: fxch st(2) */
    _st[0] *= _st[1]; /* 0x120E1725: fmul st(1) */
L_120E1727:
    RECOMP_CALL(sub_121BF2F7); /* 0x120E1727: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO8(eax); /* 0x120E172C: movzx ebx, al */
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E172F: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x120E1732: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E173E; /* 0x120E1734: je 0x120e173e */
L_120E1736:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1736: fstp st(0) */
    _st[1] *= _st[0]; /* 0x120E1738: fmul st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E173A: faddp st(1) */
    goto L_120E1742; /* 0x120E173C: jmp 0x120e1742 */
L_120E173E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E173E: fstp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1740: fmulp st(1) */
L_120E1742:
    RECOMP_CALL(sub_121BF2F7); /* 0x120E1742: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO8(eax); /* 0x120E1747: movzx edi, al */
    eax = edi; /* 0x120E174A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E174C: sub eax, ebx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120E174E: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x120E174F: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x120E1752: add edx, eax */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E1754: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E1757: inc edx */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x120E1758: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120E175A: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E1762; /* 0x120E175C: jns 0x120e1762 */
L_120E175E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E175E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E1765; /* 0x120E1760: jmp 0x120e1765 */
L_120E1762:
    MEM32(ebp + (-0x8)) = ecx; /* 0x120E1762: mov dword ptr [ebp - 8], ecx */
L_120E1765:
    eax = edx + ebx; /* 0x120E1765: lea eax, [edx + ebx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E1768: mov dword ptr [ebp - 0xc], eax */
    /* cmp edi, eax */ /* 0x120E176B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_120E1772; /* 0x120E176D: jge 0x120e1772 */
L_120E176F:
    MEM32(ebp + (-0xC)) = edi; /* 0x120E176F: mov dword ptr [ebp - 0xc], edi */
L_120E1772:
    eax = edi; /* 0x120E1772: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x120E1774: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x120E1776: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E177F; /* 0x120E1778: jg 0x120e177f */
L_120E177A:
    ebx = eax; /* 0x120E177A: mov ebx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E177C: mov dword ptr [ebp - 0x10], eax */
L_120E177F:
    eax = edx + edi; /* 0x120E177F: lea eax, [edx + edi] */
    edi = 0xFFu; /* 0x120E1782: mov edi, 0xff */
    /* cmp eax, edi */ /* 0x120E1787: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E178D; /* 0x120E1789: jg 0x120e178d */
L_120E178B:
    edi = eax; /* 0x120E178B: mov edi, eax */
L_120E178D:
    fp_push(*(float*)&MEM32(0x12001764)); /* 0x120E178D: fld dword ptr [0x12001764] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E1793: mov eax, dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E1796: fstp dword ptr [ebp - 0x18] */
    goto L_120E17FD; /* 0x120E1799: jmp 0x120e17fd */
L_120E179B:
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x120E179B: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E17F6; /* 0x120E179E: jg 0x120e17f6 */
L_120E17A0:
    /* cmp ecx, ebx */ /* 0x120E17A0: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120E17EE; /* 0x120E17A2: jg 0x120e17ee */
L_120E17A4:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x120E17A4: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E17B1; /* 0x120E17A8: je 0x120e17b1 */
L_120E17AA:
    SET_LO8(eax, LO8(ecx)); /* 0x120E17AA: mov al, cl */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x120E17AC: mov byte ptr [ebp - 4], bl */
    goto L_120E17B6; /* 0x120E17AF: jmp 0x120e17b6 */
L_120E17B1:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ecx)); /* 0x120E17B1: mov byte ptr [ebp - 4], cl */
    SET_LO8(eax, LO8(ebx)); /* 0x120E17B4: mov al, bl */
L_120E17B6:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120E17B6: fld dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x120E17B9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120E17BA: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120E17BD: push dword ptr [ebp - 4] */
    edx = ebp + (-0x1C); /* 0x120E17C0: lea edx, [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E17C3: push dword ptr [ebp + 0xc] */
    SET_LO8(ecx, LO8(eax)); /* 0x120E17C6: mov cl, al */
    PUSH32(esp, esi); /* 0x120E17C8: push esi */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(eax)); /* 0x120E17C9: mov byte ptr [ebp + 0xb], al */
    RECOMP_CALL(sub_120E143B); /* 0x120E17CC: call 0x120e143b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E17D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E17EB; /* 0x120E17D3: je 0x120e17eb */
L_120E17D5:
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x120E17D5: mov al, byte ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x120E17D8: fld dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + 0x10); /* 0x120E17DB: mov ecx, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E17DE: fstp dword ptr [ebp - 0x18] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x120E17E1: mov byte ptr [ecx], al */
    SET_LO8(eax, MEM8(ebp + 0xB)); /* 0x120E17E3: mov al, byte ptr [ebp + 0xb] */
    ecx = MEM32(ebp + 0x14); /* 0x120E17E6: mov ecx, dword ptr [ebp + 0x14] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x120E17E9: mov byte ptr [ecx], al */
L_120E17EB:
    ecx = MEM32(ebp + (-0x8)); /* 0x120E17EB: mov ecx, dword ptr [ebp - 8] */
L_120E17EE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E17EE: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x120E17EF: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_120E17A0; /* 0x120E17F1: jle 0x120e17a0 */
L_120E17F3:
    eax = MEM32(ebp + (-0xC)); /* 0x120E17F3: mov eax, dword ptr [ebp - 0xc] */
L_120E17F6:
    ebx = MEM32(ebp + (-0x10)); /* 0x120E17F6: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E17F9: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x120E17FA: mov dword ptr [ebp - 8], ecx */
L_120E17FD:
    /* cmp ecx, eax */ /* 0x120E17FD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_120E179B; /* 0x120E17FF: jle 0x120e179b */
L_120E1801:
    edi = POP32_VAL(esp); /* 0x120E1801: pop edi */
    esi = POP32_VAL(esp); /* 0x120E1802: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E1803: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1804: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120E1805: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120E180D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E180Du);

L_120E180D:
    edi = edi; /* 0x120E180D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E180F: push ebp */
    ebp = esp; /* 0x120E1810: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E1812: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120E1815: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E1818: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E181B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E1605); /* 0x120E181E: call 0x120e1605 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120E1823: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120E1826: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E1829: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E182C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120E1605); /* 0x120E182F: call 0x120e1605 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E1834: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120E1835: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120E183D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E183Du);

L_120E183D:
    edi = edi; /* 0x120E183D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E183F: push ebp */
    ebp = esp; /* 0x120E1840: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E1842: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E1845: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E1846: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120E1849: push esi */
    PUSH32(esp, edi); /* 0x120E184A: push edi */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x120E184B: mov dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E184E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1850:
    PUSH32(esp, esi); /* 0x120E1850: push esi */
    ecx = ebx; /* 0x120E1851: mov ecx, ebx */
    RECOMP_CALL(sub_120E119E); /* 0x120E1853: call 0x120e119e */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x20)) = _v; } /* 0x120E1858: fstp dword ptr [ebp + esi*4 - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E185C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x120E185D: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E1850; /* 0x120E1860: jl 0x120e1850 */
L_120E1862:
    edi = MEM32(ebp + 0xC); /* 0x120E1862: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x120080F0)); /* 0x120E1865: fld dword ptr [0x120080f0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E186B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E186D:
    ebx = MEM32(ebp + (-0x24)); /* 0x120E186D: mov ebx, dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1870: fstp dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E1873: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1875:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x20))); /* 0x120E1875: fld dword ptr [ebp + ecx*4 - 0x20] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120E1879: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E187B: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E187E: fld dword ptr [ebp - 0x24] */
    _st[0] = fabs(_st[0]); /* 0x120E1881: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E1883: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E1886: fld dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E1889: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E188C: fld dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E188F: fld dword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1892: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1894: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1896: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E18A2; /* 0x120E1899: jne 0x120e18a2 */
L_120E189B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E189B: fstp dword ptr [ebp - 0x28] */
    ebx = ecx; /* 0x120E189E: mov ebx, ecx */
    goto L_120E18A4; /* 0x120E18A0: jmp 0x120e18a4 */
L_120E18A2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E18A2: fstp st(0) */
L_120E18A4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E18A4: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 8 */ /* 0x120E18A5: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1875; /* 0x120E18A8: jb 0x120e1875 */
L_120E18AA:
    ecx = MEM32(ebp + (-0x2C)); /* 0x120E18AA: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x120E18AD: push ebx */
    PUSH32(esp, esi); /* 0x120E18AE: push esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x120E18AF: mov dword ptr [ebp - 0x24], ebx */
    RECOMP_CALL(sub_120E12A2); /* 0x120E18B2: call 0x120e12a2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x120080F0)); /* 0x120E18B7: fld dword ptr [0x120080f0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E18BD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E18BE: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x120E18C1: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E186D; /* 0x120E18C4: jl 0x120e186d */
L_120E18C6:
    edi = POP32_VAL(esp); /* 0x120E18C6: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E18C7: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x120E18C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E18CA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E18CB: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E18CC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E18D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E18D4u);

L_120E18D4:
    edi = edi; /* 0x120E18D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E18D6: push ebp */
    ebp = esp; /* 0x120E18D7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E18D9: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E18DC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E18DD: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120E18E0: push esi */
    PUSH32(esp, edi); /* 0x120E18E1: push edi */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x120E18E2: mov dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E18E5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E18E7:
    PUSH32(esp, esi); /* 0x120E18E7: push esi */
    ecx = ebx; /* 0x120E18E8: mov ecx, ebx */
    RECOMP_CALL(sub_120E12DC); /* 0x120E18EA: call 0x120e12dc */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x20)) = _v; } /* 0x120E18EF: fstp dword ptr [ebp + esi*4 - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E18F3: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x120E18F4: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E18E7; /* 0x120E18F7: jl 0x120e18e7 */
L_120E18F9:
    edi = MEM32(ebp + 0xC); /* 0x120E18F9: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x120080F0)); /* 0x120E18FC: fld dword ptr [0x120080f0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E1902: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1904:
    ebx = MEM32(ebp + (-0x24)); /* 0x120E1904: mov ebx, dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1907: fstp dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E190A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E190C:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x20))); /* 0x120E190C: fld dword ptr [ebp + ecx*4 - 0x20] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120E1910: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E1912: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E1915: fld dword ptr [ebp - 0x24] */
    _st[0] = fabs(_st[0]); /* 0x120E1918: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E191A: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E191D: fld dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E1920: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E1923: fld dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1926: fld dword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1929: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E192B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E192D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1939; /* 0x120E1930: jne 0x120e1939 */
L_120E1932:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1932: fstp dword ptr [ebp - 0x28] */
    ebx = ecx; /* 0x120E1935: mov ebx, ecx */
    goto L_120E193B; /* 0x120E1937: jmp 0x120e193b */
L_120E1939:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1939: fstp st(0) */
L_120E193B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E193B: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 8 */ /* 0x120E193C: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E190C; /* 0x120E193F: jb 0x120e190c */
L_120E1941:
    ecx = MEM32(ebp + (-0x2C)); /* 0x120E1941: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x120E1944: push ebx */
    PUSH32(esp, esi); /* 0x120E1945: push esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x120E1946: mov dword ptr [ebp - 0x24], ebx */
    RECOMP_CALL(sub_120E12A2); /* 0x120E1949: call 0x120e12a2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x120080F0)); /* 0x120E194E: fld dword ptr [0x120080f0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E1954: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E1955: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x120E1958: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E1904; /* 0x120E195B: jl 0x120e1904 */
L_120E195D:
    edi = POP32_VAL(esp); /* 0x120E195D: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E195E: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x120E1960: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E1961: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1962: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E1963: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E196B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E196Bu);

L_120E196B:
    edi = edi; /* 0x120E196B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E196D: push ebp */
    ebp = esp; /* 0x120E196E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x120E1970: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E1973: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E1978: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E197A: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E197D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E1980: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E1981: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1984: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1986:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1986: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E1988: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x48)) = _v; } /* 0x120E1989: fstp dword ptr [ebp + eax*4 - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E198D: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x120E1990: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1986; /* 0x120E1993: jb 0x120e1986 */
L_120E1995:
    eax = esi + 0x1; /* 0x120E1995: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120E1998: push eax */
    PUSH32(esp, esi); /* 0x120E1999: push esi */
    PUSH32(esp, 0); /* 0x120E199A: push 0 */
    eax = ebp + (-0x44); /* 0x120E199C: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E199F: push eax */
    RECOMP_CALL(sub_120E1605); /* 0x120E19A0: call 0x120e1605 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x120E19A5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E19A8: push eax */
    PUSH32(esp, esi); /* 0x120E19A9: push esi */
    RECOMP_CALL(sub_120E183D); /* 0x120E19AA: call 0x120e183d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E19AF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E19B2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E19B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E19B6: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E19B7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E19BC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E19BD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E19C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E19C5u);

L_120E19C5:
    edi = edi; /* 0x120E19C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E19C7: push ebp */
    ebp = esp; /* 0x120E19C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x120E19CA: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E19CD: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E19D2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E19D4: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E19D7: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E19DA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E19DB: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E19DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E19E0:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E19E0: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E19E2: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x48)) = _v; } /* 0x120E19E3: fstp dword ptr [ebp + eax*4 - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E19E7: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x120E19EA: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E19E0; /* 0x120E19ED: jb 0x120e19e0 */
L_120E19EF:
    eax = esi + 0x1; /* 0x120E19EF: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120E19F2: push eax */
    PUSH32(esp, esi); /* 0x120E19F3: push esi */
    PUSH32(esp, 1); /* 0x120E19F4: push 1 */
    eax = ebp + (-0x44); /* 0x120E19F6: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E19F9: push eax */
    RECOMP_CALL(sub_120E1605); /* 0x120E19FA: call 0x120e1605 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x120E19FF: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E1A02: push eax */
    PUSH32(esp, esi); /* 0x120E1A03: push esi */
    RECOMP_CALL(sub_120E18D4); /* 0x120E1A04: call 0x120e18d4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E1A09: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E1A0C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1A0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E1A10: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E1A11: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1A16: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E1A17: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E1A1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1A1Fu);

L_120E1A1F:
    edi = edi; /* 0x120E1A1F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1A21: push ebp */
    ebp = esp; /* 0x120E1A22: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x120E1A24: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E1A2A: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E1A2F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E1A31: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E1A34: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E1A37: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E1A38: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E1A3B: push edi */
    edi = esi + 0x8; /* 0x120E1A3C: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1A3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1A41:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1A41: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E1A43: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x48)) = _v; } /* 0x120E1A46: fstp dword ptr [ebp + eax - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E1A4A: add ecx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E1A4D: fld dword ptr [ecx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x88)) = _v; } /* 0x120E1A50: fstp dword ptr [ebp + eax - 0x88] */
    /* cmp eax, 0x40u */ /* 0x120E1A57: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1A41; /* 0x120E1A5A: jb 0x120e1a41 */
L_120E1A5C:
    eax = edi + 0x1; /* 0x120E1A5C: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x120E1A5F: push eax */
    PUSH32(esp, edi); /* 0x120E1A60: push edi */
    eax = esi + 0x1; /* 0x120E1A61: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120E1A64: push eax */
    PUSH32(esp, esi); /* 0x120E1A65: push esi */
    PUSH32(esp, 0); /* 0x120E1A66: push 0 */
    eax = ebp + (-0x84); /* 0x120E1A68: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E1A6E: push eax */
    eax = ebp + (-0x44); /* 0x120E1A6F: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E1A72: push eax */
    RECOMP_CALL(sub_120E180D); /* 0x120E1A73: call 0x120e180d */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x120E1A78: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E1A7B: push eax */
    PUSH32(esp, esi); /* 0x120E1A7C: push esi */
    RECOMP_CALL(sub_120E183D); /* 0x120E1A7D: call 0x120e183d */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x84); /* 0x120E1A82: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E1A88: push eax */
    PUSH32(esp, edi); /* 0x120E1A89: push edi */
    RECOMP_CALL(sub_120E183D); /* 0x120E1A8A: call 0x120e183d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E1A8F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E1A92: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E1A93: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1A95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E1A97: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E1A98: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1A9D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E1A9E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E1AA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1AA6u);

L_120E1AA6:
    edi = edi; /* 0x120E1AA6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1AA8: push ebp */
    ebp = esp; /* 0x120E1AA9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x120E1AAB: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E1AB1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E1AB6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E1AB8: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E1ABB: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E1ABE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E1ABF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E1AC2: push edi */
    edi = esi + 0x8; /* 0x120E1AC3: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1AC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E1AC8:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1AC8: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E1ACA: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x48)) = _v; } /* 0x120E1ACD: fstp dword ptr [ebp + eax - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E1AD1: add ecx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E1AD4: fld dword ptr [ecx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x88)) = _v; } /* 0x120E1AD7: fstp dword ptr [ebp + eax - 0x88] */
    /* cmp eax, 0x40u */ /* 0x120E1ADE: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1AC8; /* 0x120E1AE1: jb 0x120e1ac8 */
L_120E1AE3:
    eax = edi + 0x1; /* 0x120E1AE3: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x120E1AE6: push eax */
    PUSH32(esp, edi); /* 0x120E1AE7: push edi */
    eax = esi + 0x1; /* 0x120E1AE8: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120E1AEB: push eax */
    PUSH32(esp, esi); /* 0x120E1AEC: push esi */
    PUSH32(esp, 1); /* 0x120E1AED: push 1 */
    eax = ebp + (-0x84); /* 0x120E1AEF: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E1AF5: push eax */
    eax = ebp + (-0x44); /* 0x120E1AF6: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E1AF9: push eax */
    RECOMP_CALL(sub_120E180D); /* 0x120E1AFA: call 0x120e180d */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x120E1AFF: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x120E1B02: push eax */
    PUSH32(esp, esi); /* 0x120E1B03: push esi */
    RECOMP_CALL(sub_120E18D4); /* 0x120E1B04: call 0x120e18d4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x84); /* 0x120E1B09: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x120E1B0F: push eax */
    PUSH32(esp, edi); /* 0x120E1B10: push edi */
    RECOMP_CALL(sub_120E18D4); /* 0x120E1B11: call 0x120e18d4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E1B16: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E1B19: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E1B1A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1B1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E1B1E: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E1B1F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1B24: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E1B25: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E1B2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1B2Du);

L_120E1B2D:
    edi = edi; /* 0x120E1B2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1B2F: push ebp */
    ebp = esp; /* 0x120E1B30: mov ebp, esp */
    fp_push(0.0); /* 0x120E1B32: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E1B34: sub esp, 0x2c */
    _flag_k = FK_CMP;
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x120E1B37: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B39: fnstsw ax */
    fp_push(1.0); /* 0x120E1B3B: fld1  */
    /* test HI8(eax), 0x41u */ /* 0x120E1B3D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1B49; /* 0x120E1B40: jne 0x120e1b49 */
L_120E1B42:
    fp_xch(1); /* 0x120E1B42: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1B44: fst dword ptr [ebp - 0x2c] */
    goto L_120E1B5E; /* 0x120E1B47: jmp 0x120e1b5e */
L_120E1B49:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x120E1B49: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B4B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1B4D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1B57; /* 0x120E1B50: jp 0x120e1b57 */
L_120E1B52:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1B52: fst dword ptr [ebp - 0x2c] */
    goto L_120E1B5C; /* 0x120E1B55: jmp 0x120e1b5c */
L_120E1B57:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E1B57: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1B59: fstp dword ptr [ebp - 0x2c] */
L_120E1B5C:
    fp_xch(1); /* 0x120E1B5C: fxch st(1) */
L_120E1B5E:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x4)); /* 0x120E1B5E: fcom dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B61: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1B63: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1B6D; /* 0x120E1B66: jne 0x120e1b6d */
L_120E1B68:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1B68: fst dword ptr [ebp - 0x28] */
    goto L_120E1B86; /* 0x120E1B6B: jmp 0x120e1b86 */
L_120E1B6D:
    fp_xch(1); /* 0x120E1B6D: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x4)); /* 0x120E1B6F: fcom dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B72: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1B74: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1B7E; /* 0x120E1B77: jp 0x120e1b7e */
L_120E1B79:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1B79: fst dword ptr [ebp - 0x28] */
    goto L_120E1B84; /* 0x120E1B7C: jmp 0x120e1b84 */
L_120E1B7E:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120E1B7E: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1B81: fstp dword ptr [ebp - 0x28] */
L_120E1B84:
    fp_xch(1); /* 0x120E1B84: fxch st(1) */
L_120E1B86:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x8)); /* 0x120E1B86: fcom dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B89: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1B8B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1B94; /* 0x120E1B8E: jne 0x120e1b94 */
L_120E1B90:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1B90: fstp st(1) */
    goto L_120E1BA5; /* 0x120E1B92: jmp 0x120e1ba5 */
L_120E1B94:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1B94: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x8)); /* 0x120E1B96: fcom dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1B99: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1B9B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E1BA5; /* 0x120E1B9E: jnp 0x120e1ba5 */
L_120E1BA0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1BA0: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120E1BA2: fld dword ptr [ecx + 8] */
L_120E1BA5:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E1BA5: fstp dword ptr [ebp - 0x24] */
    MEM16(ebp + (-0xC)) = _fpu_cw; /* 0x120E1BA8: fnstcw word ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E1BAB: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E1BAE: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E1BB3: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120E1BB6: fldcw word ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1BB9: fld dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E1BBC: mov eax, dword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(0x12007CA8); /* 0x120E1BBF: fmul qword ptr [0x12007ca8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E1BC5: mov dword ptr [ebp - 0x1c], eax */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E1BC8: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E1BCE: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120E1BD1: fld dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E1BD4: fistp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1BD7: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x4)); /* 0x120E1BDA: mov eax, dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x12007C98); /* 0x120E1BDD: fmul qword ptr [0x12007c98] */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E1BE3: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E1BE9: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120E1BEC: fld dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E1BEF: fistp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E1BF2: fld dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x8)); /* 0x120E1BF5: mov edx, dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x12007CA8); /* 0x120E1BF8: fmul qword ptr [0x12007ca8] */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E1BFE: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E1C04: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120E1C07: fld dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E1C0A: fistp dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120E1C0D: mov ecx, dword ptr [ebp - 0x10] */
    _fpu_cw = MEM16(ebp + (-0x1C)); /* 0x120E1C10: fldcw word ptr [ebp - 0x1c] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x120E1C13: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x120E1C13: shl eax, 6 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120E1C16: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x120E1C18: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x120E1C18: shl eax, 5 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120E1C1B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E1C1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E1C1E: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E1C24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E1C24u);

L_120E1C24:
    edi = edi; /* 0x120E1C24: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E1C26: push ebp */
    ebp = esp; /* 0x120E1C27: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x120E1C29: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E1C2C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E1C31: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E1C33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E1C36: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E1C39: push ebx */
    PUSH32(esp, esi); /* 0x120E1C3A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E1C3B: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x68)) = eax; /* 0x120E1C3E: mov dword ptr [ebp - 0x68], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E1C41: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E1C44: push edi */
    MEM32(ebp + (-0x6C)) = eax; /* 0x120E1C45: mov dword ptr [ebp - 0x6c], eax */
    /* cmp esi, 6 */ /* 0x120E1C48: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1C59; /* 0x120E1C4B: jne 0x120e1c59 */
L_120E1C4D:
    ebx = 0x12008160u; /* 0x120E1C4D: mov ebx, 0x12008160 */
    eax = 0x12008148u; /* 0x120E1C52: mov eax, 0x12008148 */
    goto L_120E1C63; /* 0x120E1C57: jmp 0x120e1c63 */
L_120E1C59:
    ebx = 0x12008128u; /* 0x120E1C59: mov ebx, 0x12008128 */
    eax = 0x12008108u; /* 0x120E1C5E: mov eax, 0x12008108 */
L_120E1C63:
    fp_push(1.0); /* 0x120E1C63: fld1  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E1C65: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1C67: fst dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x120E1C6A: mov dword ptr [ebp - 0x48], eax */
    fp_push(0.0); /* 0x120E1C6D: fldz  */
    MEM32(ebp + (-0x38)) = ebx; /* 0x120E1C6F: mov dword ptr [ebp - 0x38], ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1C72: fst dword ptr [ebp - 0x28] */
    /* cmp esi, 8 */ /* 0x120E1C75: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1D07; /* 0x120E1C78: jne 0x120e1d07 */
L_120E1C7E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1C7E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1C80: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1C82: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1C85: fld dword ptr [ebp - 0x28] */
L_120E1C88:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1C88: fld dword ptr [edx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1C8B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1C8D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1C8F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1CA1; /* 0x120E1C92: jp 0x120e1ca1 */
L_120E1C94:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1C94: fstp st(1) */
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1C96: fld dword ptr [edx + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1C99: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1C9C: fld dword ptr [ebp - 0x2c] */
    fp_xch(1); /* 0x120E1C9F: fxch st(1) */
L_120E1CA1:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1CA1: fld dword ptr [edx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1CA4: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1CA6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1CA8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1CB8; /* 0x120E1CAB: jne 0x120e1cb8 */
L_120E1CAD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1CAD: fstp st(0) */
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1CAF: fld dword ptr [edx + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1CB2: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1CB5: fld dword ptr [ebp - 0x28] */
L_120E1CB8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E1CB8: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E1CB9: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1C88; /* 0x120E1CBC: jb 0x120e1c88 */
L_120E1CBE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1CBE: fstp st(0) */
L_120E1CC0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1CC0: fstp st(0) */
L_120E1CC2:
    eax = esi + (-0x1); /* 0x120E1CC2: lea eax, [esi - 1] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E1CC5: mov dword ptr [ebp - 0x5c], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x5C))); /* 0x120E1CC8: fild dword ptr [ebp - 0x5c] */
    /* test eax, eax */ /* 0x120E1CCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E1CD5; /* 0x120E1CCD: jns 0x120e1cd5 */
L_120E1CCF:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E1CCF: fadd dword ptr [0x120014d0] */
L_120E1CD5:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120E1CD5: fstp dword ptr [ebp - 0x30] */
    MEM16(ebp + (-0x60)) = _fpu_cw; /* 0x120E1CD8: fnstcw word ptr [ebp - 0x60] */
    eax = MEM32(ebp + (-0x60)); /* 0x120E1CDB: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E1CDE: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x120E1CE3: mov dword ptr [ebp - 0x34], eax */
    _fpu_cw = MEM16(ebp + (-0x34)); /* 0x120E1CE6: fldcw word ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E1CE9: fld dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x60)); /* 0x120E1CEC: mov eax, dword ptr [ebp - 0x60] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E1CEF: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E1CF5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1CF7: fld dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E1CFA: mov dword ptr [ebp - 0x5c], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1CFD: fld dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x40)) = edi; /* 0x120E1D00: mov dword ptr [ebp - 0x40], edi */
    fp_push(0.0); /* 0x120E1D03: fldz  */
    goto L_120E1D7E; /* 0x120E1D05: jmp 0x120e1d7e */
L_120E1D07:
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1D07: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1D0A: fld dword ptr [ebp - 0x28] */
L_120E1D0D:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1D0D: fld dword ptr [edx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1D10: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D12: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1D14: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1D34; /* 0x120E1D17: jp 0x120e1d34 */
L_120E1D19:
    fp_xch(2); /* 0x120E1D19: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx + ecx * 4)); /* 0x120E1D1B: fcom dword ptr [edx + ecx*4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D1E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1D20: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1D32; /* 0x120E1D23: jp 0x120e1d32 */
L_120E1D25:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1D25: fstp st(1) */
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1D27: fld dword ptr [edx + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1D2A: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1D2D: fld dword ptr [ebp - 0x2c] */
    fp_xch(1); /* 0x120E1D30: fxch st(1) */
L_120E1D32:
    fp_xch(2); /* 0x120E1D32: fxch st(2) */
L_120E1D34:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1D34: fld dword ptr [edx + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1D37: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D39: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1D3B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1D5B; /* 0x120E1D3E: jne 0x120e1d5b */
L_120E1D40:
    fp_xch(3); /* 0x120E1D40: fxch st(3) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx + ecx * 4)); /* 0x120E1D42: fcom dword ptr [edx + ecx*4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D45: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1D47: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1D59; /* 0x120E1D4A: jne 0x120e1d59 */
L_120E1D4C:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1D4C: fstp st(3) */
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1D4E: fld dword ptr [edx + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1D51: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1D54: fld dword ptr [ebp - 0x28] */
    goto L_120E1D5B; /* 0x120E1D57: jmp 0x120e1d5b */
L_120E1D59:
    fp_xch(3); /* 0x120E1D59: fxch st(3) */
L_120E1D5B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E1D5B: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E1D5C: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1D0D; /* 0x120E1D5F: jb 0x120e1d0d */
L_120E1D61:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E1D61: fstp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1D63: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D65: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E1D67: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1CC0; /* 0x120E1D6A: jp 0x120e1cc0 */
L_120E1D70:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1D70: fstp dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_120E1CC2; /* 0x120E1D73: jmp 0x120e1cc2 */
L_120E1D78:
    fp_xch(4); /* 0x120E1D78: fxch st(4) */
    fp_xch(1); /* 0x120E1D7A: fxch st(1) */
    fp_xch(3); /* 0x120E1D7C: fxch st(3) */
L_120E1D7E:
    fp_push(_st[2]); /* 0x120E1D7E: fld st(2) */
    fp_push(_st[2]); /* 0x120E1D80: fld st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E1D82: fsubp st(1) */
    fp_push(*(double*)ADDR(0x12008100)); /* 0x120E1D84: fld qword ptr [0x12008100] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1D8A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1D8C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1D8E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E1FB6; /* 0x120E1D91: je 0x120e1fb6 */
L_120E1D97:
    fp_push(_st[5]); /* 0x120E1D97: fld st(5) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E1D99: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120E1D9B: fstp dword ptr [ebp - 0x64] */
    /* test esi, esi */ /* 0x120E1D9E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E1DC8; /* 0x120E1DA0: je 0x120e1dc8 */
L_120E1DA2:
    ecx = MEM32(ebp + (-0x48)); /* 0x120E1DA2: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x120E1DA5: sub ecx, ebx */
    _flag_k = FK_CMP;
    edi = ebp + (-0x24); /* 0x120E1DA7: lea edi, [ebp - 0x24] */
    eax = ebx; /* 0x120E1DAA: mov eax, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x120E1DAC: sub edi, ebx */
    _flag_k = FK_CMP;
    ebx = esi; /* 0x120E1DAE: mov ebx, esi */
L_120E1DB0:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x120E1DB0: fld dword ptr [ecx + eax] */
    fp_push(_st[3]); /* 0x120E1DB3: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1DB5: fmulp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x120E1DB7: fld dword ptr [eax] */
    fp_push(_st[3]); /* 0x120E1DB9: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1DBB: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E1DBD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + eax) = _v; } /* 0x120E1DBF: fstp dword ptr [edi + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E1DC2: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E1DC5: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E1DB0; /* 0x120E1DC6: jne 0x120e1db0 */
L_120E1DC8:
    /* cmp esi, 6 */ /* 0x120E1DC8: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1DD5; /* 0x120E1DCB: jne 0x120e1dd5 */
L_120E1DCD:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E1DCD: fst dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x120E1DD0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E1DD2: fstp dword ptr [ebp - 8] */
L_120E1DD5:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x120E1DD5: fst dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E1DD8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120E1DDA: fst dword ptr [ebp - 0x54] */
    edi = esi + (-0x1); /* 0x120E1DDD: lea edi, [esi - 1] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x120E1DE0: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120E1DE3: fst dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E1DE6: fld dword ptr [ebp - 0x64] */
L_120E1DE9:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1DE9: fld dword ptr [edx + ecx*4] */
    fp_push(_st[3]); /* 0x120E1DEC: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E1DEE: fsubp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E1DF0: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120E1DF2: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120E1DF5: fld dword ptr [ebp - 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1DF8: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1DFA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1DFC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1E26; /* 0x120E1DFF: jp 0x120e1e26 */
L_120E1E01:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1E01: fstp st(0) */
    /* cmp esi, 6 */ /* 0x120E1E03: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1E22; /* 0x120E1E06: jne 0x120e1e22 */
L_120E1E08:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1E08: fld dword ptr [edx + ecx*4] */
    fp_push(_st[2]); /* 0x120E1E0B: fld st(2) */
    _st[0] *= _st[5]; /* 0x120E1E0D: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120E1E0F: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120E1E12: fld dword ptr [ebp - 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1E15: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1E17: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x120E1E19: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E1ECB; /* 0x120E1E1C: je 0x120e1ecb */
L_120E1E22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E1E22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E1E85; /* 0x120E1E24: jmp 0x120e1e85 */
L_120E1E26:
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120E1E26: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1E28: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x120E1E2A: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1E54; /* 0x120E1E2D: jne 0x120e1e54 */
L_120E1E2F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1E2F: fstp st(0) */
    /* cmp esi, 6 */ /* 0x120E1E31: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E1E50; /* 0x120E1E34: jne 0x120e1e50 */
L_120E1E36:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1E36: fld dword ptr [edx + ecx*4] */
    fp_push(_st[3]); /* 0x120E1E39: fld st(3) */
    fp_push(1.0); /* 0x120E1E3B: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E1E3D: faddp st(1) */
    _st[0] *= _st[5]; /* 0x120E1E3F: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120E1E41: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120E1E44: fld dword ptr [ebp - 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1E47: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1E49: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1E4B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E1ECB; /* 0x120E1E4E: jnp 0x120e1ecb */
L_120E1E50:
    eax = edi; /* 0x120E1E50: mov eax, edi */
    goto L_120E1E85; /* 0x120E1E52: jmp 0x120e1e85 */
L_120E1E54:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1E54: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1E56: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1E58: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E1E5A: fstp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E1E5C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120E1E5E: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E1E61: fld dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x58)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E1E64: fistp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1E67: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x58)); /* 0x120E1E6A: mov eax, dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1E6D: fld dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x120E1E70: fldz  */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E1E72: fld qword ptr [0x120014c0] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E1E78: fld dword ptr [ebp - 0x30] */
    fp_xch(4); /* 0x120E1E7B: fxch st(4) */
    fp_xch(1); /* 0x120E1E7D: fxch st(1) */
    fp_xch(3); /* 0x120E1E7F: fxch st(3) */
    fp_xch(1); /* 0x120E1E81: fxch st(1) */
    fp_xch(2); /* 0x120E1E83: fxch st(2) */
L_120E1E85:
    ebx = MEM32(ebp + (-0x38)); /* 0x120E1E85: mov ebx, dword ptr [ebp - 0x38] */
    /* cmp eax, esi */ /* 0x120E1E88: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E1ECE; /* 0x120E1E8A: jae 0x120e1ece */
L_120E1E8C:
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x120E1E8C: fld dword ptr [edx + ecx*4] */
    esi = MEM32(ebp + (-0x48)); /* 0x120E1E8F: mov esi, dword ptr [ebp - 0x48] */
    _st[0] -= (double)*(float*)ADDR(ebp + eax * 4 + (-0x24)); /* 0x120E1E92: fsub dword ptr [ebp + eax*4 - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120E1E96: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E1E99: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120E1E9C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + eax * 4); /* 0x120E1E9E: fmul dword ptr [ebx + eax*4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x50)); /* 0x120E1EA1: fadd dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x120E1EA4: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x120E1EA7: fld dword ptr [ebx + eax*4] */
    _st[0] *= _st[0]; /* 0x120E1EAA: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x120E1EAC: fadd dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x120E1EAF: fstp dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(esi + eax * 4); /* 0x120E1EB2: fmul dword ptr [esi + eax*4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x120E1EB5: fadd dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120E1EB8: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(esi + eax * 4)); /* 0x120E1EBB: fld dword ptr [esi + eax*4] */
    esi = MEM32(ebp + 0x10); /* 0x120E1EBE: mov esi, dword ptr [ebp + 0x10] */
    _st[0] *= _st[0]; /* 0x120E1EC1: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x120E1EC3: fadd dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120E1EC6: fstp dword ptr [ebp - 0x4c] */
    goto L_120E1ECE; /* 0x120E1EC9: jmp 0x120e1ece */
L_120E1ECB:
    ebx = MEM32(ebp + (-0x38)); /* 0x120E1ECB: mov ebx, dword ptr [ebp - 0x38] */
L_120E1ECE:
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E1ECE: fld dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E1ED1: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E1ED2: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1DE9; /* 0x120E1ED5: jb 0x120e1de9 */
L_120E1EDB:
    edi = MEM32(ebp + (-0x40)); /* 0x120E1EDB: mov edi, dword ptr [ebp - 0x40] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1EDE: fstp st(0) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1EE0: fstp st(3) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1EE2: fstp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x120E1EE4: fld dword ptr [ebp - 0x44] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1EE7: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1EE9: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x120E1EEB: fld dword ptr [ebp - 0x50] */
    /* test HI8(eax), 0x41u */ /* 0x120E1EEE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1F6D; /* 0x120E1EF1: jne 0x120e1f6d */
L_120E1EF3:
    fp_push(_st[0]); /* 0x120E1EF3: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120E1EF5: fdivrp st(2) */
    fp_xch(4); /* 0x120E1EF7: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120E1EF9: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1EFB: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1EFE: fld dword ptr [ebp - 0x2c] */
    fp_xch(3); /* 0x120E1F01: fxch st(3) */
L_120E1F03:
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x120E1F03: fld dword ptr [ebp - 0x4c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x120E1F06: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1F08: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x120E1F0A: fld dword ptr [ebp - 0x54] */
    /* test HI8(eax), 0x41u */ /* 0x120E1F0D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1F71; /* 0x120E1F10: jne 0x120e1f71 */
L_120E1F12:
    fp_push(_st[0]); /* 0x120E1F12: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120E1F14: fdivrp st(2) */
    fp_xch(3); /* 0x120E1F16: fxch st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120E1F18: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1F1A: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1F1D: fld dword ptr [ebp - 0x28] */
    fp_xch(2); /* 0x120E1F20: fxch st(2) */
L_120E1F22:
    fp_xch(4); /* 0x120E1F22: fxch st(4) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1F24: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1F26: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1F28: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1F45; /* 0x120E1F2B: jne 0x120e1f45 */
L_120E1F2D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120E1F2D: fstp dword ptr [ebp - 0x3c] */
    fp_xch(1); /* 0x120E1F30: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120E1F32: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E1F35: fld dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120E1F38: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1F3B: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1F3E: fld dword ptr [ebp - 0x28] */
    fp_xch(2); /* 0x120E1F41: fxch st(2) */
    fp_xch(1); /* 0x120E1F43: fxch st(1) */
L_120E1F45:
    fp_xch(1); /* 0x120E1F45: fxch st(1) */
    _st[0] *= _st[0]; /* 0x120E1F47: fmul st(0), st(0) */
    fp_push(*(double*)ADDR(0x120080F8)); /* 0x120E1F49: fld qword ptr [0x120080f8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1F4F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1F51: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1F53: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120E1F55: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1F75; /* 0x120E1F58: jne 0x120e1f75 */
L_120E1F5A:
    fp_xch(4); /* 0x120E1F5A: fxch st(4) */
    _st[0] *= _st[0]; /* 0x120E1F5C: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120E1F5E: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1F60: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1F62: fstp st(3) */
    /* test HI8(eax), 5 */ /* 0x120E1F64: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1F79; /* 0x120E1F67: jp 0x120e1f79 */
L_120E1F69:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1F69: fstp st(0) */
    goto L_120E1F95; /* 0x120E1F6B: jmp 0x120e1f95 */
L_120E1F6D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1F6D: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_120E1F03; /* 0x120E1F6F: jmp 0x120e1f03 */
L_120E1F71:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1F71: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_120E1F22; /* 0x120E1F73: jmp 0x120e1f22 */
L_120E1F75:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1F75: fstp st(0) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1F77: fstp st(3) */
L_120E1F79:
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E1F79: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E1F7F: inc edi */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E1F80: fld dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x40)) = edi; /* 0x120E1F83: mov dword ptr [ebp - 0x40], edi */
    /* cmp edi, 8 */ /* 0x120E1F86: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E1D78; /* 0x120E1F89: jb 0x120e1d78 */
L_120E1F8F:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E1F8F: fstp st(2) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E1F91: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1F93: fstp st(1) */
L_120E1F95:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1F95: fstp st(1) */
L_120E1F97:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1F97: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0x5C)); /* 0x120E1F99: fldcw word ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E1F9C: fld dword ptr [ebp - 0x2c] */
    edi = POP32_VAL(esp); /* 0x120E1F9F: pop edi */
    fp_push(0.0); /* 0x120E1FA0: fldz  */
    esi = POP32_VAL(esp); /* 0x120E1FA2: pop esi */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E1FA3: fcom st(1) */
    ebx = POP32_VAL(esp); /* 0x120E1FA5: pop ebx */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1FA6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E1FA8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E1FC2; /* 0x120E1FAB: jne 0x120e1fc2 */
L_120E1FAD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1FAD: fstp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120E1FAF: fst dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x120E1FB2: fld1  */
    goto L_120E1FDD; /* 0x120E1FB4: jmp 0x120e1fdd */
L_120E1FB6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1FB6: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E1FB8: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1FBA: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1FBC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1FBE: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_120E1F97; /* 0x120E1FC0: jmp 0x120e1f97 */
L_120E1FC2:
    fp_push(1.0); /* 0x120E1FC2: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1FC4: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1FC6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1FC8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1FD6; /* 0x120E1FCB: jp 0x120e1fd6 */
L_120E1FCD:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E1FCD: fstp st(2) */
    fp_xch(1); /* 0x120E1FCF: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120E1FD1: fst dword ptr [ebp - 0x30] */
    goto L_120E1FDD; /* 0x120E1FD4: jmp 0x120e1fdd */
L_120E1FD6:
    fp_xch(2); /* 0x120E1FD6: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120E1FD8: fstp dword ptr [ebp - 0x30] */
    fp_xch(1); /* 0x120E1FDB: fxch st(1) */
L_120E1FDD:
    eax = MEM32(ebp + (-0x68)); /* 0x120E1FDD: mov eax, dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E1FE0: fld dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120E1FE3: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E1FE5: fld dword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E1FE8: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E1FEA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E1FEC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E200E; /* 0x120E1FEF: jp 0x120e200e */
L_120E1FF1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E1FF1: fstp st(1) */
L_120E1FF3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E1FF3: fstp st(0) */
L_120E1FF5:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E1FF5: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120E1FF8: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E1FFB: fld dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x6C)); /* 0x120E1FFE: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E2001: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120E2003: fstp dword ptr [eax] */
    RECOMP_CALL(sub_121BECF5); /* 0x120E2005: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E200A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E200B: ret 0xc */
L_120E200E:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E200E: fstp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E2010: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2012: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E2014: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E1FF3; /* 0x120E2017: jp 0x120e1ff3 */
L_120E2019:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E2019: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_120E1FF5; /* 0x120E201B: jmp 0x120e1ff5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120E2022(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E2022u);

L_120E2022:
    edi = edi; /* 0x120E2022: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E2024: push ebp */
    ebp = esp; /* 0x120E2025: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x120E2027: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E202D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E2032: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E2034: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0xC), 3 */ /* 0x120E2037: cmp dword ptr [ebp + 0xc], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x120E203B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E203E: push ebx */
    PUSH32(esp, esi); /* 0x120E203F: push esi */
    ebx = ecx; /* 0x120E2040: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x120E2042: push edi */
    MEM32(ebp + (-0xE0)) = edx; /* 0x120E2043: mov dword ptr [ebp - 0xe0], edx */
    MEM32(ebp + (-0xCC)) = ebx; /* 0x120E2049: mov dword ptr [ebp - 0xcc], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2063; /* 0x120E204F: jne 0x120e2063 */
L_120E2051:
    ecx = 0x120081A8u; /* 0x120E2051: mov ecx, 0x120081a8 */
    MEM32(ebp + (-0xC8)) = ecx; /* 0x120E2056: mov dword ptr [ebp - 0xc8], ecx */
    ecx = 0x1200819Cu; /* 0x120E205C: mov ecx, 0x1200819c */
    goto L_120E2073; /* 0x120E2061: jmp 0x120e2073 */
L_120E2063:
    ecx = 0x1200818Cu; /* 0x120E2063: mov ecx, 0x1200818c */
    MEM32(ebp + (-0xC8)) = ecx; /* 0x120E2068: mov dword ptr [ebp - 0xc8], ecx */
    ecx = 0x1200817Cu; /* 0x120E206E: mov ecx, 0x1200817c */
L_120E2073:
    fp_push(0.0); /* 0x120E2073: fldz  */
    esi = 0x121D6E64u; /* 0x120E2075: mov esi, 0x121d6e64 */
    edi = ebp + (-0x7C); /* 0x120E207A: lea edi, [ebp - 0x7c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x120E207D: fst dword ptr [ebp - 0x6c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2080: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120E2081: fst dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120E2084: fstp dword ptr [ebp - 0x64] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2087: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2088: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2089: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E208A: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E208D: fld dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E2090: fld dword ptr [ebp - 0x7c] */
    edi = eax + 0x8; /* 0x120E2093: lea edi, [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E2096: fld dword ptr [ebp - 0x64] */
    PUSH32(esp, 0x10u); /* 0x120E2099: push 0x10 */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E209B: fld dword ptr [ebp - 0x68] */
    MEM32(ebp + (-0xC4)) = ecx; /* 0x120E209E: mov dword ptr [ebp - 0xc4], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E20A4: fld dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0xDC)) = edi; /* 0x120E20A7: mov dword ptr [ebp - 0xdc], edi */
    ecx = edi; /* 0x120E20AD: mov ecx, edi */
    esi = POP32_VAL(esp); /* 0x120E20AF: pop esi */
L_120E20B0:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E20B0: fld dword ptr [ecx - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120E20B3: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E20B5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E20B7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E20C9; /* 0x120E20BA: jp 0x120e20c9 */
L_120E20BC:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E20BC: fstp st(3) */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E20BE: fld dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x120E20C1: fstp dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E20C4: fld dword ptr [ebp - 0x7c] */
    fp_xch(3); /* 0x120E20C7: fxch st(3) */
L_120E20C9:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E20C9: fld dword ptr [ecx - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120E20CC: fcomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E20CE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E20D0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E20E2; /* 0x120E20D3: jp 0x120e20e2 */
L_120E20D5:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x120E20D5: fstp st(4) */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E20D7: fld dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120E20DA: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E20DD: fld dword ptr [ebp - 0x78] */
    fp_xch(4); /* 0x120E20E0: fxch st(4) */
L_120E20E2:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E20E2: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x120E20E4: fcomp st(6) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E20E6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E20E8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E20F9; /* 0x120E20EB: jp 0x120e20f9 */
L_120E20ED:
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x120E20ED: fstp st(5) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E20EF: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120E20F1: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E20F4: fld dword ptr [ebp - 0x74] */
    fp_xch(5); /* 0x120E20F7: fxch st(5) */
L_120E20F9:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E20F9: fld dword ptr [ecx - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E20FC: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E20FE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E2100: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E2110; /* 0x120E2103: jne 0x120e2110 */
L_120E2105:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2105: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E2107: fld dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x120E210A: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E210D: fld dword ptr [ebp - 0x6c] */
L_120E2110:
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E2110: fld dword ptr [ecx - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E2113: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2115: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E2117: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E2129; /* 0x120E211A: jne 0x120e2129 */
L_120E211C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E211C: fstp st(1) */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E211E: fld dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120E2121: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E2124: fld dword ptr [ebp - 0x68] */
    fp_xch(1); /* 0x120E2127: fxch st(1) */
L_120E2129:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E2129: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x120E212B: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E212D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E212F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E2140; /* 0x120E2132: jne 0x120e2140 */
L_120E2134:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E2134: fstp st(2) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E2136: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120E2138: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E213B: fld dword ptr [ebp - 0x64] */
    fp_xch(2); /* 0x120E213E: fxch st(2) */
L_120E2140:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E2140: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E2143: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E20B0; /* 0x120E2144: jne 0x120e20b0 */
L_120E214A:
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x120E214A: fsubrp st(3) */
    fp_xch(2); /* 0x120E214C: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120E214E: fstp dword ptr [ebp - 0x90] */
    fp_push(_st[1]); /* 0x120E2154: fld st(1) */
    fp_push(_st[3]); /* 0x120E2156: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E2158: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120E215A: fstp dword ptr [ebp - 0x8c] */
    fp_push(_st[0]); /* 0x120E2160: fld st(0) */
    fp_push(_st[4]); /* 0x120E2162: fld st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E2164: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120E2166: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120E216C: fld dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E2172: fld dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120E2178: fld dword ptr [ebp - 0x90] */
    _st[0] *= _st[0]; /* 0x120E217E: fmul st(0), st(0) */
    fp_xch(2); /* 0x120E2180: fxch st(2) */
    _st[0] *= _st[0]; /* 0x120E2182: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2184: faddp st(2) */
    _st[0] *= _st[0]; /* 0x120E2186: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2188: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x120E218A: fstp dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(0x12005428)); /* 0x120E2190: fld dword ptr [0x12005428] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x120E2196: fld dword ptr [ebp - 0x9c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E219C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E219E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E21A0: fstp st(1) */
    fp_push(0.0); /* 0x120E21A2: fldz  */
    /* test HI8(eax), 5 */ /* 0x120E21A4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E21CB; /* 0x120E21A7: jp 0x120e21cb */
L_120E21A9:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E21A9: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E21AB: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E21AD: fld dword ptr [ebp - 0x7c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E21B0: fstp dword ptr [edx] */
    fp_xch(2); /* 0x120E21B2: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x120E21B4: fstp dword ptr [edx + 4] */
    fp_xch(2); /* 0x120E21B7: fxch st(2) */
L_120E21B9:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x120E21B9: fstp dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E21BC: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x120E21BF: fstp dword ptr [ebx] */
    fp_xch(1); /* 0x120E21C1: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x120E21C3: fstp dword ptr [ebx + 4] */
    goto L_120E2886; /* 0x120E21C6: jmp 0x120e2886 */
L_120E21CB:
    fp_push(1.0); /* 0x120E21CB: fld1  */
    PUSH32(esp, 0x10u); /* 0x120E21CD: push 0x10 */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120E21CF: fdivrp st(2) */
    eax = edi; /* 0x120E21D1: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x120E21D3: pop ecx */
    fp_xch(1); /* 0x120E21D4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x120E21D6: fstp dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x120E21DC: fld dword ptr [ebp - 0xc0] */
    fp_push(_st[0]); /* 0x120E21E2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x90)); /* 0x120E21E4: fmul dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E21EA: fstp dword ptr [ebp - 0xac] */
    fp_push(_st[0]); /* 0x120E21F0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x120E21F2: fmul dword ptr [ebp - 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E21F8: fstp dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x88)); /* 0x120E21FE: fmul dword ptr [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120E2204: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E220A: fld dword ptr [ebp - 0x6c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x120E220D: fadd dword ptr [ebp - 0x7c] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E2210: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x120E2216: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E2218: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120E221A: fstp dword ptr [ebp - 0x90] */
    fp_xch(3); /* 0x120E2220: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120E2222: faddp st(4) */
    fp_xch(3); /* 0x120E2224: fxch st(3) */
    _st[0] *= _st[2]; /* 0x120E2226: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120E2228: fstp dword ptr [ebp - 0x8c] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120E222E: faddp st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2230: fmulp st(2) */
    fp_xch(1); /* 0x120E2232: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120E2234: fstp dword ptr [ebp - 0x88] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E223A: fst dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E223D: fst dword ptr [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E2240: fst dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E2243: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120E2246: fld dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x120E224C: fld dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E2252: fld dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E2258: fld dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120E225E: fld dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120E2264: fld dword ptr [ebp - 0x90] */
L_120E226A:
    _st[0] = (double)*(float*)ADDR(eax + (-0x8)) - _st[0]; /* 0x120E226A: fsubr dword ptr [eax - 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E226D: fmulp st(3) */
    fp_xch(2); /* 0x120E226F: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x120E2271: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x120E2277: fld dword ptr [eax - 4] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120E227A: fsubrp st(2) */
    fp_push(_st[2]); /* 0x120E227C: fld st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E227E: fmulp st(2) */
    fp_xch(1); /* 0x120E2280: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E2282: fstp dword ptr [ebp - 0xb8] */
    _st[0] = (double)*(float*)ADDR(eax) - _st[0]; /* 0x120E2288: fsubr dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E228A: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E228D: dec ecx */
    _flag_k = FK_DEC;
    fp_push(_st[2]); /* 0x120E228E: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E2290: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x120E2292: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E2298: fld dword ptr [ebp - 0xb8] */
    fp_push(_st[0]); /* 0x120E229E: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E22A0: fld dword ptr [ebp - 0xbc] */
    fp_push(_st[0]); /* 0x120E22A6: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E22A8: faddp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E22AA: fld dword ptr [ebp - 0xb4] */
    fp_push(_st[0]); /* 0x120E22B0: fld st(0) */
    _st[0] += _st[3]; /* 0x120E22B2: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E22B4: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E22B7: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x120E22BA: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x120E22BC: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E22BF: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x120E22C2: fld st(0) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x120E22C4: fsubp st(3) */
    fp_xch(2); /* 0x120E22C6: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E22C8: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E22CB: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x120E22CE: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x120E22D0: fadd dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E22D3: fstp dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120E22D6: fsubrp st(2) */
    fp_push(_st[0]); /* 0x120E22D8: fld st(0) */
    _st[0] += _st[2]; /* 0x120E22DA: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E22DC: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E22DF: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x120E22E2: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x120E22E4: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E22E7: fstp dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E22EA: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E22EC: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E22EF: fld dword ptr [ebp - 0x58] */
    _st[0] *= _st[0]; /* 0x120E22F2: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x120E22F4: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E22F7: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E22FA: fld dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E2300: fld dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120E2306: fld dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120E230C: fld dword ptr [ebp - 0x90] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E226A; /* 0x120E2312: jne 0x120e226a */
L_120E2318:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2318: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E231A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E231C: fstp st(2) */
    ebx = edi; /* 0x120E231E: mov ebx, edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2320: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E2322: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2324: fstp st(0) */
    MEM32(ebp + (-0xC0)) = edi; /* 0x120E2326: mov dword ptr [ebp - 0xc0], edi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E232C: fstp st(1) */
    MEM32(ebp + (-0x58)) = ebx; /* 0x120E232E: mov dword ptr [ebp - 0x58], ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2331: fstp st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E2333: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120E2334: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120E2337: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E233D: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E2340: fld dword ptr [ebp - 0x78] */
L_120E2343:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x14))); /* 0x120E2343: fld dword ptr [ebp + ecx*4 - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120E2347: fld dword ptr [ebp - 0x94] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E234D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E234F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E2351: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E2362; /* 0x120E2354: jp 0x120e2362 */
L_120E2356:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x14))); /* 0x120E2356: fld dword ptr [ebp + ecx*4 - 0x14] */
    ebx = ecx; /* 0x120E235A: mov ebx, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120E235C: fstp dword ptr [ebp - 0x94] */
L_120E2362:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E2362: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 4 */ /* 0x120E2363: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E2343; /* 0x120E2366: jb 0x120e2343 */
L_120E2368:
    MEM32(ebp + (-0x58)) = ebx; /* 0x120E2368: mov dword ptr [ebp - 0x58], ebx */
    /* test LO8(ebx), 2 */ /* 0x120E236B: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0xCC)); /* 0x120E236E: mov ebx, dword ptr [ebp - 0xcc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E238E; /* 0x120E2374: je 0x120e238e */
L_120E2376:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120E2376: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E237C: fld dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120E237F: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120E2382: fld dword ptr [ebp - 0x98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120E2388: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E238B: fld dword ptr [ebp - 0x78] */
L_120E238E:
    /* test MEM8(ebp + (-0x58)), 1 */ /* 0x120E238E: test byte ptr [ebp - 0x58], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x58))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E2392: fld dword ptr [ebp - 0x68] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E23B6; /* 0x120E2395: je 0x120e23b6 */
L_120E2397:
    fp_xch(2); /* 0x120E2397: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x120E2399: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E239F: fld dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120E23A2: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x120E23A5: fld dword ptr [ebp - 0x98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120E23AB: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E23AE: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E23B1: fld dword ptr [ebp - 0x64] */
    goto L_120E23BF; /* 0x120E23B4: jmp 0x120e23bf */
L_120E23B6:
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E23B6: fld dword ptr [ebp - 0x64] */
    fp_xch(1); /* 0x120E23B9: fxch st(1) */
    fp_xch(3); /* 0x120E23BB: fxch st(3) */
    fp_xch(1); /* 0x120E23BD: fxch st(1) */
L_120E23BF:
    fp_push(*(float*)&MEM32(0x12008178)); /* 0x120E23BF: fld dword ptr [0x12008178] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x9C))); /* 0x120E23C5: fcomp dword ptr [ebp - 0x9c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E23CB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E23CD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E23E1; /* 0x120E23D0: jne 0x120e23e1 */
L_120E23D2:
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E23D2: fld dword ptr [ebp - 0x7c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E23D5: fstp dword ptr [edx] */
    fp_xch(2); /* 0x120E23D7: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x120E23D9: fstp dword ptr [edx + 4] */
    RECOMP_BACKEDGE();
    goto L_120E21B9; /* 0x120E23DC: jmp 0x120e21b9 */
L_120E23E1:
    ecx = MEM32(ebp + 0xC); /* 0x120E23E1: mov ecx, dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E23E4: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E23E6: fstp st(2) */
    edx = ecx + (-0x1); /* 0x120E23E8: lea edx, [ecx - 1] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E23EB: fstp st(1) */
    MEM32(ebp + (-0xD8)) = edx; /* 0x120E23ED: mov dword ptr [ebp - 0xd8], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E23F3: fstp st(0) */
    fp_push((double)(int32_t)MEM32(ebp + (-0xD8))); /* 0x120E23F5: fild dword ptr [ebp - 0xd8] */
    /* test edx, edx */ /* 0x120E23FB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E2405; /* 0x120E23FD: jns 0x120e2405 */
L_120E23FF:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E23FF: fadd dword ptr [0x120014d0] */
L_120E2405:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x120E2405: fstp dword ptr [ebp - 0xd4] */
    MEM16(ebp + (-0x9C)) = _fpu_cw; /* 0x120E240B: fnstcw word ptr [ebp - 0x9c] */
    eax = MEM32(ebp + (-0x9C)); /* 0x120E2411: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E2417: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E241C: mov dword ptr [ebp - 0x5c], eax */
    _fpu_cw = MEM16(ebp + (-0x5C)); /* 0x120E241F: fldcw word ptr [ebp - 0x5c] */
    eax = MEM32(ebp + (-0x9C)); /* 0x120E2422: mov eax, dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E2428: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E242B: fld dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x120E242E: mov dword ptr [ebp - 0xd8], eax */
    fp_push(0.0); /* 0x120E2434: fldz  */
L_120E2436:
    /* test ecx, ecx */ /* 0x120E2436: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E249A; /* 0x120E2438: je 0x120e249a */
L_120E243A:
    ebx = MEM32(ebp + (-0xC8)); /* 0x120E243A: mov ebx, dword ptr [ebp - 0xc8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2440: fstp st(0) */
    ecx = MEM32(ebp + (-0xC4)); /* 0x120E2442: mov ecx, dword ptr [ebp - 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E2448: fld dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E244B: fld dword ptr [ebp - 0x68] */
    eax = ebx; /* 0x120E244E: mov eax, ebx */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E2450: fld dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x120E2453: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0xC); /* 0x120E2455: mov ebx, dword ptr [ebp + 0xc] */
    esi = ebp + (-0x50); /* 0x120E2458: lea esi, [ebp - 0x50] */
L_120E245B:
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E245B: fld dword ptr [eax + ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x120E245E: fmul dword ptr [ebp - 0x6c] */
    fp_push(_st[1]); /* 0x120E2461: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120E2463: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2465: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x4)) = _v; } /* 0x120E2467: fstp dword ptr [esi - 4] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E246A: fld dword ptr [eax + ecx] */
    fp_push(_st[2]); /* 0x120E246D: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E246F: fmulp st(1) */
    fp_push(_st[4]); /* 0x120E2471: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120E2473: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2475: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120E2477: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120E2479: add esi, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E247C: fld dword ptr [eax + ecx] */
    fp_push(_st[3]); /* 0x120E247F: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E2481: fmulp st(1) */
    fp_push(_st[5]); /* 0x120E2483: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120E2485: fmul dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E2487: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E248A: dec ebx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E248B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x120E248D: fstp dword ptr [esi - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E245B; /* 0x120E2490: jne 0x120e245b */
L_120E2492:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E2492: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2494: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2496: fstp st(0) */
    fp_push(0.0); /* 0x120E2498: fldz  */
L_120E249A:
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E249A: fld dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E249D: fld dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x120E24A0: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E24A2: fsubp st(2) */
    fp_xch(1); /* 0x120E24A4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x120E24A6: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E24AC: fld dword ptr [ebp - 0x68] */
    fp_push(_st[3]); /* 0x120E24AF: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E24B1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E24B3: fstp dword ptr [ebp - 0xb8] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E24B9: fld dword ptr [ebp - 0x64] */
    fp_push(_st[4]); /* 0x120E24BC: fld st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E24BE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x120E24C0: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E24C6: fld dword ptr [ebp - 0xb8] */
    fp_push(_st[0]); /* 0x120E24CC: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E24CE: fld dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E24D4: fld dword ptr [ebp - 0xbc] */
    _st[0] *= _st[0]; /* 0x120E24DA: fmul st(0), st(0) */
    fp_xch(2); /* 0x120E24DC: fxch st(2) */
    _st[0] *= _st[0]; /* 0x120E24DE: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E24E0: faddp st(2) */
    _st[0] *= _st[0]; /* 0x120E24E2: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E24E4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120E24E6: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x120E24E9: fld dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(0x12008178)); /* 0x120E24EC: fld dword ptr [0x12008178] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E24F2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E24F4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E24F6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E2849; /* 0x120E24F9: je 0x120e2849 */
L_120E24FF:
    _st[0] = (double)*(float*)ADDR(ebp + (-0xD4)) / _st[0]; /* 0x120E24FF: fdivr dword ptr [ebp - 0xd4] */
    esi = MEM32(ebp + (-0xDC)); /* 0x120E2505: mov esi, dword ptr [ebp - 0xdc] */
    ecx = MEM32(ebp + (-0xC8)); /* 0x120E250B: mov ecx, dword ptr [ebp - 0xc8] */
    edi = MEM32(ebp + (-0xC4)); /* 0x120E2511: mov edi, dword ptr [ebp - 0xc4] */
    MEM32(ebp + (-0x98)) = 0x10u; /* 0x120E2517: mov dword ptr [ebp - 0x98], 0x10 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120E2521: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x120E2524: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[0]); /* 0x120E2527: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xBC)); /* 0x120E2529: fmul dword ptr [ebp - 0xbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x120E252F: fstp dword ptr [ebp - 0xbc] */
    fp_push(_st[0]); /* 0x120E2535: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2537: fmulp st(2) */
    fp_xch(1); /* 0x120E2539: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E253B: fstp dword ptr [ebp - 0xb8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB4)); /* 0x120E2541: fmul dword ptr [ebp - 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x120E2547: fstp dword ptr [ebp - 0xb4] */
    fp_xch(1); /* 0x120E254D: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120E254F: fst dword ptr [ebp - 0xa4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E2555: fst dword ptr [ebp - 0xa8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E255B: fst dword ptr [ebp - 0xac] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120E2561: fst dword ptr [ebp - 0x88] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120E2567: fst dword ptr [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120E256D: fst dword ptr [ebp - 0x90] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120E2573: fst dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E2579: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E257C: fld dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E2582: fld dword ptr [ebp - 0xb8] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E2588: fld dword ptr [ebp - 0xbc] */
L_120E258E:
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x120E258E: fld dword ptr [esi - 4] */
    fp_push(_st[5]); /* 0x120E2591: fld st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E2593: fsubp st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2595: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi + (-0x8))); /* 0x120E2597: fld dword ptr [esi - 8] */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120E259A: fsubrp st(4) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E259C: fmulp st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E259E: faddp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120E25A0: fld dword ptr [esi] */
    fp_push(_st[4]); /* 0x120E25A2: fld st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E25A4: fsubp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E25A6: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E25A8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120E25AA: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x120E25AD: fld dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0xD4))); /* 0x120E25B0: fld dword ptr [ebp - 0xd4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E25B6: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E25B8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E25BA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E25C5; /* 0x120E25BD: jp 0x120e25c5 */
L_120E25BF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E25BF: fstp st(0) */
    ebx = edx; /* 0x120E25C1: mov ebx, edx */
    goto L_120E25E7; /* 0x120E25C3: jmp 0x120e25e7 */
L_120E25C5:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E25C5: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E25C7: fstp st(0) */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E25C9: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x120E25CF: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x120E25D2: fld dword ptr [ebp - 0x80] */
    MEM32(ebp + (-0xD0)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E25D5: fistp dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E25DB: fld dword ptr [ebp - 0x74] */
    ebx = MEM32(ebp + (-0xD0)); /* 0x120E25DE: mov ebx, dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E25E4: fld dword ptr [ebp - 0x78] */
L_120E25E7:
    eax = ebx; /* 0x120E25E7: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120E25E9: add eax, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + eax * 8 + (-0x54))); /* 0x120E25EB: fld dword ptr [ebp + eax*8 - 0x54] */
    _st[0] -= (double)*(float*)ADDR(esi + (-0x8)); /* 0x120E25EF: fsub dword ptr [esi - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF0)) = _v; } /* 0x120E25F2: fstp dword ptr [ebp - 0xf0] */
    fp_push(*(float*)&MEM32(ebp + eax * 8 + (-0x50))); /* 0x120E25F8: fld dword ptr [ebp + eax*8 - 0x50] */
    _st[0] -= (double)*(float*)ADDR(esi + (-0x4)); /* 0x120E25FC: fsub dword ptr [esi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x120E25FF: fstp dword ptr [ebp - 0xec] */
    fp_push(*(float*)&MEM32(ebp + eax * 8 + (-0x4C))); /* 0x120E2605: fld dword ptr [ebp + eax*8 - 0x4c] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x120E2609: fsub dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120E260B: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x98))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x98)) = MEM32(ebp + (-0x98)) - 1; /* 0x120E260E: dec dword ptr [ebp - 0x98] */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x120E2614: fstp dword ptr [ebp - 0xe8] */
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x120E261A: fld dword ptr [ecx + ebx*4] */
    fp_push(*(double*)ADDR(0x12005B98)); /* 0x120E261D: fld qword ptr [0x12005b98] */
    _st[1] *= _st[0]; /* 0x120E2623: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E2625: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x120E2627: fstp dword ptr [ebp - 0x80] */
    _st[0] *= (double)*(float*)ADDR(edi + ebx * 4); /* 0x120E262A: fmul dword ptr [edi + ebx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120E262D: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x120E2630: fld dword ptr [ecx + ebx*4] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x120E2633: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x120E2636: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2638: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E263A: fld dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E263D: faddp st(2) */
    fp_xch(1); /* 0x120E263F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E2641: fstp dword ptr [ebp - 0x58] */
    fp_push(_st[0]); /* 0x120E2644: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xF0))); /* 0x120E2646: fld dword ptr [ebp - 0xf0] */
    fp_push(_st[0]); /* 0x120E264C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E264E: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120E2650: fld dword ptr [ebp - 0x90] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2656: faddp st(2) */
    fp_xch(1); /* 0x120E2658: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x120E265A: fstp dword ptr [ebp - 0x90] */
    fp_push(_st[1]); /* 0x120E2660: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xEC))); /* 0x120E2662: fld dword ptr [ebp - 0xec] */
    fp_push(_st[0]); /* 0x120E2668: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E266A: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120E266C: fld dword ptr [ebp - 0x8c] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2672: faddp st(2) */
    fp_xch(1); /* 0x120E2674: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x120E2676: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0xE8))); /* 0x120E267C: fld dword ptr [ebp - 0xe8] */
    fp_push(_st[0]); /* 0x120E2682: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120E2684: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E2686: fld dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120E268C: faddp st(4) */
    fp_xch(3); /* 0x120E268E: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x120E2690: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x120E2696: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[0]); /* 0x120E2699: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + ebx * 4); /* 0x120E269B: fmul dword ptr [edi + ebx*4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x94)); /* 0x120E269E: fadd dword ptr [ebp - 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x120E26A4: fstp dword ptr [ebp - 0x94] */
    fp_push(_st[0]); /* 0x120E26AA: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E26AC: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E26AE: fld dword ptr [ebp - 0xac] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120E26B4: faddp st(3) */
    fp_xch(2); /* 0x120E26B6: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E26B8: fstp dword ptr [ebp - 0xac] */
    fp_push(_st[1]); /* 0x120E26BE: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E26C0: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x120E26C2: fadd dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E26C8: fstp dword ptr [ebp - 0xa8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E26CE: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xA4)); /* 0x120E26D0: fadd dword ptr [ebp - 0xa4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x120E26D6: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E26DC: fld dword ptr [ebp - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E26DF: fld dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E26E5: fld dword ptr [ebp - 0xb8] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E26EB: fld dword ptr [ebp - 0xbc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E258E; /* 0x120E26F1: jne 0x120e258e */
L_120E26F7:
    edi = MEM32(ebp + (-0xC0)); /* 0x120E26F7: mov edi, dword ptr [ebp - 0xc0] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E26FD: fstp st(1) */
    ecx = MEM32(ebp + 0xC); /* 0x120E26FF: mov ecx, dword ptr [ebp + 0xc] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E2702: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2704: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2706: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120E2708: fld dword ptr [ebp - 0x58] */
    fp_push(0.0); /* 0x120E270B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E270D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E270F: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x120E2711: fld dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x120E2717: fld dword ptr [ebp - 0x90] */
    /* test HI8(eax), 5 */ /* 0x120E271D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E27C1; /* 0x120E2720: jp 0x120e27c1 */
L_120E2726:
    fp_push(*(double*)ADDR(0x120019C8)); /* 0x120E2726: fld qword ptr [0x120019c8] */
    { double _v = fp_pop(); _st[3] = _st[3] == 0.0 ? _v : _v / _st[3]; } /* 0x120E272C: fdivrp st(4) */
    fp_xch(3); /* 0x120E272E: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x120E2730: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x120E2733: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x120E2736: fld st(0) */
    fp_push(_st[4]); /* 0x120E2738: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E273A: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x120E273C: fadd dword ptr [ebp - 0x7c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x120E273F: fstp dword ptr [ebp - 0x7c] */
    fp_push(_st[0]); /* 0x120E2742: fld st(0) */
    fp_push(_st[2]); /* 0x120E2744: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E2746: fmulp st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120E2748: faddp st(5) */
    fp_xch(4); /* 0x120E274A: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x120E274C: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E274F: fld dword ptr [ebp - 0x88] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120E2755: fmulp st(4) */
    fp_xch(3); /* 0x120E2757: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x120E2759: faddp st(4) */
    fp_xch(3); /* 0x120E275B: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x120E275D: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E2760: fld dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E2763: fld dword ptr [ebp - 0x78] */
    fp_xch(1); /* 0x120E2766: fxch st(1) */
    fp_xch(4); /* 0x120E2768: fxch st(4) */
    fp_xch(1); /* 0x120E276A: fxch st(1) */
    fp_xch(3); /* 0x120E276C: fxch st(3) */
L_120E276E:
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x120E276E: fld dword ptr [ebp - 0x94] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E2774: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2776: fnstsw ax */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E2778: fld dword ptr [ebp - 0xac] */
    /* test HI8(eax), 0x41u */ /* 0x120E277E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E27C5; /* 0x120E2781: jne 0x120e27c5 */
L_120E2783:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2783: fstp st(0) */
    _st[0] = *(double*)ADDR(0x120019C8) / _st[0]; /* 0x120E2785: fdivr qword ptr [0x120019c8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x120E278B: fstp dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x120E278E: fld dword ptr [ebp - 0x80] */
    fp_push(_st[0]); /* 0x120E2791: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x120E2793: fmul dword ptr [ebp - 0xac] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x120E2799: fadd dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x120E279C: fstp dword ptr [ebp - 0x6c] */
    fp_push(_st[0]); /* 0x120E279F: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x120E27A1: fmul dword ptr [ebp - 0xa8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x68)); /* 0x120E27A7: fadd dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x120E27AA: fstp dword ptr [ebp - 0x68] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA4)); /* 0x120E27AD: fmul dword ptr [ebp - 0xa4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x64)); /* 0x120E27B3: fadd dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120E27B6: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E27B9: fld dword ptr [ebp - 0xac] */
    goto L_120E27C7; /* 0x120E27BF: jmp 0x120e27c7 */
L_120E27C1:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E27C1: fstp st(3) */
    RECOMP_BACKEDGE();
    goto L_120E276E; /* 0x120E27C3: jmp 0x120e276e */
L_120E27C5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E27C5: fstp st(1) */
L_120E27C7:
    fp_xch(3); /* 0x120E27C7: fxch st(3) */
    _st[0] *= _st[0]; /* 0x120E27C9: fmul st(0), st(0) */
    fp_push(*(double*)ADDR(0x120068D0)); /* 0x120E27CB: fld qword ptr [0x120068d0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E27D1: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E27D3: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E27D5: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x120E27D7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E282D; /* 0x120E27DA: jne 0x120e282d */
L_120E27DC:
    fp_xch(1); /* 0x120E27DC: fxch st(1) */
    _st[0] *= _st[0]; /* 0x120E27DE: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E27E0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E27E2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E27E4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E2833; /* 0x120E27E7: jp 0x120e2833 */
L_120E27E9:
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x120E27E9: fld dword ptr [ebp - 0x88] */
    _st[0] *= _st[0]; /* 0x120E27EF: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E27F1: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E27F3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E27F5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E2833; /* 0x120E27F8: jp 0x120e2833 */
L_120E27FA:
    fp_xch(2); /* 0x120E27FA: fxch st(2) */
    _st[0] *= _st[0]; /* 0x120E27FC: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E27FE: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2800: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E2802: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E2835; /* 0x120E2805: jp 0x120e2835 */
L_120E2807:
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x120E2807: fld dword ptr [ebp - 0xa8] */
    _st[0] *= _st[0]; /* 0x120E280D: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E280F: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2811: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E2813: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E2835; /* 0x120E2816: jp 0x120e2835 */
L_120E2818:
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x120E2818: fld dword ptr [ebp - 0xa4] */
    _st[0] *= _st[0]; /* 0x120E281E: fmul st(0), st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E2820: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E2822: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E2824: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x120E2826: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E284F; /* 0x120E2829: jnp 0x120e284f */
L_120E282B:
    goto L_120E2837; /* 0x120E282B: jmp 0x120e2837 */
L_120E282D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E282D: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E282F: fstp st(2) */
    goto L_120E2835; /* 0x120E2831: jmp 0x120e2835 */
L_120E2833:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2833: fstp st(0) */
L_120E2835:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E2835: fstp st(1) */
L_120E2837:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E2837: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC0)) = edi; /* 0x120E2838: mov dword ptr [ebp - 0xc0], edi */
    /* cmp edi, 8 */ /* 0x120E283E: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E2436; /* 0x120E2841: jb 0x120e2436 */
L_120E2847:
    goto L_120E284F; /* 0x120E2847: jmp 0x120e284f */
L_120E2849:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2849: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E284B: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E284D: fstp st(0) */
L_120E284F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E284F: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E2851: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2853: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0xD8)); /* 0x120E2855: fldcw word ptr [ebp - 0xd8] */
    edx = MEM32(ebp + (-0xE0)); /* 0x120E285B: mov edx, dword ptr [ebp - 0xe0] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x120E2861: fld dword ptr [ebp - 0x7c] */
    ebx = MEM32(ebp + (-0xCC)); /* 0x120E2864: mov ebx, dword ptr [ebp - 0xcc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E286A: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x120E286C: fld dword ptr [ebp - 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x120E286F: fstp dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x120E2872: fld dword ptr [ebp - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x120E2875: fstp dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x120E2878: fld dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x120E287B: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x120E287D: fld dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x120E2880: fstp dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x120E2883: fld dword ptr [ebp - 0x64] */
L_120E2886:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E2886: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x120E2889: fstp dword ptr [ebx + 8] */
    edi = POP32_VAL(esp); /* 0x120E288C: pop edi */
    esi = POP32_VAL(esp); /* 0x120E288D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E288E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E2890: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E2891: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E2896: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E2897: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E289F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E289Fu);

L_120E289F:
    edi = edi; /* 0x120E289F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E28A1: push ebp */
    ebp = esp; /* 0x120E28A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x330u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x330u; /* 0x120E28A4: sub esp, 0x330 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E28AA: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E28AF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E28B1: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120E28B4: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x120019B0)); /* 0x120E28B8: fld dword ptr [0x120019b0] */
    PUSH32(esp, ebx); /* 0x120E28BE: push ebx */
    PUSH32(esp, esi); /* 0x120E28BF: push esi */
    esi = ecx; /* 0x120E28C0: mov esi, ecx */
    ebx = edx; /* 0x120E28C2: mov ebx, edx */
    PUSH32(esp, edi); /* 0x120E28C4: push edi */
    MEM32(ebp + (-0x2B8)) = esi; /* 0x120E28C5: mov dword ptr [ebp - 0x2b8], esi */
    MEM32(ebp + (-0x270)) = ebx; /* 0x120E28CB: mov dword ptr [ebp - 0x270], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E290F; /* 0x120E28D1: je 0x120e290f */
L_120E28D3:
    PUSH32(esp, 0x10u); /* 0x120E28D3: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E28D5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx + 0xC; /* 0x120E28D7: lea edx, [ebx + 0xc] */
    edi = POP32_VAL(esp); /* 0x120E28DA: pop edi */
L_120E28DB:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x120E28DB: fcom dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E28DD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E28DF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E28E5; /* 0x120E28E2: jne 0x120e28e5 */
L_120E28E4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E28E4: inc ecx */
    _flag_k = FK_INC;
L_120E28E5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E28E5: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E28E8: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E28DB; /* 0x120E28E9: jne 0x120e28db */
L_120E28EB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E28EB: fstp st(0) */
    /* cmp ecx, 0x10u */ /* 0x120E28ED: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2904; /* 0x120E28F0: jne 0x120e2904 */
L_120E28F2:
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & LO16(edi)); /* 0x120E28F2: and word ptr [esi], di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(esi + 0x2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x2) | 0xFFFFu)) << 16;
    MEM16(esi + 0x2) = (uint16_t)(MEM16(esi + 0x2) | 0xFFFFu); /* 0x120E28F5: or word ptr [esi + 2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x120E28FB: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E34B2; /* 0x120E28FF: jmp 0x120e34b2 */
L_120E2904:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E2904: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x120E2906: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E2908: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E290A: add edi, 4 */
    _flag_k = FK_ADD;
    goto L_120E2914; /* 0x120E290D: jmp 0x120e2914 */
L_120E290F:
    PUSH32(esp, 4); /* 0x120E290F: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2911: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x120E2913: pop edi */
L_120E2914:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E2914: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x268)) = edi; /* 0x120E2918: mov dword ptr [ebp - 0x268], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E2936; /* 0x120E291E: je 0x120e2936 */
L_120E2920:
    PUSH32(esp, 0x100u); /* 0x120E2920: push 0x100 */
    eax = ebp + (-0x144); /* 0x120E2925: lea eax, [ebp - 0x144] */
    PUSH32(esp, 0); /* 0x120E292B: push 0 */
    PUSH32(esp, eax); /* 0x120E292D: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E292E: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E2933: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E2936:
    MEM16(ebp + (-0x2D0)) = _fpu_cw; /* 0x120E2936: fnstcw word ptr [ebp - 0x2d0] */
    eax = MEM32(ebp + (-0x2D0)); /* 0x120E293C: mov eax, dword ptr [ebp - 0x2d0] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E2942: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x300)) = eax; /* 0x120E2947: mov dword ptr [ebp - 0x300], eax */
    _fpu_cw = MEM16(ebp + (-0x300)); /* 0x120E294D: fldcw word ptr [ebp - 0x300] */
    fp_push(*(double*)ADDR(0x12007CA8)); /* 0x120E2953: fld qword ptr [0x12007ca8] */
    eax = MEM32(ebp + (-0x2D0)); /* 0x120E2959: mov eax, dword ptr [ebp - 0x2d0] */
    MEM32(ebp + (-0x298)) = eax; /* 0x120E295F: mov dword ptr [ebp - 0x298], eax */
    eax = ebp + (-0x144); /* 0x120E2965: lea eax, [ebp - 0x144] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E296B: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2A4)) = eax; /* 0x120E296D: mov dword ptr [ebp - 0x2a4], eax */
    eax = ebp + (-0x240); /* 0x120E2973: lea eax, [ebp - 0x240] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2979: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x29C)) = eax; /* 0x120E297B: mov dword ptr [ebp - 0x29c], eax */
    eax = ebp + (-0x13C); /* 0x120E2981: lea eax, [ebp - 0x13c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2987: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x264)) = eax; /* 0x120E2989: mov dword ptr [ebp - 0x264], eax */
    eax = ebp + (-0x138); /* 0x120E298F: lea eax, [ebp - 0x138] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2995: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2B4)) = eax; /* 0x120E2997: mov dword ptr [ebp - 0x2b4], eax */
    eax = ebp + (-0x134); /* 0x120E299D: lea eax, [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29A3: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2D4)) = eax; /* 0x120E29A5: mov dword ptr [ebp - 0x2d4], eax */
    eax = ebp + (-0x11C); /* 0x120E29AB: lea eax, [ebp - 0x11c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29B1: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x27C)) = eax; /* 0x120E29B3: mov dword ptr [ebp - 0x27c], eax */
    eax = ebp + (-0x118); /* 0x120E29B9: lea eax, [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29BF: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2DC)) = eax; /* 0x120E29C1: mov dword ptr [ebp - 0x2dc], eax */
    eax = ebp + (-0x114); /* 0x120E29C7: lea eax, [ebp - 0x114] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29CD: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C0)) = eax; /* 0x120E29CF: mov dword ptr [ebp - 0x2c0], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) & 0; /* 0x120E29D5: and dword ptr [ebp - 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x264)); /* 0x120E29DC: mov edi, dword ptr [ebp - 0x264] */
    eax = ebp + (-0x10C); /* 0x120E29E2: lea eax, [ebp - 0x10c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29E8: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x280)) = eax; /* 0x120E29EA: mov dword ptr [ebp - 0x280], eax */
    eax = ebp + (-0x108); /* 0x120E29F0: lea eax, [ebp - 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E29F6: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2A0)) = eax; /* 0x120E29F8: mov dword ptr [ebp - 0x2a0], eax */
    eax = ebp + (-0x104); /* 0x120E29FE: lea eax, [ebp - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2A04: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2BC)) = eax; /* 0x120E2A06: mov dword ptr [ebp - 0x2bc], eax */
    eax = ebp + (-0xFC); /* 0x120E2A0C: lea eax, [ebp - 0xfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2A12: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x274)) = eax; /* 0x120E2A14: mov dword ptr [ebp - 0x274], eax */
    eax = ebp + (-0xF8); /* 0x120E2A1A: lea eax, [ebp - 0xf8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2A20: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2B0)) = eax; /* 0x120E2A22: mov dword ptr [ebp - 0x2b0], eax */
    edx = ebp + (-0x244); /* 0x120E2A28: lea edx, [ebp - 0x244] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E2A2E: sub edx, ebx */
    _flag_k = FK_CMP;
    eax = ebp + (-0xF4); /* 0x120E2A30: lea eax, [ebp - 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E2A36: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = ebx + 0x8; /* 0x120E2A38: lea ecx, [ebx + 8] */
    ebx = MEM32(ebp + (-0x27C)); /* 0x120E2A3B: mov ebx, dword ptr [ebp - 0x27c] */
    MEM32(ebp + (-0x250)) = edx; /* 0x120E2A41: mov dword ptr [ebp - 0x250], edx */
    MEM32(ebp + (-0x2C4)) = eax; /* 0x120E2A47: mov dword ptr [ebp - 0x2c4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E2A4D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E2A4F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E2A4F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E2A53: fld qword ptr [0x120014c0] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E2A59: fld dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x260)) = _v; } /* 0x120E2A5C: fstp dword ptr [ebp - 0x260] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E2A62: fld dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x25C)) = _v; } /* 0x120E2A65: fstp dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E2A6B: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x258)) = _v; } /* 0x120E2A6D: fstp dword ptr [ebp - 0x258] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E2AB0; /* 0x120E2A73: je 0x120e2ab0 */
L_120E2A75:
    fp_push(*(float*)&MEM32(ebp + edx + (-0x144))); /* 0x120E2A75: fld dword ptr [ebp + edx - 0x144] */
    eax = MEM32(ebp + (-0x2A4)); /* 0x120E2A7C: mov eax, dword ptr [ebp - 0x2a4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x260)); /* 0x120E2A82: fadd dword ptr [ebp - 0x260] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x260)) = _v; } /* 0x120E2A88: fstp dword ptr [ebp - 0x260] */
    fp_push(*(float*)&MEM32(ebp + edx + (-0x140))); /* 0x120E2A8E: fld dword ptr [ebp + edx - 0x140] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x25C)); /* 0x120E2A95: fadd dword ptr [ebp - 0x25c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x25C)) = _v; } /* 0x120E2A9B: fstp dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E2AA1: fld dword ptr [eax + ecx] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x258)); /* 0x120E2AA4: fadd dword ptr [ebp - 0x258] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x258)) = _v; } /* 0x120E2AAA: fstp dword ptr [ebp - 0x258] */
L_120E2AB0:
    fp_push(*(float*)&MEM32(ebp + (-0x260))); /* 0x120E2AB0: fld dword ptr [ebp - 0x260] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2AB6: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2AB8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x248)) = _v; } /* 0x120E2ABA: fstp dword ptr [ebp - 0x248] */
    fp_push(*(float*)&MEM32(ebp + (-0x248))); /* 0x120E2AC0: fld dword ptr [ebp - 0x248] */
    MEM32(ebp + (-0x2C8)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E2AC6: fistp dword ptr [ebp - 0x2c8] */
    eax = MEM32(ebp + (-0x2C8)); /* 0x120E2ACC: mov eax, dword ptr [ebp - 0x2c8] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E2AD2: mov dword ptr [ebp - 0x248], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x248))); /* 0x120E2AD8: fild dword ptr [ebp - 0x248] */
    _st[0] *= *(double*)ADDR(0x12007CA0); /* 0x120E2ADE: fmul qword ptr [0x12007ca0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x278)) = _v; } /* 0x120E2AE4: fstp dword ptr [ebp - 0x278] */
    fp_push(*(float*)&MEM32(ebp + (-0x278))); /* 0x120E2AEA: fld dword ptr [ebp - 0x278] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x244)) = _v; } /* 0x120E2AF0: fstp dword ptr [ebp + edx - 0x244] */
    fp_push(*(float*)&MEM32(ebp + (-0x25C))); /* 0x120E2AF7: fld dword ptr [ebp - 0x25c] */
    _st[0] *= *(double*)ADDR(0x12007C98); /* 0x120E2AFD: fmul qword ptr [0x12007c98] */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E2B03: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x248)) = _v; } /* 0x120E2B09: fstp dword ptr [ebp - 0x248] */
    fp_push(*(float*)&MEM32(ebp + (-0x248))); /* 0x120E2B0F: fld dword ptr [ebp - 0x248] */
    MEM32(ebp + (-0x2A8)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E2B15: fistp dword ptr [ebp - 0x2a8] */
    eax = MEM32(ebp + (-0x2A8)); /* 0x120E2B1B: mov eax, dword ptr [ebp - 0x2a8] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E2B21: mov dword ptr [ebp - 0x248], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x248))); /* 0x120E2B27: fild dword ptr [ebp - 0x248] */
    _st[0] *= *(double*)ADDR(0x12007C90); /* 0x120E2B2D: fmul qword ptr [0x12007c90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x248)) = _v; } /* 0x120E2B33: fstp dword ptr [ebp - 0x248] */
    fp_push(*(float*)&MEM32(ebp + (-0x248))); /* 0x120E2B39: fld dword ptr [ebp - 0x248] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x240)) = _v; } /* 0x120E2B3F: fstp dword ptr [ebp + edx - 0x240] */
    fp_push(*(float*)&MEM32(ebp + (-0x258))); /* 0x120E2B46: fld dword ptr [ebp - 0x258] */
    _st[0] *= *(double*)ADDR(0x12007CA8); /* 0x120E2B4C: fmul qword ptr [0x12007ca8] */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E2B52: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x26C)) = _v; } /* 0x120E2B58: fstp dword ptr [ebp - 0x26c] */
    fp_push(*(float*)&MEM32(ebp + (-0x26C))); /* 0x120E2B5E: fld dword ptr [ebp - 0x26c] */
    MEM32(ebp + (-0x2CC)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E2B64: fistp dword ptr [ebp - 0x2cc] */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E2B6A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x2CC)); /* 0x120E2B6E: mov eax, dword ptr [ebp - 0x2cc] */
    esi = MEM32(ebp + (-0x29C)); /* 0x120E2B74: mov esi, dword ptr [ebp - 0x29c] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x120E2B7A: mov dword ptr [ebp - 0x26c], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x26C))); /* 0x120E2B80: fild dword ptr [ebp - 0x26c] */
    eax = MEM32(ebp + (-0x250)); /* 0x120E2B86: mov eax, dword ptr [ebp - 0x250] */
    _st[0] *= *(double*)ADDR(0x12007CA0); /* 0x120E2B8C: fmul qword ptr [0x12007ca0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x26C)) = _v; } /* 0x120E2B92: fstp dword ptr [ebp - 0x26c] */
    fp_push(*(float*)&MEM32(ebp + (-0x26C))); /* 0x120E2B98: fld dword ptr [ebp - 0x26c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + ecx) = _v; } /* 0x120E2B9E: fst dword ptr [eax + ecx] */
    fp_push(1.0); /* 0x120E2BA1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx) = _v; } /* 0x120E2BA3: fstp dword ptr [esi + ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E2D10; /* 0x120E2BA6: je 0x120e2d10 */
L_120E2BAC:
    fp_push(*(float*)&MEM32(ebp + (-0x260))); /* 0x120E2BAC: fld dword ptr [ebp - 0x260] */
    eax = MEM32(ebp + (-0x24C)); /* 0x120E2BB2: mov eax, dword ptr [ebp - 0x24c] */
    fp_push(*(float*)&MEM32(ebp + (-0x278))); /* 0x120E2BB8: fld dword ptr [ebp - 0x278] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E2BBE: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x120E2BC1: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2BC3: fsubp st(2) */
    fp_xch(1); /* 0x120E2BC5: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x290)) = _v; } /* 0x120E2BC7: fstp dword ptr [ebp - 0x290] */
    fp_push(*(float*)&MEM32(ebp + (-0x25C))); /* 0x120E2BCD: fld dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(ebp + (-0x248))); /* 0x120E2BD3: fld dword ptr [ebp - 0x248] */
    fp_push(_st[0]); /* 0x120E2BD9: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2BDB: fsubp st(2) */
    fp_xch(1); /* 0x120E2BDD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28C)) = _v; } /* 0x120E2BDF: fstp dword ptr [ebp - 0x28c] */
    fp_push(*(float*)&MEM32(ebp + (-0x258))); /* 0x120E2BE5: fld dword ptr [ebp - 0x258] */
    fp_push(_st[3]); /* 0x120E2BEB: fld st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E2BED: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x288)) = _v; } /* 0x120E2BEF: fstp dword ptr [ebp - 0x288] */
    fp_push(*(float*)&MEM32(ebp + (-0x288))); /* 0x120E2BF5: fld dword ptr [ebp - 0x288] */
    fp_push(*(float*)&MEM32(ebp + (-0x28C))); /* 0x120E2BFB: fld dword ptr [ebp - 0x28c] */
    fp_push(*(float*)&MEM32(ebp + (-0x290))); /* 0x120E2C01: fld dword ptr [ebp - 0x290] */
    /* cmp eax, 3 */ /* 0x120E2C07: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E2C48; /* 0x120E2C0A: je 0x120e2c48 */
L_120E2C0C:
    ebx = MEM32(ebp + (-0x2B4)); /* 0x120E2C0C: mov ebx, dword ptr [ebp - 0x2b4] */
    fp_push(_st[0]); /* 0x120E2C12: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E2C14: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(edi + ecx); /* 0x120E2C1A: fadd dword ptr [edi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ecx) = _v; } /* 0x120E2C1D: fstp dword ptr [edi + ecx] */
    fp_push(_st[1]); /* 0x120E2C20: fld st(1) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E2C22: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebx + ecx); /* 0x120E2C28: fadd dword ptr [ebx + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + ecx) = _v; } /* 0x120E2C2B: fstp dword ptr [ebx + ecx] */
    ebx = MEM32(ebp + (-0x2D4)); /* 0x120E2C2E: mov ebx, dword ptr [ebp - 0x2d4] */
    fp_push(_st[2]); /* 0x120E2C34: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E2C36: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebx + ecx); /* 0x120E2C3C: fadd dword ptr [ebx + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + ecx) = _v; } /* 0x120E2C3F: fstp dword ptr [ebx + ecx] */
    ebx = MEM32(ebp + (-0x27C)); /* 0x120E2C42: mov ebx, dword ptr [ebp - 0x27c] */
L_120E2C48:
    /* cmp MEM32(ebp + (-0x24C)), 0xCu */ /* 0x120E2C48: cmp dword ptr [ebp - 0x24c], 0xc */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E2D1E; /* 0x120E2C4F: jae 0x120e2d1e */
L_120E2C55:
    /* test eax, eax */ /* 0x120E2C55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E2C95; /* 0x120E2C57: je 0x120e2c95 */
L_120E2C59:
    edi = MEM32(ebp + (-0x2DC)); /* 0x120E2C59: mov edi, dword ptr [ebp - 0x2dc] */
    fp_push(_st[0]); /* 0x120E2C5F: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E2C61: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(ebx + ecx); /* 0x120E2C67: fadd dword ptr [ebx + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + ecx) = _v; } /* 0x120E2C6A: fstp dword ptr [ebx + ecx] */
    fp_push(_st[1]); /* 0x120E2C6D: fld st(1) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E2C6F: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(edi + ecx); /* 0x120E2C75: fadd dword ptr [edi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ecx) = _v; } /* 0x120E2C78: fstp dword ptr [edi + ecx] */
    edi = MEM32(ebp + (-0x2C0)); /* 0x120E2C7B: mov edi, dword ptr [ebp - 0x2c0] */
    fp_push(_st[2]); /* 0x120E2C81: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E2C83: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(edi + ecx); /* 0x120E2C89: fadd dword ptr [edi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ecx) = _v; } /* 0x120E2C8C: fstp dword ptr [edi + ecx] */
    edi = MEM32(ebp + (-0x264)); /* 0x120E2C8F: mov edi, dword ptr [ebp - 0x264] */
L_120E2C95:
    esi = MEM32(ebp + (-0x280)); /* 0x120E2C95: mov esi, dword ptr [ebp - 0x280] */
    fp_push(_st[0]); /* 0x120E2C9B: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E2C9D: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(esi + ecx); /* 0x120E2CA3: fadd dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx) = _v; } /* 0x120E2CA6: fstp dword ptr [esi + ecx] */
    esi = MEM32(ebp + (-0x2A0)); /* 0x120E2CA9: mov esi, dword ptr [ebp - 0x2a0] */
    fp_push(_st[1]); /* 0x120E2CAF: fld st(1) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E2CB1: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(esi + ecx); /* 0x120E2CB7: fadd dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx) = _v; } /* 0x120E2CBA: fstp dword ptr [esi + ecx] */
    esi = MEM32(ebp + (-0x2BC)); /* 0x120E2CBD: mov esi, dword ptr [ebp - 0x2bc] */
    fp_push(_st[2]); /* 0x120E2CC3: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E2CC5: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(esi + ecx); /* 0x120E2CCB: fadd dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx) = _v; } /* 0x120E2CCE: fstp dword ptr [esi + ecx] */
    esi = MEM32(ebp + (-0x274)); /* 0x120E2CD1: mov esi, dword ptr [ebp - 0x274] */
    /* cmp eax, 3 */ /* 0x120E2CD7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E2D1E; /* 0x120E2CDA: je 0x120e2d1e */
L_120E2CDC:
    fp_push(*(double*)ADDR(0x120019C0)); /* 0x120E2CDC: fld qword ptr [0x120019c0] */
    eax = MEM32(ebp + (-0x2B0)); /* 0x120E2CE2: mov eax, dword ptr [ebp - 0x2b0] */
    _st[1] *= _st[0]; /* 0x120E2CE8: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(esi + ecx)); /* 0x120E2CEA: fld dword ptr [esi + ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2CED: faddp st(2) */
    fp_xch(1); /* 0x120E2CEF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ecx) = _v; } /* 0x120E2CF1: fstp dword ptr [esi + ecx] */
    _st[1] *= _st[0]; /* 0x120E2CF4: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E2CF6: fld dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2CF9: faddp st(2) */
    fp_xch(1); /* 0x120E2CFB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx) = _v; } /* 0x120E2CFD: fstp dword ptr [eax + ecx] */
    eax = MEM32(ebp + (-0x2C4)); /* 0x120E2D00: mov eax, dword ptr [ebp - 0x2c4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E2D06: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + ecx); /* 0x120E2D08: fadd dword ptr [eax + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx) = _v; } /* 0x120E2D0B: fstp dword ptr [eax + ecx] */
    goto L_120E2D24; /* 0x120E2D0E: jmp 0x120e2d24 */
L_120E2D10:
    fp_push(*(float*)&MEM32(ebp + (-0x278))); /* 0x120E2D10: fld dword ptr [ebp - 0x278] */
    fp_push(*(float*)&MEM32(ebp + (-0x248))); /* 0x120E2D16: fld dword ptr [ebp - 0x248] */
    goto L_120E2D2A; /* 0x120E2D1C: jmp 0x120e2d2a */
L_120E2D1E:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E2D1E: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2D20: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2D22: fstp st(0) */
L_120E2D24:
    eax = MEM32(ebp + (-0x250)); /* 0x120E2D24: mov eax, dword ptr [ebp - 0x250] */
L_120E2D2A:
    fp_push(*(float*)&MEM32(0x121D6E64)); /* 0x120E2D2A: fld dword ptr [0x121d6e64] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) + 1; /* 0x120E2D30: inc dword ptr [ebp - 0x24c] */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2D36: fmulp st(2) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E2D38: add edx, 0x10 */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x120E2D3B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x254)) = _v; } /* 0x120E2D3D: fstp dword ptr [ebp + edx - 0x254] */
    _st[0] *= (double)*(float*)ADDR(0x121D6E68); /* 0x120E2D44: fmul dword ptr [0x121d6e68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x250)) = _v; } /* 0x120E2D4A: fstp dword ptr [ebp + edx - 0x250] */
    _st[0] *= (double)*(float*)ADDR(0x121D6E6C); /* 0x120E2D51: fmul dword ptr [0x121d6e6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx) = _v; } /* 0x120E2D57: fstp dword ptr [eax + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E2D5A: add ecx, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x12007CA8)); /* 0x120E2D5D: fld qword ptr [0x12007ca8] */
    /* cmp edx, 0x100u */ /* 0x120E2D63: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E2A4F; /* 0x120E2D69: jb 0x120e2a4f */
L_120E2D6F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E2D6F: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0x298)); /* 0x120E2D71: fldcw word ptr [ebp - 0x298] */
    edi = MEM32(ebp + (-0x268)); /* 0x120E2D77: mov edi, dword ptr [ebp - 0x268] */
    PUSH32(esp, edi); /* 0x120E2D7D: push edi */
    eax = ebp + (-0x244); /* 0x120E2D7E: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E2D84: push eax */
    ecx = ebp + (-0x2EC); /* 0x120E2D85: lea ecx, [ebp - 0x2ec] */
    edx = ebp + (-0x2FC); /* 0x120E2D8B: lea edx, [ebp - 0x2fc] */
    RECOMP_CALL(sub_120E2022); /* 0x120E2D91: call 0x120e2022 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x121D6E74)); /* 0x120E2D96: fld dword ptr [0x121d6e74] */
    fp_push(_st[0]); /* 0x120E2D9C: fld st(0) */
    ecx = ebp + (-0x310); /* 0x120E2D9E: lea ecx, [ebp - 0x310] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2FC)); /* 0x120E2DA4: fmul dword ptr [ebp - 0x2fc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x310)) = _v; } /* 0x120E2DAA: fstp dword ptr [ebp - 0x310] */
    fp_push(*(float*)&MEM32(ebp + (-0x2F8))); /* 0x120E2DB0: fld dword ptr [ebp - 0x2f8] */
    fp_push(*(float*)&MEM32(0x121D6E78)); /* 0x120E2DB6: fld dword ptr [0x121d6e78] */
    fp_push(_st[0]); /* 0x120E2DBC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2DBE: fmulp st(2) */
    fp_xch(1); /* 0x120E2DC0: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30C)) = _v; } /* 0x120E2DC2: fstp dword ptr [ebp - 0x30c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2F4))); /* 0x120E2DC8: fld dword ptr [ebp - 0x2f4] */
    fp_push(*(float*)&MEM32(0x121D6E7C)); /* 0x120E2DCE: fld dword ptr [0x121d6e7c] */
    fp_push(_st[0]); /* 0x120E2DD4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2DD6: fmulp st(2) */
    fp_xch(1); /* 0x120E2DD8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x308)) = _v; } /* 0x120E2DDA: fstp dword ptr [ebp - 0x308] */
    fp_push(*(float*)&MEM32(ebp + (-0x2EC))); /* 0x120E2DE0: fld dword ptr [ebp - 0x2ec] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E2DE6: fmulp st(3) */
    fp_xch(2); /* 0x120E2DE8: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x320)) = _v; } /* 0x120E2DEA: fstp dword ptr [ebp - 0x320] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2E8)); /* 0x120E2DF0: fmul dword ptr [ebp - 0x2e8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x31C)) = _v; } /* 0x120E2DF6: fstp dword ptr [ebp - 0x31c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2E4)); /* 0x120E2DFC: fmul dword ptr [ebp - 0x2e4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x318)) = _v; } /* 0x120E2E02: fstp dword ptr [ebp - 0x318] */
    RECOMP_CALL(sub_120E1B2D); /* 0x120E2E08: call 0x120e1b2d */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x120E2E0D: movzx edi, ax */
    ecx = ebp + (-0x320); /* 0x120E2E10: lea ecx, [ebp - 0x320] */
    MEM32(ebp + (-0x280)) = edi; /* 0x120E2E16: mov dword ptr [ebp - 0x280], edi */
    RECOMP_CALL(sub_120E1B2D); /* 0x120E2E1C: call 0x120e1b2d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x268)), 4 */ /* 0x120E2E21: cmp dword ptr [ebp - 0x268], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x268))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x270)); /* 0x120E2E28: mov ebx, dword ptr [ebp - 0x270] */
    esi = MEM32(ebp + (-0x2B8)); /* 0x120E2E2E: mov esi, dword ptr [ebp - 0x2b8] */
    eax = (uint32_t)LO16(eax); /* 0x120E2E34: movzx eax, ax */
    MEM32(ebp + (-0x264)) = eax; /* 0x120E2E37: mov dword ptr [ebp - 0x264], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2E54; /* 0x120E2E3D: jne 0x120e2e54 */
L_120E2E3F:
    /* cmp LO16(edi), LO16(eax) */ /* 0x120E2E3F: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2E54; /* 0x120E2E42: jne 0x120e2e54 */
L_120E2E44:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x120E2E44: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(edi)); /* 0x120E2E48: mov word ptr [esi], di */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x120E2E4B: mov word ptr [esi + 2], ax */
    goto L_120E34B2; /* 0x120E2E4F: jmp 0x120e34b2 */
L_120E2E54:
    ecx = edi; /* 0x120E2E54: mov ecx, edi */
    edx = ebp + (-0x310); /* 0x120E2E56: lea edx, [ebp - 0x310] */
    RECOMP_CALL(sub_120E105E); /* 0x120E2E5C: call 0x120e105e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x264)); /* 0x120E2E61: mov ecx, dword ptr [ebp - 0x264] */
    edx = ebp + (-0x320); /* 0x120E2E67: lea edx, [ebp - 0x320] */
    RECOMP_CALL(sub_120E105E); /* 0x120E2E6D: call 0x120e105e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x121D6E64)); /* 0x120E2E72: fld dword ptr [0x121d6e64] */
    fp_push(_st[0]); /* 0x120E2E78: fld st(0) */
    edx = MEM32(ebp + (-0x264)); /* 0x120E2E7A: mov edx, dword ptr [ebp - 0x264] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x310)); /* 0x120E2E80: fmul dword ptr [ebp - 0x310] */
    /* cmp LO16(edx), LO16(edi) */ /* 0x120E2E86: cmp dx, di */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E2E89: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E2E8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2FC)) = _v; } /* 0x120E2E8D: fstp dword ptr [ebp - 0x2fc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E2E93: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebp + (-0x30C))); /* 0x120E2E94: fld dword ptr [ebp - 0x30c] */
    /* cmp MEM32(ebp + (-0x268)), 3 */ /* 0x120E2E9A: cmp dword ptr [ebp - 0x268], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x268))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x121D6E68)); /* 0x120E2EA1: fld dword ptr [0x121d6e68] */
    fp_push(_st[0]); /* 0x120E2EA7: fld st(0) */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E2EA9: sete al */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2EAC: fmulp st(2) */
    fp_xch(1); /* 0x120E2EAE: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2F8)) = _v; } /* 0x120E2EB0: fstp dword ptr [ebp - 0x2f8] */
    fp_push(*(float*)&MEM32(ebp + (-0x308))); /* 0x120E2EB6: fld dword ptr [ebp - 0x308] */
    fp_push(*(float*)&MEM32(0x121D6E6C)); /* 0x120E2EBC: fld dword ptr [0x121d6e6c] */
    fp_push(_st[0]); /* 0x120E2EC2: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E2EC4: fmulp st(2) */
    fp_xch(1); /* 0x120E2EC6: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2F4)) = _v; } /* 0x120E2EC8: fstp dword ptr [ebp - 0x2f4] */
    fp_push(*(float*)&MEM32(ebp + (-0x320))); /* 0x120E2ECE: fld dword ptr [ebp - 0x320] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E2ED4: fmulp st(3) */
    fp_xch(2); /* 0x120E2ED6: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2EC)) = _v; } /* 0x120E2ED8: fstp dword ptr [ebp - 0x2ec] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x31C)); /* 0x120E2EDE: fmul dword ptr [ebp - 0x31c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2E8)) = _v; } /* 0x120E2EE4: fstp dword ptr [ebp - 0x2e8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x318)); /* 0x120E2EEA: fmul dword ptr [ebp - 0x318] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2E4)) = _v; } /* 0x120E2EF0: fstp dword ptr [ebp - 0x2e4] */
    /* cmp eax, ecx */ /* 0x120E2EF6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2F16; /* 0x120E2EF8: jne 0x120e2f16 */
L_120E2EFA:
    MEM16(esi) = (uint16_t)(LO16(edi)); /* 0x120E2EFA: mov word ptr [esi], di */
    MEM16(esi + 0x2) = (uint16_t)(LO16(edx)); /* 0x120E2EFD: mov word ptr [esi + 2], dx */
    esi = ebp + (-0x2FC); /* 0x120E2F01: lea esi, [ebp - 0x2fc] */
    edi = ebp + (-0x44); /* 0x120E2F07: lea edi, [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F0A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F0B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F0C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F0D: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x2EC); /* 0x120E2F0E: lea esi, [ebp - 0x2ec] */
    goto L_120E2F30; /* 0x120E2F14: jmp 0x120e2f30 */
L_120E2F16:
    MEM16(esi + 0x2) = (uint16_t)(LO16(edi)); /* 0x120E2F16: mov word ptr [esi + 2], di */
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x120E2F1A: mov word ptr [esi], dx */
    esi = ebp + (-0x2EC); /* 0x120E2F1D: lea esi, [ebp - 0x2ec] */
    edi = ebp + (-0x44); /* 0x120E2F23: lea edi, [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F26: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F27: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F28: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F29: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x2FC); /* 0x120E2F2A: lea esi, [ebp - 0x2fc] */
L_120E2F30:
    edi = ebp + (-0x34); /* 0x120E2F30: lea edi, [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F33: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F34: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F35: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E2F36: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120E2F37: fld dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x120E2F3A: fld dword ptr [ebp - 0x44] */
    edi = MEM32(ebp + (-0x268)); /* 0x120E2F3D: mov edi, dword ptr [ebp - 0x268] */
    fp_push(_st[0]); /* 0x120E2F43: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2F45: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2F47: fld st(1) */
    /* cmp edi, 3 */ /* 0x120E2F49: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E2FAA; /* 0x120E2F4C: jne 0x120e2faa */
L_120E2F4E:
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E2F4E: fld qword ptr [0x120014c0] */
    ecx = 0x120081C4u; /* 0x120E2F54: mov ecx, 0x120081c4 */
    _st[1] *= _st[0]; /* 0x120E2F59: fmul st(1), st(0) */
    MEM32(ebp + (-0x27C)) = ecx; /* 0x120E2F5B: mov dword ptr [ebp - 0x27c], ecx */
    fp_xch(1); /* 0x120E2F61: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2F63: faddp st(2) */
    fp_xch(1); /* 0x120E2F65: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E2F67: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E2F6A: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120E2F6D: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x120E2F70: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2F72: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2F74: fld st(1) */
    _st[0] *= _st[3]; /* 0x120E2F76: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2F78: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E2F7A: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E2F7D: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E2F80: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120E2F83: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2F85: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2F87: fld st(1) */
    _st[0] *= _st[4]; /* 0x120E2F89: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2F8B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E2F8D: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E2F90: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x120E2F93: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x120E2F96: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2F98: fsubp st(2) */
    fp_xch(1); /* 0x120E2F9A: fxch st(1) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120E2F9C: fmulp st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120E2F9E: faddp st(3) */
    fp_xch(2); /* 0x120E2FA0: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E2FA2: fstp dword ptr [ebp - 0x18] */
    goto L_120E3034; /* 0x120E2FA5: jmp 0x120e3034 */
L_120E2FAA:
    fp_push(*(double*)ADDR(0x12007F60)); /* 0x120E2FAA: fld qword ptr [0x12007f60] */
    eax = 0x120081B4u; /* 0x120E2FB0: mov eax, 0x120081b4 */
    _st[1] *= _st[0]; /* 0x120E2FB5: fmul st(1), st(0) */
    MEM32(ebp + (-0x27C)) = eax; /* 0x120E2FB7: mov dword ptr [ebp - 0x27c], eax */
    fp_xch(1); /* 0x120E2FBD: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E2FBF: faddp st(2) */
    fp_xch(1); /* 0x120E2FC1: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E2FC3: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E2FC6: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120E2FC9: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x120E2FCC: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2FCE: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2FD0: fld st(1) */
    _st[0] *= _st[3]; /* 0x120E2FD2: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2FD4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E2FD6: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E2FD9: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E2FDC: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120E2FDF: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2FE1: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2FE3: fld st(1) */
    _st[0] *= _st[4]; /* 0x120E2FE5: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E2FE7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E2FE9: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E2FEC: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x120E2FEF: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x120E2FF2: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E2FF4: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E2FF6: fld st(1) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120E2FF8: fmulp st(5) */
    fp_push(_st[0]); /* 0x120E2FFA: fld st(0) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120E2FFC: faddp st(5) */
    fp_xch(4); /* 0x120E2FFE: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E3000: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[4]); /* 0x120E3003: fld st(4) */
    fp_push(*(double*)ADDR(0x12005C18)); /* 0x120E3005: fld qword ptr [0x12005c18] */
    _st[1] *= _st[0]; /* 0x120E300B: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x120E300D: fld dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E3010: faddp st(2) */
    fp_xch(1); /* 0x120E3012: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E3014: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[3]); /* 0x120E3017: fld st(3) */
    _st[0] *= _st[1]; /* 0x120E3019: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x40)); /* 0x120E301B: fadd dword ptr [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E301E: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[2]); /* 0x120E3021: fld st(2) */
    _st[0] *= _st[1]; /* 0x120E3023: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x120E3025: fadd dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E3028: fstp dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E302B: fmulp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120E302D: faddp st(3) */
    fp_xch(2); /* 0x120E302F: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E3031: fstp dword ptr [ebp - 8] */
L_120E3034:
    fp_xch(2); /* 0x120E3034: fxch st(2) */
    eax = edi + (-0x1); /* 0x120E3036: lea eax, [edi - 1] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x260)) = _v; } /* 0x120E3039: fstp dword ptr [ebp - 0x260] */
    MEM32(ebp + (-0x270)) = eax; /* 0x120E303F: mov dword ptr [ebp - 0x270], eax */
    fp_xch(1); /* 0x120E3045: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x25C)) = _v; } /* 0x120E3047: fstp dword ptr [ebp - 0x25c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x258)) = _v; } /* 0x120E304D: fstp dword ptr [ebp - 0x258] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x270))); /* 0x120E3053: fild dword ptr [ebp - 0x270] */
    /* test eax, eax */ /* 0x120E3059: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3063; /* 0x120E305B: jns 0x120e3063 */
L_120E305D:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E305D: fadd dword ptr [0x120014d0] */
L_120E3063:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x264)) = _v; } /* 0x120E3063: fstp dword ptr [ebp - 0x264] */
    fp_push(*(float*)&MEM32(ebp + (-0x258))); /* 0x120E3069: fld dword ptr [ebp - 0x258] */
    fp_push(*(float*)&MEM32(ebp + (-0x25C))); /* 0x120E306F: fld dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(ebp + (-0x260))); /* 0x120E3075: fld dword ptr [ebp - 0x260] */
    fp_push(*(float*)&MEM32(ebp + (-0x264))); /* 0x120E307B: fld dword ptr [ebp - 0x264] */
    /* cmp MEM16(ebp + (-0x280)), LO16(edx) */ /* 0x120E3081: cmp word ptr [ebp - 0x280], dx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x280))) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E30A2; /* 0x120E3088: je 0x120e30a2 */
L_120E308A:
    fp_push(_st[2]); /* 0x120E308A: fld st(2) */
    fp_push(_st[2]); /* 0x120E308C: fld st(2) */
    fp_push(_st[5]); /* 0x120E308E: fld st(5) */
    fp_xch(1); /* 0x120E3090: fxch st(1) */
    _st[0] *= _st[0]; /* 0x120E3092: fmul st(0), st(0) */
    fp_xch(2); /* 0x120E3094: fxch st(2) */
    _st[0] *= _st[0]; /* 0x120E3096: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E3098: faddp st(2) */
    _st[0] *= _st[0]; /* 0x120E309A: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E309C: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x120E309E: fdivp st(1) */
    goto L_120E30A6; /* 0x120E30A0: jmp 0x120e30a6 */
L_120E30A2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E30A2: fstp st(0) */
    fp_push(0.0); /* 0x120E30A4: fldz  */
L_120E30A6:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x270)) = _v; } /* 0x120E30A6: fstp dword ptr [ebp - 0x270] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E30AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x270))); /* 0x120E30AE: fld dword ptr [ebp - 0x270] */
    fp_push(_st[0]); /* 0x120E30B4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E30B6: fmulp st(2) */
    fp_xch(1); /* 0x120E30B8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x260)) = _v; } /* 0x120E30BA: fstp dword ptr [ebp - 0x260] */
    fp_push(_st[0]); /* 0x120E30C0: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E30C2: fmulp st(2) */
    fp_xch(1); /* 0x120E30C4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x25C)) = _v; } /* 0x120E30C6: fstp dword ptr [ebp - 0x25c] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E30CC: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x258)) = _v; } /* 0x120E30CE: fstp dword ptr [ebp - 0x258] */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x120E30D4: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E30EE; /* 0x120E30D7: je 0x120e30ee */
L_120E30D9:
    PUSH32(esp, 0x100u); /* 0x120E30D9: push 0x100 */
    eax = ebp + (-0x144); /* 0x120E30DE: lea eax, [ebp - 0x144] */
    PUSH32(esp, esi); /* 0x120E30E4: push esi */
    PUSH32(esp, eax); /* 0x120E30E5: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E30E6: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E30EB: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E30EE:
    MEM16(ebp + (-0x2D8)) = _fpu_cw; /* 0x120E30EE: fnstcw word ptr [ebp - 0x2d8] */
    eax = MEM32(ebp + (-0x2D8)); /* 0x120E30F4: mov eax, dword ptr [ebp - 0x2d8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E30FA: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x294)) = eax; /* 0x120E30FF: mov dword ptr [ebp - 0x294], eax */
    _fpu_cw = MEM16(ebp + (-0x294)); /* 0x120E3105: fldcw word ptr [ebp - 0x294] */
    fp_push(0.0); /* 0x120E310B: fldz  */
    eax = MEM32(ebp + (-0x2D8)); /* 0x120E310D: mov eax, dword ptr [ebp - 0x2d8] */
    fp_push(*(float*)&MEM32(ebp + (-0x258))); /* 0x120E3113: fld dword ptr [ebp - 0x258] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) & esi; /* 0x120E3119: and dword ptr [ebp - 0x24c], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x25C))); /* 0x120E311F: fld dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(ebp + (-0x260))); /* 0x120E3125: fld dword ptr [ebp - 0x260] */
    edx = ebp + (-0x140); /* 0x120E312B: lea edx, [ebp - 0x140] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E3131: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x270)) = edx; /* 0x120E3133: mov dword ptr [ebp - 0x270], edx */
    edx = ebp + (-0x23C); /* 0x120E3139: lea edx, [ebp - 0x23c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E313F: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x29C)) = edx; /* 0x120E3141: mov dword ptr [ebp - 0x29c], edx */
    edx = ebp + (-0x130); /* 0x120E3147: lea edx, [ebp - 0x130] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E314D: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x26C)) = edx; /* 0x120E314F: mov dword ptr [ebp - 0x26c], edx */
    edx = ebp + (-0x110); /* 0x120E3155: lea edx, [ebp - 0x110] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E315B: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x278)) = edx; /* 0x120E315D: mov dword ptr [ebp - 0x278], edx */
    edx = ebp + (-0x100); /* 0x120E3163: lea edx, [ebp - 0x100] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E3169: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x274)) = edx; /* 0x120E316B: mov dword ptr [ebp - 0x274], edx */
    edx = ebp + (-0xF0); /* 0x120E3171: lea edx, [ebp - 0xf0] */
    MEM32(ebp + (-0x298)) = eax; /* 0x120E3177: mov dword ptr [ebp - 0x298], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E317D: sub edx, ebx */
    _flag_k = FK_CMP;
    eax = ebp + (-0x144); /* 0x120E317F: lea eax, [ebp - 0x144] */
    ecx = ebx + 0x4; /* 0x120E3185: lea ecx, [ebx + 4] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E3188: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x248)) = edx; /* 0x120E318E: mov dword ptr [ebp - 0x248], edx */
    ebx = edx; /* 0x120E3194: mov ebx, edx */
L_120E3196:
    /* cmp edi, 3 */ /* 0x120E3196: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E31C5; /* 0x120E3199: jne 0x120e31c5 */
L_120E319B:
    fp_push(*(float*)&MEM32(0x120019B0)); /* 0x120E319B: fld dword ptr [0x120019b0] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + 0x8)); /* 0x120E31A1: fcomp dword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E31A4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E31A6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E31BF; /* 0x120E31A9: jne 0x120e31bf */
L_120E31AB:
    eax = MEM32(ebp + (-0x24C)); /* 0x120E31AB: mov eax, dword ptr [ebp - 0x24c] */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x120E31B1: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x120E31B1: shr esi, 2 */
    _flag_a = (uint32_t)((esi | 0xC0000000u)); _flag_b = (uint32_t)((esi | 0xC0000000u));
    esi = esi | 0xC0000000u; /* 0x120E31B4: or esi, 0xc0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E347B; /* 0x120E31BA: jmp 0x120e347b */
L_120E31BF:
    eax = MEM32(ebp + (-0x250)); /* 0x120E31BF: mov eax, dword ptr [ebp - 0x250] */
L_120E31C5:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E31C5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E31C9: fld dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(0x121D6E64); /* 0x120E31CC: fmul dword ptr [0x121d6e64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x290)) = _v; } /* 0x120E31D2: fstp dword ptr [ebp - 0x290] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E31D8: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(0x121D6E68); /* 0x120E31DA: fmul dword ptr [0x121d6e68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28C)) = _v; } /* 0x120E31E0: fstp dword ptr [ebp - 0x28c] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120E31E6: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(0x121D6E6C); /* 0x120E31E9: fmul dword ptr [0x121d6e6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x288)) = _v; } /* 0x120E31EF: fstp dword ptr [ebp - 0x288] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E322F; /* 0x120E31F5: je 0x120e322f */
L_120E31F7:
    fp_push(*(float*)&MEM32(eax)); /* 0x120E31F7: fld dword ptr [eax] */
    eax = MEM32(ebp + (-0x2A4)); /* 0x120E31F9: mov eax, dword ptr [ebp - 0x2a4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x290)); /* 0x120E31FF: fadd dword ptr [ebp - 0x290] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x290)) = _v; } /* 0x120E3205: fstp dword ptr [ebp - 0x290] */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x120E320B: fld dword ptr [ecx + eax] */
    eax = MEM32(ebp + (-0x270)); /* 0x120E320E: mov eax, dword ptr [ebp - 0x270] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x28C)); /* 0x120E3214: fadd dword ptr [ebp - 0x28c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28C)) = _v; } /* 0x120E321A: fstp dword ptr [ebp - 0x28c] */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E3220: fld dword ptr [eax + ecx] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x288)); /* 0x120E3223: fadd dword ptr [ebp - 0x288] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x288)) = _v; } /* 0x120E3229: fstp dword ptr [ebp - 0x288] */
L_120E322F:
    fp_push(*(float*)&MEM32(ebp + (-0x28C))); /* 0x120E322F: fld dword ptr [ebp - 0x28c] */
    fp_push(_st[0]); /* 0x120E3235: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x120E3237: fsub dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E323A: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x290))); /* 0x120E323C: fld dword ptr [ebp - 0x290] */
    fp_push(_st[0]); /* 0x120E3242: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x120E3244: fsub dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E3247: fmulp st(3) */
    fp_xch(3); /* 0x120E3249: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E324B: faddp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x288))); /* 0x120E324D: fld dword ptr [ebp - 0x288] */
    fp_push(_st[0]); /* 0x120E3253: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x120E3255: fsub dword ptr [ebp - 0x3c] */
    fp_push(_st[5]); /* 0x120E3258: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E325A: fmulp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x120E325C: faddp st(3) */
    fp_xch(2); /* 0x120E325E: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x294)) = _v; } /* 0x120E3260: fstp dword ptr [ebp - 0x294] */
    fp_push(*(float*)&MEM32(ebp + (-0x294))); /* 0x120E3266: fld dword ptr [ebp - 0x294] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x120E326C: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E326E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E3270: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E327B; /* 0x120E3273: jp 0x120e327b */
L_120E3275:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3275: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E3277: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E32E6; /* 0x120E3279: jmp 0x120e32e6 */
L_120E327B:
    fp_push(*(float*)&MEM32(ebp + (-0x264))); /* 0x120E327B: fld dword ptr [ebp - 0x264] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E3281: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3283: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E3285: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E3291; /* 0x120E3288: jp 0x120e3291 */
L_120E328A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E328A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E328C: fstp st(0) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E328E: inc edx */
    _flag_k = FK_INC;
    goto L_120E32E6; /* 0x120E328F: jmp 0x120e32e6 */
L_120E3291:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3291: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E3293: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3295: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E3297: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3299: fstp st(0) */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E329B: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x280)) = _v; } /* 0x120E32A1: fstp dword ptr [ebp - 0x280] */
    fp_push(*(float*)&MEM32(ebp + (-0x280))); /* 0x120E32A7: fld dword ptr [ebp - 0x280] */
    MEM32(ebp + (-0x2AC)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E32AD: fistp dword ptr [ebp - 0x2ac] */
    fp_push(*(float*)&MEM32(ebp + (-0x28C))); /* 0x120E32B3: fld dword ptr [ebp - 0x28c] */
    eax = MEM32(ebp + (-0x2AC)); /* 0x120E32B9: mov eax, dword ptr [ebp - 0x2ac] */
    fp_push(*(float*)&MEM32(ebp + (-0x290))); /* 0x120E32BF: fld dword ptr [ebp - 0x290] */
    edx = MEM32(ebp + (-0x27C)); /* 0x120E32C5: mov edx, dword ptr [ebp - 0x27c] */
    fp_push(*(float*)&MEM32(ebp + (-0x288))); /* 0x120E32CB: fld dword ptr [ebp - 0x288] */
    edx = MEM32(edx + eax * 4); /* 0x120E32D1: mov edx, dword ptr [edx + eax*4] */
    fp_push(*(float*)&MEM32(ebp + (-0x258))); /* 0x120E32D4: fld dword ptr [ebp - 0x258] */
    fp_push(0.0); /* 0x120E32DA: fldz  */
    fp_xch(4); /* 0x120E32DC: fxch st(4) */
    fp_xch(1); /* 0x120E32DE: fxch st(1) */
    fp_xch(3); /* 0x120E32E0: fxch st(3) */
    fp_xch(2); /* 0x120E32E2: fxch st(2) */
    fp_xch(1); /* 0x120E32E4: fxch st(1) */
L_120E32E6:
    eax = edx; /* 0x120E32E6: mov eax, edx */
    if (30u) _cf = (((eax) >> 2) & 1u); /* 0x120E32E8: shl eax, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((eax << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 30u; /* 0x120E32E8: shl eax, 0x1e */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x120E32EB: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x120E32EB: shr esi, 2 */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x120E32EE: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E32F0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E345D; /* 0x120E32F4: je 0x120e345d */
L_120E32FA:
    eax = MEM32(ebp + (-0x29C)); /* 0x120E32FA: mov eax, dword ptr [ebp - 0x29c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x120E3300: add edx, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + edx * 8 + (-0x44))); /* 0x120E3302: fld dword ptr [ebp + edx*8 - 0x44] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x120E3306: fsubp st(3) */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E3308: fld dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120E330B: fmulp st(3) */
    fp_xch(2); /* 0x120E330D: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x330)) = _v; } /* 0x120E330F: fstp dword ptr [ebp - 0x330] */
    fp_push(*(float*)&MEM32(ebp + edx * 8 + (-0x40))); /* 0x120E3315: fld dword ptr [ebp + edx*8 - 0x40] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E3319: fsubp st(2) */
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x120E331B: fld dword ptr [eax + ecx] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E331E: fmulp st(2) */
    fp_xch(1); /* 0x120E3320: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x32C)) = _v; } /* 0x120E3322: fstp dword ptr [ebp - 0x32c] */
    _st[0] -= (double)*(float*)ADDR(ebp + edx * 8 + (-0x3C)); /* 0x120E3328: fsub dword ptr [ebp + edx*8 - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + ecx); /* 0x120E332C: fmul dword ptr [eax + ecx] */
    eax = MEM32(ebp + (-0x24C)); /* 0x120E332F: mov eax, dword ptr [ebp - 0x24c] */
    edx = eax; /* 0x120E3335: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x120E3337: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x328)) = _v; } /* 0x120E333A: fstp dword ptr [ebp - 0x328] */
    fp_push(*(float*)&MEM32(ebp + (-0x328))); /* 0x120E3340: fld dword ptr [ebp - 0x328] */
    fp_push(*(float*)&MEM32(ebp + (-0x32C))); /* 0x120E3346: fld dword ptr [ebp - 0x32c] */
    fp_push(*(float*)&MEM32(ebp + (-0x330))); /* 0x120E334C: fld dword ptr [ebp - 0x330] */
    /* cmp edx, 3 */ /* 0x120E3352: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3397; /* 0x120E3355: je 0x120e3397 */
L_120E3357:
    edi = MEM32(ebp + (-0x2B4)); /* 0x120E3357: mov edi, dword ptr [ebp - 0x2b4] */
    fp_push(_st[0]); /* 0x120E335D: fld st(0) */
    fp_push(*(double*)ADDR(0x12007CC0)); /* 0x120E335F: fld qword ptr [0x12007cc0] */
    _st[1] *= _st[0]; /* 0x120E3365: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ecx + edi)); /* 0x120E3367: fld dword ptr [ecx + edi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E336A: faddp st(2) */
    fp_xch(1); /* 0x120E336C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi) = _v; } /* 0x120E336E: fstp dword ptr [ecx + edi] */
    edi = MEM32(ebp + (-0x2D4)); /* 0x120E3371: mov edi, dword ptr [ebp - 0x2d4] */
    fp_push(_st[2]); /* 0x120E3377: fld st(2) */
    _st[0] *= _st[1]; /* 0x120E3379: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + edi); /* 0x120E337B: fadd dword ptr [ecx + edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi) = _v; } /* 0x120E337E: fstp dword ptr [ecx + edi] */
    edi = MEM32(ebp + (-0x26C)); /* 0x120E3381: mov edi, dword ptr [ebp - 0x26c] */
    fp_push(_st[3]); /* 0x120E3387: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E3389: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(edi + ecx); /* 0x120E338B: fadd dword ptr [edi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ecx) = _v; } /* 0x120E338E: fstp dword ptr [edi + ecx] */
    edi = MEM32(ebp + (-0x268)); /* 0x120E3391: mov edi, dword ptr [ebp - 0x268] */
L_120E3397:
    /* cmp eax, 0xCu */ /* 0x120E3397: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E3469; /* 0x120E339A: jae 0x120e3469 */
L_120E33A0:
    /* test edx, edx */ /* 0x120E33A0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E33E4; /* 0x120E33A2: je 0x120e33e4 */
L_120E33A4:
    ebx = MEM32(ebp + (-0x2DC)); /* 0x120E33A4: mov ebx, dword ptr [ebp - 0x2dc] */
    fp_push(_st[0]); /* 0x120E33AA: fld st(0) */
    fp_push(*(double*)ADDR(0x12007CD0)); /* 0x120E33AC: fld qword ptr [0x12007cd0] */
    _st[1] *= _st[0]; /* 0x120E33B2: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ecx + ebx)); /* 0x120E33B4: fld dword ptr [ecx + ebx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E33B7: faddp st(2) */
    fp_xch(1); /* 0x120E33B9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx) = _v; } /* 0x120E33BB: fstp dword ptr [ecx + ebx] */
    ebx = MEM32(ebp + (-0x2C0)); /* 0x120E33BE: mov ebx, dword ptr [ebp - 0x2c0] */
    fp_push(_st[2]); /* 0x120E33C4: fld st(2) */
    _st[0] *= _st[1]; /* 0x120E33C6: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx); /* 0x120E33C8: fadd dword ptr [ecx + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx) = _v; } /* 0x120E33CB: fstp dword ptr [ecx + ebx] */
    ebx = MEM32(ebp + (-0x278)); /* 0x120E33CE: mov ebx, dword ptr [ebp - 0x278] */
    fp_push(_st[3]); /* 0x120E33D4: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E33D6: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx); /* 0x120E33D8: fadd dword ptr [ecx + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx) = _v; } /* 0x120E33DB: fstp dword ptr [ecx + ebx] */
    ebx = MEM32(ebp + (-0x248)); /* 0x120E33DE: mov ebx, dword ptr [ebp - 0x248] */
L_120E33E4:
    edi = MEM32(ebp + (-0x2A0)); /* 0x120E33E4: mov edi, dword ptr [ebp - 0x2a0] */
    fp_push(_st[0]); /* 0x120E33EA: fld st(0) */
    fp_push(*(double*)ADDR(0x12007CC8)); /* 0x120E33EC: fld qword ptr [0x12007cc8] */
    _st[1] *= _st[0]; /* 0x120E33F2: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ecx + edi)); /* 0x120E33F4: fld dword ptr [ecx + edi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E33F7: faddp st(2) */
    fp_xch(1); /* 0x120E33F9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi) = _v; } /* 0x120E33FB: fstp dword ptr [ecx + edi] */
    edi = MEM32(ebp + (-0x2BC)); /* 0x120E33FE: mov edi, dword ptr [ebp - 0x2bc] */
    fp_push(_st[2]); /* 0x120E3404: fld st(2) */
    _st[0] *= _st[1]; /* 0x120E3406: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + edi); /* 0x120E3408: fadd dword ptr [ecx + edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi) = _v; } /* 0x120E340B: fstp dword ptr [ecx + edi] */
    edi = MEM32(ebp + (-0x274)); /* 0x120E340E: mov edi, dword ptr [ebp - 0x274] */
    fp_push(_st[3]); /* 0x120E3414: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E3416: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + edi); /* 0x120E3418: fadd dword ptr [ecx + edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edi) = _v; } /* 0x120E341B: fstp dword ptr [ecx + edi] */
    edi = MEM32(ebp + (-0x268)); /* 0x120E341E: mov edi, dword ptr [ebp - 0x268] */
    /* cmp edx, 3 */ /* 0x120E3424: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3469; /* 0x120E3427: je 0x120e3469 */
L_120E3429:
    fp_push(*(double*)ADDR(0x120019C0)); /* 0x120E3429: fld qword ptr [0x120019c0] */
    edx = MEM32(ebp + (-0x2B0)); /* 0x120E342F: mov edx, dword ptr [ebp - 0x2b0] */
    _st[1] *= _st[0]; /* 0x120E3435: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ecx + edx)); /* 0x120E3437: fld dword ptr [ecx + edx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E343A: faddp st(2) */
    fp_xch(1); /* 0x120E343C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx) = _v; } /* 0x120E343E: fstp dword ptr [ecx + edx] */
    edx = MEM32(ebp + (-0x2C4)); /* 0x120E3441: mov edx, dword ptr [ebp - 0x2c4] */
    _st[1] *= _st[0]; /* 0x120E3447: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ecx + edx)); /* 0x120E3449: fld dword ptr [ecx + edx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E344C: faddp st(2) */
    fp_xch(1); /* 0x120E344E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx) = _v; } /* 0x120E3450: fstp dword ptr [ecx + edx] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E3453: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + ebx); /* 0x120E3455: fadd dword ptr [ecx + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx) = _v; } /* 0x120E3458: fstp dword ptr [ecx + ebx] */
    goto L_120E346F; /* 0x120E345B: jmp 0x120e346f */
L_120E345D:
    eax = MEM32(ebp + (-0x24C)); /* 0x120E345D: mov eax, dword ptr [ebp - 0x24c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3463: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3465: fstp st(1) */
    goto L_120E346D; /* 0x120E3467: jmp 0x120e346d */
L_120E3469:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E3469: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E346B: fstp st(0) */
L_120E346D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E346D: fstp st(0) */
L_120E346F:
    fp_push(*(float*)&MEM32(ebp + (-0x25C))); /* 0x120E346F: fld dword ptr [ebp - 0x25c] */
    fp_push(*(float*)&MEM32(ebp + (-0x260))); /* 0x120E3475: fld dword ptr [ebp - 0x260] */
L_120E347B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x250)) = MEM32(ebp + (-0x250)) + 0x10u; /* 0x120E347B: add dword ptr [ebp - 0x250], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E3482: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E3483: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E3486: mov dword ptr [ebp - 0x24c], eax */
    /* cmp eax, 0x10u */ /* 0x120E348C: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x250)); /* 0x120E348F: mov eax, dword ptr [ebp - 0x250] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3196; /* 0x120E3495: jb 0x120e3196 */
L_120E349B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E349B: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E349D: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E349F: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E34A1: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0x298)); /* 0x120E34A3: fldcw word ptr [ebp - 0x298] */
    eax = MEM32(ebp + (-0x2B8)); /* 0x120E34A9: mov eax, dword ptr [ebp - 0x2b8] */
    MEM32(eax + 0x4) = esi; /* 0x120E34AF: mov dword ptr [eax + 4], esi */
L_120E34B2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E34B2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E34B5: pop edi */
    esi = POP32_VAL(esp); /* 0x120E34B6: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E34B7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E34B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E34BB: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E34BC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E34C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E34C2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E34CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E34CAu);

L_120E34CA:
    edi = edi; /* 0x120E34CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E34CC: push ebp */
    ebp = esp; /* 0x120E34CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x120E34CF: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E34D2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E34D7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E34D9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E34DC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E34DF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E34E0: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E34E3: push esi */
    PUSH32(esp, edi); /* 0x120E34E4: push edi */
    edi = (uint32_t)MEM16(ebx); /* 0x120E34E5: movzx edi, word ptr [ebx] */
    ecx = edi; /* 0x120E34E8: mov ecx, edi */
    edx = ebp + (-0x44); /* 0x120E34EA: lea edx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = eax; /* 0x120E34ED: mov dword ptr [ebp - 0x48], eax */
    RECOMP_CALL(sub_120E105E); /* 0x120E34F0: call 0x120e105e */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)MEM16(ebx + 0x2); /* 0x120E34F5: movzx esi, word ptr [ebx + 2] */
    ecx = esi; /* 0x120E34F9: mov ecx, esi */
    edx = ebp + (-0x34); /* 0x120E34FB: lea edx, [ebp - 0x34] */
    RECOMP_CALL(sub_120E105E); /* 0x120E34FE: call 0x120e105e */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120E3503: fld dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x120E3506: fld dword ptr [ebp - 0x44] */
    fp_push(_st[0]); /* 0x120E3509: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E350B: fsubp st(2) */
    /* cmp LO16(edi), LO16(esi) */ /* 0x120E350D: cmp di, si */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_120E3577; /* 0x120E3510: ja 0x120e3577 */
L_120E3512:
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3512: fld qword ptr [0x120014c0] */
    esi = ebp + (-0x58); /* 0x120E3518: lea esi, [ebp - 0x58] */
    _st[2] *= _st[0]; /* 0x120E351B: fmul st(2), st(0) */
    edi = ebp + (-0x14); /* 0x120E351D: lea edi, [ebp - 0x14] */
    fp_xch(2); /* 0x120E3520: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3522: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E3524: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E3527: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120E352A: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x120E352D: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E352F: fsubp st(2) */
    fp_xch(1); /* 0x120E3531: fxch st(1) */
    _st[0] *= _st[2]; /* 0x120E3533: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3535: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E3537: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E353A: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E353D: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120E3540: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E3542: fsubp st(2) */
    fp_xch(1); /* 0x120E3544: fxch st(1) */
    _st[0] *= _st[2]; /* 0x120E3546: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3548: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E354A: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E354D: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x120E3550: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x120E3553: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E3555: fsubp st(2) */
    fp_xch(1); /* 0x120E3557: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E3559: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E355B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E355D: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x120E3560: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x120E3562: fst dword ptr [ebp - 0x58] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x120E3565: fst dword ptr [ebp - 0x54] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x120E3568: fst dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120E356B: fstp dword ptr [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E356E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E356F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E3570: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E3571: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_120E35F9; /* 0x120E3572: jmp 0x120e35f9 */
L_120E3577:
    fp_xch(1); /* 0x120E3577: fxch st(1) */
    *(double*)ADDR(ebp + (-0x50)) = _st[0]; /* 0x120E3579: fst qword ptr [ebp - 0x50] */
    fp_push(*(double*)ADDR(0x12007F60)); /* 0x120E357C: fld qword ptr [0x12007f60] */
    _st[1] *= _st[0]; /* 0x120E3582: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E3584: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120E3586: faddp st(2) */
    fp_xch(1); /* 0x120E3588: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E358A: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x120E358D: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120E3590: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x120E3593: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E3595: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E3597: fld st(1) */
    _st[0] *= _st[3]; /* 0x120E3599: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E359B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E359D: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120E35A0: fld dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120E35A3: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120E35A6: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E35A8: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E35AA: fld st(1) */
    _st[0] *= _st[4]; /* 0x120E35AC: fmul st(4) */
    fp_push(_st[1]); /* 0x120E35AE: fld st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E35B0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120E35B2: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120E35B5: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x120E35B8: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x120E35BB: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x120E35BD: fsubp st(2) */
    fp_push(_st[1]); /* 0x120E35BF: fld st(1) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x120E35C1: fmulp st(6) */
    fp_push(_st[0]); /* 0x120E35C3: fld st(0) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x120E35C5: faddp st(6) */
    fp_xch(5); /* 0x120E35C7: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E35C9: fstp dword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(0x12005C18)); /* 0x120E35CC: fld qword ptr [0x12005c18] */
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x120E35D2: fld qword ptr [ebp - 0x50] */
    _st[0] *= _st[1]; /* 0x120E35D5: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x120E35D7: fadd dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E35DA: fstp dword ptr [ebp - 0x14] */
    _st[4] *= _st[0]; /* 0x120E35DD: fmul st(4), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120E35DF: fld dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x120E35E2: faddp st(5) */
    fp_xch(4); /* 0x120E35E4: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E35E6: fstp dword ptr [ebp - 0x10] */
    fp_xch(2); /* 0x120E35E9: fxch st(2) */
    _st[0] *= _st[3]; /* 0x120E35EB: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E35ED: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E35EF: fstp dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E35F2: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E35F4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E35F6: fstp dword ptr [ebp - 8] */
L_120E35F9:
    ecx = MEM32(ebx + 0x4); /* 0x120E35F9: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, 0x10u); /* 0x120E35FC: push 0x10 */
    edx = POP32_VAL(esp); /* 0x120E35FE: pop edx */
L_120E35FF:
    eax = ecx; /* 0x120E35FF: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E3601: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x120E3604: add eax, eax */
    _flag_k = FK_ADD;
    esi = ebp + eax * 8 + (-0x44); /* 0x120E3606: lea esi, [ebp + eax*8 - 0x44] */
    eax = MEM32(ebp + (-0x48)); /* 0x120E360A: mov eax, dword ptr [ebp - 0x48] */
    edi = eax; /* 0x120E360D: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E360F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E3610: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E3611: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E3612: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x120E3615: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x120E3615: shr ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E3618: dec edx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E3619: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x48)) = eax; /* 0x120E361A: mov dword ptr [ebp - 0x48], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E35FF; /* 0x120E361D: jne 0x120e35ff */
L_120E361F:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E361F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E3622: pop edi */
    esi = POP32_VAL(esp); /* 0x120E3623: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E3624: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E3626: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E3628: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E3629: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E362E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E362F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E3637(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E3637u);

L_120E3637:
    edi = edi; /* 0x120E3637: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E3639: push ebp */
    ebp = esp; /* 0x120E363A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E363C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E363D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E3640: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E3641: mov edi, dword ptr [ebp + 8] */
    eax = esi + 0x8; /* 0x120E3644: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x120E3647: push eax */
    PUSH32(esp, edi); /* 0x120E3648: push edi */
    RECOMP_CALL(sub_120E34CA); /* 0x120E3649: call 0x120e34ca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E364E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E36B4; /* 0x120E3650: js 0x120e36b4 */
L_120E3652:
    ecx = MEM32(esi); /* 0x120E3652: mov ecx, dword ptr [esi] */
    fp_push(*(double*)ADDR(0x12007F58)); /* 0x120E3654: fld qword ptr [0x12007f58] */
    PUSH32(esp, ebx); /* 0x120E365A: push ebx */
    PUSH32(esp, 8); /* 0x120E365B: push 8 */
    edx = POP32_VAL(esp); /* 0x120E365D: pop edx */
    ebx = edi + 0xC; /* 0x120E365E: lea ebx, [edi + 0xc] */
    esi = edx; /* 0x120E3661: mov esi, edx */
L_120E3663:
    eax = ecx; /* 0x120E3663: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E3665: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x120E3668: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120E366B: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3676; /* 0x120E366E: jns 0x120e3676 */
L_120E3670:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3670: fadd dword ptr [0x120014d0] */
L_120E3676:
    _st[0] *= _st[1]; /* 0x120E3676: fmul st(1) */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x120E3678: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x120E3678: shr ecx, 4 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x120E367B: fstp dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120E367D: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E3680: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E3663; /* 0x120E3681: jne 0x120e3663 */
L_120E3683:
    esi = MEM32(ebp + 0xC); /* 0x120E3683: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x120E3686: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x8Cu; /* 0x120E3689: add edi, 0x8c */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x120E368F: pop ebx */
L_120E3690:
    eax = ecx; /* 0x120E3690: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E3692: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x120E3695: mov dword ptr [ebp + 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x120E3698: fild dword ptr [ebp + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E36A3; /* 0x120E369B: jns 0x120e36a3 */
L_120E369D:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E369D: fadd dword ptr [0x120014d0] */
L_120E36A3:
    _st[0] *= _st[1]; /* 0x120E36A3: fmul st(1) */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x120E36A5: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x120E36A5: shr ecx, 4 */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x120E36A8: fstp dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120E36AA: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E36AD: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E3690; /* 0x120E36AE: jne 0x120e3690 */
L_120E36B0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E36B0: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E36B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E36B4:
    edi = POP32_VAL(esp); /* 0x120E36B4: pop edi */
    esi = POP32_VAL(esp); /* 0x120E36B5: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E36B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E36B7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E36BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E36BFu);

L_120E36BF:
    edi = edi; /* 0x120E36BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E36C1: push ebp */
    ebp = esp; /* 0x120E36C2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E36C4: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E36C7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E36CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E36CE: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120E36D1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E36D2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120E36D5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E36D6: mov esi, dword ptr [ebp + 0xc] */
    eax = esi + 0x8; /* 0x120E36D9: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x120E36DC: push eax */
    PUSH32(esp, ebx); /* 0x120E36DD: push ebx */
    RECOMP_CALL(sub_120E34CA); /* 0x120E36DE: call 0x120e34ca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E36E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E3813; /* 0x120E36E5: js 0x120e3813 */
L_120E36EB:
    SET_LO8(edx, MEM8(esi)); /* 0x120E36EB: mov dl, byte ptr [esi] */
    SET_LO8(ecx, MEM8(esi + 0x1)); /* 0x120E36ED: mov cl, byte ptr [esi + 1] */
    eax = (uint32_t)LO8(edx); /* 0x120E36F0: movzx eax, dl */
    MEM32(ebp + (-0x2C)) = eax; /* 0x120E36F3: mov dword ptr [ebp - 0x2c], eax */
    eax = (uint32_t)LO8(ecx); /* 0x120E36F6: movzx eax, cl */
    fp_push((double)(int32_t)MEM32(ebp + (-0x2C))); /* 0x120E36F9: fild dword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x120E36FC: fld qword ptr [0x120014d8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x120E3702: mov dword ptr [ebp - 0x2c], eax */
    _st[1] *= _st[0]; /* 0x120E3705: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E3707: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E3709: fstp dword ptr [ebp - 0x24] */
    _st[0] = _st[0] * (double)(int32_t)MEM32(ebp + (-0x2C)); /* 0x120E370C: fimul dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E370F: fstp dword ptr [ebp - 0x20] */
    /* cmp LO8(edx), LO8(ecx) */ /* 0x120E3712: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E375A; /* 0x120E3714: jbe 0x120e375a */
L_120E3716:
    fp_push(*(double*)ADDR(0x12007F70)); /* 0x120E3716: fld qword ptr [0x12007f70] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E371C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E371E: inc ecx */
    _flag_k = FK_INC;
L_120E371F:
    PUSH32(esp, 7); /* 0x120E371F: push 7 */
    eax = POP32_VAL(esp); /* 0x120E3721: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E3722: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x120E3724: mov dword ptr [ebp - 0x28], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x120E3727: fild dword ptr [ebp - 0x28] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E3732; /* 0x120E372A: jns 0x120e3732 */
L_120E372C:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E372C: fadd dword ptr [0x120014d0] */
L_120E3732:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x120E3732: fmul dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x120E3735: mov dword ptr [ebp - 0x28], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x120E3738: fild dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x120E373B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3745; /* 0x120E373D: jns 0x120e3745 */
L_120E373F:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E373F: fadd dword ptr [0x120014d0] */
L_120E3745:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x120E3745: fmul dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3748: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3749: faddp st(1) */
    _st[0] *= _st[1]; /* 0x120E374B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120E374D: fstp dword ptr [ebp + ecx*4 - 0x24] */
    /* cmp ecx, 7 */ /* 0x120E3751: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E371F; /* 0x120E3754: jb 0x120e371f */
L_120E3756:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3756: fstp st(0) */
    goto L_120E37A6; /* 0x120E3758: jmp 0x120e37a6 */
L_120E375A:
    fp_push(*(double*)ADDR(0x120081D0)); /* 0x120E375A: fld qword ptr [0x120081d0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E3760: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3762: inc ecx */
    _flag_k = FK_INC;
L_120E3763:
    PUSH32(esp, 5); /* 0x120E3763: push 5 */
    eax = POP32_VAL(esp); /* 0x120E3765: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E3766: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x120E3768: mov dword ptr [ebp - 0x28], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x120E376B: fild dword ptr [ebp - 0x28] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E3776; /* 0x120E376E: jns 0x120e3776 */
L_120E3770:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3770: fadd dword ptr [0x120014d0] */
L_120E3776:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x120E3776: fmul dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x120E3779: mov dword ptr [ebp - 0x28], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0x28))); /* 0x120E377C: fild dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x120E377F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3789; /* 0x120E3781: jns 0x120e3789 */
L_120E3783:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3783: fadd dword ptr [0x120014d0] */
L_120E3789:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x120E3789: fmul dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E378C: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E378D: faddp st(1) */
    _st[0] *= _st[1]; /* 0x120E378F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120E3791: fstp dword ptr [ebp + ecx*4 - 0x24] */
    /* cmp ecx, 5 */ /* 0x120E3795: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3763; /* 0x120E3798: jb 0x120e3763 */
L_120E379A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E379A: fstp st(0) */
    fp_push(0.0); /* 0x120E379C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E379E: fstp dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x120E37A1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E37A3: fstp dword ptr [ebp - 8] */
L_120E37A6:
    ecx = (uint32_t)MEM8(esi + 0x4); /* 0x120E37A6: movzx ecx, byte ptr [esi + 4] */
    eax = (uint32_t)MEM8(esi + 0x3); /* 0x120E37AA: movzx eax, byte ptr [esi + 3] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120E37AE: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120E37AE: shl ecx, 8 */
    PUSH32(esp, edi); /* 0x120E37B1: push edi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E37B2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(esi + 0x2); /* 0x120E37B4: movzx eax, byte ptr [esi + 2] */
    PUSH32(esp, 8); /* 0x120E37B8: push 8 */
    edi = POP32_VAL(esp); /* 0x120E37BA: pop edi */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120E37BB: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120E37BB: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E37BE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx + 0xC; /* 0x120E37C0: lea edx, [ebx + 0xc] */
    MEM32(ebp + (-0x28)) = edi; /* 0x120E37C3: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x2C)) = edi; /* 0x120E37C6: mov dword ptr [ebp - 0x2c], edi */
L_120E37C9:
    eax = ecx; /* 0x120E37C9: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x120E37CB: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x24))); /* 0x120E37CE: fld dword ptr [ebp + eax*4 - 0x24] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x120E37D2: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x120E37D2: shr ecx, 3 */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E37D5: fstp dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E37D7: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E37DA: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E37C9; /* 0x120E37DB: jne 0x120e37c9 */
L_120E37DD:
    ecx = (uint32_t)MEM8(esi + 0x7); /* 0x120E37DD: movzx ecx, byte ptr [esi + 7] */
    eax = (uint32_t)MEM8(esi + 0x6); /* 0x120E37E1: movzx eax, byte ptr [esi + 6] */
    edi = MEM32(ebp + (-0x28)); /* 0x120E37E5: mov edi, dword ptr [ebp - 0x28] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120E37E8: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120E37E8: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E37EB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(esi + 0x5); /* 0x120E37ED: movzx eax, byte ptr [esi + 5] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x120E37F1: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x120E37F1: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E37F4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx + 0x8C; /* 0x120E37F6: lea edx, [ebx + 0x8c] */
L_120E37FC:
    eax = ecx; /* 0x120E37FC: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x120E37FE: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x24))); /* 0x120E3801: fld dword ptr [ebp + eax*4 - 0x24] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x120E3805: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x120E3805: shr ecx, 3 */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E3808: fstp dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E380A: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E380D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E37FC; /* 0x120E380E: jne 0x120e37fc */
L_120E3810:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E3810: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x120E3812: pop edi */
L_120E3813:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E3813: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x120E3816: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E3817: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E3819: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E381A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E381F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E3820: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E3828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E3828u);

L_120E3828:
    edi = edi; /* 0x120E3828: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E382A: push ebp */
    ebp = esp; /* 0x120E382B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x160u; /* 0x120E382D: sub esp, 0x160 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E3833: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E3838: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E383A: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120E383D: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x120E3841: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E3844: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120E3845: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x158)) = eax; /* 0x120E3848: mov dword ptr [ebp - 0x158], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3991; /* 0x120E384E: je 0x120e3991 */
L_120E3854:
    PUSH32(esp, ebx); /* 0x120E3854: push ebx */
    PUSH32(esp, esi); /* 0x120E3855: push esi */
    PUSH32(esp, 0x40u); /* 0x120E3856: push 0x40 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E3858: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x44); /* 0x120E385A: lea eax, [ebp - 0x44] */
    PUSH32(esp, esi); /* 0x120E385D: push esi */
    PUSH32(esp, eax); /* 0x120E385E: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E385F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E3864: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x154)) = _fpu_cw; /* 0x120E3867: fnstcw word ptr [ebp - 0x154] */
    eax = MEM32(ebp + (-0x154)); /* 0x120E386D: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E3873: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x15C)) = eax; /* 0x120E3878: mov dword ptr [ebp - 0x15c], eax */
    _fpu_cw = MEM16(ebp + (-0x15C)); /* 0x120E387E: fldcw word ptr [ebp - 0x15c] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3884: fld qword ptr [0x120014c0] */
    eax = MEM32(ebp + (-0x154)); /* 0x120E388A: mov eax, dword ptr [ebp - 0x154] */
    ebx = ebp + (-0x144); /* 0x120E3890: lea ebx, [ebp - 0x144] */
    MEM32(ebp + (-0x160)) = eax; /* 0x120E3896: mov dword ptr [ebp - 0x160], eax */
    edx = ebp + (-0x140); /* 0x120E389C: lea edx, [ebp - 0x140] */
    ecx = edi + 0xC; /* 0x120E38A2: lea ecx, [edi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x120E38A5: sub ebx, edi */
    _flag_k = FK_CMP;
L_120E38A7:
    fp_push(*(float*)&MEM32(ebp + esi * 4 + (-0x44))); /* 0x120E38A7: fld dword ptr [ebp + esi*4 - 0x44] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x120E38AB: fadd dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14C)) = _v; } /* 0x120E38AD: fst dword ptr [ebp - 0x14c] */
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E38B3: fld dword ptr [ecx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x120E38B6: fstp dword ptr [edx - 4] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x120E38B9: fld dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x120E38BC: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x120E38BE: fld dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x120E38C1: fstp dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E38C4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x148)) = _v; } /* 0x120E38C6: fstp dword ptr [ebp - 0x148] */
    fp_push(*(float*)&MEM32(ebp + (-0x148))); /* 0x120E38CC: fld dword ptr [ebp - 0x148] */
    MEM32(ebp + (-0x150)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E38D2: fistp dword ptr [ebp - 0x150] */
    eax = MEM32(ebp + (-0x150)); /* 0x120E38D8: mov eax, dword ptr [ebp - 0x150] */
    MEM32(ebp + (-0x148)) = eax; /* 0x120E38DE: mov dword ptr [ebp - 0x148], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x148))); /* 0x120E38E4: fild dword ptr [ebp - 0x148] */
    eax = esi; /* 0x120E38EA: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E38EC: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x148)) = _v; } /* 0x120E38EF: fstp dword ptr [ebp - 0x148] */
    fp_push(*(float*)&MEM32(ebp + (-0x148))); /* 0x120E38F5: fld dword ptr [ebp - 0x148] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + ecx) = _v; } /* 0x120E38FB: fst dword ptr [ebx + ecx] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x14C)) - _st[0]; /* 0x120E38FE: fsubr dword ptr [ebp - 0x14c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14C)) = _v; } /* 0x120E3904: fstp dword ptr [ebp - 0x14c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14C))); /* 0x120E390A: fld dword ptr [ebp - 0x14c] */
    /* cmp eax, 3 */ /* 0x120E3910: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3925; /* 0x120E3913: je 0x120e3925 */
L_120E3915:
    fp_push(_st[0]); /* 0x120E3915: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E3917: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x40)); /* 0x120E391D: fadd dword ptr [ebp + esi*4 - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x40)) = _v; } /* 0x120E3921: fstp dword ptr [ebp + esi*4 - 0x40] */
L_120E3925:
    /* cmp esi, 0xCu */ /* 0x120E3925: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E3963; /* 0x120E3928: jae 0x120e3963 */
L_120E392A:
    /* test eax, eax */ /* 0x120E392A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E393E; /* 0x120E392C: je 0x120e393e */
L_120E392E:
    fp_push(_st[0]); /* 0x120E392E: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E3930: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x38)); /* 0x120E3936: fadd dword ptr [ebp + esi*4 - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x38)) = _v; } /* 0x120E393A: fstp dword ptr [ebp + esi*4 - 0x38] */
L_120E393E:
    fp_push(_st[0]); /* 0x120E393E: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E3940: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x34)); /* 0x120E3946: fadd dword ptr [ebp + esi*4 - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x34)) = _v; } /* 0x120E394A: fstp dword ptr [ebp + esi*4 - 0x34] */
    /* cmp eax, 3 */ /* 0x120E394E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3963; /* 0x120E3951: je 0x120e3963 */
L_120E3953:
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x120E3953: fmul qword ptr [0x120019c0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x30)); /* 0x120E3959: fadd dword ptr [ebp + esi*4 - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x30)) = _v; } /* 0x120E395D: fstp dword ptr [ebp + esi*4 - 0x30] */
    goto L_120E3965; /* 0x120E3961: jmp 0x120e3965 */
L_120E3963:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3963: fstp st(0) */
L_120E3965:
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3965: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E396B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E396C: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120E396F: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x10u */ /* 0x120E3972: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E38A7; /* 0x120E3975: jb 0x120e38a7 */
L_120E397B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E397B: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0x160)); /* 0x120E397D: fldcw word ptr [ebp - 0x160] */
    eax = MEM32(ebp + (-0x158)); /* 0x120E3983: mov eax, dword ptr [ebp - 0x158] */
    esi = POP32_VAL(esp); /* 0x120E3989: pop esi */
    edi = ebp + (-0x144); /* 0x120E398A: lea edi, [ebp - 0x144] */
    ebx = POP32_VAL(esp); /* 0x120E3990: pop ebx */
L_120E3991:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E3991: push dword ptr [ebp + 0x10] */
    edx = edi; /* 0x120E3994: mov edx, edi */
    PUSH32(esp, 1); /* 0x120E3996: push 1 */
    ecx = eax; /* 0x120E3998: mov ecx, eax */
    RECOMP_CALL(sub_120E289F); /* 0x120E399A: call 0x120e289f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120E399F: pop edi */
    /* test eax, eax */ /* 0x120E39A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E39A6; /* 0x120E39A2: js 0x120e39a6 */
L_120E39A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E39A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E39A6:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E39A6: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E39A9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120E39AB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E39B0: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E39B1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E39B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E39B9u);

L_120E39B9:
    edi = edi; /* 0x120E39B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E39BB: push ebp */
    ebp = esp; /* 0x120E39BC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x120E39BE: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E39C1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E39C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E39C8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E39CB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E39CE: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120E39CF: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E39D2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E39D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120E39D5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E39D6: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x50)) = eax; /* 0x120E39D9: mov dword ptr [ebp - 0x50], eax */
    MEM32(edi) = esi; /* 0x120E39DC: mov dword ptr [edi], esi */
    MEM32(edi + 0x4) = esi; /* 0x120E39DE: mov dword ptr [edi + 4], esi */
    /* test ebx, ebx */ /* 0x120E39E1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E39F4; /* 0x120E39E3: je 0x120e39f4 */
L_120E39E5:
    PUSH32(esp, 0x40u); /* 0x120E39E5: push 0x40 */
    eax = ebp + (-0x44); /* 0x120E39E7: lea eax, [ebp - 0x44] */
    PUSH32(esp, esi); /* 0x120E39EA: push esi */
    PUSH32(esp, eax); /* 0x120E39EB: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E39EC: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E39F1: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E39F4:
    MEM16(ebp + (-0x58)) = _fpu_cw; /* 0x120E39F4: fnstcw word ptr [ebp - 0x58] */
    eax = MEM32(ebp + (-0x58)); /* 0x120E39F7: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E39FA: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x64)) = eax; /* 0x120E39FF: mov dword ptr [ebp - 0x64], eax */
    _fpu_cw = MEM16(ebp + (-0x64)); /* 0x120E3A02: fldcw word ptr [ebp - 0x64] */
    fp_push(*(double*)ADDR(0x12005C38)); /* 0x120E3A05: fld qword ptr [0x12005c38] */
    eax = MEM32(ebp + (-0x58)); /* 0x120E3A0B: mov eax, dword ptr [ebp - 0x58] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3A0E: fld qword ptr [0x120014c0] */
    MEM32(ebp + (-0x60)) = eax; /* 0x120E3A14: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x120E3A17: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x120E3A1A: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E3A1D: mov dword ptr [ebp - 0x5c], eax */
L_120E3A20:
    fp_push(*(float*)&MEM32(eax)); /* 0x120E3A20: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120E3A22: fstp dword ptr [ebp - 0x4c] */
    /* test ebx, ebx */ /* 0x120E3A25: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3A33; /* 0x120E3A27: je 0x120e3a33 */
L_120E3A29:
    fp_push(*(float*)&MEM32(ebp + esi * 4 + (-0x44))); /* 0x120E3A29: fld dword ptr [ebp + esi*4 - 0x44] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x120E3A2D: fadd dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120E3A30: fstp dword ptr [ebp - 0x4c] */
L_120E3A33:
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x120E3A33: fld dword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E3A36: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3A38: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x120E3A3A: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x120E3A3D: fld dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x54)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E3A40: fistp dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x54)); /* 0x120E3A43: mov eax, dword ptr [ebp - 0x54] */
    edx = esi; /* 0x120E3A46: mov edx, esi */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x120E3A48: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x120E3A48: shr edx, 3 */
    ecx = MEM32(edi + edx * 4); /* 0x120E3A4B: mov ecx, dword ptr [edi + edx*4] */
    MEM32(ebp + (-0x48)) = eax; /* 0x120E3A4E: mov dword ptr [ebp - 0x48], eax */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x120E3A51: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x120E3A51: shr ecx, 4 */
    if (28u) _cf = (((eax) >> 4) & 1u); /* 0x120E3A54: shl eax, 0x1c */
    if (28u) { _flag_a = recomp_flags_pack((eax << 28u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 28u; /* 0x120E3A54: shl eax, 0x1c */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E3A57: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + edx * 4) = ecx; /* 0x120E3A59: mov dword ptr [edi + edx*4], ecx */
    /* test ebx, ebx */ /* 0x120E3A5C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3ADB; /* 0x120E3A5E: je 0x120e3adb */
L_120E3A60:
    eax = MEM32(ebp + (-0x48)); /* 0x120E3A60: mov eax, dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x120E3A63: fld dword ptr [ebp - 0x4c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x48))); /* 0x120E3A66: fild dword ptr [ebp - 0x48] */
    /* test eax, eax */ /* 0x120E3A69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3A73; /* 0x120E3A6B: jns 0x120e3a73 */
L_120E3A6D:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3A6D: fadd dword ptr [0x120014d0] */
L_120E3A73:
    _st[0] *= *(double*)ADDR(0x12007F58); /* 0x120E3A73: fmul qword ptr [0x12007f58] */
    eax = esi; /* 0x120E3A79: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E3A7B: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E3A7E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x120E3A80: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x120E3A83: fld dword ptr [ebp - 0x48] */
    /* cmp eax, 3 */ /* 0x120E3A86: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3A9B; /* 0x120E3A89: je 0x120e3a9b */
L_120E3A8B:
    fp_push(_st[0]); /* 0x120E3A8B: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E3A8D: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x40)); /* 0x120E3A93: fadd dword ptr [ebp + esi*4 - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x40)) = _v; } /* 0x120E3A97: fstp dword ptr [ebp + esi*4 - 0x40] */
L_120E3A9B:
    /* cmp esi, 0xCu */ /* 0x120E3A9B: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E3AD9; /* 0x120E3A9E: jae 0x120e3ad9 */
L_120E3AA0:
    /* test eax, eax */ /* 0x120E3AA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3AB4; /* 0x120E3AA2: je 0x120e3ab4 */
L_120E3AA4:
    fp_push(_st[0]); /* 0x120E3AA4: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E3AA6: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x38)); /* 0x120E3AAC: fadd dword ptr [ebp + esi*4 - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x38)) = _v; } /* 0x120E3AB0: fstp dword ptr [ebp + esi*4 - 0x38] */
L_120E3AB4:
    fp_push(_st[0]); /* 0x120E3AB4: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E3AB6: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x34)); /* 0x120E3ABC: fadd dword ptr [ebp + esi*4 - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x34)) = _v; } /* 0x120E3AC0: fstp dword ptr [ebp + esi*4 - 0x34] */
    /* cmp eax, 3 */ /* 0x120E3AC4: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3AD9; /* 0x120E3AC7: je 0x120e3ad9 */
L_120E3AC9:
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x120E3AC9: fmul qword ptr [0x120019c0] */
    _st[0] += (double)*(float*)ADDR(ebp + esi * 4 + (-0x30)); /* 0x120E3ACF: fadd dword ptr [ebp + esi*4 - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x30)) = _v; } /* 0x120E3AD3: fstp dword ptr [ebp + esi*4 - 0x30] */
    goto L_120E3ADB; /* 0x120E3AD7: jmp 0x120e3adb */
L_120E3AD9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3AD9: fstp st(0) */
L_120E3ADB:
    eax = MEM32(ebp + (-0x5C)); /* 0x120E3ADB: mov eax, dword ptr [ebp - 0x5c] */
    fp_push(*(double*)ADDR(0x12005C38)); /* 0x120E3ADE: fld qword ptr [0x12005c38] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3AE4: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E3AEA: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E3AEB: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = eax; /* 0x120E3AEE: mov dword ptr [ebp - 0x5c], eax */
    /* cmp esi, 0x10u */ /* 0x120E3AF1: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3A20; /* 0x120E3AF4: jb 0x120e3a20 */
L_120E3AFA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3AFA: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3AFC: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0x60)); /* 0x120E3AFE: fldcw word ptr [ebp - 0x60] */
    edx = MEM32(ebp + (-0x50)); /* 0x120E3B01: mov edx, dword ptr [ebp - 0x50] */
    PUSH32(esp, ebx); /* 0x120E3B04: push ebx */
    PUSH32(esp, 0); /* 0x120E3B05: push 0 */
    ecx = edi + 0x8; /* 0x120E3B07: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_120E289F); /* 0x120E3B0A: call 0x120e289f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E3B0F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E3B12: pop edi */
    esi = POP32_VAL(esp); /* 0x120E3B13: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E3B14: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E3B16: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E3B17: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E3B1C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E3B1D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E3B25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E3B25u);

L_120E3B25:
    edi = edi; /* 0x120E3B25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E3B27: push ebp */
    ebp = esp; /* 0x120E3B28: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x120E3B2A: sub esp, 0xfc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E3B30: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E3B35: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E3B37: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120E3B3A: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120E3B3B: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E3B3E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E3B3F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E3B42: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120E3B43: mov edi, dword ptr [ebp + 0xc] */
    eax = edi + 0xC; /* 0x120E3B46: lea eax, [edi + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120E3B49: fld dword ptr [eax] */
    MEM32(ebp + (-0xD4)) = eax; /* 0x120E3B4B: mov dword ptr [ebp - 0xd4], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x120E3B51: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120E3B57: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E3B59: fstp dword ptr [ebp - 0xb8] */
    /* test ebx, ebx */ /* 0x120E3B5F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3B73; /* 0x120E3B61: je 0x120e3b73 */
L_120E3B63:
    PUSH32(esp, 0x40u); /* 0x120E3B63: push 0x40 */
    eax = ebp + (-0x64); /* 0x120E3B65: lea eax, [ebp - 0x64] */
    PUSH32(esp, 0); /* 0x120E3B68: push 0 */
    PUSH32(esp, eax); /* 0x120E3B6A: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E3B6B: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E3B70: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E3B73:
    MEM16(ebp + (-0xE4)) = _fpu_cw; /* 0x120E3B73: fnstcw word ptr [ebp - 0xe4] */
    eax = MEM32(ebp + (-0xE4)); /* 0x120E3B79: mov eax, dword ptr [ebp - 0xe4] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E3B7F: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = eax; /* 0x120E3B84: mov dword ptr [ebp - 0xb4], eax */
    _fpu_cw = MEM16(ebp + (-0xB4)); /* 0x120E3B8A: fldcw word ptr [ebp - 0xb4] */
    fp_push(*(double*)ADDR(0x12001948)); /* 0x120E3B90: fld qword ptr [0x12001948] */
    eax = MEM32(ebp + (-0xE4)); /* 0x120E3B96: mov eax, dword ptr [ebp - 0xe4] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3B9C: fld qword ptr [0x120014c0] */
    MEM32(ebp + (-0xC0)) = eax; /* 0x120E3BA2: mov dword ptr [ebp - 0xc0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E3BA8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0xC; /* 0x120E3BAA: lea edx, [edi + 0xc] */
L_120E3BAD:
    fp_push(*(float*)&MEM32(edx)); /* 0x120E3BAD: fld dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E3BAF: fstp dword ptr [ebp - 0xa8] */
    /* test ebx, ebx */ /* 0x120E3BB5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3BC9; /* 0x120E3BB7: je 0x120e3bc9 */
L_120E3BB9:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x64))); /* 0x120E3BB9: fld dword ptr [ebp + ecx*4 - 0x64] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x120E3BBD: fadd dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E3BC3: fstp dword ptr [ebp - 0xa8] */
L_120E3BC9:
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x120E3BC9: fld dword ptr [ebp - 0xa8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120E3BCF: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3BD1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E3BD3: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E3BD9: fld dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xF0)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E3BDF: fistp dword ptr [ebp - 0xf0] */
    eax = MEM32(ebp + (-0xF0)); /* 0x120E3BE5: mov eax, dword ptr [ebp - 0xf0] */
    MEM32(ebp + (-0xB4)) = eax; /* 0x120E3BEB: mov dword ptr [ebp - 0xb4], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB4))); /* 0x120E3BF1: fild dword ptr [ebp - 0xb4] */
    _st[0] *= *(double*)ADDR(0x120014D8); /* 0x120E3BF7: fmul qword ptr [0x120014d8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x120E3BFD: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E3C03: fld dword ptr [ebp - 0xb4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0xA4)) = _v; } /* 0x120E3C09: fst dword ptr [ebp + ecx*4 - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E3C10: fld dword ptr [ebp - 0xbc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E3C16: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3C18: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E3C1A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E3C27; /* 0x120E3C1D: jne 0x120e3c27 */
L_120E3C1F:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x120E3C1F: fst dword ptr [ebp - 0xbc] */
    goto L_120E3C3C; /* 0x120E3C25: jmp 0x120e3c3c */
L_120E3C27:
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E3C27: fld dword ptr [ebp - 0xb8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E3C2D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3C2F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120E3C31: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E3C3C; /* 0x120E3C34: jp 0x120e3c3c */
L_120E3C36:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E3C36: fst dword ptr [ebp - 0xb8] */
L_120E3C3C:
    /* test ebx, ebx */ /* 0x120E3C3C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3CAA; /* 0x120E3C3E: je 0x120e3caa */
L_120E3C40:
    _st[0] = (double)*(float*)ADDR(ebp + (-0xA8)) - _st[0]; /* 0x120E3C40: fsubr dword ptr [ebp - 0xa8] */
    eax = ecx; /* 0x120E3C46: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E3C48: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x120E3C4B: fstp dword ptr [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x120E3C51: fld dword ptr [ebp - 0xb4] */
    /* cmp eax, 3 */ /* 0x120E3C57: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3C6C; /* 0x120E3C5A: je 0x120e3c6c */
L_120E3C5C:
    fp_push(_st[0]); /* 0x120E3C5C: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E3C5E: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x60)); /* 0x120E3C64: fadd dword ptr [ebp + ecx*4 - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x60)) = _v; } /* 0x120E3C68: fstp dword ptr [ebp + ecx*4 - 0x60] */
L_120E3C6C:
    /* cmp ecx, 0xCu */ /* 0x120E3C6C: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E3CAA; /* 0x120E3C6F: jae 0x120e3caa */
L_120E3C71:
    /* test eax, eax */ /* 0x120E3C71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E3C85; /* 0x120E3C73: je 0x120e3c85 */
L_120E3C75:
    fp_push(_st[0]); /* 0x120E3C75: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E3C77: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x58)); /* 0x120E3C7D: fadd dword ptr [ebp + ecx*4 - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x58)) = _v; } /* 0x120E3C81: fstp dword ptr [ebp + ecx*4 - 0x58] */
L_120E3C85:
    fp_push(_st[0]); /* 0x120E3C85: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E3C87: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x54)); /* 0x120E3C8D: fadd dword ptr [ebp + ecx*4 - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x54)) = _v; } /* 0x120E3C91: fstp dword ptr [ebp + ecx*4 - 0x54] */
    /* cmp eax, 3 */ /* 0x120E3C95: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3CAA; /* 0x120E3C98: je 0x120e3caa */
L_120E3C9A:
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x120E3C9A: fmul qword ptr [0x120019c0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x50)); /* 0x120E3CA0: fadd dword ptr [ebp + ecx*4 - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x50)) = _v; } /* 0x120E3CA4: fstp dword ptr [ebp + ecx*4 - 0x50] */
    goto L_120E3CAC; /* 0x120E3CA8: jmp 0x120e3cac */
L_120E3CAA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3CAA: fstp st(0) */
L_120E3CAC:
    fp_push(*(double*)ADDR(0x12001948)); /* 0x120E3CAC: fld qword ptr [0x12001948] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3CB2: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3CB3: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120E3CB9: add edx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x10u */ /* 0x120E3CBC: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3BAD; /* 0x120E3CBF: jb 0x120e3bad */
L_120E3CC5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3CC5: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3CC7: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0xC0)); /* 0x120E3CC9: fldcw word ptr [ebp - 0xc0] */
    PUSH32(esp, ebx); /* 0x120E3CCF: push ebx */
    PUSH32(esp, 0); /* 0x120E3CD0: push 0 */
    ecx = esi + 0x8; /* 0x120E3CD2: lea ecx, [esi + 8] */
    edx = edi; /* 0x120E3CD5: mov edx, edi */
    RECOMP_CALL(sub_120E289F); /* 0x120E3CD7: call 0x120e289f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E3CDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E41A5; /* 0x120E3CDE: js 0x120e41a5 */
L_120E3CE4:
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x120E3CE4: fld dword ptr [ebp - 0xbc] */
    fp_push(_st[0]); /* 0x120E3CEA: fld st(0) */
    fp_push(1.0); /* 0x120E3CEC: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E3CEE: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3CF0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3CF2: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x120E3CF4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E3D0F; /* 0x120E3CF7: jp 0x120e3d0f */
L_120E3CF9:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3CF9: fstp st(1) */
    MEM16(esi) = (uint16_t)(0xFFFFu); /* 0x120E3CFB: mov word ptr [esi], 0xffff */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3D00: fstp st(0) */
L_120E3D02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E3D02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x2; /* 0x120E3D04: lea edi, [esi + 2] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E3D07: stosd dword ptr es:[edi], eax */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x120E3D08: stosw word ptr es:[edi], ax */
    goto L_120E41A3; /* 0x120E3D0A: jmp 0x120e41a3 */
L_120E3D0F:
    fp_push(0.0); /* 0x120E3D0F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E3D11: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3D13: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3D15: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x120E3D17: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E3D2F; /* 0x120E3D1A: jnp 0x120e3d2f */
L_120E3D1C:
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E3D1C: fld dword ptr [ebp - 0xb8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E3D22: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3D24: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E3D26: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E3D31; /* 0x120E3D29: jnp 0x120e3d31 */
L_120E3D2B:
    PUSH32(esp, 8); /* 0x120E3D2B: push 8 */
    goto L_120E3D33; /* 0x120E3D2D: jmp 0x120e3d33 */
L_120E3D2F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3D2F: fstp st(0) */
L_120E3D31:
    PUSH32(esp, 6); /* 0x120E3D31: push 6 */
L_120E3D33:
    ebx = POP32_VAL(esp); /* 0x120E3D33: pop ebx */
    PUSH32(esp, ebx); /* 0x120E3D34: push ebx */
    eax = ebp + (-0xC8); /* 0x120E3D35: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x120E3D3B: push eax */
    eax = ebp + (-0xCC); /* 0x120E3D3C: lea eax, [ebp - 0xcc] */
    PUSH32(esp, eax); /* 0x120E3D42: push eax */
    edx = ebp + (-0xA4); /* 0x120E3D43: lea edx, [ebp - 0xa4] */
    MEM32(ebp + (-0xBC)) = ebx; /* 0x120E3D49: mov dword ptr [ebp - 0xbc], ebx */
    RECOMP_CALL(sub_120E1C24); /* 0x120E3D4F: call 0x120e1c24 */
    RECOMP_FLAGS_IN();
    MEM16(ebp + (-0xE8)) = _fpu_cw; /* 0x120E3D54: fnstcw word ptr [ebp - 0xe8] */
    eax = MEM32(ebp + (-0xE8)); /* 0x120E3D5A: mov eax, dword ptr [ebp - 0xe8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E3D60: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC4)) = eax; /* 0x120E3D65: mov dword ptr [ebp - 0xc4], eax */
    _fpu_cw = MEM16(ebp + (-0xC4)); /* 0x120E3D6B: fldcw word ptr [ebp - 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x120E3D71: fld dword ptr [ebp - 0xcc] */
    _st[0] *= *(double*)ADDR(0x12001948); /* 0x120E3D77: fmul qword ptr [0x12001948] */
    eax = MEM32(ebp + (-0xE8)); /* 0x120E3D7D: mov eax, dword ptr [ebp - 0xe8] */
    MEM32(ebp + (-0xC0)) = eax; /* 0x120E3D83: mov dword ptr [ebp - 0xc0], eax */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E3D89: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E3D8F: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E3D95: fld dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xF8)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E3D9B: fistp dword ptr [ebp - 0xf8] */
    ecx = MEM32(ebp + (-0xF8)); /* 0x120E3DA1: mov ecx, dword ptr [ebp - 0xf8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x120E3DA7: fld dword ptr [ebp - 0xc8] */
    _st[0] *= *(double*)ADDR(0x12001948); /* 0x120E3DAD: fmul qword ptr [0x12001948] */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E3DB3: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x120E3DB9: fstp dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x120E3DBF: fld dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xDC)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E3DC5: fistp dword ptr [ebp - 0xdc] */
    edx = MEM32(ebp + (-0xDC)); /* 0x120E3DCB: mov edx, dword ptr [ebp - 0xdc] */
    _fpu_cw = MEM16(ebp + (-0xC0)); /* 0x120E3DD1: fldcw word ptr [ebp - 0xc0] */
    eax = (uint32_t)LO8(ecx); /* 0x120E3DD7: movzx eax, cl */
    MEM32(ebp + (-0xC4)) = eax; /* 0x120E3DDA: mov dword ptr [ebp - 0xc4], eax */
    eax = (uint32_t)LO8(edx); /* 0x120E3DE0: movzx eax, dl */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC4))); /* 0x120E3DE3: fild dword ptr [ebp - 0xc4] */
    fp_push(*(double*)ADDR(0x120014D8)); /* 0x120E3DE9: fld qword ptr [0x120014d8] */
    MEM32(ebp + (-0xC4)) = eax; /* 0x120E3DEF: mov dword ptr [ebp - 0xc4], eax */
    _st[1] *= _st[0]; /* 0x120E3DF5: fmul st(1), st(0) */
    fp_xch(1); /* 0x120E3DF7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x120E3DF9: fstp dword ptr [ebp - 0xcc] */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC4))); /* 0x120E3DFF: fild dword ptr [ebp - 0xc4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120E3E05: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC8)) = _v; } /* 0x120E3E07: fstp dword ptr [ebp - 0xc8] */
    fp_push(0.0); /* 0x120E3E0D: fldz  */
    /* cmp ebx, 8 */ /* 0x120E3E0F: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E3E28; /* 0x120E3E12: jne 0x120e3e28 */
L_120E3E14:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3E14: fstp st(0) */
    /* cmp LO8(ecx), LO8(edx) */ /* 0x120E3E16: cmp cl, dl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E3EA9; /* 0x120E3E18: jne 0x120e3ea9 */
L_120E3E1E:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x120E3E1E: mov byte ptr [esi], cl */
    MEM8(esi + 0x1) = (uint8_t)(LO8(edx)); /* 0x120E3E20: mov byte ptr [esi + 1], dl */
    RECOMP_BACKEDGE();
    goto L_120E3D02; /* 0x120E3E23: jmp 0x120e3d02 */
L_120E3E28:
    /* cmp ebx, 6 */ /* 0x120E3E28: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E3EA7; /* 0x120E3E2B: jne 0x120e3ea7 */
L_120E3E2D:
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x120E3E2D: fld dword ptr [ebp - 0xcc] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x120E3E33: mov byte ptr [esi], cl */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E3E35: fstp dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E3E38: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x120E3E3A: fld dword ptr [ebp - 0xc8] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(edx)); /* 0x120E3E40: mov byte ptr [esi + 1], dl */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E3E43: fstp dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3E46: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x120081D0)); /* 0x120E3E47: fld qword ptr [0x120081d0] */
L_120E3E4D:
    PUSH32(esp, 5); /* 0x120E3E4D: push 5 */
    eax = POP32_VAL(esp); /* 0x120E3E4F: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E3E50: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB0)) = eax; /* 0x120E3E52: mov dword ptr [ebp - 0xb0], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB0))); /* 0x120E3E58: fild dword ptr [ebp - 0xb0] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E3E66; /* 0x120E3E5E: jns 0x120e3e66 */
L_120E3E60:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3E60: fadd dword ptr [0x120014d0] */
L_120E3E66:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x120E3E66: fmul dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0xB0)) = ecx; /* 0x120E3E69: mov dword ptr [ebp - 0xb0], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB0))); /* 0x120E3E6F: fild dword ptr [ebp - 0xb0] */
    /* test ecx, ecx */ /* 0x120E3E75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3E7F; /* 0x120E3E77: jns 0x120e3e7f */
L_120E3E79:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3E79: fadd dword ptr [0x120014d0] */
L_120E3E7F:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x120E3E7F: fmul dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3E82: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3E83: faddp st(1) */
    _st[0] *= _st[1]; /* 0x120E3E85: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120E3E87: fstp dword ptr [ebp + ecx*4 - 0x24] */
    /* cmp ecx, 5 */ /* 0x120E3E8B: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3E4D; /* 0x120E3E8E: jb 0x120e3e4d */
L_120E3E90:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3E90: fstp st(0) */
    ecx = 0x120081F8u; /* 0x120E3E92: mov ecx, 0x120081f8 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E3E97: fstp dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0xFC)) = ecx; /* 0x120E3E9A: mov dword ptr [ebp - 0xfc], ecx */
    fp_push(1.0); /* 0x120E3EA0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E3EA2: fstp dword ptr [ebp - 8] */
    goto L_120E3F19; /* 0x120E3EA5: jmp 0x120e3f19 */
L_120E3EA7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3EA7: fstp st(0) */
L_120E3EA9:
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x120E3EA9: fld dword ptr [ebp - 0xc8] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x120E3EAF: mov byte ptr [esi + 1], cl */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120E3EB2: fstp dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E3EB5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x120E3EB7: fld dword ptr [ebp - 0xcc] */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x120E3EBD: mov byte ptr [esi], dl */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120E3EBF: fstp dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3EC2: inc ecx */
    _flag_k = FK_INC;
    fp_push(*(double*)ADDR(0x12007F70)); /* 0x120E3EC3: fld qword ptr [0x12007f70] */
L_120E3EC9:
    PUSH32(esp, 7); /* 0x120E3EC9: push 7 */
    eax = POP32_VAL(esp); /* 0x120E3ECB: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E3ECC: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB0)) = eax; /* 0x120E3ECE: mov dword ptr [ebp - 0xb0], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB0))); /* 0x120E3ED4: fild dword ptr [ebp - 0xb0] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120E3EE2; /* 0x120E3EDA: jns 0x120e3ee2 */
L_120E3EDC:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3EDC: fadd dword ptr [0x120014d0] */
L_120E3EE2:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x120E3EE2: fmul dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0xB0)) = ecx; /* 0x120E3EE5: mov dword ptr [ebp - 0xb0], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB0))); /* 0x120E3EEB: fild dword ptr [ebp - 0xb0] */
    /* test ecx, ecx */ /* 0x120E3EF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3EFB; /* 0x120E3EF3: jns 0x120e3efb */
L_120E3EF5:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3EF5: fadd dword ptr [0x120014d0] */
L_120E3EFB:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x120E3EFB: fmul dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E3EFE: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E3EFF: faddp st(1) */
    _st[0] *= _st[1]; /* 0x120E3F01: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x24)) = _v; } /* 0x120E3F03: fstp dword ptr [ebp + ecx*4 - 0x24] */
    /* cmp ecx, 7 */ /* 0x120E3F07: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3EC9; /* 0x120E3F0A: jb 0x120e3ec9 */
L_120E3F0C:
    eax = 0x120081D8u; /* 0x120E3F0C: mov eax, 0x120081d8 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3F11: fstp st(0) */
    MEM32(ebp + (-0xFC)) = eax; /* 0x120E3F13: mov dword ptr [ebp - 0xfc], eax */
L_120E3F19:
    eax = ebx + (-0x1); /* 0x120E3F19: lea eax, [ebx - 1] */
    MEM32(ebp + (-0xB0)) = eax; /* 0x120E3F1C: mov dword ptr [ebp - 0xb0], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0xB0))); /* 0x120E3F22: fild dword ptr [ebp - 0xb0] */
    /* test eax, eax */ /* 0x120E3F28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E3F32; /* 0x120E3F2A: jns 0x120e3f32 */
L_120E3F2C:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120E3F2C: fadd dword ptr [0x120014d0] */
L_120E3F32:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x120E3F32: fstp dword ptr [ebp - 0xec] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E3F38: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x120E3F3B: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120E3F3D: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x120E3F40: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x120E3F42: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E3F44: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3F46: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xEC))); /* 0x120E3F48: fld dword ptr [ebp - 0xec] */
    /* test HI8(eax), 0x44u */ /* 0x120E3F4E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E3F5B; /* 0x120E3F51: jnp 0x120e3f5b */
L_120E3F53:
    fp_xch(1); /* 0x120E3F53: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120E3F55: fsubrp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x120E3F57: fdivrp st(1) */
    goto L_120E3F63; /* 0x120E3F59: jmp 0x120e3f63 */
L_120E3F5B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3F5B: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E3F5D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E3F5F: fstp st(0) */
    fp_push(0.0); /* 0x120E3F61: fldz  */
L_120E3F63:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120E3F63: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x120E3F67: fstp dword ptr [ebp - 0xb8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E3F7F; /* 0x120E3F6D: je 0x120e3f7f */
L_120E3F6F:
    PUSH32(esp, 0x40u); /* 0x120E3F6F: push 0x40 */
    eax = ebp + (-0x64); /* 0x120E3F71: lea eax, [ebp - 0x64] */
    PUSH32(esp, 0); /* 0x120E3F74: push 0 */
    PUSH32(esp, eax); /* 0x120E3F76: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120E3F77: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E3F7C: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E3F7F:
    MEM16(ebp + (-0xD8)) = _fpu_cw; /* 0x120E3F7F: fnstcw word ptr [ebp - 0xd8] */
    eax = MEM32(ebp + (-0xD8)); /* 0x120E3F85: mov eax, dword ptr [ebp - 0xd8] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E3F8B: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD0)) = eax; /* 0x120E3F90: mov dword ptr [ebp - 0xd0], eax */
    _fpu_cw = MEM16(ebp + (-0xD0)); /* 0x120E3F96: fldcw word ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E3F9C: fld dword ptr [ebp - 0xb8] */
    eax = MEM32(ebp + (-0xD8)); /* 0x120E3FA2: mov eax, dword ptr [ebp - 0xd8] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E3FA8: fld dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120E3FAB: fld dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E3FAE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E3FB0: fld qword ptr [0x120014c0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x120E3FB6: add esi, 3 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC0)) = eax; /* 0x120E3FB9: mov dword ptr [ebp - 0xc0], eax */
    MEM32(ebp + (-0xAC)) = esi; /* 0x120E3FBF: mov dword ptr [ebp - 0xac], esi */
L_120E3FC5:
    eax = ecx + 0x8; /* 0x120E3FC5: lea eax, [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E3FC8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xE0)) = eax; /* 0x120E3FCA: mov dword ptr [ebp - 0xe0], eax */
    /* cmp ecx, eax */ /* 0x120E3FD0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E4166; /* 0x120E3FD2: jae 0x120e4166 */
L_120E3FD8:
    edi = MEM32(ebp + (-0xD4)); /* 0x120E3FD8: mov edi, dword ptr [ebp - 0xd4] */
    esi = MEM32(ebp + (-0xBC)); /* 0x120E3FDE: mov esi, dword ptr [ebp - 0xbc] */
    goto L_120E3FE8; /* 0x120E3FE4: jmp 0x120e3fe8 */
L_120E3FE6:
    fp_xch(3); /* 0x120E3FE6: fxch st(3) */
L_120E3FE8:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120E3FE8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(edi)); /* 0x120E3FEC: fld dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E3FEE: fstp dword ptr [ebp - 0xa8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4006; /* 0x120E3FF4: je 0x120e4006 */
L_120E3FF6:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x64))); /* 0x120E3FF6: fld dword ptr [ebp + ecx*4 - 0x64] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x120E3FFA: fadd dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x120E4000: fstp dword ptr [ebp - 0xa8] */
L_120E4006:
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x120E4006: fld dword ptr [ebp - 0xa8] */
    fp_push(_st[0]); /* 0x120E400C: fld st(0) */
    fp_push(_st[4]); /* 0x120E400E: fld st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120E4010: fsubp st(1) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120E4012: fmulp st(5) */
    fp_xch(4); /* 0x120E4014: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x120E4016: fstp dword ptr [ebp - 0xd0] */
    fp_push(*(float*)&MEM32(ebp + (-0xD0))); /* 0x120E401C: fld dword ptr [ebp - 0xd0] */
    fp_push(0.0); /* 0x120E4022: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E4024: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E4026: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x120E4028: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4048; /* 0x120E402B: jne 0x120e4048 */
L_120E402D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E402D: fstp st(0) */
    /* cmp esi, 6 */ /* 0x120E402F: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4044; /* 0x120E4032: jne 0x120e4044 */
L_120E4034:
    fp_push(_st[2]); /* 0x120E4034: fld st(2) */
    _st[0] *= _st[1]; /* 0x120E4036: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120E4038: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E403A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x120E403C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4044; /* 0x120E403F: jne 0x120e4044 */
L_120E4041:
    PUSH32(esp, esi); /* 0x120E4041: push esi */
    goto L_120E4071; /* 0x120E4042: jmp 0x120e4071 */
L_120E4044:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E4044: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E40BE; /* 0x120E4046: jmp 0x120e40be */
L_120E4048:
    fp_push(*(float*)&MEM32(ebp + (-0xEC))); /* 0x120E4048: fld dword ptr [ebp - 0xec] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E404E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E4050: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E4052: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E4079; /* 0x120E4055: jp 0x120e4079 */
L_120E4057:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E4057: fstp st(0) */
    /* cmp esi, 6 */ /* 0x120E4059: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4074; /* 0x120E405C: jne 0x120e4074 */
L_120E405E:
    fp_push(_st[1]); /* 0x120E405E: fld st(1) */
    fp_push(1.0); /* 0x120E4060: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120E4062: faddp st(1) */
    _st[0] *= _st[1]; /* 0x120E4064: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x120E4066: fcomp st(4) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E4068: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120E406A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E4074; /* 0x120E406D: jp 0x120e4074 */
L_120E406F:
    PUSH32(esp, 7); /* 0x120E406F: push 7 */
L_120E4071:
    edx = POP32_VAL(esp); /* 0x120E4071: pop edx */
    goto L_120E40BE; /* 0x120E4072: jmp 0x120e40be */
L_120E4074:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E4074: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4076: inc edx */
    _flag_k = FK_INC;
    goto L_120E40BE; /* 0x120E4077: jmp 0x120e40be */
L_120E4079:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x120E4079: fstp st(4) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120E407B: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E407D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E407F: fstp st(0) */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x120E4081: fadd qword ptr [0x120014c0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x120E4087: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x120E408D: fld dword ptr [ebp - 0xb0] */
    MEM32(ebp + (-0xF4)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E4093: fistp dword ptr [ebp - 0xf4] */
    eax = MEM32(ebp + (-0xF4)); /* 0x120E4099: mov eax, dword ptr [ebp - 0xf4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120E409F: fld dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120E40A2: fld dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0xFC)); /* 0x120E40A5: mov edx, dword ptr [ebp - 0xfc] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x120E40AB: fld qword ptr [0x120014c0] */
    edx = MEM32(edx + eax * 4); /* 0x120E40B1: mov edx, dword ptr [edx + eax*4] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x120E40B4: fld dword ptr [ebp - 0xa8] */
    fp_xch(3); /* 0x120E40BA: fxch st(3) */
    fp_xch(1); /* 0x120E40BC: fxch st(1) */
L_120E40BE:
    eax = edx; /* 0x120E40BE: mov eax, edx */
    if (21u) _cf = (((eax) >> 11) & 1u); /* 0x120E40C0: shl eax, 0x15 */
    if (21u) { _flag_a = recomp_flags_pack((eax << 21u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 21u; /* 0x120E40C0: shl eax, 0x15 */
    if (3u) _cf = (((ebx) >> 2) & 1u); /* 0x120E40C3: shr ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 3u; /* 0x120E40C3: shr ebx, 3 */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x120E40C6: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120E40C8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E413A; /* 0x120E40CC: je 0x120e413a */
L_120E40CE:
    fp_push(*(float*)&MEM32(ebp + edx * 4 + (-0x24))); /* 0x120E40CE: fld dword ptr [ebp + edx*4 - 0x24] */
    eax = ecx; /* 0x120E40D2: mov eax, ecx */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x120E40D4: fsubp st(4) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E40D6: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_xch(3); /* 0x120E40D9: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x120E40DB: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x120E40E1: fld dword ptr [ebp - 0xb0] */
    /* cmp eax, 3 */ /* 0x120E40E7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E40FC; /* 0x120E40EA: je 0x120e40fc */
L_120E40EC:
    fp_push(_st[0]); /* 0x120E40EC: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC0); /* 0x120E40EE: fmul qword ptr [0x12007cc0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x60)); /* 0x120E40F4: fadd dword ptr [ebp + ecx*4 - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x60)) = _v; } /* 0x120E40F8: fstp dword ptr [ebp + ecx*4 - 0x60] */
L_120E40FC:
    /* cmp ecx, 0xCu */ /* 0x120E40FC: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E413E; /* 0x120E40FF: jae 0x120e413e */
L_120E4101:
    /* test eax, eax */ /* 0x120E4101: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4115; /* 0x120E4103: je 0x120e4115 */
L_120E4105:
    fp_push(_st[0]); /* 0x120E4105: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CD0); /* 0x120E4107: fmul qword ptr [0x12007cd0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x58)); /* 0x120E410D: fadd dword ptr [ebp + ecx*4 - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x58)) = _v; } /* 0x120E4111: fstp dword ptr [ebp + ecx*4 - 0x58] */
L_120E4115:
    fp_push(_st[0]); /* 0x120E4115: fld st(0) */
    _st[0] *= *(double*)ADDR(0x12007CC8); /* 0x120E4117: fmul qword ptr [0x12007cc8] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x54)); /* 0x120E411D: fadd dword ptr [ebp + ecx*4 - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x54)) = _v; } /* 0x120E4121: fstp dword ptr [ebp + ecx*4 - 0x54] */
    /* cmp eax, 3 */ /* 0x120E4125: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E413E; /* 0x120E4128: je 0x120e413e */
L_120E412A:
    _st[0] *= *(double*)ADDR(0x120019C0); /* 0x120E412A: fmul qword ptr [0x120019c0] */
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x50)); /* 0x120E4130: fadd dword ptr [ebp + ecx*4 - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + ecx * 4 + (-0x50)) = _v; } /* 0x120E4134: fstp dword ptr [ebp + ecx*4 - 0x50] */
    goto L_120E4140; /* 0x120E4138: jmp 0x120e4140 */
L_120E413A:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E413A: fstp st(3) */
    goto L_120E4140; /* 0x120E413C: jmp 0x120e4140 */
L_120E413E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E413E: fstp st(0) */
L_120E4140:
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E4140: fld dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E4146: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120E4147: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0xE0)) */ /* 0x120E414A: cmp ecx, dword ptr [ebp - 0xe0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xE0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3FE6; /* 0x120E4150: jb 0x120e3fe6 */
L_120E4156:
    esi = MEM32(ebp + (-0xAC)); /* 0x120E4156: mov esi, dword ptr [ebp - 0xac] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E415C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x120E415E: fld dword ptr [ebp - 0xb8] */
    fp_xch(3); /* 0x120E4164: fxch st(3) */
L_120E4166:
    ecx = MEM32(ebp + (-0xE0)); /* 0x120E4166: mov ecx, dword ptr [ebp - 0xe0] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xD4)) = MEM32(ebp + (-0xD4)) - 0xFFFFFF80u; /* 0x120E416C: sub dword ptr [ebp - 0xd4], -0x80 */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x120E4173: mov eax, ebx */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x120E4175: mov byte ptr [esi - 1], bl */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x120E4178: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x120E4178: shr eax, 8 */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x120E417B: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x120E417B: shr ebx, 0x10 */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x120E417E: mov byte ptr [esi], al */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ebx)); /* 0x120E4180: mov byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x120E4183: add esi, 3 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xAC)) = esi; /* 0x120E4186: mov dword ptr [ebp - 0xac], esi */
    /* cmp ecx, 0x10u */ /* 0x120E418C: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E3FC5; /* 0x120E418F: jb 0x120e3fc5 */
L_120E4195:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x120E4195: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120E4197: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E4199: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E419B: fstp st(0) */
    _fpu_cw = MEM16(ebp + (-0xC0)); /* 0x120E419D: fldcw word ptr [ebp - 0xc0] */
L_120E41A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E41A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E41A5:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E41A5: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E41A8: pop edi */
    esi = POP32_VAL(esp); /* 0x120E41A9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E41AA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E41AC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E41AD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E41B2: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E41B3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E41BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E41BBu);

L_120E41BB:
    edi = edi; /* 0x120E41BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E41BD: push ebp */
    ebp = esp; /* 0x120E41BE: mov ebp, esp */
    edx = ecx; /* 0x120E41C0: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x120E41C2: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x120E41C5: mov eax, ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x120E41C7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x120E41C7: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x120E41CA: imul eax, eax, 3 */
    eax = MEM32(eax + edx + 0x2); /* 0x120E41CD: mov eax, dword ptr [eax + edx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x120E41D1: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x120E41D4: imul ecx, ecx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x120E41D7: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x120E41D7: shr eax, cl */
    ecx = edx; /* 0x120E41D9: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x120E41DB: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120E41DE: push eax */
    RECOMP_CALL(sub_120E119E); /* 0x120E41DF: call 0x120e119e */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E41E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E41E5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E41ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E41EDu);

L_120E41ED:
    edi = edi; /* 0x120E41ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E41EF: push ebp */
    ebp = esp; /* 0x120E41F0: mov ebp, esp */
    edx = ecx; /* 0x120E41F2: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x120E41F4: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x120E41F7: mov eax, ecx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x120E41F9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x120E41F9: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x120E41FC: imul eax, eax, 3 */
    eax = MEM32(eax + edx + 0x2); /* 0x120E41FF: mov eax, dword ptr [eax + edx + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x120E4203: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x120E4206: imul ecx, ecx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x120E4209: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x120E4209: shr eax, cl */
    ecx = edx; /* 0x120E420B: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x120E420D: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120E4210: push eax */
    RECOMP_CALL(sub_120E12DC); /* 0x120E4211: call 0x120e12dc */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E4216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E4217: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E421F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E421Fu);

L_120E421F:
    edi = edi; /* 0x120E421F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4221: push ebp */
    ebp = esp; /* 0x120E4222: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120E4224: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E4227: fldz  */
    PUSH32(esp, ebx); /* 0x120E4229: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E422A: fst dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x120E422D: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E422E: fstp dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x120E4231: push edi */
    fp_push(1.0); /* 0x120E4232: fld1  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E4234: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E4236: fstp dword ptr [ebp - 4] */
L_120E4239:
    ecx = MEM32(ebp + 0xC); /* 0x120E4239: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E423C: push ebx */
    RECOMP_CALL(sub_120E41BB); /* 0x120E423D: call 0x120e41bb */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E4242: fstp dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120E4245: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120E4248: mov edi, eax */
    esi = ebp + (-0x10); /* 0x120E424A: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E424D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E424E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E424F: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E4250: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E4251: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E4254: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x120E4255: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, 0x10u */ /* 0x120E4258: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E4239; /* 0x120E425B: jl 0x120e4239 */
L_120E425D:
    edi = POP32_VAL(esp); /* 0x120E425D: pop edi */
    esi = POP32_VAL(esp); /* 0x120E425E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E425F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E4261: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4262: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E4263: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E426B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E426Bu);

L_120E426B:
    edi = edi; /* 0x120E426B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E426D: push ebp */
    ebp = esp; /* 0x120E426E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120E4270: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E4273: fldz  */
    PUSH32(esp, ebx); /* 0x120E4275: push ebx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E4276: fst dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x120E4279: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E427A: fstp dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x120E427D: push edi */
    fp_push(1.0); /* 0x120E427E: fld1  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E4280: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E4282: fstp dword ptr [ebp - 4] */
L_120E4285:
    ecx = MEM32(ebp + 0xC); /* 0x120E4285: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E4288: push ebx */
    RECOMP_CALL(sub_120E41ED); /* 0x120E4289: call 0x120e41ed */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E428E: fstp dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120E4291: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120E4294: mov edi, eax */
    esi = ebp + (-0x10); /* 0x120E4296: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E4299: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E429A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E429B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E429C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E429D: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E42A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x120E42A1: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, 0x10u */ /* 0x120E42A4: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E4285; /* 0x120E42A7: jl 0x120e4285 */
L_120E42A9:
    edi = POP32_VAL(esp); /* 0x120E42A9: pop edi */
    esi = POP32_VAL(esp); /* 0x120E42AA: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E42AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E42AD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E42AE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E42AF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E42B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E42B7u);

L_120E42B7:
    edi = edi; /* 0x120E42B7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E42B9: push ebp */
    ebp = esp; /* 0x120E42BA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120E42BC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E42BF: fldz  */
    PUSH32(esp, ebx); /* 0x120E42C1: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E42C2: mov ebx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E42C5: fstp dword ptr [ebp - 8] */
    fp_push(1.0); /* 0x120E42C8: fld1  */
    PUSH32(esp, esi); /* 0x120E42CA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E42CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E42CD: fstp dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x120E42D0: push edi */
    edi = ebx + 0x8; /* 0x120E42D1: lea edi, [ebx + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120E42D4: mov dword ptr [ebp + 0xc], esi */
L_120E42D7:
    PUSH32(esp, esi); /* 0x120E42D7: push esi */
    ecx = ebx; /* 0x120E42D8: mov ecx, ebx */
    RECOMP_CALL(sub_120E41BB); /* 0x120E42DA: call 0x120e41bb */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E42DF: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x120E42E2: push esi */
    ecx = edi; /* 0x120E42E3: mov ecx, edi */
    RECOMP_CALL(sub_120E41BB); /* 0x120E42E5: call 0x120e41bb */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E42EA: fstp dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120E42ED: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120E42F0: mov edi, eax */
    esi = ebp + (-0x10); /* 0x120E42F2: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E42F5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E42F6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E42F7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E42F8: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x120E42F9: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E42FC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E42FD: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x120E4300: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x8) = eax; /* 0x120E4303: mov dword ptr [ebp + 8], eax */
    edi = ebx + 0x8; /* 0x120E4306: lea edi, [ebx + 8] */
    /* cmp esi, 0x10u */ /* 0x120E4309: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E42D7; /* 0x120E430C: jl 0x120e42d7 */
L_120E430E:
    edi = POP32_VAL(esp); /* 0x120E430E: pop edi */
    esi = POP32_VAL(esp); /* 0x120E430F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E4312: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4313: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E4314: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E431C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E431Cu);

L_120E431C:
    edi = edi; /* 0x120E431C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E431E: push ebp */
    ebp = esp; /* 0x120E431F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120E4321: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E4324: fldz  */
    PUSH32(esp, ebx); /* 0x120E4326: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E4327: mov ebx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E432A: fstp dword ptr [ebp - 8] */
    fp_push(1.0); /* 0x120E432D: fld1  */
    PUSH32(esp, esi); /* 0x120E432F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E4330: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120E4332: fstp dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x120E4335: push edi */
    edi = ebx + 0x8; /* 0x120E4336: lea edi, [ebx + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120E4339: mov dword ptr [ebp + 0xc], esi */
L_120E433C:
    PUSH32(esp, esi); /* 0x120E433C: push esi */
    ecx = ebx; /* 0x120E433D: mov ecx, ebx */
    RECOMP_CALL(sub_120E41ED); /* 0x120E433F: call 0x120e41ed */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120E4344: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x120E4347: push esi */
    ecx = edi; /* 0x120E4348: mov ecx, edi */
    RECOMP_CALL(sub_120E41ED); /* 0x120E434A: call 0x120e41ed */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E434F: fstp dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120E4352: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x120E4355: mov edi, eax */
    esi = ebp + (-0x10); /* 0x120E4357: lea esi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E435A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E435B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E435C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120E435D: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x120E435E: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E4361: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120E4362: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x120E4365: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x8) = eax; /* 0x120E4368: mov dword ptr [ebp + 8], eax */
    edi = ebx + 0x8; /* 0x120E436B: lea edi, [ebx + 8] */
    /* cmp esi, 0x10u */ /* 0x120E436E: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120E433C; /* 0x120E4371: jl 0x120e433c */
L_120E4373:
    edi = POP32_VAL(esp); /* 0x120E4373: pop edi */
    esi = POP32_VAL(esp); /* 0x120E4374: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4375: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E4377: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4378: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E4379: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E4381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4381u);

L_120E4381:
    edi = edi; /* 0x120E4381: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4383: push ebp */
    ebp = esp; /* 0x120E4384: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E4386: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E4389: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E3637); /* 0x120E438C: call 0x120e3637 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E43A3; /* 0x120E4393: js 0x120e43a3 */
L_120E4395:
    eax = MEM32(ebp + 0x8); /* 0x120E4395: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E10B1); /* 0x120E4398: call 0x120e10b1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E439D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E43A3; /* 0x120E439F: js 0x120e43a3 */
L_120E43A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E43A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E43A3:
    ebp = POP32_VAL(esp); /* 0x120E43A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E43A4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E43AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E43ACu);

L_120E43AC:
    edi = edi; /* 0x120E43AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E43AE: push ebp */
    ebp = esp; /* 0x120E43AF: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E43B1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E43B4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E36BF); /* 0x120E43B7: call 0x120e36bf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E43BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E43CE; /* 0x120E43BE: js 0x120e43ce */
L_120E43C0:
    eax = MEM32(ebp + 0x8); /* 0x120E43C0: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E10B1); /* 0x120E43C3: call 0x120e10b1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E43C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E43CE; /* 0x120E43CA: js 0x120e43ce */
L_120E43CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E43CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E43CE:
    ebp = POP32_VAL(esp); /* 0x120E43CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E43CF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E43D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E43D7u);

L_120E43D7:
    edi = edi; /* 0x120E43D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E43D9: push ebp */
    ebp = esp; /* 0x120E43DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x120E43DC: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E43E2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E43E7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E43E9: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E43EC: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E43EF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E43F0: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x104); /* 0x120E43F3: lea eax, [ebp - 0x104] */
    RECOMP_CALL(sub_120E1163); /* 0x120E43F9: call 0x120e1163 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E43FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4418; /* 0x120E4400: js 0x120e4418 */
L_120E4402:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E4402: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x104); /* 0x120E4405: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x120E440B: push eax */
    PUSH32(esp, esi); /* 0x120E440C: push esi */
    RECOMP_CALL(sub_120E39B9); /* 0x120E440D: call 0x120e39b9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4412: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4418; /* 0x120E4414: js 0x120e4418 */
L_120E4416:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4416: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4418:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E4418: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E441B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E441D: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E441E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4423: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E4424: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E442C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E442Cu);

L_120E442C:
    edi = edi; /* 0x120E442C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E442E: push ebp */
    ebp = esp; /* 0x120E442F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x120E4431: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E4437: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E443C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E443E: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120E4441: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E4444: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E4445: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x104); /* 0x120E4448: lea eax, [ebp - 0x104] */
    RECOMP_CALL(sub_120E1163); /* 0x120E444E: call 0x120e1163 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4453: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E446D; /* 0x120E4455: js 0x120e446d */
L_120E4457:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E4457: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x104); /* 0x120E445A: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x120E4460: push eax */
    PUSH32(esp, esi); /* 0x120E4461: push esi */
    RECOMP_CALL(sub_120E3B25); /* 0x120E4462: call 0x120e3b25 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4467: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E446D; /* 0x120E4469: js 0x120e446d */
L_120E446B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E446B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E446D:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E446D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E4470: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E4472: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E4473: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4478: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E4479: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E4481(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4481u);

L_120E4481:
    edi = edi; /* 0x120E4481: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4483: push ebp */
    ebp = esp; /* 0x120E4484: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x120E4486: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E448C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E4491: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E4493: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x120E4496: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E4499: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E44A4; /* 0x120E449B: jne 0x120e44a4 */
L_120E449D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E449D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4544; /* 0x120E449F: jmp 0x120e4544 */
L_120E44A4:
    eax = MEM32(ecx); /* 0x120E44A4: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x134); /* 0x120E44A6: lea edx, [ebp - 0x134] */
    PUSH32(esp, edx); /* 0x120E44AC: push edx */
    PUSH32(esp, ecx); /* 0x120E44AD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x120E44AE: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E44B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E449D; /* 0x120E44B3: js 0x120e449d */
L_120E44B5:
    eax = (uint32_t)MEM16(ebp + (-0x68)); /* 0x120E44B5: movzx eax, word ptr [ebp - 0x68] */
    /* cmp eax, 0x200u */ /* 0x120E44B9: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E44FC; /* 0x120E44BE: jae 0x120e44fc */
L_120E44C0:
    /* cmp eax, 0x101u */ /* 0x120E44C0: cmp eax, 0x101 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E44CE; /* 0x120E44C5: jne 0x120e44ce */
L_120E44C7:
    eax = 0x120082F0u; /* 0x120E44C7: mov eax, 0x120082f0 */
    goto L_120E4544; /* 0x120E44CC: jmp 0x120e4544 */
L_120E44CE:
    /* cmp eax, 0x102u */ /* 0x120E44CE: cmp eax, 0x102 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E44DC; /* 0x120E44D3: jne 0x120e44dc */
L_120E44D5:
    eax = 0x120082E8u; /* 0x120E44D5: mov eax, 0x120082e8 */
    goto L_120E4544; /* 0x120E44DA: jmp 0x120e4544 */
L_120E44DC:
    /* cmp eax, 0x103u */ /* 0x120E44DC: cmp eax, 0x103 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E44EA; /* 0x120E44E1: jne 0x120e44ea */
L_120E44E3:
    eax = 0x120082E0u; /* 0x120E44E3: mov eax, 0x120082e0 */
    goto L_120E4544; /* 0x120E44E8: jmp 0x120e4544 */
L_120E44EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x104u; /* 0x120E44EA: sub eax, 0x104 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120E44EF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E44F1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x120E44F3: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120082D8u);
    eax = eax & 0x120082D8u; /* 0x120E44F5: and eax, 0x120082d8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4544; /* 0x120E44FA: jmp 0x120e4544 */
L_120E44FC:
    /* cmp eax, 0x300u */ /* 0x120E44FC: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E453F; /* 0x120E4501: jae 0x120e453f */
L_120E4503:
    /* cmp MEM32(ebp + (-0x24)), 0x16u */ /* 0x120E4503: cmp dword ptr [ebp - 0x24], 0x16 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x2C)); /* 0x120E4507: mov eax, dword ptr [ebp - 0x2c] */
    if (CMP_L(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E450A: jl 0x120e4527 */
L_120E450C:
    /* test LO8(eax), 1 */ /* 0x120E450C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E450E: je 0x120e4527 */
L_120E4510:
    /* test LO8(eax), 2 */ /* 0x120E4510: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E4512: je 0x120e4527 */
L_120E4514:
    /* test LO8(eax), 4 */ /* 0x120E4514: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E4516: je 0x120e4527 */
L_120E4518:
    /* test LO8(eax), 8 */ /* 0x120E4518: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E451A: je 0x120e4527 */
L_120E451C:
    /* test LO8(eax), 0x10u */ /* 0x120E451C: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4527; /* 0x120E451E: je 0x120e4527 */
L_120E4520:
    eax = 0x120082C8u; /* 0x120E4520: mov eax, 0x120082c8 */
    goto L_120E4544; /* 0x120E4525: jmp 0x120e4544 */
L_120E4527:
    /* cmp MEM32(ebp + (-0x24)), 0x20u */ /* 0x120E4527: cmp dword ptr [ebp - 0x24], 0x20 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120E4538; /* 0x120E452B: jl 0x120e4538 */
L_120E452D:
    /* test LO8(eax), 0x10u */ /* 0x120E452D: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4538; /* 0x120E452F: je 0x120e4538 */
L_120E4531:
    eax = 0x120082C0u; /* 0x120E4531: mov eax, 0x120082c0 */
    goto L_120E4544; /* 0x120E4536: jmp 0x120e4544 */
L_120E4538:
    eax = 0x120082D0u; /* 0x120E4538: mov eax, 0x120082d0 */
    goto L_120E4544; /* 0x120E453D: jmp 0x120e4544 */
L_120E453F:
    eax = 0x120082A8u; /* 0x120E453F: mov eax, 0x120082a8 */
L_120E4544:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E4544: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E4547: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120E4549: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E454E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E454F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E4557(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4557u);

L_120E4557:
    edi = edi; /* 0x120E4557: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4559: push ebp */
    ebp = esp; /* 0x120E455A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x120E455C: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E4562: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E4567: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E4569: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x120E456C: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E456F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4577; /* 0x120E4571: jne 0x120e4577 */
L_120E4573:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4573: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E45D1; /* 0x120E4575: jmp 0x120e45d1 */
L_120E4577:
    eax = MEM32(ecx); /* 0x120E4577: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x134); /* 0x120E4579: lea edx, [ebp - 0x134] */
    PUSH32(esp, edx); /* 0x120E457F: push edx */
    PUSH32(esp, ecx); /* 0x120E4580: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x120E4581: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4584: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4573; /* 0x120E4586: js 0x120e4573 */
L_120E4588:
    eax = (uint32_t)MEM16(ebp + (-0x70)); /* 0x120E4588: movzx eax, word ptr [ebp - 0x70] */
    /* cmp eax, 0x200u */ /* 0x120E458C: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E45A5; /* 0x120E4591: jae 0x120e45a5 */
L_120E4593:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x101u; /* 0x120E4593: sub eax, 0x101 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120E4598: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E459A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x120E459C: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12008240u);
    eax = eax & 0x12008240u; /* 0x120E459E: and eax, 0x12008240 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E45D1; /* 0x120E45A3: jmp 0x120e45d1 */
L_120E45A5:
    /* cmp eax, 0x300u */ /* 0x120E45A5: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E45CC; /* 0x120E45AA: jae 0x120e45cc */
L_120E45AC:
    /* cmp MEM32(ebp + (-0x34)), 0xDu */ /* 0x120E45AC: cmp dword ptr [ebp - 0x34], 0xd */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120E45C5; /* 0x120E45B0: jl 0x120e45c5 */
L_120E45B2:
    /* test MEM8(ebp + (-0x3C)), 1 */ /* 0x120E45B2: test byte ptr [ebp - 0x3c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3C))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E45C5; /* 0x120E45B6: je 0x120e45c5 */
L_120E45B8:
    /* cmp MEM32(ebp + (-0x38)), 0x18u */ /* 0x120E45B8: cmp dword ptr [ebp - 0x38], 0x18 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E45C5; /* 0x120E45BC: jne 0x120e45c5 */
L_120E45BE:
    eax = 0x12008230u; /* 0x120E45BE: mov eax, 0x12008230 */
    goto L_120E45D1; /* 0x120E45C3: jmp 0x120e45d1 */
L_120E45C5:
    eax = 0x12008238u; /* 0x120E45C5: mov eax, 0x12008238 */
    goto L_120E45D1; /* 0x120E45CA: jmp 0x120e45d1 */
L_120E45CC:
    eax = 0x12008218u; /* 0x120E45CC: mov eax, 0x12008218 */
L_120E45D1:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E45D1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E45D4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120E45D6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E45DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E45DC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E45E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E45E4u);

L_120E45E4:
    edi = edi; /* 0x120E45E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E45E6: push ebp */
    ebp = esp; /* 0x120E45E7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E45E9: push esi */
    PUSH32(esp, edi); /* 0x120E45EA: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E45EB: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x120E45EE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E45F5; /* 0x120E45F0: je 0x120e45f5 */
L_120E45F2:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x120E45F2: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E45F5:
    esi = MEM32(ebp + 0x14); /* 0x120E45F5: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120E45F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E45FF; /* 0x120E45FA: je 0x120e45ff */
L_120E45FC:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120E45FC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E45FF:
    ecx = MEM32(ebp + 0x8); /* 0x120E45FF: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120E4602: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4610; /* 0x120E4604: jne 0x120e4610 */
L_120E4606:
    eax = 0x8876086Cu; /* 0x120E4606: mov eax, 0x8876086c */
    goto L_120E46C0; /* 0x120E460B: jmp 0x120e46c0 */
L_120E4610:
    eax = MEM32(ecx); /* 0x120E4610: mov eax, dword ptr [ecx] */
    edx = 0xFFFF0000u; /* 0x120E4612: mov edx, 0xffff0000 */
    MEM32(ebp + 0x10) = eax; /* 0x120E4617: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120E461A: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x46580000u */ /* 0x120E461C: cmp eax, 0x46580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E4621: je 0x120e464a */
L_120E4623:
    /* cmp eax, 0x54580000u */ /* 0x120E4623: cmp eax, 0x54580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E4628: je 0x120e464a */
L_120E462A:
    /* cmp eax, 0x7FFE0000u */ /* 0x120E462A: cmp eax, 0x7ffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E462F: je 0x120e464a */
L_120E4631:
    /* cmp eax, 0x7FFF0000u */ /* 0x120E4631: cmp eax, 0x7fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E4636: je 0x120e464a */
L_120E4638:
    /* cmp eax, 0xFFFE0000u */ /* 0x120E4638: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E463D: je 0x120e464a */
L_120E463F:
    /* cmp eax, edx */ /* 0x120E463F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E464A; /* 0x120E4641: je 0x120e464a */
L_120E4643:
    eax = 0x88760B59u; /* 0x120E4643: mov eax, 0x88760b59 */
    goto L_120E46C0; /* 0x120E4648: jmp 0x120e46c0 */
L_120E464A:
    PUSH32(esp, ebx); /* 0x120E464A: push ebx */
L_120E464B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E464B: add ecx, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x120E464E: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x120E4650: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E464B; /* 0x120E4652: js 0x120e464b */
L_120E4654:
    ebx = edx; /* 0x120E4654: mov ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    ebx = ebx & 0xFFFFu; /* 0x120E4656: and ebx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFu */ /* 0x120E465C: cmp ebx, 0xffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E46BC; /* 0x120E4662: je 0x120e46bc */
L_120E4664:
    /* cmp ebx, 0xFFFEu */ /* 0x120E4664: cmp ebx, 0xfffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4687; /* 0x120E466A: jne 0x120e4687 */
L_120E466C:
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x120E466C: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x120E466C: shr edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x120E466F: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 1 */ /* 0x120E4675: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E4682; /* 0x120E4678: jbe 0x120e4682 */
L_120E467A:
    eax = MEM32(ebp + 0xC); /* 0x120E467A: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x120E467D: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E46A2; /* 0x120E4680: je 0x120e46a2 */
L_120E4682:
    ecx = ecx + edx * 4; /* 0x120E4682: lea ecx, [ecx + edx*4] */
    RECOMP_BACKEDGE();
    goto L_120E464B; /* 0x120E4685: jmp 0x120e464b */
L_120E4687:
    eax = MEM32(ebp + 0x10); /* 0x120E4687: mov eax, dword ptr [ebp + 0x10] */
    /* cmp LO16(eax), 0x200u */ /* 0x120E468A: cmp ax, 0x200 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x200u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4698; /* 0x120E468E: jb 0x120e4698 */
L_120E4690:
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x120E4690: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x120E4690: shr edx, 0x18 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x120E4693: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120E4682; /* 0x120E4696: jmp 0x120e4682 */
L_120E4698:
    /* cmp ebx, 0x51u */ /* 0x120E4698: cmp ebx, 0x51 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E464B; /* 0x120E469B: jne 0x120e464b */
L_120E469D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x120E469D: add ecx, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E464B; /* 0x120E46A0: jmp 0x120e464b */
L_120E46A2:
    /* test edi, edi */ /* 0x120E46A2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E46AB; /* 0x120E46A4: je 0x120e46ab */
L_120E46A6:
    eax = ecx + 0x8; /* 0x120E46A6: lea eax, [ecx + 8] */
    MEM32(edi) = eax; /* 0x120E46A9: mov dword ptr [edi], eax */
L_120E46AB:
    /* test esi, esi */ /* 0x120E46AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E46B8; /* 0x120E46AD: je 0x120e46b8 */
L_120E46AF:
    eax = edx * 4 + (-0x4); /* 0x120E46AF: lea eax, [edx*4 - 4] */
    MEM32(esi) = eax; /* 0x120E46B6: mov dword ptr [esi], eax */
L_120E46B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E46B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E46BF; /* 0x120E46BA: jmp 0x120e46bf */
L_120E46BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E46BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E46BE: inc eax */
    _flag_k = FK_INC;
L_120E46BF:
    ebx = POP32_VAL(esp); /* 0x120E46BF: pop ebx */
L_120E46C0:
    edi = POP32_VAL(esp); /* 0x120E46C0: pop edi */
    esi = POP32_VAL(esp); /* 0x120E46C1: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E46C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120E46C3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120E46CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E46CBu);

L_120E46CB:
    edi = edi; /* 0x120E46CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E46CD: push ebp */
    ebp = esp; /* 0x120E46CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E46D0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E46D1: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120E46D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E46DC; /* 0x120E46D6: jne 0x120e46dc */
L_120E46D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E46D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4730; /* 0x120E46DA: jmp 0x120e4730 */
L_120E46DC:
    PUSH32(esp, ebx); /* 0x120E46DC: push ebx */
    PUSH32(esp, edi); /* 0x120E46DD: push edi */
    ecx = esi + 0x4; /* 0x120E46DE: lea ecx, [esi + 4] */
    ebx = 0xFFFFu; /* 0x120E46E1: mov ebx, 0xffff */
L_120E46E6:
    edx = MEM32(ecx); /* 0x120E46E6: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x120E46E8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4721; /* 0x120E46EA: js 0x120e4721 */
L_120E46EC:
    edi = edx; /* 0x120E46EC: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    edi = edi & ebx; /* 0x120E46EE: and edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x120E46F0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4726; /* 0x120E46F2: je 0x120e4726 */
L_120E46F4:
    /* cmp edi, 0xFFFEu */ /* 0x120E46F4: cmp edi, 0xfffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E470A; /* 0x120E46FA: jne 0x120e470a */
L_120E46FC:
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x120E46FC: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x120E46FC: shr edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFu);
    edx = edx & 0x7FFFu; /* 0x120E46FF: and edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4705:
    ecx = ecx + edx * 4; /* 0x120E4705: lea ecx, [ecx + edx*4] */
    goto L_120E4721; /* 0x120E4708: jmp 0x120e4721 */
L_120E470A:
    /* cmp MEM16(esi), 0x200u */ /* 0x120E470A: cmp word ptr [esi], 0x200 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0x200u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4719; /* 0x120E470F: jb 0x120e4719 */
L_120E4711:
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x120E4711: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x120E4711: shr edx, 0x18 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x120E4714: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120E4705; /* 0x120E4717: jmp 0x120e4705 */
L_120E4719:
    /* cmp edi, 0x51u */ /* 0x120E4719: cmp edi, 0x51 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4721; /* 0x120E471C: jne 0x120e4721 */
L_120E471E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x120E471E: add ecx, 0x14 */
    _flag_k = FK_ADD;
L_120E4721:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E4721: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E46E6; /* 0x120E4724: jmp 0x120e46e6 */
L_120E4726:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120E4726: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x4; /* 0x120E4728: lea eax, [ecx + 4] */
    edi = POP32_VAL(esp); /* 0x120E472B: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E472C: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E472F: pop ebx */
L_120E4730:
    esi = POP32_VAL(esp); /* 0x120E4730: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E4731: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E4732: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E473A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E473Au);

L_120E473A:
    edi = edi; /* 0x120E473A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E473C: push ebp */
    ebp = esp; /* 0x120E473D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120E473F: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x120E4742: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4748; /* 0x120E4744: je 0x120e4748 */
L_120E4746:
    eax = MEM32(eax); /* 0x120E4746: mov eax, dword ptr [eax] */
L_120E4748:
    ebp = POP32_VAL(esp); /* 0x120E4748: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E4749: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E4751(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4751u);

L_120E4751:
    edi = edi; /* 0x120E4751: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4753: push ebp */
    ebp = esp; /* 0x120E4754: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x120E4756: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E4759: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E475E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E4760: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x120E4763: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x120E4766: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E4769: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E476A: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x24)) = esi; /* 0x120E476D: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x20)) = eax; /* 0x120E4770: mov dword ptr [ebp - 0x20], eax */
    /* test ecx, ecx */ /* 0x120E4773: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4781; /* 0x120E4775: jne 0x120e4781 */
L_120E4777:
    eax = 0x8876086Cu; /* 0x120E4777: mov eax, 0x8876086c */
    goto L_120E4A2D; /* 0x120E477C: jmp 0x120e4a2d */
L_120E4781:
    PUSH32(esp, ebx); /* 0x120E4781: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E4782: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x120E4784: mov edx, ebx */
    /* test eax, eax */ /* 0x120E4786: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E478C; /* 0x120E4788: je 0x120e478c */
L_120E478A:
    MEM32(eax) = ebx; /* 0x120E478A: mov dword ptr [eax], ebx */
L_120E478C:
    eax = MEM32(ecx); /* 0x120E478C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x120E478E: push edi */
    edi = 0xFFFF0000u; /* 0x120E478F: mov edi, 0xffff0000 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E4794: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x120E4797: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x46580000u */ /* 0x120E4799: cmp eax, 0x46580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A29; /* 0x120E479E: je 0x120e4a29 */
L_120E47A4:
    /* cmp eax, 0xFFFE0000u */ /* 0x120E47A4: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A43; /* 0x120E47A9: je 0x120e4a43 */
L_120E47AF:
    /* cmp eax, edi */ /* 0x120E47AF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E47BD; /* 0x120E47B1: je 0x120e47bd */
L_120E47B3:
    eax = 0x88760B59u; /* 0x120E47B3: mov eax, 0x88760b59 */
    goto L_120E4A2B; /* 0x120E47B8: jmp 0x120e4a2b */
L_120E47BD:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x120E47BD: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), 3 */ /* 0x120E47C0: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4835; /* 0x120E47C2: jne 0x120e4835 */
L_120E47C4:
    edi = ecx + 0x4; /* 0x120E47C4: lea edi, [ecx + 4] */
    ebx = 0xFFFFu; /* 0x120E47C7: mov ebx, 0xffff */
L_120E47CC:
    /* cmp MEM16(edi), 0x1Fu */ /* 0x120E47CC: cmp word ptr [edi], 0x1f */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0x1Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4807; /* 0x120E47D0: jne 0x120e4807 */
L_120E47D2:
    ecx = MEM32(edi + 0x8); /* 0x120E47D2: mov ecx, dword ptr [edi + 8] */
    eax = ecx; /* 0x120E47D5: mov eax, ecx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x120E47D7: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x120E47D7: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x120E47DA: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x120E47DF: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120E47E5: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x100u */ /* 0x120E47E7: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4807; /* 0x120E47EC: jne 0x120e4807 */
L_120E47EE:
    /* test esi, esi */ /* 0x120E47EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4806; /* 0x120E47F0: je 0x120e4806 */
L_120E47F2:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E47F2: movzx eax, word ptr [edi + 4] */
    MEM32(esi + edx * 8) = eax; /* 0x120E47F6: mov dword ptr [esi + edx*8], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x120E47F9: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E47FD: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4802: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4806:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4806: inc edx */
    _flag_k = FK_INC;
L_120E4807:
    eax = MEM32(edi); /* 0x120E4807: mov eax, dword ptr [edi] */
    ecx = eax; /* 0x120E4809: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x120E480B: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x120E480D: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A20; /* 0x120E480F: je 0x120e4a20 */
L_120E4815:
    /* cmp ecx, 0xFFFEu */ /* 0x120E4815: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4827; /* 0x120E481B: jne 0x120e4827 */
L_120E481D:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E481D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E481D: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4820: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E482D; /* 0x120E4825: jmp 0x120e482d */
L_120E4827:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E4827: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E4827: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E482A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E482D:
    edi = edi + eax * 4; /* 0x120E482D: lea edi, [edi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4830: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E47CC; /* 0x120E4833: jmp 0x120e47cc */
L_120E4835:
    /* cmp LO8(eax), 2 */ /* 0x120E4835: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E48D4; /* 0x120E4837: jne 0x120e48d4 */
L_120E483D:
    PUSH32(esp, 0xAu); /* 0x120E483D: push 0xa */
    ebx = POP32_VAL(esp); /* 0x120E483F: pop ebx */
L_120E4840:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E4840: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), 0x1Fu */ /* 0x120E4843: cmp word ptr [ecx], 0x1f */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0x1Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E489E; /* 0x120E4847: jne 0x120e489e */
L_120E4849:
    eax = MEM32(ecx + 0x8); /* 0x120E4849: mov eax, dword ptr [ecx + 8] */
    edi = eax; /* 0x120E484C: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFu);
    edi = edi & 0x7FFu; /* 0x120E484E: and edi, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0001800u);
    eax = eax & 0xF0001800u; /* 0x120E4854: and eax, 0xf0001800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120E4859: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4896; /* 0x120E485B: je 0x120e4896 */
L_120E485D:
    /* cmp eax, 0xB0000000u */ /* 0x120E485D: cmp eax, 0xb0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4871; /* 0x120E4862: jne 0x120e4871 */
L_120E4864:
    MEM32(esi + edx * 8) = 5; /* 0x120E4864: mov dword ptr [esi + edx*8], 5 */
    MEM32(esi + edx * 8 + 0x4) = edi; /* 0x120E486B: mov dword ptr [esi + edx*8 + 4], edi */
    goto L_120E489D; /* 0x120E486F: jmp 0x120e489d */
L_120E4871:
    /* cmp eax, 0x90000000u */ /* 0x120E4871: cmp eax, 0x90000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E488B; /* 0x120E4876: jne 0x120e488b */
L_120E4878:
    /* cmp edi, 2 */ /* 0x120E4878: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E4A3C; /* 0x120E487B: jae 0x120e4a3c */
L_120E4881:
    _flag_a = (uint32_t)(MEM32(esi + edx * 8 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + edx * 8 + 0x4) = MEM32(esi + edx * 8 + 0x4) & 0; /* 0x120E4881: and dword ptr [esi + edx*8 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edx * 8) = ebx; /* 0x120E4886: mov dword ptr [esi + edx*8], ebx */
    goto L_120E489D; /* 0x120E4889: jmp 0x120e489d */
L_120E488B:
    /* cmp eax, 0xA0000800u */ /* 0x120E488B: cmp eax, 0xa0000800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4A3C; /* 0x120E4890: jne 0x120e4a3c */
L_120E4896:
    /* cmp eax, 0xA0000800u */ /* 0x120E4896: cmp eax, 0xa0000800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E489E; /* 0x120E489B: je 0x120e489e */
L_120E489D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E489D: inc edx */
    _flag_k = FK_INC;
L_120E489E:
    eax = MEM32(ecx); /* 0x120E489E: mov eax, dword ptr [ecx] */
    edi = eax; /* 0x120E48A0: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x120E48A2: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFu */ /* 0x120E48A8: cmp edi, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A20; /* 0x120E48AE: je 0x120e4a20 */
L_120E48B4:
    /* cmp edi, 0xFFFEu */ /* 0x120E48B4: cmp edi, 0xfffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E48C6; /* 0x120E48BA: jne 0x120e48c6 */
L_120E48BC:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E48BC: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E48BC: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E48BF: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E48CC; /* 0x120E48C4: jmp 0x120e48cc */
L_120E48C6:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E48C6: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E48C6: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E48C9: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E48CC:
    ecx = ecx + eax * 4; /* 0x120E48CC: lea ecx, [ecx + eax*4] */
    RECOMP_BACKEDGE();
    goto L_120E4840; /* 0x120E48CF: jmp 0x120e4840 */
L_120E48D4:
    /* cmp LO8(eax), 1 */ /* 0x120E48D4: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4A3C; /* 0x120E48D6: jne 0x120e4a3c */
L_120E48DC:
    edx = MEM32(ecx); /* 0x120E48DC: mov edx, dword ptr [ecx] */
    esi = MEM32(ebp + (-0x1C)); /* 0x120E48DE: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E48E1: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120E48E4: mov dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E48E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E48E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(edx), 4 */ /* 0x120E48EB: cmp dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E48EE: sete bl */
    edi = ebp + (-0xC); /* 0x120E48F1: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E48F4: stosd dword ptr es:[edi], eax */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x120E48F5: stosw word ptr es:[edi], ax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120E48F7: mov dword ptr [ebp - 0x18], ebx */
    edx = ecx + 0x4; /* 0x120E48FA: lea edx, [ecx + 4] */
L_120E48FD:
    ecx = MEM32(edx); /* 0x120E48FD: mov ecx, dword ptr [edx] */
    edi = ecx; /* 0x120E48FF: mov edi, ecx */
    /* test ecx, ecx */ /* 0x120E4901: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E494E; /* 0x120E4903: jns 0x120e494e */
L_120E4905:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xF0001800u);
    edi = edi & 0xF0001800u; /* 0x120E4905: and edi, 0xf0001800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x90000000u */ /* 0x120E490B: cmp edi, 0x90000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x90000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E492D; /* 0x120E4911: jne 0x120e492d */
L_120E4913:
    eax = ecx; /* 0x120E4913: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x120E4915: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4925; /* 0x120E491A: jne 0x120e4925 */
L_120E491C:
    MEM32(ebp + (-0x10)) = 1; /* 0x120E491C: mov dword ptr [ebp - 0x10], 1 */
    goto L_120E492D; /* 0x120E4923: jmp 0x120e492d */
L_120E4925:
    /* cmp eax, 1 */ /* 0x120E4925: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E492D; /* 0x120E4928: jne 0x120e492d */
L_120E492A:
    MEM32(ebp + (-0x14)) = eax; /* 0x120E492A: mov dword ptr [ebp - 0x14], eax */
L_120E492D:
    /* test ebx, ebx */ /* 0x120E492D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E49C8; /* 0x120E492F: je 0x120e49c8 */
L_120E4935:
    /* cmp edi, 0xB0000000u */ /* 0x120E4935: cmp edi, 0xb0000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xB0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E49C8; /* 0x120E493B: jne 0x120e49c8 */
L_120E4941:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x120E4941: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + ecx + (-0xC)) = (uint8_t)(1); /* 0x120E4947: mov byte ptr [ebp + ecx - 0xc], 1 */
    goto L_120E49C8; /* 0x120E494C: jmp 0x120e49c8 */
L_120E494E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x120E494E: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFu */ /* 0x120E4954: cmp edi, 0xffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E49D0; /* 0x120E495A: je 0x120e49d0 */
L_120E495C:
    /* cmp edi, 0xFFFEu */ /* 0x120E495C: cmp edi, 0xfffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4972; /* 0x120E4962: jne 0x120e4972 */
L_120E4964:
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x120E4964: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x120E4964: shr ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x120E4967: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E496D:
    edx = edx + ecx * 4; /* 0x120E496D: lea edx, [edx + ecx*4] */
    goto L_120E49C8; /* 0x120E4970: jmp 0x120e49c8 */
L_120E4972:
    /* test ebx, ebx */ /* 0x120E4972: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E49B1; /* 0x120E4974: jne 0x120e49b1 */
L_120E4976:
    /* cmp edi, 0x40u */ /* 0x120E4976: cmp edi, 0x40 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120E49B1; /* 0x120E4979: jb 0x120e49b1 */
L_120E497B:
    /* cmp edi, 0x4Au */ /* 0x120E497B: cmp edi, 0x4a */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E4992; /* 0x120E497E: jbe 0x120e4992 */
L_120E4980:
    /* cmp edi, 0x4Bu */ /* 0x120E4980: cmp edi, 0x4b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E49B1; /* 0x120E4983: jbe 0x120e49b1 */
L_120E4985:
    /* cmp edi, 0x4Du */ /* 0x120E4985: cmp edi, 0x4d */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E4992; /* 0x120E4988: jbe 0x120e4992 */
L_120E498A:
    eax = edi + (-0x52); /* 0x120E498A: lea eax, [edi - 0x52] */
    /* cmp eax, 5 */ /* 0x120E498D: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E49B1; /* 0x120E4990: ja 0x120e49b1 */
L_120E4992:
    ebx = MEM32(edx + 0x4); /* 0x120E4992: mov ebx, dword ptr [edx + 4] */
    eax = ebx; /* 0x120E4995: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0001800u);
    eax = eax & 0xF0001800u; /* 0x120E4997: and eax, 0xf0001800 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xB0000000u */ /* 0x120E499C: cmp eax, 0xb0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E49AE; /* 0x120E49A1: jne 0x120e49ae */
L_120E49A3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFu);
    ebx = ebx & 0x7FFu; /* 0x120E49A3: and ebx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + ebx + (-0xC)) = (uint8_t)(1); /* 0x120E49A9: mov byte ptr [ebp + ebx - 0xc], 1 */
L_120E49AE:
    ebx = MEM32(ebp + (-0x18)); /* 0x120E49AE: mov ebx, dword ptr [ebp - 0x18] */
L_120E49B1:
    /* cmp LO16(esi), 0x200u */ /* 0x120E49B1: cmp si, 0x200 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(0x200u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_120E49C0; /* 0x120E49B6: jb 0x120e49c0 */
L_120E49B8:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x120E49B8: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x120E49B8: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x120E49BB: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120E496D; /* 0x120E49BE: jmp 0x120e496d */
L_120E49C0:
    /* cmp edi, 0x51u */ /* 0x120E49C0: cmp edi, 0x51 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E49C8; /* 0x120E49C3: jne 0x120e49c8 */
L_120E49C5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x120E49C5: add edx, 0x14 */
    _flag_k = FK_ADD;
L_120E49C8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120E49C8: add edx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E48FD; /* 0x120E49CB: jmp 0x120e48fd */
L_120E49D0:
    esi = MEM32(ebp + (-0x24)); /* 0x120E49D0: mov esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E49D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x120E49D5: mov edx, eax */
L_120E49D7:
    /* cmp MEM8(ebp + eax + (-0xC)), 0 */ /* 0x120E49D7: cmp byte ptr [ebp + eax - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E49EE; /* 0x120E49DC: je 0x120e49ee */
L_120E49DE:
    /* test esi, esi */ /* 0x120E49DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E49ED; /* 0x120E49E0: je 0x120e49ed */
L_120E49E2:
    MEM32(esi + edx * 8) = 5; /* 0x120E49E2: mov dword ptr [esi + edx*8], 5 */
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E49E9: mov dword ptr [esi + edx*8 + 4], eax */
L_120E49ED:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E49ED: inc edx */
    _flag_k = FK_INC;
L_120E49EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E49EE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 6 */ /* 0x120E49EF: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E49D7; /* 0x120E49F2: jb 0x120e49d7 */
L_120E49F4:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x120E49F4: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0xAu); /* 0x120E49F8: push 0xa */
    ebx = POP32_VAL(esp); /* 0x120E49FA: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A0A; /* 0x120E49FB: je 0x120e4a0a */
L_120E49FD:
    /* test esi, esi */ /* 0x120E49FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4A09; /* 0x120E49FF: je 0x120e4a09 */
L_120E4A01:
    _flag_a = (uint32_t)(MEM32(esi + edx * 8 + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + edx * 8 + 0x4) = MEM32(esi + edx * 8 + 0x4) & 0; /* 0x120E4A01: and dword ptr [esi + edx*8 + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edx * 8) = ebx; /* 0x120E4A06: mov dword ptr [esi + edx*8], ebx */
L_120E4A09:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4A09: inc edx */
    _flag_k = FK_INC;
L_120E4A0A:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x120E4A0A: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A20; /* 0x120E4A0E: je 0x120e4a20 */
L_120E4A10:
    /* test esi, esi */ /* 0x120E4A10: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4A1F; /* 0x120E4A12: je 0x120e4a1f */
L_120E4A14:
    MEM32(esi + edx * 8) = ebx; /* 0x120E4A14: mov dword ptr [esi + edx*8], ebx */
    MEM32(esi + edx * 8 + 0x4) = 1; /* 0x120E4A17: mov dword ptr [esi + edx*8 + 4], 1 */
L_120E4A1F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4A1F: inc edx */
    _flag_k = FK_INC;
L_120E4A20:
    eax = MEM32(ebp + (-0x20)); /* 0x120E4A20: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x120E4A23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4A29; /* 0x120E4A25: je 0x120e4a29 */
L_120E4A27:
    MEM32(eax) = edx; /* 0x120E4A27: mov dword ptr [eax], edx */
L_120E4A29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4A29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4A2B:
    edi = POP32_VAL(esp); /* 0x120E4A2B: pop edi */
    ebx = POP32_VAL(esp); /* 0x120E4A2C: pop ebx */
L_120E4A2D:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E4A2D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E4A30: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E4A32: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120E4A33: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4A38: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E4A39: ret 0xc */
L_120E4A3C:
    eax = 0x80004005u; /* 0x120E4A3C: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_120E4A2B; /* 0x120E4A41: jmp 0x120e4a2b */
L_120E4A43:
    /* cmp MEM8(ecx + 0x1), 2 */ /* 0x120E4A43: cmp byte ptr [ecx + 1], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ecx + 0x4; /* 0x120E4A47: lea edi, [ecx + 4] */
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E4A4A: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x120E4A4C: neg ebx */
    _flag_k = FK_CMP;
L_120E4A4E:
    eax = MEM32(edi); /* 0x120E4A4E: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x120E4A50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4ACE; /* 0x120E4A52: js 0x120e4ace */
L_120E4A54:
    /* cmp LO16(eax), 0x1Fu */ /* 0x120E4A54: cmp ax, 0x1f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x1Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4A8F; /* 0x120E4A58: jne 0x120e4a8f */
L_120E4A5A:
    ecx = MEM32(edi + 0x8); /* 0x120E4A5A: mov ecx, dword ptr [edi + 8] */
    eax = ecx; /* 0x120E4A5D: mov eax, ecx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x120E4A5F: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x120E4A5F: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x120E4A62: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x120E4A67: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120E4A6D: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x100u */ /* 0x120E4A6F: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4A8F; /* 0x120E4A74: jne 0x120e4a8f */
L_120E4A76:
    /* test esi, esi */ /* 0x120E4A76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4A8E; /* 0x120E4A78: je 0x120e4a8e */
L_120E4A7A:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E4A7A: movzx eax, word ptr [edi + 4] */
    MEM32(esi + edx * 8) = eax; /* 0x120E4A7E: mov dword ptr [esi + edx*8], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x120E4A81: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4A85: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4A8A: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4A8E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4A8E: inc edx */
    _flag_k = FK_INC;
L_120E4A8F:
    eax = MEM32(edi); /* 0x120E4A8F: mov eax, dword ptr [edi] */
    ecx = eax; /* 0x120E4A91: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x120E4A93: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFu */ /* 0x120E4A99: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4A20; /* 0x120E4A9F: je 0x120e4a20 */
L_120E4AA5:
    /* cmp ecx, 0xFFFEu */ /* 0x120E4AA5: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4ABA; /* 0x120E4AAB: jne 0x120e4aba */
L_120E4AAD:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E4AAD: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E4AAD: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4AB0: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4AB5:
    edi = edi + eax * 4; /* 0x120E4AB5: lea edi, [edi + eax*4] */
    goto L_120E4ACE; /* 0x120E4AB8: jmp 0x120e4ace */
L_120E4ABA:
    /* test ebx, ebx */ /* 0x120E4ABA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4AC6; /* 0x120E4ABC: jne 0x120e4ac6 */
L_120E4ABE:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E4ABE: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E4ABE: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E4AC1: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120E4AB5; /* 0x120E4AC4: jmp 0x120e4ab5 */
L_120E4AC6:
    /* cmp ecx, 0x51u */ /* 0x120E4AC6: cmp ecx, 0x51 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4ACE; /* 0x120E4AC9: jne 0x120e4ace */
L_120E4ACB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120E4ACB: add edi, 0x14 */
    _flag_k = FK_ADD;
L_120E4ACE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4ACE: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E4A4E; /* 0x120E4AD1: jmp 0x120e4a4e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120E4ADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4ADBu);

L_120E4ADB:
    edi = edi; /* 0x120E4ADB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4ADD: push ebp */
    ebp = esp; /* 0x120E4ADE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x120E4AE0: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E4AE3: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E4AE8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E4AEA: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E4AED: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E4AF0: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E4AF1: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E4AF4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120E4AF6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E4AF7: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x120E4AFA: mov dword ptr [ebp - 0x38], eax */
    edx = ecx; /* 0x120E4AFD: mov edx, ecx */
    /* test ebx, ebx */ /* 0x120E4AFF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4B0D; /* 0x120E4B01: jne 0x120e4b0d */
L_120E4B03:
    eax = 0x8876086Cu; /* 0x120E4B03: mov eax, 0x8876086c */
    goto L_120E4DE6; /* 0x120E4B08: jmp 0x120e4de6 */
L_120E4B0D:
    /* test eax, eax */ /* 0x120E4B0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4B13; /* 0x120E4B0F: je 0x120e4b13 */
L_120E4B11:
    MEM32(eax) = ecx; /* 0x120E4B11: mov dword ptr [eax], ecx */
L_120E4B13:
    /* cmp MEM8(ebx + 0x1), 2 */ /* 0x120E4B13: cmp byte ptr [ebx + 1], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x120E4B17: push edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E4B18: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120E4B1A: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = eax; /* 0x120E4B1C: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebx); /* 0x120E4B1F: mov eax, dword ptr [ebx] */
    edi = 0xFFFF0000u; /* 0x120E4B21: mov edi, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x120E4B26: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x46580000u */ /* 0x120E4B28: cmp eax, 0x46580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4DE3; /* 0x120E4B2D: je 0x120e4de3 */
L_120E4B33:
    /* cmp eax, 0xFFFE0000u */ /* 0x120E4B33: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4C45; /* 0x120E4B38: je 0x120e4c45 */
L_120E4B3E:
    /* cmp eax, edi */ /* 0x120E4B3E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4B4C; /* 0x120E4B40: je 0x120e4b4c */
L_120E4B42:
    eax = 0x88760B59u; /* 0x120E4B42: mov eax, 0x88760b59 */
    goto L_120E4DE5; /* 0x120E4B47: jmp 0x120e4de5 */
L_120E4B4C:
    /* cmp MEM8(ebx + 0x1), 2 */ /* 0x120E4B4C: cmp byte ptr [ebx + 1], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E4B67; /* 0x120E4B50: jae 0x120e4b67 */
L_120E4B52:
    /* test esi, esi */ /* 0x120E4B52: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4B5F; /* 0x120E4B54: je 0x120e4b5f */
L_120E4B56:
    MEM32(esi) = 0xAu; /* 0x120E4B56: mov dword ptr [esi], 0xa */
    MEM32(esi + 0x4) = ecx; /* 0x120E4B5C: mov dword ptr [esi + 4], ecx */
L_120E4B5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E4B5F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4B61: inc edx */
    _flag_k = FK_INC;
    goto L_120E4DDE; /* 0x120E4B62: jmp 0x120e4dde */
L_120E4B67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4B67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x34)); /* 0x120E4B69: mov edx, dword ptr [ebp - 0x34] */
    edi = ebp + (-0x14); /* 0x120E4B6C: lea edi, [ebp - 0x14] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B6F: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B70: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B71: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B72: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4B73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x24); /* 0x120E4B75: lea edi, [ebp - 0x24] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B78: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B79: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B7A: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4B7B: stosd dword ptr es:[edi], eax */
    edi = ebx + 0x4; /* 0x120E4B7C: lea edi, [ebx + 4] */
L_120E4B7F:
    eax = MEM32(edi); /* 0x120E4B7F: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x120E4B81: mov ebx, eax */
    /* test eax, eax */ /* 0x120E4B83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E4BB0; /* 0x120E4B85: jns 0x120e4bb0 */
L_120E4B87:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xF0001800u);
    ebx = ebx & 0xF0001800u; /* 0x120E4B87: and ebx, 0xf0001800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x120E4B8D: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x80000800u */ /* 0x120E4B92: cmp ebx, 0x80000800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4BA1; /* 0x120E4B98: jne 0x120e4ba1 */
L_120E4B9A:
    MEM8(ebp + eax + (-0x14)) = (uint8_t)(1); /* 0x120E4B9A: mov byte ptr [ebp + eax - 0x14], 1 */
    goto L_120E4BFB; /* 0x120E4B9F: jmp 0x120e4bfb */
L_120E4BA1:
    /* cmp ebx, 0x90000800u */ /* 0x120E4BA1: cmp ebx, 0x90000800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x90000800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4BFB; /* 0x120E4BA7: jne 0x120e4bfb */
L_120E4BA9:
    MEM8(ebp + eax + (-0x24)) = (uint8_t)(1); /* 0x120E4BA9: mov byte ptr [ebp + eax - 0x24], 1 */
    goto L_120E4BFB; /* 0x120E4BAE: jmp 0x120e4bfb */
L_120E4BB0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    ebx = ebx & 0xFFFFu; /* 0x120E4BB0: and ebx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFu */ /* 0x120E4BB6: cmp ebx, 0xffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4C03; /* 0x120E4BBC: je 0x120e4c03 */
L_120E4BBE:
    /* cmp ebx, 0xFFFEu */ /* 0x120E4BBE: cmp ebx, 0xfffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4BD0; /* 0x120E4BC4: jne 0x120e4bd0 */
L_120E4BC6:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E4BC6: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E4BC6: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4BC9: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4BF8; /* 0x120E4BCE: jmp 0x120e4bf8 */
L_120E4BD0:
    /* cmp ebx, 0x51u */ /* 0x120E4BD0: cmp ebx, 0x51 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4BE9; /* 0x120E4BD3: je 0x120e4be9 */
L_120E4BD5:
    /* cmp ebx, 0x30u */ /* 0x120E4BD5: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4BE9; /* 0x120E4BD8: je 0x120e4be9 */
L_120E4BDA:
    /* cmp ebx, 0x2Fu */ /* 0x120E4BDA: cmp ebx, 0x2f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4BE9; /* 0x120E4BDD: je 0x120e4be9 */
L_120E4BDF:
    /* cmp ebx, 0x1Fu */ /* 0x120E4BDF: cmp ebx, 0x1f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4BFB; /* 0x120E4BE2: jne 0x120e4bfb */
L_120E4BE4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4BE4: add edi, 4 */
    _flag_k = FK_ADD;
    goto L_120E4BFB; /* 0x120E4BE7: jmp 0x120e4bfb */
L_120E4BE9:
    /* test edx, edx */ /* 0x120E4BE9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4BF2; /* 0x120E4BEB: je 0x120e4bf2 */
L_120E4BED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120E4BED: add edi, 0x14 */
    _flag_k = FK_ADD;
    goto L_120E4BFB; /* 0x120E4BF0: jmp 0x120e4bfb */
L_120E4BF2:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E4BF2: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E4BF2: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E4BF5: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4BF8:
    edi = edi + eax * 4; /* 0x120E4BF8: lea edi, [edi + eax*4] */
L_120E4BFB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4BFB: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E4B7F; /* 0x120E4BFE: jmp 0x120e4b7f */
L_120E4C03:
    eax = ecx; /* 0x120E4C03: mov eax, ecx */
    edx = eax; /* 0x120E4C05: mov edx, eax */
L_120E4C07:
    /* cmp MEM8(ebp + eax + (-0x14)), LO8(ecx) */ /* 0x120E4C07: cmp byte ptr [ebp + eax - 0x14], cl */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x14))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4C1D; /* 0x120E4C0B: je 0x120e4c1d */
L_120E4C0D:
    /* test esi, esi */ /* 0x120E4C0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4C1C; /* 0x120E4C0F: je 0x120e4c1c */
L_120E4C11:
    MEM32(esi + edx * 8) = 0xAu; /* 0x120E4C11: mov dword ptr [esi + edx*8], 0xa */
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4C18: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4C1C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4C1C: inc edx */
    _flag_k = FK_INC;
L_120E4C1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E4C1D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x10u */ /* 0x120E4C1E: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4C07; /* 0x120E4C21: jb 0x120e4c07 */
L_120E4C23:
    /* cmp MEM8(ebp + ecx + (-0x24)), 0 */ /* 0x120E4C23: cmp byte ptr [ebp + ecx - 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + ecx + (-0x24))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4C3A; /* 0x120E4C28: je 0x120e4c3a */
L_120E4C2A:
    /* test esi, esi */ /* 0x120E4C2A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4C39; /* 0x120E4C2C: je 0x120e4c39 */
L_120E4C2E:
    MEM32(esi + edx * 8) = 0xCu; /* 0x120E4C2E: mov dword ptr [esi + edx*8], 0xc */
    MEM32(esi + edx * 8 + 0x4) = ecx; /* 0x120E4C35: mov dword ptr [esi + edx*8 + 4], ecx */
L_120E4C39:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4C39: inc edx */
    _flag_k = FK_INC;
L_120E4C3A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E4C3A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x120E4C3B: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4C23; /* 0x120E4C3E: jb 0x120e4c23 */
L_120E4C40:
    goto L_120E4DDE; /* 0x120E4C40: jmp 0x120e4dde */
L_120E4C45:
    /* cmp MEM8(ebx + 0x1), 3 */ /* 0x120E4C45: cmp byte ptr [ebx + 1], 3 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4CBC; /* 0x120E4C49: jne 0x120e4cbc */
L_120E4C4B:
    edi = ebx + 0x4; /* 0x120E4C4B: lea edi, [ebx + 4] */
    ebx = 0xFFFFu; /* 0x120E4C4E: mov ebx, 0xffff */
L_120E4C53:
    /* cmp MEM16(edi), 0x1Fu */ /* 0x120E4C53: cmp word ptr [edi], 0x1f */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0x1Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4C8E; /* 0x120E4C57: jne 0x120e4c8e */
L_120E4C59:
    ecx = MEM32(edi + 0x8); /* 0x120E4C59: mov ecx, dword ptr [edi + 8] */
    eax = ecx; /* 0x120E4C5C: mov eax, ecx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x120E4C5E: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x120E4C5E: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x120E4C61: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x120E4C66: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120E4C6C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x600u */ /* 0x120E4C6E: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4C8E; /* 0x120E4C73: jne 0x120e4c8e */
L_120E4C75:
    /* test esi, esi */ /* 0x120E4C75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4C8D; /* 0x120E4C77: je 0x120e4c8d */
L_120E4C79:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E4C79: movzx eax, word ptr [edi + 4] */
    MEM32(esi + edx * 8) = eax; /* 0x120E4C7D: mov dword ptr [esi + edx*8], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x120E4C80: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4C84: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4C89: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4C8D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4C8D: inc edx */
    _flag_k = FK_INC;
L_120E4C8E:
    eax = MEM32(edi); /* 0x120E4C8E: mov eax, dword ptr [edi] */
    ecx = eax; /* 0x120E4C90: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x120E4C92: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x120E4C94: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4DDE; /* 0x120E4C96: je 0x120e4dde */
L_120E4C9C:
    /* cmp ecx, 0xFFFEu */ /* 0x120E4C9C: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4CAE; /* 0x120E4CA2: jne 0x120e4cae */
L_120E4CA4:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E4CA4: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E4CA4: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4CA7: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4CB4; /* 0x120E4CAC: jmp 0x120e4cb4 */
L_120E4CAE:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E4CAE: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E4CAE: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E4CB1: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4CB4:
    edi = edi + eax * 4; /* 0x120E4CB4: lea edi, [edi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4CB7: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E4C53; /* 0x120E4CBA: jmp 0x120e4c53 */
L_120E4CBC:
    edx = MEM32(ebp + (-0x34)); /* 0x120E4CBC: mov edx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4CBF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x2C); /* 0x120E4CC1: lea edi, [ebp - 0x2c] */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x120E4CC4: stosw word ptr es:[edi], ax */
    MEM8(edi) = LO8(eax); edi += _df; /* 0x120E4CC6: stosb byte ptr es:[edi], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4CC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xC); /* 0x120E4CC9: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4CCC: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E4CCD: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4CCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x28); /* 0x120E4CD0: lea edi, [ebp - 0x28] */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x120E4CD3: stosw word ptr es:[edi], ax */
    edi = ebx + 0x4; /* 0x120E4CD5: lea edi, [ebx + 4] */
L_120E4CD8:
    eax = MEM32(edi); /* 0x120E4CD8: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x120E4CDA: mov ebx, eax */
    /* test eax, eax */ /* 0x120E4CDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E4D18; /* 0x120E4CDE: jns 0x120e4d18 */
L_120E4CE0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xF0001800u);
    ebx = ebx & 0xF0001800u; /* 0x120E4CE0: and ebx, 0xf0001800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x120E4CE6: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xC0000000u */ /* 0x120E4CEB: cmp ebx, 0xc0000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xC0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4CFA; /* 0x120E4CF1: jne 0x120e4cfa */
L_120E4CF3:
    MEM8(ebp + eax + (-0x2C)) = (uint8_t)(1); /* 0x120E4CF3: mov byte ptr [ebp + eax - 0x2c], 1 */
    goto L_120E4D63; /* 0x120E4CF8: jmp 0x120e4d63 */
L_120E4CFA:
    /* cmp ebx, 0xD0000000u */ /* 0x120E4CFA: cmp ebx, 0xd0000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xD0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4D09; /* 0x120E4D00: jne 0x120e4d09 */
L_120E4D02:
    MEM8(ebp + eax + (-0x28)) = (uint8_t)(1); /* 0x120E4D02: mov byte ptr [ebp + eax - 0x28], 1 */
    goto L_120E4D63; /* 0x120E4D07: jmp 0x120e4d63 */
L_120E4D09:
    /* cmp ebx, 0xE0000000u */ /* 0x120E4D09: cmp ebx, 0xe0000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xE0000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4D63; /* 0x120E4D0F: jne 0x120e4d63 */
L_120E4D11:
    MEM8(ebp + eax + (-0xC)) = (uint8_t)(1); /* 0x120E4D11: mov byte ptr [ebp + eax - 0xc], 1 */
    goto L_120E4D63; /* 0x120E4D16: jmp 0x120e4d63 */
L_120E4D18:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    ebx = ebx & 0xFFFFu; /* 0x120E4D18: and ebx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFu */ /* 0x120E4D1E: cmp ebx, 0xffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4D6B; /* 0x120E4D24: je 0x120e4d6b */
L_120E4D26:
    /* cmp ebx, 0xFFFEu */ /* 0x120E4D26: cmp ebx, 0xfffe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4D38; /* 0x120E4D2C: jne 0x120e4d38 */
L_120E4D2E:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x120E4D2E: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x120E4D2E: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x120E4D31: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E4D60; /* 0x120E4D36: jmp 0x120e4d60 */
L_120E4D38:
    /* cmp ebx, 0x51u */ /* 0x120E4D38: cmp ebx, 0x51 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4D51; /* 0x120E4D3B: je 0x120e4d51 */
L_120E4D3D:
    /* cmp ebx, 0x30u */ /* 0x120E4D3D: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4D51; /* 0x120E4D40: je 0x120e4d51 */
L_120E4D42:
    /* cmp ebx, 0x2Fu */ /* 0x120E4D42: cmp ebx, 0x2f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4D51; /* 0x120E4D45: je 0x120e4d51 */
L_120E4D47:
    /* cmp ebx, 0x1Fu */ /* 0x120E4D47: cmp ebx, 0x1f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4D63; /* 0x120E4D4A: jne 0x120e4d63 */
L_120E4D4C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4D4C: add edi, 4 */
    _flag_k = FK_ADD;
    goto L_120E4D63; /* 0x120E4D4F: jmp 0x120e4d63 */
L_120E4D51:
    /* test edx, edx */ /* 0x120E4D51: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4D5A; /* 0x120E4D53: je 0x120e4d5a */
L_120E4D55:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120E4D55: add edi, 0x14 */
    _flag_k = FK_ADD;
    goto L_120E4D63; /* 0x120E4D58: jmp 0x120e4d63 */
L_120E4D5A:
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x120E4D5A: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x120E4D5A: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x120E4D5D: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4D60:
    edi = edi + eax * 4; /* 0x120E4D60: lea edi, [edi + eax*4] */
L_120E4D63:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E4D63: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120E4CD8; /* 0x120E4D66: jmp 0x120e4cd8 */
L_120E4D6B:
    eax = ecx; /* 0x120E4D6B: mov eax, ecx */
    edx = eax; /* 0x120E4D6D: mov edx, eax */
L_120E4D6F:
    /* cmp MEM8(ebp + eax + (-0xC)), LO8(ecx) */ /* 0x120E4D6F: cmp byte ptr [ebp + eax - 0xc], cl */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0xC))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4D85; /* 0x120E4D73: je 0x120e4d85 */
L_120E4D75:
    /* test esi, esi */ /* 0x120E4D75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4D84; /* 0x120E4D77: je 0x120e4d84 */
L_120E4D79:
    MEM32(esi + edx * 8) = 5; /* 0x120E4D79: mov dword ptr [esi + edx*8], 5 */
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4D80: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4D84:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4D84: inc edx */
    _flag_k = FK_INC;
L_120E4D85:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E4D85: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 8 */ /* 0x120E4D86: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4D6F; /* 0x120E4D89: jb 0x120e4d6f */
L_120E4D8B:
    eax = ecx; /* 0x120E4D8B: mov eax, ecx */
L_120E4D8D:
    /* cmp MEM8(ebp + eax + (-0x28)), LO8(ecx) */ /* 0x120E4D8D: cmp byte ptr [ebp + eax - 0x28], cl */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x28))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4DA3; /* 0x120E4D91: je 0x120e4da3 */
L_120E4D93:
    /* test esi, esi */ /* 0x120E4D93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4DA2; /* 0x120E4D95: je 0x120e4da2 */
L_120E4D97:
    MEM32(esi + edx * 8) = 0xAu; /* 0x120E4D97: mov dword ptr [esi + edx*8], 0xa */
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x120E4D9E: mov dword ptr [esi + edx*8 + 4], eax */
L_120E4DA2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4DA2: inc edx */
    _flag_k = FK_INC;
L_120E4DA3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E4DA3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 2 */ /* 0x120E4DA4: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4D8D; /* 0x120E4DA7: jb 0x120e4d8d */
L_120E4DA9:
    eax = ecx; /* 0x120E4DA9: mov eax, ecx */
L_120E4DAB:
    /* cmp MEM8(ebp + eax + (-0x2C)), LO8(ecx) */ /* 0x120E4DAB: cmp byte ptr [ebp + eax - 0x2c], cl */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x2C))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4DD8; /* 0x120E4DAF: je 0x120e4dd8 */
L_120E4DB1:
    /* test esi, esi */ /* 0x120E4DB1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4DD7; /* 0x120E4DB3: je 0x120e4dd7 */
L_120E4DB5:
    /* test eax, eax */ /* 0x120E4DB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4DBE; /* 0x120E4DB7: jne 0x120e4dbe */
L_120E4DB9:
    MEM32(esi + edx * 8) = ecx; /* 0x120E4DB9: mov dword ptr [esi + edx*8], ecx */
    goto L_120E4DD3; /* 0x120E4DBC: jmp 0x120e4dd3 */
L_120E4DBE:
    /* cmp eax, 2 */ /* 0x120E4DBE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4DCC; /* 0x120E4DC1: jne 0x120e4dcc */
L_120E4DC3:
    MEM32(esi + edx * 8) = 4; /* 0x120E4DC3: mov dword ptr [esi + edx*8], 4 */
    goto L_120E4DD3; /* 0x120E4DCA: jmp 0x120e4dd3 */
L_120E4DCC:
    MEM32(esi + edx * 8) = 0xBu; /* 0x120E4DCC: mov dword ptr [esi + edx*8], 0xb */
L_120E4DD3:
    MEM32(esi + edx * 8 + 0x4) = ecx; /* 0x120E4DD3: mov dword ptr [esi + edx*8 + 4], ecx */
L_120E4DD7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E4DD7: inc edx */
    _flag_k = FK_INC;
L_120E4DD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E4DD8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x120E4DD9: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4DAB; /* 0x120E4DDC: jb 0x120e4dab */
L_120E4DDE:
    eax = MEM32(ebp + (-0x38)); /* 0x120E4DDE: mov eax, dword ptr [ebp - 0x38] */
    MEM32(eax) = edx; /* 0x120E4DE1: mov dword ptr [eax], edx */
L_120E4DE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4DE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4DE5:
    edi = POP32_VAL(esp); /* 0x120E4DE5: pop edi */
L_120E4DE6:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E4DE6: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x120E4DE9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E4DEA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E4DEC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E4DED: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4DF2: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E4DF3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E4DFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4DFBu);

L_120E4DFB:
    edi = edi; /* 0x120E4DFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4DFD: push ebp */
    ebp = esp; /* 0x120E4DFE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E4E00: push ecx */
    PUSH32(esp, ebx); /* 0x120E4E01: push ebx */
    PUSH32(esp, esi); /* 0x120E4E02: push esi */
    PUSH32(esp, edi); /* 0x120E4E03: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E4E04: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E4E07: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120E4E09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4E0F; /* 0x120E4E0B: je 0x120e4e0f */
L_120E4E0D:
    MEM32(edi) = esi; /* 0x120E4E0D: mov dword ptr [edi], esi */
L_120E4E0F:
    ecx = MEM32(ebp + 0x8); /* 0x120E4E0F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x120E4E12: mov eax, dword ptr [ecx] */
    edx = 0xFFFF0000u; /* 0x120E4E14: mov edx, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120E4E19: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x46580000u */ /* 0x120E4E1B: cmp eax, 0x46580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4EB6; /* 0x120E4E20: je 0x120e4eb6 */
L_120E4E26:
    /* cmp eax, 0xFFFE0000u */ /* 0x120E4E26: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4EB6; /* 0x120E4E2B: je 0x120e4eb6 */
L_120E4E31:
    /* cmp eax, edx */ /* 0x120E4E31: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4E5C; /* 0x120E4E33: jne 0x120e4e5c */
L_120E4E35:
    eax = ebp + 0x8; /* 0x120E4E35: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E4E38: push eax */
    eax = ebp + (-0x4); /* 0x120E4E39: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E4E3C: push eax */
    PUSH32(esp, 0x42415443u); /* 0x120E4E3D: push 0x42415443 */
    PUSH32(esp, ecx); /* 0x120E4E42: push ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x120E4E43: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_120E45E4); /* 0x120E4E46: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4E4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4EB8; /* 0x120E4E4D: js 0x120e4eb8 */
L_120E4E4F:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E4E4F: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120E4E52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4EB6; /* 0x120E4E54: je 0x120e4eb6 */
L_120E4E56:
    /* cmp MEM32(ebp + 0x8), 0x1Cu */ /* 0x120E4E56: cmp dword ptr [ebp + 8], 0x1c */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E4E63; /* 0x120E4E5A: jae 0x120e4e63 */
L_120E4E5C:
    eax = 0x88760B59u; /* 0x120E4E5C: mov eax, 0x88760b59 */
    goto L_120E4EB8; /* 0x120E4E61: jmp 0x120e4eb8 */
L_120E4E63:
    eax = MEM32(ecx + 0xC); /* 0x120E4E63: mov eax, dword ptr [ecx + 0xc] */
    edx = MEM32(ecx + 0x10); /* 0x120E4E66: mov edx, dword ptr [ecx + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120E4E69: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x120E4E6C: add eax, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x120E4E6F: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120E4E71: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4E5C; /* 0x120E4E74: jb 0x120e4e5c */
L_120E4E76:
    ebx = esi; /* 0x120E4E76: mov ebx, esi */
    /* cmp MEM32(ecx + 0xC), ebx */ /* 0x120E4E78: cmp dword ptr [ecx + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E4EB0; /* 0x120E4E7B: jbe 0x120e4eb0 */
L_120E4E7D:
    PUSH32(esp, 3); /* 0x120E4E7D: push 3 */
    eax = POP32_VAL(esp); /* 0x120E4E7F: pop eax */
    /* cmp LO16(eax), MEM16(edx + 0x4) */ /* 0x120E4E80: cmp ax, word ptr [edx + 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E4EA7; /* 0x120E4E84: jne 0x120e4ea7 */
L_120E4E86:
    eax = MEM32(edx); /* 0x120E4E86: mov eax, dword ptr [edx] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120E4E88: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E4E5C; /* 0x120E4E8B: jbe 0x120e4e5c */
L_120E4E8D:
    /* cmp esi, 0x10u */ /* 0x120E4E8D: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4E5C; /* 0x120E4E90: je 0x120e4e5c */
L_120E4E92:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E4E92: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x120E4E96: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E4EA6; /* 0x120E4E99: je 0x120e4ea6 */
L_120E4E9B:
    edi = MEM32(ebp + 0xC); /* 0x120E4E9B: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E4E9E: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + esi * 4) = eax; /* 0x120E4EA0: mov dword ptr [edi + esi*4], eax */
    edi = MEM32(ebp + 0x10); /* 0x120E4EA3: mov edi, dword ptr [ebp + 0x10] */
L_120E4EA6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E4EA6: inc esi */
    _flag_k = FK_INC;
L_120E4EA7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E4EA7: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x120E4EA8: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ecx + 0xC) */ /* 0x120E4EAB: cmp ebx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E4E7D; /* 0x120E4EAE: jb 0x120e4e7d */
L_120E4EB0:
    /* test edi, edi */ /* 0x120E4EB0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4EB6; /* 0x120E4EB2: je 0x120e4eb6 */
L_120E4EB4:
    MEM32(edi) = esi; /* 0x120E4EB4: mov dword ptr [edi], esi */
L_120E4EB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4EB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4EB8:
    edi = POP32_VAL(esp); /* 0x120E4EB8: pop edi */
    esi = POP32_VAL(esp); /* 0x120E4EB9: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E4EBA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E4EBB: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E4EBC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E4EC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4EC4u);

L_120E4EC4:
    edi = edi; /* 0x120E4EC4: mov edi, edi */
    PUSH32(esp, esi); /* 0x120E4EC6: push esi */
    PUSH32(esp, MEM32(0x121D98C8)); /* 0x120E4EC7: push dword ptr [0x121d98c8] */
    esi = ecx; /* 0x120E4ECD: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x12001120)); /* 0x120E4ECF: call dword ptr [0x12001120] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x120E4ED5: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x120E4ED7: pop esi */
    /* test eax, eax */ /* 0x120E4ED8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4EF1; /* 0x120E4EDA: jne 0x120e4ef1 */
L_120E4EDC:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x120E4EDC: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4EE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E4EF3; /* 0x120E4EE4: jle 0x120e4ef3 */
L_120E4EE6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x120E4EE6: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x120E4EEB: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E4EF0: ret  */
L_120E4EF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E4EF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E4EF3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E4EF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E4EF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E4EF9u);

L_120E4EF9:
    edi = edi; /* 0x120E4EF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E4EFB: push ebp */
    ebp = esp; /* 0x120E4EFC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120E4EFE: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E4F04: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E4F09: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E4F0B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E4F0E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E4F11: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E4F17: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E4F1A: push ebx */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E4F1B: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E4F21: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120E4F24: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E4F25: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E4F28: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E4F29: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E4F2F: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E4F32: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x258))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x258)) = MEM32(ebp + (-0x258)) & edi; /* 0x120E4F34: and dword ptr [ebp - 0x258], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E4F3A: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x260)) = esi; /* 0x120E4F40: mov dword ptr [ebp - 0x260], esi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E4F46: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x25C)) = edi; /* 0x120E4F4C: mov dword ptr [ebp - 0x25c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E4F52: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x14); /* 0x120E4F57: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, 0x00010000u */ /* 0x120E4F5A: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E4FCC; /* 0x120E4F60: je 0x120e4fcc */
L_120E4F62:
    ecx = 0x121D9AF8u; /* 0x120E4F62: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E4F67: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E4F6C: mov esi, eax */
    /* test esi, esi */ /* 0x120E4F6E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5071; /* 0x120E4F70: js 0x120e5071 */
L_120E4F76:
    PUSH32(esp, 0x12008584u); /* 0x120E4F76: push 0x12008584 */
    ecx = 0x121D9AF8u; /* 0x120E4F7B: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E4F80: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E4F85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E4F93; /* 0x120E4F87: jne 0x120e4f93 */
L_120E4F89:
    esi = 0x80004005u; /* 0x120E4F89: mov esi, 0x80004005 */
    goto L_120E5071; /* 0x120E4F8E: jmp 0x120e5071 */
L_120E4F93:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E4F93: push dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E4F99: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E4F9F: push dword ptr [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x120E4FA5: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E4FA6: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E4FAC: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E4FB2: push dword ptr [ebp - 0x260] */
    RECOMP_ICALL(eax); /* 0x120E4FB8: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E4FBA: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E4FC0: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E4FC2: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5087; /* 0x120E4FC7: jmp 0x120e5087 */
L_120E4FCC:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E4FCC: push dword ptr [ebp - 0x24c] */
    ecx = ebp + (-0x244); /* 0x120E4FD2: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E4FD8: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E4FDE: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E4FE4: push dword ptr [ebp - 0x248] */
    PUSH32(esp, 0); /* 0x120E4FEA: push 0 */
    PUSH32(esp, esi); /* 0x120E4FEC: push esi */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E4FED: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E4FF2: mov esi, eax */
    /* test esi, esi */ /* 0x120E4FF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5071; /* 0x120E4FF6: js 0x120e5071 */
L_120E4FF8:
    ecx = ebp + (-0x25C); /* 0x120E4FF8: lea ecx, [ebp - 0x25c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E4FFE: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x25C)); /* 0x120E5003: mov edi, dword ptr [ebp - 0x25c] */
    esi = eax; /* 0x120E5009: mov esi, eax */
    /* test esi, esi */ /* 0x120E500B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5017; /* 0x120E500D: je 0x120e5017 */
L_120E500F:
    ebx = MEM32(ebp + (-0x258)); /* 0x120E500F: mov ebx, dword ptr [ebp - 0x258] */
    goto L_120E5037; /* 0x120E5015: jmp 0x120e5037 */
L_120E5017:
    PUSH32(esp, 0x12008578u); /* 0x120E5017: push 0x12008578 */
    PUSH32(esp, edi); /* 0x120E501C: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E501D: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5023: mov ebx, eax */
    esi = ebx; /* 0x120E5025: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5027: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E5029: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E502B: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5031: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5037:
    /* test esi, esi */ /* 0x120E5037: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5071; /* 0x120E5039: js 0x120e5071 */
L_120E503B:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E503B: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E503E: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E5044: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E5049: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E504C: push ecx */
    ecx = ebp + (-0x28); /* 0x120E504D: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E5050: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120E5051: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E5054: push esi */
    PUSH32(esp, eax); /* 0x120E5055: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E5056: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E5059: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E505C: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E505F: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E5061: push 0 */
    PUSH32(esp, eax); /* 0x120E5063: push eax */
    ecx = ebp + (-0x244); /* 0x120E5064: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E506A: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E506F: mov esi, eax */
L_120E5071:
    ecx = ebp + (-0x244); /* 0x120E5071: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5077: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E507C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5087; /* 0x120E507E: je 0x120e5087 */
L_120E5080:
    PUSH32(esp, edi); /* 0x120E5080: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5081: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5087:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5087: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E508A: pop edi */
    eax = esi; /* 0x120E508B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E508D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E508E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5090: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5091: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5096: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E5097: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E509F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E509Fu);

L_120E509F:
    edi = edi; /* 0x120E509F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E50A1: push ebp */
    ebp = esp; /* 0x120E50A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120E50A4: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E50AA: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E50AF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E50B1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E50B4: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E50B7: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E50BD: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E50C0: push ebx */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E50C1: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E50C7: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120E50CA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E50CB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E50CE: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E50CF: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E50D5: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E50D8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x258))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x258)) = MEM32(ebp + (-0x258)) & edi; /* 0x120E50DA: and dword ptr [ebp - 0x258], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E50E0: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x260)) = esi; /* 0x120E50E6: mov dword ptr [ebp - 0x260], esi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E50EC: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x25C)) = edi; /* 0x120E50F2: mov dword ptr [ebp - 0x25c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E50F8: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x14); /* 0x120E50FD: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, 0x00010000u */ /* 0x120E5100: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5172; /* 0x120E5106: je 0x120e5172 */
L_120E5108:
    ecx = 0x121D9AF8u; /* 0x120E5108: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E510D: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5112: mov esi, eax */
    /* test esi, esi */ /* 0x120E5114: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5217; /* 0x120E5116: js 0x120e5217 */
L_120E511C:
    PUSH32(esp, 0x120085A0u); /* 0x120E511C: push 0x120085a0 */
    ecx = 0x121D9AF8u; /* 0x120E5121: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5126: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E512B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E5139; /* 0x120E512D: jne 0x120e5139 */
L_120E512F:
    esi = 0x80004005u; /* 0x120E512F: mov esi, 0x80004005 */
    goto L_120E5217; /* 0x120E5134: jmp 0x120e5217 */
L_120E5139:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5139: push dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E513F: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5145: push dword ptr [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x120E514B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E514C: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5152: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5158: push dword ptr [ebp - 0x260] */
    RECOMP_ICALL(eax); /* 0x120E515E: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5160: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E5166: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5168: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E522D; /* 0x120E516D: jmp 0x120e522d */
L_120E5172:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5172: push dword ptr [ebp - 0x24c] */
    ecx = ebp + (-0x244); /* 0x120E5178: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E517E: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5184: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E518A: push dword ptr [ebp - 0x248] */
    PUSH32(esp, 1); /* 0x120E5190: push 1 */
    PUSH32(esp, esi); /* 0x120E5192: push esi */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E5193: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5198: mov esi, eax */
    /* test esi, esi */ /* 0x120E519A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5217; /* 0x120E519C: js 0x120e5217 */
L_120E519E:
    ecx = ebp + (-0x25C); /* 0x120E519E: lea ecx, [ebp - 0x25c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E51A4: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x25C)); /* 0x120E51A9: mov edi, dword ptr [ebp - 0x25c] */
    esi = eax; /* 0x120E51AF: mov esi, eax */
    /* test esi, esi */ /* 0x120E51B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E51BD; /* 0x120E51B3: je 0x120e51bd */
L_120E51B5:
    ebx = MEM32(ebp + (-0x258)); /* 0x120E51B5: mov ebx, dword ptr [ebp - 0x258] */
    goto L_120E51DD; /* 0x120E51BB: jmp 0x120e51dd */
L_120E51BD:
    PUSH32(esp, 0x12008578u); /* 0x120E51BD: push 0x12008578 */
    PUSH32(esp, edi); /* 0x120E51C2: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E51C3: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E51C9: mov ebx, eax */
    esi = ebx; /* 0x120E51CB: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E51CD: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E51CF: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E51D1: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E51D7: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E51DD:
    /* test esi, esi */ /* 0x120E51DD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5217; /* 0x120E51DF: js 0x120e5217 */
L_120E51E1:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E51E1: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E51E4: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E51EA: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E51EF: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E51F2: push ecx */
    ecx = ebp + (-0x28); /* 0x120E51F3: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E51F6: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120E51F7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E51FA: push esi */
    PUSH32(esp, eax); /* 0x120E51FB: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E51FC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E51FF: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5202: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E5205: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E5207: push 0 */
    PUSH32(esp, eax); /* 0x120E5209: push eax */
    ecx = ebp + (-0x244); /* 0x120E520A: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5210: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5215: mov esi, eax */
L_120E5217:
    ecx = ebp + (-0x244); /* 0x120E5217: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E521D: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5222: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E522D; /* 0x120E5224: je 0x120e522d */
L_120E5226:
    PUSH32(esp, edi); /* 0x120E5226: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5227: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E522D:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E522D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5230: pop edi */
    eax = esi; /* 0x120E5231: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E5233: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E5234: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5236: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5237: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E523C: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E523D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E5245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E5245u);

L_120E5245:
    edi = edi; /* 0x120E5245: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E5247: push ebp */
    ebp = esp; /* 0x120E5248: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x270u; /* 0x120E524A: sub esp, 0x270 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5250: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E5255: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E5257: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E525A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E525D: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5263: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E5266: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E526C: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120E526F: push ebx */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E5270: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E5276: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x120E5279: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E527A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E527D: push edi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E527E: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x20); /* 0x120E5284: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E5287: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x25C)) = MEM32(ebp + (-0x25C)) & edi; /* 0x120E5289: and dword ptr [ebp - 0x25c], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E528F: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x264)) = esi; /* 0x120E5295: mov dword ptr [ebp - 0x264], esi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E529B: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x260)) = edi; /* 0x120E52A1: mov dword ptr [ebp - 0x260], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E52A7: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120E52AC: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C1804); /* 0x120E52B2: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x120E52B7: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, 0x00010000u */ /* 0x120E52BA: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E533D; /* 0x120E52C0: je 0x120e533d */
L_120E52C2:
    ecx = 0x121D9AF8u; /* 0x120E52C2: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E52C7: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E52CC: mov esi, eax */
    /* test esi, esi */ /* 0x120E52CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E53EF; /* 0x120E52D0: js 0x120e53ef */
L_120E52D6:
    PUSH32(esp, 0x120085BCu); /* 0x120E52D6: push 0x120085bc */
    ecx = 0x121D9AF8u; /* 0x120E52DB: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E52E0: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E52E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E52F3; /* 0x120E52E7: jne 0x120e52f3 */
L_120E52E9:
    esi = 0x80004005u; /* 0x120E52E9: mov esi, 0x80004005 */
    goto L_120E53EF; /* 0x120E52EE: jmp 0x120e53ef */
L_120E52F3:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E52F3: push dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E52F9: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E52FF: push dword ptr [ebp - 0x250] */
    PUSH32(esp, ebx); /* 0x120E5305: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5306: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E530C: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5312: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E5318: push dword ptr [ebp - 0x264] */
    RECOMP_ICALL(eax); /* 0x120E531E: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120E5320: lea ecx, [ebp - 0x270] */
    esi = eax; /* 0x120E5326: mov esi, eax */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E5328: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E532D: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5333: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5410; /* 0x120E5338: jmp 0x120e5410 */
L_120E533D:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E533D: push dword ptr [ebp - 0x24c] */
    eax = ebp + (-0x270); /* 0x120E5343: lea eax, [ebp - 0x270] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5349: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E534F: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5355: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E535B: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 0); /* 0x120E5361: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5363: push dword ptr [ebp - 0x248] */
    PUSH32(esp, esi); /* 0x120E5369: push esi */
    PUSH32(esp, eax); /* 0x120E536A: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E536B: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5370: mov esi, eax */
    /* test esi, esi */ /* 0x120E5372: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E53EF; /* 0x120E5374: js 0x120e53ef */
L_120E5376:
    ecx = ebp + (-0x260); /* 0x120E5376: lea ecx, [ebp - 0x260] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E537C: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x260)); /* 0x120E5381: mov edi, dword ptr [ebp - 0x260] */
    esi = eax; /* 0x120E5387: mov esi, eax */
    /* test esi, esi */ /* 0x120E5389: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5395; /* 0x120E538B: je 0x120e5395 */
L_120E538D:
    ebx = MEM32(ebp + (-0x25C)); /* 0x120E538D: mov ebx, dword ptr [ebp - 0x25c] */
    goto L_120E53B5; /* 0x120E5393: jmp 0x120e53b5 */
L_120E5395:
    PUSH32(esp, 0x12008578u); /* 0x120E5395: push 0x12008578 */
    PUSH32(esp, edi); /* 0x120E539A: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E539B: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E53A1: mov ebx, eax */
    esi = ebx; /* 0x120E53A3: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E53A5: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E53A7: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E53A9: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E53AF: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E53B5:
    /* test esi, esi */ /* 0x120E53B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E53EF; /* 0x120E53B7: js 0x120e53ef */
L_120E53B9:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E53B9: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E53BC: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E53C2: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E53C7: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E53CA: push ecx */
    ecx = ebp + (-0x28); /* 0x120E53CB: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E53CE: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E53CF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120E53D2: push esi */
    PUSH32(esp, eax); /* 0x120E53D3: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E53D4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E53D7: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E53DA: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E53DD: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E53DF: push 0 */
    PUSH32(esp, eax); /* 0x120E53E1: push eax */
    ecx = ebp + (-0x244); /* 0x120E53E2: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E53E8: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E53ED: mov esi, eax */
L_120E53EF:
    ecx = ebp + (-0x270); /* 0x120E53EF: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E53F5: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E53FA: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5400: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5405: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5410; /* 0x120E5407: je 0x120e5410 */
L_120E5409:
    PUSH32(esp, edi); /* 0x120E5409: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E540A: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5410:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5410: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5413: pop edi */
    eax = esi; /* 0x120E5414: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E5416: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E5417: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5419: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E541A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E541F: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120E5420: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120E5428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E5428u);

L_120E5428:
    edi = edi; /* 0x120E5428: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E542A: push ebp */
    ebp = esp; /* 0x120E542B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x270u; /* 0x120E542D: sub esp, 0x270 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5433: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E5438: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E543A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E543D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E5440: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5446: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E5449: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E544F: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120E5452: push ebx */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E5453: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E5459: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x120E545C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E545D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E5460: push edi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E5461: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x20); /* 0x120E5467: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E546A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x25C)) = MEM32(ebp + (-0x25C)) & edi; /* 0x120E546C: and dword ptr [ebp - 0x25c], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E5472: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x264)) = esi; /* 0x120E5478: mov dword ptr [ebp - 0x264], esi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E547E: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x260)) = edi; /* 0x120E5484: mov dword ptr [ebp - 0x260], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E548A: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120E548F: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C1804); /* 0x120E5495: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x120E549A: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, 0x00010000u */ /* 0x120E549D: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5520; /* 0x120E54A3: je 0x120e5520 */
L_120E54A5:
    ecx = 0x121D9AF8u; /* 0x120E54A5: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E54AA: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E54AF: mov esi, eax */
    /* test esi, esi */ /* 0x120E54B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E55D2; /* 0x120E54B3: js 0x120e55d2 */
L_120E54B9:
    PUSH32(esp, 0x120085DCu); /* 0x120E54B9: push 0x120085dc */
    ecx = 0x121D9AF8u; /* 0x120E54BE: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E54C3: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E54C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E54D6; /* 0x120E54CA: jne 0x120e54d6 */
L_120E54CC:
    esi = 0x80004005u; /* 0x120E54CC: mov esi, 0x80004005 */
    goto L_120E55D2; /* 0x120E54D1: jmp 0x120e55d2 */
L_120E54D6:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E54D6: push dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E54DC: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E54E2: push dword ptr [ebp - 0x250] */
    PUSH32(esp, ebx); /* 0x120E54E8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E54E9: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E54EF: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E54F5: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E54FB: push dword ptr [ebp - 0x264] */
    RECOMP_ICALL(eax); /* 0x120E5501: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120E5503: lea ecx, [ebp - 0x270] */
    esi = eax; /* 0x120E5509: mov esi, eax */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E550B: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5510: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5516: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E55F3; /* 0x120E551B: jmp 0x120e55f3 */
L_120E5520:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5520: push dword ptr [ebp - 0x24c] */
    eax = ebp + (-0x270); /* 0x120E5526: lea eax, [ebp - 0x270] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E552C: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E5532: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5538: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E553E: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 1); /* 0x120E5544: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5546: push dword ptr [ebp - 0x248] */
    PUSH32(esp, esi); /* 0x120E554C: push esi */
    PUSH32(esp, eax); /* 0x120E554D: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E554E: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5553: mov esi, eax */
    /* test esi, esi */ /* 0x120E5555: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E55D2; /* 0x120E5557: js 0x120e55d2 */
L_120E5559:
    ecx = ebp + (-0x260); /* 0x120E5559: lea ecx, [ebp - 0x260] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E555F: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x260)); /* 0x120E5564: mov edi, dword ptr [ebp - 0x260] */
    esi = eax; /* 0x120E556A: mov esi, eax */
    /* test esi, esi */ /* 0x120E556C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5578; /* 0x120E556E: je 0x120e5578 */
L_120E5570:
    ebx = MEM32(ebp + (-0x25C)); /* 0x120E5570: mov ebx, dword ptr [ebp - 0x25c] */
    goto L_120E5598; /* 0x120E5576: jmp 0x120e5598 */
L_120E5578:
    PUSH32(esp, 0x12008578u); /* 0x120E5578: push 0x12008578 */
    PUSH32(esp, edi); /* 0x120E557D: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E557E: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5584: mov ebx, eax */
    esi = ebx; /* 0x120E5586: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5588: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E558A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E558C: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5592: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5598:
    /* test esi, esi */ /* 0x120E5598: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E55D2; /* 0x120E559A: js 0x120e55d2 */
L_120E559C:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E559C: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E559F: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E55A5: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E55AA: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E55AD: push ecx */
    ecx = ebp + (-0x28); /* 0x120E55AE: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E55B1: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E55B2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120E55B5: push esi */
    PUSH32(esp, eax); /* 0x120E55B6: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E55B7: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E55BA: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E55BD: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E55C0: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E55C2: push 0 */
    PUSH32(esp, eax); /* 0x120E55C4: push eax */
    ecx = ebp + (-0x244); /* 0x120E55C5: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E55CB: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E55D0: mov esi, eax */
L_120E55D2:
    ecx = ebp + (-0x270); /* 0x120E55D2: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E55D8: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E55DD: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E55E3: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E55E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E55F3; /* 0x120E55EA: je 0x120e55f3 */
L_120E55EC:
    PUSH32(esp, edi); /* 0x120E55EC: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E55ED: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E55F3:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E55F3: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E55F6: pop edi */
    eax = esi; /* 0x120E55F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E55F9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E55FA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E55FC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E55FD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5602: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120E5603: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120E560B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E560Bu);

L_120E560B:
    edi = edi; /* 0x120E560B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E560D: push ebp */
    ebp = esp; /* 0x120E560E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120E5610: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5616: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E561B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E561D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5620: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E5623: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E5629: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120E562C: push ebx */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E562D: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E5633: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x120E5636: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E5637: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E563A: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E563B: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x20); /* 0x120E5641: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E5644: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x258))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x258)) = MEM32(ebp + (-0x258)) & edi; /* 0x120E5646: and dword ptr [ebp - 0x258], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E564C: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x260)) = esi; /* 0x120E5652: mov dword ptr [ebp - 0x260], esi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E5658: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x25C)) = edi; /* 0x120E565E: mov dword ptr [ebp - 0x25c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E5664: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x120E5669: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, 0x00010000u */ /* 0x120E566C: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E56E1; /* 0x120E5672: je 0x120e56e1 */
L_120E5674:
    ecx = 0x121D9AF8u; /* 0x120E5674: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E5679: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E567E: mov esi, eax */
    /* test esi, esi */ /* 0x120E5680: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5787; /* 0x120E5682: js 0x120e5787 */
L_120E5688:
    PUSH32(esp, 0x120085FCu); /* 0x120E5688: push 0x120085fc */
    ecx = 0x121D9AF8u; /* 0x120E568D: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5692: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E5697: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E56A5; /* 0x120E5699: jne 0x120e56a5 */
L_120E569B:
    esi = 0x80004005u; /* 0x120E569B: mov esi, 0x80004005 */
    goto L_120E5787; /* 0x120E56A0: jmp 0x120e5787 */
L_120E56A5:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E56A5: push dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E56AB: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E56B1: push dword ptr [ebp - 0x254] */
    PUSH32(esp, ebx); /* 0x120E56B7: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E56B8: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E56BE: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E56C4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E56C7: push dword ptr [ebp - 0x260] */
    RECOMP_ICALL(eax); /* 0x120E56CD: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E56CF: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E56D5: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E56D7: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E579D; /* 0x120E56DC: jmp 0x120e579d */
L_120E56E1:
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E56E1: push dword ptr [ebp - 0x24c] */
    ecx = ebp + (-0x244); /* 0x120E56E7: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E56ED: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E56F3: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E56F9: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E56FF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E5702: push esi */
    RECOMP_CALL(sub_120EC0B4); /* 0x120E5703: call 0x120ec0b4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5708: mov esi, eax */
    /* test esi, esi */ /* 0x120E570A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5787; /* 0x120E570C: js 0x120e5787 */
L_120E570E:
    ecx = ebp + (-0x25C); /* 0x120E570E: lea ecx, [ebp - 0x25c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E5714: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x25C)); /* 0x120E5719: mov edi, dword ptr [ebp - 0x25c] */
    esi = eax; /* 0x120E571F: mov esi, eax */
    /* test esi, esi */ /* 0x120E5721: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E572D; /* 0x120E5723: je 0x120e572d */
L_120E5725:
    ebx = MEM32(ebp + (-0x258)); /* 0x120E5725: mov ebx, dword ptr [ebp - 0x258] */
    goto L_120E574D; /* 0x120E572B: jmp 0x120e574d */
L_120E572D:
    PUSH32(esp, 0x12008578u); /* 0x120E572D: push 0x12008578 */
    PUSH32(esp, edi); /* 0x120E5732: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E5733: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5739: mov ebx, eax */
    esi = ebx; /* 0x120E573B: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E573D: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E573F: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E5741: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5747: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E574D:
    /* test esi, esi */ /* 0x120E574D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5787; /* 0x120E574F: js 0x120e5787 */
L_120E5751:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E5751: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E5754: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E575A: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E575F: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E5762: push ecx */
    ecx = ebp + (-0x28); /* 0x120E5763: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E5766: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E5767: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x120E576A: push esi */
    PUSH32(esp, eax); /* 0x120E576B: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E576C: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E576F: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5772: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E5775: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E5777: push 0 */
    PUSH32(esp, eax); /* 0x120E5779: push eax */
    ecx = ebp + (-0x244); /* 0x120E577A: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5780: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5785: mov esi, eax */
L_120E5787:
    ecx = ebp + (-0x244); /* 0x120E5787: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E578D: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5792: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E579D; /* 0x120E5794: je 0x120e579d */
L_120E5796:
    PUSH32(esp, edi); /* 0x120E5796: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5797: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E579D:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E579D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E57A0: pop edi */
    eax = esi; /* 0x120E57A1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E57A3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E57A4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E57A6: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E57A7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E57AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120E57AD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120E57B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E57B5u);

L_120E57B5:
    edi = edi; /* 0x120E57B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E57B7: push ebp */
    ebp = esp; /* 0x120E57B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x120E57BA: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E57C0: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E57C5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E57C7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E57CA: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E57CD: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E57D3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E57D6: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E57DC: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E57DF: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E57E5: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E57E8: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x20); /* 0x120E57EE: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x120E57F1: push ebx */
    MEM32(ebp + (-0x260)) = eax; /* 0x120E57F2: mov dword ptr [ebp - 0x260], eax */
    eax = MEM32(ebp + 0x24); /* 0x120E57F8: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x120E57FB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E57FC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E57FF: push edi */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E5800: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x28); /* 0x120E5806: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E5809: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x264))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x264)) = MEM32(ebp + (-0x264)) & edi; /* 0x120E580B: and dword ptr [ebp - 0x264], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E5811: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x26C)) = esi; /* 0x120E5817: mov dword ptr [ebp - 0x26c], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E581D: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x268)) = edi; /* 0x120E5823: mov dword ptr [ebp - 0x268], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E5829: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x1C); /* 0x120E582E: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, 0x00010000u */ /* 0x120E5831: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E58B5; /* 0x120E5837: je 0x120e58b5 */
L_120E5839:
    ecx = 0x121D9AF8u; /* 0x120E5839: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E583E: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5843: mov esi, eax */
    /* test esi, esi */ /* 0x120E5845: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5970; /* 0x120E5847: js 0x120e5970 */
L_120E584D:
    PUSH32(esp, 0x1200861Cu); /* 0x120E584D: push 0x1200861c */
    ecx = 0x121D9AF8u; /* 0x120E5852: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5857: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E585C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E586A; /* 0x120E585E: jne 0x120e586a */
L_120E5860:
    esi = 0x80004005u; /* 0x120E5860: mov esi, 0x80004005 */
    goto L_120E5970; /* 0x120E5865: jmp 0x120e5970 */
L_120E586A:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E586A: push dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E5870: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5876: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E587C: push dword ptr [ebp - 0x260] */
    PUSH32(esp, ebx); /* 0x120E5882: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5883: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5889: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E588F: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5895: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x26C))); /* 0x120E589B: push dword ptr [ebp - 0x26c] */
    RECOMP_ICALL(eax); /* 0x120E58A1: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E58A3: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E58A9: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E58AB: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5986; /* 0x120E58B0: jmp 0x120e5986 */
L_120E58B5:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E58B5: push dword ptr [ebp - 0x258] */
    ecx = ebp + (-0x244); /* 0x120E58BB: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E58C1: push dword ptr [ebp - 0x260] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E58C7: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E58CD: push dword ptr [ebp - 0x254] */
    PUSH32(esp, 0); /* 0x120E58D3: push 0 */
    PUSH32(esp, esi); /* 0x120E58D5: push esi */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E58D6: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E58DB: mov esi, eax */
    /* test esi, esi */ /* 0x120E58DD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5970; /* 0x120E58DF: js 0x120e5970 */
L_120E58E5:
    ecx = ebp + (-0x268); /* 0x120E58E5: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E58EB: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x268)); /* 0x120E58F0: mov edi, dword ptr [ebp - 0x268] */
    esi = eax; /* 0x120E58F6: mov esi, eax */
    /* test esi, esi */ /* 0x120E58F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5904; /* 0x120E58FA: je 0x120e5904 */
L_120E58FC:
    ebx = MEM32(ebp + (-0x264)); /* 0x120E58FC: mov ebx, dword ptr [ebp - 0x264] */
    goto L_120E5924; /* 0x120E5902: jmp 0x120e5924 */
L_120E5904:
    PUSH32(esp, 0x12008610u); /* 0x120E5904: push 0x12008610 */
    PUSH32(esp, edi); /* 0x120E5909: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E590A: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5910: mov ebx, eax */
    esi = ebx; /* 0x120E5912: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5914: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E5916: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E5918: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E591E: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5924:
    /* test esi, esi */ /* 0x120E5924: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5970; /* 0x120E5926: js 0x120e5970 */
L_120E5928:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E5928: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E592B: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E5931: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E5936: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E5939: push ecx */
    ecx = ebp + (-0x28); /* 0x120E593A: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E593D: push ecx */
    PUSH32(esp, 0); /* 0x120E593E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120E5940: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5943: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5949: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, esi); /* 0x120E594F: push esi */
    PUSH32(esp, eax); /* 0x120E5950: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E5951: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E5954: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5957: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E595A: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E595C: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E5962: lea ecx, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E5968: push eax */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5969: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E596E: mov esi, eax */
L_120E5970:
    ecx = ebp + (-0x244); /* 0x120E5970: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5976: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E597B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5986; /* 0x120E597D: je 0x120e5986 */
L_120E597F:
    PUSH32(esp, edi); /* 0x120E597F: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5980: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5986:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5986: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5989: pop edi */
    eax = esi; /* 0x120E598A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E598C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E598D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E598F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5990: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5995: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120E5996: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120E599E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E599Eu);

L_120E599E:
    edi = edi; /* 0x120E599E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E59A0: push ebp */
    ebp = esp; /* 0x120E59A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x120E59A3: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E59A9: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E59AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E59B0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E59B3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E59B6: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E59BC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E59BF: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E59C5: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E59C8: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E59CE: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E59D1: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x20); /* 0x120E59D7: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x120E59DA: push ebx */
    MEM32(ebp + (-0x260)) = eax; /* 0x120E59DB: mov dword ptr [ebp - 0x260], eax */
    eax = MEM32(ebp + 0x24); /* 0x120E59E1: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x120E59E4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E59E5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E59E8: push edi */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E59E9: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x28); /* 0x120E59EF: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E59F2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x264))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x264)) = MEM32(ebp + (-0x264)) & edi; /* 0x120E59F4: and dword ptr [ebp - 0x264], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E59FA: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x26C)) = esi; /* 0x120E5A00: mov dword ptr [ebp - 0x26c], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E5A06: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x268)) = edi; /* 0x120E5A0C: mov dword ptr [ebp - 0x268], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E5A12: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x1C); /* 0x120E5A17: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, 0x00010000u */ /* 0x120E5A1A: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5A9E; /* 0x120E5A20: je 0x120e5a9e */
L_120E5A22:
    ecx = 0x121D9AF8u; /* 0x120E5A22: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E5A27: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5A2C: mov esi, eax */
    /* test esi, esi */ /* 0x120E5A2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5B59; /* 0x120E5A30: js 0x120e5b59 */
L_120E5A36:
    PUSH32(esp, 0x12008638u); /* 0x120E5A36: push 0x12008638 */
    ecx = 0x121D9AF8u; /* 0x120E5A3B: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5A40: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E5A45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E5A53; /* 0x120E5A47: jne 0x120e5a53 */
L_120E5A49:
    esi = 0x80004005u; /* 0x120E5A49: mov esi, 0x80004005 */
    goto L_120E5B59; /* 0x120E5A4E: jmp 0x120e5b59 */
L_120E5A53:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5A53: push dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E5A59: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5A5F: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5A65: push dword ptr [ebp - 0x260] */
    PUSH32(esp, ebx); /* 0x120E5A6B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5A6C: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5A72: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5A78: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5A7E: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x26C))); /* 0x120E5A84: push dword ptr [ebp - 0x26c] */
    RECOMP_ICALL(eax); /* 0x120E5A8A: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5A8C: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E5A92: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5A94: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5B6F; /* 0x120E5A99: jmp 0x120e5b6f */
L_120E5A9E:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5A9E: push dword ptr [ebp - 0x258] */
    ecx = ebp + (-0x244); /* 0x120E5AA4: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5AAA: push dword ptr [ebp - 0x260] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5AB0: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5AB6: push dword ptr [ebp - 0x254] */
    PUSH32(esp, 1); /* 0x120E5ABC: push 1 */
    PUSH32(esp, esi); /* 0x120E5ABE: push esi */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E5ABF: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5AC4: mov esi, eax */
    /* test esi, esi */ /* 0x120E5AC6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5B59; /* 0x120E5AC8: js 0x120e5b59 */
L_120E5ACE:
    ecx = ebp + (-0x268); /* 0x120E5ACE: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E5AD4: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x268)); /* 0x120E5AD9: mov edi, dword ptr [ebp - 0x268] */
    esi = eax; /* 0x120E5ADF: mov esi, eax */
    /* test esi, esi */ /* 0x120E5AE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5AED; /* 0x120E5AE3: je 0x120e5aed */
L_120E5AE5:
    ebx = MEM32(ebp + (-0x264)); /* 0x120E5AE5: mov ebx, dword ptr [ebp - 0x264] */
    goto L_120E5B0D; /* 0x120E5AEB: jmp 0x120e5b0d */
L_120E5AED:
    PUSH32(esp, 0x12008610u); /* 0x120E5AED: push 0x12008610 */
    PUSH32(esp, edi); /* 0x120E5AF2: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E5AF3: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5AF9: mov ebx, eax */
    esi = ebx; /* 0x120E5AFB: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5AFD: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E5AFF: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E5B01: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5B07: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5B0D:
    /* test esi, esi */ /* 0x120E5B0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5B59; /* 0x120E5B0F: js 0x120e5b59 */
L_120E5B11:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E5B11: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E5B14: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E5B1A: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E5B1F: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E5B22: push ecx */
    ecx = ebp + (-0x28); /* 0x120E5B23: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E5B26: push ecx */
    PUSH32(esp, 0); /* 0x120E5B27: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120E5B29: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5B2C: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5B32: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, esi); /* 0x120E5B38: push esi */
    PUSH32(esp, eax); /* 0x120E5B39: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E5B3A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E5B3D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5B40: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E5B43: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5B45: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E5B4B: lea ecx, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E5B51: push eax */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5B52: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5B57: mov esi, eax */
L_120E5B59:
    ecx = ebp + (-0x244); /* 0x120E5B59: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5B5F: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5B64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5B6F; /* 0x120E5B66: je 0x120e5b6f */
L_120E5B68:
    PUSH32(esp, edi); /* 0x120E5B68: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5B69: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5B6F:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5B6F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5B72: pop edi */
    eax = esi; /* 0x120E5B73: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E5B75: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E5B76: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5B78: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5B79: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5B7E: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120E5B7F: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120E5B87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E5B87u);

L_120E5B87:
    edi = edi; /* 0x120E5B87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E5B89: push ebp */
    ebp = esp; /* 0x120E5B8A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x27Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x27Cu; /* 0x120E5B8C: sub esp, 0x27c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5B92: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E5B97: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E5B99: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E5B9C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E5B9F: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5BA5: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E5BA8: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E5BAE: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x264)) = eax; /* 0x120E5BB1: mov dword ptr [ebp - 0x264], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E5BB7: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E5BBA: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E5BC0: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E5BC3: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x24); /* 0x120E5BC9: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120E5BCC: push ebx */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E5BCD: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x28); /* 0x120E5BD3: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, esi); /* 0x120E5BD6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E5BD7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E5BDA: push edi */
    MEM32(ebp + (-0x260)) = eax; /* 0x120E5BDB: mov dword ptr [ebp - 0x260], eax */
    eax = MEM32(ebp + 0x2C); /* 0x120E5BE1: mov eax, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E5BE4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x268))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x268)) = MEM32(ebp + (-0x268)) & edi; /* 0x120E5BE6: and dword ptr [ebp - 0x268], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E5BEC: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x270)) = esi; /* 0x120E5BF2: mov dword ptr [ebp - 0x270], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E5BF8: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x26C)) = edi; /* 0x120E5BFE: mov dword ptr [ebp - 0x26c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E5C04: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x27C); /* 0x120E5C09: lea ecx, [ebp - 0x27c] */
    RECOMP_CALL(sub_121C1804); /* 0x120E5C0F: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x20); /* 0x120E5C14: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, 0x00010000u */ /* 0x120E5C17: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5CB0; /* 0x120E5C1D: je 0x120e5cb0 */
L_120E5C23:
    ecx = 0x121D9AF8u; /* 0x120E5C23: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E5C28: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5C2D: mov esi, eax */
    /* test esi, esi */ /* 0x120E5C2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5D78; /* 0x120E5C31: js 0x120e5d78 */
L_120E5C37:
    PUSH32(esp, 0x12008654u); /* 0x120E5C37: push 0x12008654 */
    ecx = 0x121D9AF8u; /* 0x120E5C3C: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5C41: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E5C46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E5C54; /* 0x120E5C48: jne 0x120e5c54 */
L_120E5C4A:
    esi = 0x80004005u; /* 0x120E5C4A: mov esi, 0x80004005 */
    goto L_120E5D78; /* 0x120E5C4F: jmp 0x120e5d78 */
L_120E5C54:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5C54: push dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E5C5A: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5C60: push dword ptr [ebp - 0x260] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5C66: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, ebx); /* 0x120E5C6C: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5C6D: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5C73: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E5C79: push dword ptr [ebp - 0x264] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5C7F: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5C85: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x270))); /* 0x120E5C8B: push dword ptr [ebp - 0x270] */
    RECOMP_ICALL(eax); /* 0x120E5C91: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x27C); /* 0x120E5C93: lea ecx, [ebp - 0x27c] */
    esi = eax; /* 0x120E5C99: mov esi, eax */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E5C9B: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5CA0: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5CA6: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5D99; /* 0x120E5CAB: jmp 0x120e5d99 */
L_120E5CB0:
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5CB0: push dword ptr [ebp - 0x260] */
    eax = ebp + (-0x27C); /* 0x120E5CB6: lea eax, [ebp - 0x27c] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5CBC: push dword ptr [ebp - 0x25c] */
    ecx = ebp + (-0x244); /* 0x120E5CC2: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E5CC8: push dword ptr [ebp - 0x264] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5CCE: push dword ptr [ebp - 0x254] */
    PUSH32(esp, 0); /* 0x120E5CD4: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5CD6: push dword ptr [ebp - 0x258] */
    PUSH32(esp, esi); /* 0x120E5CDC: push esi */
    PUSH32(esp, eax); /* 0x120E5CDD: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E5CDE: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5CE3: mov esi, eax */
    /* test esi, esi */ /* 0x120E5CE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5D78; /* 0x120E5CE7: js 0x120e5d78 */
L_120E5CED:
    ecx = ebp + (-0x26C); /* 0x120E5CED: lea ecx, [ebp - 0x26c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E5CF3: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x26C)); /* 0x120E5CF8: mov edi, dword ptr [ebp - 0x26c] */
    esi = eax; /* 0x120E5CFE: mov esi, eax */
    /* test esi, esi */ /* 0x120E5D00: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5D0C; /* 0x120E5D02: je 0x120e5d0c */
L_120E5D04:
    ebx = MEM32(ebp + (-0x268)); /* 0x120E5D04: mov ebx, dword ptr [ebp - 0x268] */
    goto L_120E5D2C; /* 0x120E5D0A: jmp 0x120e5d2c */
L_120E5D0C:
    PUSH32(esp, 0x12008610u); /* 0x120E5D0C: push 0x12008610 */
    PUSH32(esp, edi); /* 0x120E5D11: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E5D12: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5D18: mov ebx, eax */
    esi = ebx; /* 0x120E5D1A: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5D1C: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E5D1E: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E5D20: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5D26: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5D2C:
    /* test esi, esi */ /* 0x120E5D2C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5D78; /* 0x120E5D2E: js 0x120e5d78 */
L_120E5D30:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E5D30: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E5D33: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E5D39: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E5D3E: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E5D41: push ecx */
    ecx = ebp + (-0x28); /* 0x120E5D42: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E5D45: push ecx */
    PUSH32(esp, 0); /* 0x120E5D46: push 0 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120E5D48: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5D4B: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5D51: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, esi); /* 0x120E5D57: push esi */
    PUSH32(esp, eax); /* 0x120E5D58: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E5D59: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E5D5C: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5D5F: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E5D62: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5D64: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E5D6A: lea ecx, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E5D70: push eax */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5D71: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5D76: mov esi, eax */
L_120E5D78:
    ecx = ebp + (-0x27C); /* 0x120E5D78: lea ecx, [ebp - 0x27c] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E5D7E: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5D83: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5D89: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5D8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5D99; /* 0x120E5D90: je 0x120e5d99 */
L_120E5D92:
    PUSH32(esp, edi); /* 0x120E5D92: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5D93: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5D99:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5D99: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5D9C: pop edi */
    eax = esi; /* 0x120E5D9D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E5D9F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E5DA0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5DA2: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5DA3: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5DA8: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120E5DA9: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120E5DB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E5DB1u);

L_120E5DB1:
    edi = edi; /* 0x120E5DB1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E5DB3: push ebp */
    ebp = esp; /* 0x120E5DB4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x27Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x27Cu; /* 0x120E5DB6: sub esp, 0x27c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5DBC: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E5DC1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E5DC3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E5DC6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E5DC9: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5DCF: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E5DD2: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E5DD8: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x264)) = eax; /* 0x120E5DDB: mov dword ptr [ebp - 0x264], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E5DE1: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E5DE4: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E5DEA: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E5DED: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x24); /* 0x120E5DF3: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120E5DF6: push ebx */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E5DF7: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x28); /* 0x120E5DFD: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, esi); /* 0x120E5E00: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E5E01: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E5E04: push edi */
    MEM32(ebp + (-0x260)) = eax; /* 0x120E5E05: mov dword ptr [ebp - 0x260], eax */
    eax = MEM32(ebp + 0x2C); /* 0x120E5E0B: mov eax, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E5E0E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x268))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x268)) = MEM32(ebp + (-0x268)) & edi; /* 0x120E5E10: and dword ptr [ebp - 0x268], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E5E16: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x270)) = esi; /* 0x120E5E1C: mov dword ptr [ebp - 0x270], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E5E22: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x26C)) = edi; /* 0x120E5E28: mov dword ptr [ebp - 0x26c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E5E2E: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x27C); /* 0x120E5E33: lea ecx, [ebp - 0x27c] */
    RECOMP_CALL(sub_121C1804); /* 0x120E5E39: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x20); /* 0x120E5E3E: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, 0x00010000u */ /* 0x120E5E41: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5EDA; /* 0x120E5E47: je 0x120e5eda */
L_120E5E4D:
    ecx = 0x121D9AF8u; /* 0x120E5E4D: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E5E52: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5E57: mov esi, eax */
    /* test esi, esi */ /* 0x120E5E59: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5FA2; /* 0x120E5E5B: js 0x120e5fa2 */
L_120E5E61:
    PUSH32(esp, 0x12008674u); /* 0x120E5E61: push 0x12008674 */
    ecx = 0x121D9AF8u; /* 0x120E5E66: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E5E6B: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E5E70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E5E7E; /* 0x120E5E72: jne 0x120e5e7e */
L_120E5E74:
    esi = 0x80004005u; /* 0x120E5E74: mov esi, 0x80004005 */
    goto L_120E5FA2; /* 0x120E5E79: jmp 0x120e5fa2 */
L_120E5E7E:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5E7E: push dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E5E84: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5E8A: push dword ptr [ebp - 0x260] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5E90: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, ebx); /* 0x120E5E96: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5E97: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5E9D: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E5EA3: push dword ptr [ebp - 0x264] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5EA9: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5EAF: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x270))); /* 0x120E5EB5: push dword ptr [ebp - 0x270] */
    RECOMP_ICALL(eax); /* 0x120E5EBB: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x27C); /* 0x120E5EBD: lea ecx, [ebp - 0x27c] */
    esi = eax; /* 0x120E5EC3: mov esi, eax */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E5EC5: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5ECA: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5ED0: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E5FC3; /* 0x120E5ED5: jmp 0x120e5fc3 */
L_120E5EDA:
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E5EDA: push dword ptr [ebp - 0x260] */
    eax = ebp + (-0x27C); /* 0x120E5EE0: lea eax, [ebp - 0x27c] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E5EE6: push dword ptr [ebp - 0x25c] */
    ecx = ebp + (-0x244); /* 0x120E5EEC: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x264))); /* 0x120E5EF2: push dword ptr [ebp - 0x264] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E5EF8: push dword ptr [ebp - 0x254] */
    PUSH32(esp, 1); /* 0x120E5EFE: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E5F00: push dword ptr [ebp - 0x258] */
    PUSH32(esp, esi); /* 0x120E5F06: push esi */
    PUSH32(esp, eax); /* 0x120E5F07: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E5F08: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5F0D: mov esi, eax */
    /* test esi, esi */ /* 0x120E5F0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5FA2; /* 0x120E5F11: js 0x120e5fa2 */
L_120E5F17:
    ecx = ebp + (-0x26C); /* 0x120E5F17: lea ecx, [ebp - 0x26c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E5F1D: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x26C)); /* 0x120E5F22: mov edi, dword ptr [ebp - 0x26c] */
    esi = eax; /* 0x120E5F28: mov esi, eax */
    /* test esi, esi */ /* 0x120E5F2A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5F36; /* 0x120E5F2C: je 0x120e5f36 */
L_120E5F2E:
    ebx = MEM32(ebp + (-0x268)); /* 0x120E5F2E: mov ebx, dword ptr [ebp - 0x268] */
    goto L_120E5F56; /* 0x120E5F34: jmp 0x120e5f56 */
L_120E5F36:
    PUSH32(esp, 0x12008610u); /* 0x120E5F36: push 0x12008610 */
    PUSH32(esp, edi); /* 0x120E5F3B: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E5F3C: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E5F42: mov ebx, eax */
    esi = ebx; /* 0x120E5F44: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E5F46: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E5F48: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E5F4A: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E5F50: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E5F56:
    /* test esi, esi */ /* 0x120E5F56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E5FA2; /* 0x120E5F58: js 0x120e5fa2 */
L_120E5F5A:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E5F5A: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E5F5D: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E5F63: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E5F68: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E5F6B: push ecx */
    ecx = ebp + (-0x28); /* 0x120E5F6C: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E5F6F: push ecx */
    PUSH32(esp, 0); /* 0x120E5F70: push 0 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120E5F72: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E5F75: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E5F7B: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, esi); /* 0x120E5F81: push esi */
    PUSH32(esp, eax); /* 0x120E5F82: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E5F83: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E5F86: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E5F89: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E5F8C: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E5F8E: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E5F94: lea ecx, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E5F9A: push eax */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E5F9B: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E5FA0: mov esi, eax */
L_120E5FA2:
    ecx = ebp + (-0x27C); /* 0x120E5FA2: lea ecx, [ebp - 0x27c] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E5FA8: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E5FAD: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E5FB3: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E5FB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E5FC3; /* 0x120E5FBA: je 0x120e5fc3 */
L_120E5FBC:
    PUSH32(esp, edi); /* 0x120E5FBC: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E5FBD: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E5FC3:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E5FC3: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E5FC6: pop edi */
    eax = esi; /* 0x120E5FC7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E5FC9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E5FCA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E5FCC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E5FCD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E5FD2: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120E5FD3: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120E5FDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E5FDBu);

L_120E5FDB:
    edi = edi; /* 0x120E5FDB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E5FDD: push ebp */
    ebp = esp; /* 0x120E5FDE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x120E5FE0: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E5FE6: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E5FEB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E5FED: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E5FF0: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E5FF3: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E5FF9: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E5FFC: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E6002: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120E6005: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E600B: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120E600E: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x24); /* 0x120E6014: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120E6017: push ebx */
    MEM32(ebp + (-0x260)) = eax; /* 0x120E6018: mov dword ptr [ebp - 0x260], eax */
    eax = MEM32(ebp + 0x28); /* 0x120E601E: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, esi); /* 0x120E6021: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E6022: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120E6025: push edi */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E6026: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x2C); /* 0x120E602C: mov eax, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E602F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x264))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x264)) = MEM32(ebp + (-0x264)) & edi; /* 0x120E6031: and dword ptr [ebp - 0x264], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E6037: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x26C)) = esi; /* 0x120E603D: mov dword ptr [ebp - 0x26c], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E6043: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x268)) = edi; /* 0x120E6049: mov dword ptr [ebp - 0x268], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E604F: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x20); /* 0x120E6054: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, 0x00010000u */ /* 0x120E6057: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E60DE; /* 0x120E605D: je 0x120e60de */
L_120E605F:
    ecx = 0x121D9AF8u; /* 0x120E605F: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120E6064: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6069: mov esi, eax */
    /* test esi, esi */ /* 0x120E606B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E619A; /* 0x120E606D: js 0x120e619a */
L_120E6073:
    PUSH32(esp, 0x12008694u); /* 0x120E6073: push 0x12008694 */
    ecx = 0x121D9AF8u; /* 0x120E6078: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120E607D: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E6082: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E6090; /* 0x120E6084: jne 0x120e6090 */
L_120E6086:
    esi = 0x80004005u; /* 0x120E6086: mov esi, 0x80004005 */
    goto L_120E619A; /* 0x120E608B: jmp 0x120e619a */
L_120E6090:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E6090: push dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120E6096: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E609C: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E60A2: push dword ptr [ebp - 0x260] */
    PUSH32(esp, ebx); /* 0x120E60A8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E60A9: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E60AF: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E60B5: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E60BB: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E60C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x26C))); /* 0x120E60C4: push dword ptr [ebp - 0x26c] */
    RECOMP_ICALL(eax); /* 0x120E60CA: call eax */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E60CC: lea ecx, [ebp - 0x244] */
    esi = eax; /* 0x120E60D2: mov esi, eax */
    RECOMP_CALL(sub_120EBD79); /* 0x120E60D4: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    goto L_120E61B0; /* 0x120E60D9: jmp 0x120e61b0 */
L_120E60DE:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E60DE: push dword ptr [ebp - 0x258] */
    ecx = ebp + (-0x244); /* 0x120E60E4: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x120E60EA: push dword ptr [ebp - 0x260] */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E60F0: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E60F6: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E60FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120E60FF: push esi */
    RECOMP_CALL(sub_120EC0B4); /* 0x120E6100: call 0x120ec0b4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6105: mov esi, eax */
    /* test esi, esi */ /* 0x120E6107: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E619A; /* 0x120E6109: js 0x120e619a */
L_120E610F:
    ecx = ebp + (-0x268); /* 0x120E610F: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E6115: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x268)); /* 0x120E611A: mov edi, dword ptr [ebp - 0x268] */
    esi = eax; /* 0x120E6120: mov esi, eax */
    /* test esi, esi */ /* 0x120E6122: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E612E; /* 0x120E6124: je 0x120e612e */
L_120E6126:
    ebx = MEM32(ebp + (-0x264)); /* 0x120E6126: mov ebx, dword ptr [ebp - 0x264] */
    goto L_120E614E; /* 0x120E612C: jmp 0x120e614e */
L_120E612E:
    PUSH32(esp, 0x12008610u); /* 0x120E612E: push 0x12008610 */
    PUSH32(esp, edi); /* 0x120E6133: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E6134: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E613A: mov ebx, eax */
    esi = ebx; /* 0x120E613C: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E613E: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E6140: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E6142: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E6148: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E614E:
    /* test esi, esi */ /* 0x120E614E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E619A; /* 0x120E6150: js 0x120e619a */
L_120E6152:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E6152: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E6155: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E615B: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E6160: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E6163: push ecx */
    ecx = ebp + (-0x28); /* 0x120E6164: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E6167: push ecx */
    PUSH32(esp, 0); /* 0x120E6168: push 0 */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120E616A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120E616D: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120E6173: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, esi); /* 0x120E6179: push esi */
    PUSH32(esp, eax); /* 0x120E617A: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E617B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E617E: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E6181: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E6184: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E6186: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120E618C: lea ecx, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x120E6192: push eax */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E6193: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6198: mov esi, eax */
L_120E619A:
    ecx = ebp + (-0x244); /* 0x120E619A: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E61A0: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E61A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E61B0; /* 0x120E61A7: je 0x120e61b0 */
L_120E61A9:
    PUSH32(esp, edi); /* 0x120E61A9: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E61AA: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E61B0:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E61B0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E61B3: pop edi */
    eax = esi; /* 0x120E61B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E61B6: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E61B7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E61B9: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E61BA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E61BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120E61C0: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120E61C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E61C8u);

L_120E61C8:
    edi = edi; /* 0x120E61C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E61CA: push ebp */
    ebp = esp; /* 0x120E61CB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E61CD: push esi */
    PUSH32(esp, edi); /* 0x120E61CE: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120E61CF: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E61D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120E61D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E61DA; /* 0x120E61D6: je 0x120e61da */
L_120E61D8:
    MEM32(edi) = esi; /* 0x120E61D8: mov dword ptr [edi], esi */
L_120E61DA:
    eax = MEM32(ebp + 0x8); /* 0x120E61DA: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x120E61DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E61E8; /* 0x120E61DF: jne 0x120e61e8 */
L_120E61E1:
    esi = 0x8876086Cu; /* 0x120E61E1: mov esi, 0x8876086c */
    goto L_120E625D; /* 0x120E61E6: jmp 0x120e625d */
L_120E61E8:
    /* test edi, edi */ /* 0x120E61E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E61E1; /* 0x120E61EA: je 0x120e61e1 */
L_120E61EC:
    eax = MEM32(eax); /* 0x120E61EC: mov eax, dword ptr [eax] */
    ecx = 0xFFFF0000u; /* 0x120E61EE: mov ecx, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x120E61F3: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFE0000u */ /* 0x120E61F5: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6204; /* 0x120E61FA: je 0x120e6204 */
L_120E61FC:
    /* cmp eax, ecx */ /* 0x120E61FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6204; /* 0x120E61FE: je 0x120e6204 */
L_120E6200:
    MEM32(edi) = esi; /* 0x120E6200: mov dword ptr [edi], esi */
    goto L_120E625D; /* 0x120E6202: jmp 0x120e625d */
L_120E6204:
    PUSH32(esp, ebx); /* 0x120E6204: push ebx */
    PUSH32(esp, 0x120014BCu); /* 0x120E6205: push 0x120014bc */
    PUSH32(esp, 0x24u); /* 0x120E620A: push 0x24 */
    RECOMP_CALL(sub_12018970); /* 0x120E620C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6211: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6212: pop ecx */
    /* test eax, eax */ /* 0x120E6213: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6222; /* 0x120E6215: je 0x120e6222 */
L_120E6217:
    ecx = eax; /* 0x120E6217: mov ecx, eax */
    RECOMP_CALL(sub_120EAA20); /* 0x120E6219: call 0x120eaa20 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E621E: mov ebx, eax */
    goto L_120E6224; /* 0x120E6220: jmp 0x120e6224 */
L_120E6222:
    ebx = esi; /* 0x120E6222: mov ebx, esi */
L_120E6224:
    /* test ebx, ebx */ /* 0x120E6224: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E622F; /* 0x120E6226: jne 0x120e622f */
L_120E6228:
    esi = 0x8007000Eu; /* 0x120E6228: mov esi, 0x8007000e */
    goto L_120E625C; /* 0x120E622D: jmp 0x120e625c */
L_120E622F:
    PUSH32(esp, esi); /* 0x120E622F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6230: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x120E6233: mov ecx, ebx */
    RECOMP_CALL(sub_120EAA49); /* 0x120E6235: call 0x120eaa49 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x120E623A: mov dword ptr [ebp + 8], eax */
    ecx = ebx; /* 0x120E623D: mov ecx, ebx */
    /* test eax, eax */ /* 0x120E623F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E6254; /* 0x120E6241: jns 0x120e6254 */
L_120E6243:
    RECOMP_CALL(sub_120E7803); /* 0x120E6243: call 0x120e7803 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E6248: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120E6249: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x120E624E: mov esi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x120E6251: pop ecx */
    goto L_120E625C; /* 0x120E6252: jmp 0x120e625c */
L_120E6254:
    PUSH32(esp, esi); /* 0x120E6254: push esi */
    RECOMP_CALL(sub_120E76E8); /* 0x120E6255: call 0x120e76e8 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x120E625A: mov dword ptr [edi], ebx */
L_120E625C:
    ebx = POP32_VAL(esp); /* 0x120E625C: pop ebx */
L_120E625D:
    edi = POP32_VAL(esp); /* 0x120E625D: pop edi */
    eax = esi; /* 0x120E625E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E6260: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E6261: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E6262: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E626A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E626Au);

L_120E626A:
    edi = edi; /* 0x120E626A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E626C: push ebp */
    ebp = esp; /* 0x120E626D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E626F: push esi */
    PUSH32(esp, edi); /* 0x120E6270: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E6271: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E6274: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120E6276: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E627C; /* 0x120E6278: je 0x120e627c */
L_120E627A:
    MEM32(edi) = esi; /* 0x120E627A: mov dword ptr [edi], esi */
L_120E627C:
    eax = MEM32(ebp + 0x8); /* 0x120E627C: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x120E627F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E628D; /* 0x120E6281: jne 0x120e628d */
L_120E6283:
    esi = 0x8876086Cu; /* 0x120E6283: mov esi, 0x8876086c */
    goto L_120E630D; /* 0x120E6288: jmp 0x120e630d */
L_120E628D:
    /* test edi, edi */ /* 0x120E628D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6283; /* 0x120E628F: je 0x120e6283 */
L_120E6291:
    eax = MEM32(eax); /* 0x120E6291: mov eax, dword ptr [eax] */
    ecx = 0xFFFF0000u; /* 0x120E6293: mov ecx, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x120E6298: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFE0000u */ /* 0x120E629A: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E62A9; /* 0x120E629F: je 0x120e62a9 */
L_120E62A1:
    /* cmp eax, ecx */ /* 0x120E62A1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E62A9; /* 0x120E62A3: je 0x120e62a9 */
L_120E62A5:
    MEM32(edi) = esi; /* 0x120E62A5: mov dword ptr [edi], esi */
    goto L_120E630D; /* 0x120E62A7: jmp 0x120e630d */
L_120E62A9:
    PUSH32(esp, ebx); /* 0x120E62A9: push ebx */
    PUSH32(esp, 0x120014BCu); /* 0x120E62AA: push 0x120014bc */
    PUSH32(esp, 0x24u); /* 0x120E62AF: push 0x24 */
    RECOMP_CALL(sub_12018970); /* 0x120E62B1: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E62B6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E62B7: pop ecx */
    /* test eax, eax */ /* 0x120E62B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E62C7; /* 0x120E62BA: je 0x120e62c7 */
L_120E62BC:
    ecx = eax; /* 0x120E62BC: mov ecx, eax */
    RECOMP_CALL(sub_120EAA20); /* 0x120E62BE: call 0x120eaa20 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E62C3: mov ebx, eax */
    goto L_120E62C9; /* 0x120E62C5: jmp 0x120e62c9 */
L_120E62C7:
    ebx = esi; /* 0x120E62C7: mov ebx, esi */
L_120E62C9:
    /* test ebx, ebx */ /* 0x120E62C9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E62D4; /* 0x120E62CB: jne 0x120e62d4 */
L_120E62CD:
    esi = 0x8007000Eu; /* 0x120E62CD: mov esi, 0x8007000e */
    goto L_120E630C; /* 0x120E62D2: jmp 0x120e630c */
L_120E62D4:
    PUSH32(esp, esi); /* 0x120E62D4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E62D5: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x120E62D8: mov ecx, ebx */
    RECOMP_CALL(sub_120EAA49); /* 0x120E62DA: call 0x120eaa49 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x120E62DF: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x120E62E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E62F9; /* 0x120E62E4: jns 0x120e62f9 */
L_120E62E6:
    ecx = ebx; /* 0x120E62E6: mov ecx, ebx */
    RECOMP_CALL(sub_120E7803); /* 0x120E62E8: call 0x120e7803 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E62ED: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120E62EE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x120E62F3: mov esi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x120E62F6: pop ecx */
    goto L_120E630C; /* 0x120E62F7: jmp 0x120e630c */
L_120E62F9:
    ecx = MEM32(ebp + 0xC); /* 0x120E62F9: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00020000u);
    ecx = ecx & 0x00020000u; /* 0x120E62FC: and ecx, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120E6302: push ecx */
    ecx = ebx; /* 0x120E6303: mov ecx, ebx */
    RECOMP_CALL(sub_120E76E8); /* 0x120E6305: call 0x120e76e8 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x120E630A: mov dword ptr [edi], ebx */
L_120E630C:
    ebx = POP32_VAL(esp); /* 0x120E630C: pop ebx */
L_120E630D:
    edi = POP32_VAL(esp); /* 0x120E630D: pop edi */
    eax = esi; /* 0x120E630E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E6310: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E6311: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E6312: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E631A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E631Au);

L_120E631A:
    edi = edi; /* 0x120E631A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E631C: push ebp */
    ebp = esp; /* 0x120E631D: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120E631F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E632C; /* 0x120E6323: jne 0x120e632c */
L_120E6325:
    eax = 0x8876086Cu; /* 0x120E6325: mov eax, 0x8876086c */
    goto L_120E6390; /* 0x120E632A: jmp 0x120e6390 */
L_120E632C:
    PUSH32(esp, edi); /* 0x120E632C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120E632D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x120E6330: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E633B; /* 0x120E6332: jne 0x120e633b */
L_120E6334:
    eax = 0x8876086Cu; /* 0x120E6334: mov eax, 0x8876086c */
    goto L_120E638F; /* 0x120E6339: jmp 0x120e638f */
L_120E633B:
    PUSH32(esp, esi); /* 0x120E633B: push esi */
    PUSH32(esp, 0x120014BCu); /* 0x120E633C: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x120E6341: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x120E6343: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6348: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6349: pop ecx */
    /* test eax, eax */ /* 0x120E634A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6359; /* 0x120E634C: je 0x120e6359 */
L_120E634E:
    ecx = eax; /* 0x120E634E: mov ecx, eax */
    RECOMP_CALL(sub_120EBBE5); /* 0x120E6350: call 0x120ebbe5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6355: mov esi, eax */
    goto L_120E635B; /* 0x120E6357: jmp 0x120e635b */
L_120E6359:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E6359: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E635B:
    /* test esi, esi */ /* 0x120E635B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E6366; /* 0x120E635D: jne 0x120e6366 */
L_120E635F:
    eax = 0x8007000Eu; /* 0x120E635F: mov eax, 0x8007000e */
    goto L_120E638E; /* 0x120E6364: jmp 0x120e638e */
L_120E6366:
    PUSH32(esp, ebx); /* 0x120E6366: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6367: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x120E636A: mov ecx, esi */
    RECOMP_CALL(sub_120EBAC6); /* 0x120E636C: call 0x120ebac6 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E6371: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120E6373: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120E6389; /* 0x120E6375: jns 0x120e6389 */
L_120E6377:
    ecx = esi; /* 0x120E6377: mov ecx, esi */
    RECOMP_CALL(sub_120EB769); /* 0x120E6379: call 0x120eb769 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120E637E: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120E637F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6384: pop ecx */
    eax = ebx; /* 0x120E6385: mov eax, ebx */
    goto L_120E638D; /* 0x120E6387: jmp 0x120e638d */
L_120E6389:
    MEM32(edi) = esi; /* 0x120E6389: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E638B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E638D:
    ebx = POP32_VAL(esp); /* 0x120E638D: pop ebx */
L_120E638E:
    esi = POP32_VAL(esp); /* 0x120E638E: pop esi */
L_120E638F:
    edi = POP32_VAL(esp); /* 0x120E638F: pop edi */
L_120E6390:
    ebp = POP32_VAL(esp); /* 0x120E6390: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E6391: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E6399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6399u);

L_120E6399:
    edi = edi; /* 0x120E6399: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E639B: push ebp */
    ebp = esp; /* 0x120E639C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x258u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x258u; /* 0x120E639E: sub esp, 0x258 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E63A4: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E63A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E63AB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E63AE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E63B1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E63B2: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E63B5: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E63BB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E63BE: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E63BF: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E63C2: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E63C3: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E63C9: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E63CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & edi; /* 0x120E63CE: and dword ptr [ebp - 0x248], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E63D4: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E63DA: mov dword ptr [ebp - 0x258], eax */
    MEM32(ebp + (-0x24C)) = edi; /* 0x120E63E0: mov dword ptr [ebp - 0x24c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E63E6: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E63EB: lea ecx, [ebp - 0x244] */
    /* test ebx, ebx */ /* 0x120E63F1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E6404; /* 0x120E63F3: jne 0x120e6404 */
L_120E63F5:
    RECOMP_CALL(sub_120EBD79); /* 0x120E63F5: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    eax = 0x80070057u; /* 0x120E63FA: mov eax, 0x80070057 */
    goto L_120E64B7; /* 0x120E63FF: jmp 0x120e64b7 */
L_120E6404:
    /* test esi, esi */ /* 0x120E6404: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E63F5; /* 0x120E6406: je 0x120e63f5 */
L_120E6408:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E6408: push dword ptr [ebp - 0x258] */
    PUSH32(esp, esi); /* 0x120E640E: push esi */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E640F: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E6415: push dword ptr [ebp - 0x250] */
    PUSH32(esp, 0); /* 0x120E641B: push 0 */
    PUSH32(esp, ebx); /* 0x120E641D: push ebx */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E641E: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6423: mov esi, eax */
    /* test esi, esi */ /* 0x120E6425: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E649F; /* 0x120E6427: js 0x120e649f */
L_120E6429:
    ecx = ebp + (-0x24C); /* 0x120E6429: lea ecx, [ebp - 0x24c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E642F: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24C)); /* 0x120E6434: mov edi, dword ptr [ebp - 0x24c] */
    esi = eax; /* 0x120E643A: mov esi, eax */
    /* test esi, esi */ /* 0x120E643C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6448; /* 0x120E643E: je 0x120e6448 */
L_120E6440:
    ebx = MEM32(ebp + (-0x248)); /* 0x120E6440: mov ebx, dword ptr [ebp - 0x248] */
    goto L_120E6468; /* 0x120E6446: jmp 0x120e6468 */
L_120E6448:
    PUSH32(esp, 0x120086A8u); /* 0x120E6448: push 0x120086a8 */
    PUSH32(esp, edi); /* 0x120E644D: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E644E: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E6454: mov ebx, eax */
    esi = ebx; /* 0x120E6456: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E6458: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E645A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E645C: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E6462: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E6468:
    /* test esi, esi */ /* 0x120E6468: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E649F; /* 0x120E646A: js 0x120e649f */
L_120E646C:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E646C: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E646F: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E6475: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E647A: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E647D: push ecx */
    ecx = ebp + (-0x28); /* 0x120E647E: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E6481: push ecx */
    PUSH32(esp, esi); /* 0x120E6482: push esi */
    PUSH32(esp, eax); /* 0x120E6483: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E6484: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E6487: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E648A: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E648D: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E648F: push 0 */
    PUSH32(esp, eax); /* 0x120E6491: push eax */
    ecx = ebp + (-0x244); /* 0x120E6492: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E6498: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E649D: mov esi, eax */
L_120E649F:
    ecx = ebp + (-0x244); /* 0x120E649F: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E64A5: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E64AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E64B5; /* 0x120E64AC: je 0x120e64b5 */
L_120E64AE:
    PUSH32(esp, edi); /* 0x120E64AE: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E64AF: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E64B5:
    eax = esi; /* 0x120E64B5: mov eax, esi */
L_120E64B7:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E64B7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E64BA: pop edi */
    esi = POP32_VAL(esp); /* 0x120E64BB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E64BC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E64BE: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E64BF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E64C4: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E64C5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E64CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E64CDu);

L_120E64CD:
    edi = edi; /* 0x120E64CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E64CF: push ebp */
    ebp = esp; /* 0x120E64D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x258u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x258u; /* 0x120E64D2: sub esp, 0x258 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E64D8: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E64DD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E64DF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x120E64E2: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E64E5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E64E6: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E64E9: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E64EF: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E64F2: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E64F3: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E64F6: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E64F7: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E64FD: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E6500: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & edi; /* 0x120E6502: and dword ptr [ebp - 0x248], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E6508: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E650E: mov dword ptr [ebp - 0x258], eax */
    MEM32(ebp + (-0x24C)) = edi; /* 0x120E6514: mov dword ptr [ebp - 0x24c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E651A: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E651F: lea ecx, [ebp - 0x244] */
    /* test ebx, ebx */ /* 0x120E6525: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E6538; /* 0x120E6527: jne 0x120e6538 */
L_120E6529:
    RECOMP_CALL(sub_120EBD79); /* 0x120E6529: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    eax = 0x80070057u; /* 0x120E652E: mov eax, 0x80070057 */
    goto L_120E65EB; /* 0x120E6533: jmp 0x120e65eb */
L_120E6538:
    /* test esi, esi */ /* 0x120E6538: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6529; /* 0x120E653A: je 0x120e6529 */
L_120E653C:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E653C: push dword ptr [ebp - 0x258] */
    PUSH32(esp, esi); /* 0x120E6542: push esi */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E6543: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E6549: push dword ptr [ebp - 0x250] */
    PUSH32(esp, 1); /* 0x120E654F: push 1 */
    PUSH32(esp, ebx); /* 0x120E6551: push ebx */
    RECOMP_CALL(sub_120EBFE3); /* 0x120E6552: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6557: mov esi, eax */
    /* test esi, esi */ /* 0x120E6559: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E65D3; /* 0x120E655B: js 0x120e65d3 */
L_120E655D:
    ecx = ebp + (-0x24C); /* 0x120E655D: lea ecx, [ebp - 0x24c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E6563: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24C)); /* 0x120E6568: mov edi, dword ptr [ebp - 0x24c] */
    esi = eax; /* 0x120E656E: mov esi, eax */
    /* test esi, esi */ /* 0x120E6570: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E657C; /* 0x120E6572: je 0x120e657c */
L_120E6574:
    ebx = MEM32(ebp + (-0x248)); /* 0x120E6574: mov ebx, dword ptr [ebp - 0x248] */
    goto L_120E659C; /* 0x120E657A: jmp 0x120e659c */
L_120E657C:
    PUSH32(esp, 0x120086A8u); /* 0x120E657C: push 0x120086a8 */
    PUSH32(esp, edi); /* 0x120E6581: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E6582: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E6588: mov ebx, eax */
    esi = ebx; /* 0x120E658A: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E658C: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E658E: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E6590: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E6596: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E659C:
    /* test esi, esi */ /* 0x120E659C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E65D3; /* 0x120E659E: js 0x120e65d3 */
L_120E65A0:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E65A0: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E65A3: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E65A9: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E65AE: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E65B1: push ecx */
    ecx = ebp + (-0x28); /* 0x120E65B2: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E65B5: push ecx */
    PUSH32(esp, esi); /* 0x120E65B6: push esi */
    PUSH32(esp, eax); /* 0x120E65B7: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E65B8: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E65BB: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E65BE: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E65C1: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E65C3: push 0 */
    PUSH32(esp, eax); /* 0x120E65C5: push eax */
    ecx = ebp + (-0x244); /* 0x120E65C6: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E65CC: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E65D1: mov esi, eax */
L_120E65D3:
    ecx = ebp + (-0x244); /* 0x120E65D3: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E65D9: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E65DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E65E9; /* 0x120E65E0: je 0x120e65e9 */
L_120E65E2:
    PUSH32(esp, edi); /* 0x120E65E2: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E65E3: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E65E9:
    eax = esi; /* 0x120E65E9: mov eax, esi */
L_120E65EB:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E65EB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E65EE: pop edi */
    esi = POP32_VAL(esp); /* 0x120E65EF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E65F0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E65F2: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E65F3: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E65F8: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E65F9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E6601(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6601u);

L_120E6601:
    edi = edi; /* 0x120E6601: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6603: push ebp */
    ebp = esp; /* 0x120E6604: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x268u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x268u; /* 0x120E6606: sub esp, 0x268 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E660C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E6611: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E6613: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E6616: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E6619: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E661F: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E6622: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E6623: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E6626: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E662C: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E662F: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E6630: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120E6633: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E6634: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E663A: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E663D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & edi; /* 0x120E663F: and dword ptr [ebp - 0x248], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E6645: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E664B: mov dword ptr [ebp - 0x25c], eax */
    MEM32(ebp + (-0x24C)) = edi; /* 0x120E6651: mov dword ptr [ebp - 0x24c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E6657: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x268); /* 0x120E665C: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C1804); /* 0x120E6662: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120E6667: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E668B; /* 0x120E6669: jne 0x120e668b */
L_120E666B:
    ecx = ebp + (-0x268); /* 0x120E666B: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E6671: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E6676: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E667C: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    eax = 0x80070057u; /* 0x120E6681: mov eax, 0x80070057 */
    goto L_120E675C; /* 0x120E6686: jmp 0x120e675c */
L_120E668B:
    /* test esi, esi */ /* 0x120E668B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E666B; /* 0x120E668D: je 0x120e666b */
L_120E668F:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E668F: push dword ptr [ebp - 0x25c] */
    eax = ebp + (-0x268); /* 0x120E6695: lea eax, [ebp - 0x268] */
    PUSH32(esp, esi); /* 0x120E669B: push esi */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E669C: push dword ptr [ebp - 0x254] */
    ecx = ebp + (-0x244); /* 0x120E66A2: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E66A8: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 0); /* 0x120E66AE: push 0 */
    PUSH32(esp, ebx); /* 0x120E66B0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E66B1: push dword ptr [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x120E66B7: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E66B8: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E66BD: mov esi, eax */
    /* test esi, esi */ /* 0x120E66BF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E6739; /* 0x120E66C1: js 0x120e6739 */
L_120E66C3:
    ecx = ebp + (-0x24C); /* 0x120E66C3: lea ecx, [ebp - 0x24c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E66C9: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24C)); /* 0x120E66CE: mov edi, dword ptr [ebp - 0x24c] */
    esi = eax; /* 0x120E66D4: mov esi, eax */
    /* test esi, esi */ /* 0x120E66D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E66E2; /* 0x120E66D8: je 0x120e66e2 */
L_120E66DA:
    ebx = MEM32(ebp + (-0x248)); /* 0x120E66DA: mov ebx, dword ptr [ebp - 0x248] */
    goto L_120E6702; /* 0x120E66E0: jmp 0x120e6702 */
L_120E66E2:
    PUSH32(esp, 0x120086A8u); /* 0x120E66E2: push 0x120086a8 */
    PUSH32(esp, edi); /* 0x120E66E7: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E66E8: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E66EE: mov ebx, eax */
    esi = ebx; /* 0x120E66F0: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E66F2: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E66F4: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E66F6: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E66FC: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E6702:
    /* test esi, esi */ /* 0x120E6702: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E6739; /* 0x120E6704: js 0x120e6739 */
L_120E6706:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E6706: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E6709: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E670F: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E6714: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E6717: push ecx */
    ecx = ebp + (-0x28); /* 0x120E6718: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E671B: push ecx */
    PUSH32(esp, esi); /* 0x120E671C: push esi */
    PUSH32(esp, eax); /* 0x120E671D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E671E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E6721: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E6724: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E6727: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E6729: push 0 */
    PUSH32(esp, eax); /* 0x120E672B: push eax */
    ecx = ebp + (-0x244); /* 0x120E672C: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E6732: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6737: mov esi, eax */
L_120E6739:
    ecx = ebp + (-0x268); /* 0x120E6739: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E673F: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E6744: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E674A: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E674F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E675A; /* 0x120E6751: je 0x120e675a */
L_120E6753:
    PUSH32(esp, edi); /* 0x120E6753: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E6754: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E675A:
    eax = esi; /* 0x120E675A: mov eax, esi */
L_120E675C:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E675C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E675F: pop edi */
    esi = POP32_VAL(esp); /* 0x120E6760: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E6761: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E6763: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E6764: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E6769: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E676A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E6772(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6772u);

L_120E6772:
    edi = edi; /* 0x120E6772: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6774: push ebp */
    ebp = esp; /* 0x120E6775: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x268u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x268u; /* 0x120E6777: sub esp, 0x268 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E677D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E6782: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E6784: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120E6787: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E678A: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E6790: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E6793: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120E6794: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E6797: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E679D: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E67A0: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E67A1: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120E67A4: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E67A5: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E67AB: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E67AE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & edi; /* 0x120E67B0: and dword ptr [ebp - 0x248], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E67B6: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120E67BC: mov dword ptr [ebp - 0x25c], eax */
    MEM32(ebp + (-0x24C)) = edi; /* 0x120E67C2: mov dword ptr [ebp - 0x24c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E67C8: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x268); /* 0x120E67CD: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C1804); /* 0x120E67D3: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120E67D8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E67FC; /* 0x120E67DA: jne 0x120e67fc */
L_120E67DC:
    ecx = ebp + (-0x268); /* 0x120E67DC: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E67E2: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E67E7: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E67ED: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    eax = 0x80070057u; /* 0x120E67F2: mov eax, 0x80070057 */
    goto L_120E68CD; /* 0x120E67F7: jmp 0x120e68cd */
L_120E67FC:
    /* test esi, esi */ /* 0x120E67FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E67DC; /* 0x120E67FE: je 0x120e67dc */
L_120E6800:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120E6800: push dword ptr [ebp - 0x25c] */
    eax = ebp + (-0x268); /* 0x120E6806: lea eax, [ebp - 0x268] */
    PUSH32(esp, esi); /* 0x120E680C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E680D: push dword ptr [ebp - 0x254] */
    ecx = ebp + (-0x244); /* 0x120E6813: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E6819: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 1); /* 0x120E681F: push 1 */
    PUSH32(esp, ebx); /* 0x120E6821: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E6822: push dword ptr [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x120E6828: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120E6829: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E682E: mov esi, eax */
    /* test esi, esi */ /* 0x120E6830: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E68AA; /* 0x120E6832: js 0x120e68aa */
L_120E6834:
    ecx = ebp + (-0x24C); /* 0x120E6834: lea ecx, [ebp - 0x24c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E683A: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24C)); /* 0x120E683F: mov edi, dword ptr [ebp - 0x24c] */
    esi = eax; /* 0x120E6845: mov esi, eax */
    /* test esi, esi */ /* 0x120E6847: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6853; /* 0x120E6849: je 0x120e6853 */
L_120E684B:
    ebx = MEM32(ebp + (-0x248)); /* 0x120E684B: mov ebx, dword ptr [ebp - 0x248] */
    goto L_120E6873; /* 0x120E6851: jmp 0x120e6873 */
L_120E6853:
    PUSH32(esp, 0x120086A8u); /* 0x120E6853: push 0x120086a8 */
    PUSH32(esp, edi); /* 0x120E6858: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E6859: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E685F: mov ebx, eax */
    esi = ebx; /* 0x120E6861: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E6863: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E6865: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E6867: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E686D: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E6873:
    /* test esi, esi */ /* 0x120E6873: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E68AA; /* 0x120E6875: js 0x120e68aa */
L_120E6877:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E6877: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E687A: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E6880: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E6885: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E6888: push ecx */
    ecx = ebp + (-0x28); /* 0x120E6889: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E688C: push ecx */
    PUSH32(esp, esi); /* 0x120E688D: push esi */
    PUSH32(esp, eax); /* 0x120E688E: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E688F: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E6892: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E6895: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E6898: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E689A: push 0 */
    PUSH32(esp, eax); /* 0x120E689C: push eax */
    ecx = ebp + (-0x244); /* 0x120E689D: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E68A3: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E68A8: mov esi, eax */
L_120E68AA:
    ecx = ebp + (-0x268); /* 0x120E68AA: lea ecx, [ebp - 0x268] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120E68B0: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E68B5: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E68BB: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E68C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E68CB; /* 0x120E68C2: je 0x120e68cb */
L_120E68C4:
    PUSH32(esp, edi); /* 0x120E68C4: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E68C5: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E68CB:
    eax = esi; /* 0x120E68CB: mov eax, esi */
L_120E68CD:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E68CD: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E68D0: pop edi */
    esi = POP32_VAL(esp); /* 0x120E68D1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E68D2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E68D4: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E68D5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E68DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E68DB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E68E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E68E3u);

L_120E68E3:
    edi = edi; /* 0x120E68E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E68E5: push ebp */
    ebp = esp; /* 0x120E68E6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x258u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x258u; /* 0x120E68E8: sub esp, 0x258 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120E68EE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120E68F3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E68F5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E68F8: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120E68FB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E68FC: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x250)) = eax; /* 0x120E68FF: mov dword ptr [ebp - 0x250], eax */
    eax = MEM32(ebp + 0x14); /* 0x120E6905: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E6908: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E6909: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120E690C: push edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x120E690D: mov dword ptr [ebp - 0x254], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E6913: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E6916: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & edi; /* 0x120E6918: and dword ptr [ebp - 0x248], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x244); /* 0x120E691E: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120E6924: mov dword ptr [ebp - 0x258], eax */
    MEM32(ebp + (-0x24C)) = edi; /* 0x120E692A: mov dword ptr [ebp - 0x24c], edi */
    RECOMP_CALL(sub_120EC332); /* 0x120E6930: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120E6935: lea ecx, [ebp - 0x244] */
    /* test ebx, ebx */ /* 0x120E693B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E694E; /* 0x120E693D: jne 0x120e694e */
L_120E693F:
    RECOMP_CALL(sub_120EBD79); /* 0x120E693F: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    eax = 0x80070057u; /* 0x120E6944: mov eax, 0x80070057 */
    goto L_120E6A02; /* 0x120E6949: jmp 0x120e6a02 */
L_120E694E:
    /* test esi, esi */ /* 0x120E694E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E693F; /* 0x120E6950: je 0x120e693f */
L_120E6952:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120E6952: push dword ptr [ebp - 0x258] */
    PUSH32(esp, esi); /* 0x120E6958: push esi */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x120E6959: push dword ptr [ebp - 0x254] */
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120E695F: push dword ptr [ebp - 0x250] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E6965: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120E6968: push ebx */
    RECOMP_CALL(sub_120EC0B4); /* 0x120E6969: call 0x120ec0b4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E696E: mov esi, eax */
    /* test esi, esi */ /* 0x120E6970: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E69EA; /* 0x120E6972: js 0x120e69ea */
L_120E6974:
    ecx = ebp + (-0x24C); /* 0x120E6974: lea ecx, [ebp - 0x24c] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E697A: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x24C)); /* 0x120E697F: mov edi, dword ptr [ebp - 0x24c] */
    esi = eax; /* 0x120E6985: mov esi, eax */
    /* test esi, esi */ /* 0x120E6987: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6993; /* 0x120E6989: je 0x120e6993 */
L_120E698B:
    ebx = MEM32(ebp + (-0x248)); /* 0x120E698B: mov ebx, dword ptr [ebp - 0x248] */
    goto L_120E69B3; /* 0x120E6991: jmp 0x120e69b3 */
L_120E6993:
    PUSH32(esp, 0x120086A8u); /* 0x120E6993: push 0x120086a8 */
    PUSH32(esp, edi); /* 0x120E6998: push edi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E6999: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120E699F: mov ebx, eax */
    esi = ebx; /* 0x120E69A1: mov esi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E69A3: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E69A5: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E69A7: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E69AD: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E69B3:
    /* test esi, esi */ /* 0x120E69B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E69EA; /* 0x120E69B5: js 0x120e69ea */
L_120E69B7:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E69B7: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120E69BA: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120E69C0: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120E69C5: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120E69C8: push ecx */
    ecx = ebp + (-0x28); /* 0x120E69C9: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x120E69CC: push ecx */
    PUSH32(esp, esi); /* 0x120E69CD: push esi */
    PUSH32(esp, eax); /* 0x120E69CE: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E69CF: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120E69D2: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120E69D5: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(ebx); /* 0x120E69D8: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120E69DA: push 0 */
    PUSH32(esp, eax); /* 0x120E69DC: push eax */
    ecx = ebp + (-0x244); /* 0x120E69DD: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120E69E3: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E69E8: mov esi, eax */
L_120E69EA:
    ecx = ebp + (-0x244); /* 0x120E69EA: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120E69F0: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120E69F5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6A00; /* 0x120E69F7: je 0x120e6a00 */
L_120E69F9:
    PUSH32(esp, edi); /* 0x120E69F9: push edi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E69FA: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E6A00:
    eax = esi; /* 0x120E6A00: mov eax, esi */
L_120E6A02:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E6A02: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120E6A05: pop edi */
    esi = POP32_VAL(esp); /* 0x120E6A06: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120E6A07: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E6A09: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120E6A0A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E6A0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E6A10: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E6A18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6A18u);

L_120E6A18:
    edi = edi; /* 0x120E6A18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6A1A: push ebp */
    ebp = esp; /* 0x120E6A1B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120E6A1D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E6A1E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120E6A21: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E6A22: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E6A25: push edi */
    edi = MEM32(ebx); /* 0x120E6A26: mov edi, dword ptr [ebx] */
    /* test edi, edi */ /* 0x120E6A28: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E6A52; /* 0x120E6A2A: jne 0x120e6a52 */
L_120E6A2C:
    PUSH32(esp, 0x120014BCu); /* 0x120E6A2C: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E6A31: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120E6A33: push 4 */
    edx = POP32_VAL(esp); /* 0x120E6A35: pop edx */
    eax = esi; /* 0x120E6A36: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120E6A38: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120E6A3A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120E6A3D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E6A3F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120E6A41: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120E6A42: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6A47: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6A48: pop ecx */
    ecx = MEM32(ebp + 0x14); /* 0x120E6A49: mov ecx, dword ptr [ebp + 0x14] */
    edi = eax; /* 0x120E6A4C: mov edi, eax */
    MEM32(ecx) = esi; /* 0x120E6A4E: mov dword ptr [ecx], esi */
    goto L_120E6AA7; /* 0x120E6A50: jmp 0x120e6aa7 */
L_120E6A52:
    eax = MEM32(ebp + 0x14); /* 0x120E6A52: mov eax, dword ptr [ebp + 0x14] */
    /* cmp esi, MEM32(eax) */ /* 0x120E6A55: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E6AA7; /* 0x120E6A57: jbe 0x120e6aa7 */
L_120E6A59:
    PUSH32(esp, 0x120014BCu); /* 0x120E6A59: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E6A5E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120E6A60: push 4 */
    edx = POP32_VAL(esp); /* 0x120E6A62: pop edx */
    eax = esi; /* 0x120E6A63: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120E6A65: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120E6A67: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120E6A6A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E6A6C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120E6A6E: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120E6A6F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6A74: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6A75: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x120E6A76: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x120E6A79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6AAC; /* 0x120E6A7B: je 0x120e6aac */
L_120E6A7D:
    ecx = MEM32(ebp + 0x10); /* 0x120E6A7D: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x120E6A80: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6A98; /* 0x120E6A82: je 0x120e6a98 */
L_120E6A84:
    ebx = edi; /* 0x120E6A84: mov ebx, edi */
    edx = eax; /* 0x120E6A86: mov edx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x120E6A88: sub ebx, eax */
    _flag_k = FK_CMP;
L_120E6A8A:
    eax = MEM32(ebx + edx); /* 0x120E6A8A: mov eax, dword ptr [ebx + edx] */
    MEM32(edx) = eax; /* 0x120E6A8D: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120E6A8F: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E6A92: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E6A8A; /* 0x120E6A93: jne 0x120e6a8a */
L_120E6A95:
    ebx = MEM32(ebp + 0x8); /* 0x120E6A95: mov ebx, dword ptr [ebp + 8] */
L_120E6A98:
    eax = MEM32(ebp + 0x14); /* 0x120E6A98: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E6A9B: push edi */
    MEM32(eax) = esi; /* 0x120E6A9C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_121BF388); /* 0x120E6A9E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x120E6AA3: mov edi, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x120E6AA6: pop ecx */
L_120E6AA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E6AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edi; /* 0x120E6AA9: mov dword ptr [ebx], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E6AAB: inc eax */
    _flag_k = FK_INC;
L_120E6AAC:
    edi = POP32_VAL(esp); /* 0x120E6AAC: pop edi */
    esi = POP32_VAL(esp); /* 0x120E6AAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E6AAE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120E6AAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120E6AB0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120E6AB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6AB8u);

L_120E6AB8:
    edi = edi; /* 0x120E6AB8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6ABA: push ebp */
    ebp = esp; /* 0x120E6ABB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120E6ABD: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E6AC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120E6AC2: push ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E6AC3: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E6AC6: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E6AC9: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120E6ACC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6B7A; /* 0x120E6ACF: je 0x120e6b7a */
L_120E6AD5:
    ebx = MEM32(ebp + 0x1C); /* 0x120E6AD5: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x120E6AD8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6B7A; /* 0x120E6ADA: je 0x120e6b7a */
L_120E6AE0:
    PUSH32(esp, esi); /* 0x120E6AE0: push esi */
    ecx = ebp + (-0xC); /* 0x120E6AE1: lea ecx, [ebp - 0xc] */
    MEM32(ebx) = eax; /* 0x120E6AE4: mov dword ptr [ebx], eax */
    RECOMP_CALL(sub_120E4EC4); /* 0x120E6AE6: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6AEB: mov esi, eax */
    /* test esi, esi */ /* 0x120E6AED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6AF6; /* 0x120E6AEF: je 0x120e6af6 */
L_120E6AF1:
    edx = MEM32(ebp + (-0x8)); /* 0x120E6AF1: mov edx, dword ptr [ebp - 8] */
    goto L_120E6B18; /* 0x120E6AF4: jmp 0x120e6b18 */
L_120E6AF6:
    PUSH32(esp, 0x120086C8u); /* 0x120E6AF6: push 0x120086c8 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E6AFB: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120E6AFE: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120E6B04: mov edx, eax */
    esi = edx; /* 0x120E6B06: mov esi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120E6B08: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E6B0A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120E6B0C: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120E6B12: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120E6B18:
    /* test esi, esi */ /* 0x120E6B18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E6B55; /* 0x120E6B1A: js 0x120e6b55 */
L_120E6B1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E6B1C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x120E6B1E: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x120E6B21: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E6B24: push eax */
    eax = MEM32(ebp + 0x14); /* 0x120E6B25: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E6B28: push dword ptr [ebp + 0x18] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E6B2B: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120E6B2E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E6B30: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x120E6B32: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120E6B35: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x120E6B37: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x120E6B3A: push ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E6B3B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E6B3B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120E6B3E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6B3F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(edx); /* 0x120E6B42: call edx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E6B44: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120E6B45: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_120EBC05); /* 0x120E6B48: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120E6B4D: mov esi, eax */
    /* test esi, esi */ /* 0x120E6B4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E6B55; /* 0x120E6B51: js 0x120e6b55 */
L_120E6B53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E6B53: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E6B55:
    ecx = MEM32(ebp + (-0x4)); /* 0x120E6B55: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120E6B58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6B66; /* 0x120E6B5A: je 0x120e6b66 */
L_120E6B5C:
    eax = MEM32(ecx); /* 0x120E6B5C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6B5E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6B5F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120E6B62: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E6B66:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x120E6B66: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6B75; /* 0x120E6B6A: je 0x120e6b75 */
L_120E6B6C:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120E6B6C: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120E6B6F: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120E6B75:
    eax = esi; /* 0x120E6B75: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120E6B77: pop esi */
    goto L_120E6B7F; /* 0x120E6B78: jmp 0x120e6b7f */
L_120E6B7A:
    eax = 0x8876086Cu; /* 0x120E6B7A: mov eax, 0x8876086c */
L_120E6B7F:
    ebx = POP32_VAL(esp); /* 0x120E6B7F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E6B80: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E6B81: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E6B89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6B89u);

L_120E6B89:
    edi = edi; /* 0x120E6B89: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6B8B: push ebp */
    ebp = esp; /* 0x120E6B8C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120E6B8E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E6B91: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x120E6B94: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E6B96: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x00FFFFFFu); /* 0x120E6B99: push 0xffffff */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6B9E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E6AB8); /* 0x120E6BA1: call 0x120e6ab8 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E6BA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120E6BA7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120E6BAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E6BAFu);

L_120E6BAF:
    edi = edi; /* 0x120E6BAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E6BB1: push ebp */
    ebp = esp; /* 0x120E6BB2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x120E6BB4: sub esp, 0x90 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120E6BBA: push esi */
    ecx = ebp + (-0x2C); /* 0x120E6BBB: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C0FB8); /* 0x120E6BBE: call 0x121c0fb8 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x120E6BC3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x120E6BC6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E730E; /* 0x120E6BC8: je 0x120e730e */
L_120E6BCE:
    eax = MEM32(ebp + 0x10); /* 0x120E6BCE: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x120E6BD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E730E; /* 0x120E6BD3: je 0x120e730e */
L_120E6BD9:
    PUSH32(esp, ebx); /* 0x120E6BD9: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E6BDA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x120E6BDC: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E6BDF: push edi */
    ecx = ebp + (-0x2C); /* 0x120E6BE0: lea ecx, [ebp - 0x2c] */
    MEM32(eax) = ebx; /* 0x120E6BE3: mov dword ptr [eax], ebx */
    MEM8(ebp + (-0x1C)) = (uint8_t)((CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E6BE5: setne byte ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_121C1253); /* 0x120E6BE9: call 0x121c1253 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x120E6BEE: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6C27; /* 0x120E6BF1: je 0x120e6c27 */
L_120E6BF3:
    eax = ebp + (-0x2C); /* 0x120E6BF3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120088A0u); /* 0x120E6BF6: push 0x120088a0 */
    PUSH32(esp, eax); /* 0x120E6BFB: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6BFC: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    edi = 0x12008884u; /* 0x120E6C01: mov edi, 0x12008884 */
    eax = ebp + (-0x2C); /* 0x120E6C06: lea eax, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x120E6C09: push edi */
    PUSH32(esp, eax); /* 0x120E6C0A: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6C0B: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x120E6C10: lea eax, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x120E6C13: push edi */
    PUSH32(esp, eax); /* 0x120E6C14: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6C15: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x120E6C1A: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x120E6C1D: push 2 */
    ecx = ebp + (-0x2C); /* 0x120E6C1F: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C1331); /* 0x120E6C22: call 0x121c1331 */
    RECOMP_FLAGS_IN();
L_120E6C27:
    eax = MEM32(esi); /* 0x120E6C27: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x90); /* 0x120E6C29: lea ecx, [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x120E6C2F: push ecx */
    PUSH32(esp, esi); /* 0x120E6C30: push esi */
    MEM32(ebp + 0x8) = ebx; /* 0x120E6C31: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x120E6C34: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E6C37: mov dword ptr [ebp - 8], ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120E6C3A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x120E6C3D: mov ecx, ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x120E6C3F: mov dword ptr [ebp - 0x30], ebx */
    /* cmp MEM32(ebp + (-0x8C)), ecx */ /* 0x120E6C42: cmp dword ptr [ebp - 0x8c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E7032; /* 0x120E6C48: jbe 0x120e7032 */
L_120E6C4E:
    eax = MEM32(esi); /* 0x120E6C4E: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x120E6C50: push ecx */
    PUSH32(esp, ebx); /* 0x120E6C51: push ebx */
    PUSH32(esp, esi); /* 0x120E6C52: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x120E6C53: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x120E6C56: mov ecx, dword ptr [esi] */
    edi = eax; /* 0x120E6C58: mov edi, eax */
    eax = ebp + (-0x80); /* 0x120E6C5A: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x120E6C5D: push eax */
    PUSH32(esp, edi); /* 0x120E6C5E: push edi */
    PUSH32(esp, esi); /* 0x120E6C5F: push esi */
    MEM32(ebp + (-0x38)) = edi; /* 0x120E6C60: mov dword ptr [ebp - 0x38], edi */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120E6C63: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x78)), 4 */ /* 0x120E6C66: cmp dword ptr [ebp - 0x78], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E701F; /* 0x120E6C6A: jne 0x120e701f */
L_120E6C70:
    /* cmp MEM32(ebp + (-0x74)), 0xFu */ /* 0x120E6C70: cmp dword ptr [ebp - 0x74], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E6C87; /* 0x120E6C74: je 0x120e6c87 */
L_120E6C76:
    /* cmp MEM32(ebp + (-0x74)), 0x10u */ /* 0x120E6C76: cmp dword ptr [ebp - 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E701F; /* 0x120E6C7A: jne 0x120e701f */
L_120E6C80:
    PUSH32(esp, 0x12008874u); /* 0x120E6C80: push 0x12008874 */
    goto L_120E6C8C; /* 0x120E6C85: jmp 0x120e6c8c */
L_120E6C87:
    PUSH32(esp, 0x12008864u); /* 0x120E6C87: push 0x12008864 */
L_120E6C8C:
    eax = ebp + (-0x2C); /* 0x120E6C8C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x120E6C8F: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6C90: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x120E6C95: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E6C99: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6C9A: pop ecx */
    eax = ebp + (-0x2C); /* 0x120E6C9B: lea eax, [ebp - 0x2c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E6E31; /* 0x120E6C9E: jne 0x120e6e31 */
L_120E6CA4:
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120E6CA4: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 0x1200885Cu); /* 0x120E6CA7: push 0x1200885c */
    PUSH32(esp, eax); /* 0x120E6CAC: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6CAD: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120E6CB2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E6CB4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x74)), 0xFu */ /* 0x120E6CB7: cmp dword ptr [ebp - 0x74], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E6D29; /* 0x120E6CBB: jne 0x120e6d29 */
L_120E6CBD:
    ecx = ebp + (-0xC); /* 0x120E6CBD: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x120E6CC0: push ecx */
    PUSH32(esp, edi); /* 0x120E6CC1: push edi */
    PUSH32(esp, esi); /* 0x120E6CC2: push esi */
    RECOMP_ICALL(MEM32(eax + 0xD8)); /* 0x120E6CC3: call dword ptr [eax + 0xd8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6CC9: mov edi, eax */
    /* test edi, edi */ /* 0x120E6CCB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6CCD: js 0x120e72f0 */
L_120E6CD3:
    ecx = MEM32(ebp + (-0xC)); /* 0x120E6CD3: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x120E6CD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6D17; /* 0x120E6CD8: je 0x120e6d17 */
L_120E6CDA:
    eax = MEM32(ecx); /* 0x120E6CDA: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x120E6CDC: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6CDF: push edx */
    PUSH32(esp, ebx); /* 0x120E6CE0: push ebx */
    PUSH32(esp, ecx); /* 0x120E6CE1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120E6CE2: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x120E6CE5: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120E6CE8: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120E6CE9: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x120E6CEC: push ebx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E6CED: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E6CED: shr eax, 2 */
    PUSH32(esp, eax); /* 0x120E6CF0: push eax */
    eax = ebp + 0x8; /* 0x120E6CF1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6CF4: push eax */
    RECOMP_CALL(sub_120E6A18); /* 0x120E6CF5: call 0x120e6a18 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E6CFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E71AB; /* 0x120E6CFC: je 0x120e71ab */
L_120E6D02:
    eax = MEM32(ebp + (-0xC)); /* 0x120E6D02: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x120E6D05: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x120E6D07: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6D0A: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6D0B: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6D0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120E6D0F: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x120E6D12: mov ecx, dword ptr [ebp - 0xc] */
    goto L_120E6D1A; /* 0x120E6D15: jmp 0x120e6d1a */
L_120E6D17:
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E6D17: mov dword ptr [ebp - 8], ebx */
L_120E6D1A:
    /* test ecx, ecx */ /* 0x120E6D1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6D93; /* 0x120E6D1C: je 0x120e6d93 */
L_120E6D1E:
    eax = MEM32(ecx); /* 0x120E6D1E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6D20: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6D21: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E6D24: mov dword ptr [ebp - 0xc], ebx */
    goto L_120E6D93; /* 0x120E6D27: jmp 0x120e6d93 */
L_120E6D29:
    ecx = ebp + (-0x10); /* 0x120E6D29: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x120E6D2C: push ecx */
    PUSH32(esp, edi); /* 0x120E6D2D: push edi */
    PUSH32(esp, esi); /* 0x120E6D2E: push esi */
    RECOMP_ICALL(MEM32(eax + 0xDC)); /* 0x120E6D2F: call dword ptr [eax + 0xdc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6D35: mov edi, eax */
    /* test edi, edi */ /* 0x120E6D37: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6D39: js 0x120e72f0 */
L_120E6D3F:
    ecx = MEM32(ebp + (-0x10)); /* 0x120E6D3F: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x120E6D42: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6D83; /* 0x120E6D44: je 0x120e6d83 */
L_120E6D46:
    eax = MEM32(ecx); /* 0x120E6D46: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x120E6D48: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6D4B: push edx */
    PUSH32(esp, ebx); /* 0x120E6D4C: push ebx */
    PUSH32(esp, ecx); /* 0x120E6D4D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120E6D4E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x120E6D51: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120E6D54: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120E6D55: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x120E6D58: push ebx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E6D59: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E6D59: shr eax, 2 */
    PUSH32(esp, eax); /* 0x120E6D5C: push eax */
    eax = ebp + 0x8; /* 0x120E6D5D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6D60: push eax */
    RECOMP_CALL(sub_120E6A18); /* 0x120E6D61: call 0x120e6a18 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E6D66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E71AB; /* 0x120E6D68: je 0x120e71ab */
L_120E6D6E:
    eax = MEM32(ebp + (-0x10)); /* 0x120E6D6E: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x120E6D71: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x120E6D73: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6D76: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6D77: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6D7A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120E6D7B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x120E6D7E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_120E6D86; /* 0x120E6D81: jmp 0x120e6d86 */
L_120E6D83:
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E6D83: mov dword ptr [ebp - 8], ebx */
L_120E6D86:
    /* test ecx, ecx */ /* 0x120E6D86: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6D93; /* 0x120E6D88: je 0x120e6d93 */
L_120E6D8A:
    eax = MEM32(ecx); /* 0x120E6D8A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6D8C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6D8D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E6D90: mov dword ptr [ebp - 0x10], ebx */
L_120E6D93:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x120E6D93: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E6E1E; /* 0x120E6D97: jbe 0x120e6e1e */
L_120E6D9D:
    eax = ebp + (-0x4); /* 0x120E6D9D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E6DA0: push eax */
    PUSH32(esp, ebx); /* 0x120E6DA1: push ebx */
    PUSH32(esp, ebx); /* 0x120E6DA2: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E6DA3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x00FFFFFFu); /* 0x120E6DA6: push 0xffffff */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6DAB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E6AB8); /* 0x120E6DAE: call 0x120e6ab8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6DB3: mov edi, eax */
    /* test edi, edi */ /* 0x120E6DB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6DB7: js 0x120e72f0 */
L_120E6DBD:
    eax = MEM32(ebp + (-0x4)); /* 0x120E6DBD: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6DC0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E6DC2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6DC3: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6DC6: push eax */
    eax = ebp + (-0x2C); /* 0x120E6DC7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008854u); /* 0x120E6DCA: push 0x12008854 */
    PUSH32(esp, eax); /* 0x120E6DCF: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6DD0: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E6DD5: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6DD8: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E6DDA: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E6DDD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6DDE: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6DE1: push eax */
    ecx = ebp + (-0x2C); /* 0x120E6DE2: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C110F); /* 0x120E6DE5: call 0x121c110f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E6DEA: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6DED: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E6DEF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6DF0: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6DF3: push eax */
    eax = ebp + (-0x2C); /* 0x120E6DF4: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x1200884Cu); /* 0x120E6DF7: push 0x1200884c */
    PUSH32(esp, eax); /* 0x120E6DFC: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6DFD: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E6E02: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E6E05: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120E6E08: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E701F; /* 0x120E6E0A: je 0x120e701f */
L_120E6E10:
    eax = MEM32(ecx); /* 0x120E6E10: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6E12: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6E13: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E6E16: mov dword ptr [ebp - 4], ebx */
    goto L_120E701F; /* 0x120E6E19: jmp 0x120e701f */
L_120E6E1E:
    eax = ebp + (-0x2C); /* 0x120E6E1E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008844u); /* 0x120E6E21: push 0x12008844 */
    PUSH32(esp, eax); /* 0x120E6E26: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6E27: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    goto L_120E701D; /* 0x120E6E2C: jmp 0x120e701d */
L_120E6E31:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x120E6E31: push dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120E6E34: push dword ptr [ebp - 0x80] */
    PUSH32(esp, 0x12008834u); /* 0x120E6E37: push 0x12008834 */
    PUSH32(esp, eax); /* 0x120E6E3C: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6E3D: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120E6E42: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x120E6E45: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E700D; /* 0x120E6E49: jbe 0x120e700d */
L_120E6E4F:
    eax = MEM32(esi); /* 0x120E6E4F: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120E6E51: push ebx */
    PUSH32(esp, edi); /* 0x120E6E52: push edi */
    PUSH32(esp, esi); /* 0x120E6E53: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x120E6E54: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E6E57: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x120E6E58: push dword ptr [ebp - 0x80] */
    edi = eax; /* 0x120E6E5B: mov edi, eax */
    eax = ebp + (-0x2C); /* 0x120E6E5D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x1200881Cu); /* 0x120E6E60: push 0x1200881c */
    PUSH32(esp, eax); /* 0x120E6E65: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6E66: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120E6E6B: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120E6E6D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x74)), 0xFu */ /* 0x120E6E70: cmp dword ptr [ebp - 0x74], 0xf */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E6EE6; /* 0x120E6E74: jne 0x120e6ee6 */
L_120E6E76:
    ecx = ebp + (-0xC); /* 0x120E6E76: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x120E6E79: push ecx */
    PUSH32(esp, edi); /* 0x120E6E7A: push edi */
    PUSH32(esp, esi); /* 0x120E6E7B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xD8)); /* 0x120E6E7C: call dword ptr [eax + 0xd8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6E82: mov edi, eax */
    /* test edi, edi */ /* 0x120E6E84: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6E86: js 0x120e72f0 */
L_120E6E8C:
    ecx = MEM32(ebp + (-0xC)); /* 0x120E6E8C: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x120E6E8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6ED2; /* 0x120E6E91: je 0x120e6ed2 */
L_120E6E93:
    eax = MEM32(ecx); /* 0x120E6E93: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x120E6E95: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6E98: push edx */
    PUSH32(esp, 0); /* 0x120E6E99: push 0 */
    PUSH32(esp, ecx); /* 0x120E6E9B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120E6E9C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x120E6E9F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120E6EA2: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120E6EA3: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x120E6EA6: push 0 */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E6EA8: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E6EA8: shr eax, 2 */
    PUSH32(esp, eax); /* 0x120E6EAB: push eax */
    eax = ebp + 0x8; /* 0x120E6EAC: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6EAF: push eax */
    RECOMP_CALL(sub_120E6A18); /* 0x120E6EB0: call 0x120e6a18 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E6EB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E71AB; /* 0x120E6EB7: je 0x120e71ab */
L_120E6EBD:
    eax = MEM32(ebp + (-0xC)); /* 0x120E6EBD: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x120E6EC0: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x120E6EC2: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6EC5: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6EC6: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6EC9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120E6ECA: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x120E6ECD: mov ecx, dword ptr [ebp - 0xc] */
    goto L_120E6ED6; /* 0x120E6ED0: jmp 0x120e6ed6 */
L_120E6ED2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120E6ED2: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E6ED6:
    /* test ecx, ecx */ /* 0x120E6ED6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6F54; /* 0x120E6ED8: je 0x120e6f54 */
L_120E6EDA:
    eax = MEM32(ecx); /* 0x120E6EDA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6EDC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6EDD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120E6EE0: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E6F54; /* 0x120E6EE4: jmp 0x120e6f54 */
L_120E6EE6:
    ecx = ebp + (-0x10); /* 0x120E6EE6: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x120E6EE9: push ecx */
    PUSH32(esp, edi); /* 0x120E6EEA: push edi */
    PUSH32(esp, esi); /* 0x120E6EEB: push esi */
    RECOMP_ICALL(MEM32(eax + 0xDC)); /* 0x120E6EEC: call dword ptr [eax + 0xdc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6EF2: mov edi, eax */
    /* test edi, edi */ /* 0x120E6EF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6EF6: js 0x120e72f0 */
L_120E6EFC:
    ecx = MEM32(ebp + (-0x10)); /* 0x120E6EFC: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x120E6EFF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6F42; /* 0x120E6F01: je 0x120e6f42 */
L_120E6F03:
    eax = MEM32(ecx); /* 0x120E6F03: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x120E6F05: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6F08: push edx */
    PUSH32(esp, 0); /* 0x120E6F09: push 0 */
    PUSH32(esp, ecx); /* 0x120E6F0B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120E6F0C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x120E6F0F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x120E6F12: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120E6F13: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x120E6F16: push 0 */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E6F18: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E6F18: shr eax, 2 */
    PUSH32(esp, eax); /* 0x120E6F1B: push eax */
    eax = ebp + 0x8; /* 0x120E6F1C: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6F1F: push eax */
    RECOMP_CALL(sub_120E6A18); /* 0x120E6F20: call 0x120e6a18 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E6F25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E71AB; /* 0x120E6F27: je 0x120e71ab */
L_120E6F2D:
    eax = MEM32(ebp + (-0x10)); /* 0x120E6F2D: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x120E6F30: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x120E6F32: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120E6F35: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6F36: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120E6F39: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x120E6F3A: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x120E6F3D: mov ecx, dword ptr [ebp - 0x10] */
    goto L_120E6F46; /* 0x120E6F40: jmp 0x120e6f46 */
L_120E6F42:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120E6F42: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E6F46:
    /* test ecx, ecx */ /* 0x120E6F46: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6F54; /* 0x120E6F48: je 0x120e6f54 */
L_120E6F4A:
    eax = MEM32(ecx); /* 0x120E6F4A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6F4C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6F4D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x120E6F50: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E6F54:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x120E6F54: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E6FD7; /* 0x120E6F58: jbe 0x120e6fd7 */
L_120E6F5A:
    eax = ebp + (-0x4); /* 0x120E6F5A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E6F5D: push eax */
    PUSH32(esp, 0); /* 0x120E6F5E: push 0 */
    PUSH32(esp, 0); /* 0x120E6F60: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E6F62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x00FFFFFFu); /* 0x120E6F65: push 0xffffff */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E6F6A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E6AB8); /* 0x120E6F6D: call 0x120e6ab8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E6F72: mov edi, eax */
    /* test edi, edi */ /* 0x120E6F74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E6F76: js 0x120e72f0 */
L_120E6F7C:
    eax = MEM32(ebp + (-0x4)); /* 0x120E6F7C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6F7F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E6F81: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6F82: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6F85: push eax */
    eax = ebp + (-0x2C); /* 0x120E6F86: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008814u); /* 0x120E6F89: push 0x12008814 */
    PUSH32(esp, eax); /* 0x120E6F8E: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6F8F: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E6F94: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6F97: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E6F99: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E6F9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6F9D: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6FA0: push eax */
    ecx = ebp + (-0x2C); /* 0x120E6FA1: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C110F); /* 0x120E6FA4: call 0x121c110f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E6FA9: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E6FAC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E6FAE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E6FAF: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E6FB2: push eax */
    eax = ebp + (-0x2C); /* 0x120E6FB3: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008810u); /* 0x120E6FB6: push 0x12008810 */
    PUSH32(esp, eax); /* 0x120E6FBB: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6FBC: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E6FC1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E6FC4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120E6FC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E6FE7; /* 0x120E6FC9: je 0x120e6fe7 */
L_120E6FCB:
    eax = MEM32(ecx); /* 0x120E6FCB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E6FCD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E6FCE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120E6FD1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E6FE7; /* 0x120E6FD5: jmp 0x120e6fe7 */
L_120E6FD7:
    eax = ebp + (-0x2C); /* 0x120E6FD7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008808u); /* 0x120E6FDA: push 0x12008808 */
    PUSH32(esp, eax); /* 0x120E6FDF: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6FE0: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E6FE5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E6FE6: pop ecx */
L_120E6FE7:
    eax = MEM32(ebp + (-0x68)); /* 0x120E6FE7: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E6FEA: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x120E6FEB: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E7004; /* 0x120E6FED: jae 0x120e7004 */
L_120E6FEF:
    eax = ebp + (-0x2C); /* 0x120E6FEF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008804u); /* 0x120E6FF2: push 0x12008804 */
    PUSH32(esp, eax); /* 0x120E6FF7: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E6FF8: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x68)); /* 0x120E6FFD: mov eax, dword ptr [ebp - 0x68] */
    ecx = POP32_VAL(esp); /* 0x120E7000: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7001: pop ecx */
    /* cmp ebx, eax */ /* 0x120E7002: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_120E7004:
    edi = MEM32(ebp + (-0x38)); /* 0x120E7004: mov edi, dword ptr [ebp - 0x38] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_120E6E4F; /* 0x120E7007: jb 0x120e6e4f */
L_120E700D:
    eax = ebp + (-0x2C); /* 0x120E700D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008800u); /* 0x120E7010: push 0x12008800 */
    PUSH32(esp, eax); /* 0x120E7015: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7016: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E701B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E701D:
    ecx = POP32_VAL(esp); /* 0x120E701D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E701E: pop ecx */
L_120E701F:
    ecx = MEM32(ebp + (-0x30)); /* 0x120E701F: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E7022: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ecx; /* 0x120E7023: mov dword ptr [ebp - 0x30], ecx */
    /* cmp ecx, MEM32(ebp + (-0x8C)) */ /* 0x120E7026: cmp ecx, dword ptr [ebp - 0x8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E6C4E; /* 0x120E702C: jb 0x120e6c4e */
L_120E7032:
    eax = ebp + (-0x2C); /* 0x120E7032: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120087B8u); /* 0x120E7035: push 0x120087b8 */
    PUSH32(esp, eax); /* 0x120E703A: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E703B: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x88)), 0 */ /* 0x120E7040: cmp dword ptr [ebp - 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E7047: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7048: pop ecx */
    ecx = ebx; /* 0x120E7049: mov ecx, ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x120E704B: mov dword ptr [ebp - 0x30], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E729F; /* 0x120E704E: jbe 0x120e729f */
L_120E7054:
    eax = MEM32(esi); /* 0x120E7054: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x120E7056: push ecx */
    PUSH32(esp, esi); /* 0x120E7057: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x120E7058: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x120E705B: mov dword ptr [ebp - 0x38], eax */
    /* test eax, eax */ /* 0x120E705E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7307; /* 0x120E7060: je 0x120e7307 */
L_120E7066:
    ecx = MEM32(esi); /* 0x120E7066: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x54); /* 0x120E7068: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x120E706B: push edx */
    PUSH32(esp, eax); /* 0x120E706C: push eax */
    PUSH32(esp, esi); /* 0x120E706D: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x120E706E: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E7071: mov edi, eax */
    /* test edi, edi */ /* 0x120E7073: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E7075: js 0x120e72f0 */
L_120E707B:
    eax = ebp + (-0x2C); /* 0x120E707B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120087ACu); /* 0x120E707E: push 0x120087ac */
    PUSH32(esp, eax); /* 0x120E7083: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7084: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x120E7089: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E708D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E708E: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E70A5; /* 0x120E708F: je 0x120e70a5 */
L_120E7091:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x120E7091: push dword ptr [ebp - 0x54] */
    eax = ebp + (-0x2C); /* 0x120E7094: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120087A8u); /* 0x120E7097: push 0x120087a8 */
    PUSH32(esp, eax); /* 0x120E709C: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E709D: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E70A2: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E70A5:
    eax = ebp + (-0x2C); /* 0x120E70A5: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120087A4u); /* 0x120E70A8: push 0x120087a4 */
    PUSH32(esp, eax); /* 0x120E70AD: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E70AE: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x120E70B3: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E70B7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E70B8: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E727A; /* 0x120E70B9: jbe 0x120e727a */
L_120E70BF:
    eax = MEM32(esi); /* 0x120E70BF: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120E70C1: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x120E70C2: push dword ptr [ebp - 0x38] */
    PUSH32(esp, esi); /* 0x120E70C5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x120E70C6: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E70C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7307; /* 0x120E70CB: je 0x120e7307 */
L_120E70D1:
    ecx = MEM32(esi); /* 0x120E70D1: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x48); /* 0x120E70D3: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x120E70D6: push edx */
    PUSH32(esp, eax); /* 0x120E70D7: push eax */
    PUSH32(esp, esi); /* 0x120E70D8: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x120E70D9: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E70DC: mov edi, eax */
    /* test edi, edi */ /* 0x120E70DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E70E0: js 0x120e72f0 */
L_120E70E6:
    eax = ebp + (-0x2C); /* 0x120E70E6: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008798u); /* 0x120E70E9: push 0x12008798 */
    PUSH32(esp, eax); /* 0x120E70EE: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E70EF: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x120E70F4: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E70F8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E70F9: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7110; /* 0x120E70FA: je 0x120e7110 */
L_120E70FC:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x120E70FC: push dword ptr [ebp - 0x48] */
    eax = ebp + (-0x2C); /* 0x120E70FF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120087A8u); /* 0x120E7102: push 0x120087a8 */
    PUSH32(esp, eax); /* 0x120E7107: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7108: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E710D: add esp, 0xc */
    _flag_k = FK_ADD;
L_120E7110:
    eax = ebp + (-0x2C); /* 0x120E7110: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008790u); /* 0x120E7113: push 0x12008790 */
    PUSH32(esp, eax); /* 0x120E7118: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7119: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x40)), 0 */ /* 0x120E711E: cmp dword ptr [ebp - 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120E7122: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7123: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E71B5; /* 0x120E7124: je 0x120e71b5 */
L_120E712A:
    eax = ebp + (-0x4); /* 0x120E712A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E712D: push eax */
    PUSH32(esp, 0); /* 0x120E712E: push 0 */
    PUSH32(esp, 0); /* 0x120E7130: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7132: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x00FFFFFFu); /* 0x120E7135: push 0xffffff */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x120E713A: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_120E6AB8); /* 0x120E713D: call 0x120e6ab8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E7142: mov edi, eax */
    /* test edi, edi */ /* 0x120E7144: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E7146: js 0x120e72f0 */
L_120E714C:
    eax = MEM32(ebp + (-0x4)); /* 0x120E714C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E714F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E7151: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7152: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E7155: push eax */
    eax = ebp + (-0x2C); /* 0x120E7156: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008764u); /* 0x120E7159: push 0x12008764 */
    PUSH32(esp, eax); /* 0x120E715E: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E715F: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E7164: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E7167: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E7169: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x120E716C: push 0 */
    PUSH32(esp, 0xCu); /* 0x120E716E: push 0xc */
    PUSH32(esp, eax); /* 0x120E7170: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7171: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E7174: push eax */
    ecx = ebp + (-0x2C); /* 0x120E7175: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C1006); /* 0x120E7178: call 0x121c1006 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E717D: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E7180: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E7182: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7183: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E7186: push eax */
    eax = ebp + (-0x2C); /* 0x120E7187: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x1200884Cu); /* 0x120E718A: push 0x1200884c */
    PUSH32(esp, eax); /* 0x120E718F: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7190: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E7195: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E7198: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120E719B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E71C5; /* 0x120E719D: je 0x120e71c5 */
L_120E719F:
    eax = MEM32(ecx); /* 0x120E719F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E71A1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E71A2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120E71A5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E71C5; /* 0x120E71A9: jmp 0x120e71c5 */
L_120E71AB:
    edi = 0x8007000Eu; /* 0x120E71AB: mov edi, 0x8007000e */
    goto L_120E72F0; /* 0x120E71B0: jmp 0x120e72f0 */
L_120E71B5:
    eax = ebp + (-0x2C); /* 0x120E71B5: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x1200873Cu); /* 0x120E71B8: push 0x1200873c */
    PUSH32(esp, eax); /* 0x120E71BD: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E71BE: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E71C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E71C4: pop ecx */
L_120E71C5:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x120E71C5: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7250; /* 0x120E71C9: je 0x120e7250 */
L_120E71CF:
    eax = ebp + (-0x4); /* 0x120E71CF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E71D2: push eax */
    PUSH32(esp, 0); /* 0x120E71D3: push 0 */
    PUSH32(esp, 0); /* 0x120E71D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E71D7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x00FFFFFFu); /* 0x120E71DA: push 0xffffff */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x120E71DF: push dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_120E6AB8); /* 0x120E71E2: call 0x120e6ab8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E71E7: mov edi, eax */
    /* test edi, edi */ /* 0x120E71E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E71EB: js 0x120e72f0 */
L_120E71F1:
    eax = MEM32(ebp + (-0x4)); /* 0x120E71F1: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E71F4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E71F6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E71F7: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E71FA: push eax */
    eax = ebp + (-0x2C); /* 0x120E71FB: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008710u); /* 0x120E71FE: push 0x12008710 */
    PUSH32(esp, eax); /* 0x120E7203: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7204: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E7209: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E720C: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E720E: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x120E7211: push 0 */
    PUSH32(esp, 0xCu); /* 0x120E7213: push 0xc */
    PUSH32(esp, eax); /* 0x120E7215: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7216: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E7219: push eax */
    ecx = ebp + (-0x2C); /* 0x120E721A: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C1006); /* 0x120E721D: call 0x121c1006 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x120E7222: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120E7225: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E7227: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7228: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120E722B: push eax */
    eax = ebp + (-0x2C); /* 0x120E722C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x12008800u); /* 0x120E722F: push 0x12008800 */
    PUSH32(esp, eax); /* 0x120E7234: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7235: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120E723A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E723D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120E7240: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7260; /* 0x120E7242: je 0x120e7260 */
L_120E7244:
    eax = MEM32(ecx); /* 0x120E7244: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E7246: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120E7247: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120E724A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E7260; /* 0x120E724E: jmp 0x120e7260 */
L_120E7250:
    eax = ebp + (-0x2C); /* 0x120E7250: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120086ECu); /* 0x120E7253: push 0x120086ec */
    PUSH32(esp, eax); /* 0x120E7258: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7259: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E725E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E725F: pop ecx */
L_120E7260:
    eax = ebp + (-0x2C); /* 0x120E7260: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120086E4u); /* 0x120E7263: push 0x120086e4 */
    PUSH32(esp, eax); /* 0x120E7268: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7269: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E726E: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x120E726F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7270: pop ecx */
    /* cmp ebx, MEM32(ebp + (-0x50)) */ /* 0x120E7271: cmp ebx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E70BF; /* 0x120E7274: jb 0x120e70bf */
L_120E727A:
    eax = ebp + (-0x2C); /* 0x120E727A: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120086E0u); /* 0x120E727D: push 0x120086e0 */
    PUSH32(esp, eax); /* 0x120E7282: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E7283: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E7288: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7289: pop ecx */
    ecx = MEM32(ebp + (-0x30)); /* 0x120E728A: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E728D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E728E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ecx; /* 0x120E7290: mov dword ptr [ebp - 0x30], ecx */
    /* cmp ecx, MEM32(ebp + (-0x88)) */ /* 0x120E7293: cmp ecx, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x88)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7054; /* 0x120E7299: jb 0x120e7054 */
L_120E729F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120E729F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E72BD; /* 0x120E72A3: je 0x120e72bd */
L_120E72A5:
    ecx = ebp + (-0x2C); /* 0x120E72A5: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C1364); /* 0x120E72A8: call 0x121c1364 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x120E72AD: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x120086D8u); /* 0x120E72B0: push 0x120086d8 */
    PUSH32(esp, eax); /* 0x120E72B5: push eax */
    RECOMP_CALL(sub_121C12DC); /* 0x120E72B6: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E72BB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E72BC: pop ecx */
L_120E72BD:
    eax = MEM32(ebp + (-0x2C)); /* 0x120E72BD: mov eax, dword ptr [ebp - 0x2c] */
    esi = MEM32(ebp + 0x10); /* 0x120E72C0: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E72C3: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E72C4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120E72C5: push eax */
    RECOMP_CALL(sub_120192FE); /* 0x120E72C6: call 0x120192fe */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120E72CB: mov edi, eax */
    /* test edi, edi */ /* 0x120E72CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E72F0; /* 0x120E72CF: js 0x120e72f0 */
L_120E72D1:
    eax = MEM32(esi); /* 0x120E72D1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x120E72D3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E72D5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E72D6: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x120E72D9: push dword ptr [ebp - 0x2c] */
    esi = eax; /* 0x120E72DC: mov esi, eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x120E72DE: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x120E72E1: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x120E72E2: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x2C)); /* 0x120E72E7: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E72EA: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + ecx) = (uint8_t)(LO8(ebx)); /* 0x120E72ED: mov byte ptr [esi + ecx], bl */
L_120E72F0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E72F0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120E72F3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E72F8: pop ecx */
    ecx = ebp + (-0x2C); /* 0x120E72F9: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C0FD6); /* 0x120E72FC: call 0x121c0fd6 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x120E7301: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120E7303: pop edi */
    ebx = POP32_VAL(esp); /* 0x120E7304: pop ebx */
    goto L_120E731B; /* 0x120E7305: jmp 0x120e731b */
L_120E7307:
    edi = 0x80004005u; /* 0x120E7307: mov edi, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_120E72F0; /* 0x120E730C: jmp 0x120e72f0 */
L_120E730E:
    ecx = ebp + (-0x2C); /* 0x120E730E: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_121C0FD6); /* 0x120E7311: call 0x121c0fd6 */
    RECOMP_FLAGS_IN();
    eax = 0x8876086Cu; /* 0x120E7316: mov eax, 0x8876086c */
L_120E731B:
    esi = POP32_VAL(esp); /* 0x120E731B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E731C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E731D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E7325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7325u);

L_120E7325:
    edi = edi; /* 0x120E7325: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7327: push ebp */
    ebp = esp; /* 0x120E7328: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120E732A: push ebx */
    PUSH32(esp, esi); /* 0x120E732B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E732C: mov esi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E732F: movzx eax, word ptr [esi + 0xa] */
    PUSH32(esp, edi); /* 0x120E7333: push edi */
    /* test LO16(eax), LO16(eax) */ /* 0x120E7334: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7386; /* 0x120E7337: je 0x120e7386 */
L_120E7339:
    edx = MEM32(ebp + 0x8); /* 0x120E7339: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0xC); /* 0x120E733C: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0xC); /* 0x120E733F: add ecx, dword ptr [edx + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E7342: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E7344: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edi), LO16(eax) */ /* 0x120E7346: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E73DD; /* 0x120E7349: jae 0x120e73dd */
L_120E734F:
    edi = ecx + 0x4; /* 0x120E734F: lea edi, [ecx + 4] */
L_120E7352:
    /* cmp MEM32(edi), 0 */ /* 0x120E7352: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7378; /* 0x120E7355: je 0x120e7378 */
L_120E7357:
    ecx = MEM32(edx + 0xC); /* 0x120E7357: mov ecx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi); /* 0x120E735A: add ecx, dword ptr [edi] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120E735C: push dword ptr [ebp + 0x1c] */
    eax = (uint32_t)MEM16(ecx + 0x8); /* 0x120E735F: movzx eax, word ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14)); /* 0x120E7363: imul eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7367: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x120E736A: push eax */
    PUSH32(esp, ecx); /* 0x120E736B: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E736C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x120E736F: push edx */
    RECOMP_CALL(sub_120E7325); /* 0x120E7370: call 0x120e7325 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x120E7375: mov edx, dword ptr [ebp + 8] */
L_120E7378:
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E7378: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E737C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120E737D: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x120E7380: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7352; /* 0x120E7382: jb 0x120e7352 */
L_120E7384:
    goto L_120E73DD; /* 0x120E7384: jmp 0x120e73dd */
L_120E7386:
    eax = MEM32(ebp + 0xC); /* 0x120E7386: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E7389: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), MEM16(eax + 0x4) */ /* 0x120E738B: cmp cx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E739B; /* 0x120E738F: jne 0x120e739b */
L_120E7391:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7391: movzx ecx, word ptr [esi + 6] */
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E7395: movzx eax, word ptr [esi + 4] */
    goto L_120E73BC; /* 0x120E7399: jmp 0x120e73bc */
L_120E739B:
    PUSH32(esp, 3); /* 0x120E739B: push 3 */
    eax = POP32_VAL(esp); /* 0x120E739D: pop eax */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x120E739E: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E73AF; /* 0x120E73A1: je 0x120e73af */
L_120E73A3:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E73A3: movzx ecx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120E73A7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E73A9: movzx eax, word ptr [esi + 4] */
    goto L_120E73B9; /* 0x120E73AD: jmp 0x120e73b9 */
L_120E73AF:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E73AF: movzx ecx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120E73B3: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E73B5: movzx eax, word ptr [esi + 6] */
L_120E73B9:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x120E73B9: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
L_120E73BC:
    edx = MEM32(ebp + 0x14); /* 0x120E73BC: mov edx, dword ptr [ebp + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E73BF: imul ecx, eax */
    eax = MEM32(ebp + 0x18); /* 0x120E73C2: mov eax, dword ptr [ebp + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E73C5: imul ecx, edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120E73C8: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E73CA: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E73CE: movzx ecx, word ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E73D2: imul ecx, eax */
    eax = MEM32(ebp + 0x1C); /* 0x120E73D5: mov eax, dword ptr [ebp + 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E73D8: imul ecx, edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120E73DB: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_120E73DD:
    edi = POP32_VAL(esp); /* 0x120E73DD: pop edi */
    esi = POP32_VAL(esp); /* 0x120E73DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E73DF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120E73E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120E73E1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120E73E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E73E9u);

L_120E73E9:
    edi = edi; /* 0x120E73E9: mov edi, edi */
    PUSH32(esp, ebx); /* 0x120E73EB: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E73EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120E73EE: push edi */
    /* test ecx, ecx */ /* 0x120E73EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7406; /* 0x120E73F1: je 0x120e7406 */
L_120E73F3:
    edi = esi; /* 0x120E73F3: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120E73F5: sub edi, edx */
    _flag_k = FK_CMP;
L_120E73F7:
    SET_LO8(ebx, MEM8(edx)); /* 0x120E73F7: mov bl, byte ptr [edx] */
    /* cmp MEM8(edi + edx), LO8(ebx) */ /* 0x120E73F9: cmp byte ptr [edi + edx], bl */
    _flag_a = (uint32_t)(MEM8(edi + edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_120E741A; /* 0x120E73FC: jl 0x120e741a */
L_120E73FE:
    if (CMP_G(_flag_a, _flag_b)) goto L_120E7415; /* 0x120E73FE: jg 0x120e7415 */
L_120E7400:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7400: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E7401: inc edx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x120E7402: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E73F7; /* 0x120E7404: jb 0x120e73f7 */
L_120E7406:
    /* cmp eax, ecx */ /* 0x120E7406: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E7410; /* 0x120E7408: jne 0x120e7410 */
L_120E740A:
    /* cmp MEM8(eax + esi), 0 */ /* 0x120E740A: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E7415; /* 0x120E740E: jne 0x120e7415 */
L_120E7410:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7410: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E7412:
    edi = POP32_VAL(esp); /* 0x120E7412: pop edi */
    ebx = POP32_VAL(esp); /* 0x120E7413: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E7414: ret  */
L_120E7415:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7415: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7417: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120E7412; /* 0x120E7418: jmp 0x120e7412 */
L_120E741A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120E741A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120E7412; /* 0x120E741D: jmp 0x120e7412 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120E7424(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7424u);

L_120E7424:
    edi = edi; /* 0x120E7424: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7426: push ebp */
    ebp = esp; /* 0x120E7427: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E7429: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x120E742A: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x14); /* 0x120E742D: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x120E7430: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120E7431: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120E7434: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E7435: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E7438: push edi */
    PUSH32(esp, 5); /* 0x120E7439: push 5 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120E743B: mov dword ptr [ebp - 4], ecx */
    MEM32(ecx) = edx; /* 0x120E743E: mov dword ptr [ecx], edx */
    edi = ecx + 0x4; /* 0x120E7440: lea edi, [ecx + 4] */
    ecx = POP32_VAL(esp); /* 0x120E7443: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120E7444: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120E7446: mov ecx, dword ptr [ebp - 4] */
    edi = ecx + 0x34; /* 0x120E7449: lea edi, [ecx + 0x34] */
    PUSH32(esp, edi); /* 0x120E744C: push edi */
    esi = ecx + 0x2C; /* 0x120E744D: lea esi, [ecx + 0x2c] */
    PUSH32(esp, esi); /* 0x120E7450: push esi */
    PUSH32(esp, 1); /* 0x120E7451: push 1 */
    MEM32(ecx + 0x1C) = eax; /* 0x120E7453: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x120E7456: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x120E7459: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E745A: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x20) = eax; /* 0x120E745D: mov dword ptr [ecx + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7460: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120E7462: push edx */
    MEM32(ecx + 0x18) = ebx; /* 0x120E7463: mov dword ptr [ecx + 0x18], ebx */
    MEM32(ecx + 0x24) = eax; /* 0x120E7466: mov dword ptr [ecx + 0x24], eax */
    MEM32(esi) = eax; /* 0x120E7469: mov dword ptr [esi], eax */
    MEM32(edi) = eax; /* 0x120E746B: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_120E7325); /* 0x120E746D: call 0x120e7325 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E7472: movzx eax, word ptr [ebx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi)); /* 0x120E7476: imul eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120E7479: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x28) = eax; /* 0x120E747C: mov dword ptr [ecx + 0x28], eax */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E747F: movzx eax, word ptr [ebx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x120E7483: imul eax, dword ptr [edi] */
    MEM32(ecx + 0x30) = eax; /* 0x120E7486: mov dword ptr [ecx + 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7489: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x120E748B: pop edi */
    esi = POP32_VAL(esp); /* 0x120E748C: pop esi */
    MEM32(ecx + 0x38) = eax; /* 0x120E748D: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x120E7490: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x40) = eax; /* 0x120E7493: mov dword ptr [ecx + 0x40], eax */
    eax = ecx; /* 0x120E7496: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x120E7498: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E7499: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E749A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E74A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E74A2u);

L_120E74A2:
    edi = edi; /* 0x120E74A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E74A4: push ebp */
    ebp = esp; /* 0x120E74A5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120E74A7: push ecx */
    PUSH32(esp, ebx); /* 0x120E74A8: push ebx */
    PUSH32(esp, esi); /* 0x120E74A9: push esi */
    PUSH32(esp, edi); /* 0x120E74AA: push edi */
    esi = ecx; /* 0x120E74AB: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E74AD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x38), edi */ /* 0x120E74AF: cmp dword ptr [esi + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E74F7; /* 0x120E74B2: je 0x120e74f7 */
L_120E74B4:
    eax = MEM32(esi + 0x18); /* 0x120E74B4: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E74B7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x120E74B9: mov ecx, edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x120E74BB: mov dword ptr [ebp - 4], edi */
    /* cmp LO16(edx), MEM16(eax + 0xA) */ /* 0x120E74BE: cmp dx, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E74EE; /* 0x120E74C2: jae 0x120e74ee */
L_120E74C4:
    eax = MEM32(esi + 0x38); /* 0x120E74C4: mov eax, dword ptr [esi + 0x38] */
    ebx = MEM32(eax + ecx * 4); /* 0x120E74C7: mov ebx, dword ptr [eax + ecx*4] */
    /* test ebx, ebx */ /* 0x120E74CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E74DF; /* 0x120E74CC: je 0x120e74df */
L_120E74CE:
    ecx = ebx; /* 0x120E74CE: mov ecx, ebx */
    RECOMP_CALL(sub_120E74A2); /* 0x120E74D0: call 0x120e74a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E74D5: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120E74D6: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E74DB: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x120E74DC: mov ecx, dword ptr [ebp - 4] */
L_120E74DF:
    eax = MEM32(esi + 0x18); /* 0x120E74DF: mov eax, dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120E74E2: movzx eax, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E74E6: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120E74E7: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, eax */ /* 0x120E74EA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E74C4; /* 0x120E74EC: jb 0x120e74c4 */
L_120E74EE:
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x120E74EE: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_121BF388); /* 0x120E74F1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E74F6: pop ecx */
L_120E74F7:
    /* cmp MEM32(esi + 0x3C), edi */ /* 0x120E74F7: cmp dword ptr [esi + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7534; /* 0x120E74FA: je 0x120e7534 */
L_120E74FC:
    eax = MEM32(esi + 0x18); /* 0x120E74FC: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E74FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), MEM16(eax + 0x8) */ /* 0x120E7501: cmp cx, word ptr [eax + 8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E752B; /* 0x120E7505: jae 0x120e752b */
L_120E7507:
    eax = MEM32(esi + 0x3C); /* 0x120E7507: mov eax, dword ptr [esi + 0x3c] */
    ebx = MEM32(eax + edi * 4); /* 0x120E750A: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x120E750D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E751F; /* 0x120E750F: je 0x120e751f */
L_120E7511:
    ecx = ebx; /* 0x120E7511: mov ecx, ebx */
    RECOMP_CALL(sub_120E74A2); /* 0x120E7513: call 0x120e74a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E7518: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120E7519: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E751E: pop ecx */
L_120E751F:
    eax = MEM32(esi + 0x18); /* 0x120E751F: mov eax, dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E7522: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E7526: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x120E7527: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7507; /* 0x120E7529: jb 0x120e7507 */
L_120E752B:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x120E752B: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_121BF388); /* 0x120E752E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E7533: pop ecx */
L_120E7534:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x120E7534: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF388); /* 0x120E7537: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E753C: pop ecx */
    edi = POP32_VAL(esp); /* 0x120E753D: pop edi */
    esi = POP32_VAL(esp); /* 0x120E753E: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E753F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E7540: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E7541: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E7547(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7547u);

L_120E7547:
    edi = edi; /* 0x120E7547: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7549: push ebp */
    ebp = esp; /* 0x120E754A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120E754C: push ebx */
    PUSH32(esp, esi); /* 0x120E754D: push esi */
    esi = ecx; /* 0x120E754E: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x120E7550: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x120E7553: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E7554: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E7557: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = edi; /* 0x120E7559: mov dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E755C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), MEM16(eax + 0xA) */ /* 0x120E755E: cmp cx, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E75A8; /* 0x120E7562: jae 0x120e75a8 */
L_120E7564:
    ecx = MEM32(esi + 0x38); /* 0x120E7564: mov ecx, dword ptr [esi + 0x38] */
L_120E7567:
    ecx = MEM32(ecx + ebx * 4); /* 0x120E7567: mov ecx, dword ptr [ecx + ebx*4] */
    PUSH32(esp, edi); /* 0x120E756A: push edi */
    RECOMP_CALL(sub_120E7547); /* 0x120E756B: call 0x120e7547 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x120E7570: mov eax, dword ptr [esi + 0x38] */
    edx = MEM32(eax + ebx * 4); /* 0x120E7573: mov edx, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E7576: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7578: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(edx + 0x8) */ /* 0x120E757A: cmp ax, word ptr [edx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(edx + 0x18); /* 0x120E757E: mov eax, dword ptr [edx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E7581: movzx eax, word ptr [eax + 8] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7585: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7588: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x120E7589: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E758C: add ecx, 4 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E758F: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x2C)); /* 0x120E7592: imul ecx, dword ptr [edx + 0x2c] */
    eax = MEM32(esi + 0x18); /* 0x120E7596: mov eax, dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120E7599: movzx eax, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E759D: inc ebx */
    _flag_k = FK_INC;
    edi = edi + ecx * 4; /* 0x120E759E: lea edi, [edi + ecx*4] */
    ecx = MEM32(esi + 0x38); /* 0x120E75A1: mov ecx, dword ptr [esi + 0x38] */
    /* cmp ebx, eax */ /* 0x120E75A4: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7567; /* 0x120E75A6: jb 0x120e7567 */
L_120E75A8:
    edi = POP32_VAL(esp); /* 0x120E75A8: pop edi */
    esi = POP32_VAL(esp); /* 0x120E75A9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E75AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E75AC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120E75AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E75AE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E75B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E75B6u);

L_120E75B6:
    edi = edi; /* 0x120E75B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E75B8: push ebp */
    ebp = esp; /* 0x120E75B9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120E75BB: push ebx */
    PUSH32(esp, esi); /* 0x120E75BC: push esi */
    PUSH32(esp, edi); /* 0x120E75BD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E75BE: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E75C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E75C3: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E75C4: stosd dword ptr es:[edi], eax */
    ebx = ecx; /* 0x120E75C5: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E75C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E75C9: stosd dword ptr es:[edi], eax */
    /* cmp MEM32(ebx + 0x4), esi */ /* 0x120E75CA: cmp dword ptr [ebx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E75D9; /* 0x120E75CD: je 0x120e75d9 */
L_120E75CF:
    eax = MEM32(ebx); /* 0x120E75CF: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0xC); /* 0x120E75D1: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x4); /* 0x120E75D4: add eax, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    goto L_120E75DB; /* 0x120E75D7: jmp 0x120e75db */
L_120E75D9:
    eax = esi; /* 0x120E75D9: mov eax, esi */
L_120E75DB:
    edi = MEM32(ebp + 0x8); /* 0x120E75DB: mov edi, dword ptr [ebp + 8] */
    MEM32(edi) = eax; /* 0x120E75DE: mov dword ptr [edi], eax */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E75E0: movzx eax, word ptr [ebx + 8] */
    MEM32(edi + 0x4) = eax; /* 0x120E75E4: mov dword ptr [edi + 4], eax */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120E75E7: movzx eax, word ptr [ebx + 0xa] */
    MEM32(edi + 0x8) = eax; /* 0x120E75EB: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)MEM16(ebx + 0xC); /* 0x120E75EE: movzx eax, word ptr [ebx + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x120E75F2: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E75F5: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax); /* 0x120E75F8: movzx eax, word ptr [eax] */
    MEM32(edi + 0x10) = eax; /* 0x120E75FB: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E75FE: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x120E7601: movzx eax, word ptr [eax + 2] */
    MEM32(edi + 0x14) = eax; /* 0x120E7605: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E7608: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120E760B: movzx eax, word ptr [eax + 4] */
    MEM32(edi + 0x18) = eax; /* 0x120E760F: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E7612: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x120E7615: movzx eax, word ptr [eax + 6] */
    MEM32(edi + 0x1C) = eax; /* 0x120E7619: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E761C: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E761F: movzx eax, word ptr [eax + 8] */
    MEM32(edi + 0x20) = eax; /* 0x120E7623: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebx + 0x18); /* 0x120E7626: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120E7629: movzx eax, word ptr [eax + 0xa] */
    MEM32(edi + 0x24) = eax; /* 0x120E762D: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(edi + 0x20); /* 0x120E7630: mov eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x18)); /* 0x120E7633: imul eax, dword ptr [edi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x120E7637: imul eax, dword ptr [edi + 0x1c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E763B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E763B: shl eax, 2 */
    MEM32(edi + 0x28) = eax; /* 0x120E763E: mov dword ptr [edi + 0x28], eax */
    /* cmp MEM32(ebx + 0x14), esi */ /* 0x120E7641: cmp dword ptr [ebx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E764E; /* 0x120E7644: je 0x120e764e */
L_120E7646:
    eax = MEM32(ebx); /* 0x120E7646: mov eax, dword ptr [ebx] */
    esi = MEM32(eax + 0xC); /* 0x120E7648: mov esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x14); /* 0x120E764B: add esi, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
L_120E764E:
    MEM32(edi + 0x2C) = esi; /* 0x120E764E: mov dword ptr [edi + 0x2c], esi */
    edi = POP32_VAL(esp); /* 0x120E7651: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7652: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7653: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120E7655: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120E7656: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E7657: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E765F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E765Fu);

L_120E765F:
    edi = edi; /* 0x120E765F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7661: push ebp */
    ebp = esp; /* 0x120E7662: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x120E7664: mov eax, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120E7667: movzx eax, word ptr [eax + 0xa] */
    edx = MEM32(ebp + 0x8); /* 0x120E766B: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, eax */ /* 0x120E766E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7676; /* 0x120E7670: jb 0x120e7676 */
L_120E7672:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7672: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E767C; /* 0x120E7674: jmp 0x120e767c */
L_120E7676:
    eax = MEM32(ecx + 0x38); /* 0x120E7676: mov eax, dword ptr [ecx + 0x38] */
    eax = MEM32(eax + edx * 4); /* 0x120E7679: mov eax, dword ptr [eax + edx*4] */
L_120E767C:
    ebp = POP32_VAL(esp); /* 0x120E767C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E767D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E7685(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7685u);

L_120E7685:
    edi = edi; /* 0x120E7685: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7687: push ebp */
    ebp = esp; /* 0x120E7688: mov ebp, esp */
    /* cmp MEM32(ecx + 0x14), 0 */ /* 0x120E768A: cmp dword ptr [ecx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120E768E: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E76DC; /* 0x120E768F: je 0x120e76dc */
L_120E7691:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7691: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x1C); /* 0x120E7693: mov esi, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7696: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(ecx + 0x8) */ /* 0x120E7698: cmp ax, word ptr [ecx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E769C: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E769F: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    edx = edx & 0xFFFFFFFDu; /* 0x120E76A0: and edx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120E76A3: add edx, 4 */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x120E76A6: imul edx, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x120E76AA: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x120E76AA: shl edx, 2 */
    /* test esi, esi */ /* 0x120E76AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E76B8; /* 0x120E76AF: jne 0x120e76b8 */
L_120E76B1:
    eax = 0x80004005u; /* 0x120E76B1: mov eax, 0x80004005 */
    goto L_120E76DE; /* 0x120E76B6: jmp 0x120e76de */
L_120E76B8:
    eax = (uint32_t)MEM16(ecx + 0xC); /* 0x120E76B8: movzx eax, word ptr [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x120E76BC: push eax */
    eax = MEM32(ecx); /* 0x120E76BD: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x120E76BF: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x14); /* 0x120E76C2: add eax, dword ptr [ecx + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ecx + 0x20)); /* 0x120E76C5: push dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120E76C8: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E76CA: push eax */
    eax = (uint32_t)MEM16(ecx + 0xA); /* 0x120E76CB: movzx eax, word ptr [ecx + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x120E76CF: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E76D2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120E76D3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(esi); /* 0x120E76D6: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E76D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E76DE; /* 0x120E76DA: js 0x120e76de */
L_120E76DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E76DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E76DE:
    esi = POP32_VAL(esp); /* 0x120E76DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E76DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E76E0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E76E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E76E8u);

L_120E76E8:
    edi = edi; /* 0x120E76E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E76EA: push ebp */
    ebp = esp; /* 0x120E76EB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120E76ED: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120E76F0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120E76F2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ecx + 0x4) = eax; /* 0x120E76F4: mov dword ptr [ecx + 4], eax */
    ebp = POP32_VAL(esp); /* 0x120E76F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E76F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E7700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7700u);

L_120E7700:
    edi = edi; /* 0x120E7700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7702: push ebp */
    ebp = esp; /* 0x120E7703: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x120E7705: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x120E7708: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120E770B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120E770C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120E770F: push edi */
    PUSH32(esp, 4); /* 0x120E7710: push 4 */
    ecx = POP32_VAL(esp); /* 0x120E7712: pop ecx */
    edi = 0x12018314u; /* 0x120E7713: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7718: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120E771A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120E772F; /* 0x120E771C: je 0x120e772f */
L_120E771E:
    esi = MEM32(ebp + 0xC); /* 0x120E771E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120E7721: push 4 */
    ecx = POP32_VAL(esp); /* 0x120E7723: pop ecx */
    edi = 0x12001D68u; /* 0x120E7724: mov edi, 0x12001d68 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7729: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120E772B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120E773E; /* 0x120E772D: jne 0x120e773e */
L_120E772F:
    ecx = MEM32(ebp + 0x8); /* 0x120E772F: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x120E7732: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120E7734: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120E7736: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120E7737: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E773A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E7743; /* 0x120E773C: jmp 0x120e7743 */
L_120E773E:
    eax = 0x80004002u; /* 0x120E773E: mov eax, 0x80004002 */
L_120E7743:
    edi = POP32_VAL(esp); /* 0x120E7743: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7744: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E7745: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120E7746: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120E774E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E774Eu);

L_120E774E:
    edi = edi; /* 0x120E774E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7750: push ebp */
    ebp = esp; /* 0x120E7751: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120E7753: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x120E7756: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x8); /* 0x120E7759: mov eax, dword ptr [eax + 8] */
    ebp = POP32_VAL(esp); /* 0x120E775C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120E775D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120E7765(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7765u);

L_120E7765:
    edi = edi; /* 0x120E7765: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7767: push ebp */
    ebp = esp; /* 0x120E7768: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120E776A: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120E776D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E7778; /* 0x120E776F: jne 0x120e7778 */
L_120E7771:
    eax = 0x8876086Cu; /* 0x120E7771: mov eax, 0x8876086c */
    goto L_120E77C2; /* 0x120E7776: jmp 0x120e77c2 */
L_120E7778:
    PUSH32(esp, esi); /* 0x120E7778: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120E7779: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x10); /* 0x120E777C: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, 0x1Cu */ /* 0x120E777F: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120E77BC; /* 0x120E7782: jb 0x120e77bc */
L_120E7784:
    edx = MEM32(esi + 0xC); /* 0x120E7784: mov edx, dword ptr [esi + 0xc] */
    /* cmp MEM32(edx), 0x1Cu */ /* 0x120E7787: cmp dword ptr [edx], 0x1c */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120E77BC; /* 0x120E778A: jb 0x120e77bc */
L_120E778C:
    /* cmp MEM32(edx + 0x4), eax */ /* 0x120E778C: cmp dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E77BC; /* 0x120E778F: jae 0x120e77bc */
L_120E7791:
    PUSH32(esp, edi); /* 0x120E7791: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7792: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x120E7794: mov edi, ecx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E7796: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E7797: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120E7798: stosd dword ptr es:[edi], eax */
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x120E7799: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x120E779D: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E77A8; /* 0x120E779E: je 0x120e77a8 */
L_120E77A0:
    eax = MEM32(esi + 0xC); /* 0x120E77A0: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x120E77A3: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    goto L_120E77AA; /* 0x120E77A6: jmp 0x120e77aa */
L_120E77A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E77A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E77AA:
    MEM32(ecx) = eax; /* 0x120E77AA: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x120E77AC: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x120E77AF: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0xC); /* 0x120E77B2: mov eax, dword ptr [edx + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x120E77B5: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E77B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E77C1; /* 0x120E77BA: jmp 0x120e77c1 */
L_120E77BC:
    eax = 0x88760B59u; /* 0x120E77BC: mov eax, 0x88760b59 */
L_120E77C1:
    esi = POP32_VAL(esp); /* 0x120E77C1: pop esi */
L_120E77C2:
    ebp = POP32_VAL(esp); /* 0x120E77C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E77C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E77CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E77CBu);

L_120E77CB:
    edi = edi; /* 0x120E77CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E77CD: push ebp */
    ebp = esp; /* 0x120E77CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E77D0: push esi */
    PUSH32(esp, edi); /* 0x120E77D1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120E77D2: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E77D5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x1C), esi */ /* 0x120E77D7: cmp dword ptr [edi + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E77F6; /* 0x120E77DA: jbe 0x120e77f6 */
L_120E77DC:
    ecx = MEM32(edi + 0x18); /* 0x120E77DC: mov ecx, dword ptr [edi + 0x18] */
    ecx = MEM32(ecx + esi * 4); /* 0x120E77DF: mov ecx, dword ptr [ecx + esi*4] */
    PUSH32(esp, 0); /* 0x120E77E2: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E77E4: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120E7685); /* 0x120E77E7: call 0x120e7685 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E77EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E77F8; /* 0x120E77EE: js 0x120e77f8 */
L_120E77F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E77F0: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x1C) */ /* 0x120E77F1: cmp esi, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E77DC; /* 0x120E77F4: jb 0x120e77dc */
L_120E77F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E77F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E77F8:
    edi = POP32_VAL(esp); /* 0x120E77F8: pop edi */
    esi = POP32_VAL(esp); /* 0x120E77F9: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E77FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120E77FB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120E7803(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7803u);

L_120E7803:
    edi = edi; /* 0x120E7803: mov edi, edi */
    PUSH32(esp, esi); /* 0x120E7805: push esi */
    PUSH32(esp, edi); /* 0x120E7806: push edi */
    esi = ecx; /* 0x120E7807: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E7809: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x120089C8u; /* 0x120E780B: mov dword ptr [esi], 0x120089c8 */
    /* cmp MEM32(esi + 0x18), edi */ /* 0x120E7811: cmp dword ptr [esi + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7844; /* 0x120E7814: je 0x120e7844 */
L_120E7816:
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x120E7816: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E783B; /* 0x120E7819: jbe 0x120e783b */
L_120E781B:
    PUSH32(esp, ebx); /* 0x120E781B: push ebx */
L_120E781C:
    eax = MEM32(esi + 0x18); /* 0x120E781C: mov eax, dword ptr [esi + 0x18] */
    ebx = MEM32(eax + edi * 4); /* 0x120E781F: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x120E7822: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7834; /* 0x120E7824: je 0x120e7834 */
L_120E7826:
    ecx = ebx; /* 0x120E7826: mov ecx, ebx */
    RECOMP_CALL(sub_120E74A2); /* 0x120E7828: call 0x120e74a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x120E782D: push ebx */
    RECOMP_CALL(sub_121BF388); /* 0x120E782E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E7833: pop ecx */
L_120E7834:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E7834: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x1C) */ /* 0x120E7835: cmp edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E781C; /* 0x120E7838: jb 0x120e781c */
L_120E783A:
    ebx = POP32_VAL(esp); /* 0x120E783A: pop ebx */
L_120E783B:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x120E783B: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_121BF388); /* 0x120E783E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E7843: pop ecx */
L_120E7844:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x120E7844: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x120E7847: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x120E784C: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_121BF388); /* 0x120E784F: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120E7854: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120E7855: pop ecx */
    edi = POP32_VAL(esp); /* 0x120E7856: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7857: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120E7858: ret  */
    RECOMP_REGS_OUT();
}

void sub_120E785E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E785Eu);

L_120E785E:
    edi = edi; /* 0x120E785E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7860: push ebp */
    ebp = esp; /* 0x120E7861: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7863: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7866: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7869: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E786C: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E786E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7871: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x120E7872: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7878: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7879: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7881(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7881u);

L_120E7881:
    edi = edi; /* 0x120E7881: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7883: push ebp */
    ebp = esp; /* 0x120E7884: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7886: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x120E7889: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E78AB; /* 0x120E788B: je 0x120e78ab */
L_120E788D:
    ecx = MEM32(ebp + 0x14); /* 0x120E788D: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E7890: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7891: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120E7894: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E7895: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = edx; /* 0x120E7897: mov edi, edx */
L_120E7899:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7899: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + ecx), eax */ /* 0x120E789B: cmp dword ptr [esi + ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E789E: setne al */
    MEM32(ecx) = eax; /* 0x120E78A1: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E78A3: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E78A6: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7899; /* 0x120E78A7: jne 0x120e7899 */
L_120E78A9:
    edi = POP32_VAL(esp); /* 0x120E78A9: pop edi */
    esi = POP32_VAL(esp); /* 0x120E78AA: pop esi */
L_120E78AB:
    eax = MEM32(ebp + 0x8); /* 0x120E78AB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E78AE: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E78B0: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E78B1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E78B4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E78B7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x120E78B8: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E78BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E78BF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E78C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E78C7u);

L_120E78C7:
    edi = edi; /* 0x120E78C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E78C9: push ebp */
    ebp = esp; /* 0x120E78CA: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E78CC: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x120E78CF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7900; /* 0x120E78D1: je 0x120e7900 */
L_120E78D3:
    ecx = MEM32(ebp + 0x14); /* 0x120E78D3: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(0.0); /* 0x120E78D6: fldz  */
    PUSH32(esp, esi); /* 0x120E78D8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E78D9: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120E78DC: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E78DD: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = edx; /* 0x120E78DF: mov edi, edx */
L_120E78E1:
    fp_push(*(float*)&MEM32(esi + ecx)); /* 0x120E78E1: fld dword ptr [esi + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E78E4: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E78E6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E78E8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E78F2; /* 0x120E78EB: jnp 0x120e78f2 */
L_120E78ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E78ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E78EF: inc eax */
    _flag_k = FK_INC;
    goto L_120E78F4; /* 0x120E78F0: jmp 0x120e78f4 */
L_120E78F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E78F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E78F4:
    MEM32(ecx) = eax; /* 0x120E78F4: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E78F6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E78F9: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E78E1; /* 0x120E78FA: jne 0x120e78e1 */
L_120E78FC:
    edi = POP32_VAL(esp); /* 0x120E78FC: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E78FD: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x120E78FF: pop esi */
L_120E7900:
    eax = MEM32(ebp + 0x8); /* 0x120E7900: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7903: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7905: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7906: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7909: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E790C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x120E790D: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7914: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E791C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E791Cu);

L_120E791C:
    edi = edi; /* 0x120E791C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E791E: push ebp */
    ebp = esp; /* 0x120E791F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7921: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7924: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7927: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E792A: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E792C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E792F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x120E7930: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7936: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7937: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E793F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E793Fu);

L_120E793F:
    edi = edi; /* 0x120E793F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7941: push ebp */
    ebp = esp; /* 0x120E7942: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E7944: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E7945: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x120E7948: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E794A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E794A: shl ecx, 2 */
    /* test ecx, ecx */ /* 0x120E794D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E796B; /* 0x120E794F: je 0x120e796b */
L_120E7951:
    edx = MEM32(ebp + 0x14); /* 0x120E7951: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7954: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7955: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120E7958: sub edi, edx */
    _flag_k = FK_CMP;
L_120E795A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E795A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + edx), eax */ /* 0x120E795C: cmp dword ptr [edi + edx], eax */
    _flag_a = (uint32_t)(MEM32(edi + edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E795F: setne al */
    MEM32(edx) = eax; /* 0x120E7962: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120E7964: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7967: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E795A; /* 0x120E7968: jne 0x120e795a */
L_120E796A:
    edi = POP32_VAL(esp); /* 0x120E796A: pop edi */
L_120E796B:
    eax = MEM32(ebp + 0x8); /* 0x120E796B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E796E: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120E7970: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7971: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7974: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7977: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x120E7978: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x120E797E: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E797F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7980: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7988u);

L_120E7988:
    edi = edi; /* 0x120E7988: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E798A: push ebp */
    ebp = esp; /* 0x120E798B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120E798D: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x120E7990: mov edx, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120E7993: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7995: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7995: shl ecx, 2 */
    MEM16(ebp + 0x18) = _fpu_cw; /* 0x120E7998: fnstcw word ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x18); /* 0x120E799B: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E799E: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E79A3: mov dword ptr [ebp - 4], eax */
    _fpu_cw = MEM16(ebp + (-0x4)); /* 0x120E79A6: fldcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0x18); /* 0x120E79A9: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E79AC: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x120E79AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E79D6; /* 0x120E79B1: je 0x120e79d6 */
L_120E79B3:
    PUSH32(esp, esi); /* 0x120E79B3: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E79B4: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E79B7: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E79B8: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x120E79BB: sub edi, esi */
    _flag_k = FK_CMP;
L_120E79BD:
    fp_push(*(float*)&MEM32(edi + esi)); /* 0x120E79BD: fld dword ptr [edi + esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E79C0: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120E79C3: fld dword ptr [ebp - 8] */
    MEM32(ebp + 0x14) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E79C6: fistp dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x120E79C9: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi) = eax; /* 0x120E79CC: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E79CE: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E79D1: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E79BD; /* 0x120E79D2: jne 0x120e79bd */
L_120E79D4:
    edi = POP32_VAL(esp); /* 0x120E79D4: pop edi */
    esi = POP32_VAL(esp); /* 0x120E79D5: pop esi */
L_120E79D6:
    _fpu_cw = MEM16(ebp + (-0xC)); /* 0x120E79D6: fldcw word ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120E79D9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E79DC: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E79DE: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E79DF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E79E2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E79E5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x120E79E6: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E79EC: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E79ED: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E79F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E79F5u);

L_120E79F5:
    edi = edi; /* 0x120E79F5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E79F7: push ebp */
    ebp = esp; /* 0x120E79F8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E79FA: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E79FD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7A00: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E7A03: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7A05: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7A08: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x178)); /* 0x120E7A09: call dword ptr [ecx + 0x178] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7A0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7A10: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7A18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7A18u);

L_120E7A18:
    edi = edi; /* 0x120E7A18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7A1A: push ebp */
    ebp = esp; /* 0x120E7A1B: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7A1D: mov edx, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120E7A20: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7A22: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7A22: shl ecx, 2 */
    /* test ecx, ecx */ /* 0x120E7A25: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7A4B; /* 0x120E7A27: je 0x120e7a4b */
L_120E7A29:
    PUSH32(esp, esi); /* 0x120E7A29: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E7A2A: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7A2D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7A2E: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x120E7A31: sub edi, esi */
    _flag_k = FK_CMP;
L_120E7A33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7A33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + esi), eax */ /* 0x120E7A35: cmp dword ptr [edi + esi], eax */
    _flag_a = (uint32_t)(MEM32(edi + esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7A38: setne al */
    MEM32(ebp + 0x18) = eax; /* 0x120E7A3B: mov dword ptr [ebp + 0x18], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x120E7A3E: fild dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120E7A41: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E7A43: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7A46: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7A33; /* 0x120E7A47: jne 0x120e7a33 */
L_120E7A49:
    edi = POP32_VAL(esp); /* 0x120E7A49: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7A4A: pop esi */
L_120E7A4B:
    eax = MEM32(ebp + 0x8); /* 0x120E7A4B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7A4E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7A50: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7A51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7A54: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7A57: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x178)); /* 0x120E7A58: call dword ptr [ecx + 0x178] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7A5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7A5F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7A67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7A67u);

L_120E7A67:
    edi = edi; /* 0x120E7A67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7A69: push ebp */
    ebp = esp; /* 0x120E7A6A: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7A6C: mov edx, dword ptr [ebp + 0x18] */
    eax = edx; /* 0x120E7A6F: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E7A71: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E7A71: shl eax, 2 */
    /* test eax, eax */ /* 0x120E7A74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7A8D; /* 0x120E7A76: je 0x120e7a8d */
L_120E7A78:
    ecx = MEM32(ebp + 0x14); /* 0x120E7A78: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E7A7B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7A7C: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E7A7F: sub esi, ecx */
    _flag_k = FK_CMP;
L_120E7A81:
    fp_push((double)(int32_t)MEM32(esi + ecx)); /* 0x120E7A81: fild dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120E7A84: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E7A86: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7A89: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7A81; /* 0x120E7A8A: jne 0x120e7a81 */
L_120E7A8C:
    esi = POP32_VAL(esp); /* 0x120E7A8C: pop esi */
L_120E7A8D:
    eax = MEM32(ebp + 0x8); /* 0x120E7A8D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7A90: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7A92: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7A93: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7A96: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7A99: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x178)); /* 0x120E7A9A: call dword ptr [ecx + 0x178] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7AA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7AA1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7AA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7AA9u);

L_120E7AA9:
    edi = edi; /* 0x120E7AA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7AAB: push ebp */
    ebp = esp; /* 0x120E7AAC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7AAE: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7AB1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7AB4: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E7AB7: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7AB9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7ABC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x120E7ABD: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7AC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7AC4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7ACC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7ACCu);

L_120E7ACC:
    edi = edi; /* 0x120E7ACC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7ACE: push ebp */
    ebp = esp; /* 0x120E7ACF: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7AD1: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x120E7AD4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7AF6; /* 0x120E7AD6: je 0x120e7af6 */
L_120E7AD8:
    ecx = MEM32(ebp + 0x14); /* 0x120E7AD8: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E7ADB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7ADC: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120E7ADF: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E7AE0: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = edx; /* 0x120E7AE2: mov edi, edx */
L_120E7AE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7AE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + ecx), eax */ /* 0x120E7AE6: cmp dword ptr [esi + ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7AE9: setne al */
    MEM32(ecx) = eax; /* 0x120E7AEC: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E7AEE: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E7AF1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7AE4; /* 0x120E7AF2: jne 0x120e7ae4 */
L_120E7AF4:
    edi = POP32_VAL(esp); /* 0x120E7AF4: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7AF5: pop esi */
L_120E7AF6:
    eax = MEM32(ebp + 0x8); /* 0x120E7AF6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7AF9: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7AFB: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7AFC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7AFF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7B02: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x120E7B03: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7B09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7B0A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7B12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7B12u);

L_120E7B12:
    edi = edi; /* 0x120E7B12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7B14: push ebp */
    ebp = esp; /* 0x120E7B15: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7B17: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x120E7B1A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7B4B; /* 0x120E7B1C: je 0x120e7b4b */
L_120E7B1E:
    ecx = MEM32(ebp + 0x14); /* 0x120E7B1E: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(0.0); /* 0x120E7B21: fldz  */
    PUSH32(esp, esi); /* 0x120E7B23: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7B24: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120E7B27: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E7B28: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = edx; /* 0x120E7B2A: mov edi, edx */
L_120E7B2C:
    fp_push(*(float*)&MEM32(esi + ecx)); /* 0x120E7B2C: fld dword ptr [esi + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E7B2F: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E7B31: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E7B33: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E7B3D; /* 0x120E7B36: jnp 0x120e7b3d */
L_120E7B38:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7B38: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7B3A: inc eax */
    _flag_k = FK_INC;
    goto L_120E7B3F; /* 0x120E7B3B: jmp 0x120e7b3f */
L_120E7B3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7B3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E7B3F:
    MEM32(ecx) = eax; /* 0x120E7B3F: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E7B41: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E7B44: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7B2C; /* 0x120E7B45: jne 0x120e7b2c */
L_120E7B47:
    edi = POP32_VAL(esp); /* 0x120E7B47: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E7B48: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x120E7B4A: pop esi */
L_120E7B4B:
    eax = MEM32(ebp + 0x8); /* 0x120E7B4B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7B4E: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7B50: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7B51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7B54: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7B57: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x120E7B58: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7B5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7B5F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7B67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7B67u);

L_120E7B67:
    edi = edi; /* 0x120E7B67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7B69: push ebp */
    ebp = esp; /* 0x120E7B6A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E7B6C: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E7B6D: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x120E7B70: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7B72: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7B72: shl ecx, 2 */
    /* test ecx, ecx */ /* 0x120E7B75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7B93; /* 0x120E7B77: je 0x120e7b93 */
L_120E7B79:
    edx = MEM32(ebp + 0x14); /* 0x120E7B79: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7B7C: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7B7D: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120E7B80: sub edi, edx */
    _flag_k = FK_CMP;
L_120E7B82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7B82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + edx), eax */ /* 0x120E7B84: cmp dword ptr [edi + edx], eax */
    _flag_a = (uint32_t)(MEM32(edi + edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7B87: setne al */
    MEM32(edx) = eax; /* 0x120E7B8A: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120E7B8C: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7B8F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7B82; /* 0x120E7B90: jne 0x120e7b82 */
L_120E7B92:
    edi = POP32_VAL(esp); /* 0x120E7B92: pop edi */
L_120E7B93:
    eax = MEM32(ebp + 0x8); /* 0x120E7B93: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7B96: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120E7B98: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7B99: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7B9C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7B9F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x120E7BA0: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x120E7BA6: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E7BA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7BA8: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7BB0u);

L_120E7BB0:
    edi = edi; /* 0x120E7BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7BB2: push ebp */
    ebp = esp; /* 0x120E7BB3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7BB5: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7BB8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7BBB: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E7BBE: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7BC0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7BC3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x120E7BC4: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7BCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7BCB: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7BD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7BD3u);

L_120E7BD3:
    edi = edi; /* 0x120E7BD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7BD5: push ebp */
    ebp = esp; /* 0x120E7BD6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120E7BD8: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x120E7BDB: mov edx, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120E7BDE: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7BE0: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7BE0: shl ecx, 2 */
    MEM16(ebp + 0x18) = _fpu_cw; /* 0x120E7BE3: fnstcw word ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x18); /* 0x120E7BE6: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E7BE9: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120E7BEE: mov dword ptr [ebp - 4], eax */
    _fpu_cw = MEM16(ebp + (-0x4)); /* 0x120E7BF1: fldcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0x18); /* 0x120E7BF4: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E7BF7: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x120E7BFA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7C21; /* 0x120E7BFC: je 0x120e7c21 */
L_120E7BFE:
    PUSH32(esp, esi); /* 0x120E7BFE: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E7BFF: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7C02: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7C03: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x120E7C06: sub edi, esi */
    _flag_k = FK_CMP;
L_120E7C08:
    fp_push(*(float*)&MEM32(edi + esi)); /* 0x120E7C08: fld dword ptr [edi + esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E7C0B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120E7C0E: fld dword ptr [ebp - 8] */
    MEM32(ebp + 0x14) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E7C11: fistp dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x120E7C14: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi) = eax; /* 0x120E7C17: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E7C19: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7C1C: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7C08; /* 0x120E7C1D: jne 0x120e7c08 */
L_120E7C1F:
    edi = POP32_VAL(esp); /* 0x120E7C1F: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7C20: pop esi */
L_120E7C21:
    _fpu_cw = MEM16(ebp + (-0xC)); /* 0x120E7C21: fldcw word ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120E7C24: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7C27: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7C29: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7C2A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7C2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7C30: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x120E7C31: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E7C37: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7C38: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7C40u);

L_120E7C40:
    edi = edi; /* 0x120E7C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7C42: push ebp */
    ebp = esp; /* 0x120E7C43: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7C45: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7C48: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7C4B: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x120E7C4E: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7C50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7C53: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x120E7C54: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7C5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7C5B: ret 0x14 */
    RECOMP_REGS_OUT();
}
