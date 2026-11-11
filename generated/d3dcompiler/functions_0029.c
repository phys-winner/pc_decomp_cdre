#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_141ED22A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED22Au);

L_141ED22A:
    { _itail_tgt = (uint32_t)(MEM32(0x1400119C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED236(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED236u);

L_141ED236:
    { _itail_tgt = (uint32_t)(MEM32(0x140011A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED242(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED242u);

L_141ED242:
    { _itail_tgt = (uint32_t)(MEM32(0x140011A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED24E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED24Eu);

L_141ED24E:
    { _itail_tgt = (uint32_t)(MEM32(0x140011A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED25A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED25Au);

L_141ED25A:
    { _itail_tgt = (uint32_t)(MEM32(0x140011AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED270u);

L_141ED270:
    /* cmp LO8(ecx), 0x40u */ /* 0x141ED270: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED28A; /* 0x141ED273: jae 0x141ed28a */
L_141ED275:
    /* cmp LO8(ecx), 0x20u */ /* 0x141ED275: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED280; /* 0x141ED278: jae 0x141ed280 */
L_141ED27A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141ED27A: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141ED27D: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x141ED27D: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED27F: ret  */
L_141ED280:
    eax = edx; /* 0x141ED280: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED282: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x141ED284: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141ED287: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x141ED287: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED289: ret  */
L_141ED28A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141ED28A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141ED28C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED28E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ED2A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED2A0u);

L_141ED2A0:
    /* cmp LO8(ecx), 0x40u */ /* 0x141ED2A0: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED2BB; /* 0x141ED2A3: jae 0x141ed2bb */
L_141ED2A5:
    /* cmp LO8(ecx), 0x20u */ /* 0x141ED2A5: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_141ED2B0; /* 0x141ED2A8: jae 0x141ed2b0 */
L_141ED2AA:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141ED2AA: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x141ED2AD: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED2AF: ret  */
L_141ED2B0:
    eax = edx; /* 0x141ED2B0: mov eax, edx */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x141ED2B2: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x141ED2B5: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x141ED2B8: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED2BA: ret  */
L_141ED2BB:
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x141ED2BB: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    eax = edx; /* 0x141ED2BE: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141ED2C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ED3D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED3D6u);

    goto L_141ED3D6;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED3D6:
    edx = MEM32(esp + 0x8); /* 0x141ED3D6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED3DA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x141ED3DD: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED3E0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED3E2: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDD20u; /* 0x141ED3E7: mov eax, 0x141edd20 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED3EC: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED460u);

    goto L_141ED460;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED460:
    edx = MEM32(esp + 0x8); /* 0x141ED460: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED464: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x141ED467: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED46A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED46C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDD88u; /* 0x141ED471: mov eax, 0x141edd88 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED476: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED4B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED4B5u);

    goto L_141ED4B5;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED4B5:
    edx = MEM32(esp + 0x8); /* 0x141ED4B5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED4B9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x141ED4BC: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED4BF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED4C1: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDDCCu; /* 0x141ED4C6: mov eax, 0x141eddcc */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED4CB: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED568(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED568u);

    goto L_141ED568;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED568:
    edx = MEM32(esp + 0x8); /* 0x141ED568: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED56C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x141ED56F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED572: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED574: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDE40u; /* 0x141ED579: mov eax, 0x141ede40 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED57E: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED590u);

    goto L_141ED590;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED590:
    edx = MEM32(esp + 0x8); /* 0x141ED590: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED594: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x141ED597: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED59A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED59C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDE98u; /* 0x141ED5A1: mov eax, 0x141ede98 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED5A6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED60A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED60Au);

    goto L_141ED60A;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED60A:
    edx = MEM32(esp + 0x8); /* 0x141ED60A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED60E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD4)); /* 0x141ED611: mov ecx, dword ptr [edx - 0xd4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED617: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED619: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x141ED61E: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED621: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED623: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDEECu; /* 0x141ED628: mov eax, 0x141edeec */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED62D: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED658u);

    goto L_141ED658;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED658:
    edx = MEM32(esp + 0x8); /* 0x141ED658: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED65C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x141ED65F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED662: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED664: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDF20u; /* 0x141ED669: mov eax, 0x141edf20 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED66E: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED6B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED6B5u);

    goto L_141ED6B5;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED6B5:
    edx = MEM32(esp + 0x8); /* 0x141ED6B5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED6B9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x141ED6BC: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED6BF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED6C1: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDF64u; /* 0x141ED6C6: mov eax, 0x141edf64 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED6CB: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED75A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED75Au);

    goto L_141ED75A;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED75A:
    edx = MEM32(esp + 0x8); /* 0x141ED75A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED75E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x141ED761: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED764: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED766: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDFD0u; /* 0x141ED76B: mov eax, 0x141edfd0 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED770: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED78F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED78Fu);

    goto L_141ED78F;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED78F:
    edx = MEM32(esp + 0x8); /* 0x141ED78F: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x134); /* 0x141ED793: lea eax, [edx - 0x134] */
    ecx = MEM32(edx + (-0x138)); /* 0x141ED799: mov ecx, dword ptr [edx - 0x138] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED79F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED7A1: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EDFFCu; /* 0x141ED7A6: mov eax, 0x141edffc */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED7AB: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED985(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED985u);

    goto L_141ED985;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED985:
    edx = MEM32(esp + 0x8); /* 0x141ED985: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED989: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xDC)); /* 0x141ED98C: mov ecx, dword ptr [edx - 0xdc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED992: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED994: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x141ED999: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED99C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED99E: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE14Cu; /* 0x141ED9A3: mov eax, 0x141ee14c */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED9A8: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED9C0u);

    goto L_141ED9C0;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED9C0:
    edx = MEM32(esp + 0x8); /* 0x141ED9C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED9C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141ED9C7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED9CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED9CC: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE1A4u; /* 0x141ED9D1: mov eax, 0x141ee1a4 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED9D6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141ED9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED9E0u);

    goto L_141ED9E0;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141ED9E0:
    edx = MEM32(esp + 0x8); /* 0x141ED9E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141ED9E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141ED9E7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141ED9EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141ED9EC: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE1FCu; /* 0x141ED9F1: mov eax, 0x141ee1fc */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141ED9F6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDA00u);

    goto L_141EDA00;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDA00:
    edx = MEM32(esp + 0x8); /* 0x141EDA00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDA04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDA07: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDA0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDA0C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE254u; /* 0x141EDA11: mov eax, 0x141ee254 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDA16: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDA20u);

    goto L_141EDA20;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDA20:
    edx = MEM32(esp + 0x8); /* 0x141EDA20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDA24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDA27: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDA2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDA2C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE2ACu; /* 0x141EDA31: mov eax, 0x141ee2ac */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDA36: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDA40u);

    goto L_141EDA40;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDA40:
    edx = MEM32(esp + 0x8); /* 0x141EDA40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDA44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDA47: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDA4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDA4C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE304u; /* 0x141EDA51: mov eax, 0x141ee304 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDA56: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDA60u);

    goto L_141EDA60;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDA60:
    edx = MEM32(esp + 0x8); /* 0x141EDA60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDA64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDA67: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDA6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDA6C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE35Cu; /* 0x141EDA71: mov eax, 0x141ee35c */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDA76: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDA80u);

    goto L_141EDA80;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDA80:
    edx = MEM32(esp + 0x8); /* 0x141EDA80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDA84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDA87: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDA8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDA8C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE3B4u; /* 0x141EDA91: mov eax, 0x141ee3b4 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDA96: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDAA0u);

    goto L_141EDAA0;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDAA0:
    edx = MEM32(esp + 0x8); /* 0x141EDAA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDAA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDAA7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDAAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDAAC: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE40Cu; /* 0x141EDAB1: mov eax, 0x141ee40c */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDAB6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDAC0u);

    goto L_141EDAC0;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDAC0:
    edx = MEM32(esp + 0x8); /* 0x141EDAC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDAC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDAC7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDACA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDACC: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE464u; /* 0x141EDAD1: mov eax, 0x141ee464 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDAD6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDAE0u);

    goto L_141EDAE0;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDAE0:
    edx = MEM32(esp + 0x8); /* 0x141EDAE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDAE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDAE7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDAEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDAEC: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE4BCu; /* 0x141EDAF1: mov eax, 0x141ee4bc */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDAF6: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB00u);

    goto L_141EDB00;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDB00:
    edx = MEM32(esp + 0x8); /* 0x141EDB00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDB04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDB07: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDB0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDB0C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE514u; /* 0x141EDB11: mov eax, 0x141ee514 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDB16: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB20u);

    goto L_141EDB20;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDB20:
    edx = MEM32(esp + 0x8); /* 0x141EDB20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDB24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDB27: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDB2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDB2C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE56Cu; /* 0x141EDB31: mov eax, 0x141ee56c */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDB36: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB40u);

    goto L_141EDB40;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDB40:
    edx = MEM32(esp + 0x8); /* 0x141EDB40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDB44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDB47: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDB4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDB4C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE5C4u; /* 0x141EDB51: mov eax, 0x141ee5c4 */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDB56: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB60u);

    goto L_141EDB60;
L_141E2413:
    PUSH32(esp, ebp); /* 0x141E2413: push ebp */
    ebp = esp; /* 0x141E2414: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E2416: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E2419: push ebx */
    PUSH32(esp, esi); /* 0x141E241A: push esi */
    PUSH32(esp, edi); /* 0x141E241B: push edi */
    _df = 1; /* 0x141E241C: cld  */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E241D: mov dword ptr [ebp - 4], eax */
    esi = MEM32(ebp + (-0x4)); /* 0x141E2420: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 9); /* 0x141E2423: push 9 */
    ecx = POP32_VAL(esp); /* 0x141E2425: pop ecx */
    edi = ebp + (-0x28); /* 0x141E2426: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E2429: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebp + (-0x28)); /* 0x141E242B: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF9930520u);
    eax = eax & 0xF9930520u; /* 0x141E242E: and eax, 0xf9930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x19930520u)); _flag_b = (uint32_t)((eax | 0x19930520u));
    eax = eax | 0x19930520u; /* 0x141E2433: or eax, 0x19930520 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x141E2438: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x28); /* 0x141E243B: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E243E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E2441: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E2444: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E2447: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E244A: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E244D: mov eax, dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400116C)); /* 0x141E2450: call dword ptr [0x1400116c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E2456: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x141E2459: pop edi */
    esi = POP32_VAL(esp); /* 0x141E245A: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E245B: pop ebx */
    esp = ebp; /* 0x141E245C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x141E245E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E245F: ret  */
L_141EDB60:
    edx = MEM32(esp + 0x8); /* 0x141EDB60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x141EDB64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x141EDB67: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x141EDB6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x141EDB6C: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    eax = 0x141EE61Cu; /* 0x141EDB71: mov eax, 0x141ee61c */
    RECOMP_BACKEDGE();
    goto L_141E2413; /* 0x141EDB76: jmp 0x141e2413 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141EDD08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDD08u);

L_141EDD08:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD0E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD12: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ecx, HI8(ecx) + LO8(ebx)); /* 0x141EDD14: add ch, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EDD16: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0xFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDD17: adc al, 0xff */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x141EDD19u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDD20u);

L_141EDD20:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x141EDD20: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = HI8(ecx), _sb = LO8(ebx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDD28: sbb ch, bl */
      SET_HI8(ecx, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_ds); /* 0x141EDD2A: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDD2B: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD2F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD31: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD33: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD35: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD37: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD39: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD3B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD3D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EDD3F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD41: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD43: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDD47: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDD49u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDD88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDD88u);

L_141EDD88:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x81993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x81993)); /* 0x141EDD88: and al, byte ptr [0x81993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD8E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141EDD90: dec eax */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x141EDD91: fstp qword ptr [esi] */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDD93: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD95: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD97: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD99: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD9B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD9D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDD9F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDA1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDA3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDA5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EDDA7: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDA9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDDAB: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDDADu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDDCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDDCCu);

L_141EDDCC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x41993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x41993)); /* 0x141EDDCC: and al, byte ptr [0x41993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDD2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x141EDDD4: lodsb al, byte ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x141EDDD5: fstp qword ptr [esi] */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDDD7: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDD9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDDB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDDD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDDF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDE1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDE3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDE5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDE7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDDED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDDEF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDDF1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDE40u);

L_141EDE40:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0xA1993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0xA1993)); /* 0x141EDE40: and al, byte ptr [0xa1993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDE46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDE48u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDE98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDE98u);

L_141EDE98:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EDE98: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDE9E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x141EDEA0u, "ficomp word ptr fs:[esi]");
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDEA3: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEA5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + ebx * 8 + 0x141E)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + ebx * 8 + 0x141E) = (uint8_t)(MEM8(esi + ebx * 8 + 0x141E) + LO8(eax)); /* 0x141EDEA7: add byte ptr [esi + ebx*8 + 0x141e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEAE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEB0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEB2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEB4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEB6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEB8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEBA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDEBCu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDEEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDEECu);

L_141EDEEC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x61993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x61993)); /* 0x141EDEEC: and al, byte ptr [0x61993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEF2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esp = 0x00141EDEu; /* 0x141EDEF4: mov esp, 0x141ede */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEF9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEFB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEFD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDEFF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF03: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF05: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF07: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF09: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF0B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDF0F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDF11u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDF20u);

L_141EDF20:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EDF20: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF26: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = HI8(ebx), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDF28: adc bh, bl */
      SET_HI8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_ds); /* 0x141EDF2A: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDF2B: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF2F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF31: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF33: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF35: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF37: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF39: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF3B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF3D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EDF3F: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF41: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDF43: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDF45u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDF64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDF64u);

L_141EDF64:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x41993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x41993)); /* 0x141EDF64: and al, byte ptr [0x41993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF6A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x141EDF6C: inc esp */
    _flag_k = FK_INC;
    MEM16(esi) = (int16_t)fp_to_int(fp_pop()); /* 0x141EDF6D: fistp word ptr [esi] */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDF6F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF71: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF73: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF75: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF77: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF79: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF7B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF7D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF7F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDF85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDF87: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDF89u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDFD0u);

L_141EDFD0:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x91993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x91993)); /* 0x141EDFD0: and al, byte ptr [0x91993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFD6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(ebx, LO8(ebx)); /* 0x141EDFD8: mov bh, bl */
    PUSH32(esp, _seg_ds); /* 0x141EDFDA: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EDFDB: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFDD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFDF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFE1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFE3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFE5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFE7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFE9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFEB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EDFEF: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EDFF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EDFF3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EDFF5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EDFFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDFFCu);

L_141EDFFC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x11993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x11993)); /* 0x141EDFFC: and al, byte ptr [0x11993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE002: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x141EE004u, "hlt ");
    MEM16(esi) = (int16_t)fp_to_int(fp_pop()); /* 0x141EE005: fistp word ptr [esi] */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE007: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE009: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE00B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE00D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE00F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE011: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE013: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE015: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE017: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE019: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE01B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE01D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE01F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE021u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE14C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE14Cu);

L_141EE14C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x211993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x211993)); /* 0x141EE14C: and al, byte ptr [0x211993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE152: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    SET_LO8(eax, LO8(eax) & HI8(eax)); /* 0x141EE154: and al, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE156: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE157: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE159: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x141EE15B: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)); if (--ecx != 0 && _zc) goto L_141EE17D; } /* 0x141EE15D: loope 0x141ee17d */
L_141EE15F:
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE15F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE161: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE163: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE165: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE167: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE169: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE16B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE16D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE16F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE171u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_141EE17D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE17D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE17F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE181: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3E)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E) = (uint8_t)(MEM8(eax + 0x3E) + LO8(eax)); /* 0x141EE183: add byte ptr [eax + 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x141EE186: pop ds */
    { uint32_t _aa = LO8(eax), _ab = 0xE4u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE187: adc al, 0xe4 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x141EE189u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE1A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE1A4u);

    goto L_141EE1A4;
L_141EE18F:
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE18F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE191: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE193: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE195: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE197: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE199: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE19B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE19D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x22141EE1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x22141EE1) = (uint8_t)(MEM8(eax + 0x22141EE1) + LO8(eax)); /* 0x141EE19F: add byte ptr [eax + 0x22141ee1], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_141EE1A5; /* falls through past a gap */
L_141EE1A4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE1A4: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141EE1AA; /* falls through past a gap */
L_141EE1A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00021993u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00021993u; /* 0x141EE1A5: add eax, 0x21993 */
    _flag_k = FK_ADD;
L_141EE1AA:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1AA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_141EE18F; /* 0x141EE1AC: jo 0x141ee18f */
L_141EE1AE:
    PUSH32(esp, _seg_ds); /* 0x141EE1AE: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE1AF: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1B1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x141EE1)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x141EE1) = (uint8_t)(MEM8(eax + 0x141EE1) + LO8(edx)); /* 0x141EE1B3: add byte ptr [eax + 0x141ee1], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1BB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE1C3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE1C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE1C7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE1C9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE1FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE1FCu);

L_141EE1FC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE1FC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE202: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); ebp = esp; esp -= 0x1EE1u; /* 0x141EE204: enter 0x1ee1, 0x14 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x141EE208: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE20A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x143300F2u); /* 0x141EE20C: call 0x143300f2 */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE211: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE213: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE215: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE217: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE219: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE21B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE21D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE21F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE221u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE254u);

L_141EE254:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE254: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE25A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    SET_LO8(edx, LO8(edx) & HI8(eax)); /* 0x141EE25C: and dl, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE25E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE25F: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE261: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x1E))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1E)) = (uint8_t)(MEM8(eax + (-0x1E)) + LO8(eax)); /* 0x141EE263: add byte ptr [eax - 0x1e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE266: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE267: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE269: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE26B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE26D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE26F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE271: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE273: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE275: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE277: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE279u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE2AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE2ACu);

    goto L_141EE2AC;
L_141EE298:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE298: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE29A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE29C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE29E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x141EE2A0: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x141EE2A4: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(edx, HI8(eax)); /* 0x141EE2A8: mov dl, ah */
    PUSH32(esp, _seg_ds); /* 0x141EE2AA: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0x22u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE2AB: adc al, 0x22 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_141EE2AD; /* falls through past a gap */
L_141EE2AC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE2AC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141EE2B2; /* falls through past a gap */
L_141EE2AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00021993u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00021993u; /* 0x141EE2AD: add eax, 0x21993 */
    _flag_k = FK_ADD;
L_141EE2B2:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2B2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_141EE298; /* 0x141EE2B4: js 0x141ee298 */
L_141EE2B6:
    PUSH32(esp, _seg_ds); /* 0x141EE2B6: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE2B7: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x141EE2)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x141EE2) = (uint8_t)(MEM8(eax + 0x141EE2) + LO8(ebx)); /* 0x141EE2BB: add byte ptr [eax + 0x141ee2], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2C3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2C5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2C7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE2CB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE2CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE2CF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE2D1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE304u);

L_141EE304:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE304: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE30A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (1u) _cf = (((LO8(edx)) >> 7) & 1u); /* 0x141EE30C: shl dl, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 1u); /* 0x141EE30C: shl dl, 1 */
    PUSH32(esp, _seg_ds); /* 0x141EE30E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE30F: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE311: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x141EE313: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (--ecx != 0) goto L_141EE335; /* 0x141EE315: loop 0x141ee335 */
L_141EE317:
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE317: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE319: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE31B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE31D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE31F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE321: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE323: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE325: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE327: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE329u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_141EE335:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE335: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE337: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE339: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3E)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E) = (uint8_t)(MEM8(eax + 0x3E) + LO8(eax)); /* 0x141EE33B: add byte ptr [eax + 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x141EE33E: pop ds */
    { uint32_t _aa = LO8(eax), _ab = 0xE4u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE33F: adc al, 0xe4 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x141EE341u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE35C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE35Cu);

L_141EE35C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE35C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE362: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - HI8(eax)); /* 0x141EE364: sub bl, ah */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE366: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE367: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE369: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x1D))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1D)) = (uint8_t)(MEM8(eax + (-0x1D)) + LO8(ecx)); /* 0x141EE36B: add byte ptr [eax - 0x1d], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE36E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE36F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE371: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE373: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE375: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE377: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE37B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE37D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE37F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE381u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE3B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE3B4u);

L_141EE3B4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE3B4: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3BA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x1Eu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0x1Eu); /* 0x141EE3BC: and bl, 0x1e */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE3BF: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x141EE3)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x141EE3) = (uint8_t)(MEM8(eax + 0x141EE3) + HI8(eax)); /* 0x141EE3C3: add byte ptr [eax + 0x141ee3], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3CB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3CD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3CF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE3D3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE3D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE3D7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE3D9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE40C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE40Cu);

L_141EE40C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE40C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE412: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] -= _st[3]; /* 0x141EE414: fsub st(3) */
    PUSH32(esp, _seg_ds); /* 0x141EE416: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE417: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE419: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ebx)); /* 0x141EE41B: add al, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (ecx == 0) goto L_141EE43D; /* 0x141EE41D: jecxz 0x141ee43d */
L_141EE41F:
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE41F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE421: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE423: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE425: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE427: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE429: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE42B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE42D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE42F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE431u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_141EE43D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE43D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE43F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE441: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3E)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3E) = (uint8_t)(MEM8(eax + 0x3E) + LO8(eax)); /* 0x141EE443: add byte ptr [eax + 0x3e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _seg_ds = POP32_VAL(esp); /* 0x141EE446: pop ds */
    { uint32_t _aa = LO8(eax), _ab = 0xE4u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE447: adc al, 0xe4 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x141EE449u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE464(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE464u);

L_141EE464:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE464: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE46A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(eax, 0); /* 0x141EE46C: xor ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE46E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE46F: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE471: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x1C))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1C)) = (uint8_t)(MEM8(eax + (-0x1C)) + LO8(edx)); /* 0x141EE473: add byte ptr [eax - 0x1c], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE476: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE477: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE479: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE47B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE47D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE47F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE481: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE483: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE485: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE487: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE489u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE4BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE4BCu);

L_141EE4BC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE4BC: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4C2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(eax, HI8(eax)); /* 0x141EE4C4: mov ah, ah */
    PUSH32(esp, _seg_ds); /* 0x141EE4C6: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE4C7: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4C9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x141EE4)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x141EE4) = (uint8_t)(MEM8(eax + 0x141EE4) + HI8(ecx)); /* 0x141EE4CB: add byte ptr [eax + 0x141ee4], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4D3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4D7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE4DB: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE4DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE4DF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE4E1u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE514u);

    goto L_141EE514;
L_141EE502:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE502: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE504: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE506: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x141EE508: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE50A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + eax; /* 0x141EE50C: add dword ptr [eax], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE50E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE510u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_141EE514:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE514: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE51A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    { int _zc = (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)); if (--ecx != 0 && _zc) goto L_141EE502; } /* 0x141EE51C: loopne 0x141ee502 */
L_141EE51E:
    PUSH32(esp, _seg_ds); /* 0x141EE51E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE51F: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE521: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE523: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE525: in eax, 0x1e */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE527: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE529: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE52B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE52D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE52F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE531: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE533: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE535: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE537: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE539u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE56C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE56Cu);

L_141EE56C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE56C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE572: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(ecx), HI8(eax) */ /* 0x141EE574: cmp ch, ah */
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE576: push ds */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE577: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE579: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x1B))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x1B)) = (uint8_t)(MEM8(eax + (-0x1B)) + LO8(ebx)); /* 0x141EE57B: add byte ptr [eax - 0x1b], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE57E: push ds */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE57F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE581: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE583: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE585: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE587: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE589: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE58B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE58D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE58F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE591u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE5C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE5C4u);

L_141EE5C4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE5C4: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5CA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x141EE5CC: nop  */
    /* in: no port I/O under Win32 */ /* 0x141EE5CD: in eax, 0x1e */
    { uint32_t _aa = LO8(eax), _ab = 1, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE5CF: adc al, 1 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5D1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x141EE5)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x141EE5) = (uint8_t)(MEM8(eax + 0x141EE5) + HI8(edx)); /* 0x141EE5D3: add byte ptr [eax + 0x141ee5], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5DB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5DD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5DF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5E1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE5E3: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE5E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x141EE5E7: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x141EE5E9u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_141EE61C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EE61Cu);

L_141EE61C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(0x21993)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(0x21993)); /* 0x141EE61C: and al, byte ptr [0x21993] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE622: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ICALL(0x1533050Eu); /* 0x141EE624: call 0x1533050e */ /* not lifted */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE629: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x141EE62B: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* out: no port I/O under Win32 */ /* 0x141EE62D: out 0x1e, al */
    { uint32_t _aa = LO8(eax), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE62F: adc al, 0 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE631: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE633: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE635: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE637: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE639: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x141EE63B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE63D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x19))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x19)) = (uint8_t)(MEM8(eax + (-0x19)) + LO8(eax)); /* 0x141EE63F: add byte ptr [eax - 0x19], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE642: push ds */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE643: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE645: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE647: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE649: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x141EE64B: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x141EE64Du, "ljmp 0:0x10b0001e");
    /* nop */ /* 0x141EE654: nop  */
    /* out: no port I/O under Win32 */ /* 0x141EE655: out 0x1e, al */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE657: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE659: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE65B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE65D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x1EEA)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x1EEA) = (uint8_t)(MEM8(edx + 0x1EEA) + LO8(edx)); /* 0x141EE65F: add byte ptr [edx + 0x1eea], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE665: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax + 0x1EE6)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x1EE6) = (uint8_t)(MEM8(eax + 0x1EE6) + LO8(ebx)); /* 0x141EE667: add byte ptr [eax + 0x1ee6], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE66D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE66F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE671: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x8001EED)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x8001EED) = (uint8_t)(MEM8(eax + 0x8001EED) + LO8(edx)); /* 0x141EE673: add byte ptr [eax + 0x8001eed], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141EE679: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE67B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE67D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE67F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE681: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE683: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE685: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE687: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE689: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE68B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE68D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x1EEA)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x1EEA) = (uint8_t)(MEM8(edx + 0x1EEA) + LO8(eax)); /* 0x141EE68F: add byte ptr [edx + 0x1eea], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE695: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x13))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x13)) = (uint8_t)(MEM8(eax + (-0x13)) + LO8(ecx)); /* 0x141EE697: add byte ptr [eax - 0x13], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE69A: push ds */
    _flag_a = (uint32_t)(MEM8(ebp * 8 + (-0x12DFFFE2))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp * 8 + (-0x12DFFFE2)) = (uint8_t)(MEM8(ebp * 8 + (-0x12DFFFE2)) + HI8(edx)); /* 0x141EE69B: add byte ptr [ebp*8 - 0x12dfffe2], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE6A2: push ds */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x141EE6A3: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6A5: in eax, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6A6: push ds */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x141EE6A7: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6A9: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6AA: push ds */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x141EE6AB: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6AD: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6AE: push ds */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x141EE6AF: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6B1: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6B2: push ds */
    _flag_a = (uint32_t)(MEM8(eax + (-0x5BFFE114))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x5BFFE114)) = (uint8_t)(MEM8(eax + (-0x5BFFE114)) + HI8(edx)); /* 0x141EE6B3: add byte ptr [eax - 0x5bffe114], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6B9: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6BA: push ds */
    _flag_a = (uint32_t)(MEM8(edx + (-0x7BFFE114))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x7BFFE114)) = (uint8_t)(MEM8(edx + (-0x7BFFE114)) + LO8(edx)); /* 0x141EE6BB: add byte ptr [edx - 0x7bffe114], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6C1: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6C2: push ds */
    _flag_a = (uint32_t)(MEM8(esp + ebp * 8 + 0x1E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esp + ebp * 8 + 0x1E) = (uint8_t)(MEM8(esp + ebp * 8 + 0x1E) + HI8(ecx)); /* 0x141EE6C3: add byte ptr [esp + ebp*8 + 0x1e], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x14))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x14)) = (uint8_t)(MEM8(eax + (-0x14)) + LO8(edx)); /* 0x141EE6C7: add byte ptr [eax - 0x14], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE6CA: push ds */
    _flag_a = (uint32_t)(MEM8(edx + (-0x14))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x14)) = (uint8_t)(MEM8(edx + (-0x14)) + LO8(eax)); /* 0x141EE6CB: add byte ptr [edx - 0x14], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE6CE: push ds */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x141EE6CF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6D1: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6D2: push ds */
    _flag_a = (uint32_t)(MEM8(ebp + ebp * 8 + 0x1E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + ebp * 8 + 0x1E) = (uint8_t)(MEM8(ebp + ebp * 8 + 0x1E) + HI8(eax)); /* 0x141EE6D3: add byte ptr [ebp + ebp*8 + 0x1e], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x141EE6D7: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x141EE6D9: in al, dx */
    PUSH32(esp, _seg_ds); /* 0x141EE6DA: push ds */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + HI8(edx)); /* 0x141EE6DB: add dl, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_141EE6FD; /* 0x141EE6DD: jmp 0x141ee6fd */
L_141EE6FD:
    goto L_141EE71D; /* 0x141EE6FD: jmp 0x141ee71d */
L_141EE71D:
    void_lift_trap(0x141EE71Du, "ljmp 0x1e:0xeae2001e");
    if (1u) _cf = (((LO8(edx)) >> 0) & 1u); /* 0x141EE724: shr dl, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 1u); /* 0x141EE724: shr dl, 1 */
    PUSH32(esp, _seg_ds); /* 0x141EE726: push ds */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(eax)); /* 0x141EE727: add ah, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x141EE729u, "ljmp 0x1e:0xeab8001e");
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x141EE730: pushfd  */
    void_lift_trap(0x141EE731u, "ljmp 0x1e:0xec1c001e");
    _flag_a = (uint32_t)(HI8(ecx)) << 24; _flag_b = (uint32_t)(0x1Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_HI8(ecx, HI8(ecx) - 0x1Eu); /* 0x141EE738: sub ch, 0x1e */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE73B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x141EE73D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + ebp * 8)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + ebp * 8) = (uint8_t)(MEM8(edx + ebp * 8) + HI8(ecx)); /* 0x141EE73F: add byte ptr [edx + ebp*8], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE742: push ds */
    _flag_a = (uint32_t)(MEM8(edx + ebp * 8 + 0x1E)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + ebp * 8 + 0x1E) = (uint8_t)(MEM8(edx + ebp * 8 + 0x1E) + LO8(eax)); /* 0x141EE743: add byte ptr [edx + ebp*8 + 0x1e], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x16))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x16)) = (uint8_t)(MEM8(eax + (-0x16)) + LO8(ebx)); /* 0x141EE747: add byte ptr [eax - 0x16], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE74A: push ds */
    _flag_a = (uint32_t)(MEM8(edx + (-0x16))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x16)) = (uint8_t)(MEM8(edx + (-0x16)) + HI8(eax)); /* 0x141EE74B: add byte ptr [edx - 0x16], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE74E: push ds */
    _flag_a = (uint32_t)(MEM8(eax + (-0x16))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x16)) = (uint8_t)(MEM8(eax + (-0x16)) + HI8(edx)); /* 0x141EE74F: add byte ptr [eax - 0x16], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE752: push ds */
    _flag_a = (uint32_t)(MEM8(eax + (-0x16))) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x16)) = (uint8_t)(MEM8(eax + (-0x16)) + HI8(ebx)); /* 0x141EE753: add byte ptr [eax - 0x16], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_ds); /* 0x141EE756: push ds */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x141EE757: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x141EE759u, "ljmp 0x1e:0xea06001e");
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x141EE760: clc  */
    goto L_FE00E784; /* 0x141EE761: jmp 0xfe00e784 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_FE00E784: RECOMP_ITAIL(0xFE00E784u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_141EDB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB80u);

L_141EDB80:
    PUSH32(esp, 0x141F4040u); /* 0x141EDB80: push 0x141f4040 */
    RECOMP_ICALL(MEM32(0x14001038)); /* 0x141EDB85: call dword ptr [0x14001038] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x141EDB9Cu); /* 0x141EDB8B: push 0x141edb9c */
    RECOMP_CALL(sub_141ECA4F); /* 0x141EDB90: call 0x141eca4f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141EDB95: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141EDB96: ret  */
    RECOMP_REGS_OUT();
}

void sub_141ED1BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1BEu);

L_141ED1BE:
    { _itail_tgt = (uint32_t)(MEM32(0x14001178)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED1CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1CAu);

L_141ED1CA:
    { _itail_tgt = (uint32_t)(MEM32(0x1400117C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED1D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED1D6u);

L_141ED1D6:
    { _itail_tgt = (uint32_t)(MEM32(0x14001180)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED206u);

L_141ED206:
    { _itail_tgt = (uint32_t)(MEM32(0x14001190)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141ED21E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141ED21Eu);

L_141ED21E:
    { _itail_tgt = (uint32_t)(MEM32(0x14001198)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141EDB9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141EDB9Cu);

    goto L_141EDB9C;
L_141E6579:
    edi = edi; /* 0x141E6579: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E657B: push esi */
    esi = ecx; /* 0x141E657C: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x141E657E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E658B; /* 0x141E6581: je 0x141e658b */
L_141E6583:
    PUSH32(esp, MEM32(esi)); /* 0x141E6583: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x14001084)); /* 0x141E6585: call dword ptr [0x14001084] */
    RECOMP_FLAGS_IN();
L_141E658B:
    eax = esi + 0x4; /* 0x141E658B: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x141E658E: push eax */
    RECOMP_ICALL(MEM32(0x14001034)); /* 0x141E658F: call dword ptr [0x14001034] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x141E6595: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6596: ret  */
L_141EDB9C:
    ecx = 0x141F403Cu; /* 0x141EDB9C: mov ecx, 0x141f403c */
    RECOMP_BACKEDGE();
    goto L_141E6579; /* 0x141EDBA1: jmp 0x141e6579 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
