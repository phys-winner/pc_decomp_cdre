#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15035F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035F50u);

L_15035F50:
    eax = 0x150BDFBCu; /* 0x15035F50: mov eax, 0x150bdfbc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035F55: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035F60u);

L_15035F60:
    RECOMP_CALL(sub_15068820); /* 0x15035F60: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15035F65: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x15035F67: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x15035F6A: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15035F86; /* 0x15035F70: je 0x15035f86 */
L_15035F72:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x15035F72: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035F86; /* 0x15035F76: jne 0x15035f86 */
L_15035F78:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15035F78: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035F86; /* 0x15035F7F: je 0x15035f86 */
L_15035F81:
    RECOMP_CALL(sub_15057225); /* 0x15035F81: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_15035F86:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xACu; /* 0x15035F86: add eax, 0xac */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035F8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FA0u);

L_15035FA0:
    eax = 0x150BDFC8u; /* 0x15035FA0: mov eax, 0x150bdfc8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FB0u);

L_15035FB0:
    eax = 0x150BDFB8u; /* 0x15035FB0: mov eax, 0x150bdfb8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FC0u);

L_15035FC0:
    eax = 0x150BDAFCu; /* 0x15035FC0: mov eax, 0x150bdafc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FD0u);

L_15035FD0:
    eax = 0x150BCE94u; /* 0x15035FD0: mov eax, 0x150bce94 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FE0u);

L_15035FE0:
    eax = 0x150BE964u; /* 0x15035FE0: mov eax, 0x150be964 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035FF0u);

L_15035FF0:
    eax = 0x150BD690u; /* 0x15035FF0: mov eax, 0x150bd690 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035FF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036000u);

L_15036000:
    eax = 0x150BD694u; /* 0x15036000: mov eax, 0x150bd694 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036005: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036010u);

L_15036010:
    eax = 0x150BDFCCu; /* 0x15036010: mov eax, 0x150bdfcc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036015: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036020u);

L_15036020:
    eax = 0x150BCE90u; /* 0x15036020: mov eax, 0x150bce90 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036025: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036030u);

L_15036030:
    eax = 0x150BDB80u; /* 0x15036030: mov eax, 0x150bdb80 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036035: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036040u);

L_15036040:
    eax = 0x150BC600u; /* 0x15036040: mov eax, 0x150bc600 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036045: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036050u);

L_15036050:
    eax = 0x150BCFE0u; /* 0x15036050: mov eax, 0x150bcfe0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036055: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036060u);

L_15036060:
    eax = 0x150BCED8u; /* 0x15036060: mov eax, 0x150bced8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036065: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036070u);

L_15036070:
    eax = 0x150BDFE0u; /* 0x15036070: mov eax, 0x150bdfe0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036075: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036080u);

L_15036080:
    RECOMP_CALL(sub_15068820); /* 0x15036080: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15036085: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x15036087: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x1503608A: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150360A6; /* 0x15036090: je 0x150360a6 */
L_15036092:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x15036092: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150360A6; /* 0x15036096: jne 0x150360a6 */
L_15036098:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15036098: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150360A6; /* 0x1503609F: je 0x150360a6 */
L_150360A1:
    RECOMP_CALL(sub_15057225); /* 0x150360A1: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_150360A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xC8u; /* 0x150360A6: add eax, 0xc8 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150360AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150360C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150360C0u);

L_150360C0:
    eax = 0x150BDFD4u; /* 0x150360C0: mov eax, 0x150bdfd4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150360C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150360D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150360D0u);

L_150360D0:
    eax = 0x150BC154u; /* 0x150360D0: mov eax, 0x150bc154 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150360D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150360E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150360E0u);

L_150360E0:
    eax = 0x150BD698u; /* 0x150360E0: mov eax, 0x150bd698 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150360E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150360F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150360F0u);

L_150360F0:
    eax = 0x150BC9ECu; /* 0x150360F0: mov eax, 0x150bc9ec */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150360F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036100u);

L_15036100:
    eax = 0x150BDB00u; /* 0x15036100: mov eax, 0x150bdb00 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036105: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036110u);

L_15036110:
    eax = 0x150BDFD0u; /* 0x15036110: mov eax, 0x150bdfd0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036115: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036120u);

L_15036120:
    eax = 0x150BDFE8u; /* 0x15036120: mov eax, 0x150bdfe8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036125: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036130u);

L_15036130:
    eax = 0x150BDFECu; /* 0x15036130: mov eax, 0x150bdfec */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036135: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036140u);

L_15036140:
    eax = 0x150BDFE4u; /* 0x15036140: mov eax, 0x150bdfe4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036145: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036150u);

L_15036150:
    eax = 0x150BDFD8u; /* 0x15036150: mov eax, 0x150bdfd8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036155: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036160u);

L_15036160:
    edi = edi; /* 0x15036160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036162: push ebp */
    ebp = esp; /* 0x15036163: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036165: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15036166: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_15035CF3); /* 0x15036169: call 0x15035cf3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1503616E: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15036172: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503617C; /* 0x15036173: je 0x1503617c */
L_15036175:
    RECOMP_CALL(sub_150698C9); /* 0x15036175: call 0x150698c9 */
    RECOMP_FLAGS_IN();
    goto L_15036181; /* 0x1503617A: jmp 0x15036181 */
L_1503617C:
    RECOMP_CALL(sub_15069566); /* 0x1503617C: call 0x15069566 */
    RECOMP_FLAGS_IN();
L_15036181:
    esi = eax; /* 0x15036181: mov esi, eax */
    /* test esi, esi */ /* 0x15036183: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1503618F; /* 0x15036185: jns 0x1503618f */
L_15036187:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15036187: push -1 */
    RECOMP_ICALL(MEM32(0x150C0204)); /* 0x15036189: call dword ptr [0x150c0204] */
    RECOMP_FLAGS_IN();
L_1503618F:
    ecx = MEM32(ebp + 0x8); /* 0x1503618F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x150BDFC0); /* 0x15036192: mov eax, dword ptr [0x150bdfc0] */
    MEM32(ecx) = eax; /* 0x15036197: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0xC); /* 0x15036199: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(0x150BDFC8); /* 0x1503619C: mov eax, dword ptr [0x150bdfc8] */
    MEM32(ecx) = eax; /* 0x150361A1: mov dword ptr [ecx], eax */
    /* cmp MEM32(0x150BDFD0), 0 */ /* 0x150361A3: cmp dword ptr [0x150bdfd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150361C4; /* 0x150361AA: jne 0x150361c4 */
L_150361AC:
    RECOMP_CALL(sub_1505E873); /* 0x150361AC: call 0x1505e873 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAF8) = eax; /* 0x150361B1: mov dword ptr [0x150bdaf8], eax */
    RECOMP_CALL(sub_15069D63); /* 0x150361B6: call 0x15069d63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150361BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150361C4; /* 0x150361BD: jns 0x150361c4 */
L_150361BF:
    RECOMP_CALL(sub_1505E752); /* 0x150361BF: call 0x1505e752 */
    RECOMP_FLAGS_IN();
L_150361C4:
    ecx = MEM32(ebp + 0x10); /* 0x150361C4: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(0x150BDFD0); /* 0x150361C7: mov eax, dword ptr [0x150bdfd0] */
    MEM32(ecx) = eax; /* 0x150361CC: mov dword ptr [ecx], eax */
    eax = esi; /* 0x150361CE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150361D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x150361D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150361D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150361D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150361D9u);

L_150361D9:
    PUSH32(esp, 0x120u); /* 0x150361D9: push 0x120 */
    PUSH32(esp, 0x150AFB18u); /* 0x150361DE: push 0x150afb18 */
    RECOMP_CALL(sub_1505E9E8); /* 0x150361E3: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x150BDB04), 0 */ /* 0x150361E8: cmp dword ptr [0x150bdb04], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB04)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150362EF; /* 0x150361EF: jne 0x150362ef */
L_150361F5:
    PUSH32(esp, MEM32(0x150BDB08)); /* 0x150361F5: push dword ptr [0x150bdb08] */
    RECOMP_CALL(sub_1505E710); /* 0x150361FB: call 0x1505e710 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036200: pop ecx */
    MEM32(0x150BDB08) = eax; /* 0x15036201: mov dword ptr [0x150bdb08], eax */
    MEM32(ebp + (-0x130)) = 0x114u; /* 0x15036206: mov dword ptr [ebp - 0x130], 0x114 */
    eax = ebp + (-0x130); /* 0x15036210: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15036216: push eax */
    RECOMP_ICALL(MEM32(0x150C0290)); /* 0x15036217: call dword ptr [0x150c0290] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503621D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503628C; /* 0x1503621F: je 0x1503628c */
L_15036221:
    eax = MEM32(ebp + (-0x120)); /* 0x15036221: mov eax, dword ptr [ebp - 0x120] */
    MEM32(0x150BDFDC) = eax; /* 0x15036227: mov dword ptr [0x150bdfdc], eax */
    edx = MEM32(ebp + (-0x12C)); /* 0x1503622C: mov edx, dword ptr [ebp - 0x12c] */
    MEM32(0x150BDFE8) = edx; /* 0x15036232: mov dword ptr [0x150bdfe8], edx */
    esi = MEM32(ebp + (-0x128)); /* 0x15036238: mov esi, dword ptr [ebp - 0x128] */
    MEM32(0x150BDFEC) = esi; /* 0x1503623E: mov dword ptr [0x150bdfec], esi */
    ecx = MEM32(ebp + (-0x124)); /* 0x15036244: mov ecx, dword ptr [ebp - 0x124] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1503624A: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDFE0) = ecx; /* 0x15036250: mov dword ptr [0x150bdfe0], ecx */
    /* cmp eax, 2 */ /* 0x15036256: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036267; /* 0x15036259: je 0x15036267 */
L_1503625B:
    _flag_a = (uint32_t)((ecx | 0x8000u)); _flag_b = (uint32_t)((ecx | 0x8000u));
    ecx = ecx | 0x8000u; /* 0x1503625B: or ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDFE0) = ecx; /* 0x15036261: mov dword ptr [0x150bdfe0], ecx */
L_15036267:
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x15036267: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x15036267: shl edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1503626A: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(0x150BDFE4) = edx; /* 0x1503626C: mov dword ptr [0x150bdfe4], edx */
    PUSH32(esp, 1); /* 0x15036272: push 1 */
    RECOMP_CALL(sub_1504676C); /* 0x15036274: call 0x1504676c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036279: pop ecx */
    /* test eax, eax */ /* 0x1503627A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503628C; /* 0x1503627C: je 0x1503628c */
L_1503627E:
    RECOMP_CALL(sub_15068978); /* 0x1503627E: call 0x15068978 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036290; /* 0x15036285: jne 0x15036290 */
L_15036287:
    RECOMP_CALL(sub_150467A2); /* 0x15036287: call 0x150467a2 */
    RECOMP_FLAGS_IN();
L_1503628C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503628C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150362F2; /* 0x1503628E: jmp 0x150362f2 */
L_15036290:
    PUSH32(esp, 0); /* 0x15036290: push 0 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15036292: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15036298: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1503629C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150362DE; /* 0x1503629E: je 0x150362de */
L_150362A0:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150362A0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150362DE; /* 0x150362A3: je 0x150362de */
L_150362A5:
    ecx = 0x5A4Du; /* 0x150362A5: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x150362AA: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150362DE; /* 0x150362AD: jne 0x150362de */
L_150362AF:
    ecx = MEM32(eax + 0x3C); /* 0x150362AF: mov ecx, dword ptr [eax + 0x3c] */
    /* test ecx, ecx */ /* 0x150362B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150362DE; /* 0x150362B4: js 0x150362de */
L_150362B6:
    /* cmp MEM32(ecx + eax), 0x4550u */ /* 0x150362B6: cmp dword ptr [ecx + eax], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150362DE; /* 0x150362BD: jne 0x150362de */
L_150362BF:
    /* cmp MEM8(ecx + eax + 0x1A), 6 */ /* 0x150362BF: cmp byte ptr [ecx + eax + 0x1a], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1A)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150362DE; /* 0x150362C4: jne 0x150362de */
L_150362C6:
    /* cmp MEM8(ecx + eax + 0x1B), 0 */ /* 0x150362C6: cmp byte ptr [ecx + eax + 0x1b], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150362DE; /* 0x150362CB: jne 0x150362de */
L_150362CD:
    PUSH32(esp, 1); /* 0x150362CD: push 1 */
    RECOMP_CALL(sub_1507E4E0); /* 0x150362CF: call 0x1507e4e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150362D4: pop ecx */
    goto L_150362DE; /* 0x150362D5: jmp 0x150362de */
L_150362DE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150362DE: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(0x150BDB04) = 1; /* 0x150362E5: mov dword ptr [0x150bdb04], 1 */
L_150362EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150362EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150362F1: inc eax */
    _flag_k = FK_INC;
L_150362F2:
    ecx = MEM32(ebp + (-0x10)); /* 0x150362F2: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150362F5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150362FC: pop ecx */
    edi = POP32_VAL(esp); /* 0x150362FD: pop edi */
    esi = POP32_VAL(esp); /* 0x150362FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x150362FF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036300: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036301: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036310u);

L_15036310:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036310: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036312: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036320u);

L_15036320:
    edi = edi; /* 0x15036320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036322: push ebp */
    ebp = esp; /* 0x15036323: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036325: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15036326: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15036329: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503634A; /* 0x1503632B: jne 0x1503634a */
L_1503632D:
    RECOMP_CALL(sub_15036430); /* 0x1503632D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15036332: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15036334: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15036335: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15036337: push ecx */
    PUSH32(esp, ecx); /* 0x15036338: push ecx */
    PUSH32(esp, ecx); /* 0x15036339: push ecx */
    PUSH32(esp, ecx); /* 0x1503633A: push ecx */
    PUSH32(esp, ecx); /* 0x1503633B: push ecx */
    MEM32(eax) = esi; /* 0x1503633C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1503633E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15036343: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15036346: mov eax, esi */
    goto L_1503636D; /* 0x15036348: jmp 0x1503636d */
L_1503634A:
    eax = MEM32(0x150BDFCC); /* 0x1503634A: mov eax, dword ptr [0x150bdfcc] */
    /* test eax, eax */ /* 0x1503634F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036369; /* 0x15036351: jne 0x15036369 */
L_15036353:
    RECOMP_CALL(sub_15069C63); /* 0x15036353: call 0x15069c63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036358: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15036364; /* 0x1503635A: jns 0x15036364 */
L_1503635C:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1503635C: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1503635F: push 0xc */
    eax = POP32_VAL(esp); /* 0x15036361: pop eax */
    goto L_1503636D; /* 0x15036362: jmp 0x1503636d */
L_15036364:
    eax = MEM32(0x150BDFCC); /* 0x15036364: mov eax, dword ptr [0x150bdfcc] */
L_15036369:
    MEM32(esi) = eax; /* 0x15036369: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503636B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503636D:
    esi = POP32_VAL(esp); /* 0x1503636D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503636E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503636F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036380u);

L_15036380:
    edi = edi; /* 0x15036380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036382: push ebp */
    ebp = esp; /* 0x15036383: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036385: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15036386: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15036389: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150363AA; /* 0x1503638B: jne 0x150363aa */
L_1503638D:
    RECOMP_CALL(sub_15036430); /* 0x1503638D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15036392: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15036394: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15036395: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15036397: push ecx */
    PUSH32(esp, ecx); /* 0x15036398: push ecx */
    PUSH32(esp, ecx); /* 0x15036399: push ecx */
    PUSH32(esp, ecx); /* 0x1503639A: push ecx */
    PUSH32(esp, ecx); /* 0x1503639B: push ecx */
    MEM32(eax) = esi; /* 0x1503639C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1503639E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150363A3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150363A6: mov eax, esi */
    goto L_150363CD; /* 0x150363A8: jmp 0x150363cd */
L_150363AA:
    eax = MEM32(0x150BDFD0); /* 0x150363AA: mov eax, dword ptr [0x150bdfd0] */
    /* test eax, eax */ /* 0x150363AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150363C9; /* 0x150363B1: jne 0x150363c9 */
L_150363B3:
    RECOMP_CALL(sub_15069D63); /* 0x150363B3: call 0x15069d63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150363B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150363C4; /* 0x150363BA: jns 0x150363c4 */
L_150363BC:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x150363BC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x150363BF: push 0xc */
    eax = POP32_VAL(esp); /* 0x150363C1: pop eax */
    goto L_150363CD; /* 0x150363C2: jmp 0x150363cd */
L_150363C4:
    eax = MEM32(0x150BDFD0); /* 0x150363C4: mov eax, dword ptr [0x150bdfd0] */
L_150363C9:
    MEM32(esi) = eax; /* 0x150363C9: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150363CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150363CD:
    esi = POP32_VAL(esp); /* 0x150363CD: pop esi */
    ebp = POP32_VAL(esp); /* 0x150363CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150363CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150363E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150363E0u);

L_150363E0:
    RECOMP_CALL(sub_15068840); /* 0x150363E0: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150363E5: mov edx, eax */
    eax = 0x150BCE84u; /* 0x150363E7: mov eax, 0x150bce84 */
    /* test edx, edx */ /* 0x150363EC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + 0xC; /* 0x150363EE: lea ecx, [edx + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150363F1: cmovne eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150363F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150363FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150363FBu);

L_150363FB:
    edi = edi; /* 0x150363FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150363FD: push ebp */
    ebp = esp; /* 0x150363FE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036400: push esi */
    RECOMP_CALL(sub_150363E0); /* 0x15036401: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15036406: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x15036409: push ecx */
    MEM32(eax) = ecx; /* 0x1503640A: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_150364C5); /* 0x1503640C: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036411: pop ecx */
    esi = eax; /* 0x15036412: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x15036414: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15036419: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x1503641B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503641C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503641D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036430u);

L_15036430:
    RECOMP_CALL(sub_15068840); /* 0x15036430: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15036435: mov edx, eax */
    eax = 0x150BCE80u; /* 0x15036437: mov eax, 0x150bce80 */
    /* test edx, edx */ /* 0x1503643C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + 0x8; /* 0x1503643E: lea ecx, [edx + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15036441: cmovne eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036444: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036450u);

L_15036450:
    edi = edi; /* 0x15036450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036452: push ebp */
    ebp = esp; /* 0x15036453: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036455: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15036456: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15036459: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036471; /* 0x1503645B: jne 0x15036471 */
L_1503645D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503645D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503645F: push eax */
    PUSH32(esp, eax); /* 0x15036460: push eax */
    PUSH32(esp, eax); /* 0x15036461: push eax */
    PUSH32(esp, eax); /* 0x15036462: push eax */
    PUSH32(esp, eax); /* 0x15036463: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15036464: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15036469: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1503646C: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1503646E: pop eax */
    goto L_1503647C; /* 0x1503646F: jmp 0x1503647c */
L_15036471:
    RECOMP_CALL(sub_150363E0); /* 0x15036471: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15036476: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x15036478: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503647A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503647C:
    esi = POP32_VAL(esp); /* 0x1503647C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503647D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503647E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036490u);

L_15036490:
    edi = edi; /* 0x15036490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036492: push ebp */
    ebp = esp; /* 0x15036493: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036495: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15036496: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15036499: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150364B1; /* 0x1503649B: jne 0x150364b1 */
L_1503649D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503649D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503649F: push eax */
    PUSH32(esp, eax); /* 0x150364A0: push eax */
    PUSH32(esp, eax); /* 0x150364A1: push eax */
    PUSH32(esp, eax); /* 0x150364A2: push eax */
    PUSH32(esp, eax); /* 0x150364A3: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150364A4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150364A9: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x150364AC: push 0x16 */
    eax = POP32_VAL(esp); /* 0x150364AE: pop eax */
    goto L_150364BC; /* 0x150364AF: jmp 0x150364bc */
L_150364B1:
    RECOMP_CALL(sub_15036430); /* 0x150364B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x150364B6: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x150364B8: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150364BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150364BC:
    esi = POP32_VAL(esp); /* 0x150364BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150364BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150364BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150364C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150364C5u);

L_150364C5:
    edi = edi; /* 0x150364C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150364C7: push ebp */
    ebp = esp; /* 0x150364C8: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x150364CA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150364CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150364CF:
    /* cmp ecx, MEM32(eax * 8 + 0x15003C98) */ /* 0x150364CF: cmp ecx, dword ptr [eax*8 + 0x15003c98] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 8 + 0x15003C98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150364FF; /* 0x150364D6: je 0x150364ff */
L_150364D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150364D8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x2Du */ /* 0x150364D9: cmp eax, 0x2d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150364CF; /* 0x150364DC: jb 0x150364cf */
L_150364DE:
    eax = ecx + (-0x13); /* 0x150364DE: lea eax, [ecx - 0x13] */
    /* cmp eax, 0x11u */ /* 0x150364E1: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150364EB; /* 0x150364E4: ja 0x150364eb */
L_150364E6:
    PUSH32(esp, 0xDu); /* 0x150364E6: push 0xd */
    eax = POP32_VAL(esp); /* 0x150364E8: pop eax */
    ebp = POP32_VAL(esp); /* 0x150364E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150364EA: ret  */
L_150364EB:
    eax = ecx + (-0xBC); /* 0x150364EB: lea eax, [ecx - 0xbc] */
    PUSH32(esp, 0xEu); /* 0x150364F1: push 0xe */
    ecx = POP32_VAL(esp); /* 0x150364F3: pop ecx */
    /* cmp ecx, eax */ /* 0x150364F4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150364F6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x150364F8: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x150364FA: add eax, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150364FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150364FE: ret  */
L_150364FF:
    eax = MEM32(eax * 8 + 0x15003C9C); /* 0x150364FF: mov eax, dword ptr [eax*8 + 0x15003c9c] */
    ebp = POP32_VAL(esp); /* 0x15036506: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036507: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036510u);

L_15036510:
    edi = edi; /* 0x15036510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036512: push ebp */
    ebp = esp; /* 0x15036513: mov ebp, esp */
    RECOMP_CALL(sub_15068840); /* 0x15036515: call 0x15068840 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503651A: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1503651C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036525; /* 0x1503651E: jne 0x15036525 */
L_15036520:
    PUSH32(esp, 0xCu); /* 0x15036520: push 0xc */
    eax = POP32_VAL(esp); /* 0x15036522: pop eax */
    ebp = POP32_VAL(esp); /* 0x15036523: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036524: ret  */
L_15036525:
    eax = MEM32(ebp + 0x8); /* 0x15036525: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x15036528: mov dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503652B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503652D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503652E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036540u);

L_15036540:
    edi = edi; /* 0x15036540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036542: push ebp */
    ebp = esp; /* 0x15036543: mov ebp, esp */
    RECOMP_CALL(sub_15068840); /* 0x15036545: call 0x15068840 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1503654A: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1503654C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036555; /* 0x1503654E: jne 0x15036555 */
L_15036550:
    PUSH32(esp, 0xCu); /* 0x15036550: push 0xc */
    eax = POP32_VAL(esp); /* 0x15036552: pop eax */
    ebp = POP32_VAL(esp); /* 0x15036553: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036554: ret  */
L_15036555:
    eax = MEM32(ebp + 0x8); /* 0x15036555: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x15036558: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503655B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503655D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503655E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036570u);

L_15036570:
    edi = edi; /* 0x15036570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036572: push ebp */
    ebp = esp; /* 0x15036573: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036575: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036578: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15036590); /* 0x1503657B: call 0x15036590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15036580: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15036582: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036583: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15036584: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x15036586: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036587: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036590u);

L_15036590:
    edi = edi; /* 0x15036590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036592: push ebp */
    ebp = esp; /* 0x15036593: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15036595: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15036599: push esi */
    PUSH32(esp, edi); /* 0x1503659A: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150365C1; /* 0x1503659B: jne 0x150365c1 */
L_1503659D:
    RECOMP_CALL(sub_150363E0); /* 0x1503659D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150365A2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x150365A4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x150365A6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150365AB: push 0x16 */
    edi = POP32_VAL(esp); /* 0x150365AD: pop edi */
    PUSH32(esp, esi); /* 0x150365AE: push esi */
    PUSH32(esp, esi); /* 0x150365AF: push esi */
    PUSH32(esp, esi); /* 0x150365B0: push esi */
    PUSH32(esp, esi); /* 0x150365B1: push esi */
    PUSH32(esp, esi); /* 0x150365B2: push esi */
    MEM32(eax) = edi; /* 0x150365B3: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x150365B5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150365BA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x150365BD: mov eax, edi */
    goto L_15036617; /* 0x150365BF: jmp 0x15036617 */
L_150365C1:
    /* test MEM32(ebp + 0xC), 0xFFFFFFF0u */ /* 0x150365C1: test dword ptr [ebp + 0xc], 0xfffffff0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503659D; /* 0x150365C8: jne 0x1503659d */
L_150365CA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150365CA: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00A4)); /* 0x150365CD: call dword ptr [0x150c00a4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150365D3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150365EE; /* 0x150365D6: jne 0x150365ee */
L_150365D8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150365D8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150365DE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150365DF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150365E4: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x150365E5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x150365EA: mov eax, dword ptr [eax] */
    goto L_15036617; /* 0x150365EC: jmp 0x15036617 */
L_150365EE:
    /* test LO8(eax), 0x10u */ /* 0x150365EE: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036615; /* 0x150365F0: jne 0x15036615 */
L_150365F2:
    /* test LO8(eax), 1 */ /* 0x150365F2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036615; /* 0x150365F4: je 0x15036615 */
L_150365F6:
    /* test MEM8(ebp + 0xC), 2 */ /* 0x150365F6: test byte ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036615; /* 0x150365FA: je 0x15036615 */
L_150365FC:
    RECOMP_CALL(sub_150363E0); /* 0x150365FC: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 5; /* 0x15036601: mov dword ptr [eax], 5 */
    RECOMP_CALL(sub_15036430); /* 0x15036607: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xDu); /* 0x1503660C: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1503660E: pop ecx */
    MEM32(eax) = ecx; /* 0x1503660F: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15036611: mov eax, ecx */
    goto L_15036617; /* 0x15036613: jmp 0x15036617 */
L_15036615:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036615: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036617:
    edi = POP32_VAL(esp); /* 0x15036617: pop edi */
    esi = POP32_VAL(esp); /* 0x15036618: pop esi */
    ebp = POP32_VAL(esp); /* 0x15036619: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503661A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036630u);

L_15036630:
    edi = edi; /* 0x15036630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036632: push ebp */
    ebp = esp; /* 0x15036633: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x15036635: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503663B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15036640: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15036642: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15036645: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15036648: push ebx */
    PUSH32(esp, esi); /* 0x15036649: push esi */
    PUSH32(esp, edi); /* 0x1503664A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503664B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x10C); /* 0x1503664D: lea esi, [ebp - 0x10c] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15036653: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x110)) = ebx; /* 0x15036656: mov dword ptr [ebp - 0x110], ebx */
    /* test eax, eax */ /* 0x1503665C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036684; /* 0x1503665E: jne 0x15036684 */
L_15036660:
    RECOMP_CALL(sub_150363E0); /* 0x15036660: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15036665: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x15036667: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1503666C: push ebx */
    PUSH32(esp, ebx); /* 0x1503666D: push ebx */
    PUSH32(esp, ebx); /* 0x1503666E: push ebx */
    PUSH32(esp, ebx); /* 0x1503666F: push ebx */
    PUSH32(esp, ebx); /* 0x15036670: push ebx */
    MEM32(eax) = 0x16u; /* 0x15036671: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15036677: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503667C: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15036752; /* 0x1503667F: jmp 0x15036752 */
L_15036684:
    PUSH32(esp, eax); /* 0x15036684: push eax */
    RECOMP_ICALL(MEM32(0x150C01D8)); /* 0x15036685: call dword ptr [0x150c01d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503668B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503673A; /* 0x1503668D: je 0x1503673a */
L_15036693:
    eax = ebp + (-0x10C); /* 0x15036693: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x15036699: push eax */
    PUSH32(esp, 0x105u); /* 0x1503669A: push 0x105 */
    RECOMP_ICALL(MEM32(0x150C01F4)); /* 0x1503669F: call dword ptr [0x150c01f4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150366A5: mov ebx, eax */
    /* cmp ebx, 0x104u */ /* 0x150366A7: cmp ebx, 0x104 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150366DB; /* 0x150366AD: jle 0x150366db */
L_150366AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150366AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x1; /* 0x150366B1: lea ecx, [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150366B4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150366B5: push eax */
    PUSH32(esp, ecx); /* 0x150366B6: push ecx */
    MEM32(ebp + (-0x110)) = eax; /* 0x150366B7: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x150366BD: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150366C2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150366C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150366C5: pop ecx */
    /* test esi, esi */ /* 0x150366C6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150366CE; /* 0x150366C8: jne 0x150366ce */
L_150366CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150366CA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503673A; /* 0x150366CC: jmp 0x1503673a */
L_150366CE:
    PUSH32(esp, esi); /* 0x150366CE: push esi */
    eax = ebx + 0x1; /* 0x150366CF: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x150366D2: push eax */
    RECOMP_ICALL(MEM32(0x150C01F4)); /* 0x150366D3: call dword ptr [0x150c01f4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150366D9: mov ebx, eax */
L_150366DB:
    /* test ebx, ebx */ /* 0x150366DB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036734; /* 0x150366DD: je 0x15036734 */
L_150366DF:
    SET_LO8(eax, MEM8(esi)); /* 0x150366DF: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x150366E1: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150366E9; /* 0x150366E3: je 0x150366e9 */
L_150366E5:
    /* cmp LO8(eax), 0x2Fu */ /* 0x150366E5: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150366F8; /* 0x150366E7: jne 0x150366f8 */
L_150366E9:
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x150366E9: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150366F8; /* 0x150366EC: jne 0x150366f8 */
L_150366EE:
    ebx = MEM32(ebp + (-0x110)); /* 0x150366EE: mov ebx, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150366F4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036747; /* 0x150366F6: jmp 0x15036747 */
L_150366F8:
    MEM8(ebp + (-0x114)) = (uint8_t)(0x3Du); /* 0x150366F8: mov byte ptr [ebp - 0x114], 0x3d */
    eax = (uint32_t)MEM8(esi); /* 0x150366FF: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15036702: push eax */
    RECOMP_CALL(sub_15051AD0); /* 0x15036703: call 0x15051ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036708: pop ecx */
    MEM8(ebp + (-0x113)) = (uint8_t)(LO8(eax)); /* 0x15036709: mov byte ptr [ebp - 0x113], al */
    eax = ebp + (-0x114); /* 0x1503670F: lea eax, [ebp - 0x114] */
    PUSH32(esp, esi); /* 0x15036715: push esi */
    PUSH32(esp, eax); /* 0x15036716: push eax */
    MEM16(ebp + (-0x112)) = (uint16_t)(0x3Au); /* 0x15036717: mov word ptr [ebp - 0x112], 0x3a */
    RECOMP_ICALL(MEM32(0x150C01DC)); /* 0x15036720: call dword ptr [0x150c01dc] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x110)); /* 0x15036726: mov ebx, dword ptr [ebp - 0x110] */
    /* test eax, eax */ /* 0x1503672C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503673A; /* 0x1503672E: je 0x1503673a */
L_15036730:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15036730: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036747; /* 0x15036732: jmp 0x15036747 */
L_15036734:
    ebx = MEM32(ebp + (-0x110)); /* 0x15036734: mov ebx, dword ptr [ebp - 0x110] */
L_1503673A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503673A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15036740: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15036741: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036746: pop ecx */
L_15036747:
    /* test ebx, ebx */ /* 0x15036747: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036752; /* 0x15036749: je 0x15036752 */
L_1503674B:
    PUSH32(esp, esi); /* 0x1503674B: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1503674C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036751: pop ecx */
L_15036752:
    ecx = MEM32(ebp + (-0x4)); /* 0x15036752: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x15036755: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15036757: pop edi */
    esi = POP32_VAL(esp); /* 0x15036758: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15036759: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1503675B: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1503675C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036761: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036762: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036770u);

L_15036770:
    PUSH32(esp, 0x10u); /* 0x15036770: push 0x10 */
    PUSH32(esp, 0x150AFB58u); /* 0x15036772: push 0x150afb58 */
    RECOMP_CALL(sub_1505E988); /* 0x15036777: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1503677C: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 1 */ /* 0x1503677F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150367E1; /* 0x15036782: jl 0x150367e1 */
L_15036784:
    /* cmp eax, 0x1Au */ /* 0x15036784: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150367E1; /* 0x15036787: jg 0x150367e1 */
L_15036789:
    PUSH32(esp, 7); /* 0x15036789: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1503678B: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036790: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15036791: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15036793: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(ebp + 0x8); /* 0x15036796: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x40u); /* 0x15036799: add al, 0x40 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x1C)) = (uint8_t)(LO8(eax)); /* 0x1503679B: mov byte ptr [ebp - 0x1c], al */
    MEM16(ebp + (-0x1B)) = (uint16_t)(0x3Au); /* 0x1503679E: mov word ptr [ebp - 0x1b], 0x3a */
    eax = ebp + (-0x1C); /* 0x150367A4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150367A7: push eax */
    RECOMP_ICALL(MEM32(0x150C01D8)); /* 0x150367A8: call dword ptr [0x150c01d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150367AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150367C2; /* 0x150367B0: jne 0x150367c2 */
L_150367B2:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150367B2: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150367B8: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150367B9: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150367BE: pop ecx */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150367BF: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150367C2:
    MEM32(ebp + (-0x20)) = ebx; /* 0x150367C2: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150367C5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150367D8); /* 0x150367CC: call 0x150367d8 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x150367D1: mov eax, ebx */
    goto L_15036809; /* 0x150367D3: jmp 0x15036809 */
L_150367E1:
    RECOMP_CALL(sub_150363E0); /* 0x150367E1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x150367E6: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_15036430); /* 0x150367EC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x150367F1: mov dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150367F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x150367F9: push ebx */
    PUSH32(esp, ebx); /* 0x150367FA: push ebx */
    PUSH32(esp, ebx); /* 0x150367FB: push ebx */
    PUSH32(esp, ebx); /* 0x150367FC: push ebx */
    PUSH32(esp, ebx); /* 0x150367FD: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x150367FE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15036803: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15036806: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036809:
    ecx = MEM32(ebp + (-0x10)); /* 0x15036809: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1503680C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15036813: pop ecx */
    edi = POP32_VAL(esp); /* 0x15036814: pop edi */
    esi = POP32_VAL(esp); /* 0x15036815: pop esi */
    ebx = POP32_VAL(esp); /* 0x15036816: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036817: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036818: ret  */
    RECOMP_REGS_OUT();
}

void sub_150367D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150367D8u);

L_150367D8:
    PUSH32(esp, 7); /* 0x150367D8: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x150367DA: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150367DF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150367E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036820u);

L_15036820:
    edi = edi; /* 0x15036820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036822: push ebp */
    ebp = esp; /* 0x15036823: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x110u; /* 0x15036825: sub esp, 0x110 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503682B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15036830: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15036832: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15036835: push ebx */
    PUSH32(esp, esi); /* 0x15036836: push esi */
    PUSH32(esp, edi); /* 0x15036837: push edi */
    edi = ebp + (-0x10C); /* 0x15036838: lea edi, [ebp - 0x10c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503683E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x15036840: mov eax, edi */
    ebx = esi; /* 0x15036842: mov ebx, esi */
    PUSH32(esp, eax); /* 0x15036844: push eax */
    PUSH32(esp, 0x105u); /* 0x15036845: push 0x105 */
    RECOMP_ICALL(MEM32(0x150C01F4)); /* 0x1503684A: call dword ptr [0x150c01f4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x104u */ /* 0x15036850: cmp eax, 0x104 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150368B0; /* 0x15036855: jle 0x150368b0 */
L_15036857:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15036857: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 1); /* 0x15036858: push 1 */
    PUSH32(esp, eax); /* 0x1503685A: push eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x1503685B: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15036861: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15036866: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15036868: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036869: pop ecx */
    /* test edi, edi */ /* 0x1503686A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150368A0; /* 0x1503686C: jne 0x150368a0 */
L_1503686E:
    RECOMP_CALL(sub_15036430); /* 0x1503686E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15036873: mov dword ptr [eax], 0xc */
L_15036879:
    RECOMP_CALL(sub_15036430); /* 0x15036879: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1503687E: mov dword ptr [eax], 0xc */
L_15036884:
    /* test ebx, ebx */ /* 0x15036884: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503688F; /* 0x15036886: je 0x1503688f */
L_15036888:
    PUSH32(esp, edi); /* 0x15036888: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15036889: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503688E: pop ecx */
L_1503688F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503688F: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x15036892: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x15036894: pop edi */
    esi = POP32_VAL(esp); /* 0x15036895: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15036896: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15036898: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15036899: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503689E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503689F: ret  */
L_150368A0:
    PUSH32(esp, edi); /* 0x150368A0: push edi */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x150368A1: push dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150368A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150368A9: inc ebx */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(0x150C01F4)); /* 0x150368AA: call dword ptr [0x150c01f4] */
    RECOMP_FLAGS_IN();
L_150368B0:
    /* test eax, eax */ /* 0x150368B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036879; /* 0x150368B2: je 0x15036879 */
L_150368B4:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x150368B4: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036884; /* 0x150368B8: jne 0x15036884 */
L_150368BA:
    eax = (uint32_t)MEM8(edi); /* 0x150368BA: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x150368BD: push eax */
    RECOMP_CALL(sub_15032D50); /* 0x150368BE: call 0x15032d50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150368C3: pop ecx */
    esi = eax + (-0x40); /* 0x150368C4: lea esi, [eax - 0x40] */
    RECOMP_BACKEDGE();
    goto L_15036884; /* 0x150368C7: jmp 0x15036884 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150368D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150368D0u);

L_150368D0:
    edi = edi; /* 0x150368D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150368D2: push ebp */
    ebp = esp; /* 0x150368D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150368D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150368D6: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150368D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036901; /* 0x150368DB: jne 0x15036901 */
L_150368DD:
    RECOMP_CALL(sub_150363E0); /* 0x150368DD: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150368E2: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x150368E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150368E9: push esi */
    PUSH32(esp, esi); /* 0x150368EA: push esi */
    PUSH32(esp, esi); /* 0x150368EB: push esi */
    PUSH32(esp, esi); /* 0x150368EC: push esi */
    PUSH32(esp, esi); /* 0x150368ED: push esi */
    MEM32(eax) = 0x16u; /* 0x150368EE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150368F4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150368F9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150368FC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150368FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036939; /* 0x150368FF: jmp 0x15036939 */
L_15036901:
    PUSH32(esp, esi); /* 0x15036901: push esi */
    RECOMP_ICALL(MEM32(0x150C00A4)); /* 0x15036902: call dword ptr [0x150c00a4] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15036908: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1503690A: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503691E; /* 0x1503690D: jne 0x1503691e */
L_1503690F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503690F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15036915: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15036916: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503691B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_150368FC; /* 0x1503691C: jmp 0x150368fc */
L_1503691E:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1503691E: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x15036921: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0xC), 0x80u */ /* 0x15036924: test byte ptr [ebp + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x15036928: cmove edx, eax */
    PUSH32(esp, edx); /* 0x1503692B: push edx */
    PUSH32(esp, esi); /* 0x1503692C: push esi */
    RECOMP_ICALL(MEM32(0x150C0118)); /* 0x1503692D: call dword ptr [0x150c0118] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036933: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503690F; /* 0x15036935: je 0x1503690f */
L_15036937:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036937: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036939:
    esi = POP32_VAL(esp); /* 0x15036939: pop esi */
    ebp = POP32_VAL(esp); /* 0x1503693A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503693B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036950u);

L_15036950:
    edi = edi; /* 0x15036950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036952: push ebp */
    ebp = esp; /* 0x15036953: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15036955: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x15036956: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15036959: push ebx */
    PUSH32(esp, esi); /* 0x1503695A: push esi */
    PUSH32(esp, edi); /* 0x1503695B: push edi */
    /* test ecx, ecx */ /* 0x1503695C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036A2E; /* 0x1503695E: je 0x15036a2e */
L_15036964:
    /* cmp MEM8(ecx), 0 */ /* 0x15036964: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036A2E; /* 0x15036967: je 0x15036a2e */
L_1503696D:
    ebx = MEM32(ebp + 0x8); /* 0x1503696D: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15036970: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150369BF; /* 0x15036972: jne 0x150369bf */
L_15036974:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036974: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15036976: push eax */
    PUSH32(esp, eax); /* 0x15036977: push eax */
    PUSH32(esp, eax); /* 0x15036978: push eax */
    PUSH32(esp, ecx); /* 0x15036979: push ecx */
    RECOMP_ICALL(MEM32(0x150C00AC)); /* 0x1503697A: call dword ptr [0x150c00ac] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15036980: mov esi, eax */
    /* test esi, esi */ /* 0x15036982: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036999; /* 0x15036984: jne 0x15036999 */
L_15036986:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15036986: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1503698C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1503698D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036992: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036A3A; /* 0x15036994: jmp 0x15036a3a */
L_15036999:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15036999: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1503699C: push 1 */
    if (CMP_A(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x10); } /* 0x1503699E: cmova esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x150369A2: push esi */
    RECOMP_CALL(sub_150487F0); /* 0x150369A3: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150369A8: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x150369AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150369AB: pop ecx */
    /* test edi, edi */ /* 0x150369AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150369E6; /* 0x150369AE: jne 0x150369e6 */
L_150369B0:
    RECOMP_CALL(sub_15036430); /* 0x150369B0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150369B5: mov dword ptr [eax], 0xc */
L_150369BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150369BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036A3B; /* 0x150369BD: jmp 0x15036a3b */
L_150369BF:
    esi = MEM32(ebp + 0x10); /* 0x150369BF: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x150369C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150369E2; /* 0x150369C4: jne 0x150369e2 */
L_150369C6:
    RECOMP_CALL(sub_15036430); /* 0x150369C6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150369CB: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150369D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150369D3: push eax */
    PUSH32(esp, eax); /* 0x150369D4: push eax */
    PUSH32(esp, eax); /* 0x150369D5: push eax */
    PUSH32(esp, eax); /* 0x150369D6: push eax */
    PUSH32(esp, eax); /* 0x150369D7: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150369D8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150369DD: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_150369BB; /* 0x150369E0: jmp 0x150369bb */
L_150369E2:
    edi = ebx; /* 0x150369E2: mov edi, ebx */
    goto L_150369E9; /* 0x150369E4: jmp 0x150369e9 */
L_150369E6:
    ecx = MEM32(ebp + 0xC); /* 0x150369E6: mov ecx, dword ptr [ebp + 0xc] */
L_150369E9:
    eax = ebp + (-0x4); /* 0x150369E9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150369EC: push eax */
    PUSH32(esp, edi); /* 0x150369ED: push edi */
    PUSH32(esp, esi); /* 0x150369EE: push esi */
    PUSH32(esp, ecx); /* 0x150369EF: push ecx */
    RECOMP_ICALL(MEM32(0x150C00AC)); /* 0x150369F0: call dword ptr [0x150c00ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x150369F6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15036A12; /* 0x150369F8: jb 0x15036a12 */
L_150369FA:
    /* test ebx, ebx */ /* 0x150369FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036A05; /* 0x150369FC: jne 0x15036a05 */
L_150369FE:
    PUSH32(esp, edi); /* 0x150369FE: push edi */
    RECOMP_CALL(sub_15048840); /* 0x150369FF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036A04: pop ecx */
L_15036A05:
    RECOMP_CALL(sub_15036430); /* 0x15036A05: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15036A0A: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_150369BB; /* 0x15036A10: jmp 0x150369bb */
L_15036A12:
    /* test eax, eax */ /* 0x15036A12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036A2A; /* 0x15036A14: jne 0x15036a2a */
L_15036A16:
    /* test ebx, ebx */ /* 0x15036A16: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036986; /* 0x15036A18: jne 0x15036986 */
L_15036A1E:
    PUSH32(esp, edi); /* 0x15036A1E: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15036A1F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036A24: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15036986; /* 0x15036A25: jmp 0x15036986 */
L_15036A2A:
    eax = edi; /* 0x15036A2A: mov eax, edi */
    goto L_15036A3B; /* 0x15036A2C: jmp 0x15036a3b */
L_15036A2E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15036A2E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036A31: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15036AA0); /* 0x15036A34: call 0x15036aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036A39: pop ecx */
L_15036A3A:
    ecx = POP32_VAL(esp); /* 0x15036A3A: pop ecx */
L_15036A3B:
    edi = POP32_VAL(esp); /* 0x15036A3B: pop edi */
    esi = POP32_VAL(esp); /* 0x15036A3C: pop esi */
    ebx = POP32_VAL(esp); /* 0x15036A3D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036A3E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036A3F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036A50u);

L_15036A50:
    edi = edi; /* 0x15036A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036A52: push ebp */
    ebp = esp; /* 0x15036A53: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15036A55: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036A58: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036A5B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15036950); /* 0x15036A5E: call 0x15036950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036A63: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15036A66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036A67: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036A6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036A6Eu);

L_15036A6E:
    edi = edi; /* 0x15036A6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036A70: push ebp */
    ebp = esp; /* 0x15036A71: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036A73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15036A75: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15036A84; /* 0x15036A78: ja 0x15036a84 */
L_15036A7A:
    edx = MEM32(ebp + 0x8); /* 0x15036A7A: mov edx, dword ptr [ebp + 8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_15036A8C; /* 0x15036A7D: jb 0x15036a8c */
L_15036A7F:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15036A7F: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15036A8C; /* 0x15036A82: jbe 0x15036a8c */
L_15036A84:
    eax = 0x80070216u; /* 0x15036A84: mov eax, 0x80070216 */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15036A89: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036A8C:
    ecx = MEM32(ebp + 0x10); /* 0x15036A8C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = edx; /* 0x15036A8F: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x15036A91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036A92: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036AA0u);

L_15036AA0:
    PUSH32(esp, 0xCu); /* 0x15036AA0: push 0xc */
    PUSH32(esp, 0x150AFB78u); /* 0x15036AA2: push 0x150afb78 */
    RECOMP_CALL(sub_1505E988); /* 0x15036AA7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15036AAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15036AAE: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x15036AB1: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x15036AB3: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036AB8: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15036AB9: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036ABC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036ABF: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15036AC2: push esi */
    RECOMP_CALL(sub_15036B62); /* 0x15036AC3: call 0x15036b62 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036AC8: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15036ACB: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15036ACD: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15036AD0: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15036AF1); /* 0x15036AD7: call 0x15036af1 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15036ADC: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15036ADE: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15036AE1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15036AE8: pop ecx */
    edi = POP32_VAL(esp); /* 0x15036AE9: pop edi */
    esi = POP32_VAL(esp); /* 0x15036AEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x15036AEB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036AEC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036AED: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036AF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036AF1u);

L_15036AF1:
    PUSH32(esp, 7); /* 0x15036AF1: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x15036AF3: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036AF8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036AF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036B00u);

L_15036B00:
    PUSH32(esp, 0xCu); /* 0x15036B00: push 0xc */
    PUSH32(esp, 0x150AFB98u); /* 0x15036B02: push 0x150afb98 */
    RECOMP_CALL(sub_1505E988); /* 0x15036B07: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15036B0C: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 7); /* 0x15036B10: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x15036B12: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036B17: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15036B18: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15036B1C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036B1F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036B22: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15036B62); /* 0x15036B25: call 0x15036b62 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036B2A: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15036B2D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15036B2F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15036B32: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15036B53); /* 0x15036B39: call 0x15036b53 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15036B3E: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15036B40: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15036B43: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15036B4A: pop ecx */
    edi = POP32_VAL(esp); /* 0x15036B4B: pop edi */
    esi = POP32_VAL(esp); /* 0x15036B4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x15036B4D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036B4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036B4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036B53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036B53u);

L_15036B53:
    PUSH32(esp, 7); /* 0x15036B53: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x15036B55: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036B5A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036B5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036B62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036B62u);

L_15036B62:
    edi = edi; /* 0x15036B62: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036B64: push ebp */
    ebp = esp; /* 0x15036B65: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x15036B67: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15036B6D: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15036B72: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15036B74: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15036B77: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15036B78: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15036B7B: push esi */
    PUSH32(esp, edi); /* 0x15036B7C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15036B7D: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15036B80: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036BF2; /* 0x15036B82: je 0x15036bf2 */
L_15036B84:
    PUSH32(esp, ebx); /* 0x15036B84: push ebx */
    RECOMP_CALL(sub_15036C83); /* 0x15036B85: call 0x15036c83 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036B8A: pop ecx */
    /* test eax, eax */ /* 0x15036B8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036BB6; /* 0x15036B8D: jne 0x15036bb6 */
L_15036B8F:
    RECOMP_CALL(sub_150363E0); /* 0x15036B8F: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x15036B94: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_15036430); /* 0x15036B9A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x15036B9F: mov dword ptr [eax], 0xd */
L_15036BA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036BA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036BA7:
    ecx = MEM32(ebp + (-0x4)); /* 0x15036BA7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15036BAA: pop edi */
    esi = POP32_VAL(esp); /* 0x15036BAB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15036BAC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15036BAE: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15036BAF: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036BB4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036BB5: ret  */
L_15036BB6:
    eax = ebp + (-0x114); /* 0x15036BB6: lea eax, [ebp - 0x114] */
    MEM16(ebp + (-0x10B)) = (uint16_t)(0x2E3Au); /* 0x15036BBC: mov word ptr [ebp - 0x10b], 0x2e3a */
    PUSH32(esp, eax); /* 0x15036BC5: push eax */
    eax = ebp + (-0x108); /* 0x15036BC6: lea eax, [ebp - 0x108] */
    MEM8(ebp + (-0x109)) = (uint8_t)(0); /* 0x15036BCC: mov byte ptr [ebp - 0x109], 0 */
    PUSH32(esp, eax); /* 0x15036BD3: push eax */
    esi = 0x104u; /* 0x15036BD4: mov esi, 0x104 */
    eax = ebp + (-0x10C); /* 0x15036BD9: lea eax, [ebp - 0x10c] */
    PUSH32(esp, esi); /* 0x15036BDF: push esi */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x40u); /* 0x15036BE0: add bl, 0x40 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x15036BE3: push eax */
    MEM8(ebp + (-0x10C)) = (uint8_t)(LO8(ebx)); /* 0x15036BE4: mov byte ptr [ebp - 0x10c], bl */
    RECOMP_ICALL(MEM32(0x150C00AC)); /* 0x15036BEA: call dword ptr [0x150c00ac] */
    RECOMP_FLAGS_IN();
    goto L_15036C05; /* 0x15036BF0: jmp 0x15036c05 */
L_15036BF2:
    eax = ebp + (-0x108); /* 0x15036BF2: lea eax, [ebp - 0x108] */
    esi = 0x104u; /* 0x15036BF8: mov esi, 0x104 */
    PUSH32(esp, eax); /* 0x15036BFD: push eax */
    PUSH32(esp, esi); /* 0x15036BFE: push esi */
    RECOMP_ICALL(MEM32(0x150C01F4)); /* 0x15036BFF: call dword ptr [0x150c01f4] */
    RECOMP_FLAGS_IN();
L_15036C05:
    /* test eax, eax */ /* 0x15036C05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036BA5; /* 0x15036C07: je 0x15036ba5 */
L_15036C09:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15036C09: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x15036C0A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15036BA5; /* 0x15036C0C: ja 0x15036ba5 */
L_15036C0E:
    esi = MEM32(ebp + 0x10); /* 0x15036C0E: mov esi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15036C11: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036C51; /* 0x15036C13: jne 0x15036c51 */
L_15036C15:
    /* cmp eax, esi */ /* 0x15036C15: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { esi = eax; } /* 0x15036C17: cmovg esi, eax */
    eax = ebp + (-0x110); /* 0x15036C1A: lea eax, [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15036C20: push eax */
    PUSH32(esp, edi); /* 0x15036C21: push edi */
    PUSH32(esp, esi); /* 0x15036C22: push esi */
    RECOMP_CALL(sub_15036A6E); /* 0x15036C23: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036C28: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15036C2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15036C41; /* 0x15036C2D: js 0x15036c41 */
L_15036C2F:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x15036C2F: push dword ptr [ebp - 0x110] */
    RECOMP_CALL(sub_15048A30); /* 0x15036C35: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15036C3A: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15036C3C: pop ecx */
    /* test edi, edi */ /* 0x15036C3D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036C65; /* 0x15036C3F: jne 0x15036c65 */
L_15036C41:
    RECOMP_CALL(sub_15036430); /* 0x15036C41: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15036C46: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15036BA5; /* 0x15036C4C: jmp 0x15036ba5 */
L_15036C51:
    /* cmp eax, esi */ /* 0x15036C51: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15036C65; /* 0x15036C53: jle 0x15036c65 */
L_15036C55:
    RECOMP_CALL(sub_15036430); /* 0x15036C55: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15036C5A: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_15036BA5; /* 0x15036C60: jmp 0x15036ba5 */
L_15036C65:
    eax = ebp + (-0x108); /* 0x15036C65: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x15036C6B: push eax */
    PUSH32(esp, esi); /* 0x15036C6C: push esi */
    PUSH32(esp, edi); /* 0x15036C6D: push edi */
    RECOMP_CALL(sub_1508E640); /* 0x15036C6E: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036C73: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15036C76: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_15036BA7; /* 0x15036C78: jmp 0x15036ba7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15036C83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036C83u);

L_15036C83:
    edi = edi; /* 0x15036C83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036C85: push ebp */
    ebp = esp; /* 0x15036C86: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15036C88: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x15036C89: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15036C8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036C93; /* 0x15036C8E: jne 0x15036c93 */
L_15036C90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15036C90: inc eax */
    _flag_k = FK_INC;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036C91: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036C92: ret  */
L_15036C93:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x40u); /* 0x15036C93: add al, 0x40 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM16(ebp + (-0x3)) = (uint16_t)(0x5C3Au); /* 0x15036C95: mov word ptr [ebp - 3], 0x5c3a */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15036C9B: mov byte ptr [ebp - 4], al */
    eax = ebp + (-0x4); /* 0x15036C9E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15036CA1: push eax */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x15036CA2: mov byte ptr [ebp - 1], 0 */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x15036CA6: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15036CAC: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036CAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15036CB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036CBA; /* 0x15036CB2: je 0x15036cba */
L_15036CB4:
    /* cmp ecx, 1 */ /* 0x15036CB4: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15036CB7: setne al */
L_15036CBA:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15036CBA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036CBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036CD0u);

L_15036CD0:
    { _itail_tgt = (uint32_t)(MEM32(0x150C0234)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_15036CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036CE0u);

L_15036CE0:
    edi = edi; /* 0x15036CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036CE2: push ebp */
    ebp = esp; /* 0x15036CE3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15036CE5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036CE7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00B4)); /* 0x15036CEA: call dword ptr [0x150c00b4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036CF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036D0A; /* 0x15036CF2: jne 0x15036d0a */
L_15036CF4:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15036CF4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036CFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036D0A; /* 0x15036CFC: je 0x15036d0a */
L_15036CFE:
    PUSH32(esp, eax); /* 0x15036CFE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15036CFF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036D04: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15036D05: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15036D08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036D09: ret  */
L_15036D0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036D0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15036D0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036D0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036D20u);

L_15036D20:
    edi = edi; /* 0x15036D20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036D22: push ebp */
    ebp = esp; /* 0x15036D23: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036D25: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00B8)); /* 0x15036D28: call dword ptr [0x150c00b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036D2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036D48; /* 0x15036D30: jne 0x15036d48 */
L_15036D32:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15036D32: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15036D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036D48; /* 0x15036D3A: je 0x15036d48 */
L_15036D3C:
    PUSH32(esp, eax); /* 0x15036D3C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15036D3D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036D42: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15036D43: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15036D46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036D47: ret  */
L_15036D48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036D48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15036D4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036D4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036D52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036D52u);

L_15036D52:
    edi = edi; /* 0x15036D52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036D54: push ebp */
    ebp = esp; /* 0x15036D55: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15036D57: mov edx, dword ptr [ebp + 8] */
    ecx = edx; /* 0x15036D5A: mov ecx, edx */
    PUSH32(esp, ebx); /* 0x15036D5C: push ebx */
    PUSH32(esp, esi); /* 0x15036D5D: push esi */
    esi = ecx + 0x1; /* 0x15036D5E: lea esi, [ecx + 1] */
L_15036D61:
    SET_LO8(eax, MEM8(ecx)); /* 0x15036D61: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15036D63: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15036D64: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036D61; /* 0x15036D66: jne 0x15036d61 */
L_15036D68:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15036D68: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ecx, 5 */ /* 0x15036D6A: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D6D: jb 0x15036de4 */
L_15036D6F:
    SET_LO8(eax, MEM8(edx)); /* 0x15036D6F: mov al, byte ptr [edx] */
    PUSH32(esp, 0x5Cu); /* 0x15036D71: push 0x5c */
    ebx = POP32_VAL(esp); /* 0x15036D73: pop ebx */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15036D74: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036D7C; /* 0x15036D76: je 0x15036d7c */
L_15036D78:
    /* cmp LO8(eax), 0x2Fu */ /* 0x15036D78: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D7A: jne 0x15036de4 */
L_15036D7C:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x15036D7C: mov al, byte ptr [edx + 1] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15036D7F: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036D87; /* 0x15036D81: je 0x15036d87 */
L_15036D83:
    /* cmp LO8(eax), 0x2Fu */ /* 0x15036D83: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D85: jne 0x15036de4 */
L_15036D87:
    SET_LO8(eax, MEM8(edx + 0x2)); /* 0x15036D87: mov al, byte ptr [edx + 2] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15036D8A: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D8C: je 0x15036de4 */
L_15036D8E:
    /* cmp LO8(eax), 0x2Fu */ /* 0x15036D8E: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D90: je 0x15036de4 */
L_15036D92:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x15036D92: add edx, 3 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edx)); /* 0x15036D95: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15036D97: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036D99: je 0x15036de4 */
L_15036D9B:
    SET_LO8(ecx, LO8(eax)); /* 0x15036D9B: mov cl, al */
L_15036D9D:
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x15036D9D: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DB5; /* 0x15036D9F: je 0x15036db5 */
L_15036DA1:
    SET_LO8(eax, LO8(ecx)); /* 0x15036DA1: mov al, cl */
    /* cmp LO8(ecx), 0x2Fu */ /* 0x15036DA3: cmp cl, 0x2f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DB1; /* 0x15036DA6: je 0x15036db1 */
L_15036DA8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15036DA8: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x15036DA9: mov al, byte ptr [edx] */
    SET_LO8(ecx, LO8(eax)); /* 0x15036DAB: mov cl, al */
    /* test LO8(eax), LO8(eax) */ /* 0x15036DAD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036D9D; /* 0x15036DAF: jne 0x15036d9d */
L_15036DB1:
    /* test LO8(eax), LO8(eax) */ /* 0x15036DB1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036DB3: je 0x15036de4 */
L_15036DB5:
    ecx = edx + 0x1; /* 0x15036DB5: lea ecx, [edx + 1] */
    SET_LO8(eax, MEM8(ecx)); /* 0x15036DB8: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15036DBA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036DE4; /* 0x15036DBC: je 0x15036de4 */
L_15036DBE:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15036DBE: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DDA; /* 0x15036DC0: je 0x15036dda */
L_15036DC2:
    SET_LO8(edx, LO8(eax)); /* 0x15036DC2: mov dl, al */
    /* cmp LO8(eax), 0x2Fu */ /* 0x15036DC4: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036DD1; /* 0x15036DC6: je 0x15036dd1 */
L_15036DC8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15036DC8: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x15036DC9: mov al, byte ptr [ecx] */
    SET_LO8(edx, LO8(eax)); /* 0x15036DCB: mov dl, al */
    /* test LO8(eax), LO8(eax) */ /* 0x15036DCD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036DBE; /* 0x15036DCF: jne 0x15036dbe */
L_15036DD1:
    /* test LO8(edx), LO8(edx) */ /* 0x15036DD1: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036DDA; /* 0x15036DD3: jne 0x15036dda */
L_15036DD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036DD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15036DD7: inc eax */
    _flag_k = FK_INC;
    goto L_15036DE6; /* 0x15036DD8: jmp 0x15036de6 */
L_15036DDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036DDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx + 0x1), LO8(eax) */ /* 0x15036DDC: cmp byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15036DDF: sete al */
    goto L_15036DE6; /* 0x15036DE2: jmp 0x15036de6 */
L_15036DE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036DE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036DE6:
    esi = POP32_VAL(esp); /* 0x15036DE6: pop esi */
    ebx = POP32_VAL(esp); /* 0x15036DE7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15036DE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036DE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036DF0u);

L_15036DF0:
    edi = edi; /* 0x15036DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036DF2: push ebp */
    ebp = esp; /* 0x15036DF3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15036DF5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15036DF8: push esi */
    PUSH32(esp, edi); /* 0x15036DF9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15036DFA: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15036DFD: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = edi + 0x2; /* 0x15036E01: lea ecx, [edi + 2] */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = edi; } /* 0x15036E04: cmovne ecx, edi */
    SET_LO8(edx, MEM8(ecx)); /* 0x15036E07: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), 0x5Cu */ /* 0x15036E09: cmp dl, 0x5c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036E13; /* 0x15036E0C: je 0x15036e13 */
L_15036E0E:
    /* cmp LO8(edx), 0x2Fu */ /* 0x15036E0E: cmp dl, 0x2f */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036E19; /* 0x15036E11: jne 0x15036e19 */
L_15036E13:
    /* cmp MEM8(ecx + 0x1), 0 */ /* 0x15036E13: cmp byte ptr [ecx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036E26; /* 0x15036E17: je 0x15036e26 */
L_15036E19:
    /* test LO8(eax), 0x10u */ /* 0x15036E19: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036E26; /* 0x15036E1B: jne 0x15036e26 */
L_15036E1D:
    ecx = 0x8100u; /* 0x15036E1D: mov ecx, 0x8100 */
    /* test LO8(edx), LO8(edx) */ /* 0x15036E22: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036E2B; /* 0x15036E24: jne 0x15036e2b */
L_15036E26:
    ecx = 0x4140u; /* 0x15036E26: mov ecx, 0x4140 */
L_15036E2B:
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x15036E2B: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x15036E2B: shl eax, 7 */
    eax = ~eax; /* 0x15036E2E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x15036E30: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x15036E35: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x15036E37: push 0x2e */
    PUSH32(esp, edi); /* 0x15036E39: push edi */
    esi = (uint32_t)LO16(eax); /* 0x15036E3A: movzx esi, ax */
    RECOMP_CALL(sub_15055AA0); /* 0x15036E3D: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15036E42: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15036E44: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036E45: pop ecx */
    /* test edi, edi */ /* 0x15036E46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036E91; /* 0x15036E48: je 0x15036e91 */
L_15036E4A:
    PUSH32(esp, 0x15003E00u); /* 0x15036E4A: push 0x15003e00 */
    PUSH32(esp, edi); /* 0x15036E4F: push edi */
    RECOMP_CALL(sub_15052640); /* 0x15036E50: call 0x15052640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036E55: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036E56: pop ecx */
    /* test eax, eax */ /* 0x15036E57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036E8E; /* 0x15036E59: je 0x15036e8e */
L_15036E5B:
    PUSH32(esp, 0x15003E08u); /* 0x15036E5B: push 0x15003e08 */
    PUSH32(esp, edi); /* 0x15036E60: push edi */
    RECOMP_CALL(sub_15052640); /* 0x15036E61: call 0x15052640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036E66: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036E67: pop ecx */
    /* test eax, eax */ /* 0x15036E68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036E8E; /* 0x15036E6A: je 0x15036e8e */
L_15036E6C:
    PUSH32(esp, 0x15003E10u); /* 0x15036E6C: push 0x15003e10 */
    PUSH32(esp, edi); /* 0x15036E71: push edi */
    RECOMP_CALL(sub_15052640); /* 0x15036E72: call 0x15052640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036E77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036E78: pop ecx */
    /* test eax, eax */ /* 0x15036E79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036E8E; /* 0x15036E7B: je 0x15036e8e */
L_15036E7D:
    PUSH32(esp, 0x15003E18u); /* 0x15036E7D: push 0x15003e18 */
    PUSH32(esp, edi); /* 0x15036E82: push edi */
    RECOMP_CALL(sub_15052640); /* 0x15036E83: call 0x15052640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036E88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036E89: pop ecx */
    /* test eax, eax */ /* 0x15036E8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036E91; /* 0x15036E8C: jne 0x15036e91 */
L_15036E8E:
    _flag_a = (uint32_t)((esi | 0x40u)); _flag_b = (uint32_t)((esi | 0x40u));
    esi = esi | 0x40u; /* 0x15036E8E: or esi, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15036E91:
    eax = esi; /* 0x15036E91: mov eax, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x15036E93: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x15036E93: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    eax = eax & 0x38u; /* 0x15036E96: and eax, 0x38 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x15036E99: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15036E9B: mov eax, esi */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x15036E9D: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x15036E9D: shr eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x15036EA0: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x15036EA3: pop edi */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x15036EA4: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15036EA6: pop esi */
    ebp = POP32_VAL(esp); /* 0x15036EA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036EA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036EAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036EAFu);

L_15036EAF:
    edi = edi; /* 0x15036EAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036EB1: push ebp */
    ebp = esp; /* 0x15036EB2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15036EB4: push esi */
    PUSH32(esp, edi); /* 0x15036EB5: push edi */
    RECOMP_CALL(sub_15036430); /* 0x15036EB6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x15036EBB: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15036430); /* 0x15036EBD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15036EC2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036EC5: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15036EC8: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15036ECB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15036950); /* 0x15036ECE: call 0x15036950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036ED3: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15036ED6: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x15036ED8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15036EDD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036EE7; /* 0x15036EDF: je 0x15036ee7 */
L_15036EE1:
    MEM32(eax) = edi; /* 0x15036EE1: mov dword ptr [eax], edi */
    eax = esi; /* 0x15036EE3: mov eax, esi */
    goto L_15036F0B; /* 0x15036EE5: jmp 0x15036f0b */
L_15036EE7:
    /* cmp MEM32(eax), 0x22u */ /* 0x15036EE7: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036EF0; /* 0x15036EEA: je 0x15036ef0 */
L_15036EEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15036EEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15036F0B; /* 0x15036EEE: jmp 0x15036f0b */
L_15036EF0:
    RECOMP_CALL(sub_15036430); /* 0x15036EF0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15036EF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15036EF7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x15036EFA: push 0 */
    MEM32(eax) = edi; /* 0x15036EFC: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036950); /* 0x15036EFE: call 0x15036950 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x15036F03: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15036F06: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x15036F09: mov dword ptr [ecx], eax */
L_15036F0B:
    edi = POP32_VAL(esp); /* 0x15036F0B: pop edi */
    esi = POP32_VAL(esp); /* 0x15036F0C: pop esi */
    ebp = POP32_VAL(esp); /* 0x15036F0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15036F0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036F20u);

L_15036F20:
    edi = edi; /* 0x15036F20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036F22: push ebp */
    ebp = esp; /* 0x15036F23: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15036F25: pop ebp */
    goto L_15036F31; /* 0x15036F26: jmp 0x15036f31 */
L_15036F31:
    edi = edi; /* 0x15036F31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036F33: push ebp */
    ebp = esp; /* 0x15036F34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x15036F36: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15036F3C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15036F41: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15036F43: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15036F46: push ebx */
    PUSH32(esp, esi); /* 0x15036F47: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15036F48: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15036F4B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15036F4C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15036F4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036F79; /* 0x15036F51: jne 0x15036f79 */
L_15036F53:
    RECOMP_CALL(sub_150363E0); /* 0x15036F53: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15036F58: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x15036F5A: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x15036F5C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15036F61: push ebx */
    PUSH32(esp, ebx); /* 0x15036F62: push ebx */
    PUSH32(esp, ebx); /* 0x15036F63: push ebx */
    PUSH32(esp, ebx); /* 0x15036F64: push ebx */
    PUSH32(esp, ebx); /* 0x15036F65: push ebx */
    MEM32(eax) = 0x16u; /* 0x15036F66: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15036F6C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15036F71: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150372CC; /* 0x15036F74: jmp 0x150372cc */
L_15036F79:
    /* test esi, esi */ /* 0x15036F79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036F53; /* 0x15036F7B: je 0x15036f53 */
L_15036F7D:
    PUSH32(esp, 0x15003E20u); /* 0x15036F7D: push 0x15003e20 */
    PUSH32(esp, edi); /* 0x15036F82: push edi */
    RECOMP_CALL(sub_15055990); /* 0x15036F83: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036F88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036F89: pop ecx */
    /* test eax, eax */ /* 0x15036F8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036FA4; /* 0x15036F8C: je 0x15036fa4 */
L_15036F8E:
    RECOMP_CALL(sub_15036430); /* 0x15036F8E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15036F93: push 2 */
    esi = POP32_VAL(esp); /* 0x15036F95: pop esi */
    MEM32(eax) = esi; /* 0x15036F96: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150363E0); /* 0x15036F98: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15036F9D: mov dword ptr [eax], esi */
    goto L_150372CC; /* 0x15036F9F: jmp 0x150372cc */
L_15036FA4:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15036FA4: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036FC5; /* 0x15036FA8: jne 0x15036fc5 */
L_15036FAA:
    SET_LO8(eax, MEM8(edi)); /* 0x15036FAA: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15036FAC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036FB6; /* 0x15036FAE: je 0x15036fb6 */
L_15036FB0:
    /* cmp MEM8(edi + 0x2), 0 */ /* 0x15036FB0: cmp byte ptr [edi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036F8E; /* 0x15036FB4: je 0x15036f8e */
L_15036FB6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x15036FB6: movsx eax, al */
    PUSH32(esp, eax); /* 0x15036FB9: push eax */
    RECOMP_CALL(sub_15051A10); /* 0x15036FBA: call 0x15051a10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036FBF: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15036FC0: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_15036FCA; /* 0x15036FC3: jmp 0x15036fca */
L_15036FC5:
    RECOMP_CALL(sub_15036820); /* 0x15036FC5: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_15036FCA:
    MEM32(ebp + (-0x268)) = eax; /* 0x15036FCA: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x258); /* 0x15036FD0: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x15036FD6: push eax */
    PUSH32(esp, edi); /* 0x15036FD7: push edi */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15036FD8: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15036FDE: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15036FE0: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370DC; /* 0x15036FE3: jne 0x150370dc */
L_15036FE9:
    PUSH32(esp, 0x15003E24u); /* 0x15036FE9: push 0x15003e24 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15036FEE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15036FF0: push edi */
    MEM32(ebp + (-0x25C)) = ebx; /* 0x15036FF1: mov dword ptr [ebp - 0x25c], ebx */
    RECOMP_CALL(sub_15055990); /* 0x15036FF7: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036FFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036FFD: pop ecx */
    /* test eax, eax */ /* 0x15036FFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036F8E; /* 0x15037000: je 0x15036f8e */
L_15037002:
    eax = ebp + (-0x25C); /* 0x15037002: lea eax, [ebp - 0x25c] */
    PUSH32(esp, eax); /* 0x15037008: push eax */
    PUSH32(esp, 0x104u); /* 0x15037009: push 0x104 */
    eax = ebp + (-0x108); /* 0x1503700E: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x15037014: push edi */
    PUSH32(esp, eax); /* 0x15037015: push eax */
    RECOMP_CALL(sub_15036EAF); /* 0x15037016: call 0x15036eaf */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1503701B: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503701D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x260)) = edx; /* 0x15037020: mov dword ptr [ebp - 0x260], edx */
    /* test edx, edx */ /* 0x15037026: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037028: je 0x150370bf */
L_1503702E:
    ecx = edx; /* 0x1503702E: mov ecx, edx */
    eax = ecx + 0x1; /* 0x15037030: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x15037033: mov dword ptr [ebp - 0x26c], eax */
L_15037039:
    SET_LO8(eax, MEM8(ecx)); /* 0x15037039: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503703B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1503703C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037039; /* 0x1503703E: jne 0x15037039 */
L_15037040:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x26C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x26C)); /* 0x15037040: sub ecx, dword ptr [ebp - 0x26c] */
    _flag_k = FK_CMP;
    /* cmp ecx, 3 */ /* 0x15037046: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503705C; /* 0x15037049: je 0x1503705c */
L_1503704B:
    PUSH32(esp, edx); /* 0x1503704B: push edx */
    RECOMP_CALL(sub_15036D52); /* 0x1503704C: call 0x15036d52 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037051: pop ecx */
    /* test eax, eax */ /* 0x15037052: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037054: je 0x150370bf */
L_15037056:
    edx = MEM32(ebp + (-0x260)); /* 0x15037056: mov edx, dword ptr [ebp - 0x260] */
L_1503705C:
    PUSH32(esp, edx); /* 0x1503705C: push edx */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x1503705D: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037063: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037065: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15037066: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037068: jbe 0x150370bf */
L_1503706A:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x1503706A: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503707E; /* 0x15037070: je 0x1503707e */
L_15037072:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037072: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x15037078: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503707D: pop ecx */
L_1503707E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503707E: push -1 */
    PUSH32(esp, ebx); /* 0x15037080: push ebx */
    PUSH32(esp, ebx); /* 0x15037081: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037082: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x258)) = 0x10u; /* 0x15037084: mov dword ptr [ebp - 0x258], 0x10 */
    PUSH32(esp, ebx); /* 0x1503708E: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503708F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x23C)) = ebx; /* 0x15037090: mov dword ptr [ebp - 0x23c], ebx */
    PUSH32(esp, eax); /* 0x15037096: push eax */
    PUSH32(esp, eax); /* 0x15037097: push eax */
    PUSH32(esp, 0x7BCu); /* 0x15037098: push 0x7bc */
    MEM32(ebp + (-0x238)) = ebx; /* 0x1503709D: mov dword ptr [ebp - 0x238], ebx */
    MEM8(ebp + (-0x22C)) = (uint8_t)(LO8(ebx)); /* 0x150370A3: mov byte ptr [ebp - 0x22c], bl */
    RECOMP_CALL(sub_1509577E); /* 0x150370A9: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150370AE: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x1C) = eax; /* 0x150370B1: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = eax; /* 0x150370B4: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x20) = eax; /* 0x150370B7: mov dword ptr [esi + 0x20], eax */
    goto L_1503727D; /* 0x150370BA: jmp 0x1503727d */
L_150370BF:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x150370BF: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036F8E; /* 0x150370C5: je 0x15036f8e */
L_150370CB:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x150370CB: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x150370D1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150370D6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15036F8E; /* 0x150370D7: jmp 0x15036f8e */
L_150370DC:
    /* cmp MEM32(ebp + (-0x244)), 0 */ /* 0x150370DC: cmp dword ptr [ebp - 0x244], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370F2; /* 0x150370E3: jne 0x150370f2 */
L_150370E5:
    /* cmp MEM32(ebp + (-0x240)), 0 */ /* 0x150370E5: cmp dword ptr [ebp - 0x240], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x240))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370F2; /* 0x150370EC: jne 0x150370f2 */
L_150370EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150370EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037164; /* 0x150370F0: jmp 0x15037164 */
L_150370F2:
    eax = ebp + (-0x264); /* 0x150370F2: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150370F8: push eax */
    eax = ebp + (-0x244); /* 0x150370F9: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x150370FF: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037100: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037106: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037108: je 0x150372b8 */
L_1503710E:
    eax = ebp + (-0x118); /* 0x1503710E: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037114: push eax */
    eax = ebp + (-0x264); /* 0x15037115: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503711B: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503711C: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037124: je 0x150372b8 */
L_1503712A:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x1503712A: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037131: push -1 */
    PUSH32(esp, eax); /* 0x15037133: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037134: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x1503713B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x1503713C: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037143: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037144: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x1503714B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x1503714C: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037153: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037154: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503715B: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503715C: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037161: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037164:
    MEM32(esi + 0x1C) = eax; /* 0x15037164: mov dword ptr [esi + 0x1c], eax */
    /* cmp MEM32(ebp + (-0x24C)), 0 */ /* 0x15037167: cmp dword ptr [ebp - 0x24c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037179; /* 0x1503716E: jne 0x15037179 */
L_15037170:
    /* cmp MEM32(ebp + (-0x248)), 0 */ /* 0x15037170: cmp dword ptr [ebp - 0x248], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150371EB; /* 0x15037177: je 0x150371eb */
L_15037179:
    eax = ebp + (-0x264); /* 0x15037179: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503717F: push eax */
    eax = ebp + (-0x24C); /* 0x15037180: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x15037186: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037187: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503718D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x1503718F: je 0x150372b8 */
L_15037195:
    eax = ebp + (-0x118); /* 0x15037195: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503719B: push eax */
    eax = ebp + (-0x264); /* 0x1503719C: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150371A2: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150371A3: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150371A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x150371AB: je 0x150372b8 */
L_150371B1:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150371B1: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150371B8: push -1 */
    PUSH32(esp, eax); /* 0x150371BA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150371BB: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x150371C2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x150371C3: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x150371CA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x150371CB: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x150371D2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x150371D3: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x150371DA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x150371DB: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150371E2: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150371E3: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150371E8: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150371EB:
    MEM32(esi + 0x18) = eax; /* 0x150371EB: mov dword ptr [esi + 0x18], eax */
    /* cmp MEM32(ebp + (-0x254)), 0 */ /* 0x150371EE: cmp dword ptr [ebp - 0x254], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x254))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037205; /* 0x150371F5: jne 0x15037205 */
L_150371F7:
    /* cmp MEM32(ebp + (-0x250)), 0 */ /* 0x150371F7: cmp dword ptr [ebp - 0x250], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037205; /* 0x150371FE: jne 0x15037205 */
L_15037200:
    eax = MEM32(esi + 0x1C); /* 0x15037200: mov eax, dword ptr [esi + 0x1c] */
    goto L_15037273; /* 0x15037203: jmp 0x15037273 */
L_15037205:
    eax = ebp + (-0x264); /* 0x15037205: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503720B: push eax */
    eax = ebp + (-0x254); /* 0x1503720C: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x15037212: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037213: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037219: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x1503721B: je 0x150372b8 */
L_15037221:
    eax = ebp + (-0x118); /* 0x15037221: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037227: push eax */
    eax = ebp + (-0x264); /* 0x15037228: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503722E: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503722F: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037235: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037237: je 0x150372b8 */
L_15037239:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037239: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037240: push -1 */
    PUSH32(esp, eax); /* 0x15037242: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037243: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x1503724A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x1503724B: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037252: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037253: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x1503725A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x1503725B: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037262: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037263: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503726A: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503726B: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037270: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037273:
    PUSH32(esp, ebx); /* 0x15037273: push ebx */
    MEM32(esi + 0x20) = eax; /* 0x15037274: mov dword ptr [esi + 0x20], eax */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037277: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_1503727D:
    PUSH32(esp, edi); /* 0x1503727D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x1503727E: push dword ptr [ebp - 0x258] */
    RECOMP_CALL(sub_15036DF0); /* 0x15037284: call 0x15036df0 */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15037289: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + (-0x238)); /* 0x1503728D: mov eax, dword ptr [ebp - 0x238] */
    MEM32(esi + 0x14) = eax; /* 0x15037293: mov dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037296: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15037298: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037299: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503729A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1503729C: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x150372A0: mov dword ptr [esi + 0xa], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150372A3: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x268)); /* 0x150372A4: mov eax, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150372AA: dec eax */
    _flag_k = FK_DEC;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150372AB: mov word ptr [esi + 8], cx */
    MEM32(esi) = eax; /* 0x150372AF: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x150372B1: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150372B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150372CF; /* 0x150372B6: jmp 0x150372cf */
L_150372B8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150372B8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150372BE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150372BF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150372C4: pop ecx */
    PUSH32(esp, ebx); /* 0x150372C5: push ebx */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150372C6: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150372CC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150372CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150372CF:
    ecx = MEM32(ebp + (-0x4)); /* 0x150372CF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150372D2: pop edi */
    esi = POP32_VAL(esp); /* 0x150372D3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150372D4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150372D6: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150372D7: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150372DC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150372DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_15036F31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15036F31u);

L_15036F31:
    edi = edi; /* 0x15036F31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15036F33: push ebp */
    ebp = esp; /* 0x15036F34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x15036F36: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15036F3C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15036F41: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15036F43: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15036F46: push ebx */
    PUSH32(esp, esi); /* 0x15036F47: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15036F48: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15036F4B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15036F4C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15036F4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15036F79; /* 0x15036F51: jne 0x15036f79 */
L_15036F53:
    RECOMP_CALL(sub_150363E0); /* 0x15036F53: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15036F58: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x15036F5A: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x15036F5C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15036F61: push ebx */
    PUSH32(esp, ebx); /* 0x15036F62: push ebx */
    PUSH32(esp, ebx); /* 0x15036F63: push ebx */
    PUSH32(esp, ebx); /* 0x15036F64: push ebx */
    PUSH32(esp, ebx); /* 0x15036F65: push ebx */
    MEM32(eax) = 0x16u; /* 0x15036F66: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15036F6C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15036F71: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150372CC; /* 0x15036F74: jmp 0x150372cc */
L_15036F79:
    /* test esi, esi */ /* 0x15036F79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036F53; /* 0x15036F7B: je 0x15036f53 */
L_15036F7D:
    PUSH32(esp, 0x15003E20u); /* 0x15036F7D: push 0x15003e20 */
    PUSH32(esp, edi); /* 0x15036F82: push edi */
    RECOMP_CALL(sub_15055990); /* 0x15036F83: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036F88: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036F89: pop ecx */
    /* test eax, eax */ /* 0x15036F8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036FA4; /* 0x15036F8C: je 0x15036fa4 */
L_15036F8E:
    RECOMP_CALL(sub_15036430); /* 0x15036F8E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15036F93: push 2 */
    esi = POP32_VAL(esp); /* 0x15036F95: pop esi */
    MEM32(eax) = esi; /* 0x15036F96: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150363E0); /* 0x15036F98: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15036F9D: mov dword ptr [eax], esi */
    goto L_150372CC; /* 0x15036F9F: jmp 0x150372cc */
L_15036FA4:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15036FA4: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15036FC5; /* 0x15036FA8: jne 0x15036fc5 */
L_15036FAA:
    SET_LO8(eax, MEM8(edi)); /* 0x15036FAA: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15036FAC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036FB6; /* 0x15036FAE: je 0x15036fb6 */
L_15036FB0:
    /* cmp MEM8(edi + 0x2), 0 */ /* 0x15036FB0: cmp byte ptr [edi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036F8E; /* 0x15036FB4: je 0x15036f8e */
L_15036FB6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x15036FB6: movsx eax, al */
    PUSH32(esp, eax); /* 0x15036FB9: push eax */
    RECOMP_CALL(sub_15051A10); /* 0x15036FBA: call 0x15051a10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036FBF: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15036FC0: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_15036FCA; /* 0x15036FC3: jmp 0x15036fca */
L_15036FC5:
    RECOMP_CALL(sub_15036820); /* 0x15036FC5: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_15036FCA:
    MEM32(ebp + (-0x268)) = eax; /* 0x15036FCA: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x258); /* 0x15036FD0: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x15036FD6: push eax */
    PUSH32(esp, edi); /* 0x15036FD7: push edi */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15036FD8: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15036FDE: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15036FE0: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370DC; /* 0x15036FE3: jne 0x150370dc */
L_15036FE9:
    PUSH32(esp, 0x15003E24u); /* 0x15036FE9: push 0x15003e24 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15036FEE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15036FF0: push edi */
    MEM32(ebp + (-0x25C)) = ebx; /* 0x15036FF1: mov dword ptr [ebp - 0x25c], ebx */
    RECOMP_CALL(sub_15055990); /* 0x15036FF7: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15036FFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15036FFD: pop ecx */
    /* test eax, eax */ /* 0x15036FFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15036F8E; /* 0x15037000: je 0x15036f8e */
L_15037002:
    eax = ebp + (-0x25C); /* 0x15037002: lea eax, [ebp - 0x25c] */
    PUSH32(esp, eax); /* 0x15037008: push eax */
    PUSH32(esp, 0x104u); /* 0x15037009: push 0x104 */
    eax = ebp + (-0x108); /* 0x1503700E: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x15037014: push edi */
    PUSH32(esp, eax); /* 0x15037015: push eax */
    RECOMP_CALL(sub_15036EAF); /* 0x15037016: call 0x15036eaf */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1503701B: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503701D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x260)) = edx; /* 0x15037020: mov dword ptr [ebp - 0x260], edx */
    /* test edx, edx */ /* 0x15037026: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037028: je 0x150370bf */
L_1503702E:
    ecx = edx; /* 0x1503702E: mov ecx, edx */
    eax = ecx + 0x1; /* 0x15037030: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x15037033: mov dword ptr [ebp - 0x26c], eax */
L_15037039:
    SET_LO8(eax, MEM8(ecx)); /* 0x15037039: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503703B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1503703C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037039; /* 0x1503703E: jne 0x15037039 */
L_15037040:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x26C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x26C)); /* 0x15037040: sub ecx, dword ptr [ebp - 0x26c] */
    _flag_k = FK_CMP;
    /* cmp ecx, 3 */ /* 0x15037046: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503705C; /* 0x15037049: je 0x1503705c */
L_1503704B:
    PUSH32(esp, edx); /* 0x1503704B: push edx */
    RECOMP_CALL(sub_15036D52); /* 0x1503704C: call 0x15036d52 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037051: pop ecx */
    /* test eax, eax */ /* 0x15037052: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037054: je 0x150370bf */
L_15037056:
    edx = MEM32(ebp + (-0x260)); /* 0x15037056: mov edx, dword ptr [ebp - 0x260] */
L_1503705C:
    PUSH32(esp, edx); /* 0x1503705C: push edx */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x1503705D: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037063: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037065: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15037066: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150370BF; /* 0x15037068: jbe 0x150370bf */
L_1503706A:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x1503706A: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503707E; /* 0x15037070: je 0x1503707e */
L_15037072:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037072: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x15037078: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503707D: pop ecx */
L_1503707E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503707E: push -1 */
    PUSH32(esp, ebx); /* 0x15037080: push ebx */
    PUSH32(esp, ebx); /* 0x15037081: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037082: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x258)) = 0x10u; /* 0x15037084: mov dword ptr [ebp - 0x258], 0x10 */
    PUSH32(esp, ebx); /* 0x1503708E: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503708F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x23C)) = ebx; /* 0x15037090: mov dword ptr [ebp - 0x23c], ebx */
    PUSH32(esp, eax); /* 0x15037096: push eax */
    PUSH32(esp, eax); /* 0x15037097: push eax */
    PUSH32(esp, 0x7BCu); /* 0x15037098: push 0x7bc */
    MEM32(ebp + (-0x238)) = ebx; /* 0x1503709D: mov dword ptr [ebp - 0x238], ebx */
    MEM8(ebp + (-0x22C)) = (uint8_t)(LO8(ebx)); /* 0x150370A3: mov byte ptr [ebp - 0x22c], bl */
    RECOMP_CALL(sub_1509577E); /* 0x150370A9: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150370AE: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x1C) = eax; /* 0x150370B1: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = eax; /* 0x150370B4: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x20) = eax; /* 0x150370B7: mov dword ptr [esi + 0x20], eax */
    goto L_1503727D; /* 0x150370BA: jmp 0x1503727d */
L_150370BF:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x150370BF: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15036F8E; /* 0x150370C5: je 0x15036f8e */
L_150370CB:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x150370CB: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x150370D1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150370D6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15036F8E; /* 0x150370D7: jmp 0x15036f8e */
L_150370DC:
    /* cmp MEM32(ebp + (-0x244)), 0 */ /* 0x150370DC: cmp dword ptr [ebp - 0x244], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370F2; /* 0x150370E3: jne 0x150370f2 */
L_150370E5:
    /* cmp MEM32(ebp + (-0x240)), 0 */ /* 0x150370E5: cmp dword ptr [ebp - 0x240], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x240))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150370F2; /* 0x150370EC: jne 0x150370f2 */
L_150370EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150370EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037164; /* 0x150370F0: jmp 0x15037164 */
L_150370F2:
    eax = ebp + (-0x264); /* 0x150370F2: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150370F8: push eax */
    eax = ebp + (-0x244); /* 0x150370F9: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x150370FF: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037100: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037106: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037108: je 0x150372b8 */
L_1503710E:
    eax = ebp + (-0x118); /* 0x1503710E: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037114: push eax */
    eax = ebp + (-0x264); /* 0x15037115: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503711B: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503711C: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037124: je 0x150372b8 */
L_1503712A:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x1503712A: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037131: push -1 */
    PUSH32(esp, eax); /* 0x15037133: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037134: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x1503713B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x1503713C: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037143: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037144: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x1503714B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x1503714C: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037153: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037154: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503715B: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503715C: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037161: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037164:
    MEM32(esi + 0x1C) = eax; /* 0x15037164: mov dword ptr [esi + 0x1c], eax */
    /* cmp MEM32(ebp + (-0x24C)), 0 */ /* 0x15037167: cmp dword ptr [ebp - 0x24c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037179; /* 0x1503716E: jne 0x15037179 */
L_15037170:
    /* cmp MEM32(ebp + (-0x248)), 0 */ /* 0x15037170: cmp dword ptr [ebp - 0x248], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150371EB; /* 0x15037177: je 0x150371eb */
L_15037179:
    eax = ebp + (-0x264); /* 0x15037179: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503717F: push eax */
    eax = ebp + (-0x24C); /* 0x15037180: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x15037186: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037187: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503718D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x1503718F: je 0x150372b8 */
L_15037195:
    eax = ebp + (-0x118); /* 0x15037195: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503719B: push eax */
    eax = ebp + (-0x264); /* 0x1503719C: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150371A2: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150371A3: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150371A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x150371AB: je 0x150372b8 */
L_150371B1:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150371B1: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150371B8: push -1 */
    PUSH32(esp, eax); /* 0x150371BA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150371BB: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x150371C2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x150371C3: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x150371CA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x150371CB: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x150371D2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x150371D3: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x150371DA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x150371DB: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150371E2: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150371E3: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150371E8: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150371EB:
    MEM32(esi + 0x18) = eax; /* 0x150371EB: mov dword ptr [esi + 0x18], eax */
    /* cmp MEM32(ebp + (-0x254)), 0 */ /* 0x150371EE: cmp dword ptr [ebp - 0x254], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x254))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037205; /* 0x150371F5: jne 0x15037205 */
L_150371F7:
    /* cmp MEM32(ebp + (-0x250)), 0 */ /* 0x150371F7: cmp dword ptr [ebp - 0x250], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037205; /* 0x150371FE: jne 0x15037205 */
L_15037200:
    eax = MEM32(esi + 0x1C); /* 0x15037200: mov eax, dword ptr [esi + 0x1c] */
    goto L_15037273; /* 0x15037203: jmp 0x15037273 */
L_15037205:
    eax = ebp + (-0x264); /* 0x15037205: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503720B: push eax */
    eax = ebp + (-0x254); /* 0x1503720C: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x15037212: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037213: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037219: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x1503721B: je 0x150372b8 */
L_15037221:
    eax = ebp + (-0x118); /* 0x15037221: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037227: push eax */
    eax = ebp + (-0x264); /* 0x15037228: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503722E: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503722F: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037235: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150372B8; /* 0x15037237: je 0x150372b8 */
L_15037239:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037239: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037240: push -1 */
    PUSH32(esp, eax); /* 0x15037242: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037243: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x1503724A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x1503724B: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037252: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037253: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x1503725A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x1503725B: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037262: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037263: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503726A: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503726B: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037270: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037273:
    PUSH32(esp, ebx); /* 0x15037273: push ebx */
    MEM32(esi + 0x20) = eax; /* 0x15037274: mov dword ptr [esi + 0x20], eax */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037277: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_1503727D:
    PUSH32(esp, edi); /* 0x1503727D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x1503727E: push dword ptr [ebp - 0x258] */
    RECOMP_CALL(sub_15036DF0); /* 0x15037284: call 0x15036df0 */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15037289: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + (-0x238)); /* 0x1503728D: mov eax, dword ptr [ebp - 0x238] */
    MEM32(esi + 0x14) = eax; /* 0x15037293: mov dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037296: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15037298: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037299: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503729A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1503729C: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x150372A0: mov dword ptr [esi + 0xa], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150372A3: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x268)); /* 0x150372A4: mov eax, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150372AA: dec eax */
    _flag_k = FK_DEC;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150372AB: mov word ptr [esi + 8], cx */
    MEM32(esi) = eax; /* 0x150372AF: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x150372B1: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150372B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150372CF; /* 0x150372B6: jmp 0x150372cf */
L_150372B8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150372B8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150372BE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150372BF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150372C4: pop ecx */
    PUSH32(esp, ebx); /* 0x150372C5: push ebx */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150372C6: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150372CC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150372CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150372CF:
    ecx = MEM32(ebp + (-0x4)); /* 0x150372CF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150372D2: pop edi */
    esi = POP32_VAL(esp); /* 0x150372D3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150372D4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150372D6: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150372D7: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150372DC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150372DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150372F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150372F0u);

L_150372F0:
    edi = edi; /* 0x150372F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150372F2: push ebp */
    ebp = esp; /* 0x150372F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x150372F5: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150372FB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15037300: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15037302: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15037305: push ebx */
    PUSH32(esp, esi); /* 0x15037306: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15037307: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1503730A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1503730B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1503730E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037338; /* 0x15037310: jne 0x15037338 */
L_15037312:
    RECOMP_CALL(sub_150363E0); /* 0x15037312: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15037317: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x15037319: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1503731B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15037320: push ebx */
    PUSH32(esp, ebx); /* 0x15037321: push ebx */
    PUSH32(esp, ebx); /* 0x15037322: push ebx */
    PUSH32(esp, ebx); /* 0x15037323: push ebx */
    PUSH32(esp, ebx); /* 0x15037324: push ebx */
    MEM32(eax) = 0x16u; /* 0x15037325: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503732B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037330: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150376CE; /* 0x15037333: jmp 0x150376ce */
L_15037338:
    /* test esi, esi */ /* 0x15037338: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037312; /* 0x1503733A: je 0x15037312 */
L_1503733C:
    PUSH32(esp, 0x15003E20u); /* 0x1503733C: push 0x15003e20 */
    PUSH32(esp, edi); /* 0x15037341: push edi */
    RECOMP_CALL(sub_15055990); /* 0x15037342: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037347: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037348: pop ecx */
    /* test eax, eax */ /* 0x15037349: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037363; /* 0x1503734B: je 0x15037363 */
L_1503734D:
    RECOMP_CALL(sub_15036430); /* 0x1503734D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15037352: push 2 */
    esi = POP32_VAL(esp); /* 0x15037354: pop esi */
    MEM32(eax) = esi; /* 0x15037355: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150363E0); /* 0x15037357: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1503735C: mov dword ptr [eax], esi */
    goto L_150376CE; /* 0x1503735E: jmp 0x150376ce */
L_15037363:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15037363: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037384; /* 0x15037367: jne 0x15037384 */
L_15037369:
    SET_LO8(eax, MEM8(edi)); /* 0x15037369: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1503736B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037375; /* 0x1503736D: je 0x15037375 */
L_1503736F:
    /* cmp MEM8(edi + 0x2), 0 */ /* 0x1503736F: cmp byte ptr [edi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503734D; /* 0x15037373: je 0x1503734d */
L_15037375:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x15037375: movsx eax, al */
    PUSH32(esp, eax); /* 0x15037378: push eax */
    RECOMP_CALL(sub_15051A10); /* 0x15037379: call 0x15051a10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503737E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x1503737F: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_15037389; /* 0x15037382: jmp 0x15037389 */
L_15037384:
    RECOMP_CALL(sub_15036820); /* 0x15037384: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_15037389:
    MEM32(ebp + (-0x268)) = eax; /* 0x15037389: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x258); /* 0x1503738F: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x15037395: push eax */
    PUSH32(esp, edi); /* 0x15037396: push edi */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15037397: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503739D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x25C)) = eax; /* 0x1503739F: mov dword ptr [ebp - 0x25c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150373A5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150374A8; /* 0x150373A8: jne 0x150374a8 */
L_150373AE:
    PUSH32(esp, 0x15003E24u); /* 0x150373AE: push 0x15003e24 */
    PUSH32(esp, edi); /* 0x150373B3: push edi */
    MEM32(ebp + (-0x25C)) = ebx; /* 0x150373B4: mov dword ptr [ebp - 0x25c], ebx */
    RECOMP_CALL(sub_15055990); /* 0x150373BA: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150373BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150373C0: pop ecx */
    /* test eax, eax */ /* 0x150373C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503734D; /* 0x150373C3: je 0x1503734d */
L_150373C5:
    eax = ebp + (-0x25C); /* 0x150373C5: lea eax, [ebp - 0x25c] */
    PUSH32(esp, eax); /* 0x150373CB: push eax */
    PUSH32(esp, 0x104u); /* 0x150373CC: push 0x104 */
    eax = ebp + (-0x108); /* 0x150373D1: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x150373D7: push edi */
    PUSH32(esp, eax); /* 0x150373D8: push eax */
    RECOMP_CALL(sub_15036EAF); /* 0x150373D9: call 0x15036eaf */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150373DE: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150373E0: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x260)) = edx; /* 0x150373E3: mov dword ptr [ebp - 0x260], edx */
    /* test edx, edx */ /* 0x150373E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503748B; /* 0x150373EB: je 0x1503748b */
L_150373F1:
    ecx = edx; /* 0x150373F1: mov ecx, edx */
    eax = ecx + 0x1; /* 0x150373F3: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x150373F6: mov dword ptr [ebp - 0x26c], eax */
L_150373FC:
    SET_LO8(eax, MEM8(ecx)); /* 0x150373FC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150373FE: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150373FF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150373FC; /* 0x15037401: jne 0x150373fc */
L_15037403:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x26C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x26C)); /* 0x15037403: sub ecx, dword ptr [ebp - 0x26c] */
    _flag_k = FK_CMP;
    /* cmp ecx, 3 */ /* 0x15037409: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503741F; /* 0x1503740C: je 0x1503741f */
L_1503740E:
    PUSH32(esp, edx); /* 0x1503740E: push edx */
    RECOMP_CALL(sub_15036D52); /* 0x1503740F: call 0x15036d52 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037414: pop ecx */
    /* test eax, eax */ /* 0x15037415: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503748B; /* 0x15037417: je 0x1503748b */
L_15037419:
    edx = MEM32(ebp + (-0x260)); /* 0x15037419: mov edx, dword ptr [ebp - 0x260] */
L_1503741F:
    PUSH32(esp, edx); /* 0x1503741F: push edx */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x15037420: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037426: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037428: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15037429: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503748B; /* 0x1503742B: jbe 0x1503748b */
L_1503742D:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x1503742D: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037441; /* 0x15037433: je 0x15037441 */
L_15037435:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037435: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x1503743B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037440: pop ecx */
L_15037441:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037441: push -1 */
    PUSH32(esp, ebx); /* 0x15037443: push ebx */
    PUSH32(esp, ebx); /* 0x15037444: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037445: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x258)) = 0x10u; /* 0x15037447: mov dword ptr [ebp - 0x258], 0x10 */
    PUSH32(esp, ebx); /* 0x15037451: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15037452: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x23C)) = ebx; /* 0x15037453: mov dword ptr [ebp - 0x23c], ebx */
    PUSH32(esp, eax); /* 0x15037459: push eax */
    PUSH32(esp, eax); /* 0x1503745A: push eax */
    PUSH32(esp, 0x7BCu); /* 0x1503745B: push 0x7bc */
    MEM32(ebp + (-0x238)) = ebx; /* 0x15037460: mov dword ptr [ebp - 0x238], ebx */
    MEM8(ebp + (-0x22C)) = (uint8_t)(LO8(ebx)); /* 0x15037466: mov byte ptr [ebp - 0x22c], bl */
    RECOMP_CALL(sub_1509599D); /* 0x1503746C: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037471: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x28) = eax; /* 0x15037474: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = edx; /* 0x15037477: mov dword ptr [esi + 0x2c], edx */
    MEM32(esi + 0x20) = eax; /* 0x1503747A: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x1503747D: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x30) = eax; /* 0x15037480: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = edx; /* 0x15037483: mov dword ptr [esi + 0x34], edx */
    goto L_1503766D; /* 0x15037486: jmp 0x1503766d */
L_1503748B:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x1503748B: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503734D; /* 0x15037491: je 0x1503734d */
L_15037497:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037497: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x1503749D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150374A2: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1503734D; /* 0x150374A3: jmp 0x1503734d */
L_150374A8:
    /* cmp MEM32(ebp + (-0x244)), ebx */ /* 0x150374A8: cmp dword ptr [ebp - 0x244], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150374D1; /* 0x150374AE: jne 0x150374d1 */
L_150374B0:
    /* cmp MEM32(ebp + (-0x240)), ebx */ /* 0x150374B0: cmp dword ptr [ebp - 0x240], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x240))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150374D1; /* 0x150374B6: jne 0x150374d1 */
L_150374B8:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150374B8: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x264)) = _xmm[0].u64[0]; /* 0x150374BB: movlpd qword ptr [ebp - 0x264], xmm0 */
    edx = MEM32(ebp + (-0x260)); /* 0x150374C3: mov edx, dword ptr [ebp - 0x260] */
    eax = MEM32(ebp + (-0x264)); /* 0x150374C9: mov eax, dword ptr [ebp - 0x264] */
    goto L_15037543; /* 0x150374CF: jmp 0x15037543 */
L_150374D1:
    eax = ebp + (-0x264); /* 0x150374D1: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150374D7: push eax */
    eax = ebp + (-0x244); /* 0x150374D8: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x150374DE: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150374DF: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150374E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x150374E7: je 0x150376b5 */
L_150374ED:
    eax = ebp + (-0x118); /* 0x150374ED: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150374F3: push eax */
    eax = ebp + (-0x264); /* 0x150374F4: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150374FA: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150374FB: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x15037503: je 0x150376b5 */
L_15037509:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037509: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037510: push -1 */
    PUSH32(esp, eax); /* 0x15037512: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037513: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x1503751A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x1503751B: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037522: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037523: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x1503752A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x1503752B: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037532: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037533: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503753A: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x1503753B: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037540: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037543:
    MEM32(esi + 0x28) = eax; /* 0x15037543: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = edx; /* 0x15037546: mov dword ptr [esi + 0x2c], edx */
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x15037549: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037559; /* 0x1503754F: jne 0x15037559 */
L_15037551:
    /* cmp MEM32(ebp + (-0x248)), ebx */ /* 0x15037551: cmp dword ptr [ebp - 0x248], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150375CB; /* 0x15037557: je 0x150375cb */
L_15037559:
    eax = ebp + (-0x264); /* 0x15037559: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x1503755F: push eax */
    eax = ebp + (-0x24C); /* 0x15037560: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x15037566: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15037567: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503756D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x1503756F: je 0x150376b5 */
L_15037575:
    eax = ebp + (-0x118); /* 0x15037575: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503757B: push eax */
    eax = ebp + (-0x264); /* 0x1503757C: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037582: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15037583: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037589: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x1503758B: je 0x150376b5 */
L_15037591:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037591: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037598: push -1 */
    PUSH32(esp, eax); /* 0x1503759A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x1503759B: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x150375A2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x150375A3: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x150375AA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x150375AB: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x150375B2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x150375B3: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x150375BA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x150375BB: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150375C2: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x150375C3: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150375C8: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150375CB:
    MEM32(esi + 0x20) = eax; /* 0x150375CB: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x150375CE: mov dword ptr [esi + 0x24], edx */
    /* cmp MEM32(ebp + (-0x254)), ebx */ /* 0x150375D1: cmp dword ptr [ebp - 0x254], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x254))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150375E9; /* 0x150375D7: jne 0x150375e9 */
L_150375D9:
    /* cmp MEM32(ebp + (-0x250)), ebx */ /* 0x150375D9: cmp dword ptr [ebp - 0x250], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150375E9; /* 0x150375DF: jne 0x150375e9 */
L_150375E1:
    eax = MEM32(esi + 0x28); /* 0x150375E1: mov eax, dword ptr [esi + 0x28] */
    edx = MEM32(esi + 0x2C); /* 0x150375E4: mov edx, dword ptr [esi + 0x2c] */
    goto L_1503765B; /* 0x150375E7: jmp 0x1503765b */
L_150375E9:
    eax = ebp + (-0x264); /* 0x150375E9: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150375EF: push eax */
    eax = ebp + (-0x254); /* 0x150375F0: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x150375F6: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150375F7: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150375FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x150375FF: je 0x150376b5 */
L_15037605:
    eax = ebp + (-0x118); /* 0x15037605: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x1503760B: push eax */
    eax = ebp + (-0x264); /* 0x1503760C: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037612: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15037613: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037619: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150376B5; /* 0x1503761B: je 0x150376b5 */
L_15037621:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037621: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037628: push -1 */
    PUSH32(esp, eax); /* 0x1503762A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x1503762B: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x15037632: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x15037633: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x1503763A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x1503763B: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037642: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037643: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x1503764A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x1503764B: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037652: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x15037653: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037658: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1503765B:
    MEM32(esi + 0x30) = eax; /* 0x1503765B: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = edx; /* 0x1503765E: mov dword ptr [esi + 0x34], edx */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037661: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037667: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_1503766D:
    PUSH32(esp, edi); /* 0x1503766D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x1503766E: push dword ptr [ebp - 0x258] */
    RECOMP_CALL(sub_15036DF0); /* 0x15037674: call 0x15036df0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037679: pop ecx */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1503767A: mov word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503767E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15037680: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037681: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037683: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x238)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x238)); /* 0x15037684: add eax, dword ptr [ebp - 0x238] */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x1503768A: mov word ptr [esi + 8], cx */
    ecx = MEM32(ebp + (-0x23C)); /* 0x1503768E: mov ecx, dword ptr [ebp - 0x23c] */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15037694: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x18) = eax; /* 0x15037696: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037699: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x1503769B: mov dword ptr [esi + 0x1c], ecx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1503769E: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x150376A2: mov dword ptr [esi + 0xa], eax */
    eax = MEM32(ebp + (-0x268)); /* 0x150376A5: mov eax, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150376AB: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x150376AC: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x150376AE: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150376B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150376D1; /* 0x150376B3: jmp 0x150376d1 */
L_150376B5:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150376B5: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150376BB: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150376BC: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150376C1: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x150376C2: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150376C8: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150376CE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150376CE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150376D1:
    ecx = MEM32(ebp + (-0x4)); /* 0x150376D1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150376D4: pop edi */
    esi = POP32_VAL(esp); /* 0x150376D5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150376D6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150376D8: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150376D9: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150376DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150376DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150376E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150376E6u);

L_150376E6:
    edi = edi; /* 0x150376E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150376E8: push ebp */
    ebp = esp; /* 0x150376E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x150376EB: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150376F1: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150376F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150376F8: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150376FB: push ebx */
    PUSH32(esp, esi); /* 0x150376FC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150376FD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15037700: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15037701: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15037704: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503772E; /* 0x15037706: jne 0x1503772e */
L_15037708:
    RECOMP_CALL(sub_150363E0); /* 0x15037708: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503770D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1503770F: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x15037711: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15037716: push ebx */
    PUSH32(esp, ebx); /* 0x15037717: push ebx */
    PUSH32(esp, ebx); /* 0x15037718: push ebx */
    PUSH32(esp, ebx); /* 0x15037719: push ebx */
    PUSH32(esp, ebx); /* 0x1503771A: push ebx */
    MEM32(eax) = 0x16u; /* 0x1503771B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15037721: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037726: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15037A9A; /* 0x15037729: jmp 0x15037a9a */
L_1503772E:
    /* test esi, esi */ /* 0x1503772E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037708; /* 0x15037730: je 0x15037708 */
L_15037732:
    PUSH32(esp, 0x15003E20u); /* 0x15037732: push 0x15003e20 */
    PUSH32(esp, edi); /* 0x15037737: push edi */
    RECOMP_CALL(sub_15055990); /* 0x15037738: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503773D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503773E: pop ecx */
    /* test eax, eax */ /* 0x1503773F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037759; /* 0x15037741: je 0x15037759 */
L_15037743:
    RECOMP_CALL(sub_15036430); /* 0x15037743: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15037748: push 2 */
    esi = POP32_VAL(esp); /* 0x1503774A: pop esi */
    MEM32(eax) = esi; /* 0x1503774B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150363E0); /* 0x1503774D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15037752: mov dword ptr [eax], esi */
    goto L_15037A9A; /* 0x15037754: jmp 0x15037a9a */
L_15037759:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15037759: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503777A; /* 0x1503775D: jne 0x1503777a */
L_1503775F:
    SET_LO8(eax, MEM8(edi)); /* 0x1503775F: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15037761: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503776B; /* 0x15037763: je 0x1503776b */
L_15037765:
    /* cmp MEM8(edi + 0x2), 0 */ /* 0x15037765: cmp byte ptr [edi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037743; /* 0x15037769: je 0x15037743 */
L_1503776B:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1503776B: movsx eax, al */
    PUSH32(esp, eax); /* 0x1503776E: push eax */
    RECOMP_CALL(sub_15051A10); /* 0x1503776F: call 0x15051a10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037774: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15037775: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_1503777F; /* 0x15037778: jmp 0x1503777f */
L_1503777A:
    RECOMP_CALL(sub_15036820); /* 0x1503777A: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_1503777F:
    MEM32(ebp + (-0x268)) = eax; /* 0x1503777F: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x258); /* 0x15037785: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1503778B: push eax */
    PUSH32(esp, edi); /* 0x1503778C: push edi */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x1503778D: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15037793: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x25C)) = eax; /* 0x15037795: mov dword ptr [ebp - 0x25c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503779B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037895; /* 0x1503779E: jne 0x15037895 */
L_150377A4:
    PUSH32(esp, 0x15003E24u); /* 0x150377A4: push 0x15003e24 */
    PUSH32(esp, edi); /* 0x150377A9: push edi */
    MEM32(ebp + (-0x25C)) = ebx; /* 0x150377AA: mov dword ptr [ebp - 0x25c], ebx */
    RECOMP_CALL(sub_15055990); /* 0x150377B0: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150377B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150377B6: pop ecx */
    /* test eax, eax */ /* 0x150377B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037743; /* 0x150377B9: je 0x15037743 */
L_150377BB:
    eax = ebp + (-0x25C); /* 0x150377BB: lea eax, [ebp - 0x25c] */
    PUSH32(esp, eax); /* 0x150377C1: push eax */
    PUSH32(esp, 0x104u); /* 0x150377C2: push 0x104 */
    eax = ebp + (-0x108); /* 0x150377C7: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x150377CD: push edi */
    PUSH32(esp, eax); /* 0x150377CE: push eax */
    RECOMP_CALL(sub_15036EAF); /* 0x150377CF: call 0x15036eaf */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150377D4: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150377D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x260)) = edx; /* 0x150377D9: mov dword ptr [ebp - 0x260], edx */
    /* test edx, edx */ /* 0x150377DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037878; /* 0x150377E1: je 0x15037878 */
L_150377E7:
    ecx = edx; /* 0x150377E7: mov ecx, edx */
    eax = ecx + 0x1; /* 0x150377E9: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x150377EC: mov dword ptr [ebp - 0x26c], eax */
L_150377F2:
    SET_LO8(eax, MEM8(ecx)); /* 0x150377F2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150377F4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150377F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150377F2; /* 0x150377F7: jne 0x150377f2 */
L_150377F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x26C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x26C)); /* 0x150377F9: sub ecx, dword ptr [ebp - 0x26c] */
    _flag_k = FK_CMP;
    /* cmp ecx, 3 */ /* 0x150377FF: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037815; /* 0x15037802: je 0x15037815 */
L_15037804:
    PUSH32(esp, edx); /* 0x15037804: push edx */
    RECOMP_CALL(sub_15036D52); /* 0x15037805: call 0x15036d52 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503780A: pop ecx */
    /* test eax, eax */ /* 0x1503780B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037878; /* 0x1503780D: je 0x15037878 */
L_1503780F:
    edx = MEM32(ebp + (-0x260)); /* 0x1503780F: mov edx, dword ptr [ebp - 0x260] */
L_15037815:
    PUSH32(esp, edx); /* 0x15037815: push edx */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x15037816: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503781C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503781E: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1503781F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15037878; /* 0x15037821: jbe 0x15037878 */
L_15037823:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x15037823: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037837; /* 0x15037829: je 0x15037837 */
L_1503782B:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x1503782B: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x15037831: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037836: pop ecx */
L_15037837:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037837: push -1 */
    PUSH32(esp, ebx); /* 0x15037839: push ebx */
    PUSH32(esp, ebx); /* 0x1503783A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503783B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x258)) = 0x10u; /* 0x1503783D: mov dword ptr [ebp - 0x258], 0x10 */
    PUSH32(esp, ebx); /* 0x15037847: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15037848: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x23C)) = ebx; /* 0x15037849: mov dword ptr [ebp - 0x23c], ebx */
    PUSH32(esp, eax); /* 0x1503784F: push eax */
    PUSH32(esp, eax); /* 0x15037850: push eax */
    PUSH32(esp, 0x7BCu); /* 0x15037851: push 0x7bc */
    MEM32(ebp + (-0x238)) = ebx; /* 0x15037856: mov dword ptr [ebp - 0x238], ebx */
    MEM8(ebp + (-0x22C)) = (uint8_t)(LO8(ebx)); /* 0x1503785C: mov byte ptr [ebp - 0x22c], bl */
    RECOMP_CALL(sub_1509577E); /* 0x15037862: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037867: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = eax; /* 0x1503786A: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x20) = eax; /* 0x1503786D: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x28) = eax; /* 0x15037870: mov dword ptr [esi + 0x28], eax */
    goto L_15037A39; /* 0x15037873: jmp 0x15037a39 */
L_15037878:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x15037878: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037743; /* 0x1503787E: je 0x15037743 */
L_15037884:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037884: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x1503788A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503788F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15037743; /* 0x15037890: jmp 0x15037743 */
L_15037895:
    /* cmp MEM32(ebp + (-0x244)), ebx */ /* 0x15037895: cmp dword ptr [ebp - 0x244], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150378A9; /* 0x1503789B: jne 0x150378a9 */
L_1503789D:
    /* cmp MEM32(ebp + (-0x240)), ebx */ /* 0x1503789D: cmp dword ptr [ebp - 0x240], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x240))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150378A9; /* 0x150378A3: jne 0x150378a9 */
L_150378A5:
    eax = ebx; /* 0x150378A5: mov eax, ebx */
    goto L_1503791B; /* 0x150378A7: jmp 0x1503791b */
L_150378A9:
    eax = ebp + (-0x264); /* 0x150378A9: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150378AF: push eax */
    eax = ebp + (-0x244); /* 0x150378B0: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x150378B6: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150378B7: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150378BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150378BF: je 0x15037a81 */
L_150378C5:
    eax = ebp + (-0x118); /* 0x150378C5: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150378CB: push eax */
    eax = ebp + (-0x264); /* 0x150378CC: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150378D2: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150378D3: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150378D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150378DB: je 0x15037a81 */
L_150378E1:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150378E1: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150378E8: push -1 */
    PUSH32(esp, eax); /* 0x150378EA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150378EB: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x150378F2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x150378F3: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x150378FA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x150378FB: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037902: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037903: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x1503790A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x1503790B: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037912: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037913: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037918: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1503791B:
    MEM32(esi + 0x24) = eax; /* 0x1503791B: mov dword ptr [esi + 0x24], eax */
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x1503791E: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503792E; /* 0x15037924: jne 0x1503792e */
L_15037926:
    /* cmp MEM32(ebp + (-0x248)), ebx */ /* 0x15037926: cmp dword ptr [ebp - 0x248], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150379A0; /* 0x1503792C: je 0x150379a0 */
L_1503792E:
    eax = ebp + (-0x264); /* 0x1503792E: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037934: push eax */
    eax = ebp + (-0x24C); /* 0x15037935: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x1503793B: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503793C: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037942: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x15037944: je 0x15037a81 */
L_1503794A:
    eax = ebp + (-0x118); /* 0x1503794A: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037950: push eax */
    eax = ebp + (-0x264); /* 0x15037951: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037957: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15037958: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503795E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x15037960: je 0x15037a81 */
L_15037966:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037966: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503796D: push -1 */
    PUSH32(esp, eax); /* 0x1503796F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037970: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x15037977: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x15037978: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x1503797F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037980: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037987: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037988: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x1503798F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037990: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037997: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037998: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503799D: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150379A0:
    MEM32(esi + 0x20) = eax; /* 0x150379A0: mov dword ptr [esi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x254)), ebx */ /* 0x150379A3: cmp dword ptr [ebp - 0x254], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x254))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150379B8; /* 0x150379A9: jne 0x150379b8 */
L_150379AB:
    /* cmp MEM32(ebp + (-0x250)), ebx */ /* 0x150379AB: cmp dword ptr [ebp - 0x250], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150379B8; /* 0x150379B1: jne 0x150379b8 */
L_150379B3:
    eax = MEM32(esi + 0x24); /* 0x150379B3: mov eax, dword ptr [esi + 0x24] */
    goto L_15037A2A; /* 0x150379B6: jmp 0x15037a2a */
L_150379B8:
    eax = ebp + (-0x264); /* 0x150379B8: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150379BE: push eax */
    eax = ebp + (-0x254); /* 0x150379BF: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x150379C5: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150379C6: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150379CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150379CE: je 0x15037a81 */
L_150379D4:
    eax = ebp + (-0x118); /* 0x150379D4: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150379DA: push eax */
    eax = ebp + (-0x264); /* 0x150379DB: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150379E1: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150379E2: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150379E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150379EA: je 0x15037a81 */
L_150379F0:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150379F0: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150379F7: push -1 */
    PUSH32(esp, eax); /* 0x150379F9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150379FA: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x15037A01: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x15037A02: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037A09: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037A0A: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037A11: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037A12: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037A19: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037A1A: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037A21: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037A22: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037A27: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037A2A:
    MEM32(esi + 0x28) = eax; /* 0x15037A2A: mov dword ptr [esi + 0x28], eax */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037A2D: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037A33: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15037A39:
    PUSH32(esp, edi); /* 0x15037A39: push edi */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x15037A3A: push dword ptr [ebp - 0x258] */
    RECOMP_CALL(sub_15036DF0); /* 0x15037A40: call 0x15036df0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037A45: pop ecx */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15037A46: mov word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15037A4C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037A4D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037A4F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x238)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x238)); /* 0x15037A50: add eax, dword ptr [ebp - 0x238] */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15037A56: mov word ptr [esi + 8], cx */
    ecx = MEM32(ebp + (-0x23C)); /* 0x15037A5A: mov ecx, dword ptr [ebp - 0x23c] */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15037A60: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x18) = eax; /* 0x15037A62: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x15037A67: mov dword ptr [esi + 0x1c], ecx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15037A6A: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x15037A6E: mov dword ptr [esi + 0xa], eax */
    eax = MEM32(ebp + (-0x268)); /* 0x15037A71: mov eax, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15037A77: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x15037A78: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x15037A7A: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037A9D; /* 0x15037A7F: jmp 0x15037a9d */
L_15037A81:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037A81: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037A87: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037A88: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037A8D: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037A8E: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037A94: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15037A9A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15037A9A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15037A9D:
    ecx = MEM32(ebp + (-0x4)); /* 0x15037A9D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15037AA0: pop edi */
    esi = POP32_VAL(esp); /* 0x15037AA1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15037AA2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15037AA4: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15037AA5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037AAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037AAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037AC0u);

    goto L_15037AC0;
L_150376E6:
    edi = edi; /* 0x150376E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150376E8: push ebp */
    ebp = esp; /* 0x150376E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x26Cu; /* 0x150376EB: sub esp, 0x26c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150376F1: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150376F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150376F8: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150376FB: push ebx */
    PUSH32(esp, esi); /* 0x150376FC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150376FD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15037700: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15037701: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15037704: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503772E; /* 0x15037706: jne 0x1503772e */
L_15037708:
    RECOMP_CALL(sub_150363E0); /* 0x15037708: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503770D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1503770F: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x15037711: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15037716: push ebx */
    PUSH32(esp, ebx); /* 0x15037717: push ebx */
    PUSH32(esp, ebx); /* 0x15037718: push ebx */
    PUSH32(esp, ebx); /* 0x15037719: push ebx */
    PUSH32(esp, ebx); /* 0x1503771A: push ebx */
    MEM32(eax) = 0x16u; /* 0x1503771B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15037721: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037726: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15037A9A; /* 0x15037729: jmp 0x15037a9a */
L_1503772E:
    /* test esi, esi */ /* 0x1503772E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037708; /* 0x15037730: je 0x15037708 */
L_15037732:
    PUSH32(esp, 0x15003E20u); /* 0x15037732: push 0x15003e20 */
    PUSH32(esp, edi); /* 0x15037737: push edi */
    RECOMP_CALL(sub_15055990); /* 0x15037738: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503773D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503773E: pop ecx */
    /* test eax, eax */ /* 0x1503773F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037759; /* 0x15037741: je 0x15037759 */
L_15037743:
    RECOMP_CALL(sub_15036430); /* 0x15037743: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15037748: push 2 */
    esi = POP32_VAL(esp); /* 0x1503774A: pop esi */
    MEM32(eax) = esi; /* 0x1503774B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150363E0); /* 0x1503774D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15037752: mov dword ptr [eax], esi */
    goto L_15037A9A; /* 0x15037754: jmp 0x15037a9a */
L_15037759:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x15037759: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503777A; /* 0x1503775D: jne 0x1503777a */
L_1503775F:
    SET_LO8(eax, MEM8(edi)); /* 0x1503775F: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15037761: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503776B; /* 0x15037763: je 0x1503776b */
L_15037765:
    /* cmp MEM8(edi + 0x2), 0 */ /* 0x15037765: cmp byte ptr [edi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037743; /* 0x15037769: je 0x15037743 */
L_1503776B:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1503776B: movsx eax, al */
    PUSH32(esp, eax); /* 0x1503776E: push eax */
    RECOMP_CALL(sub_15051A10); /* 0x1503776F: call 0x15051a10 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037774: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15037775: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_1503777F; /* 0x15037778: jmp 0x1503777f */
L_1503777A:
    RECOMP_CALL(sub_15036820); /* 0x1503777A: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_1503777F:
    MEM32(ebp + (-0x268)) = eax; /* 0x1503777F: mov dword ptr [ebp - 0x268], eax */
    eax = ebp + (-0x258); /* 0x15037785: lea eax, [ebp - 0x258] */
    PUSH32(esp, eax); /* 0x1503778B: push eax */
    PUSH32(esp, edi); /* 0x1503778C: push edi */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x1503778D: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15037793: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x25C)) = eax; /* 0x15037795: mov dword ptr [ebp - 0x25c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503779B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037895; /* 0x1503779E: jne 0x15037895 */
L_150377A4:
    PUSH32(esp, 0x15003E24u); /* 0x150377A4: push 0x15003e24 */
    PUSH32(esp, edi); /* 0x150377A9: push edi */
    MEM32(ebp + (-0x25C)) = ebx; /* 0x150377AA: mov dword ptr [ebp - 0x25c], ebx */
    RECOMP_CALL(sub_15055990); /* 0x150377B0: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150377B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150377B6: pop ecx */
    /* test eax, eax */ /* 0x150377B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037743; /* 0x150377B9: je 0x15037743 */
L_150377BB:
    eax = ebp + (-0x25C); /* 0x150377BB: lea eax, [ebp - 0x25c] */
    PUSH32(esp, eax); /* 0x150377C1: push eax */
    PUSH32(esp, 0x104u); /* 0x150377C2: push 0x104 */
    eax = ebp + (-0x108); /* 0x150377C7: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x150377CD: push edi */
    PUSH32(esp, eax); /* 0x150377CE: push eax */
    RECOMP_CALL(sub_15036EAF); /* 0x150377CF: call 0x15036eaf */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150377D4: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150377D6: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x260)) = edx; /* 0x150377D9: mov dword ptr [ebp - 0x260], edx */
    /* test edx, edx */ /* 0x150377DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037878; /* 0x150377E1: je 0x15037878 */
L_150377E7:
    ecx = edx; /* 0x150377E7: mov ecx, edx */
    eax = ecx + 0x1; /* 0x150377E9: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x150377EC: mov dword ptr [ebp - 0x26c], eax */
L_150377F2:
    SET_LO8(eax, MEM8(ecx)); /* 0x150377F2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150377F4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150377F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150377F2; /* 0x150377F7: jne 0x150377f2 */
L_150377F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x26C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x26C)); /* 0x150377F9: sub ecx, dword ptr [ebp - 0x26c] */
    _flag_k = FK_CMP;
    /* cmp ecx, 3 */ /* 0x150377FF: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037815; /* 0x15037802: je 0x15037815 */
L_15037804:
    PUSH32(esp, edx); /* 0x15037804: push edx */
    RECOMP_CALL(sub_15036D52); /* 0x15037805: call 0x15036d52 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503780A: pop ecx */
    /* test eax, eax */ /* 0x1503780B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037878; /* 0x1503780D: je 0x15037878 */
L_1503780F:
    edx = MEM32(ebp + (-0x260)); /* 0x1503780F: mov edx, dword ptr [ebp - 0x260] */
L_15037815:
    PUSH32(esp, edx); /* 0x15037815: push edx */
    RECOMP_ICALL(MEM32(0x150C00B0)); /* 0x15037816: call dword ptr [0x150c00b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503781C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503781E: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1503781F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15037878; /* 0x15037821: jbe 0x15037878 */
L_15037823:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x15037823: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037837; /* 0x15037829: je 0x15037837 */
L_1503782B:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x1503782B: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x15037831: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037836: pop ecx */
L_15037837:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15037837: push -1 */
    PUSH32(esp, ebx); /* 0x15037839: push ebx */
    PUSH32(esp, ebx); /* 0x1503783A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503783B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x258)) = 0x10u; /* 0x1503783D: mov dword ptr [ebp - 0x258], 0x10 */
    PUSH32(esp, ebx); /* 0x15037847: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15037848: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x23C)) = ebx; /* 0x15037849: mov dword ptr [ebp - 0x23c], ebx */
    PUSH32(esp, eax); /* 0x1503784F: push eax */
    PUSH32(esp, eax); /* 0x15037850: push eax */
    PUSH32(esp, 0x7BCu); /* 0x15037851: push 0x7bc */
    MEM32(ebp + (-0x238)) = ebx; /* 0x15037856: mov dword ptr [ebp - 0x238], ebx */
    MEM8(ebp + (-0x22C)) = (uint8_t)(LO8(ebx)); /* 0x1503785C: mov byte ptr [ebp - 0x22c], bl */
    RECOMP_CALL(sub_1509577E); /* 0x15037862: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037867: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = eax; /* 0x1503786A: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x20) = eax; /* 0x1503786D: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x28) = eax; /* 0x15037870: mov dword ptr [esi + 0x28], eax */
    goto L_15037A39; /* 0x15037873: jmp 0x15037a39 */
L_15037878:
    /* cmp MEM32(ebp + (-0x25C)), ebx */ /* 0x15037878: cmp dword ptr [ebp - 0x25c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037743; /* 0x1503787E: je 0x15037743 */
L_15037884:
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037884: push dword ptr [ebp - 0x25c] */
    RECOMP_CALL(sub_15048840); /* 0x1503788A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503788F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15037743; /* 0x15037890: jmp 0x15037743 */
L_15037895:
    /* cmp MEM32(ebp + (-0x244)), ebx */ /* 0x15037895: cmp dword ptr [ebp - 0x244], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x244))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150378A9; /* 0x1503789B: jne 0x150378a9 */
L_1503789D:
    /* cmp MEM32(ebp + (-0x240)), ebx */ /* 0x1503789D: cmp dword ptr [ebp - 0x240], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x240))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150378A9; /* 0x150378A3: jne 0x150378a9 */
L_150378A5:
    eax = ebx; /* 0x150378A5: mov eax, ebx */
    goto L_1503791B; /* 0x150378A7: jmp 0x1503791b */
L_150378A9:
    eax = ebp + (-0x264); /* 0x150378A9: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150378AF: push eax */
    eax = ebp + (-0x244); /* 0x150378B0: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x150378B6: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150378B7: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150378BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150378BF: je 0x15037a81 */
L_150378C5:
    eax = ebp + (-0x118); /* 0x150378C5: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150378CB: push eax */
    eax = ebp + (-0x264); /* 0x150378CC: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150378D2: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150378D3: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150378D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150378DB: je 0x15037a81 */
L_150378E1:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150378E1: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150378E8: push -1 */
    PUSH32(esp, eax); /* 0x150378EA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150378EB: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x150378F2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x150378F3: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x150378FA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x150378FB: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037902: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037903: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x1503790A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x1503790B: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037912: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037913: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037918: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1503791B:
    MEM32(esi + 0x24) = eax; /* 0x1503791B: mov dword ptr [esi + 0x24], eax */
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x1503791E: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503792E; /* 0x15037924: jne 0x1503792e */
L_15037926:
    /* cmp MEM32(ebp + (-0x248)), ebx */ /* 0x15037926: cmp dword ptr [ebp - 0x248], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x248))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150379A0; /* 0x1503792C: je 0x150379a0 */
L_1503792E:
    eax = ebp + (-0x264); /* 0x1503792E: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037934: push eax */
    eax = ebp + (-0x24C); /* 0x15037935: lea eax, [ebp - 0x24c] */
    PUSH32(esp, eax); /* 0x1503793B: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503793C: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037942: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x15037944: je 0x15037a81 */
L_1503794A:
    eax = ebp + (-0x118); /* 0x1503794A: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037950: push eax */
    eax = ebp + (-0x264); /* 0x15037951: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x15037957: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15037958: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503795E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x15037960: je 0x15037a81 */
L_15037966:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x15037966: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503796D: push -1 */
    PUSH32(esp, eax); /* 0x1503796F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x15037970: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x15037977: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x15037978: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x1503797F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037980: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037987: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037988: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x1503798F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037990: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037997: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037998: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503799D: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150379A0:
    MEM32(esi + 0x20) = eax; /* 0x150379A0: mov dword ptr [esi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x254)), ebx */ /* 0x150379A3: cmp dword ptr [ebp - 0x254], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x254))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150379B8; /* 0x150379A9: jne 0x150379b8 */
L_150379AB:
    /* cmp MEM32(ebp + (-0x250)), ebx */ /* 0x150379AB: cmp dword ptr [ebp - 0x250], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x250))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150379B8; /* 0x150379B1: jne 0x150379b8 */
L_150379B3:
    eax = MEM32(esi + 0x24); /* 0x150379B3: mov eax, dword ptr [esi + 0x24] */
    goto L_15037A2A; /* 0x150379B6: jmp 0x15037a2a */
L_150379B8:
    eax = ebp + (-0x264); /* 0x150379B8: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150379BE: push eax */
    eax = ebp + (-0x254); /* 0x150379BF: lea eax, [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x150379C5: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150379C6: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150379CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150379CE: je 0x15037a81 */
L_150379D4:
    eax = ebp + (-0x118); /* 0x150379D4: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x150379DA: push eax */
    eax = ebp + (-0x264); /* 0x150379DB: lea eax, [ebp - 0x264] */
    PUSH32(esp, eax); /* 0x150379E1: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150379E2: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150379E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037A81; /* 0x150379EA: je 0x15037a81 */
L_150379F0:
    eax = (uint32_t)MEM16(ebp + (-0x10C)); /* 0x150379F0: movzx eax, word ptr [ebp - 0x10c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150379F7: push -1 */
    PUSH32(esp, eax); /* 0x150379F9: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x10E)); /* 0x150379FA: movzx eax, word ptr [ebp - 0x10e] */
    PUSH32(esp, eax); /* 0x15037A01: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x110)); /* 0x15037A02: movzx eax, word ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x15037A09: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x112)); /* 0x15037A0A: movzx eax, word ptr [ebp - 0x112] */
    PUSH32(esp, eax); /* 0x15037A11: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x116)); /* 0x15037A12: movzx eax, word ptr [ebp - 0x116] */
    PUSH32(esp, eax); /* 0x15037A19: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x118)); /* 0x15037A1A: movzx eax, word ptr [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15037A21: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15037A22: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15037A27: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15037A2A:
    MEM32(esi + 0x28) = eax; /* 0x15037A2A: mov dword ptr [esi + 0x28], eax */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037A2D: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037A33: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15037A39:
    PUSH32(esp, edi); /* 0x15037A39: push edi */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x15037A3A: push dword ptr [ebp - 0x258] */
    RECOMP_CALL(sub_15036DF0); /* 0x15037A40: call 0x15036df0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037A45: pop ecx */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15037A46: mov word ptr [esi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15037A4C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15037A4D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15037A4F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x238)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x238)); /* 0x15037A50: add eax, dword ptr [ebp - 0x238] */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15037A56: mov word ptr [esi + 8], cx */
    ecx = MEM32(ebp + (-0x23C)); /* 0x15037A5A: mov ecx, dword ptr [ebp - 0x23c] */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15037A60: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x18) = eax; /* 0x15037A62: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x15037A67: mov dword ptr [esi + 0x1c], ecx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15037A6A: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x15037A6E: mov dword ptr [esi + 0xa], eax */
    eax = MEM32(ebp + (-0x268)); /* 0x15037A71: mov eax, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15037A77: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x15037A78: mov dword ptr [esi], eax */
    MEM32(esi + 0x10) = eax; /* 0x15037A7A: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037A7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037A9D; /* 0x15037A7F: jmp 0x15037a9d */
L_15037A81:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037A81: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037A87: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037A88: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037A8D: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x15037A8E: push dword ptr [ebp - 0x25c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15037A94: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15037A9A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15037A9A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15037A9D:
    ecx = MEM32(ebp + (-0x4)); /* 0x15037A9D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15037AA0: pop edi */
    esi = POP32_VAL(esp); /* 0x15037AA1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15037AA2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15037AA4: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15037AA5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037AAA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037AAB: ret  */
L_15037AC0:
    edi = edi; /* 0x15037AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037AC2: push ebp */
    ebp = esp; /* 0x15037AC3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15037AC5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150376E6; /* 0x15037AC6: jmp 0x150376e6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15037AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037AE0u);

L_15037AE0:
    edi = edi; /* 0x15037AE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037AE2: push ebp */
    ebp = esp; /* 0x15037AE3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15037AE5: pop ebp */
    goto L_15037B00; /* 0x15037AE6: jmp 0x15037b00 */
L_15037B00:
    edi = edi; /* 0x15037B00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037B02: push ebp */
    ebp = esp; /* 0x15037B03: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037B05: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00BC)); /* 0x15037B08: call dword ptr [0x150c00bc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037B0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037B28; /* 0x15037B10: jne 0x15037b28 */
L_15037B12:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037B12: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037B18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037B28; /* 0x15037B1A: je 0x15037b28 */
L_15037B1C:
    PUSH32(esp, eax); /* 0x15037B1C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037B1D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037B22: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15037B23: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15037B26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037B27: ret  */
L_15037B28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037B28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15037B2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037B2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037B00u);

L_15037B00:
    edi = edi; /* 0x15037B00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037B02: push ebp */
    ebp = esp; /* 0x15037B03: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037B05: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00BC)); /* 0x15037B08: call dword ptr [0x150c00bc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037B0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037B28; /* 0x15037B10: jne 0x15037b28 */
L_15037B12:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037B12: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037B18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037B28; /* 0x15037B1A: je 0x15037b28 */
L_15037B1C:
    PUSH32(esp, eax); /* 0x15037B1C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037B1D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037B22: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15037B23: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15037B26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037B27: ret  */
L_15037B28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037B28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15037B2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037B2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037B40u);

L_15037B40:
    edi = edi; /* 0x15037B40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037B42: push ebp */
    ebp = esp; /* 0x15037B43: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15037B45: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037B48: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15037B60); /* 0x15037B4B: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15037B50: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15037B52: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037B53: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15037B54: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x15037B56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037B57: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037B60u);

L_15037B60:
    edi = edi; /* 0x15037B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037B62: push ebp */
    ebp = esp; /* 0x15037B63: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15037B65: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15037B69: push esi */
    PUSH32(esp, edi); /* 0x15037B6A: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037B91; /* 0x15037B6B: jne 0x15037b91 */
L_15037B6D:
    RECOMP_CALL(sub_150363E0); /* 0x15037B6D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15037B72: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15037B74: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15037B76: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15037B7B: push 0x16 */
    edi = POP32_VAL(esp); /* 0x15037B7D: pop edi */
    PUSH32(esp, esi); /* 0x15037B7E: push esi */
    PUSH32(esp, esi); /* 0x15037B7F: push esi */
    PUSH32(esp, esi); /* 0x15037B80: push esi */
    PUSH32(esp, esi); /* 0x15037B81: push esi */
    PUSH32(esp, esi); /* 0x15037B82: push esi */
    MEM32(eax) = edi; /* 0x15037B83: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15037B85: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037B8A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15037B8D: mov eax, edi */
    goto L_15037BE7; /* 0x15037B8F: jmp 0x15037be7 */
L_15037B91:
    /* test MEM32(ebp + 0xC), 0xFFFFFFF0u */ /* 0x15037B91: test dword ptr [ebp + 0xc], 0xfffffff0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037B6D; /* 0x15037B98: jne 0x15037b6d */
L_15037B9A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037B9A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00C0)); /* 0x15037B9D: call dword ptr [0x150c00c0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15037BA3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037BBE; /* 0x15037BA6: jne 0x15037bbe */
L_15037BA8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037BA8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037BAE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037BAF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037BB4: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x15037BB5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15037BBA: mov eax, dword ptr [eax] */
    goto L_15037BE7; /* 0x15037BBC: jmp 0x15037be7 */
L_15037BBE:
    /* test LO8(eax), 0x10u */ /* 0x15037BBE: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037BE5; /* 0x15037BC0: jne 0x15037be5 */
L_15037BC2:
    /* test LO8(eax), 1 */ /* 0x15037BC2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037BE5; /* 0x15037BC4: je 0x15037be5 */
L_15037BC6:
    /* test MEM8(ebp + 0xC), 2 */ /* 0x15037BC6: test byte ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037BE5; /* 0x15037BCA: je 0x15037be5 */
L_15037BCC:
    RECOMP_CALL(sub_150363E0); /* 0x15037BCC: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 5; /* 0x15037BD1: mov dword ptr [eax], 5 */
    RECOMP_CALL(sub_15036430); /* 0x15037BD7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xDu); /* 0x15037BDC: push 0xd */
    ecx = POP32_VAL(esp); /* 0x15037BDE: pop ecx */
    MEM32(eax) = ecx; /* 0x15037BDF: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15037BE1: mov eax, ecx */
    goto L_15037BE7; /* 0x15037BE3: jmp 0x15037be7 */
L_15037BE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037BE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15037BE7:
    edi = POP32_VAL(esp); /* 0x15037BE7: pop edi */
    esi = POP32_VAL(esp); /* 0x15037BE8: pop esi */
    ebp = POP32_VAL(esp); /* 0x15037BE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037BEA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037C00u);

L_15037C00:
    edi = edi; /* 0x15037C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037C02: push ebp */
    ebp = esp; /* 0x15037C03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x21Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x21Cu; /* 0x15037C05: sub esp, 0x21c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15037C0B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15037C10: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15037C12: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15037C15: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15037C18: push ebx */
    PUSH32(esp, esi); /* 0x15037C19: push esi */
    PUSH32(esp, edi); /* 0x15037C1A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15037C1B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x218); /* 0x15037C1D: lea esi, [ebp - 0x218] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x15037C23: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x21C)) = edi; /* 0x15037C26: mov dword ptr [ebp - 0x21c], edi */
    /* test eax, eax */ /* 0x15037C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037C54; /* 0x15037C2E: jne 0x15037c54 */
L_15037C30:
    RECOMP_CALL(sub_150363E0); /* 0x15037C30: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x15037C35: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15036430); /* 0x15037C37: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15037C3C: push edi */
    PUSH32(esp, edi); /* 0x15037C3D: push edi */
    PUSH32(esp, edi); /* 0x15037C3E: push edi */
    PUSH32(esp, edi); /* 0x15037C3F: push edi */
    PUSH32(esp, edi); /* 0x15037C40: push edi */
    MEM32(eax) = 0x16u; /* 0x15037C41: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15037C47: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037C4C: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15037D27; /* 0x15037C4F: jmp 0x15037d27 */
L_15037C54:
    PUSH32(esp, eax); /* 0x15037C54: push eax */
    RECOMP_ICALL(MEM32(0x150C01D4)); /* 0x15037C55: call dword ptr [0x150c01d4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037C5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037D0F; /* 0x15037C5D: je 0x15037d0f */
L_15037C63:
    eax = ebp + (-0x218); /* 0x15037C63: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x15037C69: push eax */
    PUSH32(esp, 0x105u); /* 0x15037C6A: push 0x105 */
    RECOMP_ICALL(MEM32(0x150C01F8)); /* 0x15037C6F: call dword ptr [0x150c01f8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15037C75: mov edi, eax */
    /* cmp edi, 0x104u */ /* 0x15037C77: cmp edi, 0x104 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15037CAD; /* 0x15037C7D: jle 0x15037cad */
L_15037C7F:
    ecx = edi + 0x1; /* 0x15037C7F: lea ecx, [edi + 1] */
    PUSH32(esp, 2); /* 0x15037C82: push 2 */
    PUSH32(esp, ecx); /* 0x15037C84: push ecx */
    RECOMP_CALL(sub_15048EE2); /* 0x15037C85: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15037C8A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15037C8C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037C8D: pop ecx */
    /* test esi, esi */ /* 0x15037C8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037C96; /* 0x15037C90: jne 0x15037c96 */
L_15037C92:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15037C92: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037D0F; /* 0x15037C94: jmp 0x15037d0f */
L_15037C96:
    PUSH32(esp, esi); /* 0x15037C96: push esi */
    eax = edi + 0x1; /* 0x15037C97: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x15037C9A: push eax */
    RECOMP_ICALL(MEM32(0x150C01F8)); /* 0x15037C9B: call dword ptr [0x150c01f8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15037CA1: mov edi, eax */
    MEM32(ebp + (-0x21C)) = 1; /* 0x15037CA3: mov dword ptr [ebp - 0x21c], 1 */
L_15037CAD:
    /* test edi, edi */ /* 0x15037CAD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037D09; /* 0x15037CAF: je 0x15037d09 */
L_15037CB1:
    eax = (uint32_t)MEM16(esi); /* 0x15037CB1: movzx eax, word ptr [esi] */
    /* cmp eax, 0x5Cu */ /* 0x15037CB4: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037CBE; /* 0x15037CB7: je 0x15037cbe */
L_15037CB9:
    /* cmp eax, 0x2Fu */ /* 0x15037CB9: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037CCE; /* 0x15037CBC: jne 0x15037cce */
L_15037CBE:
    /* cmp LO16(eax), MEM16(esi + 0x2) */ /* 0x15037CBE: cmp ax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037CCE; /* 0x15037CC2: jne 0x15037cce */
L_15037CC4:
    edi = MEM32(ebp + (-0x21C)); /* 0x15037CC4: mov edi, dword ptr [ebp - 0x21c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15037CCA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037D1C; /* 0x15037CCC: jmp 0x15037d1c */
L_15037CCE:
    PUSH32(esp, 0x3Du); /* 0x15037CCE: push 0x3d */
    eax = POP32_VAL(esp); /* 0x15037CD0: pop eax */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15037CD1: mov word ptr [ebp - 0xc], ax */
    eax = (uint32_t)MEM16(esi); /* 0x15037CD5: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x15037CD8: push eax */
    RECOMP_CALL(sub_15032F50); /* 0x15037CD9: call 0x15032f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037CDE: pop ecx */
    PUSH32(esp, 0x3Au); /* 0x15037CDF: push 0x3a */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15037CE1: mov word ptr [ebp - 0xa], ax */
    eax = POP32_VAL(esp); /* 0x15037CE5: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15037CE6: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037CEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15037CEC: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0xC); /* 0x15037CF0: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x15037CF3: push esi */
    PUSH32(esp, eax); /* 0x15037CF4: push eax */
    RECOMP_ICALL(MEM32(0x150C01D0)); /* 0x15037CF5: call dword ptr [0x150c01d0] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x21C)); /* 0x15037CFB: mov edi, dword ptr [ebp - 0x21c] */
    /* test eax, eax */ /* 0x15037D01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037D0F; /* 0x15037D03: je 0x15037d0f */
L_15037D05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15037D05: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037D1C; /* 0x15037D07: jmp 0x15037d1c */
L_15037D09:
    edi = MEM32(ebp + (-0x21C)); /* 0x15037D09: mov edi, dword ptr [ebp - 0x21c] */
L_15037D0F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037D0F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037D15: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037D16: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037D1B: pop ecx */
L_15037D1C:
    /* test edi, edi */ /* 0x15037D1C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037D27; /* 0x15037D1E: je 0x15037d27 */
L_15037D20:
    PUSH32(esp, esi); /* 0x15037D20: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15037D21: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037D26: pop ecx */
L_15037D27:
    ecx = MEM32(ebp + (-0x4)); /* 0x15037D27: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x15037D2A: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x15037D2C: pop edi */
    esi = POP32_VAL(esp); /* 0x15037D2D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15037D2E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15037D30: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15037D31: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037D36: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037D37: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037D40u);

L_15037D40:
    edi = edi; /* 0x15037D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037D42: push ebp */
    ebp = esp; /* 0x15037D43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15037D45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15037D46: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15037D49: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037D71; /* 0x15037D4B: jne 0x15037d71 */
L_15037D4D:
    RECOMP_CALL(sub_150363E0); /* 0x15037D4D: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15037D52: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15037D54: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15037D59: push esi */
    PUSH32(esp, esi); /* 0x15037D5A: push esi */
    PUSH32(esp, esi); /* 0x15037D5B: push esi */
    PUSH32(esp, esi); /* 0x15037D5C: push esi */
    PUSH32(esp, esi); /* 0x15037D5D: push esi */
    MEM32(eax) = 0x16u; /* 0x15037D5E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15037D64: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037D69: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15037D6C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15037D6C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037DA9; /* 0x15037D6F: jmp 0x15037da9 */
L_15037D71:
    PUSH32(esp, esi); /* 0x15037D71: push esi */
    RECOMP_ICALL(MEM32(0x150C00C0)); /* 0x15037D72: call dword ptr [0x150c00c0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15037D78: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15037D7A: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15037D8E; /* 0x15037D7D: jne 0x15037d8e */
L_15037D7F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037D7F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037D85: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037D86: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037D8B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15037D6C; /* 0x15037D8C: jmp 0x15037d6c */
L_15037D8E:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15037D8E: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x15037D91: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0xC), 0x80u */ /* 0x15037D94: test byte ptr [ebp + 0xc], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x15037D98: cmove edx, eax */
    PUSH32(esp, edx); /* 0x15037D9B: push edx */
    PUSH32(esp, esi); /* 0x15037D9C: push esi */
    RECOMP_ICALL(MEM32(0x150C00C4)); /* 0x15037D9D: call dword ptr [0x150c00c4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15037DA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037D7F; /* 0x15037DA5: je 0x15037d7f */
L_15037DA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037DA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15037DA9:
    esi = POP32_VAL(esp); /* 0x15037DA9: pop esi */
    ebp = POP32_VAL(esp); /* 0x15037DAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037DAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037DC0u);

L_15037DC0:
    edi = edi; /* 0x15037DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037DC2: push ebp */
    ebp = esp; /* 0x15037DC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15037DC5: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x15037DC6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15037DC9: push ebx */
    PUSH32(esp, esi); /* 0x15037DCA: push esi */
    PUSH32(esp, edi); /* 0x15037DCB: push edi */
    /* test eax, eax */ /* 0x15037DCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037EB4; /* 0x15037DCE: je 0x15037eb4 */
L_15037DD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15037DD4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(edi) */ /* 0x15037DD6: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15037EB4; /* 0x15037DD9: je 0x15037eb4 */
L_15037DDF:
    ebx = MEM32(ebp + 0x8); /* 0x15037DDF: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15037DE2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037E47; /* 0x15037DE4: jne 0x15037e47 */
L_15037DE6:
    PUSH32(esp, edi); /* 0x15037DE6: push edi */
    PUSH32(esp, edi); /* 0x15037DE7: push edi */
    PUSH32(esp, edi); /* 0x15037DE8: push edi */
    PUSH32(esp, eax); /* 0x15037DE9: push eax */
    RECOMP_ICALL(MEM32(0x150C00C8)); /* 0x15037DEA: call dword ptr [0x150c00c8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15037DF0: mov esi, eax */
    /* test esi, esi */ /* 0x15037DF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037E09; /* 0x15037DF4: jne 0x15037e09 */
L_15037DF6:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15037DF6: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15037DFC: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15037DFD: call 0x150363fb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037E02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037EC0; /* 0x15037E04: jmp 0x15037ec0 */
L_15037E09:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15037E09: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x10); } /* 0x15037E0C: cmova esi, dword ptr [ebp + 0x10] */
    /* cmp esi, 0x7FFFFFFFu */ /* 0x15037E10: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15037E2A; /* 0x15037E16: jbe 0x15037e2a */
L_15037E18:
    RECOMP_CALL(sub_15036430); /* 0x15037E18: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15037E1D: mov dword ptr [eax], 0x16 */
L_15037E23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037E23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15037EC1; /* 0x15037E25: jmp 0x15037ec1 */
L_15037E2A:
    PUSH32(esp, 2); /* 0x15037E2A: push 2 */
    PUSH32(esp, esi); /* 0x15037E2C: push esi */
    RECOMP_CALL(sub_150487F0); /* 0x15037E2D: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15037E32: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15037E34: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15037E35: pop ecx */
    /* test edi, edi */ /* 0x15037E36: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037E6C; /* 0x15037E38: jne 0x15037e6c */
L_15037E3A:
    RECOMP_CALL(sub_15036430); /* 0x15037E3A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15037E3F: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15037E23; /* 0x15037E45: jmp 0x15037e23 */
L_15037E47:
    esi = MEM32(ebp + 0x10); /* 0x15037E47: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15037E4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037E68; /* 0x15037E4C: jne 0x15037e68 */
L_15037E4E:
    RECOMP_CALL(sub_15036430); /* 0x15037E4E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15037E53: push edi */
    PUSH32(esp, edi); /* 0x15037E54: push edi */
    PUSH32(esp, edi); /* 0x15037E55: push edi */
    PUSH32(esp, edi); /* 0x15037E56: push edi */
    PUSH32(esp, edi); /* 0x15037E57: push edi */
    MEM32(eax) = 0x16u; /* 0x15037E58: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15037E5E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15037E63: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15037E23; /* 0x15037E66: jmp 0x15037e23 */
L_15037E68:
    edi = ebx; /* 0x15037E68: mov edi, ebx */
    goto L_15037E6F; /* 0x15037E6A: jmp 0x15037e6f */
L_15037E6C:
    eax = MEM32(ebp + 0xC); /* 0x15037E6C: mov eax, dword ptr [ebp + 0xc] */
L_15037E6F:
    ecx = ebp + (-0x4); /* 0x15037E6F: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x15037E72: push ecx */
    PUSH32(esp, edi); /* 0x15037E73: push edi */
    PUSH32(esp, esi); /* 0x15037E74: push esi */
    PUSH32(esp, eax); /* 0x15037E75: push eax */
    RECOMP_ICALL(MEM32(0x150C00C8)); /* 0x15037E76: call dword ptr [0x150c00c8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x15037E7C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15037E98; /* 0x15037E7E: jb 0x15037e98 */
L_15037E80:
    /* test ebx, ebx */ /* 0x15037E80: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037E8B; /* 0x15037E82: jne 0x15037e8b */
L_15037E84:
    PUSH32(esp, edi); /* 0x15037E84: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15037E85: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037E8A: pop ecx */
L_15037E8B:
    RECOMP_CALL(sub_15036430); /* 0x15037E8B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15037E90: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_15037E23; /* 0x15037E96: jmp 0x15037e23 */
L_15037E98:
    /* test eax, eax */ /* 0x15037E98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037EB0; /* 0x15037E9A: jne 0x15037eb0 */
L_15037E9C:
    /* test ebx, ebx */ /* 0x15037E9C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15037DF6; /* 0x15037E9E: jne 0x15037df6 */
L_15037EA4:
    PUSH32(esp, edi); /* 0x15037EA4: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15037EA5: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037EAA: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15037DF6; /* 0x15037EAB: jmp 0x15037df6 */
L_15037EB0:
    eax = edi; /* 0x15037EB0: mov eax, edi */
    goto L_15037EC1; /* 0x15037EB2: jmp 0x15037ec1 */
L_15037EB4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15037EB4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037EB7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15037EF0); /* 0x15037EBA: call 0x15037ef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037EBF: pop ecx */
L_15037EC0:
    ecx = POP32_VAL(esp); /* 0x15037EC0: pop ecx */
L_15037EC1:
    edi = POP32_VAL(esp); /* 0x15037EC1: pop edi */
    esi = POP32_VAL(esp); /* 0x15037EC2: pop esi */
    ebx = POP32_VAL(esp); /* 0x15037EC3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037EC4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037EC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037ED0u);

L_15037ED0:
    edi = edi; /* 0x15037ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037ED2: push ebp */
    ebp = esp; /* 0x15037ED3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15037ED5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15037ED8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037EDB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15037DC0); /* 0x15037EDE: call 0x15037dc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15037EE3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15037EE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037EE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037EF0u);

L_15037EF0:
    PUSH32(esp, 0xCu); /* 0x15037EF0: push 0xc */
    PUSH32(esp, 0x150AFBB8u); /* 0x15037EF2: push 0x150afbb8 */
    RECOMP_CALL(sub_1505E988); /* 0x15037EF7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15037EFC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15037EFE: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x15037F01: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x15037F03: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037F08: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15037F09: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15037F0C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037F0F: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15037F12: push esi */
    RECOMP_CALL(sub_15037FB2); /* 0x15037F13: call 0x15037fb2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15037F18: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15037F1B: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15037F1D: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15037F20: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15037F41); /* 0x15037F27: call 0x15037f41 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15037F2C: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15037F2E: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15037F31: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15037F38: pop ecx */
    edi = POP32_VAL(esp); /* 0x15037F39: pop edi */
    esi = POP32_VAL(esp); /* 0x15037F3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x15037F3B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037F3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037F3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037F41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037F41u);

L_15037F41:
    PUSH32(esp, 7); /* 0x15037F41: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x15037F43: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037F48: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037F49: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037F50u);

L_15037F50:
    PUSH32(esp, 0xCu); /* 0x15037F50: push 0xc */
    PUSH32(esp, 0x150AFBD8u); /* 0x15037F52: push 0x150afbd8 */
    RECOMP_CALL(sub_1505E988); /* 0x15037F57: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15037F5C: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 7); /* 0x15037F60: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x15037F62: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037F67: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15037F68: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15037F6C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15037F6F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15037F72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15037FB2); /* 0x15037F75: call 0x15037fb2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15037F7A: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15037F7D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15037F7F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15037F82: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15037FA3); /* 0x15037F89: call 0x15037fa3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15037F8E: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15037F90: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15037F93: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15037F9A: pop ecx */
    edi = POP32_VAL(esp); /* 0x15037F9B: pop edi */
    esi = POP32_VAL(esp); /* 0x15037F9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x15037F9D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15037F9E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037F9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037FA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037FA3u);

L_15037FA3:
    PUSH32(esp, 7); /* 0x15037FA3: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x15037FA5: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037FAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15037FAB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15037FB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15037FB2u);

L_15037FB2:
    edi = edi; /* 0x15037FB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15037FB4: push ebp */
    ebp = esp; /* 0x15037FB5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x21Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x21Cu; /* 0x15037FB7: sub esp, 0x21c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15037FBD: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15037FC2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15037FC4: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15037FC7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15037FC8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15037FCB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15037FCC: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15037FCF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503803F; /* 0x15037FD1: je 0x1503803f */
L_15037FD3:
    PUSH32(esp, edi); /* 0x15037FD3: push edi */
    RECOMP_CALL(sub_15036C83); /* 0x15037FD4: call 0x15036c83 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15037FD9: pop ecx */
    /* test eax, eax */ /* 0x15037FDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038004; /* 0x15037FDC: jne 0x15038004 */
L_15037FDE:
    RECOMP_CALL(sub_150363E0); /* 0x15037FDE: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xFu; /* 0x15037FE3: mov dword ptr [eax], 0xf */
    RECOMP_CALL(sub_15036430); /* 0x15037FE9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x15037FEE: mov dword ptr [eax], 0xd */
L_15037FF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15037FF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15037FF6:
    ecx = MEM32(ebp + (-0x4)); /* 0x15037FF6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15037FF9: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15037FFA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15037FFC: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15037FFD: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038002: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038003: ret  */
L_15038004:
    PUSH32(esp, 0x3Au); /* 0x15038004: push 0x3a */
    eax = edi + 0x40; /* 0x15038006: lea eax, [edi + 0x40] */
    edi = 0x104u; /* 0x15038009: mov edi, 0x104 */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1503800E: mov word ptr [ebp - 0xc], ax */
    eax = POP32_VAL(esp); /* 0x15038012: pop eax */
    PUSH32(esp, 0x2Eu); /* 0x15038013: push 0x2e */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15038015: mov word ptr [ebp - 0xa], ax */
    eax = POP32_VAL(esp); /* 0x15038019: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1503801A: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503801E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15038020: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x21C); /* 0x15038024: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503802A: push eax */
    eax = ebp + (-0x214); /* 0x1503802B: lea eax, [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038031: push eax */
    PUSH32(esp, edi); /* 0x15038032: push edi */
    eax = ebp + (-0xC); /* 0x15038033: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15038036: push eax */
    RECOMP_ICALL(MEM32(0x150C00C8)); /* 0x15038037: call dword ptr [0x150c00c8] */
    RECOMP_FLAGS_IN();
    goto L_15038052; /* 0x1503803D: jmp 0x15038052 */
L_1503803F:
    eax = ebp + (-0x214); /* 0x1503803F: lea eax, [ebp - 0x214] */
    edi = 0x104u; /* 0x15038045: mov edi, 0x104 */
    PUSH32(esp, eax); /* 0x1503804A: push eax */
    PUSH32(esp, edi); /* 0x1503804B: push edi */
    RECOMP_ICALL(MEM32(0x150C01F8)); /* 0x1503804C: call dword ptr [0x150c01f8] */
    RECOMP_FLAGS_IN();
L_15038052:
    /* test eax, eax */ /* 0x15038052: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15037FF4; /* 0x15038054: je 0x15037ff4 */
L_15038056:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15038056: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x15038057: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15037FF4; /* 0x15038059: ja 0x15037ff4 */
L_1503805B:
    edi = MEM32(ebp + 0x10); /* 0x1503805B: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1503805E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150380A5; /* 0x15038060: jne 0x150380a5 */
L_15038062:
    /* cmp eax, edi */ /* 0x15038062: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { edi = eax; } /* 0x15038064: cmovg edi, eax */
    eax = ebp + (-0x218); /* 0x15038067: lea eax, [ebp - 0x218] */
    PUSH32(esp, eax); /* 0x1503806D: push eax */
    PUSH32(esp, 2); /* 0x1503806E: push 2 */
    ecx = POP32_VAL(esp); /* 0x15038070: pop ecx */
    eax = edi; /* 0x15038071: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x15038073: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x15038075: push edx */
    PUSH32(esp, eax); /* 0x15038076: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x15038077: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503807C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503807F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15038095; /* 0x15038081: js 0x15038095 */
L_15038083:
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x15038083: push dword ptr [ebp - 0x218] */
    RECOMP_CALL(sub_15048A30); /* 0x15038089: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503808E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15038090: pop ecx */
    /* test esi, esi */ /* 0x15038091: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150380B9; /* 0x15038093: jne 0x150380b9 */
L_15038095:
    RECOMP_CALL(sub_15036430); /* 0x15038095: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1503809A: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15037FF4; /* 0x150380A0: jmp 0x15037ff4 */
L_150380A5:
    /* cmp eax, edi */ /* 0x150380A5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150380B9; /* 0x150380A7: jle 0x150380b9 */
L_150380A9:
    RECOMP_CALL(sub_15036430); /* 0x150380A9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x150380AE: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_15037FF4; /* 0x150380B4: jmp 0x15037ff4 */
L_150380B9:
    eax = ebp + (-0x214); /* 0x150380B9: lea eax, [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150380BF: push eax */
    PUSH32(esp, edi); /* 0x150380C0: push edi */
    PUSH32(esp, esi); /* 0x150380C1: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x150380C2: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150380C7: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150380CA: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_15037FF6; /* 0x150380CC: jmp 0x15037ff6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150380E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150380E0u);

L_150380E0:
    edi = edi; /* 0x150380E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150380E2: push ebp */
    ebp = esp; /* 0x150380E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150380E5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150380E7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00CC)); /* 0x150380EA: call dword ptr [0x150c00cc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150380F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503810A; /* 0x150380F2: jne 0x1503810a */
L_150380F4:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150380F4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150380FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503810A; /* 0x150380FC: je 0x1503810a */
L_150380FE:
    PUSH32(esp, eax); /* 0x150380FE: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150380FF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038104: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038105: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15038108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038109: ret  */
L_1503810A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503810A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503810C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503810D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038120u);

L_15038120:
    edi = edi; /* 0x15038120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038122: push ebp */
    ebp = esp; /* 0x15038123: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15038125: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00D0)); /* 0x15038128: call dword ptr [0x150c00d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503812E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038148; /* 0x15038130: jne 0x15038148 */
L_15038132:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038132: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038138: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038148; /* 0x1503813A: je 0x15038148 */
L_1503813C:
    PUSH32(esp, eax); /* 0x1503813C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1503813D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038142: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038143: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15038146: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038147: ret  */
L_15038148:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038148: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503814A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503814B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038160u);

    goto L_15038160;
L_15038120:
    edi = edi; /* 0x15038120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038122: push ebp */
    ebp = esp; /* 0x15038123: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15038125: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00D0)); /* 0x15038128: call dword ptr [0x150c00d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503812E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038148; /* 0x15038130: jne 0x15038148 */
L_15038132:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038132: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038138: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038148; /* 0x1503813A: je 0x15038148 */
L_1503813C:
    PUSH32(esp, eax); /* 0x1503813C: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1503813D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038142: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038143: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15038146: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038147: ret  */
L_15038148:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038148: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1503814A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503814B: ret  */
L_15038160:
    edi = edi; /* 0x15038160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038162: push ebp */
    ebp = esp; /* 0x15038163: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15038165: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15038120; /* 0x15038166: jmp 0x15038120 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15038180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038180u);

L_15038180:
    edi = edi; /* 0x15038180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038182: push ebp */
    ebp = esp; /* 0x15038183: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15038185: push ecx */
    PUSH32(esp, ecx); /* 0x15038186: push ecx */
    PUSH32(esp, ebx); /* 0x15038187: push ebx */
    PUSH32(esp, esi); /* 0x15038188: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15038189: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503818C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503818E: push edi */
    ecx = esi + 0x2; /* 0x1503818F: lea ecx, [esi + 2] */
L_15038192:
    SET_LO16(eax, MEM16(esi)); /* 0x15038192: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15038195: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x15038198: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038192; /* 0x1503819B: jne 0x15038192 */
L_1503819D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1503819D: sub esi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1503819F: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    eax = esi + 0x1; /* 0x150381A1: lea eax, [esi + 1] */
    /* cmp eax, 1 */ /* 0x150381A4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150381B1; /* 0x150381A7: jge 0x150381b1 */
L_150381A9:
    PUSH32(esp, 0x6Fu); /* 0x150381A9: push 0x6f */
    ebx = POP32_VAL(esp); /* 0x150381AB: pop ebx */
    goto L_15038284; /* 0x150381AC: jmp 0x15038284 */
L_150381B1:
    eax = eax * 2 + 0x10; /* 0x150381B1: lea eax, [eax*2 + 0x10] */
    PUSH32(esp, eax); /* 0x150381B8: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150381B9: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048F2F); /* 0x150381BC: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150381C1: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x150381C3: pop ecx */
    /* test edi, edi */ /* 0x150381C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150381CD; /* 0x150381C6: jne 0x150381cd */
L_150381C8:
    PUSH32(esp, 8); /* 0x150381C8: push 8 */
    ebx = POP32_VAL(esp); /* 0x150381CA: pop ebx */
    goto L_15038243; /* 0x150381CB: jmp 0x15038243 */
L_150381CD:
    PUSH32(esp, ebx); /* 0x150381CD: push ebx */
    PUSH32(esp, 0x02000000u); /* 0x150381CE: push 0x2000000 */
    PUSH32(esp, 3); /* 0x150381D3: push 3 */
    PUSH32(esp, ebx); /* 0x150381D5: push ebx */
    PUSH32(esp, ebx); /* 0x150381D6: push ebx */
    PUSH32(esp, 0x00010000u); /* 0x150381D7: push 0x10000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150381DC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00D4)); /* 0x150381DF: call dword ptr [0x150c00d4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x150381E5: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150381E8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150381F7; /* 0x150381EB: jne 0x150381f7 */
L_150381ED:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150381ED: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150381F3: mov ebx, eax */
    goto L_15038238; /* 0x150381F5: jmp 0x15038238 */
L_150381F7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150381F7: push dword ptr [ebp + 0xc] */
    eax = esi + esi; /* 0x150381FA: lea eax, [esi + esi] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150381FD: mov byte ptr [edi], bl */
    MEM32(edi + 0x8) = eax; /* 0x150381FF: mov dword ptr [edi + 8], eax */
    eax = esi + 0x1; /* 0x15038202: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x15038205: push eax */
    eax = edi + 0xC; /* 0x15038206: lea eax, [edi + 0xc] */
    MEM32(edi + 0x4) = ebx; /* 0x15038209: mov dword ptr [edi + 4], ebx */
    PUSH32(esp, eax); /* 0x1503820C: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1503820D: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x8)); /* 0x15038212: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038215: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15038218: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1503821B: push edi */
    PUSH32(esp, 3); /* 0x1503821C: push 3 */
    PUSH32(esp, esi); /* 0x1503821E: push esi */
    RECOMP_ICALL(MEM32(0x150C00D8)); /* 0x1503821F: call dword ptr [0x150c00d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038225: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038231; /* 0x15038227: jne 0x15038231 */
L_15038229:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038229: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503822F: mov ebx, eax */
L_15038231:
    PUSH32(esp, esi); /* 0x15038231: push esi */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15038232: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
L_15038238:
    PUSH32(esp, edi); /* 0x15038238: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15038239: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503823E: pop ecx */
    /* test ebx, ebx */ /* 0x1503823F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038290; /* 0x15038241: je 0x15038290 */
L_15038243:
    PUSH32(esp, 0x15003E28u); /* 0x15038243: push 0x15003e28 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15038248: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503824E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038284; /* 0x15038250: je 0x15038284 */
L_15038252:
    PUSH32(esp, 0x15003E44u); /* 0x15038252: push 0x15003e44 */
    PUSH32(esp, eax); /* 0x15038257: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x15038258: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503825E: mov esi, eax */
    /* test esi, esi */ /* 0x15038260: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038280; /* 0x15038262: je 0x15038280 */
L_15038264:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15038264: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x15038267: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15038269: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1503826C: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15038272: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038274: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038290; /* 0x15038276: jne 0x15038290 */
L_15038278:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038278: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503827E: mov ebx, eax */
L_15038280:
    /* test ebx, ebx */ /* 0x15038280: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038290; /* 0x15038282: je 0x15038290 */
L_15038284:
    PUSH32(esp, ebx); /* 0x15038284: push ebx */
    RECOMP_CALL(sub_150363FB); /* 0x15038285: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503828A: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503828B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15038292; /* 0x1503828E: jmp 0x15038292 */
L_15038290:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038290: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15038292:
    edi = POP32_VAL(esp); /* 0x15038292: pop edi */
    esi = POP32_VAL(esp); /* 0x15038293: pop esi */
    ebx = POP32_VAL(esp); /* 0x15038294: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038295: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038296: ret  */
    RECOMP_REGS_OUT();
}

void sub_150382A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150382A0u);

L_150382A0:
    edi = edi; /* 0x150382A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150382A2: push ebp */
    ebp = esp; /* 0x150382A3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150382A5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00DC)); /* 0x150382A8: call dword ptr [0x150c00dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150382AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150382C8; /* 0x150382B0: jne 0x150382c8 */
L_150382B2:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150382B2: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150382B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150382C8; /* 0x150382BA: je 0x150382c8 */
L_150382BC:
    PUSH32(esp, eax); /* 0x150382BC: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150382BD: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150382C2: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150382C3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150382C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150382C7: ret  */
L_150382C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150382C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150382CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150382CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150382D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150382D2u);

L_150382D2:
    edi = edi; /* 0x150382D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150382D4: push ebp */
    ebp = esp; /* 0x150382D5: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x150382D7: mov edx, dword ptr [ebp + 8] */
    ecx = edx; /* 0x150382DA: mov ecx, edx */
    PUSH32(esp, ebx); /* 0x150382DC: push ebx */
    PUSH32(esp, esi); /* 0x150382DD: push esi */
    PUSH32(esp, edi); /* 0x150382DE: push edi */
    esi = ecx + 0x2; /* 0x150382DF: lea esi, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150382E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150382E4:
    SET_LO16(eax, MEM16(ecx)); /* 0x150382E4: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150382E7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x150382EA: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150382E4; /* 0x150382ED: jne 0x150382e4 */
L_150382EF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x150382EF: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150382F1: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 5 */ /* 0x150382F3: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503839F; /* 0x150382F6: jb 0x1503839f */
L_150382FC:
    eax = (uint32_t)MEM16(edx); /* 0x150382FC: movzx eax, word ptr [edx] */
    PUSH32(esp, 0x2Fu); /* 0x150382FF: push 0x2f */
    ebx = POP32_VAL(esp); /* 0x15038301: pop ebx */
    PUSH32(esp, 0x5Cu); /* 0x15038302: push 0x5c */
    edi = POP32_VAL(esp); /* 0x15038304: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15038305: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038313; /* 0x15038308: je 0x15038313 */
L_1503830A:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1503830A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503839F; /* 0x1503830D: jne 0x1503839f */
L_15038313:
    eax = (uint32_t)MEM16(edx + 0x2); /* 0x15038313: movzx eax, word ptr [edx + 2] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15038317: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038321; /* 0x1503831A: je 0x15038321 */
L_1503831C:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1503831C: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503839F; /* 0x1503831F: jne 0x1503839f */
L_15038321:
    eax = (uint32_t)MEM16(edx + 0x4); /* 0x15038321: movzx eax, word ptr [edx + 4] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15038325: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503839F; /* 0x15038328: je 0x1503839f */
L_1503832A:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1503832A: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503839F; /* 0x1503832D: je 0x1503839f */
L_1503832F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 6; /* 0x1503832F: add edx, 6 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edx); /* 0x15038332: movzx eax, word ptr [edx] */
    esi = eax; /* 0x15038335: mov esi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15038337: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503835A; /* 0x1503833A: je 0x1503835a */
L_1503833C:
    ecx = eax; /* 0x1503833C: mov ecx, eax */
L_1503833E:
    /* cmp LO16(ecx), LO16(edi) */ /* 0x1503833E: cmp cx, di */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503835F; /* 0x15038341: je 0x1503835f */
L_15038343:
    esi = (uint32_t)LO16(ecx); /* 0x15038343: movzx esi, cx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x15038346: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503835A; /* 0x15038349: je 0x1503835a */
L_1503834B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1503834B: add edx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edx); /* 0x1503834E: movzx eax, word ptr [edx] */
    ecx = eax; /* 0x15038351: mov ecx, eax */
    esi = eax; /* 0x15038353: mov esi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15038355: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503833E; /* 0x15038358: jne 0x1503833e */
L_1503835A:
    /* test LO16(esi), LO16(esi) */ /* 0x1503835A: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503839F; /* 0x1503835D: je 0x1503839f */
L_1503835F:
    ecx = edx + 0x2; /* 0x1503835F: lea ecx, [edx + 2] */
    eax = (uint32_t)MEM16(ecx); /* 0x15038362: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x15038365: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15038367: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503839F; /* 0x1503836A: je 0x1503839f */
L_1503836C:
    /* cmp LO16(edx), LO16(edi) */ /* 0x1503836C: cmp dx, di */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038392; /* 0x1503836F: je 0x15038392 */
L_15038371:
    esi = (uint32_t)LO16(edx); /* 0x15038371: movzx esi, dx */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x15038374: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038388; /* 0x15038377: je 0x15038388 */
L_15038379:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15038379: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx); /* 0x1503837C: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x1503837F: mov edx, eax */
    esi = eax; /* 0x15038381: mov esi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15038383: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503836C; /* 0x15038386: jne 0x1503836c */
L_15038388:
    /* test LO16(esi), LO16(esi) */ /* 0x15038388: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038392; /* 0x1503838B: jne 0x15038392 */
L_1503838D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503838D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503838F: inc eax */
    _flag_k = FK_INC;
    goto L_150383A1; /* 0x15038390: jmp 0x150383a1 */
L_15038392:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038392: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15038394: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x2), LO16(edx) */ /* 0x15038396: cmp word ptr [ecx + 2], dx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503839A: sete al */
    goto L_150383A1; /* 0x1503839D: jmp 0x150383a1 */
L_1503839F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503839F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150383A1:
    edi = POP32_VAL(esp); /* 0x150383A1: pop edi */
    esi = POP32_VAL(esp); /* 0x150383A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x150383A3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x150383A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150383A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150383AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150383ACu);

L_150383AC:
    edi = edi; /* 0x150383AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150383AE: push ebp */
    ebp = esp; /* 0x150383AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150383B1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150383B4: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150383B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150383BB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150383BE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150383C1: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150383C2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150383C4: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), 0 */ /* 0x150383C5: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150383C8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150383C9: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150383DD; /* 0x150383CC: jne 0x150383dd */
L_150383CE:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x150383CE: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150383DD; /* 0x150383D2: jne 0x150383dd */
L_150383D4:
    eax = MEM32(ebp + 0xC); /* 0x150383D4: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x150383D7: mov eax, dword ptr [eax] */
L_150383D9:
    MEM32(edi) = eax; /* 0x150383D9: mov dword ptr [edi], eax */
    goto L_1503842A; /* 0x150383DB: jmp 0x1503842a */
L_150383DD:
    ecx = ebp + (-0x1C); /* 0x150383DD: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x150383E0: push ecx */
    PUSH32(esp, eax); /* 0x150383E1: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x150383E2: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150383E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038428; /* 0x150383EA: je 0x15038428 */
L_150383EC:
    eax = ebp + (-0x14); /* 0x150383EC: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x150383EF: push eax */
    eax = ebp + (-0x1C); /* 0x150383F0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150383F3: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150383F4: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150383FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038428; /* 0x150383FC: je 0x15038428 */
L_150383FE:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x150383FE: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038402: push -1 */
    PUSH32(esp, eax); /* 0x15038404: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15038405: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x15038409: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x1503840A: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503840E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x1503840F: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x15038413: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x15038414: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x15038418: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x15038419: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1503841D: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503841E: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038423: add esp, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_150383D9; /* 0x15038426: jmp 0x150383d9 */
L_15038428:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15038428: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503842A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503842A: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x1503842D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x1503842F: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15038430: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15038432: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15038433: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038438: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038439: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038440u);

L_15038440:
    edi = edi; /* 0x15038440: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038442: push ebp */
    ebp = esp; /* 0x15038443: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x15038445: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15038448: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503844D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503844F: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x74)) = MEM32(ebp + (-0x74)) & 0; /* 0x15038452: and dword ptr [ebp - 0x74], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038456: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15038459: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1503845A: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1503845D: push esi */
    esi = MEM32(0x150BDB14); /* 0x1503845E: mov esi, dword ptr [0x150bdb14] */
    PUSH32(esp, edi); /* 0x15038464: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15038465: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x70)) = edi; /* 0x15038468: mov dword ptr [ebp - 0x70], edi */
    /* cmp esi, eax */ /* 0x1503846B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150385B0; /* 0x1503846D: je 0x150385b0 */
L_15038473:
    /* test esi, esi */ /* 0x15038473: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150384B6; /* 0x15038475: jne 0x150384b6 */
L_15038477:
    PUSH32(esp, 0x15003E50u); /* 0x15038477: push 0x15003e50 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x1503847C: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038482: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038495; /* 0x15038484: jne 0x15038495 */
L_15038486:
    PUSH32(esp, 0x15003E28u); /* 0x15038486: push 0x15003e28 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x1503848B: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038491: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150384A3; /* 0x15038493: je 0x150384a3 */
L_15038495:
    PUSH32(esp, 0x15003E70u); /* 0x15038495: push 0x15003e70 */
    PUSH32(esp, eax); /* 0x1503849A: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x1503849B: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150384A1: mov esi, eax */
L_150384A3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150384A3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x150384A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = esi; } /* 0x150384A8: cmovne eax, esi */
    MEM32(0x150BDB14) = eax; /* 0x150384AB: mov dword ptr [0x150bdb14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385B0; /* 0x150384B0: je 0x150385b0 */
L_150384B6:
    PUSH32(esp, 0x68u); /* 0x150384B6: push 0x68 */
    eax = ebp + (-0x6C); /* 0x150384B8: lea eax, [ebp - 0x6c] */
    ecx = esi; /* 0x150384BB: mov ecx, esi */
    PUSH32(esp, eax); /* 0x150384BD: push eax */
    PUSH32(esp, 3); /* 0x150384BE: push 3 */
    PUSH32(esp, edi); /* 0x150384C0: push edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150384C1: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x150384C7: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150384C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385B0; /* 0x150384CB: je 0x150385b0 */
L_150384D1:
    /* cmp MEM32(ebp + (-0x28)), 7 */ /* 0x150384D1: cmp dword ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150384E7; /* 0x150384D5: je 0x150384e7 */
L_150384D7:
    /* cmp MEM32(ebp + (-0x28)), 8 */ /* 0x150384D7: cmp dword ptr [ebp - 0x28], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150384E7; /* 0x150384DB: je 0x150384e7 */
L_150384DD:
    /* cmp MEM32(ebp + (-0x28)), 0x24u */ /* 0x150384DD: cmp dword ptr [ebp - 0x28], 0x24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150385B0; /* 0x150384E1: jne 0x150385b0 */
L_150384E7:
    PUSH32(esp, 9); /* 0x150384E7: push 9 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150384E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x150384EB: mov edi, ebx */
    ecx = POP32_VAL(esp); /* 0x150384ED: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x150384EE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x70)); /* 0x150384F0: mov edi, dword ptr [ebp - 0x70] */
    ecx = (uint32_t)MEM16(edi); /* 0x150384F3: movzx ecx, word ptr [edi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x150384F6: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385B0; /* 0x150384F9: je 0x150385b0 */
L_150384FF:
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x150384FF: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503850F; /* 0x15038504: je 0x1503850f */
L_15038506:
    RECOMP_CALL(sub_15036820); /* 0x15038506: call 0x15036820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1503850B: mov esi, eax */
    goto L_15038528; /* 0x1503850D: jmp 0x15038528 */
L_1503850F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503850F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x4), LO16(eax) */ /* 0x15038511: cmp word ptr [edi + 4], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150385B2; /* 0x15038515: je 0x150385b2 */
L_1503851B:
    PUSH32(esp, ecx); /* 0x1503851B: push ecx */
    RECOMP_CALL(sub_15032E60); /* 0x1503851C: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x15038521: movzx esi, ax */
    ecx = POP32_VAL(esp); /* 0x15038524: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x60u; /* 0x15038525: sub esi, 0x60 */
    _flag_k = FK_CMP;
L_15038528:
    eax = ebx + 0x1C; /* 0x15038528: lea eax, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x1503852B: push eax */
    eax = ebp + (-0x74); /* 0x1503852C: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1503852F: push eax */
    eax = ebp + (-0x54); /* 0x15038530: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x15038533: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x15038534: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038539: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503853C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385A7; /* 0x1503853E: je 0x150385a7 */
L_15038540:
    eax = ebx + 0x18; /* 0x15038540: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x15038543: push eax */
    eax = ebx + 0x1C; /* 0x15038544: lea eax, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x15038547: push eax */
    eax = ebp + (-0x5C); /* 0x15038548: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1503854B: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x1503854C: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038551: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15038554: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385A7; /* 0x15038556: je 0x150385a7 */
L_15038558:
    eax = ebx + 0x20; /* 0x15038558: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x1503855B: push eax */
    eax = ebx + 0x1C; /* 0x1503855C: lea eax, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x1503855F: push eax */
    eax = ebp + (-0x64); /* 0x15038560: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x15038563: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x15038564: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038569: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503856C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150385A7; /* 0x1503856E: je 0x150385a7 */
L_15038570:
    eax = esi + (-0x1); /* 0x15038570: lea eax, [esi - 1] */
    PUSH32(esp, edi); /* 0x15038573: push edi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x15038574: push dword ptr [ebp - 0x34] */
    MEM32(ebx) = eax; /* 0x15038577: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x10) = eax; /* 0x15038579: mov dword ptr [ebx + 0x10], eax */
    RECOMP_CALL(sub_150385C7); /* 0x1503857C: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038581: pop ecx */
    MEM16(ebx + 0x6) = (uint16_t)(LO16(eax)); /* 0x15038582: mov word ptr [ebx + 6], ax */
    eax = MEM32(ebp + (-0x2C)); /* 0x15038586: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, 0xFFFFu */ /* 0x15038589: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1503858E: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x1503858F: movzx ecx, ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038592: push -1 */
    eax = POP32_VAL(esp); /* 0x15038594: pop eax */
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x15038595: cmova ecx, eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x15038598: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebx + 0x14) = eax; /* 0x1503859B: mov dword ptr [ebx + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503859E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150385A0: mov word ptr [ebx + 8], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150385A4: inc eax */
    _flag_k = FK_INC;
    goto L_150385B2; /* 0x150385A5: jmp 0x150385b2 */
L_150385A7:
    PUSH32(esp, 9); /* 0x150385A7: push 9 */
    ecx = POP32_VAL(esp); /* 0x150385A9: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150385AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x150385AC: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x150385AE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_150385B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150385B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150385B2:
    ecx = MEM32(ebp + (-0x4)); /* 0x150385B2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150385B5: pop edi */
    esi = POP32_VAL(esp); /* 0x150385B6: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150385B7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150385B9: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150385BA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150385BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150385C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150385C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150385C7u);

L_150385C7:
    edi = edi; /* 0x150385C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150385C9: push ebp */
    ebp = esp; /* 0x150385CA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150385CC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150385CF: push esi */
    PUSH32(esp, edi); /* 0x150385D0: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150385D1: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x150385D4: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = edi + 0x4; /* 0x150385D9: lea ecx, [edi + 4] */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = edi; } /* 0x150385DC: cmovne ecx, edi */
    edx = (uint32_t)MEM16(ecx); /* 0x150385DF: movzx edx, word ptr [ecx] */
    /* cmp edx, 0x5Cu */ /* 0x150385E2: cmp edx, 0x5c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150385EC; /* 0x150385E5: je 0x150385ec */
L_150385E7:
    /* cmp edx, 0x2Fu */ /* 0x150385E7: cmp edx, 0x2f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150385F3; /* 0x150385EA: jne 0x150385f3 */
L_150385EC:
    /* cmp MEM16(ecx + 0x2), 0 */ /* 0x150385EC: cmp word ptr [ecx + 2], 0 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038601; /* 0x150385F1: je 0x15038601 */
L_150385F3:
    /* test LO8(eax), 0x10u */ /* 0x150385F3: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038601; /* 0x150385F5: jne 0x15038601 */
L_150385F7:
    ecx = 0x8100u; /* 0x150385F7: mov ecx, 0x8100 */
    /* test LO16(edx), LO16(edx) */ /* 0x150385FC: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038606; /* 0x150385FF: jne 0x15038606 */
L_15038601:
    ecx = 0x4140u; /* 0x15038601: mov ecx, 0x4140 */
L_15038606:
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x15038606: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x15038606: shl eax, 7 */
    eax = ~eax; /* 0x15038609: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x1503860B: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x15038610: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x15038612: push 0x2e */
    PUSH32(esp, edi); /* 0x15038614: push edi */
    esi = (uint32_t)LO16(eax); /* 0x15038615: movzx esi, ax */
    RECOMP_CALL(sub_1508F7B0); /* 0x15038618: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503861D: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1503861F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038620: pop ecx */
    /* test edi, edi */ /* 0x15038621: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503866C; /* 0x15038623: je 0x1503866c */
L_15038625:
    PUSH32(esp, 0x15003E8Cu); /* 0x15038625: push 0x15003e8c */
    PUSH32(esp, edi); /* 0x1503862A: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x1503862B: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038630: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038631: pop ecx */
    /* test eax, eax */ /* 0x15038632: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038669; /* 0x15038634: je 0x15038669 */
L_15038636:
    PUSH32(esp, 0x15003E98u); /* 0x15038636: push 0x15003e98 */
    PUSH32(esp, edi); /* 0x1503863B: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x1503863C: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038641: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038642: pop ecx */
    /* test eax, eax */ /* 0x15038643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038669; /* 0x15038645: je 0x15038669 */
L_15038647:
    PUSH32(esp, 0x15003EA4u); /* 0x15038647: push 0x15003ea4 */
    PUSH32(esp, edi); /* 0x1503864C: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x1503864D: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038652: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038653: pop ecx */
    /* test eax, eax */ /* 0x15038654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038669; /* 0x15038656: je 0x15038669 */
L_15038658:
    PUSH32(esp, 0x15003EB0u); /* 0x15038658: push 0x15003eb0 */
    PUSH32(esp, edi); /* 0x1503865D: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x1503865E: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038663: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038664: pop ecx */
    /* test eax, eax */ /* 0x15038665: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503866C; /* 0x15038667: jne 0x1503866c */
L_15038669:
    _flag_a = (uint32_t)((esi | 0x40u)); _flag_b = (uint32_t)((esi | 0x40u));
    esi = esi | 0x40u; /* 0x15038669: or esi, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503866C:
    eax = esi; /* 0x1503866C: mov eax, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1503866E: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1503866E: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    eax = eax & 0x38u; /* 0x15038671: and eax, 0x38 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x15038674: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15038676: mov eax, esi */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x15038678: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x15038678: shr eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1503867B: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1503867E: pop edi */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1503867F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15038681: pop esi */
    ebp = POP32_VAL(esp); /* 0x15038682: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038683: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503868A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503868Au);

L_1503868A:
    edi = edi; /* 0x1503868A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503868C: push ebp */
    ebp = esp; /* 0x1503868D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1503868F: push esi */
    PUSH32(esp, edi); /* 0x15038690: push edi */
    RECOMP_CALL(sub_15036430); /* 0x15038691: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x15038696: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15036430); /* 0x15038698: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1503869D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150386A0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x150386A3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150386A6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15037DC0); /* 0x150386A9: call 0x15037dc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150386AE: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150386B1: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x150386B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x150386B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150386C2; /* 0x150386BA: je 0x150386c2 */
L_150386BC:
    MEM32(eax) = edi; /* 0x150386BC: mov dword ptr [eax], edi */
    eax = esi; /* 0x150386BE: mov eax, esi */
    goto L_150386E6; /* 0x150386C0: jmp 0x150386e6 */
L_150386C2:
    /* cmp MEM32(eax), 0x22u */ /* 0x150386C2: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150386CB; /* 0x150386C5: je 0x150386cb */
L_150386C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150386C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150386E6; /* 0x150386C9: jmp 0x150386e6 */
L_150386CB:
    RECOMP_CALL(sub_15036430); /* 0x150386CB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x150386D0: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150386D2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x150386D5: push 0 */
    MEM32(eax) = edi; /* 0x150386D7: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15037DC0); /* 0x150386D9: call 0x15037dc0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x150386DE: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150386E1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x150386E4: mov dword ptr [ecx], eax */
L_150386E6:
    edi = POP32_VAL(esp); /* 0x150386E6: pop edi */
    esi = POP32_VAL(esp); /* 0x150386E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x150386E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150386E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150386F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150386F0u);

L_150386F0:
    edi = edi; /* 0x150386F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150386F2: push ebp */
    ebp = esp; /* 0x150386F3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150386F5: pop ebp */
    goto L_15038701; /* 0x150386F6: jmp 0x15038701 */
L_15038701:
    edi = edi; /* 0x15038701: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038703: push ebp */
    ebp = esp; /* 0x15038704: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x15038706: sub esp, 0x484 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503870C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15038711: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15038713: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15038716: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15038717: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x47C)) = ebx; /* 0x1503871A: mov dword ptr [ebp - 0x47c], ebx */
    PUSH32(esp, esi); /* 0x15038720: push esi */
    PUSH32(esp, edi); /* 0x15038721: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15038722: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15038725: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503874F; /* 0x15038727: jne 0x1503874f */
L_15038729:
    RECOMP_CALL(sub_150363E0); /* 0x15038729: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503872E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15038730: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15038732: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15038737: push esi */
    PUSH32(esp, esi); /* 0x15038738: push esi */
    PUSH32(esp, esi); /* 0x15038739: push esi */
    PUSH32(esp, esi); /* 0x1503873A: push esi */
    PUSH32(esp, esi); /* 0x1503873B: push esi */
    MEM32(eax) = 0x16u; /* 0x1503873C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15038742: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15038747: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15038AE3; /* 0x1503874A: jmp 0x15038ae3 */
L_1503874F:
    /* test edi, edi */ /* 0x1503874F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038729; /* 0x15038751: je 0x15038729 */
L_15038753:
    PUSH32(esp, 0x15003EBCu); /* 0x15038753: push 0x15003ebc */
    PUSH32(esp, ebx); /* 0x15038758: push ebx */
    RECOMP_CALL(sub_1508F770); /* 0x15038759: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503875E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503875F: pop ecx */
    /* test eax, eax */ /* 0x15038760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503877A; /* 0x15038762: je 0x1503877a */
L_15038764:
    RECOMP_CALL(sub_15036430); /* 0x15038764: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15038769: push 2 */
    ebx = POP32_VAL(esp); /* 0x1503876B: pop ebx */
L_1503876C:
    MEM32(eax) = ebx; /* 0x1503876C: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_150363E0); /* 0x1503876E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15038773: mov dword ptr [eax], ebx */
    goto L_15038AE3; /* 0x15038775: jmp 0x15038ae3 */
L_1503877A:
    PUSH32(esp, edi); /* 0x1503877A: push edi */
    PUSH32(esp, ebx); /* 0x1503877B: push ebx */
    RECOMP_CALL(sub_15038440); /* 0x1503877C: call 0x15038440 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038781: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038782: pop ecx */
    /* test eax, eax */ /* 0x15038783: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503878E; /* 0x15038785: je 0x1503878e */
L_15038787:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038787: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15038AE6; /* 0x15038789: jmp 0x15038ae6 */
L_1503878E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503878E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x15038790: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150387B4; /* 0x15038795: jne 0x150387b4 */
L_15038797:
    eax = (uint32_t)MEM16(ebx); /* 0x15038797: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1503879A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150387A5; /* 0x1503879D: je 0x150387a5 */
L_1503879F:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x1503879F: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038764; /* 0x150387A3: je 0x15038764 */
L_150387A5:
    PUSH32(esp, eax); /* 0x150387A5: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x150387A6: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x150387AB: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x150387AE: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x150387AF: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_150387B9; /* 0x150387B2: jmp 0x150387b9 */
L_150387B4:
    RECOMP_CALL(sub_15036820); /* 0x150387B4: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_150387B9:
    MEM32(ebp + (-0x480)) = eax; /* 0x150387B9: mov dword ptr [ebp - 0x480], eax */
    eax = ebp + (-0x46C); /* 0x150387BF: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x150387C5: push eax */
    PUSH32(esp, ebx); /* 0x150387C6: push ebx */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x150387C7: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x470)) = eax; /* 0x150387CD: mov dword ptr [ebp - 0x470], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150387D3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150388E6; /* 0x150387D6: jne 0x150388e6 */
L_150387DC:
    PUSH32(esp, 0x15003EC4u); /* 0x150387DC: push 0x15003ec4 */
    PUSH32(esp, ebx); /* 0x150387E1: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x150387E2: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_1508F770); /* 0x150387E8: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150387ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150387EE: pop ecx */
    PUSH32(esp, 2); /* 0x150387EF: push 2 */
    ebx = POP32_VAL(esp); /* 0x150387F1: pop ebx */
    /* test eax, eax */ /* 0x150387F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388DC; /* 0x150387F4: je 0x150388dc */
L_150387FA:
    eax = ebp + (-0x470); /* 0x150387FA: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x15038800: push eax */
    PUSH32(esp, 0x104u); /* 0x15038801: push 0x104 */
    PUSH32(esp, MEM32(ebp + (-0x47C))); /* 0x15038806: push dword ptr [ebp - 0x47c] */
    eax = ebp + (-0x20C); /* 0x1503880C: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x15038812: push eax */
    RECOMP_CALL(sub_1503868A); /* 0x15038813: call 0x1503868a */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15038818: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503881A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = edx; /* 0x1503881D: mov dword ptr [ebp - 0x474], edx */
    /* test edx, edx */ /* 0x15038823: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388C8; /* 0x15038825: je 0x150388c8 */
L_1503882B:
    ecx = edx; /* 0x1503882B: mov ecx, edx */
    eax = ecx + 0x2; /* 0x1503882D: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x484)) = eax; /* 0x15038830: mov dword ptr [ebp - 0x484], eax */
L_15038836:
    SET_LO16(eax, MEM16(ecx)); /* 0x15038836: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15038839: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1503883B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038836; /* 0x1503883E: jne 0x15038836 */
L_15038840:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x484)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x484)); /* 0x15038840: sub ecx, dword ptr [ebp - 0x484] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15038846: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 3 */ /* 0x15038848: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503885E; /* 0x1503884B: je 0x1503885e */
L_1503884D:
    PUSH32(esp, edx); /* 0x1503884D: push edx */
    RECOMP_CALL(sub_150382D2); /* 0x1503884E: call 0x150382d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038853: pop ecx */
    /* test eax, eax */ /* 0x15038854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388C8; /* 0x15038856: je 0x150388c8 */
L_15038858:
    edx = MEM32(ebp + (-0x474)); /* 0x15038858: mov edx, dword ptr [ebp - 0x474] */
L_1503885E:
    PUSH32(esp, edx); /* 0x1503885E: push edx */
    RECOMP_ICALL(MEM32(0x150C00E0)); /* 0x1503885F: call dword ptr [0x150c00e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038865: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15038867: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15038868: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150388C8; /* 0x1503886A: jbe 0x150388c8 */
L_1503886C:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x1503886C: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038880; /* 0x15038872: je 0x15038880 */
L_15038874:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038874: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x1503887A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503887F: pop ecx */
L_15038880:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038880: push -1 */
    PUSH32(esp, esi); /* 0x15038882: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038883: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x15038885: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x1503888F: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x15038890: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15038897: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15038898: push esi */
    PUSH32(esp, eax); /* 0x15038899: push eax */
    PUSH32(esp, eax); /* 0x1503889A: push eax */
    PUSH32(esp, 0x7BCu); /* 0x1503889B: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x150388A0: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x150388A6: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_1509577E); /* 0x150388AC: call 0x1509577e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x47C)); /* 0x150388B1: mov ebx, dword ptr [ebp - 0x47c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150388B7: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x150388BA: mov dword ptr [edi + 0x1c], eax */
    MEM32(edi + 0x18) = eax; /* 0x150388BD: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x20) = eax; /* 0x150388C0: mov dword ptr [edi + 0x20], eax */
    goto L_15038A8E; /* 0x150388C3: jmp 0x15038a8e */
L_150388C8:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x150388C8: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150388DC; /* 0x150388CE: je 0x150388dc */
L_150388D0:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150388D0: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x150388D6: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150388DB: pop ecx */
L_150388DC:
    RECOMP_CALL(sub_15036430); /* 0x150388DC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503876C; /* 0x150388E1: jmp 0x1503876c */
L_150388E6:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x150388E6: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150388F6; /* 0x150388EC: jne 0x150388f6 */
L_150388EE:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x150388EE: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503896A; /* 0x150388F4: je 0x1503896a */
L_150388F6:
    eax = ebp + (-0x478); /* 0x150388F6: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150388FC: push eax */
    eax = ebp + (-0x458); /* 0x150388FD: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x15038903: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038904: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503890A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x1503890C: je 0x15038aca */
L_15038912:
    eax = ebp + (-0x21C); /* 0x15038912: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038918: push eax */
    eax = ebp + (-0x478); /* 0x15038919: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503891F: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038920: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038926: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038928: je 0x15038aca */
L_1503892E:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1503892E: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038935: push -1 */
    PUSH32(esp, eax); /* 0x15038937: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15038938: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503893F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15038940: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038947: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15038948: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503894F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15038950: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15038957: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15038958: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503895F: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15038960: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038965: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15038968: mov esi, eax */
L_1503896A:
    MEM32(edi + 0x1C) = esi; /* 0x1503896A: mov dword ptr [edi + 0x1c], esi */
    /* cmp MEM32(ebp + (-0x460)), 0 */ /* 0x1503896D: cmp dword ptr [ebp - 0x460], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503897F; /* 0x15038974: jne 0x1503897f */
L_15038976:
    /* cmp MEM32(ebp + (-0x45C)), 0 */ /* 0x15038976: cmp dword ptr [ebp - 0x45c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150389F3; /* 0x1503897D: je 0x150389f3 */
L_1503897F:
    eax = ebp + (-0x478); /* 0x1503897F: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038985: push eax */
    eax = ebp + (-0x460); /* 0x15038986: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x1503898C: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503898D: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038995: je 0x15038aca */
L_1503899B:
    eax = ebp + (-0x21C); /* 0x1503899B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150389A1: push eax */
    eax = ebp + (-0x478); /* 0x150389A2: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150389A8: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150389A9: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150389AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x150389B1: je 0x15038aca */
L_150389B7:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x150389B7: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150389BE: push -1 */
    PUSH32(esp, eax); /* 0x150389C0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x150389C1: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x150389C8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x150389C9: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150389D0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x150389D1: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x150389D8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x150389D9: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x150389E0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x150389E1: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150389E8: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150389E9: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150389EE: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150389F1: mov esi, eax */
L_150389F3:
    MEM32(edi + 0x18) = esi; /* 0x150389F3: mov dword ptr [edi + 0x18], esi */
    /* cmp MEM32(ebp + (-0x468)), 0 */ /* 0x150389F6: cmp dword ptr [ebp - 0x468], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038A0D; /* 0x150389FD: jne 0x15038a0d */
L_150389FF:
    /* cmp MEM32(ebp + (-0x464)), 0 */ /* 0x150389FF: cmp dword ptr [ebp - 0x464], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038A0D; /* 0x15038A06: jne 0x15038a0d */
L_15038A08:
    eax = MEM32(edi + 0x1C); /* 0x15038A08: mov eax, dword ptr [edi + 0x1c] */
    goto L_15038A7F; /* 0x15038A0B: jmp 0x15038a7f */
L_15038A0D:
    eax = ebp + (-0x478); /* 0x15038A0D: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038A13: push eax */
    eax = ebp + (-0x468); /* 0x15038A14: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x15038A1A: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038A1B: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038A21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038A23: je 0x15038aca */
L_15038A29:
    eax = ebp + (-0x21C); /* 0x15038A29: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038A2F: push eax */
    eax = ebp + (-0x478); /* 0x15038A30: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038A36: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038A37: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038A3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038A3F: je 0x15038aca */
L_15038A45:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15038A45: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038A4C: push -1 */
    PUSH32(esp, eax); /* 0x15038A4E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15038A4F: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x15038A56: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15038A57: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038A5E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15038A5F: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x15038A66: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15038A67: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15038A6E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15038A6F: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038A76: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15038A77: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038A7C: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15038A7F:
    MEM32(edi + 0x20) = eax; /* 0x15038A7F: mov dword ptr [edi + 0x20], eax */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038A82: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15038A88: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15038A8E:
    PUSH32(esp, ebx); /* 0x15038A8E: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x15038A8F: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_150385C7); /* 0x15038A95: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15038A9A: mov word ptr [edi + 6], ax */
    eax = MEM32(ebp + (-0x44C)); /* 0x15038A9E: mov eax, dword ptr [ebp - 0x44c] */
    MEM32(edi + 0x14) = eax; /* 0x15038AA4: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15038AA9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038AAA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038AAB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15038AAD: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x15038AB1: mov dword ptr [edi + 0xa], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15038AB4: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x480)); /* 0x15038AB5: mov eax, dword ptr [ebp - 0x480] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15038ABB: dec eax */
    _flag_k = FK_DEC;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15038ABC: mov word ptr [edi + 8], cx */
    MEM32(edi) = eax; /* 0x15038AC0: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x15038AC2: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_15038787; /* 0x15038AC5: jmp 0x15038787 */
L_15038ACA:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038ACA: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15038AD0: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15038AD1: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038AD6: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038AD7: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15038ADD: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15038AE3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038AE3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15038AE6:
    ecx = MEM32(ebp + (-0x4)); /* 0x15038AE6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15038AE9: pop edi */
    esi = POP32_VAL(esp); /* 0x15038AEA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15038AEB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15038AED: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15038AEE: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038AF3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038701(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038701u);

L_15038701:
    edi = edi; /* 0x15038701: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038703: push ebp */
    ebp = esp; /* 0x15038704: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x15038706: sub esp, 0x484 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503870C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15038711: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15038713: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15038716: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15038717: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x47C)) = ebx; /* 0x1503871A: mov dword ptr [ebp - 0x47c], ebx */
    PUSH32(esp, esi); /* 0x15038720: push esi */
    PUSH32(esp, edi); /* 0x15038721: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15038722: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15038725: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503874F; /* 0x15038727: jne 0x1503874f */
L_15038729:
    RECOMP_CALL(sub_150363E0); /* 0x15038729: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503872E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15038730: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15038732: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15038737: push esi */
    PUSH32(esp, esi); /* 0x15038738: push esi */
    PUSH32(esp, esi); /* 0x15038739: push esi */
    PUSH32(esp, esi); /* 0x1503873A: push esi */
    PUSH32(esp, esi); /* 0x1503873B: push esi */
    MEM32(eax) = 0x16u; /* 0x1503873C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15038742: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15038747: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15038AE3; /* 0x1503874A: jmp 0x15038ae3 */
L_1503874F:
    /* test edi, edi */ /* 0x1503874F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038729; /* 0x15038751: je 0x15038729 */
L_15038753:
    PUSH32(esp, 0x15003EBCu); /* 0x15038753: push 0x15003ebc */
    PUSH32(esp, ebx); /* 0x15038758: push ebx */
    RECOMP_CALL(sub_1508F770); /* 0x15038759: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503875E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503875F: pop ecx */
    /* test eax, eax */ /* 0x15038760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503877A; /* 0x15038762: je 0x1503877a */
L_15038764:
    RECOMP_CALL(sub_15036430); /* 0x15038764: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15038769: push 2 */
    ebx = POP32_VAL(esp); /* 0x1503876B: pop ebx */
L_1503876C:
    MEM32(eax) = ebx; /* 0x1503876C: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_150363E0); /* 0x1503876E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15038773: mov dword ptr [eax], ebx */
    goto L_15038AE3; /* 0x15038775: jmp 0x15038ae3 */
L_1503877A:
    PUSH32(esp, edi); /* 0x1503877A: push edi */
    PUSH32(esp, ebx); /* 0x1503877B: push ebx */
    RECOMP_CALL(sub_15038440); /* 0x1503877C: call 0x15038440 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038781: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038782: pop ecx */
    /* test eax, eax */ /* 0x15038783: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503878E; /* 0x15038785: je 0x1503878e */
L_15038787:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038787: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15038AE6; /* 0x15038789: jmp 0x15038ae6 */
L_1503878E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503878E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x15038790: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150387B4; /* 0x15038795: jne 0x150387b4 */
L_15038797:
    eax = (uint32_t)MEM16(ebx); /* 0x15038797: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1503879A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150387A5; /* 0x1503879D: je 0x150387a5 */
L_1503879F:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x1503879F: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038764; /* 0x150387A3: je 0x15038764 */
L_150387A5:
    PUSH32(esp, eax); /* 0x150387A5: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x150387A6: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x150387AB: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x150387AE: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x150387AF: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_150387B9; /* 0x150387B2: jmp 0x150387b9 */
L_150387B4:
    RECOMP_CALL(sub_15036820); /* 0x150387B4: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_150387B9:
    MEM32(ebp + (-0x480)) = eax; /* 0x150387B9: mov dword ptr [ebp - 0x480], eax */
    eax = ebp + (-0x46C); /* 0x150387BF: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x150387C5: push eax */
    PUSH32(esp, ebx); /* 0x150387C6: push ebx */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x150387C7: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x470)) = eax; /* 0x150387CD: mov dword ptr [ebp - 0x470], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150387D3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150388E6; /* 0x150387D6: jne 0x150388e6 */
L_150387DC:
    PUSH32(esp, 0x15003EC4u); /* 0x150387DC: push 0x15003ec4 */
    PUSH32(esp, ebx); /* 0x150387E1: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x150387E2: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_1508F770); /* 0x150387E8: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150387ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150387EE: pop ecx */
    PUSH32(esp, 2); /* 0x150387EF: push 2 */
    ebx = POP32_VAL(esp); /* 0x150387F1: pop ebx */
    /* test eax, eax */ /* 0x150387F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388DC; /* 0x150387F4: je 0x150388dc */
L_150387FA:
    eax = ebp + (-0x470); /* 0x150387FA: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x15038800: push eax */
    PUSH32(esp, 0x104u); /* 0x15038801: push 0x104 */
    PUSH32(esp, MEM32(ebp + (-0x47C))); /* 0x15038806: push dword ptr [ebp - 0x47c] */
    eax = ebp + (-0x20C); /* 0x1503880C: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x15038812: push eax */
    RECOMP_CALL(sub_1503868A); /* 0x15038813: call 0x1503868a */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15038818: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503881A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = edx; /* 0x1503881D: mov dword ptr [ebp - 0x474], edx */
    /* test edx, edx */ /* 0x15038823: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388C8; /* 0x15038825: je 0x150388c8 */
L_1503882B:
    ecx = edx; /* 0x1503882B: mov ecx, edx */
    eax = ecx + 0x2; /* 0x1503882D: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x484)) = eax; /* 0x15038830: mov dword ptr [ebp - 0x484], eax */
L_15038836:
    SET_LO16(eax, MEM16(ecx)); /* 0x15038836: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15038839: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1503883B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038836; /* 0x1503883E: jne 0x15038836 */
L_15038840:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x484)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x484)); /* 0x15038840: sub ecx, dword ptr [ebp - 0x484] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15038846: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 3 */ /* 0x15038848: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503885E; /* 0x1503884B: je 0x1503885e */
L_1503884D:
    PUSH32(esp, edx); /* 0x1503884D: push edx */
    RECOMP_CALL(sub_150382D2); /* 0x1503884E: call 0x150382d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038853: pop ecx */
    /* test eax, eax */ /* 0x15038854: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150388C8; /* 0x15038856: je 0x150388c8 */
L_15038858:
    edx = MEM32(ebp + (-0x474)); /* 0x15038858: mov edx, dword ptr [ebp - 0x474] */
L_1503885E:
    PUSH32(esp, edx); /* 0x1503885E: push edx */
    RECOMP_ICALL(MEM32(0x150C00E0)); /* 0x1503885F: call dword ptr [0x150c00e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038865: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15038867: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15038868: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150388C8; /* 0x1503886A: jbe 0x150388c8 */
L_1503886C:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x1503886C: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038880; /* 0x15038872: je 0x15038880 */
L_15038874:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038874: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x1503887A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503887F: pop ecx */
L_15038880:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038880: push -1 */
    PUSH32(esp, esi); /* 0x15038882: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038883: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x15038885: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x1503888F: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x15038890: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15038897: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15038898: push esi */
    PUSH32(esp, eax); /* 0x15038899: push eax */
    PUSH32(esp, eax); /* 0x1503889A: push eax */
    PUSH32(esp, 0x7BCu); /* 0x1503889B: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x150388A0: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x150388A6: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_1509577E); /* 0x150388AC: call 0x1509577e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x47C)); /* 0x150388B1: mov ebx, dword ptr [ebp - 0x47c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150388B7: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = eax; /* 0x150388BA: mov dword ptr [edi + 0x1c], eax */
    MEM32(edi + 0x18) = eax; /* 0x150388BD: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x20) = eax; /* 0x150388C0: mov dword ptr [edi + 0x20], eax */
    goto L_15038A8E; /* 0x150388C3: jmp 0x15038a8e */
L_150388C8:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x150388C8: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150388DC; /* 0x150388CE: je 0x150388dc */
L_150388D0:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150388D0: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x150388D6: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150388DB: pop ecx */
L_150388DC:
    RECOMP_CALL(sub_15036430); /* 0x150388DC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1503876C; /* 0x150388E1: jmp 0x1503876c */
L_150388E6:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x150388E6: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150388F6; /* 0x150388EC: jne 0x150388f6 */
L_150388EE:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x150388EE: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503896A; /* 0x150388F4: je 0x1503896a */
L_150388F6:
    eax = ebp + (-0x478); /* 0x150388F6: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150388FC: push eax */
    eax = ebp + (-0x458); /* 0x150388FD: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x15038903: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038904: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503890A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x1503890C: je 0x15038aca */
L_15038912:
    eax = ebp + (-0x21C); /* 0x15038912: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038918: push eax */
    eax = ebp + (-0x478); /* 0x15038919: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503891F: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038920: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038926: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038928: je 0x15038aca */
L_1503892E:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1503892E: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038935: push -1 */
    PUSH32(esp, eax); /* 0x15038937: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15038938: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503893F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15038940: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038947: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15038948: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503894F: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15038950: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15038957: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15038958: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503895F: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15038960: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038965: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15038968: mov esi, eax */
L_1503896A:
    MEM32(edi + 0x1C) = esi; /* 0x1503896A: mov dword ptr [edi + 0x1c], esi */
    /* cmp MEM32(ebp + (-0x460)), 0 */ /* 0x1503896D: cmp dword ptr [ebp - 0x460], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503897F; /* 0x15038974: jne 0x1503897f */
L_15038976:
    /* cmp MEM32(ebp + (-0x45C)), 0 */ /* 0x15038976: cmp dword ptr [ebp - 0x45c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150389F3; /* 0x1503897D: je 0x150389f3 */
L_1503897F:
    eax = ebp + (-0x478); /* 0x1503897F: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038985: push eax */
    eax = ebp + (-0x460); /* 0x15038986: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x1503898C: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503898D: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038995: je 0x15038aca */
L_1503899B:
    eax = ebp + (-0x21C); /* 0x1503899B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150389A1: push eax */
    eax = ebp + (-0x478); /* 0x150389A2: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150389A8: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150389A9: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150389AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x150389B1: je 0x15038aca */
L_150389B7:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x150389B7: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150389BE: push -1 */
    PUSH32(esp, eax); /* 0x150389C0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x150389C1: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x150389C8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x150389C9: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150389D0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x150389D1: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x150389D8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x150389D9: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x150389E0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x150389E1: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150389E8: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150389E9: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150389EE: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150389F1: mov esi, eax */
L_150389F3:
    MEM32(edi + 0x18) = esi; /* 0x150389F3: mov dword ptr [edi + 0x18], esi */
    /* cmp MEM32(ebp + (-0x468)), 0 */ /* 0x150389F6: cmp dword ptr [ebp - 0x468], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038A0D; /* 0x150389FD: jne 0x15038a0d */
L_150389FF:
    /* cmp MEM32(ebp + (-0x464)), 0 */ /* 0x150389FF: cmp dword ptr [ebp - 0x464], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038A0D; /* 0x15038A06: jne 0x15038a0d */
L_15038A08:
    eax = MEM32(edi + 0x1C); /* 0x15038A08: mov eax, dword ptr [edi + 0x1c] */
    goto L_15038A7F; /* 0x15038A0B: jmp 0x15038a7f */
L_15038A0D:
    eax = ebp + (-0x478); /* 0x15038A0D: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038A13: push eax */
    eax = ebp + (-0x468); /* 0x15038A14: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x15038A1A: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038A1B: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038A21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038A23: je 0x15038aca */
L_15038A29:
    eax = ebp + (-0x21C); /* 0x15038A29: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038A2F: push eax */
    eax = ebp + (-0x478); /* 0x15038A30: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038A36: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038A37: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038A3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038ACA; /* 0x15038A3F: je 0x15038aca */
L_15038A45:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15038A45: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038A4C: push -1 */
    PUSH32(esp, eax); /* 0x15038A4E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15038A4F: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x15038A56: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15038A57: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038A5E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15038A5F: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x15038A66: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15038A67: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15038A6E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15038A6F: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038A76: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15038A77: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038A7C: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15038A7F:
    MEM32(edi + 0x20) = eax; /* 0x15038A7F: mov dword ptr [edi + 0x20], eax */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038A82: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15038A88: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15038A8E:
    PUSH32(esp, ebx); /* 0x15038A8E: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x15038A8F: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_150385C7); /* 0x15038A95: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15038A9A: mov word ptr [edi + 6], ax */
    eax = MEM32(ebp + (-0x44C)); /* 0x15038A9E: mov eax, dword ptr [ebp - 0x44c] */
    MEM32(edi + 0x14) = eax; /* 0x15038AA4: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15038AA9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038AAA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038AAB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15038AAD: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x15038AB1: mov dword ptr [edi + 0xa], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15038AB4: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x480)); /* 0x15038AB5: mov eax, dword ptr [ebp - 0x480] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15038ABB: dec eax */
    _flag_k = FK_DEC;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15038ABC: mov word ptr [edi + 8], cx */
    MEM32(edi) = eax; /* 0x15038AC0: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x15038AC2: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_15038787; /* 0x15038AC5: jmp 0x15038787 */
L_15038ACA:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15038ACA: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15038AD0: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15038AD1: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038AD6: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038AD7: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15038ADD: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15038AE3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038AE3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15038AE6:
    ecx = MEM32(ebp + (-0x4)); /* 0x15038AE6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15038AE9: pop edi */
    esi = POP32_VAL(esp); /* 0x15038AEA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15038AEB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15038AED: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15038AEE: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038AF3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038AFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038AFBu);

L_15038AFB:
    edi = edi; /* 0x15038AFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038AFD: push ebp */
    ebp = esp; /* 0x15038AFE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15038B00: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15038B03: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15038B08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15038B0A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15038B0D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15038B10: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15038B11: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15038B14: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15038B15: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15038B17: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), 0 */ /* 0x15038B18: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038B32; /* 0x15038B1B: jne 0x15038b32 */
L_15038B1D:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x15038B1D: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038B32; /* 0x15038B21: jne 0x15038b32 */
L_15038B23:
    eax = MEM32(ebp + 0xC); /* 0x15038B23: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x15038B26: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x15038B28: mov eax, dword ptr [eax + 4] */
    MEM32(esi) = ecx; /* 0x15038B2B: mov dword ptr [esi], ecx */
    MEM32(esi + 0x4) = eax; /* 0x15038B2D: mov dword ptr [esi + 4], eax */
    goto L_15038B84; /* 0x15038B30: jmp 0x15038b84 */
L_15038B32:
    ecx = ebp + (-0x1C); /* 0x15038B32: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15038B35: push ecx */
    PUSH32(esp, eax); /* 0x15038B36: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038B37: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038B3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038B82; /* 0x15038B3F: je 0x15038b82 */
L_15038B41:
    eax = ebp + (-0x14); /* 0x15038B41: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15038B44: push eax */
    eax = ebp + (-0x1C); /* 0x15038B45: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15038B48: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038B49: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038B4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038B82; /* 0x15038B51: je 0x15038b82 */
L_15038B53:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15038B53: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038B57: push -1 */
    PUSH32(esp, eax); /* 0x15038B59: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15038B5A: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x15038B5E: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x15038B5F: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15038B63: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x15038B64: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x15038B68: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x15038B69: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x15038B6D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x15038B6E: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15038B72: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x15038B73: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038B78: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x15038B7B: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = edx; /* 0x15038B7D: mov dword ptr [esi + 4], edx */
    goto L_15038B84; /* 0x15038B80: jmp 0x15038b84 */
L_15038B82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15038B82: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15038B84:
    ecx = MEM32(ebp + (-0x4)); /* 0x15038B84: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x15038B87: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15038B89: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15038B8A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15038B8C: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15038B8D: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038B92: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038B93: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038B9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038B9Au);

L_15038B9A:
    edi = edi; /* 0x15038B9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038B9C: push ebp */
    ebp = esp; /* 0x15038B9D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x15038B9F: sub esp, 0x78 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15038BA2: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15038BA7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15038BA9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15038BAC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15038BAF: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15038BB2: push ebx */
    PUSH32(esp, esi); /* 0x15038BB3: push esi */
    esi = MEM32(0x150BDB14); /* 0x15038BB4: mov esi, dword ptr [0x150bdb14] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15038BBA: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15038BBD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x70)) = eax; /* 0x15038BBF: mov dword ptr [ebp - 0x70], eax */
    MEM64(ebp + (-0x78)) = _xmm[0].u64[0]; /* 0x15038BC2: movlpd qword ptr [ebp - 0x78], xmm0 */
    PUSH32(esp, edi); /* 0x15038BC7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15038BC8: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, ecx */ /* 0x15038BCB: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038BCD: je 0x15038d24 */
L_15038BD3:
    /* test esi, esi */ /* 0x15038BD3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038C19; /* 0x15038BD5: jne 0x15038c19 */
L_15038BD7:
    PUSH32(esp, 0x15003E50u); /* 0x15038BD7: push 0x15003e50 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15038BDC: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038BE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038BF5; /* 0x15038BE4: jne 0x15038bf5 */
L_15038BE6:
    PUSH32(esp, 0x15003E28u); /* 0x15038BE6: push 0x15003e28 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15038BEB: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038BF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038C03; /* 0x15038BF3: je 0x15038c03 */
L_15038BF5:
    PUSH32(esp, 0x15003E70u); /* 0x15038BF5: push 0x15003e70 */
    PUSH32(esp, eax); /* 0x15038BFA: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x15038BFB: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15038C01: mov esi, eax */
L_15038C03:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15038C03: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x15038C06: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = esi; } /* 0x15038C08: cmovne eax, esi */
    MEM32(0x150BDB14) = eax; /* 0x15038C0B: mov dword ptr [0x150bdb14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038C10: je 0x15038d24 */
L_15038C16:
    eax = MEM32(ebp + (-0x70)); /* 0x15038C16: mov eax, dword ptr [ebp - 0x70] */
L_15038C19:
    PUSH32(esp, 0x68u); /* 0x15038C19: push 0x68 */
    ecx = ebp + (-0x6C); /* 0x15038C1B: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, ecx); /* 0x15038C1E: push ecx */
    PUSH32(esp, 3); /* 0x15038C1F: push 3 */
    PUSH32(esp, eax); /* 0x15038C21: push eax */
    ecx = esi; /* 0x15038C22: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15038C24: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15038C2A: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038C2E: je 0x15038d24 */
L_15038C34:
    /* cmp MEM32(ebp + (-0x28)), 7 */ /* 0x15038C34: cmp dword ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038C4A; /* 0x15038C38: je 0x15038c4a */
L_15038C3A:
    /* cmp MEM32(ebp + (-0x28)), 8 */ /* 0x15038C3A: cmp dword ptr [ebp - 0x28], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038C4A; /* 0x15038C3E: je 0x15038c4a */
L_15038C40:
    /* cmp MEM32(ebp + (-0x28)), 0x24u */ /* 0x15038C40: cmp dword ptr [ebp - 0x28], 0x24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038C44: jne 0x15038d24 */
L_15038C4A:
    PUSH32(esp, 0x38u); /* 0x15038C4A: push 0x38 */
    PUSH32(esp, ebx); /* 0x15038C4C: push ebx */
    PUSH32(esp, edi); /* 0x15038C4D: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15038C4E: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x15038C53: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038C56: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x15038C59: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x15038C5C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038C5F: je 0x15038d24 */
L_15038C65:
    /* cmp MEM16(esi + 0x2), 0x3Au */ /* 0x15038C65: cmp word ptr [esi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038C73; /* 0x15038C6A: je 0x15038c73 */
L_15038C6C:
    RECOMP_CALL(sub_15036820); /* 0x15038C6C: call 0x15036820 */
    RECOMP_FLAGS_IN();
    goto L_15038C8A; /* 0x15038C71: jmp 0x15038c8a */
L_15038C73:
    /* cmp MEM16(esi + 0x4), LO16(ebx) */ /* 0x15038C73: cmp word ptr [esi + 4], bx */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038D24; /* 0x15038C77: je 0x15038d24 */
L_15038C7D:
    PUSH32(esp, eax); /* 0x15038C7D: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x15038C7E: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x15038C83: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x15038C86: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15038C87: sub eax, 0x60 */
    _flag_k = FK_CMP;
L_15038C8A:
    MEM32(ebp + (-0x70)) = eax; /* 0x15038C8A: mov dword ptr [ebp - 0x70], eax */
    eax = edi + 0x28; /* 0x15038C8D: lea eax, [edi + 0x28] */
    PUSH32(esp, eax); /* 0x15038C90: push eax */
    eax = ebp + (-0x78); /* 0x15038C91: lea eax, [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x15038C94: push eax */
    eax = ebp + (-0x54); /* 0x15038C95: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x15038C98: push eax */
    RECOMP_CALL(sub_15038AFB); /* 0x15038C99: call 0x15038afb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038C9E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15038CA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D18; /* 0x15038CA3: je 0x15038d18 */
L_15038CA5:
    eax = edi + 0x20; /* 0x15038CA5: lea eax, [edi + 0x20] */
    PUSH32(esp, eax); /* 0x15038CA8: push eax */
    eax = edi + 0x28; /* 0x15038CA9: lea eax, [edi + 0x28] */
    PUSH32(esp, eax); /* 0x15038CAC: push eax */
    eax = ebp + (-0x5C); /* 0x15038CAD: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x15038CB0: push eax */
    RECOMP_CALL(sub_15038AFB); /* 0x15038CB1: call 0x15038afb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038CB6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15038CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D18; /* 0x15038CBB: je 0x15038d18 */
L_15038CBD:
    eax = edi + 0x30; /* 0x15038CBD: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x15038CC0: push eax */
    eax = edi + 0x28; /* 0x15038CC1: lea eax, [edi + 0x28] */
    PUSH32(esp, eax); /* 0x15038CC4: push eax */
    eax = ebp + (-0x64); /* 0x15038CC5: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x15038CC8: push eax */
    RECOMP_CALL(sub_15038AFB); /* 0x15038CC9: call 0x15038afb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038CCE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15038CD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D18; /* 0x15038CD3: je 0x15038d18 */
L_15038CD5:
    eax = MEM32(ebp + (-0x70)); /* 0x15038CD5: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15038CD8: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x15038CD9: push esi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x15038CDA: push dword ptr [ebp - 0x34] */
    MEM32(edi) = eax; /* 0x15038CDD: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x15038CDF: mov dword ptr [edi + 0x10], eax */
    RECOMP_CALL(sub_150385C7); /* 0x15038CE2: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038CE7: pop ecx */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15038CE8: mov word ptr [edi + 6], ax */
    eax = MEM32(ebp + (-0x2C)); /* 0x15038CEC: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, 0xFFFFu */ /* 0x15038CEF: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15038CF4: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x15038CF5: movzx ecx, ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038CF8: push -1 */
    eax = POP32_VAL(esp); /* 0x15038CFA: pop eax */
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x15038CFB: cmova ecx, eax */
    eax = MEM32(ebp + (-0x38)); /* 0x15038CFE: mov eax, dword ptr [ebp - 0x38] */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15038D01: mov word ptr [edi + 8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038D05: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x3C)); /* 0x15038D07: add ecx, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15038D0A: cdq  */
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15038D0B: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = ecx; /* 0x15038D0D: mov dword ptr [edi + 0x18], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15038D10: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = eax; /* 0x15038D12: mov dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15038D15: inc ebx */
    _flag_k = FK_INC;
    goto L_15038D24; /* 0x15038D16: jmp 0x15038d24 */
L_15038D18:
    PUSH32(esp, 0x38u); /* 0x15038D18: push 0x38 */
    PUSH32(esp, ebx); /* 0x15038D1A: push ebx */
    PUSH32(esp, edi); /* 0x15038D1B: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15038D1C: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15038D21: add esp, 0xc */
    _flag_k = FK_ADD;
L_15038D24:
    ecx = MEM32(ebp + (-0x4)); /* 0x15038D24: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x15038D27: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x15038D29: pop edi */
    esi = POP32_VAL(esp); /* 0x15038D2A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15038D2B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15038D2D: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15038D2E: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15038D33: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15038D34: ret  */
    RECOMP_REGS_OUT();
}

void sub_15038D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15038D40u);

L_15038D40:
    edi = edi; /* 0x15038D40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15038D42: push ebp */
    ebp = esp; /* 0x15038D43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x15038D45: sub esp, 0x484 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15038D4B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15038D50: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15038D52: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15038D55: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15038D56: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x47C)) = ebx; /* 0x15038D59: mov dword ptr [ebp - 0x47c], ebx */
    PUSH32(esp, esi); /* 0x15038D5F: push esi */
    PUSH32(esp, edi); /* 0x15038D60: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15038D61: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15038D64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15038D8E; /* 0x15038D66: jne 0x15038d8e */
L_15038D68:
    RECOMP_CALL(sub_150363E0); /* 0x15038D68: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15038D6D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15038D6F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15038D71: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15038D76: push esi */
    PUSH32(esp, esi); /* 0x15038D77: push esi */
    PUSH32(esp, esi); /* 0x15038D78: push esi */
    PUSH32(esp, esi); /* 0x15038D79: push esi */
    PUSH32(esp, esi); /* 0x15038D7A: push esi */
    MEM32(eax) = 0x16u; /* 0x15038D7B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15038D81: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15038D86: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15039155; /* 0x15038D89: jmp 0x15039155 */
L_15038D8E:
    /* test edi, edi */ /* 0x15038D8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038D68; /* 0x15038D90: je 0x15038d68 */
L_15038D92:
    PUSH32(esp, edi); /* 0x15038D92: push edi */
    PUSH32(esp, ebx); /* 0x15038D93: push ebx */
    RECOMP_CALL(sub_15038B9A); /* 0x15038D94: call 0x15038b9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038D99: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038D9A: pop ecx */
    /* test eax, eax */ /* 0x15038D9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038DA6; /* 0x15038D9D: je 0x15038da6 */
L_15038D9F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038D9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15039158; /* 0x15038DA1: jmp 0x15039158 */
L_15038DA6:
    PUSH32(esp, 0x15003EBCu); /* 0x15038DA6: push 0x15003ebc */
    PUSH32(esp, ebx); /* 0x15038DAB: push ebx */
    RECOMP_CALL(sub_1508F770); /* 0x15038DAC: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038DB1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038DB2: pop ecx */
    /* test eax, eax */ /* 0x15038DB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038DCD; /* 0x15038DB5: je 0x15038dcd */
L_15038DB7:
    RECOMP_CALL(sub_15036430); /* 0x15038DB7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15038DBC: push 2 */
    ebx = POP32_VAL(esp); /* 0x15038DBE: pop ebx */
L_15038DBF:
    MEM32(eax) = ebx; /* 0x15038DBF: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_150363E0); /* 0x15038DC1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15038DC6: mov dword ptr [eax], ebx */
    goto L_15039155; /* 0x15038DC8: jmp 0x15039155 */
L_15038DCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15038DCD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x15038DCF: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038DF3; /* 0x15038DD4: jne 0x15038df3 */
L_15038DD6:
    eax = (uint32_t)MEM16(ebx); /* 0x15038DD6: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x15038DD9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038DE4; /* 0x15038DDC: je 0x15038de4 */
L_15038DDE:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x15038DDE: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038DB7; /* 0x15038DE2: je 0x15038db7 */
L_15038DE4:
    PUSH32(esp, eax); /* 0x15038DE4: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x15038DE5: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x15038DEA: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x15038DED: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15038DEE: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_15038DF8; /* 0x15038DF1: jmp 0x15038df8 */
L_15038DF3:
    RECOMP_CALL(sub_15036820); /* 0x15038DF3: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_15038DF8:
    MEM32(ebp + (-0x480)) = eax; /* 0x15038DF8: mov dword ptr [ebp - 0x480], eax */
    eax = ebp + (-0x46C); /* 0x15038DFE: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x15038E04: push eax */
    PUSH32(esp, ebx); /* 0x15038E05: push ebx */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15038E06: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x470)) = eax; /* 0x15038E0C: mov dword ptr [ebp - 0x470], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15038E12: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038F2E; /* 0x15038E15: jne 0x15038f2e */
L_15038E1B:
    PUSH32(esp, 0x15003EC4u); /* 0x15038E1B: push 0x15003ec4 */
    PUSH32(esp, ebx); /* 0x15038E20: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x15038E21: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_1508F770); /* 0x15038E27: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038E2C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15038E2D: pop ecx */
    PUSH32(esp, 2); /* 0x15038E2E: push 2 */
    ebx = POP32_VAL(esp); /* 0x15038E30: pop ebx */
    /* test eax, eax */ /* 0x15038E31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038F24; /* 0x15038E33: je 0x15038f24 */
L_15038E39:
    eax = ebp + (-0x470); /* 0x15038E39: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x15038E3F: push eax */
    PUSH32(esp, 0x104u); /* 0x15038E40: push 0x104 */
    PUSH32(esp, MEM32(ebp + (-0x47C))); /* 0x15038E45: push dword ptr [ebp - 0x47c] */
    eax = ebp + (-0x20C); /* 0x15038E4B: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x15038E51: push eax */
    RECOMP_CALL(sub_1503868A); /* 0x15038E52: call 0x1503868a */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15038E57: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15038E59: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = edx; /* 0x15038E5C: mov dword ptr [ebp - 0x474], edx */
    /* test edx, edx */ /* 0x15038E62: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038F10; /* 0x15038E64: je 0x15038f10 */
L_15038E6A:
    ecx = edx; /* 0x15038E6A: mov ecx, edx */
    eax = ecx + 0x2; /* 0x15038E6C: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x484)) = eax; /* 0x15038E6F: mov dword ptr [ebp - 0x484], eax */
L_15038E75:
    SET_LO16(eax, MEM16(ecx)); /* 0x15038E75: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15038E78: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15038E7A: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038E75; /* 0x15038E7D: jne 0x15038e75 */
L_15038E7F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x484)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x484)); /* 0x15038E7F: sub ecx, dword ptr [ebp - 0x484] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15038E85: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 3 */ /* 0x15038E87: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038E9D; /* 0x15038E8A: je 0x15038e9d */
L_15038E8C:
    PUSH32(esp, edx); /* 0x15038E8C: push edx */
    RECOMP_CALL(sub_150382D2); /* 0x15038E8D: call 0x150382d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038E92: pop ecx */
    /* test eax, eax */ /* 0x15038E93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15038F10; /* 0x15038E95: je 0x15038f10 */
L_15038E97:
    edx = MEM32(ebp + (-0x474)); /* 0x15038E97: mov edx, dword ptr [ebp - 0x474] */
L_15038E9D:
    PUSH32(esp, edx); /* 0x15038E9D: push edx */
    RECOMP_ICALL(MEM32(0x150C00E0)); /* 0x15038E9E: call dword ptr [0x150c00e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15038EA4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15038EA6: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15038EA7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15038F10; /* 0x15038EA9: jbe 0x15038f10 */
L_15038EAB:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x15038EAB: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038EBF; /* 0x15038EB1: je 0x15038ebf */
L_15038EB3:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038EB3: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x15038EB9: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038EBE: pop ecx */
L_15038EBF:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038EBF: push -1 */
    PUSH32(esp, esi); /* 0x15038EC1: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15038EC2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x15038EC4: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x15038ECE: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x15038ECF: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15038ED6: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x15038ED7: push esi */
    PUSH32(esp, eax); /* 0x15038ED8: push eax */
    PUSH32(esp, eax); /* 0x15038ED9: push eax */
    PUSH32(esp, 0x7BCu); /* 0x15038EDA: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x15038EDF: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x15038EE5: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_1509599D); /* 0x15038EEB: call 0x1509599d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x47C)); /* 0x15038EF0: mov ebx, dword ptr [ebp - 0x47c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038EF6: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = eax; /* 0x15038EF9: mov dword ptr [edi + 0x28], eax */
    MEM32(edi + 0x2C) = edx; /* 0x15038EFC: mov dword ptr [edi + 0x2c], edx */
    MEM32(edi + 0x20) = eax; /* 0x15038EFF: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x15038F02: mov dword ptr [edi + 0x24], edx */
    MEM32(edi + 0x30) = eax; /* 0x15038F05: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = edx; /* 0x15038F08: mov dword ptr [edi + 0x34], edx */
    goto L_150390F3; /* 0x15038F0B: jmp 0x150390f3 */
L_15038F10:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x15038F10: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15038F24; /* 0x15038F16: je 0x15038f24 */
L_15038F18:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15038F18: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x15038F1E: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15038F23: pop ecx */
L_15038F24:
    RECOMP_CALL(sub_15036430); /* 0x15038F24: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15038DBF; /* 0x15038F29: jmp 0x15038dbf */
L_15038F2E:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x15038F2E: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038F57; /* 0x15038F34: jne 0x15038f57 */
L_15038F36:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x15038F36: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038F57; /* 0x15038F3C: jne 0x15038f57 */
L_15038F3E:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15038F3E: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x478)) = _xmm[0].u64[0]; /* 0x15038F41: movlpd qword ptr [ebp - 0x478], xmm0 */
    edx = MEM32(ebp + (-0x474)); /* 0x15038F49: mov edx, dword ptr [ebp - 0x474] */
    eax = MEM32(ebp + (-0x478)); /* 0x15038F4F: mov eax, dword ptr [ebp - 0x478] */
    goto L_15038FC9; /* 0x15038F55: jmp 0x15038fc9 */
L_15038F57:
    eax = ebp + (-0x478); /* 0x15038F57: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038F5D: push eax */
    eax = ebp + (-0x458); /* 0x15038F5E: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x15038F64: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038F65: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038F6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x15038F6D: je 0x1503913c */
L_15038F73:
    eax = ebp + (-0x21C); /* 0x15038F73: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038F79: push eax */
    eax = ebp + (-0x478); /* 0x15038F7A: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038F80: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15038F81: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038F87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x15038F89: je 0x1503913c */
L_15038F8F:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15038F8F: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15038F96: push -1 */
    PUSH32(esp, eax); /* 0x15038F98: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15038F99: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x15038FA0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15038FA1: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15038FA8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15038FA9: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x15038FB0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15038FB1: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15038FB8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15038FB9: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15038FC0: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x15038FC1: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15038FC6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15038FC9:
    MEM32(edi + 0x28) = eax; /* 0x15038FC9: mov dword ptr [edi + 0x28], eax */
    MEM32(edi + 0x2C) = edx; /* 0x15038FCC: mov dword ptr [edi + 0x2c], edx */
    /* cmp MEM32(ebp + (-0x460)), esi */ /* 0x15038FCF: cmp dword ptr [ebp - 0x460], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15038FDF; /* 0x15038FD5: jne 0x15038fdf */
L_15038FD7:
    /* cmp MEM32(ebp + (-0x45C)), esi */ /* 0x15038FD7: cmp dword ptr [ebp - 0x45c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039051; /* 0x15038FDD: je 0x15039051 */
L_15038FDF:
    eax = ebp + (-0x478); /* 0x15038FDF: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15038FE5: push eax */
    eax = ebp + (-0x460); /* 0x15038FE6: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x15038FEC: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15038FED: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15038FF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x15038FF5: je 0x1503913c */
L_15038FFB:
    eax = ebp + (-0x21C); /* 0x15038FFB: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039001: push eax */
    eax = ebp + (-0x478); /* 0x15039002: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039008: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15039009: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503900F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x15039011: je 0x1503913c */
L_15039017:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15039017: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503901E: push -1 */
    PUSH32(esp, eax); /* 0x15039020: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15039021: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x15039028: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x15039029: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15039030: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15039031: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x15039038: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x15039039: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15039040: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15039041: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039048: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x15039049: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1503904E: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15039051:
    MEM32(edi + 0x20) = eax; /* 0x15039051: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x15039054: mov dword ptr [edi + 0x24], edx */
    /* cmp MEM32(ebp + (-0x468)), esi */ /* 0x15039057: cmp dword ptr [ebp - 0x468], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503906F; /* 0x1503905D: jne 0x1503906f */
L_1503905F:
    /* cmp MEM32(ebp + (-0x464)), esi */ /* 0x1503905F: cmp dword ptr [ebp - 0x464], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503906F; /* 0x15039065: jne 0x1503906f */
L_15039067:
    eax = MEM32(edi + 0x28); /* 0x15039067: mov eax, dword ptr [edi + 0x28] */
    edx = MEM32(edi + 0x2C); /* 0x1503906A: mov edx, dword ptr [edi + 0x2c] */
    goto L_150390E1; /* 0x1503906D: jmp 0x150390e1 */
L_1503906F:
    eax = ebp + (-0x478); /* 0x1503906F: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039075: push eax */
    eax = ebp + (-0x468); /* 0x15039076: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1503907C: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503907D: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x15039085: je 0x1503913c */
L_1503908B:
    eax = ebp + (-0x21C); /* 0x1503908B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039091: push eax */
    eax = ebp + (-0x478); /* 0x15039092: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039098: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15039099: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503909F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503913C; /* 0x150390A1: je 0x1503913c */
L_150390A7:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x150390A7: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150390AE: push -1 */
    PUSH32(esp, eax); /* 0x150390B0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x150390B1: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x150390B8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x150390B9: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150390C0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x150390C1: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x150390C8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x150390C9: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x150390D0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x150390D1: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150390D8: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x150390D9: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150390DE: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150390E1:
    MEM32(edi + 0x30) = eax; /* 0x150390E1: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = edx; /* 0x150390E4: mov dword ptr [edi + 0x34], edx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150390E7: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150390ED: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150390F3:
    PUSH32(esp, ebx); /* 0x150390F3: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x150390F4: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_150385C7); /* 0x150390FA: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150390FF: pop ecx */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x15039100: mov word ptr [edi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15039104: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15039106: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15039107: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15039109: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x44C)); /* 0x1503910A: add eax, dword ptr [ebp - 0x44c] */
    _flag_k = FK_ADD;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15039110: mov word ptr [edi + 8], cx */
    ecx = MEM32(ebp + (-0x450)); /* 0x15039114: mov ecx, dword ptr [ebp - 0x450] */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503911A: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x1503911C: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503911F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = ecx; /* 0x15039121: mov dword ptr [edi + 0x1c], ecx */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15039124: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x15039128: mov dword ptr [edi + 0xa], eax */
    eax = MEM32(ebp + (-0x480)); /* 0x1503912B: mov eax, dword ptr [ebp - 0x480] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15039131: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x15039132: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x15039134: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_15038D9F; /* 0x15039137: jmp 0x15038d9f */
L_1503913C:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503913C: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15039142: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15039143: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039148: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15039149: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1503914F: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15039155:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15039155: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15039158:
    ecx = MEM32(ebp + (-0x4)); /* 0x15039158: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1503915B: pop edi */
    esi = POP32_VAL(esp); /* 0x1503915C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1503915D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1503915F: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15039160: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039165: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039166: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503916D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503916Du);

L_1503916D:
    edi = edi; /* 0x1503916D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503916F: push ebp */
    ebp = esp; /* 0x15039170: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x15039172: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15039175: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503917A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503917C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503917F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15039182: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15039185: push ebx */
    PUSH32(esp, esi); /* 0x15039186: push esi */
    esi = MEM32(0x150BDB14); /* 0x15039187: mov esi, dword ptr [0x150bdb14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503918D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x70)) = eax; /* 0x1503918F: mov dword ptr [ebp - 0x70], eax */
    MEM32(ebp + (-0x74)) = ebx; /* 0x15039192: mov dword ptr [ebp - 0x74], ebx */
    PUSH32(esp, edi); /* 0x15039195: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15039196: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, ecx */ /* 0x15039199: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150392F2; /* 0x1503919B: je 0x150392f2 */
L_150391A1:
    /* test esi, esi */ /* 0x150391A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150391E7; /* 0x150391A3: jne 0x150391e7 */
L_150391A5:
    PUSH32(esp, 0x15003E50u); /* 0x150391A5: push 0x15003e50 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x150391AA: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150391B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150391C3; /* 0x150391B2: jne 0x150391c3 */
L_150391B4:
    PUSH32(esp, 0x15003E28u); /* 0x150391B4: push 0x15003e28 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x150391B9: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150391BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150391D1; /* 0x150391C1: je 0x150391d1 */
L_150391C3:
    PUSH32(esp, 0x15003E70u); /* 0x150391C3: push 0x15003e70 */
    PUSH32(esp, eax); /* 0x150391C8: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x150391C9: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150391CF: mov esi, eax */
L_150391D1:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150391D1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x150391D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = esi; } /* 0x150391D6: cmovne eax, esi */
    MEM32(0x150BDB14) = eax; /* 0x150391D9: mov dword ptr [0x150bdb14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392F2; /* 0x150391DE: je 0x150392f2 */
L_150391E4:
    eax = MEM32(ebp + (-0x70)); /* 0x150391E4: mov eax, dword ptr [ebp - 0x70] */
L_150391E7:
    PUSH32(esp, 0x68u); /* 0x150391E7: push 0x68 */
    ecx = ebp + (-0x6C); /* 0x150391E9: lea ecx, [ebp - 0x6c] */
    PUSH32(esp, ecx); /* 0x150391EC: push ecx */
    PUSH32(esp, 3); /* 0x150391ED: push 3 */
    PUSH32(esp, eax); /* 0x150391EF: push eax */
    ecx = esi; /* 0x150391F0: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150391F2: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x150391F8: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150391FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392F2; /* 0x150391FC: je 0x150392f2 */
L_15039202:
    /* cmp MEM32(ebp + (-0x28)), 7 */ /* 0x15039202: cmp dword ptr [ebp - 0x28], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039218; /* 0x15039206: je 0x15039218 */
L_15039208:
    /* cmp MEM32(ebp + (-0x28)), 8 */ /* 0x15039208: cmp dword ptr [ebp - 0x28], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039218; /* 0x1503920C: je 0x15039218 */
L_1503920E:
    /* cmp MEM32(ebp + (-0x28)), 0x24u */ /* 0x1503920E: cmp dword ptr [ebp - 0x28], 0x24 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150392F2; /* 0x15039212: jne 0x150392f2 */
L_15039218:
    PUSH32(esp, 0x30u); /* 0x15039218: push 0x30 */
    PUSH32(esp, ebx); /* 0x1503921A: push ebx */
    PUSH32(esp, edi); /* 0x1503921B: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x1503921C: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x15039221: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15039224: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x15039227: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1503922A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392F2; /* 0x1503922D: je 0x150392f2 */
L_15039233:
    /* cmp MEM16(esi + 0x2), 0x3Au */ /* 0x15039233: cmp word ptr [esi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039241; /* 0x15039238: je 0x15039241 */
L_1503923A:
    RECOMP_CALL(sub_15036820); /* 0x1503923A: call 0x15036820 */
    RECOMP_FLAGS_IN();
    goto L_15039258; /* 0x1503923F: jmp 0x15039258 */
L_15039241:
    /* cmp MEM16(esi + 0x4), LO16(ebx) */ /* 0x15039241: cmp word ptr [esi + 4], bx */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150392F2; /* 0x15039245: je 0x150392f2 */
L_1503924B:
    PUSH32(esp, eax); /* 0x1503924B: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x1503924C: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x15039251: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x15039254: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x15039255: sub eax, 0x60 */
    _flag_k = FK_CMP;
L_15039258:
    MEM32(ebp + (-0x70)) = eax; /* 0x15039258: mov dword ptr [ebp - 0x70], eax */
    eax = edi + 0x24; /* 0x1503925B: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x1503925E: push eax */
    eax = ebp + (-0x74); /* 0x1503925F: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x15039262: push eax */
    eax = ebp + (-0x54); /* 0x15039263: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x15039266: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x15039267: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503926C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503926F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392E6; /* 0x15039271: je 0x150392e6 */
L_15039273:
    eax = edi + 0x20; /* 0x15039273: lea eax, [edi + 0x20] */
    PUSH32(esp, eax); /* 0x15039276: push eax */
    eax = edi + 0x24; /* 0x15039277: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x1503927A: push eax */
    eax = ebp + (-0x5C); /* 0x1503927B: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1503927E: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x1503927F: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15039284: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15039287: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392E6; /* 0x15039289: je 0x150392e6 */
L_1503928B:
    eax = edi + 0x28; /* 0x1503928B: lea eax, [edi + 0x28] */
    PUSH32(esp, eax); /* 0x1503928E: push eax */
    eax = edi + 0x24; /* 0x1503928F: lea eax, [edi + 0x24] */
    PUSH32(esp, eax); /* 0x15039292: push eax */
    eax = ebp + (-0x64); /* 0x15039293: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x15039296: push eax */
    RECOMP_CALL(sub_150383AC); /* 0x15039297: call 0x150383ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503929C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503929F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150392E6; /* 0x150392A1: je 0x150392e6 */
L_150392A3:
    eax = MEM32(ebp + (-0x70)); /* 0x150392A3: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150392A6: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x150392A7: push esi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x150392A8: push dword ptr [ebp - 0x34] */
    MEM32(edi) = eax; /* 0x150392AB: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x150392AD: mov dword ptr [edi + 0x10], eax */
    RECOMP_CALL(sub_150385C7); /* 0x150392B0: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150392B5: pop ecx */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x150392B6: mov word ptr [edi + 6], ax */
    eax = MEM32(ebp + (-0x2C)); /* 0x150392BA: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, 0xFFFFu */ /* 0x150392BD: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x150392C2: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x150392C3: movzx ecx, ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150392C6: push -1 */
    eax = POP32_VAL(esp); /* 0x150392C8: pop eax */
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x150392C9: cmova ecx, eax */
    eax = MEM32(ebp + (-0x38)); /* 0x150392CC: mov eax, dword ptr [ebp - 0x38] */
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150392CF: mov word ptr [edi + 8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150392D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x3C)); /* 0x150392D5: add ecx, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150392D8: cdq  */
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150392D9: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = ecx; /* 0x150392DB: mov dword ptr [edi + 0x18], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150392DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = eax; /* 0x150392E0: mov dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150392E3: inc ebx */
    _flag_k = FK_INC;
    goto L_150392F2; /* 0x150392E4: jmp 0x150392f2 */
L_150392E6:
    PUSH32(esp, 0x30u); /* 0x150392E6: push 0x30 */
    PUSH32(esp, ebx); /* 0x150392E8: push ebx */
    PUSH32(esp, edi); /* 0x150392E9: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x150392EA: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150392EF: add esp, 0xc */
    _flag_k = FK_ADD;
L_150392F2:
    ecx = MEM32(ebp + (-0x4)); /* 0x150392F2: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x150392F5: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x150392F7: pop edi */
    esi = POP32_VAL(esp); /* 0x150392F8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150392F9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150392FB: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150392FC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039301: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039302: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039309(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039309u);

L_15039309:
    edi = edi; /* 0x15039309: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503930B: push ebp */
    ebp = esp; /* 0x1503930C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x1503930E: sub esp, 0x484 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15039314: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15039319: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503931B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1503931E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503931F: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x47C)) = ebx; /* 0x15039322: mov dword ptr [ebp - 0x47c], ebx */
    PUSH32(esp, esi); /* 0x15039328: push esi */
    PUSH32(esp, edi); /* 0x15039329: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503932A: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1503932D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039357; /* 0x1503932F: jne 0x15039357 */
L_15039331:
    RECOMP_CALL(sub_150363E0); /* 0x15039331: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15039336: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15039338: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1503933A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503933F: push esi */
    PUSH32(esp, esi); /* 0x15039340: push esi */
    PUSH32(esp, esi); /* 0x15039341: push esi */
    PUSH32(esp, esi); /* 0x15039342: push esi */
    PUSH32(esp, esi); /* 0x15039343: push esi */
    MEM32(eax) = 0x16u; /* 0x15039344: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503934A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503934F: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150396F4; /* 0x15039352: jmp 0x150396f4 */
L_15039357:
    /* test edi, edi */ /* 0x15039357: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039331; /* 0x15039359: je 0x15039331 */
L_1503935B:
    PUSH32(esp, 0x15003EBCu); /* 0x1503935B: push 0x15003ebc */
    PUSH32(esp, ebx); /* 0x15039360: push ebx */
    RECOMP_CALL(sub_1508F770); /* 0x15039361: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039366: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15039367: pop ecx */
    /* test eax, eax */ /* 0x15039368: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039382; /* 0x1503936A: je 0x15039382 */
L_1503936C:
    RECOMP_CALL(sub_15036430); /* 0x1503936C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15039371: push 2 */
    ebx = POP32_VAL(esp); /* 0x15039373: pop ebx */
L_15039374:
    MEM32(eax) = ebx; /* 0x15039374: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_150363E0); /* 0x15039376: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1503937B: mov dword ptr [eax], ebx */
    goto L_150396F4; /* 0x1503937D: jmp 0x150396f4 */
L_15039382:
    PUSH32(esp, edi); /* 0x15039382: push edi */
    PUSH32(esp, ebx); /* 0x15039383: push ebx */
    RECOMP_CALL(sub_1503916D); /* 0x15039384: call 0x1503916d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039389: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503938A: pop ecx */
    /* test eax, eax */ /* 0x1503938B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039396; /* 0x1503938D: je 0x15039396 */
L_1503938F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503938F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150396F7; /* 0x15039391: jmp 0x150396f7 */
L_15039396:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15039396: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x15039398: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150393BC; /* 0x1503939D: jne 0x150393bc */
L_1503939F:
    eax = (uint32_t)MEM16(ebx); /* 0x1503939F: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x150393A2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150393AD; /* 0x150393A5: je 0x150393ad */
L_150393A7:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x150393A7: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503936C; /* 0x150393AB: je 0x1503936c */
L_150393AD:
    PUSH32(esp, eax); /* 0x150393AD: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x150393AE: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x150393B3: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x150393B6: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x150393B7: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_150393C1; /* 0x150393BA: jmp 0x150393c1 */
L_150393BC:
    RECOMP_CALL(sub_15036820); /* 0x150393BC: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_150393C1:
    MEM32(ebp + (-0x480)) = eax; /* 0x150393C1: mov dword ptr [ebp - 0x480], eax */
    eax = ebp + (-0x46C); /* 0x150393C7: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x150393CD: push eax */
    PUSH32(esp, ebx); /* 0x150393CE: push ebx */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x150393CF: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x470)) = eax; /* 0x150393D5: mov dword ptr [ebp - 0x470], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150393DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150394EE; /* 0x150393DE: jne 0x150394ee */
L_150393E4:
    PUSH32(esp, 0x15003EC4u); /* 0x150393E4: push 0x15003ec4 */
    PUSH32(esp, ebx); /* 0x150393E9: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x150393EA: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_1508F770); /* 0x150393F0: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150393F5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150393F6: pop ecx */
    PUSH32(esp, 2); /* 0x150393F7: push 2 */
    ebx = POP32_VAL(esp); /* 0x150393F9: pop ebx */
    /* test eax, eax */ /* 0x150393FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394E4; /* 0x150393FC: je 0x150394e4 */
L_15039402:
    eax = ebp + (-0x470); /* 0x15039402: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x15039408: push eax */
    PUSH32(esp, 0x104u); /* 0x15039409: push 0x104 */
    PUSH32(esp, MEM32(ebp + (-0x47C))); /* 0x1503940E: push dword ptr [ebp - 0x47c] */
    eax = ebp + (-0x20C); /* 0x15039414: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1503941A: push eax */
    RECOMP_CALL(sub_1503868A); /* 0x1503941B: call 0x1503868a */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15039420: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15039422: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = edx; /* 0x15039425: mov dword ptr [ebp - 0x474], edx */
    /* test edx, edx */ /* 0x1503942B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394D0; /* 0x1503942D: je 0x150394d0 */
L_15039433:
    ecx = edx; /* 0x15039433: mov ecx, edx */
    eax = ecx + 0x2; /* 0x15039435: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x484)) = eax; /* 0x15039438: mov dword ptr [ebp - 0x484], eax */
L_1503943E:
    SET_LO16(eax, MEM16(ecx)); /* 0x1503943E: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15039441: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15039443: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503943E; /* 0x15039446: jne 0x1503943e */
L_15039448:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x484)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x484)); /* 0x15039448: sub ecx, dword ptr [ebp - 0x484] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1503944E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 3 */ /* 0x15039450: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039466; /* 0x15039453: je 0x15039466 */
L_15039455:
    PUSH32(esp, edx); /* 0x15039455: push edx */
    RECOMP_CALL(sub_150382D2); /* 0x15039456: call 0x150382d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503945B: pop ecx */
    /* test eax, eax */ /* 0x1503945C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394D0; /* 0x1503945E: je 0x150394d0 */
L_15039460:
    edx = MEM32(ebp + (-0x474)); /* 0x15039460: mov edx, dword ptr [ebp - 0x474] */
L_15039466:
    PUSH32(esp, edx); /* 0x15039466: push edx */
    RECOMP_ICALL(MEM32(0x150C00E0)); /* 0x15039467: call dword ptr [0x150c00e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503946D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503946F: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15039470: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150394D0; /* 0x15039472: jbe 0x150394d0 */
L_15039474:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x15039474: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039488; /* 0x1503947A: je 0x15039488 */
L_1503947C:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1503947C: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x15039482: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039487: pop ecx */
L_15039488:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039488: push -1 */
    PUSH32(esp, esi); /* 0x1503948A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503948B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1503948D: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x15039497: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x15039498: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503949F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x150394A0: push esi */
    PUSH32(esp, eax); /* 0x150394A1: push eax */
    PUSH32(esp, eax); /* 0x150394A2: push eax */
    PUSH32(esp, 0x7BCu); /* 0x150394A3: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x150394A8: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x150394AE: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_1509577E); /* 0x150394B4: call 0x1509577e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x47C)); /* 0x150394B9: mov ebx, dword ptr [ebp - 0x47c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150394BF: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x150394C2: mov dword ptr [edi + 0x24], eax */
    MEM32(edi + 0x20) = eax; /* 0x150394C5: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x28) = eax; /* 0x150394C8: mov dword ptr [edi + 0x28], eax */
    goto L_15039692; /* 0x150394CB: jmp 0x15039692 */
L_150394D0:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x150394D0: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150394E4; /* 0x150394D6: je 0x150394e4 */
L_150394D8:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150394D8: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x150394DE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150394E3: pop ecx */
L_150394E4:
    RECOMP_CALL(sub_15036430); /* 0x150394E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15039374; /* 0x150394E9: jmp 0x15039374 */
L_150394EE:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x150394EE: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039502; /* 0x150394F4: jne 0x15039502 */
L_150394F6:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x150394F6: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039502; /* 0x150394FC: jne 0x15039502 */
L_150394FE:
    eax = esi; /* 0x150394FE: mov eax, esi */
    goto L_15039574; /* 0x15039500: jmp 0x15039574 */
L_15039502:
    eax = ebp + (-0x478); /* 0x15039502: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039508: push eax */
    eax = ebp + (-0x458); /* 0x15039509: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x1503950F: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15039510: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039516: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039518: je 0x150396db */
L_1503951E:
    eax = ebp + (-0x21C); /* 0x1503951E: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039524: push eax */
    eax = ebp + (-0x478); /* 0x15039525: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503952B: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503952C: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039532: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039534: je 0x150396db */
L_1503953A:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1503953A: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039541: push -1 */
    PUSH32(esp, eax); /* 0x15039543: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15039544: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503954B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1503954C: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15039553: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15039554: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503955B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1503955C: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15039563: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15039564: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503956B: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503956C: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15039571: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15039574:
    MEM32(edi + 0x24) = eax; /* 0x15039574: mov dword ptr [edi + 0x24], eax */
    /* cmp MEM32(ebp + (-0x460)), esi */ /* 0x15039577: cmp dword ptr [ebp - 0x460], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039587; /* 0x1503957D: jne 0x15039587 */
L_1503957F:
    /* cmp MEM32(ebp + (-0x45C)), esi */ /* 0x1503957F: cmp dword ptr [ebp - 0x45c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150395F9; /* 0x15039585: je 0x150395f9 */
L_15039587:
    eax = ebp + (-0x478); /* 0x15039587: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503958D: push eax */
    eax = ebp + (-0x460); /* 0x1503958E: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x15039594: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15039595: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503959B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x1503959D: je 0x150396db */
L_150395A3:
    eax = ebp + (-0x21C); /* 0x150395A3: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150395A9: push eax */
    eax = ebp + (-0x478); /* 0x150395AA: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150395B0: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150395B1: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150395B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x150395B9: je 0x150396db */
L_150395BF:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x150395BF: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150395C6: push -1 */
    PUSH32(esp, eax); /* 0x150395C8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x150395C9: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x150395D0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x150395D1: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150395D8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x150395D9: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x150395E0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x150395E1: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x150395E8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x150395E9: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150395F0: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150395F1: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150395F6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150395F9:
    MEM32(edi + 0x20) = eax; /* 0x150395F9: mov dword ptr [edi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x468)), esi */ /* 0x150395FC: cmp dword ptr [ebp - 0x468], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039611; /* 0x15039602: jne 0x15039611 */
L_15039604:
    /* cmp MEM32(ebp + (-0x464)), esi */ /* 0x15039604: cmp dword ptr [ebp - 0x464], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039611; /* 0x1503960A: jne 0x15039611 */
L_1503960C:
    eax = MEM32(edi + 0x24); /* 0x1503960C: mov eax, dword ptr [edi + 0x24] */
    goto L_15039683; /* 0x1503960F: jmp 0x15039683 */
L_15039611:
    eax = ebp + (-0x478); /* 0x15039611: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039617: push eax */
    eax = ebp + (-0x468); /* 0x15039618: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1503961E: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503961F: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039627: je 0x150396db */
L_1503962D:
    eax = ebp + (-0x21C); /* 0x1503962D: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039633: push eax */
    eax = ebp + (-0x478); /* 0x15039634: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503963A: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503963B: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039641: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039643: je 0x150396db */
L_15039649:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15039649: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039650: push -1 */
    PUSH32(esp, eax); /* 0x15039652: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15039653: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503965A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1503965B: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15039662: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15039663: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503966A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1503966B: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15039672: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15039673: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503967A: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503967B: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15039680: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15039683:
    MEM32(edi + 0x28) = eax; /* 0x15039683: mov dword ptr [edi + 0x28], eax */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15039686: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1503968C: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15039692:
    PUSH32(esp, ebx); /* 0x15039692: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x15039693: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_150385C7); /* 0x15039699: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503969E: pop ecx */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1503969F: mov word ptr [edi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150396A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150396A5: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150396A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150396A8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x44C)); /* 0x150396A9: add eax, dword ptr [ebp - 0x44c] */
    _flag_k = FK_ADD;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150396AF: mov word ptr [edi + 8], cx */
    ecx = MEM32(ebp + (-0x450)); /* 0x150396B3: mov ecx, dword ptr [ebp - 0x450] */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150396B9: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x150396BB: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150396BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = ecx; /* 0x150396C0: mov dword ptr [edi + 0x1c], ecx */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x150396C3: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x150396C7: mov dword ptr [edi + 0xa], eax */
    eax = MEM32(ebp + (-0x480)); /* 0x150396CA: mov eax, dword ptr [ebp - 0x480] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150396D0: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x150396D1: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x150396D3: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_1503938F; /* 0x150396D6: jmp 0x1503938f */
L_150396DB:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150396DB: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150396E1: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150396E2: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150396E7: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150396E8: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150396EE: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150396F4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150396F4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150396F7:
    ecx = MEM32(ebp + (-0x4)); /* 0x150396F7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150396FA: pop edi */
    esi = POP32_VAL(esp); /* 0x150396FB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150396FC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150396FE: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150396FF: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039704: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039705: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039710u);

    goto L_15039710;
L_15039309:
    edi = edi; /* 0x15039309: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503930B: push ebp */
    ebp = esp; /* 0x1503930C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x1503930E: sub esp, 0x484 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15039314: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15039319: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503931B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1503931E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1503931F: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x47C)) = ebx; /* 0x15039322: mov dword ptr [ebp - 0x47c], ebx */
    PUSH32(esp, esi); /* 0x15039328: push esi */
    PUSH32(esp, edi); /* 0x15039329: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503932A: mov edi, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1503932D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039357; /* 0x1503932F: jne 0x15039357 */
L_15039331:
    RECOMP_CALL(sub_150363E0); /* 0x15039331: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15039336: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15039338: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1503933A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1503933F: push esi */
    PUSH32(esp, esi); /* 0x15039340: push esi */
    PUSH32(esp, esi); /* 0x15039341: push esi */
    PUSH32(esp, esi); /* 0x15039342: push esi */
    PUSH32(esp, esi); /* 0x15039343: push esi */
    MEM32(eax) = 0x16u; /* 0x15039344: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503934A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503934F: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150396F4; /* 0x15039352: jmp 0x150396f4 */
L_15039357:
    /* test edi, edi */ /* 0x15039357: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039331; /* 0x15039359: je 0x15039331 */
L_1503935B:
    PUSH32(esp, 0x15003EBCu); /* 0x1503935B: push 0x15003ebc */
    PUSH32(esp, ebx); /* 0x15039360: push ebx */
    RECOMP_CALL(sub_1508F770); /* 0x15039361: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039366: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15039367: pop ecx */
    /* test eax, eax */ /* 0x15039368: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039382; /* 0x1503936A: je 0x15039382 */
L_1503936C:
    RECOMP_CALL(sub_15036430); /* 0x1503936C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15039371: push 2 */
    ebx = POP32_VAL(esp); /* 0x15039373: pop ebx */
L_15039374:
    MEM32(eax) = ebx; /* 0x15039374: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_150363E0); /* 0x15039376: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1503937B: mov dword ptr [eax], ebx */
    goto L_150396F4; /* 0x1503937D: jmp 0x150396f4 */
L_15039382:
    PUSH32(esp, edi); /* 0x15039382: push edi */
    PUSH32(esp, ebx); /* 0x15039383: push ebx */
    RECOMP_CALL(sub_1503916D); /* 0x15039384: call 0x1503916d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039389: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1503938A: pop ecx */
    /* test eax, eax */ /* 0x1503938B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039396; /* 0x1503938D: je 0x15039396 */
L_1503938F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503938F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150396F7; /* 0x15039391: jmp 0x150396f7 */
L_15039396:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15039396: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x15039398: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150393BC; /* 0x1503939D: jne 0x150393bc */
L_1503939F:
    eax = (uint32_t)MEM16(ebx); /* 0x1503939F: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x150393A2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150393AD; /* 0x150393A5: je 0x150393ad */
L_150393A7:
    /* cmp MEM16(ebx + 0x4), LO16(esi) */ /* 0x150393A7: cmp word ptr [ebx + 4], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503936C; /* 0x150393AB: je 0x1503936c */
L_150393AD:
    PUSH32(esp, eax); /* 0x150393AD: push eax */
    RECOMP_CALL(sub_15032E60); /* 0x150393AE: call 0x15032e60 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x150393B3: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x150393B6: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x150393B7: sub eax, 0x60 */
    _flag_k = FK_CMP;
    goto L_150393C1; /* 0x150393BA: jmp 0x150393c1 */
L_150393BC:
    RECOMP_CALL(sub_15036820); /* 0x150393BC: call 0x15036820 */
    RECOMP_FLAGS_IN();
L_150393C1:
    MEM32(ebp + (-0x480)) = eax; /* 0x150393C1: mov dword ptr [ebp - 0x480], eax */
    eax = ebp + (-0x46C); /* 0x150393C7: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x150393CD: push eax */
    PUSH32(esp, ebx); /* 0x150393CE: push ebx */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x150393CF: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x470)) = eax; /* 0x150393D5: mov dword ptr [ebp - 0x470], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150393DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150394EE; /* 0x150393DE: jne 0x150394ee */
L_150393E4:
    PUSH32(esp, 0x15003EC4u); /* 0x150393E4: push 0x15003ec4 */
    PUSH32(esp, ebx); /* 0x150393E9: push ebx */
    MEM32(ebp + (-0x470)) = esi; /* 0x150393EA: mov dword ptr [ebp - 0x470], esi */
    RECOMP_CALL(sub_1508F770); /* 0x150393F0: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150393F5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150393F6: pop ecx */
    PUSH32(esp, 2); /* 0x150393F7: push 2 */
    ebx = POP32_VAL(esp); /* 0x150393F9: pop ebx */
    /* test eax, eax */ /* 0x150393FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394E4; /* 0x150393FC: je 0x150394e4 */
L_15039402:
    eax = ebp + (-0x470); /* 0x15039402: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x15039408: push eax */
    PUSH32(esp, 0x104u); /* 0x15039409: push 0x104 */
    PUSH32(esp, MEM32(ebp + (-0x47C))); /* 0x1503940E: push dword ptr [ebp - 0x47c] */
    eax = ebp + (-0x20C); /* 0x15039414: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x1503941A: push eax */
    RECOMP_CALL(sub_1503868A); /* 0x1503941B: call 0x1503868a */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15039420: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15039422: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = edx; /* 0x15039425: mov dword ptr [ebp - 0x474], edx */
    /* test edx, edx */ /* 0x1503942B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394D0; /* 0x1503942D: je 0x150394d0 */
L_15039433:
    ecx = edx; /* 0x15039433: mov ecx, edx */
    eax = ecx + 0x2; /* 0x15039435: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x484)) = eax; /* 0x15039438: mov dword ptr [ebp - 0x484], eax */
L_1503943E:
    SET_LO16(eax, MEM16(ecx)); /* 0x1503943E: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15039441: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15039443: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503943E; /* 0x15039446: jne 0x1503943e */
L_15039448:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x484)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x484)); /* 0x15039448: sub ecx, dword ptr [ebp - 0x484] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1503944E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, 3 */ /* 0x15039450: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039466; /* 0x15039453: je 0x15039466 */
L_15039455:
    PUSH32(esp, edx); /* 0x15039455: push edx */
    RECOMP_CALL(sub_150382D2); /* 0x15039456: call 0x150382d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503945B: pop ecx */
    /* test eax, eax */ /* 0x1503945C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150394D0; /* 0x1503945E: je 0x150394d0 */
L_15039460:
    edx = MEM32(ebp + (-0x474)); /* 0x15039460: mov edx, dword ptr [ebp - 0x474] */
L_15039466:
    PUSH32(esp, edx); /* 0x15039466: push edx */
    RECOMP_ICALL(MEM32(0x150C00E0)); /* 0x15039467: call dword ptr [0x150c00e0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503946D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503946F: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x15039470: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150394D0; /* 0x15039472: jbe 0x150394d0 */
L_15039474:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x15039474: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15039488; /* 0x1503947A: je 0x15039488 */
L_1503947C:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x1503947C: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x15039482: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039487: pop ecx */
L_15039488:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039488: push -1 */
    PUSH32(esp, esi); /* 0x1503948A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503948B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1503948D: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, esi); /* 0x15039497: push esi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x15039498: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503949F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x150394A0: push esi */
    PUSH32(esp, eax); /* 0x150394A1: push eax */
    PUSH32(esp, eax); /* 0x150394A2: push eax */
    PUSH32(esp, 0x7BCu); /* 0x150394A3: push 0x7bc */
    MEM32(ebp + (-0x450)) = esi; /* 0x150394A8: mov dword ptr [ebp - 0x450], esi */
    MEM32(ebp + (-0x44C)) = esi; /* 0x150394AE: mov dword ptr [ebp - 0x44c], esi */
    RECOMP_CALL(sub_1509577E); /* 0x150394B4: call 0x1509577e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x47C)); /* 0x150394B9: mov ebx, dword ptr [ebp - 0x47c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150394BF: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = eax; /* 0x150394C2: mov dword ptr [edi + 0x24], eax */
    MEM32(edi + 0x20) = eax; /* 0x150394C5: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x28) = eax; /* 0x150394C8: mov dword ptr [edi + 0x28], eax */
    goto L_15039692; /* 0x150394CB: jmp 0x15039692 */
L_150394D0:
    /* cmp MEM32(ebp + (-0x470)), esi */ /* 0x150394D0: cmp dword ptr [ebp - 0x470], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150394E4; /* 0x150394D6: je 0x150394e4 */
L_150394D8:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150394D8: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_15048840); /* 0x150394DE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150394E3: pop ecx */
L_150394E4:
    RECOMP_CALL(sub_15036430); /* 0x150394E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15039374; /* 0x150394E9: jmp 0x15039374 */
L_150394EE:
    /* cmp MEM32(ebp + (-0x458)), esi */ /* 0x150394EE: cmp dword ptr [ebp - 0x458], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039502; /* 0x150394F4: jne 0x15039502 */
L_150394F6:
    /* cmp MEM32(ebp + (-0x454)), esi */ /* 0x150394F6: cmp dword ptr [ebp - 0x454], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039502; /* 0x150394FC: jne 0x15039502 */
L_150394FE:
    eax = esi; /* 0x150394FE: mov eax, esi */
    goto L_15039574; /* 0x15039500: jmp 0x15039574 */
L_15039502:
    eax = ebp + (-0x478); /* 0x15039502: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039508: push eax */
    eax = ebp + (-0x458); /* 0x15039509: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x1503950F: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15039510: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039516: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039518: je 0x150396db */
L_1503951E:
    eax = ebp + (-0x21C); /* 0x1503951E: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039524: push eax */
    eax = ebp + (-0x478); /* 0x15039525: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503952B: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503952C: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039532: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039534: je 0x150396db */
L_1503953A:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x1503953A: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039541: push -1 */
    PUSH32(esp, eax); /* 0x15039543: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15039544: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503954B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1503954C: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15039553: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15039554: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503955B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1503955C: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15039563: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15039564: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503956B: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503956C: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15039571: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15039574:
    MEM32(edi + 0x24) = eax; /* 0x15039574: mov dword ptr [edi + 0x24], eax */
    /* cmp MEM32(ebp + (-0x460)), esi */ /* 0x15039577: cmp dword ptr [ebp - 0x460], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039587; /* 0x1503957D: jne 0x15039587 */
L_1503957F:
    /* cmp MEM32(ebp + (-0x45C)), esi */ /* 0x1503957F: cmp dword ptr [ebp - 0x45c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150395F9; /* 0x15039585: je 0x150395f9 */
L_15039587:
    eax = ebp + (-0x478); /* 0x15039587: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503958D: push eax */
    eax = ebp + (-0x460); /* 0x1503958E: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x15039594: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15039595: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1503959B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x1503959D: je 0x150396db */
L_150395A3:
    eax = ebp + (-0x21C); /* 0x150395A3: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150395A9: push eax */
    eax = ebp + (-0x478); /* 0x150395AA: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x150395B0: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x150395B1: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150395B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x150395B9: je 0x150396db */
L_150395BF:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x150395BF: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150395C6: push -1 */
    PUSH32(esp, eax); /* 0x150395C8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x150395C9: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x150395D0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x150395D1: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x150395D8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x150395D9: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x150395E0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x150395E1: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x150395E8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x150395E9: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x150395F0: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x150395F1: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150395F6: add esp, 0x1c */
    _flag_k = FK_ADD;
L_150395F9:
    MEM32(edi + 0x20) = eax; /* 0x150395F9: mov dword ptr [edi + 0x20], eax */
    /* cmp MEM32(ebp + (-0x468)), esi */ /* 0x150395FC: cmp dword ptr [ebp - 0x468], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039611; /* 0x15039602: jne 0x15039611 */
L_15039604:
    /* cmp MEM32(ebp + (-0x464)), esi */ /* 0x15039604: cmp dword ptr [ebp - 0x464], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15039611; /* 0x1503960A: jne 0x15039611 */
L_1503960C:
    eax = MEM32(edi + 0x24); /* 0x1503960C: mov eax, dword ptr [edi + 0x24] */
    goto L_15039683; /* 0x1503960F: jmp 0x15039683 */
L_15039611:
    eax = ebp + (-0x478); /* 0x15039611: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x15039617: push eax */
    eax = ebp + (-0x468); /* 0x15039618: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x1503961E: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x1503961F: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039627: je 0x150396db */
L_1503962D:
    eax = ebp + (-0x21C); /* 0x1503962D: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x15039633: push eax */
    eax = ebp + (-0x478); /* 0x15039634: lea eax, [ebp - 0x478] */
    PUSH32(esp, eax); /* 0x1503963A: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x1503963B: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039641: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150396DB; /* 0x15039643: je 0x150396db */
L_15039649:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x15039649: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15039650: push -1 */
    PUSH32(esp, eax); /* 0x15039652: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x15039653: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x1503965A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x1503965B: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x15039662: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x15039663: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x1503966A: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x1503966B: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x15039672: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x15039673: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x1503967A: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x1503967B: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15039680: add esp, 0x1c */
    _flag_k = FK_ADD;
L_15039683:
    MEM32(edi + 0x28) = eax; /* 0x15039683: mov dword ptr [edi + 0x28], eax */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x15039686: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1503968C: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_15039692:
    PUSH32(esp, ebx); /* 0x15039692: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x15039693: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_150385C7); /* 0x15039699: call 0x150385c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503969E: pop ecx */
    MEM16(edi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1503969F: mov word ptr [edi + 6], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150396A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150396A5: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150396A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150396A8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x44C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x44C)); /* 0x150396A9: add eax, dword ptr [ebp - 0x44c] */
    _flag_k = FK_ADD;
    MEM16(edi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x150396AF: mov word ptr [edi + 8], cx */
    ecx = MEM32(ebp + (-0x450)); /* 0x150396B3: mov ecx, dword ptr [ebp - 0x450] */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150396B9: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(edi + 0x18) = eax; /* 0x150396BB: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150396BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = ecx; /* 0x150396C0: mov dword ptr [edi + 0x1c], ecx */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x150396C3: mov word ptr [edi + 4], ax */
    MEM32(edi + 0xA) = eax; /* 0x150396C7: mov dword ptr [edi + 0xa], eax */
    eax = MEM32(ebp + (-0x480)); /* 0x150396CA: mov eax, dword ptr [ebp - 0x480] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150396D0: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x150396D1: mov dword ptr [edi], eax */
    MEM32(edi + 0x10) = eax; /* 0x150396D3: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_1503938F; /* 0x150396D6: jmp 0x1503938f */
L_150396DB:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150396DB: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150396E1: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x150396E2: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150396E7: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x150396E8: push dword ptr [ebp - 0x470] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x150396EE: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
L_150396F4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150396F4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150396F7:
    ecx = MEM32(ebp + (-0x4)); /* 0x150396F7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150396FA: pop edi */
    esi = POP32_VAL(esp); /* 0x150396FB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150396FC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150396FE: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150396FF: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039704: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15039705: ret  */
L_15039710:
    edi = edi; /* 0x15039710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039712: push ebp */
    ebp = esp; /* 0x15039713: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15039715: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15039309; /* 0x15039716: jmp 0x15039309 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15039730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039730u);

L_15039730:
    edi = edi; /* 0x15039730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039732: push ebp */
    ebp = esp; /* 0x15039733: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039735: push ecx */
    PUSH32(esp, ecx); /* 0x15039736: push ecx */
    PUSH32(esp, ebx); /* 0x15039737: push ebx */
    PUSH32(esp, esi); /* 0x15039738: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15039739: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1503973C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503973E: push edi */
    ecx = esi + 0x1; /* 0x1503973F: lea ecx, [esi + 1] */
L_15039742:
    SET_LO8(eax, MEM8(esi)); /* 0x15039742: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15039744: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15039745: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039742; /* 0x15039747: jne 0x15039742 */
L_15039749:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15039749: sub esi, ecx */
    _flag_k = FK_CMP;
    eax = esi + 0x1; /* 0x1503974B: lea eax, [esi + 1] */
    /* cmp eax, 1 */ /* 0x1503974E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1503975B; /* 0x15039751: jge 0x1503975b */
L_15039753:
    PUSH32(esp, 0x6Fu); /* 0x15039753: push 0x6f */
    ebx = POP32_VAL(esp); /* 0x15039755: pop ebx */
    goto L_15039848; /* 0x15039756: jmp 0x15039848 */
L_1503975B:
    eax = eax * 2 + 0x10; /* 0x1503975B: lea eax, [eax*2 + 0x10] */
    PUSH32(esp, eax); /* 0x15039762: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15039763: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15039766: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503976B: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1503976D: pop ecx */
    /* test edi, edi */ /* 0x1503976E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503977A; /* 0x15039770: jne 0x1503977a */
L_15039772:
    PUSH32(esp, 8); /* 0x15039772: push 8 */
    ebx = POP32_VAL(esp); /* 0x15039774: pop ebx */
    goto L_15039807; /* 0x15039775: jmp 0x15039807 */
L_1503977A:
    PUSH32(esp, ebx); /* 0x1503977A: push ebx */
    PUSH32(esp, 0x02000000u); /* 0x1503977B: push 0x2000000 */
    PUSH32(esp, 3); /* 0x15039780: push 3 */
    PUSH32(esp, ebx); /* 0x15039782: push ebx */
    PUSH32(esp, ebx); /* 0x15039783: push ebx */
    PUSH32(esp, 0x00010000u); /* 0x15039784: push 0x10000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15039789: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C00E4)); /* 0x1503978C: call dword ptr [0x150c00e4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x15039792: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15039795: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150397A4; /* 0x15039798: jne 0x150397a4 */
L_1503979A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503979A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150397A0: mov ebx, eax */
    goto L_150397FC; /* 0x150397A2: jmp 0x150397fc */
L_150397A4:
    eax = esi + esi; /* 0x150397A4: lea eax, [esi + esi] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150397A7: mov byte ptr [edi], bl */
    MEM32(edi + 0x8) = eax; /* 0x150397A9: mov dword ptr [edi + 8], eax */
    eax = esi + 0x1; /* 0x150397AC: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x150397AF: push eax */
    eax = edi + 0xC; /* 0x150397B0: lea eax, [edi + 0xc] */
    MEM32(edi + 0x4) = ebx; /* 0x150397B3: mov dword ptr [edi + 4], ebx */
    PUSH32(esp, eax); /* 0x150397B6: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150397B7: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150397B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x150397BC: push ebx */
    PUSH32(esp, ebx); /* 0x150397BD: push ebx */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x150397BE: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150397C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150397D4; /* 0x150397C6: jne 0x150397d4 */
L_150397C8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150397C8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150397CE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x150397D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150397F2; /* 0x150397D2: jne 0x150397f2 */
L_150397D4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x150397D4: push dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x150397D7: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x150397DA: push edi */
    PUSH32(esp, 3); /* 0x150397DB: push 3 */
    PUSH32(esp, esi); /* 0x150397DD: push esi */
    RECOMP_ICALL(MEM32(0x150C00D8)); /* 0x150397DE: call dword ptr [0x150c00d8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150397E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150397F5; /* 0x150397E6: jne 0x150397f5 */
L_150397E8:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150397E8: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150397EE: mov ebx, eax */
    goto L_150397F5; /* 0x150397F0: jmp 0x150397f5 */
L_150397F2:
    esi = MEM32(ebp + (-0x4)); /* 0x150397F2: mov esi, dword ptr [ebp - 4] */
L_150397F5:
    PUSH32(esp, esi); /* 0x150397F5: push esi */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x150397F6: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
L_150397FC:
    PUSH32(esp, edi); /* 0x150397FC: push edi */
    RECOMP_CALL(sub_15048840); /* 0x150397FD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15039802: pop ecx */
    /* test ebx, ebx */ /* 0x15039803: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039854; /* 0x15039805: je 0x15039854 */
L_15039807:
    PUSH32(esp, 0x15003E28u); /* 0x15039807: push 0x15003e28 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x1503980C: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039812: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039848; /* 0x15039814: je 0x15039848 */
L_15039816:
    PUSH32(esp, 0x15003ECCu); /* 0x15039816: push 0x15003ecc */
    PUSH32(esp, eax); /* 0x1503981B: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x1503981C: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15039822: mov esi, eax */
    /* test esi, esi */ /* 0x15039824: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039844; /* 0x15039826: je 0x15039844 */
L_15039828:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15039828: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1503982B: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503982D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15039830: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15039836: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15039838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15039854; /* 0x1503983A: jne 0x15039854 */
L_1503983C:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503983C: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15039842: mov ebx, eax */
L_15039844:
    /* test ebx, ebx */ /* 0x15039844: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15039854; /* 0x15039846: je 0x15039854 */
L_15039848:
    PUSH32(esp, ebx); /* 0x15039848: push ebx */
    RECOMP_CALL(sub_150363FB); /* 0x15039849: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503984E: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503984F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15039856; /* 0x15039852: jmp 0x15039856 */
L_15039854:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15039854: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15039856:
    edi = POP32_VAL(esp); /* 0x15039856: pop edi */
    esi = POP32_VAL(esp); /* 0x15039857: pop esi */
    ebx = POP32_VAL(esp); /* 0x15039858: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15039859: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503985A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15039870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15039870u);

L_15039870:
    edi = edi; /* 0x15039870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15039872: push ebp */
    ebp = esp; /* 0x15039873: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15039875: push ecx */
    PUSH32(esp, esi); /* 0x15039876: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15039877: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1503987A: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1503987C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039960); /* 0x1503987F: call 0x15039960 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1500101Cu; /* 0x15039884: mov dword ptr [esi], 0x1500101c */
    eax = esi; /* 0x1503988A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503988C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503988D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1503988E: ret 4 */
    RECOMP_REGS_OUT();
}
