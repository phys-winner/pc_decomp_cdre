#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121BF4E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4E8u);

L_121BF4E8:
    { _itail_tgt = (uint32_t)(MEM32(0x120012A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF4F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF4F4u);

L_121BF4F4:
    { _itail_tgt = (uint32_t)(MEM32(0x120012A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF500u);

L_121BF500:
    { _itail_tgt = (uint32_t)(MEM32(0x120012A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF50C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF50Cu);

L_121BF50C:
    { _itail_tgt = (uint32_t)(MEM32(0x1200129C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF518(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF518u);

L_121BF518:
    { _itail_tgt = (uint32_t)(MEM32(0x12001298)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF524u);

L_121BF524:
    { _itail_tgt = (uint32_t)(MEM32(0x12001294)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF530u);

    goto L_121BF530;
L_121BED30:
    PUSH32(esp, ecx); /* 0x121BED30: push ecx */
    ecx = esp + 0x4; /* 0x121BED31: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121BED35: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BED37: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x121BED39: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x121BED3B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x121BED3D: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x121BED3F: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BED44:
    /* cmp ecx, eax */ /* 0x121BED44: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BED52; /* 0x121BED46: jb 0x121bed52 */
L_121BED48:
    eax = ecx; /* 0x121BED48: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x121BED4A: pop ecx */
    { uint32_t _tmp = esp; /* 0x121BED4B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x121BED4C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x121BED4E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BED51: ret  */
L_121BED52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x121BED52: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x121BED57: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121BED44; /* 0x121BED59: jmp 0x121bed44 */
L_121BF530:
    PUSH32(esp, ecx); /* 0x121BF530: push ecx */
    ecx = esp + 0x8; /* 0x121BF531: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121BF535: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x121BF537: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121BF53A: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BF53C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x121BF53E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x121BF540: pop ecx */
    RECOMP_BACKEDGE();
    goto L_121BED30; /* 0x121BF541: jmp 0x121bed30 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BF562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF562u);

L_121BF562:
    { _itail_tgt = (uint32_t)(MEM32(0x12001290)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF56E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF56Eu);

L_121BF56E:
    { _itail_tgt = (uint32_t)(MEM32(0x1200128C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF57A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF57Au);

L_121BF57A:
    { _itail_tgt = (uint32_t)(MEM32(0x12001288)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF586(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF586u);

L_121BF586:
    { _itail_tgt = (uint32_t)(MEM32(0x12001284)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF592u);

L_121BF592:
    { _itail_tgt = (uint32_t)(MEM32(0x12001280)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF59E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF59Eu);

L_121BF59E:
    { _itail_tgt = (uint32_t)(MEM32(0x1200127C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF5AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF5AAu);

L_121BF5AA:
    { _itail_tgt = (uint32_t)(MEM32(0x12001278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF5B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF5B6u);

L_121BF5B6:
    { _itail_tgt = (uint32_t)(MEM32(0x12001274)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF5C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF5C2u);

L_121BF5C2:
    { _itail_tgt = (uint32_t)(MEM32(0x12001270)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF5D0u);

L_121BF5D0:
    /* cmp LO8(ecx), 0x40u */ /* 0x121BF5D0: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_121BF5EA; /* 0x121BF5D3: jae 0x121bf5ea */
L_121BF5D5:
    /* cmp LO8(ecx), 0x20u */ /* 0x121BF5D5: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_121BF5E0; /* 0x121BF5D8: jae 0x121bf5e0 */
L_121BF5DA:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121BF5DA: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121BF5DD: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x121BF5DD: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF5DF: ret  */
L_121BF5E0:
    eax = edx; /* 0x121BF5E0: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BF5E2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x121BF5E4: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x121BF5E7: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x121BF5E7: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF5E9: ret  */
L_121BF5EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BF5EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BF5EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF5EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF5F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF5F4u);

L_121BF5F4:
    { _itail_tgt = (uint32_t)(MEM32(0x1200126C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF600u);

L_121BF600:
    { _itail_tgt = (uint32_t)(MEM32(0x12001268)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF60C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF60Cu);

L_121BF60C:
    { _itail_tgt = (uint32_t)(MEM32(0x12001264)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF618u);

L_121BF618:
    { _itail_tgt = (uint32_t)(MEM32(0x12001260)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF624u);

L_121BF624:
    { _itail_tgt = (uint32_t)(MEM32(0x1200125C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF630u);

L_121BF630:
    { _itail_tgt = (uint32_t)(MEM32(0x12001258)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF63Cu);

L_121BF63C:
    { _itail_tgt = (uint32_t)(MEM32(0x12001254)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF648u);

L_121BF648:
    { _itail_tgt = (uint32_t)(MEM32(0x12001250)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF654u);

L_121BF654:
    { _itail_tgt = (uint32_t)(MEM32(0x1200124C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF660u);

L_121BF660:
    { _itail_tgt = (uint32_t)(MEM32(0x12001248)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF66B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF66Bu);

L_121BF66B:
    PUSH32(esp, 0x14u); /* 0x121BF66B: push 0x14 */
    PUSH32(esp, 0x121C5A00u); /* 0x121BF66D: push 0x121c5a00 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121BF672: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x121BF677: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x121EF0A4); /* 0x121BF67B: mov eax, dword ptr [0x121ef0a4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BF680: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121BF683: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BF694; /* 0x121BF686: jne 0x121bf694 */
L_121BF688:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF688: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x120011E0)); /* 0x121BF68B: call dword ptr [0x120011e0] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BF691: pop ecx */
    goto L_121BF6E8; /* 0x121BF692: jmp 0x121bf6e8 */
L_121BF694:
    PUSH32(esp, 8); /* 0x121BF694: push 8 */
    RECOMP_CALL(sub_121C0D28); /* 0x121BF696: call 0x121c0d28 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BF69B: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121BF69C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x121EF0A4); /* 0x121BF6A0: mov eax, dword ptr [0x121ef0a4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BF6A5: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(0x121EF0A0); /* 0x121BF6A8: mov eax, dword ptr [0x121ef0a0] */
    MEM32(ebp + (-0x20)) = eax; /* 0x121BF6AD: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x121BF6B0: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121BF6B3: push eax */
    eax = ebp + (-0x1C); /* 0x121BF6B4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x121BF6B7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF6B8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121C0D1C); /* 0x121BF6BB: call 0x121c0d1c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BF6C0: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x121BF6C3: mov esi, eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x121BF6C5: mov dword ptr [ebp - 0x24], esi */
    ecx = MEM32(ebp + (-0x1C)); /* 0x121BF6C8: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(0x121EF0A4) = ecx; /* 0x121BF6CB: mov dword ptr [0x121ef0a4], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x121BF6D1: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(0x121EF0A0) = ecx; /* 0x121BF6D4: mov dword ptr [0x121ef0a0], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BF6DA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BF6F1); /* 0x121BF6E1: call 0x121bf6f1 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x121BF6E6: mov eax, esi */
L_121BF6E8:
    RECOMP_CALL(sub_121BF3E5); /* 0x121BF6E8: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF6ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF6F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF6F1u);

L_121BF6F1:
    PUSH32(esp, 8); /* 0x121BF6F1: push 8 */
    RECOMP_CALL(sub_121C0D10); /* 0x121BF6F3: call 0x121c0d10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BF6F8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF6F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF6FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF6FFu);

L_121BF6FF:
    edi = edi; /* 0x121BF6FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BF701: push ebp */
    ebp = esp; /* 0x121BF702: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121BF704: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF66B); /* 0x121BF707: call 0x121bf66b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x121BF70C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121BF70E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x121BF710: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x121BF712: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121BF713: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x121BF714: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF715: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF71C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF71Cu);

L_121BF71C:
    { _itail_tgt = (uint32_t)(MEM32(0x12001244)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF728u);

L_121BF728:
    { _itail_tgt = (uint32_t)(MEM32(0x12001240)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF740u);

L_121BF740:
    eax = MEM32(esp + 0x8); /* 0x121BF740: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x121BF744: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121BF748: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x121BF74A: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF759; /* 0x121BF74E: jne 0x121bf759 */
L_121BF750:
    eax = MEM32(esp + 0x4); /* 0x121BF750: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x121BF754: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BF756: ret 0x10 */
L_121BF759:
    PUSH32(esp, ebx); /* 0x121BF759: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x121BF75A: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x121BF75C: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x121BF75E: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x121BF762: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x121BF766: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x121BF768: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x121BF76C: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x121BF76E: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x121BF770: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BF771: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BF779(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF779u);

L_121BF779:
    PUSH32(esp, eax); /* 0x121BF779: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x121BF77A: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x121BF781: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x121BF785: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121BF789: push ebx */
    PUSH32(esp, esi); /* 0x121BF78A: push esi */
    PUSH32(esp, edi); /* 0x121BF78B: push edi */
    MEM32(eax) = ebp; /* 0x121BF78C: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x121BF78E: mov ebp, eax */
    eax = MEM32(0x121D9590); /* 0x121BF790: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BF795: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121BF797: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x121BF798: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x121BF79B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x121BF7A2: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x121BF7A5: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF7AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF7B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF7B1u);

L_121BF7B1:
    PUSH32(esp, eax); /* 0x121BF7B1: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x121BF7B2: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x121BF7B9: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x121BF7BD: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121BF7C1: push ebx */
    PUSH32(esp, esi); /* 0x121BF7C2: push esi */
    PUSH32(esp, edi); /* 0x121BF7C3: push edi */
    MEM32(eax) = ebp; /* 0x121BF7C4: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x121BF7C6: mov ebp, eax */
    eax = MEM32(0x121D9590); /* 0x121BF7C8: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BF7CD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121BF7CF: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x121BF7D0: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x121BF7D3: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x121BF7D6: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x121BF7DD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x121BF7E0: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF7E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF7EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF7ECu);

L_121BF7EC:
    ecx = MEM32(ebp + (-0xC)); /* 0x121BF7EC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x121BF7EF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x121BF7F6: pop ecx */
    edi = POP32_VAL(esp); /* 0x121BF7F7: pop edi */
    edi = POP32_VAL(esp); /* 0x121BF7F8: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF7F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF7FA: pop ebx */
    esp = ebp; /* 0x121BF7FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BF7FD: pop ebp */
    PUSH32(esp, ecx); /* 0x121BF7FE: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF7FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF805(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF805u);

    goto L_121BF805;
L_121BF7EC:
    ecx = MEM32(ebp + (-0xC)); /* 0x121BF7EC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x121BF7EF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x121BF7F6: pop ecx */
    edi = POP32_VAL(esp); /* 0x121BF7F7: pop edi */
    edi = POP32_VAL(esp); /* 0x121BF7F8: pop edi */
    esi = POP32_VAL(esp); /* 0x121BF7F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BF7FA: pop ebx */
    esp = ebp; /* 0x121BF7FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BF7FD: pop ebp */
    PUSH32(esp, ecx); /* 0x121BF7FE: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF7FF: ret  */
L_121BF805:
    ecx = MEM32(ebp + (-0x10)); /* 0x121BF805: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BF808: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121BF80A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_121BF7EC; /* 0x121BF80F: jmp 0x121bf7ec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121BF819(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF819u);

L_121BF819:
    PUSH32(esp, 0x14u); /* 0x121BF819: push 0x14 */
    PUSH32(esp, 0x121C5A20u); /* 0x121BF81B: push 0x121c5a20 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121BF820: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121BF825: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BF829:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x121BF829: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121BF869; /* 0x121BF82C: js 0x121bf869 */
L_121BF82E:
    ecx = MEM32(ebp + 0x8); /* 0x121BF82E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x121BF831: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x121BF834: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x121BF837: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_121BF829; /* 0x121BF83A: jmp 0x121bf829 */
L_121BF869:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BF869: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BF3E5); /* 0x121BF870: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BF875: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BF87D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF87Du);

L_121BF87D:
    PUSH32(esp, 0xCu); /* 0x121BF87D: push 0xc */
    PUSH32(esp, 0x121C5A40u); /* 0x121BF87F: push 0x121c5a40 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121BF884: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x121BF889: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x121BF88D: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x121BF890: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x121BF892: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x121BF895: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x121BF898: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x121BF89B: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x121BF89D: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121BF8A0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BF8A4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BF8A4: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = edi; /* 0x121BF8A5: mov dword ptr [ebp + 0x10], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121BF8B6; /* 0x121BF8A8: js 0x121bf8b6 */
L_121BF8AA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x121BF8AA: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x121BF8AC: mov dword ptr [ebp + 8], esi */
    ecx = esi; /* 0x121BF8AF: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x121BF8B1: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_121BF8A4; /* 0x121BF8B4: jmp 0x121bf8a4 */
L_121BF8B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BF8B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BF8B8: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BF8B9: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BF8BC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BF8DC); /* 0x121BF8C3: call 0x121bf8dc */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_121BF3E5); /* 0x121BF8C8: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BF8CD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BF8DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF8DCu);

L_121BF8DC:
    /* test eax, eax */ /* 0x121BF8DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF8EB; /* 0x121BF8DE: jne 0x121bf8eb */
L_121BF8E0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121BF8E0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x121BF8E3: push edi */
    PUSH32(esp, ebx); /* 0x121BF8E4: push ebx */
    PUSH32(esp, esi); /* 0x121BF8E5: push esi */
    RECOMP_CALL(sub_121BF819); /* 0x121BF8E6: call 0x121bf819 */
    RECOMP_FLAGS_IN();
L_121BF8EB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF8EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF8F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF8F1u);

L_121BF8F1:
    PUSH32(esp, 0x10u); /* 0x121BF8F1: push 0x10 */
    PUSH32(esp, 0x121C5A60u); /* 0x121BF8F3: push 0x121c5a60 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121BF8F8: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BF8FD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x121BF8FF: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x121BF902: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x121BF905: mov dword ptr [ebp - 0x20], esi */
    ebx = MEM32(ebp + 0xC); /* 0x121BF908: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x121BF90B: mov edi, dword ptr [ebp + 8] */
L_121BF90E:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x121BF90E: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_121BF923; /* 0x121BF911: jge 0x121bf923 */
L_121BF913:
    ecx = edi; /* 0x121BF913: mov ecx, edi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x121BF915: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x121BF918: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x121BF91A: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121BF91D: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = esi; /* 0x121BF91E: mov dword ptr [ebp - 0x20], esi */
    RECOMP_BACKEDGE();
    goto L_121BF90E; /* 0x121BF921: jmp 0x121bf90e */
L_121BF923:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BF923: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BF925: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x121BF926: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BF929: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BF949); /* 0x121BF930: call 0x121bf949 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_121BF3E5); /* 0x121BF935: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121BF93A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121BF949(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF949u);

L_121BF949:
    /* test eax, eax */ /* 0x121BF949: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BF958; /* 0x121BF94B: jne 0x121bf958 */
L_121BF94D:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x121BF94D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x121BF950: push esi */
    PUSH32(esp, ebx); /* 0x121BF951: push ebx */
    PUSH32(esp, edi); /* 0x121BF952: push edi */
    RECOMP_CALL(sub_121BF819); /* 0x121BF953: call 0x121bf819 */
    RECOMP_FLAGS_IN();
L_121BF958:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BF958: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BF95E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF95Eu);

L_121BF95E:
    { _itail_tgt = (uint32_t)(MEM32(0x1200123C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF96A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF96Au);

L_121BF96A:
    { _itail_tgt = (uint32_t)(MEM32(0x12001238)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF976(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF976u);

L_121BF976:
    { _itail_tgt = (uint32_t)(MEM32(0x12001234)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF982(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF982u);

L_121BF982:
    { _itail_tgt = (uint32_t)(MEM32(0x12001230)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF98E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF98Eu);

L_121BF98E:
    { _itail_tgt = (uint32_t)(MEM32(0x1200122C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF99A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF99Au);

L_121BF99A:
    { _itail_tgt = (uint32_t)(MEM32(0x12001228)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9A6u);

L_121BF9A6:
    { _itail_tgt = (uint32_t)(MEM32(0x12001224)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9B2u);

L_121BF9B2:
    { _itail_tgt = (uint32_t)(MEM32(0x12001220)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9BEu);

L_121BF9BE:
    { _itail_tgt = (uint32_t)(MEM32(0x1200121C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9CAu);

L_121BF9CA:
    { _itail_tgt = (uint32_t)(MEM32(0x12001218)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9D6u);

L_121BF9D6:
    { _itail_tgt = (uint32_t)(MEM32(0x12001214)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9E2u);

L_121BF9E2:
    { _itail_tgt = (uint32_t)(MEM32(0x12001210)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9EEu);

L_121BF9EE:
    { _itail_tgt = (uint32_t)(MEM32(0x1200120C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BF9FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BF9FAu);

L_121BF9FA:
    { _itail_tgt = (uint32_t)(MEM32(0x12001208)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFA06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA06u);

L_121BFA06:
    { _itail_tgt = (uint32_t)(MEM32(0x12001204)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFA12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA12u);

L_121BFA12:
    { _itail_tgt = (uint32_t)(MEM32(0x12001200)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFA1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA1Eu);

L_121BFA1E:
    { _itail_tgt = (uint32_t)(MEM32(0x120011FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFA2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA2Au);

L_121BFA2A:
    { _itail_tgt = (uint32_t)(MEM32(0x120011F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA40u);

L_121BFA40:
    edi = edi; /* 0x121BFA40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFA42: push ebp */
    ebp = esp; /* 0x121BFA43: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BFA45: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM16(eax), 0x5A4Du */ /* 0x121BFA48: cmp word ptr [eax], 0x5a4d */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0x5A4Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BFA53; /* 0x121BFA4D: je 0x121bfa53 */
L_121BFA4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFA4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x121BFA51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFA52: ret  */
L_121BFA53:
    ecx = MEM32(eax + 0x3C); /* 0x121BFA53: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121BFA56: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFA58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x121BFA5A: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFA6B; /* 0x121BFA60: jne 0x121bfa6b */
L_121BFA62:
    /* cmp MEM16(ecx + 0x18), 0x10Bu */ /* 0x121BFA62: cmp word ptr [ecx + 0x18], 0x10b */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(0x10Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121BFA68: sete al */
L_121BFA6B:
    ebp = POP32_VAL(esp); /* 0x121BFA6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFA6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFA80u);

L_121BFA80:
    edi = edi; /* 0x121BFA80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFA82: push ebp */
    ebp = esp; /* 0x121BFA83: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121BFA85: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x3C); /* 0x121BFA88: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121BFA8B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x121BFA8D: movzx eax, word ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x121BFA91: push ebx */
    ebx = (uint32_t)MEM16(ecx + 0x6); /* 0x121BFA92: movzx ebx, word ptr [ecx + 6] */
    PUSH32(esp, esi); /* 0x121BFA96: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BFA97: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121BFA99: push edi */
    edx = eax + ecx + 0x18; /* 0x121BFA9A: lea edx, [eax + ecx + 0x18] */
    /* test ebx, ebx */ /* 0x121BFA9E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFABD; /* 0x121BFAA0: je 0x121bfabd */
L_121BFAA2:
    edi = MEM32(ebp + 0xC); /* 0x121BFAA2: mov edi, dword ptr [ebp + 0xc] */
L_121BFAA5:
    ecx = MEM32(edx + 0xC); /* 0x121BFAA5: mov ecx, dword ptr [edx + 0xc] */
    /* cmp edi, ecx */ /* 0x121BFAA8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BFAB5; /* 0x121BFAAA: jb 0x121bfab5 */
L_121BFAAC:
    eax = MEM32(edx + 0x8); /* 0x121BFAAC: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121BFAAF: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x121BFAB1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121BFAC4; /* 0x121BFAB3: jb 0x121bfac4 */
L_121BFAB5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121BFAB5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x28u; /* 0x121BFAB6: add edx, 0x28 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x121BFAB9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121BFAA5; /* 0x121BFABB: jb 0x121bfaa5 */
L_121BFABD:
    edi = POP32_VAL(esp); /* 0x121BFABD: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFABE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFABF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121BFAC1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BFAC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFAC3: ret  */
L_121BFAC4:
    edi = POP32_VAL(esp); /* 0x121BFAC4: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFAC5: pop esi */
    eax = edx; /* 0x121BFAC6: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x121BFAC8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121BFAC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFACA: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFAD0u);

L_121BFAD0:
    edi = edi; /* 0x121BFAD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFAD2: push ebp */
    ebp = esp; /* 0x121BFAD3: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x121BFAD5: push -2 */
    PUSH32(esp, 0x121C5A80u); /* 0x121BFAD7: push 0x121c5a80 */
    PUSH32(esp, 0x121BF3FEu); /* 0x121BFADC: push 0x121bf3fe */
    eax = MEM32(FS_BASE + (0)); /* 0x121BFAE1: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x121BFAE7: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121BFAE8: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121BFAEB: push ebx */
    PUSH32(esp, esi); /* 0x121BFAEC: push esi */
    PUSH32(esp, edi); /* 0x121BFAED: push edi */
    eax = MEM32(0x121D9590); /* 0x121BFAEE: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x121BFAF3: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BFAF6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121BFAF8: push eax */
    eax = ebp + (-0x10); /* 0x121BFAF9: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x121BFAFC: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x121BFB02: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x121BFB05: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x12000000u); /* 0x121BFB0C: push 0x12000000 */
    RECOMP_CALL(sub_121BFA40); /* 0x121BFB11: call 0x121bfa40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121BFB16: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121BFB19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFB71; /* 0x121BFB1B: je 0x121bfb71 */
L_121BFB1D:
    eax = MEM32(ebp + 0x8); /* 0x121BFB1D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x12000000u; /* 0x121BFB20: sub eax, 0x12000000 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x121BFB25: push eax */
    PUSH32(esp, 0x12000000u); /* 0x121BFB26: push 0x12000000 */
    RECOMP_CALL(sub_121BFA80); /* 0x121BFB2B: call 0x121bfa80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x121BFB30: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121BFB33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFB71; /* 0x121BFB35: je 0x121bfb71 */
L_121BFB37:
    eax = MEM32(eax + 0x24); /* 0x121BFB37: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x121BFB3A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x121BFB3A: shr eax, 0x1f */
    eax = ~eax; /* 0x121BFB3D: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x121BFB3F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BFB42: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x121BFB49: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x121BFB4C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x121BFB53: pop ecx */
    edi = POP32_VAL(esp); /* 0x121BFB54: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFB55: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BFB56: pop ebx */
    esp = ebp; /* 0x121BFB57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BFB59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFB5A: ret  */
L_121BFB71:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121BFB71: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFB78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x121BFB7A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x121BFB7D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x121BFB84: pop ecx */
    edi = POP32_VAL(esp); /* 0x121BFB85: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFB86: pop esi */
    ebx = POP32_VAL(esp); /* 0x121BFB87: pop ebx */
    esp = ebp; /* 0x121BFB88: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121BFB8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFB8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFB92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFB92u);

L_121BFB92:
    { _itail_tgt = (uint32_t)(MEM32(0x120011F4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFB9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFB9Eu);

L_121BFB9E:
    { _itail_tgt = (uint32_t)(MEM32(0x120011F0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121BFBA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFBA9u);

L_121BFBA9:
    edi = edi; /* 0x121BFBA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFBAB: push ebp */
    ebp = esp; /* 0x121BFBAC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x121BFBAE: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BFBB1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x121BFBB6: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x121BFBBA: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121BFBBE: push esi */
    PUSH32(esp, edi); /* 0x121BFBBF: push edi */
    edi = 0xBB40E64Eu; /* 0x121BFBC0: mov edi, 0xbb40e64e */
    esi = 0xFFFF0000u; /* 0x121BFBC5: mov esi, 0xffff0000 */
    /* cmp eax, edi */ /* 0x121BFBCA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BFBDB; /* 0x121BFBCC: je 0x121bfbdb */
L_121BFBCE:
    /* test esi, eax */ /* 0x121BFBCE: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFBDB; /* 0x121BFBD0: je 0x121bfbdb */
L_121BFBD2:
    eax = ~eax; /* 0x121BFBD2: not eax */
    MEM32(0x121D9594) = eax; /* 0x121BFBD4: mov dword ptr [0x121d9594], eax */
    goto L_121BFC45; /* 0x121BFBD9: jmp 0x121bfc45 */
L_121BFBDB:
    eax = ebp + (-0xC); /* 0x121BFBDB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x121BFBDE: push eax */
    RECOMP_ICALL(MEM32(0x12001190)); /* 0x121BFBDF: call dword ptr [0x12001190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x121BFBE5: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0xC))));
    eax = eax ^ MEM32(ebp + (-0xC)); /* 0x121BFBE8: xor eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BFBEB: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x1200118C)); /* 0x121BFBEE: call dword ptr [0x1200118c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x121BFBF4: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x12001188)); /* 0x121BFBF7: call dword ptr [0x12001188] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x121BFBFD: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x12001184)); /* 0x121BFC00: call dword ptr [0x12001184] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x4))));
    eax = eax ^ MEM32(ebp + (-0x4)); /* 0x121BFC06: xor eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4); /* 0x121BFC09: lea ecx, [ebp - 4] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x121BFC0C: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BFC0E: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x14); /* 0x121BFC11: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x121BFC14: push eax */
    RECOMP_ICALL(MEM32(0x12001180)); /* 0x121BFC15: call dword ptr [0x12001180] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x121BFC1B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x14))));
    eax = eax ^ MEM32(ebp + (-0x14)); /* 0x121BFC1E: xor eax, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x121BFC21: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121BFC24: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x121BFC26: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BFC32; /* 0x121BFC28: je 0x121bfc32 */
L_121BFC2A:
    /* test MEM32(0x121D9590), esi */ /* 0x121BFC2A: test dword ptr [0x121d9590], esi */
    _flag_a = (uint32_t)(MEM32(0x121D9590)); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFC37; /* 0x121BFC30: jne 0x121bfc37 */
L_121BFC32:
    ecx = 0xBB40E64Fu; /* 0x121BFC32: mov ecx, 0xbb40e64f */
L_121BFC37:
    MEM32(0x121D9590) = ecx; /* 0x121BFC37: mov dword ptr [0x121d9590], ecx */
    ecx = ~ecx; /* 0x121BFC3D: not ecx */
    MEM32(0x121D9594) = ecx; /* 0x121BFC3F: mov dword ptr [0x121d9594], ecx */
L_121BFC45:
    edi = POP32_VAL(esp); /* 0x121BFC45: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFC46: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BFC47: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFC48: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFC4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFC4Eu);

L_121BFC4E:
    edi = edi; /* 0x121BFC4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFC50: push ebp */
    ebp = esp; /* 0x121BFC51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x121BFC53: sub esp, 0x328 */
    _flag_k = FK_CMP;
    MEM32(0x121EEE78) = eax; /* 0x121BFC59: mov dword ptr [0x121eee78], eax */
    MEM32(0x121EEE74) = ecx; /* 0x121BFC5E: mov dword ptr [0x121eee74], ecx */
    MEM32(0x121EEE70) = edx; /* 0x121BFC64: mov dword ptr [0x121eee70], edx */
    MEM32(0x121EEE6C) = ebx; /* 0x121BFC6A: mov dword ptr [0x121eee6c], ebx */
    MEM32(0x121EEE68) = esi; /* 0x121BFC70: mov dword ptr [0x121eee68], esi */
    MEM32(0x121EEE64) = edi; /* 0x121BFC76: mov dword ptr [0x121eee64], edi */
    MEM16(0x121EEE90) = (uint16_t)(_seg_ss); /* 0x121BFC7C: mov word ptr [0x121eee90], ss */
    MEM16(0x121EEE84) = (uint16_t)(_seg_cs); /* 0x121BFC83: mov word ptr [0x121eee84], cs */
    MEM16(0x121EEE60) = (uint16_t)(_seg_ds); /* 0x121BFC8A: mov word ptr [0x121eee60], ds */
    MEM16(0x121EEE5C) = (uint16_t)(_seg_es); /* 0x121BFC91: mov word ptr [0x121eee5c], es */
    MEM16(0x121EEE58) = (uint16_t)(_seg_fs); /* 0x121BFC98: mov word ptr [0x121eee58], fs */
    MEM16(0x121EEE54) = (uint16_t)(_seg_gs); /* 0x121BFC9F: mov word ptr [0x121eee54], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121BFCA6: pushfd  */
    POP32(esp, MEM32(0x121EEE88)); /* 0x121BFCA7: pop dword ptr [0x121eee88] */
    eax = MEM32(ebp); /* 0x121BFCAD: mov eax, dword ptr [ebp] */
    MEM32(0x121EEE7C) = eax; /* 0x121BFCB0: mov dword ptr [0x121eee7c], eax */
    eax = MEM32(ebp + 0x4); /* 0x121BFCB5: mov eax, dword ptr [ebp + 4] */
    MEM32(0x121EEE80) = eax; /* 0x121BFCB8: mov dword ptr [0x121eee80], eax */
    eax = ebp + 0x8; /* 0x121BFCBD: lea eax, [ebp + 8] */
    MEM32(0x121EEE8C) = eax; /* 0x121BFCC0: mov dword ptr [0x121eee8c], eax */
    eax = MEM32(ebp + (-0x320)); /* 0x121BFCC5: mov eax, dword ptr [ebp - 0x320] */
    MEM32(0x121EEDC8) = 0x00010001u; /* 0x121BFCCB: mov dword ptr [0x121eedc8], 0x10001 */
    eax = MEM32(0x121EEE80); /* 0x121BFCD5: mov eax, dword ptr [0x121eee80] */
    MEM32(0x121EED84) = eax; /* 0x121BFCDA: mov dword ptr [0x121eed84], eax */
    MEM32(0x121EED78) = 0xC0000409u; /* 0x121BFCDF: mov dword ptr [0x121eed78], 0xc0000409 */
    MEM32(0x121EED7C) = 1; /* 0x121BFCE9: mov dword ptr [0x121eed7c], 1 */
    eax = MEM32(0x121D9590); /* 0x121BFCF3: mov eax, dword ptr [0x121d9590] */
    MEM32(ebp + (-0x328)) = eax; /* 0x121BFCF8: mov dword ptr [ebp - 0x328], eax */
    eax = MEM32(0x121D9594); /* 0x121BFCFE: mov eax, dword ptr [0x121d9594] */
    MEM32(ebp + (-0x324)) = eax; /* 0x121BFD03: mov dword ptr [ebp - 0x324], eax */
    PUSH32(esp, 0); /* 0x121BFD09: push 0 */
    RECOMP_ICALL(MEM32(0x120011A0)); /* 0x121BFD0B: call dword ptr [0x120011a0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12018298u); /* 0x121BFD11: push 0x12018298 */
    RECOMP_ICALL(MEM32(0x1200119C)); /* 0x121BFD16: call dword ptr [0x1200119c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xC0000409u); /* 0x121BFD1C: push 0xc0000409 */
    RECOMP_ICALL(MEM32(0x12001198)); /* 0x121BFD21: call dword ptr [0x12001198] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x121BFD27: push eax */
    RECOMP_ICALL(MEM32(0x12001194)); /* 0x121BFD28: call dword ptr [0x12001194] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BFD2E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFD2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFD40u);

L_121BFD40:
    PUSH32(esp, esi); /* 0x121BFD40: push esi */
    eax = MEM32(esp + 0x14); /* 0x121BFD41: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x121BFD45: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFD71; /* 0x121BFD47: jne 0x121bfd71 */
L_121BFD49:
    ecx = MEM32(esp + 0x10); /* 0x121BFD49: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x121BFD4D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BFD51: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x121BFD53: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x121BFD55: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x121BFD57: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x121BFD5B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x121BFD5D: mov esi, eax */
    eax = ebx; /* 0x121BFD5F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x121BFD61: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x121BFD65: mov ecx, eax */
    eax = esi; /* 0x121BFD67: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x121BFD69: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x121BFD6D: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_121BFDB8; /* 0x121BFD6F: jmp 0x121bfdb8 */
L_121BFD71:
    ecx = eax; /* 0x121BFD71: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x121BFD73: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x121BFD77: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x121BFD7B: mov eax, dword ptr [esp + 8] */
L_121BFD7F:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x121BFD7F: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x121BFD7F: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x121BFD81: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x121BFD83: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x121BFD83: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x121BFD85: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x121BFD87: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFD7F; /* 0x121BFD89: jne 0x121bfd7f */
L_121BFD8B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x121BFD8B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x121BFD8D: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x121BFD8F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x121BFD93: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x121BFD95: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x121BFD99: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x121BFD9B: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_121BFDAD; /* 0x121BFD9D: jb 0x121bfdad */
L_121BFD9F:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x121BFD9F: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121BFDAD; /* 0x121BFDA3: ja 0x121bfdad */
L_121BFDA5:
    if (CMP_B(_flag_a, _flag_b)) goto L_121BFDB6; /* 0x121BFDA5: jb 0x121bfdb6 */
L_121BFDA7:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x121BFDA7: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121BFDB6; /* 0x121BFDAB: jbe 0x121bfdb6 */
L_121BFDAD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121BFDAD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x121BFDAE: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BFDB2: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_121BFDB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BFDB6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121BFDB8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x121BFDB8: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BFDBC: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x121BFDC0: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x121BFDC2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121BFDC4: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x121BFDC7: mov ecx, edx */
    edx = ebx; /* 0x121BFDC9: mov edx, ebx */
    ebx = ecx; /* 0x121BFDCB: mov ebx, ecx */
    ecx = eax; /* 0x121BFDCD: mov ecx, eax */
    eax = esi; /* 0x121BFDCF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121BFDD1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121BFDD2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121BFDDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFDDAu);

L_121BFDDA:
    /* test MEM8(ecx + 0xC), 0x40u */ /* 0x121BFDDA: test byte ptr [ecx + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFDE6; /* 0x121BFDDE: je 0x121bfde6 */
L_121BFDE0:
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x121BFDE0: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121BFE0A; /* 0x121BFDE4: je 0x121bfe0a */
L_121BFDE6:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121BFDE6: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121BFDF6; /* 0x121BFDE9: js 0x121bfdf6 */
L_121BFDEB:
    eax = MEM32(ecx); /* 0x121BFDEB: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x121BFDED: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121BFDEF: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(edx); /* 0x121BFDF1: movzx eax, dl */
    goto L_121BFE02; /* 0x121BFDF4: jmp 0x121bfe02 */
L_121BFDF6:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x121BFDF6: movsx eax, dl */
    PUSH32(esp, ecx); /* 0x121BFDF9: push ecx */
    PUSH32(esp, eax); /* 0x121BFDFA: push eax */
    RECOMP_CALL(sub_121C0D33); /* 0x121BFDFB: call 0x121c0d33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BFE00: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121BFE01: pop ecx */
L_121BFE02:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121BFE02: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFE0A; /* 0x121BFE05: jne 0x121bfe0a */
L_121BFE07:
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x121BFE07: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFE09: ret  */
L_121BFE0A:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x121BFE0A: inc dword ptr [esi] */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFE0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFE12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFE12u);

L_121BFE12:
    edi = edi; /* 0x121BFE12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFE14: push ebp */
    ebp = esp; /* 0x121BFE15: mov ebp, esp */
    /* test MEM8(ebx + 0xC), 0x40u */ /* 0x121BFE17: test byte ptr [ebx + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x121BFE1B: push esi */
    PUSH32(esp, edi); /* 0x121BFE1C: push edi */
    esi = eax; /* 0x121BFE1D: mov esi, eax */
    edi = ecx; /* 0x121BFE1F: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFE2D; /* 0x121BFE21: je 0x121bfe2d */
L_121BFE23:
    /* cmp MEM32(ebx + 0x8), 0 */ /* 0x121BFE23: cmp dword ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFE2D; /* 0x121BFE27: jne 0x121bfe2d */
L_121BFE29:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + edi; /* 0x121BFE29: add dword ptr [esi], edi */
    _flag_k = FK_ADD;
    goto L_121BFE65; /* 0x121BFE2B: jmp 0x121bfe65 */
L_121BFE2D:
    /* test edi, edi */ /* 0x121BFE2D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121BFE65; /* 0x121BFE2F: jle 0x121bfe65 */
L_121BFE31:
    eax = MEM32(ebp + 0x8); /* 0x121BFE31: mov eax, dword ptr [ebp + 8] */
L_121BFE34:
    SET_LO8(edx, MEM8(eax)); /* 0x121BFE34: mov dl, byte ptr [eax] */
    ecx = ebx; /* 0x121BFE36: mov ecx, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121BFE38: dec edi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_121BFDDA); /* 0x121BFE39: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121BFE3E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BFE41: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x121BFE42: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x121BFE45: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFE61; /* 0x121BFE48: jne 0x121bfe61 */
L_121BFE4A:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121BFE4A: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x2Au */ /* 0x121BFE50: cmp dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFE65; /* 0x121BFE53: jne 0x121bfe65 */
L_121BFE55:
    ecx = ebx; /* 0x121BFE55: mov ecx, ebx */
    SET_LO8(edx, 0x3Fu); /* 0x121BFE57: mov dl, 0x3f */
    RECOMP_CALL(sub_121BFDDA); /* 0x121BFE59: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121BFE5E: mov eax, dword ptr [ebp + 8] */
L_121BFE61:
    /* test edi, edi */ /* 0x121BFE61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121BFE34; /* 0x121BFE63: jg 0x121bfe34 */
L_121BFE65:
    edi = POP32_VAL(esp); /* 0x121BFE65: pop edi */
    esi = POP32_VAL(esp); /* 0x121BFE66: pop esi */
    ebp = POP32_VAL(esp); /* 0x121BFE67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFE68: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFE6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFE6Eu);

L_121BFE6E:
    edi = edi; /* 0x121BFE6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFE70: push ebp */
    ebp = esp; /* 0x121BFE71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x121BFE73: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BFE76: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BFE7B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BFE7D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x121BFE80: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121BFE83: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121BFE84: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121BFE87: push edi */
    edi = MEM32(ebp + 0x10); /* 0x121BFE88: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x28)) = eax; /* 0x121BFE8B: mov dword ptr [ebp - 0x28], eax */
    /* test edi, edi */ /* 0x121BFE8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFE9D; /* 0x121BFE90: jne 0x121bfe9d */
L_121BFE92:
    PUSH32(esp, 0x16u); /* 0x121BFE92: push 0x16 */
    MEM8(esi) = (uint8_t)(0); /* 0x121BFE94: mov byte ptr [esi], 0 */
    eax = POP32_VAL(esp); /* 0x121BFE97: pop eax */
    goto L_121BFF20; /* 0x121BFE98: jmp 0x121bff20 */
L_121BFE9D:
    /* test MEM8(ebp + 0x1C), 1 */ /* 0x121BFE9D: test byte ptr [ebp + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, ebx); /* 0x121BFEA1: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x121BFEA2: mov ebx, dword ptr [ebp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFEAA; /* 0x121BFEA5: je 0x121bfeaa */
L_121BFEA7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x20u; /* 0x121BFEA7: sub ebx, 0x20 */
    _flag_k = FK_CMP;
L_121BFEAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFEAA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121BFEAC: inc eax */
    _flag_k = FK_INC;
    /* test MEM8(ebp + 0x1C), 0x80u */ /* 0x121BFEAD: test byte ptr [ebp + 0x1c], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x24)) = (uint8_t)(0x25u); /* 0x121BFEB1: mov byte ptr [ebp - 0x24], 0x25 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFEBE; /* 0x121BFEB5: je 0x121bfebe */
L_121BFEB7:
    PUSH32(esp, 2); /* 0x121BFEB7: push 2 */
    MEM8(ebp + (-0x23)) = (uint8_t)(0x23u); /* 0x121BFEB9: mov byte ptr [ebp - 0x23], 0x23 */
    eax = POP32_VAL(esp); /* 0x121BFEBD: pop eax */
L_121BFEBE:
    MEM8(ebp + eax + (-0x24)) = (uint8_t)(0x2Eu); /* 0x121BFEBE: mov byte ptr [ebp + eax - 0x24], 0x2e */
    PUSH32(esp, 0xAu); /* 0x121BFEC3: push 0xa */
    eax = ebp + eax + (-0x23); /* 0x121BFEC5: lea eax, [ebp + eax - 0x23] */
    PUSH32(esp, eax); /* 0x121BFEC9: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x121BFECA: push dword ptr [ebp + 0x18] */
    RECOMP_ICALL(MEM32(0x120011CC)); /* 0x121BFECD: call dword ptr [0x120011cc] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x121BFED3: lea ecx, [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121BFED6: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ecx + 0x1; /* 0x121BFED9: lea edx, [ecx + 1] */
L_121BFEDC:
    SET_LO8(eax, MEM8(ecx)); /* 0x121BFEDC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121BFEDE: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121BFEDF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFEDC; /* 0x121BFEE1: jne 0x121bfedc */
L_121BFEE3:
    eax = MEM32(ebp + (-0x28)); /* 0x121BFEE3: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121BFEE6: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM8(ebp + ecx + (-0x24)) = (uint8_t)(LO8(ebx)); /* 0x121BFEE8: mov byte ptr [ebp + ecx - 0x24], bl */
    PUSH32(esp, ecx); /* 0x121BFEEC: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121BFEED: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x121BFEEF: push ecx */
    MEM8(edi + esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x121BFEF0: mov byte ptr [edi + esi - 1], bl */
    fp_push(*(double*)ADDR(eax)); /* 0x121BFEF4: fld qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x121BFEF6: fstp qword ptr [esp] */
    eax = ebp + (-0x24); /* 0x121BFEF9: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x121BFEFC: push eax */
    PUSH32(esp, edi); /* 0x121BFEFD: push edi */
    PUSH32(esp, esi); /* 0x121BFEFE: push esi */
    MEM8(ebp + ecx + (-0x23)) = (uint8_t)(LO8(ebx)); /* 0x121BFEFF: mov byte ptr [ebp + ecx - 0x23], bl */
    RECOMP_ICALL(MEM32(0x120011D0)); /* 0x121BFF03: call dword ptr [0x120011d0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121BFF09: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + esi + (-0x1)), LO8(ebx) */ /* 0x121BFF0C: cmp byte ptr [edi + esi - 1], bl */
    _flag_a = (uint32_t)(MEM8(edi + esi + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121BFF1A; /* 0x121BFF10: jne 0x121bff1a */
L_121BFF12:
    /* test eax, eax */ /* 0x121BFF12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121BFF1A; /* 0x121BFF14: jle 0x121bff1a */
L_121BFF16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121BFF16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121BFF1F; /* 0x121BFF18: jmp 0x121bff1f */
L_121BFF1A:
    PUSH32(esp, 0x16u); /* 0x121BFF1A: push 0x16 */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x121BFF1C: mov byte ptr [esi], bl */
    eax = POP32_VAL(esp); /* 0x121BFF1E: pop eax */
L_121BFF1F:
    ebx = POP32_VAL(esp); /* 0x121BFF1F: pop ebx */
L_121BFF20:
    ecx = MEM32(ebp + (-0x4)); /* 0x121BFF20: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121BFF23: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121BFF24: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121BFF26: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121BFF27: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121BFF2C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121BFF2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_121BFF33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121BFF33u);

L_121BFF33:
    edi = edi; /* 0x121BFF33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121BFF35: push ebp */
    ebp = esp; /* 0x121BFF36: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x27Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x27Cu; /* 0x121BFF38: sub esp, 0x27c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121BFF3E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121BFF43: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121BFF45: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x121BFF48: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x121BFF4B: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x121BFF4E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121BFF4F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121BFF52: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121BFF53: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121BFF55: push edi */
    ecx = esi; /* 0x121BFF56: mov ecx, esi */
    edi = esi; /* 0x121BFF58: mov edi, esi */
    MEM32(ebp + (-0x240)) = eax; /* 0x121BFF5A: mov dword ptr [ebp - 0x240], eax */
    MEM32(ebp + (-0x224)) = ebx; /* 0x121BFF60: mov dword ptr [ebp - 0x224], ebx */
    MEM32(ebp + (-0x230)) = edx; /* 0x121BFF66: mov dword ptr [ebp - 0x230], edx */
    MEM32(ebp + (-0x264)) = esi; /* 0x121BFF6C: mov dword ptr [ebp - 0x264], esi */
    MEM32(ebp + (-0x220)) = ecx; /* 0x121BFF72: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x250)) = esi; /* 0x121BFF78: mov dword ptr [ebp - 0x250], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x121BFF7E: mov dword ptr [ebp - 0x234], edi */
    MEM32(ebp + (-0x244)) = esi; /* 0x121BFF84: mov dword ptr [ebp - 0x244], esi */
    MEM32(ebp + (-0x254)) = esi; /* 0x121BFF8A: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x258)) = esi; /* 0x121BFF90: mov dword ptr [ebp - 0x258], esi */
    MEM32(ebp + (-0x24C)) = esi; /* 0x121BFF96: mov dword ptr [ebp - 0x24c], esi */
    /* test eax, eax */ /* 0x121BFF9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFFB6; /* 0x121BFF9E: jne 0x121bffb6 */
L_121BFFA0:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121BFFA0: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121BFFA6: push esi */
    PUSH32(esp, esi); /* 0x121BFFA7: push esi */
    PUSH32(esp, esi); /* 0x121BFFA8: push esi */
    PUSH32(esp, esi); /* 0x121BFFA9: push esi */
    MEM32(eax) = 0x16u; /* 0x121BFFAA: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x121BFFB0: push esi */
    goto L_121C0B0D; /* 0x121BFFB1: jmp 0x121c0b0d */
L_121BFFB6:
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x121BFFB6: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121BFFC4; /* 0x121BFFBA: jne 0x121bffc4 */
L_121BFFBC:
    PUSH32(esp, eax); /* 0x121BFFBC: push eax */
    RECOMP_ICALL(MEM32(0x120011D4)); /* 0x121BFFBD: call dword ptr [0x120011d4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121BFFC3: pop ecx */
L_121BFFC4:
    /* test ebx, ebx */ /* 0x121BFFC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121BFFA0; /* 0x121BFFC6: je 0x121bffa0 */
L_121BFFC8:
    SET_LO8(ebx, MEM8(ebx)); /* 0x121BFFC8: mov bl, byte ptr [ebx] */
    eax = esi; /* 0x121BFFCA: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & eax; /* 0x121BFFCC: and dword ptr [ebp - 0x248], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121BFFD2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x25C)) = edx; /* 0x121BFFD4: mov dword ptr [ebp - 0x25c], edx */
    edx = MEM32(ebp + (-0x230)); /* 0x121BFFDA: mov edx, dword ptr [ebp - 0x230] */
    MEM32(ebp + (-0x238)) = eax; /* 0x121BFFE0: mov dword ptr [ebp - 0x238], eax */
    MEM32(ebp + (-0x228)) = esi; /* 0x121BFFE6: mov dword ptr [ebp - 0x228], esi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x121BFFEC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0B18; /* 0x121BFFEE: je 0x121c0b18 */
L_121BFFF4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x224))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x224)) = MEM32(ebp + (-0x224)) + 1; /* 0x121BFFF4: inc dword ptr [ebp - 0x224] */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x121BFFFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0AEB; /* 0x121BFFFC: js 0x121c0aeb */
L_121C0002:
    eax = ebx + (-0x20); /* 0x121C0002: lea eax, [ebx - 0x20] */
    /* cmp LO8(eax), 0x58u */ /* 0x121C0005: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_121C0018; /* 0x121C0007: ja 0x121c0018 */
L_121C0009:
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C0009: movsx eax, bl */
    eax = (uint32_t)MEM8(eax + 0x12018298); /* 0x121C000C: movzx eax, byte ptr [eax + 0x12018298] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x121C0013: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C001A; /* 0x121C0016: jmp 0x121c001a */
L_121C0018:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0018: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C001A:
    ecx = MEM32(ebp + (-0x248)); /* 0x121C001A: mov ecx, dword ptr [ebp - 0x248] */
    eax = (uint32_t)((int32_t)eax * (int32_t)9); /* 0x121C0020: imul eax, eax, 9 */
    ecx = (uint32_t)MEM8(eax + ecx + 0x120182B8); /* 0x121C0023: movzx ecx, byte ptr [eax + ecx + 0x120182b8] */
    eax = ecx; /* 0x121C002B: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x121C002D: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x121C002D: shr eax, 4 */
    MEM32(ebp + (-0x248)) = ecx; /* 0x121C0030: mov dword ptr [ebp - 0x248], ecx */
    ecx = MEM32(ebp + (-0x220)); /* 0x121C0036: mov ecx, dword ptr [ebp - 0x220] */
    MEM32(ebp + (-0x248)) = eax; /* 0x121C003C: mov dword ptr [ebp - 0x248], eax */
    /* cmp eax, 8 */ /* 0x121C0042: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C0045: je 0x121c0afa */
L_121C004B:
    /* cmp eax, 7 */ /* 0x121C004B: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121C0ACE; /* 0x121C004E: ja 0x121c0ace */
L_121C0054:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x121C0B27)); goto _ljump; }
L_121C005B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C005B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x121C005D: mov ecx, eax */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x121C005F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x254)) = eax; /* 0x121C0062: mov dword ptr [ebp - 0x254], eax */
    MEM32(ebp + (-0x258)) = eax; /* 0x121C0068: mov dword ptr [ebp - 0x258], eax */
    MEM32(ebp + (-0x250)) = eax; /* 0x121C006E: mov dword ptr [ebp - 0x250], eax */
    MEM32(ebp + (-0x244)) = eax; /* 0x121C0074: mov dword ptr [ebp - 0x244], eax */
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C007A: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x234)) = edi; /* 0x121C0080: mov dword ptr [ebp - 0x234], edi */
    MEM32(ebp + (-0x24C)) = eax; /* 0x121C0086: mov dword ptr [ebp - 0x24c], eax */
    goto L_121C0ACE; /* 0x121C008C: jmp 0x121c0ace */
L_121C0091:
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C0091: movsx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x121C0094: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C00DF; /* 0x121C0097: je 0x121c00df */
L_121C0099:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x121C0099: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C00D7; /* 0x121C009C: je 0x121c00d7 */
L_121C009E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x121C009E: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C00D2; /* 0x121C00A1: je 0x121c00d2 */
L_121C00A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C00A3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C00A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C00C4; /* 0x121C00A5: je 0x121c00c4 */
L_121C00A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x121C00A7: sub eax, 3 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x224)); /* 0x121C00AA: mov edx, dword ptr [ebp - 0x224] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C00B0: jne 0x121c0ad4 */
L_121C00B6:
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x121C00B6: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C00B9:
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C00B9: mov dword ptr [ebp - 0x220], ecx */
    goto L_121C0AD4; /* 0x121C00BF: jmp 0x121c0ad4 */
L_121C00C4:
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x121C00C4: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C00C7:
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C00C7: mov dword ptr [ebp - 0x220], ecx */
    goto L_121C0ACE; /* 0x121C00CD: jmp 0x121c0ace */
L_121C00D2:
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x121C00D2: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00C7; /* 0x121C00D5: jmp 0x121c00c7 */
L_121C00D7:
    _flag_a = (uint32_t)((ecx | 0x80u)); _flag_b = (uint32_t)((ecx | 0x80u));
    ecx = ecx | 0x80u; /* 0x121C00D7: or ecx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00C7; /* 0x121C00DD: jmp 0x121c00c7 */
L_121C00DF:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x121C00DF: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00C7; /* 0x121C00E2: jmp 0x121c00c7 */
L_121C00E4:
    /* cmp LO8(ebx), 0x2Au */ /* 0x121C00E4: cmp bl, 0x2a */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C011E; /* 0x121C00E7: jne 0x121c011e */
L_121C00E9:
    eax = MEM32(edx); /* 0x121C00E9: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C00EB: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x230)) = edx; /* 0x121C00EE: mov dword ptr [ebp - 0x230], edx */
    edx = MEM32(ebp + (-0x224)); /* 0x121C00F4: mov edx, dword ptr [ebp - 0x224] */
    MEM32(ebp + (-0x250)) = eax; /* 0x121C00FA: mov dword ptr [ebp - 0x250], eax */
    /* test eax, eax */ /* 0x121C0100: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0AD4; /* 0x121C0102: jns 0x121c0ad4 */
L_121C0108:
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x121C0108: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x121C010B: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C010D: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x250)) = eax; /* 0x121C0113: mov dword ptr [ebp - 0x250], eax */
    goto L_121C0AD4; /* 0x121C0119: jmp 0x121c0ad4 */
L_121C011E:
    edx = MEM32(ebp + (-0x250)); /* 0x121C011E: mov edx, dword ptr [ebp - 0x250] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xAu); /* 0x121C0124: imul edx, edx, 0xa */
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C0127: movsx eax, bl */
    edx = edx + eax + (-0x30); /* 0x121C012A: lea edx, [edx + eax - 0x30] */
    MEM32(ebp + (-0x250)) = edx; /* 0x121C012E: mov dword ptr [ebp - 0x250], edx */
    goto L_121C0ACE; /* 0x121C0134: jmp 0x121c0ace */
L_121C0139:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121C0139: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C013B:
    MEM32(ebp + (-0x234)) = edi; /* 0x121C013B: mov dword ptr [ebp - 0x234], edi */
    goto L_121C0ACE; /* 0x121C0141: jmp 0x121c0ace */
L_121C0146:
    /* cmp LO8(ebx), 0x2Au */ /* 0x121C0146: cmp bl, 0x2a */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0178; /* 0x121C0149: jne 0x121c0178 */
L_121C014B:
    edi = MEM32(edx); /* 0x121C014B: mov edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C014D: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x230)) = edx; /* 0x121C0150: mov dword ptr [ebp - 0x230], edx */
    edx = MEM32(ebp + (-0x224)); /* 0x121C0156: mov edx, dword ptr [ebp - 0x224] */
    MEM32(ebp + (-0x234)) = edi; /* 0x121C015C: mov dword ptr [ebp - 0x234], edi */
    /* test edi, edi */ /* 0x121C0162: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0AD4; /* 0x121C0164: jns 0x121c0ad4 */
L_121C016A:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x121C016A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x234)) = edi; /* 0x121C016D: mov dword ptr [ebp - 0x234], edi */
    goto L_121C0AD4; /* 0x121C0173: jmp 0x121c0ad4 */
L_121C0178:
    edi = (uint32_t)((int32_t)edi * (int32_t)0xAu); /* 0x121C0178: imul edi, edi, 0xa */
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C017B: movsx eax, bl */
    edi = edi + eax + (-0x30); /* 0x121C017E: lea edi, [edi + eax - 0x30] */
    RECOMP_BACKEDGE();
    goto L_121C013B; /* 0x121C0182: jmp 0x121c013b */
L_121C0184:
    /* cmp LO8(ebx), 0x49u */ /* 0x121C0184: cmp bl, 0x49 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C01D4; /* 0x121C0187: je 0x121c01d4 */
L_121C0189:
    /* cmp LO8(ebx), 0x68u */ /* 0x121C0189: cmp bl, 0x68 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x68u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C01CC; /* 0x121C018C: je 0x121c01cc */
L_121C018E:
    edx = MEM32(ebp + (-0x224)); /* 0x121C018E: mov edx, dword ptr [ebp - 0x224] */
    /* cmp LO8(ebx), 0x6Cu */ /* 0x121C0194: cmp bl, 0x6c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C01AD; /* 0x121C0197: je 0x121c01ad */
L_121C0199:
    /* cmp LO8(ebx), 0x77u */ /* 0x121C0199: cmp bl, 0x77 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C019C: jne 0x121c0ad4 */
L_121C01A2:
    _flag_a = (uint32_t)((ecx | 0x800u)); _flag_b = (uint32_t)((ecx | 0x800u));
    ecx = ecx | 0x800u; /* 0x121C01A2: or ecx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00B9; /* 0x121C01A8: jmp 0x121c00b9 */
L_121C01AD:
    /* cmp MEM8(edx), 0x6Cu */ /* 0x121C01AD: cmp byte ptr [edx], 0x6c */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C01C4; /* 0x121C01B0: jne 0x121c01c4 */
L_121C01B2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x121C01B2: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x224)) = edx; /* 0x121C01B3: mov dword ptr [ebp - 0x224], edx */
    _flag_a = (uint32_t)((ecx | 0x1000u)); _flag_b = (uint32_t)((ecx | 0x1000u));
    ecx = ecx | 0x1000u; /* 0x121C01B9: or ecx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00B9; /* 0x121C01BF: jmp 0x121c00b9 */
L_121C01C4:
    _flag_a = (uint32_t)((ecx | 0x10u)); _flag_b = (uint32_t)((ecx | 0x10u));
    ecx = ecx | 0x10u; /* 0x121C01C4: or ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00B9; /* 0x121C01C7: jmp 0x121c00b9 */
L_121C01CC:
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x121C01CC: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00C7; /* 0x121C01CF: jmp 0x121c00c7 */
L_121C01D4:
    eax = MEM32(ebp + (-0x224)); /* 0x121C01D4: mov eax, dword ptr [ebp - 0x224] */
    SET_LO8(eax, MEM8(eax)); /* 0x121C01DA: mov al, byte ptr [eax] */
    edx = MEM32(ebp + (-0x224)); /* 0x121C01DC: mov edx, dword ptr [ebp - 0x224] */
    /* cmp LO8(eax), 0x36u */ /* 0x121C01E2: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0200; /* 0x121C01E4: jne 0x121c0200 */
L_121C01E6:
    /* cmp MEM8(edx + 0x1), 0x34u */ /* 0x121C01E6: cmp byte ptr [edx + 1], 0x34 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0200; /* 0x121C01EA: jne 0x121c0200 */
L_121C01EC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x121C01EC: add edx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x224)) = edx; /* 0x121C01EF: mov dword ptr [ebp - 0x224], edx */
    _flag_a = (uint32_t)((ecx | 0x8000u)); _flag_b = (uint32_t)((ecx | 0x8000u));
    ecx = ecx | 0x8000u; /* 0x121C01F5: or ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00B9; /* 0x121C01FB: jmp 0x121c00b9 */
L_121C0200:
    /* cmp LO8(eax), 0x33u */ /* 0x121C0200: cmp al, 0x33 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x33u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C021E; /* 0x121C0202: jne 0x121c021e */
L_121C0204:
    /* cmp MEM8(edx + 0x1), 0x32u */ /* 0x121C0204: cmp byte ptr [edx + 1], 0x32 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0x32u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C021E; /* 0x121C0208: jne 0x121c021e */
L_121C020A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x121C020A: add edx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x224)) = edx; /* 0x121C020D: mov dword ptr [ebp - 0x224], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    ecx = ecx & 0xFFFF7FFFu; /* 0x121C0213: and ecx, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C00B9; /* 0x121C0219: jmp 0x121c00b9 */
L_121C021E:
    /* cmp LO8(eax), 0x64u */ /* 0x121C021E: cmp al, 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0220: je 0x121c0ad4 */
L_121C0226:
    /* cmp LO8(eax), 0x69u */ /* 0x121C0226: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0228: je 0x121c0ad4 */
L_121C022E:
    /* cmp LO8(eax), 0x6Fu */ /* 0x121C022E: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0230: je 0x121c0ad4 */
L_121C0236:
    /* cmp LO8(eax), 0x75u */ /* 0x121C0236: cmp al, 0x75 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0238: je 0x121c0ad4 */
L_121C023E:
    /* cmp LO8(eax), 0x78u */ /* 0x121C023E: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0240: je 0x121c0ad4 */
L_121C0246:
    /* cmp LO8(eax), 0x58u */ /* 0x121C0246: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AD4; /* 0x121C0248: je 0x121c0ad4 */
L_121C024E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x248)) = MEM32(ebp + (-0x248)) & 0; /* 0x121C024E: and dword ptr [ebp - 0x248], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0255:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) & 0; /* 0x121C0255: and dword ptr [ebp - 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO8(ebx); /* 0x121C025C: movzx eax, bl */
    PUSH32(esp, eax); /* 0x121C025F: push eax */
    RECOMP_ICALL(MEM32(0x120011D8)); /* 0x121C0260: call dword ptr [0x120011d8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0266: pop ecx */
    /* test eax, eax */ /* 0x121C0267: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0295; /* 0x121C0269: je 0x121c0295 */
L_121C026B:
    ecx = MEM32(ebp + (-0x240)); /* 0x121C026B: mov ecx, dword ptr [ebp - 0x240] */
    esi = ebp + (-0x238); /* 0x121C0271: lea esi, [ebp - 0x238] */
    SET_LO8(edx, LO8(ebx)); /* 0x121C0277: mov dl, bl */
    RECOMP_CALL(sub_121BFDDA); /* 0x121C0279: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x224)); /* 0x121C027E: mov eax, dword ptr [ebp - 0x224] */
    SET_LO8(ebx, MEM8(eax)); /* 0x121C0284: mov bl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121C0286: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x224)) = eax; /* 0x121C0287: mov dword ptr [ebp - 0x224], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x121C028D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C028F: je 0x121c0afa */
L_121C0295:
    ecx = MEM32(ebp + (-0x240)); /* 0x121C0295: mov ecx, dword ptr [ebp - 0x240] */
    esi = ebp + (-0x238); /* 0x121C029B: lea esi, [ebp - 0x238] */
    SET_LO8(edx, LO8(ebx)); /* 0x121C02A1: mov dl, bl */
    RECOMP_CALL(sub_121BFDDA); /* 0x121C02A3: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x228)); /* 0x121C02A8: mov esi, dword ptr [ebp - 0x228] */
    goto L_121C0ACE; /* 0x121C02AE: jmp 0x121c0ace */
L_121C02B3:
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C02B3: movsx eax, bl */
    /* cmp eax, 0x64u */ /* 0x121C02B6: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121C056B; /* 0x121C02B9: jg 0x121c056b */
L_121C02BF:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C05BF; /* 0x121C02BF: je 0x121c05bf */
L_121C02C5:
    /* cmp eax, 0x53u */ /* 0x121C02C5: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121C03DD; /* 0x121C02C8: jg 0x121c03dd */
L_121C02CE:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C037F; /* 0x121C02CE: je 0x121c037f */
L_121C02D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x121C02D4: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C033A; /* 0x121C02D7: je 0x121c033a */
L_121C02D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02D9: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02DA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C031D; /* 0x121C02DB: je 0x121c031d */
L_121C02DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02DD: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02DE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C033A; /* 0x121C02DF: je 0x121c033a */
L_121C02E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02E1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C02E2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C033A; /* 0x121C02E3: je 0x121c033a */
L_121C02E5:
    edi = MEM32(ebp + (-0x22C)); /* 0x121C02E5: mov edi, dword ptr [ebp - 0x22c] */
L_121C02EB:
    eax = MEM32(ebp + (-0x220)); /* 0x121C02EB: mov eax, dword ptr [ebp - 0x220] */
L_121C02F1:
    /* cmp MEM32(ebp + (-0x258)), 0 */ /* 0x121C02F1: cmp dword ptr [ebp - 0x258], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x258))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0AAE; /* 0x121C02F8: jne 0x121c0aae */
L_121C02FE:
    /* test LO8(eax), 0x40u */ /* 0x121C02FE: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C08B8; /* 0x121C0300: je 0x121c08b8 */
L_121C0306:
    /* test eax, 0x100u */ /* 0x121C0306: test eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0896; /* 0x121C030B: je 0x121c0896 */
L_121C0311:
    MEM8(ebp + (-0x23C)) = (uint8_t)(0x2Du); /* 0x121C0311: mov byte ptr [ebp - 0x23c], 0x2d */
    goto L_121C08AE; /* 0x121C0318: jmp 0x121c08ae */
L_121C031D:
    /* test ecx, 0x830u */ /* 0x121C031D: test ecx, 0x830 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x830u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C03FF; /* 0x121C0323: jne 0x121c03ff */
L_121C0329:
    _flag_a = (uint32_t)((ecx | 0x800u)); _flag_b = (uint32_t)((ecx | 0x800u));
    ecx = ecx | 0x800u; /* 0x121C0329: or ecx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C032F: mov dword ptr [ebp - 0x220], ecx */
    goto L_121C03FF; /* 0x121C0335: jmp 0x121c03ff */
L_121C033A:
    MEM32(ebp + (-0x254)) = 1; /* 0x121C033A: mov dword ptr [ebp - 0x254], 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x20u); /* 0x121C0344: add bl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_121C0347:
    esi = MEM32(ebp + (-0x234)); /* 0x121C0347: mov esi, dword ptr [ebp - 0x234] */
    eax = 0x200u; /* 0x121C034D: mov eax, 0x200 */
    _flag_a = (uint32_t)((ecx | 0x40u)); _flag_b = (uint32_t)((ecx | 0x40u));
    ecx = ecx | 0x40u; /* 0x121C0352: or ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x21C); /* 0x121C0355: lea edi, [ebp - 0x21c] */
    edx = eax; /* 0x121C035B: mov edx, eax */
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C035D: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C0363: mov dword ptr [ebp - 0x22c], edi */
    MEM32(ebp + (-0x268)) = edx; /* 0x121C0369: mov dword ptr [ebp - 0x268], edx */
    /* test esi, esi */ /* 0x121C036F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C05EB; /* 0x121C0371: jns 0x121c05eb */
L_121C0377:
    PUSH32(esp, 6); /* 0x121C0377: push 6 */
    esi = POP32_VAL(esp); /* 0x121C0379: pop esi */
    goto L_121C0646; /* 0x121C037A: jmp 0x121c0646 */
L_121C037F:
    /* test ecx, 0x830u */ /* 0x121C037F: test ecx, 0x830 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x830u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0393; /* 0x121C0385: jne 0x121c0393 */
L_121C0387:
    _flag_a = (uint32_t)((ecx | 0x800u)); _flag_b = (uint32_t)((ecx | 0x800u));
    ecx = ecx | 0x800u; /* 0x121C0387: or ecx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C038D: mov dword ptr [ebp - 0x220], ecx */
L_121C0393:
    eax = 0x7FFFFFFFu; /* 0x121C0393: mov eax, 0x7fffffff */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x121C0398: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C039F; /* 0x121C039B: je 0x121c039f */
L_121C039D:
    eax = edi; /* 0x121C039D: mov eax, edi */
L_121C039F:
    edi = MEM32(edx); /* 0x121C039F: mov edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C03A1: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x230)) = edx; /* 0x121C03A4: mov dword ptr [ebp - 0x230], edx */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C03AA: mov dword ptr [ebp - 0x22c], edi */
    /* test ecx, 0x810u */ /* 0x121C03B0: test ecx, 0x810 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x810u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0870; /* 0x121C03B6: je 0x121c0870 */
L_121C03BC:
    /* test edi, edi */ /* 0x121C03BC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C03CC; /* 0x121C03BE: jne 0x121c03cc */
L_121C03C0:
    edi = MEM32(0x121D95B4); /* 0x121C03C0: mov edi, dword ptr [0x121d95b4] */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C03C6: mov dword ptr [ebp - 0x22c], edi */
L_121C03CC:
    MEM32(ebp + (-0x24C)) = 1; /* 0x121C03CC: mov dword ptr [ebp - 0x24c], 1 */
    esi = edi; /* 0x121C03D6: mov esi, edi */
    goto L_121C0863; /* 0x121C03D8: jmp 0x121c0863 */
L_121C03DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x58u; /* 0x121C03DD: sub eax, 0x58 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C06CD; /* 0x121C03E0: je 0x121c06cd */
L_121C03E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C03E6: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C03E7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C04D5; /* 0x121C03E8: je 0x121c04d5 */
L_121C03EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x121C03EE: sub eax, 7 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C0347; /* 0x121C03F1: je 0x121c0347 */
L_121C03F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C03F7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C03F8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121C02E5; /* 0x121C03F9: jne 0x121c02e5 */
L_121C03FF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C03FF: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x230)) = edx; /* 0x121C0402: mov dword ptr [ebp - 0x230], edx */
    /* test ecx, 0x810u */ /* 0x121C0408: test ecx, 0x810 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x810u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C04B2; /* 0x121C040E: je 0x121c04b2 */
L_121C0414:
    eax = (uint32_t)MEM16(edx + (-0x4)); /* 0x121C0414: movzx eax, word ptr [edx - 4] */
    PUSH32(esp, eax); /* 0x121C0418: push eax */
    eax = ebp + (-0x1C); /* 0x121C0419: lea eax, [ebp - 0x1c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x121C041C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C041F: push eax */
    MEM32(ebp + (-0x228)) = esi; /* 0x121C0420: mov dword ptr [ebp - 0x228], esi */
    RECOMP_ICALL(MEM32(0x120011C8)); /* 0x121C0426: call dword ptr [0x120011c8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C042C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C042D: pop ecx */
    /* test eax, eax */ /* 0x121C042E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0456; /* 0x121C0430: jns 0x121c0456 */
L_121C0432:
    PUSH32(esp, 0x200u); /* 0x121C0432: push 0x200 */
    eax = ebp + (-0x21C); /* 0x121C0437: lea eax, [ebp - 0x21c] */
    PUSH32(esp, 0); /* 0x121C043D: push 0 */
    PUSH32(esp, eax); /* 0x121C043F: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x121C0440: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0445: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0448: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x121C044E: mov dword ptr [eax], 0x2a */
    goto L_121C0490; /* 0x121C0454: jmp 0x121c0490 */
L_121C0456:
    ecx = 0x200u; /* 0x121C0456: mov ecx, 0x200 */
    esi = eax; /* 0x121C045B: mov esi, eax */
    MEM32(ebp + (-0x228)) = esi; /* 0x121C045D: mov dword ptr [ebp - 0x228], esi */
    /* cmp eax, ecx */ /* 0x121C0463: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C049C; /* 0x121C0465: jle 0x121c049c */
L_121C0467:
    PUSH32(esp, ecx); /* 0x121C0467: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121C0468: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x21C); /* 0x121C046A: lea eax, [ebp - 0x21c] */
    PUSH32(esp, ebx); /* 0x121C0470: push ebx */
    PUSH32(esp, eax); /* 0x121C0471: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x121C0472: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0477: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x121C047D: push ebx */
    PUSH32(esp, ebx); /* 0x121C047E: push ebx */
    PUSH32(esp, ebx); /* 0x121C047F: push ebx */
    PUSH32(esp, ebx); /* 0x121C0480: push ebx */
    PUSH32(esp, ebx); /* 0x121C0481: push ebx */
    MEM32(eax) = 0x22u; /* 0x121C0482: mov dword ptr [eax], 0x22 */
    RECOMP_CALL(sub_121BECD3); /* 0x121C0488: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x121C048D: add esp, 0x20 */
    _flag_k = FK_ADD;
L_121C0490:
    MEM32(ebp + (-0x258)) = 1; /* 0x121C0490: mov dword ptr [ebp - 0x258], 1 */
    goto L_121C04C4; /* 0x121C049A: jmp 0x121c04c4 */
L_121C049C:
    PUSH32(esp, eax); /* 0x121C049C: push eax */
    eax = ebp + (-0x1C); /* 0x121C049D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x121C04A0: push eax */
    eax = ebp + (-0x21C); /* 0x121C04A1: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x121C04A7: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C04A8: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C04AD: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_121C04C4; /* 0x121C04B0: jmp 0x121c04c4 */
L_121C04B2:
    SET_LO8(eax, MEM8(edx + (-0x4))); /* 0x121C04B2: mov al, byte ptr [edx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C04B5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C04B7: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x21C)) = (uint8_t)(LO8(eax)); /* 0x121C04B8: mov byte ptr [ebp - 0x21c], al */
    MEM32(ebp + (-0x228)) = esi; /* 0x121C04BE: mov dword ptr [ebp - 0x228], esi */
L_121C04C4:
    edi = ebp + (-0x21C); /* 0x121C04C4: lea edi, [ebp - 0x21c] */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C04CA: mov dword ptr [ebp - 0x22c], edi */
    RECOMP_BACKEDGE();
    goto L_121C02EB; /* 0x121C04D0: jmp 0x121c02eb */
L_121C04D5:
    eax = MEM32(edx); /* 0x121C04D5: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C04D7: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x230)) = edx; /* 0x121C04DA: mov dword ptr [ebp - 0x230], edx */
    /* test eax, eax */ /* 0x121C04E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C054F; /* 0x121C04E2: je 0x121c054f */
L_121C04E4:
    edi = MEM32(eax + 0x4); /* 0x121C04E4: mov edi, dword ptr [eax + 4] */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C04E7: mov dword ptr [ebp - 0x22c], edi */
    /* test edi, edi */ /* 0x121C04ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C054F; /* 0x121C04EF: je 0x121c054f */
L_121C04F1:
    edx = (uint32_t)MEM16(eax); /* 0x121C04F1: movzx edx, word ptr [eax] */
    /* cmp MEM16(eax + 0x2), LO16(edx) */ /* 0x121C04F4: cmp word ptr [eax + 2], dx */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C04F8: jb 0x121c0afa */
L_121C04FE:
    esi = edx; /* 0x121C04FE: mov esi, edx */
    /* test ecx, 0x800u */ /* 0x121C0500: test ecx, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0537; /* 0x121C0506: je 0x121c0537 */
L_121C0508:
    eax = esi; /* 0x121C0508: mov eax, esi */
    eax = ~eax; /* 0x121C050A: not eax */
    /* test LO8(eax), 1 */ /* 0x121C050C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C050E: je 0x121c0afa */
L_121C0514:
    eax = edi; /* 0x121C0514: mov eax, edi */
    eax = ~eax; /* 0x121C0516: not eax */
    /* test LO8(eax), 1 */ /* 0x121C0518: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C051A: je 0x121c0afa */
L_121C0520:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x121C0520: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x121C0520: shr esi, 1 */
    MEM32(ebp + (-0x228)) = esi; /* 0x121C0522: mov dword ptr [ebp - 0x228], esi */
    MEM32(ebp + (-0x24C)) = 1; /* 0x121C0528: mov dword ptr [ebp - 0x24c], 1 */
    RECOMP_BACKEDGE();
    goto L_121C02EB; /* 0x121C0532: jmp 0x121c02eb */
L_121C0537:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) & 0; /* 0x121C0537: and dword ptr [ebp - 0x24c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C053E: mov dword ptr [ebp - 0x22c], edi */
L_121C0544:
    MEM32(ebp + (-0x228)) = esi; /* 0x121C0544: mov dword ptr [ebp - 0x228], esi */
    RECOMP_BACKEDGE();
    goto L_121C02EB; /* 0x121C054A: jmp 0x121c02eb */
L_121C054F:
    edi = MEM32(0x121D95B0); /* 0x121C054F: mov edi, dword ptr [0x121d95b0] */
    esi = edi; /* 0x121C0555: mov esi, edi */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C0557: mov dword ptr [ebp - 0x22c], edi */
    ecx = esi + 0x1; /* 0x121C055D: lea ecx, [esi + 1] */
L_121C0560:
    SET_LO8(eax, MEM8(esi)); /* 0x121C0560: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C0562: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C0563: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0560; /* 0x121C0565: jne 0x121c0560 */
L_121C0567:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x121C0567: sub esi, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_121C0544; /* 0x121C0569: jmp 0x121c0544 */
L_121C056B:
    /* cmp eax, 0x70u */ /* 0x121C056B: cmp eax, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121C06D1; /* 0x121C056E: jg 0x121c06d1 */
L_121C0574:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C06C4; /* 0x121C0574: je 0x121c06c4 */
L_121C057A:
    /* cmp eax, 0x65u */ /* 0x121C057A: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121C02E5; /* 0x121C057D: jl 0x121c02e5 */
L_121C0583:
    /* cmp eax, 0x67u */ /* 0x121C0583: cmp eax, 0x67 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C0347; /* 0x121C0586: jle 0x121c0347 */
L_121C058C:
    /* cmp eax, 0x69u */ /* 0x121C058C: cmp eax, 0x69 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C05BF; /* 0x121C058F: je 0x121c05bf */
L_121C0591:
    /* cmp eax, 0x6Eu */ /* 0x121C0591: cmp eax, 0x6e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AFA; /* 0x121C0594: je 0x121c0afa */
L_121C059A:
    /* cmp eax, 0x6Fu */ /* 0x121C059A: cmp eax, 0x6f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C02E5; /* 0x121C059D: jne 0x121c02e5 */
L_121C05A3:
    MEM32(ebp + (-0x228)) = 8; /* 0x121C05A3: mov dword ptr [ebp - 0x228], 8 */
    /* test LO8(ecx), LO8(ecx) */ /* 0x121C05AD: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C05D2; /* 0x121C05AF: jns 0x121c05d2 */
L_121C05B1:
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x121C05B1: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C05B7: mov dword ptr [ebp - 0x220], ecx */
    goto L_121C05D2; /* 0x121C05BD: jmp 0x121c05d2 */
L_121C05BF:
    _flag_a = (uint32_t)((ecx | 0x40u)); _flag_b = (uint32_t)((ecx | 0x40u));
    ecx = ecx | 0x40u; /* 0x121C05BF: or ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C05C2: mov dword ptr [ebp - 0x220], ecx */
L_121C05C8:
    MEM32(ebp + (-0x228)) = 0xAu; /* 0x121C05C8: mov dword ptr [ebp - 0x228], 0xa */
L_121C05D2:
    /* test ecx, 0x8000u */ /* 0x121C05D2: test ecx, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0724; /* 0x121C05D8: je 0x121c0724 */
L_121C05DE:
    ebx = MEM32(edx); /* 0x121C05DE: mov ebx, dword ptr [edx] */
    esi = MEM32(edx + 0x4); /* 0x121C05E0: mov esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x121C05E3: add edx, 8 */
    _flag_k = FK_ADD;
    goto L_121C0769; /* 0x121C05E6: jmp 0x121c0769 */
L_121C05EB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_121C05F7; /* 0x121C05EB: jne 0x121c05f7 */
L_121C05ED:
    /* cmp LO8(ebx), 0x67u */ /* 0x121C05ED: cmp bl, 0x67 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x67u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C064C; /* 0x121C05F0: jne 0x121c064c */
L_121C05F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C05F2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C05F4: inc esi */
    _flag_k = FK_INC;
    goto L_121C0646; /* 0x121C05F5: jmp 0x121c0646 */
L_121C05F7:
    /* cmp esi, eax */ /* 0x121C05F7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C0603; /* 0x121C05F9: jle 0x121c0603 */
L_121C05FB:
    esi = eax; /* 0x121C05FB: mov esi, eax */
    MEM32(ebp + (-0x234)) = esi; /* 0x121C05FD: mov dword ptr [ebp - 0x234], esi */
L_121C0603:
    /* cmp esi, 0xA3u */ /* 0x121C0603: cmp esi, 0xa3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xA3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C064C; /* 0x121C0609: jle 0x121c064c */
L_121C060B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x15Du);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x15Du; /* 0x121C060B: add esi, 0x15d */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x121C0611: push esi */
    RECOMP_ICALL(MEM32(0x12001294)); /* 0x121C0612: call dword ptr [0x12001294] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0618: pop ecx */
    ecx = MEM32(ebp + (-0x220)); /* 0x121C0619: mov ecx, dword ptr [ebp - 0x220] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x121C061F: mov dword ptr [ebp - 0x25c], eax */
    /* test eax, eax */ /* 0x121C0625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C063B; /* 0x121C0627: je 0x121c063b */
L_121C0629:
    edx = esi; /* 0x121C0629: mov edx, esi */
    esi = MEM32(ebp + (-0x234)); /* 0x121C062B: mov esi, dword ptr [ebp - 0x234] */
    edi = eax; /* 0x121C0631: mov edi, eax */
    MEM32(ebp + (-0x22C)) = eax; /* 0x121C0633: mov dword ptr [ebp - 0x22c], eax */
    goto L_121C064C; /* 0x121C0639: jmp 0x121c064c */
L_121C063B:
    edx = MEM32(ebp + (-0x268)); /* 0x121C063B: mov edx, dword ptr [ebp - 0x268] */
    esi = 0xA3u; /* 0x121C0641: mov esi, 0xa3 */
L_121C0646:
    MEM32(ebp + (-0x234)) = esi; /* 0x121C0646: mov dword ptr [ebp - 0x234], esi */
L_121C064C:
    /* test LO8(ecx), LO8(ecx) */ /* 0x121C064C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C065A; /* 0x121C064E: jns 0x121c065a */
L_121C0650:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x254)) | 0x80u)); _flag_b = (uint32_t)((MEM32(ebp + (-0x254)) | 0x80u));
    MEM32(ebp + (-0x254)) = MEM32(ebp + (-0x254)) | 0x80u; /* 0x121C0650: or dword ptr [ebp - 0x254], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C065A:
    ecx = MEM32(ebp + (-0x230)); /* 0x121C065A: mov ecx, dword ptr [ebp - 0x230] */
    eax = MEM32(ecx); /* 0x121C0660: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x254))); /* 0x121C0662: push dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x121C0668: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x27C)) = eax; /* 0x121C066B: mov dword ptr [ebp - 0x27c], eax */
    eax = MEM32(ecx + (-0x4)); /* 0x121C0671: mov eax, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x278)) = eax; /* 0x121C0674: mov dword ptr [ebp - 0x278], eax */
    PUSH32(esp, esi); /* 0x121C067A: push esi */
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x121C067B: movsx eax, bl */
    PUSH32(esp, eax); /* 0x121C067E: push eax */
    PUSH32(esp, edx); /* 0x121C067F: push edx */
    eax = ebp + (-0x27C); /* 0x121C0680: lea eax, [ebp - 0x27c] */
    PUSH32(esp, edi); /* 0x121C0686: push edi */
    PUSH32(esp, eax); /* 0x121C0687: push eax */
    MEM32(ebp + (-0x230)) = ecx; /* 0x121C0688: mov dword ptr [ebp - 0x230], ecx */
    RECOMP_CALL(sub_121BFE6E); /* 0x121C068E: call 0x121bfe6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x121C0693: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0x2Du */ /* 0x121C0696: cmp byte ptr [edi], 0x2d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C06B3; /* 0x121C0699: jne 0x121c06b3 */
L_121C069B:
    eax = MEM32(ebp + (-0x220)); /* 0x121C069B: mov eax, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)((eax | 0x100u)); _flag_b = (uint32_t)((eax | 0x100u));
    eax = eax | 0x100u; /* 0x121C06A1: or eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C06A6: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x220)) = eax; /* 0x121C06A7: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C06AD: mov dword ptr [ebp - 0x22c], edi */
L_121C06B3:
    esi = edi; /* 0x121C06B3: mov esi, edi */
    ecx = esi + 0x1; /* 0x121C06B5: lea ecx, [esi + 1] */
L_121C06B8:
    SET_LO8(eax, MEM8(esi)); /* 0x121C06B8: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C06BA: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C06BB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C06B8; /* 0x121C06BD: jne 0x121c06b8 */
L_121C06BF:
    RECOMP_BACKEDGE();
    goto L_121C0567; /* 0x121C06BF: jmp 0x121c0567 */
L_121C06C4:
    PUSH32(esp, 8); /* 0x121C06C4: push 8 */
    edi = POP32_VAL(esp); /* 0x121C06C6: pop edi */
    MEM32(ebp + (-0x234)) = edi; /* 0x121C06C7: mov dword ptr [ebp - 0x234], edi */
L_121C06CD:
    PUSH32(esp, 7); /* 0x121C06CD: push 7 */
    goto L_121C06ED; /* 0x121C06CF: jmp 0x121c06ed */
L_121C06D1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x73u; /* 0x121C06D1: sub eax, 0x73 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C0393; /* 0x121C06D4: je 0x121c0393 */
L_121C06DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C06DA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C06DB: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C05C8; /* 0x121C06DC: je 0x121c05c8 */
L_121C06E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x121C06E2: sub eax, 3 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_121C02E5; /* 0x121C06E5: jne 0x121c02e5 */
L_121C06EB:
    PUSH32(esp, 0x27u); /* 0x121C06EB: push 0x27 */
L_121C06ED:
    eax = POP32_VAL(esp); /* 0x121C06ED: pop eax */
    MEM32(ebp + (-0x264)) = eax; /* 0x121C06EE: mov dword ptr [ebp - 0x264], eax */
    MEM32(ebp + (-0x228)) = 0x10u; /* 0x121C06F4: mov dword ptr [ebp - 0x228], 0x10 */
    /* test LO8(ecx), LO8(ecx) */ /* 0x121C06FE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C05D2; /* 0x121C0700: jns 0x121c05d2 */
L_121C0706:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x51u); /* 0x121C0706: add al, 0x51 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x23C)) = (uint8_t)(0x30u); /* 0x121C0708: mov byte ptr [ebp - 0x23c], 0x30 */
    MEM8(ebp + (-0x23B)) = (uint8_t)(LO8(eax)); /* 0x121C070F: mov byte ptr [ebp - 0x23b], al */
    MEM32(ebp + (-0x244)) = 2; /* 0x121C0715: mov dword ptr [ebp - 0x244], 2 */
    RECOMP_BACKEDGE();
    goto L_121C05D2; /* 0x121C071F: jmp 0x121c05d2 */
L_121C0724:
    /* test ecx, 0x1000u */ /* 0x121C0724: test ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C05DE; /* 0x121C072A: jne 0x121c05de */
L_121C0730:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121C0730: add edx, 4 */
    _flag_k = FK_ADD;
    /* test LO8(ecx), 0x20u */ /* 0x121C0733: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C074F; /* 0x121C0736: je 0x121c074f */
L_121C0738:
    MEM32(ebp + (-0x230)) = edx; /* 0x121C0738: mov dword ptr [ebp - 0x230], edx */
    /* test LO8(ecx), 0x40u */ /* 0x121C073E: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0749; /* 0x121C0741: je 0x121c0749 */
L_121C0743:
    eax = (int32_t)(int16_t)MEM16(edx + (-0x4)); /* 0x121C0743: movsx eax, word ptr [edx - 4] */
    goto L_121C075D; /* 0x121C0747: jmp 0x121c075d */
L_121C0749:
    eax = (uint32_t)MEM16(edx + (-0x4)); /* 0x121C0749: movzx eax, word ptr [edx - 4] */
    goto L_121C075D; /* 0x121C074D: jmp 0x121c075d */
L_121C074F:
    /* test LO8(ecx), 0x40u */ /* 0x121C074F: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0764; /* 0x121C0752: je 0x121c0764 */
L_121C0754:
    eax = MEM32(edx + (-0x4)); /* 0x121C0754: mov eax, dword ptr [edx - 4] */
    MEM32(ebp + (-0x230)) = edx; /* 0x121C0757: mov dword ptr [ebp - 0x230], edx */
L_121C075D:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x121C075D: cdq  */
    ebx = eax; /* 0x121C075E: mov ebx, eax */
    esi = edx; /* 0x121C0760: mov esi, edx */
    goto L_121C076F; /* 0x121C0762: jmp 0x121c076f */
L_121C0764:
    ebx = MEM32(edx + (-0x4)); /* 0x121C0764: mov ebx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C0767: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0769:
    MEM32(ebp + (-0x230)) = edx; /* 0x121C0769: mov dword ptr [ebp - 0x230], edx */
L_121C076F:
    /* test LO8(ecx), 0x40u */ /* 0x121C076F: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0791; /* 0x121C0772: je 0x121c0791 */
L_121C0774:
    /* test esi, esi */ /* 0x121C0774: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0791; /* 0x121C0776: jg 0x121c0791 */
L_121C0778:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C077E; /* 0x121C0778: jl 0x121c077e */
L_121C077A:
    /* test ebx, ebx */ /* 0x121C077A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_121C0791; /* 0x121C077C: jae 0x121c0791 */
L_121C077E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x121C077E: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _aa = esi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121C0780: adc esi, 0 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x121C0783: neg esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | 0x100u)); _flag_b = (uint32_t)((ecx | 0x100u));
    ecx = ecx | 0x100u; /* 0x121C0785: or ecx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C078B: mov dword ptr [ebp - 0x220], ecx */
L_121C0791:
    /* test ecx, 0x9000u */ /* 0x121C0791: test ecx, 0x9000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x9000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C079B; /* 0x121C0797: jne 0x121c079b */
L_121C0799:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C0799: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C079B:
    /* test edi, edi */ /* 0x121C079B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C07A4; /* 0x121C079D: jns 0x121c07a4 */
L_121C079F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121C079F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121C07A1: inc ecx */
    _flag_k = FK_INC;
    goto L_121C07BE; /* 0x121C07A2: jmp 0x121c07be */
L_121C07A4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ecx = ecx & 0xFFFFFFF7u; /* 0x121C07A4: and ecx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x200u; /* 0x121C07A7: mov edx, 0x200 */
    MEM32(ebp + (-0x220)) = ecx; /* 0x121C07AC: mov dword ptr [ebp - 0x220], ecx */
    ecx = edx; /* 0x121C07B2: mov ecx, edx */
    /* cmp edi, edx */ /* 0x121C07B4: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121C07BE; /* 0x121C07B6: jg 0x121c07be */
L_121C07B8:
    ecx = MEM32(ebp + (-0x234)); /* 0x121C07B8: mov ecx, dword ptr [ebp - 0x234] */
L_121C07BE:
    eax = ebx; /* 0x121C07BE: mov eax, ebx */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x121C07C0: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C07CA; /* 0x121C07C2: jne 0x121c07ca */
L_121C07C4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x244)) = MEM32(ebp + (-0x244)) & eax; /* 0x121C07C4: and dword ptr [ebp - 0x244], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C07CA:
    edi = ebp + (-0x1D); /* 0x121C07CA: lea edi, [ebp - 0x1d] */
L_121C07CD:
    eax = ecx; /* 0x121C07CD: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121C07CF: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x234)) = ecx; /* 0x121C07D0: mov dword ptr [ebp - 0x234], ecx */
    /* test eax, eax */ /* 0x121C07D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C07E0; /* 0x121C07D8: jg 0x121c07e0 */
L_121C07DA:
    eax = ebx; /* 0x121C07DA: mov eax, ebx */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x121C07DC: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0813; /* 0x121C07DE: je 0x121c0813 */
L_121C07E0:
    eax = MEM32(ebp + (-0x228)); /* 0x121C07E0: mov eax, dword ptr [ebp - 0x228] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x121C07E6: cdq  */
    PUSH32(esp, edx); /* 0x121C07E7: push edx */
    PUSH32(esp, eax); /* 0x121C07E8: push eax */
    PUSH32(esp, esi); /* 0x121C07E9: push esi */
    PUSH32(esp, ebx); /* 0x121C07EA: push ebx */
    RECOMP_CALL(sub_121BFD40); /* 0x121C07EB: call 0x121bfd40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x121C07F0: add ecx, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x268)) = ebx; /* 0x121C07F3: mov dword ptr [ebp - 0x268], ebx */
    ebx = eax; /* 0x121C07F9: mov ebx, eax */
    esi = edx; /* 0x121C07FB: mov esi, edx */
    /* cmp ecx, 0x39u */ /* 0x121C07FD: cmp ecx, 0x39 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C0808; /* 0x121C0800: jle 0x121c0808 */
L_121C0802:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x264)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x264)); /* 0x121C0802: add ecx, dword ptr [ebp - 0x264] */
    _flag_k = FK_ADD;
L_121C0808:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x121C0808: mov byte ptr [edi], cl */
    ecx = MEM32(ebp + (-0x234)); /* 0x121C080A: mov ecx, dword ptr [ebp - 0x234] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121C0810: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_121C07CD; /* 0x121C0811: jmp 0x121c07cd */
L_121C0813:
    eax = MEM32(ebp + (-0x220)); /* 0x121C0813: mov eax, dword ptr [ebp - 0x220] */
    esi = ebp + (-0x1D); /* 0x121C0819: lea esi, [ebp - 0x1d] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121C081C: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C081E: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x228)) = esi; /* 0x121C081F: mov dword ptr [ebp - 0x228], esi */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C0825: mov dword ptr [ebp - 0x22c], edi */
    /* test eax, 0x200u */ /* 0x121C082B: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C02F1; /* 0x121C0830: je 0x121c02f1 */
L_121C0836:
    /* test esi, esi */ /* 0x121C0836: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0843; /* 0x121C0838: je 0x121c0843 */
L_121C083A:
    /* cmp MEM8(edi), 0x30u */ /* 0x121C083A: cmp byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C02F1; /* 0x121C083D: je 0x121c02f1 */
L_121C0843:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121C0843: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C0844: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C0845: mov dword ptr [ebp - 0x22c], edi */
    MEM8(edi) = (uint8_t)(0x30u); /* 0x121C084B: mov byte ptr [edi], 0x30 */
    MEM32(ebp + (-0x228)) = esi; /* 0x121C084E: mov dword ptr [ebp - 0x228], esi */
    RECOMP_BACKEDGE();
    goto L_121C02F1; /* 0x121C0854: jmp 0x121c02f1 */
L_121C0859:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C0859: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM16(esi), 0 */ /* 0x121C085A: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0867; /* 0x121C085E: je 0x121c0867 */
L_121C0860:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x121C0860: add esi, 2 */
    _flag_k = FK_ADD;
L_121C0863:
    /* test eax, eax */ /* 0x121C0863: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0859; /* 0x121C0865: jne 0x121c0859 */
L_121C0867:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121C0867: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x121C0869: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    RECOMP_BACKEDGE();
    goto L_121C0544; /* 0x121C086B: jmp 0x121c0544 */
L_121C0870:
    /* test edi, edi */ /* 0x121C0870: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0880; /* 0x121C0872: jne 0x121c0880 */
L_121C0874:
    edi = MEM32(0x121D95B0); /* 0x121C0874: mov edi, dword ptr [0x121d95b0] */
    MEM32(ebp + (-0x22C)) = edi; /* 0x121C087A: mov dword ptr [ebp - 0x22c], edi */
L_121C0880:
    esi = edi; /* 0x121C0880: mov esi, edi */
    goto L_121C088B; /* 0x121C0882: jmp 0x121c088b */
L_121C0884:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C0884: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x121C0885: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C088F; /* 0x121C0888: je 0x121c088f */
L_121C088A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C088A: inc esi */
    _flag_k = FK_INC;
L_121C088B:
    /* test eax, eax */ /* 0x121C088B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0884; /* 0x121C088D: jne 0x121c0884 */
L_121C088F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121C088F: sub esi, edi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_121C0544; /* 0x121C0891: jmp 0x121c0544 */
L_121C0896:
    /* test LO8(eax), 1 */ /* 0x121C0896: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C08A3; /* 0x121C0898: je 0x121c08a3 */
L_121C089A:
    MEM8(ebp + (-0x23C)) = (uint8_t)(0x2Bu); /* 0x121C089A: mov byte ptr [ebp - 0x23c], 0x2b */
    goto L_121C08AE; /* 0x121C08A1: jmp 0x121c08ae */
L_121C08A3:
    /* test LO8(eax), 2 */ /* 0x121C08A3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C08B8; /* 0x121C08A5: je 0x121c08b8 */
L_121C08A7:
    MEM8(ebp + (-0x23C)) = (uint8_t)(0x20u); /* 0x121C08A7: mov byte ptr [ebp - 0x23c], 0x20 */
L_121C08AE:
    MEM32(ebp + (-0x244)) = 1; /* 0x121C08AE: mov dword ptr [ebp - 0x244], 1 */
L_121C08B8:
    ecx = MEM32(ebp + (-0x250)); /* 0x121C08B8: mov ecx, dword ptr [ebp - 0x250] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x121C08BE: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x244)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x244)); /* 0x121C08C0: sub ecx, dword ptr [ebp - 0x244] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x268)) = ecx; /* 0x121C08C6: mov dword ptr [ebp - 0x268], ecx */
    /* test LO8(eax), 0xCu */ /* 0x121C08CC: test al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C08FF; /* 0x121C08CE: jne 0x121c08ff */
L_121C08D0:
    ebx = ecx; /* 0x121C08D0: mov ebx, ecx */
    /* test ecx, ecx */ /* 0x121C08D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C08FF; /* 0x121C08D4: jle 0x121c08ff */
L_121C08D6:
    edi = MEM32(ebp + (-0x240)); /* 0x121C08D6: mov edi, dword ptr [ebp - 0x240] */
L_121C08DC:
    esi = ebp + (-0x238); /* 0x121C08DC: lea esi, [ebp - 0x238] */
    ecx = edi; /* 0x121C08E2: mov ecx, edi */
    SET_LO8(edx, 0x20u); /* 0x121C08E4: mov dl, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121C08E6: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_121BFDDA); /* 0x121C08E7: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x238)), 0xFFFFFFFFu */ /* 0x121C08EC: cmp dword ptr [ebp - 0x238], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C08F9; /* 0x121C08F3: je 0x121c08f9 */
L_121C08F5:
    /* test ebx, ebx */ /* 0x121C08F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C08DC; /* 0x121C08F7: jg 0x121c08dc */
L_121C08F9:
    edi = MEM32(ebp + (-0x22C)); /* 0x121C08F9: mov edi, dword ptr [ebp - 0x22c] */
L_121C08FF:
    ebx = MEM32(ebp + (-0x240)); /* 0x121C08FF: mov ebx, dword ptr [ebp - 0x240] */
    ecx = MEM32(ebp + (-0x244)); /* 0x121C0905: mov ecx, dword ptr [ebp - 0x244] */
    eax = ebp + (-0x23C); /* 0x121C090B: lea eax, [ebp - 0x23c] */
    PUSH32(esp, eax); /* 0x121C0911: push eax */
    eax = ebp + (-0x238); /* 0x121C0912: lea eax, [ebp - 0x238] */
    RECOMP_CALL(sub_121BFE12); /* 0x121C0918: call 0x121bfe12 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x220)); /* 0x121C091D: mov eax, dword ptr [ebp - 0x220] */
    ecx = POP32_VAL(esp); /* 0x121C0923: pop ecx */
    /* test LO8(eax), 8 */ /* 0x121C0924: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0967; /* 0x121C0926: je 0x121c0967 */
L_121C0928:
    /* test LO8(eax), 4 */ /* 0x121C0928: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0967; /* 0x121C092A: jne 0x121c0967 */
L_121C092C:
    eax = MEM32(ebp + (-0x268)); /* 0x121C092C: mov eax, dword ptr [ebp - 0x268] */
    ebx = eax; /* 0x121C0932: mov ebx, eax */
    /* test eax, eax */ /* 0x121C0934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0961; /* 0x121C0936: jle 0x121c0961 */
L_121C0938:
    edi = MEM32(ebp + (-0x240)); /* 0x121C0938: mov edi, dword ptr [ebp - 0x240] */
L_121C093E:
    esi = ebp + (-0x238); /* 0x121C093E: lea esi, [ebp - 0x238] */
    ecx = edi; /* 0x121C0944: mov ecx, edi */
    SET_LO8(edx, 0x30u); /* 0x121C0946: mov dl, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121C0948: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_121BFDDA); /* 0x121C0949: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x238)), 0xFFFFFFFFu */ /* 0x121C094E: cmp dword ptr [ebp - 0x238], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C095B; /* 0x121C0955: je 0x121c095b */
L_121C0957:
    /* test ebx, ebx */ /* 0x121C0957: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C093E; /* 0x121C0959: jg 0x121c093e */
L_121C095B:
    edi = MEM32(ebp + (-0x22C)); /* 0x121C095B: mov edi, dword ptr [ebp - 0x22c] */
L_121C0961:
    ebx = MEM32(ebp + (-0x240)); /* 0x121C0961: mov ebx, dword ptr [ebp - 0x240] */
L_121C0967:
    /* cmp MEM32(ebp + (-0x24C)), 0 */ /* 0x121C0967: cmp dword ptr [ebp - 0x24c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x228)); /* 0x121C096E: mov esi, dword ptr [ebp - 0x228] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0A59; /* 0x121C0974: je 0x121c0a59 */
L_121C097A:
    /* test esi, esi */ /* 0x121C097A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0A59; /* 0x121C097C: jle 0x121c0a59 */
L_121C0982:
    eax = edi; /* 0x121C0982: mov eax, edi */
    MEM32(ebp + (-0x260)) = eax; /* 0x121C0984: mov dword ptr [ebp - 0x260], eax */
    edi = esi; /* 0x121C098A: mov edi, esi */
L_121C098C:
    eax = (uint32_t)MEM16(eax); /* 0x121C098C: movzx eax, word ptr [eax] */
    PUSH32(esp, eax); /* 0x121C098F: push eax */
    eax = ebp + (-0x14); /* 0x121C0990: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121C0993: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x121C0994: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C0997: push eax */
    MEM32(ebp + (-0x270)) = edi; /* 0x121C0998: mov dword ptr [ebp - 0x270], edi */
    MEM32(ebp + (-0x274)) = ebx; /* 0x121C099E: mov dword ptr [ebp - 0x274], ebx */
    RECOMP_ICALL(MEM32(0x120011C8)); /* 0x121C09A4: call dword ptr [0x120011c8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C09AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C09AB: pop ecx */
    /* test eax, eax */ /* 0x121C09AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C09CD; /* 0x121C09AE: jns 0x121c09cd */
L_121C09B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C09B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xC); /* 0x121C09B2: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x121C09B5: stosd dword ptr es:[edi], eax */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x121C09B6: stosw word ptr es:[edi], ax */
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C09B8: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x121C09BE: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x121C09C0: pop ecx */
    MEM32(eax) = ecx; /* 0x121C09C1: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x121C09C3: mov eax, ecx */
L_121C09C5:
    edi = MEM32(ebp + (-0x270)); /* 0x121C09C5: mov edi, dword ptr [ebp - 0x270] */
    goto L_121C0A13; /* 0x121C09CB: jmp 0x121c0a13 */
L_121C09CD:
    ebx = eax; /* 0x121C09CD: mov ebx, eax */
    MEM32(ebp + (-0x274)) = ebx; /* 0x121C09CF: mov dword ptr [ebp - 0x274], ebx */
    /* cmp eax, 6 */ /* 0x121C09D5: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121C0A00; /* 0x121C09D8: jle 0x121c0a00 */
L_121C09DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C09DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xC); /* 0x121C09DC: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x121C09DF: stosd dword ptr es:[edi], eax */
    MEM16(edi) = (uint16_t)LO16(eax); edi += _df * 2; /* 0x121C09E0: stosw word ptr es:[edi], ax */
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C09E2: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x121C09E8: push 0x22 */
    edi = POP32_VAL(esp); /* 0x121C09EA: pop edi */
    MEM32(eax) = edi; /* 0x121C09EB: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C09ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C09EF: push eax */
    PUSH32(esp, eax); /* 0x121C09F0: push eax */
    PUSH32(esp, eax); /* 0x121C09F1: push eax */
    PUSH32(esp, eax); /* 0x121C09F2: push eax */
    PUSH32(esp, eax); /* 0x121C09F3: push eax */
    RECOMP_CALL(sub_121BECD3); /* 0x121C09F4: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121C09F9: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x121C09FC: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_121C09C5; /* 0x121C09FE: jmp 0x121c09c5 */
L_121C0A00:
    PUSH32(esp, eax); /* 0x121C0A00: push eax */
    eax = ebp + (-0x14); /* 0x121C0A01: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x121C0A04: push eax */
    eax = ebp + (-0xC); /* 0x121C0A05: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x121C0A08: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C0A09: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0A0E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0A11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0A13:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) + 2; /* 0x121C0A13: add dword ptr [ebp - 0x260], 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121C0A1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0A4E; /* 0x121C0A1C: jne 0x121c0a4e */
L_121C0A1E:
    /* test ebx, ebx */ /* 0x121C0A1E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0A4E; /* 0x121C0A20: je 0x121c0a4e */
L_121C0A22:
    ebx = MEM32(ebp + (-0x240)); /* 0x121C0A22: mov ebx, dword ptr [ebp - 0x240] */
    ecx = MEM32(ebp + (-0x274)); /* 0x121C0A28: mov ecx, dword ptr [ebp - 0x274] */
    eax = ebp + (-0xC); /* 0x121C0A2E: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x121C0A31: push eax */
    eax = ebp + (-0x238); /* 0x121C0A32: lea eax, [ebp - 0x238] */
    RECOMP_CALL(sub_121BFE12); /* 0x121C0A38: call 0x121bfe12 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x260)); /* 0x121C0A3D: mov eax, dword ptr [ebp - 0x260] */
    ecx = POP32_VAL(esp); /* 0x121C0A43: pop ecx */
    /* test edi, edi */ /* 0x121C0A44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C098C; /* 0x121C0A46: jne 0x121c098c */
L_121C0A4C:
    goto L_121C0A68; /* 0x121C0A4C: jmp 0x121c0a68 */
L_121C0A4E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121C0A4E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x238)) = eax; /* 0x121C0A51: mov dword ptr [ebp - 0x238], eax */
    goto L_121C0A6E; /* 0x121C0A57: jmp 0x121c0a6e */
L_121C0A59:
    PUSH32(esp, edi); /* 0x121C0A59: push edi */
    eax = ebp + (-0x238); /* 0x121C0A5A: lea eax, [ebp - 0x238] */
    ecx = esi; /* 0x121C0A60: mov ecx, esi */
    RECOMP_CALL(sub_121BFE12); /* 0x121C0A62: call 0x121bfe12 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0A67: pop ecx */
L_121C0A68:
    eax = MEM32(ebp + (-0x238)); /* 0x121C0A68: mov eax, dword ptr [ebp - 0x238] */
L_121C0A6E:
    /* test eax, eax */ /* 0x121C0A6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0AAE; /* 0x121C0A70: js 0x121c0aae */
L_121C0A72:
    ecx = MEM32(ebp + (-0x220)); /* 0x121C0A72: mov ecx, dword ptr [ebp - 0x220] */
    /* test LO8(ecx), 4 */ /* 0x121C0A78: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AAE; /* 0x121C0A7B: je 0x121c0aae */
L_121C0A7D:
    ebx = MEM32(ebp + (-0x268)); /* 0x121C0A7D: mov ebx, dword ptr [ebp - 0x268] */
    /* test ebx, ebx */ /* 0x121C0A83: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0AAE; /* 0x121C0A85: jle 0x121c0aae */
L_121C0A87:
    ecx = MEM32(ebp + (-0x240)); /* 0x121C0A87: mov ecx, dword ptr [ebp - 0x240] */
    esi = ebp + (-0x238); /* 0x121C0A8D: lea esi, [ebp - 0x238] */
    SET_LO8(edx, 0x20u); /* 0x121C0A93: mov dl, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121C0A95: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_121BFDDA); /* 0x121C0A96: call 0x121bfdda */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x238)), 0xFFFFFFFFu */ /* 0x121C0A9B: cmp dword ptr [ebp - 0x238], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0AA8; /* 0x121C0AA2: je 0x121c0aa8 */
L_121C0AA4:
    /* test ebx, ebx */ /* 0x121C0AA4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0A87; /* 0x121C0AA6: jg 0x121c0a87 */
L_121C0AA8:
    esi = MEM32(ebp + (-0x228)); /* 0x121C0AA8: mov esi, dword ptr [ebp - 0x228] */
L_121C0AAE:
    eax = MEM32(ebp + (-0x25C)); /* 0x121C0AAE: mov eax, dword ptr [ebp - 0x25c] */
    /* test eax, eax */ /* 0x121C0AB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AC8; /* 0x121C0AB6: je 0x121c0ac8 */
L_121C0AB8:
    PUSH32(esp, eax); /* 0x121C0AB8: push eax */
    RECOMP_ICALL(MEM32(0x12001284)); /* 0x121C0AB9: call dword ptr [0x12001284] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121C0ABF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x121C0AC1: pop ecx */
    MEM32(ebp + (-0x25C)) = edx; /* 0x121C0AC2: mov dword ptr [ebp - 0x25c], edx */
L_121C0AC8:
    edi = MEM32(ebp + (-0x234)); /* 0x121C0AC8: mov edi, dword ptr [ebp - 0x234] */
L_121C0ACE:
    edx = MEM32(ebp + (-0x224)); /* 0x121C0ACE: mov edx, dword ptr [ebp - 0x224] */
L_121C0AD4:
    SET_LO8(ebx, MEM8(edx)); /* 0x121C0AD4: mov bl, byte ptr [edx] */
    eax = MEM32(ebp + (-0x238)); /* 0x121C0AD6: mov eax, dword ptr [ebp - 0x238] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x121C0ADC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0AEB; /* 0x121C0ADE: je 0x121c0aeb */
L_121C0AE0:
    edx = MEM32(ebp + (-0x230)); /* 0x121C0AE0: mov edx, dword ptr [ebp - 0x230] */
    RECOMP_BACKEDGE();
    goto L_121BFFF4; /* 0x121C0AE6: jmp 0x121bfff4 */
L_121C0AEB:
    ecx = MEM32(ebp + (-0x248)); /* 0x121C0AEB: mov ecx, dword ptr [ebp - 0x248] */
    /* test ecx, ecx */ /* 0x121C0AF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0B18; /* 0x121C0AF3: je 0x121c0b18 */
L_121C0AF5:
    /* cmp ecx, 7 */ /* 0x121C0AF5: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0B18; /* 0x121C0AF8: je 0x121c0b18 */
L_121C0AFA:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0AFA: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x121C0B00: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0B06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C0B08: push eax */
    PUSH32(esp, eax); /* 0x121C0B09: push eax */
    PUSH32(esp, eax); /* 0x121C0B0A: push eax */
    PUSH32(esp, eax); /* 0x121C0B0B: push eax */
    PUSH32(esp, eax); /* 0x121C0B0C: push eax */
L_121C0B0D:
    RECOMP_CALL(sub_121BECD3); /* 0x121C0B0D: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121C0B12: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121C0B15: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0B18:
    ecx = MEM32(ebp + (-0x4)); /* 0x121C0B18: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121C0B1B: pop edi */
    esi = POP32_VAL(esp); /* 0x121C0B1C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121C0B1D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121C0B1F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121C0B20: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C0B25: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0B26: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x121C005Bu: goto L_121C005B;
      case 0x121C0091u: goto L_121C0091;
      case 0x121C00E4u: goto L_121C00E4;
      case 0x121C0139u: goto L_121C0139;
      case 0x121C0146u: goto L_121C0146;
      case 0x121C0184u: goto L_121C0184;
      case 0x121C0255u: goto L_121C0255;
      case 0x121C02B3u: goto L_121C02B3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0B4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0B4Cu);

L_121C0B4C:
    edi = edi; /* 0x121C0B4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C0B4E: push ebp */
    ebp = esp; /* 0x121C0B4F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x121C0B51: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121C0B54: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121C0B55: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x121C0B58: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0B7F; /* 0x121C0B5A: jne 0x121c0b7f */
L_121C0B5C:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0B5C: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121C0B62: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x121C0B64: push ecx */
    PUSH32(esp, ecx); /* 0x121C0B65: push ecx */
    PUSH32(esp, ecx); /* 0x121C0B66: push ecx */
    PUSH32(esp, ecx); /* 0x121C0B67: push ecx */
    PUSH32(esp, ecx); /* 0x121C0B68: push ecx */
    MEM32(eax) = 0x16u; /* 0x121C0B69: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_121BECD3); /* 0x121C0B6F: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121C0B74: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121C0B77: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C0BFF; /* 0x121C0B7A: jmp 0x121c0bff */
L_121C0B7F:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x121C0B7F: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0B8D; /* 0x121C0B82: jne 0x121c0b8d */
L_121C0B84:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x121C0B84: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_121C0B98; /* 0x121C0B8B: jmp 0x121c0b98 */
L_121C0B8D:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x121C0B8D: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_121C0B5C; /* 0x121C0B93: ja 0x121c0b5c */
L_121C0B95:
    MEM32(ebp + (-0x1C)) = esi; /* 0x121C0B95: mov dword ptr [ebp - 0x1c], esi */
L_121C0B98:
    PUSH32(esp, ebx); /* 0x121C0B98: push ebx */
    PUSH32(esp, edi); /* 0x121C0B99: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121C0B9A: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x121C0B9D: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121C0BA0: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x121C0BA3: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121C0BA6: push eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x121C0BA7: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x121C0BAA: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x121C0BAD: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_121BFF33); /* 0x121C0BB4: call 0x121bff33 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121C0BB9: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121C0BBB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0BBD: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x121C0BC0: mov byte ptr [edi + esi - 1], cl */
    /* test ebx, ebx */ /* 0x121C0BC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C0BD9; /* 0x121C0BC6: jns 0x121c0bd9 */
L_121C0BC8:
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x121C0BC8: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121C0BFA; /* 0x121C0BCB: jl 0x121c0bfa */
L_121C0BCD:
    /* test edi, edi */ /* 0x121C0BCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0BFD; /* 0x121C0BCF: je 0x121c0bfd */
L_121C0BD1:
    /* test esi, esi */ /* 0x121C0BD1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0BFD; /* 0x121C0BD3: je 0x121c0bfd */
L_121C0BD5:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x121C0BD5: mov byte ptr [edi], cl */
    goto L_121C0BFD; /* 0x121C0BD7: jmp 0x121c0bfd */
L_121C0BD9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x121C0BD9: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121C0BE5; /* 0x121C0BDC: js 0x121c0be5 */
L_121C0BDE:
    eax = MEM32(ebp + (-0x20)); /* 0x121C0BDE: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121C0BE1: mov byte ptr [eax], cl */
    goto L_121C0BF6; /* 0x121C0BE3: jmp 0x121c0bf6 */
L_121C0BE5:
    eax = ebp + (-0x20); /* 0x121C0BE5: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x121C0BE8: push eax */
    PUSH32(esp, ecx); /* 0x121C0BE9: push ecx */
    RECOMP_CALL(sub_121C0D33); /* 0x121C0BEA: call 0x121c0d33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0BEF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C0BF0: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121C0BF1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0BFA; /* 0x121C0BF4: je 0x121c0bfa */
L_121C0BF6:
    eax = ebx; /* 0x121C0BF6: mov eax, ebx */
    goto L_121C0BFD; /* 0x121C0BF8: jmp 0x121c0bfd */
L_121C0BFA:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x121C0BFA: push -2 */
    eax = POP32_VAL(esp); /* 0x121C0BFC: pop eax */
L_121C0BFD:
    edi = POP32_VAL(esp); /* 0x121C0BFD: pop edi */
    ebx = POP32_VAL(esp); /* 0x121C0BFE: pop ebx */
L_121C0BFF:
    esi = POP32_VAL(esp); /* 0x121C0BFF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C0C00: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0C01: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0C11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0C11u);

L_121C0C11:
    PUSH32(esp, ebx); /* 0x121C0C11: push ebx */
    PUSH32(esp, ecx); /* 0x121C0C12: push ecx */
    ebx = 0x121D95B8u; /* 0x121C0C13: mov ebx, 0x121d95b8 */
    ecx = MEM32(esp + 0xC); /* 0x121C0C18: mov ecx, dword ptr [esp + 0xc] */
    MEM32(ebx + 0x8) = ecx; /* 0x121C0C1C: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x121C0C1F: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x121C0C22: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x121C0C25: push ebp */
    PUSH32(esp, ecx); /* 0x121C0C26: push ecx */
    PUSH32(esp, eax); /* 0x121C0C27: push eax */
    eax = POP32_VAL(esp); /* 0x121C0C28: pop eax */
    ecx = POP32_VAL(esp); /* 0x121C0C29: pop ecx */
    ebp = POP32_VAL(esp); /* 0x121C0C2A: pop ebp */
    ecx = POP32_VAL(esp); /* 0x121C0C2B: pop ecx */
    ebx = POP32_VAL(esp); /* 0x121C0C2C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121C0C2D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121C0C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0C30u);

L_121C0C30:
    RECOMP_ICALL(eax); /* 0x121C0C30: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0C32: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0C38u);

L_121C0C38:
    PUSH32(esp, 0xCu); /* 0x121C0C38: push 0xc */
    PUSH32(esp, 0x121C5AA0u); /* 0x121C0C3A: push 0x121c5aa0 */
    RECOMP_CALL(sub_121BF3A0); /* 0x121C0C3F: call 0x121bf3a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x121C0C44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[0] = _xmm[1]; /* 0x121C0C48: movapd xmm0, xmm1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0C4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121C0C4E: inc eax */
    _flag_k = FK_INC;
    goto L_121C0C72; /* 0x121C0C4F: jmp 0x121c0c72 */
L_121C0C72:
    MEM32(ebp + (-0x1C)) = eax; /* 0x121C0C72: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x121C0C75: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_121BF3E5); /* 0x121C0C7C: call 0x121bf3e5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0C81: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0C87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0C87u);

L_121C0C87:
    edi = edi; /* 0x121C0C87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C0C89: push ebp */
    ebp = esp; /* 0x121C0C8A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121C0C8C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0C8F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121C0C91: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x121C0C92: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x121C0C95: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x121C0C98: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x121C0C9B: push ebx */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121C0C9C: pushfd  */
    eax = POP32_VAL(esp); /* 0x121C0C9D: pop eax */
    ecx = eax; /* 0x121C0C9E: mov ecx, eax */
    _flag_a = (uint32_t)((eax ^ 0x00200000u)); _flag_b = (uint32_t)((eax ^ 0x00200000u));
    eax = eax ^ 0x00200000u; /* 0x121C0CA0: xor eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C0CA5: push eax */
    { uint32_t _fl = POP32_VAL(esp); /* 0x121C0CA6: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x121C0CA7: pushfd  */
    edx = POP32_VAL(esp); /* 0x121C0CA8: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121C0CA9: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121C0CCC; /* 0x121C0CAB: je 0x121c0ccc */
L_121C0CAD:
    PUSH32(esp, ecx); /* 0x121C0CAD: push ecx */
    { uint32_t _fl = POP32_VAL(esp); /* 0x121C0CAE: popfd  */
      _flag_k = FK_EFLAGS; _flag_a = _fl; _flag_b = 0;
      _cf = _fl & 1u; _df = (_fl & 0x400u) ? -1 : 1; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0CAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x121C0CB1: cpuid  */
    MEM32(ebp + (-0xC)) = eax; /* 0x121C0CB3: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x121C0CB6: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = edx; /* 0x121C0CB9: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x121C0CBC: mov dword ptr [ebp - 0x10], ecx */
    eax = 1; /* 0x121C0CBF: mov eax, 1 */
    CPUID(eax, ebx, ecx, edx); /* 0x121C0CC4: cpuid  */
    MEM32(ebp + (-0x4)) = edx; /* 0x121C0CC6: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x121C0CC9: mov dword ptr [ebp - 8], eax */
L_121C0CCC:
    ebx = POP32_VAL(esp); /* 0x121C0CCC: pop ebx */
    /* test MEM32(ebp + (-0x4)), 0x04000000u */ /* 0x121C0CCD: test dword ptr [ebp - 4], 0x4000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x04000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0CF4; /* 0x121C0CD4: je 0x121c0cf4 */
L_121C0CD6:
    RECOMP_CALL(sub_121C0C38); /* 0x121C0CD6: call 0x121c0c38 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121C0CDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0CF4; /* 0x121C0CDD: je 0x121c0cf4 */
L_121C0CDF:
    RECOMP_ICALL(MEM32(0x120011A4)); /* 0x121C0CDF: call dword ptr [0x120011a4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x121C0CE5: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 6 */ /* 0x121C0CEA: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121C0CF4; /* 0x121C0CED: jb 0x121c0cf4 */
L_121C0CEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0CEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121C0CF1: inc eax */
    _flag_k = FK_INC;
    goto L_121C0CF6; /* 0x121C0CF2: jmp 0x121c0cf6 */
L_121C0CF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0CF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0CF6:
    ebx = POP32_VAL(esp); /* 0x121C0CF6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C0CF7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0CF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0CFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0CFEu);

L_121C0CFE:
    RECOMP_CALL(sub_121C0C87); /* 0x121C0CFE: call 0x121c0c87 */
    RECOMP_FLAGS_IN();
    MEM32(0x121D95C8) = eax; /* 0x121C0D03: mov dword ptr [0x121d95c8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0D08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0D0A: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0D10u);

L_121C0D10:
    { _itail_tgt = (uint32_t)(MEM32(0x120011EC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0D1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0D1Cu);

L_121C0D1C:
    { _itail_tgt = (uint32_t)(MEM32(0x120011E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0D28u);

L_121C0D28:
    { _itail_tgt = (uint32_t)(MEM32(0x120011E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0D33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0D33u);

L_121C0D33:
    edi = edi; /* 0x121C0D33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C0D35: push ebp */
    ebp = esp; /* 0x121C0D36: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C0D38: push ecx */
    PUSH32(esp, ecx); /* 0x121C0D39: push ecx */
    PUSH32(esp, ebx); /* 0x121C0D3A: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121C0D3B: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121C0D3E: push esi */
    PUSH32(esp, ebx); /* 0x121C0D3F: push ebx */
    RECOMP_ICALL(MEM32(0x120011D4)); /* 0x121C0D40: call dword ptr [0x120011d4] */
    RECOMP_FLAGS_IN();
    esi = ebx + 0xC; /* 0x121C0D46: lea esi, [ebx + 0xc] */
    ecx = POP32_VAL(esp); /* 0x121C0D49: pop ecx */
    ecx = MEM32(esi); /* 0x121C0D4A: mov ecx, dword ptr [esi] */
    edx = eax; /* 0x121C0D4C: mov edx, eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x121C0D4E: mov dword ptr [ebp - 4], edx */
    /* test LO8(ecx), 0x82u */ /* 0x121C0D51: test cl, 0x82 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0D6D; /* 0x121C0D54: jne 0x121c0d6d */
L_121C0D56:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0D56: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x121C0D5C: mov dword ptr [eax], 9 */
L_121C0D62:
    _flag_a = (uint32_t)((MEM32(esi) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi) | 0x20u));
    MEM32(esi) = MEM32(esi) | 0x20u; /* 0x121C0D62: or dword ptr [esi], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121C0D65: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C0EB5; /* 0x121C0D68: jmp 0x121c0eb5 */
L_121C0D6D:
    /* test LO8(ecx), 0x40u */ /* 0x121C0D6D: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0D80; /* 0x121C0D70: je 0x121c0d80 */
L_121C0D72:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0D72: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x121C0D78: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_121C0D62; /* 0x121C0D7E: jmp 0x121c0d62 */
L_121C0D80:
    PUSH32(esp, edi); /* 0x121C0D80: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121C0D81: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 1 */ /* 0x121C0D83: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0D9A; /* 0x121C0D86: je 0x121c0d9a */
L_121C0D88:
    MEM32(ebx + 0x4) = edi; /* 0x121C0D88: mov dword ptr [ebx + 4], edi */
    /* test LO8(ecx), 0x10u */ /* 0x121C0D8B: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0DEC; /* 0x121C0D8E: je 0x121c0dec */
L_121C0D90:
    eax = MEM32(ebx + 0x8); /* 0x121C0D90: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x121C0D93: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x121C0D96: mov dword ptr [ebx], eax */
    MEM32(esi) = ecx; /* 0x121C0D98: mov dword ptr [esi], ecx */
L_121C0D9A:
    eax = MEM32(esi); /* 0x121C0D9A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x121C0D9C: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x121C0D9F: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x121C0DA2: mov dword ptr [esi], eax */
    MEM32(ebx + 0x4) = edi; /* 0x121C0DA4: mov dword ptr [ebx + 4], edi */
    /* test eax, 0x10Cu */ /* 0x121C0DA7: test eax, 0x10c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0DF9; /* 0x121C0DAC: jne 0x121c0df9 */
L_121C0DAE:
    ecx = MEM32(0x120012F4); /* 0x121C0DAE: mov ecx, dword ptr [0x120012f4] */
    eax = ecx + 0x20; /* 0x121C0DB4: lea eax, [ecx + 0x20] */
    /* cmp ebx, eax */ /* 0x121C0DB7: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0DC2; /* 0x121C0DB9: je 0x121c0dc2 */
L_121C0DBB:
    eax = ecx + 0x40; /* 0x121C0DBB: lea eax, [ecx + 0x40] */
    /* cmp ebx, eax */ /* 0x121C0DBE: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C0DCE; /* 0x121C0DC0: jne 0x121c0dce */
L_121C0DC2:
    PUSH32(esp, edx); /* 0x121C0DC2: push edx */
    RECOMP_ICALL(MEM32(0x120011B4)); /* 0x121C0DC3: call dword ptr [0x120011b4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0DC9: pop ecx */
    /* test eax, eax */ /* 0x121C0DCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0DF6; /* 0x121C0DCC: jne 0x121c0df6 */
L_121C0DCE:
    RECOMP_ICALL(MEM32(0x12001300)); /* 0x121C0DCE: call dword ptr [0x12001300] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x121C0DD4: push edi */
    PUSH32(esp, edi); /* 0x121C0DD5: push edi */
    PUSH32(esp, edi); /* 0x121C0DD6: push edi */
    PUSH32(esp, edi); /* 0x121C0DD7: push edi */
    PUSH32(esp, edi); /* 0x121C0DD8: push edi */
    MEM32(eax) = 0x16u; /* 0x121C0DD9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_121BECD3); /* 0x121C0DDF: call 0x121becd3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x121C0DE4: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_121C0EA7; /* 0x121C0DE7: jmp 0x121c0ea7 */
L_121C0DEC:
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x121C0DEC: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x121C0DEF: mov dword ptr [esi], ecx */
    goto L_121C0EA7; /* 0x121C0DF1: jmp 0x121c0ea7 */
L_121C0DF6:
    edx = MEM32(ebp + (-0x4)); /* 0x121C0DF6: mov edx, dword ptr [ebp - 4] */
L_121C0DF9:
    /* test MEM32(esi), 0x108u */ /* 0x121C0DF9: test dword ptr [esi], 0x108 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0E8C; /* 0x121C0DFF: je 0x121c0e8c */
L_121C0E05:
    eax = MEM32(ebx + 0x8); /* 0x121C0E05: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebx); /* 0x121C0E08: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121C0E0A: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121C0E0C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx) = eax; /* 0x121C0E0D: mov dword ptr [ebx], eax */
    eax = MEM32(ebx + 0x18); /* 0x121C0E0F: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121C0E12: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x121C0E13: mov dword ptr [ebp - 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x121C0E16: mov dword ptr [ebx + 4], eax */
    /* test ecx, ecx */ /* 0x121C0E19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C0E2F; /* 0x121C0E1B: jle 0x121c0e2f */
L_121C0E1D:
    PUSH32(esp, ecx); /* 0x121C0E1D: push ecx */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x121C0E1E: push dword ptr [ebx + 8] */
    PUSH32(esp, edx); /* 0x121C0E21: push edx */
    RECOMP_ICALL(MEM32(0x120011B8)); /* 0x121C0E22: call dword ptr [0x120011b8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0E28: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x121C0E2B: mov edi, eax */
    goto L_121C0E7F; /* 0x121C0E2D: jmp 0x121c0e7f */
L_121C0E2F:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x121C0E2F: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0E5F; /* 0x121C0E32: je 0x121c0e5f */
L_121C0E34:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x121C0E34: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0E5F; /* 0x121C0E37: je 0x121c0e5f */
L_121C0E39:
    eax = edx; /* 0x121C0E39: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x121C0E3B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x121C0E3E: imul eax, eax, 0x24 */
    MEM32(ebp + (-0x4)) = eax; /* 0x121C0E41: mov dword ptr [ebp - 4], eax */
    eax = MEM32(0x120011C0); /* 0x121C0E44: mov eax, dword ptr [0x120011c0] */
    ebx = MEM32(ebp + (-0x4)); /* 0x121C0E49: mov ebx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x121C0E4C: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x121C0E4E: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + ecx * 4); /* 0x121C0E51: add ebx, dword ptr [eax + ecx*4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x121C0E54: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121C0E57: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x121C0E5A: mov eax, dword ptr [ebp - 4] */
    goto L_121C0E64; /* 0x121C0E5D: jmp 0x121c0e64 */
L_121C0E5F:
    eax = MEM32(0x120011C4); /* 0x121C0E5F: mov eax, dword ptr [0x120011c4] */
L_121C0E64:
    /* test MEM8(eax + 0x4), 0x20u */ /* 0x121C0E64: test byte ptr [eax + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0E7F; /* 0x121C0E68: je 0x121c0e7f */
L_121C0E6A:
    PUSH32(esp, 2); /* 0x121C0E6A: push 2 */
    PUSH32(esp, edi); /* 0x121C0E6C: push edi */
    PUSH32(esp, edi); /* 0x121C0E6D: push edi */
    PUSH32(esp, edx); /* 0x121C0E6E: push edx */
    RECOMP_ICALL(MEM32(0x120011BC)); /* 0x121C0E6F: call dword ptr [0x120011bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x121C0E75: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121C0E77: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121C0E7A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0EA4; /* 0x121C0E7D: je 0x121c0ea4 */
L_121C0E7F:
    ecx = MEM32(ebx + 0x8); /* 0x121C0E7F: mov ecx, dword ptr [ebx + 8] */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x121C0E82: mov al, byte ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x121C0E85: mov ebx, dword ptr [ebp - 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121C0E88: mov byte ptr [ecx], al */
    goto L_121C0EA0; /* 0x121C0E8A: jmp 0x121c0ea0 */
L_121C0E8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121C0E8C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121C0E8E: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x121C0E8F: push ebx */
    eax = ebp + 0x8; /* 0x121C0E90: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x121C0E93: push eax */
    PUSH32(esp, edx); /* 0x121C0E94: push edx */
    RECOMP_ICALL(MEM32(0x120011B8)); /* 0x121C0E95: call dword ptr [0x120011b8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0E9B: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x121C0E9E: mov edi, eax */
L_121C0EA0:
    /* cmp edi, ebx */ /* 0x121C0EA0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0EAC; /* 0x121C0EA2: je 0x121c0eac */
L_121C0EA4:
    _flag_a = (uint32_t)((MEM32(esi) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi) | 0x20u));
    MEM32(esi) = MEM32(esi) | 0x20u; /* 0x121C0EA4: or dword ptr [esi], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0EA7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121C0EA7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C0EB4; /* 0x121C0EAA: jmp 0x121c0eb4 */
L_121C0EAC:
    eax = MEM32(ebp + 0x8); /* 0x121C0EAC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x121C0EAF: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C0EB4:
    edi = POP32_VAL(esp); /* 0x121C0EB4: pop edi */
L_121C0EB5:
    esi = POP32_VAL(esp); /* 0x121C0EB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x121C0EB6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C0EB7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0EB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0EBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0EBEu);

L_121C0EBE:
    { _itail_tgt = (uint32_t)(MEM32(0x12001100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0ECA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0ECAu);

L_121C0ECA:
    { _itail_tgt = (uint32_t)(MEM32(0x1200117C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121C0ED5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0ED5u);

L_121C0ED5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0ED5: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0EDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0EDBu);

L_121C0EDB:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x121C0EDB: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu));
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) | 0xFFFFFFFFu; /* 0x121C0EDE: or dword ptr [ecx + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x121C0EE2: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x121C0EE6: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x121C0EEA: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0EEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0EF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0EF2u);

L_121C0EF2:
    /* cmp MEM32(ecx), 0 */ /* 0x121C0EF2: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0EFF; /* 0x121C0EF5: je 0x121c0eff */
L_121C0EF7:
    PUSH32(esp, MEM32(ecx)); /* 0x121C0EF7: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x12001024)); /* 0x121C0EF9: call dword ptr [0x12001024] */
    RECOMP_FLAGS_IN();
L_121C0EFF:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0EFF: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0F05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0F05u);

L_121C0F05:
    edi = edi; /* 0x121C0F05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C0F07: push ebp */
    ebp = esp; /* 0x121C0F08: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121C0F0A: push ebx */
    PUSH32(esp, esi); /* 0x121C0F0B: push esi */
    esi = ecx; /* 0x121C0F0C: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x121C0F0E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x121C0F11: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0F19; /* 0x121C0F12: je 0x121c0f19 */
L_121C0F14:
    RECOMP_CALL(sub_121C1816); /* 0x121C0F14: call 0x121c1816 */
    RECOMP_FLAGS_IN();
L_121C0F19:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x121C0F19: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x121C0F1D: mov ebx, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0F48; /* 0x121C0F20: je 0x121c0f48 */
L_121C0F22:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x121C0F22: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0F3A; /* 0x121C0F26: je 0x121c0f3a */
L_121C0F28:
    PUSH32(esp, 2); /* 0x121C0F28: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C0F2A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121C0F2D: push ebx */
    RECOMP_ICALL(MEM32(0x120011AC)); /* 0x121C0F2E: call dword ptr [0x120011ac] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121C0F34: mov edi, eax */
    /* test edi, edi */ /* 0x121C0F36: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0F72; /* 0x121C0F38: jne 0x121c0f72 */
L_121C0F3A:
    PUSH32(esp, 0xAu); /* 0x121C0F3A: push 0xa */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C0F3C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121C0F3F: push ebx */
    RECOMP_ICALL(MEM32(0x120011AC)); /* 0x121C0F40: call dword ptr [0x120011ac] */
    RECOMP_FLAGS_IN();
    goto L_121C0F6C; /* 0x121C0F46: jmp 0x121c0f6c */
L_121C0F48:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x121C0F48: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0F60; /* 0x121C0F4C: je 0x121c0f60 */
L_121C0F4E:
    PUSH32(esp, 2); /* 0x121C0F4E: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C0F50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121C0F53: push ebx */
    RECOMP_ICALL(MEM32(0x12001098)); /* 0x121C0F54: call dword ptr [0x12001098] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121C0F5A: mov edi, eax */
    /* test edi, edi */ /* 0x121C0F5C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C0F72; /* 0x121C0F5E: jne 0x121c0f72 */
L_121C0F60:
    PUSH32(esp, 0xAu); /* 0x121C0F60: push 0xa */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C0F62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121C0F65: push ebx */
    RECOMP_ICALL(MEM32(0x12001098)); /* 0x121C0F66: call dword ptr [0x12001098] */
    RECOMP_FLAGS_IN();
L_121C0F6C:
    edi = eax; /* 0x121C0F6C: mov edi, eax */
    /* test edi, edi */ /* 0x121C0F6E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0FA1; /* 0x121C0F70: je 0x121c0fa1 */
L_121C0F72:
    PUSH32(esp, edi); /* 0x121C0F72: push edi */
    PUSH32(esp, ebx); /* 0x121C0F73: push ebx */
    RECOMP_ICALL(MEM32(0x120010A4)); /* 0x121C0F74: call dword ptr [0x120010a4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x121C0F7A: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x121C0F7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0FA1; /* 0x121C0F7F: je 0x121c0fa1 */
L_121C0F81:
    PUSH32(esp, edi); /* 0x121C0F81: push edi */
    PUSH32(esp, ebx); /* 0x121C0F82: push ebx */
    RECOMP_ICALL(MEM32(0x1200109C)); /* 0x121C0F83: call dword ptr [0x1200109c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x121C0F89: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x121C0F8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0FA1; /* 0x121C0F8D: je 0x121c0fa1 */
L_121C0F8F:
    PUSH32(esp, eax); /* 0x121C0F8F: push eax */
    RECOMP_ICALL(MEM32(0x120010A0)); /* 0x121C0F90: call dword ptr [0x120010a0] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x121C0F96: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x121C0F99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C0FA1; /* 0x121C0F9B: je 0x121c0fa1 */
L_121C0F9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0F9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C0FAC; /* 0x121C0F9F: jmp 0x121c0fac */
L_121C0FA1:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x121C0FA1: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    eax = 0x88760B59u; /* 0x121C0FA7: mov eax, 0x88760b59 */
L_121C0FAC:
    edi = POP32_VAL(esp); /* 0x121C0FAC: pop edi */
    esi = POP32_VAL(esp); /* 0x121C0FAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x121C0FAE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121C0FAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121C0FB0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121C0FB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0FB8u);

L_121C0FB8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C0FB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121C0FBA: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121C0FBC: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121C0FBF: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121C0FC2: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x121C0FC5: mov dword ptr [ecx + 0x10], eax */
    MEM8(ecx + 0x14) = (uint8_t)(LO8(eax)); /* 0x121C0FC8: mov byte ptr [ecx + 0x14], al */
    MEM32(ecx + 0x18) = eax; /* 0x121C0FCB: mov dword ptr [ecx + 0x18], eax */
    eax = ecx; /* 0x121C0FCE: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C0FD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C0FD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C0FD6u);

L_121C0FD6:
    edi = edi; /* 0x121C0FD6: mov edi, edi */
    PUSH32(esp, esi); /* 0x121C0FD8: push esi */
    esi = ecx; /* 0x121C0FD9: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x121C0FDB: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C0FF6; /* 0x121C0FDF: je 0x121c0ff6 */
L_121C0FE1:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x121C0FE1: push dword ptr [esi + 0xc] */
    PUSH32(esp, 4); /* 0x121C0FE4: push 4 */
    RECOMP_CALL(sub_121BF59E); /* 0x121C0FE6: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x121C0FEB: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121C0FEE: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C0FF3: add esp, 0xc */
    _flag_k = FK_ADD;
L_121C0FF6:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C0FF6: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x121C0FF9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C0FFE: pop ecx */
    esi = POP32_VAL(esp); /* 0x121C0FFF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C1000: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1006u);

L_121C1006:
    edi = edi; /* 0x121C1006: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1008: push ebp */
    ebp = esp; /* 0x121C1009: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C100B: push ecx */
    PUSH32(esp, ecx); /* 0x121C100C: push ecx */
    PUSH32(esp, ebx); /* 0x121C100D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121C100E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121C1011: push esi */
    PUSH32(esp, edi); /* 0x121C1012: push edi */
    esi = ecx; /* 0x121C1013: mov esi, ecx */
    edi = ebx; /* 0x121C1015: mov edi, ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x121C1017: mov dword ptr [ebp - 4], esi */
    ecx = edi + 0x1; /* 0x121C101A: lea ecx, [edi + 1] */
L_121C101D:
    SET_LO8(eax, MEM8(edi)); /* 0x121C101D: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C101F: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C1020: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C101D; /* 0x121C1022: jne 0x121c101d */
L_121C1024:
    eax = MEM32(ebp + 0xC); /* 0x121C1024: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x121C1027: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x121C1029: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0x8) = edi; /* 0x121C102D: mov dword ptr [ebp + 8], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C1042; /* 0x121C1030: jne 0x121c1042 */
L_121C1032:
    ecx = edi + eax; /* 0x121C1032: lea ecx, [edi + eax] */
    /* cmp ecx, edi */ /* 0x121C1035: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121C1103; /* 0x121C1037: jb 0x121c1103 */
L_121C103D:
    edi = ecx; /* 0x121C103D: mov edi, ecx */
    MEM32(ebp + 0x8) = edi; /* 0x121C103F: mov dword ptr [ebp + 8], edi */
L_121C1042:
    SET_LO8(ecx, MEM8(ebx)); /* 0x121C1042: mov cl, byte ptr [ebx] */
    edx = ebx; /* 0x121C1044: mov edx, ebx */
    goto L_121C1060; /* 0x121C1046: jmp 0x121c1060 */
L_121C1048:
    /* cmp LO8(ecx), 0xAu */ /* 0x121C1048: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C105D; /* 0x121C104B: jne 0x121c105d */
L_121C104D:
    ecx = edi + eax; /* 0x121C104D: lea ecx, [edi + eax] */
    /* cmp ecx, edi */ /* 0x121C1050: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121C1103; /* 0x121C1052: jb 0x121c1103 */
L_121C1058:
    edi = ecx; /* 0x121C1058: mov edi, ecx */
    MEM32(ebp + 0x8) = edi; /* 0x121C105A: mov dword ptr [ebp + 8], edi */
L_121C105D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x121C105D: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edx)); /* 0x121C105E: mov cl, byte ptr [edx] */
L_121C1060:
    /* test LO8(ecx), LO8(ecx) */ /* 0x121C1060: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C1048; /* 0x121C1062: jne 0x121c1048 */
L_121C1064:
    eax = MEM32(esi); /* 0x121C1064: mov eax, dword ptr [esi] */
    ecx = eax + edi; /* 0x121C1066: lea ecx, [eax + edi] */
    /* cmp ecx, eax */ /* 0x121C1069: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121C1103; /* 0x121C106B: jb 0x121c1103 */
L_121C1071:
    eax = MEM32(esi + 0x4); /* 0x121C1071: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ecx */ /* 0x121C1074: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121C10B2; /* 0x121C1076: jae 0x121c10b2 */
L_121C1078:
    eax = eax + edi + 0x800; /* 0x121C1078: lea eax, [eax + edi + 0x800] */
    PUSH32(esp, eax); /* 0x121C107F: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x121C1080: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C1085: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x121C1086: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x121C1089: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1103; /* 0x121C108B: je 0x121c1103 */
L_121C108D:
    PUSH32(esp, MEM32(esi)); /* 0x121C108D: push dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C108F: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x121C1092: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C1093: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C1098: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x121C109B: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x121C10A0: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x8) = eax; /* 0x121C10A3: mov dword ptr [esi + 8], eax */
    eax = edi + 0x800; /* 0x121C10A6: lea eax, [edi + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121C10AC: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x121C10AF: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
L_121C10B2:
    esi = MEM32(esi + 0x8); /* 0x121C10B2: mov esi, dword ptr [esi + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x121C10B5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x121C10B8: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x121C10BA: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C10D1; /* 0x121C10BE: jne 0x121c10d1 */
L_121C10C0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C10C0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x20u); /* 0x121C10C3: push 0x20 */
    PUSH32(esp, esi); /* 0x121C10C5: push esi */
    RECOMP_CALL(sub_121BF434); /* 0x121C10C6: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C10CB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x121C10CE: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
L_121C10D1:
    /* cmp MEM8(ebx), 0 */ /* 0x121C10D1: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C10FE; /* 0x121C10D4: je 0x121c10fe */
L_121C10D6:
    edi = MEM32(ebp + 0xC); /* 0x121C10D6: mov edi, dword ptr [ebp + 0xc] */
L_121C10D9:
    SET_LO8(eax, MEM8(ebx)); /* 0x121C10D9: mov al, byte ptr [ebx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x121C10DB: mov byte ptr [esi], al */
    /* cmp MEM8(ebx), 0xAu */ /* 0x121C10DD: cmp byte ptr [ebx], 0xa */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C10F4; /* 0x121C10E0: jne 0x121c10f4 */
L_121C10E2:
    PUSH32(esp, edi); /* 0x121C10E2: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C10E3: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x20u); /* 0x121C10E4: push 0x20 */
    PUSH32(esp, esi); /* 0x121C10E6: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121C10E7: inc ebx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_121BF434); /* 0x121C10E8: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C10ED: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x121C10F0: add esi, edi */
    _flag_k = FK_ADD;
    goto L_121C10F6; /* 0x121C10F2: jmp 0x121c10f6 */
L_121C10F4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121C10F4: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C10F5: inc esi */
    _flag_k = FK_INC;
L_121C10F6:
    /* cmp MEM8(ebx), 0 */ /* 0x121C10F6: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C10D9; /* 0x121C10F9: jne 0x121c10d9 */
L_121C10FB:
    edi = MEM32(ebp + 0x8); /* 0x121C10FB: mov edi, dword ptr [ebp + 8] */
L_121C10FE:
    eax = MEM32(ebp + (-0x4)); /* 0x121C10FE: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edi; /* 0x121C1101: add dword ptr [eax], edi */
    _flag_k = FK_ADD;
L_121C1103:
    edi = POP32_VAL(esp); /* 0x121C1103: pop edi */
    esi = POP32_VAL(esp); /* 0x121C1104: pop esi */
    ebx = POP32_VAL(esp); /* 0x121C1105: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C1106: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121C1107: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121C110F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C110Fu);

L_121C110F:
    edi = edi; /* 0x121C110F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1111: push ebp */
    ebp = esp; /* 0x121C1112: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C1114: push ecx */
    PUSH32(esp, esi); /* 0x121C1115: push esi */
    PUSH32(esp, edi); /* 0x121C1116: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121C1117: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x121C111A: mov esi, ecx */
    ecx = edi + 0x1; /* 0x121C111C: lea ecx, [edi + 1] */
L_121C111F:
    SET_LO8(eax, MEM8(edi)); /* 0x121C111F: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C1121: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C1122: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C111F; /* 0x121C1124: jne 0x121c111f */
L_121C1126:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x121C1126: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x121C1128: mov ecx, dword ptr [esi] */
    eax = ecx + edi; /* 0x121C112A: lea eax, [ecx + edi] */
    /* cmp eax, ecx */ /* 0x121C112D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121C1188; /* 0x121C112F: jb 0x121c1188 */
L_121C1131:
    ecx = MEM32(esi + 0x4); /* 0x121C1131: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x121C1134: push ebx */
    /* cmp ecx, eax */ /* 0x121C1135: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121C1173; /* 0x121C1137: jae 0x121c1173 */
L_121C1139:
    eax = ecx + edi + 0x800; /* 0x121C1139: lea eax, [ecx + edi + 0x800] */
    PUSH32(esp, eax); /* 0x121C1140: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x121C1141: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C1146: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x121C1147: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x121C114A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1187; /* 0x121C114C: je 0x121c1187 */
L_121C114E:
    PUSH32(esp, MEM32(esi)); /* 0x121C114E: push dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C1150: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x121C1153: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C1154: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C1159: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x121C115C: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x121C1161: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x8) = eax; /* 0x121C1164: mov dword ptr [esi + 8], eax */
    eax = edi + 0x800; /* 0x121C1167: lea eax, [edi + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121C116D: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x121C1170: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
L_121C1173:
    eax = MEM32(esi + 0x8); /* 0x121C1173: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x121C1176: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x121C1178: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121C1179: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x121C117C: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C117D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C1182: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + edi; /* 0x121C1185: add dword ptr [esi], edi */
    _flag_k = FK_ADD;
L_121C1187:
    ebx = POP32_VAL(esp); /* 0x121C1187: pop ebx */
L_121C1188:
    edi = POP32_VAL(esp); /* 0x121C1188: pop edi */
    esi = POP32_VAL(esp); /* 0x121C1189: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C118A: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121C118B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121C1193(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1193u);

L_121C1193:
    edi = edi; /* 0x121C1193: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1195: push ebp */
    ebp = esp; /* 0x121C1196: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121C1198: push esi */
    PUSH32(esp, edi); /* 0x121C1199: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121C119A: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C119D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x121C119F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C11AB; /* 0x121C11A1: je 0x121c11ab */
L_121C11A3:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x121C11A3: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121C11B0; /* 0x121C11A9: jbe 0x121c11b0 */
L_121C11AB:
    esi = 0x80070057u; /* 0x121C11AB: mov esi, 0x80070057 */
L_121C11B0:
    /* test esi, esi */ /* 0x121C11B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C11E1; /* 0x121C11B2: js 0x121c11e1 */
L_121C11B4:
    PUSH32(esp, ebx); /* 0x121C11B4: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121C11B5: push dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x8); /* 0x121C11B8: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121C11BB: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121C11BE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121C11C0: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x121C11C1: push edi */
    PUSH32(esp, ebx); /* 0x121C11C2: push ebx */
    RECOMP_CALL(sub_121BED16); /* 0x121C11C3: call 0x121bed16 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121C11C8: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x121C11CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C11D7; /* 0x121C11CD: js 0x121c11d7 */
L_121C11CF:
    /* cmp eax, edi */ /* 0x121C11CF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121C11D7; /* 0x121C11D1: ja 0x121c11d7 */
L_121C11D3:
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C11E0; /* 0x121C11D3: jne 0x121c11e0 */
L_121C11D5:
    goto L_121C11DC; /* 0x121C11D5: jmp 0x121c11dc */
L_121C11D7:
    esi = 0x8007007Au; /* 0x121C11D7: mov esi, 0x8007007a */
L_121C11DC:
    MEM8(edi + ebx) = (uint8_t)(0); /* 0x121C11DC: mov byte ptr [edi + ebx], 0 */
L_121C11E0:
    ebx = POP32_VAL(esp); /* 0x121C11E0: pop ebx */
L_121C11E1:
    edi = POP32_VAL(esp); /* 0x121C11E1: pop edi */
    eax = esi; /* 0x121C11E2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121C11E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121C11E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121C11E6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121C11EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C11EEu);

L_121C11EE:
    edi = edi; /* 0x121C11EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C11F0: push ebp */
    ebp = esp; /* 0x121C11F1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x121C11F3: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x121C11F6: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121C11F9: push esi */
    /* test edx, edx */ /* 0x121C11FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1237; /* 0x121C11FC: je 0x121c1237 */
L_121C11FE:
    esi = MEM32(ebp + 0xC); /* 0x121C11FE: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0x7FFFFFFFu */ /* 0x121C1201: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121C1237; /* 0x121C1207: ja 0x121c1237 */
L_121C1209:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121C1209: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121C120B: push edi */
    edi = esi; /* 0x121C120C: mov edi, esi */
    /* test esi, esi */ /* 0x121C120E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C121E; /* 0x121C1210: je 0x121c121e */
L_121C1212:
    /* cmp MEM8(edx), LO8(ecx) */ /* 0x121C1212: cmp byte ptr [edx], cl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C121A; /* 0x121C1214: je 0x121c121a */
L_121C1216:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x121C1216: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121C1217: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121C1212; /* 0x121C1218: jne 0x121c1212 */
L_121C121A:
    /* test edi, edi */ /* 0x121C121A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C1223; /* 0x121C121C: jne 0x121c1223 */
L_121C121E:
    ecx = 0x80070057u; /* 0x121C121E: mov ecx, 0x80070057 */
L_121C1223:
    /* test eax, eax */ /* 0x121C1223: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1234; /* 0x121C1225: je 0x121c1234 */
L_121C1227:
    /* test ecx, ecx */ /* 0x121C1227: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C1231; /* 0x121C1229: js 0x121c1231 */
L_121C122B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x121C122B: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(eax) = esi; /* 0x121C122D: mov dword ptr [eax], esi */
    goto L_121C1234; /* 0x121C122F: jmp 0x121c1234 */
L_121C1231:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x121C1231: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C1234:
    edi = POP32_VAL(esp); /* 0x121C1234: pop edi */
    goto L_121C123C; /* 0x121C1235: jmp 0x121c123c */
L_121C1237:
    ecx = 0x80070057u; /* 0x121C1237: mov ecx, 0x80070057 */
L_121C123C:
    esi = POP32_VAL(esp); /* 0x121C123C: pop esi */
    /* test ecx, ecx */ /* 0x121C123D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121C1248; /* 0x121C123F: jns 0x121c1248 */
L_121C1241:
    /* test eax, eax */ /* 0x121C1241: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1248; /* 0x121C1243: je 0x121c1248 */
L_121C1245:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x121C1245: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C1248:
    eax = ecx; /* 0x121C1248: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x121C124A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121C124B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121C1253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1253u);

L_121C1253:
    edi = edi; /* 0x121C1253: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1255: push ebp */
    ebp = esp; /* 0x121C1256: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C1258: push ecx */
    PUSH32(esp, ebx); /* 0x121C1259: push ebx */
    PUSH32(esp, edi); /* 0x121C125A: push edi */
    PUSH32(esp, 0); /* 0x121C125B: push 0 */
    PUSH32(esp, 4); /* 0x121C125D: push 4 */
    ebx = ecx; /* 0x121C125F: mov ebx, ecx */
    RECOMP_CALL(sub_121BF59E); /* 0x121C1261: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121C1266: mov edi, eax */
    /* cmp MEM8(edi), 0x43u */ /* 0x121C1268: cmp byte ptr [edi], 0x43 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x121C126B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C126C: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C1279; /* 0x121C126D: jne 0x121c1279 */
L_121C126F:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x121C126F: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C1279; /* 0x121C1273: jne 0x121c1279 */
L_121C1275:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121C12B6; /* 0x121C1277: jmp 0x121c12b6 */
L_121C1279:
    PUSH32(esp, esi); /* 0x121C1279: push esi */
    eax = ebp + (-0x4); /* 0x121C127A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121C127D: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x121C127E: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x121C1283: push edi */
    RECOMP_CALL(sub_121C11EE); /* 0x121C1284: call 0x121c11ee */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121C1289: mov esi, eax */
    /* test esi, esi */ /* 0x121C128B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C12A6; /* 0x121C128D: js 0x121c12a6 */
L_121C128F:
    esi = MEM32(ebp + (-0x4)); /* 0x121C128F: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121C1292: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x121C1293: push esi */
    RECOMP_CALL(sub_121BF524); /* 0x121C1294: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C1299: pop ecx */
    MEM32(ebx + 0xC) = eax; /* 0x121C129A: mov dword ptr [ebx + 0xc], eax */
    /* test eax, eax */ /* 0x121C129D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C12BA; /* 0x121C129F: jne 0x121c12ba */
L_121C12A1:
    esi = 0x8007000Eu; /* 0x121C12A1: mov esi, 0x8007000e */
L_121C12A6:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x121C12A6: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121C12A9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0; /* 0x121C12AE: and dword ptr [ebx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C12B2:
    ecx = POP32_VAL(esp); /* 0x121C12B2: pop ecx */
    eax = esi; /* 0x121C12B3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121C12B5: pop esi */
L_121C12B6:
    edi = POP32_VAL(esp); /* 0x121C12B6: pop edi */
    ebx = POP32_VAL(esp); /* 0x121C12B7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C12B8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C12B9: ret  */
L_121C12BA:
    PUSH32(esp, edi); /* 0x121C12BA: push edi */
    PUSH32(esp, esi); /* 0x121C12BB: push esi */
    PUSH32(esp, eax); /* 0x121C12BC: push eax */
    RECOMP_CALL(sub_120DA874); /* 0x121C12BD: call 0x120da874 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121C12C2: mov esi, eax */
    /* test esi, esi */ /* 0x121C12C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C12A6; /* 0x121C12C6: js 0x121c12a6 */
L_121C12C8:
    PUSH32(esp, 0x120066A4u); /* 0x121C12C8: push 0x120066a4 */
    PUSH32(esp, 4); /* 0x121C12CD: push 4 */
    RECOMP_CALL(sub_121BF59E); /* 0x121C12CF: call 0x121bf59e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C12D4: pop ecx */
    RECOMP_BACKEDGE();
    goto L_121C12B2; /* 0x121C12D5: jmp 0x121c12b2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121C12DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C12DCu);

L_121C12DC:
    edi = edi; /* 0x121C12DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C12DE: push ebp */
    ebp = esp; /* 0x121C12DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x204u; /* 0x121C12E1: sub esp, 0x204 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121C12E7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121C12EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121C12EE: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x121C12F1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121C12F2: mov esi, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x121C12F5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x121C12F8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121C12F9: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x204); /* 0x121C12FC: lea eax, [ebp - 0x204] */
    PUSH32(esp, 0x200u); /* 0x121C1302: push 0x200 */
    PUSH32(esp, eax); /* 0x121C1307: push eax */
    RECOMP_CALL(sub_121C1193); /* 0x121C1308: call 0x121c1193 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121C130D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C131F; /* 0x121C130F: js 0x121c131f */
L_121C1311:
    eax = ebp + (-0x204); /* 0x121C1311: lea eax, [ebp - 0x204] */
    PUSH32(esp, eax); /* 0x121C1317: push eax */
    ecx = esi; /* 0x121C1318: mov ecx, esi */
    RECOMP_CALL(sub_121C110F); /* 0x121C131A: call 0x121c110f */
    RECOMP_FLAGS_IN();
L_121C131F:
    ecx = MEM32(ebp + (-0x4)); /* 0x121C131F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121C1322: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121C1324: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121C1325: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C132A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C132B: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1331(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1331u);

L_121C1331:
    edi = edi; /* 0x121C1331: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1333: push ebp */
    ebp = esp; /* 0x121C1334: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121C1336: push esi */
    esi = ecx; /* 0x121C1337: mov esi, ecx */
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x121C1339: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C135A; /* 0x121C133D: je 0x121c135a */
L_121C133F:
    eax = MEM32(ebp + 0x8); /* 0x121C133F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x121D98F0)); /* 0x121C1342: push dword ptr [eax*4 + 0x121d98f0] */
    PUSH32(esp, 0x1201838Cu); /* 0x121C1349: push 0x1201838c */
    PUSH32(esp, esi); /* 0x121C134E: push esi */
    RECOMP_CALL(sub_121C12DC); /* 0x121C134F: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C1354: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x121C1357: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
L_121C135A:
    esi = POP32_VAL(esp); /* 0x121C135A: pop esi */
    ebp = POP32_VAL(esp); /* 0x121C135B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121C135C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121C1364(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1364u);

L_121C1364:
    /* cmp MEM8(ecx + 0x10), 0 */ /* 0x121C1364: cmp byte ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C137A; /* 0x121C1368: je 0x121c137a */
L_121C136A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x121C136A: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x12018370u); /* 0x121C136D: push 0x12018370 */
    PUSH32(esp, ecx); /* 0x121C1372: push ecx */
    RECOMP_CALL(sub_121C12DC); /* 0x121C1373: call 0x121c12dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C1378: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C1379: pop ecx */
L_121C137A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C137A: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1380u);

L_121C1380:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1380: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121C1382: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121C1384: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121C1387: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x121C138A: mov dword ptr [ecx + 0xc], eax */
    eax = ecx; /* 0x121C138D: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C138F: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1395(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1395u);

L_121C1395:
    edi = edi; /* 0x121C1395: mov edi, edi */
    PUSH32(esp, esi); /* 0x121C1397: push esi */
    esi = ecx; /* 0x121C1398: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x121C139A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C13C7; /* 0x121C139D: je 0x121c13c7 */
L_121C139F:
    PUSH32(esp, edi); /* 0x121C139F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121C13A0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edi */ /* 0x121C13A2: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121C13BE; /* 0x121C13A5: jbe 0x121c13be */
L_121C13A7:
    eax = MEM32(esi); /* 0x121C13A7: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x121C13A9: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C13B8; /* 0x121C13AD: je 0x121c13b8 */
L_121C13AF:
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x121C13AF: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_121BF388); /* 0x121C13B2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C13B7: pop ecx */
L_121C13B8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C13B8: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x121C13B9: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121C13A7; /* 0x121C13BC: jb 0x121c13a7 */
L_121C13BE:
    PUSH32(esp, MEM32(esi)); /* 0x121C13BE: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x121C13C0: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C13C5: pop ecx */
    edi = POP32_VAL(esp); /* 0x121C13C6: pop edi */
L_121C13C7:
    esi = POP32_VAL(esp); /* 0x121C13C7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C13C8: ret  */
    RECOMP_REGS_OUT();
}
