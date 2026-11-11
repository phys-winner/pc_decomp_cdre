#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_141E9F81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9F81u);

L_141E9F81:
    edi = edi; /* 0x141E9F81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9F83: push ebp */
    ebp = esp; /* 0x141E9F84: mov ebp, esp */
    edx = MEM32(ecx); /* 0x141E9F86: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x141E9F88: push esi */
    PUSH32(esp, edi); /* 0x141E9F89: push edi */
    /* test edx, edx */ /* 0x141E9F8A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9FB3; /* 0x141E9F8C: je 0x141e9fb3 */
L_141E9F8E:
    eax = MEM32(ecx + 0x4); /* 0x141E9F8E: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x141E9F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9FB3; /* 0x141E9F93: je 0x141e9fb3 */
L_141E9F95:
    ecx = MEM32(ebp + 0xC); /* 0x141E9F95: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(edx + 0x1C) */ /* 0x141E9F98: cmp ecx, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E9FB3; /* 0x141E9F9B: jae 0x141e9fb3 */
L_141E9F9D:
    edi = MEM32(ebp + 0x8); /* 0x141E9F9D: mov edi, dword ptr [ebp + 8] */
    esi = eax + ecx * 4; /* 0x141E9FA0: lea esi, [eax + ecx*4] */
L_141E9FA3:
    eax = MEM32(esi); /* 0x141E9FA3: mov eax, dword ptr [esi] */
    /* cmp MEM32(edx + eax), edi */ /* 0x141E9FA5: cmp dword ptr [edx + eax], edi */
    _flag_a = (uint32_t)(MEM32(edx + eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9FBC; /* 0x141E9FA8: je 0x141e9fbc */
L_141E9FAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E9FAA: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x141E9FAB: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edx + 0x1C) */ /* 0x141E9FAE: cmp ecx, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9FA3; /* 0x141E9FB1: jb 0x141e9fa3 */
L_141E9FB3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E9FB3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9FB6:
    edi = POP32_VAL(esp); /* 0x141E9FB6: pop edi */
    esi = POP32_VAL(esp); /* 0x141E9FB7: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E9FB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E9FB9: ret 8 */
L_141E9FBC:
    eax = ecx; /* 0x141E9FBC: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_141E9FB6; /* 0x141E9FBE: jmp 0x141e9fb6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E9FC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9FC5u);

L_141E9FC5:
    eax = MEM32(ecx); /* 0x141E9FC5: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x141E9FC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9FCF; /* 0x141E9FC9: je 0x141e9fcf */
L_141E9FCB:
    eax = MEM32(eax + 0x1C); /* 0x141E9FCB: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9FCE: ret  */
L_141E9FCF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9FCF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9FD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9FD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9FD7u);

L_141E9FD7:
    edi = edi; /* 0x141E9FD7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9FD9: push ebp */
    ebp = esp; /* 0x141E9FDA: mov ebp, esp */
    edx = MEM32(ecx); /* 0x141E9FDC: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x141E9FDE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9FFA; /* 0x141E9FE0: je 0x141e9ffa */
L_141E9FE2:
    ecx = MEM32(ecx + 0x4); /* 0x141E9FE2: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x141E9FE5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9FFA; /* 0x141E9FE7: je 0x141e9ffa */
L_141E9FE9:
    eax = MEM32(ebp + 0x8); /* 0x141E9FE9: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0x1C), eax */ /* 0x141E9FEC: cmp dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E9FFA; /* 0x141E9FEF: jbe 0x141e9ffa */
L_141E9FF1:
    eax = MEM32(ecx + eax * 4); /* 0x141E9FF1: mov eax, dword ptr [ecx + eax*4] */
    eax = eax + edx + 0x8; /* 0x141E9FF4: lea eax, [eax + edx + 8] */
    goto L_141E9FFC; /* 0x141E9FF8: jmp 0x141e9ffc */
L_141E9FFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9FFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9FFC:
    ebp = POP32_VAL(esp); /* 0x141E9FFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E9FFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EA005(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EA005u);

L_141EA005:
    edi = edi; /* 0x141EA005: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EA007: push ebp */
    ebp = esp; /* 0x141EA008: mov ebp, esp */
    edx = MEM32(ecx); /* 0x141EA00A: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x141EA00C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA028; /* 0x141EA00E: je 0x141ea028 */
L_141EA010:
    ecx = MEM32(ecx + 0x4); /* 0x141EA010: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x141EA013: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA028; /* 0x141EA015: je 0x141ea028 */
L_141EA017:
    eax = MEM32(ebp + 0x8); /* 0x141EA017: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0x1C), eax */ /* 0x141EA01A: cmp dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EA028; /* 0x141EA01D: jbe 0x141ea028 */
L_141EA01F:
    eax = MEM32(ecx + eax * 4); /* 0x141EA01F: mov eax, dword ptr [ecx + eax*4] */
    eax = MEM32(eax + edx + 0x4); /* 0x141EA022: mov eax, dword ptr [eax + edx + 4] */
    goto L_141EA02A; /* 0x141EA026: jmp 0x141ea02a */
L_141EA028:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EA028: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EA02A:
    ebp = POP32_VAL(esp); /* 0x141EA02A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141EA02B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EA033(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EA033u);

L_141EA033:
    edi = edi; /* 0x141EA033: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EA035: push ebp */
    ebp = esp; /* 0x141EA036: mov ebp, esp */
    edx = MEM32(ecx); /* 0x141EA038: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x141EA03A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA055; /* 0x141EA03C: je 0x141ea055 */
L_141EA03E:
    ecx = MEM32(ecx + 0x4); /* 0x141EA03E: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x141EA041: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA055; /* 0x141EA043: je 0x141ea055 */
L_141EA045:
    eax = MEM32(ebp + 0x8); /* 0x141EA045: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0x1C), eax */ /* 0x141EA048: cmp dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EA055; /* 0x141EA04B: jbe 0x141ea055 */
L_141EA04D:
    eax = MEM32(ecx + eax * 4); /* 0x141EA04D: mov eax, dword ptr [ecx + eax*4] */
    eax = MEM32(edx + eax); /* 0x141EA050: mov eax, dword ptr [edx + eax] */
    goto L_141EA057; /* 0x141EA053: jmp 0x141ea057 */
L_141EA055:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EA055: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EA057:
    ebp = POP32_VAL(esp); /* 0x141EA057: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141EA058: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EA060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EA060u);

L_141EA060:
    edi = edi; /* 0x141EA060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EA062: push ebp */
    ebp = esp; /* 0x141EA063: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141EA065: push ebx */
    PUSH32(esp, esi); /* 0x141EA066: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141EA067: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x141EA06A: mov ebx, ecx */
    /* test esi, esi */ /* 0x141EA06C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EA077; /* 0x141EA06E: jne 0x141ea077 */
L_141EA070:
    eax = 0x80004005u; /* 0x141EA070: mov eax, 0x80004005 */
    goto L_141EA0C0; /* 0x141EA075: jmp 0x141ea0c0 */
L_141EA077:
    PUSH32(esp, edi); /* 0x141EA077: push edi */
    PUSH32(esp, 0); /* 0x141EA078: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EA07A: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x141EA07D: mov ecx, esi */
    RECOMP_CALL(sub_141E9F81); /* 0x141EA07F: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141EA084: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141EA086: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EA090; /* 0x141EA089: jne 0x141ea090 */
L_141EA08B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EA08B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EA08D: inc eax */
    _flag_k = FK_INC;
    goto L_141EA0BF; /* 0x141EA08E: jmp 0x141ea0bf */
L_141EA090:
    PUSH32(esp, edi); /* 0x141EA090: push edi */
    ecx = esi; /* 0x141EA091: mov ecx, esi */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EA093: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141EA098: push edi */
    ecx = esi; /* 0x141EA099: mov ecx, esi */
    MEM32(ebp + 0x8) = eax; /* 0x141EA09B: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_141EA005); /* 0x141EA09E: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141EA0A3: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x141EA0A5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x141EA0A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EA0B3; /* 0x141EA0AA: jne 0x141ea0b3 */
L_141EA0AC:
    eax = 0x80004005u; /* 0x141EA0AC: mov eax, 0x80004005 */
    goto L_141EA0BF; /* 0x141EA0B1: jmp 0x141ea0bf */
L_141EA0B3:
    PUSH32(esp, eax); /* 0x141EA0B3: push eax */
    PUSH32(esp, ecx); /* 0x141EA0B4: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EA0B5: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x141EA0B8: mov ecx, ebx */
    RECOMP_CALL(sub_141E9C14); /* 0x141EA0BA: call 0x141e9c14 */
    RECOMP_FLAGS_IN();
L_141EA0BF:
    edi = POP32_VAL(esp); /* 0x141EA0BF: pop edi */
L_141EA0C0:
    esi = POP32_VAL(esp); /* 0x141EA0C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EA0C1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141EA0C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EA0C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EA0CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EA0CBu);

L_141EA0CB:
    edi = edi; /* 0x141EA0CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EA0CD: push ebp */
    ebp = esp; /* 0x141EA0CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x141EA0D0: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141EA0D6: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141EA0DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141EA0DD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x141EA0E0: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x141EA0E3: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141EA0E6: push ebx */
    PUSH32(esp, esi); /* 0x141EA0E7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141EA0E8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141EA0EB: push edi */
    MEM32(ebp + (-0x80)) = eax; /* 0x141EA0EC: mov dword ptr [ebp - 0x80], eax */
    eax = edx; /* 0x141EA0EF: mov eax, edx */
    PUSH32(esp, 0x38u); /* 0x141EA0F1: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141EA0F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x141EA0F5: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141EA0F8: pop ebx */
    MEM32(ebp + (-0x54)) = esi; /* 0x141EA0F9: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x141EA0FC: mov dword ptr [ebp - 0x5c], ecx */
    MEM8(ebp + (-0x49)) = (uint8_t)(LO8(ecx)); /* 0x141EA0FF: mov byte ptr [ebp - 0x49], cl */
    /* cmp eax, ebx */ /* 0x141EA102: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141EA10C; /* 0x141EA104: jae 0x141ea10c */
L_141EA106:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x141EA106: sub ebx, eax */
    _flag_k = FK_CMP;
    SET_LO8(eax, LO8(ecx)); /* 0x141EA108: mov al, cl */
    goto L_141EA116; /* 0x141EA10A: jmp 0x141ea116 */
L_141EA10C:
    PUSH32(esp, 0x78u); /* 0x141EA10C: push 0x78 */
    ebx = POP32_VAL(esp); /* 0x141EA10E: pop ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x141EA10F: sub ebx, eax */
    _flag_k = FK_CMP;
    SET_LO8(eax, 1); /* 0x141EA111: mov al, 1 */
    MEM8(ebp + (-0x49)) = (uint8_t)(LO8(eax)); /* 0x141EA113: mov byte ptr [ebp - 0x49], al */
L_141EA116:
    edi = ebx + edx + 0x8; /* 0x141EA116: lea edi, [ebx + edx + 8] */
    if (6u) _cf = (((edi) >> 5) & 1u); /* 0x141EA11A: shr edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 6u; /* 0x141EA11A: shr edi, 6 */
    MEM32(ebp + (-0x74)) = ebx; /* 0x141EA11D: mov dword ptr [ebp - 0x74], ebx */
    MEM32(ebp + (-0x6C)) = 0x67452301u; /* 0x141EA120: mov dword ptr [ebp - 0x6c], 0x67452301 */
    MEM32(ebp + (-0x68)) = 0xEFCDAB89u; /* 0x141EA127: mov dword ptr [ebp - 0x68], 0xefcdab89 */
    MEM32(ebp + (-0x64)) = 0x98BADCFEu; /* 0x141EA12E: mov dword ptr [ebp - 0x64], 0x98badcfe */
    MEM32(ebp + (-0x60)) = 0x10325476u; /* 0x141EA135: mov dword ptr [ebp - 0x60], 0x10325476 */
    MEM32(ebp + (-0x88)) = edi; /* 0x141EA13C: mov dword ptr [ebp - 0x88], edi */
    /* test LO8(eax), LO8(eax) */ /* 0x141EA142: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA151; /* 0x141EA144: je 0x141ea151 */
L_141EA146:
    esi = edi + (-0x2); /* 0x141EA146: lea esi, [edi - 2] */
    MEM32(ebp + (-0x70)) = esi; /* 0x141EA149: mov dword ptr [ebp - 0x70], esi */
    esi = MEM32(ebp + (-0x54)); /* 0x141EA14C: mov esi, dword ptr [ebp - 0x54] */
    goto L_141EA15A; /* 0x141EA14F: jmp 0x141ea15a */
L_141EA151:
    ecx = edi + (-0x1); /* 0x141EA151: lea ecx, [edi - 1] */
    MEM32(ebp + (-0x70)) = ecx; /* 0x141EA154: mov dword ptr [ebp - 0x70], ecx */
    ecx = MEM32(ebp + (-0x5C)); /* 0x141EA157: mov ecx, dword ptr [ebp - 0x5c] */
L_141EA15A:
    MEM32(ebp + (-0x78)) = ecx; /* 0x141EA15A: mov dword ptr [ebp - 0x78], ecx */
    /* test edi, edi */ /* 0x141EA15D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA92C; /* 0x141EA15F: je 0x141ea92c */
L_141EA165:
    /* cmp ecx, MEM32(ebp + (-0x70)) */ /* 0x141EA165: cmp ecx, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EA216; /* 0x141EA168: jne 0x141ea216 */
L_141EA16E:
    /* test LO8(eax), LO8(eax) */ /* 0x141EA16E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EA1B1; /* 0x141EA170: jne 0x141ea1b1 */
L_141EA172:
    eax = edi + (-0x1); /* 0x141EA172: lea eax, [edi - 1] */
    /* cmp ecx, eax */ /* 0x141EA175: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EA20E; /* 0x141EA177: jne 0x141ea20e */
L_141EA17D:
    esi = edx; /* 0x141EA17D: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x5C)); /* 0x141EA17F: sub esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_CMP;
    eax = edx; /* 0x141EA182: mov eax, edx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x141EA184: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x141EA184: shl eax, 3 */
    PUSH32(esp, esi); /* 0x141EA187: push esi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x141EA188: push dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x44)) = eax; /* 0x141EA18B: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x40); /* 0x141EA18E: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x141EA191: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EA192: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141EA197: push ebx */
    eax = ebp + esi + (-0x40); /* 0x141EA198: lea eax, [ebp + esi - 0x40] */
    PUSH32(esp, 0x14002768u); /* 0x141EA19C: push 0x14002768 */
    PUSH32(esp, eax); /* 0x141EA1A1: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EA1A2: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x141EA1A7: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141EA1AA: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x141EA1AD: add eax, eax */
    _flag_k = FK_ADD;
    goto L_141EA208; /* 0x141EA1AF: jmp 0x141ea208 */
L_141EA1B1:
    eax = edi + (-0x2); /* 0x141EA1B1: lea eax, [edi - 2] */
    /* cmp ecx, eax */ /* 0x141EA1B4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EA1E8; /* 0x141EA1B6: jne 0x141ea1e8 */
L_141EA1B8:
    esi = edx; /* 0x141EA1B8: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x5C)); /* 0x141EA1BA: sub esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_CMP;
    eax = ebp + (-0x44); /* 0x141EA1BD: lea eax, [ebp - 0x44] */
    PUSH32(esp, esi); /* 0x141EA1C0: push esi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x141EA1C1: push dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x141EA1C4: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EA1C5: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = ebx + (-0x38); /* 0x141EA1CA: lea eax, [ebx - 0x38] */
    PUSH32(esp, eax); /* 0x141EA1CD: push eax */
    eax = ebp + esi + (-0x44); /* 0x141EA1CE: lea eax, [ebp + esi - 0x44] */
    PUSH32(esp, 0x14002768u); /* 0x141EA1D2: push 0x14002768 */
    PUSH32(esp, eax); /* 0x141EA1D7: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EA1D8: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = edi + (-0x1); /* 0x141EA1DD: lea eax, [edi - 1] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141EA1E0: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x70)) = eax; /* 0x141EA1E3: mov dword ptr [ebp - 0x70], eax */
    goto L_141EA20E; /* 0x141EA1E6: jmp 0x141ea20e */
L_141EA1E8:
    eax = edi + (-0x1); /* 0x141EA1E8: lea eax, [edi - 1] */
    /* cmp ecx, eax */ /* 0x141EA1EB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EA20E; /* 0x141EA1ED: jne 0x141ea20e */
L_141EA1EF:
    eax = edx; /* 0x141EA1EF: mov eax, edx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x141EA1F1: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x141EA1F1: shl eax, 3 */
    PUSH32(esp, 0xEu); /* 0x141EA1F4: push 0xe */
    MEM32(ebp + (-0x44)) = eax; /* 0x141EA1F6: mov dword ptr [ebp - 0x44], eax */
    esi = ebx + 0x14002730; /* 0x141EA1F9: lea esi, [ebx + 0x14002730] */
    ecx = POP32_VAL(esp); /* 0x141EA1FF: pop ecx */
    edi = ebp + (-0x40); /* 0x141EA200: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141EA203: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = edx + edx; /* 0x141EA205: lea eax, [edx + edx] */
L_141EA208:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x141EA208: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x141EA20B: mov dword ptr [ebp - 8], eax */
L_141EA20E:
    ebx = ebp + (-0x44); /* 0x141EA20E: lea ebx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = ebx; /* 0x141EA211: mov dword ptr [ebp - 0x48], ebx */
    goto L_141EA21B; /* 0x141EA214: jmp 0x141ea21b */
L_141EA216:
    ebx = esi; /* 0x141EA216: mov ebx, esi */
    MEM32(ebp + (-0x48)) = esi; /* 0x141EA218: mov dword ptr [ebp - 0x48], esi */
L_141EA21B:
    edi = MEM32(ebp + (-0x68)); /* 0x141EA21B: mov edi, dword ptr [ebp - 0x68] */
    esi = MEM32(ebp + (-0x64)); /* 0x141EA21E: mov esi, dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x141EA221: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA223: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    ecx = ecx & MEM32(ebp + (-0x60)); /* 0x141EA225: and ecx, dword ptr [ebp - 0x60] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA228: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA22A: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA22C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx); /* 0x141EA22E: add ecx, dword ptr [ebx] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x6C)); /* 0x141EA230: mov eax, dword ptr [ebp - 0x6c] */
    edx = ecx + eax + (-0x28955B88); /* 0x141EA233: lea edx, [ecx + eax - 0x28955b88] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA23A: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA23D: add edx, edi */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EA23F: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA241: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA243: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EA245: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA247: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA249: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x4); /* 0x141EA24B: add ecx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x60)); /* 0x141EA24E: mov eax, dword ptr [ebp - 0x60] */
    esi = ecx + eax + (-0x173848AA); /* 0x141EA251: lea esi, [ecx + eax - 0x173848aa] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA258: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA25B: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA25D: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA25F: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA261: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA263: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA265: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA267: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x8); /* 0x141EA269: add ecx, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x64)); /* 0x141EA26C: mov eax, dword ptr [ebp - 0x64] */
    edi = ecx + eax + 0x242070DB; /* 0x141EA26F: lea edi, [ecx + eax + 0x242070db] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA276: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA279: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA27B: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA27D: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA27F: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA281: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA283: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA285: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0xC); /* 0x141EA287: add ecx, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x68)); /* 0x141EA28A: mov eax, dword ptr [ebp - 0x68] */
    ebx = ecx + eax + (-0x3E423112); /* 0x141EA28D: lea ebx, [ecx + eax - 0x3e423112] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA294: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA297: add ebx, edi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA299: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EA29B: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EA29D: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA29F: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA2A1: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA2A3: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA2A5: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x141EA2A8: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA2AB: mov eax, ebx */
    edx = ecx + edx + (-0xA83F051); /* 0x141EA2AD: lea edx, [ecx + edx - 0xa83f051] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA2B4: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA2B7: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA2B9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EA2BB: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA2BD: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA2BF: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA2C1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA2C3: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x14); /* 0x141EA2C6: add ecx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    esi = ecx + esi + 0x4787C62A; /* 0x141EA2C9: lea esi, [ecx + esi + 0x4787c62a] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA2D0: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA2D3: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA2D5: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA2D7: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA2D9: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA2DB: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA2DD: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA2DF: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA2E1: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x18); /* 0x141EA2E4: add ecx, dword ptr [eax + 0x18] */
    _flag_k = FK_ADD;
    edi = ecx + edi + (-0x57CFB9ED); /* 0x141EA2E7: lea edi, [ecx + edi - 0x57cfb9ed] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA2EE: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA2F1: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA2F3: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA2F5: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA2F7: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA2F9: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA2FB: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA2FD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA2FF: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x141EA302: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA305: mov eax, edi */
    ebx = ecx + ebx + (-0x2B96AFF); /* 0x141EA307: lea ebx, [ecx + ebx - 0x2b96aff] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA30E: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA311: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EA313: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EA315: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA317: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA319: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA31B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA31D: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x141EA320: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA323: mov eax, ebx */
    edx = ecx + edx + 0x698098D8; /* 0x141EA325: lea edx, [ecx + edx + 0x698098d8] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA32C: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA32F: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA331: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EA333: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA335: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA337: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA339: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA33B: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x24); /* 0x141EA33E: add ecx, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    esi = ecx + esi + (-0x74BB0851); /* 0x141EA341: lea esi, [ecx + esi - 0x74bb0851] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA348: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA34B: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA34D: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA34F: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA351: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA353: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA355: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA357: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA359: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x28); /* 0x141EA35C: add ecx, dword ptr [eax + 0x28] */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA35F: mov eax, esi */
    edi = ecx + edi + (-0xA44F); /* 0x141EA361: lea edi, [ecx + edi - 0xa44f] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA368: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA36B: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA36D: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x141EA36F: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA371: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA373: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA375: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA377: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x2C); /* 0x141EA37A: add ecx, dword ptr [eax + 0x2c] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA37D: mov eax, edi */
    ebx = ecx + ebx + (-0x76A32842); /* 0x141EA37F: lea ebx, [ecx + ebx - 0x76a32842] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA386: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA389: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EA38B: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EA38D: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA38F: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA391: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA393: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA395: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x30); /* 0x141EA398: add ecx, dword ptr [eax + 0x30] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA39B: mov eax, ebx */
    edx = ecx + edx + 0x6B901122; /* 0x141EA39D: lea edx, [ecx + edx + 0x6b901122] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA3A4: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA3A7: add edx, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EA3A9: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA3AB: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA3AD: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA3AF: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA3B1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA3B3: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EA3B6: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x84)) = edi; /* 0x141EA3B9: mov dword ptr [ebp - 0x84], edi */
    edi = ecx + esi + (-0x2678E6D); /* 0x141EA3BF: lea edi, [ecx + esi - 0x2678e6d] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA3C6: rol edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x141EA3C9: add edi, edx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x141EA3CB: mov esi, edi */
    MEM32(ebp + (-0x58)) = ebx; /* 0x141EA3CD: mov dword ptr [ebp - 0x58], ebx */
    MEM32(ebp + (-0x7C)) = edx; /* 0x141EA3D0: mov dword ptr [ebp - 0x7c], edx */
    MEM32(ebp + (-0x50)) = edi; /* 0x141EA3D3: mov dword ptr [ebp - 0x50], edi */
    esi = ~esi; /* 0x141EA3D6: not esi */
    ecx = esi; /* 0x141EA3D8: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA3DA: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EA3DC: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA3DE: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA3E0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA3E2: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x38); /* 0x141EA3E5: add ecx, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x84)); /* 0x141EA3E8: mov eax, dword ptr [ebp - 0x84] */
    ebx = ecx + eax + (-0x5986BC72); /* 0x141EA3EE: lea ebx, [ecx + eax - 0x5986bc72] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA3F5: ror ebx, 0xf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA3F8: add ebx, edi */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x141EA3FA: mov edx, ebx */
    edx = ~edx; /* 0x141EA3FC: not edx */
    ecx = edx; /* 0x141EA3FE: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x7C)));
    ecx = ecx & MEM32(ebp + (-0x7C)); /* 0x141EA400: and ecx, dword ptr [ebp - 0x7c] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EA403: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EA405: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA407: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA409: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x3C); /* 0x141EA40C: add ecx, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x58)); /* 0x141EA40F: mov eax, dword ptr [ebp - 0x58] */
    edi = ecx + eax + 0x49B40821; /* 0x141EA412: lea edi, [ecx + eax + 0x49b40821] */
    ecx = MEM32(ebp + (-0x50)); /* 0x141EA419: mov ecx, dword ptr [ebp - 0x50] */
    eax = ecx; /* 0x141EA41C: mov eax, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x141EA41E: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA420: ror edi, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EA423: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA425: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141EA427: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA429: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x141EA42C: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x7C)); /* 0x141EA42F: mov eax, dword ptr [ebp - 0x7c] */
    esi = esi + eax + (-0x9E1DA9E); /* 0x141EA432: lea esi, [esi + eax - 0x9e1da9e] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA439: rol esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EA43C: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x141EA43E: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EA440: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA442: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x141EA444: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA446: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x18); /* 0x141EA449: add edx, dword ptr [eax + 0x18] */
    _flag_k = FK_ADD;
    edx = edx + ecx + (-0x3FBF4CC0); /* 0x141EA44C: lea edx, [edx + ecx - 0x3fbf4cc0] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA453: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EA456: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA458: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA45A: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA45C: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EA45E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA460: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA462: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA464: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x2C); /* 0x141EA467: add ecx, dword ptr [eax + 0x2c] */
    _flag_k = FK_ADD;
    ebx = ecx + ebx + 0x265E5A51; /* 0x141EA46A: lea ebx, [ecx + ebx + 0x265e5a51] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA471: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EA474: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA476: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA478: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA47A: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EA47C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA47E: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA480: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA482: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x141EA485: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA487: mov eax, edx */
    edi = ecx + edi + (-0x16493856); /* 0x141EA489: lea edi, [ecx + edi - 0x16493856] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA490: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EA493: add edi, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EA495: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA497: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA499: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA49B: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA49D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA49F: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x14); /* 0x141EA4A2: add ecx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA4A5: mov eax, ebx */
    esi = ecx + esi + (-0x29D0EFA3); /* 0x141EA4A7: lea esi, [ecx + esi - 0x29d0efa3] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA4AE: rol esi, 5 */
    ecx = ebx; /* 0x141EA4B1: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA4B3: not ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EA4B5: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA4B7: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA4B9: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA4BB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA4BD: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x28); /* 0x141EA4C0: add ecx, dword ptr [eax + 0x28] */
    _flag_k = FK_ADD;
    edx = ecx + edx + 0x2441453; /* 0x141EA4C3: lea edx, [ecx + edx + 0x2441453] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA4CA: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EA4CD: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA4CF: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA4D1: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA4D3: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EA4D5: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA4D7: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA4D9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA4DB: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x3C); /* 0x141EA4DE: add ecx, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    ebx = ecx + ebx + (-0x275E197F); /* 0x141EA4E1: lea ebx, [ecx + ebx - 0x275e197f] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA4E8: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EA4EB: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA4ED: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA4EF: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA4F1: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EA4F3: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA4F5: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA4F7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA4F9: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x141EA4FC: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA4FF: mov eax, edx */
    edi = ecx + edi + (-0x182C0438); /* 0x141EA501: lea edi, [ecx + edi - 0x182c0438] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA508: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EA50B: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA50D: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EA50F: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA511: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA513: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA515: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA517: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x24); /* 0x141EA51A: add ecx, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA51D: mov eax, ebx */
    esi = ecx + esi + 0x21E1CDE6; /* 0x141EA51F: lea esi, [ecx + esi + 0x21e1cde6] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA526: rol esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EA529: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA52B: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EA52D: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA52F: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA531: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA533: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA535: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x38); /* 0x141EA538: add ecx, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    edx = ecx + edx + (-0x3CC8F82A); /* 0x141EA53B: lea edx, [ecx + edx - 0x3cc8f82a] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA542: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EA545: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA547: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA549: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA54B: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EA54D: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA54F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA551: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA553: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0xC); /* 0x141EA556: add ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x141EA559: mov dword ptr [ebp - 0x50], edx */
    ebx = ecx + ebx + (-0xB2AF279); /* 0x141EA55C: lea ebx, [ecx + ebx - 0xb2af279] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA563: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EA566: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA568: mov ecx, esi */
    ecx = ~ecx; /* 0x141EA56A: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA56C: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EA56E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EA570: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA572: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA574: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x141EA577: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA57A: mov eax, edx */
    edi = ecx + edi + 0x455A14ED; /* 0x141EA57C: lea edi, [ecx + edi + 0x455a14ed] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA583: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EA586: add edi, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EA588: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA58A: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EA58C: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA58E: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = edi; /* 0x141EA590: mov dword ptr [ebp - 0x58], edi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA593: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA595: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EA598: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA59B: mov eax, ebx */
    edx = ecx + esi + (-0x561C16FB); /* 0x141EA59D: lea edx, [ecx + esi - 0x561c16fb] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA5A4: rol edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA5A7: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA5A9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EA5AB: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EA5AD: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EA5AF: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA5B1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA5B3: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x141EA5B6: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x50)); /* 0x141EA5B9: mov eax, dword ptr [ebp - 0x50] */
    esi = ecx + eax + (-0x3105C08); /* 0x141EA5BC: lea esi, [ecx + eax - 0x3105c08] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA5C3: rol esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA5C6: add esi, edx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EA5C8: mov ecx, edi */
    ecx = ~ecx; /* 0x141EA5CA: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EA5CC: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA5CE: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EA5D0: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA5D2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA5D4: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x141EA5D7: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    edi = ecx + ebx + 0x676F02D9; /* 0x141EA5DA: lea edi, [ecx + ebx + 0x676f02d9] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA5E1: rol edi, 0xe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA5E4: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EA5E6: mov ecx, edx */
    ecx = ~ecx; /* 0x141EA5E8: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EA5EA: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EA5EC: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EA5EE: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EA5F0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EA5F2: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x30); /* 0x141EA5F5: add ecx, dword ptr [eax + 0x30] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x58)); /* 0x141EA5F8: mov eax, dword ptr [ebp - 0x58] */
    ebx = ecx + eax + (-0x72D5B376); /* 0x141EA5FB: lea ebx, [ecx + eax - 0x72d5b376] */
    ecx = MEM32(ebp + (-0x48)); /* 0x141EA602: mov ecx, dword ptr [ebp - 0x48] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA605: ror ebx, 0xc */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA608: add ebx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA60A: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA60C: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA60E: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x14); /* 0x141EA610: add eax, dword ptr [ecx + 0x14] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x5C6BE); /* 0x141EA613: lea edx, [eax + edx - 0x5c6be] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA61A: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA61D: add edx, ebx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA61F: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA621: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA623: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x141EA625: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x788E097F); /* 0x141EA628: lea esi, [eax + esi - 0x788e097f] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA62F: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA632: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA634: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA636: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA638: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x2C); /* 0x141EA63A: add eax, dword ptr [ecx + 0x2c] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA63D: mov ecx, esi */
    edi = eax + edi + 0x6D9D6122; /* 0x141EA63F: lea edi, [eax + edi + 0x6d9d6122] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA646: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA649: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EA64B: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EA64D: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA64F: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = esi; /* 0x141EA651: mov dword ptr [ebp - 0x50], esi */
    esi = MEM32(ebp + (-0x48)); /* 0x141EA654: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x38); /* 0x141EA657: add eax, dword ptr [esi + 0x38] */
    _flag_k = FK_ADD;
    ebx = eax + ebx + (-0x21AC7F4); /* 0x141EA65A: lea ebx, [eax + ebx - 0x21ac7f4] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA661: ror ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA664: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x141EA666: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA668: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x141EA66A: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA66D: mov eax, edi */
    edx = ecx + edx + (-0x5B4115BC); /* 0x141EA66F: lea edx, [ecx + edx - 0x5b4115bc] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA676: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA679: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA67B: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA67D: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141EA67F: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x141EA681: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x50)); /* 0x141EA684: mov esi, dword ptr [ebp - 0x50] */
    esi = eax + esi + 0x4BDECFA9; /* 0x141EA687: lea esi, [eax + esi + 0x4bdecfa9] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA68E: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA691: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA693: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA695: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA697: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x1C); /* 0x141EA699: add eax, dword ptr [ecx + 0x1c] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA69C: mov ecx, esi */
    edi = eax + edi + (-0x944B4A0); /* 0x141EA69E: lea edi, [eax + edi - 0x944b4a0] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA6A5: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA6A8: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EA6AA: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EA6AC: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA6AE: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = esi; /* 0x141EA6B0: mov dword ptr [ebp - 0x50], esi */
    esi = MEM32(ebp + (-0x48)); /* 0x141EA6B3: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x28); /* 0x141EA6B6: add eax, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = eax + ebx + (-0x41404390); /* 0x141EA6B9: lea ebx, [eax + ebx - 0x41404390] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA6C0: ror ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EA6C3: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x141EA6C5: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EA6C7: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EA6C9: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA6CC: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA6CE: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + edx + 0x289B7EC6; /* 0x141EA6D0: lea edx, [ecx + edx + 0x289b7ec6] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA6D7: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EA6DA: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA6DC: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141EA6DE: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x141EA6E0: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x50)); /* 0x141EA6E2: mov esi, dword ptr [ebp - 0x50] */
    esi = eax + esi + (-0x155ED806); /* 0x141EA6E5: lea esi, [eax + esi - 0x155ed806] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA6EC: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA6EF: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA6F1: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA6F3: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA6F5: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xC); /* 0x141EA6F7: add eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EA6FA: mov ecx, esi */
    edi = eax + edi + (-0x2B10CF7B); /* 0x141EA6FC: lea edi, [eax + edi - 0x2b10cf7b] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA703: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA706: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EA708: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EA70A: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA70C: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = edx; /* 0x141EA70E: mov dword ptr [ebp - 0x58], edx */
    edx = MEM32(ebp + (-0x48)); /* 0x141EA711: mov edx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x18); /* 0x141EA714: add eax, dword ptr [edx + 0x18] */
    _flag_k = FK_ADD;
    edx = eax + ebx + 0x4881D05; /* 0x141EA717: lea edx, [eax + ebx + 0x4881d05] */
    ebx = MEM32(ebp + (-0x48)); /* 0x141EA71E: mov ebx, dword ptr [ebp - 0x48] */
    eax = MEM32(ebp + (-0x58)); /* 0x141EA721: mov eax, dword ptr [ebp - 0x58] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA724: ror edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA727: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x141EA729: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x24); /* 0x141EA72B: add ecx, dword ptr [ebx + 0x24] */
    _flag_k = FK_ADD;
    ecx = ecx + eax + (-0x262B2FC7); /* 0x141EA72E: lea ecx, [ecx + eax - 0x262b2fc7] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EA735: rol ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EA738: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA73A: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA73C: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA73E: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x30); /* 0x141EA740: add eax, dword ptr [ebx + 0x30] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x1924661B); /* 0x141EA743: lea esi, [eax + esi - 0x1924661b] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA74A: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EA74D: add esi, ecx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA74F: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA751: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA753: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x3C); /* 0x141EA755: add eax, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    edi = eax + edi + 0x1FA27CF8; /* 0x141EA758: lea edi, [eax + edi + 0x1fa27cf8] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA75F: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA762: add edi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA764: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA766: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA768: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x141EA76A: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x3B53A99B); /* 0x141EA76D: lea edx, [eax + edx - 0x3b53a99b] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA774: ror edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA777: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA779: mov eax, esi */
    eax = ~eax; /* 0x141EA77B: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EA77D: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA77F: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x141EA781: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + (-0xBD6DDBC); /* 0x141EA783: lea ecx, [eax + ecx - 0xbd6ddbc] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EA78A: rol ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EA78D: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA78F: mov eax, edi */
    eax = ~eax; /* 0x141EA791: not eax */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EA793: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA795: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x1C); /* 0x141EA797: add eax, dword ptr [ebx + 0x1c] */
    _flag_k = FK_ADD;
    esi = eax + esi + 0x432AFF97; /* 0x141EA79A: lea esi, [eax + esi + 0x432aff97] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA7A1: rol esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EA7A4: add esi, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA7A6: mov eax, edx */
    eax = ~eax; /* 0x141EA7A8: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EA7AA: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA7AC: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x38); /* 0x141EA7AE: add eax, dword ptr [ebx + 0x38] */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x546BDC59); /* 0x141EA7B1: lea edi, [eax + edi - 0x546bdc59] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA7B8: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA7BB: add edi, esi */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EA7BD: mov eax, ecx */
    eax = ~eax; /* 0x141EA7BF: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EA7C1: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EA7C3: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x14); /* 0x141EA7C5: add eax, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x36C5FC7); /* 0x141EA7C8: lea edx, [eax + edx - 0x36c5fc7] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA7CF: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA7D2: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA7D4: mov eax, esi */
    eax = ~eax; /* 0x141EA7D6: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EA7D8: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA7DA: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x30); /* 0x141EA7DC: add eax, dword ptr [ebx + 0x30] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + 0x655B59C3; /* 0x141EA7DF: lea ecx, [eax + ecx + 0x655b59c3] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EA7E6: rol ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EA7E9: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA7EB: mov eax, edi */
    eax = ~eax; /* 0x141EA7ED: not eax */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EA7EF: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA7F1: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0xC); /* 0x141EA7F3: add eax, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x70F3336E); /* 0x141EA7F6: lea esi, [eax + esi - 0x70f3336e] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA7FD: rol esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EA800: add esi, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA802: mov eax, edx */
    eax = ~eax; /* 0x141EA804: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EA806: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA808: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x28); /* 0x141EA80A: add eax, dword ptr [ebx + 0x28] */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x100B83); /* 0x141EA80D: lea edi, [eax + edi - 0x100b83] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA814: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EA817: add edi, esi */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EA819: mov eax, ecx */
    eax = ~eax; /* 0x141EA81B: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EA81D: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EA81F: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x4); /* 0x141EA821: add eax, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x7A7BA22F); /* 0x141EA824: lea edx, [eax + edx - 0x7a7ba22f] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA82B: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA82E: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EA830: mov eax, esi */
    eax = ~eax; /* 0x141EA832: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EA834: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA836: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x20); /* 0x141EA838: add eax, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + 0x6FA87E4F; /* 0x141EA83B: lea ecx, [eax + ecx + 0x6fa87e4f] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EA842: rol ecx, 6 */
    eax = edi; /* 0x141EA845: mov eax, edi */
    eax = ~eax; /* 0x141EA847: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EA849: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EA84B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA84D: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x3C); /* 0x141EA84F: add eax, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    ebx = eax + esi + (-0x1D31920); /* 0x141EA852: lea ebx, [eax + esi - 0x1d31920] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EA859: rol ebx, 0xa */
    esi = MEM32(ebp + (-0x48)); /* 0x141EA85C: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x141EA85F: add ebx, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EA861: mov eax, edx */
    eax = ~eax; /* 0x141EA863: not eax */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x141EA865: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EA867: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x18); /* 0x141EA869: add eax, dword ptr [esi + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 0x40u; /* 0x141EA86C: add dword ptr [ebp - 0x5c], 0x40 */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x5CFEBCEC); /* 0x141EA870: lea edi, [eax + edi - 0x5cfebcec] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EA877: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EA87A: add edi, ebx */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EA87C: mov eax, ecx */
    eax = ~eax; /* 0x141EA87E: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EA880: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EA882: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x34); /* 0x141EA884: add eax, dword ptr [esi + 0x34] */
    _flag_k = FK_ADD;
    edx = eax + edx + 0x4E0811A1; /* 0x141EA887: lea edx, [eax + edx + 0x4e0811a1] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA88E: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EA891: add edx, edi */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA893: mov eax, ebx */
    eax = ~eax; /* 0x141EA895: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EA897: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EA899: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x141EA89B: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x141EA89E: mov dword ptr [ebp - 0x50], edx */
    esi = eax + ecx + (-0x8AC817E); /* 0x141EA8A1: lea esi, [eax + ecx - 0x8ac817e] */
    ecx = MEM32(ebp + (-0x48)); /* 0x141EA8A8: mov ecx, dword ptr [ebp - 0x48] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EA8AB: rol esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EA8AE: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) + esi; /* 0x141EA8B0: add dword ptr [ebp - 0x6c], esi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EA8B3: mov eax, edi */
    eax = ~eax; /* 0x141EA8B5: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EA8B7: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EA8B9: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x2C); /* 0x141EA8BB: add eax, dword ptr [ecx + 0x2c] */
    _flag_k = FK_ADD;
    edx = eax + ebx + (-0x42C50DCB); /* 0x141EA8BE: lea edx, [eax + ebx - 0x42c50dcb] */
    ebx = MEM32(ebp + (-0x50)); /* 0x141EA8C5: mov ebx, dword ptr [ebp - 0x50] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EA8C8: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EA8CB: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + edx; /* 0x141EA8CD: add dword ptr [ebp - 0x60], edx */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EA8D0: mov eax, ebx */
    eax = ~eax; /* 0x141EA8D2: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EA8D4: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EA8D6: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x8); /* 0x141EA8D8: add eax, dword ptr [ecx + 8] */
    _flag_k = FK_ADD;
    esi = ~esi; /* 0x141EA8DB: not esi */
    ecx = eax + edi + 0x2AD7D2BB; /* 0x141EA8DD: lea ecx, [eax + edi + 0x2ad7d2bb] */
    eax = MEM32(ebp + (-0x48)); /* 0x141EA8E4: mov eax, dword ptr [ebp - 0x48] */
    edi = MEM32(ebp + (-0x88)); /* 0x141EA8E7: mov edi, dword ptr [ebp - 0x88] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EA8ED: rol ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EA8F0: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) + ecx; /* 0x141EA8F2: add dword ptr [ebp - 0x64], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141EA8F5: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edx)); _flag_b = (uint32_t)((esi ^ edx));
    esi = esi ^ edx; /* 0x141EA8F7: xor esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x24); /* 0x141EA8F9: add esi, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x141EA8FC: mov edx, dword ptr [ebp + 0xc] */
    eax = esi + ebx + (-0x14792C6F); /* 0x141EA8FF: lea eax, [esi + ebx - 0x14792c6f] */
    esi = MEM32(ebp + (-0x54)); /* 0x141EA906: mov esi, dword ptr [ebp - 0x54] */
    ebx = MEM32(ebp + (-0x74)); /* 0x141EA909: mov ebx, dword ptr [ebp - 0x74] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x141EA90C: ror eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141EA90F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) + eax; /* 0x141EA911: add dword ptr [ebp - 0x68], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x78)); /* 0x141EA914: mov ecx, dword ptr [ebp - 0x78] */
    SET_LO8(eax, MEM8(ebp + (-0x49))); /* 0x141EA917: mov al, byte ptr [ebp - 0x49] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141EA91A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x141EA91B: add esi, 0x40 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x78)) = ecx; /* 0x141EA91E: mov dword ptr [ebp - 0x78], ecx */
    MEM32(ebp + (-0x54)) = esi; /* 0x141EA921: mov dword ptr [ebp - 0x54], esi */
    /* cmp ecx, edi */ /* 0x141EA924: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EA165; /* 0x141EA926: jb 0x141ea165 */
L_141EA92C:
    edi = MEM32(ebp + (-0x80)); /* 0x141EA92C: mov edi, dword ptr [ebp - 0x80] */
    ecx = MEM32(ebp + (-0x4)); /* 0x141EA92F: mov ecx, dword ptr [ebp - 4] */
    esi = ebp + (-0x6C); /* 0x141EA932: lea esi, [ebp - 0x6c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EA935: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EA936: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EA937: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EA938: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x141EA939: pop edi */
    esi = POP32_VAL(esp); /* 0x141EA93A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141EA93B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141EA93D: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141EA93E: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EA943: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EA944: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141EA94C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EA94Cu);

L_141EA94C:
    edi = edi; /* 0x141EA94C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EA94E: push ebp */
    ebp = esp; /* 0x141EA94F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x141EA951: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141EA957: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141EA95C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141EA95E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x141EA961: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x141EA964: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141EA967: push ebx */
    PUSH32(esp, esi); /* 0x141EA968: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141EA969: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141EA96C: push edi */
    MEM32(ebp + (-0x80)) = eax; /* 0x141EA96D: mov dword ptr [ebp - 0x80], eax */
    eax = edx; /* 0x141EA970: mov eax, edx */
    PUSH32(esp, 0x38u); /* 0x141EA972: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141EA974: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x141EA976: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141EA979: pop ebx */
    MEM32(ebp + (-0x54)) = esi; /* 0x141EA97A: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x141EA97D: mov dword ptr [ebp - 0x5c], ecx */
    MEM8(ebp + (-0x49)) = (uint8_t)(LO8(ecx)); /* 0x141EA980: mov byte ptr [ebp - 0x49], cl */
    /* cmp eax, ebx */ /* 0x141EA983: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141EA98D; /* 0x141EA985: jae 0x141ea98d */
L_141EA987:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x141EA987: sub ebx, eax */
    _flag_k = FK_CMP;
    SET_LO8(eax, LO8(ecx)); /* 0x141EA989: mov al, cl */
    goto L_141EA997; /* 0x141EA98B: jmp 0x141ea997 */
L_141EA98D:
    PUSH32(esp, 0x78u); /* 0x141EA98D: push 0x78 */
    ebx = POP32_VAL(esp); /* 0x141EA98F: pop ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x141EA990: sub ebx, eax */
    _flag_k = FK_CMP;
    SET_LO8(eax, 1); /* 0x141EA992: mov al, 1 */
    MEM8(ebp + (-0x49)) = (uint8_t)(LO8(eax)); /* 0x141EA994: mov byte ptr [ebp - 0x49], al */
L_141EA997:
    edi = ebx + edx + 0x8; /* 0x141EA997: lea edi, [ebx + edx + 8] */
    if (6u) _cf = (((edi) >> 5) & 1u); /* 0x141EA99B: shr edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 6u; /* 0x141EA99B: shr edi, 6 */
    MEM32(ebp + (-0x74)) = ebx; /* 0x141EA99E: mov dword ptr [ebp - 0x74], ebx */
    MEM32(ebp + (-0x6C)) = 0x67452301u; /* 0x141EA9A1: mov dword ptr [ebp - 0x6c], 0x67452301 */
    MEM32(ebp + (-0x68)) = 0xEFCDAB89u; /* 0x141EA9A8: mov dword ptr [ebp - 0x68], 0xefcdab89 */
    MEM32(ebp + (-0x64)) = 0x98BADCFEu; /* 0x141EA9AF: mov dword ptr [ebp - 0x64], 0x98badcfe */
    MEM32(ebp + (-0x60)) = 0x10325476u; /* 0x141EA9B6: mov dword ptr [ebp - 0x60], 0x10325476 */
    MEM32(ebp + (-0x88)) = edi; /* 0x141EA9BD: mov dword ptr [ebp - 0x88], edi */
    /* test LO8(eax), LO8(eax) */ /* 0x141EA9C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EA9D2; /* 0x141EA9C5: je 0x141ea9d2 */
L_141EA9C7:
    esi = edi + (-0x2); /* 0x141EA9C7: lea esi, [edi - 2] */
    MEM32(ebp + (-0x70)) = esi; /* 0x141EA9CA: mov dword ptr [ebp - 0x70], esi */
    esi = MEM32(ebp + (-0x54)); /* 0x141EA9CD: mov esi, dword ptr [ebp - 0x54] */
    goto L_141EA9DB; /* 0x141EA9D0: jmp 0x141ea9db */
L_141EA9D2:
    ecx = edi + (-0x1); /* 0x141EA9D2: lea ecx, [edi - 1] */
    MEM32(ebp + (-0x70)) = ecx; /* 0x141EA9D5: mov dword ptr [ebp - 0x70], ecx */
    ecx = MEM32(ebp + (-0x5C)); /* 0x141EA9D8: mov ecx, dword ptr [ebp - 0x5c] */
L_141EA9DB:
    MEM32(ebp + (-0x78)) = ecx; /* 0x141EA9DB: mov dword ptr [ebp - 0x78], ecx */
    /* test edi, edi */ /* 0x141EA9DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB1B5; /* 0x141EA9E0: je 0x141eb1b5 */
L_141EA9E6:
    /* cmp ecx, MEM32(ebp + (-0x70)) */ /* 0x141EA9E6: cmp ecx, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EAA9F; /* 0x141EA9E9: jne 0x141eaa9f */
L_141EA9EF:
    /* test LO8(eax), LO8(eax) */ /* 0x141EA9EF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EAA33; /* 0x141EA9F1: jne 0x141eaa33 */
L_141EA9F3:
    eax = edi + (-0x1); /* 0x141EA9F3: lea eax, [edi - 1] */
    /* cmp ecx, eax */ /* 0x141EA9F6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EAA97; /* 0x141EA9F8: jne 0x141eaa97 */
L_141EA9FE:
    esi = edx; /* 0x141EA9FE: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x5C)); /* 0x141EAA00: sub esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_CMP;
    eax = edx; /* 0x141EAA03: mov eax, edx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x141EAA05: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x141EAA05: shl eax, 4 */
    _flag_a = (uint32_t)((eax | 0xFu)); _flag_b = (uint32_t)((eax | 0xFu));
    eax = eax | 0xFu; /* 0x141EAA08: or eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EAA0B: push esi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x141EAA0C: push dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x44)) = eax; /* 0x141EAA0F: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x40); /* 0x141EAA12: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x141EAA15: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EAA16: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x141EAA1B: push ebx */
    eax = ebp + esi + (-0x40); /* 0x141EAA1C: lea eax, [ebp + esi - 0x40] */
    PUSH32(esp, 0x14002768u); /* 0x141EAA20: push 0x14002768 */
    PUSH32(esp, eax); /* 0x141EAA25: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EAA26: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x141EAA2B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141EAA2E: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_141EAA8C; /* 0x141EAA31: jmp 0x141eaa8c */
L_141EAA33:
    eax = edi + (-0x2); /* 0x141EAA33: lea eax, [edi - 2] */
    /* cmp ecx, eax */ /* 0x141EAA36: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EAA6A; /* 0x141EAA38: jne 0x141eaa6a */
L_141EAA3A:
    esi = edx; /* 0x141EAA3A: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x5C)); /* 0x141EAA3C: sub esi, dword ptr [ebp - 0x5c] */
    _flag_k = FK_CMP;
    eax = ebp + (-0x44); /* 0x141EAA3F: lea eax, [ebp - 0x44] */
    PUSH32(esp, esi); /* 0x141EAA42: push esi */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x141EAA43: push dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x141EAA46: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EAA47: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = ebx + (-0x38); /* 0x141EAA4C: lea eax, [ebx - 0x38] */
    PUSH32(esp, eax); /* 0x141EAA4F: push eax */
    eax = ebp + esi + (-0x44); /* 0x141EAA50: lea eax, [ebp + esi - 0x44] */
    PUSH32(esp, 0x14002768u); /* 0x141EAA54: push 0x14002768 */
    PUSH32(esp, eax); /* 0x141EAA59: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EAA5A: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = edi + (-0x1); /* 0x141EAA5F: lea eax, [edi - 1] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141EAA62: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x70)) = eax; /* 0x141EAA65: mov dword ptr [ebp - 0x70], eax */
    goto L_141EAA97; /* 0x141EAA68: jmp 0x141eaa97 */
L_141EAA6A:
    eax = edi + (-0x1); /* 0x141EAA6A: lea eax, [edi - 1] */
    /* cmp ecx, eax */ /* 0x141EAA6D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EAA97; /* 0x141EAA6F: jne 0x141eaa97 */
L_141EAA71:
    eax = edx; /* 0x141EAA71: mov eax, edx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x141EAA73: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x141EAA73: shl eax, 4 */
    _flag_a = (uint32_t)((eax | 0xFu)); _flag_b = (uint32_t)((eax | 0xFu));
    eax = eax | 0xFu; /* 0x141EAA76: or eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xEu); /* 0x141EAA79: push 0xe */
    MEM32(ebp + (-0x44)) = eax; /* 0x141EAA7B: mov dword ptr [ebp - 0x44], eax */
    esi = ebx + 0x14002730; /* 0x141EAA7E: lea esi, [ebx + 0x14002730] */
    ecx = POP32_VAL(esp); /* 0x141EAA84: pop ecx */
    edi = ebp + (-0x40); /* 0x141EAA85: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141EAA88: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = edx; /* 0x141EAA8A: mov eax, edx */
L_141EAA8C:
    _flag_a = (uint32_t)((eax | 0x04000000u)); _flag_b = (uint32_t)((eax | 0x04000000u));
    eax = eax | 0x04000000u; /* 0x141EAA8C: or eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141EAA91: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141EAA91: shl eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x141EAA94: mov dword ptr [ebp - 8], eax */
L_141EAA97:
    ebx = ebp + (-0x44); /* 0x141EAA97: lea ebx, [ebp - 0x44] */
    MEM32(ebp + (-0x48)) = ebx; /* 0x141EAA9A: mov dword ptr [ebp - 0x48], ebx */
    goto L_141EAAA4; /* 0x141EAA9D: jmp 0x141eaaa4 */
L_141EAA9F:
    ebx = esi; /* 0x141EAA9F: mov ebx, esi */
    MEM32(ebp + (-0x48)) = esi; /* 0x141EAAA1: mov dword ptr [ebp - 0x48], esi */
L_141EAAA4:
    edi = MEM32(ebp + (-0x68)); /* 0x141EAAA4: mov edi, dword ptr [ebp - 0x68] */
    esi = MEM32(ebp + (-0x64)); /* 0x141EAAA7: mov esi, dword ptr [ebp - 0x64] */
    ecx = edi; /* 0x141EAAAA: mov ecx, edi */
    ecx = ~ecx; /* 0x141EAAAC: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    ecx = ecx & MEM32(ebp + (-0x60)); /* 0x141EAAAE: and ecx, dword ptr [ebp - 0x60] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAAB1: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAAB3: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAAB5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx); /* 0x141EAAB7: add ecx, dword ptr [ebx] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x6C)); /* 0x141EAAB9: mov eax, dword ptr [ebp - 0x6c] */
    edx = ecx + eax + (-0x28955B88); /* 0x141EAABC: lea edx, [ecx + eax - 0x28955b88] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAAC3: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EAAC6: add edx, edi */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EAAC8: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAACA: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EAACC: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EAACE: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAAD0: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAAD2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x4); /* 0x141EAAD4: add ecx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x60)); /* 0x141EAAD7: mov eax, dword ptr [ebp - 0x60] */
    esi = ecx + eax + (-0x173848AA); /* 0x141EAADA: lea esi, [ecx + eax - 0x173848aa] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAAE1: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAAE4: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAAE6: mov ecx, esi */
    ecx = ~ecx; /* 0x141EAAE8: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EAAEA: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAAEC: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAAEE: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAAF0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x8); /* 0x141EAAF2: add ecx, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x64)); /* 0x141EAAF5: mov eax, dword ptr [ebp - 0x64] */
    edi = ecx + eax + 0x242070DB; /* 0x141EAAF8: lea edi, [ecx + eax + 0x242070db] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAAFF: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAB02: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EAB04: mov ecx, edi */
    ecx = ~ecx; /* 0x141EAB06: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EAB08: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAB0A: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAB0C: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAB0E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0xC); /* 0x141EAB10: add ecx, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x68)); /* 0x141EAB13: mov eax, dword ptr [ebp - 0x68] */
    ebx = ecx + eax + (-0x3E423112); /* 0x141EAB16: lea ebx, [ecx + eax - 0x3e423112] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAB1D: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAB20: add ebx, edi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAB22: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EAB24: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EAB26: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EAB28: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EAB2A: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAB2C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAB2E: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x141EAB31: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EAB34: mov eax, ebx */
    edx = ecx + edx + (-0xA83F051); /* 0x141EAB36: lea edx, [ecx + edx - 0xa83f051] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAB3D: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EAB40: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAB42: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EAB44: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAB46: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EAB48: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAB4A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAB4C: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x14); /* 0x141EAB4F: add ecx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    esi = ecx + esi + 0x4787C62A; /* 0x141EAB52: lea esi, [ecx + esi + 0x4787c62a] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAB59: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAB5C: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAB5E: mov ecx, esi */
    ecx = ~ecx; /* 0x141EAB60: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EAB62: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAB64: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAB66: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAB68: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAB6A: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x18); /* 0x141EAB6D: add ecx, dword ptr [eax + 0x18] */
    _flag_k = FK_ADD;
    edi = ecx + edi + (-0x57CFB9ED); /* 0x141EAB70: lea edi, [ecx + edi - 0x57cfb9ed] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAB77: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAB7A: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EAB7C: mov ecx, edi */
    ecx = ~ecx; /* 0x141EAB7E: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EAB80: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAB82: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAB84: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAB86: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAB88: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x141EAB8B: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAB8E: mov eax, edi */
    ebx = ecx + ebx + (-0x2B96AFF); /* 0x141EAB90: lea ebx, [ecx + ebx - 0x2b96aff] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAB97: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAB9A: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EAB9C: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EAB9E: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EABA0: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EABA2: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EABA4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EABA6: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x141EABA9: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EABAC: mov eax, ebx */
    edx = ecx + edx + 0x698098D8; /* 0x141EABAE: lea edx, [ecx + edx + 0x698098d8] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EABB5: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EABB8: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EABBA: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EABBC: mov ecx, edx */
    ecx = ~ecx; /* 0x141EABBE: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EABC0: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EABC2: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EABC4: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x24); /* 0x141EABC7: add ecx, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    esi = ecx + esi + (-0x74BB0851); /* 0x141EABCA: lea esi, [ecx + esi - 0x74bb0851] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EABD1: rol esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EABD4: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EABD6: mov ecx, esi */
    ecx = ~ecx; /* 0x141EABD8: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EABDA: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EABDC: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EABDE: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EABE0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EABE2: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x28); /* 0x141EABE5: add ecx, dword ptr [eax + 0x28] */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EABE8: mov eax, esi */
    edi = ecx + edi + (-0xA44F); /* 0x141EABEA: lea edi, [ecx + edi - 0xa44f] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EABF1: ror edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EABF4: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EABF6: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x141EABF8: mov ecx, edi */
    ecx = ~ecx; /* 0x141EABFA: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EABFC: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EABFE: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAC00: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x2C); /* 0x141EAC03: add ecx, dword ptr [eax + 0x2c] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAC06: mov eax, edi */
    ebx = ecx + ebx + (-0x76A32842); /* 0x141EAC08: lea ebx, [ecx + ebx - 0x76a32842] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAC0F: ror ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAC12: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EAC14: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EAC16: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EAC18: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EAC1A: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAC1C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAC1E: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x30); /* 0x141EAC21: add ecx, dword ptr [eax + 0x30] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EAC24: mov eax, ebx */
    edx = ecx + edx + 0x6B901122; /* 0x141EAC26: lea edx, [ecx + edx + 0x6b901122] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((7) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAC2D: rol edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EAC30: add edx, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EAC32: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAC34: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EAC36: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAC38: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAC3A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAC3C: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EAC3F: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x84)) = edi; /* 0x141EAC42: mov dword ptr [ebp - 0x84], edi */
    edi = ecx + esi + (-0x2678E6D); /* 0x141EAC48: lea edi, [ecx + esi - 0x2678e6d] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAC4F: rol edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x141EAC52: add edi, edx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x141EAC54: mov esi, edi */
    MEM32(ebp + (-0x58)) = ebx; /* 0x141EAC56: mov dword ptr [ebp - 0x58], ebx */
    MEM32(ebp + (-0x7C)) = edx; /* 0x141EAC59: mov dword ptr [ebp - 0x7c], edx */
    MEM32(ebp + (-0x50)) = edi; /* 0x141EAC5C: mov dword ptr [ebp - 0x50], edi */
    esi = ~esi; /* 0x141EAC5F: not esi */
    ecx = esi; /* 0x141EAC61: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EAC63: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EAC65: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAC67: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAC69: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAC6B: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x38); /* 0x141EAC6E: add ecx, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x84)); /* 0x141EAC71: mov eax, dword ptr [ebp - 0x84] */
    ebx = ecx + eax + (-0x5986BC72); /* 0x141EAC77: lea ebx, [ecx + eax - 0x5986bc72] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAC7E: ror ebx, 0xf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAC81: add ebx, edi */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x141EAC83: mov edx, ebx */
    edx = ~edx; /* 0x141EAC85: not edx */
    ecx = edx; /* 0x141EAC87: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x7C)));
    ecx = ecx & MEM32(ebp + (-0x7C)); /* 0x141EAC89: and ecx, dword ptr [ebp - 0x7c] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EAC8C: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x141EAC8E: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAC90: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAC92: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x3C); /* 0x141EAC95: add ecx, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x58)); /* 0x141EAC98: mov eax, dword ptr [ebp - 0x58] */
    edi = ecx + eax + 0x49B40821; /* 0x141EAC9B: lea edi, [ecx + eax + 0x49b40821] */
    ecx = MEM32(ebp + (-0x50)); /* 0x141EACA2: mov ecx, dword ptr [ebp - 0x50] */
    eax = ecx; /* 0x141EACA5: mov eax, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x141EACA7: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EACA9: ror edi, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EACAC: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EACAE: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141EACB0: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EACB2: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x141EACB5: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x7C)); /* 0x141EACB8: mov eax, dword ptr [ebp - 0x7c] */
    esi = esi + eax + (-0x9E1DA9E); /* 0x141EACBB: lea esi, [esi + eax - 0x9e1da9e] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EACC2: rol esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EACC5: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x141EACC7: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EACC9: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EACCB: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x141EACCD: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EACCF: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x18); /* 0x141EACD2: add edx, dword ptr [eax + 0x18] */
    _flag_k = FK_ADD;
    edx = edx + ecx + (-0x3FBF4CC0); /* 0x141EACD5: lea edx, [edx + ecx - 0x3fbf4cc0] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EACDC: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EACDF: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EACE1: mov ecx, edi */
    ecx = ~ecx; /* 0x141EACE3: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EACE5: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EACE7: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EACE9: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EACEB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EACED: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x2C); /* 0x141EACF0: add ecx, dword ptr [eax + 0x2c] */
    _flag_k = FK_ADD;
    ebx = ecx + ebx + 0x265E5A51; /* 0x141EACF3: lea ebx, [ecx + ebx + 0x265e5a51] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EACFA: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EACFD: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EACFF: mov ecx, esi */
    ecx = ~ecx; /* 0x141EAD01: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EAD03: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EAD05: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EAD07: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD09: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAD0B: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x141EAD0E: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EAD10: mov eax, edx */
    edi = ecx + edi + (-0x16493856); /* 0x141EAD12: lea edi, [ecx + edi - 0x16493856] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAD19: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EAD1C: add edi, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EAD1E: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAD20: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EAD22: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAD24: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD26: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAD28: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x14); /* 0x141EAD2B: add ecx, dword ptr [eax + 0x14] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EAD2E: mov eax, ebx */
    esi = ecx + esi + (-0x29D0EFA3); /* 0x141EAD30: lea esi, [ecx + esi - 0x29d0efa3] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAD37: rol esi, 5 */
    ecx = ebx; /* 0x141EAD3A: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EAD3C: not ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EAD3E: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EAD40: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EAD42: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD44: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAD46: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x28); /* 0x141EAD49: add ecx, dword ptr [eax + 0x28] */
    _flag_k = FK_ADD;
    edx = ecx + edx + 0x2441453; /* 0x141EAD4C: lea edx, [ecx + edx + 0x2441453] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAD53: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EAD56: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EAD58: mov ecx, edi */
    ecx = ~ecx; /* 0x141EAD5A: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EAD5C: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EAD5E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAD60: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD62: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAD64: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x3C); /* 0x141EAD67: add ecx, dword ptr [eax + 0x3c] */
    _flag_k = FK_ADD;
    ebx = ecx + ebx + (-0x275E197F); /* 0x141EAD6A: lea ebx, [ecx + ebx - 0x275e197f] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAD71: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EAD74: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAD76: mov ecx, esi */
    ecx = ~ecx; /* 0x141EAD78: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EAD7A: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EAD7C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EAD7E: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD80: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAD82: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x141EAD85: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EAD88: mov eax, edx */
    edi = ecx + edi + (-0x182C0438); /* 0x141EAD8A: lea edi, [ecx + edi - 0x182c0438] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAD91: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EAD94: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAD96: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x141EAD98: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAD9A: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EAD9C: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAD9E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EADA0: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x24); /* 0x141EADA3: add ecx, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EADA6: mov eax, ebx */
    esi = ecx + esi + 0x21E1CDE6; /* 0x141EADA8: lea esi, [ecx + esi + 0x21e1cde6] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EADAF: rol esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141EADB2: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EADB4: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EADB6: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EADB8: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EADBA: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EADBC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EADBE: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x38); /* 0x141EADC1: add ecx, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    edx = ecx + edx + (-0x3CC8F82A); /* 0x141EADC4: lea edx, [ecx + edx - 0x3cc8f82a] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EADCB: rol edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EADCE: add edx, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EADD0: mov ecx, edi */
    ecx = ~ecx; /* 0x141EADD2: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EADD4: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x141EADD6: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EADD8: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EADDA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EADDC: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0xC); /* 0x141EADDF: add ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x141EADE2: mov dword ptr [ebp - 0x50], edx */
    ebx = ecx + ebx + (-0xB2AF279); /* 0x141EADE5: lea ebx, [ecx + ebx - 0xb2af279] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EADEC: rol ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x141EADEF: add ebx, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EADF1: mov ecx, esi */
    ecx = ~ecx; /* 0x141EADF3: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EADF5: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141EADF7: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x141EADF9: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EADFB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EADFD: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x141EAE00: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EAE03: mov eax, edx */
    edi = ecx + edi + 0x455A14ED; /* 0x141EAE05: lea edi, [ecx + edi + 0x455a14ed] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAE0C: ror edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EAE0F: add edi, ebx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EAE11: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAE13: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x141EAE15: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAE17: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = edi; /* 0x141EAE19: mov dword ptr [ebp - 0x58], edi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAE1C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAE1E: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EAE21: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EAE24: mov eax, ebx */
    edx = ecx + esi + (-0x561C16FB); /* 0x141EAE26: lea edx, [ecx + esi - 0x561c16fb] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((5) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAE2D: rol edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EAE30: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAE32: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x141EAE34: mov ecx, ebx */
    ecx = ~ecx; /* 0x141EAE36: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x141EAE38: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAE3A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAE3C: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x8); /* 0x141EAE3F: add ecx, dword ptr [eax + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x50)); /* 0x141EAE42: mov eax, dword ptr [ebp - 0x50] */
    esi = ecx + eax + (-0x3105C08); /* 0x141EAE45: lea esi, [ecx + eax - 0x3105c08] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAE4C: rol esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAE4F: add esi, edx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x141EAE51: mov ecx, edi */
    ecx = ~ecx; /* 0x141EAE53: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x141EAE55: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAE57: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141EAE59: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAE5B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAE5D: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x141EAE60: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    edi = ecx + ebx + 0x676F02D9; /* 0x141EAE63: lea edi, [ecx + ebx + 0x676f02d9] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xEu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAE6A: rol edi, 0xe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAE6D: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x141EAE6F: mov ecx, edx */
    ecx = ~ecx; /* 0x141EAE71: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x141EAE73: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x141EAE75: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x141EAE77: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141EAE79: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x48)); /* 0x141EAE7B: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x30); /* 0x141EAE7E: add ecx, dword ptr [eax + 0x30] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x58)); /* 0x141EAE81: mov eax, dword ptr [ebp - 0x58] */
    ebx = ecx + eax + (-0x72D5B376); /* 0x141EAE84: lea ebx, [ecx + eax - 0x72d5b376] */
    ecx = MEM32(ebp + (-0x48)); /* 0x141EAE8B: mov ecx, dword ptr [ebp - 0x48] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xCu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAE8E: ror ebx, 0xc */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAE91: add ebx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAE93: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EAE95: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAE97: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x14); /* 0x141EAE99: add eax, dword ptr [ecx + 0x14] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x5C6BE); /* 0x141EAE9C: lea edx, [eax + edx - 0x5c6be] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAEA3: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EAEA6: add edx, ebx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAEA8: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAEAA: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAEAC: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x20); /* 0x141EAEAE: add eax, dword ptr [ecx + 0x20] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x788E097F); /* 0x141EAEB1: lea esi, [eax + esi - 0x788e097f] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAEB8: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAEBB: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAEBD: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAEBF: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAEC1: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x2C); /* 0x141EAEC3: add eax, dword ptr [ecx + 0x2c] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAEC6: mov ecx, esi */
    edi = eax + edi + 0x6D9D6122; /* 0x141EAEC8: lea edi, [eax + edi + 0x6d9d6122] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAECF: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAED2: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EAED4: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EAED6: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAED8: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = esi; /* 0x141EAEDA: mov dword ptr [ebp - 0x50], esi */
    esi = MEM32(ebp + (-0x48)); /* 0x141EAEDD: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x38); /* 0x141EAEE0: add eax, dword ptr [esi + 0x38] */
    _flag_k = FK_ADD;
    ebx = eax + ebx + (-0x21AC7F4); /* 0x141EAEE3: lea ebx, [eax + ebx - 0x21ac7f4] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAEEA: ror ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAEED: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x141EAEEF: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAEF1: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x141EAEF3: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAEF6: mov eax, edi */
    edx = ecx + edx + (-0x5B4115BC); /* 0x141EAEF8: lea edx, [ecx + edx - 0x5b4115bc] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAEFF: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EAF02: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAF04: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF06: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141EAF08: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x141EAF0A: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x50)); /* 0x141EAF0D: mov esi, dword ptr [ebp - 0x50] */
    esi = eax + esi + 0x4BDECFA9; /* 0x141EAF10: lea esi, [eax + esi + 0x4bdecfa9] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAF17: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAF1A: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAF1C: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAF1E: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF20: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x1C); /* 0x141EAF22: add eax, dword ptr [ecx + 0x1c] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAF25: mov ecx, esi */
    edi = eax + edi + (-0x944B4A0); /* 0x141EAF27: lea edi, [eax + edi - 0x944b4a0] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAF2E: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAF31: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EAF33: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EAF35: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF37: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = esi; /* 0x141EAF39: mov dword ptr [ebp - 0x50], esi */
    esi = MEM32(ebp + (-0x48)); /* 0x141EAF3C: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x28); /* 0x141EAF3F: add eax, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = eax + ebx + (-0x41404390); /* 0x141EAF42: lea ebx, [eax + ebx - 0x41404390] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EAF49: ror ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x141EAF4C: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x141EAF4E: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141EAF50: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x34); /* 0x141EAF52: add ecx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAF55: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAF57: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + edx + 0x289B7EC6; /* 0x141EAF59: lea edx, [ecx + edx + 0x289b7ec6] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAF60: rol edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141EAF63: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF65: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141EAF67: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x141EAF69: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x50)); /* 0x141EAF6B: mov esi, dword ptr [ebp - 0x50] */
    esi = eax + esi + (-0x155ED806); /* 0x141EAF6E: lea esi, [eax + esi - 0x155ed806] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAF75: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EAF78: add esi, edx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAF7A: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EAF7C: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF7E: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xC); /* 0x141EAF80: add eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x141EAF83: mov ecx, esi */
    edi = eax + edi + (-0x2B10CF7B); /* 0x141EAF85: lea edi, [eax + edi - 0x2b10cf7b] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAF8C: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAF8F: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x141EAF91: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141EAF93: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAF95: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = edx; /* 0x141EAF97: mov dword ptr [ebp - 0x58], edx */
    edx = MEM32(ebp + (-0x48)); /* 0x141EAF9A: mov edx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x18); /* 0x141EAF9D: add eax, dword ptr [edx + 0x18] */
    _flag_k = FK_ADD;
    edx = eax + ebx + 0x4881D05; /* 0x141EAFA0: lea edx, [eax + ebx + 0x4881d05] */
    ebx = MEM32(ebp + (-0x48)); /* 0x141EAFA7: mov ebx, dword ptr [ebp - 0x48] */
    eax = MEM32(ebp + (-0x58)); /* 0x141EAFAA: mov eax, dword ptr [ebp - 0x58] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAFAD: ror edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EAFB0: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x141EAFB2: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x24); /* 0x141EAFB4: add ecx, dword ptr [ebx + 0x24] */
    _flag_k = FK_ADD;
    ecx = ecx + eax + (-0x262B2FC7); /* 0x141EAFB7: lea ecx, [ecx + eax - 0x262b2fc7] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((4) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EAFBE: rol ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EAFC1: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EAFC3: mov eax, edi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAFC5: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EAFC7: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x30); /* 0x141EAFC9: add eax, dword ptr [ebx + 0x30] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x1924661B); /* 0x141EAFCC: lea esi, [eax + esi - 0x1924661b] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EAFD3: rol esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EAFD6: add esi, ecx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAFD8: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EAFDA: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EAFDC: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x3C); /* 0x141EAFDE: add eax, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    edi = eax + edi + 0x1FA27CF8; /* 0x141EAFE1: lea edi, [eax + edi + 0x1fa27cf8] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0x10u) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EAFE8: rol edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EAFEB: add edi, esi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EAFED: mov eax, esi */
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EAFEF: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EAFF1: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x141EAFF3: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x3B53A99B); /* 0x141EAFF6: lea edx, [eax + edx - 0x3b53a99b] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((9) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EAFFD: ror edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EB000: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EB002: mov eax, esi */
    eax = ~eax; /* 0x141EB004: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EB006: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EB008: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x141EB00A: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + (-0xBD6DDBC); /* 0x141EB00C: lea ecx, [eax + ecx - 0xbd6ddbc] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EB013: rol ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EB016: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EB018: mov eax, edi */
    eax = ~eax; /* 0x141EB01A: not eax */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EB01C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EB01E: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x1C); /* 0x141EB020: add eax, dword ptr [ebx + 0x1c] */
    _flag_k = FK_ADD;
    esi = eax + esi + 0x432AFF97; /* 0x141EB023: lea esi, [eax + esi + 0x432aff97] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EB02A: rol esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EB02D: add esi, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EB02F: mov eax, edx */
    eax = ~eax; /* 0x141EB031: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EB033: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EB035: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x38); /* 0x141EB037: add eax, dword ptr [ebx + 0x38] */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x546BDC59); /* 0x141EB03A: lea edi, [eax + edi - 0x546bdc59] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EB041: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EB044: add edi, esi */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EB046: mov eax, ecx */
    eax = ~eax; /* 0x141EB048: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EB04A: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EB04C: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x14); /* 0x141EB04E: add eax, dword ptr [ebx + 0x14] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x36C5FC7); /* 0x141EB051: lea edx, [eax + edx - 0x36c5fc7] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EB058: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EB05B: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EB05D: mov eax, esi */
    eax = ~eax; /* 0x141EB05F: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EB061: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EB063: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x30); /* 0x141EB065: add eax, dword ptr [ebx + 0x30] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + 0x655B59C3; /* 0x141EB068: lea ecx, [eax + ecx + 0x655b59c3] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EB06F: rol ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EB072: add ecx, edx */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EB074: mov eax, edi */
    eax = ~eax; /* 0x141EB076: not eax */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EB078: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EB07A: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0xC); /* 0x141EB07C: add eax, dword ptr [ebx + 0xc] */
    _flag_k = FK_ADD;
    esi = eax + esi + (-0x70F3336E); /* 0x141EB07F: lea esi, [eax + esi - 0x70f3336e] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EB086: rol esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x141EB089: add esi, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EB08B: mov eax, edx */
    eax = ~eax; /* 0x141EB08D: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EB08F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EB091: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x28); /* 0x141EB093: add eax, dword ptr [ebx + 0x28] */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x100B83); /* 0x141EB096: lea edi, [eax + edi - 0x100b83] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EB09D: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x141EB0A0: add edi, esi */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EB0A2: mov eax, ecx */
    eax = ~eax; /* 0x141EB0A4: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EB0A6: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EB0A8: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x4); /* 0x141EB0AA: add eax, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    edx = eax + edx + (-0x7A7BA22F); /* 0x141EB0AD: lea edx, [eax + edx - 0x7a7ba22f] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EB0B4: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EB0B7: add edx, edi */
    _flag_k = FK_ADD;
    eax = esi; /* 0x141EB0B9: mov eax, esi */
    eax = ~eax; /* 0x141EB0BB: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EB0BD: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EB0BF: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x20); /* 0x141EB0C1: add eax, dword ptr [ebx + 0x20] */
    _flag_k = FK_ADD;
    ecx = eax + ecx + 0x6FA87E4F; /* 0x141EB0C4: lea ecx, [eax + ecx + 0x6fa87e4f] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EB0CB: rol ecx, 6 */
    eax = edi; /* 0x141EB0CE: mov eax, edi */
    eax = ~eax; /* 0x141EB0D0: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EB0D2: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141EB0D4: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EB0D6: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x3C); /* 0x141EB0D8: add eax, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    ebx = eax + esi + (-0x1D31920); /* 0x141EB0DB: lea ebx, [eax + esi - 0x1d31920] */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141EB0E2: rol ebx, 0xa */
    esi = MEM32(ebp + (-0x48)); /* 0x141EB0E5: mov esi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x141EB0E8: add ebx, ecx */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EB0EA: mov eax, edx */
    eax = ~eax; /* 0x141EB0EC: not eax */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x141EB0EE: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141EB0F0: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x18); /* 0x141EB0F2: add eax, dword ptr [esi + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 0x40u; /* 0x141EB0F5: add dword ptr [ebp - 0x5c], 0x40 */
    _flag_k = FK_ADD;
    edi = eax + edi + (-0x5CFEBCEC); /* 0x141EB0F9: lea edi, [eax + edi - 0x5cfebcec] */
    { uint32_t _rv = (edi) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edi = _rv; } /* 0x141EB100: rol edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EB103: add edi, ebx */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x141EB105: mov eax, ecx */
    eax = ~eax; /* 0x141EB107: not eax */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x141EB109: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebx)); _flag_b = (uint32_t)((eax ^ ebx));
    eax = eax ^ ebx; /* 0x141EB10B: xor eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x34); /* 0x141EB10D: add eax, dword ptr [esi + 0x34] */
    _flag_k = FK_ADD;
    edx = eax + edx + 0x4E0811A1; /* 0x141EB110: lea edx, [eax + edx + 0x4e0811a1] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EB117: ror edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x141EB11A: add edx, edi */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EB11C: mov eax, ebx */
    eax = ~eax; /* 0x141EB11E: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EB120: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x141EB122: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x141EB124: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x141EB127: mov dword ptr [ebp - 0x50], edx */
    esi = eax + ecx + (-0x8AC817E); /* 0x141EB12A: lea esi, [eax + ecx - 0x8ac817e] */
    ecx = MEM32(ebp + (-0x48)); /* 0x141EB131: mov ecx, dword ptr [ebp - 0x48] */
    { uint32_t _rv = (esi) & 0xFFFFFFFFu, _rn = ((6) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } esi = _rv; } /* 0x141EB134: rol esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x141EB137: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) + esi; /* 0x141EB139: add dword ptr [ebp - 0x6c], esi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x141EB13C: mov eax, edi */
    eax = ~eax; /* 0x141EB13E: not eax */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x141EB140: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x141EB142: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x2C); /* 0x141EB144: add eax, dword ptr [ecx + 0x2c] */
    _flag_k = FK_ADD;
    edx = eax + ebx + (-0x42C50DCB); /* 0x141EB147: lea edx, [eax + ebx - 0x42c50dcb] */
    ebx = MEM32(ebp + (-0x50)); /* 0x141EB14E: mov ebx, dword ptr [ebp - 0x50] */
    { uint32_t _rv = (edx) & 0xFFFFFFFFu, _rn = ((0xAu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } edx = _rv; } /* 0x141EB151: rol edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x141EB154: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + edx; /* 0x141EB156: add dword ptr [ebp - 0x60], edx */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x141EB159: mov eax, ebx */
    eax = ~eax; /* 0x141EB15B: not eax */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141EB15D: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x141EB15F: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x8); /* 0x141EB161: add eax, dword ptr [ecx + 8] */
    _flag_k = FK_ADD;
    esi = ~esi; /* 0x141EB164: not esi */
    ecx = eax + edi + 0x2AD7D2BB; /* 0x141EB166: lea ecx, [eax + edi + 0x2ad7d2bb] */
    eax = MEM32(ebp + (-0x48)); /* 0x141EB16D: mov eax, dword ptr [ebp - 0x48] */
    edi = MEM32(ebp + (-0x88)); /* 0x141EB170: mov edi, dword ptr [ebp - 0x88] */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((0xFu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141EB176: rol ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x141EB179: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) + ecx; /* 0x141EB17B: add dword ptr [ebp - 0x64], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141EB17E: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi ^ edx)); _flag_b = (uint32_t)((esi ^ edx));
    esi = esi ^ edx; /* 0x141EB180: xor esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x24); /* 0x141EB182: add esi, dword ptr [eax + 0x24] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x141EB185: mov edx, dword ptr [ebp + 0xc] */
    eax = esi + ebx + (-0x14792C6F); /* 0x141EB188: lea eax, [esi + ebx - 0x14792c6f] */
    esi = MEM32(ebp + (-0x54)); /* 0x141EB18F: mov esi, dword ptr [ebp - 0x54] */
    ebx = MEM32(ebp + (-0x74)); /* 0x141EB192: mov ebx, dword ptr [ebp - 0x74] */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((0xBu) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x141EB195: ror eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141EB198: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) + eax; /* 0x141EB19A: add dword ptr [ebp - 0x68], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x78)); /* 0x141EB19D: mov ecx, dword ptr [ebp - 0x78] */
    SET_LO8(eax, MEM8(ebp + (-0x49))); /* 0x141EB1A0: mov al, byte ptr [ebp - 0x49] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141EB1A3: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x141EB1A4: add esi, 0x40 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x78)) = ecx; /* 0x141EB1A7: mov dword ptr [ebp - 0x78], ecx */
    MEM32(ebp + (-0x54)) = esi; /* 0x141EB1AA: mov dword ptr [ebp - 0x54], esi */
    /* cmp ecx, edi */ /* 0x141EB1AD: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EA9E6; /* 0x141EB1AF: jb 0x141ea9e6 */
L_141EB1B5:
    edi = MEM32(ebp + (-0x80)); /* 0x141EB1B5: mov edi, dword ptr [ebp - 0x80] */
    ecx = MEM32(ebp + (-0x4)); /* 0x141EB1B8: mov ecx, dword ptr [ebp - 4] */
    esi = ebp + (-0x6C); /* 0x141EB1BB: lea esi, [ebp - 0x6c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EB1BE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EB1BF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EB1C0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x141EB1C1: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x141EB1C2: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB1C3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141EB1C4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141EB1C6: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141EB1C7: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB1CC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EB1CD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141EB1D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB1D5u);

L_141EB1D5:
    edi = edi; /* 0x141EB1D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB1D7: push ebp */
    ebp = esp; /* 0x141EB1D8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EB1DA: push ecx */
    PUSH32(esp, ecx); /* 0x141EB1DB: push ecx */
    ecx = ebp + (-0x8); /* 0x141EB1DC: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EB1DF: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EB1E4: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x141EB1E7: lea ecx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x141EB1EA: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EB1EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EB1EF: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB1F4: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EB1F5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EB1FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB1FDu);

L_141EB1FD:
    edi = edi; /* 0x141EB1FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB1FF: push ebp */
    ebp = esp; /* 0x141EB200: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EB202: push ecx */
    PUSH32(esp, ecx); /* 0x141EB203: push ecx */
    PUSH32(esp, esi); /* 0x141EB204: push esi */
    PUSH32(esp, edi); /* 0x141EB205: push edi */
    ecx = ebp + (-0x8); /* 0x141EB206: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EB209: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EB20E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141EB210: push edi */
    PUSH32(esp, edi); /* 0x141EB211: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EB212: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EB215: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EB218: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141EB21D: mov ecx, eax */
    /* test ecx, ecx */ /* 0x141EB21F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EB252; /* 0x141EB221: js 0x141eb252 */
L_141EB223:
    PUSH32(esp, edi); /* 0x141EB223: push edi */
    PUSH32(esp, 0x58454853u); /* 0x141EB224: push 0x58454853 */
    ecx = ebp + (-0x8); /* 0x141EB229: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EB22C: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EB231: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EB233: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EB25B; /* 0x141EB236: jne 0x141eb25b */
L_141EB238:
    PUSH32(esp, edi); /* 0x141EB238: push edi */
    PUSH32(esp, 0x52444853u); /* 0x141EB239: push 0x52444853 */
    ecx = ebp + (-0x8); /* 0x141EB23E: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EB241: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EB246: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EB248: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EB25B; /* 0x141EB24B: jne 0x141eb25b */
L_141EB24D:
    ecx = 0x80004005u; /* 0x141EB24D: mov ecx, 0x80004005 */
L_141EB252:
    eax = MEM32(ebp + 0xC); /* 0x141EB252: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x141EB255: mov dword ptr [eax], edi */
    eax = ecx; /* 0x141EB257: mov eax, ecx */
    goto L_141EB293; /* 0x141EB259: jmp 0x141eb293 */
L_141EB25B:
    PUSH32(esp, esi); /* 0x141EB25B: push esi */
    ecx = ebp + (-0x8); /* 0x141EB25C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EB25F: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x141EB264: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi) = eax; /* 0x141EB267: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x141EB269: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB274; /* 0x141EB26B: jne 0x141eb274 */
L_141EB26D:
    eax = 0x80004005u; /* 0x141EB26D: mov eax, 0x80004005 */
    goto L_141EB293; /* 0x141EB272: jmp 0x141eb293 */
L_141EB274:
    PUSH32(esp, esi); /* 0x141EB274: push esi */
    ecx = ebp + (-0x8); /* 0x141EB275: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141EA005); /* 0x141EB278: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141EB27D: mov ecx, eax */
    /* cmp ecx, 8 */ /* 0x141EB27F: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB26D; /* 0x141EB282: jb 0x141eb26d */
L_141EB284:
    eax = MEM32(edi); /* 0x141EB284: mov eax, dword ptr [edi] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x141EB286: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x141EB286: shr ecx, 2 */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x141EB289: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141EB28C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    eax = eax & 0x80004005u; /* 0x141EB28E: and eax, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB293:
    edi = POP32_VAL(esp); /* 0x141EB293: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB294: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB295: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EB296: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EB29E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB29Eu);

L_141EB29E:
    edi = edi; /* 0x141EB29E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB2A0: push ebp */
    ebp = esp; /* 0x141EB2A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EB2A3: push ecx */
    PUSH32(esp, ecx); /* 0x141EB2A4: push ecx */
    PUSH32(esp, esi); /* 0x141EB2A5: push esi */
    PUSH32(esp, edi); /* 0x141EB2A6: push edi */
    ecx = ebp + (-0x8); /* 0x141EB2A7: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EB2AA: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EB2AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EB2B1: push esi */
    PUSH32(esp, esi); /* 0x141EB2B2: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EB2B3: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EB2B6: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EB2B9: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141EB2BE: mov ecx, eax */
    /* test ecx, ecx */ /* 0x141EB2C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EB2DC; /* 0x141EB2C2: js 0x141eb2dc */
L_141EB2C4:
    PUSH32(esp, esi); /* 0x141EB2C4: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EB2C5: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x8); /* 0x141EB2C8: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EB2CB: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141EB2D0: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141EB2D2: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EB2E5; /* 0x141EB2D5: jne 0x141eb2e5 */
L_141EB2D7:
    ecx = 0x80004005u; /* 0x141EB2D7: mov ecx, 0x80004005 */
L_141EB2DC:
    eax = MEM32(ebp + 0x10); /* 0x141EB2DC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = esi; /* 0x141EB2DF: mov dword ptr [eax], esi */
    eax = ecx; /* 0x141EB2E1: mov eax, ecx */
    goto L_141EB312; /* 0x141EB2E3: jmp 0x141eb312 */
L_141EB2E5:
    PUSH32(esp, edi); /* 0x141EB2E5: push edi */
    ecx = ebp + (-0x8); /* 0x141EB2E6: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EB2E9: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x141EB2EE: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x141EB2F1: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x141EB2F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB2FE; /* 0x141EB2F5: jne 0x141eb2fe */
L_141EB2F7:
    eax = 0x80004005u; /* 0x141EB2F7: mov eax, 0x80004005 */
    goto L_141EB312; /* 0x141EB2FC: jmp 0x141eb312 */
L_141EB2FE:
    esi = MEM32(ebp + 0x14); /* 0x141EB2FE: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x141EB301: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB310; /* 0x141EB303: je 0x141eb310 */
L_141EB305:
    PUSH32(esp, edi); /* 0x141EB305: push edi */
    ecx = ebp + (-0x8); /* 0x141EB306: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141EA005); /* 0x141EB309: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x141EB30E: mov dword ptr [esi], eax */
L_141EB310:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB312:
    edi = POP32_VAL(esp); /* 0x141EB312: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB313: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB314: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141EB315: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141EB31D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB31Du);

L_141EB31D:
    edi = edi; /* 0x141EB31D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB31F: push ebp */
    ebp = esp; /* 0x141EB320: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141EB322: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x141EB325: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB32C; /* 0x141EB327: je 0x141eb32c */
L_141EB329:
    eax = MEM32(eax + 0x18); /* 0x141EB329: mov eax, dword ptr [eax + 0x18] */
L_141EB32C:
    ebp = POP32_VAL(esp); /* 0x141EB32C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141EB32D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EB335(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB335u);

L_141EB335:
    edi = edi; /* 0x141EB335: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB337: push ebp */
    ebp = esp; /* 0x141EB338: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EB33A: push ecx */
    PUSH32(esp, ecx); /* 0x141EB33B: push ecx */
    ecx = ebp + (-0x8); /* 0x141EB33C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EB33F: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x141EB344: push 0 */
    PUSH32(esp, 0); /* 0x141EB346: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EB348: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EB34B: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EB34E: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EB353: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EB390; /* 0x141EB355: js 0x141eb390 */
L_141EB357:
    PUSH32(esp, 0); /* 0x141EB357: push 0 */
    PUSH32(esp, 0x30494653u); /* 0x141EB359: push 0x30494653 */
    ecx = ebp + (-0x8); /* 0x141EB35E: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EB361: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141EB366: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EB372; /* 0x141EB369: jne 0x141eb372 */
L_141EB36B:
    eax = 0x80004005u; /* 0x141EB36B: mov eax, 0x80004005 */
    goto L_141EB390; /* 0x141EB370: jmp 0x141eb390 */
L_141EB372:
    PUSH32(esp, eax); /* 0x141EB372: push eax */
    ecx = ebp + (-0x8); /* 0x141EB373: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EB376: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x141EB37B: mov edx, eax */
    /* test edx, edx */ /* 0x141EB37D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB36B; /* 0x141EB37F: je 0x141eb36b */
L_141EB381:
    eax = MEM32(edx); /* 0x141EB381: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + 0xC); /* 0x141EB383: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x141EB386: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x4); /* 0x141EB388: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x141EB38B: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB38E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB390:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB390: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EB391: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EB399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB399u);

L_141EB399:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB399: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141EB39B: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x141EB39D: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x141EB3A0: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = 1; /* 0x141EB3A3: mov dword ptr [ecx + 0xc], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EB3AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EB3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB3B0u);

L_141EB3B0:
    edi = edi; /* 0x141EB3B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x141EB3B2: push esi */
    PUSH32(esp, edi); /* 0x141EB3B3: push edi */
    esi = ecx; /* 0x141EB3B4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EB3B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x141EB3B8: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB3CB; /* 0x141EB3BA: je 0x141eb3cb */
L_141EB3BC:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x141EB3BC: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB3C9; /* 0x141EB3BF: je 0x141eb3c9 */
L_141EB3C1:
    PUSH32(esp, MEM32(esi)); /* 0x141EB3C1: push dword ptr [esi] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141EB3C3: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EB3C8: pop ecx */
L_141EB3C9:
    MEM32(esi) = edi; /* 0x141EB3C9: mov dword ptr [esi], edi */
L_141EB3CB:
    MEM32(esi + 0x4) = edi; /* 0x141EB3CB: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = edi; /* 0x141EB3CE: mov dword ptr [esi + 8], edi */
    edi = POP32_VAL(esp); /* 0x141EB3D1: pop edi */
    MEM32(esi + 0xC) = 1; /* 0x141EB3D2: mov dword ptr [esi + 0xc], 1 */
    esi = POP32_VAL(esp); /* 0x141EB3D9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EB3DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EB3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB3E0u);

L_141EB3E0:
    edi = edi; /* 0x141EB3E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB3E2: push ebp */
    ebp = esp; /* 0x141EB3E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141EB3E5: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x141EB3E8: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB3F4; /* 0x141EB3EB: jb 0x141eb3f4 */
L_141EB3ED:
    eax = 0x80004005u; /* 0x141EB3ED: mov eax, 0x80004005 */
    goto L_141EB40F; /* 0x141EB3F2: jmp 0x141eb40f */
L_141EB3F4:
    ecx = eax; /* 0x141EB3F4: mov ecx, eax */
L_141EB3F6:
    /* cmp MEM8(ecx), 0 */ /* 0x141EB3F6: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB401; /* 0x141EB3F9: je 0x141eb401 */
L_141EB3FB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141EB3FB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x141EB3FC: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB3F6; /* 0x141EB3FF: jb 0x141eb3f6 */
L_141EB401:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x141EB401: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB3ED; /* 0x141EB404: je 0x141eb3ed */
L_141EB406:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x141EB406: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x141EB408: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x141EB40B: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB40D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB40F:
    ebp = POP32_VAL(esp); /* 0x141EB40F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EB410: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141EB418(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB418u);

L_141EB418:
    edi = edi; /* 0x141EB418: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB41A: push ebp */
    ebp = esp; /* 0x141EB41B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141EB41D: push esi */
    esi = ecx; /* 0x141EB41E: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x141EB420: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB42B; /* 0x141EB424: je 0x141eb42b */
L_141EB426:
    RECOMP_CALL(sub_141EB3B0); /* 0x141EB426: call 0x141eb3b0 */
    RECOMP_FLAGS_IN();
L_141EB42B:
    eax = MEM32(ebp + 0x8); /* 0x141EB42B: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x141EB42E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB444; /* 0x141EB430: je 0x141eb444 */
L_141EB432:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x141EB432: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x141EB436: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x141EB438: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x141EB43B: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x141EB43E: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x141EB441: mov dword ptr [esi + 8], eax */
L_141EB444:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB444: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141EB446: pop esi */
    ebp = POP32_VAL(esp); /* 0x141EB447: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EB448: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141EB450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB450u);

L_141EB450:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141EB450: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x141EB452: push 4 */
    MEM32(ecx + 0x4C) = edx; /* 0x141EB454: mov dword ptr [ecx + 0x4c], edx */
    MEM32(ecx + 0x8) = edx; /* 0x141EB457: mov dword ptr [ecx + 8], edx */
    MEM32(ecx) = edx; /* 0x141EB45A: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x50) = edx; /* 0x141EB45C: mov dword ptr [ecx + 0x50], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x141EB45F: add ecx, 0x14 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x141EB462: pop eax */
L_141EB463:
    MEM32(ecx + (-0x8)) = edx; /* 0x141EB463: mov dword ptr [ecx - 8], edx */
    MEM32(ecx + (-0x4)) = edx; /* 0x141EB466: mov dword ptr [ecx - 4], edx */
    MEM32(ecx) = edx; /* 0x141EB469: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = 1; /* 0x141EB46B: mov dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x141EB472: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141EB475: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141EB463; /* 0x141EB476: jne 0x141eb463 */
L_141EB478:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EB478: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EB47E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB47Eu);

L_141EB47E:
    edi = edi; /* 0x141EB47E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x141EB480: push ebx */
    PUSH32(esp, esi); /* 0x141EB481: push esi */
    PUSH32(esp, edi); /* 0x141EB482: push edi */
    esi = ecx; /* 0x141EB483: mov esi, ecx */
    PUSH32(esp, 4); /* 0x141EB485: push 4 */
    edi = esi + 0xC; /* 0x141EB487: lea edi, [esi + 0xc] */
    ebx = POP32_VAL(esp); /* 0x141EB48A: pop ebx */
L_141EB48B:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x141EB48B: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB498; /* 0x141EB48F: je 0x141eb498 */
L_141EB491:
    ecx = edi; /* 0x141EB491: mov ecx, edi */
    RECOMP_CALL(sub_141EB3B0); /* 0x141EB493: call 0x141eb3b0 */
    RECOMP_FLAGS_IN();
L_141EB498:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x141EB498: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x141EB49B: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141EB48B; /* 0x141EB49C: jne 0x141eb48b */
L_141EB49E:
    /* cmp MEM32(esi), ebx */ /* 0x141EB49E: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB4AC; /* 0x141EB4A0: je 0x141eb4ac */
L_141EB4A2:
    PUSH32(esp, MEM32(esi)); /* 0x141EB4A2: push dword ptr [esi] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141EB4A4: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x141EB4A9: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141EB4AB: pop ecx */
L_141EB4AC:
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0; /* 0x141EB4AC: and dword ptr [esi + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0; /* 0x141EB4B0: and dword ptr [esi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x141EB4B4: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141EB4B8: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB4B9: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EB4BA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EB4BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EB4C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB4C1u);

L_141EB4C1:
    edi = edi; /* 0x141EB4C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB4C3: push ebp */
    ebp = esp; /* 0x141EB4C4: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141EB4C6: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x141EB4C9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB4D1; /* 0x141EB4CB: je 0x141eb4d1 */
L_141EB4CD:
    eax = MEM32(ecx); /* 0x141EB4CD: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x141EB4CF: mov dword ptr [edx], eax */
L_141EB4D1:
    eax = MEM32(ecx + 0x8); /* 0x141EB4D1: mov eax, dword ptr [ecx + 8] */
    ebp = POP32_VAL(esp); /* 0x141EB4D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141EB4D5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EB4DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB4DDu);

L_141EB4DD:
    edi = edi; /* 0x141EB4DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB4DF: push ebp */
    ebp = esp; /* 0x141EB4E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x141EB4E2: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141EB4E5: push ebx */
    ebx = ecx; /* 0x141EB4E6: mov ebx, ecx */
    /* cmp MEM32(ebx + 0x8), 0 */ /* 0x141EB4E8: cmp dword ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x141EB4EC: push esi */
    PUSH32(esp, edi); /* 0x141EB4ED: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EB4F5; /* 0x141EB4EE: je 0x141eb4f5 */
L_141EB4F0:
    RECOMP_CALL(sub_141EB3B0); /* 0x141EB4F0: call 0x141eb3b0 */
    RECOMP_FLAGS_IN();
L_141EB4F5:
    esi = MEM32(ebp + 0x8); /* 0x141EB4F5: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x141EB4F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB71B; /* 0x141EB4FA: je 0x141eb71b */
L_141EB500:
    ecx = MEM32(ebp + 0xC); /* 0x141EB500: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 8 */ /* 0x141EB503: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB71B; /* 0x141EB506: jb 0x141eb71b */
L_141EB50C:
    edi = MEM32(esi); /* 0x141EB50C: mov edi, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x141EB50E: mov dword ptr [ebp - 0x18], edi */
    /* test edi, edi */ /* 0x141EB511: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB51F; /* 0x141EB513: jne 0x141eb51f */
L_141EB515:
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edi);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & edi; /* 0x141EB515: and dword ptr [ebx + 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB518:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB518: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EB720; /* 0x141EB51A: jmp 0x141eb720 */
L_141EB51F:
    /* cmp edi, 0x0AAAAAAAu */ /* 0x141EB51F: cmp edi, 0xaaaaaaa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0AAAAAAAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141EB71B; /* 0x141EB525: ja 0x141eb71b */
L_141EB52B:
    eax = edi; /* 0x141EB52B: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x141EB52D: imul eax, eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x141EB530: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x141EB533: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB71B; /* 0x141EB535: jb 0x141eb71b */
L_141EB53B:
    eax = esi + ecx; /* 0x141EB53B: lea eax, [esi + ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EB53E: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi + 0x4); /* 0x141EB541: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141EB544: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & ecx; /* 0x141EB546: and dword ptr [ebp - 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141EB549: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x141EB54B: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + 0xC) = ecx; /* 0x141EB54E: mov dword ptr [ebp + 0xc], ecx */
    /* test edi, edi */ /* 0x141EB551: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB5A7; /* 0x141EB553: je 0x141eb5a7 */
L_141EB555:
    edx = eax + 0x10; /* 0x141EB555: lea edx, [eax + 0x10] */
L_141EB558:
    eax = ebp + (-0x14); /* 0x141EB558: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x141EB55B: push eax */
    eax = MEM32(edx + (-0x10)); /* 0x141EB55C: mov eax, dword ptr [edx - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x141EB55F: push dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141EB562: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141EB564: push eax */
    RECOMP_CALL(sub_141EB3E0); /* 0x141EB565: call 0x141eb3e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EB56A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EB71B; /* 0x141EB56C: js 0x141eb71b */
L_141EB572:
    eax = MEM32(ebp + (-0x14)); /* 0x141EB572: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x141EB575: mov ecx, dword ptr [ebp + 0xc] */
    ecx = ecx + eax + 0x1; /* 0x141EB578: lea ecx, [ecx + eax + 1] */
    eax = MEM32(ebp + (-0x10)); /* 0x141EB57C: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = ecx; /* 0x141EB57F: mov dword ptr [ebp + 0xc], ecx */
    /* test eax, eax */ /* 0x141EB582: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB594; /* 0x141EB584: je 0x141eb594 */
L_141EB586:
    edi = MEM32(ebp + (-0xC)); /* 0x141EB586: mov edi, dword ptr [ebp - 0xc] */
    /* cmp edi, MEM32(edx) */ /* 0x141EB589: cmp edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x18)); /* 0x141EB58B: mov edi, dword ptr [ebp - 0x18] */
    if (CMP_A(_flag_a, _flag_b)) goto L_141EB71B; /* 0x141EB58E: ja 0x141eb71b */
L_141EB594:
    esi = MEM32(edx); /* 0x141EB594: mov esi, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EB596: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x141EB597: add edx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = esi; /* 0x141EB59A: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + 0x8); /* 0x141EB59D: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x141EB5A0: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, edi */ /* 0x141EB5A3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB558; /* 0x141EB5A5: jb 0x141eb558 */
L_141EB5A7:
    eax = MEM32(esi); /* 0x141EB5A7: mov eax, dword ptr [esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x141EB5A9: imul eax, eax, 0x1c */
    MEM32(ebp + 0xC) = eax; /* 0x141EB5AC: mov dword ptr [ebp + 0xc], eax */
    eax = eax + edi * 4; /* 0x141EB5AF: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141EB5B2: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141EB5B4: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141EB5B5: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EB5BA: pop ecx */
    ecx = eax; /* 0x141EB5BB: mov ecx, eax */
    MEM32(ebx) = ecx; /* 0x141EB5BD: mov dword ptr [ebx], ecx */
    /* test ecx, ecx */ /* 0x141EB5BF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB5CD; /* 0x141EB5C1: jne 0x141eb5cd */
L_141EB5C3:
    eax = 0x8007000Eu; /* 0x141EB5C3: mov eax, 0x8007000e */
    goto L_141EB720; /* 0x141EB5C8: jmp 0x141eb720 */
L_141EB5CD:
    eax = MEM32(ebp + 0xC); /* 0x141EB5CD: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x141EB5D0: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141EB5D4: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x141EB5D6: mov dword ptr [ebx + 4], eax */
    eax = eax + edi * 4; /* 0x141EB5D9: lea eax, [eax + edi*4] */
    MEM32(ebx + 0xC) = 1; /* 0x141EB5DC: mov dword ptr [ebx + 0xc], 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x141EB5E3: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x141EB5E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB713; /* 0x141EB5E8: je 0x141eb713 */
L_141EB5EE:
    edx = MEM32(ebp + (-0x20)); /* 0x141EB5EE: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141EB5F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x141EB5F3: add edx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x141EB5F6: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x141EB5F9: mov dword ptr [ebp + 0xc], edx */
L_141EB5FC:
    eax = MEM32(ebx); /* 0x141EB5FC: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax) = MEM32(ecx + eax) & 0; /* 0x141EB5FE: and dword ptr [ecx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edx + (-0x8))); /* 0x141EB602: push dword ptr [edx - 8] */
    RECOMP_CALL(sub_140AD0B0); /* 0x141EB605: call 0x140ad0b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x141EB60A: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0xC)); /* 0x141EB60C: mov edx, dword ptr [ebp - 0xc] */
    MEM32(edx + ecx + 0x10) = eax; /* 0x141EB60F: mov dword ptr [edx + ecx + 0x10], eax */
    ecx = MEM32(ebx); /* 0x141EB613: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x141EB615: mov eax, dword ptr [ebp + 0xc] */
    SET_LO8(eax, MEM8(eax)); /* 0x141EB618: mov al, byte ptr [eax] */
    MEM8(edx + ecx + 0x18) = (uint8_t)(LO8(eax)); /* 0x141EB61A: mov byte ptr [edx + ecx + 0x18], al */
    ecx = MEM32(ebx); /* 0x141EB61E: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x141EB620: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + (-0x4)); /* 0x141EB623: mov eax, dword ptr [eax - 4] */
    MEM32(edx + ecx + 0x14) = eax; /* 0x141EB626: mov dword ptr [edx + ecx + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x141EB62A: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + (-0x10)); /* 0x141EB62D: mov eax, dword ptr [eax - 0x10] */
    ecx = MEM32(ebx); /* 0x141EB630: mov ecx, dword ptr [ebx] */
    MEM32(edx + ecx + 0x8) = eax; /* 0x141EB632: mov dword ptr [edx + ecx + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x141EB636: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x141EB639: push dword ptr [eax - 0x10] */
    PUSH32(esp, MEM32(eax + (-0xC))); /* 0x141EB63C: push dword ptr [eax - 0xc] */
    RECOMP_CALL(sub_140AD100); /* 0x141EB63F: call 0x140ad100 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x141EB644: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0xC)); /* 0x141EB646: mov edx, dword ptr [ebp - 0xc] */
    MEM32(edx + ecx + 0xC) = eax; /* 0x141EB649: mov dword ptr [edx + ecx + 0xc], eax */
    eax = MEM32(ebx); /* 0x141EB64D: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x4)); /* 0x141EB64F: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx + eax + 0x4) = ecx; /* 0x141EB652: mov dword ptr [edx + eax + 4], ecx */
    ecx = MEM32(ebx); /* 0x141EB656: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x141EB658: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + (-0x10)); /* 0x141EB65B: mov eax, dword ptr [eax - 0x10] */
    MEM32(edx + ecx + 0x8) = eax; /* 0x141EB65E: mov dword ptr [edx + ecx + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x141EB662: mov eax, dword ptr [ebp + 0xc] */
    SET_LO8(eax, MEM8(eax + 0x1)); /* 0x141EB665: mov al, byte ptr [eax + 1] */
    ecx = MEM32(ebx); /* 0x141EB668: mov ecx, dword ptr [ebx] */
    MEM8(edx + ecx + 0x19) = (uint8_t)(LO8(eax)); /* 0x141EB66A: mov byte ptr [edx + ecx + 0x19], al */
    eax = MEM32(ebp + 0xC); /* 0x141EB66E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + (-0x14)); /* 0x141EB671: mov ecx, dword ptr [eax - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x141EB674: add ecx, esi */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x141EB676: mov edx, ecx */
    eax = edx + 0x1; /* 0x141EB678: lea eax, [edx + 1] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x141EB67B: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x141EB67E: mov dword ptr [ebp - 0x20], eax */
L_141EB681:
    SET_LO8(eax, MEM8(edx)); /* 0x141EB681: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141EB683: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141EB684: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB681; /* 0x141EB686: jne 0x141eb681 */
L_141EB688:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x20)); /* 0x141EB688: sub edx, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    eax = edx + 0x1; /* 0x141EB68B: lea eax, [edx + 1] */
    PUSH32(esp, eax); /* 0x141EB68E: push eax */
    PUSH32(esp, ecx); /* 0x141EB68F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x141EB690: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EB693: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EB696: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x141EB69B: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x141EB69E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x141EB6A1: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x1C)); /* 0x141EB6A5: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141EB6A8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141EB6AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB6EF; /* 0x141EB6AD: je 0x141eb6ef */
L_141EB6AF:
    edx = MEM32(ebp + (-0x4)); /* 0x141EB6AF: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x141EB6B2: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x8)); /* 0x141EB6B5: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x141EB6B8: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x141EB6BA: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x141EB6BD: mov dword ptr [ebp - 0x14], eax */
L_141EB6C0:
    SET_LO8(eax, MEM8(ecx)); /* 0x141EB6C0: mov al, byte ptr [ecx] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x141EB6C2: mov byte ptr [edx + ecx], al */
    eax = MEM32(ebx + 0x4); /* 0x141EB6C5: mov eax, dword ptr [ebx + 4] */
    esi = eax + edi * 4; /* 0x141EB6C8: lea esi, [eax + edi*4] */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x141EB6CB: movsx eax, byte ptr [ecx] */
    PUSH32(esp, eax); /* 0x141EB6CE: push eax */
    RECOMP_CALL(sub_141EC7FE); /* 0x141EB6CF: call 0x141ec7fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x141EB6D4: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x20)); /* 0x141EB6D6: mov edx, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x141EB6D9: pop ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x141EB6DA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141EB6DD: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x141EB6DE: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x141EB6E1: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141EB6C0; /* 0x141EB6E4: jne 0x141eb6c0 */
L_141EB6E6:
    edi = MEM32(ebp + (-0x18)); /* 0x141EB6E6: mov edi, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + 0x8); /* 0x141EB6E9: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x1C)); /* 0x141EB6EC: mov eax, dword ptr [ebp - 0x1c] */
L_141EB6EF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x141EB6EF: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x141EB6F2: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x141EB6F5: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0xC); /* 0x141EB6F8: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EB6FB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x141EB6FC: add ecx, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x141EB6FF: add edx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x141EB702: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x141EB705: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x141EB708: mov dword ptr [ebp + 0xc], edx */
    /* cmp eax, edi */ /* 0x141EB70B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB5FC; /* 0x141EB70D: jb 0x141eb5fc */
L_141EB713:
    MEM32(ebx + 0x8) = edi; /* 0x141EB713: mov dword ptr [ebx + 8], edi */
    RECOMP_BACKEDGE();
    goto L_141EB518; /* 0x141EB716: jmp 0x141eb518 */
L_141EB71B:
    eax = 0x80004005u; /* 0x141EB71B: mov eax, 0x80004005 */
L_141EB720:
    edi = POP32_VAL(esp); /* 0x141EB720: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB721: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EB722: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB723: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EB724: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EB72C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB72Cu);

L_141EB72C:
    edi = edi; /* 0x141EB72C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB72E: push ebp */
    ebp = esp; /* 0x141EB72F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x141EB731: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141EB734: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141EB739: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141EB73B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x141EB73E: push ebx */
    PUSH32(esp, esi); /* 0x141EB73F: push esi */
    PUSH32(esp, edi); /* 0x141EB740: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141EB741: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x141EB744: mov ebx, ecx */
    MEM32(ebp + (-0x34)) = edi; /* 0x141EB746: mov dword ptr [ebp - 0x34], edi */
    RECOMP_CALL(sub_141EB47E); /* 0x141EB749: call 0x141eb47e */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x141EB74E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB9CC; /* 0x141EB750: je 0x141eb9cc */
L_141EB756:
    ecx = MEM32(ebp + 0xC); /* 0x141EB756: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 8 */ /* 0x141EB759: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB9CC; /* 0x141EB75C: jb 0x141eb9cc */
L_141EB762:
    esi = MEM32(edi); /* 0x141EB762: mov esi, dword ptr [edi] */
    MEM32(ebp + (-0x38)) = esi; /* 0x141EB764: mov dword ptr [ebp - 0x38], esi */
    /* test esi, esi */ /* 0x141EB767: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB775; /* 0x141EB769: jne 0x141eb775 */
L_141EB76B:
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & esi; /* 0x141EB76B: and dword ptr [ebx + 8], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB76E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB76E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EB9D1; /* 0x141EB770: jmp 0x141eb9d1 */
L_141EB775:
    /* cmp esi, 0x09249248u */ /* 0x141EB775: cmp esi, 0x9249248 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x09249248u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141EB9CC; /* 0x141EB77B: ja 0x141eb9cc */
L_141EB781:
    eax = esi; /* 0x141EB781: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x141EB783: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x141EB786: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x141EB789: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB9CC; /* 0x141EB78B: jb 0x141eb9cc */
L_141EB791:
    eax = edi + ecx; /* 0x141EB791: lea eax, [edi + ecx] */
    ecx = MEM32(edi + 0x4); /* 0x141EB794: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EB797: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x141EB799: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EB79C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x141EB79E: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EB7A1: mov dword ptr [ebp - 0x1c], eax */
    edi = ebp + (-0x10); /* 0x141EB7A4: lea edi, [ebp - 0x10] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141EB7A7: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141EB7A8: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141EB7A9: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EB7AA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x141EB7AC: mov dword ptr [ebp - 0x2c], ecx */
    edx = edi; /* 0x141EB7AF: mov edx, edi */
    eax = edi; /* 0x141EB7B1: mov eax, edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x141EB7B3: mov dword ptr [ebp - 0x18], edi */
L_141EB7B6:
    MEM32(ebp + (-0x30)) = edx; /* 0x141EB7B6: mov dword ptr [ebp - 0x30], edx */
    /* cmp edx, esi */ /* 0x141EB7B9: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141EB82F; /* 0x141EB7BB: jae 0x141eb82f */
L_141EB7BD:
    eax = edx; /* 0x141EB7BD: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x141EB7BF: imul eax, eax, 0x1c */
    ecx = eax + ecx + 0x14; /* 0x141EB7C2: lea ecx, [eax + ecx + 0x14] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x141EB7C6: mov dword ptr [ebp - 0x20], ecx */
L_141EB7C9:
    eax = MEM32(ebp + (-0x18)); /* 0x141EB7C9: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + (-0x14)), eax */ /* 0x141EB7CC: cmp dword ptr [ecx - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EB82C; /* 0x141EB7CF: jne 0x141eb82c */
L_141EB7D1:
    eax = ebp + eax * 4 + (-0x14); /* 0x141EB7D1: lea eax, [ebp + eax*4 - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x141EB7D5: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = ebp + (-0x3C); /* 0x141EB7D7: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x141EB7DA: push eax */
    eax = MEM32(ecx + (-0x10)); /* 0x141EB7DB: mov eax, dword ptr [ecx - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x141EB7DE: push dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x141EB7E1: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141EB7E4: push eax */
    RECOMP_CALL(sub_141EB3E0); /* 0x141EB7E5: call 0x141eb3e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EB7EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EB9CC; /* 0x141EB7EC: js 0x141eb9cc */
L_141EB7F2:
    ecx = MEM32(ebp + (-0x1C)); /* 0x141EB7F2: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x3C)); /* 0x141EB7F5: mov eax, dword ptr [ebp - 0x3c] */
    ecx = ecx + eax + 0x1; /* 0x141EB7F8: lea ecx, [ecx + eax + 1] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x141EB7FC: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x141EB7FF: mov ecx, dword ptr [ebp - 0x20] */
    /* cmp edx, MEM32(ebp + (-0x30)) */ /* 0x141EB802: cmp edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EB812; /* 0x141EB805: jbe 0x141eb812 */
L_141EB807:
    eax = MEM32(ebp + (-0x28)); /* 0x141EB807: mov eax, dword ptr [ebp - 0x28] */
    /* cmp eax, MEM32(ecx) */ /* 0x141EB80A: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141EB9CC; /* 0x141EB80C: ja 0x141eb9cc */
L_141EB812:
    eax = MEM32(ecx); /* 0x141EB812: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x28)) = eax; /* 0x141EB814: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x141EB817: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EB81A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141EB81B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x141EB81C: add ecx, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4C) = eax; /* 0x141EB81F: mov dword ptr [ebx + 0x4c], eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x141EB822: mov dword ptr [ebp - 0x20], ecx */
    /* cmp edx, esi */ /* 0x141EB825: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB7C9; /* 0x141EB827: jb 0x141eb7c9 */
L_141EB829:
    eax = MEM32(ebp + (-0x18)); /* 0x141EB829: mov eax, dword ptr [ebp - 0x18] */
L_141EB82C:
    ecx = MEM32(ebp + (-0x2C)); /* 0x141EB82C: mov ecx, dword ptr [ebp - 0x2c] */
L_141EB82F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EB82F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x141EB830: mov dword ptr [ebp - 0x18], eax */
    /* cmp eax, 4 */ /* 0x141EB833: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB7B6; /* 0x141EB836: jb 0x141eb7b6 */
L_141EB83C:
    eax = MEM32(ebp + (-0x34)); /* 0x141EB83C: mov eax, dword ptr [ebp - 0x34] */
    eax = MEM32(eax); /* 0x141EB83F: mov eax, dword ptr [eax] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x141EB841: imul eax, eax, 0x1c */
    MEM32(ebp + (-0x28)) = eax; /* 0x141EB844: mov dword ptr [ebp - 0x28], eax */
    eax = eax + esi * 4; /* 0x141EB847: lea eax, [eax + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x141EB84A: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141EB84D: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141EB84E: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EB853: pop ecx */
    ecx = eax; /* 0x141EB854: mov ecx, eax */
    MEM32(ebx) = ecx; /* 0x141EB856: mov dword ptr [ebx], ecx */
    /* test ecx, ecx */ /* 0x141EB858: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB866; /* 0x141EB85A: jne 0x141eb866 */
L_141EB85C:
    eax = 0x8007000Eu; /* 0x141EB85C: mov eax, 0x8007000e */
    goto L_141EB9D1; /* 0x141EB861: jmp 0x141eb9d1 */
L_141EB866:
    eax = MEM32(ebp + (-0x28)); /* 0x141EB866: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141EB869: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x141EB86B: mov dword ptr [ebx + 4], eax */
    eax = eax + esi * 4; /* 0x141EB86E: lea eax, [eax + esi*4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x141EB871: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x141EB874: mov dword ptr [ebp - 0x1c], edi */
    /* test esi, esi */ /* 0x141EB877: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB988; /* 0x141EB879: je 0x141eb988 */
L_141EB87F:
    eax = MEM32(ebp + (-0x2C)); /* 0x141EB87F: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFE8u); /* 0x141EB882: push -0x18 */
    ecx = POP32_VAL(esp); /* 0x141EB884: pop ecx */
    edx = eax + 0x18; /* 0x141EB885: lea edx, [eax + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x141EB888: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x141EB88A: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x30)) = ecx; /* 0x141EB88D: mov dword ptr [ebp - 0x30], ecx */
L_141EB890:
    eax = MEM32(edx + (-0x18)); /* 0x141EB890: mov eax, dword ptr [edx - 0x18] */
    esi = ecx + edx; /* 0x141EB893: lea esi, [ecx + edx] */
    ecx = MEM32(ebx); /* 0x141EB896: mov ecx, dword ptr [ebx] */
    MEM32(esi + ecx) = eax; /* 0x141EB898: mov dword ptr [esi + ecx], eax */
    PUSH32(esp, MEM32(edx + (-0x8))); /* 0x141EB89B: push dword ptr [edx - 8] */
    RECOMP_CALL(sub_140AD0B0); /* 0x141EB89E: call 0x140ad0b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x141EB8A3: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x20)); /* 0x141EB8A5: mov edx, dword ptr [ebp - 0x20] */
    MEM32(esi + ecx + 0x10) = eax; /* 0x141EB8A8: mov dword ptr [esi + ecx + 0x10], eax */
    SET_LO8(eax, MEM8(edx)); /* 0x141EB8AC: mov al, byte ptr [edx] */
    ecx = MEM32(ebx); /* 0x141EB8AE: mov ecx, dword ptr [ebx] */
    MEM8(esi + ecx + 0x18) = (uint8_t)(LO8(eax)); /* 0x141EB8B0: mov byte ptr [esi + ecx + 0x18], al */
    eax = MEM32(edx + (-0x4)); /* 0x141EB8B4: mov eax, dword ptr [edx - 4] */
    ecx = MEM32(ebx); /* 0x141EB8B7: mov ecx, dword ptr [ebx] */
    MEM32(esi + ecx + 0x14) = eax; /* 0x141EB8B9: mov dword ptr [esi + ecx + 0x14], eax */
    ecx = MEM32(ebx); /* 0x141EB8BD: mov ecx, dword ptr [ebx] */
    eax = MEM32(edx + (-0x10)); /* 0x141EB8BF: mov eax, dword ptr [edx - 0x10] */
    MEM32(esi + ecx + 0x8) = eax; /* 0x141EB8C2: mov dword ptr [esi + ecx + 8], eax */
    PUSH32(esp, MEM32(edx + (-0x10))); /* 0x141EB8C6: push dword ptr [edx - 0x10] */
    PUSH32(esp, MEM32(edx + (-0xC))); /* 0x141EB8C9: push dword ptr [edx - 0xc] */
    RECOMP_CALL(sub_140AD100); /* 0x141EB8CC: call 0x140ad100 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x141EB8D1: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x20)); /* 0x141EB8D3: mov edx, dword ptr [ebp - 0x20] */
    MEM32(esi + ecx + 0xC) = eax; /* 0x141EB8D6: mov dword ptr [esi + ecx + 0xc], eax */
    eax = MEM32(ebx); /* 0x141EB8DA: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x18)); /* 0x141EB8DC: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(esi + eax + 0x4) = ecx; /* 0x141EB8DF: mov dword ptr [esi + eax + 4], ecx */
    eax = MEM32(edx + (-0x10)); /* 0x141EB8E3: mov eax, dword ptr [edx - 0x10] */
    ecx = MEM32(ebx); /* 0x141EB8E6: mov ecx, dword ptr [ebx] */
    MEM32(esi + ecx + 0x8) = eax; /* 0x141EB8E8: mov dword ptr [esi + ecx + 8], eax */
    ecx = MEM32(ebx); /* 0x141EB8EC: mov ecx, dword ptr [ebx] */
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x141EB8EE: mov al, byte ptr [edx + 1] */
    MEM8(esi + ecx + 0x19) = (uint8_t)(LO8(eax)); /* 0x141EB8F1: mov byte ptr [esi + ecx + 0x19], al */
    ecx = MEM32(edx + (-0x14)); /* 0x141EB8F5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x34)); /* 0x141EB8F8: add ecx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x141EB8FB: mov edx, ecx */
    MEM32(ebp + (-0x28)) = ecx; /* 0x141EB8FD: mov dword ptr [ebp - 0x28], ecx */
    esi = edx + 0x1; /* 0x141EB900: lea esi, [edx + 1] */
L_141EB903:
    SET_LO8(eax, MEM8(edx)); /* 0x141EB903: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141EB905: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141EB906: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EB903; /* 0x141EB908: jne 0x141eb903 */
L_141EB90A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x141EB90A: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x18)); /* 0x141EB90C: mov esi, dword ptr [ebp - 0x18] */
    eax = edx + 0x1; /* 0x141EB90F: lea eax, [edx + 1] */
    PUSH32(esp, eax); /* 0x141EB912: push eax */
    PUSH32(esp, ecx); /* 0x141EB913: push ecx */
    PUSH32(esp, esi); /* 0x141EB914: push esi */
    MEM32(ebp + (-0x24)) = eax; /* 0x141EB915: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141EB918: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x141EB91D: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x141EB920: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax + ecx * 4) = edi; /* 0x141EB923: mov dword ptr [eax + ecx*4], edi */
    eax = MEM32(ebp + (-0x24)); /* 0x141EB926: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141EB929: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141EB92C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EB968; /* 0x141EB92E: je 0x141eb968 */
L_141EB930:
    edi = MEM32(ebp + (-0x28)); /* 0x141EB930: mov edi, dword ptr [ebp - 0x28] */
    edx = esi; /* 0x141EB933: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x141EB935: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edx; /* 0x141EB937: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x141EB93A: mov dword ptr [ebp - 0x2c], eax */
L_141EB93D:
    SET_LO8(eax, MEM8(edi)); /* 0x141EB93D: mov al, byte ptr [edi] */
    MEM8(edx + edi) = (uint8_t)(LO8(eax)); /* 0x141EB93F: mov byte ptr [edx + edi], al */
    eax = MEM32(ebx + 0x4); /* 0x141EB942: mov eax, dword ptr [ebx + 4] */
    esi = eax + ecx * 4; /* 0x141EB945: lea esi, [eax + ecx*4] */
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x141EB948: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x141EB94B: push eax */
    RECOMP_CALL(sub_141EC7FE); /* 0x141EB94C: call 0x141ec7fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x141EB951: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x28)); /* 0x141EB953: mov edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EB956: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) - 1; /* 0x141EB957: dec dword ptr [ebp - 0x2c] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x141EB95A: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x141EB95B: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141EB93D; /* 0x141EB95E: jne 0x141eb93d */
L_141EB960:
    esi = MEM32(ebp + (-0x18)); /* 0x141EB960: mov esi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x24)); /* 0x141EB963: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EB966: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EB968:
    edx = MEM32(ebp + (-0x20)); /* 0x141EB968: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x141EB96B: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141EB96D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = esi; /* 0x141EB96E: mov dword ptr [ebp - 0x18], esi */
    esi = MEM32(ebp + (-0x38)); /* 0x141EB971: mov esi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1Cu; /* 0x141EB974: add edx, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x141EB977: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, esi */ /* 0x141EB97A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x30)); /* 0x141EB97C: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x20)) = edx; /* 0x141EB97F: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB890; /* 0x141EB982: jb 0x141eb890 */
L_141EB988:
    MEM32(ebx + 0x8) = esi; /* 0x141EB988: mov dword ptr [ebx + 8], esi */
    esi = edi; /* 0x141EB98B: mov esi, edi */
    /* cmp MEM32(ebx + 0x4C), edi */ /* 0x141EB98D: cmp dword ptr [ebx + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EB76E; /* 0x141EB990: jbe 0x141eb76e */
L_141EB996:
    ecx = ebx + 0xC; /* 0x141EB996: lea ecx, [ebx + 0xc] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x141EB999: mov dword ptr [ebp - 0x24], ecx */
L_141EB99C:
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x14))); /* 0x141EB99C: push dword ptr [ebp + esi*4 - 0x14] */
    eax = MEM32(ebx + 0x4); /* 0x141EB9A0: mov eax, dword ptr [ebx + 4] */
    eax = eax + edi * 4; /* 0x141EB9A3: lea eax, [eax + edi*4] */
    PUSH32(esp, eax); /* 0x141EB9A6: push eax */
    eax = edi; /* 0x141EB9A7: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1Cu); /* 0x141EB9A9: imul eax, eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x141EB9AC: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141EB9AE: push eax */
    RECOMP_CALL(sub_141EB418); /* 0x141EB9AF: call 0x141eb418 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + esi * 4 + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + esi * 4 + (-0x14)); /* 0x141EB9B4: add edi, dword ptr [ebp + esi*4 - 0x14] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x24)); /* 0x141EB9B8: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141EB9BB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x141EB9BC: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x141EB9BF: mov dword ptr [ebp - 0x24], ecx */
    /* cmp esi, MEM32(ebx + 0x4C) */ /* 0x141EB9C2: cmp esi, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EB99C; /* 0x141EB9C5: jb 0x141eb99c */
L_141EB9C7:
    RECOMP_BACKEDGE();
    goto L_141EB76E; /* 0x141EB9C7: jmp 0x141eb76e */
L_141EB9CC:
    eax = 0x80004005u; /* 0x141EB9CC: mov eax, 0x80004005 */
L_141EB9D1:
    ecx = MEM32(ebp + (-0x4)); /* 0x141EB9D1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141EB9D4: pop edi */
    esi = POP32_VAL(esp); /* 0x141EB9D5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141EB9D6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141EB9D8: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141EB9D9: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EB9DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EB9DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EB9E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EB9E7u);

L_141EB9E7:
    edi = edi; /* 0x141EB9E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EB9E9: push ebp */
    ebp = esp; /* 0x141EB9EA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141EB9EC: push esi */
    esi = ecx; /* 0x141EB9ED: mov esi, ecx */
    RECOMP_CALL(sub_141EB47E); /* 0x141EB9EF: call 0x141eb47e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x141EB9F4: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBA01; /* 0x141EB9F8: jne 0x141eba01 */
L_141EB9FA:
    eax = 0x80004005u; /* 0x141EB9FA: mov eax, 0x80004005 */
    goto L_141EBA3E; /* 0x141EB9FF: jmp 0x141eba3e */
L_141EBA01:
    PUSH32(esp, edi); /* 0x141EBA01: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBA02: push dword ptr [ebp + 0xc] */
    ecx = esi + 0xC; /* 0x141EBA05: lea ecx, [esi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBA08: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EB4DD); /* 0x141EBA0B: call 0x141eb4dd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBA10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141EBA1B; /* 0x141EBA12: jns 0x141eba1b */
L_141EBA14:
    eax = 0x80004005u; /* 0x141EBA14: mov eax, 0x80004005 */
    goto L_141EBA3D; /* 0x141EBA19: jmp 0x141eba3d */
L_141EBA1B:
    eax = MEM32(esi + 0xC); /* 0x141EBA1B: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x141EBA1E: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0; /* 0x141EBA22: and dword ptr [esi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x141EBA26: mov dword ptr [esi], eax */
    eax = MEM32(esi + 0x10); /* 0x141EBA28: mov eax, dword ptr [esi + 0x10] */
    MEM32(esi + 0x4) = eax; /* 0x141EBA2B: mov dword ptr [esi + 4], eax */
    eax = MEM32(esi + 0x14); /* 0x141EBA2E: mov eax, dword ptr [esi + 0x14] */
    MEM32(esi + 0x8) = eax; /* 0x141EBA31: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x4C) = 1; /* 0x141EBA34: mov dword ptr [esi + 0x4c], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EBA3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EBA3D:
    edi = POP32_VAL(esp); /* 0x141EBA3D: pop edi */
L_141EBA3E:
    esi = POP32_VAL(esp); /* 0x141EBA3E: pop esi */
    ebp = POP32_VAL(esp); /* 0x141EBA3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EBA40: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EBA48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBA48u);

L_141EBA48:
    edi = edi; /* 0x141EBA48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBA4A: push ebp */
    ebp = esp; /* 0x141EBA4B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EBA4D: push ecx */
    PUSH32(esp, ecx); /* 0x141EBA4E: push ecx */
    PUSH32(esp, esi); /* 0x141EBA4F: push esi */
    ecx = ebp + (-0x8); /* 0x141EBA50: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EBA53: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EBA58: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EBA5A: push esi */
    PUSH32(esp, esi); /* 0x141EBA5B: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBA5C: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EBA5F: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EBA62: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBA67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EBAB2; /* 0x141EBA69: js 0x141ebab2 */
L_141EBA6B:
    PUSH32(esp, esi); /* 0x141EBA6B: push esi */
    PUSH32(esp, 0x4E475349u); /* 0x141EBA6C: push 0x4e475349 */
    ecx = ebp + (-0x8); /* 0x141EBA71: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EBA74: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EBA79: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EBA7B: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBA87; /* 0x141EBA7E: jne 0x141eba87 */
L_141EBA80:
    eax = 0x80004005u; /* 0x141EBA80: mov eax, 0x80004005 */
    goto L_141EBAB2; /* 0x141EBA85: jmp 0x141ebab2 */
L_141EBA87:
    PUSH32(esp, edi); /* 0x141EBA87: push edi */
    PUSH32(esp, esi); /* 0x141EBA88: push esi */
    ecx = ebp + (-0x8); /* 0x141EBA89: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EBA8C: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBA91: push esi */
    ecx = ebp + (-0x8); /* 0x141EBA92: lea ecx, [ebp - 8] */
    edi = eax; /* 0x141EBA95: mov edi, eax */
    RECOMP_CALL(sub_141EA005); /* 0x141EBA97: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBA9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBAA7; /* 0x141EBA9E: jne 0x141ebaa7 */
L_141EBAA0:
    eax = 0x80004005u; /* 0x141EBAA0: mov eax, 0x80004005 */
    goto L_141EBAB1; /* 0x141EBAA5: jmp 0x141ebab1 */
L_141EBAA7:
    ecx = MEM32(ebp + 0xC); /* 0x141EBAA7: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141EBAAA: push eax */
    PUSH32(esp, edi); /* 0x141EBAAB: push edi */
    RECOMP_CALL(sub_141EB4DD); /* 0x141EBAAC: call 0x141eb4dd */
    RECOMP_FLAGS_IN();
L_141EBAB1:
    edi = POP32_VAL(esp); /* 0x141EBAB1: pop edi */
L_141EBAB2:
    esi = POP32_VAL(esp); /* 0x141EBAB2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EBAB3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EBAB4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EBABC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBABCu);

L_141EBABC:
    edi = edi; /* 0x141EBABC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBABE: push ebp */
    ebp = esp; /* 0x141EBABF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EBAC1: push ecx */
    PUSH32(esp, ecx); /* 0x141EBAC2: push ecx */
    PUSH32(esp, edi); /* 0x141EBAC3: push edi */
    ecx = ebp + (-0x8); /* 0x141EBAC4: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EBAC7: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EBACC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141EBACE: push edi */
    PUSH32(esp, edi); /* 0x141EBACF: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBAD0: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EBAD3: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EBAD6: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EBB55; /* 0x141EBADD: js 0x141ebb55 */
L_141EBADF:
    PUSH32(esp, esi); /* 0x141EBADF: push esi */
    PUSH32(esp, edi); /* 0x141EBAE0: push edi */
    PUSH32(esp, 0x4E47534Fu); /* 0x141EBAE1: push 0x4e47534f */
    ecx = ebp + (-0x8); /* 0x141EBAE6: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EBAE9: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EBAEE: mov esi, eax */
    ecx = ebp + (-0x8); /* 0x141EBAF0: lea ecx, [ebp - 8] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EBAF3: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBB19; /* 0x141EBAF6: je 0x141ebb19 */
L_141EBAF8:
    PUSH32(esp, esi); /* 0x141EBAF8: push esi */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EBAF9: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBAFE: push esi */
    ecx = ebp + (-0x8); /* 0x141EBAFF: lea ecx, [ebp - 8] */
    edi = eax; /* 0x141EBB02: mov edi, eax */
    RECOMP_CALL(sub_141EA005); /* 0x141EBB04: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBB09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBB4F; /* 0x141EBB0B: je 0x141ebb4f */
L_141EBB0D:
    ecx = MEM32(ebp + 0xC); /* 0x141EBB0D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141EBB10: push eax */
    PUSH32(esp, edi); /* 0x141EBB11: push edi */
    RECOMP_CALL(sub_141EB9E7); /* 0x141EBB12: call 0x141eb9e7 */
    RECOMP_FLAGS_IN();
    goto L_141EBB54; /* 0x141EBB17: jmp 0x141ebb54 */
L_141EBB19:
    PUSH32(esp, edi); /* 0x141EBB19: push edi */
    PUSH32(esp, 0x3547534Fu); /* 0x141EBB1A: push 0x3547534f */
    RECOMP_CALL(sub_141E9F81); /* 0x141EBB1F: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EBB24: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EBB26: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBB4F; /* 0x141EBB29: je 0x141ebb4f */
L_141EBB2B:
    PUSH32(esp, esi); /* 0x141EBB2B: push esi */
    ecx = ebp + (-0x8); /* 0x141EBB2C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EBB2F: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBB34: push esi */
    ecx = ebp + (-0x8); /* 0x141EBB35: lea ecx, [ebp - 8] */
    edi = eax; /* 0x141EBB38: mov edi, eax */
    RECOMP_CALL(sub_141EA005); /* 0x141EBB3A: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBB3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBB4F; /* 0x141EBB41: je 0x141ebb4f */
L_141EBB43:
    ecx = MEM32(ebp + 0xC); /* 0x141EBB43: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141EBB46: push eax */
    PUSH32(esp, edi); /* 0x141EBB47: push edi */
    RECOMP_CALL(sub_141EB72C); /* 0x141EBB48: call 0x141eb72c */
    RECOMP_FLAGS_IN();
    goto L_141EBB54; /* 0x141EBB4D: jmp 0x141ebb54 */
L_141EBB4F:
    eax = 0x80004005u; /* 0x141EBB4F: mov eax, 0x80004005 */
L_141EBB54:
    esi = POP32_VAL(esp); /* 0x141EBB54: pop esi */
L_141EBB55:
    edi = POP32_VAL(esp); /* 0x141EBB55: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EBB56: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EBB57: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EBB5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBB5Fu);

L_141EBB5F:
    edi = edi; /* 0x141EBB5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBB61: push ebp */
    ebp = esp; /* 0x141EBB62: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141EBB64: push ecx */
    PUSH32(esp, ecx); /* 0x141EBB65: push ecx */
    PUSH32(esp, esi); /* 0x141EBB66: push esi */
    ecx = ebp + (-0x8); /* 0x141EBB67: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9DB5); /* 0x141EBB6A: call 0x141e9db5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EBB6F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EBB71: push esi */
    PUSH32(esp, esi); /* 0x141EBB72: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBB73: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x8); /* 0x141EBB76: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F49); /* 0x141EBB79: call 0x141e9f49 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBB7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EBBC9; /* 0x141EBB80: js 0x141ebbc9 */
L_141EBB82:
    PUSH32(esp, esi); /* 0x141EBB82: push esi */
    PUSH32(esp, 0x47534350u); /* 0x141EBB83: push 0x47534350 */
    ecx = ebp + (-0x8); /* 0x141EBB88: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9F81); /* 0x141EBB8B: call 0x141e9f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141EBB90: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x141EBB92: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBB9E; /* 0x141EBB95: jne 0x141ebb9e */
L_141EBB97:
    eax = 0x80004005u; /* 0x141EBB97: mov eax, 0x80004005 */
    goto L_141EBBC9; /* 0x141EBB9C: jmp 0x141ebbc9 */
L_141EBB9E:
    PUSH32(esp, edi); /* 0x141EBB9E: push edi */
    PUSH32(esp, esi); /* 0x141EBB9F: push esi */
    ecx = ebp + (-0x8); /* 0x141EBBA0: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_141E9FD7); /* 0x141EBBA3: call 0x141e9fd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBBA8: push esi */
    ecx = ebp + (-0x8); /* 0x141EBBA9: lea ecx, [ebp - 8] */
    edi = eax; /* 0x141EBBAC: mov edi, eax */
    RECOMP_CALL(sub_141EA005); /* 0x141EBBAE: call 0x141ea005 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBBB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBBBE; /* 0x141EBBB5: jne 0x141ebbbe */
L_141EBBB7:
    eax = 0x80004005u; /* 0x141EBBB7: mov eax, 0x80004005 */
    goto L_141EBBC8; /* 0x141EBBBC: jmp 0x141ebbc8 */
L_141EBBBE:
    ecx = MEM32(ebp + 0xC); /* 0x141EBBBE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141EBBC1: push eax */
    PUSH32(esp, edi); /* 0x141EBBC2: push edi */
    RECOMP_CALL(sub_141EB4DD); /* 0x141EBBC3: call 0x141eb4dd */
    RECOMP_FLAGS_IN();
L_141EBBC8:
    edi = POP32_VAL(esp); /* 0x141EBBC8: pop edi */
L_141EBBC9:
    esi = POP32_VAL(esp); /* 0x141EBBC9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EBBCA: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EBBCB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EBBD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBBD3u);

L_141EBBD3:
    edi = edi; /* 0x141EBBD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBBD5: push ebp */
    ebp = esp; /* 0x141EBBD6: mov ebp, esp */
    eax = 0xE06D7363u; /* 0x141EBBD8: mov eax, 0xe06d7363 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x141EBBDD: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBBEF; /* 0x141EBBE0: jne 0x141ebbef */
L_141EBBE2:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBBE2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141EBBE5: push eax */
    RECOMP_CALL(sub_141ECA78); /* 0x141EBBE6: call 0x141eca78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBBEB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x141EBBEC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x141EBBED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EBBEE: ret  */
L_141EBBEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EBBEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141EBBF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EBBF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EBBF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBBF8u);

L_141EBBF8:
    edi = edi; /* 0x141EBBF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBBFA: push ebp */
    ebp = esp; /* 0x141EBBFB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141EBBFD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141EBBFE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EBC01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EBC14; /* 0x141EBC03: jmp 0x141ebc14 */
L_141EBC05:
    /* test eax, eax */ /* 0x141EBC05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBC19; /* 0x141EBC07: jne 0x141ebc19 */
L_141EBC09:
    ecx = MEM32(esi); /* 0x141EBC09: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x141EBC0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBC11; /* 0x141EBC0D: je 0x141ebc11 */
L_141EBC0F:
    RECOMP_ICALL(ecx); /* 0x141EBC0F: call ecx */
    RECOMP_FLAGS_IN();
L_141EBC11:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x141EBC11: add esi, 4 */
    _flag_k = FK_ADD;
L_141EBC14:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x141EBC14: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141EBC05; /* 0x141EBC17: jb 0x141ebc05 */
L_141EBC19:
    esi = POP32_VAL(esp); /* 0x141EBC19: pop esi */
    ebp = POP32_VAL(esp); /* 0x141EBC1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EBC1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EBC48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBC48u);

L_141EBC48:
    edi = edi; /* 0x141EBC48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EBC4A: push ebp */
    ebp = esp; /* 0x141EBC4B: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x141EBC4D: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141EBC51: push ebx */
    PUSH32(esp, esi); /* 0x141EBC52: push esi */
    PUSH32(esp, edi); /* 0x141EBC53: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBD54; /* 0x141EBC54: jne 0x141ebd54 */
L_141EBC5A:
    eax = MEM32(0x141F7B30); /* 0x141EBC5A: mov eax, dword ptr [0x141f7b30] */
    /* test eax, eax */ /* 0x141EBC5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EBD4D; /* 0x141EBC61: jle 0x141ebd4d */
L_141EBC67:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141EBC67: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x141F7B30) = eax; /* 0x141EBC68: mov dword ptr [0x141f7b30], eax */
    eax = MEM32(FS_BASE + (0x18)); /* 0x141EBC6D: mov eax, dword ptr fs:[0x18] */
    eax = MEM32(eax + 0x4); /* 0x141EBC73: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EBC76: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EBC78: push esi */
    PUSH32(esp, eax); /* 0x141EBC79: push eax */
    ebx = 0x141F7E8Cu; /* 0x141EBC7A: mov ebx, 0x141f7e8c */
    PUSH32(esp, ebx); /* 0x141EBC7F: push ebx */
    MEM32(ebp + 0xC) = eax; /* 0x141EBC80: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + 0x10) = esi; /* 0x141EBC83: mov dword ptr [ebp + 0x10], esi */
    RECOMP_ICALL(MEM32(0x14001080)); /* 0x141EBC86: call dword ptr [0x14001080] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EBC8C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EBC8E: inc edi */
    _flag_k = FK_INC;
    goto L_141EBCAC; /* 0x141EBC8F: jmp 0x141ebcac */
L_141EBC91:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x141EBC91: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBCB2; /* 0x141EBC94: je 0x141ebcb2 */
L_141EBC96:
    PUSH32(esp, 0x3E8u); /* 0x141EBC96: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x1400107C)); /* 0x141EBC9B: call dword ptr [0x1400107c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBCA1: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBCA2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141EBCA5: push ebx */
    RECOMP_ICALL(MEM32(0x14001080)); /* 0x141EBCA6: call dword ptr [0x14001080] */
    RECOMP_FLAGS_IN();
L_141EBCAC:
    /* test eax, eax */ /* 0x141EBCAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBC91; /* 0x141EBCAE: jne 0x141ebc91 */
L_141EBCB0:
    goto L_141EBCB5; /* 0x141EBCB0: jmp 0x141ebcb5 */
L_141EBCB2:
    MEM32(ebp + 0x10) = edi; /* 0x141EBCB2: mov dword ptr [ebp + 0x10], edi */
L_141EBCB5:
    /* cmp MEM32(0x141F7E88), 2 */ /* 0x141EBCB5: cmp dword ptr [0x141f7e88], 2 */
    _flag_a = (uint32_t)(MEM32(0x141F7E88)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBCCB; /* 0x141EBCBC: je 0x141ebccb */
L_141EBCBE:
    PUSH32(esp, 0x1Fu); /* 0x141EBCBE: push 0x1f */
    RECOMP_CALL(sub_141ECBEE); /* 0x141EBCC0: call 0x141ecbee */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBCC5: pop ecx */
    goto L_141EBE1D; /* 0x141EBCC6: jmp 0x141ebe1d */
L_141EBCCB:
    ebx = MEM32(0x141F7E94); /* 0x141EBCCB: mov ebx, dword ptr [0x141f7e94] */
    /* test ebx, ebx */ /* 0x141EBCD1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBD2D; /* 0x141EBCD3: je 0x141ebd2d */
L_141EBCD5:
    ecx = MEM32(0x141F7E90); /* 0x141EBCD5: mov ecx, dword ptr [0x141f7e90] */
    MEM32(ebp + 0xC) = ebx; /* 0x141EBCDB: mov dword ptr [ebp + 0xc], ebx */
    edi = ecx; /* 0x141EBCDE: mov edi, ecx */
L_141EBCE0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x141EBCE0: sub ecx, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x141EBCE3: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, ebx */ /* 0x141EBCE6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EBD16; /* 0x141EBCE8: jb 0x141ebd16 */
L_141EBCEA:
    /* cmp MEM32(ecx), esi */ /* 0x141EBCEA: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBCE0; /* 0x141EBCEC: je 0x141ebce0 */
L_141EBCEE:
    eax = MEM32(ecx); /* 0x141EBCEE: mov eax, dword ptr [ecx] */
    MEM32(ecx) = esi; /* 0x141EBCF0: mov dword ptr [ecx], esi */
    RECOMP_ICALL(eax); /* 0x141EBCF2: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x141F7E94); /* 0x141EBCF4: mov edx, dword ptr [0x141f7e94] */
    eax = MEM32(0x141F7E90); /* 0x141EBCFA: mov eax, dword ptr [0x141f7e90] */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x141EBCFF: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBD0B; /* 0x141EBD02: jne 0x141ebd0b */
L_141EBD04:
    ecx = MEM32(ebp + 0x8); /* 0x141EBD04: mov ecx, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x141EBD07: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBCE0; /* 0x141EBD09: je 0x141ebce0 */
L_141EBD0B:
    MEM32(ebp + 0xC) = edx; /* 0x141EBD0B: mov dword ptr [ebp + 0xc], edx */
    ebx = edx; /* 0x141EBD0E: mov ebx, edx */
    edi = eax; /* 0x141EBD10: mov edi, eax */
    ecx = eax; /* 0x141EBD12: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_141EBCE0; /* 0x141EBD14: jmp 0x141ebce0 */
L_141EBD16:
    PUSH32(esp, ebx); /* 0x141EBD16: push ebx */
    RECOMP_ICALL(MEM32(0x14001150)); /* 0x141EBD17: call dword ptr [0x14001150] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EBD1D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141EBD1F: pop ecx */
    MEM32(0x141F7E90) = esi; /* 0x141EBD20: mov dword ptr [0x141f7e90], esi */
    MEM32(0x141F7E94) = esi; /* 0x141EBD26: mov dword ptr [0x141f7e94], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EBD2C: inc edi */
    _flag_k = FK_INC;
L_141EBD2D:
    MEM32(0x141F7E88) = esi; /* 0x141EBD2D: mov dword ptr [0x141f7e88], esi */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x141EBD33: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBE1D; /* 0x141EBD36: jne 0x141ebe1d */
L_141EBD3C:
    PUSH32(esp, esi); /* 0x141EBD3C: push esi */
    PUSH32(esp, 0x141F7E8Cu); /* 0x141EBD3D: push 0x141f7e8c */
    RECOMP_ICALL(MEM32(0x14001074)); /* 0x141EBD42: call dword ptr [0x14001074] */
    RECOMP_FLAGS_IN();
    goto L_141EBE1D; /* 0x141EBD48: jmp 0x141ebe1d */
L_141EBD4D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EBD4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EBE1F; /* 0x141EBD4F: jmp 0x141ebe1f */
L_141EBD54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EBD54: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EBD56: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x141EBD57: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBE1D; /* 0x141EBD5A: jne 0x141ebe1d */
L_141EBD60:
    eax = MEM32(FS_BASE + (0x18)); /* 0x141EBD60: mov eax, dword ptr fs:[0x18] */
    eax = MEM32(eax + 0x4); /* 0x141EBD66: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EBD69: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EBD6B: push esi */
    MEM32(ebp + 0xC) = eax; /* 0x141EBD6C: mov dword ptr [ebp + 0xc], eax */
    ebx = esi; /* 0x141EBD6F: mov ebx, esi */
    PUSH32(esp, eax); /* 0x141EBD71: push eax */
    goto L_141EBD88; /* 0x141EBD72: jmp 0x141ebd88 */
L_141EBD74:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x141EBD74: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBD99; /* 0x141EBD77: je 0x141ebd99 */
L_141EBD79:
    PUSH32(esp, 0x3E8u); /* 0x141EBD79: push 0x3e8 */
    RECOMP_ICALL(MEM32(0x1400107C)); /* 0x141EBD7E: call dword ptr [0x1400107c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141EBD84: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBD85: push dword ptr [ebp + 0xc] */
L_141EBD88:
    PUSH32(esp, 0x141F7E8Cu); /* 0x141EBD88: push 0x141f7e8c */
    RECOMP_ICALL(MEM32(0x14001080)); /* 0x141EBD8D: call dword ptr [0x14001080] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141EBD93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBD74; /* 0x141EBD95: jne 0x141ebd74 */
L_141EBD97:
    goto L_141EBD9B; /* 0x141EBD97: jmp 0x141ebd9b */
L_141EBD99:
    ebx = edi; /* 0x141EBD99: mov ebx, edi */
L_141EBD9B:
    /* cmp MEM32(0x141F7E88), esi */ /* 0x141EBD9B: cmp dword ptr [0x141f7e88], esi */
    _flag_a = (uint32_t)(MEM32(0x141F7E88)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBDAC; /* 0x141EBDA1: je 0x141ebdac */
L_141EBDA3:
    PUSH32(esp, 0x1Fu); /* 0x141EBDA3: push 0x1f */
    RECOMP_CALL(sub_141ECBEE); /* 0x141EBDA5: call 0x141ecbee */
    RECOMP_FLAGS_IN();
    goto L_141EBDE1; /* 0x141EBDAA: jmp 0x141ebde1 */
L_141EBDAC:
    PUSH32(esp, 0x140011CCu); /* 0x141EBDAC: push 0x140011cc */
    PUSH32(esp, 0x140011C0u); /* 0x141EBDB1: push 0x140011c0 */
    MEM32(0x141F7E88) = edi; /* 0x141EBDB6: mov dword ptr [0x141f7e88], edi */
    RECOMP_CALL(sub_141EBBF8); /* 0x141EBDBC: call 0x141ebbf8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBDC1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x141EBDC2: pop ecx */
    /* test eax, eax */ /* 0x141EBDC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBD4D; /* 0x141EBDC5: jne 0x141ebd4d */
L_141EBDC7:
    PUSH32(esp, 0x140011BCu); /* 0x141EBDC7: push 0x140011bc */
    PUSH32(esp, 0x140011B4u); /* 0x141EBDCC: push 0x140011b4 */
    RECOMP_CALL(sub_141ECBE2); /* 0x141EBDD1: call 0x141ecbe2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBDD6: pop ecx */
    MEM32(0x141F7E88) = 2; /* 0x141EBDD7: mov dword ptr [0x141f7e88], 2 */
L_141EBDE1:
    ecx = POP32_VAL(esp); /* 0x141EBDE1: pop ecx */
    /* test ebx, ebx */ /* 0x141EBDE2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBDF2; /* 0x141EBDE4: jne 0x141ebdf2 */
L_141EBDE6:
    PUSH32(esp, esi); /* 0x141EBDE6: push esi */
    PUSH32(esp, 0x141F7E8Cu); /* 0x141EBDE7: push 0x141f7e8c */
    RECOMP_ICALL(MEM32(0x14001074)); /* 0x141EBDEC: call dword ptr [0x14001074] */
    RECOMP_FLAGS_IN();
L_141EBDF2:
    /* cmp MEM32(0x141F7EA0), esi */ /* 0x141EBDF2: cmp dword ptr [0x141f7ea0], esi */
    _flag_a = (uint32_t)(MEM32(0x141F7EA0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBE17; /* 0x141EBDF8: je 0x141ebe17 */
L_141EBDFA:
    PUSH32(esp, 0x141F7EA0u); /* 0x141EBDFA: push 0x141f7ea0 */
    RECOMP_CALL(sub_141ECB20); /* 0x141EBDFF: call 0x141ecb20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBE04: pop ecx */
    /* test eax, eax */ /* 0x141EBE05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBE17; /* 0x141EBE07: je 0x141ebe17 */
L_141EBE09:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EBE09: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x141EBE0C: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBE0E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x141F7EA0)); /* 0x141EBE11: call dword ptr [0x141f7ea0] */
    RECOMP_FLAGS_IN();
L_141EBE17:
    _flag_a = (uint32_t)(MEM32(0x141F7B30)); _flag_b = (uint32_t)(1);
    MEM32(0x141F7B30) = MEM32(0x141F7B30) + 1; /* 0x141EBE17: inc dword ptr [0x141f7b30] */
    _flag_k = FK_INC;
L_141EBE1D:
    eax = edi; /* 0x141EBE1D: mov eax, edi */
L_141EBE1F:
    edi = POP32_VAL(esp); /* 0x141EBE1F: pop edi */
    esi = POP32_VAL(esp); /* 0x141EBE20: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EBE21: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141EBE22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EBE23: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141EC08B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC08Bu);

L_141EC08B:
    MEM32(0x141F00A0) = 0xFFFFFFFFu; /* 0x141EC08B: mov dword ptr [0x141f00a0], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC095: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC09B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC09Bu);

    goto L_141EC09B;
L_141EBE2B:
    PUSH32(esp, 0x2Cu); /* 0x141EBE2B: push 0x2c */
    PUSH32(esp, 0x141EDBA8u); /* 0x141EBE2D: push 0x141edba8 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141EBE32: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 1; /* 0x141EBE37: mov dword ptr [ebp - 0x1c], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EBE3E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBE40: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + 0xC); /* 0x141EBE43: mov eax, dword ptr [ebp + 0xc] */
    MEM32(0x141F00A0) = eax; /* 0x141EBE46: mov dword ptr [0x141f00a0], eax */
    /* test eax, eax */ /* 0x141EBE4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBE5F; /* 0x141EBE4D: jne 0x141ebe5f */
L_141EBE4F:
    /* cmp MEM32(0x141F7B30), eax */ /* 0x141EBE4F: cmp dword ptr [0x141f7b30], eax */
    _flag_a = (uint32_t)(MEM32(0x141F7B30)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBE5F; /* 0x141EBE55: jne 0x141ebe5f */
L_141EBE57:
    MEM32(ebp + (-0x1C)) = esi; /* 0x141EBE57: mov dword ptr [ebp - 0x1c], esi */
    goto L_141EC074; /* 0x141EBE5A: jmp 0x141ec074 */
L_141EBE5F:
    /* cmp eax, 1 */ /* 0x141EBE5F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EBE6D; /* 0x141EBE62: je 0x141ebe6d */
L_141EBE64:
    /* cmp eax, 2 */ /* 0x141EBE64: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBF03; /* 0x141EBE67: jne 0x141ebf03 */
L_141EBE6D:
    eax = MEM32(0x141F7E9C); /* 0x141EBE6D: mov eax, dword ptr [0x141f7e9c] */
    /* test eax, eax */ /* 0x141EBE72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBEB6; /* 0x141EBE74: je 0x141ebeb6 */
L_141EBE76:
    MEM32(ebp + (-0x4)) = 1; /* 0x141EBE76: mov dword ptr [ebp - 4], 1 */
    MEM32(0x141F7B34) = 1; /* 0x141EBE7D: mov dword ptr [0x141f7b34], 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EBE87: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBE8A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBE8D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x141EBE90: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EBE92: mov dword ptr [ebp - 0x1c], eax */
    goto L_141EBEB3; /* 0x141EBE95: jmp 0x141ebeb3 */
L_141EBEB3:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBEB3: mov dword ptr [ebp - 4], esi */
L_141EBEB6:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x141EBEB6: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC074; /* 0x141EBEBA: je 0x141ec074 */
L_141EBEC0:
    MEM32(ebp + (-0x4)) = 2; /* 0x141EBEC0: mov dword ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EBEC7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBECA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBECD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EBC48); /* 0x141EBED0: call 0x141ebc48 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EBED5: mov dword ptr [ebp - 0x1c], eax */
    goto L_141EBEF6; /* 0x141EBED8: jmp 0x141ebef6 */
L_141EBEF6:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBEF6: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x141EBEF9: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC074; /* 0x141EBEFD: je 0x141ec074 */
L_141EBF03:
    MEM32(ebp + (-0x4)) = 3; /* 0x141EBF03: mov dword ptr [ebp - 4], 3 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EBF0A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBF0D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBF10: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14066B30); /* 0x141EBF13: call 0x14066b30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EBF18: mov dword ptr [ebp - 0x1c], eax */
    goto L_141EBF39; /* 0x141EBF1B: jmp 0x141ebf39 */
L_141EBF39:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBF39: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x141EBF3C: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBFE3; /* 0x141EBF40: jne 0x141ebfe3 */
L_141EBF46:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x141EBF46: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EBFE3; /* 0x141EBF4A: jne 0x141ebfe3 */
L_141EBF50:
    MEM32(ebp + (-0x4)) = 4; /* 0x141EBF50: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, esi); /* 0x141EBF57: push esi */
    PUSH32(esp, esi); /* 0x141EBF58: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBF59: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14066B30); /* 0x141EBF5C: call 0x14066b30 */
    RECOMP_FLAGS_IN();
    goto L_141EBF7C; /* 0x141EBF61: jmp 0x141ebf7c */
L_141EBF7C:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBF7C: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x4)) = 5; /* 0x141EBF7F: mov dword ptr [ebp - 4], 5 */
    PUSH32(esp, esi); /* 0x141EBF86: push esi */
    PUSH32(esp, esi); /* 0x141EBF87: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBF88: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EBC48); /* 0x141EBF8B: call 0x141ebc48 */
    RECOMP_FLAGS_IN();
    goto L_141EBFAB; /* 0x141EBF90: jmp 0x141ebfab */
L_141EBFAB:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBFAB: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x141F7E9C); /* 0x141EBFAE: mov eax, dword ptr [0x141f7e9c] */
    /* test eax, eax */ /* 0x141EBFB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBFE3; /* 0x141EBFB5: je 0x141ebfe3 */
L_141EBFB7:
    MEM32(ebp + (-0x4)) = 6; /* 0x141EBFB7: mov dword ptr [ebp - 4], 6 */
    PUSH32(esp, esi); /* 0x141EBFBE: push esi */
    PUSH32(esp, esi); /* 0x141EBFBF: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EBFC0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x141EBFC3: call eax */
    RECOMP_FLAGS_IN();
    goto L_141EBFE0; /* 0x141EBFC5: jmp 0x141ebfe0 */
L_141EBFE0:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EBFE0: mov dword ptr [ebp - 4], esi */
L_141EBFE3:
    eax = MEM32(ebp + 0xC); /* 0x141EBFE3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x141EBFE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EBFF3; /* 0x141EBFE8: je 0x141ebff3 */
L_141EBFEA:
    /* cmp eax, 3 */ /* 0x141EBFEA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC074; /* 0x141EBFED: jne 0x141ec074 */
L_141EBFF3:
    MEM32(ebp + (-0x4)) = 7; /* 0x141EBFF3: mov dword ptr [ebp - 4], 7 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EBFFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EBFFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC000: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EBC48); /* 0x141EC003: call 0x141ebc48 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC008: mov dword ptr [ebp - 0x1c], eax */
    goto L_141EC029; /* 0x141EC00B: jmp 0x141ec029 */
L_141EC029:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EC029: mov dword ptr [ebp - 4], esi */
    eax = MEM32(0x141F7E9C); /* 0x141EC02C: mov eax, dword ptr [0x141f7e9c] */
    /* test eax, eax */ /* 0x141EC031: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC074; /* 0x141EC033: je 0x141ec074 */
L_141EC035:
    /* cmp MEM32(0x141F7B34), 0 */ /* 0x141EC035: cmp dword ptr [0x141f7b34], 0 */
    _flag_a = (uint32_t)(MEM32(0x141F7B34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC074; /* 0x141EC03C: je 0x141ec074 */
L_141EC03E:
    MEM32(ebp + (-0x4)) = 8; /* 0x141EC03E: mov dword ptr [ebp - 4], 8 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EC045: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EC048: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC04B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x141EC04E: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC050: mov dword ptr [ebp - 0x1c], eax */
    goto L_141EC071; /* 0x141EC053: jmp 0x141ec071 */
L_141EC071:
    MEM32(ebp + (-0x4)) = esi; /* 0x141EC071: mov dword ptr [ebp - 4], esi */
L_141EC074:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141EC074: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141EC08B); /* 0x141EC07B: call 0x141ec08b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x141EC080: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_141ECC41); /* 0x141EC083: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141EC088: ret 0xc */
L_141EC09B:
    edi = edi; /* 0x141EC09B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC09D: push ebp */
    ebp = esp; /* 0x141EC09E: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x141EC0A0: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC0AB; /* 0x141EC0A4: jne 0x141ec0ab */
L_141EC0A6:
    RECOMP_CALL(sub_141ECC84); /* 0x141EC0A6: call 0x141ecc84 */
    RECOMP_FLAGS_IN();
L_141EC0AB:
    ebp = POP32_VAL(esp); /* 0x141EC0AB: pop ebp */
    RECOMP_BACKEDGE();
    goto L_141EBE2B; /* 0x141EC0AC: jmp 0x141ebe2b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EC0B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC0B6u);

L_141EC0B6:
    /* cmp ecx, MEM32(0x141F0098) */ /* 0x141EC0B6: cmp ecx, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x141F0098));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC0C1; /* 0x141EC0BC: jne 0x141ec0c1 */
L_141EC0BE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC0BE: ret 0 */
L_141EC0C1:
    goto L_141ECD29; /* 0x141EC0C1: jmp 0x141ecd29 */
L_141ECD29:
    edi = edi; /* 0x141ECD29: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECD2B: push ebp */
    ebp = esp; /* 0x141ECD2C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x141ECD2E: sub esp, 0x328 */
    _flag_k = FK_CMP;
    MEM32(0x141F7C38) = eax; /* 0x141ECD34: mov dword ptr [0x141f7c38], eax */
    MEM32(0x141F7C34) = ecx; /* 0x141ECD39: mov dword ptr [0x141f7c34], ecx */
    MEM32(0x141F7C30) = edx; /* 0x141ECD3F: mov dword ptr [0x141f7c30], edx */
    MEM32(0x141F7C2C) = ebx; /* 0x141ECD45: mov dword ptr [0x141f7c2c], ebx */
    MEM32(0x141F7C28) = esi; /* 0x141ECD4B: mov dword ptr [0x141f7c28], esi */
    MEM32(0x141F7C24) = edi; /* 0x141ECD51: mov dword ptr [0x141f7c24], edi */
    MEM16(0x141F7C50) = (uint16_t)(_seg_ss); /* 0x141ECD57: mov word ptr [0x141f7c50], ss */
    MEM16(0x141F7C44) = (uint16_t)(_seg_cs); /* 0x141ECD5E: mov word ptr [0x141f7c44], cs */
    MEM16(0x141F7C20) = (uint16_t)(_seg_ds); /* 0x141ECD65: mov word ptr [0x141f7c20], ds */
    MEM16(0x141F7C1C) = (uint16_t)(_seg_es); /* 0x141ECD6C: mov word ptr [0x141f7c1c], es */
    MEM16(0x141F7C18) = (uint16_t)(_seg_fs); /* 0x141ECD73: mov word ptr [0x141f7c18], fs */
    MEM16(0x141F7C14) = (uint16_t)(_seg_gs); /* 0x141ECD7A: mov word ptr [0x141f7c14], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141ECD81: pushfd  */
    POP32(esp, MEM32(0x141F7C48)); /* 0x141ECD82: pop dword ptr [0x141f7c48] */
    eax = MEM32(ebp); /* 0x141ECD88: mov eax, dword ptr [ebp] */
    MEM32(0x141F7C3C) = eax; /* 0x141ECD8B: mov dword ptr [0x141f7c3c], eax */
    eax = MEM32(ebp + 0x4); /* 0x141ECD90: mov eax, dword ptr [ebp + 4] */
    MEM32(0x141F7C40) = eax; /* 0x141ECD93: mov dword ptr [0x141f7c40], eax */
    eax = ebp + 0x8; /* 0x141ECD98: lea eax, [ebp + 8] */
    MEM32(0x141F7C4C) = eax; /* 0x141ECD9B: mov dword ptr [0x141f7c4c], eax */
    eax = MEM32(ebp + (-0x320)); /* 0x141ECDA0: mov eax, dword ptr [ebp - 0x320] */
    MEM32(0x141F7B88) = 0x00010001u; /* 0x141ECDA6: mov dword ptr [0x141f7b88], 0x10001 */
    eax = MEM32(0x141F7C40); /* 0x141ECDB0: mov eax, dword ptr [0x141f7c40] */
    MEM32(0x141F7B44) = eax; /* 0x141ECDB5: mov dword ptr [0x141f7b44], eax */
    MEM32(0x141F7B38) = 0xC0000409u; /* 0x141ECDBA: mov dword ptr [0x141f7b38], 0xc0000409 */
    MEM32(0x141F7B3C) = 1; /* 0x141ECDC4: mov dword ptr [0x141f7b3c], 1 */
    eax = MEM32(0x141F0098); /* 0x141ECDCE: mov eax, dword ptr [0x141f0098] */
    MEM32(ebp + (-0x328)) = eax; /* 0x141ECDD3: mov dword ptr [ebp - 0x328], eax */
    eax = MEM32(0x141F009C); /* 0x141ECDD9: mov eax, dword ptr [0x141f009c] */
    MEM32(ebp + (-0x324)) = eax; /* 0x141ECDDE: mov dword ptr [ebp - 0x324], eax */
    PUSH32(esp, 0); /* 0x141ECDE4: push 0 */
    RECOMP_ICALL(MEM32(0x14001044)); /* 0x141ECDE6: call dword ptr [0x14001044] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140027E4u); /* 0x141ECDEC: push 0x140027e4 */
    RECOMP_ICALL(MEM32(0x14001008)); /* 0x141ECDF1: call dword ptr [0x14001008] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC0000409u); /* 0x141ECDF7: push 0xc0000409 */
    RECOMP_ICALL(MEM32(0x1400100C)); /* 0x141ECDFC: call dword ptr [0x1400100c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x141ECE02: push eax */
    RECOMP_ICALL(MEM32(0x14001010)); /* 0x141ECE03: call dword ptr [0x14001010] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141ECE09: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECE0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC0CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC0CBu);

L_141EC0CB:
    edi = edi; /* 0x141EC0CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC0CD: push ebp */
    ebp = esp; /* 0x141EC0CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x141EC0D0: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141EC0D6: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141EC0DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141EC0DD: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x141EC0E0: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x141EC0E6: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x141EC0EC: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x141EC0F2: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x141EC0F8: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x141EC0FE: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x141EC104: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x141EC10B: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x141EC112: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x141EC119: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x141EC120: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x141EC127: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141EC12E: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x141EC12F: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x141EC135: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x141EC138: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x141EC13E: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x141EC141: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x141EC14B: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x141EC151: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x140027ACu); /* 0x141EC154: push 0x140027ac */
    MEM32(ebp + (-0x21C)) = eax; /* 0x141EC159: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x14001054)); /* 0x141EC15F: call dword ptr [0x14001054] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x141EC165: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141EC168: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EC16A: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC16F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC170: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC176(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC176u);

    goto L_141EC176;
L_141EC0CB:
    edi = edi; /* 0x141EC0CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC0CD: push ebp */
    ebp = esp; /* 0x141EC0CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x141EC0D0: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141EC0D6: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141EC0DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141EC0DD: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x141EC0E0: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x141EC0E6: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x141EC0EC: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x141EC0F2: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x141EC0F8: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x141EC0FE: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x141EC104: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x141EC10B: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x141EC112: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x141EC119: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x141EC120: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x141EC127: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141EC12E: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x141EC12F: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x141EC135: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x141EC138: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x141EC13E: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x141EC141: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x141EC14B: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x141EC151: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x140027ACu); /* 0x141EC154: push 0x140027ac */
    MEM32(ebp + (-0x21C)) = eax; /* 0x141EC159: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x14001054)); /* 0x141EC15F: call dword ptr [0x14001054] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x141EC165: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141EC168: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EC16A: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC16F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC170: ret  */
L_141EC176:
    edi = edi; /* 0x141EC176: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC178: push ebp */
    ebp = esp; /* 0x141EC179: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x141EC17B: pop ebp */
    RECOMP_BACKEDGE();
    goto L_141EC0CB; /* 0x141EC17C: jmp 0x141ec0cb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EC1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC1A0u);

L_141EC1A0:
    PUSH32(esp, ecx); /* 0x141EC1A0: push ecx */
    ecx = esp + 0x4; /* 0x141EC1A1: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x141EC1A5: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141EC1A7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x141EC1A9: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x141EC1AB: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x141EC1AD: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x141EC1AF: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EC1B4:
    /* cmp ecx, eax */ /* 0x141EC1B4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC1C2; /* 0x141EC1B6: jb 0x141ec1c2 */
L_141EC1B8:
    eax = ecx; /* 0x141EC1B8: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x141EC1BA: pop ecx */
    { uint32_t _tmp = esp; /* 0x141EC1BB: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x141EC1BC: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x141EC1BE: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC1C1: ret  */
L_141EC1C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x141EC1C2: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x141EC1C7: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141EC1B4; /* 0x141EC1C9: jmp 0x141ec1b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EC1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC1D0u);

L_141EC1D0:
    PUSH32(esp, ebx); /* 0x141EC1D0: push ebx */
    PUSH32(esp, esi); /* 0x141EC1D1: push esi */
    PUSH32(esp, edi); /* 0x141EC1D2: push edi */
    edx = MEM32(esp + 0x10); /* 0x141EC1D3: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x14); /* 0x141EC1D7: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x141EC1DB: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebp); /* 0x141EC1DF: push ebp */
    PUSH32(esp, edx); /* 0x141EC1E0: push edx */
    PUSH32(esp, eax); /* 0x141EC1E1: push eax */
    PUSH32(esp, ecx); /* 0x141EC1E2: push ecx */
    PUSH32(esp, ecx); /* 0x141EC1E3: push ecx */
    PUSH32(esp, 0x141EC260u); /* 0x141EC1E4: push 0x141ec260 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x141EC1E9: push dword ptr fs:[0] */
    eax = MEM32(0x141F0098); /* 0x141EC1F0: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x141EC1F5: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x141EC1F7: mov dword ptr [esp + 8], eax */
    MEM32(FS_BASE + (0)) = esp; /* 0x141EC1FB: mov dword ptr fs:[0], esp */
L_141EC202:
    eax = MEM32(esp + 0x30); /* 0x141EC202: mov eax, dword ptr [esp + 0x30] */
    ebx = MEM32(eax + 0x8); /* 0x141EC206: mov ebx, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x141EC209: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x141EC20D: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0xC); /* 0x141EC20F: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x141EC212: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC252; /* 0x141EC215: je 0x141ec252 */
L_141EC217:
    edx = MEM32(esp + 0x34); /* 0x141EC217: mov edx, dword ptr [esp + 0x34] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x141EC21B: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC224; /* 0x141EC21E: je 0x141ec224 */
L_141EC220:
    /* cmp esi, edx */ /* 0x141EC220: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EC252; /* 0x141EC222: jbe 0x141ec252 */
L_141EC224:
    esi = esi + esi * 2; /* 0x141EC224: lea esi, [esi + esi*2] */
    ebx = ebx + esi * 4 + 0x10; /* 0x141EC227: lea ebx, [ebx + esi*4 + 0x10] */
    ecx = MEM32(ebx); /* 0x141EC22B: mov ecx, dword ptr [ebx] */
    MEM32(eax + 0xC) = ecx; /* 0x141EC22D: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x141EC230: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC202; /* 0x141EC234: jne 0x141ec202 */
L_141EC236:
    PUSH32(esp, 0x101u); /* 0x141EC236: push 0x101 */
    eax = MEM32(ebx + 0x8); /* 0x141EC23B: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_141ECEB5); /* 0x141EC23E: call 0x141eceb5 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x141EC243: mov ecx, 1 */
    eax = MEM32(ebx + 0x8); /* 0x141EC248: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_141ECED4); /* 0x141EC24B: call 0x141eced4 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_141EC202; /* 0x141EC250: jmp 0x141ec202 */
L_141EC252:
    POP32(esp, MEM32(FS_BASE + (0))); /* 0x141EC252: pop dword ptr fs:[0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141EC259: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141EC25C: pop edi */
    esi = POP32_VAL(esp); /* 0x141EC25D: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EC25E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC25F: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC260u);

L_141EC260:
    ecx = MEM32(esp + 0x4); /* 0x141EC260: mov ecx, dword ptr [esp + 4] */
    /* test MEM32(ecx + 0x4), 6 */ /* 0x141EC264: test dword ptr [ecx + 4], 6 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x141EC26B: mov eax, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC2A5; /* 0x141EC270: je 0x141ec2a5 */
L_141EC272:
    eax = MEM32(esp + 0x8); /* 0x141EC272: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x8); /* 0x141EC276: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EC279: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EC27B: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x141EC280: push ebp */
    ebp = MEM32(eax + 0x18); /* 0x141EC281: mov ebp, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x141EC284: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x141EC287: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x141EC28A: push dword ptr [eax + 0x14] */
    RECOMP_CALL(sub_141EC1D0); /* 0x141EC28D: call 0x141ec1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141EC292: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x141EC295: pop ebp */
    eax = MEM32(esp + 0x8); /* 0x141EC296: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x141EC29A: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x141EC29E: mov dword ptr [edx], eax */
    eax = 3; /* 0x141EC2A0: mov eax, 3 */
L_141EC2A5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC2A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC2C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC2C2u);

L_141EC2C2:
    PUSH32(esp, ebp); /* 0x141EC2C2: push ebp */
    PUSH32(esp, esi); /* 0x141EC2C3: push esi */
    PUSH32(esp, edi); /* 0x141EC2C4: push edi */
    PUSH32(esp, ebx); /* 0x141EC2C5: push ebx */
    ebp = edx; /* 0x141EC2C6: mov ebp, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EC2C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141EC2CA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141EC2CC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EC2CE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EC2D0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ecx); /* 0x141EC2D2: call ecx */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x141EC2D4: pop ebx */
    edi = POP32_VAL(esp); /* 0x141EC2D5: pop edi */
    esi = POP32_VAL(esp); /* 0x141EC2D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x141EC2D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC2D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC2D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC2D9u);

L_141EC2D9:
    ebp = edx; /* 0x141EC2D9: mov ebp, edx */
    esi = ecx; /* 0x141EC2DB: mov esi, ecx */
    eax = ecx; /* 0x141EC2DD: mov eax, ecx */
    PUSH32(esp, 1); /* 0x141EC2DF: push 1 */
    RECOMP_CALL(sub_141ECEB5); /* 0x141EC2E1: call 0x141eceb5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EC2E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141EC2E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141EC2EA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141EC2EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141EC2EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(esi); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC2F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC2F2u);

L_141EC2F2:
    PUSH32(esp, ebp); /* 0x141EC2F2: push ebp */
    ebp = esp; /* 0x141EC2F3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141EC2F5: push ebx */
    PUSH32(esp, esi); /* 0x141EC2F6: push esi */
    PUSH32(esp, edi); /* 0x141EC2F7: push edi */
    PUSH32(esp, 0); /* 0x141EC2F8: push 0 */
    PUSH32(esp, 0); /* 0x141EC2FA: push 0 */
    PUSH32(esp, 0x141EC307u); /* 0x141EC2FC: push 0x141ec307 */
    PUSH32(esp, ecx); /* 0x141EC301: push ecx */
    RECOMP_CALL(sub_141ED01E); /* 0x141EC302: call 0x141ed01e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x141EC307: pop edi */
    esi = POP32_VAL(esp); /* 0x141EC308: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EC309: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141EC30A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC30B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC307(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC307u);

L_141EC307:
    edi = POP32_VAL(esp); /* 0x141EC307: pop edi */
    esi = POP32_VAL(esp); /* 0x141EC308: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EC309: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141EC30A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC30B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC30C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC30Cu);

L_141EC30C:
    PUSH32(esp, ebp); /* 0x141EC30C: push ebp */
    ebp = MEM32(esp + 0x8); /* 0x141EC30D: mov ebp, dword ptr [esp + 8] */
    PUSH32(esp, edx); /* 0x141EC311: push edx */
    PUSH32(esp, ecx); /* 0x141EC312: push ecx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x141EC313: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_141EC1D0); /* 0x141EC317: call 0x141ec1d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141EC31C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x141EC31F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141EC320: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141EC330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC330u);

L_141EC330:
    edi = edi; /* 0x141EC330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC332: push ebp */
    ebp = esp; /* 0x141EC333: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x141EC335: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x141EC338: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x141EC33B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141EC33E: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x141EC33F: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x141EC342: push esi */
    esi = MEM32(ebx + 0x8); /* 0x141EC343: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)((esi ^ MEM32(eax))); _flag_b = (uint32_t)((esi ^ MEM32(eax)));
    esi = esi ^ MEM32(eax); /* 0x141EC346: xor esi, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141EC348: push edi */
    eax = MEM32(esi); /* 0x141EC349: mov eax, dword ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x141EC34B: mov byte ptr [ebp - 1], 0 */
    MEM32(ebp + (-0xC)) = 1; /* 0x141EC34F: mov dword ptr [ebp - 0xc], 1 */
    edi = ebx + 0x10; /* 0x141EC356: lea edi, [ebx + 0x10] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x141EC359: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC36B; /* 0x141EC35C: je 0x141ec36b */
L_141EC35E:
    ecx = MEM32(esi + 0x4); /* 0x141EC35E: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC361: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x141EC363: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edx); /* 0x141EC366: call edx */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x141EC368: mov edx, dword ptr [ebp + 0xc] */
L_141EC36B:
    ecx = MEM32(esi + 0xC); /* 0x141EC36B: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x141EC36E: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC371: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x141EC373: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(edx); /* 0x141EC376: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x141EC378: mov eax, dword ptr [ebp + 0x10] */
    /* test MEM8(eax + 0x4), 0x66u */ /* 0x141EC37B: test byte ptr [eax + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC479; /* 0x141EC37F: jne 0x141ec479 */
L_141EC385:
    MEM32(ebp + (-0x18)) = eax; /* 0x141EC385: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x18); /* 0x141EC388: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x141EC38B: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x18); /* 0x141EC38E: lea eax, [ebp - 0x18] */
    MEM32(ebx + (-0x4)) = eax; /* 0x141EC391: mov dword ptr [ebx - 4], eax */
    eax = MEM32(ebx + 0xC); /* 0x141EC394: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x141EC397: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x141EC39A: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC4B0; /* 0x141EC39D: je 0x141ec4b0 */
L_141EC3A3:
    eax = eax + eax * 2; /* 0x141EC3A3: lea eax, [eax + eax*2] */
    ecx = MEM32(esi + eax * 4 + 0x14); /* 0x141EC3A6: mov ecx, dword ptr [esi + eax*4 + 0x14] */
    ebx = MEM32(esi + eax * 4 + 0x10); /* 0x141EC3AA: mov ebx, dword ptr [esi + eax*4 + 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x141EC3AE: mov dword ptr [ebp - 0x10], eax */
    /* test ecx, ecx */ /* 0x141EC3B1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC459; /* 0x141EC3B3: je 0x141ec459 */
L_141EC3B9:
    edx = edi; /* 0x141EC3B9: mov edx, edi */
    RECOMP_CALL(sub_141EC2C2); /* 0x141EC3BB: call 0x141ec2c2 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 1); /* 0x141EC3C0: mov cl, 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x141EC3C2: mov byte ptr [ebp - 1], cl */
    /* test eax, eax */ /* 0x141EC3C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EC470; /* 0x141EC3C7: js 0x141ec470 */
L_141EC3CD:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141EC45C; /* 0x141EC3CD: jle 0x141ec45c */
L_141EC3D3:
    eax = MEM32(ebp + 0x10); /* 0x141EC3D3: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x141EC3D6: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC406; /* 0x141EC3DC: jne 0x141ec406 */
L_141EC3DE:
    /* cmp MEM32(0x141F7E98), 0 */ /* 0x141EC3DE: cmp dword ptr [0x141f7e98], 0 */
    _flag_a = (uint32_t)(MEM32(0x141F7E98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC406; /* 0x141EC3E5: je 0x141ec406 */
L_141EC3E7:
    PUSH32(esp, 0x141F7E98u); /* 0x141EC3E7: push 0x141f7e98 */
    RECOMP_CALL(sub_141ECB20); /* 0x141EC3EC: call 0x141ecb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141EC3F1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141EC3F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC406; /* 0x141EC3F6: je 0x141ec406 */
L_141EC3F8:
    PUSH32(esp, 1); /* 0x141EC3F8: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EC3FA: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x141F7E98)); /* 0x141EC3FD: call dword ptr [0x141f7e98] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141EC403: add esp, 8 */
    _flag_k = FK_ADD;
L_141EC406:
    ecx = MEM32(ebp + 0x14); /* 0x141EC406: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_141EC2F2); /* 0x141EC409: call 0x141ec2f2 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x141EC40E: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x14); /* 0x141EC411: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax + 0xC), edx */ /* 0x141EC414: cmp dword ptr [eax + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC427; /* 0x141EC417: je 0x141ec427 */
L_141EC419:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC419: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x141EC41C: mov ecx, eax */
    PUSH32(esp, edi); /* 0x141EC41E: push edi */
    RECOMP_CALL(sub_141EC30C); /* 0x141EC41F: call 0x141ec30c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x141EC424: mov eax, dword ptr [ebp + 0x14] */
L_141EC427:
    MEM32(eax + 0xC) = ebx; /* 0x141EC427: mov dword ptr [eax + 0xc], ebx */
    eax = MEM32(esi); /* 0x141EC42A: mov eax, dword ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x141EC42C: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x141EC42F: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC43E; /* 0x141EC432: je 0x141ec43e */
L_141EC434:
    ecx = MEM32(esi + 0x4); /* 0x141EC434: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC437: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x141EC439: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x141EC43C: call ebx */
    RECOMP_FLAGS_IN();
L_141EC43E:
    ecx = MEM32(esi + 0xC); /* 0x141EC43E: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x141EC441: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC444: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x141EC446: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x141EC449: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x141EC44B: mov ecx, dword ptr [ebp - 0x10] */
    ecx = MEM32(esi + ecx * 4 + 0x18); /* 0x141EC44E: mov ecx, dword ptr [esi + ecx*4 + 0x18] */
    edx = edi; /* 0x141EC452: mov edx, edi */
    RECOMP_CALL(sub_141EC2D9); /* 0x141EC454: call 0x141ec2d9 */
    RECOMP_FLAGS_IN();
L_141EC459:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x141EC459: mov cl, byte ptr [ebp - 1] */
L_141EC45C:
    eax = ebx; /* 0x141EC45C: mov eax, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x141EC45E: mov dword ptr [ebp - 8], ebx */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x141EC461: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC3A3; /* 0x141EC464: jne 0x141ec3a3 */
L_141EC46A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x141EC46A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC4B0; /* 0x141EC46C: je 0x141ec4b0 */
L_141EC46E:
    goto L_141EC48F; /* 0x141EC46E: jmp 0x141ec48f */
L_141EC470:
    MEM32(ebp + (-0xC)) = 0; /* 0x141EC470: mov dword ptr [ebp - 0xc], 0 */
    goto L_141EC48F; /* 0x141EC477: jmp 0x141ec48f */
L_141EC479:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFEu */ /* 0x141EC479: cmp dword ptr [ebx + 0xc], -2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC4B0; /* 0x141EC47D: je 0x141ec4b0 */
L_141EC47F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC47F: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x141EC482: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x141EC484: push edi */
    edx = 0xFFFFFFFEu; /* 0x141EC485: mov edx, 0xfffffffe */
    RECOMP_CALL(sub_141EC30C); /* 0x141EC48A: call 0x141ec30c */
    RECOMP_FLAGS_IN();
L_141EC48F:
    eax = MEM32(esi); /* 0x141EC48F: mov eax, dword ptr [esi] */
    ebx = MEM32(ebp + 0xC); /* 0x141EC491: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x141EC494: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC4A3; /* 0x141EC497: je 0x141ec4a3 */
L_141EC499:
    ecx = MEM32(esi + 0x4); /* 0x141EC499: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC49C: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(eax + edi)));
    ecx = ecx ^ MEM32(eax + edi); /* 0x141EC49E: xor ecx, dword ptr [eax + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x141EC4A1: call ebx */
    RECOMP_FLAGS_IN();
L_141EC4A3:
    ecx = MEM32(esi + 0xC); /* 0x141EC4A3: mov ecx, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x8); /* 0x141EC4A6: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141EC4A9: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(edx + edi))); _flag_b = (uint32_t)((ecx ^ MEM32(edx + edi)));
    ecx = ecx ^ MEM32(edx + edi); /* 0x141EC4AB: xor ecx, dword ptr [edx + edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ebx); /* 0x141EC4AE: call ebx */
    RECOMP_FLAGS_IN();
L_141EC4B0:
    eax = MEM32(ebp + (-0xC)); /* 0x141EC4B0: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x141EC4B3: pop edi */
    esi = POP32_VAL(esp); /* 0x141EC4B4: pop esi */
    ebx = POP32_VAL(esp); /* 0x141EC4B5: pop ebx */
    esp = ebp; /* 0x141EC4B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141EC4B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC4B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC4BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC4BFu);

L_141EC4BF:
    PUSH32(esp, ebp); /* 0x141EC4BF: push ebp */
    ebp = esp; /* 0x141EC4C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141EC4C2: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x141EC4C5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x141EC4C8: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x141EC4CB: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC4D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC4D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC4D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC4D7u);

L_141EC4D7:
    PUSH32(esp, ebp); /* 0x141EC4D7: push ebp */
    ebp = esp; /* 0x141EC4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x141EC4DA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x141EC4DD: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x141EC4E0: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC4E2: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x141EC4E6: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x141EC4EA: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x141EC4EE: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x141EC4F2: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x141EC4F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC536; /* 0x141EC4F8: je 0x141ec536 */
L_141EC4FA:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x141EC4FA: fsubp st(1) */
    /* test edx, edx */ /* 0x141EC4FC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141EC51E; /* 0x141EC4FE: jns 0x141ec51e */
L_141EC500:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x141EC500: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x141EC503: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x141EC506: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x141EC50C: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC512: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x141EC515: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC519: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_141EC54A; /* 0x141EC51C: jmp 0x141ec54a */
L_141EC51E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x141EC51E: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x141EC521: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x141EC524: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC52A: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x141EC52D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC531: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_141EC54A; /* 0x141EC534: jmp 0x141ec54a */
L_141EC536:
    edx = MEM32(esp + 0x14); /* 0x141EC536: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x141EC53A: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC4FA; /* 0x141EC540: jne 0x141ec4fa */
L_141EC542:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC542: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC546: fstp dword ptr [esp + 0x18] */
L_141EC54A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC54A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC54B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC551u);

    goto L_141EC551;
L_141EC4BF:
    PUSH32(esp, ebp); /* 0x141EC4BF: push ebp */
    ebp = esp; /* 0x141EC4C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141EC4C2: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x141EC4C5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x141EC4C8: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x141EC4CB: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC4D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC4D1: ret  */
L_141EC4D7:
    PUSH32(esp, ebp); /* 0x141EC4D7: push ebp */
    ebp = esp; /* 0x141EC4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x141EC4DA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x141EC4DD: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x141EC4E0: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC4E2: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x141EC4E6: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x141EC4EA: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x141EC4EE: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x141EC4F2: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x141EC4F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC536; /* 0x141EC4F8: je 0x141ec536 */
L_141EC4FA:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x141EC4FA: fsubp st(1) */
    /* test edx, edx */ /* 0x141EC4FC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141EC51E; /* 0x141EC4FE: jns 0x141ec51e */
L_141EC500:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x141EC500: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x141EC503: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x141EC506: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x141EC50C: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC512: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x141EC515: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC519: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_141EC54A; /* 0x141EC51C: jmp 0x141ec54a */
L_141EC51E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x141EC51E: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x141EC521: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x141EC524: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC52A: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x141EC52D: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC531: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_141EC54A; /* 0x141EC534: jmp 0x141ec54a */
L_141EC536:
    edx = MEM32(esp + 0x14); /* 0x141EC536: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x141EC53A: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC4FA; /* 0x141EC540: jne 0x141ec4fa */
L_141EC542:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC542: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x141EC546: fstp dword ptr [esp + 0x18] */
L_141EC54A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC54A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC54B: ret  */
L_141EC551:
    /* cmp MEM32(0x141F00C0), 0 */ /* 0x141EC551: cmp dword ptr [0x141f00c0], 0 */
    _flag_a = (uint32_t)(MEM32(0x141F00C0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC4D7; /* 0x141EC558: je 0x141ec4d7 */
L_141EC55E:
    RECOMP_BACKEDGE();
    goto L_141EC4BF; /* 0x141EC55E: jmp 0x141ec4bf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EC568(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC568u);

L_141EC568:
    edi = edi; /* 0x141EC568: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC56A: push ebp */
    ebp = esp; /* 0x141EC56B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x141EC56D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x141EC570: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141EC573: sub esp, 0x28 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x141EC576: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC57C; /* 0x141EC578: je 0x141ec57c */
L_141EC57A:
    MEM32(eax) = ecx; /* 0x141EC57A: mov dword ptr [eax], ecx */
L_141EC57C:
    PUSH32(esp, esi); /* 0x141EC57C: push esi */
    /* test ecx, ecx */ /* 0x141EC57D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC5A5; /* 0x141EC57F: jne 0x141ec5a5 */
L_141EC581:
    RECOMP_ICALL(MEM32(0x14001168)); /* 0x141EC581: call dword ptr [0x14001168] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EC587: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141EC589: push esi */
    PUSH32(esp, esi); /* 0x141EC58A: push esi */
    PUSH32(esp, esi); /* 0x141EC58B: push esi */
    PUSH32(esp, esi); /* 0x141EC58C: push esi */
    PUSH32(esp, esi); /* 0x141EC58D: push esi */
    MEM32(eax) = 0x16u; /* 0x141EC58E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_141EC176); /* 0x141EC594: call 0x141ec176 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x141EC599: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EC59C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141EC59E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EC7A7; /* 0x141EC5A0: jmp 0x141ec7a7 */
L_141EC5A5:
    eax = MEM32(ebp + 0x10); /* 0x141EC5A5: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x141EC5A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC5B6; /* 0x141EC5AA: je 0x141ec5b6 */
L_141EC5AC:
    /* cmp eax, 2 */ /* 0x141EC5AC: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_141EC581; /* 0x141EC5AF: jl 0x141ec581 */
L_141EC5B1:
    /* cmp eax, 0x24u */ /* 0x141EC5B1: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_141EC581; /* 0x141EC5B4: jg 0x141ec581 */
L_141EC5B6:
    PUSH32(esp, ebx); /* 0x141EC5B6: push ebx */
    SET_LO8(ebx, MEM8(ecx)); /* 0x141EC5B7: mov bl, byte ptr [ecx] */
    eax = (uint32_t)LO8(ebx); /* 0x141EC5B9: movzx eax, bl */
    PUSH32(esp, edi); /* 0x141EC5BC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EC5BD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141EC5BF: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x141EC5C0: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x141EC5C3: mov dword ptr [ebp - 0xc], esi */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x141EC5C6: mov byte ptr [ebp - 1], bl */
    edi = ecx + 0x1; /* 0x141EC5C9: lea edi, [ecx + 1] */
    RECOMP_ICALL(MEM32(0x14001124)); /* 0x141EC5CC: call dword ptr [0x14001124] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EC5D2: pop ecx */
    /* test eax, eax */ /* 0x141EC5D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC5F2; /* 0x141EC5D5: je 0x141ec5f2 */
L_141EC5D7:
    SET_LO8(eax, MEM8(edi)); /* 0x141EC5D7: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EC5D9: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), LO8(ebx) */ /* 0x141EC5DA: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC5D7; /* 0x141EC5DC: je 0x141ec5d7 */
L_141EC5DE:
    SET_LO8(ebx, LO8(eax)); /* 0x141EC5DE: mov bl, al */
    eax = (uint32_t)LO8(eax); /* 0x141EC5E0: movzx eax, al */
    PUSH32(esp, eax); /* 0x141EC5E3: push eax */
    RECOMP_ICALL(MEM32(0x14001124)); /* 0x141EC5E4: call dword ptr [0x14001124] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EC5EA: pop ecx */
    /* test eax, eax */ /* 0x141EC5EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC5D7; /* 0x141EC5ED: jne 0x141ec5d7 */
L_141EC5EF:
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x141EC5EF: mov byte ptr [ebp - 1], bl */
L_141EC5F2:
    /* cmp LO8(ebx), 0x2Du */ /* 0x141EC5F2: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC5FD; /* 0x141EC5F5: jne 0x141ec5fd */
L_141EC5F7:
    _flag_a = (uint32_t)((MEM32(ebp + 0x14) | 2)); _flag_b = (uint32_t)((MEM32(ebp + 0x14) | 2));
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) | 2; /* 0x141EC5F7: or dword ptr [ebp + 0x14], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EC602; /* 0x141EC5FB: jmp 0x141ec602 */
L_141EC5FD:
    /* cmp LO8(ebx), 0x2Bu */ /* 0x141EC5FD: cmp bl, 0x2b */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC608; /* 0x141EC600: jne 0x141ec608 */
L_141EC602:
    SET_LO8(ebx, MEM8(edi)); /* 0x141EC602: mov bl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EC604: inc edi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x141EC605: mov byte ptr [ebp - 1], bl */
L_141EC608:
    ecx = MEM32(ebp + 0x10); /* 0x141EC608: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x141EC60B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC630; /* 0x141EC60D: jne 0x141ec630 */
L_141EC60F:
    /* cmp LO8(ebx), 0x30u */ /* 0x141EC60F: cmp bl, 0x30 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC61C; /* 0x141EC612: je 0x141ec61c */
L_141EC614:
    PUSH32(esp, 0xAu); /* 0x141EC614: push 0xa */
L_141EC616:
    ecx = POP32_VAL(esp); /* 0x141EC616: pop ecx */
    MEM32(ebp + 0x10) = ecx; /* 0x141EC617: mov dword ptr [ebp + 0x10], ecx */
    goto L_141EC64D; /* 0x141EC61A: jmp 0x141ec64d */
L_141EC61C:
    /* cmp MEM8(edi), 0x78u */ /* 0x141EC61C: cmp byte ptr [edi], 0x78 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC62A; /* 0x141EC61F: je 0x141ec62a */
L_141EC621:
    /* cmp MEM8(edi), 0x58u */ /* 0x141EC621: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC62A; /* 0x141EC624: je 0x141ec62a */
L_141EC626:
    PUSH32(esp, 8); /* 0x141EC626: push 8 */
    RECOMP_BACKEDGE();
    goto L_141EC616; /* 0x141EC628: jmp 0x141ec616 */
L_141EC62A:
    PUSH32(esp, 0x10u); /* 0x141EC62A: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x141EC62C: pop ecx */
    MEM32(ebp + 0x10) = ecx; /* 0x141EC62D: mov dword ptr [ebp + 0x10], ecx */
L_141EC630:
    /* cmp ecx, 0x10u */ /* 0x141EC630: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC64D; /* 0x141EC633: jne 0x141ec64d */
L_141EC635:
    /* cmp LO8(ebx), 0x30u */ /* 0x141EC635: cmp bl, 0x30 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC64D; /* 0x141EC638: jne 0x141ec64d */
L_141EC63A:
    /* cmp MEM8(edi), 0x78u */ /* 0x141EC63A: cmp byte ptr [edi], 0x78 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141EC644; /* 0x141EC63D: je 0x141ec644 */
L_141EC63F:
    /* cmp MEM8(edi), 0x58u */ /* 0x141EC63F: cmp byte ptr [edi], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC64D; /* 0x141EC642: jne 0x141ec64d */
L_141EC644:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x141EC644: mov al, byte ptr [edi + 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x141EC647: mov byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x141EC64A: add edi, 2 */
    _flag_k = FK_ADD;
L_141EC64D:
    eax = ecx; /* 0x141EC64D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x141EC64F: cdq  */
    ecx = edx; /* 0x141EC650: mov ecx, edx */
    PUSH32(esp, ecx); /* 0x141EC652: push ecx */
    PUSH32(esp, eax); /* 0x141EC653: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141EC654: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141EC656: push -1 */
    MEM32(ebp + (-0x28)) = eax; /* 0x141EC658: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x141EC65B: mov dword ptr [ebp - 0x24], ecx */
    RECOMP_CALL(sub_141ECE10); /* 0x141EC65E: call 0x141ece10 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = ebx; /* 0x141EC663: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + 0x14); /* 0x141EC666: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = edx; /* 0x141EC669: mov dword ptr [ebp - 0x14], edx */
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x141EC66C: mov dl, byte ptr [ebp - 1] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x141EC66F: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x141EC672: mov dword ptr [ebp - 0x10], eax */
L_141EC675:
    ecx = edx + (-0x30); /* 0x141EC675: lea ecx, [edx - 0x30] */
    /* cmp LO8(ecx), 9 */ /* 0x141EC678: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC685; /* 0x141EC67B: ja 0x141ec685 */
L_141EC67D:
    edx = (int32_t)(int8_t)LO8(edx); /* 0x141EC67D: movsx edx, dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x141EC680: sub edx, 0x30 */
    _flag_k = FK_CMP;
    goto L_141EC6A6; /* 0x141EC683: jmp 0x141ec6a6 */
L_141EC685:
    /* cmp LO8(edx), 0x41u */ /* 0x141EC685: cmp dl, 0x41 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC68F; /* 0x141EC688: jb 0x141ec68f */
L_141EC68A:
    /* cmp LO8(edx), 0x5Au */ /* 0x141EC68A: cmp dl, 0x5a */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EC696; /* 0x141EC68D: jbe 0x141ec696 */
L_141EC68F:
    eax = edx + (-0x61); /* 0x141EC68F: lea eax, [edx - 0x61] */
    /* cmp LO8(eax), 0x19u */ /* 0x141EC692: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC709; /* 0x141EC694: ja 0x141ec709 */
L_141EC696:
    eax = edx + (-0x61); /* 0x141EC696: lea eax, [edx - 0x61] */
    edx = (int32_t)(int8_t)LO8(edx); /* 0x141EC699: movsx edx, dl */
    /* cmp LO8(eax), 0x19u */ /* 0x141EC69C: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC6A3; /* 0x141EC69E: ja 0x141ec6a3 */
L_141EC6A0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x20u; /* 0x141EC6A0: sub edx, 0x20 */
    _flag_k = FK_CMP;
L_141EC6A3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFC9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFC9u; /* 0x141EC6A3: add edx, -0x37 */
    _flag_k = FK_ADD;
L_141EC6A6:
    eax = MEM32(ebp + (-0xC)); /* 0x141EC6A6: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x141EC6A9: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x18)) = edx; /* 0x141EC6AC: mov dword ptr [ebp - 0x18], edx */
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x141EC6AF: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141EC70F; /* 0x141EC6B2: jae 0x141ec70f */
L_141EC6B4:
    _flag_a = (uint32_t)((ebx | 8)); _flag_b = (uint32_t)((ebx | 8));
    ebx = ebx | 8; /* 0x141EC6B4: or ebx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x141EC6B7: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC6E5; /* 0x141EC6BA: jb 0x141ec6e5 */
L_141EC6BC:
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC6C3; /* 0x141EC6BC: ja 0x141ec6c3 */
L_141EC6BE:
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x141EC6BE: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC6E5; /* 0x141EC6C1: jb 0x141ec6e5 */
L_141EC6C3:
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x141EC6C3: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC6D9; /* 0x141EC6C6: jne 0x141ec6d9 */
L_141EC6C8:
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x141EC6C8: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC6D9; /* 0x141EC6CB: jne 0x141ec6d9 */
L_141EC6CD:
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x141EC6CD: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC6E5; /* 0x141EC6D0: jb 0x141ec6e5 */
L_141EC6D2:
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC6D9; /* 0x141EC6D2: ja 0x141ec6d9 */
L_141EC6D4:
    /* cmp edx, MEM32(ebp + (-0x20)) */ /* 0x141EC6D4: cmp edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EC6E5; /* 0x141EC6D7: jbe 0x141ec6e5 */
L_141EC6D9:
    edx = MEM32(ebp + 0xC); /* 0x141EC6D9: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x141EC6DC: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x141EC6DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC712; /* 0x141EC6E1: je 0x141ec712 */
L_141EC6E3:
    goto L_141EC701; /* 0x141EC6E3: jmp 0x141ec701 */
L_141EC6E5:
    PUSH32(esp, eax); /* 0x141EC6E5: push eax */
    PUSH32(esp, ecx); /* 0x141EC6E6: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x141EC6E7: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x141EC6EA: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_141ECFC0); /* 0x141EC6ED: call 0x141ecfc0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141EC6F2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x18)); /* 0x141EC6F4: add ecx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    eax = edx; /* 0x141EC6F7: mov eax, edx */
    { uint32_t _aa = eax, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC6F9: adc eax, esi */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x8)) = ecx; /* 0x141EC6FB: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x141EC6FE: mov dword ptr [ebp - 0xc], eax */
L_141EC701:
    SET_LO8(edx, MEM8(edi)); /* 0x141EC701: mov dl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141EC703: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_141EC675; /* 0x141EC704: jmp 0x141ec675 */
L_141EC709:
    eax = MEM32(ebp + (-0xC)); /* 0x141EC709: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x141EC70C: mov ecx, dword ptr [ebp - 8] */
L_141EC70F:
    edx = MEM32(ebp + 0xC); /* 0x141EC70F: mov edx, dword ptr [ebp + 0xc] */
L_141EC712:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x141EC712: dec edi */
    _flag_k = FK_DEC;
    /* test LO8(ebx), 8 */ /* 0x141EC713: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC725; /* 0x141EC716: jne 0x141ec725 */
L_141EC718:
    /* test edx, edx */ /* 0x141EC718: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC71F; /* 0x141EC71A: je 0x141ec71f */
L_141EC71C:
    edi = MEM32(ebp + 0x8); /* 0x141EC71C: mov edi, dword ptr [ebp + 8] */
L_141EC71F:
    eax = esi; /* 0x141EC71F: mov eax, esi */
    ecx = esi; /* 0x141EC721: mov ecx, esi */
    goto L_141EC78F; /* 0x141EC723: jmp 0x141ec78f */
L_141EC725:
    /* test LO8(ebx), 4 */ /* 0x141EC725: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC758; /* 0x141EC728: jne 0x141ec758 */
L_141EC72A:
    /* test LO8(ebx), 1 */ /* 0x141EC72A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC789; /* 0x141EC72D: jne 0x141ec789 */
L_141EC72F:
    edx = ebx; /* 0x141EC72F: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x141EC731: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC743; /* 0x141EC734: je 0x141ec743 */
L_141EC736:
    /* cmp eax, 0x80000000u */ /* 0x141EC736: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC758; /* 0x141EC73B: ja 0x141ec758 */
L_141EC73D:
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC743; /* 0x141EC73D: jb 0x141ec743 */
L_141EC73F:
    /* cmp ecx, esi */ /* 0x141EC73F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC758; /* 0x141EC741: ja 0x141ec758 */
L_141EC743:
    /* test edx, edx */ /* 0x141EC743: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC789; /* 0x141EC745: jne 0x141ec789 */
L_141EC747:
    /* cmp eax, 0x7FFFFFFFu */ /* 0x141EC747: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC789; /* 0x141EC74C: jb 0x141ec789 */
L_141EC74E:
    if (CMP_A(_flag_a, _flag_b)) goto L_141EC758; /* 0x141EC74E: ja 0x141ec758 */
L_141EC750:
    eax = MEM32(ebp + (-0x8)); /* 0x141EC750: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141EC753: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141EC78C; /* 0x141EC756: jbe 0x141ec78c */
L_141EC758:
    RECOMP_ICALL(MEM32(0x14001168)); /* 0x141EC758: call dword ptr [0x14001168] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x141EC75E: mov dword ptr [eax], 0x22 */
    /* test LO8(ebx), 1 */ /* 0x141EC764: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC771; /* 0x141EC767: je 0x141ec771 */
L_141EC769:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141EC769: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x141EC76C: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141EC78F; /* 0x141EC76F: jmp 0x141ec78f */
L_141EC771:
    /* test LO8(ebx), 2 */ /* 0x141EC771: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC77F; /* 0x141EC774: je 0x141ec77f */
L_141EC776:
    eax = esi; /* 0x141EC776: mov eax, esi */
    ecx = 0x80000000u; /* 0x141EC778: mov ecx, 0x80000000 */
    goto L_141EC78F; /* 0x141EC77D: jmp 0x141ec78f */
L_141EC77F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141EC77F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x7FFFFFFFu; /* 0x141EC782: mov ecx, 0x7fffffff */
    goto L_141EC78F; /* 0x141EC787: jmp 0x141ec78f */
L_141EC789:
    eax = MEM32(ebp + (-0x8)); /* 0x141EC789: mov eax, dword ptr [ebp - 8] */
L_141EC78C:
    ecx = MEM32(ebp + (-0xC)); /* 0x141EC78C: mov ecx, dword ptr [ebp - 0xc] */
L_141EC78F:
    edx = MEM32(ebp + 0xC); /* 0x141EC78F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x141EC792: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC798; /* 0x141EC794: je 0x141ec798 */
L_141EC796:
    MEM32(edx) = edi; /* 0x141EC796: mov dword ptr [edx], edi */
L_141EC798:
    edi = POP32_VAL(esp); /* 0x141EC798: pop edi */
    /* test LO8(ebx), 2 */ /* 0x141EC799: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x141EC79C: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC7A5; /* 0x141EC79D: je 0x141ec7a5 */
L_141EC79F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141EC79F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EC7A1: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141EC7A3: neg ecx */
    _flag_k = FK_CMP;
L_141EC7A5:
    edx = ecx; /* 0x141EC7A5: mov edx, ecx */
L_141EC7A7:
    esi = POP32_VAL(esp); /* 0x141EC7A7: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141EC7A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC7A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC7AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7AFu);

L_141EC7AF:
    edi = edi; /* 0x141EC7AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC7B1: push ebp */
    ebp = esp; /* 0x141EC7B2: mov ebp, esp */
    PUSH32(esp, 1); /* 0x141EC7B4: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141EC7B6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141EC7B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC7BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EC568); /* 0x141EC7BF: call 0x141ec568 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141EC7C4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x141EC7C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC7C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC7CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7CEu);

L_141EC7CE:
    { _itail_tgt = (uint32_t)(MEM32(0x1400115C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC7DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7DAu);

L_141EC7DA:
    { _itail_tgt = (uint32_t)(MEM32(0x14001158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC7E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7E6u);

L_141EC7E6:
    { _itail_tgt = (uint32_t)(MEM32(0x14001154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC7F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7F2u);

L_141EC7F2:
    { _itail_tgt = (uint32_t)(MEM32(0x14001150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC7FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC7FEu);

L_141EC7FE:
    { _itail_tgt = (uint32_t)(MEM32(0x1400114C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC80A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC80Au);

L_141EC80A:
    { _itail_tgt = (uint32_t)(MEM32(0x14001134)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC816(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC816u);

L_141EC816:
    { _itail_tgt = (uint32_t)(MEM32(0x14001120)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC822(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC822u);

L_141EC822:
    { _itail_tgt = (uint32_t)(MEM32(0x1400111C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC82D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC82Du);

L_141EC82D:
    edi = edi; /* 0x141EC82D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141EC82F: push ebp */
    ebp = esp; /* 0x141EC830: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141EC832: push esi */
    esi = ecx; /* 0x141EC833: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x140010B0)); /* 0x141EC835: call dword ptr [0x140010b0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x141EC83B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141EC848; /* 0x141EC83F: je 0x141ec848 */
L_141EC841:
    PUSH32(esp, esi); /* 0x141EC841: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141EC842: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EC847: pop ecx */
L_141EC848:
    eax = esi; /* 0x141EC848: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141EC84A: pop esi */
    ebp = POP32_VAL(esp); /* 0x141EC84B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141EC84C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141EC854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC854u);

L_141EC854:
    { _itail_tgt = (uint32_t)(MEM32(0x140010E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC85F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC85Fu);

L_141EC85F:
    PUSH32(esp, 0x14u); /* 0x141EC85F: push 0x14 */
    PUSH32(esp, 0x141EDC28u); /* 0x141EC861: push 0x141edc28 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141EC866: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x141EC86B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EC86F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x141EC86F: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_141EC8AF; /* 0x141EC872: js 0x141ec8af */
L_141EC874:
    ecx = MEM32(ebp + 0x8); /* 0x141EC874: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x141EC877: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x141EC87A: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x141EC87D: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_141EC86F; /* 0x141EC880: jmp 0x141ec86f */
L_141EC8AF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141EC8AF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141ECC41); /* 0x141EC8B6: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141EC8BB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141EC8C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC8C3u);

L_141EC8C3:
    PUSH32(esp, 0xCu); /* 0x141EC8C3: push 0xc */
    PUSH32(esp, 0x141EDC48u); /* 0x141EC8C5: push 0x141edc48 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141EC8CA: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x141EC8CF: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x141EC8D3: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x141EC8D6: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x141EC8D8: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x141EC8DB: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x141EC8DE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x141EC8E1: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x141EC8E3: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x141EC8E6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EC8EA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x141EC8EA: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = edi; /* 0x141EC8EB: mov dword ptr [ebp + 0x10], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_141EC8FC; /* 0x141EC8EE: js 0x141ec8fc */
L_141EC8F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x141EC8F0: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x141EC8F2: mov dword ptr [ebp + 8], esi */
    ecx = esi; /* 0x141EC8F5: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x141EC8F7: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_141EC8EA; /* 0x141EC8FA: jmp 0x141ec8ea */
L_141EC8FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EC8FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EC8FE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC8FF: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141EC902: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141EC922); /* 0x141EC909: call 0x141ec922 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_141ECC41); /* 0x141EC90E: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141EC913: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141EC922(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC922u);

L_141EC922:
    /* test eax, eax */ /* 0x141EC922: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC931; /* 0x141EC924: jne 0x141ec931 */
L_141EC926:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141EC926: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x141EC929: push edi */
    PUSH32(esp, ebx); /* 0x141EC92A: push ebx */
    PUSH32(esp, esi); /* 0x141EC92B: push esi */
    RECOMP_CALL(sub_141EC85F); /* 0x141EC92C: call 0x141ec85f */
    RECOMP_FLAGS_IN();
L_141EC931:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC931: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC937(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC937u);

L_141EC937:
    PUSH32(esp, 0x10u); /* 0x141EC937: push 0x10 */
    PUSH32(esp, 0x141EDC68u); /* 0x141EC939: push 0x141edc68 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141EC93E: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141EC943: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x141EC945: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x141EC948: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x141EC94B: mov dword ptr [ebp - 0x20], esi */
    ebx = MEM32(ebp + 0xC); /* 0x141EC94E: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x141EC951: mov edi, dword ptr [ebp + 8] */
L_141EC954:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x141EC954: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_141EC969; /* 0x141EC957: jge 0x141ec969 */
L_141EC959:
    ecx = edi; /* 0x141EC959: mov ecx, edi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x141EC95B: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x141EC95E: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x141EC960: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141EC963: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = esi; /* 0x141EC964: mov dword ptr [ebp - 0x20], esi */
    RECOMP_BACKEDGE();
    goto L_141EC954; /* 0x141EC967: jmp 0x141ec954 */
L_141EC969:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EC969: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EC96B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC96C: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141EC96F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141EC98F); /* 0x141EC976: call 0x141ec98f */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_141ECC41); /* 0x141EC97B: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141EC980: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_141EC98F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC98Fu);

L_141EC98F:
    /* test eax, eax */ /* 0x141EC98F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EC99E; /* 0x141EC991: jne 0x141ec99e */
L_141EC993:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x141EC993: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x141EC996: push esi */
    PUSH32(esp, ebx); /* 0x141EC997: push ebx */
    PUSH32(esp, edi); /* 0x141EC998: push edi */
    RECOMP_CALL(sub_141EC85F); /* 0x141EC999: call 0x141ec85f */
    RECOMP_FLAGS_IN();
L_141EC99E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC99E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141EC9A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC9A4u);

L_141EC9A4:
    { _itail_tgt = (uint32_t)(MEM32(0x140010DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC9B0u);

L_141EC9B0:
    { _itail_tgt = (uint32_t)(MEM32(0x140010D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EC9BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EC9BBu);

L_141EC9BB:
    PUSH32(esp, 0x14u); /* 0x141EC9BB: push 0x14 */
    PUSH32(esp, 0x141EDC88u); /* 0x141EC9BD: push 0x141edc88 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141EC9C2: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x141EC9C7: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x141F7E94); /* 0x141EC9CB: mov eax, dword ptr [0x141f7e94] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC9D0: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x141EC9D3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141EC9E4; /* 0x141EC9D6: jne 0x141ec9e4 */
L_141EC9D8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141EC9D8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x140010C4)); /* 0x141EC9DB: call dword ptr [0x140010c4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EC9E1: pop ecx */
    goto L_141ECA38; /* 0x141EC9E2: jmp 0x141eca38 */
L_141EC9E4:
    PUSH32(esp, 8); /* 0x141EC9E4: push 8 */
    RECOMP_CALL(sub_141ED012); /* 0x141EC9E6: call 0x141ed012 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EC9EB: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x141EC9EC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x141F7E94); /* 0x141EC9F0: mov eax, dword ptr [0x141f7e94] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141EC9F5: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(0x141F7E90); /* 0x141EC9F8: mov eax, dword ptr [0x141f7e90] */
    MEM32(ebp + (-0x20)) = eax; /* 0x141EC9FD: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x141ECA00: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x141ECA03: push eax */
    eax = ebp + (-0x1C); /* 0x141ECA04: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x141ECA07: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141ECA08: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141ED006); /* 0x141ECA0B: call 0x141ed006 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141ECA10: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x141ECA13: mov esi, eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x141ECA15: mov dword ptr [ebp - 0x24], esi */
    ecx = MEM32(ebp + (-0x1C)); /* 0x141ECA18: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(0x141F7E94) = ecx; /* 0x141ECA1B: mov dword ptr [0x141f7e94], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x141ECA21: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(0x141F7E90) = ecx; /* 0x141ECA24: mov dword ptr [0x141f7e90], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141ECA2A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141ECA41); /* 0x141ECA31: call 0x141eca41 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x141ECA36: mov eax, esi */
L_141ECA38:
    RECOMP_CALL(sub_141ECC41); /* 0x141ECA38: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECA3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECA41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECA41u);

L_141ECA41:
    PUSH32(esp, 8); /* 0x141ECA41: push 8 */
    RECOMP_CALL(sub_141ECFFA); /* 0x141ECA43: call 0x141ecffa */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141ECA48: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECA49: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECA4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECA4Fu);

L_141ECA4F:
    edi = edi; /* 0x141ECA4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECA51: push ebp */
    ebp = esp; /* 0x141ECA52: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141ECA54: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EC9BB); /* 0x141ECA57: call 0x141ec9bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ECA5C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141ECA5E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ECA60: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x141ECA62: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141ECA63: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x141ECA64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECA65: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECA6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECA6Cu);

L_141ECA6C:
    { _itail_tgt = (uint32_t)(MEM32(0x140010D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ECA78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECA78u);

L_141ECA78:
    { _itail_tgt = (uint32_t)(MEM32(0x140010D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ECA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECA90u);

L_141ECA90:
    edi = edi; /* 0x141ECA90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECA92: push ebp */
    ebp = esp; /* 0x141ECA93: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141ECA95: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM16(eax), 0x5A4Du */ /* 0x141ECA98: cmp word ptr [eax], 0x5a4d */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0x5A4Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141ECAA3; /* 0x141ECA9D: je 0x141ecaa3 */
L_141ECA9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECA9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141ECAA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECAA2: ret  */
L_141ECAA3:
    ecx = MEM32(eax + 0x3C); /* 0x141ECAA3: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x141ECAA6: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECAA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x141ECAAA: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141ECABB; /* 0x141ECAB0: jne 0x141ecabb */
L_141ECAB2:
    /* cmp MEM16(ecx + 0x18), 0x10Bu */ /* 0x141ECAB2: cmp word ptr [ecx + 0x18], 0x10b */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(0x10Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x141ECAB8: sete al */
L_141ECABB:
    ebp = POP32_VAL(esp); /* 0x141ECABB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECABC: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECAD0u);

L_141ECAD0:
    edi = edi; /* 0x141ECAD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECAD2: push ebp */
    ebp = esp; /* 0x141ECAD3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141ECAD5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x3C); /* 0x141ECAD8: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x141ECADB: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x141ECADD: movzx eax, word ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x141ECAE1: push ebx */
    ebx = (uint32_t)MEM16(ecx + 0x6); /* 0x141ECAE2: movzx ebx, word ptr [ecx + 6] */
    PUSH32(esp, esi); /* 0x141ECAE6: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141ECAE7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141ECAE9: push edi */
    edx = eax + ecx + 0x18; /* 0x141ECAEA: lea edx, [eax + ecx + 0x18] */
    /* test ebx, ebx */ /* 0x141ECAEE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECB0D; /* 0x141ECAF0: je 0x141ecb0d */
L_141ECAF2:
    edi = MEM32(ebp + 0xC); /* 0x141ECAF2: mov edi, dword ptr [ebp + 0xc] */
L_141ECAF5:
    ecx = MEM32(edx + 0xC); /* 0x141ECAF5: mov ecx, dword ptr [edx + 0xc] */
    /* cmp edi, ecx */ /* 0x141ECAF8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141ECB05; /* 0x141ECAFA: jb 0x141ecb05 */
L_141ECAFC:
    eax = MEM32(edx + 0x8); /* 0x141ECAFC: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141ECAFF: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x141ECB01: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141ECB14; /* 0x141ECB03: jb 0x141ecb14 */
L_141ECB05:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141ECB05: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x28u; /* 0x141ECB06: add edx, 0x28 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x141ECB09: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141ECAF5; /* 0x141ECB0B: jb 0x141ecaf5 */
L_141ECB0D:
    edi = POP32_VAL(esp); /* 0x141ECB0D: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECB0E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECB0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141ECB11: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141ECB12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECB13: ret  */
L_141ECB14:
    edi = POP32_VAL(esp); /* 0x141ECB14: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECB15: pop esi */
    eax = edx; /* 0x141ECB16: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x141ECB18: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141ECB19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECB1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECB20u);

L_141ECB20:
    edi = edi; /* 0x141ECB20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECB22: push ebp */
    ebp = esp; /* 0x141ECB23: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x141ECB25: push -2 */
    PUSH32(esp, 0x141EDCA8u); /* 0x141ECB27: push 0x141edca8 */
    PUSH32(esp, 0x141ECC5Au); /* 0x141ECB2C: push 0x141ecc5a */
    eax = MEM32(FS_BASE + (0)); /* 0x141ECB31: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x141ECB37: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x141ECB38: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141ECB3B: push ebx */
    PUSH32(esp, esi); /* 0x141ECB3C: push esi */
    PUSH32(esp, edi); /* 0x141ECB3D: push edi */
    eax = MEM32(0x141F0098); /* 0x141ECB3E: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x141ECB43: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141ECB46: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141ECB48: push eax */
    eax = ebp + (-0x10); /* 0x141ECB49: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x141ECB4C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x141ECB52: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x141ECB55: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x14000000u); /* 0x141ECB5C: push 0x14000000 */
    RECOMP_CALL(sub_141ECA90); /* 0x141ECB61: call 0x141eca90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x141ECB66: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141ECB69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECBC1; /* 0x141ECB6B: je 0x141ecbc1 */
L_141ECB6D:
    eax = MEM32(ebp + 0x8); /* 0x141ECB6D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14000000u; /* 0x141ECB70: sub eax, 0x14000000 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x141ECB75: push eax */
    PUSH32(esp, 0x14000000u); /* 0x141ECB76: push 0x14000000 */
    RECOMP_CALL(sub_141ECAD0); /* 0x141ECB7B: call 0x141ecad0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x141ECB80: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141ECB83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECBC1; /* 0x141ECB85: je 0x141ecbc1 */
L_141ECB87:
    eax = MEM32(eax + 0x24); /* 0x141ECB87: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x141ECB8A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x141ECB8A: shr eax, 0x1f */
    eax = ~eax; /* 0x141ECB8D: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x141ECB8F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141ECB92: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x141ECB99: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x141ECB9C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x141ECBA3: pop ecx */
    edi = POP32_VAL(esp); /* 0x141ECBA4: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECBA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x141ECBA6: pop ebx */
    esp = ebp; /* 0x141ECBA7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141ECBA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECBAA: ret  */
L_141ECBC1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141ECBC1: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECBC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x141ECBCA: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x141ECBCD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x141ECBD4: pop ecx */
    edi = POP32_VAL(esp); /* 0x141ECBD5: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECBD6: pop esi */
    ebx = POP32_VAL(esp); /* 0x141ECBD7: pop ebx */
    esp = ebp; /* 0x141ECBD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141ECBDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECBDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECBE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECBE2u);

L_141ECBE2:
    { _itail_tgt = (uint32_t)(MEM32(0x140010CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ECBEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECBEEu);

L_141ECBEE:
    { _itail_tgt = (uint32_t)(MEM32(0x140010C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ECBFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECBFCu);

L_141ECBFC:
    PUSH32(esp, 0x141ECC5Au); /* 0x141ECBFC: push 0x141ecc5a */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x141ECC01: push dword ptr fs:[0] */
    eax = MEM32(esp + 0x10); /* 0x141ECC08: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = ebp; /* 0x141ECC0C: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x141ECC10: lea ebp, [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - eax; /* 0x141ECC14: sub esp, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141ECC16: push ebx */
    PUSH32(esp, esi); /* 0x141ECC17: push esi */
    PUSH32(esp, edi); /* 0x141ECC18: push edi */
    eax = MEM32(0x141F0098); /* 0x141ECC19: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x141ECC1E: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141ECC21: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141ECC23: push eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x141ECC24: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x141ECC27: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141ECC2A: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141ECC2D: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x8)) = eax; /* 0x141ECC34: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x141ECC37: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x141ECC3A: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECC40: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECC41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECC41u);

L_141ECC41:
    ecx = MEM32(ebp + (-0x10)); /* 0x141ECC41: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x141ECC44: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x141ECC4B: pop ecx */
    edi = POP32_VAL(esp); /* 0x141ECC4C: pop edi */
    edi = POP32_VAL(esp); /* 0x141ECC4D: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECC4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x141ECC4F: pop ebx */
    esp = ebp; /* 0x141ECC50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141ECC52: pop ebp */
    PUSH32(esp, ecx); /* 0x141ECC53: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECC54: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECC5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECC5Au);

L_141ECC5A:
    edi = edi; /* 0x141ECC5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECC5C: push ebp */
    ebp = esp; /* 0x141ECC5D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141ECC5F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141ECC62: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141ECC65: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141ECC68: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x141EC0B6u); /* 0x141ECC6B: push 0x141ec0b6 */
    PUSH32(esp, 0x141F0098u); /* 0x141ECC70: push 0x141f0098 */
    RECOMP_CALL(sub_141EC330); /* 0x141ECC75: call 0x141ec330 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x141ECC7A: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x141ECC7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECC7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECC84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECC84u);

L_141ECC84:
    edi = edi; /* 0x141ECC84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECC86: push ebp */
    ebp = esp; /* 0x141ECC87: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x141ECC89: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141ECC8C: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x141ECC91: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x141ECC95: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141ECC99: push esi */
    PUSH32(esp, edi); /* 0x141ECC9A: push edi */
    edi = 0xBB40E64Eu; /* 0x141ECC9B: mov edi, 0xbb40e64e */
    esi = 0xFFFF0000u; /* 0x141ECCA0: mov esi, 0xffff0000 */
    /* cmp eax, edi */ /* 0x141ECCA5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141ECCB6; /* 0x141ECCA7: je 0x141eccb6 */
L_141ECCA9:
    /* test esi, eax */ /* 0x141ECCA9: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECCB6; /* 0x141ECCAB: je 0x141eccb6 */
L_141ECCAD:
    eax = ~eax; /* 0x141ECCAD: not eax */
    MEM32(0x141F009C) = eax; /* 0x141ECCAF: mov dword ptr [0x141f009c], eax */
    goto L_141ECD20; /* 0x141ECCB4: jmp 0x141ecd20 */
L_141ECCB6:
    eax = ebp + (-0xC); /* 0x141ECCB6: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x141ECCB9: push eax */
    RECOMP_ICALL(MEM32(0x14001014)); /* 0x141ECCBA: call dword ptr [0x14001014] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x141ECCC0: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0xC))));
    eax = eax ^ MEM32(ebp + (-0xC)); /* 0x141ECCC3: xor eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141ECCC6: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x14001018)); /* 0x141ECCC9: call dword ptr [0x14001018] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x141ECCCF: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x1400101C)); /* 0x141ECCD2: call dword ptr [0x1400101c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x141ECCD8: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x14001020)); /* 0x141ECCDB: call dword ptr [0x14001020] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x4))));
    eax = eax ^ MEM32(ebp + (-0x4)); /* 0x141ECCE1: xor eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4); /* 0x141ECCE4: lea ecx, [ebp - 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x141ECCE7: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141ECCE9: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x14); /* 0x141ECCEC: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x141ECCEF: push eax */
    RECOMP_ICALL(MEM32(0x14001024)); /* 0x141ECCF0: call dword ptr [0x14001024] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x141ECCF6: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x14))));
    eax = eax ^ MEM32(ebp + (-0x14)); /* 0x141ECCF9: xor eax, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x141ECCFC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ECCFF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x141ECD01: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141ECD0D; /* 0x141ECD03: je 0x141ecd0d */
L_141ECD05:
    /* test MEM32(0x141F0098), esi */ /* 0x141ECD05: test dword ptr [0x141f0098], esi */
    _flag_a = (uint32_t)(MEM32(0x141F0098)); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ECD12; /* 0x141ECD0B: jne 0x141ecd12 */
L_141ECD0D:
    ecx = 0xBB40E64Fu; /* 0x141ECD0D: mov ecx, 0xbb40e64f */
L_141ECD12:
    MEM32(0x141F0098) = ecx; /* 0x141ECD12: mov dword ptr [0x141f0098], ecx */
    ecx = ~ecx; /* 0x141ECD18: not ecx */
    MEM32(0x141F009C) = ecx; /* 0x141ECD1A: mov dword ptr [0x141f009c], ecx */
L_141ECD20:
    edi = POP32_VAL(esp); /* 0x141ECD20: pop edi */
    esi = POP32_VAL(esp); /* 0x141ECD21: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141ECD22: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECD23: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECD29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECD29u);

L_141ECD29:
    edi = edi; /* 0x141ECD29: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECD2B: push ebp */
    ebp = esp; /* 0x141ECD2C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x141ECD2E: sub esp, 0x328 */
    _flag_k = FK_CMP;
    MEM32(0x141F7C38) = eax; /* 0x141ECD34: mov dword ptr [0x141f7c38], eax */
    MEM32(0x141F7C34) = ecx; /* 0x141ECD39: mov dword ptr [0x141f7c34], ecx */
    MEM32(0x141F7C30) = edx; /* 0x141ECD3F: mov dword ptr [0x141f7c30], edx */
    MEM32(0x141F7C2C) = ebx; /* 0x141ECD45: mov dword ptr [0x141f7c2c], ebx */
    MEM32(0x141F7C28) = esi; /* 0x141ECD4B: mov dword ptr [0x141f7c28], esi */
    MEM32(0x141F7C24) = edi; /* 0x141ECD51: mov dword ptr [0x141f7c24], edi */
    MEM16(0x141F7C50) = (uint16_t)(_seg_ss); /* 0x141ECD57: mov word ptr [0x141f7c50], ss */
    MEM16(0x141F7C44) = (uint16_t)(_seg_cs); /* 0x141ECD5E: mov word ptr [0x141f7c44], cs */
    MEM16(0x141F7C20) = (uint16_t)(_seg_ds); /* 0x141ECD65: mov word ptr [0x141f7c20], ds */
    MEM16(0x141F7C1C) = (uint16_t)(_seg_es); /* 0x141ECD6C: mov word ptr [0x141f7c1c], es */
    MEM16(0x141F7C18) = (uint16_t)(_seg_fs); /* 0x141ECD73: mov word ptr [0x141f7c18], fs */
    MEM16(0x141F7C14) = (uint16_t)(_seg_gs); /* 0x141ECD7A: mov word ptr [0x141f7c14], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141ECD81: pushfd  */
    POP32(esp, MEM32(0x141F7C48)); /* 0x141ECD82: pop dword ptr [0x141f7c48] */
    eax = MEM32(ebp); /* 0x141ECD88: mov eax, dword ptr [ebp] */
    MEM32(0x141F7C3C) = eax; /* 0x141ECD8B: mov dword ptr [0x141f7c3c], eax */
    eax = MEM32(ebp + 0x4); /* 0x141ECD90: mov eax, dword ptr [ebp + 4] */
    MEM32(0x141F7C40) = eax; /* 0x141ECD93: mov dword ptr [0x141f7c40], eax */
    eax = ebp + 0x8; /* 0x141ECD98: lea eax, [ebp + 8] */
    MEM32(0x141F7C4C) = eax; /* 0x141ECD9B: mov dword ptr [0x141f7c4c], eax */
    eax = MEM32(ebp + (-0x320)); /* 0x141ECDA0: mov eax, dword ptr [ebp - 0x320] */
    MEM32(0x141F7B88) = 0x00010001u; /* 0x141ECDA6: mov dword ptr [0x141f7b88], 0x10001 */
    eax = MEM32(0x141F7C40); /* 0x141ECDB0: mov eax, dword ptr [0x141f7c40] */
    MEM32(0x141F7B44) = eax; /* 0x141ECDB5: mov dword ptr [0x141f7b44], eax */
    MEM32(0x141F7B38) = 0xC0000409u; /* 0x141ECDBA: mov dword ptr [0x141f7b38], 0xc0000409 */
    MEM32(0x141F7B3C) = 1; /* 0x141ECDC4: mov dword ptr [0x141f7b3c], 1 */
    eax = MEM32(0x141F0098); /* 0x141ECDCE: mov eax, dword ptr [0x141f0098] */
    MEM32(ebp + (-0x328)) = eax; /* 0x141ECDD3: mov dword ptr [ebp - 0x328], eax */
    eax = MEM32(0x141F009C); /* 0x141ECDD9: mov eax, dword ptr [0x141f009c] */
    MEM32(ebp + (-0x324)) = eax; /* 0x141ECDDE: mov dword ptr [ebp - 0x324], eax */
    PUSH32(esp, 0); /* 0x141ECDE4: push 0 */
    RECOMP_ICALL(MEM32(0x14001044)); /* 0x141ECDE6: call dword ptr [0x14001044] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140027E4u); /* 0x141ECDEC: push 0x140027e4 */
    RECOMP_ICALL(MEM32(0x14001008)); /* 0x141ECDF1: call dword ptr [0x14001008] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC0000409u); /* 0x141ECDF7: push 0xc0000409 */
    RECOMP_ICALL(MEM32(0x1400100C)); /* 0x141ECDFC: call dword ptr [0x1400100c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x141ECE02: push eax */
    RECOMP_ICALL(MEM32(0x14001010)); /* 0x141ECE03: call dword ptr [0x14001010] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141ECE09: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECE0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECE10u);

L_141ECE10:
    PUSH32(esp, esi); /* 0x141ECE10: push esi */
    eax = MEM32(esp + 0x14); /* 0x141ECE11: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x141ECE15: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ECE41; /* 0x141ECE17: jne 0x141ece41 */
L_141ECE19:
    ecx = MEM32(esp + 0x10); /* 0x141ECE19: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x141ECE1D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ECE21: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ECE23: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x141ECE25: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x141ECE27: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ECE2B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x141ECE2D: mov esi, eax */
    eax = ebx; /* 0x141ECE2F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x141ECE31: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x141ECE35: mov ecx, eax */
    eax = esi; /* 0x141ECE37: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x141ECE39: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141ECE3D: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_141ECE88; /* 0x141ECE3F: jmp 0x141ece88 */
L_141ECE41:
    ecx = eax; /* 0x141ECE41: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x141ECE43: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x141ECE47: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x141ECE4B: mov eax, dword ptr [esp + 8] */
L_141ECE4F:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x141ECE4F: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x141ECE4F: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141ECE51: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x141ECE53: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x141ECE53: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x141ECE55: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x141ECE57: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ECE4F; /* 0x141ECE59: jne 0x141ece4f */
L_141ECE5B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x141ECE5B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x141ECE5D: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x141ECE5F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x141ECE63: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x141ECE65: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x141ECE69: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141ECE6B: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_141ECE7D; /* 0x141ECE6D: jb 0x141ece7d */
L_141ECE6F:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x141ECE6F: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141ECE7D; /* 0x141ECE73: ja 0x141ece7d */
L_141ECE75:
    if (CMP_B(_flag_a, _flag_b)) goto L_141ECE86; /* 0x141ECE75: jb 0x141ece86 */
L_141ECE77:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x141ECE77: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141ECE86; /* 0x141ECE7B: jbe 0x141ece86 */
L_141ECE7D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141ECE7D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x141ECE7E: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ECE82: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_141ECE86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141ECE86: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141ECE88:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x141ECE88: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ECE8C: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x141ECE90: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ECE92: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ECE94: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x141ECE97: mov ecx, edx */
    edx = ebx; /* 0x141ECE99: mov edx, ebx */
    ebx = ecx; /* 0x141ECE9B: mov ebx, ecx */
    ecx = eax; /* 0x141ECE9D: mov ecx, eax */
    eax = esi; /* 0x141ECE9F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141ECEA1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141ECEA2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141ECEB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECEB5u);

L_141ECEB5:
    PUSH32(esp, ebx); /* 0x141ECEB5: push ebx */
    PUSH32(esp, ecx); /* 0x141ECEB6: push ecx */
    ebx = 0x141F00B0u; /* 0x141ECEB7: mov ebx, 0x141f00b0 */
    ecx = MEM32(esp + 0xC); /* 0x141ECEBC: mov ecx, dword ptr [esp + 0xc] */
    MEM32(ebx + 0x8) = ecx; /* 0x141ECEC0: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x141ECEC3: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x141ECEC6: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x141ECEC9: push ebp */
    PUSH32(esp, ecx); /* 0x141ECECA: push ecx */
    PUSH32(esp, eax); /* 0x141ECECB: push eax */
    eax = POP32_VAL(esp); /* 0x141ECECC: pop eax */
    ecx = POP32_VAL(esp); /* 0x141ECECD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x141ECECE: pop ebp */
    ecx = POP32_VAL(esp); /* 0x141ECECF: pop ecx */
    ebx = POP32_VAL(esp); /* 0x141ECED0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141ECED1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141ECED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECED4u);

L_141ECED4:
    RECOMP_ICALL(eax); /* 0x141ECED4: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECED6: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECEDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECEDCu);

L_141ECEDC:
    PUSH32(esp, 0xCu); /* 0x141ECEDC: push 0xc */
    PUSH32(esp, 0x141EDCC8u); /* 0x141ECEDE: push 0x141edcc8 */
    RECOMP_CALL(sub_141ECBFC); /* 0x141ECEE3: call 0x141ecbfc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x141ECEE8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0] = _xmm[1]; /* 0x141ECEEC: movapd xmm0, xmm1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECEF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141ECEF2: inc eax */
    _flag_k = FK_INC;
    goto L_141ECF16; /* 0x141ECEF3: jmp 0x141ecf16 */
L_141ECF16:
    MEM32(ebp + (-0x1C)) = eax; /* 0x141ECF16: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x141ECF19: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_141ECC41); /* 0x141ECF20: call 0x141ecc41 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECF25: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECF2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECF2Bu);

L_141ECF2B:
    edi = edi; /* 0x141ECF2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141ECF2D: push ebp */
    ebp = esp; /* 0x141ECF2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x141ECF30: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECF33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141ECF35: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x141ECF36: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x141ECF39: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x141ECF3C: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x141ECF3F: push ebx */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141ECF40: pushfd  */
    eax = POP32_VAL(esp); /* 0x141ECF41: pop eax */
    ecx = eax; /* 0x141ECF42: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x141ECF44: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141ECF49: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x141ECF4A: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141ECF4B: pushfd  */
    edx = POP32_VAL(esp); /* 0x141ECF4C: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x141ECF4D: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141ECF70; /* 0x141ECF4F: je 0x141ecf70 */
L_141ECF51:
    PUSH32(esp, ecx); /* 0x141ECF51: push ecx */
    { uint32_t _fl = POP32_VAL(esp); /* 0x141ECF52: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECF53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x141ECF55: cpuid  */
    MEM32(ebp + (-0xC)) = eax; /* 0x141ECF57: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x141ECF5A: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = edx; /* 0x141ECF5D: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x141ECF60: mov dword ptr [ebp - 0x10], ecx */
    eax = 1; /* 0x141ECF63: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x141ECF68: cpuid  */
    MEM32(ebp + (-0x4)) = edx; /* 0x141ECF6A: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x141ECF6D: mov dword ptr [ebp - 8], eax */
L_141ECF70:
    ebx = POP32_VAL(esp); /* 0x141ECF70: pop ebx */
    /* test MEM32(ebp + (-0x4)), 0x04000000u */ /* 0x141ECF71: test dword ptr [ebp - 4], 0x4000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x04000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECF98; /* 0x141ECF78: je 0x141ecf98 */
L_141ECF7A:
    RECOMP_CALL(sub_141ECEDC); /* 0x141ECF7A: call 0x141ecedc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141ECF7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141ECF98; /* 0x141ECF81: je 0x141ecf98 */
L_141ECF83:
    RECOMP_ICALL(MEM32(0x140010A8)); /* 0x141ECF83: call dword ptr [0x140010a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x141ECF89: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 6 */ /* 0x141ECF8E: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141ECF98; /* 0x141ECF91: jb 0x141ecf98 */
L_141ECF93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECF93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141ECF95: inc eax */
    _flag_k = FK_INC;
    goto L_141ECF9A; /* 0x141ECF96: jmp 0x141ecf9a */
L_141ECF98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECF98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141ECF9A:
    ebx = POP32_VAL(esp); /* 0x141ECF9A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141ECF9B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECF9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECFC0u);

L_141ECFC0:
    eax = MEM32(esp + 0x8); /* 0x141ECFC0: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x141ECFC4: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141ECFC8: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x141ECFCA: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ECFD9; /* 0x141ECFCE: jne 0x141ecfd9 */
L_141ECFD0:
    eax = MEM32(esp + 0x4); /* 0x141ECFD0: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x141ECFD4: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141ECFD6: ret 0x10 */
L_141ECFD9:
    PUSH32(esp, ebx); /* 0x141ECFD9: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x141ECFDA: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x141ECFDC: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x141ECFDE: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x141ECFE2: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x141ECFE6: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x141ECFE8: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x141ECFEC: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x141ECFEE: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x141ECFF0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141ECFF1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141ECFFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECFFAu);

L_141ECFFA:
    { _itail_tgt = (uint32_t)(MEM32(0x140010B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED006u);

L_141ED006:
    { _itail_tgt = (uint32_t)(MEM32(0x140010BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED012(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED012u);

L_141ED012:
    { _itail_tgt = (uint32_t)(MEM32(0x140010C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED01E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED01Eu);

L_141ED01E:
    { _itail_tgt = (uint32_t)(MEM32(0x14001028)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED030u);

    goto L_141ED030;
L_141EC1A0:
    PUSH32(esp, ecx); /* 0x141EC1A0: push ecx */
    ecx = esp + 0x4; /* 0x141EC1A1: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x141EC1A5: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141EC1A7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x141EC1A9: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x141EC1AB: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x141EC1AD: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x141EC1AF: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141EC1B4:
    /* cmp ecx, eax */ /* 0x141EC1B4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141EC1C2; /* 0x141EC1B6: jb 0x141ec1c2 */
L_141EC1B8:
    eax = ecx; /* 0x141EC1B8: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x141EC1BA: pop ecx */
    { uint32_t _tmp = esp; /* 0x141EC1BB: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x141EC1BC: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x141EC1BE: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EC1C1: ret  */
L_141EC1C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x141EC1C2: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x141EC1C7: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141EC1B4; /* 0x141EC1C9: jmp 0x141ec1b4 */
L_141ED030:
    PUSH32(esp, ecx); /* 0x141ED030: push ecx */
    ecx = esp + 0x8; /* 0x141ED031: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x141ED035: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x141ED037: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141ED03A: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ED03C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x141ED03E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141ED040: pop ecx */
    RECOMP_BACKEDGE();
    goto L_141EC1A0; /* 0x141ED041: jmp 0x141ec1a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED062(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED062u);

L_141ED062:
    { _itail_tgt = (uint32_t)(MEM32(0x14001170)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED070u);

L_141ED070:
    /* cmp LO8(ecx), 0x40u */ /* 0x141ED070: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED08A; /* 0x141ED073: jae 0x141ed08a */
L_141ED075:
    /* cmp LO8(ecx), 0x20u */ /* 0x141ED075: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED080; /* 0x141ED078: jae 0x141ed080 */
L_141ED07A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141ED07A: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141ED07D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141ED07D: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED07F: ret  */
L_141ED080:
    edx = eax; /* 0x141ED080: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ED082: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x141ED084: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141ED087: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x141ED087: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED089: ret  */
L_141ED08A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ED08A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED08C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED08E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ED094(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED094u);

L_141ED094:
    { _itail_tgt = (uint32_t)(MEM32(0x14001174)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED0A0u);

L_141ED0A0:
    PUSH32(esp, edi); /* 0x141ED0A0: push edi */
    PUSH32(esp, esi); /* 0x141ED0A1: push esi */
    PUSH32(esp, ebx); /* 0x141ED0A2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141ED0A3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x14); /* 0x141ED0A5: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x141ED0A9: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141ED0C1; /* 0x141ED0AB: jge 0x141ed0c1 */
L_141ED0AD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141ED0AD: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x10); /* 0x141ED0AE: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ED0B2: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x141ED0B4: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ED0B6: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x14) = eax; /* 0x141ED0B9: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x10) = edx; /* 0x141ED0BD: mov dword ptr [esp + 0x10], edx */
L_141ED0C1:
    eax = MEM32(esp + 0x1C); /* 0x141ED0C1: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x141ED0C5: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141ED0DD; /* 0x141ED0C7: jge 0x141ed0dd */
L_141ED0C9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141ED0C9: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x18); /* 0x141ED0CA: mov edx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ED0CE: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x141ED0D0: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ED0D2: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x1C) = eax; /* 0x141ED0D5: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x18) = edx; /* 0x141ED0D9: mov dword ptr [esp + 0x18], edx */
L_141ED0DD:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x141ED0DD: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ED0F9; /* 0x141ED0DF: jne 0x141ed0f9 */
L_141ED0E1:
    ecx = MEM32(esp + 0x18); /* 0x141ED0E1: mov ecx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14); /* 0x141ED0E5: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED0E9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ED0EB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x141ED0ED: mov ebx, eax */
    eax = MEM32(esp + 0x10); /* 0x141ED0EF: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ED0F3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x141ED0F5: mov edx, ebx */
    goto L_141ED13A; /* 0x141ED0F7: jmp 0x141ed13a */
L_141ED0F9:
    ebx = eax; /* 0x141ED0F9: mov ebx, eax */
    ecx = MEM32(esp + 0x18); /* 0x141ED0FB: mov ecx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x14); /* 0x141ED0FF: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x141ED103: mov eax, dword ptr [esp + 0x10] */
L_141ED107:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x141ED107: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x141ED107: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x141ED109: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x141ED10B: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x141ED10B: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x141ED10D: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x141ED10F: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ED107; /* 0x141ED111: jne 0x141ed107 */
L_141ED113:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ED113: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x141ED115: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x1C)); /* 0x141ED117: mul dword ptr [esp + 0x1c] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x141ED11B: mov ecx, eax */
    eax = MEM32(esp + 0x18); /* 0x141ED11D: mov eax, dword ptr [esp + 0x18] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x141ED121: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141ED123: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_141ED135; /* 0x141ED125: jb 0x141ed135 */
L_141ED127:
    /* cmp edx, MEM32(esp + 0x14) */ /* 0x141ED127: cmp edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141ED135; /* 0x141ED12B: ja 0x141ed135 */
L_141ED12D:
    if (CMP_B(_flag_a, _flag_b)) goto L_141ED136; /* 0x141ED12D: jb 0x141ed136 */
L_141ED12F:
    /* cmp eax, MEM32(esp + 0x10) */ /* 0x141ED12F: cmp eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141ED136; /* 0x141ED133: jbe 0x141ed136 */
L_141ED135:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141ED135: dec esi */
    _flag_k = FK_DEC;
L_141ED136:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED136: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141ED138: mov eax, esi */
L_141ED13A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x141ED13A: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141ED144; /* 0x141ED13B: jne 0x141ed144 */
L_141ED13D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x141ED13D: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141ED13F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141ED141: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_141ED144:
    ebx = POP32_VAL(esp); /* 0x141ED144: pop ebx */
    esi = POP32_VAL(esp); /* 0x141ED145: pop esi */
    edi = POP32_VAL(esp); /* 0x141ED146: pop edi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141ED147: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141ED150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED150u);

L_141ED150:
    PUSH32(esp, ebx); /* 0x141ED150: push ebx */
    PUSH32(esp, esi); /* 0x141ED151: push esi */
    eax = MEM32(esp + 0x18); /* 0x141ED152: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x141ED156: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ED172; /* 0x141ED158: jne 0x141ed172 */
L_141ED15A:
    ecx = MEM32(esp + 0x14); /* 0x141ED15A: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x141ED15E: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED162: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ED164: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x141ED166: mov ebx, eax */
    eax = MEM32(esp + 0xC); /* 0x141ED168: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x141ED16C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x141ED16E: mov edx, ebx */
    goto L_141ED1B3; /* 0x141ED170: jmp 0x141ed1b3 */
L_141ED172:
    ecx = eax; /* 0x141ED172: mov ecx, eax */
    ebx = MEM32(esp + 0x14); /* 0x141ED174: mov ebx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x141ED178: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x141ED17C: mov eax, dword ptr [esp + 0xc] */
L_141ED180:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x141ED180: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x141ED180: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x141ED182: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x141ED184: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x141ED184: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x141ED186: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x141ED188: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141ED180; /* 0x141ED18A: jne 0x141ed180 */
L_141ED18C:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x141ED18C: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x141ED18E: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x141ED190: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x141ED194: mov ecx, eax */
    eax = MEM32(esp + 0x14); /* 0x141ED196: mov eax, dword ptr [esp + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x141ED19A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141ED19C: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_141ED1AE; /* 0x141ED19E: jb 0x141ed1ae */
L_141ED1A0:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x141ED1A0: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141ED1AE; /* 0x141ED1A4: ja 0x141ed1ae */
L_141ED1A6:
    if (CMP_B(_flag_a, _flag_b)) goto L_141ED1AF; /* 0x141ED1A6: jb 0x141ed1af */
L_141ED1A8:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x141ED1A8: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141ED1AF; /* 0x141ED1AC: jbe 0x141ed1af */
L_141ED1AE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141ED1AE: dec esi */
    _flag_k = FK_DEC;
L_141ED1AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED1AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141ED1B1: mov eax, esi */
L_141ED1B3:
    esi = POP32_VAL(esp); /* 0x141ED1B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x141ED1B4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141ED1B5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141ED1E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1E2u);

L_141ED1E2:
    { _itail_tgt = (uint32_t)(MEM32(0x14001184)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED1EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1EEu);

L_141ED1EE:
    { _itail_tgt = (uint32_t)(MEM32(0x14001188)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED1FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1FAu);

L_141ED1FA:
    { _itail_tgt = (uint32_t)(MEM32(0x1400118C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED212(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED212u);

L_141ED212:
    { _itail_tgt = (uint32_t)(MEM32(0x14001194)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EBC21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EBC21u);

L_141EBC21:
    PUSH32(esp, 0x80u); /* 0x141EBC21: push 0x80 */
    RECOMP_ICALL(MEM32(0x14001154)); /* 0x141EBC26: call dword ptr [0x14001154] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EBC2C: pop ecx */
    MEM32(0x141F7E94) = eax; /* 0x141EBC2D: mov dword ptr [0x141f7e94], eax */
    MEM32(0x141F7E90) = eax; /* 0x141EBC32: mov dword ptr [0x141f7e90], eax */
    /* test eax, eax */ /* 0x141EBC37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141EBC3D; /* 0x141EBC39: jne 0x141ebc3d */
L_141EBC3B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141EBC3B: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EBC3C: ret  */
L_141EBC3D:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x141EBC3D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141EBC40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EBC42: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ECFA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ECFA2u);

L_141ECFA2:
    RECOMP_CALL(sub_141ECF2B); /* 0x141ECFA2: call 0x141ecf2b */
    RECOMP_FLAGS_IN();
    MEM32(0x141F00C0) = eax; /* 0x141ECFA7: mov dword ptr [0x141f00c0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ECFAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ECFAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E8D69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E8D69u);

L_141E8D69:
    edi = edi; /* 0x141E8D69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E8D6B: push ebp */
    ebp = esp; /* 0x141E8D6C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x141E8D6E: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E8D71: push ebx */
    PUSH32(esp, esi); /* 0x141E8D72: push esi */
    PUSH32(esp, edi); /* 0x141E8D73: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E8D74: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x141E8D77: mov esi, ecx */
    ecx = edi; /* 0x141E8D79: mov ecx, edi */
    RECOMP_CALL(sub_14077E90); /* 0x141E8D7B: call 0x14077e90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x4E8u); /* 0x141E8D80: push 0x4e8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E8D85: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141E8D87: push ebx */
    PUSH32(esp, edi); /* 0x141E8D88: push edi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E8D89: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x141E8D8E: mov eax, dword ptr [esi] */
    ebx = MEM32(eax); /* 0x141E8D90: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x141E8D92: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8D95: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E8D98: mov dword ptr [esi], eax */
    eax = ebx; /* 0x141E8D9A: mov eax, ebx */
    if (19u) _cf = (((eax) >> 18) & 1u); /* 0x141E8D9C: shr eax, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((eax >> 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 19u; /* 0x141E8D9C: shr eax, 0x13 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8D9F: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x490) = eax; /* 0x141E8DA2: mov dword ptr [edi + 0x490], eax */
    eax = ebx; /* 0x141E8DA8: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x141E8DAA: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4C4) = eax; /* 0x141E8DAF: mov dword ptr [edi + 0x4c4], eax */
    eax = ebx; /* 0x141E8DB5: mov eax, ebx */
    ecx = ebx; /* 0x141E8DB7: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x141E8DB9: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x141E8DBF: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x141E8DBF: shr eax, 0x18 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E8DC2: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    eax = eax & 0x7Fu; /* 0x141E8DC5: and eax, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E8DC8: push ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x141E8DC9: mov dword ptr [ebp - 0x14], ebx */
    MEM32(edi) = ecx; /* 0x141E8DCC: mov dword ptr [edi], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x141E8DCE: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_141E6B65); /* 0x141E8DD1: call 0x141e6b65 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x488) = eax; /* 0x141E8DD6: mov dword ptr [edi + 0x488], eax */
    eax = ebx; /* 0x141E8DDC: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E8DDE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x141E8DE0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x141E8DE0: shr eax, 0x1f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E8DE3: inc edx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x141E8DE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8E0F; /* 0x141E8DE6: je 0x141e8e0f */
L_141E8DE8:
    /* cmp MEM32(edi), 0x92u */ /* 0x141E8DE8: cmp dword ptr [edi], 0x92 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x92u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8DF8; /* 0x141E8DEE: je 0x141e8df8 */
L_141E8DF0:
    /* cmp MEM32(edi), 0x91u */ /* 0x141E8DF0: cmp dword ptr [edi], 0x91 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x91u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8E0F; /* 0x141E8DF6: jne 0x141e8e0f */
L_141E8DF8:
    MEM32(edi + 0x48C) = edx; /* 0x141E8DF8: mov dword ptr [edi + 0x48c], edx */
    eax = MEM32(esi); /* 0x141E8DFE: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x141E8E00: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8E02: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x141E8E05: mov dword ptr [ebp + 8], ecx */
    MEM32(esi) = eax; /* 0x141E8E08: mov dword ptr [esi], eax */
    goto L_141E8EEE; /* 0x141E8E0A: jmp 0x141e8eee */
L_141E8E0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E8E0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E8E11: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8E13: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x48C) = ecx; /* 0x141E8E15: mov dword ptr [edi + 0x48c], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x141E8E1B: mov dword ptr [ebp - 0x18], ecx */
    /* test eax, 3 */ /* 0x141E8E1E: test eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E8EF0; /* 0x141E8E23: jle 0x141e8ef0 */
L_141E8E29:
    edx = MEM32(ebp + (-0x18)); /* 0x141E8E29: mov edx, dword ptr [ebp - 0x18] */
    ecx = edi + 0x494; /* 0x141E8E2C: lea ecx, [edi + 0x494] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x141E8E32: mov dword ptr [ebp - 4], ecx */
L_141E8E35:
    _flag_a = (uint32_t)(MEM32(edi + 0x48C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x48C) = MEM32(edi + 0x48C) + 1; /* 0x141E8E35: inc dword ptr [edi + 0x48c] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x141E8E3B: mov eax, dword ptr [esi] */
    ebx = MEM32(eax); /* 0x141E8E3D: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8E3F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E8E42: mov dword ptr [esi], eax */
    eax = ebx; /* 0x141E8E44: mov eax, ebx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x141E8E46: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x141E8E46: shr eax, 0x1f */
    MEM32(ebp + (-0x18)) = eax; /* 0x141E8E49: mov dword ptr [ebp - 0x18], eax */
    eax = ebx; /* 0x141E8E4C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x141E8E4E: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141E8E51: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8E53: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8E96; /* 0x141E8E54: je 0x141e8e96 */
L_141E8E56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8E56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8E77; /* 0x141E8E57: je 0x141e8e77 */
L_141E8E59:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8E59: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8ED2; /* 0x141E8E5A: jne 0x141e8ed2 */
L_141E8E5C:
    PUSH32(esp, 6); /* 0x141E8E5C: push 6 */
    ecx = POP32_VAL(esp); /* 0x141E8E5E: pop ecx */
L_141E8E5F:
    eax = ebx; /* 0x141E8E5F: mov eax, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141E8E61: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x141E8E61: shr eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E8E63: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8E66: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + ecx + 0x4A2) = eax; /* 0x141E8E69: mov dword ptr [edi + ecx + 0x4a2], eax */
    /* cmp ecx, 0x16u */ /* 0x141E8E70: cmp ecx, 0x16 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E8E5F; /* 0x141E8E73: jb 0x141e8e5f */
L_141E8E75:
    goto L_141E8ECF; /* 0x141E8E75: jmp 0x141e8ecf */
L_141E8E77:
    eax = ebx; /* 0x141E8E77: mov eax, ebx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x141E8E79: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x141E8E79: shr eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x141E8E7C: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E8E7F: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E8E7F: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFu);
    ebx = ebx & 0xFFFu; /* 0x141E8E82: and ebx, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4A4) = eax; /* 0x141E8E88: mov dword ptr [edi + 0x4a4], eax */
    MEM32(edi + 0x4A8) = ebx; /* 0x141E8E8E: mov dword ptr [edi + 0x4a8], ebx */
    goto L_141E8ED2; /* 0x141E8E94: jmp 0x141e8ed2 */
L_141E8E96:
    eax = ebx; /* 0x141E8E96: mov eax, ebx */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x141E8E98: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x141E8E98: shr eax, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x141E8E9B: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = edi + 0x4A0; /* 0x141E8E9D: lea ecx, [edi + 0x4a0] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x141E8EA3: mov byte ptr [ecx], al */
    eax = ebx; /* 0x141E8EA5: mov eax, ebx */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x141E8EA7: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x141E8EA7: shr eax, 0xd */
    if (17u) _cf = (((ebx) >> 16) & 1u); /* 0x141E8EAA: shr ebx, 0x11 */
    if (17u) { _flag_a = recomp_flags_pack((ebx >> 17u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 17u; /* 0x141E8EAA: shr ebx, 0x11 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x141E8EAD: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xFu); /* 0x141E8EAF: and bl, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 3); /* 0x141E8EB2: push 3 */
    MEM8(edi + 0x4A2) = (uint8_t)(LO8(ebx)); /* 0x141E8EB4: mov byte ptr [edi + 0x4a2], bl */
    MEM8(edi + 0x4A1) = (uint8_t)(LO8(eax)); /* 0x141E8EBA: mov byte ptr [edi + 0x4a1], al */
    ebx = POP32_VAL(esp); /* 0x141E8EC0: pop ebx */
L_141E8EC1:
    SET_LO8(eax, MEM8(ecx)); /* 0x141E8EC1: mov al, byte ptr [ecx] */
    /* test LO8(eax), 8 */ /* 0x141E8EC3: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8ECB; /* 0x141E8EC5: je 0x141e8ecb */
L_141E8EC7:
    _flag_a = (uint32_t)((LO8(eax) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF0u); /* 0x141E8EC7: or al, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x141E8EC9: mov byte ptr [ecx], al */
L_141E8ECB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E8ECB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x141E8ECC: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8EC1; /* 0x141E8ECD: jne 0x141e8ec1 */
L_141E8ECF:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E8ECF: mov ecx, dword ptr [ebp - 4] */
L_141E8ED2:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x141E8ED2: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8EE8; /* 0x141E8ED6: je 0x141e8ee8 */
L_141E8ED8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E8ED8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E8ED9: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x141E8EDC: mov dword ptr [ebp - 4], ecx */
    /* cmp edx, 3 */ /* 0x141E8EDF: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_141E8E35; /* 0x141E8EE2: jl 0x141e8e35 */
L_141E8EE8:
    ebx = MEM32(ebp + (-0x14)); /* 0x141E8EE8: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E8EEB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E8EED: inc edx */
    _flag_k = FK_INC;
L_141E8EEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E8EEE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E8EF0:
    eax = MEM32(edi); /* 0x141E8EF0: mov eax, dword ptr [edi] */
    /* cmp eax, 0x69u */ /* 0x141E8EF2: cmp eax, 0x69 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E9300; /* 0x141E8EF5: jg 0x141e9300 */
L_141E8EFB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9290; /* 0x141E8EFB: je 0x141e9290 */
L_141E8F01:
    /* cmp eax, 0x5Cu */ /* 0x141E8F01: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E9256; /* 0x141E8F04: jg 0x141e9256 */
L_141E8F0A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9245; /* 0x141E8F0A: je 0x141e9245 */
L_141E8F10:
    /* cmp eax, 0x3Du */ /* 0x141E8F10: cmp eax, 0x3d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E917A; /* 0x141E8F13: jg 0x141e917a */
L_141E8F19:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E914D; /* 0x141E8F19: je 0x141e914d */
L_141E8F1F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x141E8F1F: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9240; /* 0x141E8F22: je 0x141e9240 */
L_141E8F28:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8F28: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8F29: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9127; /* 0x141E8F2A: je 0x141e9127 */
L_141E8F30:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x141E8F30: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9240; /* 0x141E8F33: je 0x141e9240 */
L_141E8F39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x141E8F39: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9240; /* 0x141E8F3C: je 0x141e9240 */
L_141E8F42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x12u; /* 0x141E8F42: sub eax, 0x12 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9240; /* 0x141E8F45: je 0x141e9240 */
L_141E8F4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x16u; /* 0x141E8F4B: sub eax, 0x16 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E8F4E: jne 0x141e95ed */
L_141E8F54:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E8F54: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E8F54: shr ebx, 0xb */
    MEM32(edi + 0x490) = ecx; /* 0x141E8F57: mov dword ptr [edi + 0x490], ecx */
    MEM32(edi + 0x4C4) = ecx; /* 0x141E8F5D: mov dword ptr [edi + 0x4c4], ecx */
    MEM32(edi + 0x488) = ecx; /* 0x141E8F63: mov dword ptr [edi + 0x488], ecx */
    MEM32(edi + 0x4C8) = ebx; /* 0x141E8F69: mov dword ptr [edi + 0x4c8], ebx */
    eax = MEM32(esi); /* 0x141E8F6F: mov eax, dword ptr [esi] */
    edx = MEM32(eax); /* 0x141E8F71: mov edx, dword ptr [eax] */
    MEM32(ebp + 0x8) = edx; /* 0x141E8F73: mov dword ptr [ebp + 8], edx */
    /* cmp edx, 2 */ /* 0x141E8F76: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E8F8F; /* 0x141E8F79: jae 0x141e8f8f */
L_141E8F7B:
    PUSH32(esp, 2); /* 0x141E8F7B: push 2 */
    eax = POP32_VAL(esp); /* 0x141E8F7D: pop eax */
    MEM32(edi + 0x4D0) = ecx; /* 0x141E8F7E: mov dword ptr [edi + 0x4d0], ecx */
    MEM32(edi + 0x4CC) = ecx; /* 0x141E8F84: mov dword ptr [edi + 0x4cc], ecx */
    goto L_141E91B0; /* 0x141E8F8A: jmp 0x141e91b0 */
L_141E8F8F:
    eax = edx * 4 + (-0x8); /* 0x141E8F8F: lea eax, [edx*4 - 8] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E8F96: mov dword ptr [edi + 0x4cc], eax */
    eax = MEM32(esi); /* 0x141E8F9C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E8F9E: mov eax, dword ptr [eax] */
    eax = eax * 4 + (-0x8); /* 0x141E8FA0: lea eax, [eax*4 - 8] */
    PUSH32(esp, eax); /* 0x141E8FA7: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E8FA8: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x141E8FAD: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x141E8FAF: pop ecx */
    MEM32(edi + 0x4D0) = edx; /* 0x141E8FB0: mov dword ptr [edi + 0x4d0], edx */
    /* test edx, edx */ /* 0x141E8FB6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E8FCF; /* 0x141E8FB8: jne 0x141e8fcf */
L_141E8FBA:
    MEM32(ebp + (-0x1C)) = 0x8007000Eu; /* 0x141E8FBA: mov dword ptr [ebp - 0x1c], 0x8007000e */
    PUSH32(esp, 0x141EDD08u); /* 0x141E8FC1: push 0x141edd08 */
    eax = ebp + (-0x1C); /* 0x141E8FC6: lea eax, [ebp - 0x1c] */
L_141E8FC9:
    PUSH32(esp, eax); /* 0x141E8FC9: push eax */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E8FCA: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E8FCF:
    ecx = MEM32(esi); /* 0x141E8FCF: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x141E8FD1: mov eax, dword ptr [ecx] */
    eax = eax * 4 + (-0x8); /* 0x141E8FD3: lea eax, [eax*4 - 8] */
    PUSH32(esp, eax); /* 0x141E8FDA: push eax */
    eax = ecx + 0x4; /* 0x141E8FDB: lea eax, [ecx + 4] */
    PUSH32(esp, eax); /* 0x141E8FDE: push eax */
    PUSH32(esp, edx); /* 0x141E8FDF: push edx */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E8FE0: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E8FE5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x4C8), 4 */ /* 0x141E8FE8: cmp dword ptr [edi + 0x4c8], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E8FEF: jne 0x141e91ad */
L_141E8FF5:
    edx = MEM32(edi + 0x4CC); /* 0x141E8FF5: mov edx, dword ptr [edi + 0x4cc] */
    ecx = MEM32(edi + 0x4D0); /* 0x141E8FFB: mov ecx, dword ptr [edi + 0x4d0] */
    ebx = edi + 0x4D4; /* 0x141E9001: lea ebx, [edi + 0x4d4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9007: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x141E9009: mov edi, ebx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E900B: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E900C: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E900D: stosd dword ptr es:[edi], eax */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x141E900E: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x141E900E: shr edx, 2 */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E9011: stosd dword ptr es:[edi], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x141E9012: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x141E9015: mov dword ptr [ebp - 0x18], ecx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E9018: stosd dword ptr es:[edi], eax */
    /* cmp edx, 6 */ /* 0x141E9019: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E901C: jb 0x141e91ad */
L_141E9022:
    eax = MEM32(ecx + 0x8); /* 0x141E9022: mov eax, dword ptr [ecx + 8] */
    edi = MEM32(ecx + 0x10); /* 0x141E9025: mov edi, dword ptr [ecx + 0x10] */
    edx = MEM32(ecx + 0xC); /* 0x141E9028: mov edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E902B: add eax, 4 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x141E902E: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x141E902E: shr eax, 2 */
    MEM32(ebp + (-0x14)) = edx; /* 0x141E9031: mov dword ptr [ebp - 0x14], edx */
    /* cmp edi, 0x00010000u */ /* 0x141E9034: cmp edi, 0x10000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E903A: jae 0x141e91ad */
L_141E9040:
    /* cmp edx, 0x1000u */ /* 0x141E9040: cmp edx, 0x1000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E9046: jae 0x141e91ad */
L_141E904C:
    /* cmp eax, 0x00010000u */ /* 0x141E904C: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E9051: jae 0x141e91ad */
L_141E9057:
    eax = edi + eax + 0x5; /* 0x141E9057: lea eax, [edi + eax + 5] */
    /* cmp MEM32(ebp + (-0x10)), eax */ /* 0x141E905B: cmp dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E905E: jb 0x141e91ad */
L_141E9064:
    eax = ecx + edi * 4 + 0x14; /* 0x141E9064: lea eax, [ecx + edi*4 + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E9068: mov dword ptr [ebp - 4], eax */
    eax = edx; /* 0x141E906B: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC0u); /* 0x141E906D: imul eax, eax, 0xc0 */
    PUSH32(esp, eax); /* 0x141E9073: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E9074: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9079: pop ecx */
    MEM32(ebx + 0x10) = eax; /* 0x141E907A: mov dword ptr [ebx + 0x10], eax */
    /* test eax, eax */ /* 0x141E907D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9095; /* 0x141E907F: jne 0x141e9095 */
L_141E9081:
    MEM32(ebp + (-0x20)) = 0x8007000Eu; /* 0x141E9081: mov dword ptr [ebp - 0x20], 0x8007000e */
    PUSH32(esp, 0x141EDD08u); /* 0x141E9088: push 0x141edd08 */
    eax = ebp + (-0x20); /* 0x141E908D: lea eax, [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_141E8FC9; /* 0x141E9090: jmp 0x141e8fc9 */
L_141E9095:
    ecx = MEM32(ebp + (-0x18)); /* 0x141E9095: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x14)); /* 0x141E9098: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E909B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x14; /* 0x141E909D: lea eax, [ecx + 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x141E90A0: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x141E90A3: mov dword ptr [ebp - 0xc], edi */
    /* test edx, edx */ /* 0x141E90A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E90F9; /* 0x141E90A8: je 0x141e90f9 */
L_141E90AA:
    ecx = edi; /* 0x141E90AA: mov ecx, edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x141E90AC: mov dword ptr [ebp - 8], edi */
L_141E90AF:
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x141E90AF: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E90F6; /* 0x141E90B2: jae 0x141e90f6 */
L_141E90B4:
    eax = MEM32(ebx + 0x10); /* 0x141E90B4: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, 0xC0u); /* 0x141E90B7: push 0xc0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x141E90BC: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x141E90BE: push edi */
    PUSH32(esp, eax); /* 0x141E90BF: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E90C0: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x10); /* 0x141E90C5: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x141E90C8: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E90CB: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x141E90CE: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x141E90D1: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x141E90D3: push dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x141E90D6: push eax */
    RECOMP_CALL(sub_141E8D34); /* 0x141E90D7: call 0x141e8d34 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x141E90DC: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x141E90DF: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x14)); /* 0x141E90E2: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC0u; /* 0x141E90E5: add ecx, 0xc0 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x141E90EB: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x141E90EE: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(ebp + (-0xC)), edx */ /* 0x141E90F1: cmp dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E90AF; /* 0x141E90F4: jb 0x141e90af */
L_141E90F6:
    ecx = MEM32(ebp + (-0x18)); /* 0x141E90F6: mov ecx, dword ptr [ebp - 0x18] */
L_141E90F9:
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x141E90F9: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E910F; /* 0x141E90FC: je 0x141e910f */
L_141E90FE:
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x141E90FE: push dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9101: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9106: pop ecx */
    MEM32(ebx + 0x10) = edi; /* 0x141E9107: mov dword ptr [ebx + 0x10], edi */
    goto L_141E91AD; /* 0x141E910A: jmp 0x141e91ad */
L_141E910F:
    eax = MEM32(ecx); /* 0x141E910F: mov eax, dword ptr [ecx] */
    MEM32(ebx) = eax; /* 0x141E9111: mov dword ptr [ebx], eax */
    eax = MEM32(ecx + 0x4); /* 0x141E9113: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x141E9116: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x141E9119: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x8) = eax; /* 0x141E911C: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = edx; /* 0x141E911F: mov dword ptr [ebx + 0xc], edx */
    goto L_141E91AD; /* 0x141E9122: jmp 0x141e91ad */
L_141E9127:
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x141E9127: shr ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ebx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 18u; /* 0x141E9127: shr ebx, 0x12 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x141E912A: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E912C:
    eax = edi + 0x8; /* 0x141E912C: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x141E912F: push eax */
    ecx = esi; /* 0x141E9130: mov ecx, esi */
    MEM32(edi + 0x4C8) = ebx; /* 0x141E9132: mov dword ptr [edi + 0x4c8], ebx */
    RECOMP_CALL(sub_141E85F1); /* 0x141E9138: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = edi + 0xC8; /* 0x141E913D: lea eax, [edi + 0xc8] */
L_141E9143:
    PUSH32(esp, eax); /* 0x141E9143: push eax */
    ecx = esi; /* 0x141E9144: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E9146: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    goto L_141E91AD; /* 0x141E914B: jmp 0x141e91ad */
L_141E914D:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E914D: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E914D: shr ebx, 0xb */
    eax = edi + 0x8; /* 0x141E9150: lea eax, [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x141E9153: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141E9156: push eax */
    ecx = esi; /* 0x141E9157: mov ecx, esi */
    MEM32(edi + 0x4C8) = ebx; /* 0x141E9159: mov dword ptr [edi + 0x4c8], ebx */
    RECOMP_CALL(sub_141E85F1); /* 0x141E915F: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = edi + 0xC8; /* 0x141E9164: lea eax, [edi + 0xc8] */
    PUSH32(esp, eax); /* 0x141E916A: push eax */
    ecx = esi; /* 0x141E916B: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E916D: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x188; /* 0x141E9172: lea eax, [edi + 0x188] */
    RECOMP_BACKEDGE();
    goto L_141E9143; /* 0x141E9178: jmp 0x141e9143 */
L_141E917A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3Fu; /* 0x141E917A: sub eax, 0x3f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9240; /* 0x141E917D: je 0x141e9240 */
L_141E9183:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x19u; /* 0x141E9183: sub eax, 0x19 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E91DA; /* 0x141E9186: je 0x141e91da */
L_141E9188:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9188: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E91D3; /* 0x141E9189: je 0x141e91d3 */
L_141E918B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E918B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E91BF; /* 0x141E918C: je 0x141e91bf */
L_141E918E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E918E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E918F: jne 0x141e95ed */
L_141E9195:
    eax = edi + 0x8; /* 0x141E9195: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x141E9198: push eax */
    ecx = esi; /* 0x141E9199: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E919B: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
L_141E91A0:
    eax = MEM32(esi); /* 0x141E91A0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E91A2: mov eax, dword ptr [eax] */
L_141E91A4:
    MEM32(edi + 0x4C8) = eax; /* 0x141E91A4: mov dword ptr [edi + 0x4c8], eax */
L_141E91AA:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E91AA: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
L_141E91AD:
    eax = MEM32(ebp + 0x8); /* 0x141E91AD: mov eax, dword ptr [ebp + 8] */
L_141E91B0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x141E91B0: mov ecx, dword ptr [ebp - 0x2c] */
    eax = ecx + eax * 4; /* 0x141E91B3: lea eax, [ecx + eax*4] */
    edi = POP32_VAL(esp); /* 0x141E91B6: pop edi */
    MEM32(esi) = eax; /* 0x141E91B7: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x141E91B9: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E91BA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E91BB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E91BC: ret 4 */
L_141E91BF:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E91BF: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E91BF: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x141E91C2: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E91C5:
    MEM32(edi + 0x4C8) = ebx; /* 0x141E91C5: mov dword ptr [edi + 0x4c8], ebx */
L_141E91CB:
    eax = edi + 0x8; /* 0x141E91CB: lea eax, [edi + 8] */
    RECOMP_BACKEDGE();
    goto L_141E9143; /* 0x141E91CE: jmp 0x141e9143 */
L_141E91D3:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E91D3: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E91D3: shr ebx, 0xb */
L_141E91D6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x141E91D6: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E91C5; /* 0x141E91D8: jmp 0x141e91c5 */
L_141E91DA:
    eax = ebx; /* 0x141E91DA: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x141E91DC: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x141E91DC: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x141E91DF: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4C8) = eax; /* 0x141E91E2: mov dword ptr [edi + 0x4c8], eax */
    eax = edi + 0x8; /* 0x141E91E8: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x141E91EB: push eax */
    ecx = esi; /* 0x141E91EC: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E91EE: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x141E91F3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E91F5: mov eax, dword ptr [eax] */
    PUSH32(esp, 0xFu); /* 0x141E91F7: push 0xf */
    ecx = POP32_VAL(esp); /* 0x141E91F9: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E91FA: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4CC) = eax; /* 0x141E91FC: mov dword ptr [edi + 0x4cc], eax */
    eax = MEM32(esi); /* 0x141E9202: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9204: mov eax, dword ptr [eax] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x141E9206: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x141E9206: shr eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9209: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D0) = eax; /* 0x141E920B: mov dword ptr [edi + 0x4d0], eax */
    eax = MEM32(esi); /* 0x141E9211: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9213: mov eax, dword ptr [eax] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x141E9215: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x141E9215: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9218: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D4) = eax; /* 0x141E921A: mov dword ptr [edi + 0x4d4], eax */
    eax = MEM32(esi); /* 0x141E9220: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9222: mov eax, dword ptr [eax] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x141E9224: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x141E9224: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9227: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x141E9229: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x141E9229: shr ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Fu);
    ebx = ebx & 0x7Fu; /* 0x141E922C: and ebx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D8) = eax; /* 0x141E922F: mov dword ptr [edi + 0x4d8], eax */
    MEM32(edi + 0x4DC) = ebx; /* 0x141E9235: mov dword ptr [edi + 0x4dc], ebx */
    RECOMP_BACKEDGE();
    goto L_141E91AA; /* 0x141E923B: jmp 0x141e91aa */
L_141E9240:
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x141E9240: shr ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((ebx >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 18u; /* 0x141E9240: shr ebx, 0x12 */
    RECOMP_BACKEDGE();
    goto L_141E91D6; /* 0x141E9243: jmp 0x141e91d6 */
L_141E9245:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E9245: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E9245: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x141E9248: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E924B:
    MEM32(edi + 0x4C8) = ebx; /* 0x141E924B: mov dword ptr [edi + 0x4c8], ebx */
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E9251: jmp 0x141e91ad */
L_141E9256:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x5Du; /* 0x141E9256: sub eax, 0x5d */
    _flag_k = FK_CMP;
    /* cmp eax, 0xBu */ /* 0x141E9259: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E925C: ja 0x141e95ed */
L_141E9262:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x141E9625)); goto _ljump; }
L_141E9269:
    eax = edi + 0x8; /* 0x141E9269: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x141E926C: push eax */
    ecx = esi; /* 0x141E926D: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E926F: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x141E9274: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9276: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x141E9278: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E91A4; /* 0x141E927D: jmp 0x141e91a4 */
L_141E9282:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E9282: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E9282: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x141E9285: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4CC) = ebx; /* 0x141E9288: mov dword ptr [edi + 0x4cc], ebx */
    RECOMP_BACKEDGE();
    goto L_141E9269; /* 0x141E928E: jmp 0x141e9269 */
L_141E9290:
    eax = MEM32(esi); /* 0x141E9290: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9292: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4C8) = eax; /* 0x141E9294: mov dword ptr [edi + 0x4c8], eax */
    PUSH32(esp, 4); /* 0x141E929A: push 4 */
    ecx = POP32_VAL(esp); /* 0x141E929C: pop ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x141E929D: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E929F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E92A1: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E92A3: mov dword ptr [edi + 0x4cc], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x141E92A9: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E92AB: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax), edx */ /* 0x141E92AD: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E92BF; /* 0x141E92AF: jb 0x141e92bf */
L_141E92B1:
    /* cmp MEM32(eax), ecx */ /* 0x141E92B1: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E92B9; /* 0x141E92B3: jbe 0x141e92b9 */
L_141E92B5:
    edx = ecx; /* 0x141E92B5: mov edx, ecx */
    goto L_141E92BF; /* 0x141E92B7: jmp 0x141e92bf */
L_141E92B9:
    /* cmp MEM32(eax), edx */ /* 0x141E92B9: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E92BF; /* 0x141E92BB: jb 0x141e92bf */
L_141E92BD:
    edx = MEM32(eax); /* 0x141E92BD: mov edx, dword ptr [eax] */
L_141E92BF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E92BF: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E92EF; /* 0x141E92C0: je 0x141e92ef */
L_141E92C2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E92C2: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E92E3; /* 0x141E92C3: je 0x141e92e3 */
L_141E92C5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E92C5: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E92D7; /* 0x141E92C6: je 0x141e92d7 */
L_141E92C8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E92C8: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E92F9; /* 0x141E92C9: jne 0x141e92f9 */
L_141E92CB:
    MEM32(edi + 0x4D0) = 0xF0u; /* 0x141E92CB: mov dword ptr [edi + 0x4d0], 0xf0 */
    goto L_141E92F9; /* 0x141E92D5: jmp 0x141e92f9 */
L_141E92D7:
    MEM32(edi + 0x4D0) = 0x70u; /* 0x141E92D7: mov dword ptr [edi + 0x4d0], 0x70 */
    goto L_141E92F9; /* 0x141E92E1: jmp 0x141e92f9 */
L_141E92E3:
    MEM32(edi + 0x4D0) = 0x30u; /* 0x141E92E3: mov dword ptr [edi + 0x4d0], 0x30 */
    goto L_141E92F9; /* 0x141E92ED: jmp 0x141e92f9 */
L_141E92EF:
    MEM32(edi + 0x4D0) = 0x10u; /* 0x141E92EF: mov dword ptr [edi + 0x4d0], 0x10 */
L_141E92F9:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x141E92F9: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E92FB: jmp 0x141e91ad */
L_141E9300:
    /* cmp eax, 0x98u */ /* 0x141E9300: cmp eax, 0x98 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E94AD; /* 0x141E9305: jg 0x141e94ad */
L_141E930B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E949E; /* 0x141E930B: je 0x141e949e */
L_141E9311:
    /* cmp eax, 0x92u */ /* 0x141E9311: cmp eax, 0x92 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x92u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E9469; /* 0x141E9316: jg 0x141e9469 */
L_141E931C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E93E2; /* 0x141E931C: je 0x141e93e2 */
L_141E9322:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x6Au; /* 0x141E9322: sub eax, 0x6a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E93D7; /* 0x141E9325: je 0x141e93d7 */
L_141E932B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x141E932B: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E93CC; /* 0x141E932E: je 0x141e93cc */
L_141E9334:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x141E9334: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E93B1; /* 0x141E9337: je 0x141e93b1 */
L_141E9339:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x17u; /* 0x141E9339: sub eax, 0x17 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E91CB; /* 0x141E933C: je 0x141e91cb */
L_141E9342:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9342: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E91A0; /* 0x141E9343: je 0x141e91a0 */
L_141E9349:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9349: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E934A: jne 0x141e95ed */
L_141E9350:
    eax = MEM32(esi); /* 0x141E9350: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9352: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4C8) = eax; /* 0x141E9354: mov dword ptr [edi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E935A: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E935D: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E935F: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E9361: mov dword ptr [edi + 0x4cc], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E9367: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E9367: shl eax, 2 */
    PUSH32(esp, eax); /* 0x141E936A: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E936B: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9370: pop ecx */
    MEM32(edi + 0x4D0) = eax; /* 0x141E9371: mov dword ptr [edi + 0x4d0], eax */
    /* test eax, eax */ /* 0x141E9377: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E938F; /* 0x141E9379: jne 0x141e938f */
L_141E937B:
    MEM32(ebp + (-0x24)) = 0x8007000Eu; /* 0x141E937B: mov dword ptr [ebp - 0x24], 0x8007000e */
    PUSH32(esp, 0x141EDD08u); /* 0x141E9382: push 0x141edd08 */
    eax = ebp + (-0x24); /* 0x141E9387: lea eax, [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_141E8FC9; /* 0x141E938A: jmp 0x141e8fc9 */
L_141E938F:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E938F: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x4CC); /* 0x141E9392: mov eax, dword ptr [edi + 0x4cc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E9398: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E9398: shl eax, 2 */
    PUSH32(esp, eax); /* 0x141E939B: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x141E939C: push dword ptr [esi] */
    PUSH32(esp, MEM32(edi + 0x4D0)); /* 0x141E939E: push dword ptr [edi + 0x4d0] */
L_141E93A4:
    RECOMP_CALL(sub_141EC9A4); /* 0x141E93A4: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E93A9: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E93AC: jmp 0x141e91ad */
L_141E93B1:
    eax = MEM32(esi); /* 0x141E93B1: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E93B3: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4C8) = eax; /* 0x141E93B5: mov dword ptr [edi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E93BB: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = edi + 0x8; /* 0x141E93BE: lea eax, [edi + 8] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E93C1: mov dword ptr [edi + 0x4cc], eax */
    RECOMP_BACKEDGE();
    goto L_141E9143; /* 0x141E93C7: jmp 0x141e9143 */
L_141E93CC:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E93CC: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E93CC: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x141E93CF: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E912C; /* 0x141E93D2: jmp 0x141e912c */
L_141E93D7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00FFF800u);
    ebx = ebx & 0x00FFF800u; /* 0x141E93D7: and ebx, 0xfff800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E924B; /* 0x141E93DD: jmp 0x141e924b */
L_141E93E2:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E93E2: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E93E2: shr ebx, 0xb */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    SET_LO8(ebx, LO8(ebx) & LO8(edx)); /* 0x141E93E5: and bl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x4D8) = (uint8_t)(LO8(ebx)); /* 0x141E93E7: mov byte ptr [edi + 0x4d8], bl */
    eax = MEM32(esi); /* 0x141E93ED: mov eax, dword ptr [esi] */
    SET_LO16(eax, MEM16(eax)); /* 0x141E93EF: mov ax, word ptr [eax] */
    MEM16(edi + 0x4C8) = (uint16_t)(LO16(eax)); /* 0x141E93F2: mov word ptr [edi + 0x4c8], ax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E93F9: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E93FC: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E93FE: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E9400: mov dword ptr [edi + 0x4cc], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E9406: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E9409: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM16(eax); /* 0x141E940B: movzx eax, word ptr [eax] */
    MEM32(edi + 0x4D0) = eax; /* 0x141E940E: mov dword ptr [edi + 0x4d0], eax */
    eax = MEM32(esi); /* 0x141E9414: mov eax, dword ptr [esi] */
    SET_LO16(eax, MEM16(eax + 0x2)); /* 0x141E9416: mov ax, word ptr [eax + 2] */
    MEM16(edi + 0x4CA) = (uint16_t)(LO16(eax)); /* 0x141E941A: mov word ptr [edi + 0x4ca], ax */
    eax = MEM32(edi + 0x4D0); /* 0x141E9421: mov eax, dword ptr [edi + 0x4d0] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E9427: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E9427: shl eax, 2 */
    PUSH32(esp, eax); /* 0x141E942A: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E942B: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9430: pop ecx */
    MEM32(edi + 0x4D4) = eax; /* 0x141E9431: mov dword ptr [edi + 0x4d4], eax */
    /* test eax, eax */ /* 0x141E9437: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E944F; /* 0x141E9439: jne 0x141e944f */
L_141E943B:
    MEM32(ebp + (-0x28)) = 0x8007000Eu; /* 0x141E943B: mov dword ptr [ebp - 0x28], 0x8007000e */
    PUSH32(esp, 0x141EDD08u); /* 0x141E9442: push 0x141edd08 */
    eax = ebp + (-0x28); /* 0x141E9447: lea eax, [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_141E8FC9; /* 0x141E944A: jmp 0x141e8fc9 */
L_141E944F:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E944F: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x4D0); /* 0x141E9452: mov eax, dword ptr [edi + 0x4d0] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E9458: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E9458: shl eax, 2 */
    PUSH32(esp, eax); /* 0x141E945B: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x141E945C: push dword ptr [esi] */
    PUSH32(esp, MEM32(edi + 0x4D4)); /* 0x141E945E: push dword ptr [edi + 0x4d4] */
    RECOMP_BACKEDGE();
    goto L_141E93A4; /* 0x141E9464: jmp 0x141e93a4 */
L_141E9469:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x93u; /* 0x141E9469: sub eax, 0x93 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9245; /* 0x141E946E: je 0x141e9245 */
L_141E9474:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9474: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9245; /* 0x141E9475: je 0x141e9245 */
L_141E947B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E947B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9493; /* 0x141E947C: je 0x141e9493 */
L_141E947E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E947E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E9488; /* 0x141E947F: je 0x141e9488 */
L_141E9481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9481: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E9482: jne 0x141e95ed */
L_141E9488:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E9488: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E9488: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    ebx = ebx & 7; /* 0x141E948B: and ebx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E924B; /* 0x141E948E: jmp 0x141e924b */
L_141E9493:
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x141E9493: shr ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ebx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 11u; /* 0x141E9493: shr ebx, 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x141E9496: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E924B; /* 0x141E9499: jmp 0x141e924b */
L_141E949E:
    eax = MEM32(esi); /* 0x141E949E: mov eax, dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x141E94A0: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4C8) = _v; } /* 0x141E94A2: fstp dword ptr [edi + 0x4c8] */
    RECOMP_BACKEDGE();
    goto L_141E91AA; /* 0x141E94A8: jmp 0x141e91aa */
L_141E94AD:
    /* cmp eax, 0xBEu */ /* 0x141E94AD: cmp eax, 0xbe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E95E2; /* 0x141E94B2: jg 0x141e95e2 */
L_141E94B8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E95A5; /* 0x141E94B8: je 0x141e95a5 */
L_141E94BE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x99u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x99u; /* 0x141E94BE: sub eax, 0x99 */
    _flag_k = FK_CMP;
    /* cmp eax, 9 */ /* 0x141E94C3: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E95ED; /* 0x141E94C6: ja 0x141e95ed */
L_141E94CC:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x141E9655)); goto _ljump; }
L_141E94D3:
    eax = MEM32(esi); /* 0x141E94D3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E94D5: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4C8) = eax; /* 0x141E94D7: mov dword ptr [edi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E94DD: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E94E0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E94E2: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E94E4: mov dword ptr [edi + 0x4cc], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E94EA: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E94ED: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E94EF: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4D0) = eax; /* 0x141E94F1: mov dword ptr [edi + 0x4d0], eax */
    RECOMP_BACKEDGE();
    goto L_141E91AA; /* 0x141E94F7: jmp 0x141e91aa */
L_141E94FC:
    eax = ebx; /* 0x141E94FC: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x141E94FE: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x141E94FE: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x141E9501: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4C8) = eax; /* 0x141E9504: mov dword ptr [edi + 0x4c8], eax */
    eax = edi + 0x8; /* 0x141E950A: lea eax, [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x141E950D: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141E9513: push eax */
    ecx = esi; /* 0x141E9514: mov ecx, esi */
    MEM32(edi + 0x4DC) = ebx; /* 0x141E9516: mov dword ptr [edi + 0x4dc], ebx */
    RECOMP_CALL(sub_141E85F1); /* 0x141E951C: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x141E9521: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9523: mov eax, dword ptr [eax] */
    PUSH32(esp, 0xFu); /* 0x141E9525: push 0xf */
    ecx = POP32_VAL(esp); /* 0x141E9527: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9528: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4CC) = eax; /* 0x141E952A: mov dword ptr [edi + 0x4cc], eax */
    eax = MEM32(esi); /* 0x141E9530: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9532: mov eax, dword ptr [eax] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x141E9534: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x141E9534: shr eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9537: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D0) = eax; /* 0x141E9539: mov dword ptr [edi + 0x4d0], eax */
    eax = MEM32(esi); /* 0x141E953F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9541: mov eax, dword ptr [eax] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x141E9543: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x141E9543: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9546: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D4) = eax; /* 0x141E9548: mov dword ptr [edi + 0x4d4], eax */
    eax = MEM32(esi); /* 0x141E954E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9550: mov eax, dword ptr [eax] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x141E9552: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x141E9552: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E9555: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4D8) = eax; /* 0x141E9557: mov dword ptr [edi + 0x4d8], eax */
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E955D: jmp 0x141e91ad */
L_141E9562:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    ebx = ebx & 0x00010000u; /* 0x141E9562: and ebx, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E91C5; /* 0x141E9568: jmp 0x141e91c5 */
L_141E956D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00810000u);
    ebx = ebx & 0x00810000u; /* 0x141E956D: and ebx, 0x810000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4CC) = ebx; /* 0x141E9573: mov dword ptr [edi + 0x4cc], ebx */
    RECOMP_BACKEDGE();
    goto L_141E9195; /* 0x141E9579: jmp 0x141e9195 */
L_141E957E:
    eax = edi + 0x8; /* 0x141E957E: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x141E9581: push eax */
    ecx = esi; /* 0x141E9582: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E9584: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x141E9589: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E958B: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4C8) = eax; /* 0x141E958D: mov dword ptr [edi + 0x4c8], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x141E9593: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x141E9596: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x141E9598: mov eax, dword ptr [eax] */
    MEM32(edi + 0x4CC) = eax; /* 0x141E959A: mov dword ptr [edi + 0x4cc], eax */
    RECOMP_BACKEDGE();
    goto L_141E91AA; /* 0x141E95A0: jmp 0x141e91aa */
L_141E95A5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7800u);
    ebx = ebx & 0x7800u; /* 0x141E95A5: and ebx, 0x7800 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x141E95AB: mov eax, ebx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x141E95AD: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x141E95AD: shr eax, 0xb */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(edx)); /* 0x141E95B0: and al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x4C8) = (uint8_t)(LO8(eax)); /* 0x141E95B2: mov byte ptr [edi + 0x4c8], al */
    eax = ebx; /* 0x141E95B8: mov eax, ebx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x141E95BA: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x141E95BA: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(edx)); /* 0x141E95BD: and al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x4C9) = (uint8_t)(LO8(eax)); /* 0x141E95BF: mov byte ptr [edi + 0x4c9], al */
    eax = ebx; /* 0x141E95C5: mov eax, ebx */
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x141E95C7: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x141E95C7: shr eax, 0xd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(edx)); /* 0x141E95CA: and al, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (14u) _cf = (((ebx) >> 13) & 1u); /* 0x141E95CC: shr ebx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((ebx >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 14u; /* 0x141E95CC: shr ebx, 0xe */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    SET_LO8(ebx, LO8(ebx) & LO8(edx)); /* 0x141E95CF: and bl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edi + 0x4CB) = (uint8_t)(LO8(eax)); /* 0x141E95D1: mov byte ptr [edi + 0x4cb], al */
    MEM8(edi + 0x4CA) = (uint8_t)(LO8(ebx)); /* 0x141E95D7: mov byte ptr [edi + 0x4ca], bl */
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E95DD: jmp 0x141e91ad */
L_141E95E2:
    /* cmp eax, 0xCEu */ /* 0x141E95E2: cmp eax, 0xce */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E91A0; /* 0x141E95E7: je 0x141e91a0 */
L_141E95ED:
    /* cmp MEM32(edi + 0x488), ecx */ /* 0x141E95ED: cmp dword ptr [edi + 0x488], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x488)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E91AD; /* 0x141E95F3: jbe 0x141e91ad */
L_141E95F9:
    eax = edi + 0x8; /* 0x141E95F9: lea eax, [edi + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x141E95FC: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E95FF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9601:
    PUSH32(esp, eax); /* 0x141E9601: push eax */
    ecx = esi; /* 0x141E9602: mov ecx, esi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E9604: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x141E9609: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E960C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xC0u; /* 0x141E960D: add eax, 0xc0 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x141E9612: mov dword ptr [ebp - 0x18], eax */
    /* cmp ebx, MEM32(edi + 0x488) */ /* 0x141E9615: cmp ebx, dword ptr [edi + 0x488] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x488));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9601; /* 0x141E961B: jb 0x141e9601 */
L_141E961D:
    RECOMP_BACKEDGE();
    goto L_141E91AD; /* 0x141E961D: jmp 0x141e91ad */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x141E9195u: goto L_141E9195;
      case 0x141E91A0u: goto L_141E91A0;
      case 0x141E91BFu: goto L_141E91BF;
      case 0x141E91CBu: goto L_141E91CB;
      case 0x141E9245u: goto L_141E9245;
      case 0x141E9269u: goto L_141E9269;
      case 0x141E9282u: goto L_141E9282;
      case 0x141E94D3u: goto L_141E94D3;
      case 0x141E94FCu: goto L_141E94FC;
      case 0x141E9562u: goto L_141E9562;
      case 0x141E956Du: goto L_141E956D;
      case 0x141E957Eu: goto L_141E957E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
