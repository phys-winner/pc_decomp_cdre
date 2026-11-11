#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110225C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110225C9u);

L_110225C9:
    PUSH32(esp, ebp); /* 0x110225C9: push ebp */
    ebp = esp; /* 0x110225CA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110225CC: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x110225CD: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x110225D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110225E2; /* 0x110225D2: je 0x110225e2 */
L_110225D4:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110225D4: push dword ptr [ebp + 0x18] */
    ecx = ebp + 0x10; /* 0x110225D7: lea ecx, [ebp + 0x10] */
    RECOMP_CALL(sub_1101776A); /* 0x110225DA: call 0x1101776a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110225DF: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110225D4; /* 0x110225E0: jne 0x110225d4 */
L_110225E2:
    eax = MEM32(ebp + 0xC); /* 0x110225E2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x110225E5: mov ecx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x110225E8: pop esi */
    MEM32(eax) = ecx; /* 0x110225E9: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x110225EB: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x110225EE: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x110225F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110225F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110225F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110225F3u);

L_110225F3:
    PUSH32(esp, ebp); /* 0x110225F3: push ebp */
    ebp = esp; /* 0x110225F4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110225F6: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x110225F7: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x110225FA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102260C; /* 0x110225FC: je 0x1102260c */
L_110225FE:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110225FE: push dword ptr [ebp + 0x18] */
    ecx = ebp + 0x10; /* 0x11022601: lea ecx, [ebp + 0x10] */
    RECOMP_CALL(sub_1101778E); /* 0x11022604: call 0x1101778e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11022609: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110225FE; /* 0x1102260A: jne 0x110225fe */
L_1102260C:
    eax = MEM32(ebp + 0xC); /* 0x1102260C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1102260F: mov ecx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x11022612: pop esi */
    MEM32(eax) = ecx; /* 0x11022613: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x11022615: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x11022618: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1102261B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102261C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102261D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102261Du);

L_1102261D:
    PUSH32(esp, ebp); /* 0x1102261D: push ebp */
    ebp = esp; /* 0x1102261E: mov ebp, esp */
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x11022620: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x11022624: push esi */
    PUSH32(esp, edi); /* 0x11022625: push edi */
    edi = MEM32(ebp + 0xC); /* 0x11022626: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x11022629: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102264D; /* 0x1102262B: je 0x1102264d */
L_1102262D:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1102262D: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102264D; /* 0x11022631: jb 0x1102264d */
L_11022633:
    PUSH32(esp, ebx); /* 0x11022633: push ebx */
    ebx = MEM32(esi); /* 0x11022634: mov ebx, dword ptr [esi] */
    /* test edi, edi */ /* 0x11022636: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022645; /* 0x11022638: je 0x11022645 */
L_1102263A:
    PUSH32(esp, edi); /* 0x1102263A: push edi */
    PUSH32(esp, ebx); /* 0x1102263B: push ebx */
    PUSH32(esp, esi); /* 0x1102263C: push esi */
    RECOMP_CALL(sub_1102294B); /* 0x1102263D: call 0x1102294b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022642: add esp, 0xc */
    _flag_k = FK_ADD;
L_11022645:
    PUSH32(esp, ebx); /* 0x11022645: push ebx */
    RECOMP_CALL(sub_1103B126); /* 0x11022646: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102264B: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1102264C: pop ebx */
L_1102264D:
    MEM32(esi + 0x10) = edi; /* 0x1102264D: mov dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11022650: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x11022652: mov dword ptr [esi + 0x14], 7 */
    MEM16(esi + edi * 2) = (uint16_t)(LO16(eax)); /* 0x11022659: mov word ptr [esi + edi*2], ax */
    edi = POP32_VAL(esp); /* 0x1102265D: pop edi */
    esi = POP32_VAL(esp); /* 0x1102265E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102265F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11022660: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11022663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022663u);

L_11022663:
    PUSH32(esp, esi); /* 0x11022663: push esi */
    esi = ecx; /* 0x11022664: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x11022666: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1103B312); /* 0x11022669: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1102266E: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1103B312); /* 0x11022671: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022676: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_1103B312); /* 0x11022679: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102267E: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x11022681: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022682: ret  */
    RECOMP_REGS_OUT();
}

void sub_11022683(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022683u);

L_11022683:
    PUSH32(esp, esi); /* 0x11022683: push esi */
    esi = ecx; /* 0x11022684: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x11022686: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1103B312); /* 0x11022689: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1102268E: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1103B312); /* 0x11022691: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x11022696: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1103B312); /* 0x11022699: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102269E: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x110226A1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110226A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110226A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110226A3u);

L_110226A3:
    PUSH32(esp, ebp); /* 0x110226A3: push ebp */
    ebp = esp; /* 0x110226A4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110226A6: push esi */
    esi = ecx; /* 0x110226A7: mov esi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x110226A9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x110226AC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110226AD: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x10); /* 0x110226B0: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x110226B3: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x110226B5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110226FB; /* 0x110226B7: jbe 0x110226fb */
L_110226B9:
    /* test edi, edi */ /* 0x110226B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110226F3; /* 0x110226BB: je 0x110226f3 */
L_110226BD:
    PUSH32(esp, ebx); /* 0x110226BD: push ebx */
    ebx = ecx + edi; /* 0x110226BE: lea ebx, [ecx + edi] */
    ecx = esi; /* 0x110226C1: mov ecx, esi */
    PUSH32(esp, 0); /* 0x110226C3: push 0 */
    PUSH32(esp, ebx); /* 0x110226C5: push ebx */
    RECOMP_CALL(sub_11021737); /* 0x110226C6: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110226CB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110226F2; /* 0x110226CD: je 0x110226f2 */
L_110226CF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110226CF: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x110226D2: mov ecx, esi */
    PUSH32(esp, edi); /* 0x110226D4: push edi */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x110226D5: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1101CF95); /* 0x110226D8: call 0x1101cf95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110226DD: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ebx; /* 0x110226E1: mov dword ptr [esi + 0x10], ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_110226EA; /* 0x110226E4: jb 0x110226ea */
L_110226E6:
    eax = MEM32(esi); /* 0x110226E6: mov eax, dword ptr [esi] */
    goto L_110226EC; /* 0x110226E8: jmp 0x110226ec */
L_110226EA:
    eax = esi; /* 0x110226EA: mov eax, esi */
L_110226EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110226EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(ecx)); /* 0x110226EE: mov word ptr [eax + ebx*2], cx */
L_110226F2:
    ebx = POP32_VAL(esp); /* 0x110226F2: pop ebx */
L_110226F3:
    edi = POP32_VAL(esp); /* 0x110226F3: pop edi */
    eax = esi; /* 0x110226F4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110226F6: pop esi */
    ebp = POP32_VAL(esp); /* 0x110226F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110226F8: ret 8 */
L_110226FB:
    PUSH32(esp, 0x11004948u); /* 0x110226FB: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11022700: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11022705u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11022706(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022706u);

L_11022706:
    PUSH32(esp, ebp); /* 0x11022706: push ebp */
    ebp = esp; /* 0x11022707: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11022709: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102270A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102270D: push esi */
    esi = ecx; /* 0x1102270E: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x11022710: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11022713: push edi */
    eax = MEM32(ebx + 0x10); /* 0x11022714: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, ecx */ /* 0x11022717: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022796; /* 0x11022719: jb 0x11022796 */
L_1102271B:
    edi = MEM32(ebp + 0x10); /* 0x1102271B: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1102271E: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x11022720: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11022726; /* 0x11022722: jae 0x11022726 */
L_11022724:
    edi = eax; /* 0x11022724: mov edi, eax */
L_11022726:
    ecx = MEM32(esi + 0x10); /* 0x11022726: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11022729: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1102272C: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x1102272E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110227A0; /* 0x11022730: jbe 0x110227a0 */
L_11022732:
    /* test edi, edi */ /* 0x11022732: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102278D; /* 0x11022734: je 0x1102278d */
L_11022736:
    eax = ecx + edi; /* 0x11022736: lea eax, [ecx + edi] */
    ecx = esi; /* 0x11022739: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1102273B: push 0 */
    PUSH32(esp, eax); /* 0x1102273D: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1102273E: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_11021737); /* 0x11022741: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022746: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102278D; /* 0x11022748: je 0x1102278d */
L_1102274A:
    /* cmp MEM32(ebx + 0x14), 8 */ /* 0x1102274A: cmp dword ptr [ebx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022752; /* 0x1102274E: jb 0x11022752 */
L_11022750:
    ebx = MEM32(ebx); /* 0x11022750: mov ebx, dword ptr [ebx] */
L_11022752:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11022752: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102275C; /* 0x11022756: jb 0x1102275c */
L_11022758:
    ecx = MEM32(esi); /* 0x11022758: mov ecx, dword ptr [esi] */
    goto L_1102275E; /* 0x1102275A: jmp 0x1102275e */
L_1102275C:
    ecx = esi; /* 0x1102275C: mov ecx, esi */
L_1102275E:
    eax = MEM32(ebp + 0xC); /* 0x1102275E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11022761: push edi */
    eax = ebx + eax * 2; /* 0x11022762: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x11022765: push eax */
    eax = MEM32(esi + 0x10); /* 0x11022766: mov eax, dword ptr [esi + 0x10] */
    eax = ecx + eax * 2; /* 0x11022769: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x1102276C: push eax */
    RECOMP_CALL(sub_1102294B); /* 0x1102276D: call 0x1102294b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11022772: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022775: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11022778: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x1102277C: mov dword ptr [esi + 0x10], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11022785; /* 0x1102277F: jb 0x11022785 */
L_11022781:
    eax = MEM32(esi); /* 0x11022781: mov eax, dword ptr [esi] */
    goto L_11022787; /* 0x11022783: jmp 0x11022787 */
L_11022785:
    eax = esi; /* 0x11022785: mov eax, esi */
L_11022787:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11022787: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x11022789: mov word ptr [eax + ecx*2], dx */
L_1102278D:
    edi = POP32_VAL(esp); /* 0x1102278D: pop edi */
    eax = esi; /* 0x1102278E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11022790: pop esi */
    ebx = POP32_VAL(esp); /* 0x11022791: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11022792: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11022793: ret 0xc */
L_11022796:
    PUSH32(esp, 0x11004958u); /* 0x11022796: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x1102279B: call 0x11013a0c */
    RECOMP_FLAGS_IN();
L_110227A0:
    PUSH32(esp, 0x11004948u); /* 0x110227A0: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x110227A5: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110227AAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110227AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110227ABu);

L_110227AB:
    PUSH32(esp, ebp); /* 0x110227AB: push ebp */
    ebp = esp; /* 0x110227AC: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x110227AE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110227B1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110227B2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110227B5: push esi */
    PUSH32(esp, edi); /* 0x110227B6: push edi */
    esi = ecx; /* 0x110227B7: mov esi, ecx */
    edi = MEM32(ebx + 0x10); /* 0x110227B9: mov edi, dword ptr [ebx + 0x10] */
    /* cmp edi, eax */ /* 0x110227BC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022834; /* 0x110227BE: jb 0x11022834 */
L_110227C0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x110227C0: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x110227C2: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110227CA; /* 0x110227C5: jae 0x110227ca */
L_110227C7:
    edi = MEM32(ebp + 0x10); /* 0x110227C7: mov edi, dword ptr [ebp + 0x10] */
L_110227CA:
    /* cmp esi, ebx */ /* 0x110227CA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110227E5; /* 0x110227CC: jne 0x110227e5 */
L_110227CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x110227CE: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110227D0: push eax */
    RECOMP_CALL(sub_110278E7); /* 0x110227D1: call 0x110278e7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110227D6: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x110227D9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110227DB: push eax */
    PUSH32(esp, 0); /* 0x110227DC: push 0 */
    RECOMP_CALL(sub_1102791A); /* 0x110227DE: call 0x1102791a */
    RECOMP_FLAGS_IN();
    goto L_1102282B; /* 0x110227E3: jmp 0x1102282b */
L_110227E5:
    PUSH32(esp, 0); /* 0x110227E5: push 0 */
    PUSH32(esp, edi); /* 0x110227E7: push edi */
    RECOMP_CALL(sub_11021737); /* 0x110227E8: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110227ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102282B; /* 0x110227EF: je 0x1102282b */
L_110227F1:
    /* cmp MEM32(ebx + 0x14), 8 */ /* 0x110227F1: cmp dword ptr [ebx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110227F9; /* 0x110227F5: jb 0x110227f9 */
L_110227F7:
    ebx = MEM32(ebx); /* 0x110227F7: mov ebx, dword ptr [ebx] */
L_110227F9:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110227F9: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022803; /* 0x110227FD: jb 0x11022803 */
L_110227FF:
    ecx = MEM32(esi); /* 0x110227FF: mov ecx, dword ptr [esi] */
    goto L_11022805; /* 0x11022801: jmp 0x11022805 */
L_11022803:
    ecx = esi; /* 0x11022803: mov ecx, esi */
L_11022805:
    eax = MEM32(ebp + 0xC); /* 0x11022805: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11022808: push edi */
    eax = ebx + eax * 2; /* 0x11022809: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1102280C: push eax */
    PUSH32(esp, ecx); /* 0x1102280D: push ecx */
    RECOMP_CALL(sub_1102294B); /* 0x1102280E: call 0x1102294b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022813: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = edi; /* 0x11022816: mov dword ptr [esi + 0x10], edi */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11022819: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022823; /* 0x1102281D: jb 0x11022823 */
L_1102281F:
    eax = MEM32(esi); /* 0x1102281F: mov eax, dword ptr [esi] */
    goto L_11022825; /* 0x11022821: jmp 0x11022825 */
L_11022823:
    eax = esi; /* 0x11022823: mov eax, esi */
L_11022825:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11022825: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x11022827: mov word ptr [eax + edi*2], cx */
L_1102282B:
    edi = POP32_VAL(esp); /* 0x1102282B: pop edi */
    eax = esi; /* 0x1102282C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102282E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102282F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11022830: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11022831: ret 0xc */
L_11022834:
    PUSH32(esp, 0x11004958u); /* 0x11022834: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x11022839: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102283Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102283F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102283Fu);

L_1102283F:
    PUSH32(esp, ebp); /* 0x1102283F: push ebp */
    ebp = esp; /* 0x11022840: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11022842: push esi */
    PUSH32(esp, edi); /* 0x11022843: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11022844: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x11022847: mov esi, ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x11022849: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022884; /* 0x1102284C: je 0x11022884 */
L_1102284E:
    PUSH32(esp, 0); /* 0x1102284E: push 0 */
    PUSH32(esp, edi); /* 0x11022850: push edi */
    RECOMP_CALL(sub_11021737); /* 0x11022851: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022856: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102287C; /* 0x11022858: je 0x1102287c */
L_1102285A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102285A: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1102285D: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1102285F: push edi */
    PUSH32(esp, 0); /* 0x11022860: push 0 */
    RECOMP_CALL(sub_1101CF95); /* 0x11022862: call 0x1101cf95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11022867: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x1102286B: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_11022874; /* 0x1102286E: jb 0x11022874 */
L_11022870:
    eax = MEM32(esi); /* 0x11022870: mov eax, dword ptr [esi] */
    goto L_11022876; /* 0x11022872: jmp 0x11022876 */
L_11022874:
    eax = esi; /* 0x11022874: mov eax, esi */
L_11022876:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11022876: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x11022878: mov word ptr [eax + edi*2], cx */
L_1102287C:
    edi = POP32_VAL(esp); /* 0x1102287C: pop edi */
    eax = esi; /* 0x1102287D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102287F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11022880: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11022881: ret 8 */
L_11022884:
    PUSH32(esp, 0x11004948u); /* 0x11022884: push 0x11004948 */
    RECOMP_CALL(sub_110139DD); /* 0x11022889: call 0x110139dd */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1102288Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1102288F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102288Fu);

L_1102288F:
    PUSH32(esp, ebp); /* 0x1102288F: push ebp */
    ebp = esp; /* 0x11022890: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11022892: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11022893: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11022896: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11022898: push edi */
    edi = ecx; /* 0x11022899: mov edi, ecx */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1102289B: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110228A8; /* 0x1102289E: je 0x110228a8 */
L_110228A0:
    PUSH32(esp, esi); /* 0x110228A0: push esi */
    RECOMP_ICALL(MEM32(0x11069110)); /* 0x110228A1: call dword ptr [0x11069110] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110228A7: pop ecx */
L_110228A8:
    PUSH32(esp, eax); /* 0x110228A8: push eax */
    PUSH32(esp, esi); /* 0x110228A9: push esi */
    ecx = edi; /* 0x110228AA: mov ecx, edi */
    RECOMP_CALL(sub_110228B7); /* 0x110228AC: call 0x110228b7 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x110228B1: pop edi */
    esi = POP32_VAL(esp); /* 0x110228B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x110228B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110228B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110228B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110228B7u);

L_110228B7:
    PUSH32(esp, ebp); /* 0x110228B7: push ebp */
    ebp = esp; /* 0x110228B8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110228BA: push esi */
    PUSH32(esp, edi); /* 0x110228BB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110228BC: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x110228BF: mov esi, ecx */
    PUSH32(esp, edi); /* 0x110228C1: push edi */
    RECOMP_CALL(sub_11021C8B); /* 0x110228C2: call 0x11021c8b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110228C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110228E9; /* 0x110228C9: je 0x110228e9 */
L_110228CB:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110228CB: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110228D5; /* 0x110228CF: jb 0x110228d5 */
L_110228D1:
    eax = MEM32(esi); /* 0x110228D1: mov eax, dword ptr [esi] */
    goto L_110228D7; /* 0x110228D3: jmp 0x110228d7 */
L_110228D5:
    eax = esi; /* 0x110228D5: mov eax, esi */
L_110228D7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110228D7: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x110228DA: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x110228DC: mov ecx, esi */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x110228DE: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, edi); /* 0x110228E0: push edi */
    PUSH32(esp, esi); /* 0x110228E1: push esi */
    RECOMP_CALL(sub_110227AB); /* 0x110228E2: call 0x110227ab */
    RECOMP_FLAGS_IN();
    goto L_1102292A; /* 0x110228E7: jmp 0x1102292a */
L_110228E9:
    PUSH32(esp, ebx); /* 0x110228E9: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x110228EA: mov ebx, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x110228ED: mov ecx, esi */
    PUSH32(esp, 0); /* 0x110228EF: push 0 */
    PUSH32(esp, ebx); /* 0x110228F1: push ebx */
    RECOMP_CALL(sub_11021737); /* 0x110228F2: call 0x11021737 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110228F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022927; /* 0x110228F9: je 0x11022927 */
L_110228FB:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110228FB: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11022905; /* 0x110228FF: jb 0x11022905 */
L_11022901:
    eax = MEM32(esi); /* 0x11022901: mov eax, dword ptr [esi] */
    goto L_11022907; /* 0x11022903: jmp 0x11022907 */
L_11022905:
    eax = esi; /* 0x11022905: mov eax, esi */
L_11022907:
    PUSH32(esp, ebx); /* 0x11022907: push ebx */
    PUSH32(esp, edi); /* 0x11022908: push edi */
    PUSH32(esp, eax); /* 0x11022909: push eax */
    RECOMP_CALL(sub_1102294B); /* 0x1102290A: call 0x1102294b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1102290F: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = ebx; /* 0x11022912: mov dword ptr [esi + 0x10], ebx */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11022915: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102291F; /* 0x11022919: jb 0x1102291f */
L_1102291B:
    eax = MEM32(esi); /* 0x1102291B: mov eax, dword ptr [esi] */
    goto L_11022921; /* 0x1102291D: jmp 0x11022921 */
L_1102291F:
    eax = esi; /* 0x1102291F: mov eax, esi */
L_11022921:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11022921: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(ecx)); /* 0x11022923: mov word ptr [eax + ebx*2], cx */
L_11022927:
    eax = esi; /* 0x11022927: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x11022929: pop ebx */
L_1102292A:
    edi = POP32_VAL(esp); /* 0x1102292A: pop edi */
    esi = POP32_VAL(esp); /* 0x1102292B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102292C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1102292D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11022930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022930u);

L_11022930:
    PUSH32(esp, ebp); /* 0x11022930: push ebp */
    ebp = esp; /* 0x11022931: mov ebp, esp */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11022933: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x11022937: mov eax, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102293F; /* 0x1102293A: jne 0x1102293f */
L_1102293C:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1102293C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102293F:
    PUSH32(esp, 0); /* 0x1102293F: push 0 */
    PUSH32(esp, eax); /* 0x11022941: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x11022942: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x11022947: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11022948: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102294B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102294Bu);

L_1102294B:
    PUSH32(esp, ebp); /* 0x1102294B: push ebp */
    ebp = esp; /* 0x1102294C: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1102294E: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x11022951: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102295A; /* 0x11022953: jne 0x1102295a */
L_11022955:
    eax = MEM32(ebp + 0x8); /* 0x11022955: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x11022958: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11022959: ret  */
L_1102295A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1102295A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102295C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102295D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11022960: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B300); /* 0x11022963: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022968: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1102296B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102296C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102296D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102296Du);

L_1102296D:
    PUSH32(esp, ebp); /* 0x1102296D: push ebp */
    ebp = esp; /* 0x1102296E: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11022970: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11022973: push esi */
    esi = ecx; /* 0x11022974: mov esi, ecx */
    PUSH32(esp, edx); /* 0x11022976: push edx */
    eax = MEM32(edx + 0x3C); /* 0x11022977: mov eax, dword ptr [edx + 0x3c] */
    MEM32(esi + 0x3C) = eax; /* 0x1102297A: mov dword ptr [esi + 0x3c], eax */
    SET_LO8(eax, MEM8(edx + 0x40)); /* 0x1102297D: mov al, byte ptr [edx + 0x40] */
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x11022980: mov byte ptr [esi + 0x40], al */
    RECOMP_CALL(sub_1100FA2E); /* 0x11022983: call 0x1100fa2e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11022988: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1102298A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102298B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102298C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1102298F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102298Fu);

L_1102298F:
    PUSH32(esp, ebp); /* 0x1102298F: push ebp */
    ebp = esp; /* 0x11022990: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11022992: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11022995: push esi */
    esi = ecx; /* 0x11022996: mov esi, ecx */
    PUSH32(esp, edx); /* 0x11022998: push edx */
    eax = MEM32(edx + 0x3C); /* 0x11022999: mov eax, dword ptr [edx + 0x3c] */
    MEM32(esi + 0x3C) = eax; /* 0x1102299C: mov dword ptr [esi + 0x3c], eax */
    SET_LO16(eax, MEM16(edx + 0x40)); /* 0x1102299F: mov ax, word ptr [edx + 0x40] */
    MEM16(esi + 0x40) = (uint16_t)(LO16(eax)); /* 0x110229A3: mov word ptr [esi + 0x40], ax */
    RECOMP_CALL(sub_1100FA2E); /* 0x110229A7: call 0x1100fa2e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110229AC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110229AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x110229AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110229B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110229B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110229B3u);

L_110229B3:
    SET_LO8(eax, MEM8(ecx + 0xC)); /* 0x110229B3: mov al, byte ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110229B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110229B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110229B7u);

L_110229B7:
    PUSH32(esp, ebp); /* 0x110229B7: push ebp */
    ebp = esp; /* 0x110229B8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110229BA: push ecx */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x110229BB: push dword ptr [ecx + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x110229BE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110229C1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11016CBD); /* 0x110229C5: call 0x11016cbd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110229CA: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x110229CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110229CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110229D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110229D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110229D3u);

L_110229D3:
    PUSH32(esp, 0x38u); /* 0x110229D3: push 0x38 */
    eax = 0x1103E63Cu; /* 0x110229D5: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x110229DA: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110229DF: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x110229E1: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x110229E4: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x110229E7: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x110229E9: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x110229EC: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110229F0: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110229F3: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110229F6: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x110229F9: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110229FC: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110229FD: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022A02: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11022A06: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022A07: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11022A0A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022A0D: push eax */
    eax = ebp + 0xC; /* 0x11022A0E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022A11: push eax */
    eax = ebp + (-0x30); /* 0x11022A12: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022A15: push eax */
    PUSH32(esp, edi); /* 0x11022A16: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x11022A17: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11022A1C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11022A20: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022A23: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022A26: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022A28: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11022A2D: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11022A31: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022A39; /* 0x11022A34: je 0x11022a39 */
L_11022A36:
    edi = ebp + (-0x30); /* 0x11022A36: lea edi, [ebp - 0x30] */
L_11022A39:
    eax = ebp + (-0x34); /* 0x11022A39: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11022A3C: push eax */
    PUSH32(esp, esi); /* 0x11022A3D: push esi */
    eax = ebp + (-0x38); /* 0x11022A3E: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11022A41: push eax */
    PUSH32(esp, edi); /* 0x11022A42: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x11022A43: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022A48: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x11022A4B: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x11022A4E: mov esi, eax */
    eax = ebp + 0x14; /* 0x11022A50: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022A53: push eax */
    RECOMP_CALL(sub_11027871); /* 0x11022A54: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022A59: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022A60; /* 0x11022A5B: je 0x11022a60 */
L_11022A5D:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11022A5D: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022A60:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11022A60: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022A83; /* 0x11022A63: je 0x11022a83 */
L_11022A65:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11022A65: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022A83; /* 0x11022A69: jne 0x11022a83 */
L_11022A6B:
    /* cmp esi, 0xFFFFu */ /* 0x11022A6B: cmp esi, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11022A83; /* 0x11022A71: ja 0x11022a83 */
L_11022A73:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11022A73: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022A7B; /* 0x11022A77: jne 0x11022a7b */
L_11022A79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11022A79: neg esi */
    _flag_k = FK_CMP;
L_11022A7B:
    eax = MEM32(ebp + (-0x40)); /* 0x11022A7B: mov eax, dword ptr [ebp - 0x40] */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x11022A7E: mov word ptr [eax], si */
    goto L_11022A86; /* 0x11022A81: jmp 0x11022a86 */
L_11022A83:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11022A83: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022A86:
    eax = MEM32(ebp + (-0x3C)); /* 0x11022A86: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11022A89: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11022A8C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022A8E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11022A91: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11022A94: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022A99: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022A9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022A9Cu);

L_11022A9C:
    PUSH32(esp, 0x38u); /* 0x11022A9C: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11022A9E: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022AA3: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11022AA8: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11022AAA: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11022AAD: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11022AB0: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11022AB2: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11022AB5: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11022AB9: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11022ABC: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11022ABF: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11022AC2: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11022AC5: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11022AC6: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022ACB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11022ACF: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022AD0: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11022AD3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022AD6: push eax */
    eax = ebp + 0xC; /* 0x11022AD7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022ADA: push eax */
    eax = ebp + (-0x30); /* 0x11022ADB: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022ADE: push eax */
    PUSH32(esp, edi); /* 0x11022ADF: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x11022AE0: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11022AE5: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11022AE9: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022AEC: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022AEF: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022AF1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11022AF6: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11022AFA: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022B02; /* 0x11022AFD: je 0x11022b02 */
L_11022AFF:
    edi = ebp + (-0x30); /* 0x11022AFF: lea edi, [ebp - 0x30] */
L_11022B02:
    eax = ebp + (-0x34); /* 0x11022B02: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11022B05: push eax */
    PUSH32(esp, esi); /* 0x11022B06: push esi */
    eax = ebp + (-0x38); /* 0x11022B07: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11022B0A: push eax */
    PUSH32(esp, edi); /* 0x11022B0B: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x11022B0C: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022B11: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x11022B14: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x11022B17: mov esi, eax */
    eax = ebp + 0x14; /* 0x11022B19: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022B1C: push eax */
    RECOMP_CALL(sub_11027871); /* 0x11022B1D: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022B22: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022B29; /* 0x11022B24: je 0x11022b29 */
L_11022B26:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11022B26: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022B29:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11022B29: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022B48; /* 0x11022B2C: je 0x11022b48 */
L_11022B2E:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11022B2E: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022B48; /* 0x11022B32: jne 0x11022b48 */
L_11022B34:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x11022B34: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11022B48; /* 0x11022B37: ja 0x11022b48 */
L_11022B39:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11022B39: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022B41; /* 0x11022B3D: jne 0x11022b41 */
L_11022B3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11022B3F: neg esi */
    _flag_k = FK_CMP;
L_11022B41:
    eax = MEM32(ebp + (-0x40)); /* 0x11022B41: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11022B44: mov dword ptr [eax], esi */
    goto L_11022B4B; /* 0x11022B46: jmp 0x11022b4b */
L_11022B48:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11022B48: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022B4B:
    eax = MEM32(ebp + (-0x3C)); /* 0x11022B4B: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11022B4E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11022B51: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022B53: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11022B56: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11022B59: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022B5E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022B61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022B61u);

L_11022B61:
    PUSH32(esp, 0x38u); /* 0x11022B61: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11022B63: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022B68: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11022B6D: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11022B6F: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11022B72: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11022B75: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11022B77: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11022B7A: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11022B7E: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11022B81: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11022B84: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11022B87: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11022B8A: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11022B8B: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022B90: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11022B94: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11022B97: push ecx */
    PUSH32(esp, eax); /* 0x11022B98: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022B99: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11022B9C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022B9F: push eax */
    eax = ebp + 0xC; /* 0x11022BA0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022BA3: push eax */
    eax = ebp + (-0x30); /* 0x11022BA4: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022BA7: push eax */
    PUSH32(esp, edi); /* 0x11022BA8: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x11022BA9: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022BAE: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11022BB1: push eax */
    eax = ebp + (-0x38); /* 0x11022BB2: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11022BB5: push eax */
    eax = ebp + (-0x30); /* 0x11022BB6: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022BB9: push eax */
    RECOMP_CALL(sub_11030E1D); /* 0x11022BBA: call 0x11030e1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11022BBF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11022BC3: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022BC6: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022BC9: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022BCB: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11022BD0: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022BD3: push eax */
    ecx = ebp + 0xC; /* 0x11022BD4: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11022BD7: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022BDC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022BE3; /* 0x11022BDE: je 0x11022be3 */
L_11022BE0:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11022BE0: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022BE3:
    eax = ebp + (-0x30); /* 0x11022BE3: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11022BE6: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022BF8; /* 0x11022BE9: je 0x11022bf8 */
L_11022BEB:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11022BEB: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022BF8; /* 0x11022BEF: jne 0x11022bf8 */
L_11022BF1:
    eax = MEM32(ebp + (-0x40)); /* 0x11022BF1: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11022BF4: mov dword ptr [eax], esi */
    goto L_11022BFB; /* 0x11022BF6: jmp 0x11022bfb */
L_11022BF8:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11022BF8: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022BFB:
    eax = MEM32(ebp + (-0x3C)); /* 0x11022BFB: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11022BFE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11022C01: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022C03: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11022C06: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11022C09: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022C0E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022C11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022C11u);

L_11022C11:
    PUSH32(esp, 0x38u); /* 0x11022C11: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11022C13: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022C18: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11022C1D: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11022C1F: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11022C22: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11022C25: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11022C27: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11022C2A: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11022C2E: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11022C31: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11022C34: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11022C37: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11022C3A: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11022C3B: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022C40: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11022C44: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11022C47: push ecx */
    PUSH32(esp, eax); /* 0x11022C48: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022C49: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11022C4C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022C4F: push eax */
    eax = ebp + 0xC; /* 0x11022C50: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022C53: push eax */
    eax = ebp + (-0x30); /* 0x11022C54: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022C57: push eax */
    PUSH32(esp, edi); /* 0x11022C58: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x11022C59: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022C5E: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11022C61: push eax */
    eax = ebp + (-0x38); /* 0x11022C62: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11022C65: push eax */
    eax = ebp + (-0x30); /* 0x11022C66: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022C69: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11022C6A: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11022C6F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11022C73: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022C76: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022C79: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022C7B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11022C80: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022C83: push eax */
    ecx = ebp + 0xC; /* 0x11022C84: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11022C87: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022C8C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022C93; /* 0x11022C8E: je 0x11022c93 */
L_11022C90:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11022C90: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022C93:
    eax = ebp + (-0x30); /* 0x11022C93: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11022C96: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022CA8; /* 0x11022C99: je 0x11022ca8 */
L_11022C9B:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11022C9B: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022CA8; /* 0x11022C9F: jne 0x11022ca8 */
L_11022CA1:
    eax = MEM32(ebp + (-0x40)); /* 0x11022CA1: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11022CA4: mov dword ptr [eax], esi */
    goto L_11022CAB; /* 0x11022CA6: jmp 0x11022cab */
L_11022CA8:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11022CA8: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022CAB:
    eax = MEM32(ebp + (-0x3C)); /* 0x11022CAB: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11022CAE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11022CB1: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022CB3: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11022CB6: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11022CB9: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022CBE: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022CC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022CC1u);

L_11022CC1:
    PUSH32(esp, ebp); /* 0x11022CC1: push ebp */
    ebp = esp; /* 0x11022CC2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x11022CC4: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11022CC7: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11022CCC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11022CCE: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11022CD1: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x48); /* 0x11022CD4: lea edx, [ebp - 0x48] */
    PUSH32(esp, ebx); /* 0x11022CD7: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11022CD8: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11022CDB: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & 0; /* 0x11022CDF: and dword ptr [ebp - 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11022CE3: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11022CE4: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11022CE7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11022CE8: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11022CEB: push edx */
    edx = ebp + (-0x4C); /* 0x11022CEC: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x11022CEF: push edx */
    PUSH32(esp, eax); /* 0x11022CF0: push eax */
    eax = ebp + 0x14; /* 0x11022CF1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022CF4: push eax */
    eax = ebp + 0xC; /* 0x11022CF5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022CF8: push eax */
    eax = ebp + (-0x40); /* 0x11022CF9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022CFC: push eax */
    PUSH32(esp, ecx); /* 0x11022CFD: push ecx */
    RECOMP_CALL(sub_1101E218); /* 0x11022CFE: call 0x1101e218 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022D03: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11022D06: push eax */
    eax = ebp + (-0x50); /* 0x11022D07: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x11022D0A: push eax */
    eax = ebp + (-0x40); /* 0x11022D0B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022D0E: push eax */
    RECOMP_CALL(sub_11030709); /* 0x11022D0F: call 0x11030709 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x11022D14: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022D17: add esp, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x11022D1A: fstp dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x11022D1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022D36; /* 0x11022D1F: je 0x11022d36 */
L_11022D21:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x11022D21: fld dword ptr [ebp - 0x44] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11022D24: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11022D24: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11022D27: push eax */
    PUSH32(esp, ecx); /* 0x11022D28: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11022D29: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1102C261); /* 0x11022D2C: call 0x1102c261 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11022D31: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x11022D32: fstp dword ptr [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x11022D35: pop ecx */
L_11022D36:
    eax = ebp + 0x14; /* 0x11022D36: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022D39: push eax */
    ecx = ebp + 0xC; /* 0x11022D3A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11022D3D: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022D42: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022D49; /* 0x11022D44: je 0x11022d49 */
L_11022D46:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11022D46: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022D49:
    eax = ebp + (-0x40); /* 0x11022D49: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x50)), eax */ /* 0x11022D4C: cmp dword ptr [ebp - 0x50], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022D5E; /* 0x11022D4F: je 0x11022d5e */
L_11022D51:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x11022D51: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022D5E; /* 0x11022D55: jne 0x11022d5e */
L_11022D57:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x11022D57: fld dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x11022D5A: fstp dword ptr [ebx] */
    goto L_11022D61; /* 0x11022D5C: jmp 0x11022d61 */
L_11022D5E:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11022D5E: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022D61:
    ecx = MEM32(ebp + 0xC); /* 0x11022D61: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11022D64: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11022D66: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022D68: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11022D6B: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11022D6E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11022D71: pop edi */
    esi = POP32_VAL(esp); /* 0x11022D72: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11022D73: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11022D75: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11022D76: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11022D7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11022D7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022D7E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022D81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022D81u);

L_11022D81:
    PUSH32(esp, ebp); /* 0x11022D81: push ebp */
    ebp = esp; /* 0x11022D82: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x11022D84: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11022D87: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11022D8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11022D8E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11022D91: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x11022D94: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11022D97: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11022D98: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11022D9B: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11022D9F: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11022DA3: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11022DA4: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11022DA7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11022DA8: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11022DAB: push edx */
    edx = ebp + (-0x48); /* 0x11022DAC: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x11022DAF: push edx */
    PUSH32(esp, eax); /* 0x11022DB0: push eax */
    eax = ebp + 0x14; /* 0x11022DB1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022DB4: push eax */
    eax = ebp + 0xC; /* 0x11022DB5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022DB8: push eax */
    eax = ebp + (-0x40); /* 0x11022DB9: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022DBC: push eax */
    PUSH32(esp, ecx); /* 0x11022DBD: push ecx */
    RECOMP_CALL(sub_1101E218); /* 0x11022DBE: call 0x1101e218 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022DC3: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11022DC6: push eax */
    eax = ebp + (-0x4C); /* 0x11022DC7: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11022DCA: push eax */
    eax = ebp + (-0x40); /* 0x11022DCB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022DCE: push eax */
    RECOMP_CALL(sub_11030933); /* 0x11022DCF: call 0x11030933 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x11022DD4: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022DD7: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x11022DDA: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x11022DDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022DF8; /* 0x11022DDF: je 0x11022df8 */
L_11022DE1:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11022DE1: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11022DE1: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11022DE4: push eax */
    PUSH32(esp, ecx); /* 0x11022DE5: push ecx */
    PUSH32(esp, ecx); /* 0x11022DE6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11022DE7: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x11022DEA: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x11022DF0: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022DF3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11022DFA; /* 0x11022DF6: jmp 0x11022dfa */
L_11022DF8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11022DF8: fstp st(0) */
L_11022DFA:
    eax = ebp + 0x14; /* 0x11022DFA: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022DFD: push eax */
    ecx = ebp + 0xC; /* 0x11022DFE: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11022E01: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022E06: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022E0D; /* 0x11022E08: je 0x11022e0d */
L_11022E0A:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11022E0A: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022E0D:
    eax = ebp + (-0x40); /* 0x11022E0D: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x11022E10: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022E22; /* 0x11022E13: je 0x11022e22 */
L_11022E15:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x11022E15: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022E22; /* 0x11022E19: jne 0x11022e22 */
L_11022E1B:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x11022E1B: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x11022E1E: fstp qword ptr [ebx] */
    goto L_11022E25; /* 0x11022E20: jmp 0x11022e25 */
L_11022E22:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11022E22: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022E25:
    ecx = MEM32(ebp + 0xC); /* 0x11022E25: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11022E28: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11022E2A: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022E2C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11022E2F: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11022E32: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11022E35: pop edi */
    esi = POP32_VAL(esp); /* 0x11022E36: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11022E37: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11022E39: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11022E3A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11022E3F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11022E41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022E42: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022E45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022E45u);

L_11022E45:
    PUSH32(esp, ebp); /* 0x11022E45: push ebp */
    ebp = esp; /* 0x11022E46: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x11022E48: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11022E4B: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11022E50: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11022E52: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11022E55: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x11022E58: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11022E5B: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11022E5C: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11022E5F: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11022E63: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11022E67: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11022E68: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11022E6B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11022E6C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11022E6F: push edx */
    edx = ebp + (-0x48); /* 0x11022E70: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x11022E73: push edx */
    PUSH32(esp, eax); /* 0x11022E74: push eax */
    eax = ebp + 0x14; /* 0x11022E75: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022E78: push eax */
    eax = ebp + 0xC; /* 0x11022E79: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022E7C: push eax */
    eax = ebp + (-0x40); /* 0x11022E7D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022E80: push eax */
    PUSH32(esp, ecx); /* 0x11022E81: push ecx */
    RECOMP_CALL(sub_1101E218); /* 0x11022E82: call 0x1101e218 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022E87: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11022E8A: push eax */
    eax = ebp + (-0x4C); /* 0x11022E8B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11022E8E: push eax */
    eax = ebp + (-0x40); /* 0x11022E8F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11022E92: push eax */
    RECOMP_CALL(sub_11030BB4); /* 0x11022E93: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x11022E98: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022E9B: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x11022E9E: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x11022EA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022EBC; /* 0x11022EA3: je 0x11022ebc */
L_11022EA5:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11022EA5: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11022EA5: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11022EA8: push eax */
    PUSH32(esp, ecx); /* 0x11022EA9: push ecx */
    PUSH32(esp, ecx); /* 0x11022EAA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11022EAB: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x11022EAE: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x11022EB4: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11022EB7: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11022EBE; /* 0x11022EBA: jmp 0x11022ebe */
L_11022EBC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11022EBC: fstp st(0) */
L_11022EBE:
    eax = ebp + 0x14; /* 0x11022EBE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022EC1: push eax */
    ecx = ebp + 0xC; /* 0x11022EC2: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11022EC5: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022ECA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022ED1; /* 0x11022ECC: je 0x11022ed1 */
L_11022ECE:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11022ECE: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022ED1:
    eax = ebp + (-0x40); /* 0x11022ED1: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x11022ED4: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022EE6; /* 0x11022ED7: je 0x11022ee6 */
L_11022ED9:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x11022ED9: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022EE6; /* 0x11022EDD: jne 0x11022ee6 */
L_11022EDF:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x11022EDF: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x11022EE2: fstp qword ptr [ebx] */
    goto L_11022EE9; /* 0x11022EE4: jmp 0x11022ee9 */
L_11022EE6:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11022EE6: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022EE9:
    ecx = MEM32(ebp + 0xC); /* 0x11022EE9: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11022EEC: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11022EEE: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022EF0: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11022EF3: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11022EF6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11022EF9: pop edi */
    esi = POP32_VAL(esp); /* 0x11022EFA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11022EFB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11022EFD: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11022EFE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11022F03: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11022F05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022F06: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022F09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022F09u);

L_11022F09:
    PUSH32(esp, 0x3Cu); /* 0x11022F09: push 0x3c */
    eax = 0x1103E60Fu; /* 0x11022F0B: mov eax, 0x1103e60f */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022F10: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11022F15: mov esi, ecx */
    eax = MEM32(ebp + 0x24); /* 0x11022F17: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x1C); /* 0x11022F1A: mov ecx, dword ptr [ebp + 0x1c] */
    ebx = MEM32(ebp + 0x8); /* 0x11022F1D: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11022F20: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11022F23: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = eax; /* 0x11022F27: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x3C); /* 0x11022F2A: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x11022F2D: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11022F2E: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022F33: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11022F37: push eax */
    PUSH32(esp, 0x800u); /* 0x11022F38: push 0x800 */
    eax = ebp + 0x14; /* 0x11022F3D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022F40: push eax */
    eax = ebp + 0xC; /* 0x11022F41: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022F44: push eax */
    eax = ebp + (-0x30); /* 0x11022F45: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022F48: push eax */
    PUSH32(esp, esi); /* 0x11022F49: push esi */
    RECOMP_CALL(sub_110209DA); /* 0x11022F4A: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11022F4F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x3C); /* 0x11022F53: lea ecx, [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11022F56: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022F59: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11022F5B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x11022F60: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11022F63: push eax */
    PUSH32(esp, esi); /* 0x11022F64: push esi */
    eax = ebp + (-0x38); /* 0x11022F65: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11022F68: push eax */
    eax = ebp + (-0x30); /* 0x11022F69: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11022F6C: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11022F6D: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11022F72: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0xC; /* 0x11022F76: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11022F79: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11022F7C: mov esi, eax */
    eax = ebp + 0x14; /* 0x11022F7E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022F81: push eax */
    RECOMP_CALL(sub_11027871); /* 0x11022F82: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11022F87: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11022F8E; /* 0x11022F89: je 0x11022f8e */
L_11022F8B:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11022F8B: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022F8E:
    eax = ebp + (-0x30); /* 0x11022F8E: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11022F91: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11022FA3; /* 0x11022F94: je 0x11022fa3 */
L_11022F96:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11022F96: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11022FA3; /* 0x11022F9A: jne 0x11022fa3 */
L_11022F9C:
    eax = MEM32(ebp + (-0x40)); /* 0x11022F9C: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11022F9F: mov dword ptr [eax], esi */
    goto L_11022FA6; /* 0x11022FA1: jmp 0x11022fa6 */
L_11022FA3:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11022FA3: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11022FA6:
    ecx = MEM32(ebp + 0xC); /* 0x11022FA6: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x11022FA9: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x11022FAB: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11022FAD: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x11022FB0: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11022FB3: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11022FB8: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11022FBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11022FBBu);

L_11022FBB:
    PUSH32(esp, 0x38u); /* 0x11022FBB: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11022FBD: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11022FC2: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11022FC7: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11022FC9: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11022FCC: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11022FCF: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11022FD1: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11022FD4: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11022FD8: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11022FDB: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11022FDE: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11022FE1: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11022FE4: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11022FE5: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11022FEA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11022FEE: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11022FF1: push ecx */
    PUSH32(esp, eax); /* 0x11022FF2: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11022FF3: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11022FF6: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11022FF9: push eax */
    eax = ebp + 0xC; /* 0x11022FFA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11022FFD: push eax */
    eax = ebp + (-0x30); /* 0x11022FFE: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023001: push eax */
    PUSH32(esp, edi); /* 0x11023002: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x11023003: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023008: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102300B: push eax */
    eax = ebp + (-0x38); /* 0x1102300C: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1102300F: push eax */
    eax = ebp + (-0x30); /* 0x11023010: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023013: push eax */
    RECOMP_CALL(sub_11031075); /* 0x11023014: call 0x11031075 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023019: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1102301D: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023020: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023023: mov esi, eax */
    edi = edx; /* 0x11023025: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x11023027: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x1102302C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102302F: push eax */
    ecx = ebp + 0xC; /* 0x11023030: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11023033: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023038: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102303F; /* 0x1102303A: je 0x1102303f */
L_1102303C:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x1102303C: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102303F:
    eax = ebp + (-0x30); /* 0x1102303F: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11023042: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023057; /* 0x11023045: je 0x11023057 */
L_11023047:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023047: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023057; /* 0x1102304B: jne 0x11023057 */
L_1102304D:
    eax = MEM32(ebp + (-0x40)); /* 0x1102304D: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023050: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x11023052: mov dword ptr [eax + 4], edi */
    goto L_1102305A; /* 0x11023055: jmp 0x1102305a */
L_11023057:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023057: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102305A:
    eax = MEM32(ebp + (-0x3C)); /* 0x1102305A: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x1102305D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023060: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023062: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023065: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023068: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102306D: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023070u);

L_11023070:
    PUSH32(esp, 0x38u); /* 0x11023070: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11023072: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023077: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102307C: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x1102307E: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023081: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11023084: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11023086: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023089: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1102308D: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023090: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11023093: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023096: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023099: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102309A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102309F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x110230A3: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110230A6: push ecx */
    PUSH32(esp, eax); /* 0x110230A7: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110230A8: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110230AB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110230AE: push eax */
    eax = ebp + 0xC; /* 0x110230AF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110230B2: push eax */
    eax = ebp + (-0x30); /* 0x110230B3: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110230B6: push eax */
    PUSH32(esp, edi); /* 0x110230B7: push edi */
    RECOMP_CALL(sub_110209DA); /* 0x110230B8: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110230BD: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110230C0: push eax */
    eax = ebp + (-0x38); /* 0x110230C1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x110230C4: push eax */
    eax = ebp + (-0x30); /* 0x110230C5: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110230C8: push eax */
    RECOMP_CALL(sub_11031159); /* 0x110230C9: call 0x11031159 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110230CE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110230D2: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110230D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110230D8: mov esi, eax */
    edi = edx; /* 0x110230DA: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x110230DC: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x110230E1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110230E4: push eax */
    ecx = ebp + 0xC; /* 0x110230E5: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110230E8: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110230ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110230F4; /* 0x110230EF: je 0x110230f4 */
L_110230F1:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x110230F1: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110230F4:
    eax = ebp + (-0x30); /* 0x110230F4: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x110230F7: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102310C; /* 0x110230FA: je 0x1102310c */
L_110230FC:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x110230FC: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102310C; /* 0x11023100: jne 0x1102310c */
L_11023102:
    eax = MEM32(ebp + (-0x40)); /* 0x11023102: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023105: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x11023107: mov dword ptr [eax + 4], edi */
    goto L_1102310F; /* 0x1102310A: jmp 0x1102310f */
L_1102310C:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x1102310C: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102310F:
    eax = MEM32(ebp + (-0x3C)); /* 0x1102310F: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023112: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023115: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023117: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102311A: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x1102311D: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023122: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023125(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023125u);

L_11023125:
    PUSH32(esp, 0x6Cu); /* 0x11023125: push 0x6c */
    eax = 0x1103E595u; /* 0x11023127: mov eax, 0x1103e595 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102312C: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x64)) = ecx; /* 0x11023131: mov dword ptr [ebp - 0x64], ecx */
    eax = MEM32(ebp + 0x1C); /* 0x11023134: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11023137: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x1102313A: mov ecx, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x8); /* 0x1102313D: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11023140: mov edi, dword ptr [ebp + 0x20] */
    /* test MEM32(eax + 0x14), 0x4000u */ /* 0x11023143: test dword ptr [eax + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x1102314A: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x74)) = ecx; /* 0x1102314D: mov dword ptr [ebp - 0x74], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023232; /* 0x11023150: je 0x11023232 */
L_11023156:
    ecx = ebp + (-0x68); /* 0x11023156: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x11023159: push ecx */
    ecx = eax; /* 0x1102315A: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102315C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023161: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11023165: push eax */
    RECOMP_CALL(sub_11015B71); /* 0x11023166: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102316B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1102316F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11023171: pop ecx */
    ecx = ebp + (-0x68); /* 0x11023172: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100E431); /* 0x11023175: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1102317A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 0xFu; /* 0x1102317C: mov dword ptr [ebp - 0x34], 0xf */
    PUSH32(esp, eax); /* 0x11023183: push eax */
    PUSH32(esp, 1); /* 0x11023184: push 1 */
    ecx = ebp + (-0x48); /* 0x11023186: lea ecx, [ebp - 0x48] */
    MEM32(ebp + (-0x38)) = eax; /* 0x11023189: mov dword ptr [ebp - 0x38], eax */
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x1102318C: mov byte ptr [ebp - 0x48], al */
    RECOMP_CALL(sub_11014076); /* 0x1102318F: call 0x11014076 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x11023194: lea eax, [ebp - 0x60] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11023197: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x1102319E: push eax */
    ecx = esi; /* 0x1102319F: mov ecx, esi */
    RECOMP_CALL(sub_11037B56); /* 0x110231A1: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x110231A6: push -1 */
    PUSH32(esp, 0); /* 0x110231A8: push 0 */
    PUSH32(esp, eax); /* 0x110231AA: push eax */
    ecx = ebp + (-0x48); /* 0x110231AB: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110231AE: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11010454); /* 0x110231B2: call 0x11010454 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110231B7: push 0 */
    PUSH32(esp, 1); /* 0x110231B9: push 1 */
    ecx = ebp + (-0x60); /* 0x110231BB: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110231BE: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11010630); /* 0x110231C2: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110231C7: push 0 */
    PUSH32(esp, 1); /* 0x110231C9: push 1 */
    ecx = ebp + (-0x48); /* 0x110231CB: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_11014015); /* 0x110231CE: call 0x11014015 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x110231D3: lea eax, [ebp - 0x60] */
    ecx = esi; /* 0x110231D6: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110231D8: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x110231D9: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x110231DE: push -1 */
    PUSH32(esp, 0); /* 0x110231E0: push 0 */
    PUSH32(esp, eax); /* 0x110231E2: push eax */
    ecx = ebp + (-0x48); /* 0x110231E3: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110231E6: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11010454); /* 0x110231EA: call 0x11010454 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110231EF: push 0 */
    PUSH32(esp, 1); /* 0x110231F1: push 1 */
    ecx = ebp + (-0x60); /* 0x110231F3: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110231F6: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11010630); /* 0x110231FA: call 0x11010630 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x34)), 0x10u */ /* 0x110231FF: cmp dword ptr [ebp - 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x48)); /* 0x11023203: mov eax, dword ptr [ebp - 0x48] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102320B; /* 0x11023206: jae 0x1102320b */
L_11023208:
    eax = ebp + (-0x48); /* 0x11023208: lea eax, [ebp - 0x48] */
L_1102320B:
    PUSH32(esp, eax); /* 0x1102320B: push eax */
    PUSH32(esp, 2); /* 0x1102320C: push 2 */
    eax = ebp + 0x14; /* 0x1102320E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023211: push eax */
    eax = ebp + 0xC; /* 0x11023212: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023215: push eax */
    RECOMP_CALL(sub_11015061); /* 0x11023216: call 0x11015061 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102321B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x1102321F: lea ecx, [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023222: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023225: mov esi, eax */
    PUSH32(esp, 0); /* 0x11023227: push 0 */
    PUSH32(esp, 1); /* 0x11023229: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x1102322B: call 0x11010630 */
    RECOMP_FLAGS_IN();
    goto L_110232A2; /* 0x11023230: jmp 0x110232a2 */
L_11023232:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) & 0; /* 0x11023232: and dword ptr [ebp - 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x11023236: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x11023239: push ecx */
    ecx = eax; /* 0x1102323A: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102323C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x6C); /* 0x11023241: lea ecx, [ebp - 0x6c] */
    MEM32(ebp + (-0x4)) = 4; /* 0x11023244: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, ecx); /* 0x1102324B: push ecx */
    PUSH32(esp, eax); /* 0x1102324C: push eax */
    eax = MEM32(ebp + (-0x68)); /* 0x1102324D: mov eax, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x11023250: push dword ptr [eax + 0x14] */
    eax = ebp + 0x14; /* 0x11023253: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023256: push eax */
    eax = ebp + 0xC; /* 0x11023257: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102325A: push eax */
    eax = ebp + (-0x30); /* 0x1102325B: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102325E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x1102325F: push dword ptr [ebp - 0x64] */
    RECOMP_CALL(sub_110209DA); /* 0x11023262: call 0x110209da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023267: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102326A: push eax */
    eax = ebp + (-0x70); /* 0x1102326B: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1102326E: push eax */
    eax = ebp + (-0x30); /* 0x1102326F: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023272: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11023273: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023278: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x1102327C: lea ecx, [ebp - 0x78] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102327F: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = eax; /* 0x11023282: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023285: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x1102328A: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x70)), eax */ /* 0x1102328D: cmp dword ptr [ebp - 0x70], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110232A2; /* 0x11023290: je 0x110232a2 */
L_11023292:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x11023292: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110232A2; /* 0x11023296: jne 0x110232a2 */
L_11023298:
    eax = MEM32(ebp + (-0x64)); /* 0x11023298: mov eax, dword ptr [ebp - 0x64] */
    /* cmp eax, 1 */ /* 0x1102329B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110232A2; /* 0x1102329E: ja 0x110232a2 */
L_110232A0:
    esi = eax; /* 0x110232A0: mov esi, eax */
L_110232A2:
    eax = ebp + 0x14; /* 0x110232A2: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110232A5: push eax */
    ecx = ebp + 0xC; /* 0x110232A6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110232A9: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110232AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110232B5; /* 0x110232B0: je 0x110232b5 */
L_110232B2:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110232B2: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110232B5:
    /* test esi, esi */ /* 0x110232B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110232BE; /* 0x110232B7: jns 0x110232be */
L_110232B9:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110232B9: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110232C6; /* 0x110232BC: jmp 0x110232c6 */
L_110232BE:
    eax = MEM32(ebp + (-0x74)); /* 0x110232BE: mov eax, dword ptr [ebp - 0x74] */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x110232C1: setne cl */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x110232C4: mov byte ptr [eax], cl */
L_110232C6:
    ecx = MEM32(ebp + 0xC); /* 0x110232C6: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x110232C9: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x110232CB: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110232CD: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x110232D0: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x110232D3: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110232D8: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110232DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110232DBu);

L_110232DB:
    PUSH32(esp, 0x38u); /* 0x110232DB: push 0x38 */
    eax = 0x1103E63Cu; /* 0x110232DD: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x110232E2: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110232E7: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x110232E9: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x110232EC: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x110232EF: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x110232F1: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x110232F4: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110232F8: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110232FB: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110232FE: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023301: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023304: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023305: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102330A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102330E: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1102330F: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023312: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023315: push eax */
    eax = ebp + 0xC; /* 0x11023316: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023319: push eax */
    eax = ebp + (-0x30); /* 0x1102331A: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102331D: push eax */
    PUSH32(esp, edi); /* 0x1102331E: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x1102331F: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023324: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023328: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102332B: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1102332E: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023330: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023335: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11023339: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023341; /* 0x1102333C: je 0x11023341 */
L_1102333E:
    edi = ebp + (-0x30); /* 0x1102333E: lea edi, [ebp - 0x30] */
L_11023341:
    eax = ebp + (-0x34); /* 0x11023341: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11023344: push eax */
    PUSH32(esp, esi); /* 0x11023345: push esi */
    eax = ebp + (-0x38); /* 0x11023346: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023349: push eax */
    PUSH32(esp, edi); /* 0x1102334A: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x1102334B: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023350: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x11023353: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x11023356: mov esi, eax */
    eax = ebp + 0x14; /* 0x11023358: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102335B: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x1102335C: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023361: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023368; /* 0x11023363: je 0x11023368 */
L_11023365:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023365: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023368:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11023368: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102338B; /* 0x1102336B: je 0x1102338b */
L_1102336D:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1102336D: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102338B; /* 0x11023371: jne 0x1102338b */
L_11023373:
    /* cmp esi, 0xFFFFu */ /* 0x11023373: cmp esi, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1102338B; /* 0x11023379: ja 0x1102338b */
L_1102337B:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x1102337B: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023383; /* 0x1102337F: jne 0x11023383 */
L_11023381:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11023381: neg esi */
    _flag_k = FK_CMP;
L_11023383:
    eax = MEM32(ebp + (-0x40)); /* 0x11023383: mov eax, dword ptr [ebp - 0x40] */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x11023386: mov word ptr [eax], si */
    goto L_1102338E; /* 0x11023389: jmp 0x1102338e */
L_1102338B:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x1102338B: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102338E:
    eax = MEM32(ebp + (-0x3C)); /* 0x1102338E: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023391: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023394: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023396: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023399: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x1102339C: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110233A1: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110233A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110233A4u);

L_110233A4:
    PUSH32(esp, 0x38u); /* 0x110233A4: push 0x38 */
    eax = 0x1103E63Cu; /* 0x110233A6: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x110233AB: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110233B0: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x110233B2: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x110233B5: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x110233B8: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x110233BA: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x110233BD: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110233C1: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110233C4: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110233C7: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x110233CA: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110233CD: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110233CE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110233D3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110233D7: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110233D8: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110233DB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110233DE: push eax */
    eax = ebp + 0xC; /* 0x110233DF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110233E2: push eax */
    eax = ebp + (-0x30); /* 0x110233E3: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110233E6: push eax */
    PUSH32(esp, edi); /* 0x110233E7: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x110233E8: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110233ED: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110233F1: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110233F4: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110233F7: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110233F9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x110233FE: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11023402: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102340A; /* 0x11023405: je 0x1102340a */
L_11023407:
    edi = ebp + (-0x30); /* 0x11023407: lea edi, [ebp - 0x30] */
L_1102340A:
    eax = ebp + (-0x34); /* 0x1102340A: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1102340D: push eax */
    PUSH32(esp, esi); /* 0x1102340E: push esi */
    eax = ebp + (-0x38); /* 0x1102340F: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023412: push eax */
    PUSH32(esp, edi); /* 0x11023413: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x11023414: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023419: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x1102341C: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x1102341F: mov esi, eax */
    eax = ebp + 0x14; /* 0x11023421: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023424: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x11023425: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102342A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023431; /* 0x1102342C: je 0x11023431 */
L_1102342E:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x1102342E: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023431:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11023431: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023450; /* 0x11023434: je 0x11023450 */
L_11023436:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023436: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023450; /* 0x1102343A: jne 0x11023450 */
L_1102343C:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1102343C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11023450; /* 0x1102343F: ja 0x11023450 */
L_11023441:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023441: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023449; /* 0x11023445: jne 0x11023449 */
L_11023447:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11023447: neg esi */
    _flag_k = FK_CMP;
L_11023449:
    eax = MEM32(ebp + (-0x40)); /* 0x11023449: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x1102344C: mov dword ptr [eax], esi */
    goto L_11023453; /* 0x1102344E: jmp 0x11023453 */
L_11023450:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023450: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023453:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023453: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023456: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023459: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102345B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102345E: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023461: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023466: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023469(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023469u);

L_11023469:
    PUSH32(esp, 0x38u); /* 0x11023469: push 0x38 */
    eax = 0x1103E63Cu; /* 0x1102346B: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023470: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023475: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023477: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x1102347A: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1102347D: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x1102347F: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023482: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023486: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023489: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1102348C: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x1102348F: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023492: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023493: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023498: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1102349C: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1102349F: push ecx */
    PUSH32(esp, eax); /* 0x110234A0: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110234A1: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110234A4: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110234A7: push eax */
    eax = ebp + 0xC; /* 0x110234A8: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110234AB: push eax */
    eax = ebp + (-0x30); /* 0x110234AC: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110234AF: push eax */
    PUSH32(esp, edi); /* 0x110234B0: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x110234B1: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110234B6: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110234B9: push eax */
    eax = ebp + (-0x38); /* 0x110234BA: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x110234BD: push eax */
    eax = ebp + (-0x30); /* 0x110234BE: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110234C1: push eax */
    RECOMP_CALL(sub_11030E1D); /* 0x110234C2: call 0x11030e1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110234C7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110234CB: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110234CE: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110234D1: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110234D3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x110234D8: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110234DB: push eax */
    ecx = ebp + 0xC; /* 0x110234DC: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110234DF: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110234E4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110234EB; /* 0x110234E6: je 0x110234eb */
L_110234E8:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x110234E8: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110234EB:
    eax = ebp + (-0x30); /* 0x110234EB: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x110234EE: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023500; /* 0x110234F1: je 0x11023500 */
L_110234F3:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x110234F3: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023500; /* 0x110234F7: jne 0x11023500 */
L_110234F9:
    eax = MEM32(ebp + (-0x40)); /* 0x110234F9: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x110234FC: mov dword ptr [eax], esi */
    goto L_11023503; /* 0x110234FE: jmp 0x11023503 */
L_11023500:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023500: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023503:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023503: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023506: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023509: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102350B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102350E: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023511: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023516: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023519(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023519u);

L_11023519:
    PUSH32(esp, 0x38u); /* 0x11023519: push 0x38 */
    eax = 0x1103E63Cu; /* 0x1102351B: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023520: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023525: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023527: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x1102352A: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1102352D: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x1102352F: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023532: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023536: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023539: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1102353C: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x1102353F: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023542: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023543: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023548: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1102354C: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1102354F: push ecx */
    PUSH32(esp, eax); /* 0x11023550: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11023551: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023554: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023557: push eax */
    eax = ebp + 0xC; /* 0x11023558: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102355B: push eax */
    eax = ebp + (-0x30); /* 0x1102355C: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102355F: push eax */
    PUSH32(esp, edi); /* 0x11023560: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x11023561: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023566: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023569: push eax */
    eax = ebp + (-0x38); /* 0x1102356A: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1102356D: push eax */
    eax = ebp + (-0x30); /* 0x1102356E: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023571: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11023572: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023577: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1102357B: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102357E: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023581: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023583: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11023588: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102358B: push eax */
    ecx = ebp + 0xC; /* 0x1102358C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x1102358F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023594: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102359B; /* 0x11023596: je 0x1102359b */
L_11023598:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023598: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102359B:
    eax = ebp + (-0x30); /* 0x1102359B: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x1102359E: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110235B0; /* 0x110235A1: je 0x110235b0 */
L_110235A3:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x110235A3: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110235B0; /* 0x110235A7: jne 0x110235b0 */
L_110235A9:
    eax = MEM32(ebp + (-0x40)); /* 0x110235A9: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x110235AC: mov dword ptr [eax], esi */
    goto L_110235B3; /* 0x110235AE: jmp 0x110235b3 */
L_110235B0:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x110235B0: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110235B3:
    eax = MEM32(ebp + (-0x3C)); /* 0x110235B3: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x110235B6: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110235B9: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110235BB: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110235BE: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x110235C1: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110235C6: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110235C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110235C9u);

L_110235C9:
    PUSH32(esp, ebp); /* 0x110235C9: push ebp */
    ebp = esp; /* 0x110235CA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x110235CC: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110235CF: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110235D4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110235D6: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x110235D9: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x48); /* 0x110235DC: lea edx, [ebp - 0x48] */
    PUSH32(esp, ebx); /* 0x110235DF: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x110235E0: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x110235E3: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & 0; /* 0x110235E7: and dword ptr [ebp - 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x110235EB: push esi */
    esi = MEM32(ebp + 0x20); /* 0x110235EC: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x110235EF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110235F0: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x110235F3: push edx */
    edx = ebp + (-0x4C); /* 0x110235F4: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x110235F7: push edx */
    PUSH32(esp, eax); /* 0x110235F8: push eax */
    eax = ebp + 0x14; /* 0x110235F9: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110235FC: push eax */
    eax = ebp + 0xC; /* 0x110235FD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023600: push eax */
    eax = ebp + (-0x40); /* 0x11023601: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023604: push eax */
    PUSH32(esp, ecx); /* 0x11023605: push ecx */
    RECOMP_ICALL(0x1101E7C0u); /* 0x11023606: call 0x1101e7c0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102360B: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102360E: push eax */
    eax = ebp + (-0x50); /* 0x1102360F: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x11023612: push eax */
    eax = ebp + (-0x40); /* 0x11023613: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023616: push eax */
    RECOMP_CALL(sub_11030709); /* 0x11023617: call 0x11030709 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1102361C: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102361F: add esp, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x11023622: fstp dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x11023625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102363E; /* 0x11023627: je 0x1102363e */
L_11023629:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x11023629: fld dword ptr [ebp - 0x44] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1102362C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1102362C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1102362F: push eax */
    PUSH32(esp, ecx); /* 0x11023630: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11023631: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1102C261); /* 0x11023634: call 0x1102c261 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11023639: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1102363A: fstp dword ptr [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x1102363D: pop ecx */
L_1102363E:
    eax = ebp + 0x14; /* 0x1102363E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023641: push eax */
    ecx = ebp + 0xC; /* 0x11023642: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023645: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102364A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023651; /* 0x1102364C: je 0x11023651 */
L_1102364E:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x1102364E: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023651:
    eax = ebp + (-0x40); /* 0x11023651: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x50)), eax */ /* 0x11023654: cmp dword ptr [ebp - 0x50], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023666; /* 0x11023657: je 0x11023666 */
L_11023659:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x11023659: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023666; /* 0x1102365D: jne 0x11023666 */
L_1102365F:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1102365F: fld dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x11023662: fstp dword ptr [ebx] */
    goto L_11023669; /* 0x11023664: jmp 0x11023669 */
L_11023666:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11023666: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023669:
    ecx = MEM32(ebp + 0xC); /* 0x11023669: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x1102366C: mov eax, edi */
    MEM32(edi) = ecx; /* 0x1102366E: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023670: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11023673: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11023676: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11023679: pop edi */
    esi = POP32_VAL(esp); /* 0x1102367A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102367B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102367D: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102367E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11023683: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11023685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023686: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023689(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023689u);

L_11023689:
    PUSH32(esp, ebp); /* 0x11023689: push ebp */
    ebp = esp; /* 0x1102368A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x1102368C: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102368F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11023694: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11023696: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11023699: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x1102369C: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x1102369F: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x110236A0: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x110236A3: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x110236A7: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x110236AB: push esi */
    esi = MEM32(ebp + 0x20); /* 0x110236AC: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x110236AF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110236B0: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x110236B3: push edx */
    edx = ebp + (-0x48); /* 0x110236B4: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x110236B7: push edx */
    PUSH32(esp, eax); /* 0x110236B8: push eax */
    eax = ebp + 0x14; /* 0x110236B9: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110236BC: push eax */
    eax = ebp + 0xC; /* 0x110236BD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110236C0: push eax */
    eax = ebp + (-0x40); /* 0x110236C1: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110236C4: push eax */
    PUSH32(esp, ecx); /* 0x110236C5: push ecx */
    RECOMP_ICALL(0x1101E7C0u); /* 0x110236C6: call 0x1101e7c0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110236CB: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110236CE: push eax */
    eax = ebp + (-0x4C); /* 0x110236CF: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110236D2: push eax */
    eax = ebp + (-0x40); /* 0x110236D3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110236D6: push eax */
    RECOMP_CALL(sub_11030933); /* 0x110236D7: call 0x11030933 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x110236DC: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110236DF: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x110236E2: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x110236E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023700; /* 0x110236E7: je 0x11023700 */
L_110236E9:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x110236E9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x110236E9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x110236EC: push eax */
    PUSH32(esp, ecx); /* 0x110236ED: push ecx */
    PUSH32(esp, ecx); /* 0x110236EE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110236EF: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x110236F2: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x110236F8: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110236FB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11023702; /* 0x110236FE: jmp 0x11023702 */
L_11023700:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11023700: fstp st(0) */
L_11023702:
    eax = ebp + 0x14; /* 0x11023702: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023705: push eax */
    ecx = ebp + 0xC; /* 0x11023706: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023709: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102370E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023715; /* 0x11023710: je 0x11023715 */
L_11023712:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11023712: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023715:
    eax = ebp + (-0x40); /* 0x11023715: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x11023718: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102372A; /* 0x1102371B: je 0x1102372a */
L_1102371D:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1102371D: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102372A; /* 0x11023721: jne 0x1102372a */
L_11023723:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x11023723: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x11023726: fstp qword ptr [ebx] */
    goto L_1102372D; /* 0x11023728: jmp 0x1102372d */
L_1102372A:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x1102372A: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102372D:
    ecx = MEM32(ebp + 0xC); /* 0x1102372D: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11023730: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11023732: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023734: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11023737: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102373A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102373D: pop edi */
    esi = POP32_VAL(esp); /* 0x1102373E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102373F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11023741: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11023742: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11023747: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11023749: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102374A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102374D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102374Du);

L_1102374D:
    PUSH32(esp, ebp); /* 0x1102374D: push ebp */
    ebp = esp; /* 0x1102374E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x11023750: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11023753: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11023758: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102375A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1102375D: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x11023760: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11023763: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11023764: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11023767: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1102376B: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102376F: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11023770: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11023773: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11023774: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11023777: push edx */
    edx = ebp + (-0x48); /* 0x11023778: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x1102377B: push edx */
    PUSH32(esp, eax); /* 0x1102377C: push eax */
    eax = ebp + 0x14; /* 0x1102377D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023780: push eax */
    eax = ebp + 0xC; /* 0x11023781: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023784: push eax */
    eax = ebp + (-0x40); /* 0x11023785: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023788: push eax */
    PUSH32(esp, ecx); /* 0x11023789: push ecx */
    RECOMP_ICALL(0x1101E7C0u); /* 0x1102378A: call 0x1101e7c0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102378F: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023792: push eax */
    eax = ebp + (-0x4C); /* 0x11023793: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11023796: push eax */
    eax = ebp + (-0x40); /* 0x11023797: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1102379A: push eax */
    RECOMP_CALL(sub_11030BB4); /* 0x1102379B: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x110237A0: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110237A3: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x110237A6: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x110237A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110237C4; /* 0x110237AB: je 0x110237c4 */
L_110237AD:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x110237AD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x110237AD: shl eax, 2 */
    PUSH32(esp, eax); /* 0x110237B0: push eax */
    PUSH32(esp, ecx); /* 0x110237B1: push ecx */
    PUSH32(esp, ecx); /* 0x110237B2: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110237B3: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x110237B6: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x110237BC: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110237BF: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110237C6; /* 0x110237C2: jmp 0x110237c6 */
L_110237C4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110237C4: fstp st(0) */
L_110237C6:
    eax = ebp + 0x14; /* 0x110237C6: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110237C9: push eax */
    ecx = ebp + 0xC; /* 0x110237CA: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110237CD: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110237D2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110237D9; /* 0x110237D4: je 0x110237d9 */
L_110237D6:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110237D6: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110237D9:
    eax = ebp + (-0x40); /* 0x110237D9: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x110237DC: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110237EE; /* 0x110237DF: je 0x110237ee */
L_110237E1:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x110237E1: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110237EE; /* 0x110237E5: jne 0x110237ee */
L_110237E7:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x110237E7: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x110237EA: fstp qword ptr [ebx] */
    goto L_110237F1; /* 0x110237EC: jmp 0x110237f1 */
L_110237EE:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x110237EE: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110237F1:
    ecx = MEM32(ebp + 0xC); /* 0x110237F1: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x110237F4: mov eax, edi */
    MEM32(edi) = ecx; /* 0x110237F6: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110237F8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x110237FB: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x110237FE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11023801: pop edi */
    esi = POP32_VAL(esp); /* 0x11023802: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11023803: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11023805: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11023806: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102380B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102380D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102380E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023811(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023811u);

L_11023811:
    PUSH32(esp, 0x3Cu); /* 0x11023811: push 0x3c */
    eax = 0x1103E60Fu; /* 0x11023813: mov eax, 0x1103e60f */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023818: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102381D: mov esi, ecx */
    eax = MEM32(ebp + 0x24); /* 0x1102381F: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x1C); /* 0x11023822: mov ecx, dword ptr [ebp + 0x1c] */
    ebx = MEM32(ebp + 0x8); /* 0x11023825: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11023828: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1102382B: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = eax; /* 0x1102382F: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x3C); /* 0x11023832: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x11023835: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023836: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102383B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102383F: push eax */
    PUSH32(esp, 0x800u); /* 0x11023840: push 0x800 */
    eax = ebp + 0x14; /* 0x11023845: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023848: push eax */
    eax = ebp + 0xC; /* 0x11023849: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102384C: push eax */
    eax = ebp + (-0x30); /* 0x1102384D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023850: push eax */
    PUSH32(esp, esi); /* 0x11023851: push esi */
    RECOMP_CALL(sub_11020D17); /* 0x11023852: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023857: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x3C); /* 0x1102385B: lea ecx, [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102385E: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023861: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023863: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x11023868: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1102386B: push eax */
    PUSH32(esp, esi); /* 0x1102386C: push esi */
    eax = ebp + (-0x38); /* 0x1102386D: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023870: push eax */
    eax = ebp + (-0x30); /* 0x11023871: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023874: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11023875: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x1102387A: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0xC; /* 0x1102387E: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023881: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023884: mov esi, eax */
    eax = ebp + 0x14; /* 0x11023886: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023889: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x1102388A: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102388F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023896; /* 0x11023891: je 0x11023896 */
L_11023893:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11023893: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023896:
    eax = ebp + (-0x30); /* 0x11023896: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11023899: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110238AB; /* 0x1102389C: je 0x110238ab */
L_1102389E:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1102389E: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110238AB; /* 0x110238A2: jne 0x110238ab */
L_110238A4:
    eax = MEM32(ebp + (-0x40)); /* 0x110238A4: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x110238A7: mov dword ptr [eax], esi */
    goto L_110238AE; /* 0x110238A9: jmp 0x110238ae */
L_110238AB:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110238AB: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110238AE:
    ecx = MEM32(ebp + 0xC); /* 0x110238AE: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x110238B1: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x110238B3: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110238B5: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x110238B8: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x110238BB: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110238C0: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110238C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110238C3u);

L_110238C3:
    PUSH32(esp, 0x38u); /* 0x110238C3: push 0x38 */
    eax = 0x1103E63Cu; /* 0x110238C5: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x110238CA: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110238CF: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x110238D1: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x110238D4: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x110238D7: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x110238D9: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x110238DC: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110238E0: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110238E3: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110238E6: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x110238E9: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110238EC: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110238ED: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110238F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x110238F6: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110238F9: push ecx */
    PUSH32(esp, eax); /* 0x110238FA: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110238FB: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110238FE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023901: push eax */
    eax = ebp + 0xC; /* 0x11023902: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023905: push eax */
    eax = ebp + (-0x30); /* 0x11023906: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023909: push eax */
    PUSH32(esp, edi); /* 0x1102390A: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x1102390B: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023910: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023913: push eax */
    eax = ebp + (-0x38); /* 0x11023914: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023917: push eax */
    eax = ebp + (-0x30); /* 0x11023918: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102391B: push eax */
    RECOMP_CALL(sub_11031075); /* 0x1102391C: call 0x11031075 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023921: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023925: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023928: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1102392B: mov esi, eax */
    edi = edx; /* 0x1102392D: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x1102392F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11023934: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023937: push eax */
    ecx = ebp + 0xC; /* 0x11023938: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x1102393B: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023940: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023947; /* 0x11023942: je 0x11023947 */
L_11023944:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023944: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023947:
    eax = ebp + (-0x30); /* 0x11023947: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x1102394A: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102395F; /* 0x1102394D: je 0x1102395f */
L_1102394F:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1102394F: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102395F; /* 0x11023953: jne 0x1102395f */
L_11023955:
    eax = MEM32(ebp + (-0x40)); /* 0x11023955: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023958: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x1102395A: mov dword ptr [eax + 4], edi */
    goto L_11023962; /* 0x1102395D: jmp 0x11023962 */
L_1102395F:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x1102395F: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023962:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023962: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023965: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023968: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102396A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102396D: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023970: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023975: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023978u);

L_11023978:
    PUSH32(esp, 0x38u); /* 0x11023978: push 0x38 */
    eax = 0x1103E63Cu; /* 0x1102397A: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102397F: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023984: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023986: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023989: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1102398C: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x1102398E: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023991: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023995: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023998: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x1102399B: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x1102399E: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110239A1: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110239A2: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110239A7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x110239AB: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110239AE: push ecx */
    PUSH32(esp, eax); /* 0x110239AF: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110239B0: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110239B3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110239B6: push eax */
    eax = ebp + 0xC; /* 0x110239B7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110239BA: push eax */
    eax = ebp + (-0x30); /* 0x110239BB: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110239BE: push eax */
    PUSH32(esp, edi); /* 0x110239BF: push edi */
    RECOMP_CALL(sub_11020D17); /* 0x110239C0: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110239C5: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110239C8: push eax */
    eax = ebp + (-0x38); /* 0x110239C9: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x110239CC: push eax */
    eax = ebp + (-0x30); /* 0x110239CD: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110239D0: push eax */
    RECOMP_CALL(sub_11031159); /* 0x110239D1: call 0x11031159 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110239D6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110239DA: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110239DD: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110239E0: mov esi, eax */
    edi = edx; /* 0x110239E2: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x110239E4: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x110239E9: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110239EC: push eax */
    ecx = ebp + 0xC; /* 0x110239ED: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110239F0: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110239F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110239FC; /* 0x110239F7: je 0x110239fc */
L_110239F9:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x110239F9: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110239FC:
    eax = ebp + (-0x30); /* 0x110239FC: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x110239FF: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023A14; /* 0x11023A02: je 0x11023a14 */
L_11023A04:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023A04: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023A14; /* 0x11023A08: jne 0x11023a14 */
L_11023A0A:
    eax = MEM32(ebp + (-0x40)); /* 0x11023A0A: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023A0D: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x11023A0F: mov dword ptr [eax + 4], edi */
    goto L_11023A17; /* 0x11023A12: jmp 0x11023a17 */
L_11023A14:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023A14: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023A17:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023A17: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023A1A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023A1D: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023A1F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023A22: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023A25: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023A2A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023A2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023A2Du);

L_11023A2D:
    PUSH32(esp, 0x6Cu); /* 0x11023A2D: push 0x6c */
    eax = 0x1103E5E2u; /* 0x11023A2F: mov eax, 0x1103e5e2 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023A34: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x64)) = ecx; /* 0x11023A39: mov dword ptr [ebp - 0x64], ecx */
    eax = MEM32(ebp + 0x1C); /* 0x11023A3C: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11023A3F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x11023A42: mov ecx, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x8); /* 0x11023A45: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11023A48: mov edi, dword ptr [ebp + 0x20] */
    /* test MEM32(eax + 0x14), 0x4000u */ /* 0x11023A4B: test dword ptr [eax + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x11023A52: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x74)) = ecx; /* 0x11023A55: mov dword ptr [ebp - 0x74], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023B3C; /* 0x11023A58: je 0x11023b3c */
L_11023A5E:
    ecx = ebp + (-0x68); /* 0x11023A5E: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x11023A61: push ecx */
    ecx = eax; /* 0x11023A62: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023A64: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023A69: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11023A6D: push eax */
    RECOMP_CALL(sub_11015C0B); /* 0x11023A6E: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023A73: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11023A77: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11023A79: pop ecx */
    ecx = ebp + (-0x68); /* 0x11023A7A: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100E431); /* 0x11023A7D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x11023A82: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x11023A86: lea ecx, [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11023A89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 7; /* 0x11023A8B: mov dword ptr [ebp - 0x34], 7 */
    PUSH32(esp, eax); /* 0x11023A92: push eax */
    PUSH32(esp, 1); /* 0x11023A93: push 1 */
    MEM16(ebp + (-0x48)) = (uint16_t)(LO16(eax)); /* 0x11023A95: mov word ptr [ebp - 0x48], ax */
    RECOMP_CALL(sub_1102283F); /* 0x11023A99: call 0x1102283f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x11023A9E: lea eax, [ebp - 0x60] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11023AA1: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x11023AA8: push eax */
    ecx = esi; /* 0x11023AA9: mov ecx, esi */
    RECOMP_CALL(sub_11037B56); /* 0x11023AAB: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11023AB0: push -1 */
    PUSH32(esp, 0); /* 0x11023AB2: push 0 */
    PUSH32(esp, eax); /* 0x11023AB4: push eax */
    ecx = ebp + (-0x48); /* 0x11023AB5: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11023AB8: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11022706); /* 0x11023ABC: call 0x11022706 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11023AC1: push 0 */
    PUSH32(esp, 1); /* 0x11023AC3: push 1 */
    ecx = ebp + (-0x60); /* 0x11023AC5: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11023AC8: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11023ACC: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11023AD1: push 0 */
    PUSH32(esp, 1); /* 0x11023AD3: push 1 */
    ecx = ebp + (-0x48); /* 0x11023AD5: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_110226A3); /* 0x11023AD8: call 0x110226a3 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x11023ADD: lea eax, [ebp - 0x60] */
    ecx = esi; /* 0x11023AE0: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11023AE2: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11023AE3: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11023AE8: push -1 */
    PUSH32(esp, 0); /* 0x11023AEA: push 0 */
    PUSH32(esp, eax); /* 0x11023AEC: push eax */
    ecx = ebp + (-0x48); /* 0x11023AED: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11023AF0: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11022706); /* 0x11023AF4: call 0x11022706 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11023AF9: push 0 */
    PUSH32(esp, 1); /* 0x11023AFB: push 1 */
    ecx = ebp + (-0x60); /* 0x11023AFD: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11023B00: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11023B04: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x34)), 8 */ /* 0x11023B09: cmp dword ptr [ebp - 0x34], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x48)); /* 0x11023B0D: mov eax, dword ptr [ebp - 0x48] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11023B15; /* 0x11023B10: jae 0x11023b15 */
L_11023B12:
    eax = ebp + (-0x48); /* 0x11023B12: lea eax, [ebp - 0x48] */
L_11023B15:
    PUSH32(esp, eax); /* 0x11023B15: push eax */
    PUSH32(esp, 2); /* 0x11023B16: push 2 */
    eax = ebp + 0x14; /* 0x11023B18: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023B1B: push eax */
    eax = ebp + 0xC; /* 0x11023B1C: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023B1F: push eax */
    RECOMP_CALL(sub_1101535D); /* 0x11023B20: call 0x1101535d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023B25: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x11023B29: lea ecx, [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023B2C: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023B2F: mov esi, eax */
    PUSH32(esp, 0); /* 0x11023B31: push 0 */
    PUSH32(esp, 1); /* 0x11023B33: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11023B35: call 0x1102261d */
    RECOMP_FLAGS_IN();
    goto L_11023BAC; /* 0x11023B3A: jmp 0x11023bac */
L_11023B3C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) & 0; /* 0x11023B3C: and dword ptr [ebp - 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x11023B40: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x11023B43: push ecx */
    ecx = eax; /* 0x11023B44: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023B46: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x6C); /* 0x11023B4B: lea ecx, [ebp - 0x6c] */
    MEM32(ebp + (-0x4)) = 4; /* 0x11023B4E: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, ecx); /* 0x11023B55: push ecx */
    PUSH32(esp, eax); /* 0x11023B56: push eax */
    eax = MEM32(ebp + (-0x68)); /* 0x11023B57: mov eax, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x11023B5A: push dword ptr [eax + 0x14] */
    eax = ebp + 0x14; /* 0x11023B5D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023B60: push eax */
    eax = ebp + 0xC; /* 0x11023B61: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023B64: push eax */
    eax = ebp + (-0x30); /* 0x11023B65: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023B68: push eax */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x11023B69: push dword ptr [ebp - 0x64] */
    RECOMP_CALL(sub_11020D17); /* 0x11023B6C: call 0x11020d17 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023B71: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023B74: push eax */
    eax = ebp + (-0x70); /* 0x11023B75: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11023B78: push eax */
    eax = ebp + (-0x30); /* 0x11023B79: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023B7C: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11023B7D: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023B82: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x11023B86: lea ecx, [ebp - 0x78] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023B89: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = eax; /* 0x11023B8C: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023B8F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x11023B94: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x70)), eax */ /* 0x11023B97: cmp dword ptr [ebp - 0x70], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023BAC; /* 0x11023B9A: je 0x11023bac */
L_11023B9C:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x11023B9C: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023BAC; /* 0x11023BA0: jne 0x11023bac */
L_11023BA2:
    eax = MEM32(ebp + (-0x64)); /* 0x11023BA2: mov eax, dword ptr [ebp - 0x64] */
    /* cmp eax, 1 */ /* 0x11023BA5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11023BAC; /* 0x11023BA8: ja 0x11023bac */
L_11023BAA:
    esi = eax; /* 0x11023BAA: mov esi, eax */
L_11023BAC:
    eax = ebp + 0x14; /* 0x11023BAC: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023BAF: push eax */
    ecx = ebp + 0xC; /* 0x11023BB0: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023BB3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023BB8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023BBF; /* 0x11023BBA: je 0x11023bbf */
L_11023BBC:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11023BBC: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023BBF:
    /* test esi, esi */ /* 0x11023BBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11023BC8; /* 0x11023BC1: jns 0x11023bc8 */
L_11023BC3:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11023BC3: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11023BD0; /* 0x11023BC6: jmp 0x11023bd0 */
L_11023BC8:
    eax = MEM32(ebp + (-0x74)); /* 0x11023BC8: mov eax, dword ptr [ebp - 0x74] */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x11023BCB: setne cl */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x11023BCE: mov byte ptr [eax], cl */
L_11023BD0:
    ecx = MEM32(ebp + 0xC); /* 0x11023BD0: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x11023BD3: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x11023BD5: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023BD7: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x11023BDA: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023BDD: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023BE2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023BE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023BE5u);

L_11023BE5:
    PUSH32(esp, 0x38u); /* 0x11023BE5: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11023BE7: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023BEC: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023BF1: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023BF3: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023BF6: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11023BF9: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11023BFB: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023BFE: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023C02: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023C05: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11023C08: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023C0B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023C0E: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023C0F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023C14: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11023C18: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11023C19: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023C1C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023C1F: push eax */
    eax = ebp + 0xC; /* 0x11023C20: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023C23: push eax */
    eax = ebp + (-0x30); /* 0x11023C24: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023C27: push eax */
    PUSH32(esp, edi); /* 0x11023C28: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x11023C29: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023C2E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023C32: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023C35: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023C38: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023C3A: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023C3F: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11023C43: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023C4B; /* 0x11023C46: je 0x11023c4b */
L_11023C48:
    edi = ebp + (-0x30); /* 0x11023C48: lea edi, [ebp - 0x30] */
L_11023C4B:
    eax = ebp + (-0x34); /* 0x11023C4B: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11023C4E: push eax */
    PUSH32(esp, esi); /* 0x11023C4F: push esi */
    eax = ebp + (-0x38); /* 0x11023C50: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023C53: push eax */
    PUSH32(esp, edi); /* 0x11023C54: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x11023C55: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023C5A: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x11023C5D: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x11023C60: mov esi, eax */
    eax = ebp + 0x14; /* 0x11023C62: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023C65: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x11023C66: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023C6B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023C72; /* 0x11023C6D: je 0x11023c72 */
L_11023C6F:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023C6F: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023C72:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11023C72: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023C95; /* 0x11023C75: je 0x11023c95 */
L_11023C77:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023C77: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023C95; /* 0x11023C7B: jne 0x11023c95 */
L_11023C7D:
    /* cmp esi, 0xFFFFu */ /* 0x11023C7D: cmp esi, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11023C95; /* 0x11023C83: ja 0x11023c95 */
L_11023C85:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023C85: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023C8D; /* 0x11023C89: jne 0x11023c8d */
L_11023C8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11023C8B: neg esi */
    _flag_k = FK_CMP;
L_11023C8D:
    eax = MEM32(ebp + (-0x40)); /* 0x11023C8D: mov eax, dword ptr [ebp - 0x40] */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x11023C90: mov word ptr [eax], si */
    goto L_11023C98; /* 0x11023C93: jmp 0x11023c98 */
L_11023C95:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023C95: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023C98:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023C98: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023C9B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023C9E: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023CA0: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023CA3: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023CA6: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023CAB: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023CAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023CAEu);

L_11023CAE:
    PUSH32(esp, 0x38u); /* 0x11023CAE: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11023CB0: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023CB5: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023CBA: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023CBC: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023CBF: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11023CC2: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11023CC4: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023CC7: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023CCB: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023CCE: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11023CD1: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023CD4: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023CD7: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023CD8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023CDD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11023CE1: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11023CE2: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023CE5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023CE8: push eax */
    eax = ebp + 0xC; /* 0x11023CE9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023CEC: push eax */
    eax = ebp + (-0x30); /* 0x11023CED: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023CF0: push eax */
    PUSH32(esp, edi); /* 0x11023CF1: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x11023CF2: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023CF7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023CFB: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023CFE: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023D01: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023D03: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023D08: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = ebp + (-0x2F); /* 0x11023D0C: lea edi, [ebp - 0x2f] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023D14; /* 0x11023D0F: je 0x11023d14 */
L_11023D11:
    edi = ebp + (-0x30); /* 0x11023D11: lea edi, [ebp - 0x30] */
L_11023D14:
    eax = ebp + (-0x34); /* 0x11023D14: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11023D17: push eax */
    PUSH32(esp, esi); /* 0x11023D18: push esi */
    eax = ebp + (-0x38); /* 0x11023D19: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023D1C: push eax */
    PUSH32(esp, edi); /* 0x11023D1D: push edi */
    RECOMP_CALL(sub_11030ED9); /* 0x11023D1E: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023D23: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + 0xC; /* 0x11023D26: lea ecx, [ebp + 0xc] */
    esi = eax; /* 0x11023D29: mov esi, eax */
    eax = ebp + 0x14; /* 0x11023D2B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023D2E: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x11023D2F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023D34: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023D3B; /* 0x11023D36: je 0x11023d3b */
L_11023D38:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023D38: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023D3B:
    /* cmp MEM32(ebp + (-0x38)), edi */ /* 0x11023D3B: cmp dword ptr [ebp - 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023D5A; /* 0x11023D3E: je 0x11023d5a */
L_11023D40:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023D40: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023D5A; /* 0x11023D44: jne 0x11023d5a */
L_11023D46:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x11023D46: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11023D5A; /* 0x11023D49: ja 0x11023d5a */
L_11023D4B:
    /* cmp MEM8(ebp + (-0x30)), 0x2Du */ /* 0x11023D4B: cmp byte ptr [ebp - 0x30], 0x2d */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023D53; /* 0x11023D4F: jne 0x11023d53 */
L_11023D51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x11023D51: neg esi */
    _flag_k = FK_CMP;
L_11023D53:
    eax = MEM32(ebp + (-0x40)); /* 0x11023D53: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023D56: mov dword ptr [eax], esi */
    goto L_11023D5D; /* 0x11023D58: jmp 0x11023d5d */
L_11023D5A:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023D5A: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023D5D:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023D5D: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023D60: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023D63: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023D65: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023D68: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023D6B: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023D70: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023D73u);

L_11023D73:
    PUSH32(esp, 0x38u); /* 0x11023D73: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11023D75: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023D7A: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023D7F: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023D81: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023D84: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11023D87: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11023D89: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023D8C: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023D90: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023D93: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11023D96: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023D99: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023D9C: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023D9D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023DA2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11023DA6: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11023DA9: push ecx */
    PUSH32(esp, eax); /* 0x11023DAA: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11023DAB: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023DAE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023DB1: push eax */
    eax = ebp + 0xC; /* 0x11023DB2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023DB5: push eax */
    eax = ebp + (-0x30); /* 0x11023DB6: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023DB9: push eax */
    PUSH32(esp, edi); /* 0x11023DBA: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x11023DBB: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023DC0: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023DC3: push eax */
    eax = ebp + (-0x38); /* 0x11023DC4: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023DC7: push eax */
    eax = ebp + (-0x30); /* 0x11023DC8: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023DCB: push eax */
    RECOMP_CALL(sub_11030E1D); /* 0x11023DCC: call 0x11030e1d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023DD1: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023DD5: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023DD8: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023DDB: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023DDD: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11023DE2: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023DE5: push eax */
    ecx = ebp + 0xC; /* 0x11023DE6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023DE9: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023DEE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023DF5; /* 0x11023DF0: je 0x11023df5 */
L_11023DF2:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023DF2: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023DF5:
    eax = ebp + (-0x30); /* 0x11023DF5: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11023DF8: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023E0A; /* 0x11023DFB: je 0x11023e0a */
L_11023DFD:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023DFD: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023E0A; /* 0x11023E01: jne 0x11023e0a */
L_11023E03:
    eax = MEM32(ebp + (-0x40)); /* 0x11023E03: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023E06: mov dword ptr [eax], esi */
    goto L_11023E0D; /* 0x11023E08: jmp 0x11023e0d */
L_11023E0A:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023E0A: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023E0D:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023E0D: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023E10: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023E13: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023E15: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023E18: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023E1B: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023E20: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023E23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023E23u);

L_11023E23:
    PUSH32(esp, 0x38u); /* 0x11023E23: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11023E25: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x11023E2A: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11023E2F: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11023E31: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11023E34: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11023E37: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x11023E39: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11023E3C: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11023E40: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x11023E43: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11023E46: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x11023E49: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11023E4C: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11023E4D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11023E52: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11023E56: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11023E59: push ecx */
    PUSH32(esp, eax); /* 0x11023E5A: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11023E5B: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x11023E5E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023E61: push eax */
    eax = ebp + 0xC; /* 0x11023E62: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023E65: push eax */
    eax = ebp + (-0x30); /* 0x11023E66: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023E69: push eax */
    PUSH32(esp, edi); /* 0x11023E6A: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x11023E6B: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023E70: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023E73: push eax */
    eax = ebp + (-0x38); /* 0x11023E74: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11023E77: push eax */
    eax = ebp + (-0x30); /* 0x11023E78: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11023E7B: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11023E7C: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11023E81: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11023E85: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023E88: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11023E8B: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11023E8D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11023E92: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023E95: push eax */
    ecx = ebp + 0xC; /* 0x11023E96: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023E99: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023E9E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023EA5; /* 0x11023EA0: je 0x11023ea5 */
L_11023EA2:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11023EA2: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023EA5:
    eax = ebp + (-0x30); /* 0x11023EA5: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11023EA8: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023EBA; /* 0x11023EAB: je 0x11023eba */
L_11023EAD:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11023EAD: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023EBA; /* 0x11023EB1: jne 0x11023eba */
L_11023EB3:
    eax = MEM32(ebp + (-0x40)); /* 0x11023EB3: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11023EB6: mov dword ptr [eax], esi */
    goto L_11023EBD; /* 0x11023EB8: jmp 0x11023ebd */
L_11023EBA:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11023EBA: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023EBD:
    eax = MEM32(ebp + (-0x3C)); /* 0x11023EBD: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11023EC0: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11023EC3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023EC5: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11023EC8: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11023ECB: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023ED0: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023ED3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023ED3u);

L_11023ED3:
    PUSH32(esp, ebp); /* 0x11023ED3: push ebp */
    ebp = esp; /* 0x11023ED4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x11023ED6: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11023ED9: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11023EDE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11023EE0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11023EE3: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x48); /* 0x11023EE6: lea edx, [ebp - 0x48] */
    PUSH32(esp, ebx); /* 0x11023EE9: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11023EEA: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11023EED: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) & 0; /* 0x11023EF1: and dword ptr [ebp - 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11023EF5: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11023EF6: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11023EF9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11023EFA: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11023EFD: push edx */
    edx = ebp + (-0x4C); /* 0x11023EFE: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x11023F01: push edx */
    PUSH32(esp, eax); /* 0x11023F02: push eax */
    eax = ebp + 0x14; /* 0x11023F03: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023F06: push eax */
    eax = ebp + 0xC; /* 0x11023F07: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023F0A: push eax */
    eax = ebp + (-0x40); /* 0x11023F0B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023F0E: push eax */
    PUSH32(esp, ecx); /* 0x11023F0F: push ecx */
    RECOMP_ICALL(0x1101ED9Bu); /* 0x11023F10: call 0x1101ed9b */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023F15: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023F18: push eax */
    eax = ebp + (-0x50); /* 0x11023F19: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x11023F1C: push eax */
    eax = ebp + (-0x40); /* 0x11023F1D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023F20: push eax */
    RECOMP_CALL(sub_11030709); /* 0x11023F21: call 0x11030709 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x11023F26: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023F29: add esp, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x11023F2C: fstp dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x11023F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023F48; /* 0x11023F31: je 0x11023f48 */
L_11023F33:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x11023F33: fld dword ptr [ebp - 0x44] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11023F36: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11023F36: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11023F39: push eax */
    PUSH32(esp, ecx); /* 0x11023F3A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11023F3B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1102C261); /* 0x11023F3E: call 0x1102c261 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11023F43: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x11023F44: fstp dword ptr [ebp - 0x44] */
    ecx = POP32_VAL(esp); /* 0x11023F47: pop ecx */
L_11023F48:
    eax = ebp + 0x14; /* 0x11023F48: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023F4B: push eax */
    ecx = ebp + 0xC; /* 0x11023F4C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11023F4F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11023F54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11023F5B; /* 0x11023F56: je 0x11023f5b */
L_11023F58:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11023F58: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023F5B:
    eax = ebp + (-0x40); /* 0x11023F5B: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x50)), eax */ /* 0x11023F5E: cmp dword ptr [ebp - 0x50], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11023F70; /* 0x11023F61: je 0x11023f70 */
L_11023F63:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x11023F63: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11023F70; /* 0x11023F67: jne 0x11023f70 */
L_11023F69:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x11023F69: fld dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x11023F6C: fstp dword ptr [ebx] */
    goto L_11023F73; /* 0x11023F6E: jmp 0x11023f73 */
L_11023F70:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11023F70: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11023F73:
    ecx = MEM32(ebp + 0xC); /* 0x11023F73: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11023F76: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11023F78: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11023F7A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11023F7D: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11023F80: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11023F83: pop edi */
    esi = POP32_VAL(esp); /* 0x11023F84: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11023F85: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11023F87: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11023F88: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11023F8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11023F8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11023F90: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11023F95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11023F95u);

L_11023F95:
    PUSH32(esp, ebp); /* 0x11023F95: push ebp */
    ebp = esp; /* 0x11023F96: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x11023F98: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11023F9B: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11023FA0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11023FA2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11023FA5: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x11023FA8: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x11023FAB: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11023FAC: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11023FAF: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11023FB3: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x11023FB7: push esi */
    esi = MEM32(ebp + 0x20); /* 0x11023FB8: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x11023FBB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11023FBC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11023FBF: push edx */
    edx = ebp + (-0x48); /* 0x11023FC0: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x11023FC3: push edx */
    PUSH32(esp, eax); /* 0x11023FC4: push eax */
    eax = ebp + 0x14; /* 0x11023FC5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11023FC8: push eax */
    eax = ebp + 0xC; /* 0x11023FC9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11023FCC: push eax */
    eax = ebp + (-0x40); /* 0x11023FCD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023FD0: push eax */
    PUSH32(esp, ecx); /* 0x11023FD1: push ecx */
    RECOMP_ICALL(0x1101ED9Bu); /* 0x11023FD2: call 0x1101ed9b */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11023FD7: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11023FDA: push eax */
    eax = ebp + (-0x4C); /* 0x11023FDB: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11023FDE: push eax */
    eax = ebp + (-0x40); /* 0x11023FDF: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11023FE2: push eax */
    RECOMP_CALL(sub_11030933); /* 0x11023FE3: call 0x11030933 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x11023FE8: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11023FEB: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x11023FEE: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x11023FF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102400C; /* 0x11023FF3: je 0x1102400c */
L_11023FF5:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11023FF5: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11023FF5: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11023FF8: push eax */
    PUSH32(esp, ecx); /* 0x11023FF9: push ecx */
    PUSH32(esp, ecx); /* 0x11023FFA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11023FFB: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x11023FFE: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x11024004: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11024007: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1102400E; /* 0x1102400A: jmp 0x1102400e */
L_1102400C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1102400C: fstp st(0) */
L_1102400E:
    eax = ebp + 0x14; /* 0x1102400E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024011: push eax */
    ecx = ebp + 0xC; /* 0x11024012: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11024015: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102401A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024021; /* 0x1102401C: je 0x11024021 */
L_1102401E:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x1102401E: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024021:
    eax = ebp + (-0x40); /* 0x11024021: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x11024024: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11024036; /* 0x11024027: je 0x11024036 */
L_11024029:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x11024029: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11024036; /* 0x1102402D: jne 0x11024036 */
L_1102402F:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x1102402F: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x11024032: fstp qword ptr [ebx] */
    goto L_11024039; /* 0x11024034: jmp 0x11024039 */
L_11024036:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11024036: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024039:
    ecx = MEM32(ebp + 0xC); /* 0x11024039: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x1102403C: mov eax, edi */
    MEM32(edi) = ecx; /* 0x1102403E: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11024040: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11024043: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x11024046: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11024049: pop edi */
    esi = POP32_VAL(esp); /* 0x1102404A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102404B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1102404D: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102404E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11024053: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11024055: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11024056: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11024059(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11024059u);

L_11024059:
    PUSH32(esp, ebp); /* 0x11024059: push ebp */
    ebp = esp; /* 0x1102405A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x1102405C: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102405F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11024064: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11024066: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11024069: mov eax, dword ptr [ebp + 0x1c] */
    edx = ebp + (-0x44); /* 0x1102406C: lea edx, [ebp - 0x44] */
    PUSH32(esp, ebx); /* 0x1102406F: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x11024070: mov ebx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11024073: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11024077: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1102407B: push esi */
    esi = MEM32(ebp + 0x20); /* 0x1102407C: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x1102407F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11024080: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x11024083: push edx */
    edx = ebp + (-0x48); /* 0x11024084: lea edx, [ebp - 0x48] */
    PUSH32(esp, edx); /* 0x11024087: push edx */
    PUSH32(esp, eax); /* 0x11024088: push eax */
    eax = ebp + 0x14; /* 0x11024089: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102408C: push eax */
    eax = ebp + 0xC; /* 0x1102408D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024090: push eax */
    eax = ebp + (-0x40); /* 0x11024091: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11024094: push eax */
    PUSH32(esp, ecx); /* 0x11024095: push ecx */
    RECOMP_ICALL(0x1101ED9Bu); /* 0x11024096: call 0x1101ed9b */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102409B: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102409E: push eax */
    eax = ebp + (-0x4C); /* 0x1102409F: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110240A2: push eax */
    eax = ebp + (-0x40); /* 0x110240A3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110240A6: push eax */
    RECOMP_CALL(sub_11030BB4); /* 0x110240A7: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x110240AC: mov eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110240AF: add esp, 0x10 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x54)) = _st[0]; /* 0x110240B2: fst qword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x110240B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110240D0; /* 0x110240B7: je 0x110240d0 */
L_110240B9:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x110240B9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x110240B9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x110240BC: push eax */
    PUSH32(esp, ecx); /* 0x110240BD: push ecx */
    PUSH32(esp, ecx); /* 0x110240BE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110240BF: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x110240C2: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x110240C8: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110240CB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110240D2; /* 0x110240CE: jmp 0x110240d2 */
L_110240D0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110240D0: fstp st(0) */
L_110240D2:
    eax = ebp + 0x14; /* 0x110240D2: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110240D5: push eax */
    ecx = ebp + 0xC; /* 0x110240D6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110240D9: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110240DE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110240E5; /* 0x110240E0: je 0x110240e5 */
L_110240E2:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110240E2: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110240E5:
    eax = ebp + (-0x40); /* 0x110240E5: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x4C)), eax */ /* 0x110240E8: cmp dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110240FA; /* 0x110240EB: je 0x110240fa */
L_110240ED:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x110240ED: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110240FA; /* 0x110240F1: jne 0x110240fa */
L_110240F3:
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x110240F3: fld qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x110240F6: fstp qword ptr [ebx] */
    goto L_110240FD; /* 0x110240F8: jmp 0x110240fd */
L_110240FA:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x110240FA: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110240FD:
    ecx = MEM32(ebp + 0xC); /* 0x110240FD: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x11024100: mov eax, edi */
    MEM32(edi) = ecx; /* 0x11024102: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11024104: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi + 0x4) = ecx; /* 0x11024107: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1102410A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1102410D: pop edi */
    esi = POP32_VAL(esp); /* 0x1102410E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102410F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11024111: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11024112: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11024117: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11024119: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102411A: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102411D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102411Du);

L_1102411D:
    PUSH32(esp, 0x3Cu); /* 0x1102411D: push 0x3c */
    eax = 0x1103E60Fu; /* 0x1102411F: mov eax, 0x1103e60f */
    RECOMP_CALL(sub_1103B3A5); /* 0x11024124: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11024129: mov esi, ecx */
    eax = MEM32(ebp + 0x24); /* 0x1102412B: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x1C); /* 0x1102412E: mov ecx, dword ptr [ebp + 0x1c] */
    ebx = MEM32(ebp + 0x8); /* 0x11024131: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11024134: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x11024137: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = eax; /* 0x1102413B: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x3C); /* 0x1102413E: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x11024141: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024142: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11024147: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102414B: push eax */
    PUSH32(esp, 0x800u); /* 0x1102414C: push 0x800 */
    eax = ebp + 0x14; /* 0x11024151: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024154: push eax */
    eax = ebp + 0xC; /* 0x11024155: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024158: push eax */
    eax = ebp + (-0x30); /* 0x11024159: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1102415C: push eax */
    PUSH32(esp, esi); /* 0x1102415D: push esi */
    RECOMP_CALL(sub_1102109D); /* 0x1102415E: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11024163: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x3C); /* 0x11024167: lea ecx, [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102416A: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1102416D: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1102416F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x11024174: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11024177: push eax */
    PUSH32(esp, esi); /* 0x11024178: push esi */
    eax = ebp + (-0x38); /* 0x11024179: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1102417C: push eax */
    eax = ebp + (-0x30); /* 0x1102417D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11024180: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11024181: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11024186: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0xC; /* 0x1102418A: lea ecx, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102418D: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11024190: mov esi, eax */
    eax = ebp + 0x14; /* 0x11024192: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024195: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x11024196: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102419B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110241A2; /* 0x1102419D: je 0x110241a2 */
L_1102419F:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x1102419F: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110241A2:
    eax = ebp + (-0x30); /* 0x110241A2: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x110241A5: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110241B7; /* 0x110241A8: je 0x110241b7 */
L_110241AA:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x110241AA: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110241B7; /* 0x110241AE: jne 0x110241b7 */
L_110241B0:
    eax = MEM32(ebp + (-0x40)); /* 0x110241B0: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x110241B3: mov dword ptr [eax], esi */
    goto L_110241BA; /* 0x110241B5: jmp 0x110241ba */
L_110241B7:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110241B7: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110241BA:
    ecx = MEM32(ebp + 0xC); /* 0x110241BA: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x110241BD: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x110241BF: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110241C1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x110241C4: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x110241C7: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110241CC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110241CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110241CFu);

L_110241CF:
    PUSH32(esp, 0x38u); /* 0x110241CF: push 0x38 */
    eax = 0x1103E63Cu; /* 0x110241D1: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x110241D6: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110241DB: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x110241DD: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x110241E0: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x110241E3: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x110241E5: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x110241E8: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110241EC: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110241EF: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110241F2: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x110241F5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110241F8: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110241F9: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110241FE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11024202: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11024205: push ecx */
    PUSH32(esp, eax); /* 0x11024206: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11024207: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x1102420A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102420D: push eax */
    eax = ebp + 0xC; /* 0x1102420E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024211: push eax */
    eax = ebp + (-0x30); /* 0x11024212: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11024215: push eax */
    PUSH32(esp, edi); /* 0x11024216: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x11024217: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102421C: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102421F: push eax */
    eax = ebp + (-0x38); /* 0x11024220: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11024223: push eax */
    eax = ebp + (-0x30); /* 0x11024224: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11024227: push eax */
    RECOMP_CALL(sub_11031075); /* 0x11024228: call 0x11031075 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102422D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11024231: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11024234: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x11024237: mov esi, eax */
    edi = edx; /* 0x11024239: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x1102423B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x11024240: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024243: push eax */
    ecx = ebp + 0xC; /* 0x11024244: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11024247: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102424C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024253; /* 0x1102424E: je 0x11024253 */
L_11024250:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11024250: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024253:
    eax = ebp + (-0x30); /* 0x11024253: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x11024256: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102426B; /* 0x11024259: je 0x1102426b */
L_1102425B:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1102425B: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102426B; /* 0x1102425F: jne 0x1102426b */
L_11024261:
    eax = MEM32(ebp + (-0x40)); /* 0x11024261: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11024264: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x11024266: mov dword ptr [eax + 4], edi */
    goto L_1102426E; /* 0x11024269: jmp 0x1102426e */
L_1102426B:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x1102426B: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102426E:
    eax = MEM32(ebp + (-0x3C)); /* 0x1102426E: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11024271: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11024274: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11024276: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11024279: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x1102427C: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11024281: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11024284(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11024284u);

L_11024284:
    PUSH32(esp, 0x38u); /* 0x11024284: push 0x38 */
    eax = 0x1103E63Cu; /* 0x11024286: mov eax, 0x1103e63c */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102428B: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11024290: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x11024292: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x11024295: mov esi, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x11024298: mov ecx, esi */
    ebx = MEM32(ebp + 0x20); /* 0x1102429A: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x1102429D: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x110242A1: mov dword ptr [ebp - 0x3c], eax */
    eax = MEM32(ebp + 0x24); /* 0x110242A4: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x40)) = eax; /* 0x110242A7: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x44); /* 0x110242AA: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110242AD: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110242AE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110242B3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x110242B7: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x110242BA: push ecx */
    PUSH32(esp, eax); /* 0x110242BB: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110242BC: push dword ptr [esi + 0x14] */
    eax = ebp + 0x14; /* 0x110242BF: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110242C2: push eax */
    eax = ebp + 0xC; /* 0x110242C3: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110242C6: push eax */
    eax = ebp + (-0x30); /* 0x110242C7: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110242CA: push eax */
    PUSH32(esp, edi); /* 0x110242CB: push edi */
    RECOMP_CALL(sub_1102109D); /* 0x110242CC: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110242D1: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110242D4: push eax */
    eax = ebp + (-0x38); /* 0x110242D5: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x110242D8: push eax */
    eax = ebp + (-0x30); /* 0x110242D9: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x110242DC: push eax */
    RECOMP_CALL(sub_11031159); /* 0x110242DD: call 0x11031159 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110242E2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110242E6: lea ecx, [ebp - 0x44] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110242E9: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x110242EC: mov esi, eax */
    edi = edx; /* 0x110242EE: mov edi, edx */
    RECOMP_CALL(sub_1100E431); /* 0x110242F0: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x110242F5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110242F8: push eax */
    ecx = ebp + 0xC; /* 0x110242F9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110242FC: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11024301: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024308; /* 0x11024303: je 0x11024308 */
L_11024305:
    _flag_a = (uint32_t)((MEM32(ebx) | 1)); _flag_b = (uint32_t)((MEM32(ebx) | 1));
    MEM32(ebx) = MEM32(ebx) | 1; /* 0x11024305: or dword ptr [ebx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024308:
    eax = ebp + (-0x30); /* 0x11024308: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x1102430B: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11024320; /* 0x1102430E: je 0x11024320 */
L_11024310:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x11024310: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11024320; /* 0x11024314: jne 0x11024320 */
L_11024316:
    eax = MEM32(ebp + (-0x40)); /* 0x11024316: mov eax, dword ptr [ebp - 0x40] */
    MEM32(eax) = esi; /* 0x11024319: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x1102431B: mov dword ptr [eax + 4], edi */
    goto L_11024323; /* 0x1102431E: jmp 0x11024323 */
L_11024320:
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x11024320: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024323:
    eax = MEM32(ebp + (-0x3C)); /* 0x11024323: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + 0xC); /* 0x11024326: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11024329: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1102432B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x1102432E: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x11024331: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11024336: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11024339(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11024339u);

L_11024339:
    PUSH32(esp, 0x6Cu); /* 0x11024339: push 0x6c */
    eax = 0x1103E5E2u; /* 0x1102433B: mov eax, 0x1103e5e2 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11024340: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x64)) = ecx; /* 0x11024345: mov dword ptr [ebp - 0x64], ecx */
    eax = MEM32(ebp + 0x1C); /* 0x11024348: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1102434B: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x1102434E: mov ecx, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x8); /* 0x11024351: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x20); /* 0x11024354: mov edi, dword ptr [ebp + 0x20] */
    /* test MEM32(eax + 0x14), 0x4000u */ /* 0x11024357: test dword ptr [eax + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x68)) = eax; /* 0x1102435E: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x74)) = ecx; /* 0x11024361: mov dword ptr [ebp - 0x74], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024448; /* 0x11024364: je 0x11024448 */
L_1102436A:
    ecx = ebp + (-0x68); /* 0x1102436A: lea ecx, [ebp - 0x68] */
    PUSH32(esp, ecx); /* 0x1102436D: push ecx */
    ecx = eax; /* 0x1102436E: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024370: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11024375: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11024379: push eax */
    RECOMP_CALL(sub_11015CA5); /* 0x1102437A: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102437F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11024383: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11024385: pop ecx */
    ecx = ebp + (-0x68); /* 0x11024386: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100E431); /* 0x11024389: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x1102438E: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x11024392: lea ecx, [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11024395: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 7; /* 0x11024397: mov dword ptr [ebp - 0x34], 7 */
    PUSH32(esp, eax); /* 0x1102439E: push eax */
    PUSH32(esp, 1); /* 0x1102439F: push 1 */
    MEM16(ebp + (-0x48)) = (uint16_t)(LO16(eax)); /* 0x110243A1: mov word ptr [ebp - 0x48], ax */
    RECOMP_CALL(sub_1102283F); /* 0x110243A5: call 0x1102283f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x110243AA: lea eax, [ebp - 0x60] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110243AD: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x110243B4: push eax */
    ecx = esi; /* 0x110243B5: mov ecx, esi */
    RECOMP_CALL(sub_11037B56); /* 0x110243B7: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x110243BC: push -1 */
    PUSH32(esp, 0); /* 0x110243BE: push 0 */
    PUSH32(esp, eax); /* 0x110243C0: push eax */
    ecx = ebp + (-0x48); /* 0x110243C1: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110243C4: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11022706); /* 0x110243C8: call 0x11022706 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110243CD: push 0 */
    PUSH32(esp, 1); /* 0x110243CF: push 1 */
    ecx = ebp + (-0x60); /* 0x110243D1: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110243D4: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1102261D); /* 0x110243D8: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110243DD: push 0 */
    PUSH32(esp, 1); /* 0x110243DF: push 1 */
    ecx = ebp + (-0x48); /* 0x110243E1: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_110226A3); /* 0x110243E4: call 0x110226a3 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x110243E9: lea eax, [ebp - 0x60] */
    ecx = esi; /* 0x110243EC: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110243EE: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x110243EF: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x110243F4: push -1 */
    PUSH32(esp, 0); /* 0x110243F6: push 0 */
    PUSH32(esp, eax); /* 0x110243F8: push eax */
    ecx = ebp + (-0x48); /* 0x110243F9: lea ecx, [ebp - 0x48] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110243FC: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11022706); /* 0x11024400: call 0x11022706 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11024405: push 0 */
    PUSH32(esp, 1); /* 0x11024407: push 1 */
    ecx = ebp + (-0x60); /* 0x11024409: lea ecx, [ebp - 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1102440C: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11024410: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x34)), 8 */ /* 0x11024415: cmp dword ptr [ebp - 0x34], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x48)); /* 0x11024419: mov eax, dword ptr [ebp - 0x48] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11024421; /* 0x1102441C: jae 0x11024421 */
L_1102441E:
    eax = ebp + (-0x48); /* 0x1102441E: lea eax, [ebp - 0x48] */
L_11024421:
    PUSH32(esp, eax); /* 0x11024421: push eax */
    PUSH32(esp, 2); /* 0x11024422: push 2 */
    eax = ebp + 0x14; /* 0x11024424: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024427: push eax */
    eax = ebp + 0xC; /* 0x11024428: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102442B: push eax */
    RECOMP_CALL(sub_1101535D); /* 0x1102442C: call 0x1101535d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11024431: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x11024435: lea ecx, [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11024438: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1102443B: mov esi, eax */
    PUSH32(esp, 0); /* 0x1102443D: push 0 */
    PUSH32(esp, 1); /* 0x1102443F: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11024441: call 0x1102261d */
    RECOMP_FLAGS_IN();
    goto L_110244B8; /* 0x11024446: jmp 0x110244b8 */
L_11024448:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) & 0; /* 0x11024448: and dword ptr [ebp - 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x1102444C: lea ecx, [ebp - 0x78] */
    PUSH32(esp, ecx); /* 0x1102444F: push ecx */
    ecx = eax; /* 0x11024450: mov ecx, eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024452: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x6C); /* 0x11024457: lea ecx, [ebp - 0x6c] */
    MEM32(ebp + (-0x4)) = 4; /* 0x1102445A: mov dword ptr [ebp - 4], 4 */
    PUSH32(esp, ecx); /* 0x11024461: push ecx */
    PUSH32(esp, eax); /* 0x11024462: push eax */
    eax = MEM32(ebp + (-0x68)); /* 0x11024463: mov eax, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x11024466: push dword ptr [eax + 0x14] */
    eax = ebp + 0x14; /* 0x11024469: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102446C: push eax */
    eax = ebp + 0xC; /* 0x1102446D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024470: push eax */
    eax = ebp + (-0x30); /* 0x11024471: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11024474: push eax */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x11024475: push dword ptr [ebp - 0x64] */
    RECOMP_CALL(sub_1102109D); /* 0x11024478: call 0x1102109d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102447D: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024480: push eax */
    eax = ebp + (-0x70); /* 0x11024481: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11024484: push eax */
    eax = ebp + (-0x30); /* 0x11024485: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x11024488: push eax */
    RECOMP_CALL(sub_11030ED9); /* 0x11024489: call 0x11030ed9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102448E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x11024492: lea ecx, [ebp - 0x78] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11024495: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = eax; /* 0x11024498: mov dword ptr [ebp - 0x64], eax */
    RECOMP_CALL(sub_1100E431); /* 0x1102449B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x110244A0: lea eax, [ebp - 0x30] */
    /* cmp MEM32(ebp + (-0x70)), eax */ /* 0x110244A3: cmp dword ptr [ebp - 0x70], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110244B8; /* 0x110244A6: je 0x110244b8 */
L_110244A8:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x110244A8: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110244B8; /* 0x110244AC: jne 0x110244b8 */
L_110244AE:
    eax = MEM32(ebp + (-0x64)); /* 0x110244AE: mov eax, dword ptr [ebp - 0x64] */
    /* cmp eax, 1 */ /* 0x110244B1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110244B8; /* 0x110244B4: ja 0x110244b8 */
L_110244B6:
    esi = eax; /* 0x110244B6: mov esi, eax */
L_110244B8:
    eax = ebp + 0x14; /* 0x110244B8: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110244BB: push eax */
    ecx = ebp + 0xC; /* 0x110244BC: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110244BF: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110244C4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110244CB; /* 0x110244C6: je 0x110244cb */
L_110244C8:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110244C8: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110244CB:
    /* test esi, esi */ /* 0x110244CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110244D4; /* 0x110244CD: jns 0x110244d4 */
L_110244CF:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110244CF: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110244DC; /* 0x110244D2: jmp 0x110244dc */
L_110244D4:
    eax = MEM32(ebp + (-0x74)); /* 0x110244D4: mov eax, dword ptr [ebp - 0x74] */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x110244D7: setne cl */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x110244DA: mov byte ptr [eax], cl */
L_110244DC:
    ecx = MEM32(ebp + 0xC); /* 0x110244DC: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x110244DF: mov eax, ebx */
    MEM32(ebx) = ecx; /* 0x110244E1: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110244E3: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x110244E6: mov dword ptr [ebx + 4], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x110244E9: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110244EE: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110244F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110244F1u);

L_110244F1:
    PUSH32(esp, 0x58u); /* 0x110244F1: push 0x58 */
    eax = 0x1103E669u; /* 0x110244F3: mov eax, 0x1103e669 */
    RECOMP_CALL(sub_1103B372); /* 0x110244F8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110244FD: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x110244FF: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x14); /* 0x11024502: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x11024505: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024506: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1102450B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102450F: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11024510: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11024515: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11024519: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1102451B: pop ecx */
    ecx = ebp + (-0x14); /* 0x1102451C: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1100E431); /* 0x1102451F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x28); /* 0x11024524: mov ecx, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11024527: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x20); /* 0x11024529: mov esi, dword ptr [ebp + 0x20] */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x1102452C: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFBFu; /* 0x1102452F: add ecx, -0x41 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x11024532: mov dword ptr [ebp - 0x10], edx */
    /* cmp ecx, 0x38u */ /* 0x11024535: cmp ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11024796; /* 0x11024538: ja 0x11024796 */
L_1102453E:
    eax = (uint32_t)MEM8(ecx + 0x11024821); /* 0x1102453E: movzx eax, byte ptr [ecx + 0x11024821] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x110247C5)); goto _ljump; }
L_1102454C:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102454C: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x1102454F: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x11024551: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11024554: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024555: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024558: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102455B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102455E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024561: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024564: push ecx */
    ecx = edi; /* 0x11024565: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11024567: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1102456A: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + 0xC) = eax; /* 0x1102456D: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x11024570: mov eax, dword ptr [ebp - 0x18] */
L_11024573:
    MEM32(ebp + 0x10) = eax; /* 0x11024573: mov dword ptr [ebp + 0x10], eax */
    goto L_11024799; /* 0x11024576: jmp 0x11024799 */
L_1102457B:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102457B: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x1102457E: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x24); /* 0x11024580: lea ecx, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x11024583: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024584: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024587: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102458A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102458D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024590: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024593: push ecx */
    ecx = edi; /* 0x11024594: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11024596: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11024599: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x1102459C: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1102459F: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_11024573; /* 0x110245A2: jmp 0x11024573 */
L_110245A4:
    PUSH32(esp, 0x110023A0u); /* 0x110245A4: push 0x110023a0 */
    eax = ebp + (-0x34); /* 0x110245A9: lea eax, [ebp - 0x34] */
L_110245AC:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110245AC: push dword ptr [ebp + 0x24] */
    ecx = edi; /* 0x110245AF: mov ecx, edi */
    PUSH32(esp, esi); /* 0x110245B1: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110245B2: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110245B5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110245B8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110245BB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110245BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110245C1: push eax */
    RECOMP_CALL(sub_110206B7); /* 0x110245C2: call 0x110206b7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x110245C7: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x110245C9: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x110245CC: mov eax, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_11024573; /* 0x110245CF: jmp 0x11024573 */
L_110245D1:
    PUSH32(esp, ebx); /* 0x110245D1: push ebx */
    eax = ebp + (-0x10); /* 0x110245D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110245D5: push eax */
    PUSH32(esp, 0x63u); /* 0x110245D6: push 0x63 */
    PUSH32(esp, edx); /* 0x110245D8: push edx */
    eax = ebp + 0x14; /* 0x110245D9: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110245DC: push eax */
    eax = ebp + 0xC; /* 0x110245DD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110245E0: push eax */
    PUSH32(esp, edi); /* 0x110245E1: push edi */
    RECOMP_CALL(sub_11021423); /* 0x110245E2: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x110245E7: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110245E9: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x110245EC: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x110245EE: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024799; /* 0x110245F0: jne 0x11024799 */
L_110245F6:
    eax = MEM32(ebp + (-0x10)); /* 0x110245F6: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEDu; /* 0x110245F9: add eax, -0x13 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x110245FC: imul ecx, eax, 0x64 */
L_110245FF:
    eax = MEM32(ebp + 0x24); /* 0x110245FF: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x11024602: mov dword ptr [eax + 0x14], ecx */
    goto L_11024799; /* 0x11024605: jmp 0x11024799 */
L_1102460A:
    eax = MEM32(ebp + 0x24); /* 0x1102460A: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102460D: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1102460E: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024611: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11024612: push 0x1f */
L_11024614:
    PUSH32(esp, 1); /* 0x11024614: push 1 */
L_11024616:
    eax = ebp + 0x14; /* 0x11024616: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024619: push eax */
    eax = ebp + 0xC; /* 0x1102461A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102461D: push eax */
    PUSH32(esp, edi); /* 0x1102461E: push edi */
    RECOMP_CALL(sub_11021423); /* 0x1102461F: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024624: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11024627: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11024799; /* 0x11024629: jmp 0x11024799 */
L_1102462E:
    PUSH32(esp, 0x110023B8u); /* 0x1102462E: push 0x110023b8 */
    eax = ebp + (-0x3C); /* 0x11024633: lea eax, [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x11024636: jmp 0x110245ac */
L_1102463B:
    eax = MEM32(ebp + 0x24); /* 0x1102463B: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102463E: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1102463F: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024642: push eax */
    PUSH32(esp, 0x17u); /* 0x11024643: push 0x17 */
L_11024645:
    PUSH32(esp, edx); /* 0x11024645: push edx */
    RECOMP_BACKEDGE();
    goto L_11024616; /* 0x11024646: jmp 0x11024616 */
L_11024648:
    eax = MEM32(ebp + 0x24); /* 0x11024648: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102464B: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1102464C: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102464F: push eax */
    PUSH32(esp, 0xBu); /* 0x11024650: push 0xb */
    RECOMP_BACKEDGE();
    goto L_11024645; /* 0x11024652: jmp 0x11024645 */
L_11024654:
    eax = MEM32(ebp + 0x24); /* 0x11024654: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024657: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x11024658: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102465B: push eax */
    PUSH32(esp, 0x16Eu); /* 0x1102465C: push 0x16e */
    RECOMP_BACKEDGE();
    goto L_11024614; /* 0x11024661: jmp 0x11024614 */
L_11024663:
    PUSH32(esp, ebx); /* 0x11024663: push ebx */
    eax = ebp + (-0x10); /* 0x11024664: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024667: push eax */
    PUSH32(esp, 0xCu); /* 0x11024668: push 0xc */
    PUSH32(esp, 1); /* 0x1102466A: push 1 */
    eax = ebp + 0x14; /* 0x1102466C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102466F: push eax */
    eax = ebp + 0xC; /* 0x11024670: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024673: push eax */
    PUSH32(esp, edi); /* 0x11024674: push edi */
    RECOMP_CALL(sub_11021423); /* 0x11024675: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x1102467A: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102467C: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x1102467F: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024681: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024799; /* 0x11024683: jne 0x11024799 */
L_11024689:
    eax = MEM32(ebp + 0x24); /* 0x11024689: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1102468C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1102468F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + 0x10) = ecx; /* 0x11024690: mov dword ptr [eax + 0x10], ecx */
    goto L_11024799; /* 0x11024693: jmp 0x11024799 */
L_11024698:
    eax = MEM32(ebp + 0x24); /* 0x11024698: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102469B: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1102469C: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102469F: push eax */
L_110246A0:
    PUSH32(esp, 0x3Bu); /* 0x110246A0: push 0x3b */
    RECOMP_BACKEDGE();
    goto L_11024645; /* 0x110246A2: jmp 0x11024645 */
L_110246A4:
    PUSH32(esp, 0x110023C8u); /* 0x110246A4: push 0x110023c8 */
    eax = ebp + (-0x44); /* 0x110246A9: lea eax, [ebp - 0x44] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x110246AC: jmp 0x110245ac */
L_110246B1:
    PUSH32(esp, 0x110023CCu); /* 0x110246B1: push 0x110023cc */
    PUSH32(esp, edx); /* 0x110246B6: push edx */
    eax = ebp + 0x14; /* 0x110246B7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110246BA: push eax */
    eax = ebp + 0xC; /* 0x110246BB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110246BE: push eax */
    RECOMP_CALL(sub_11015061); /* 0x110246BF: call 0x11015061 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110246C4: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x110246C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11024796; /* 0x110246C9: js 0x11024796 */
L_110246CF:
    ecx = MEM32(ebp + 0x24); /* 0x110246CF: mov ecx, dword ptr [ebp + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x110246D2: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x110246D5: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    goto L_11024799; /* 0x110246D8: jmp 0x11024799 */
L_110246DD:
    PUSH32(esp, 0x110023DCu); /* 0x110246DD: push 0x110023dc */
    eax = ebp + (-0x4C); /* 0x110246E2: lea eax, [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x110246E5: jmp 0x110245ac */
L_110246EA:
    PUSH32(esp, 0x110023ECu); /* 0x110246EA: push 0x110023ec */
    eax = ebp + (-0x54); /* 0x110246EF: lea eax, [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x110246F2: jmp 0x110245ac */
L_110246F7:
    PUSH32(esp, ebx); /* 0x110246F7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110246F8: push dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_110246A0; /* 0x110246FB: jmp 0x110246a0 */
L_110246FD:
    PUSH32(esp, 0x110023F4u); /* 0x110246FD: push 0x110023f4 */
    eax = ebp + (-0x5C); /* 0x11024702: lea eax, [ebp - 0x5c] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x11024705: jmp 0x110245ac */
L_1102470A:
    eax = MEM32(ebp + 0x24); /* 0x1102470A: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102470D: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x1102470E: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024711: push eax */
    PUSH32(esp, 0x35u); /* 0x11024712: push 0x35 */
    RECOMP_BACKEDGE();
    goto L_11024645; /* 0x11024714: jmp 0x11024645 */
L_11024719:
    eax = MEM32(ebp + 0x24); /* 0x11024719: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102471C: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1102471D: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024720: push eax */
    PUSH32(esp, 6); /* 0x11024721: push 6 */
    RECOMP_BACKEDGE();
    goto L_11024645; /* 0x11024723: jmp 0x11024645 */
L_11024728:
    PUSH32(esp, 0x11002400u); /* 0x11024728: push 0x11002400 */
    eax = ebp + (-0x64); /* 0x1102472D: lea eax, [ebp - 0x64] */
    RECOMP_BACKEDGE();
    goto L_110245AC; /* 0x11024730: jmp 0x110245ac */
L_11024735:
    PUSH32(esp, ebx); /* 0x11024735: push ebx */
    eax = ebp + (-0x10); /* 0x11024736: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024739: push eax */
    PUSH32(esp, 0x63u); /* 0x1102473A: push 0x63 */
    PUSH32(esp, edx); /* 0x1102473C: push edx */
    eax = ebp + 0x14; /* 0x1102473D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024740: push eax */
    eax = ebp + 0xC; /* 0x11024741: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024744: push eax */
    PUSH32(esp, edi); /* 0x11024745: push edi */
    RECOMP_CALL(sub_11021423); /* 0x11024746: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x1102474B: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102474D: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024750: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024752: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024799; /* 0x11024754: jne 0x11024799 */
L_11024756:
    ecx = MEM32(ebp + (-0x10)); /* 0x11024756: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, 0x45u */ /* 0x11024759: cmp ecx, 0x45 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_110245FF; /* 0x1102475C: jge 0x110245ff */
L_11024762:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x11024762: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_110245FF; /* 0x11024765: jmp 0x110245ff */
L_1102476A:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102476A: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x1102476D: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x1102476F: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x11024772: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024773: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024776: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024779: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102477C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102477F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024782: push ecx */
    ecx = edi; /* 0x11024783: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11024785: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x11024788: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x1102478B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1102478E: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_11024573; /* 0x11024791: jmp 0x11024573 */
L_11024796:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11024796: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024799:
    eax = ebp + 0x14; /* 0x11024799: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102479C: push eax */
    ecx = ebp + 0xC; /* 0x1102479D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110247A0: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110247A5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110247AC; /* 0x110247A7: je 0x110247ac */
L_110247A9:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110247A9: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110247AC:
    eax = MEM32(ebp + 0x8); /* 0x110247AC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110247AF: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110247B2: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110247B4: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110247B7: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110247BA: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x110247BF: ret 0x28 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1102454Cu: goto L_1102454C;
      case 0x1102457Bu: goto L_1102457B;
      case 0x110245A4u: goto L_110245A4;
      case 0x110245D1u: goto L_110245D1;
      case 0x1102460Au: goto L_1102460A;
      case 0x1102462Eu: goto L_1102462E;
      case 0x1102463Bu: goto L_1102463B;
      case 0x11024648u: goto L_11024648;
      case 0x11024654u: goto L_11024654;
      case 0x11024663u: goto L_11024663;
      case 0x11024698u: goto L_11024698;
      case 0x110246A4u: goto L_110246A4;
      case 0x110246B1u: goto L_110246B1;
      case 0x110246DDu: goto L_110246DD;
      case 0x110246EAu: goto L_110246EA;
      case 0x110246F7u: goto L_110246F7;
      case 0x110246FDu: goto L_110246FD;
      case 0x1102470Au: goto L_1102470A;
      case 0x11024719u: goto L_11024719;
      case 0x11024728u: goto L_11024728;
      case 0x11024735u: goto L_11024735;
      case 0x1102476Au: goto L_1102476A;
      case 0x11024796u: goto L_11024796;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1102485A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102485Au);

L_1102485A:
    PUSH32(esp, 0x58u); /* 0x1102485A: push 0x58 */
    eax = 0x1103E669u; /* 0x1102485C: mov eax, 0x1103e669 */
    RECOMP_CALL(sub_1103B372); /* 0x11024861: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11024866: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11024868: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x14); /* 0x1102486B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1102486E: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102486F: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11024874: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11024878: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x11024879: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102487E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11024882: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x11024884: pop ecx */
    ecx = ebp + (-0x14); /* 0x11024885: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1100E431); /* 0x11024888: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x28); /* 0x1102488D: mov ecx, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11024890: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x20); /* 0x11024892: mov esi, dword ptr [ebp + 0x20] */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x11024895: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFBFu; /* 0x11024898: add ecx, -0x41 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x1102489B: mov dword ptr [ebp - 0x10], edx */
    /* cmp ecx, 0x38u */ /* 0x1102489E: cmp ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11024AFF; /* 0x110248A1: ja 0x11024aff */
L_110248A7:
    eax = (uint32_t)MEM8(ecx + 0x11024B8A); /* 0x110248A7: movzx eax, byte ptr [ecx + 0x11024b8a] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x11024B2E)); goto _ljump; }
L_110248B5:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110248B5: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x110248B8: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x110248BA: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x110248BD: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110248BE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110248C1: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110248C4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110248C7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110248CA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110248CD: push ecx */
    ecx = edi; /* 0x110248CE: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x110248D0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x110248D3: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + 0xC) = eax; /* 0x110248D6: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x110248D9: mov eax, dword ptr [ebp - 0x18] */
L_110248DC:
    MEM32(ebp + 0x10) = eax; /* 0x110248DC: mov dword ptr [ebp + 0x10], eax */
    goto L_11024B02; /* 0x110248DF: jmp 0x11024b02 */
L_110248E4:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110248E4: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x110248E7: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x24); /* 0x110248E9: lea ecx, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x110248EC: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110248ED: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110248F0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110248F3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110248F6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110248F9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110248FC: push ecx */
    ecx = edi; /* 0x110248FD: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x110248FF: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11024902: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x11024905: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x11024908: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_110248DC; /* 0x1102490B: jmp 0x110248dc */
L_1102490D:
    PUSH32(esp, 0x110023A0u); /* 0x1102490D: push 0x110023a0 */
    eax = ebp + (-0x34); /* 0x11024912: lea eax, [ebp - 0x34] */
L_11024915:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024915: push dword ptr [ebp + 0x24] */
    ecx = edi; /* 0x11024918: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1102491A: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102491B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102491E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024921: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024924: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024927: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102492A: push eax */
    RECOMP_CALL(sub_110207C2); /* 0x1102492B: call 0x110207c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11024930: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11024932: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11024935: mov eax, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_110248DC; /* 0x11024938: jmp 0x110248dc */
L_1102493A:
    PUSH32(esp, ebx); /* 0x1102493A: push ebx */
    eax = ebp + (-0x10); /* 0x1102493B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1102493E: push eax */
    PUSH32(esp, 0x63u); /* 0x1102493F: push 0x63 */
    PUSH32(esp, edx); /* 0x11024941: push edx */
    eax = ebp + 0x14; /* 0x11024942: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024945: push eax */
    eax = ebp + 0xC; /* 0x11024946: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024949: push eax */
    PUSH32(esp, edi); /* 0x1102494A: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x1102494B: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x11024950: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024952: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024955: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024957: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024B02; /* 0x11024959: jne 0x11024b02 */
L_1102495F:
    eax = MEM32(ebp + (-0x10)); /* 0x1102495F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEDu; /* 0x11024962: add eax, -0x13 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x11024965: imul ecx, eax, 0x64 */
L_11024968:
    eax = MEM32(ebp + 0x24); /* 0x11024968: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x1102496B: mov dword ptr [eax + 0x14], ecx */
    goto L_11024B02; /* 0x1102496E: jmp 0x11024b02 */
L_11024973:
    eax = MEM32(ebp + 0x24); /* 0x11024973: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024976: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11024977: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102497A: push eax */
    PUSH32(esp, 0x1Fu); /* 0x1102497B: push 0x1f */
L_1102497D:
    PUSH32(esp, 1); /* 0x1102497D: push 1 */
L_1102497F:
    eax = ebp + 0x14; /* 0x1102497F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024982: push eax */
    eax = ebp + 0xC; /* 0x11024983: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024986: push eax */
    PUSH32(esp, edi); /* 0x11024987: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024988: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102498D: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11024990: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11024B02; /* 0x11024992: jmp 0x11024b02 */
L_11024997:
    PUSH32(esp, 0x110023B8u); /* 0x11024997: push 0x110023b8 */
    eax = ebp + (-0x3C); /* 0x1102499C: lea eax, [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x1102499F: jmp 0x11024915 */
L_110249A4:
    eax = MEM32(ebp + 0x24); /* 0x110249A4: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x110249A7: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x110249A8: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110249AB: push eax */
    PUSH32(esp, 0x17u); /* 0x110249AC: push 0x17 */
L_110249AE:
    PUSH32(esp, edx); /* 0x110249AE: push edx */
    RECOMP_BACKEDGE();
    goto L_1102497F; /* 0x110249AF: jmp 0x1102497f */
L_110249B1:
    eax = MEM32(ebp + 0x24); /* 0x110249B1: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x110249B4: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x110249B5: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110249B8: push eax */
    PUSH32(esp, 0xBu); /* 0x110249B9: push 0xb */
    RECOMP_BACKEDGE();
    goto L_110249AE; /* 0x110249BB: jmp 0x110249ae */
L_110249BD:
    eax = MEM32(ebp + 0x24); /* 0x110249BD: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x110249C0: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x110249C1: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110249C4: push eax */
    PUSH32(esp, 0x16Eu); /* 0x110249C5: push 0x16e */
    RECOMP_BACKEDGE();
    goto L_1102497D; /* 0x110249CA: jmp 0x1102497d */
L_110249CC:
    PUSH32(esp, ebx); /* 0x110249CC: push ebx */
    eax = ebp + (-0x10); /* 0x110249CD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110249D0: push eax */
    PUSH32(esp, 0xCu); /* 0x110249D1: push 0xc */
    PUSH32(esp, 1); /* 0x110249D3: push 1 */
    eax = ebp + 0x14; /* 0x110249D5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110249D8: push eax */
    eax = ebp + 0xC; /* 0x110249D9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110249DC: push eax */
    PUSH32(esp, edi); /* 0x110249DD: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x110249DE: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x110249E3: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110249E5: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x110249E8: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x110249EA: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024B02; /* 0x110249EC: jne 0x11024b02 */
L_110249F2:
    eax = MEM32(ebp + 0x24); /* 0x110249F2: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x10)); /* 0x110249F5: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x110249F8: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + 0x10) = ecx; /* 0x110249F9: mov dword ptr [eax + 0x10], ecx */
    goto L_11024B02; /* 0x110249FC: jmp 0x11024b02 */
L_11024A01:
    eax = MEM32(ebp + 0x24); /* 0x11024A01: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024A04: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11024A05: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024A08: push eax */
L_11024A09:
    PUSH32(esp, 0x3Bu); /* 0x11024A09: push 0x3b */
    RECOMP_BACKEDGE();
    goto L_110249AE; /* 0x11024A0B: jmp 0x110249ae */
L_11024A0D:
    PUSH32(esp, 0x110023C8u); /* 0x11024A0D: push 0x110023c8 */
    eax = ebp + (-0x44); /* 0x11024A12: lea eax, [ebp - 0x44] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x11024A15: jmp 0x11024915 */
L_11024A1A:
    PUSH32(esp, 0x110023CCu); /* 0x11024A1A: push 0x110023cc */
    PUSH32(esp, edx); /* 0x11024A1F: push edx */
    eax = ebp + 0x14; /* 0x11024A20: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024A23: push eax */
    eax = ebp + 0xC; /* 0x11024A24: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024A27: push eax */
    RECOMP_CALL(sub_110151DB); /* 0x11024A28: call 0x110151db */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11024A2D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11024A30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11024AFF; /* 0x11024A32: js 0x11024aff */
L_11024A38:
    ecx = MEM32(ebp + 0x24); /* 0x11024A38: mov ecx, dword ptr [ebp + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x11024A3B: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x11024A3E: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    goto L_11024B02; /* 0x11024A41: jmp 0x11024b02 */
L_11024A46:
    PUSH32(esp, 0x110023DCu); /* 0x11024A46: push 0x110023dc */
    eax = ebp + (-0x4C); /* 0x11024A4B: lea eax, [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x11024A4E: jmp 0x11024915 */
L_11024A53:
    PUSH32(esp, 0x110023ECu); /* 0x11024A53: push 0x110023ec */
    eax = ebp + (-0x54); /* 0x11024A58: lea eax, [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x11024A5B: jmp 0x11024915 */
L_11024A60:
    PUSH32(esp, ebx); /* 0x11024A60: push ebx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024A61: push dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_11024A09; /* 0x11024A64: jmp 0x11024a09 */
L_11024A66:
    PUSH32(esp, 0x110023F4u); /* 0x11024A66: push 0x110023f4 */
    eax = ebp + (-0x5C); /* 0x11024A6B: lea eax, [ebp - 0x5c] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x11024A6E: jmp 0x11024915 */
L_11024A73:
    eax = MEM32(ebp + 0x24); /* 0x11024A73: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024A76: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x11024A77: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024A7A: push eax */
    PUSH32(esp, 0x35u); /* 0x11024A7B: push 0x35 */
    RECOMP_BACKEDGE();
    goto L_110249AE; /* 0x11024A7D: jmp 0x110249ae */
L_11024A82:
    eax = MEM32(ebp + 0x24); /* 0x11024A82: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024A85: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x11024A86: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024A89: push eax */
    PUSH32(esp, 6); /* 0x11024A8A: push 6 */
    RECOMP_BACKEDGE();
    goto L_110249AE; /* 0x11024A8C: jmp 0x110249ae */
L_11024A91:
    PUSH32(esp, 0x11002400u); /* 0x11024A91: push 0x11002400 */
    eax = ebp + (-0x64); /* 0x11024A96: lea eax, [ebp - 0x64] */
    RECOMP_BACKEDGE();
    goto L_11024915; /* 0x11024A99: jmp 0x11024915 */
L_11024A9E:
    PUSH32(esp, ebx); /* 0x11024A9E: push ebx */
    eax = ebp + (-0x10); /* 0x11024A9F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024AA2: push eax */
    PUSH32(esp, 0x63u); /* 0x11024AA3: push 0x63 */
    PUSH32(esp, edx); /* 0x11024AA5: push edx */
    eax = ebp + 0x14; /* 0x11024AA6: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024AA9: push eax */
    eax = ebp + 0xC; /* 0x11024AAA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024AAD: push eax */
    PUSH32(esp, edi); /* 0x11024AAE: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024AAF: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x11024AB4: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024AB6: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024AB9: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024ABB: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024B02; /* 0x11024ABD: jne 0x11024b02 */
L_11024ABF:
    ecx = MEM32(ebp + (-0x10)); /* 0x11024ABF: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, 0x45u */ /* 0x11024AC2: cmp ecx, 0x45 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_11024968; /* 0x11024AC5: jge 0x11024968 */
L_11024ACB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x11024ACB: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_11024968; /* 0x11024ACE: jmp 0x11024968 */
L_11024AD3:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024AD3: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x11024AD6: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x11024AD8: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x11024ADB: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024ADC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024ADF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024AE2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024AE5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024AE8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024AEB: push ecx */
    ecx = edi; /* 0x11024AEC: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11024AEE: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x11024AF1: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x11024AF4: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11024AF7: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_110248DC; /* 0x11024AFA: jmp 0x110248dc */
L_11024AFF:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11024AFF: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024B02:
    eax = ebp + 0x14; /* 0x11024B02: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024B05: push eax */
    ecx = ebp + 0xC; /* 0x11024B06: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11024B09: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11024B0E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024B15; /* 0x11024B10: je 0x11024b15 */
L_11024B12:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11024B12: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024B15:
    eax = MEM32(ebp + 0x8); /* 0x11024B15: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11024B18: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11024B1B: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11024B1D: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11024B20: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11024B23: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x11024B28: ret 0x28 */
  _ljump:
    switch (_itail_tgt) {
      case 0x110248B5u: goto L_110248B5;
      case 0x110248E4u: goto L_110248E4;
      case 0x1102490Du: goto L_1102490D;
      case 0x1102493Au: goto L_1102493A;
      case 0x11024973u: goto L_11024973;
      case 0x11024997u: goto L_11024997;
      case 0x110249A4u: goto L_110249A4;
      case 0x110249B1u: goto L_110249B1;
      case 0x110249BDu: goto L_110249BD;
      case 0x110249CCu: goto L_110249CC;
      case 0x11024A01u: goto L_11024A01;
      case 0x11024A0Du: goto L_11024A0D;
      case 0x11024A1Au: goto L_11024A1A;
      case 0x11024A46u: goto L_11024A46;
      case 0x11024A53u: goto L_11024A53;
      case 0x11024A60u: goto L_11024A60;
      case 0x11024A66u: goto L_11024A66;
      case 0x11024A73u: goto L_11024A73;
      case 0x11024A82u: goto L_11024A82;
      case 0x11024A91u: goto L_11024A91;
      case 0x11024A9Eu: goto L_11024A9E;
      case 0x11024AD3u: goto L_11024AD3;
      case 0x11024AFFu: goto L_11024AFF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11024BC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11024BC3u);

L_11024BC3:
    PUSH32(esp, 0x58u); /* 0x11024BC3: push 0x58 */
    eax = 0x1103E669u; /* 0x11024BC5: mov eax, 0x1103e669 */
    RECOMP_CALL(sub_1103B372); /* 0x11024BCA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11024BCF: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11024BD1: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x14); /* 0x11024BD4: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x11024BD7: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024BD8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11024BDD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11024BE1: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11024BE2: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11024BE7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11024BEB: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x11024BED: pop ecx */
    ecx = ebp + (-0x14); /* 0x11024BEE: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1100E431); /* 0x11024BF1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x28); /* 0x11024BF6: mov ecx, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11024BF9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x20); /* 0x11024BFB: mov esi, dword ptr [ebp + 0x20] */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x11024BFE: movsx ecx, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFBFu; /* 0x11024C01: add ecx, -0x41 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x11024C04: mov dword ptr [ebp - 0x10], edx */
    /* cmp ecx, 0x38u */ /* 0x11024C07: cmp ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11024E68; /* 0x11024C0A: ja 0x11024e68 */
L_11024C10:
    eax = (uint32_t)MEM8(ecx + 0x11024EF3); /* 0x11024C10: movzx eax, byte ptr [ecx + 0x11024ef3] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x11024E97)); goto _ljump; }
L_11024C1E:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024C1E: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x11024C21: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x1C); /* 0x11024C23: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11024C26: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024C27: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024C2A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024C2D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024C30: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024C33: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024C36: push ecx */
    ecx = edi; /* 0x11024C37: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11024C39: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x11024C3C: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + 0xC) = eax; /* 0x11024C3F: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x11024C42: mov eax, dword ptr [ebp - 0x18] */
L_11024C45:
    MEM32(ebp + 0x10) = eax; /* 0x11024C45: mov dword ptr [ebp + 0x10], eax */
    goto L_11024E6B; /* 0x11024C48: jmp 0x11024e6b */
L_11024C4D:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024C4D: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x11024C50: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x24); /* 0x11024C52: lea ecx, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x11024C55: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024C56: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024C59: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024C5C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024C5F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024C62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024C65: push ecx */
    ecx = edi; /* 0x11024C66: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11024C68: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11024C6B: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x11024C6E: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x11024C71: mov eax, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_11024C45; /* 0x11024C74: jmp 0x11024c45 */
L_11024C76:
    PUSH32(esp, 0x110023A0u); /* 0x11024C76: push 0x110023a0 */
    eax = ebp + (-0x34); /* 0x11024C7B: lea eax, [ebp - 0x34] */
L_11024C7E:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024C7E: push dword ptr [ebp + 0x24] */
    ecx = edi; /* 0x11024C81: mov ecx, edi */
    PUSH32(esp, esi); /* 0x11024C83: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024C84: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024C87: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024C8A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024C8D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024C90: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024C93: push eax */
    RECOMP_CALL(sub_110208CE); /* 0x11024C94: call 0x110208ce */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x11024C99: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11024C9B: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11024C9E: mov eax, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_11024C45; /* 0x11024CA1: jmp 0x11024c45 */
L_11024CA3:
    PUSH32(esp, ebx); /* 0x11024CA3: push ebx */
    eax = ebp + (-0x10); /* 0x11024CA4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024CA7: push eax */
    PUSH32(esp, 0x63u); /* 0x11024CA8: push 0x63 */
    PUSH32(esp, edx); /* 0x11024CAA: push edx */
    eax = ebp + 0x14; /* 0x11024CAB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024CAE: push eax */
    eax = ebp + 0xC; /* 0x11024CAF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024CB2: push eax */
    PUSH32(esp, edi); /* 0x11024CB3: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024CB4: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x11024CB9: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024CBB: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024CBE: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024CC0: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024E6B; /* 0x11024CC2: jne 0x11024e6b */
L_11024CC8:
    eax = MEM32(ebp + (-0x10)); /* 0x11024CC8: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEDu; /* 0x11024CCB: add eax, -0x13 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x11024CCE: imul ecx, eax, 0x64 */
L_11024CD1:
    eax = MEM32(ebp + 0x24); /* 0x11024CD1: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x11024CD4: mov dword ptr [eax + 0x14], ecx */
    goto L_11024E6B; /* 0x11024CD7: jmp 0x11024e6b */
L_11024CDC:
    eax = MEM32(ebp + 0x24); /* 0x11024CDC: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024CDF: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11024CE0: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024CE3: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11024CE4: push 0x1f */
L_11024CE6:
    PUSH32(esp, 1); /* 0x11024CE6: push 1 */
L_11024CE8:
    eax = ebp + 0x14; /* 0x11024CE8: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024CEB: push eax */
    eax = ebp + 0xC; /* 0x11024CEC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024CEF: push eax */
    PUSH32(esp, edi); /* 0x11024CF0: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024CF1: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024CF6: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11024CF9: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11024E6B; /* 0x11024CFB: jmp 0x11024e6b */
L_11024D00:
    PUSH32(esp, 0x110023B8u); /* 0x11024D00: push 0x110023b8 */
    eax = ebp + (-0x3C); /* 0x11024D05: lea eax, [ebp - 0x3c] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024D08: jmp 0x11024c7e */
L_11024D0D:
    eax = MEM32(ebp + 0x24); /* 0x11024D0D: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024D10: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x11024D11: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024D14: push eax */
    PUSH32(esp, 0x17u); /* 0x11024D15: push 0x17 */
L_11024D17:
    PUSH32(esp, edx); /* 0x11024D17: push edx */
    RECOMP_BACKEDGE();
    goto L_11024CE8; /* 0x11024D18: jmp 0x11024ce8 */
L_11024D1A:
    eax = MEM32(ebp + 0x24); /* 0x11024D1A: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024D1D: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x11024D1E: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024D21: push eax */
    PUSH32(esp, 0xBu); /* 0x11024D22: push 0xb */
    RECOMP_BACKEDGE();
    goto L_11024D17; /* 0x11024D24: jmp 0x11024d17 */
L_11024D26:
    eax = MEM32(ebp + 0x24); /* 0x11024D26: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024D29: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x11024D2A: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024D2D: push eax */
    PUSH32(esp, 0x16Eu); /* 0x11024D2E: push 0x16e */
    RECOMP_BACKEDGE();
    goto L_11024CE6; /* 0x11024D33: jmp 0x11024ce6 */
L_11024D35:
    PUSH32(esp, ebx); /* 0x11024D35: push ebx */
    eax = ebp + (-0x10); /* 0x11024D36: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024D39: push eax */
    PUSH32(esp, 0xCu); /* 0x11024D3A: push 0xc */
    PUSH32(esp, 1); /* 0x11024D3C: push 1 */
    eax = ebp + 0x14; /* 0x11024D3E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024D41: push eax */
    eax = ebp + 0xC; /* 0x11024D42: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024D45: push eax */
    PUSH32(esp, edi); /* 0x11024D46: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024D47: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x11024D4C: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024D4E: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024D51: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024D53: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024E6B; /* 0x11024D55: jne 0x11024e6b */
L_11024D5B:
    eax = MEM32(ebp + 0x24); /* 0x11024D5B: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x10)); /* 0x11024D5E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11024D61: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + 0x10) = ecx; /* 0x11024D62: mov dword ptr [eax + 0x10], ecx */
    goto L_11024E6B; /* 0x11024D65: jmp 0x11024e6b */
L_11024D6A:
    eax = MEM32(ebp + 0x24); /* 0x11024D6A: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024D6D: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11024D6E: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024D71: push eax */
L_11024D72:
    PUSH32(esp, 0x3Bu); /* 0x11024D72: push 0x3b */
    RECOMP_BACKEDGE();
    goto L_11024D17; /* 0x11024D74: jmp 0x11024d17 */
L_11024D76:
    PUSH32(esp, 0x110023C8u); /* 0x11024D76: push 0x110023c8 */
    eax = ebp + (-0x44); /* 0x11024D7B: lea eax, [ebp - 0x44] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024D7E: jmp 0x11024c7e */
L_11024D83:
    PUSH32(esp, 0x110023CCu); /* 0x11024D83: push 0x110023cc */
    PUSH32(esp, edx); /* 0x11024D88: push edx */
    eax = ebp + 0x14; /* 0x11024D89: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024D8C: push eax */
    eax = ebp + 0xC; /* 0x11024D8D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024D90: push eax */
    RECOMP_CALL(sub_110151DB); /* 0x11024D91: call 0x110151db */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11024D96: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x11024D99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11024E68; /* 0x11024D9B: js 0x11024e68 */
L_11024DA1:
    ecx = MEM32(ebp + 0x24); /* 0x11024DA1: mov ecx, dword ptr [ebp + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x11024DA4: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + eax; /* 0x11024DA7: add dword ptr [ecx + 8], eax */
    _flag_k = FK_ADD;
    goto L_11024E6B; /* 0x11024DAA: jmp 0x11024e6b */
L_11024DAF:
    PUSH32(esp, 0x110023DCu); /* 0x11024DAF: push 0x110023dc */
    eax = ebp + (-0x4C); /* 0x11024DB4: lea eax, [ebp - 0x4c] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024DB7: jmp 0x11024c7e */
L_11024DBC:
    PUSH32(esp, 0x110023ECu); /* 0x11024DBC: push 0x110023ec */
    eax = ebp + (-0x54); /* 0x11024DC1: lea eax, [ebp - 0x54] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024DC4: jmp 0x11024c7e */
L_11024DC9:
    PUSH32(esp, ebx); /* 0x11024DC9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024DCA: push dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_11024D72; /* 0x11024DCD: jmp 0x11024d72 */
L_11024DCF:
    PUSH32(esp, 0x110023F4u); /* 0x11024DCF: push 0x110023f4 */
    eax = ebp + (-0x5C); /* 0x11024DD4: lea eax, [ebp - 0x5c] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024DD7: jmp 0x11024c7e */
L_11024DDC:
    eax = MEM32(ebp + 0x24); /* 0x11024DDC: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024DDF: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x11024DE0: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024DE3: push eax */
    PUSH32(esp, 0x35u); /* 0x11024DE4: push 0x35 */
    RECOMP_BACKEDGE();
    goto L_11024D17; /* 0x11024DE6: jmp 0x11024d17 */
L_11024DEB:
    eax = MEM32(ebp + 0x24); /* 0x11024DEB: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11024DEE: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x11024DEF: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11024DF2: push eax */
    PUSH32(esp, 6); /* 0x11024DF3: push 6 */
    RECOMP_BACKEDGE();
    goto L_11024D17; /* 0x11024DF5: jmp 0x11024d17 */
L_11024DFA:
    PUSH32(esp, 0x11002400u); /* 0x11024DFA: push 0x11002400 */
    eax = ebp + (-0x64); /* 0x11024DFF: lea eax, [ebp - 0x64] */
    RECOMP_BACKEDGE();
    goto L_11024C7E; /* 0x11024E02: jmp 0x11024c7e */
L_11024E07:
    PUSH32(esp, ebx); /* 0x11024E07: push ebx */
    eax = ebp + (-0x10); /* 0x11024E08: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11024E0B: push eax */
    PUSH32(esp, 0x63u); /* 0x11024E0C: push 0x63 */
    PUSH32(esp, edx); /* 0x11024E0E: push edx */
    eax = ebp + 0x14; /* 0x11024E0F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024E12: push eax */
    eax = ebp + 0xC; /* 0x11024E13: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024E16: push eax */
    PUSH32(esp, edi); /* 0x11024E17: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11024E18: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | MEM32(esi))); _flag_b = (uint32_t)((eax | MEM32(esi)));
    eax = eax | MEM32(esi); /* 0x11024E1D: or eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11024E1F: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x11024E22: mov dword ptr [esi], eax */
    /* test LO8(eax), 2 */ /* 0x11024E24: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024E6B; /* 0x11024E26: jne 0x11024e6b */
L_11024E28:
    ecx = MEM32(ebp + (-0x10)); /* 0x11024E28: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, 0x45u */ /* 0x11024E2B: cmp ecx, 0x45 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_11024CD1; /* 0x11024E2E: jge 0x11024cd1 */
L_11024E34:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x11024E34: add ecx, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_11024CD1; /* 0x11024E37: jmp 0x11024cd1 */
L_11024E3C:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024E3C: push dword ptr [ebp + 0x24] */
    eax = MEM32(edi); /* 0x11024E3F: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2C); /* 0x11024E41: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x11024E44: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024E45: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024E48: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024E4B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11024E4E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024E51: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024E54: push ecx */
    ecx = edi; /* 0x11024E55: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11024E57: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x11024E5A: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x11024E5D: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11024E60: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_11024C45; /* 0x11024E63: jmp 0x11024c45 */
L_11024E68:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11024E68: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024E6B:
    eax = ebp + 0x14; /* 0x11024E6B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024E6E: push eax */
    ecx = ebp + 0xC; /* 0x11024E6F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11024E72: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11024E77: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11024E7E; /* 0x11024E79: je 0x11024e7e */
L_11024E7B:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11024E7B: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11024E7E:
    eax = MEM32(ebp + 0x8); /* 0x11024E7E: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11024E81: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11024E84: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11024E86: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11024E89: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11024E8C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x11024E91: ret 0x28 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11024C1Eu: goto L_11024C1E;
      case 0x11024C4Du: goto L_11024C4D;
      case 0x11024C76u: goto L_11024C76;
      case 0x11024CA3u: goto L_11024CA3;
      case 0x11024CDCu: goto L_11024CDC;
      case 0x11024D00u: goto L_11024D00;
      case 0x11024D0Du: goto L_11024D0D;
      case 0x11024D1Au: goto L_11024D1A;
      case 0x11024D26u: goto L_11024D26;
      case 0x11024D35u: goto L_11024D35;
      case 0x11024D6Au: goto L_11024D6A;
      case 0x11024D76u: goto L_11024D76;
      case 0x11024D83u: goto L_11024D83;
      case 0x11024DAFu: goto L_11024DAF;
      case 0x11024DBCu: goto L_11024DBC;
      case 0x11024DC9u: goto L_11024DC9;
      case 0x11024DCFu: goto L_11024DCF;
      case 0x11024DDCu: goto L_11024DDC;
      case 0x11024DEBu: goto L_11024DEB;
      case 0x11024DFAu: goto L_11024DFA;
      case 0x11024E07u: goto L_11024E07;
      case 0x11024E3Cu: goto L_11024E3C;
      case 0x11024E68u: goto L_11024E68;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11024F2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11024F2Cu);

L_11024F2C:
    PUSH32(esp, 0x20u); /* 0x11024F2C: push 0x20 */
    eax = 0x1103E68Cu; /* 0x11024F2E: mov eax, 0x1103e68c */
    RECOMP_CALL(sub_1103B372); /* 0x11024F33: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11024F38: mov ebx, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11024F3A: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x1C); /* 0x11024F3D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11024F40: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11024F41: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11024F46: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11024F4A: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11024F4B: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11024F50: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11024F54: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11024F56: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11024F57: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = esi; /* 0x11024F5A: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_1100E431); /* 0x11024F5D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx); /* 0x11024F62: mov edx, dword ptr [ebx] */
    ecx = ebx; /* 0x11024F64: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x11024F66: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x11024F69: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x11024F6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024F77; /* 0x11024F6E: jne 0x11024f77 */
L_11024F70:
    MEM32(ebp + (-0x10)) = 2; /* 0x11024F70: mov dword ptr [ebp - 0x10], 2 */
L_11024F77:
    eax = ebp + 0x14; /* 0x11024F77: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11024F7A: push eax */
    ecx = ebp + 0xC; /* 0x11024F7B: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11024F7E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x20); /* 0x11024F83: mov edi, dword ptr [ebp + 0x20] */
    /* test LO8(eax), LO8(eax) */ /* 0x11024F86: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025087; /* 0x11024F88: jne 0x11025087 */
L_11024F8E:
    edx = MEM32(ebp + 0x10); /* 0x11024F8E: mov edx, dword ptr [ebp + 0x10] */
    /* test LO8(edx), LO8(edx) */ /* 0x11024F91: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024FA0; /* 0x11024F93: jne 0x11024fa0 */
L_11024F95:
    ecx = ebp + 0xC; /* 0x11024F95: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11024F98: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x11024F9D: mov edx, dword ptr [ebp + 0x10] */
L_11024FA0:
    eax = MEM32(ebp + 0x11); /* 0x11024FA0: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x11024FA3: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x11024FA6: mov eax, dword ptr [esi + 0xc] */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 2); /* 0x11024FA9: movsx eax, word ptr [eax + ecx*2] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x11024FAD: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x11024FAD: shr eax, 2 */
    /* test LO8(eax), 1 */ /* 0x11024FB0: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11024FE2; /* 0x11024FB2: jne 0x11024fe2 */
L_11024FB4:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11024FB4: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebx); /* 0x11024FB7: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x14); /* 0x11024FB9: lea ecx, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x11024FBC: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11024FBD: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11024FC0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11024FC3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x11024FC6: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11024FC7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11024FCA: push ecx */
    ecx = ebx; /* 0x11024FCB: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11024FCD: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x11024FD0: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0xC) = eax; /* 0x11024FD3: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x11024FD6: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 2; /* 0x11024FD9: mov dword ptr [ebp - 0x10], 2 */
    goto L_1102505D; /* 0x11024FE0: jmp 0x1102505d */
L_11024FE2:
    eax = MEM32(ebp + (-0x10)); /* 0x11024FE2: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 2 */ /* 0x11024FE5: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025012; /* 0x11024FE8: jne 0x11025012 */
L_11024FEA:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11024FEA: push dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + 0x24); /* 0x11024FED: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11024FF0: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11024FF3: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11024FF6: push esi */
    PUSH32(esp, 0xCu); /* 0x11024FF7: push 0xc */
    PUSH32(esp, 1); /* 0x11024FF9: push 1 */
    PUSH32(esp, eax); /* 0x11024FFB: push eax */
    eax = ebp + 0xC; /* 0x11024FFC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11024FFF: push eax */
    PUSH32(esp, ebx); /* 0x11025000: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x11025001: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025006: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025008: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1102500B: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x18)); /* 0x1102500D: mov esi, dword ptr [ebp - 0x18] */
    goto L_11025087; /* 0x11025010: jmp 0x11025087 */
L_11025012:
    /* cmp eax, 1 */ /* 0x11025012: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025038; /* 0x11025015: jne 0x11025038 */
L_11025017:
    eax = MEM32(ebp + 0x24); /* 0x11025017: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1102501A: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1102501B: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102501E: push eax */
    PUSH32(esp, 0x1Fu); /* 0x1102501F: push 0x1f */
    PUSH32(esp, 1); /* 0x11025021: push 1 */
    eax = ebp + 0x14; /* 0x11025023: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025026: push eax */
    eax = ebp + 0xC; /* 0x11025027: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102502A: push eax */
    PUSH32(esp, ebx); /* 0x1102502B: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x1102502C: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025031: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025034: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025087; /* 0x11025036: jmp 0x11025087 */
L_11025038:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025038: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebx); /* 0x1102503B: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x24); /* 0x1102503D: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x11025040: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025041: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025044: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025047: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1102504A: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102504B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102504E: push ecx */
    ecx = ebx; /* 0x1102504F: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11025051: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11025054: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x11025057: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1102505A: mov eax, dword ptr [ebp - 0x20] */
L_1102505D:
    MEM32(ebp + 0x10) = eax; /* 0x1102505D: mov dword ptr [ebp + 0x10], eax */
    goto L_11025087; /* 0x11025060: jmp 0x11025087 */
L_11025062:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025062: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025070; /* 0x11025066: jne 0x11025070 */
L_11025068:
    ecx = ebp + 0xC; /* 0x11025068: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x1102506B: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11025070:
    eax = MEM32(ebp + 0x11); /* 0x11025070: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x11025073: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x11025076: mov eax, dword ptr [esi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x11025079: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025097; /* 0x1102507D: je 0x11025097 */
L_1102507F:
    ecx = ebp + 0xC; /* 0x1102507F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11025082: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11025087:
    eax = ebp + 0x14; /* 0x11025087: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102508A: push eax */
    ecx = ebp + 0xC; /* 0x1102508B: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102508E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025093: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025062; /* 0x11025095: je 0x11025062 */
L_11025097:
    eax = ebp + 0x14; /* 0x11025097: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102509A: push eax */
    ecx = ebp + 0xC; /* 0x1102509B: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102509E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110250A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110250F3; /* 0x110250A5: jne 0x110250f3 */
L_110250A7:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x110250A7: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110250B4; /* 0x110250AA: jne 0x110250b4 */
L_110250AC:
    ecx = ebp + 0xC; /* 0x110250AC: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110250AF: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110250B4:
    eax = MEM32(esi); /* 0x110250B4: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x110250B6: mov ecx, esi */
    PUSH32(esp, 0); /* 0x110250B8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x110250BA: push dword ptr [ebp + 0x11] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x110250BD: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x110250C0: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110250EB; /* 0x110250C2: je 0x110250eb */
L_110250C4:
    /* cmp LO8(eax), 0x2Cu */ /* 0x110250C4: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110250EB; /* 0x110250C6: je 0x110250eb */
L_110250C8:
    /* cmp LO8(eax), 0x2Fu */ /* 0x110250C8: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110250F3; /* 0x110250CA: jne 0x110250f3 */
L_110250CC:
    goto L_110250EB; /* 0x110250CC: jmp 0x110250eb */
L_110250CE:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110250CE: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110250DC; /* 0x110250D2: jne 0x110250dc */
L_110250D4:
    ecx = ebp + 0xC; /* 0x110250D4: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110250D7: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110250DC:
    eax = MEM32(ebp + 0x11); /* 0x110250DC: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x110250DF: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x110250E2: mov eax, dword ptr [esi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x110250E5: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025103; /* 0x110250E9: je 0x11025103 */
L_110250EB:
    ecx = ebp + 0xC; /* 0x110250EB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x110250EE: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_110250F3:
    eax = ebp + 0x14; /* 0x110250F3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110250F6: push eax */
    ecx = ebp + 0xC; /* 0x110250F7: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110250FA: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110250FF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110250CE; /* 0x11025101: je 0x110250ce */
L_11025103:
    eax = ebp + 0x14; /* 0x11025103: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025106: push eax */
    ecx = ebp + 0xC; /* 0x11025107: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102510A: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102510F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110251D3; /* 0x11025111: jne 0x110251d3 */
L_11025117:
    edx = MEM32(ebp + 0x10); /* 0x11025117: mov edx, dword ptr [ebp + 0x10] */
    /* test LO8(edx), LO8(edx) */ /* 0x1102511A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025129; /* 0x1102511C: jne 0x11025129 */
L_1102511E:
    ecx = ebp + 0xC; /* 0x1102511E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11025121: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x11025126: mov edx, dword ptr [ebp + 0x10] */
L_11025129:
    eax = MEM32(ebp + 0x11); /* 0x11025129: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x1102512C: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x1102512F: mov eax, dword ptr [esi + 0xc] */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 2); /* 0x11025132: movsx eax, word ptr [eax + ecx*2] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x11025136: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x11025136: shr eax, 2 */
    /* test LO8(eax), 1 */ /* 0x11025139: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025182; /* 0x1102513B: jne 0x11025182 */
L_1102513D:
    esi = MEM32(ebp + (-0x10)); /* 0x1102513D: mov esi, dword ptr [ebp - 0x10] */
    /* cmp esi, 2 */ /* 0x11025140: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102514C; /* 0x11025143: jne 0x1102514c */
L_11025145:
    _flag_a = (uint32_t)((MEM32(edi) | esi)); _flag_b = (uint32_t)((MEM32(edi) | esi));
    MEM32(edi) = MEM32(edi) | esi; /* 0x11025145: or dword ptr [edi], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110251D3; /* 0x11025147: jmp 0x110251d3 */
L_1102514C:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1102514C: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebx); /* 0x1102514F: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x24); /* 0x11025151: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x11025154: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025155: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025158: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1102515B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1102515E: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102515F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11025162: push ecx */
    ecx = ebx; /* 0x11025163: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11025165: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11025168: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x1102516B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1102516E: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + 0x10) = eax; /* 0x11025171: mov dword ptr [ebp + 0x10], eax */
    /* cmp esi, 4 */ /* 0x11025174: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110251D3; /* 0x11025177: jne 0x110251d3 */
L_11025179:
    MEM32(ebp + (-0x10)) = 3; /* 0x11025179: mov dword ptr [ebp - 0x10], 3 */
    goto L_110251D3; /* 0x11025180: jmp 0x110251d3 */
L_11025182:
    eax = MEM32(ebp + (-0x10)); /* 0x11025182: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 1 */ /* 0x11025185: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110251B0; /* 0x11025188: je 0x110251b0 */
L_1102518A:
    /* cmp eax, 3 */ /* 0x1102518A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110251B0; /* 0x1102518D: je 0x110251b0 */
L_1102518F:
    eax = MEM32(ebp + 0x24); /* 0x1102518F: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x11025192: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11025193: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025196: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025197: push 0x1f */
    PUSH32(esp, 1); /* 0x11025199: push 1 */
    eax = ebp + 0x14; /* 0x1102519B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102519E: push eax */
    eax = ebp + 0xC; /* 0x1102519F: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110251A2: push eax */
    PUSH32(esp, ebx); /* 0x110251A3: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x110251A4: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110251A9: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x110251AC: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110251D3; /* 0x110251AE: jmp 0x110251d3 */
L_110251B0:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110251B0: push dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + 0x24); /* 0x110251B3: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x110251B6: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x110251B9: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x110251BC: push esi */
    PUSH32(esp, 0xCu); /* 0x110251BD: push 0xc */
    PUSH32(esp, 1); /* 0x110251BF: push 1 */
    PUSH32(esp, eax); /* 0x110251C1: push eax */
    eax = ebp + 0xC; /* 0x110251C2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110251C5: push eax */
    PUSH32(esp, ebx); /* 0x110251C6: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x110251C7: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x110251CC: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110251CE: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x110251D1: dec dword ptr [esi] */
    _flag_k = FK_DEC;
L_110251D3:
    eax = ebp + 0x14; /* 0x110251D3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110251D6: push eax */
    ecx = ebp + 0xC; /* 0x110251D7: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x110251DA: call 0x11027871 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x18)); /* 0x110251DF: mov esi, dword ptr [ebp - 0x18] */
L_110251E2:
    /* test LO8(eax), LO8(eax) */ /* 0x110251E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025218; /* 0x110251E4: jne 0x11025218 */
L_110251E6:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x110251E6: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110251F3; /* 0x110251E9: jne 0x110251f3 */
L_110251EB:
    ecx = ebp + 0xC; /* 0x110251EB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110251EE: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110251F3:
    eax = MEM32(ebp + 0x11); /* 0x110251F3: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x110251F6: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x110251F9: mov eax, dword ptr [esi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x110251FC: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025218; /* 0x11025200: je 0x11025218 */
L_11025202:
    ecx = ebp + 0xC; /* 0x11025202: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11025205: call 0x11021816 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x1102520A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102520D: push eax */
    ecx = ebp + 0xC; /* 0x1102520E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11025211: call 0x11027871 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_110251E2; /* 0x11025216: jmp 0x110251e2 */
L_11025218:
    eax = ebp + 0x14; /* 0x11025218: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102521B: push eax */
    ecx = ebp + 0xC; /* 0x1102521C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102521F: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025224: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025274; /* 0x11025226: jne 0x11025274 */
L_11025228:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x11025228: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025235; /* 0x1102522B: jne 0x11025235 */
L_1102522D:
    ecx = ebp + 0xC; /* 0x1102522D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11025230: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11025235:
    eax = MEM32(esi); /* 0x11025235: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11025237: mov ecx, esi */
    PUSH32(esp, 0); /* 0x11025239: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x1102523B: push dword ptr [ebp + 0x11] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1102523E: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025241: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102526C; /* 0x11025243: je 0x1102526c */
L_11025245:
    /* cmp LO8(eax), 0x2Cu */ /* 0x11025245: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102526C; /* 0x11025247: je 0x1102526c */
L_11025249:
    /* cmp LO8(eax), 0x2Fu */ /* 0x11025249: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025274; /* 0x1102524B: jne 0x11025274 */
L_1102524D:
    goto L_1102526C; /* 0x1102524D: jmp 0x1102526c */
L_1102524F:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1102524F: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102525D; /* 0x11025253: jne 0x1102525d */
L_11025255:
    ecx = ebp + 0xC; /* 0x11025255: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11025258: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_1102525D:
    eax = MEM32(ebp + 0x11); /* 0x1102525D: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x11025260: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x11025263: mov eax, dword ptr [esi + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x11025266: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025284; /* 0x1102526A: je 0x11025284 */
L_1102526C:
    ecx = ebp + 0xC; /* 0x1102526C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x1102526F: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11025274:
    eax = ebp + 0x14; /* 0x11025274: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025277: push eax */
    ecx = ebp + 0xC; /* 0x11025278: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102527B: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025280: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102524F; /* 0x11025282: je 0x1102524f */
L_11025284:
    eax = ebp + 0x14; /* 0x11025284: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025287: push eax */
    ecx = ebp + 0xC; /* 0x11025288: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x1102528B: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025290: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102529C; /* 0x11025292: je 0x1102529c */
L_11025294:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11025294: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102536A; /* 0x11025297: jmp 0x1102536a */
L_1102529C:
    edx = MEM32(ebp + 0x10); /* 0x1102529C: mov edx, dword ptr [ebp + 0x10] */
    /* test LO8(edx), LO8(edx) */ /* 0x1102529F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110252AE; /* 0x110252A1: jne 0x110252ae */
L_110252A3:
    ecx = ebp + 0xC; /* 0x110252A3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x110252A6: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x110252AB: mov edx, dword ptr [ebp + 0x10] */
L_110252AE:
    eax = MEM32(ebp + 0x11); /* 0x110252AE: mov eax, dword ptr [ebp + 0x11] */
    ecx = (uint32_t)LO8(eax); /* 0x110252B1: movzx ecx, al */
    eax = MEM32(esi + 0xC); /* 0x110252B4: mov eax, dword ptr [esi + 0xc] */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 2); /* 0x110252B7: movsx eax, word ptr [eax + ecx*2] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x110252BB: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x110252BB: shr eax, 2 */
    /* test LO8(eax), 1 */ /* 0x110252BE: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110252EF; /* 0x110252C0: jne 0x110252ef */
L_110252C2:
    /* cmp MEM32(ebp + (-0x10)), 4 */ /* 0x110252C2: cmp dword ptr [ebp - 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025294; /* 0x110252C6: jne 0x11025294 */
L_110252C8:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110252C8: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebx); /* 0x110252CB: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x24); /* 0x110252CD: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x110252D0: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110252D1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110252D4: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110252D7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x110252DA: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110252DB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110252DE: push ecx */
    ecx = ebx; /* 0x110252DF: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x110252E1: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x110252E4: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x110252E7: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x110252EA: mov eax, dword ptr [ebp - 0x20] */
    goto L_11025367; /* 0x110252ED: jmp 0x11025367 */
L_110252EF:
    eax = MEM32(ebp + (-0x10)); /* 0x110252EF: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 4 */ /* 0x110252F2: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102531C; /* 0x110252F5: jne 0x1102531c */
L_110252F7:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110252F7: push dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + 0x24); /* 0x110252FA: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x110252FD: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11025300: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11025303: push esi */
    PUSH32(esp, 0xCu); /* 0x11025304: push 0xc */
    PUSH32(esp, 1); /* 0x11025306: push 1 */
    PUSH32(esp, eax); /* 0x11025308: push eax */
    eax = ebp + 0xC; /* 0x11025309: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102530C: push eax */
    PUSH32(esp, ebx); /* 0x1102530D: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x1102530E: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025313: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025315: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x11025318: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    goto L_1102536A; /* 0x1102531A: jmp 0x1102536a */
L_1102531C:
    /* cmp eax, 3 */ /* 0x1102531C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025342; /* 0x1102531F: jne 0x11025342 */
L_11025321:
    eax = MEM32(ebp + 0x24); /* 0x11025321: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x11025324: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11025325: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025328: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025329: push 0x1f */
    PUSH32(esp, 1); /* 0x1102532B: push 1 */
    eax = ebp + 0x14; /* 0x1102532D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025330: push eax */
    eax = ebp + 0xC; /* 0x11025331: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025334: push eax */
    PUSH32(esp, ebx); /* 0x11025335: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x11025336: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102533B: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x1102533E: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102536A; /* 0x11025340: jmp 0x1102536a */
L_11025342:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025342: push dword ptr [ebp + 0x24] */
    eax = MEM32(ebx); /* 0x11025345: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x2C); /* 0x11025347: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x1102534A: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102534B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102534E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025351: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x11025354: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025355: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11025358: push ecx */
    ecx = ebx; /* 0x11025359: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1102535B: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1102535E: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x11025361: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11025364: mov eax, dword ptr [ebp - 0x28] */
L_11025367:
    MEM32(ebp + 0x10) = eax; /* 0x11025367: mov dword ptr [ebp + 0x10], eax */
L_1102536A:
    eax = ebp + 0x14; /* 0x1102536A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102536D: push eax */
    ecx = ebp + 0xC; /* 0x1102536E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11025371: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025376: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102537D; /* 0x11025378: je 0x1102537d */
L_1102537A:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x1102537A: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102537D:
    eax = MEM32(ebp + 0x8); /* 0x1102537D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025380: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025383: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025385: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025388: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x1102538B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025390: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025393u);

L_11025393:
    PUSH32(esp, 0x20u); /* 0x11025393: push 0x20 */
    eax = 0x1103E68Cu; /* 0x11025395: mov eax, 0x1103e68c */
    RECOMP_CALL(sub_1103B372); /* 0x1102539A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1102539F: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110253A1: mov dword ptr [ebp - 0x18], esi */
    ecx = MEM32(ebp + 0x1C); /* 0x110253A4: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x1C); /* 0x110253A7: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110253AA: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110253AB: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110253B0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110253B4: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110253B5: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110253BA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x110253BE: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x110253C0: pop ecx */
    ecx = ebp + (-0x1C); /* 0x110253C1: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1100E431); /* 0x110253C4: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x110253C9: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x110253CB: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x110253CD: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x110253D0: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x110253D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110253DE; /* 0x110253D5: jne 0x110253de */
L_110253D7:
    MEM32(ebp + (-0x10)) = 2; /* 0x110253D7: mov dword ptr [ebp - 0x10], 2 */
L_110253DE:
    eax = ebp + 0x14; /* 0x110253DE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110253E1: push eax */
    ecx = ebp + 0xC; /* 0x110253E2: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110253E5: call 0x110278ac */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x20); /* 0x110253EA: mov edi, dword ptr [ebp + 0x20] */
    /* test LO8(eax), LO8(eax) */ /* 0x110253ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110254EB; /* 0x110253EF: jne 0x110254eb */
L_110253F5:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110253F5: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025403; /* 0x110253F9: jne 0x11025403 */
L_110253FB:
    ecx = ebp + 0xC; /* 0x110253FB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110253FE: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025403:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025403: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025406: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025408: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x1102540A: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102540C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102540F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025443; /* 0x11025411: jne 0x11025443 */
L_11025413:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025413: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x11025416: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x11025418: lea ecx, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x1102541B: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102541C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102541F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025422: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11025425: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025428: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102542B: push ecx */
    ecx = esi; /* 0x1102542C: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1102542E: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x11025431: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0xC) = eax; /* 0x11025434: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x11025437: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 2; /* 0x1102543A: mov dword ptr [ebp - 0x10], 2 */
    goto L_110254C0; /* 0x11025441: jmp 0x110254c0 */
L_11025443:
    eax = MEM32(ebp + (-0x10)); /* 0x11025443: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 2 */ /* 0x11025446: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025473; /* 0x11025449: jne 0x11025473 */
L_1102544B:
    esi = MEM32(ebp + 0x24); /* 0x1102544B: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x1102544E: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11025451: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11025452: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11025455: push esi */
    PUSH32(esp, 0xCu); /* 0x11025456: push 0xc */
    PUSH32(esp, 1); /* 0x11025458: push 1 */
    PUSH32(esp, eax); /* 0x1102545A: push eax */
    eax = ebp + 0xC; /* 0x1102545B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102545E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1102545F: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025462: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025467: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025469: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1102546C: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x18)); /* 0x1102546E: mov esi, dword ptr [ebp - 0x18] */
    goto L_110254EB; /* 0x11025471: jmp 0x110254eb */
L_11025473:
    /* cmp eax, 1 */ /* 0x11025473: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025499; /* 0x11025476: jne 0x11025499 */
L_11025478:
    eax = MEM32(ebp + 0x24); /* 0x11025478: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x1102547B: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1102547C: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102547F: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025480: push 0x1f */
    PUSH32(esp, 1); /* 0x11025482: push 1 */
    eax = ebp + 0x14; /* 0x11025484: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025487: push eax */
    eax = ebp + 0xC; /* 0x11025488: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102548B: push eax */
    PUSH32(esp, esi); /* 0x1102548C: push esi */
    RECOMP_CALL(sub_110215AD); /* 0x1102548D: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025492: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025495: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110254EB; /* 0x11025497: jmp 0x110254eb */
L_11025499:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025499: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x1102549C: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x1102549E: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x110254A1: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110254A2: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110254A5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110254A8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110254AB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110254AE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110254B1: push ecx */
    ecx = esi; /* 0x110254B2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x110254B4: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x110254B7: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x110254BA: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x110254BD: mov eax, dword ptr [ebp - 0x20] */
L_110254C0:
    MEM32(ebp + 0x10) = eax; /* 0x110254C0: mov dword ptr [ebp + 0x10], eax */
    goto L_110254EB; /* 0x110254C3: jmp 0x110254eb */
L_110254C5:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110254C5: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110254D3; /* 0x110254C9: jne 0x110254d3 */
L_110254CB:
    ecx = ebp + 0xC; /* 0x110254CB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110254CE: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110254D3:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x110254D3: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x110254D6: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x110254D8: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x110254DA: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110254DC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110254DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110254FB; /* 0x110254E1: je 0x110254fb */
L_110254E3:
    ecx = ebp + 0xC; /* 0x110254E3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x110254E6: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_110254EB:
    eax = ebp + 0x14; /* 0x110254EB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110254EE: push eax */
    ecx = ebp + 0xC; /* 0x110254EF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110254F2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110254F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110254C5; /* 0x110254F9: je 0x110254c5 */
L_110254FB:
    eax = ebp + 0x14; /* 0x110254FB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110254FE: push eax */
    ecx = ebp + 0xC; /* 0x110254FF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025502: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025507: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025558; /* 0x11025509: jne 0x11025558 */
L_1102550B:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1102550B: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025518; /* 0x1102550E: jne 0x11025518 */
L_11025510:
    ecx = ebp + 0xC; /* 0x11025510: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025513: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025518:
    eax = MEM32(ebx); /* 0x11025518: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102551A: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102551C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x1102551E: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025521: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025524: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025550; /* 0x11025526: je 0x11025550 */
L_11025528:
    /* cmp LO8(eax), 0x2Cu */ /* 0x11025528: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025550; /* 0x1102552A: je 0x11025550 */
L_1102552C:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1102552C: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025558; /* 0x1102552E: jne 0x11025558 */
L_11025530:
    goto L_11025550; /* 0x11025530: jmp 0x11025550 */
L_11025532:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025532: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025540; /* 0x11025536: jne 0x11025540 */
L_11025538:
    ecx = ebp + 0xC; /* 0x11025538: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x1102553B: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025540:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025540: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025543: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025545: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x11025547: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11025549: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102554C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025568; /* 0x1102554E: je 0x11025568 */
L_11025550:
    ecx = ebp + 0xC; /* 0x11025550: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025553: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11025558:
    eax = ebp + 0x14; /* 0x11025558: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102555B: push eax */
    ecx = ebp + 0xC; /* 0x1102555C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x1102555F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025564: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025532; /* 0x11025566: je 0x11025532 */
L_11025568:
    eax = ebp + 0x14; /* 0x11025568: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102556B: push eax */
    ecx = ebp + 0xC; /* 0x1102556C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x1102556F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025574: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025633; /* 0x11025576: jne 0x11025633 */
L_1102557C:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1102557C: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025589; /* 0x1102557F: jne 0x11025589 */
L_11025581:
    ecx = ebp + 0xC; /* 0x11025581: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025584: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025589:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025589: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x1102558C: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102558E: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x11025590: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11025592: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025595: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110255E2; /* 0x11025597: jne 0x110255e2 */
L_11025599:
    /* cmp MEM32(ebp + (-0x10)), 2 */ /* 0x11025599: cmp dword ptr [ebp - 0x10], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110255A7; /* 0x1102559D: jne 0x110255a7 */
L_1102559F:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x1102559F: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025633; /* 0x110255A2: jmp 0x11025633 */
L_110255A7:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110255A7: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x110255AA: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x110255AC: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x110255AF: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110255B0: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110255B3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110255B6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110255B9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110255BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110255BF: push ecx */
    ecx = esi; /* 0x110255C0: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x110255C2: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x110255C5: mov eax, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x10)); /* 0x110255C8: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x110255CB: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x110255CE: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + 0x10) = eax; /* 0x110255D1: mov dword ptr [ebp + 0x10], eax */
    /* cmp esi, 4 */ /* 0x110255D4: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102565E; /* 0x110255D7: jne 0x1102565e */
L_110255DD:
    PUSH32(esp, 3); /* 0x110255DD: push 3 */
    esi = POP32_VAL(esp); /* 0x110255DF: pop esi */
    goto L_1102565E; /* 0x110255E0: jmp 0x1102565e */
L_110255E2:
    eax = MEM32(ebp + (-0x10)); /* 0x110255E2: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 1 */ /* 0x110255E5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025610; /* 0x110255E8: je 0x11025610 */
L_110255EA:
    /* cmp eax, 3 */ /* 0x110255EA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025610; /* 0x110255ED: je 0x11025610 */
L_110255EF:
    eax = MEM32(ebp + 0x24); /* 0x110255EF: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x110255F2: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x110255F3: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110255F6: push eax */
    PUSH32(esp, 0x1Fu); /* 0x110255F7: push 0x1f */
    PUSH32(esp, 1); /* 0x110255F9: push 1 */
    eax = ebp + 0x14; /* 0x110255FB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110255FE: push eax */
    eax = ebp + 0xC; /* 0x110255FF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025602: push eax */
    PUSH32(esp, esi); /* 0x11025603: push esi */
    RECOMP_CALL(sub_110215AD); /* 0x11025604: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025609: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x1102560C: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025633; /* 0x1102560E: jmp 0x11025633 */
L_11025610:
    esi = MEM32(ebp + 0x24); /* 0x11025610: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025613: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11025616: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11025617: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1102561A: push esi */
    PUSH32(esp, 0xCu); /* 0x1102561B: push 0xc */
    PUSH32(esp, 1); /* 0x1102561D: push 1 */
    PUSH32(esp, eax); /* 0x1102561F: push eax */
    eax = ebp + 0xC; /* 0x11025620: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025623: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025624: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025627: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x1102562C: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102562E: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x11025631: dec dword ptr [esi] */
    _flag_k = FK_DEC;
L_11025633:
    esi = MEM32(ebp + (-0x10)); /* 0x11025633: mov esi, dword ptr [ebp - 0x10] */
    goto L_1102565E; /* 0x11025636: jmp 0x1102565e */
L_11025638:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025638: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025646; /* 0x1102563C: jne 0x11025646 */
L_1102563E:
    ecx = ebp + 0xC; /* 0x1102563E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025641: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025646:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025646: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025649: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102564B: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x1102564D: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102564F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025652: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102566E; /* 0x11025654: je 0x1102566e */
L_11025656:
    ecx = ebp + 0xC; /* 0x11025656: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025659: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1102565E:
    eax = ebp + 0x14; /* 0x1102565E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025661: push eax */
    ecx = ebp + 0xC; /* 0x11025662: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025665: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102566A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025638; /* 0x1102566C: je 0x11025638 */
L_1102566E:
    eax = ebp + 0x14; /* 0x1102566E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025671: push eax */
    ecx = ebp + 0xC; /* 0x11025672: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025675: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102567A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110256CB; /* 0x1102567C: jne 0x110256cb */
L_1102567E:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1102567E: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102568B; /* 0x11025681: jne 0x1102568b */
L_11025683:
    ecx = ebp + 0xC; /* 0x11025683: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025686: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_1102568B:
    eax = MEM32(ebx); /* 0x1102568B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102568D: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102568F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025691: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025694: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025697: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110256C3; /* 0x11025699: je 0x110256c3 */
L_1102569B:
    /* cmp LO8(eax), 0x2Cu */ /* 0x1102569B: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110256C3; /* 0x1102569D: je 0x110256c3 */
L_1102569F:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1102569F: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110256CB; /* 0x110256A1: jne 0x110256cb */
L_110256A3:
    goto L_110256C3; /* 0x110256A3: jmp 0x110256c3 */
L_110256A5:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110256A5: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110256B3; /* 0x110256A9: jne 0x110256b3 */
L_110256AB:
    ecx = ebp + 0xC; /* 0x110256AB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110256AE: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110256B3:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x110256B3: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x110256B6: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x110256B8: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x110256BA: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110256BC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110256BF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110256DB; /* 0x110256C1: je 0x110256db */
L_110256C3:
    ecx = ebp + 0xC; /* 0x110256C3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x110256C6: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_110256CB:
    eax = ebp + 0x14; /* 0x110256CB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110256CE: push eax */
    ecx = ebp + 0xC; /* 0x110256CF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110256D2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110256D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110256A5; /* 0x110256D9: je 0x110256a5 */
L_110256DB:
    eax = ebp + 0x14; /* 0x110256DB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110256DE: push eax */
    ecx = ebp + 0xC; /* 0x110256DF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110256E2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110256E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110256F3; /* 0x110256E9: je 0x110256f3 */
L_110256EB:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110256EB: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110257BD; /* 0x110256EE: jmp 0x110257bd */
L_110256F3:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x110256F3: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025701; /* 0x110256F7: jne 0x11025701 */
L_110256F9:
    ecx = ebp + 0xC; /* 0x110256F9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110256FC: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025701:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025701: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025704: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025706: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x11025708: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102570A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102570D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025740; /* 0x1102570F: jne 0x11025740 */
L_11025711:
    /* cmp esi, 4 */ /* 0x11025711: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110256EB; /* 0x11025714: jne 0x110256eb */
L_11025716:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025716: push dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x11025719: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x24); /* 0x1102571C: lea edx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x1102571F: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025720: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025723: push dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x11025726: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025728: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102572B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102572E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x11025731: push edx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11025732: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11025735: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x11025738: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1102573B: mov eax, dword ptr [ebp - 0x20] */
    goto L_110257BA; /* 0x1102573E: jmp 0x110257ba */
L_11025740:
    /* cmp esi, 4 */ /* 0x11025740: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102576A; /* 0x11025743: jne 0x1102576a */
L_11025745:
    esi = MEM32(ebp + 0x24); /* 0x11025745: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025748: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1102574B: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x1102574C: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1102574F: push esi */
    PUSH32(esp, 0xCu); /* 0x11025750: push 0xc */
    PUSH32(esp, 1); /* 0x11025752: push 1 */
    PUSH32(esp, eax); /* 0x11025754: push eax */
    eax = ebp + 0xC; /* 0x11025755: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025758: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025759: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x1102575C: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025761: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025763: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x11025766: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    goto L_110257BD; /* 0x11025768: jmp 0x110257bd */
L_1102576A:
    /* cmp esi, 3 */ /* 0x1102576A: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025792; /* 0x1102576D: jne 0x11025792 */
L_1102576F:
    eax = MEM32(ebp + 0x24); /* 0x1102576F: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11025772: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11025773: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025776: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025777: push 0x1f */
    PUSH32(esp, 1); /* 0x11025779: push 1 */
    eax = ebp + 0x14; /* 0x1102577B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102577E: push eax */
    eax = ebp + 0xC; /* 0x1102577F: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025782: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025783: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025786: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102578B: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x1102578E: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110257BD; /* 0x11025790: jmp 0x110257bd */
L_11025792:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025792: push dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x11025795: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x2C); /* 0x11025798: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x1102579B: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102579C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102579F: push dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x110257A2: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110257A4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110257A7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110257AA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x110257AD: push edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x110257AE: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x110257B1: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x110257B4: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x110257B7: mov eax, dword ptr [ebp - 0x28] */
L_110257BA:
    MEM32(ebp + 0x10) = eax; /* 0x110257BA: mov dword ptr [ebp + 0x10], eax */
L_110257BD:
    eax = ebp + 0x14; /* 0x110257BD: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110257C0: push eax */
    ecx = ebp + 0xC; /* 0x110257C1: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110257C4: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110257C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110257D0; /* 0x110257CB: je 0x110257d0 */
L_110257CD:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110257CD: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110257D0:
    eax = MEM32(ebp + 0x8); /* 0x110257D0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110257D3: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110257D6: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110257D8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110257DB: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110257DE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110257E3: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110257E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110257E6u);

L_110257E6:
    PUSH32(esp, 0x20u); /* 0x110257E6: push 0x20 */
    eax = 0x1103E68Cu; /* 0x110257E8: mov eax, 0x1103e68c */
    RECOMP_CALL(sub_1103B372); /* 0x110257ED: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110257F2: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110257F4: mov dword ptr [ebp - 0x18], esi */
    ecx = MEM32(ebp + 0x1C); /* 0x110257F7: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x1C); /* 0x110257FA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110257FD: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110257FE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11025803: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11025807: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11025808: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1102580D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11025811: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x11025813: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11025814: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1100E431); /* 0x11025817: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1102581C: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x1102581E: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x11025820: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x11025823: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x11025826: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025831; /* 0x11025828: jne 0x11025831 */
L_1102582A:
    MEM32(ebp + (-0x10)) = 2; /* 0x1102582A: mov dword ptr [ebp - 0x10], 2 */
L_11025831:
    eax = ebp + 0x14; /* 0x11025831: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025834: push eax */
    ecx = ebp + 0xC; /* 0x11025835: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025838: call 0x110278ac */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x20); /* 0x1102583D: mov edi, dword ptr [ebp + 0x20] */
    /* test LO8(eax), LO8(eax) */ /* 0x11025840: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102593E; /* 0x11025842: jne 0x1102593e */
L_11025848:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025848: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025856; /* 0x1102584C: jne 0x11025856 */
L_1102584E:
    ecx = ebp + 0xC; /* 0x1102584E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025851: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025856:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025856: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025859: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102585B: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x1102585D: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102585F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025862: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025896; /* 0x11025864: jne 0x11025896 */
L_11025866:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025866: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x11025869: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x1102586B: lea ecx, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x1102586E: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102586F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025872: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025875: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11025878: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102587B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102587E: push ecx */
    ecx = esi; /* 0x1102587F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11025881: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x11025884: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0xC) = eax; /* 0x11025887: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1102588A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 2; /* 0x1102588D: mov dword ptr [ebp - 0x10], 2 */
    goto L_11025913; /* 0x11025894: jmp 0x11025913 */
L_11025896:
    eax = MEM32(ebp + (-0x10)); /* 0x11025896: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 2 */ /* 0x11025899: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110258C6; /* 0x1102589C: jne 0x110258c6 */
L_1102589E:
    esi = MEM32(ebp + 0x24); /* 0x1102589E: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x110258A1: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x110258A4: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x110258A5: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x110258A8: push esi */
    PUSH32(esp, 0xCu); /* 0x110258A9: push 0xc */
    PUSH32(esp, 1); /* 0x110258AB: push 1 */
    PUSH32(esp, eax); /* 0x110258AD: push eax */
    eax = ebp + 0xC; /* 0x110258AE: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110258B1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x110258B2: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x110258B5: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x110258BA: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110258BC: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x110258BF: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    esi = MEM32(ebp + (-0x18)); /* 0x110258C1: mov esi, dword ptr [ebp - 0x18] */
    goto L_1102593E; /* 0x110258C4: jmp 0x1102593e */
L_110258C6:
    /* cmp eax, 1 */ /* 0x110258C6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110258EC; /* 0x110258C9: jne 0x110258ec */
L_110258CB:
    eax = MEM32(ebp + 0x24); /* 0x110258CB: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x110258CE: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x110258CF: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110258D2: push eax */
    PUSH32(esp, 0x1Fu); /* 0x110258D3: push 0x1f */
    PUSH32(esp, 1); /* 0x110258D5: push 1 */
    eax = ebp + 0x14; /* 0x110258D7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110258DA: push eax */
    eax = ebp + 0xC; /* 0x110258DB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110258DE: push eax */
    PUSH32(esp, esi); /* 0x110258DF: push esi */
    RECOMP_CALL(sub_110215AD); /* 0x110258E0: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110258E5: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x110258E8: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102593E; /* 0x110258EA: jmp 0x1102593e */
L_110258EC:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110258EC: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x110258EF: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x110258F1: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x110258F4: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110258F5: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110258F8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110258FB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110258FE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025901: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11025904: push ecx */
    ecx = esi; /* 0x11025905: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11025907: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1102590A: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x1102590D: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x11025910: mov eax, dword ptr [ebp - 0x20] */
L_11025913:
    MEM32(ebp + 0x10) = eax; /* 0x11025913: mov dword ptr [ebp + 0x10], eax */
    goto L_1102593E; /* 0x11025916: jmp 0x1102593e */
L_11025918:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025918: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025926; /* 0x1102591C: jne 0x11025926 */
L_1102591E:
    ecx = ebp + 0xC; /* 0x1102591E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025921: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025926:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025926: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025929: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102592B: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x1102592D: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102592F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025932: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102594E; /* 0x11025934: je 0x1102594e */
L_11025936:
    ecx = ebp + 0xC; /* 0x11025936: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025939: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1102593E:
    eax = ebp + 0x14; /* 0x1102593E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025941: push eax */
    ecx = ebp + 0xC; /* 0x11025942: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025945: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102594A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025918; /* 0x1102594C: je 0x11025918 */
L_1102594E:
    eax = ebp + 0x14; /* 0x1102594E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025951: push eax */
    ecx = ebp + 0xC; /* 0x11025952: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025955: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102595A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110259AB; /* 0x1102595C: jne 0x110259ab */
L_1102595E:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1102595E: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102596B; /* 0x11025961: jne 0x1102596b */
L_11025963:
    ecx = ebp + 0xC; /* 0x11025963: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025966: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_1102596B:
    eax = MEM32(ebx); /* 0x1102596B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1102596D: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x1102596F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025971: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025974: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025977: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110259A3; /* 0x11025979: je 0x110259a3 */
L_1102597B:
    /* cmp LO8(eax), 0x2Cu */ /* 0x1102597B: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110259A3; /* 0x1102597D: je 0x110259a3 */
L_1102597F:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1102597F: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110259AB; /* 0x11025981: jne 0x110259ab */
L_11025983:
    goto L_110259A3; /* 0x11025983: jmp 0x110259a3 */
L_11025985:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025985: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025993; /* 0x11025989: jne 0x11025993 */
L_1102598B:
    ecx = ebp + 0xC; /* 0x1102598B: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x1102598E: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025993:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025993: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025996: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025998: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x1102599A: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1102599C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1102599F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110259BB; /* 0x110259A1: je 0x110259bb */
L_110259A3:
    ecx = ebp + 0xC; /* 0x110259A3: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x110259A6: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_110259AB:
    eax = ebp + 0x14; /* 0x110259AB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110259AE: push eax */
    ecx = ebp + 0xC; /* 0x110259AF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110259B2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110259B7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025985; /* 0x110259B9: je 0x11025985 */
L_110259BB:
    eax = ebp + 0x14; /* 0x110259BB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110259BE: push eax */
    ecx = ebp + 0xC; /* 0x110259BF: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110259C2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110259C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025A86; /* 0x110259C9: jne 0x11025a86 */
L_110259CF:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x110259CF: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110259DC; /* 0x110259D2: jne 0x110259dc */
L_110259D4:
    ecx = ebp + 0xC; /* 0x110259D4: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x110259D7: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110259DC:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x110259DC: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x110259DF: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x110259E1: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x110259E3: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110259E5: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110259E8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025A35; /* 0x110259EA: jne 0x11025a35 */
L_110259EC:
    /* cmp MEM32(ebp + (-0x10)), 2 */ /* 0x110259EC: cmp dword ptr [ebp - 0x10], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110259FA; /* 0x110259F0: jne 0x110259fa */
L_110259F2:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110259F2: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025A86; /* 0x110259F5: jmp 0x11025a86 */
L_110259FA:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x110259FA: push dword ptr [ebp + 0x24] */
    eax = MEM32(esi); /* 0x110259FD: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x110259FF: lea ecx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x11025A02: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025A03: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025A06: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025A09: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11025A0C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025A0F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11025A12: push ecx */
    ecx = esi; /* 0x11025A13: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11025A15: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11025A18: mov eax, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x10)); /* 0x11025A1B: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = eax; /* 0x11025A1E: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x11025A21: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + 0x10) = eax; /* 0x11025A24: mov dword ptr [ebp + 0x10], eax */
    /* cmp esi, 4 */ /* 0x11025A27: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025AB1; /* 0x11025A2A: jne 0x11025ab1 */
L_11025A30:
    PUSH32(esp, 3); /* 0x11025A30: push 3 */
    esi = POP32_VAL(esp); /* 0x11025A32: pop esi */
    goto L_11025AB1; /* 0x11025A33: jmp 0x11025ab1 */
L_11025A35:
    eax = MEM32(ebp + (-0x10)); /* 0x11025A35: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 1 */ /* 0x11025A38: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025A63; /* 0x11025A3B: je 0x11025a63 */
L_11025A3D:
    /* cmp eax, 3 */ /* 0x11025A3D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025A63; /* 0x11025A40: je 0x11025a63 */
L_11025A42:
    eax = MEM32(ebp + 0x24); /* 0x11025A42: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11025A45: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11025A46: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025A49: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025A4A: push 0x1f */
    PUSH32(esp, 1); /* 0x11025A4C: push 1 */
    eax = ebp + 0x14; /* 0x11025A4E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025A51: push eax */
    eax = ebp + 0xC; /* 0x11025A52: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025A55: push eax */
    PUSH32(esp, esi); /* 0x11025A56: push esi */
    RECOMP_CALL(sub_110215AD); /* 0x11025A57: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025A5C: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025A5F: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025A86; /* 0x11025A61: jmp 0x11025a86 */
L_11025A63:
    esi = MEM32(ebp + 0x24); /* 0x11025A63: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025A66: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11025A69: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11025A6A: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11025A6D: push esi */
    PUSH32(esp, 0xCu); /* 0x11025A6E: push 0xc */
    PUSH32(esp, 1); /* 0x11025A70: push 1 */
    PUSH32(esp, eax); /* 0x11025A72: push eax */
    eax = ebp + 0xC; /* 0x11025A73: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025A76: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025A77: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025A7A: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025A7F: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025A81: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x11025A84: dec dword ptr [esi] */
    _flag_k = FK_DEC;
L_11025A86:
    esi = MEM32(ebp + (-0x10)); /* 0x11025A86: mov esi, dword ptr [ebp - 0x10] */
    goto L_11025AB1; /* 0x11025A89: jmp 0x11025ab1 */
L_11025A8B:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025A8B: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025A99; /* 0x11025A8F: jne 0x11025a99 */
L_11025A91:
    ecx = ebp + 0xC; /* 0x11025A91: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025A94: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025A99:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025A99: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025A9C: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025A9E: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x11025AA0: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11025AA2: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025AA5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025AC1; /* 0x11025AA7: je 0x11025ac1 */
L_11025AA9:
    ecx = ebp + 0xC; /* 0x11025AA9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025AAC: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11025AB1:
    eax = ebp + 0x14; /* 0x11025AB1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025AB4: push eax */
    ecx = ebp + 0xC; /* 0x11025AB5: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025AB8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025ABD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025A8B; /* 0x11025ABF: je 0x11025a8b */
L_11025AC1:
    eax = ebp + 0x14; /* 0x11025AC1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025AC4: push eax */
    ecx = ebp + 0xC; /* 0x11025AC5: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025AC8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025ACD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025B1E; /* 0x11025ACF: jne 0x11025b1e */
L_11025AD1:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x11025AD1: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025ADE; /* 0x11025AD4: jne 0x11025ade */
L_11025AD6:
    ecx = ebp + 0xC; /* 0x11025AD6: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025AD9: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025ADE:
    eax = MEM32(ebx); /* 0x11025ADE: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025AE0: mov ecx, ebx */
    PUSH32(esp, 0); /* 0x11025AE2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025AE4: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025AE7: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025AEA: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025B16; /* 0x11025AEC: je 0x11025b16 */
L_11025AEE:
    /* cmp LO8(eax), 0x2Cu */ /* 0x11025AEE: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11025B16; /* 0x11025AF0: je 0x11025b16 */
L_11025AF2:
    /* cmp LO8(eax), 0x2Fu */ /* 0x11025AF2: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025B1E; /* 0x11025AF4: jne 0x11025b1e */
L_11025AF6:
    goto L_11025B16; /* 0x11025AF6: jmp 0x11025b16 */
L_11025AF8:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025AF8: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025B06; /* 0x11025AFC: jne 0x11025b06 */
L_11025AFE:
    ecx = ebp + 0xC; /* 0x11025AFE: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025B01: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025B06:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025B06: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025B09: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025B0B: mov ecx, ebx */
    PUSH32(esp, 0x48u); /* 0x11025B0D: push 0x48 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11025B0F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025B12: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025B2E; /* 0x11025B14: je 0x11025b2e */
L_11025B16:
    ecx = ebp + 0xC; /* 0x11025B16: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025B19: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11025B1E:
    eax = ebp + 0x14; /* 0x11025B1E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025B21: push eax */
    ecx = ebp + 0xC; /* 0x11025B22: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025B25: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025B2A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025AF8; /* 0x11025B2C: je 0x11025af8 */
L_11025B2E:
    eax = ebp + 0x14; /* 0x11025B2E: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025B31: push eax */
    ecx = ebp + 0xC; /* 0x11025B32: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025B35: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025B3A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025B46; /* 0x11025B3C: je 0x11025b46 */
L_11025B3E:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11025B3E: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025C10; /* 0x11025B41: jmp 0x11025c10 */
L_11025B46:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025B46: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025B54; /* 0x11025B4A: jne 0x11025b54 */
L_11025B4C:
    ecx = ebp + 0xC; /* 0x11025B4C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025B4F: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025B54:
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025B54: push dword ptr [ebp + 0x12] */
    eax = MEM32(ebx); /* 0x11025B57: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11025B59: mov ecx, ebx */
    PUSH32(esp, 4); /* 0x11025B5B: push 4 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11025B5D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025B60: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025B93; /* 0x11025B62: jne 0x11025b93 */
L_11025B64:
    /* cmp esi, 4 */ /* 0x11025B64: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025B3E; /* 0x11025B67: jne 0x11025b3e */
L_11025B69:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025B69: push dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x11025B6C: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x24); /* 0x11025B6F: lea edx, [ebp - 0x24] */
    PUSH32(esp, edi); /* 0x11025B72: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025B73: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025B76: push dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x11025B79: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025B7B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11025B7E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025B81: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x11025B84: push edx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11025B85: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x11025B88: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = eax; /* 0x11025B8B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x11025B8E: mov eax, dword ptr [ebp - 0x20] */
    goto L_11025C0D; /* 0x11025B91: jmp 0x11025c0d */
L_11025B93:
    /* cmp esi, 4 */ /* 0x11025B93: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025BBD; /* 0x11025B96: jne 0x11025bbd */
L_11025B98:
    esi = MEM32(ebp + 0x24); /* 0x11025B98: mov esi, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025B9B: lea eax, [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x11025B9E: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x11025B9F: add esi, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x11025BA2: push esi */
    PUSH32(esp, 0xCu); /* 0x11025BA3: push 0xc */
    PUSH32(esp, 1); /* 0x11025BA5: push 1 */
    PUSH32(esp, eax); /* 0x11025BA7: push eax */
    eax = ebp + 0xC; /* 0x11025BA8: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025BAB: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025BAC: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025BAF: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025BB4: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025BB6: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x11025BB9: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    goto L_11025C10; /* 0x11025BBB: jmp 0x11025c10 */
L_11025BBD:
    /* cmp esi, 3 */ /* 0x11025BBD: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025BE5; /* 0x11025BC0: jne 0x11025be5 */
L_11025BC2:
    eax = MEM32(ebp + 0x24); /* 0x11025BC2: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x11025BC5: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x11025BC6: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025BC9: push eax */
    PUSH32(esp, 0x1Fu); /* 0x11025BCA: push 0x1f */
    PUSH32(esp, 1); /* 0x11025BCC: push 1 */
    eax = ebp + 0x14; /* 0x11025BCE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025BD1: push eax */
    eax = ebp + 0xC; /* 0x11025BD2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025BD5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11025BD6: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110215AD); /* 0x11025BD9: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025BDE: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi) | eax)); _flag_b = (uint32_t)((MEM32(edi) | eax));
    MEM32(edi) = MEM32(edi) | eax; /* 0x11025BE1: or dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025C10; /* 0x11025BE3: jmp 0x11025c10 */
L_11025BE5:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025BE5: push dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x18)); /* 0x11025BE8: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x2C); /* 0x11025BEB: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edi); /* 0x11025BEE: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11025BEF: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11025BF2: push dword ptr [ebp + 0x18] */
    eax = MEM32(ecx); /* 0x11025BF5: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11025BF7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11025BFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11025BFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x11025C00: push edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11025C01: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x11025C04: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + 0xC) = eax; /* 0x11025C07: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x11025C0A: mov eax, dword ptr [ebp - 0x28] */
L_11025C0D:
    MEM32(ebp + 0x10) = eax; /* 0x11025C0D: mov dword ptr [ebp + 0x10], eax */
L_11025C10:
    eax = ebp + 0x14; /* 0x11025C10: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025C13: push eax */
    ecx = ebp + 0xC; /* 0x11025C14: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11025C17: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11025C1C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11025C23; /* 0x11025C1E: je 0x11025c23 */
L_11025C20:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11025C20: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025C23:
    eax = MEM32(ebp + 0x8); /* 0x11025C23: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025C26: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025C29: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025C2B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025C2E: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11025C31: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025C36: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025C39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025C39u);

L_11025C39:
    PUSH32(esp, ebp); /* 0x11025C39: push ebp */
    ebp = esp; /* 0x11025C3A: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x11025C3C: push dword ptr [ecx + 0xc] */
    eax = ebp + 0x14; /* 0x11025C3F: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x11025C42: push 0 */
    PUSH32(esp, eax); /* 0x11025C44: push eax */
    eax = ebp + 0xC; /* 0x11025C45: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025C48: push eax */
    RECOMP_CALL(sub_11015061); /* 0x11025C49: call 0x11015061 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11025C4E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11025C50: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11025C53: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11025C5F; /* 0x11025C55: jns 0x11025c5f */
L_11025C57:
    eax = MEM32(ebp + 0x20); /* 0x11025C57: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)((MEM32(eax) | 2)); _flag_b = (uint32_t)((MEM32(eax) | 2));
    MEM32(eax) = MEM32(eax) | 2; /* 0x11025C5A: or dword ptr [eax], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025C67; /* 0x11025C5D: jmp 0x11025c67 */
L_11025C5F:
    eax = MEM32(ebp + 0x24); /* 0x11025C5F: mov eax, dword ptr [ebp + 0x24] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x11025C62: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + 0x10) = ecx; /* 0x11025C64: mov dword ptr [eax + 0x10], ecx */
L_11025C67:
    eax = MEM32(ebp + 0x8); /* 0x11025C67: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025C6A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025C6D: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025C6F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025C72: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x11025C75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025C76: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025C79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025C79u);

L_11025C79:
    PUSH32(esp, ebp); /* 0x11025C79: push ebp */
    ebp = esp; /* 0x11025C7A: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x11025C7C: push dword ptr [ecx + 0xc] */
    eax = ebp + 0x14; /* 0x11025C7F: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x11025C82: push 0 */
    PUSH32(esp, eax); /* 0x11025C84: push eax */
    eax = ebp + 0xC; /* 0x11025C85: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025C88: push eax */
    RECOMP_CALL(sub_1101535D); /* 0x11025C89: call 0x1101535d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11025C8E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11025C90: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11025C93: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11025C9F; /* 0x11025C95: jns 0x11025c9f */
L_11025C97:
    eax = MEM32(ebp + 0x20); /* 0x11025C97: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)((MEM32(eax) | 2)); _flag_b = (uint32_t)((MEM32(eax) | 2));
    MEM32(eax) = MEM32(eax) | 2; /* 0x11025C9A: or dword ptr [eax], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025CA7; /* 0x11025C9D: jmp 0x11025ca7 */
L_11025C9F:
    eax = MEM32(ebp + 0x24); /* 0x11025C9F: mov eax, dword ptr [ebp + 0x24] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x11025CA2: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + 0x10) = ecx; /* 0x11025CA4: mov dword ptr [eax + 0x10], ecx */
L_11025CA7:
    eax = MEM32(ebp + 0x8); /* 0x11025CA7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025CAA: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025CAD: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025CAF: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025CB2: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x11025CB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025CB6: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025CB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025CB9u);

L_11025CB9:
    PUSH32(esp, 4); /* 0x11025CB9: push 4 */
    eax = 0x1103D313u; /* 0x11025CBB: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11025CC0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11025CC5: mov ebx, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11025CC7: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11025CCA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11025CCD: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11025CCE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11025CD3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11025CD7: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11025CD8: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11025CDD: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x11025CE1: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x11025CE3: pop ecx */
    ecx = ebp + (-0x10); /* 0x11025CE4: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11025CE7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x11025CEC: mov ecx, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025CEF: lea eax, [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11025CF2: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x11025CF3: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11025CF6: push ecx */
    PUSH32(esp, 0x17u); /* 0x11025CF7: push 0x17 */
    PUSH32(esp, 0); /* 0x11025CF9: push 0 */
    PUSH32(esp, eax); /* 0x11025CFB: push eax */
    eax = ebp + 0xC; /* 0x11025CFC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025CFF: push eax */
    PUSH32(esp, ebx); /* 0x11025D00: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x11025D01: call 0x11021423 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x11025D06: mov esi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025D09: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025D0C: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025D57; /* 0x11025D0E: jne 0x11025d57 */
L_11025D10:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025D10: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025D1E; /* 0x11025D14: jne 0x11025d1e */
L_11025D16:
    ecx = ebp + 0xC; /* 0x11025D16: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11025D19: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11025D1E:
    eax = MEM32(edi); /* 0x11025D1E: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025D20: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025D22: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x11025D24: push dword ptr [ebp + 0x11] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11025D27: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025D2A: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025D57; /* 0x11025D2C: jne 0x11025d57 */
L_11025D2E:
    ecx = ebp + 0xC; /* 0x11025D2E: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11025D31: call 0x11021816 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x11025D36: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x11025D39: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11025D3A: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025D3D: push eax */
    PUSH32(esp, 0x3Bu); /* 0x11025D3E: push 0x3b */
    PUSH32(esp, 0); /* 0x11025D40: push 0 */
    eax = ebp + 0x14; /* 0x11025D42: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025D45: push eax */
    eax = ebp + 0xC; /* 0x11025D46: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025D49: push eax */
    PUSH32(esp, ebx); /* 0x11025D4A: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x11025D4B: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025D50: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025D53: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025D5A; /* 0x11025D55: jmp 0x11025d5a */
L_11025D57:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025D57: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025D5A:
    /* cmp MEM32(esi), 0 */ /* 0x11025D5A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025DA2; /* 0x11025D5D: jne 0x11025da2 */
L_11025D5F:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025D5F: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025D6D; /* 0x11025D63: jne 0x11025d6d */
L_11025D65:
    ecx = ebp + 0xC; /* 0x11025D65: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110224F1); /* 0x11025D68: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11025D6D:
    eax = MEM32(edi); /* 0x11025D6D: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025D6F: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025D71: push 0 */
    PUSH32(esp, MEM32(ebp + 0x11)); /* 0x11025D73: push dword ptr [ebp + 0x11] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11025D76: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025D79: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025DA2; /* 0x11025D7B: jne 0x11025da2 */
L_11025D7D:
    ecx = ebp + 0xC; /* 0x11025D7D: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021816); /* 0x11025D80: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11025D85: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025D86: push dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025D89: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0x3Bu); /* 0x11025D8C: push 0x3b */
    PUSH32(esp, 0); /* 0x11025D8E: push 0 */
    PUSH32(esp, eax); /* 0x11025D90: push eax */
    eax = ebp + 0xC; /* 0x11025D91: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025D94: push eax */
    PUSH32(esp, ebx); /* 0x11025D95: push ebx */
    RECOMP_CALL(sub_11021423); /* 0x11025D96: call 0x11021423 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025D9B: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025D9E: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025DA5; /* 0x11025DA0: jmp 0x11025da5 */
L_11025DA2:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025DA2: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025DA5:
    eax = MEM32(ebp + 0x8); /* 0x11025DA5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025DA8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025DAB: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025DAD: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025DB0: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11025DB3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025DB8: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025DBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025DBBu);

L_11025DBB:
    PUSH32(esp, 4); /* 0x11025DBB: push 4 */
    eax = 0x1103D313u; /* 0x11025DBD: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11025DC2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11025DC7: mov ebx, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11025DC9: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11025DCC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11025DCF: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11025DD0: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11025DD5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11025DD9: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x11025DDA: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11025DDF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x11025DE3: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x11025DE5: pop ecx */
    ecx = ebp + (-0x10); /* 0x11025DE6: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11025DE9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x11025DEE: mov ecx, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025DF1: lea eax, [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11025DF4: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x11025DF5: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11025DF8: push ecx */
    PUSH32(esp, 0x17u); /* 0x11025DF9: push 0x17 */
    PUSH32(esp, 0); /* 0x11025DFB: push 0 */
    PUSH32(esp, eax); /* 0x11025DFD: push eax */
    eax = ebp + 0xC; /* 0x11025DFE: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025E01: push eax */
    PUSH32(esp, ebx); /* 0x11025E02: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025E03: call 0x110215ad */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x11025E08: mov esi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025E0B: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025E0E: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025E59; /* 0x11025E10: jne 0x11025e59 */
L_11025E12:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025E12: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025E20; /* 0x11025E16: jne 0x11025e20 */
L_11025E18:
    ecx = ebp + 0xC; /* 0x11025E18: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025E1B: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025E20:
    eax = MEM32(edi); /* 0x11025E20: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025E22: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025E24: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025E26: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025E29: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025E2C: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025E59; /* 0x11025E2E: jne 0x11025e59 */
L_11025E30:
    ecx = ebp + 0xC; /* 0x11025E30: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025E33: call 0x11021838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x11025E38: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x11025E3B: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11025E3C: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025E3F: push eax */
    PUSH32(esp, 0x3Bu); /* 0x11025E40: push 0x3b */
    PUSH32(esp, 0); /* 0x11025E42: push 0 */
    eax = ebp + 0x14; /* 0x11025E44: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025E47: push eax */
    eax = ebp + 0xC; /* 0x11025E48: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025E4B: push eax */
    PUSH32(esp, ebx); /* 0x11025E4C: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025E4D: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025E52: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025E55: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025E5C; /* 0x11025E57: jmp 0x11025e5c */
L_11025E59:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025E59: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025E5C:
    /* cmp MEM32(esi), 0 */ /* 0x11025E5C: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025EA4; /* 0x11025E5F: jne 0x11025ea4 */
L_11025E61:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025E61: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025E6F; /* 0x11025E65: jne 0x11025e6f */
L_11025E67:
    ecx = ebp + 0xC; /* 0x11025E67: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025E6A: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025E6F:
    eax = MEM32(edi); /* 0x11025E6F: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025E71: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025E73: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025E75: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025E78: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025E7B: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025EA4; /* 0x11025E7D: jne 0x11025ea4 */
L_11025E7F:
    ecx = ebp + 0xC; /* 0x11025E7F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025E82: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11025E87: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025E88: push dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025E8B: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0x3Bu); /* 0x11025E8E: push 0x3b */
    PUSH32(esp, 0); /* 0x11025E90: push 0 */
    PUSH32(esp, eax); /* 0x11025E92: push eax */
    eax = ebp + 0xC; /* 0x11025E93: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025E96: push eax */
    PUSH32(esp, ebx); /* 0x11025E97: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025E98: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025E9D: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025EA0: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025EA7; /* 0x11025EA2: jmp 0x11025ea7 */
L_11025EA4:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025EA4: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025EA7:
    eax = MEM32(ebp + 0x8); /* 0x11025EA7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025EAA: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025EAD: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025EAF: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025EB2: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11025EB5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025EBA: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025EBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025EBDu);

L_11025EBD:
    PUSH32(esp, 4); /* 0x11025EBD: push 4 */
    eax = 0x1103D313u; /* 0x11025EBF: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11025EC4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11025EC9: mov ebx, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x11025ECB: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11025ECE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11025ED1: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11025ED2: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11025ED7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11025EDB: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11025EDC: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11025EE1: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x11025EE5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x11025EE7: pop ecx */
    ecx = ebp + (-0x10); /* 0x11025EE8: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11025EEB: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x11025EF0: mov ecx, dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025EF3: lea eax, [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11025EF6: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x11025EF7: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x11025EFA: push ecx */
    PUSH32(esp, 0x17u); /* 0x11025EFB: push 0x17 */
    PUSH32(esp, 0); /* 0x11025EFD: push 0 */
    PUSH32(esp, eax); /* 0x11025EFF: push eax */
    eax = ebp + 0xC; /* 0x11025F00: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025F03: push eax */
    PUSH32(esp, ebx); /* 0x11025F04: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025F05: call 0x110215ad */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x11025F0A: mov esi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025F0D: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025F10: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11025F5B; /* 0x11025F12: jne 0x11025f5b */
L_11025F14:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025F14: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025F22; /* 0x11025F18: jne 0x11025f22 */
L_11025F1A:
    ecx = ebp + 0xC; /* 0x11025F1A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025F1D: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025F22:
    eax = MEM32(edi); /* 0x11025F22: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025F24: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025F26: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025F28: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025F2B: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025F2E: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025F5B; /* 0x11025F30: jne 0x11025f5b */
L_11025F32:
    ecx = ebp + 0xC; /* 0x11025F32: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025F35: call 0x11021838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x11025F3A: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x11025F3D: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x11025F3E: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11025F41: push eax */
    PUSH32(esp, 0x3Bu); /* 0x11025F42: push 0x3b */
    PUSH32(esp, 0); /* 0x11025F44: push 0 */
    eax = ebp + 0x14; /* 0x11025F46: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11025F49: push eax */
    eax = ebp + 0xC; /* 0x11025F4A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025F4D: push eax */
    PUSH32(esp, ebx); /* 0x11025F4E: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025F4F: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025F54: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025F57: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025F5E; /* 0x11025F59: jmp 0x11025f5e */
L_11025F5B:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025F5B: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025F5E:
    /* cmp MEM32(esi), 0 */ /* 0x11025F5E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025FA6; /* 0x11025F61: jne 0x11025fa6 */
L_11025F63:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x11025F63: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025F71; /* 0x11025F67: jne 0x11025f71 */
L_11025F69:
    ecx = ebp + 0xC; /* 0x11025F69: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11022515); /* 0x11025F6C: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11025F71:
    eax = MEM32(edi); /* 0x11025F71: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11025F73: mov ecx, edi */
    PUSH32(esp, 0); /* 0x11025F75: push 0 */
    PUSH32(esp, MEM32(ebp + 0x12)); /* 0x11025F77: push dword ptr [ebp + 0x12] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11025F7A: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x3Au */ /* 0x11025F7D: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11025FA6; /* 0x11025F7F: jne 0x11025fa6 */
L_11025F81:
    ecx = ebp + 0xC; /* 0x11025F81: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11021838); /* 0x11025F84: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11025F89: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x11025F8A: push dword ptr [ebp + 0x24] */
    eax = ebp + 0x14; /* 0x11025F8D: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0x3Bu); /* 0x11025F90: push 0x3b */
    PUSH32(esp, 0); /* 0x11025F92: push 0 */
    PUSH32(esp, eax); /* 0x11025F94: push eax */
    eax = ebp + 0xC; /* 0x11025F95: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025F98: push eax */
    PUSH32(esp, ebx); /* 0x11025F99: push ebx */
    RECOMP_CALL(sub_110215AD); /* 0x11025F9A: call 0x110215ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11025F9F: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x11025FA2: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025FA9; /* 0x11025FA4: jmp 0x11025fa9 */
L_11025FA6:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11025FA6: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11025FA9:
    eax = MEM32(ebp + 0x8); /* 0x11025FA9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025FAC: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025FAF: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025FB1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025FB4: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11025FB7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025FBC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025FBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025FBFu);

L_11025FBF:
    PUSH32(esp, ebp); /* 0x11025FBF: push ebp */
    ebp = esp; /* 0x11025FC0: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x11025FC2: push dword ptr [ecx + 8] */
    eax = ebp + 0x14; /* 0x11025FC5: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x11025FC8: push 0 */
    PUSH32(esp, eax); /* 0x11025FCA: push eax */
    eax = ebp + 0xC; /* 0x11025FCB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11025FCE: push eax */
    RECOMP_CALL(sub_11015061); /* 0x11025FCF: call 0x11015061 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11025FD4: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11025FD6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11025FD9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11025FE5; /* 0x11025FDB: jns 0x11025fe5 */
L_11025FDD:
    eax = MEM32(ebp + 0x20); /* 0x11025FDD: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)((MEM32(eax) | 2)); _flag_b = (uint32_t)((MEM32(eax) | 2));
    MEM32(eax) = MEM32(eax) | 2; /* 0x11025FE0: or dword ptr [eax], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11025FED; /* 0x11025FE3: jmp 0x11025fed */
L_11025FE5:
    eax = MEM32(ebp + 0x24); /* 0x11025FE5: mov eax, dword ptr [ebp + 0x24] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x11025FE8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + 0x18) = ecx; /* 0x11025FEA: mov dword ptr [eax + 0x18], ecx */
L_11025FED:
    eax = MEM32(ebp + 0x8); /* 0x11025FED: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11025FF0: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11025FF3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11025FF5: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11025FF8: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x11025FFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11025FFC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11025FFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11025FFFu);

L_11025FFF:
    PUSH32(esp, ebp); /* 0x11025FFF: push ebp */
    ebp = esp; /* 0x11026000: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x11026002: push dword ptr [ecx + 8] */
    eax = ebp + 0x14; /* 0x11026005: lea eax, [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x11026008: push 0 */
    PUSH32(esp, eax); /* 0x1102600A: push eax */
    eax = ebp + 0xC; /* 0x1102600B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1102600E: push eax */
    RECOMP_CALL(sub_1101535D); /* 0x1102600F: call 0x1101535d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11026014: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026016: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11026019: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026025; /* 0x1102601B: jns 0x11026025 */
L_1102601D:
    eax = MEM32(ebp + 0x20); /* 0x1102601D: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)((MEM32(eax) | 2)); _flag_b = (uint32_t)((MEM32(eax) | 2));
    MEM32(eax) = MEM32(eax) | 2; /* 0x11026020: or dword ptr [eax], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1102602D; /* 0x11026023: jmp 0x1102602d */
L_11026025:
    eax = MEM32(ebp + 0x24); /* 0x11026025: mov eax, dword ptr [ebp + 0x24] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x11026028: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + 0x18) = ecx; /* 0x1102602A: mov dword ptr [eax + 0x18], ecx */
L_1102602D:
    eax = MEM32(ebp + 0x8); /* 0x1102602D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11026030: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x11026033: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11026035: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11026038: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1102603B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102603C: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102603F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102603Fu);

L_1102603F:
    PUSH32(esp, 4); /* 0x1102603F: push 4 */
    eax = 0x1103D313u; /* 0x11026041: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11026046: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102604B: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1102604D: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11026050: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11026053: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11026054: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11026059: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102605D: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1102605E: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11026063: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11026067: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11026069: pop ecx */
    ecx = ebp + (-0x10); /* 0x1102606A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x1102606D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0; /* 0x11026072: and dword ptr [ebp + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x1C; /* 0x11026076: lea eax, [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x11026079: push esi */
    PUSH32(esp, eax); /* 0x1102607A: push eax */
    PUSH32(esp, 0x7F3u); /* 0x1102607B: push 0x7f3 */
    PUSH32(esp, 0); /* 0x11026080: push 0 */
    eax = ebp + 0x14; /* 0x11026082: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11026085: push eax */
    eax = ebp + 0xC; /* 0x11026086: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11026089: push eax */
    PUSH32(esp, edi); /* 0x1102608A: push edi */
    RECOMP_CALL(sub_11021423); /* 0x1102608B: call 0x11021423 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x20); /* 0x11026090: mov edx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11026093: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | MEM32(edx))); _flag_b = (uint32_t)((eax | MEM32(edx)));
    eax = eax | MEM32(edx); /* 0x11026096: or eax, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x11026098: mov dword ptr [edx], eax */
    /* test LO8(eax), 2 */ /* 0x1102609A: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110260C1; /* 0x1102609C: jne 0x110260c1 */
L_1102609E:
    ecx = MEM32(ebp + 0x1C); /* 0x1102609E: mov ecx, dword ptr [ebp + 0x1c] */
    esi = 0x76Cu; /* 0x110260A1: mov esi, 0x76c */
    /* cmp ecx, esi */ /* 0x110260A6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_110260AE; /* 0x110260A8: jl 0x110260ae */
L_110260AA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x110260AA: sub ecx, esi */
    _flag_k = FK_CMP;
    goto L_110260BB; /* 0x110260AC: jmp 0x110260bb */
L_110260AE:
    /* cmp ecx, 0x87u */ /* 0x110260AE: cmp ecx, 0x87 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x87u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110260BB; /* 0x110260B4: jle 0x110260bb */
L_110260B6:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x110260B6: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x110260B9: mov dword ptr [edx], eax */
L_110260BB:
    eax = MEM32(ebp + 0x24); /* 0x110260BB: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x110260BE: mov dword ptr [eax + 0x14], ecx */
L_110260C1:
    eax = MEM32(ebp + 0x8); /* 0x110260C1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110260C4: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110260C7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110260C9: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110260CC: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110260CF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x110260D4: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_110260D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110260D7u);

L_110260D7:
    PUSH32(esp, 4); /* 0x110260D7: push 4 */
    eax = 0x1103D313u; /* 0x110260D9: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x110260DE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110260E3: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x110260E5: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x110260E8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110260EB: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110260EC: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110260F1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110260F5: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110260F6: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110260FB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x110260FF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11026101: pop ecx */
    ecx = ebp + (-0x10); /* 0x11026102: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x11026105: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0; /* 0x1102610A: and dword ptr [ebp + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x1C; /* 0x1102610E: lea eax, [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x11026111: push esi */
    PUSH32(esp, eax); /* 0x11026112: push eax */
    PUSH32(esp, 0x7F3u); /* 0x11026113: push 0x7f3 */
    PUSH32(esp, 0); /* 0x11026118: push 0 */
    eax = ebp + 0x14; /* 0x1102611A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1102611D: push eax */
    eax = ebp + 0xC; /* 0x1102611E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11026121: push eax */
    PUSH32(esp, edi); /* 0x11026122: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x11026123: call 0x110215ad */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x20); /* 0x11026128: mov edx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1102612B: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | MEM32(edx))); _flag_b = (uint32_t)((eax | MEM32(edx)));
    eax = eax | MEM32(edx); /* 0x1102612E: or eax, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x11026130: mov dword ptr [edx], eax */
    /* test LO8(eax), 2 */ /* 0x11026132: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026159; /* 0x11026134: jne 0x11026159 */
L_11026136:
    ecx = MEM32(ebp + 0x1C); /* 0x11026136: mov ecx, dword ptr [ebp + 0x1c] */
    esi = 0x76Cu; /* 0x11026139: mov esi, 0x76c */
    /* cmp ecx, esi */ /* 0x1102613E: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11026146; /* 0x11026140: jl 0x11026146 */
L_11026142:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x11026142: sub ecx, esi */
    _flag_k = FK_CMP;
    goto L_11026153; /* 0x11026144: jmp 0x11026153 */
L_11026146:
    /* cmp ecx, 0x87u */ /* 0x11026146: cmp ecx, 0x87 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x87u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11026153; /* 0x1102614C: jle 0x11026153 */
L_1102614E:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x1102614E: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x11026151: mov dword ptr [edx], eax */
L_11026153:
    eax = MEM32(ebp + 0x24); /* 0x11026153: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x11026156: mov dword ptr [eax + 0x14], ecx */
L_11026159:
    eax = MEM32(ebp + 0x8); /* 0x11026159: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1102615C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1102615F: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11026161: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11026164: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x11026167: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102616C: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102616F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102616Fu);

L_1102616F:
    PUSH32(esp, 4); /* 0x1102616F: push 4 */
    eax = 0x1103D313u; /* 0x11026171: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x11026176: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1102617B: mov edi, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1102617D: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ebp + (-0x10); /* 0x11026180: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11026183: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11026184: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11026189: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102618D: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x1102618E: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11026193: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11026197: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11026199: pop ecx */
    ecx = ebp + (-0x10); /* 0x1102619A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x1102619D: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0; /* 0x110261A2: and dword ptr [ebp + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x1C; /* 0x110261A6: lea eax, [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x110261A9: push esi */
    PUSH32(esp, eax); /* 0x110261AA: push eax */
    PUSH32(esp, 0x7F3u); /* 0x110261AB: push 0x7f3 */
    PUSH32(esp, 0); /* 0x110261B0: push 0 */
    eax = ebp + 0x14; /* 0x110261B2: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110261B5: push eax */
    eax = ebp + 0xC; /* 0x110261B6: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110261B9: push eax */
    PUSH32(esp, edi); /* 0x110261BA: push edi */
    RECOMP_CALL(sub_110215AD); /* 0x110261BB: call 0x110215ad */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x20); /* 0x110261C0: mov edx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x110261C3: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | MEM32(edx))); _flag_b = (uint32_t)((eax | MEM32(edx)));
    eax = eax | MEM32(edx); /* 0x110261C6: or eax, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x110261C8: mov dword ptr [edx], eax */
    /* test LO8(eax), 2 */ /* 0x110261CA: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110261F1; /* 0x110261CC: jne 0x110261f1 */
L_110261CE:
    ecx = MEM32(ebp + 0x1C); /* 0x110261CE: mov ecx, dword ptr [ebp + 0x1c] */
    esi = 0x76Cu; /* 0x110261D1: mov esi, 0x76c */
    /* cmp ecx, esi */ /* 0x110261D6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_110261DE; /* 0x110261D8: jl 0x110261de */
L_110261DA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x110261DA: sub ecx, esi */
    _flag_k = FK_CMP;
    goto L_110261EB; /* 0x110261DC: jmp 0x110261eb */
L_110261DE:
    /* cmp ecx, 0x87u */ /* 0x110261DE: cmp ecx, 0x87 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x87u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_110261EB; /* 0x110261E4: jle 0x110261eb */
L_110261E6:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x110261E6: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x110261E9: mov dword ptr [edx], eax */
L_110261EB:
    eax = MEM32(ebp + 0x24); /* 0x110261EB: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax + 0x14) = ecx; /* 0x110261EE: mov dword ptr [eax + 0x14], ecx */
L_110261F1:
    eax = MEM32(ebp + 0x8); /* 0x110261F1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110261F4: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x110261F7: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110261F9: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110261FC: mov dword ptr [eax + 4], ecx */
    RECOMP_CALL(sub_1103B340); /* 0x110261FF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11026204: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11026207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026207u);

L_11026207:
    PUSH32(esp, ebp); /* 0x11026207: push ebp */
    ebp = esp; /* 0x11026208: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1102620A: push ecx */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1102620B: push dword ptr [ecx + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x1102620E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11026211: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11010191); /* 0x11026215: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1102621A: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1102621D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102621F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11026220: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11026223(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026223u);

L_11026223:
    PUSH32(esp, ebp); /* 0x11026223: push ebp */
    ebp = esp; /* 0x11026224: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026226: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026229: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102622E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026230: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026233: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026234: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11026237: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1102623A: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102623B: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1102623E: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102623F: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x11026242: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026244: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D0u); /* 0x11026247: push 0x110022d0 */
    PUSH32(esp, eax); /* 0x1102624C: push eax */
    PUSH32(esp, edi); /* 0x1102624D: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x1102624E: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026253: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026256: push eax */
    eax = ebp + (-0x4C); /* 0x11026257: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x1102625A: push 0x40 */
    PUSH32(esp, eax); /* 0x1102625C: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102625D: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026263: push eax */
    eax = ebp + (-0x4C); /* 0x11026264: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11026267: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026268: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1102626B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102626C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102626F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026272: push ebx */
    PUSH32(esp, edi); /* 0x11026273: push edi */
    RECOMP_CALL(sub_11021CC7); /* 0x11026274: call 0x11021cc7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026279: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1102627C: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1102627F: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026281: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026283: pop edi */
    esi = POP32_VAL(esp); /* 0x11026284: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026285: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026286: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102628B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102628D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102628E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11026291(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026291u);

L_11026291:
    PUSH32(esp, ebp); /* 0x11026291: push ebp */
    ebp = esp; /* 0x11026292: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026294: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026297: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102629C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102629E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x110262A1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110262A2: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x110262A5: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x110262A8: push esi */
    esi = MEM32(ebp + 0x14); /* 0x110262A9: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x110262AC: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110262AD: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x110262B0: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110262B2: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D4u); /* 0x110262B5: push 0x110022d4 */
    PUSH32(esp, eax); /* 0x110262BA: push eax */
    PUSH32(esp, edi); /* 0x110262BB: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x110262BC: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110262C1: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110262C4: push eax */
    eax = ebp + (-0x4C); /* 0x110262C5: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x110262C8: push 0x40 */
    PUSH32(esp, eax); /* 0x110262CA: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x110262CB: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110262D1: push eax */
    eax = ebp + (-0x4C); /* 0x110262D2: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110262D5: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110262D6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x110262D9: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110262DA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110262DD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110262E0: push ebx */
    PUSH32(esp, edi); /* 0x110262E1: push edi */
    RECOMP_CALL(sub_11021CC7); /* 0x110262E2: call 0x11021cc7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x110262E7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110262EA: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x110262ED: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110262EF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110262F1: pop edi */
    esi = POP32_VAL(esp); /* 0x110262F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x110262F3: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110262F4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110262F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110262FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110262FC: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110262FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110262FFu);

L_110262FF:
    PUSH32(esp, ebp); /* 0x110262FF: push ebp */
    ebp = esp; /* 0x11026300: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x11026302: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026308: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102630D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102630F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11026312: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11026315: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x11026316: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x11026319: push esi */
    PUSH32(esp, edi); /* 0x1102631A: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x1102631B: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x11026321: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x11026324: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x11026327: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1102632D: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x11026330: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102634C; /* 0x11026332: jg 0x1102634c */
L_11026334:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102633A; /* 0x11026334: jl 0x1102633a */
L_11026336:
    /* test esi, esi */ /* 0x11026336: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026348; /* 0x11026338: jne 0x11026348 */
L_1102633A:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x1102633A: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026348; /* 0x11026341: jne 0x11026348 */
L_11026343:
    PUSH32(esp, 6); /* 0x11026343: push 6 */
    esi = POP32_VAL(esp); /* 0x11026345: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11026346: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11026348:
    /* test edi, edi */ /* 0x11026348: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026355; /* 0x1102634A: jl 0x11026355 */
L_1102634C:
    PUSH32(esp, 0x24u); /* 0x1102634C: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x1102634E: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11026357; /* 0x1102634F: jg 0x11026357 */
L_11026351:
    /* cmp esi, ecx */ /* 0x11026351: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11026357; /* 0x11026353: ja 0x11026357 */
L_11026355:
    ecx = esi; /* 0x11026355: mov ecx, esi */
L_11026357:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11026357: fld qword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x1102635A: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1102635C: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1102635D: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x1102635F: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026362: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x11026364: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x11026368: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x1102636C: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x11026371: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102644E; /* 0x11026376: jne 0x1102644e */
L_1102637C:
    fp_push(*(double*)ADDR(0x11001198)); /* 0x1102637C: fld qword ptr [0x11001198] */
    _st[0] *= _st[1]; /* 0x11026382: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026384: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026386: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11026388: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1102644E; /* 0x1102638B: jnp 0x1102644e */
L_11026391:
    fp_push(0.0); /* 0x11026391: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026393: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026395: fnstsw ax */
    fp_xch(1); /* 0x11026397: fxch st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11026399: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110263A4; /* 0x1102639C: jne 0x110263a4 */
L_1102639E:
    SET_LO8(edx, 1); /* 0x1102639E: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x110263A0: fchs  */
    goto L_110263A6; /* 0x110263A2: jmp 0x110263a6 */
L_110263A4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x110263A4: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_110263A6:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x110263A6: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110263AC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110263AE: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x110263B0: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x110263B6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110263E8; /* 0x110263B9: jp 0x110263e8 */
L_110263BB:
    ebx = MEM32(ebp + (-0x80)); /* 0x110263BB: mov ebx, dword ptr [ebp - 0x80] */
    goto L_110263C2; /* 0x110263BE: jmp 0x110263c2 */
L_110263C0:
    fp_xch(1); /* 0x110263C0: fxch st(1) */
L_110263C2:
    /* cmp ebx, 0x1388u */ /* 0x110263C2: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110263E4; /* 0x110263C8: jae 0x110263e4 */
L_110263CA:
    _st[2] /= _st[0]; /* 0x110263CA: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x110263CC: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x110263CF: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x110263D1: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110263D3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x110263D5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110263C0; /* 0x110263D8: jnp 0x110263c0 */
L_110263DA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110263DA: fstp st(0) */
L_110263DC:
    MEM32(ebp + (-0x80)) = ebx; /* 0x110263DC: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x110263DF: mov ebx, dword ptr [ebp - 8] */
    goto L_110263EA; /* 0x110263E2: jmp 0x110263ea */
L_110263E4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110263E4: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_110263DC; /* 0x110263E6: jmp 0x110263dc */
L_110263E8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110263E8: fstp st(1) */
L_110263EA:
    fp_xch(2); /* 0x110263EA: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110263EC: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110263EE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x110263F0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026446; /* 0x110263F3: jp 0x11026446 */
L_110263F5:
    /* test edi, edi */ /* 0x110263F5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026446; /* 0x110263F7: jl 0x11026446 */
L_110263F9:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026400; /* 0x110263F9: jg 0x11026400 */
L_110263FB:
    /* cmp esi, 0xAu */ /* 0x110263FB: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11026446; /* 0x110263FE: jb 0x11026446 */
L_11026400:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x11026400: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x11026406: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_1102640D; /* 0x11026409: jmp 0x1102640d */
L_1102640B:
    fp_xch(1); /* 0x1102640B: fxch st(1) */
L_1102640D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1102640D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102640F: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x11026411: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110264B4; /* 0x11026414: jne 0x110264b4 */
L_1102641A:
    /* cmp ebx, 0x1388u */ /* 0x1102641A: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110264B4; /* 0x11026420: jae 0x110264b4 */
L_11026426:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x11026426: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026429: fxch st(1) */
    _st[0] *= _st[2]; /* 0x1102642B: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102642D: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11026430: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x11026433: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102640B; /* 0x11026435: jg 0x1102640b */
L_11026437:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102643E; /* 0x11026437: jl 0x1102643e */
L_11026439:
    /* cmp esi, 0xAu */ /* 0x11026439: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102640B; /* 0x1102643C: jae 0x1102640b */
L_1102643E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1102643E: fstp st(1) */
L_11026440:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x11026440: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026443: mov ebx, dword ptr [ebp - 8] */
L_11026446:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026446: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x11026448: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102644E; /* 0x1102644A: je 0x1102644e */
L_1102644C:
    _st[0] = -_st[0]; /* 0x1102644C: fchs  */
L_1102644E:
    edi = MEM32(ebp + (-0x84)); /* 0x1102644E: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x11026454: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x11026457: push ecx */
    PUSH32(esp, ecx); /* 0x11026458: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11026459: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x1102645C: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1102645D: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0); /* 0x11026460: push 0 */
    PUSH32(esp, eax); /* 0x11026462: push eax */
    PUSH32(esp, edi); /* 0x11026463: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x11026464: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026469: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102646C: push eax */
    eax = ebp + (-0x78); /* 0x1102646D: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x11026470: push 0x6c */
    PUSH32(esp, eax); /* 0x11026472: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026473: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026479: push eax */
    PUSH32(esp, esi); /* 0x1102647A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x1102647B: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x1102647E: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x11026484: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11026487: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1102648A: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102648B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1102648E: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102648F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026492: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11026495: push esi */
    PUSH32(esp, edi); /* 0x11026496: push edi */
    RECOMP_CALL(sub_1101D15B); /* 0x11026497: call 0x1101d15b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102649C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x1102649F: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x110264A2: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110264A4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110264A6: pop edi */
    esi = POP32_VAL(esp); /* 0x110264A7: pop esi */
    ebx = POP32_VAL(esp); /* 0x110264A8: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110264A9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110264AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110264B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x110264B1: ret 0x1c */
L_110264B4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110264B4: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_11026440; /* 0x110264B6: jmp 0x11026440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110264B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110264B8u);

L_110264B8:
    PUSH32(esp, ebp); /* 0x110264B8: push ebp */
    ebp = esp; /* 0x110264B9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x110264BB: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110264C1: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110264C6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110264C8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x110264CB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110264CE: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x110264CF: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x110264D2: push esi */
    PUSH32(esp, edi); /* 0x110264D3: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x110264D4: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x110264DA: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x110264DD: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x110264E0: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x110264E6: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x110264E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026505; /* 0x110264EB: jg 0x11026505 */
L_110264ED:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110264F3; /* 0x110264ED: jl 0x110264f3 */
L_110264EF:
    /* test esi, esi */ /* 0x110264EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026501; /* 0x110264F1: jne 0x11026501 */
L_110264F3:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x110264F3: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026501; /* 0x110264FA: jne 0x11026501 */
L_110264FC:
    PUSH32(esp, 6); /* 0x110264FC: push 6 */
    esi = POP32_VAL(esp); /* 0x110264FE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110264FF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11026501:
    /* test edi, edi */ /* 0x11026501: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102650E; /* 0x11026503: jl 0x1102650e */
L_11026505:
    PUSH32(esp, 0x24u); /* 0x11026505: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x11026507: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11026510; /* 0x11026508: jg 0x11026510 */
L_1102650A:
    /* cmp esi, ecx */ /* 0x1102650A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11026510; /* 0x1102650C: ja 0x11026510 */
L_1102650E:
    ecx = esi; /* 0x1102650E: mov ecx, esi */
L_11026510:
    eax = ecx; /* 0x11026510: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11026512: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11026513: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x11026515: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026518: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x1102651A: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x1102651E: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x11026522: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x11026527: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110265EE; /* 0x1102652C: jne 0x110265ee */
L_11026532:
    fp_push(0.0); /* 0x11026532: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11026534: fld qword ptr [ebp + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026537: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026539: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1102653B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026546; /* 0x1102653E: jp 0x11026546 */
L_11026540:
    SET_LO8(edx, 1); /* 0x11026540: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x11026542: fchs  */
    goto L_11026548; /* 0x11026544: jmp 0x11026548 */
L_11026546:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x11026546: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11026548:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11026548: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1102654E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026550: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11026552: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x11026558: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1102658A; /* 0x1102655B: jp 0x1102658a */
L_1102655D:
    ebx = MEM32(ebp + (-0x80)); /* 0x1102655D: mov ebx, dword ptr [ebp - 0x80] */
    goto L_11026564; /* 0x11026560: jmp 0x11026564 */
L_11026562:
    fp_xch(1); /* 0x11026562: fxch st(1) */
L_11026564:
    /* cmp ebx, 0x1388u */ /* 0x11026564: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026586; /* 0x1102656A: jae 0x11026586 */
L_1102656C:
    _st[2] /= _st[0]; /* 0x1102656C: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x1102656E: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026571: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11026573: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026575: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11026577: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11026562; /* 0x1102657A: jnp 0x11026562 */
L_1102657C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1102657C: fstp st(0) */
L_1102657E:
    MEM32(ebp + (-0x80)) = ebx; /* 0x1102657E: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026581: mov ebx, dword ptr [ebp - 8] */
    goto L_1102658C; /* 0x11026584: jmp 0x1102658c */
L_11026586:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026586: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_1102657E; /* 0x11026588: jmp 0x1102657e */
L_1102658A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1102658A: fstp st(1) */
L_1102658C:
    fp_xch(2); /* 0x1102658C: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1102658E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026590: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11026592: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110265E0; /* 0x11026595: jp 0x110265e0 */
L_11026597:
    /* test edi, edi */ /* 0x11026597: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110265E0; /* 0x11026599: jl 0x110265e0 */
L_1102659B:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110265A2; /* 0x1102659B: jg 0x110265a2 */
L_1102659D:
    /* cmp esi, 0xAu */ /* 0x1102659D: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110265E0; /* 0x110265A0: jb 0x110265e0 */
L_110265A2:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x110265A2: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x110265A8: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_110265AF; /* 0x110265AB: jmp 0x110265af */
L_110265AD:
    fp_xch(1); /* 0x110265AD: fxch st(1) */
L_110265AF:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110265AF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110265B1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x110265B3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110265EA; /* 0x110265B6: jne 0x110265ea */
L_110265B8:
    /* cmp ebx, 0x1388u */ /* 0x110265B8: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110265EA; /* 0x110265BE: jae 0x110265ea */
L_110265C0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x110265C0: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x110265C3: fxch st(1) */
    _st[0] *= _st[2]; /* 0x110265C5: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110265C7: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x110265CA: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x110265CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110265AD; /* 0x110265CF: jg 0x110265ad */
L_110265D1:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110265D8; /* 0x110265D1: jl 0x110265d8 */
L_110265D3:
    /* cmp esi, 0xAu */ /* 0x110265D3: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_110265AD; /* 0x110265D6: jae 0x110265ad */
L_110265D8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110265D8: fstp st(1) */
L_110265DA:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x110265DA: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x110265DD: mov ebx, dword ptr [ebp - 8] */
L_110265E0:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110265E0: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x110265E2: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110265F1; /* 0x110265E4: je 0x110265f1 */
L_110265E6:
    _st[0] = -_st[0]; /* 0x110265E6: fchs  */
    goto L_110265F1; /* 0x110265E8: jmp 0x110265f1 */
L_110265EA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110265EA: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_110265DA; /* 0x110265EC: jmp 0x110265da */
L_110265EE:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x110265EE: fld qword ptr [ebp + 0x1c] */
L_110265F1:
    edi = MEM32(ebp + (-0x84)); /* 0x110265F1: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x110265F7: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x110265FA: push ecx */
    PUSH32(esp, ecx); /* 0x110265FB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110265FC: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x110265FF: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x11026600: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0x4Cu); /* 0x11026603: push 0x4c */
    PUSH32(esp, eax); /* 0x11026605: push eax */
    PUSH32(esp, edi); /* 0x11026606: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x11026607: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102660C: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102660F: push eax */
    eax = ebp + (-0x78); /* 0x11026610: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x11026613: push 0x6c */
    PUSH32(esp, eax); /* 0x11026615: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026616: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102661C: push eax */
    PUSH32(esp, esi); /* 0x1102661D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x1102661E: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x11026621: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x11026627: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x1102662A: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1102662D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102662E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x11026631: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026632: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026635: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11026638: push esi */
    PUSH32(esp, edi); /* 0x11026639: push edi */
    RECOMP_CALL(sub_1101D15B); /* 0x1102663A: call 0x1101d15b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102663F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x11026642: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x11026645: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026647: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026649: pop edi */
    esi = POP32_VAL(esp); /* 0x1102664A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102664B: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102664C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026651: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026653: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026654: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026657(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026657u);

L_11026657:
    PUSH32(esp, ebp); /* 0x11026657: push ebp */
    ebp = esp; /* 0x11026658: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1102665A: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102665D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026662: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026664: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11026667: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x1102666A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102666B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1102666E: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102666F: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026672: push edi */
    PUSH32(esp, eax); /* 0x11026673: push eax */
    PUSH32(esp, 0x110022E0u); /* 0x11026674: push 0x110022e0 */
    eax = ebp + (-0x44); /* 0x11026679: lea eax, [ebp - 0x44] */
    edi = ecx; /* 0x1102667C: mov edi, ecx */
    PUSH32(esp, 0x40u); /* 0x1102667E: push 0x40 */
    PUSH32(esp, eax); /* 0x11026680: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026681: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026687: push eax */
    eax = ebp + (-0x44); /* 0x11026688: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1102668B: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102668C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1102668F: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026690: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026693: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026696: push ebx */
    PUSH32(esp, edi); /* 0x11026697: push edi */
    RECOMP_CALL(sub_11021CC7); /* 0x11026698: call 0x11021cc7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102669D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110266A0: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x110266A3: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110266A5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110266A7: pop edi */
    esi = POP32_VAL(esp); /* 0x110266A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x110266A9: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110266AA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110266AF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110266B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110266B2: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110266B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110266B5u);

L_110266B5:
    PUSH32(esp, ebp); /* 0x110266B5: push ebp */
    ebp = esp; /* 0x110266B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x110266B8: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110266BB: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110266C0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110266C2: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x110266C5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110266C6: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x110266C9: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x110266CC: push esi */
    esi = MEM32(ebp + 0x14); /* 0x110266CD: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x110266D0: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110266D1: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x110266D4: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110266D6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110266D9: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D8u); /* 0x110266DC: push 0x110022d8 */
    PUSH32(esp, eax); /* 0x110266E1: push eax */
    PUSH32(esp, edi); /* 0x110266E2: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x110266E3: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110266E8: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110266EB: push eax */
    eax = ebp + (-0x4C); /* 0x110266EC: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x110266EF: push 0x40 */
    PUSH32(esp, eax); /* 0x110266F1: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x110266F2: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110266F8: push eax */
    eax = ebp + (-0x4C); /* 0x110266F9: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110266FC: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110266FD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11026700: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026701: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026704: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026707: push ebx */
    PUSH32(esp, edi); /* 0x11026708: push edi */
    RECOMP_CALL(sub_11021CC7); /* 0x11026709: call 0x11021cc7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102670E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x11026711: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026714: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026716: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026718: pop edi */
    esi = POP32_VAL(esp); /* 0x11026719: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102671A: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102671B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026720: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026722: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026723: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026726(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026726u);

L_11026726:
    PUSH32(esp, ebp); /* 0x11026726: push ebp */
    ebp = esp; /* 0x11026727: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026729: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102672C: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026731: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026733: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026736: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026737: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x1102673A: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1102673D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102673E: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026741: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11026742: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x11026745: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026747: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1102674A: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022DCu); /* 0x1102674D: push 0x110022dc */
    PUSH32(esp, eax); /* 0x11026752: push eax */
    PUSH32(esp, edi); /* 0x11026753: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11026754: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026759: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102675C: push eax */
    eax = ebp + (-0x4C); /* 0x1102675D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11026760: push 0x40 */
    PUSH32(esp, eax); /* 0x11026762: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026763: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026769: push eax */
    eax = ebp + (-0x4C); /* 0x1102676A: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1102676D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102676E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11026771: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026772: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026775: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026778: push ebx */
    PUSH32(esp, edi); /* 0x11026779: push edi */
    RECOMP_CALL(sub_11021CC7); /* 0x1102677A: call 0x11021cc7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102677F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x11026782: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026785: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026787: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026789: pop edi */
    esi = POP32_VAL(esp); /* 0x1102678A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102678B: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102678C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026791: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026793: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026794: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026797(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026797u);

L_11026797:
    PUSH32(esp, 0x4Cu); /* 0x11026797: push 0x4c */
    eax = 0x1103E6B7u; /* 0x11026799: mov eax, 0x1103e6b7 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1102679E: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x110267A3: mov ebx, ecx */
    edi = MEM32(ebp + 0x14); /* 0x110267A5: mov edi, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x110267A8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x18); /* 0x110267AB: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x48)) = ecx; /* 0x110267AE: mov dword ptr [ebp - 0x48], ecx */
    /* test MEM32(edi + 0x14), 0x4000u */ /* 0x110267B1: test dword ptr [edi + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x44)) = (uint8_t)(LO8(eax)); /* 0x110267B8: mov byte ptr [ebp - 0x44], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110267DE; /* 0x110267BB: jne 0x110267de */
L_110267BD:
    edx = MEM32(ebp + 0x1C); /* 0x110267BD: mov edx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebx); /* 0x110267C0: mov esi, dword ptr [ebx] */
    edx = (uint32_t)LO8(edx); /* 0x110267C2: movzx edx, dl */
    PUSH32(esp, edx); /* 0x110267C5: push edx */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x110267C6: push dword ptr [ebp - 0x44] */
    PUSH32(esp, edi); /* 0x110267C9: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110267CA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110267CD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x110267D0: push ecx */
    ecx = ebx; /* 0x110267D1: mov ecx, ebx */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x110267D3: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x110267D6: mov eax, dword ptr [ebp - 0x48] */
    goto L_110268EE; /* 0x110267D9: jmp 0x110268ee */
L_110267DE:
    eax = ebp + (-0x4C); /* 0x110267DE: lea eax, [ebp - 0x4c] */
    ecx = edi; /* 0x110267E1: mov ecx, edi */
    PUSH32(esp, eax); /* 0x110267E3: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110267E4: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110267E9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110267ED: push eax */
    RECOMP_CALL(sub_11015B71); /* 0x110267EE: call 0x11015b71 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110267F3: pop ecx */
    ecx = ebp + (-0x4C); /* 0x110267F4: lea ecx, [ebp - 0x4c] */
    esi = eax; /* 0x110267F7: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110267F9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x110267FE: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11026802: mov dword ptr [ebp - 0x14], 0xf */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x11026809: mov byte ptr [ebp - 0x28], 0 */
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x1102680D: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x40); /* 0x11026811: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11026814: mov dword ptr [ebp - 4], 1 */
    ecx = esi; /* 0x1102681B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1102681D: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11026827; /* 0x1102681E: je 0x11026827 */
L_11026820:
    RECOMP_CALL(sub_1102BC05); /* 0x11026820: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    goto L_1102682C; /* 0x11026825: jmp 0x1102682c */
L_11026827:
    RECOMP_CALL(sub_11037B56); /* 0x11026827: call 0x11037b56 */
    RECOMP_FLAGS_IN();
L_1102682C:
    PUSH32(esp, eax); /* 0x1102682C: push eax */
    ecx = ebp + (-0x28); /* 0x1102682D: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1103632A); /* 0x11026830: call 0x1103632a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11026835: push 0 */
    PUSH32(esp, 1); /* 0x11026837: push 1 */
    ecx = ebp + (-0x40); /* 0x11026839: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x1102683C: call 0x11010630 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x11026841: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x11026845: mov ecx, dword ptr [ebp - 0x18] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1102685D; /* 0x11026848: jl 0x1102685d */
L_1102684A:
    if (CMP_G(_flag_a, _flag_b)) goto L_11026852; /* 0x1102684A: jg 0x11026852 */
L_1102684C:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x1102684C: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102685D; /* 0x11026850: jbe 0x1102685d */
L_11026852:
    esi = MEM32(edi + 0x20); /* 0x11026852: mov esi, dword ptr [edi + 0x20] */
    /* cmp esi, ecx */ /* 0x11026855: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1102685D; /* 0x11026857: jbe 0x1102685d */
L_11026859:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11026859: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_1102685F; /* 0x1102685B: jmp 0x1102685f */
L_1102685D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102685D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102685F:
    eax = MEM32(edi + 0x14); /* 0x1102685F: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x11026862: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x11026867: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11026892; /* 0x1102686A: je 0x11026892 */
L_1102686C:
    PUSH32(esp, esi); /* 0x1102686C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1102686D: push dword ptr [ebp - 0x44] */
    eax = ebp + (-0x50); /* 0x11026870: lea eax, [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026873: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026876: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11026879: push eax */
    PUSH32(esp, ebx); /* 0x1102687A: push ebx */
    RECOMP_CALL(sub_110225C9); /* 0x1102687B: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11026880: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11026883: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11026885: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11026887: mov dword ptr [ebp + 0xc], edx */
    eax = MEM32(eax + 0x4); /* 0x1102688A: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1102688D: mov dword ptr [ebp + 0x10], eax */
    goto L_11026898; /* 0x11026890: jmp 0x11026898 */
L_11026892:
    eax = MEM32(ebp + 0x10); /* 0x11026892: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x11026895: mov edx, dword ptr [ebp + 0xc] */
L_11026898:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11026898: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x1102689C: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110268A4; /* 0x1102689F: jae 0x110268a4 */
L_110268A1:
    ecx = ebp + (-0x28); /* 0x110268A1: lea ecx, [ebp - 0x28] */
L_110268A4:
    MEM32(ebp + (-0x4C)) = ecx; /* 0x110268A4: mov dword ptr [ebp - 0x4c], ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x110268A7: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x110268AA: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x110268AB: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110268AE: push eax */
    PUSH32(esp, edx); /* 0x110268AF: push edx */
    eax = ebp + (-0x58); /* 0x110268B0: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x110268B3: push eax */
    PUSH32(esp, ebx); /* 0x110268B4: push ebx */
    RECOMP_CALL(sub_11022565); /* 0x110268B5: call 0x11022565 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110268BA: push esi */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x110268BB: push dword ptr [ebp - 0x44] */
    esi = MEM32(ebp + (-0x48)); /* 0x110268BE: mov esi, dword ptr [ebp - 0x48] */
    ecx = MEM32(eax); /* 0x110268C1: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x110268C3: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x110268C6: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x110268C9: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0; /* 0x110268CD: and dword ptr [edi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110268D1: push eax */
    PUSH32(esp, ecx); /* 0x110268D2: push ecx */
    PUSH32(esp, esi); /* 0x110268D3: push esi */
    PUSH32(esp, ebx); /* 0x110268D4: push ebx */
    MEM32(ebp + 0x10) = eax; /* 0x110268D5: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_110225C9); /* 0x110268D8: call 0x110225c9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110268DD: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x28); /* 0x110268E0: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x110268E3: push 0 */
    PUSH32(esp, 1); /* 0x110268E5: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x110268E7: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110268EC: mov eax, esi */
L_110268EE:
    RECOMP_CALL(sub_1103B354); /* 0x110268EE: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110268F3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110268F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110268F6u);

L_110268F6:
    PUSH32(esp, ebp); /* 0x110268F6: push ebp */
    ebp = esp; /* 0x110268F7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x110268F9: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110268FC: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026901: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026903: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026906: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026907: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x1102690A: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1102690D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102690E: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026911: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026912: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x11026915: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026917: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D0u); /* 0x1102691A: push 0x110022d0 */
    PUSH32(esp, eax); /* 0x1102691F: push eax */
    PUSH32(esp, edi); /* 0x11026920: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11026921: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026926: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026929: push eax */
    eax = ebp + (-0x4C); /* 0x1102692A: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x1102692D: push 0x40 */
    PUSH32(esp, eax); /* 0x1102692F: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026930: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026936: push eax */
    eax = ebp + (-0x4C); /* 0x11026937: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1102693A: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102693B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1102693E: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102693F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026942: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026945: push ebx */
    PUSH32(esp, edi); /* 0x11026946: push edi */
    RECOMP_CALL(sub_11021F66); /* 0x11026947: call 0x11021f66 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1102694C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x1102694F: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026952: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026954: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026956: pop edi */
    esi = POP32_VAL(esp); /* 0x11026957: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026958: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026959: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102695E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026960: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11026961: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11026964(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026964u);

L_11026964:
    PUSH32(esp, ebp); /* 0x11026964: push ebp */
    ebp = esp; /* 0x11026965: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026967: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102696A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102696F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026971: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026974: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026975: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11026978: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1102697B: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1102697C: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1102697F: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026980: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x11026983: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026985: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D4u); /* 0x11026988: push 0x110022d4 */
    PUSH32(esp, eax); /* 0x1102698D: push eax */
    PUSH32(esp, edi); /* 0x1102698E: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x1102698F: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026994: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026997: push eax */
    eax = ebp + (-0x4C); /* 0x11026998: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x1102699B: push 0x40 */
    PUSH32(esp, eax); /* 0x1102699D: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102699E: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110269A4: push eax */
    eax = ebp + (-0x4C); /* 0x110269A5: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110269A8: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110269A9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x110269AC: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110269AD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110269B0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110269B3: push ebx */
    PUSH32(esp, edi); /* 0x110269B4: push edi */
    RECOMP_CALL(sub_11021F66); /* 0x110269B5: call 0x11021f66 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x110269BA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110269BD: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x110269C0: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110269C2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110269C4: pop edi */
    esi = POP32_VAL(esp); /* 0x110269C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x110269C6: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110269C7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110269CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110269CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110269CF: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110269D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110269D2u);

L_110269D2:
    PUSH32(esp, ebp); /* 0x110269D2: push ebp */
    ebp = esp; /* 0x110269D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x110269D5: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110269DB: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110269E0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110269E2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x110269E5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110269E8: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x110269E9: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x110269EC: push esi */
    PUSH32(esp, edi); /* 0x110269ED: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x110269EE: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x110269F4: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x110269F7: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x110269FA: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x11026A00: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x11026A03: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026A1F; /* 0x11026A05: jg 0x11026a1f */
L_11026A07:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026A0D; /* 0x11026A07: jl 0x11026a0d */
L_11026A09:
    /* test esi, esi */ /* 0x11026A09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026A1B; /* 0x11026A0B: jne 0x11026a1b */
L_11026A0D:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x11026A0D: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026A1B; /* 0x11026A14: jne 0x11026a1b */
L_11026A16:
    PUSH32(esp, 6); /* 0x11026A16: push 6 */
    esi = POP32_VAL(esp); /* 0x11026A18: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11026A19: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11026A1B:
    /* test edi, edi */ /* 0x11026A1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026A28; /* 0x11026A1D: jl 0x11026a28 */
L_11026A1F:
    PUSH32(esp, 0x24u); /* 0x11026A1F: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x11026A21: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11026A2A; /* 0x11026A22: jg 0x11026a2a */
L_11026A24:
    /* cmp esi, ecx */ /* 0x11026A24: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11026A2A; /* 0x11026A26: ja 0x11026a2a */
L_11026A28:
    ecx = esi; /* 0x11026A28: mov ecx, esi */
L_11026A2A:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11026A2A: fld qword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x11026A2D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11026A2F: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11026A30: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x11026A32: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026A35: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x11026A37: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x11026A3B: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x11026A3F: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x11026A44: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11026B21; /* 0x11026A49: jne 0x11026b21 */
L_11026A4F:
    fp_push(*(double*)ADDR(0x11001198)); /* 0x11026A4F: fld qword ptr [0x11001198] */
    _st[0] *= _st[1]; /* 0x11026A55: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026A57: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026A59: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11026A5B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11026B21; /* 0x11026A5E: jnp 0x11026b21 */
L_11026A64:
    fp_push(0.0); /* 0x11026A64: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026A66: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026A68: fnstsw ax */
    fp_xch(1); /* 0x11026A6A: fxch st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11026A6C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026A77; /* 0x11026A6F: jne 0x11026a77 */
L_11026A71:
    SET_LO8(edx, 1); /* 0x11026A71: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x11026A73: fchs  */
    goto L_11026A79; /* 0x11026A75: jmp 0x11026a79 */
L_11026A77:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x11026A77: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11026A79:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11026A79: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026A7F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026A81: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11026A83: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x11026A89: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026ABB; /* 0x11026A8C: jp 0x11026abb */
L_11026A8E:
    ebx = MEM32(ebp + (-0x80)); /* 0x11026A8E: mov ebx, dword ptr [ebp - 0x80] */
    goto L_11026A95; /* 0x11026A91: jmp 0x11026a95 */
L_11026A93:
    fp_xch(1); /* 0x11026A93: fxch st(1) */
L_11026A95:
    /* cmp ebx, 0x1388u */ /* 0x11026A95: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026AB7; /* 0x11026A9B: jae 0x11026ab7 */
L_11026A9D:
    _st[2] /= _st[0]; /* 0x11026A9D: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11026A9F: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026AA2: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11026AA4: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026AA6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11026AA8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11026A93; /* 0x11026AAB: jnp 0x11026a93 */
L_11026AAD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11026AAD: fstp st(0) */
L_11026AAF:
    MEM32(ebp + (-0x80)) = ebx; /* 0x11026AAF: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026AB2: mov ebx, dword ptr [ebp - 8] */
    goto L_11026ABD; /* 0x11026AB5: jmp 0x11026abd */
L_11026AB7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026AB7: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11026AAF; /* 0x11026AB9: jmp 0x11026aaf */
L_11026ABB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026ABB: fstp st(1) */
L_11026ABD:
    fp_xch(2); /* 0x11026ABD: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026ABF: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026AC1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11026AC3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026B19; /* 0x11026AC6: jp 0x11026b19 */
L_11026AC8:
    /* test edi, edi */ /* 0x11026AC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026B19; /* 0x11026ACA: jl 0x11026b19 */
L_11026ACC:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026AD3; /* 0x11026ACC: jg 0x11026ad3 */
L_11026ACE:
    /* cmp esi, 0xAu */ /* 0x11026ACE: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11026B19; /* 0x11026AD1: jb 0x11026b19 */
L_11026AD3:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x11026AD3: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x11026AD9: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_11026AE0; /* 0x11026ADC: jmp 0x11026ae0 */
L_11026ADE:
    fp_xch(1); /* 0x11026ADE: fxch st(1) */
L_11026AE0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026AE0: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026AE2: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x11026AE4: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026B87; /* 0x11026AE7: jne 0x11026b87 */
L_11026AED:
    /* cmp ebx, 0x1388u */ /* 0x11026AED: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026B87; /* 0x11026AF3: jae 0x11026b87 */
L_11026AF9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x11026AF9: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026AFC: fxch st(1) */
    _st[0] *= _st[2]; /* 0x11026AFE: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026B00: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11026B03: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x11026B06: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026ADE; /* 0x11026B08: jg 0x11026ade */
L_11026B0A:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026B11; /* 0x11026B0A: jl 0x11026b11 */
L_11026B0C:
    /* cmp esi, 0xAu */ /* 0x11026B0C: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026ADE; /* 0x11026B0F: jae 0x11026ade */
L_11026B11:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026B11: fstp st(1) */
L_11026B13:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x11026B13: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026B16: mov ebx, dword ptr [ebp - 8] */
L_11026B19:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026B19: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x11026B1B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11026B21; /* 0x11026B1D: je 0x11026b21 */
L_11026B1F:
    _st[0] = -_st[0]; /* 0x11026B1F: fchs  */
L_11026B21:
    edi = MEM32(ebp + (-0x84)); /* 0x11026B21: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x11026B27: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x11026B2A: push ecx */
    PUSH32(esp, ecx); /* 0x11026B2B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11026B2C: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x11026B2F: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x11026B30: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0); /* 0x11026B33: push 0 */
    PUSH32(esp, eax); /* 0x11026B35: push eax */
    PUSH32(esp, edi); /* 0x11026B36: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x11026B37: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026B3C: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026B3F: push eax */
    eax = ebp + (-0x78); /* 0x11026B40: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x11026B43: push 0x6c */
    PUSH32(esp, eax); /* 0x11026B45: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026B46: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026B4C: push eax */
    PUSH32(esp, esi); /* 0x11026B4D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x11026B4E: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x11026B51: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x11026B57: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11026B5A: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x11026B5D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026B5E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x11026B61: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026B62: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026B65: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11026B68: push esi */
    PUSH32(esp, edi); /* 0x11026B69: push edi */
    RECOMP_CALL(sub_1101D4BD); /* 0x11026B6A: call 0x1101d4bd */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026B6F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x11026B72: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x11026B75: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026B77: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026B79: pop edi */
    esi = POP32_VAL(esp); /* 0x11026B7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026B7B: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026B7C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026B81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026B83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026B84: ret 0x1c */
L_11026B87:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11026B87: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_11026B13; /* 0x11026B89: jmp 0x11026b13 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11026B8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026B8Bu);

L_11026B8B:
    PUSH32(esp, ebp); /* 0x11026B8B: push ebp */
    ebp = esp; /* 0x11026B8C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x11026B8E: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026B94: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026B99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026B9B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11026B9E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11026BA1: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x11026BA2: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x11026BA5: push esi */
    PUSH32(esp, edi); /* 0x11026BA6: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x11026BA7: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x11026BAD: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x11026BB0: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x11026BB3: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x11026BB9: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x11026BBC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026BD8; /* 0x11026BBE: jg 0x11026bd8 */
L_11026BC0:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026BC6; /* 0x11026BC0: jl 0x11026bc6 */
L_11026BC2:
    /* test esi, esi */ /* 0x11026BC2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026BD4; /* 0x11026BC4: jne 0x11026bd4 */
L_11026BC6:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x11026BC6: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026BD4; /* 0x11026BCD: jne 0x11026bd4 */
L_11026BCF:
    PUSH32(esp, 6); /* 0x11026BCF: push 6 */
    esi = POP32_VAL(esp); /* 0x11026BD1: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11026BD2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11026BD4:
    /* test edi, edi */ /* 0x11026BD4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026BE1; /* 0x11026BD6: jl 0x11026be1 */
L_11026BD8:
    PUSH32(esp, 0x24u); /* 0x11026BD8: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x11026BDA: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11026BE3; /* 0x11026BDB: jg 0x11026be3 */
L_11026BDD:
    /* cmp esi, ecx */ /* 0x11026BDD: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11026BE3; /* 0x11026BDF: ja 0x11026be3 */
L_11026BE1:
    ecx = esi; /* 0x11026BE1: mov ecx, esi */
L_11026BE3:
    eax = ecx; /* 0x11026BE3: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11026BE5: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11026BE6: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x11026BE8: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026BEB: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x11026BED: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x11026BF1: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x11026BF5: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x11026BFA: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11026CC1; /* 0x11026BFF: jne 0x11026cc1 */
L_11026C05:
    fp_push(0.0); /* 0x11026C05: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11026C07: fld qword ptr [ebp + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026C0A: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026C0C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11026C0E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026C19; /* 0x11026C11: jp 0x11026c19 */
L_11026C13:
    SET_LO8(edx, 1); /* 0x11026C13: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x11026C15: fchs  */
    goto L_11026C1B; /* 0x11026C17: jmp 0x11026c1b */
L_11026C19:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x11026C19: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11026C1B:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11026C1B: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026C21: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026C23: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11026C25: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x11026C2B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026C5D; /* 0x11026C2E: jp 0x11026c5d */
L_11026C30:
    ebx = MEM32(ebp + (-0x80)); /* 0x11026C30: mov ebx, dword ptr [ebp - 0x80] */
    goto L_11026C37; /* 0x11026C33: jmp 0x11026c37 */
L_11026C35:
    fp_xch(1); /* 0x11026C35: fxch st(1) */
L_11026C37:
    /* cmp ebx, 0x1388u */ /* 0x11026C37: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026C59; /* 0x11026C3D: jae 0x11026c59 */
L_11026C3F:
    _st[2] /= _st[0]; /* 0x11026C3F: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11026C41: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026C44: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11026C46: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026C48: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11026C4A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11026C35; /* 0x11026C4D: jnp 0x11026c35 */
L_11026C4F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11026C4F: fstp st(0) */
L_11026C51:
    MEM32(ebp + (-0x80)) = ebx; /* 0x11026C51: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026C54: mov ebx, dword ptr [ebp - 8] */
    goto L_11026C5F; /* 0x11026C57: jmp 0x11026c5f */
L_11026C59:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026C59: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11026C51; /* 0x11026C5B: jmp 0x11026c51 */
L_11026C5D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026C5D: fstp st(1) */
L_11026C5F:
    fp_xch(2); /* 0x11026C5F: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026C61: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026C63: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11026C65: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11026CB3; /* 0x11026C68: jp 0x11026cb3 */
L_11026C6A:
    /* test edi, edi */ /* 0x11026C6A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026CB3; /* 0x11026C6C: jl 0x11026cb3 */
L_11026C6E:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026C75; /* 0x11026C6E: jg 0x11026c75 */
L_11026C70:
    /* cmp esi, 0xAu */ /* 0x11026C70: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11026CB3; /* 0x11026C73: jb 0x11026cb3 */
L_11026C75:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x11026C75: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x11026C7B: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_11026C82; /* 0x11026C7E: jmp 0x11026c82 */
L_11026C80:
    fp_xch(1); /* 0x11026C80: fxch st(1) */
L_11026C82:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11026C82: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11026C84: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x11026C86: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026CBD; /* 0x11026C89: jne 0x11026cbd */
L_11026C8B:
    /* cmp ebx, 0x1388u */ /* 0x11026C8B: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026CBD; /* 0x11026C91: jae 0x11026cbd */
L_11026C93:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x11026C93: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11026C96: fxch st(1) */
    _st[0] *= _st[2]; /* 0x11026C98: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11026C9A: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11026C9D: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x11026CA0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11026C80; /* 0x11026CA2: jg 0x11026c80 */
L_11026CA4:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11026CAB; /* 0x11026CA4: jl 0x11026cab */
L_11026CA6:
    /* cmp esi, 0xAu */ /* 0x11026CA6: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026C80; /* 0x11026CA9: jae 0x11026c80 */
L_11026CAB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026CAB: fstp st(1) */
L_11026CAD:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x11026CAD: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11026CB0: mov ebx, dword ptr [ebp - 8] */
L_11026CB3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11026CB3: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x11026CB5: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11026CC4; /* 0x11026CB7: je 0x11026cc4 */
L_11026CB9:
    _st[0] = -_st[0]; /* 0x11026CB9: fchs  */
    goto L_11026CC4; /* 0x11026CBB: jmp 0x11026cc4 */
L_11026CBD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11026CBD: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_11026CAD; /* 0x11026CBF: jmp 0x11026cad */
L_11026CC1:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11026CC1: fld qword ptr [ebp + 0x1c] */
L_11026CC4:
    edi = MEM32(ebp + (-0x84)); /* 0x11026CC4: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x11026CCA: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x11026CCD: push ecx */
    PUSH32(esp, ecx); /* 0x11026CCE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11026CCF: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x11026CD2: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x11026CD3: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0x4Cu); /* 0x11026CD6: push 0x4c */
    PUSH32(esp, eax); /* 0x11026CD8: push eax */
    PUSH32(esp, edi); /* 0x11026CD9: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x11026CDA: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026CDF: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026CE2: push eax */
    eax = ebp + (-0x78); /* 0x11026CE3: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x11026CE6: push 0x6c */
    PUSH32(esp, eax); /* 0x11026CE8: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026CE9: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026CEF: push eax */
    PUSH32(esp, esi); /* 0x11026CF0: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x11026CF1: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x11026CF4: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x11026CFA: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11026CFD: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x11026D00: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026D01: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x11026D04: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026D05: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026D08: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11026D0B: push esi */
    PUSH32(esp, edi); /* 0x11026D0C: push edi */
    RECOMP_CALL(sub_1101D4BD); /* 0x11026D0D: call 0x1101d4bd */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026D12: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x11026D15: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x11026D18: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026D1A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026D1C: pop edi */
    esi = POP32_VAL(esp); /* 0x11026D1D: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026D1E: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026D1F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026D24: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026D26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026D27: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026D2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026D2Au);

L_11026D2A:
    PUSH32(esp, ebp); /* 0x11026D2A: push ebp */
    ebp = esp; /* 0x11026D2B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x11026D2D: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026D30: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026D35: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026D37: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11026D3A: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x11026D3D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026D3E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11026D41: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11026D42: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026D45: push edi */
    PUSH32(esp, eax); /* 0x11026D46: push eax */
    PUSH32(esp, 0x110022E0u); /* 0x11026D47: push 0x110022e0 */
    eax = ebp + (-0x44); /* 0x11026D4C: lea eax, [ebp - 0x44] */
    edi = ecx; /* 0x11026D4F: mov edi, ecx */
    PUSH32(esp, 0x40u); /* 0x11026D51: push 0x40 */
    PUSH32(esp, eax); /* 0x11026D53: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026D54: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026D5A: push eax */
    eax = ebp + (-0x44); /* 0x11026D5B: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11026D5E: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026D5F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11026D62: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026D63: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026D66: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026D69: push ebx */
    PUSH32(esp, edi); /* 0x11026D6A: push edi */
    RECOMP_CALL(sub_11021F66); /* 0x11026D6B: call 0x11021f66 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026D70: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11026D73: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026D76: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026D78: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026D7A: pop edi */
    esi = POP32_VAL(esp); /* 0x11026D7B: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026D7C: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026D7D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026D82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026D84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11026D85: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11026D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026D88u);

L_11026D88:
    PUSH32(esp, ebp); /* 0x11026D88: push ebp */
    ebp = esp; /* 0x11026D89: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026D8B: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026D8E: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026D93: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026D95: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026D98: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026D99: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11026D9C: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11026D9F: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11026DA0: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026DA3: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11026DA4: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x11026DA7: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026DA9: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026DAC: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D8u); /* 0x11026DAF: push 0x110022d8 */
    PUSH32(esp, eax); /* 0x11026DB4: push eax */
    PUSH32(esp, edi); /* 0x11026DB5: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11026DB6: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026DBB: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026DBE: push eax */
    eax = ebp + (-0x4C); /* 0x11026DBF: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11026DC2: push 0x40 */
    PUSH32(esp, eax); /* 0x11026DC4: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026DC5: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026DCB: push eax */
    eax = ebp + (-0x4C); /* 0x11026DCC: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11026DCF: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026DD0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11026DD3: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026DD4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026DD7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026DDA: push ebx */
    PUSH32(esp, edi); /* 0x11026DDB: push edi */
    RECOMP_CALL(sub_11021F66); /* 0x11026DDC: call 0x11021f66 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026DE1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x11026DE4: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026DE7: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026DE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026DEB: pop edi */
    esi = POP32_VAL(esp); /* 0x11026DEC: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026DED: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026DEE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026DF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026DF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026DF6: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026DF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026DF9u);

L_11026DF9:
    PUSH32(esp, ebp); /* 0x11026DF9: push ebp */
    ebp = esp; /* 0x11026DFA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026DFC: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026DFF: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026E04: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026E06: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026E09: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026E0A: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11026E0D: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11026E10: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11026E11: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026E14: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x11026E15: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x11026E18: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026E1A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026E1D: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022DCu); /* 0x11026E20: push 0x110022dc */
    PUSH32(esp, eax); /* 0x11026E25: push eax */
    PUSH32(esp, edi); /* 0x11026E26: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11026E27: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026E2C: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026E2F: push eax */
    eax = ebp + (-0x4C); /* 0x11026E30: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11026E33: push 0x40 */
    PUSH32(esp, eax); /* 0x11026E35: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11026E36: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11026E3C: push eax */
    eax = ebp + (-0x4C); /* 0x11026E3D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11026E40: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11026E41: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11026E44: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026E45: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026E48: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11026E4B: push ebx */
    PUSH32(esp, edi); /* 0x11026E4C: push edi */
    RECOMP_CALL(sub_11021F66); /* 0x11026E4D: call 0x11021f66 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11026E52: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x11026E55: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11026E58: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11026E5A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11026E5C: pop edi */
    esi = POP32_VAL(esp); /* 0x11026E5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x11026E5E: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11026E5F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11026E64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11026E66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11026E67: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11026E6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026E6Au);

L_11026E6A:
    PUSH32(esp, 0x4Cu); /* 0x11026E6A: push 0x4c */
    eax = 0x1103E6ECu; /* 0x11026E6C: mov eax, 0x1103e6ec */
    RECOMP_CALL(sub_1103B3A5); /* 0x11026E71: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11026E76: mov ebx, ecx */
    edi = MEM32(ebp + 0x14); /* 0x11026E78: mov edi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x18); /* 0x11026E7B: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x11026E7E: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x11026E81: movzx eax, ax */
    /* test MEM32(edi + 0x14), 0x4000u */ /* 0x11026E84: test dword ptr [edi + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11026E8B: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x11026E8E: mov dword ptr [ebp - 0x48], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11026EB2; /* 0x11026E91: jne 0x11026eb2 */
L_11026E93:
    edx = MEM32(ebp + 0x1C); /* 0x11026E93: mov edx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebx); /* 0x11026E96: mov esi, dword ptr [ebx] */
    edx = (uint32_t)LO8(edx); /* 0x11026E98: movzx edx, dl */
    PUSH32(esp, edx); /* 0x11026E9B: push edx */
    PUSH32(esp, eax); /* 0x11026E9C: push eax */
    PUSH32(esp, edi); /* 0x11026E9D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026E9E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026EA1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x11026EA4: push ecx */
    ecx = ebx; /* 0x11026EA5: mov ecx, ebx */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x11026EA7: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x11026EAA: mov eax, dword ptr [ebp - 0x44] */
    goto L_11026FC4; /* 0x11026EAD: jmp 0x11026fc4 */
L_11026EB2:
    eax = ebp + (-0x4C); /* 0x11026EB2: lea eax, [ebp - 0x4c] */
    ecx = edi; /* 0x11026EB5: mov ecx, edi */
    PUSH32(esp, eax); /* 0x11026EB7: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11026EB8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11026EBD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11026EC1: push eax */
    RECOMP_CALL(sub_11015C0B); /* 0x11026EC2: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11026EC7: pop ecx */
    ecx = ebp + (-0x4C); /* 0x11026EC8: lea ecx, [ebp - 0x4c] */
    esi = eax; /* 0x11026ECB: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11026ECD: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11026ED2: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11026ED6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x11026ED8: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x11026EDF: mov word ptr [ebp - 0x28], ax */
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x11026EE3: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x40); /* 0x11026EE7: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11026EEA: mov dword ptr [ebp - 4], 1 */
    ecx = esi; /* 0x11026EF1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11026EF3: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11026EFD; /* 0x11026EF4: je 0x11026efd */
L_11026EF6:
    RECOMP_CALL(sub_1102BC05); /* 0x11026EF6: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    goto L_11026F02; /* 0x11026EFB: jmp 0x11026f02 */
L_11026EFD:
    RECOMP_CALL(sub_11037B56); /* 0x11026EFD: call 0x11037b56 */
    RECOMP_FLAGS_IN();
L_11026F02:
    PUSH32(esp, eax); /* 0x11026F02: push eax */
    ecx = ebp + (-0x28); /* 0x11026F03: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11031EF1); /* 0x11026F06: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11026F0B: push 0 */
    PUSH32(esp, 1); /* 0x11026F0D: push 1 */
    ecx = ebp + (-0x40); /* 0x11026F0F: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x11026F12: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x11026F17: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x11026F1B: mov ecx, dword ptr [ebp - 0x18] */
    if (CMP_L(_flag_a, _flag_b)) goto L_11026F33; /* 0x11026F1E: jl 0x11026f33 */
L_11026F20:
    if (CMP_G(_flag_a, _flag_b)) goto L_11026F28; /* 0x11026F20: jg 0x11026f28 */
L_11026F22:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x11026F22: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11026F33; /* 0x11026F26: jbe 0x11026f33 */
L_11026F28:
    esi = MEM32(edi + 0x20); /* 0x11026F28: mov esi, dword ptr [edi + 0x20] */
    /* cmp esi, ecx */ /* 0x11026F2B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11026F33; /* 0x11026F2D: jbe 0x11026f33 */
L_11026F2F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11026F2F: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_11026F35; /* 0x11026F31: jmp 0x11026f35 */
L_11026F33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11026F33: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11026F35:
    eax = MEM32(edi + 0x14); /* 0x11026F35: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x11026F38: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x11026F3D: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11026F68; /* 0x11026F40: je 0x11026f68 */
L_11026F42:
    PUSH32(esp, esi); /* 0x11026F42: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11026F43: push dword ptr [ebp - 0x48] */
    eax = ebp + (-0x50); /* 0x11026F46: lea eax, [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11026F49: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11026F4C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11026F4F: push eax */
    PUSH32(esp, ebx); /* 0x11026F50: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x11026F51: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11026F56: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11026F59: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11026F5B: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11026F5D: mov dword ptr [ebp + 0xc], edx */
    eax = MEM32(eax + 0x4); /* 0x11026F60: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11026F63: mov dword ptr [ebp + 0x10], eax */
    goto L_11026F6E; /* 0x11026F66: jmp 0x11026f6e */
L_11026F68:
    eax = MEM32(ebp + 0x10); /* 0x11026F68: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x11026F6B: mov edx, dword ptr [ebp + 0xc] */
L_11026F6E:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11026F6E: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11026F72: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11026F7A; /* 0x11026F75: jae 0x11026f7a */
L_11026F77:
    ecx = ebp + (-0x28); /* 0x11026F77: lea ecx, [ebp - 0x28] */
L_11026F7A:
    MEM32(ebp + (-0x4C)) = ecx; /* 0x11026F7A: mov dword ptr [ebp - 0x4c], ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x11026F7D: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x11026F80: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x11026F81: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11026F84: push eax */
    PUSH32(esp, edx); /* 0x11026F85: push edx */
    eax = ebp + (-0x58); /* 0x11026F86: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11026F89: push eax */
    PUSH32(esp, ebx); /* 0x11026F8A: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x11026F8B: call 0x11022596 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11026F90: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11026F91: push dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x44)); /* 0x11026F94: mov esi, dword ptr [ebp - 0x44] */
    ecx = MEM32(eax); /* 0x11026F97: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x11026F99: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11026F9C: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x11026F9F: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0; /* 0x11026FA3: and dword ptr [edi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11026FA7: push eax */
    PUSH32(esp, ecx); /* 0x11026FA8: push ecx */
    PUSH32(esp, esi); /* 0x11026FA9: push esi */
    PUSH32(esp, ebx); /* 0x11026FAA: push ebx */
    MEM32(ebp + 0x10) = eax; /* 0x11026FAB: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_110225F3); /* 0x11026FAE: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11026FB3: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x28); /* 0x11026FB6: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x11026FB9: push 0 */
    PUSH32(esp, 1); /* 0x11026FBB: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11026FBD: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11026FC2: mov eax, esi */
L_11026FC4:
    RECOMP_CALL(sub_1103B354); /* 0x11026FC4: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11026FC9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11026FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11026FCCu);

L_11026FCC:
    PUSH32(esp, ebp); /* 0x11026FCC: push ebp */
    ebp = esp; /* 0x11026FCD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11026FCF: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11026FD2: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11026FD7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11026FD9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x11026FDC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11026FDD: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11026FE0: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11026FE3: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11026FE4: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11026FE7: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11026FE8: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x11026FEB: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11026FED: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D0u); /* 0x11026FF0: push 0x110022d0 */
    PUSH32(esp, eax); /* 0x11026FF5: push eax */
    PUSH32(esp, edi); /* 0x11026FF6: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11026FF7: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11026FFC: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11026FFF: push eax */
    eax = ebp + (-0x4C); /* 0x11027000: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11027003: push 0x40 */
    PUSH32(esp, eax); /* 0x11027005: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11027006: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102700C: push eax */
    eax = ebp + (-0x4C); /* 0x1102700D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11027010: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11027011: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11027014: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027015: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027018: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1102701B: push ebx */
    PUSH32(esp, edi); /* 0x1102701C: push edi */
    RECOMP_CALL(sub_1102220C); /* 0x1102701D: call 0x1102220c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11027022: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11027025: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11027028: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102702A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1102702C: pop edi */
    esi = POP32_VAL(esp); /* 0x1102702D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102702E: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102702F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11027034: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11027036: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11027037: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102703A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102703Au);

L_1102703A:
    PUSH32(esp, ebp); /* 0x1102703A: push ebp */
    ebp = esp; /* 0x1102703B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1102703D: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11027040: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11027045: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11027047: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1102704A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102704B: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x1102704E: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11027051: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11027052: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11027055: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11027056: push dword ptr [ebp + 0x1c] */
    edi = ecx; /* 0x11027059: mov edi, ecx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1102705B: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D4u); /* 0x1102705E: push 0x110022d4 */
    PUSH32(esp, eax); /* 0x11027063: push eax */
    PUSH32(esp, edi); /* 0x11027064: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x11027065: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1102706A: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102706D: push eax */
    eax = ebp + (-0x4C); /* 0x1102706E: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11027071: push 0x40 */
    PUSH32(esp, eax); /* 0x11027073: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11027074: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1102707A: push eax */
    eax = ebp + (-0x4C); /* 0x1102707B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1102707E: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1102707F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11027082: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027083: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027086: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11027089: push ebx */
    PUSH32(esp, edi); /* 0x1102708A: push edi */
    RECOMP_CALL(sub_1102220C); /* 0x1102708B: call 0x1102220c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11027090: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11027093: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x11027096: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11027098: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1102709A: pop edi */
    esi = POP32_VAL(esp); /* 0x1102709B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1102709C: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x1102709D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110270A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110270A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110270A5: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110270A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110270A8u);

L_110270A8:
    PUSH32(esp, ebp); /* 0x110270A8: push ebp */
    ebp = esp; /* 0x110270A9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x110270AB: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110270B1: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110270B6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110270B8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x110270BB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110270BE: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x110270BF: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x110270C2: push esi */
    PUSH32(esp, edi); /* 0x110270C3: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x110270C4: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x110270CA: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x110270CD: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x110270D0: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x110270D6: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x110270D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110270F5; /* 0x110270DB: jg 0x110270f5 */
L_110270DD:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110270E3; /* 0x110270DD: jl 0x110270e3 */
L_110270DF:
    /* test esi, esi */ /* 0x110270DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110270F1; /* 0x110270E1: jne 0x110270f1 */
L_110270E3:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x110270E3: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110270F1; /* 0x110270EA: jne 0x110270f1 */
L_110270EC:
    PUSH32(esp, 6); /* 0x110270EC: push 6 */
    esi = POP32_VAL(esp); /* 0x110270EE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110270EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110270F1:
    /* test edi, edi */ /* 0x110270F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110270FE; /* 0x110270F3: jl 0x110270fe */
L_110270F5:
    PUSH32(esp, 0x24u); /* 0x110270F5: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x110270F7: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_11027100; /* 0x110270F8: jg 0x11027100 */
L_110270FA:
    /* cmp esi, ecx */ /* 0x110270FA: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11027100; /* 0x110270FC: ja 0x11027100 */
L_110270FE:
    ecx = esi; /* 0x110270FE: mov ecx, esi */
L_11027100:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11027100: fld qword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x11027103: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11027105: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11027106: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x11027108: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1102710B: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x1102710D: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x11027111: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x11027115: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x1102711A: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110271F7; /* 0x1102711F: jne 0x110271f7 */
L_11027125:
    fp_push(*(double*)ADDR(0x11001198)); /* 0x11027125: fld qword ptr [0x11001198] */
    _st[0] *= _st[1]; /* 0x1102712B: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1102712D: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102712F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11027131: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110271F7; /* 0x11027134: jnp 0x110271f7 */
L_1102713A:
    fp_push(0.0); /* 0x1102713A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1102713C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102713E: fnstsw ax */
    fp_xch(1); /* 0x11027140: fxch st(1) */
    /* test HI8(eax), 0x41u */ /* 0x11027142: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102714D; /* 0x11027145: jne 0x1102714d */
L_11027147:
    SET_LO8(edx, 1); /* 0x11027147: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x11027149: fchs  */
    goto L_1102714F; /* 0x1102714B: jmp 0x1102714f */
L_1102714D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1102714D: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1102714F:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x1102714F: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11027155: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11027157: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11027159: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x1102715F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11027191; /* 0x11027162: jp 0x11027191 */
L_11027164:
    ebx = MEM32(ebp + (-0x80)); /* 0x11027164: mov ebx, dword ptr [ebp - 0x80] */
    goto L_1102716B; /* 0x11027167: jmp 0x1102716b */
L_11027169:
    fp_xch(1); /* 0x11027169: fxch st(1) */
L_1102716B:
    /* cmp ebx, 0x1388u */ /* 0x1102716B: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102718D; /* 0x11027171: jae 0x1102718d */
L_11027173:
    _st[2] /= _st[0]; /* 0x11027173: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11027175: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11027178: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1102717A: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102717C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1102717E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11027169; /* 0x11027181: jnp 0x11027169 */
L_11027183:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11027183: fstp st(0) */
L_11027185:
    MEM32(ebp + (-0x80)) = ebx; /* 0x11027185: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11027188: mov ebx, dword ptr [ebp - 8] */
    goto L_11027193; /* 0x1102718B: jmp 0x11027193 */
L_1102718D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1102718D: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11027185; /* 0x1102718F: jmp 0x11027185 */
L_11027191:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11027191: fstp st(1) */
L_11027193:
    fp_xch(2); /* 0x11027193: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11027195: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11027197: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x11027199: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110271EF; /* 0x1102719C: jp 0x110271ef */
L_1102719E:
    /* test edi, edi */ /* 0x1102719E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110271EF; /* 0x110271A0: jl 0x110271ef */
L_110271A2:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110271A9; /* 0x110271A2: jg 0x110271a9 */
L_110271A4:
    /* cmp esi, 0xAu */ /* 0x110271A4: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110271EF; /* 0x110271A7: jb 0x110271ef */
L_110271A9:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x110271A9: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x110271AF: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_110271B6; /* 0x110271B2: jmp 0x110271b6 */
L_110271B4:
    fp_xch(1); /* 0x110271B4: fxch st(1) */
L_110271B6:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110271B6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110271B8: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x110271BA: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102725D; /* 0x110271BD: jne 0x1102725d */
L_110271C3:
    /* cmp ebx, 0x1388u */ /* 0x110271C3: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102725D; /* 0x110271C9: jae 0x1102725d */
L_110271CF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x110271CF: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x110271D2: fxch st(1) */
    _st[0] *= _st[2]; /* 0x110271D4: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110271D6: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x110271D9: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x110271DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110271B4; /* 0x110271DE: jg 0x110271b4 */
L_110271E0:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110271E7; /* 0x110271E0: jl 0x110271e7 */
L_110271E2:
    /* cmp esi, 0xAu */ /* 0x110271E2: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_110271B4; /* 0x110271E5: jae 0x110271b4 */
L_110271E7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110271E7: fstp st(1) */
L_110271E9:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x110271E9: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x110271EC: mov ebx, dword ptr [ebp - 8] */
L_110271EF:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110271EF: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x110271F1: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110271F7; /* 0x110271F3: je 0x110271f7 */
L_110271F5:
    _st[0] = -_st[0]; /* 0x110271F5: fchs  */
L_110271F7:
    edi = MEM32(ebp + (-0x84)); /* 0x110271F7: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x110271FD: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x11027200: push ecx */
    PUSH32(esp, ecx); /* 0x11027201: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11027202: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x11027205: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x11027206: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0); /* 0x11027209: push 0 */
    PUSH32(esp, eax); /* 0x1102720B: push eax */
    PUSH32(esp, edi); /* 0x1102720C: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x1102720D: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11027212: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11027215: push eax */
    eax = ebp + (-0x78); /* 0x11027216: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x11027219: push 0x6c */
    PUSH32(esp, eax); /* 0x1102721B: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102721C: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11027222: push eax */
    PUSH32(esp, esi); /* 0x11027223: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x11027224: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x11027227: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x1102722D: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x11027230: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x11027233: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11027234: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x11027237: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027238: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102723B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1102723E: push esi */
    PUSH32(esp, edi); /* 0x1102723F: push edi */
    RECOMP_CALL(sub_1101D82A); /* 0x11027240: call 0x1101d82a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11027245: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x11027248: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1102724B: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102724D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1102724F: pop edi */
    esi = POP32_VAL(esp); /* 0x11027250: pop esi */
    ebx = POP32_VAL(esp); /* 0x11027251: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11027252: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11027257: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11027259: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1102725A: ret 0x1c */
L_1102725D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1102725D: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_110271E9; /* 0x1102725F: jmp 0x110271e9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11027261(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027261u);

L_11027261:
    PUSH32(esp, ebp); /* 0x11027261: push ebp */
    ebp = esp; /* 0x11027262: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x11027264: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1102726A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102726F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11027271: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x11027274: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11027277: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x11027278: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1102727B: push esi */
    PUSH32(esp, edi); /* 0x1102727C: push edi */
    MEM32(ebp + (-0x84)) = ecx; /* 0x1102727D: mov dword ptr [ebp - 0x84], ecx */
    edi = MEM32(ebx + 0x1C); /* 0x11027283: mov edi, dword ptr [ebx + 0x1c] */
    esi = MEM32(ebx + 0x18); /* 0x11027286: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x88)) = eax; /* 0x11027289: mov dword ptr [ebp - 0x88], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1102728F: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x11027292: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110272AE; /* 0x11027294: jg 0x110272ae */
L_11027296:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1102729C; /* 0x11027296: jl 0x1102729c */
L_11027298:
    /* test esi, esi */ /* 0x11027298: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110272AA; /* 0x1102729A: jne 0x110272aa */
L_1102729C:
    /* test MEM32(ebx + 0x14), 0x2000u */ /* 0x1102729C: test dword ptr [ebx + 0x14], 0x2000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110272AA; /* 0x110272A3: jne 0x110272aa */
L_110272A5:
    PUSH32(esp, 6); /* 0x110272A5: push 6 */
    esi = POP32_VAL(esp); /* 0x110272A7: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110272A8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110272AA:
    /* test edi, edi */ /* 0x110272AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110272B7; /* 0x110272AC: jl 0x110272b7 */
L_110272AE:
    PUSH32(esp, 0x24u); /* 0x110272AE: push 0x24 */
    ecx = POP32_VAL(esp); /* 0x110272B0: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_110272B9; /* 0x110272B1: jg 0x110272b9 */
L_110272B3:
    /* cmp esi, ecx */ /* 0x110272B3: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110272B9; /* 0x110272B5: ja 0x110272b9 */
L_110272B7:
    ecx = esi; /* 0x110272B7: mov ecx, esi */
L_110272B9:
    eax = ecx; /* 0x110272B9: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x110272BB: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x110272BC: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x110272BE: mov eax, dword ptr [ebx + 0x14] */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x110272C1: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0; /* 0x110272C3: and dword ptr [ebp - 0x80], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x7C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x7C)) = MEM32(ebp + (-0x7C)) & 0; /* 0x110272C7: and dword ptr [ebp - 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3000u);
    eax = eax & 0x3000u; /* 0x110272CB: and eax, 0x3000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2000u */ /* 0x110272D0: cmp eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027397; /* 0x110272D5: jne 0x11027397 */
L_110272DB:
    fp_push(0.0); /* 0x110272DB: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x110272DD: fld qword ptr [ebp + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110272E0: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110272E2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x110272E4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110272EF; /* 0x110272E7: jp 0x110272ef */
L_110272E9:
    SET_LO8(edx, 1); /* 0x110272E9: mov dl, 1 */
    _st[0] = -_st[0]; /* 0x110272EB: fchs  */
    goto L_110272F1; /* 0x110272ED: jmp 0x110272f1 */
L_110272EF:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x110272EF: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_110272F1:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x110272F1: fld qword ptr [0x11002438] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110272F7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110272F9: fnstsw ax */
    fp_push(*(double*)ADDR(0x11002430)); /* 0x110272FB: fld qword ptr [0x11002430] */
    /* test HI8(eax), 0x41u */ /* 0x11027301: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11027333; /* 0x11027304: jp 0x11027333 */
L_11027306:
    ebx = MEM32(ebp + (-0x80)); /* 0x11027306: mov ebx, dword ptr [ebp - 0x80] */
    goto L_1102730D; /* 0x11027309: jmp 0x1102730d */
L_1102730B:
    fp_xch(1); /* 0x1102730B: fxch st(1) */
L_1102730D:
    /* cmp ebx, 0x1388u */ /* 0x1102730D: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102732F; /* 0x11027313: jae 0x1102732f */
L_11027315:
    _st[2] /= _st[0]; /* 0x11027315: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11027317: add ebx, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x1102731A: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1102731C: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102731E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11027320: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1102730B; /* 0x11027323: jnp 0x1102730b */
L_11027325:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11027325: fstp st(0) */
L_11027327:
    MEM32(ebp + (-0x80)) = ebx; /* 0x11027327: mov dword ptr [ebp - 0x80], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x1102732A: mov ebx, dword ptr [ebp - 8] */
    goto L_11027335; /* 0x1102732D: jmp 0x11027335 */
L_1102732F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1102732F: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11027327; /* 0x11027331: jmp 0x11027327 */
L_11027333:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11027333: fstp st(1) */
L_11027335:
    fp_xch(2); /* 0x11027335: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11027337: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11027339: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1102733B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11027389; /* 0x1102733E: jp 0x11027389 */
L_11027340:
    /* test edi, edi */ /* 0x11027340: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11027389; /* 0x11027342: jl 0x11027389 */
L_11027344:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1102734B; /* 0x11027344: jg 0x1102734b */
L_11027346:
    /* cmp esi, 0xAu */ /* 0x11027346: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11027389; /* 0x11027349: jb 0x11027389 */
L_1102734B:
    fp_push(*(double*)ADDR(0x11002428)); /* 0x1102734B: fld qword ptr [0x11002428] */
    ebx = MEM32(ebp + (-0x7C)); /* 0x11027351: mov ebx, dword ptr [ebp - 0x7c] */
    goto L_11027358; /* 0x11027354: jmp 0x11027358 */
L_11027356:
    fp_xch(1); /* 0x11027356: fxch st(1) */
L_11027358:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11027358: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1102735A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1102735C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027393; /* 0x1102735F: jne 0x11027393 */
L_11027361:
    /* cmp ebx, 0x1388u */ /* 0x11027361: cmp ebx, 0x1388 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11027393; /* 0x11027367: jae 0x11027393 */
L_11027369:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF6u; /* 0x11027369: add esi, -0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x1102736C: fxch st(1) */
    _st[0] *= _st[2]; /* 0x1102736E: fmul st(2) */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x11027370: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xAu; /* 0x11027373: add ebx, 0xa */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x11027376: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11027356; /* 0x11027378: jg 0x11027356 */
L_1102737A:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11027381; /* 0x1102737A: jl 0x11027381 */
L_1102737C:
    /* cmp esi, 0xAu */ /* 0x1102737C: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_11027356; /* 0x1102737F: jae 0x11027356 */
L_11027381:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11027381: fstp st(1) */
L_11027383:
    MEM32(ebp + (-0x7C)) = ebx; /* 0x11027383: mov dword ptr [ebp - 0x7c], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11027386: mov ebx, dword ptr [ebp - 8] */
L_11027389:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11027389: fstp st(1) */
    /* test LO8(edx), LO8(edx) */ /* 0x1102738B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102739A; /* 0x1102738D: je 0x1102739a */
L_1102738F:
    _st[0] = -_st[0]; /* 0x1102738F: fchs  */
    goto L_1102739A; /* 0x11027391: jmp 0x1102739a */
L_11027393:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11027393: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_11027383; /* 0x11027395: jmp 0x11027383 */
L_11027397:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x11027397: fld qword ptr [ebp + 0x1c] */
L_1102739A:
    edi = MEM32(ebp + (-0x84)); /* 0x1102739A: mov edi, dword ptr [ebp - 0x84] */
    eax = ebp + (-0xC); /* 0x110273A0: lea eax, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x110273A3: push ecx */
    PUSH32(esp, ecx); /* 0x110273A4: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110273A5: fstp qword ptr [esp] */
    PUSH32(esp, ecx); /* 0x110273A8: push ecx */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x110273A9: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0x4Cu); /* 0x110273AC: push 0x4c */
    PUSH32(esp, eax); /* 0x110273AE: push eax */
    PUSH32(esp, edi); /* 0x110273AF: push edi */
    RECOMP_CALL(sub_1101D0C6); /* 0x110273B0: call 0x1101d0c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110273B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x110273B8: push eax */
    eax = ebp + (-0x78); /* 0x110273B9: lea eax, [ebp - 0x78] */
    PUSH32(esp, 0x6Cu); /* 0x110273BC: push 0x6c */
    PUSH32(esp, eax); /* 0x110273BE: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x110273BF: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110273C5: push eax */
    PUSH32(esp, esi); /* 0x110273C6: push esi */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x110273C7: push dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x88)); /* 0x110273CA: mov esi, dword ptr [ebp - 0x88] */
    eax = ebp + (-0x78); /* 0x110273D0: lea eax, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x110273D3: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x110273D6: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110273D7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x110273DA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110273DB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110273DE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x110273E1: push esi */
    PUSH32(esp, edi); /* 0x110273E2: push edi */
    RECOMP_CALL(sub_1101D82A); /* 0x110273E3: call 0x1101d82a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x110273E8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x44u; /* 0x110273EB: add esp, 0x44 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x110273EE: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110273F0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110273F2: pop edi */
    esi = POP32_VAL(esp); /* 0x110273F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x110273F4: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110273F5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110273FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110273FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x110273FD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11027400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027400u);

L_11027400:
    PUSH32(esp, ebp); /* 0x11027400: push ebp */
    ebp = esp; /* 0x11027401: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x11027403: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11027406: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1102740B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102740D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11027410: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x11027413: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x11027414: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11027417: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11027418: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1102741B: push edi */
    PUSH32(esp, eax); /* 0x1102741C: push eax */
    PUSH32(esp, 0x110022E0u); /* 0x1102741D: push 0x110022e0 */
    eax = ebp + (-0x44); /* 0x11027422: lea eax, [ebp - 0x44] */
    edi = ecx; /* 0x11027425: mov edi, ecx */
    PUSH32(esp, 0x40u); /* 0x11027427: push 0x40 */
    PUSH32(esp, eax); /* 0x11027429: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102742A: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11027430: push eax */
    eax = ebp + (-0x44); /* 0x11027431: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11027434: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11027435: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x11027438: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027439: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102743C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1102743F: push ebx */
    PUSH32(esp, edi); /* 0x11027440: push edi */
    RECOMP_CALL(sub_1102220C); /* 0x11027441: call 0x1102220c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11027446: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11027449: add esp, 0x30 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1102744C: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1102744E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11027450: pop edi */
    esi = POP32_VAL(esp); /* 0x11027451: pop esi */
    ebx = POP32_VAL(esp); /* 0x11027452: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11027453: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11027458: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102745A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102745B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1102745E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102745Eu);

L_1102745E:
    PUSH32(esp, ebp); /* 0x1102745E: push ebp */
    ebp = esp; /* 0x1102745F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x11027461: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11027464: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11027469: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1102746B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1102746E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1102746F: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x11027472: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x11027475: push esi */
    esi = MEM32(ebp + 0x14); /* 0x11027476: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x11027479: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1102747A: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x1102747D: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1102747F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x11027482: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022D8u); /* 0x11027485: push 0x110022d8 */
    PUSH32(esp, eax); /* 0x1102748A: push eax */
    PUSH32(esp, edi); /* 0x1102748B: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x1102748C: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11027491: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11027494: push eax */
    eax = ebp + (-0x4C); /* 0x11027495: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11027498: push 0x40 */
    PUSH32(esp, eax); /* 0x1102749A: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102749B: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110274A1: push eax */
    eax = ebp + (-0x4C); /* 0x110274A2: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110274A5: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x110274A6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x110274A9: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110274AA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110274AD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x110274B0: push ebx */
    PUSH32(esp, edi); /* 0x110274B1: push edi */
    RECOMP_CALL(sub_1102220C); /* 0x110274B2: call 0x1102220c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x110274B7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x110274BA: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x110274BD: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110274BF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x110274C1: pop edi */
    esi = POP32_VAL(esp); /* 0x110274C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x110274C3: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110274C4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110274C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110274CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x110274CC: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_110274CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110274CFu);

L_110274CF:
    PUSH32(esp, ebp); /* 0x110274CF: push ebp */
    ebp = esp; /* 0x110274D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x110274D2: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110274D5: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110274DA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110274DC: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x110274DF: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x110274E0: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x110274E3: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x110274E6: push esi */
    esi = MEM32(ebp + 0x14); /* 0x110274E7: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x110274EA: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x110274EB: push dword ptr [ebp + 0x20] */
    edi = ecx; /* 0x110274EE: mov edi, ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110274F0: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110274F3: push dword ptr [esi + 0x14] */
    PUSH32(esp, 0x110022DCu); /* 0x110274F6: push 0x110022dc */
    PUSH32(esp, eax); /* 0x110274FB: push eax */
    PUSH32(esp, edi); /* 0x110274FC: push edi */
    RECOMP_CALL(sub_110217A0); /* 0x110274FD: call 0x110217a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11027502: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11027505: push eax */
    eax = ebp + (-0x4C); /* 0x11027506: lea eax, [ebp - 0x4c] */
    PUSH32(esp, 0x40u); /* 0x11027509: push 0x40 */
    PUSH32(esp, eax); /* 0x1102750B: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1102750C: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11027512: push eax */
    eax = ebp + (-0x4C); /* 0x11027513: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x11027516: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11027517: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1102751A: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102751B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102751E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x11027521: push ebx */
    PUSH32(esp, edi); /* 0x11027522: push edi */
    RECOMP_CALL(sub_1102220C); /* 0x11027523: call 0x1102220c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x11027528: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x1102752B: add esp, 0x34 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1102752E: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11027530: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x11027532: pop edi */
    esi = POP32_VAL(esp); /* 0x11027533: pop esi */
    ebx = POP32_VAL(esp); /* 0x11027534: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11027535: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1102753A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1102753C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1102753D: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11027540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027540u);

L_11027540:
    PUSH32(esp, 0x4Cu); /* 0x11027540: push 0x4c */
    eax = 0x1103E6ECu; /* 0x11027542: mov eax, 0x1103e6ec */
    RECOMP_CALL(sub_1103B3A5); /* 0x11027547: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1102754C: mov ebx, ecx */
    edi = MEM32(ebp + 0x14); /* 0x1102754E: mov edi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x18); /* 0x11027551: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x11027554: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x11027557: movzx eax, ax */
    /* test MEM32(edi + 0x14), 0x4000u */ /* 0x1102755A: test dword ptr [edi + 0x14], 0x4000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = ecx; /* 0x11027561: mov dword ptr [ebp - 0x44], ecx */
    MEM32(ebp + (-0x48)) = eax; /* 0x11027564: mov dword ptr [ebp - 0x48], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027588; /* 0x11027567: jne 0x11027588 */
L_11027569:
    edx = MEM32(ebp + 0x1C); /* 0x11027569: mov edx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebx); /* 0x1102756C: mov esi, dword ptr [ebx] */
    edx = (uint32_t)LO8(edx); /* 0x1102756E: movzx edx, dl */
    PUSH32(esp, edx); /* 0x11027571: push edx */
    PUSH32(esp, eax); /* 0x11027572: push eax */
    PUSH32(esp, edi); /* 0x11027573: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027574: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027577: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1102757A: push ecx */
    ecx = ebx; /* 0x1102757B: mov ecx, ebx */
    RECOMP_ICALL(MEM32(esi + 0x24)); /* 0x1102757D: call dword ptr [esi + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x11027580: mov eax, dword ptr [ebp - 0x44] */
    goto L_1102769A; /* 0x11027583: jmp 0x1102769a */
L_11027588:
    eax = ebp + (-0x4C); /* 0x11027588: lea eax, [ebp - 0x4c] */
    ecx = edi; /* 0x1102758B: mov ecx, edi */
    PUSH32(esp, eax); /* 0x1102758D: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1102758E: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11027593: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11027597: push eax */
    RECOMP_CALL(sub_11015CA5); /* 0x11027598: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1102759D: pop ecx */
    ecx = ebp + (-0x4C); /* 0x1102759E: lea ecx, [ebp - 0x4c] */
    esi = eax; /* 0x110275A1: mov esi, eax */
    RECOMP_CALL(sub_1100E431); /* 0x110275A3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x110275A8: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110275AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x110275AE: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x110275B5: mov word ptr [ebp - 0x28], ax */
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x110275B9: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x40); /* 0x110275BD: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x4)) = 1; /* 0x110275C0: mov dword ptr [ebp - 4], 1 */
    ecx = esi; /* 0x110275C7: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110275C9: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110275D3; /* 0x110275CA: je 0x110275d3 */
L_110275CC:
    RECOMP_CALL(sub_1102BC05); /* 0x110275CC: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    goto L_110275D8; /* 0x110275D1: jmp 0x110275d8 */
L_110275D3:
    RECOMP_CALL(sub_11037B56); /* 0x110275D3: call 0x11037b56 */
    RECOMP_FLAGS_IN();
L_110275D8:
    PUSH32(esp, eax); /* 0x110275D8: push eax */
    ecx = ebp + (-0x28); /* 0x110275D9: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11031EF1); /* 0x110275DC: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110275E1: push 0 */
    PUSH32(esp, 1); /* 0x110275E3: push 1 */
    ecx = ebp + (-0x40); /* 0x110275E5: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x110275E8: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x110275ED: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x110275F1: mov ecx, dword ptr [ebp - 0x18] */
    if (CMP_L(_flag_a, _flag_b)) goto L_11027609; /* 0x110275F4: jl 0x11027609 */
L_110275F6:
    if (CMP_G(_flag_a, _flag_b)) goto L_110275FE; /* 0x110275F6: jg 0x110275fe */
L_110275F8:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x110275F8: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11027609; /* 0x110275FC: jbe 0x11027609 */
L_110275FE:
    esi = MEM32(edi + 0x20); /* 0x110275FE: mov esi, dword ptr [edi + 0x20] */
    /* cmp esi, ecx */ /* 0x11027601: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11027609; /* 0x11027603: jbe 0x11027609 */
L_11027605:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x11027605: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_1102760B; /* 0x11027607: jmp 0x1102760b */
L_11027609:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11027609: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1102760B:
    eax = MEM32(edi + 0x14); /* 0x1102760B: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x1102760E: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x11027613: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1102763E; /* 0x11027616: je 0x1102763e */
L_11027618:
    PUSH32(esp, esi); /* 0x11027618: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11027619: push dword ptr [ebp - 0x48] */
    eax = ebp + (-0x50); /* 0x1102761C: lea eax, [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102761F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027622: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11027625: push eax */
    PUSH32(esp, ebx); /* 0x11027626: push ebx */
    RECOMP_CALL(sub_110225F3); /* 0x11027627: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1102762C: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1102762F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11027631: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11027633: mov dword ptr [ebp + 0xc], edx */
    eax = MEM32(eax + 0x4); /* 0x11027636: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11027639: mov dword ptr [ebp + 0x10], eax */
    goto L_11027644; /* 0x1102763C: jmp 0x11027644 */
L_1102763E:
    eax = MEM32(ebp + 0x10); /* 0x1102763E: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x11027641: mov edx, dword ptr [ebp + 0xc] */
L_11027644:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11027644: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11027648: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11027650; /* 0x1102764B: jae 0x11027650 */
L_1102764D:
    ecx = ebp + (-0x28); /* 0x1102764D: lea ecx, [ebp - 0x28] */
L_11027650:
    MEM32(ebp + (-0x4C)) = ecx; /* 0x11027650: mov dword ptr [ebp - 0x4c], ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x11027653: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x11027656: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x11027657: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1102765A: push eax */
    PUSH32(esp, edx); /* 0x1102765B: push edx */
    eax = ebp + (-0x58); /* 0x1102765C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1102765F: push eax */
    PUSH32(esp, ebx); /* 0x11027660: push ebx */
    RECOMP_CALL(sub_11022596); /* 0x11027661: call 0x11022596 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11027666: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11027667: push dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x44)); /* 0x1102766A: mov esi, dword ptr [ebp - 0x44] */
    ecx = MEM32(eax); /* 0x1102766D: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x1102766F: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x11027672: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x11027675: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0; /* 0x11027679: and dword ptr [edi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1102767D: push eax */
    PUSH32(esp, ecx); /* 0x1102767E: push ecx */
    PUSH32(esp, esi); /* 0x1102767F: push esi */
    PUSH32(esp, ebx); /* 0x11027680: push ebx */
    MEM32(ebp + 0x10) = eax; /* 0x11027681: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_110225F3); /* 0x11027684: call 0x110225f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11027689: add esp, 0x30 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x28); /* 0x1102768C: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x1102768F: push 0 */
    PUSH32(esp, 1); /* 0x11027691: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11027693: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11027698: mov eax, esi */
L_1102769A:
    RECOMP_CALL(sub_1103B354); /* 0x1102769A: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1102769F: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110276A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110276A2u);

L_110276A2:
    PUSH32(esp, 0x2Cu); /* 0x110276A2: push 0x2c */
    eax = 0x1103E719u; /* 0x110276A4: mov eax, 0x1103e719 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110276A9: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x110276AE: mov ebx, ecx */
    eax = MEM32(ebp + 0x1C); /* 0x110276B0: mov eax, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0x8); /* 0x110276B3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x110276B6: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = eax; /* 0x110276BA: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(0x11002410); /* 0x110276BD: mov eax, dword ptr [0x11002410] */
    MEM32(ebp + (-0x18)) = eax; /* 0x110276C2: mov dword ptr [ebp - 0x18], eax */
    SET_LO8(eax, MEM8(0x11002414)); /* 0x110276C5: mov al, byte ptr [0x11002414] */
    MEM32(ebp + (-0x34)) = edi; /* 0x110276CA: mov dword ptr [ebp - 0x34], edi */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x110276CD: mov byte ptr [ebp - 0x14], al */
    MEM32(ebp + (-0x1C)) = 0xFu; /* 0x110276D0: mov dword ptr [ebp - 0x1c], 0xf */
    MEM8(ebp + (-0x30)) = (uint8_t)(0); /* 0x110276D7: mov byte ptr [ebp - 0x30], 0 */
    SET_LO8(eax, MEM8(ebp + 0x24)); /* 0x110276DB: mov al, byte ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110276DE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x110276E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110276EE; /* 0x110276E4: jne 0x110276ee */
L_110276E6:
    eax = MEM32(ebp + 0x20); /* 0x110276E6: mov eax, dword ptr [ebp + 0x20] */
    MEM8(ebp + (-0x16)) = (uint8_t)(LO8(eax)); /* 0x110276E9: mov byte ptr [ebp - 0x16], al */
    goto L_110276F7; /* 0x110276EC: jmp 0x110276f7 */
L_110276EE:
    MEM8(ebp + (-0x16)) = (uint8_t)(LO8(eax)); /* 0x110276EE: mov byte ptr [ebp - 0x16], al */
    eax = MEM32(ebp + 0x20); /* 0x110276F1: mov eax, dword ptr [ebp + 0x20] */
    MEM8(ebp + (-0x15)) = (uint8_t)(LO8(eax)); /* 0x110276F4: mov byte ptr [ebp - 0x15], al */
L_110276F7:
    edi = MEM32(ebp + (-0x38)); /* 0x110276F7: mov edi, dword ptr [ebp - 0x38] */
    PUSH32(esp, 0x10u); /* 0x110276FA: push 0x10 */
    esi = POP32_VAL(esp); /* 0x110276FC: pop esi */
L_110276FD:
    PUSH32(esp, 0); /* 0x110276FD: push 0 */
    PUSH32(esp, esi); /* 0x110276FF: push esi */
    ecx = ebp + (-0x30); /* 0x11027700: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_11014015); /* 0x11027703: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x1C)), 0x10u */ /* 0x11027708: cmp dword ptr [ebp - 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x30)); /* 0x1102770C: mov eax, dword ptr [ebp - 0x30] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11027714; /* 0x1102770F: jae 0x11027714 */
L_11027711:
    eax = ebp + (-0x30); /* 0x11027711: lea eax, [ebp - 0x30] */
L_11027714:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x11027714: push dword ptr [ebx + 8] */
    ecx = ebp + (-0x18); /* 0x11027717: lea ecx, [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x1102771A: push edi */
    PUSH32(esp, ecx); /* 0x1102771B: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1102771C: push dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1102771F: push eax */
    RECOMP_ICALL(MEM32(0x11069114)); /* 0x11027720: call dword ptr [0x11069114] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x11027726: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11027728: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1102772B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11027733; /* 0x1102772D: jne 0x11027733 */
L_1102772F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1102772F: add esi, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_110276FD; /* 0x11027731: jmp 0x110276fd */
L_11027733:
    /* cmp MEM32(ebp + (-0x1C)), 0x10u */ /* 0x11027733: cmp dword ptr [ebp - 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x30)); /* 0x11027737: mov ecx, dword ptr [ebp - 0x30] */
    eax = ecx; /* 0x1102773A: mov eax, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11027743; /* 0x1102773C: jae 0x11027743 */
L_1102773E:
    eax = ebp + (-0x30); /* 0x1102773E: lea eax, [ebp - 0x30] */
    ecx = eax; /* 0x11027741: mov ecx, eax */
L_11027743:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11027743: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x34)); /* 0x11027746: mov edi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11027749: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1102774B: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1102774E: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1102774F: push eax */
    PUSH32(esp, ecx); /* 0x11027750: push ecx */
    PUSH32(esp, edi); /* 0x11027751: push edi */
    RECOMP_CALL(sub_11015775); /* 0x11027752: call 0x11015775 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11027757: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x30); /* 0x1102775A: lea ecx, [ebp - 0x30] */
    PUSH32(esp, 0); /* 0x1102775D: push 0 */
    PUSH32(esp, 1); /* 0x1102775F: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11027761: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11027766: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x11027768: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1102776D: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11027770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027770u);

L_11027770:
    PUSH32(esp, 0x34u); /* 0x11027770: push 0x34 */
    eax = 0x1103E746u; /* 0x11027772: mov eax, 0x1103e746 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11027777: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40)) = ecx; /* 0x1102777C: mov dword ptr [ebp - 0x40], ecx */
    eax = MEM32(ebp + 0x1C); /* 0x1102777F: mov eax, dword ptr [ebp + 0x1c] */
    edi = ebp + (-0x1C); /* 0x11027782: lea edi, [ebp - 0x1c] */
    ebx = MEM32(ebp + 0x8); /* 0x11027785: mov ebx, dword ptr [ebp + 8] */
    esi = 0x11002418u; /* 0x11027788: mov esi, 0x11002418 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1102778D: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = eax; /* 0x11027791: mov dword ptr [ebp - 0x3c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11027794: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ebx; /* 0x11027796: mov dword ptr [ebp - 0x38], ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11027799: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x20)) = 7; /* 0x1102779A: mov dword ptr [ebp - 0x20], 7 */
    MEM16(ebp + (-0x34)) = (uint16_t)(LO16(eax)); /* 0x110277A1: mov word ptr [ebp - 0x34], ax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x110277A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x110277A6: movsw word ptr es:[edi], word ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x110277A8: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + 0x24)); /* 0x110277AB: mov al, byte ptr [ebp + 0x24] */
    /* test LO8(eax), LO8(eax) */ /* 0x110277AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110277BD; /* 0x110277B0: jne 0x110277bd */
L_110277B2:
    eax = MEM32(ebp + 0x20); /* 0x110277B2: mov eax, dword ptr [ebp + 0x20] */
    SET_LO16(eax, (uint16_t)(int16_t)(int8_t)LO8(eax)); /* 0x110277B5: cbw  */
    MEM16(ebp + (-0x18)) = (uint16_t)(LO16(eax)); /* 0x110277B7: mov word ptr [ebp - 0x18], ax */
    goto L_110277CC; /* 0x110277BB: jmp 0x110277cc */
L_110277BD:
    SET_LO16(eax, (uint16_t)(int16_t)(int8_t)LO8(eax)); /* 0x110277BD: cbw  */
    MEM16(ebp + (-0x18)) = (uint16_t)(LO16(eax)); /* 0x110277BF: mov word ptr [ebp - 0x18], ax */
    eax = MEM32(ebp + 0x20); /* 0x110277C3: mov eax, dword ptr [ebp + 0x20] */
    SET_LO16(eax, (uint16_t)(int16_t)(int8_t)LO8(eax)); /* 0x110277C6: cbw  */
    MEM16(ebp + (-0x16)) = (uint16_t)(LO16(eax)); /* 0x110277C8: mov word ptr [ebp - 0x16], ax */
L_110277CC:
    edi = MEM32(ebp + (-0x40)); /* 0x110277CC: mov edi, dword ptr [ebp - 0x40] */
    ebx = MEM32(ebp + (-0x3C)); /* 0x110277CF: mov ebx, dword ptr [ebp - 0x3c] */
    PUSH32(esp, 0x10u); /* 0x110277D2: push 0x10 */
    esi = POP32_VAL(esp); /* 0x110277D4: pop esi */
L_110277D5:
    PUSH32(esp, 0); /* 0x110277D5: push 0 */
    PUSH32(esp, esi); /* 0x110277D7: push esi */
    ecx = ebp + (-0x34); /* 0x110277D8: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_110226A3); /* 0x110277DB: call 0x110226a3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), 8 */ /* 0x110277E0: cmp dword ptr [ebp - 0x20], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x34)); /* 0x110277E4: mov eax, dword ptr [ebp - 0x34] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110277EC; /* 0x110277E7: jae 0x110277ec */
L_110277E9:
    eax = ebp + (-0x34); /* 0x110277E9: lea eax, [ebp - 0x34] */
L_110277EC:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x110277EC: push dword ptr [edi + 8] */
    ecx = ebp + (-0x1C); /* 0x110277EF: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x110277F2: push ebx */
    PUSH32(esp, ecx); /* 0x110277F3: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x110277F4: push dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x110277F7: push eax */
    RECOMP_ICALL(MEM32(0x11069118)); /* 0x110277F8: call dword ptr [0x11069118] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x110277FE: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11027800: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x11027803: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1102780B; /* 0x11027805: jne 0x1102780b */
L_11027807:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x11027807: add esi, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_110277D5; /* 0x11027809: jmp 0x110277d5 */
L_1102780B:
    /* cmp MEM32(ebp + (-0x20)), 8 */ /* 0x1102780B: cmp dword ptr [ebp - 0x20], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x34)); /* 0x1102780F: mov ecx, dword ptr [ebp - 0x34] */
    eax = ecx; /* 0x11027812: mov eax, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1102781B; /* 0x11027814: jae 0x1102781b */
L_11027816:
    eax = ebp + (-0x34); /* 0x11027816: lea eax, [ebp - 0x34] */
    ecx = eax; /* 0x11027819: mov ecx, eax */
L_1102781B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1102781B: push dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + (-0x38)); /* 0x1102781E: mov ebx, dword ptr [ebp - 0x38] */
    eax = eax + edx * 2; /* 0x11027821: lea eax, [eax + edx*2] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11027824: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x11027827: add ecx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1102782A: push eax */
    PUSH32(esp, ecx); /* 0x1102782B: push ecx */
    PUSH32(esp, ebx); /* 0x1102782C: push ebx */
    RECOMP_CALL(sub_110157A5); /* 0x1102782D: call 0x110157a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11027832: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x34); /* 0x11027835: lea ecx, [ebp - 0x34] */
    PUSH32(esp, 0); /* 0x11027838: push 0 */
    PUSH32(esp, 1); /* 0x1102783A: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x1102783C: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11027841: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11027843: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11027848: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1102784B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102784Bu);

L_1102784B:
    SET_LO8(eax, MEM8(ecx + 0xD)); /* 0x1102784B: mov al, byte ptr [ecx + 0xd] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102784E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1102784F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1102784Fu);

L_1102784F:
    eax = MEM32(ecx + 0xC); /* 0x1102784F: mov eax, dword ptr [ecx + 0xc] */
    eax = MEM32(eax); /* 0x11027852: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027854: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027855(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027855u);

L_11027855:
    eax = MEM32(ecx + 0x2C); /* 0x11027855: mov eax, dword ptr [ecx + 0x2c] */
    edx = MEM32(eax); /* 0x11027858: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x1102785A: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax); /* 0x1102785D: mov eax, dword ptr [eax] */
    eax = eax + edx * 2; /* 0x1102785F: lea eax, [eax + edx*2] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027862: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027863(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027863u);

L_11027863:
    eax = MEM32(ecx + 0x30); /* 0x11027863: mov eax, dword ptr [ecx + 0x30] */
    edx = MEM32(eax); /* 0x11027866: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x20); /* 0x11027868: mov eax, dword ptr [ecx + 0x20] */
    eax = MEM32(eax); /* 0x1102786B: mov eax, dword ptr [eax] */
    eax = eax + edx * 2; /* 0x1102786D: lea eax, [eax + edx*2] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11027870: ret  */
    RECOMP_REGS_OUT();
}

void sub_11027871(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11027871u);

L_11027871:
    PUSH32(esp, ebp); /* 0x11027871: push ebp */
    ebp = esp; /* 0x11027872: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11027874: push esi */
    PUSH32(esp, edi); /* 0x11027875: push edi */
    edi = ecx; /* 0x11027876: mov edi, ecx */
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11027878: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027883; /* 0x1102787C: jne 0x11027883 */
L_1102787E:
    RECOMP_CALL(sub_110224F1); /* 0x1102787E: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11027883:
    esi = MEM32(ebp + 0x8); /* 0x11027883: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x11027886: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11027893; /* 0x1102788A: jne 0x11027893 */
L_1102788C:
    ecx = esi; /* 0x1102788C: mov ecx, esi */
    RECOMP_CALL(sub_110224F1); /* 0x1102788E: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11027893:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11027893: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), eax */ /* 0x11027895: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1102789F; /* 0x11027897: jne 0x1102789f */
L_11027899:
    /* cmp MEM32(esi), eax */ /* 0x11027899: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110278A3; /* 0x1102789B: je 0x110278a3 */
L_1102789D:
    goto L_110278A6; /* 0x1102789D: jmp 0x110278a6 */
L_1102789F:
    /* cmp MEM32(esi), eax */ /* 0x1102789F: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110278A6; /* 0x110278A1: je 0x110278a6 */
L_110278A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110278A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110278A5: inc eax */
    _flag_k = FK_INC;
L_110278A6:
    edi = POP32_VAL(esp); /* 0x110278A6: pop edi */
    esi = POP32_VAL(esp); /* 0x110278A7: pop esi */
    ebp = POP32_VAL(esp); /* 0x110278A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110278A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110278AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110278ACu);

L_110278AC:
    PUSH32(esp, ebp); /* 0x110278AC: push ebp */
    ebp = esp; /* 0x110278AD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110278AF: push esi */
    PUSH32(esp, edi); /* 0x110278B0: push edi */
    edi = ecx; /* 0x110278B1: mov edi, ecx */
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110278B3: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110278BE; /* 0x110278B7: jne 0x110278be */
L_110278B9:
    RECOMP_CALL(sub_11022515); /* 0x110278B9: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110278BE:
    esi = MEM32(ebp + 0x8); /* 0x110278BE: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x110278C1: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110278CE; /* 0x110278C5: jne 0x110278ce */
L_110278C7:
    ecx = esi; /* 0x110278C7: mov ecx, esi */
    RECOMP_CALL(sub_11022515); /* 0x110278C9: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110278CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110278CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), eax */ /* 0x110278D0: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110278DA; /* 0x110278D2: jne 0x110278da */
L_110278D4:
    /* cmp MEM32(esi), eax */ /* 0x110278D4: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110278DE; /* 0x110278D6: je 0x110278de */
L_110278D8:
    goto L_110278E1; /* 0x110278D8: jmp 0x110278e1 */
L_110278DA:
    /* cmp MEM32(esi), eax */ /* 0x110278DA: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110278E1; /* 0x110278DC: je 0x110278e1 */
L_110278DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110278DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110278E0: inc eax */
    _flag_k = FK_INC;
L_110278E1:
    edi = POP32_VAL(esp); /* 0x110278E1: pop edi */
    esi = POP32_VAL(esp); /* 0x110278E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x110278E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110278E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110278E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110278E7u);

L_110278E7:
    PUSH32(esp, ebp); /* 0x110278E7: push ebp */
    ebp = esp; /* 0x110278E8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110278EA: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x110278ED: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1102790F; /* 0x110278F0: jb 0x1102790f */
L_110278F2:
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x110278F2: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = eax; /* 0x110278F6: mov dword ptr [ecx + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_110278FF; /* 0x110278F9: jb 0x110278ff */
L_110278FB:
    edx = MEM32(ecx); /* 0x110278FB: mov edx, dword ptr [ecx] */
    goto L_11027901; /* 0x110278FD: jmp 0x11027901 */
L_110278FF:
    edx = ecx; /* 0x110278FF: mov edx, ecx */
L_11027901:
    PUSH32(esp, esi); /* 0x11027901: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11027902: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx + eax * 2) = (uint16_t)(LO16(esi)); /* 0x11027904: mov word ptr [edx + eax*2], si */
    eax = ecx; /* 0x11027908: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1102790A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1102790B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1102790C: ret 4 */
L_1102790F:
    PUSH32(esp, 0x11004958u); /* 0x1102790F: push 0x11004958 */
    RECOMP_CALL(sub_11013A0C); /* 0x11027914: call 0x11013a0c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11027919u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
