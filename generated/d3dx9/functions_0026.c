#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120EDCD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDCD0u);

L_120EDCD0:
    edi = edi; /* 0x120EDCD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDCD2: push ebp */
    ebp = esp; /* 0x120EDCD3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120EDCD5: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDCD8: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDCDB: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDCDE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x120EDCE1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDCE3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDCE6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDCE9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDCEC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDCEF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EDA16); /* 0x120EDCF2: call 0x120eda16 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EDCF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120EDCF8: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120EDD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDD00u);

L_120EDD00:
    edi = edi; /* 0x120EDD00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDD02: push ebp */
    ebp = esp; /* 0x120EDD03: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120EDD05: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EDD06: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120EDD08: push esi */
    PUSH32(esp, edi); /* 0x120EDD09: push edi */
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x120EDD0A: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EDD5E; /* 0x120EDD0D: jbe 0x120edd5e */
L_120EDD0F:
    edx = MEM32(ebp + 0xC); /* 0x120EDD0F: mov edx, dword ptr [ebp + 0xc] */
L_120EDD12:
    eax = MEM32(edx); /* 0x120EDD12: mov eax, dword ptr [edx] */
    esi = MEM32(eax); /* 0x120EDD14: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EDD16: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x120EDD19: mov dword ptr [edx], eax */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x120EDD1B: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EDD67; /* 0x120EDD1E: jae 0x120edd67 */
L_120EDD20:
    /* test esi, esi */ /* 0x120EDD20: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDD42; /* 0x120EDD22: je 0x120edd42 */
L_120EDD24:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EDD24: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120EDD26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDD42; /* 0x120EDD28: je 0x120edd42 */
L_120EDD2A:
    eax = MEM32(edx); /* 0x120EDD2A: mov eax, dword ptr [edx] */
    ebx = MEM32(eax); /* 0x120EDD2C: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EDD2E: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x120EDD31: mov dword ptr [edx], eax */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x120EDD33: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EDD67; /* 0x120EDD36: jae 0x120edd67 */
L_120EDD38:
    /* cmp ebx, 9 */ /* 0x120EDD38: cmp ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDD67; /* 0x120EDD3B: je 0x120edd67 */
L_120EDD3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EDD3D: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x120EDD3E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EDD2A; /* 0x120EDD40: jb 0x120edd2a */
L_120EDD42:
    eax = MEM32(edx); /* 0x120EDD42: mov eax, dword ptr [edx] */
    esi = MEM32(eax); /* 0x120EDD44: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EDD46: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x120EDD49: mov dword ptr [edx], eax */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x120EDD4B: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EDD67; /* 0x120EDD4E: ja 0x120edd67 */
L_120EDD50:
    eax = esi + (-0x1); /* 0x120EDD50: lea eax, [esi - 1] */
    /* cmp eax, 8 */ /* 0x120EDD53: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EDD67; /* 0x120EDD56: ja 0x120edd67 */
L_120EDD58:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EDD58: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x120EDD59: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EDD12; /* 0x120EDD5C: jb 0x120edd12 */
L_120EDD5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EDD5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDD60:
    edi = POP32_VAL(esp); /* 0x120EDD60: pop edi */
    esi = POP32_VAL(esp); /* 0x120EDD61: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EDD62: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EDD63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EDD64: ret 0xc */
L_120EDD67:
    eax = 0x80004005u; /* 0x120EDD67: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_120EDD60; /* 0x120EDD6C: jmp 0x120edd60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EDD73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDD73u);

L_120EDD73:
    edi = edi; /* 0x120EDD73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDD75: push ebp */
    ebp = esp; /* 0x120EDD76: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120EDD78: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x120EDD7B: mov eax, dword ptr [edx] */
    ecx = MEM32(eax); /* 0x120EDD7D: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EDD7F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x120EDD82: mov dword ptr [edx], eax */
    /* test ecx, ecx */ /* 0x120EDD84: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDD8F; /* 0x120EDD86: je 0x120edd8f */
L_120EDD88:
    eax = 0x80004005u; /* 0x120EDD88: mov eax, 0x80004005 */
    goto L_120EDDB1; /* 0x120EDD8D: jmp 0x120eddb1 */
L_120EDD8F:
    ecx = MEM32(eax); /* 0x120EDD8F: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EDD91: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x120EDD94: mov dword ptr [edx], eax */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x120EDD96: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EDD88; /* 0x120EDD99: jae 0x120edd88 */
L_120EDD9B:
    /* cmp ecx, 7 */ /* 0x120EDD9B: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDDAF; /* 0x120EDD9E: je 0x120eddaf */
L_120EDDA0:
    /* cmp ecx, 4 */ /* 0x120EDDA0: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDDAF; /* 0x120EDDA3: je 0x120eddaf */
L_120EDDA5:
    /* cmp ecx, 5 */ /* 0x120EDDA5: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDDAF; /* 0x120EDDA8: je 0x120eddaf */
L_120EDDAA:
    /* cmp ecx, 6 */ /* 0x120EDDAA: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDD88; /* 0x120EDDAD: jne 0x120edd88 */
L_120EDDAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EDDAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDDB1:
    ebp = POP32_VAL(esp); /* 0x120EDDB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EDDB2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EDDBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDDBAu);

L_120EDDBA:
    edi = edi; /* 0x120EDDBA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDDBC: push ebp */
    ebp = esp; /* 0x120EDDBD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4Cu; /* 0x120EDDBF: sub esp, 0xc4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EDDC5: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EDDCA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EDDCC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EDDCF: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120EDDD2: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x840))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x840)) = MEM32(ebp + (-0x840)) & 0; /* 0x120EDDD5: and dword ptr [ebp - 0x840], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x824)) = eax; /* 0x120EDDDC: mov dword ptr [ebp - 0x824], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120EDDE2: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x830)) = eax; /* 0x120EDDE5: mov dword ptr [ebp - 0x830], eax */
    eax = MEM32(ebp + 0x20); /* 0x120EDDEB: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x834)) = eax; /* 0x120EDDEE: mov dword ptr [ebp - 0x834], eax */
    eax = MEM32(ebp + 0x24); /* 0x120EDDF4: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x838)) = eax; /* 0x120EDDF7: mov dword ptr [ebp - 0x838], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EDDFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x820)) = eax; /* 0x120EDDFF: mov dword ptr [ebp - 0x820], eax */
    eax = MEM32(ecx); /* 0x120EDE05: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x83C)) = eax; /* 0x120EDE07: mov dword ptr [ebp - 0x83c], eax */
    eax = MEM32(ebp + (-0x824)); /* 0x120EDE0D: mov eax, dword ptr [ebp - 0x824] */
    edx = MEM32(eax); /* 0x120EDE13: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EDE15: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x848)) = edx; /* 0x120EDE18: mov dword ptr [ebp - 0x848], edx */
    /* test edx, edx */ /* 0x120EDE1E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8F8; /* 0x120EDE20: je 0x120ee8f8 */
L_120EDE26:
    fp_push(1.0); /* 0x120EDE26: fld1  */
    PUSH32(esp, ebx); /* 0x120EDE28: push ebx */
    fp_push(0.0); /* 0x120EDE29: fldz  */
    PUSH32(esp, esi); /* 0x120EDE2B: push esi */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120EDE2C: fld qword ptr [0x12001758] */
    PUSH32(esp, edi); /* 0x120EDE32: push edi */
    goto L_120EDE37; /* 0x120EDE33: jmp 0x120ede37 */
L_120EDE35:
    fp_xch(1); /* 0x120EDE35: fxch st(1) */
L_120EDE37:
    esi = MEM32(eax); /* 0x120EDE37: mov esi, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x120EDE39: mov edx, dword ptr [eax + 4] */
    ebx = esi; /* 0x120EDE3C: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x000FFFFFu);
    ebx = ebx & 0x000FFFFFu; /* 0x120EDE3E: and ebx, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EDE44: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EDE46: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x84C)) = esi; /* 0x120EDE49: mov dword ptr [ebp - 0x84c], esi */
    MEM32(ebp + (-0x828)) = edx; /* 0x120EDE4F: mov dword ptr [ebp - 0x828], edx */
    MEM32(ebp + (-0x82C)) = ebx; /* 0x120EDE55: mov dword ptr [ebp - 0x82c], ebx */
    MEM32(ebp + (-0x844)) = edi; /* 0x120EDE5B: mov dword ptr [ebp - 0x844], edi */
    /* test edx, edx */ /* 0x120EDE61: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE00B; /* 0x120EDE63: je 0x120ee00b */
L_120EDE69:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EDE69: fstp st(1) */
    esi = edx; /* 0x120EDE6B: mov esi, edx */
L_120EDE6D:
    ebx = MEM32(eax); /* 0x120EDE6D: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EDE6F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EDE72: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x824)) = eax; /* 0x120EDE74: mov dword ptr [ebp - 0x824], eax */
    /* test ebx, ebx */ /* 0x120EDE7A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDF34; /* 0x120EDE7C: je 0x120edf34 */
L_120EDE82:
    esi = eax; /* 0x120EDE82: mov esi, eax */
L_120EDE84:
    edi = MEM32(esi); /* 0x120EDE84: mov edi, dword ptr [esi] */
    eax = MEM32(esi + 0x4); /* 0x120EDE86: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x120EDE89: add esi, 8 */
    _flag_k = FK_ADD;
    edx = eax + edx * 4; /* 0x120EDE8C: lea edx, [eax + edx*4] */
    /* cmp edi, 7 */ /* 0x120EDE8F: cmp edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDEAB; /* 0x120EDE92: jne 0x120edeab */
L_120EDE94:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x120EDE94: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(double*)ADDR(ebp + edx * 8 + (-0x804))); /* 0x120EDE9A: fld qword ptr [ebp + edx*8 - 0x804] */
    RECOMP_CALL(sub_121BF2F7); /* 0x120EDEA1: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120EDEA6: mov ecx, dword ptr [ebp + 0xc] */
    edx = eax; /* 0x120EDEA9: mov edx, eax */
L_120EDEAB:
    /* cmp edi, 1 */ /* 0x120EDEAB: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDEC0; /* 0x120EDEAE: jne 0x120edec0 */
L_120EDEB0:
    eax = edx; /* 0x120EDEB0: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EDEB2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x83C)); /* 0x120EDEB4: div dword ptr [ebp - 0x83c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    fp_push(*(double*)ADDR(ecx + edx * 8 + 0x4)); /* 0x120EDEBA: fld qword ptr [ecx + edx*8 + 4] */
    goto L_120EDF0B; /* 0x120EDEBE: jmp 0x120edf0b */
L_120EDEC0:
    /* cmp edi, 2 */ /* 0x120EDEC0: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDECD; /* 0x120EDEC3: jne 0x120edecd */
L_120EDEC5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    edx = edx & MEM32(ebp + 0x2C); /* 0x120EDEC5: and edx, dword ptr [ebp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x14); /* 0x120EDEC8: mov eax, dword ptr [ebp + 0x14] */
    goto L_120EDF08; /* 0x120EDECB: jmp 0x120edf08 */
L_120EDECD:
    /* cmp edi, 3 */ /* 0x120EDECD: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDEDA; /* 0x120EDED0: jne 0x120ededa */
L_120EDED2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    edx = edx & MEM32(ebp + 0x28); /* 0x120EDED2: and edx, dword ptr [ebp + 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x120EDED5: mov eax, dword ptr [ebp + 0x10] */
    goto L_120EDF08; /* 0x120EDED8: jmp 0x120edf08 */
L_120EDEDA:
    /* cmp edi, 4 */ /* 0x120EDEDA: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDEEA; /* 0x120EDEDD: jne 0x120edeea */
L_120EDEDF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    edx = edx & MEM32(ebp + 0x34); /* 0x120EDEDF: and edx, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x830)); /* 0x120EDEE2: mov eax, dword ptr [ebp - 0x830] */
    goto L_120EDF08; /* 0x120EDEE8: jmp 0x120edf08 */
L_120EDEEA:
    /* cmp edi, 5 */ /* 0x120EDEEA: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDEFA; /* 0x120EDEED: jne 0x120edefa */
L_120EDEEF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    edx = edx & MEM32(ebp + 0x3C); /* 0x120EDEEF: and edx, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x838)); /* 0x120EDEF2: mov eax, dword ptr [ebp - 0x838] */
    goto L_120EDF08; /* 0x120EDEF8: jmp 0x120edf08 */
L_120EDEFA:
    /* cmp edi, 6 */ /* 0x120EDEFA: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDF12; /* 0x120EDEFD: jne 0x120edf12 */
L_120EDEFF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    edx = edx & MEM32(ebp + 0x38); /* 0x120EDEFF: and edx, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x834)); /* 0x120EDF02: mov eax, dword ptr [ebp - 0x834] */
L_120EDF08:
    fp_push(*(double*)ADDR(eax + edx * 8)); /* 0x120EDF08: fld qword ptr [eax + edx*8] */
L_120EDF0B:
    RECOMP_CALL(sub_121BF2F7); /* 0x120EDF0B: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EDF10: mov edx, eax */
L_120EDF12:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EDF12: dec ebx */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + 0xC); /* 0x120EDF13: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EDE84; /* 0x120EDF16: jne 0x120ede84 */
L_120EDF1C:
    edi = MEM32(ebp + (-0x844)); /* 0x120EDF1C: mov edi, dword ptr [ebp - 0x844] */
    MEM32(ebp + (-0x824)) = esi; /* 0x120EDF22: mov dword ptr [ebp - 0x824], esi */
    esi = MEM32(ebp + (-0x828)); /* 0x120EDF28: mov esi, dword ptr [ebp - 0x828] */
    eax = MEM32(ebp + (-0x824)); /* 0x120EDF2E: mov eax, dword ptr [ebp - 0x824] */
L_120EDF34:
    ecx = MEM32(eax); /* 0x120EDF34: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EDF36: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x824)) = eax; /* 0x120EDF39: mov dword ptr [ebp - 0x824], eax */
    eax = MEM32(eax); /* 0x120EDF3F: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x824))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x824)) = MEM32(ebp + (-0x824)) + 4; /* 0x120EDF41: add dword ptr [ebp - 0x824], 4 */
    _flag_k = FK_ADD;
    eax = eax + edx * 4; /* 0x120EDF48: lea eax, [eax + edx*4] */
    /* cmp ecx, 7 */ /* 0x120EDF4B: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDF5E; /* 0x120EDF4E: jne 0x120edf5e */
L_120EDF50:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x120EDF50: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + eax * 8 + (-0x804); /* 0x120EDF55: lea eax, [ebp + eax*8 - 0x804] */
    goto L_120EDFD6; /* 0x120EDF5C: jmp 0x120edfd6 */
L_120EDF5E:
    /* cmp ecx, 2 */ /* 0x120EDF5E: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDF6B; /* 0x120EDF61: jne 0x120edf6b */
L_120EDF63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x2C));
    eax = eax & MEM32(ebp + 0x2C); /* 0x120EDF63: and eax, dword ptr [ebp + 0x2c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x120EDF66: mov ecx, dword ptr [ebp + 0x14] */
    goto L_120EDFD3; /* 0x120EDF69: jmp 0x120edfd3 */
L_120EDF6B:
    /* cmp ecx, 3 */ /* 0x120EDF6B: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDF78; /* 0x120EDF6E: jne 0x120edf78 */
L_120EDF70:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    eax = eax & MEM32(ebp + 0x28); /* 0x120EDF70: and eax, dword ptr [ebp + 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x120EDF73: mov ecx, dword ptr [ebp + 0x10] */
    goto L_120EDFD3; /* 0x120EDF76: jmp 0x120edfd3 */
L_120EDF78:
    /* cmp ecx, 1 */ /* 0x120EDF78: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDF95; /* 0x120EDF7B: jne 0x120edf95 */
L_120EDF7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EDF7D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x83C)); /* 0x120EDF7F: div dword ptr [ebp - 0x83c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0xC); /* 0x120EDF85: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx + edx * 8 + 0x4; /* 0x120EDF88: lea eax, [ecx + edx*8 + 4] */
    MEM32(ebp + edi * 4 + (-0xC4C)) = eax; /* 0x120EDF8C: mov dword ptr [ebp + edi*4 - 0xc4c], eax */
    goto L_120EDFE0; /* 0x120EDF93: jmp 0x120edfe0 */
L_120EDF95:
    /* cmp ecx, 9 */ /* 0x120EDF95: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDFA5; /* 0x120EDF98: jne 0x120edfa5 */
L_120EDF9A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    eax = eax & MEM32(ebp + 0x30); /* 0x120EDF9A: and eax, dword ptr [ebp + 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x18); /* 0x120EDF9D: mov ecx, dword ptr [ebp + 0x18] */
    eax = ecx + eax * 4; /* 0x120EDFA0: lea eax, [ecx + eax*4] */
    goto L_120EDFD6; /* 0x120EDFA3: jmp 0x120edfd6 */
L_120EDFA5:
    /* cmp ecx, 4 */ /* 0x120EDFA5: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDFB5; /* 0x120EDFA8: jne 0x120edfb5 */
L_120EDFAA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    eax = eax & MEM32(ebp + 0x34); /* 0x120EDFAA: and eax, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x830)); /* 0x120EDFAD: mov ecx, dword ptr [ebp - 0x830] */
    goto L_120EDFD3; /* 0x120EDFB3: jmp 0x120edfd3 */
L_120EDFB5:
    /* cmp ecx, 5 */ /* 0x120EDFB5: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDFC5; /* 0x120EDFB8: jne 0x120edfc5 */
L_120EDFBA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    eax = eax & MEM32(ebp + 0x3C); /* 0x120EDFBA: and eax, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x838)); /* 0x120EDFBD: mov ecx, dword ptr [ebp - 0x838] */
    goto L_120EDFD3; /* 0x120EDFC3: jmp 0x120edfd3 */
L_120EDFC5:
    /* cmp ecx, 6 */ /* 0x120EDFC5: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EDFDD; /* 0x120EDFC8: jne 0x120edfdd */
L_120EDFCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    eax = eax & MEM32(ebp + 0x38); /* 0x120EDFCA: and eax, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x834)); /* 0x120EDFCD: mov ecx, dword ptr [ebp - 0x834] */
L_120EDFD3:
    eax = ecx + eax * 8; /* 0x120EDFD3: lea eax, [ecx + eax*8] */
L_120EDFD6:
    MEM32(ebp + edi * 4 + (-0xC4C)) = eax; /* 0x120EDFD6: mov dword ptr [ebp + edi*4 - 0xc4c], eax */
L_120EDFDD:
    ecx = MEM32(ebp + 0xC); /* 0x120EDFDD: mov ecx, dword ptr [ebp + 0xc] */
L_120EDFE0:
    eax = MEM32(ebp + (-0x824)); /* 0x120EDFE0: mov eax, dword ptr [ebp - 0x824] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EDFE6: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x844)) = edi; /* 0x120EDFE7: mov dword ptr [ebp - 0x844], edi */
    /* cmp edi, esi */ /* 0x120EDFED: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EDE6D; /* 0x120EDFEF: jb 0x120ede6d */
L_120EDFF5:
    fp_push(0.0); /* 0x120EDFF5: fldz  */
    esi = MEM32(ebp + (-0x84C)); /* 0x120EDFF7: mov esi, dword ptr [ebp - 0x84c] */
    ebx = MEM32(ebp + (-0x82C)); /* 0x120EDFFD: mov ebx, dword ptr [ebp - 0x82c] */
    fp_xch(1); /* 0x120EE003: fxch st(1) */
    edx = MEM32(ebp + (-0x828)); /* 0x120EE005: mov edx, dword ptr [ebp - 0x828] */
L_120EE00B:
    PUSH32(esp, 4); /* 0x120EE00B: push 4 */
    edi = POP32_VAL(esp); /* 0x120EE00D: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120EE00E: add eax, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x120EE010: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120EE012: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x824)) = eax; /* 0x120EE014: mov dword ptr [ebp - 0x824], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x824))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x824)) = MEM32(ebp + (-0x824)) + edi; /* 0x120EE01A: add dword ptr [ebp - 0x824], edi */
    _flag_k = FK_ADD;
    eax = MEM32(eax); /* 0x120EE020: mov eax, dword ptr [eax] */
    /* cmp ecx, 7 */ /* 0x120EE022: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE035; /* 0x120EE025: jne 0x120ee035 */
L_120EE027:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x120EE027: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + eax * 8 + (-0x804); /* 0x120EE02C: lea edi, [ebp + eax*8 - 0x804] */
    goto L_120EE055; /* 0x120EE033: jmp 0x120ee055 */
L_120EE035:
    /* cmp ecx, edi */ /* 0x120EE035: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE044; /* 0x120EE037: jne 0x120ee044 */
L_120EE039:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    eax = eax & MEM32(ebp + 0x34); /* 0x120EE039: and eax, dword ptr [ebp + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x830)); /* 0x120EE03C: mov ecx, dword ptr [ebp - 0x830] */
    goto L_120EE052; /* 0x120EE042: jmp 0x120ee052 */
L_120EE044:
    /* cmp ecx, 5 */ /* 0x120EE044: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE05D; /* 0x120EE047: jne 0x120ee05d */
L_120EE049:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x3C));
    eax = eax & MEM32(ebp + 0x3C); /* 0x120EE049: and eax, dword ptr [ebp + 0x3c] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x838)); /* 0x120EE04C: mov ecx, dword ptr [ebp - 0x838] */
L_120EE052:
    edi = ecx + eax * 8; /* 0x120EE052: lea edi, [ecx + eax*8] */
L_120EE055:
    MEM32(ebp + (-0x820)) = edi; /* 0x120EE055: mov dword ptr [ebp - 0x820], edi */
    goto L_120EE073; /* 0x120EE05B: jmp 0x120ee073 */
L_120EE05D:
    /* cmp ecx, 6 */ /* 0x120EE05D: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE06D; /* 0x120EE060: jne 0x120ee06d */
L_120EE062:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x38));
    eax = eax & MEM32(ebp + 0x38); /* 0x120EE062: and eax, dword ptr [ebp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x834)); /* 0x120EE065: mov ecx, dword ptr [ebp - 0x834] */
    RECOMP_BACKEDGE();
    goto L_120EE052; /* 0x120EE06B: jmp 0x120ee052 */
L_120EE06D:
    edi = MEM32(ebp + (-0x820)); /* 0x120EE06D: mov edi, dword ptr [ebp - 0x820] */
L_120EE073:
    /* test esi, esi */ /* 0x120EE073: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EE27E; /* 0x120EE075: jns 0x120ee27e */
L_120EE07B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FF00000u);
    esi = esi & 0x7FF00000u; /* 0x120EE07B: and esi, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x20400000u; /* 0x120EE081: mov eax, 0x20400000 */
    /* cmp esi, eax */ /* 0x120EE086: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EE1D0; /* 0x120EE088: ja 0x120ee1d0 */
L_120EE08E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE1A4; /* 0x120EE08E: je 0x120ee1a4 */
L_120EE094:
    /* cmp esi, 0x20000000u */ /* 0x120EE094: cmp esi, 0x20000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE169; /* 0x120EE09A: je 0x120ee169 */
L_120EE0A0:
    /* cmp esi, 0x20100000u */ /* 0x120EE0A0: cmp esi, 0x20100000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE12E; /* 0x120EE0A6: je 0x120ee12e */
L_120EE0AC:
    /* cmp esi, 0x20200000u */ /* 0x120EE0AC: cmp esi, 0x20200000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE0F7; /* 0x120EE0B2: je 0x120ee0f7 */
L_120EE0B4:
    /* cmp esi, 0x20300000u */ /* 0x120EE0B4: cmp esi, 0x20300000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE0BA: jne 0x120ee6bd */
L_120EE0C0:
    /* test ebx, ebx */ /* 0x120EE0C0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE0C2: je 0x120ee6bd */
L_120EE0C8:
    edx = MEM32(ebp + (-0xC48)); /* 0x120EE0C8: mov edx, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE0CE: mov esi, dword ptr [ebp - 0xc4c] */
    ecx = edi; /* 0x120EE0D4: mov ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x120EE0D6: sub edx, edi */
    _flag_k = FK_CMP;
L_120EE0D8:
    fp_push(*(double*)ADDR(edx + ecx)); /* 0x120EE0D8: fld qword ptr [edx + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x120EE0DB: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE0DD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE0DF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EE0E8; /* 0x120EE0E2: jp 0x120ee0e8 */
L_120EE0E4:
    fp_push(_st[2]); /* 0x120EE0E4: fld st(2) */
    goto L_120EE0EA; /* 0x120EE0E6: jmp 0x120ee0ea */
L_120EE0E8:
    fp_push(_st[1]); /* 0x120EE0E8: fld st(1) */
L_120EE0EA:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x120EE0EA: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE0EC: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE0EF: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE0D8; /* 0x120EE0F0: jne 0x120ee0d8 */
L_120EE0F2:
    goto L_120EE6BD; /* 0x120EE0F2: jmp 0x120ee6bd */
L_120EE0F7:
    /* test ebx, ebx */ /* 0x120EE0F7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE0F9: je 0x120ee6bd */
L_120EE0FF:
    edx = MEM32(ebp + (-0xC48)); /* 0x120EE0FF: mov edx, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE105: mov esi, dword ptr [ebp - 0xc4c] */
    ecx = edi; /* 0x120EE10B: mov ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x120EE10D: sub edx, edi */
    _flag_k = FK_CMP;
L_120EE10F:
    fp_push(*(double*)ADDR(ecx + edx)); /* 0x120EE10F: fld qword ptr [ecx + edx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x120EE112: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE114: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE116: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EE11F; /* 0x120EE119: jne 0x120ee11f */
L_120EE11B:
    fp_push(_st[2]); /* 0x120EE11B: fld st(2) */
    goto L_120EE121; /* 0x120EE11D: jmp 0x120ee121 */
L_120EE11F:
    fp_push(_st[1]); /* 0x120EE11F: fld st(1) */
L_120EE121:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x120EE121: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE123: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE126: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE10F; /* 0x120EE127: jne 0x120ee10f */
L_120EE129:
    goto L_120EE6BD; /* 0x120EE129: jmp 0x120ee6bd */
L_120EE12E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE12E: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE130: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE132: je 0x120ee8cb */
L_120EE138:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE138: mov eax, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE13E: mov esi, dword ptr [ebp - 0xc4c] */
    edx = edi; /* 0x120EE144: mov edx, edi */
    ecx = eax; /* 0x120EE146: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE148: sub edx, eax */
    _flag_k = FK_CMP;
L_120EE14A:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE14A: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x120EE14C: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE14E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120EE150: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EE159; /* 0x120EE153: jp 0x120ee159 */
L_120EE155:
    fp_push(*(double*)ADDR(esi)); /* 0x120EE155: fld qword ptr [esi] */
    goto L_120EE15B; /* 0x120EE157: jmp 0x120ee15b */
L_120EE159:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE159: fld qword ptr [ecx] */
L_120EE15B:
    { double _v = fp_pop(); *(double*)ADDR(edx + ecx) = _v; } /* 0x120EE15B: fstp qword ptr [edx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE15E: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE161: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE14A; /* 0x120EE162: jne 0x120ee14a */
L_120EE164:
    goto L_120EE8CB; /* 0x120EE164: jmp 0x120ee8cb */
L_120EE169:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE169: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE16B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE16D: je 0x120ee8cb */
L_120EE173:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE173: mov eax, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE179: mov esi, dword ptr [ebp - 0xc4c] */
    edx = edi; /* 0x120EE17F: mov edx, edi */
    ecx = eax; /* 0x120EE181: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE183: sub edx, eax */
    _flag_k = FK_CMP;
L_120EE185:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE185: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x120EE187: fcomp qword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE189: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE18B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EE194; /* 0x120EE18E: jne 0x120ee194 */
L_120EE190:
    fp_push(*(double*)ADDR(esi)); /* 0x120EE190: fld qword ptr [esi] */
    goto L_120EE196; /* 0x120EE192: jmp 0x120ee196 */
L_120EE194:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE194: fld qword ptr [ecx] */
L_120EE196:
    { double _v = fp_pop(); *(double*)ADDR(ecx + edx) = _v; } /* 0x120EE196: fstp qword ptr [ecx + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE199: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE19C: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE185; /* 0x120EE19D: jne 0x120ee185 */
L_120EE19F:
    goto L_120EE8CB; /* 0x120EE19F: jmp 0x120ee8cb */
L_120EE1A4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE1A4: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE1A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE1A8: je 0x120ee8cb */
L_120EE1AE:
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE1AE: mov ecx, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE1B4: mov esi, dword ptr [ebp - 0xc4c] */
    eax = edi; /* 0x120EE1BA: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120EE1BC: sub ecx, edi */
    _flag_k = FK_CMP;
L_120EE1BE:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x120EE1BE: fld qword ptr [eax + ecx] */
    _st[0] += *(double*)ADDR(esi); /* 0x120EE1C1: fadd qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE1C3: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE1C5: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE1C8: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE1BE; /* 0x120EE1C9: jne 0x120ee1be */
L_120EE1CB:
    goto L_120EE8CB; /* 0x120EE1CB: jmp 0x120ee8cb */
L_120EE1D0:
    /* cmp esi, 0x20500000u */ /* 0x120EE1D0: cmp esi, 0x20500000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE252; /* 0x120EE1D6: je 0x120ee252 */
L_120EE1D8:
    /* cmp esi, 0x20600000u */ /* 0x120EE1D8: cmp esi, 0x20600000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE219; /* 0x120EE1DE: je 0x120ee219 */
L_120EE1E0:
    /* cmp esi, 0x50000000u */ /* 0x120EE1E0: cmp esi, 0x50000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE1E6: jne 0x120ee6bd */
L_120EE1EC:
    fp_xch(1); /* 0x120EE1EC: fxch st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EE1EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE1F0: fstp qword ptr [edi] */
    /* test ebx, ebx */ /* 0x120EE1F2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE1F4: je 0x120ee8cb */
L_120EE1FA:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE1FA: mov esi, dword ptr [ebp - 0xc4c] */
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE200: mov ecx, dword ptr [ebp - 0xc48] */
L_120EE206:
    fp_push(*(double*)ADDR(ecx + eax * 8)); /* 0x120EE206: fld qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EE209: inc eax */
    _flag_k = FK_INC;
    _st[0] *= *(double*)ADDR(esi); /* 0x120EE20A: fmul qword ptr [esi] */
    _st[0] += *(double*)ADDR(edi); /* 0x120EE20C: fadd qword ptr [edi] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE20E: fstp qword ptr [edi] */
    /* cmp eax, ebx */ /* 0x120EE210: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE206; /* 0x120EE212: jb 0x120ee206 */
L_120EE214:
    goto L_120EE8CB; /* 0x120EE214: jmp 0x120ee8cb */
L_120EE219:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE219: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE21B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE21D: je 0x120ee8cb */
L_120EE223:
    esi = MEM32(ebp + (-0xC48)); /* 0x120EE223: mov esi, dword ptr [ebp - 0xc48] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE229: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE22B: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE231: fstp st(0) */
L_120EE233:
    eax = MEM32(ebp + (-0xC4C)); /* 0x120EE233: mov eax, dword ptr [ebp - 0xc4c] */
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE239: fld qword ptr [edi + esi] */
    fp_push(*(double*)ADDR(eax)); /* 0x120EE23C: fld qword ptr [eax] */
    fp_xch(1); /* 0x120EE23E: fxch st(1) */
    RECOMP_CALL(sub_121BF4DC); /* 0x120EE240: call 0x121bf4dc */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE245: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE247: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE24A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE233; /* 0x120EE24B: jne 0x120ee233 */
L_120EE24D:
    goto L_120EE415; /* 0x120EE24D: jmp 0x120ee415 */
L_120EE252:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE252: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE254: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE256: je 0x120ee8cb */
L_120EE25C:
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE25C: mov ecx, dword ptr [ebp - 0xc48] */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE262: mov esi, dword ptr [ebp - 0xc4c] */
    eax = edi; /* 0x120EE268: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120EE26A: sub ecx, edi */
    _flag_k = FK_CMP;
L_120EE26C:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x120EE26C: fld qword ptr [eax + ecx] */
    _st[0] *= *(double*)ADDR(esi); /* 0x120EE26F: fmul qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE271: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE273: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE276: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE26C; /* 0x120EE277: jne 0x120ee26c */
L_120EE279:
    goto L_120EE8CB; /* 0x120EE279: jmp 0x120ee8cb */
L_120EE27E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FF00000u);
    esi = esi & 0x7FF00000u; /* 0x120EE27E: and esi, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x20000000u; /* 0x120EE284: mov eax, 0x20000000 */
    /* cmp esi, eax */ /* 0x120EE289: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EE5AE; /* 0x120EE28B: ja 0x120ee5ae */
L_120EE291:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE56F; /* 0x120EE291: je 0x120ee56f */
L_120EE297:
    eax = 0x10700000u; /* 0x120EE297: mov eax, 0x10700000 */
    /* cmp esi, eax */ /* 0x120EE29C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EE458; /* 0x120EE29E: ja 0x120ee458 */
L_120EE2A4:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE422; /* 0x120EE2A4: je 0x120ee422 */
L_120EE2AA:
    /* cmp esi, 0x10000000u */ /* 0x120EE2AA: cmp esi, 0x10000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE3FA; /* 0x120EE2B0: je 0x120ee3fa */
L_120EE2B6:
    /* cmp esi, 0x10100000u */ /* 0x120EE2B6: cmp esi, 0x10100000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE3D4; /* 0x120EE2BC: je 0x120ee3d4 */
L_120EE2C2:
    /* cmp esi, 0x10300000u */ /* 0x120EE2C2: cmp esi, 0x10300000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE3AE; /* 0x120EE2C8: je 0x120ee3ae */
L_120EE2CE:
    /* cmp esi, 0x10400000u */ /* 0x120EE2CE: cmp esi, 0x10400000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE37B; /* 0x120EE2D4: je 0x120ee37b */
L_120EE2DA:
    /* cmp esi, 0x10500000u */ /* 0x120EE2DA: cmp esi, 0x10500000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE346; /* 0x120EE2E0: je 0x120ee346 */
L_120EE2E2:
    /* cmp esi, 0x10600000u */ /* 0x120EE2E2: cmp esi, 0x10600000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10600000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE2E8: jne 0x120ee6bd */
L_120EE2EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EE2EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120EE2F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE2F2: je 0x120ee6bd */
L_120EE2F8:
    eax = MEM32(ebp + (-0x820)); /* 0x120EE2F8: mov eax, dword ptr [ebp - 0x820] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x120EE2FE: fstp st(2) */
    ebx = MEM32(ebp + (-0xC4C)); /* 0x120EE300: mov ebx, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE306: fstp st(1) */
    esi = eax; /* 0x120EE308: mov esi, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x120EE30A: sub ebx, eax */
    _flag_k = FK_CMP;
L_120EE30C:
    eax = MEM32(ebp + edi * 4 + (-0xC4C)); /* 0x120EE30C: mov eax, dword ptr [ebp + edi*4 - 0xc4c] */
    fp_push(*(double*)ADDR(eax)); /* 0x120EE313: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120EE315: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE317: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120EE319: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120EE336; /* 0x120EE31C: jnp 0x120ee336 */
L_120EE31E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE31E: fstp st(0) */
    fp_push(*(double*)ADDR(ebx + esi)); /* 0x120EE320: fld qword ptr [ebx + esi] */
    _st[0] = fabs(_st[0]); /* 0x120EE323: fabs  */
    RECOMP_CALL(sub_121BF5AA); /* 0x120EE325: call 0x121bf5aa */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12008C50); /* 0x120EE32A: fmul qword ptr [0x12008c50] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x120EE330: fstp qword ptr [esi] */
    fp_push(0.0); /* 0x120EE332: fldz  */
    goto L_120EE338; /* 0x120EE334: jmp 0x120ee338 */
L_120EE336:
    *(double*)ADDR(esi) = _st[0]; /* 0x120EE336: fst qword ptr [esi] */
L_120EE338:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EE338: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x120EE339: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x82C)) */ /* 0x120EE33C: cmp edi, dword ptr [ebp - 0x82c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x82C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE30C; /* 0x120EE342: jb 0x120ee30c */
L_120EE344:
    goto L_120EE374; /* 0x120EE344: jmp 0x120ee374 */
L_120EE346:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE346: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE348: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE34A: je 0x120ee8cb */
L_120EE350:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE350: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE356: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE358: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
L_120EE35E:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE35E: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF428); /* 0x120EE361: call 0x121bf428 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE366: fstp qword ptr [edi] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120EE368: fld qword ptr [0x12001758] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE36E: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE371: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE35E; /* 0x120EE372: jne 0x120ee35e */
L_120EE374:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE374: fstp st(0) */
    goto L_120EE415; /* 0x120EE376: jmp 0x120ee415 */
L_120EE37B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE37B: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE37D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE37F: je 0x120ee8cb */
L_120EE385:
    eax = MEM32(ebp + (-0xC4C)); /* 0x120EE385: mov eax, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE38B: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE38D: fstp st(0) */
    esi = eax; /* 0x120EE38F: mov esi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120EE391: sub edi, eax */
    _flag_k = FK_CMP;
L_120EE393:
    fp_push(*(double*)ADDR(esi)); /* 0x120EE393: fld qword ptr [esi] */
    PUSH32(esp, ecx); /* 0x120EE395: push ecx */
    PUSH32(esp, ecx); /* 0x120EE396: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x120EE397: fstp qword ptr [esp] */
    RECOMP_CALL(sub_121BF660); /* 0x120EE39A: call 0x121bf660 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x120EE39F: fsubr qword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x120EE3A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EE3A2: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi) = _v; } /* 0x120EE3A3: fstp qword ptr [edi + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x120EE3A6: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE3A9: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE393; /* 0x120EE3AA: jne 0x120ee393 */
L_120EE3AC:
    goto L_120EE415; /* 0x120EE3AC: jmp 0x120ee415 */
L_120EE3AE:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE3AE: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE3B0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE3B2: je 0x120ee8cb */
L_120EE3B8:
    ecx = MEM32(ebp + (-0xC4C)); /* 0x120EE3B8: mov ecx, dword ptr [ebp - 0xc4c] */
    eax = edi; /* 0x120EE3BE: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120EE3C0: sub ecx, edi */
    _flag_k = FK_CMP;
L_120EE3C2:
    fp_push(_st[1]); /* 0x120EE3C2: fld st(1) */
    _st[0] /= *(double*)ADDR(eax + ecx); /* 0x120EE3C4: fdiv qword ptr [eax + ecx] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE3C7: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE3C9: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE3CC: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE3C2; /* 0x120EE3CD: jne 0x120ee3c2 */
L_120EE3CF:
    goto L_120EE8CB; /* 0x120EE3CF: jmp 0x120ee8cb */
L_120EE3D4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE3D4: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE3D6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE3D8: je 0x120ee8cb */
L_120EE3DE:
    ecx = MEM32(ebp + (-0xC4C)); /* 0x120EE3DE: mov ecx, dword ptr [ebp - 0xc4c] */
    eax = edi; /* 0x120EE3E4: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120EE3E6: sub ecx, edi */
    _flag_k = FK_CMP;
L_120EE3E8:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x120EE3E8: fld qword ptr [eax + ecx] */
    _st[0] = -_st[0]; /* 0x120EE3EB: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE3ED: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE3EF: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE3F2: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE3E8; /* 0x120EE3F3: jne 0x120ee3e8 */
L_120EE3F5:
    goto L_120EE8CB; /* 0x120EE3F5: jmp 0x120ee8cb */
L_120EE3FA:
    eax = ebx; /* 0x120EE3FA: mov eax, ebx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE3FC: fstp st(1) */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x120EE3FE: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x120EE3FE: shl eax, 3 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE401: fstp st(1) */
    PUSH32(esp, eax); /* 0x120EE403: push eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE404: fstp st(0) */
    PUSH32(esp, MEM32(ebp + (-0xC4C))); /* 0x120EE406: push dword ptr [ebp - 0xc4c] */
    PUSH32(esp, edi); /* 0x120EE40C: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x120EE40D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EE412: add esp, 0xc */
    _flag_k = FK_ADD;
L_120EE415:
    fp_push(1.0); /* 0x120EE415: fld1  */
L_120EE417:
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120EE417: fld qword ptr [0x12001758] */
    goto L_120EE8CB; /* 0x120EE41D: jmp 0x120ee8cb */
L_120EE422:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE422: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE424: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE426: je 0x120ee8cb */
L_120EE42C:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE42C: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE432: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE434: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
L_120EE43A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE43A: fstp st(0) */
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE43C: fld qword ptr [edi + esi] */
    _st[0] = fabs(_st[0]); /* 0x120EE43F: fabs  */
    RECOMP_CALL(sub_121BF44C); /* 0x120EE441: call 0x121bf44c */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x120EE446: fld1  */
    fp_push(_st[0]); /* 0x120EE448: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x120EE44A: fdivrp st(2) */
    fp_xch(1); /* 0x120EE44C: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE44E: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE450: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE453: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE43A; /* 0x120EE454: jne 0x120ee43a */
L_120EE456:
    RECOMP_BACKEDGE();
    goto L_120EE417; /* 0x120EE456: jmp 0x120ee417 */
L_120EE458:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE458: fstp st(1) */
    /* cmp esi, 0x10800000u */ /* 0x120EE45A: cmp esi, 0x10800000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE542; /* 0x120EE460: je 0x120ee542 */
L_120EE466:
    /* cmp esi, 0x10900000u */ /* 0x120EE466: cmp esi, 0x10900000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10900000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE515; /* 0x120EE46C: je 0x120ee515 */
L_120EE472:
    /* cmp esi, 0x10A00000u */ /* 0x120EE472: cmp esi, 0x10a00000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10A00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE4E8; /* 0x120EE478: je 0x120ee4e8 */
L_120EE47A:
    /* cmp esi, 0x10B00000u */ /* 0x120EE47A: cmp esi, 0x10b00000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10B00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE4BB; /* 0x120EE480: je 0x120ee4bb */
L_120EE482:
    /* cmp esi, 0x10C00000u */ /* 0x120EE482: cmp esi, 0x10c00000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10C00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE488: jne 0x120ee8cb */
L_120EE48E:
    /* test ebx, ebx */ /* 0x120EE48E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE490: je 0x120ee8cb */
L_120EE496:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE496: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE49C: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE49E: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE4A4: fstp st(0) */
L_120EE4A6:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE4A6: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF518); /* 0x120EE4A9: call 0x121bf518 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE4AE: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE4B0: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE4B3: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE4A6; /* 0x120EE4B4: jne 0x120ee4a6 */
L_120EE4B6:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE4B6: jmp 0x120ee415 */
L_120EE4BB:
    /* test ebx, ebx */ /* 0x120EE4BB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE4BD: je 0x120ee8cb */
L_120EE4C3:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE4C3: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE4C9: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE4CB: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE4D1: fstp st(0) */
L_120EE4D3:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE4D3: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF4D0); /* 0x120EE4D6: call 0x121bf4d0 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE4DB: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE4DD: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE4E0: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE4D3; /* 0x120EE4E1: jne 0x120ee4d3 */
L_120EE4E3:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE4E3: jmp 0x120ee415 */
L_120EE4E8:
    /* test ebx, ebx */ /* 0x120EE4E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE4EA: je 0x120ee8cb */
L_120EE4F0:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE4F0: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE4F6: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE4F8: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE4FE: fstp st(0) */
L_120EE500:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE500: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF500); /* 0x120EE503: call 0x121bf500 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE508: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE50A: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE50D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE500; /* 0x120EE50E: jne 0x120ee500 */
L_120EE510:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE510: jmp 0x120ee415 */
L_120EE515:
    /* test ebx, ebx */ /* 0x120EE515: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE517: je 0x120ee8cb */
L_120EE51D:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE51D: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE523: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE525: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE52B: fstp st(0) */
L_120EE52D:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE52D: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF50C); /* 0x120EE530: call 0x121bf50c */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE535: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE537: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE53A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE52D; /* 0x120EE53B: jne 0x120ee52d */
L_120EE53D:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE53D: jmp 0x120ee415 */
L_120EE542:
    /* test ebx, ebx */ /* 0x120EE542: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE544: je 0x120ee8cb */
L_120EE54A:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE54A: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE550: fstp st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x820)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x820)); /* 0x120EE552: sub esi, dword ptr [ebp - 0x820] */
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE558: fstp st(0) */
L_120EE55A:
    fp_push(*(double*)ADDR(edi + esi)); /* 0x120EE55A: fld qword ptr [edi + esi] */
    RECOMP_CALL(sub_121BF4E8); /* 0x120EE55D: call 0x121bf4e8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE562: fstp qword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x120EE564: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE567: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE55A; /* 0x120EE568: jne 0x120ee55a */
L_120EE56A:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE56A: jmp 0x120ee415 */
L_120EE56F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE56F: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE571: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE573: je 0x120ee8cb */
L_120EE579:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE579: mov eax, dword ptr [ebp - 0xc48] */
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE57F: mov edx, dword ptr [ebp - 0xc4c] */
    esi = edi; /* 0x120EE585: mov esi, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE587: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x120EE589: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE58B: sub esi, eax */
    _flag_k = FK_CMP;
L_120EE58D:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE58D: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + ecx)); /* 0x120EE58F: fcomp qword ptr [edx + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE592: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE594: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EE59E; /* 0x120EE597: jne 0x120ee59e */
L_120EE599:
    fp_push(*(double*)ADDR(edx + ecx)); /* 0x120EE599: fld qword ptr [edx + ecx] */
    goto L_120EE5A0; /* 0x120EE59C: jmp 0x120ee5a0 */
L_120EE59E:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE59E: fld qword ptr [ecx] */
L_120EE5A0:
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi) = _v; } /* 0x120EE5A0: fstp qword ptr [ecx + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE5A3: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE5A6: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE58D; /* 0x120EE5A7: jne 0x120ee58d */
L_120EE5A9:
    goto L_120EE8CB; /* 0x120EE5A9: jmp 0x120ee8cb */
L_120EE5AE:
    eax = 0x20600000u; /* 0x120EE5AE: mov eax, 0x20600000 */
    /* cmp esi, eax */ /* 0x120EE5B3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EE740; /* 0x120EE5B5: ja 0x120ee740 */
L_120EE5BB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE703; /* 0x120EE5BB: je 0x120ee703 */
L_120EE5C1:
    /* cmp esi, 0x20100000u */ /* 0x120EE5C1: cmp esi, 0x20100000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE6C4; /* 0x120EE5C7: je 0x120ee6c4 */
L_120EE5CD:
    /* cmp esi, 0x20200000u */ /* 0x120EE5CD: cmp esi, 0x20200000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE68A; /* 0x120EE5D3: je 0x120ee68a */
L_120EE5D9:
    /* cmp esi, 0x20300000u */ /* 0x120EE5D9: cmp esi, 0x20300000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20300000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE655; /* 0x120EE5DF: je 0x120ee655 */
L_120EE5E1:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE5E1: fstp st(1) */
    /* cmp esi, 0x20400000u */ /* 0x120EE5E3: cmp esi, 0x20400000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE626; /* 0x120EE5E9: je 0x120ee626 */
L_120EE5EB:
    /* cmp esi, 0x20500000u */ /* 0x120EE5EB: cmp esi, 0x20500000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20500000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE5F1: jne 0x120ee8cb */
L_120EE5F7:
    /* test ebx, ebx */ /* 0x120EE5F7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE5F9: je 0x120ee8cb */
L_120EE5FF:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE5FF: mov esi, dword ptr [ebp - 0xc4c] */
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE605: mov ecx, dword ptr [ebp - 0xc48] */
    edx = edi; /* 0x120EE60B: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120EE60D: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = esi; /* 0x120EE60F: mov eax, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x120EE611: sub edx, esi */
    _flag_k = FK_CMP;
L_120EE613:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x120EE613: fld qword ptr [ecx + eax] */
    _st[0] *= *(double*)ADDR(eax); /* 0x120EE616: fmul qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx) = _v; } /* 0x120EE618: fstp qword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE61B: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE61E: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE613; /* 0x120EE61F: jne 0x120ee613 */
L_120EE621:
    goto L_120EE8CB; /* 0x120EE621: jmp 0x120ee8cb */
L_120EE626:
    /* test ebx, ebx */ /* 0x120EE626: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE628: je 0x120ee8cb */
L_120EE62E:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE62E: mov esi, dword ptr [ebp - 0xc4c] */
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE634: mov ecx, dword ptr [ebp - 0xc48] */
    edx = edi; /* 0x120EE63A: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120EE63C: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = esi; /* 0x120EE63E: mov eax, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x120EE640: sub edx, esi */
    _flag_k = FK_CMP;
L_120EE642:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x120EE642: fld qword ptr [ecx + eax] */
    _st[0] += *(double*)ADDR(eax); /* 0x120EE645: fadd qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(edx + eax) = _v; } /* 0x120EE647: fstp qword ptr [edx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE64A: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE64D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE642; /* 0x120EE64E: jne 0x120ee642 */
L_120EE650:
    goto L_120EE8CB; /* 0x120EE650: jmp 0x120ee8cb */
L_120EE655:
    /* test ebx, ebx */ /* 0x120EE655: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE657: je 0x120ee6bd */
L_120EE659:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE659: mov eax, dword ptr [ebp - 0xc48] */
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE65F: mov edx, dword ptr [ebp - 0xc4c] */
    esi = edi; /* 0x120EE665: mov esi, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE667: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x120EE669: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE66B: sub esi, eax */
    _flag_k = FK_CMP;
L_120EE66D:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE66D: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + ecx)); /* 0x120EE66F: fcomp qword ptr [edx + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE672: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE674: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EE67D; /* 0x120EE677: jp 0x120ee67d */
L_120EE679:
    fp_push(_st[2]); /* 0x120EE679: fld st(2) */
    goto L_120EE67F; /* 0x120EE67B: jmp 0x120ee67f */
L_120EE67D:
    fp_push(_st[1]); /* 0x120EE67D: fld st(1) */
L_120EE67F:
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx) = _v; } /* 0x120EE67F: fstp qword ptr [esi + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE682: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE685: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE66D; /* 0x120EE686: jne 0x120ee66d */
L_120EE688:
    goto L_120EE6BD; /* 0x120EE688: jmp 0x120ee6bd */
L_120EE68A:
    /* test ebx, ebx */ /* 0x120EE68A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE68C: je 0x120ee6bd */
L_120EE68E:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE68E: mov eax, dword ptr [ebp - 0xc48] */
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE694: mov edx, dword ptr [ebp - 0xc4c] */
    esi = edi; /* 0x120EE69A: mov esi, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE69C: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x120EE69E: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE6A0: sub esi, eax */
    _flag_k = FK_CMP;
L_120EE6A2:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE6A2: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + ecx)); /* 0x120EE6A4: fcomp qword ptr [edx + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE6A7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE6A9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EE6B2; /* 0x120EE6AC: jne 0x120ee6b2 */
L_120EE6AE:
    fp_push(_st[2]); /* 0x120EE6AE: fld st(2) */
    goto L_120EE6B4; /* 0x120EE6B0: jmp 0x120ee6b4 */
L_120EE6B2:
    fp_push(_st[1]); /* 0x120EE6B2: fld st(1) */
L_120EE6B4:
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx) = _v; } /* 0x120EE6B4: fstp qword ptr [esi + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE6B7: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE6BA: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE6A2; /* 0x120EE6BB: jne 0x120ee6a2 */
L_120EE6BD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE6BD: fstp st(1) */
    goto L_120EE8CB; /* 0x120EE6BF: jmp 0x120ee8cb */
L_120EE6C4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE6C4: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE6C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE6C8: je 0x120ee8cb */
L_120EE6CE:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE6CE: mov eax, dword ptr [ebp - 0xc48] */
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE6D4: mov edx, dword ptr [ebp - 0xc4c] */
    esi = edi; /* 0x120EE6DA: mov esi, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE6DC: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x120EE6DE: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE6E0: sub esi, eax */
    _flag_k = FK_CMP;
L_120EE6E2:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE6E2: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + ecx)); /* 0x120EE6E4: fcomp qword ptr [edx + ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE6E7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x120EE6E9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EE6F3; /* 0x120EE6EC: jp 0x120ee6f3 */
L_120EE6EE:
    fp_push(*(double*)ADDR(edx + ecx)); /* 0x120EE6EE: fld qword ptr [edx + ecx] */
    goto L_120EE6F5; /* 0x120EE6F1: jmp 0x120ee6f5 */
L_120EE6F3:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE6F3: fld qword ptr [ecx] */
L_120EE6F5:
    { double _v = fp_pop(); *(double*)ADDR(esi + ecx) = _v; } /* 0x120EE6F5: fstp qword ptr [esi + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE6F8: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE6FB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE6E2; /* 0x120EE6FC: jne 0x120ee6e2 */
L_120EE6FE:
    goto L_120EE8CB; /* 0x120EE6FE: jmp 0x120ee8cb */
L_120EE703:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE703: fstp st(1) */
    /* test ebx, ebx */ /* 0x120EE705: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE707: je 0x120ee8cb */
L_120EE70D:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE70D: mov eax, dword ptr [ebp - 0xc48] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE713: fstp st(1) */
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE715: mov esi, dword ptr [ebp - 0xc4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE71B: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE71D: sub esi, eax */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x120EE71F: mov ebx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120EE721: sub edi, eax */
    _flag_k = FK_CMP;
L_120EE723:
    fp_push(*(double*)ADDR(esi + ebx)); /* 0x120EE723: fld qword ptr [esi + ebx] */
    fp_push(*(double*)ADDR(ebx)); /* 0x120EE726: fld qword ptr [ebx] */
    RECOMP_CALL(sub_121BF4DC); /* 0x120EE728: call 0x121bf4dc */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebx + edi) = _v; } /* 0x120EE72D: fstp qword ptr [ebx + edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x120EE730: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x82C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x82C)) = MEM32(ebp + (-0x82C)) - 1; /* 0x120EE733: dec dword ptr [ebp - 0x82c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE723; /* 0x120EE739: jne 0x120ee723 */
L_120EE73B:
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE73B: jmp 0x120ee415 */
L_120EE740:
    /* cmp esi, 0x30000000u */ /* 0x120EE740: cmp esi, 0x30000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE887; /* 0x120EE746: je 0x120ee887 */
L_120EE74C:
    /* cmp esi, 0x50000000u */ /* 0x120EE74C: cmp esi, 0x50000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE85E; /* 0x120EE752: je 0x120ee85e */
L_120EE758:
    /* cmp esi, 0x50200000u */ /* 0x120EE758: cmp esi, 0x50200000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50200000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE80A; /* 0x120EE75E: je 0x120ee80a */
L_120EE764:
    /* cmp esi, 0x70E00000u */ /* 0x120EE764: cmp esi, 0x70e00000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70E00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE7C4; /* 0x120EE76A: je 0x120ee7c4 */
L_120EE76C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE76C: fstp st(1) */
    /* cmp esi, 0x71100000u */ /* 0x120EE76E: cmp esi, 0x71100000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x71100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE774: jne 0x120ee8cb */
L_120EE77A:
    edi = MEM32(ebp + (-0x828)); /* 0x120EE77A: mov edi, dword ptr [ebp - 0x828] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE780: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EE782: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE784: fstp st(0) */
    /* test edi, edi */ /* 0x120EE786: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE7A9; /* 0x120EE788: je 0x120ee7a9 */
L_120EE78A:
    /* cmp edx, 3 */ /* 0x120EE78A: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE7B9; /* 0x120EE78D: jae 0x120ee7b9 */
L_120EE78F:
    eax = MEM32(ebp + edx * 4 + (-0xC4C)); /* 0x120EE78F: mov eax, dword ptr [ebp + edx*4 - 0xc4c] */
    fp_push(*(double*)ADDR(eax)); /* 0x120EE796: fld qword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EE798: inc edx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx * 4 + (-0x814)) = _v; } /* 0x120EE799: fstp dword ptr [ebp + edx*4 - 0x814] */
    /* cmp edx, edi */ /* 0x120EE7A0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE78A; /* 0x120EE7A2: jb 0x120ee78a */
L_120EE7A4:
    /* cmp edx, 3 */ /* 0x120EE7A4: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE7B9; /* 0x120EE7A7: jae 0x120ee7b9 */
L_120EE7A9:
    PUSH32(esp, 3); /* 0x120EE7A9: push 3 */
    ecx = POP32_VAL(esp); /* 0x120EE7AB: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120EE7AC: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ebp + edx * 4 + (-0x810); /* 0x120EE7AE: lea edi, [ebp + edx*4 - 0x810] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EE7B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x120EE7B7: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_120EE7B9:
    eax = ebp + (-0x810); /* 0x120EE7B9: lea eax, [ebp - 0x810] */
    goto L_120EE84B; /* 0x120EE7BF: jmp 0x120ee84b */
L_120EE7C4:
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x120EE7C4: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x120EE7C4: shr edx, 1 */
    fp_xch(1); /* 0x120EE7C6: fxch st(1) */
    PUSH32(esp, 0); /* 0x120EE7C8: push 0 */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE7CA: fstp qword ptr [edi] */
    MEM32(ebp + (-0x828)) = edx; /* 0x120EE7CC: mov dword ptr [ebp - 0x828], edx */
    edx = POP32_VAL(esp); /* 0x120EE7D2: pop edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EE8CB; /* 0x120EE7D3: je 0x120ee8cb */
L_120EE7D9:
    edi = MEM32(ebp + (-0x828)); /* 0x120EE7D9: mov edi, dword ptr [ebp - 0x828] */
    esi = ebp + edi * 4 + (-0xC4C); /* 0x120EE7DF: lea esi, [ebp + edi*4 - 0xc4c] */
L_120EE7E6:
    eax = MEM32(ebp + edx * 4 + (-0xC4C)); /* 0x120EE7E6: mov eax, dword ptr [ebp + edx*4 - 0xc4c] */
    fp_push(*(double*)ADDR(eax)); /* 0x120EE7ED: fld qword ptr [eax] */
    ecx = MEM32(esi); /* 0x120EE7EF: mov ecx, dword ptr [esi] */
    _st[0] *= *(double*)ADDR(ecx); /* 0x120EE7F1: fmul qword ptr [ecx] */
    eax = MEM32(ebp + (-0x820)); /* 0x120EE7F3: mov eax, dword ptr [ebp - 0x820] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EE7F9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120EE7FA: add esi, 4 */
    _flag_k = FK_ADD;
    _st[0] += *(double*)ADDR(eax); /* 0x120EE7FD: fadd qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE7FF: fstp qword ptr [eax] */
    /* cmp edx, edi */ /* 0x120EE801: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE7E6; /* 0x120EE803: jb 0x120ee7e6 */
L_120EE805:
    goto L_120EE8CB; /* 0x120EE805: jmp 0x120ee8cb */
L_120EE80A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE80A: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EE80C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE80E: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE810: fstp st(0) */
    /* test ebx, ebx */ /* 0x120EE812: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE835; /* 0x120EE814: je 0x120ee835 */
L_120EE816:
    esi = MEM32(ebp + (-0xC4C)); /* 0x120EE816: mov esi, dword ptr [ebp - 0xc4c] */
L_120EE81C:
    /* cmp eax, 3 */ /* 0x120EE81C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE845; /* 0x120EE81F: jae 0x120ee845 */
L_120EE821:
    fp_push(*(double*)ADDR(esi + eax * 8)); /* 0x120EE821: fld qword ptr [esi + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EE824: inc eax */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x820)) = _v; } /* 0x120EE825: fstp dword ptr [ebp + eax*4 - 0x820] */
    /* cmp eax, ebx */ /* 0x120EE82C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE81C; /* 0x120EE82E: jb 0x120ee81c */
L_120EE830:
    /* cmp eax, 3 */ /* 0x120EE830: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE845; /* 0x120EE833: jae 0x120ee845 */
L_120EE835:
    PUSH32(esp, 3); /* 0x120EE835: push 3 */
    ecx = POP32_VAL(esp); /* 0x120EE837: pop ecx */
    edi = ebp + eax * 4 + (-0x81C); /* 0x120EE838: lea edi, [ebp + eax*4 - 0x81c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x120EE83F: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EE841: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x120EE843: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_120EE845:
    eax = ebp + (-0x81C); /* 0x120EE845: lea eax, [ebp - 0x81c] */
L_120EE84B:
    PUSH32(esp, eax); /* 0x120EE84B: push eax */
    RECOMP_CALL(sub_1203418D); /* 0x120EE84C: call 0x1203418d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x820)); /* 0x120EE851: mov eax, dword ptr [ebp - 0x820] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x120EE857: fstp qword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_120EE415; /* 0x120EE859: jmp 0x120ee415 */
L_120EE85E:
    fp_xch(1); /* 0x120EE85E: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE860: fstp qword ptr [edi] */
    /* test ebx, ebx */ /* 0x120EE862: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE8CB; /* 0x120EE864: je 0x120ee8cb */
L_120EE866:
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE866: mov edx, dword ptr [ebp - 0xc4c] */
    ecx = MEM32(ebp + (-0xC48)); /* 0x120EE86C: mov ecx, dword ptr [ebp - 0xc48] */
    eax = edx; /* 0x120EE872: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120EE874: sub ecx, edx */
    _flag_k = FK_CMP;
L_120EE876:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x120EE876: fld qword ptr [ecx + eax] */
    _st[0] *= *(double*)ADDR(eax); /* 0x120EE879: fmul qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x120EE87B: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE87E: dec ebx */
    _flag_k = FK_DEC;
    _st[0] += *(double*)ADDR(edi); /* 0x120EE87F: fadd qword ptr [edi] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x120EE881: fstp qword ptr [edi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE876; /* 0x120EE883: jne 0x120ee876 */
L_120EE885:
    goto L_120EE8CB; /* 0x120EE885: jmp 0x120ee8cb */
L_120EE887:
    /* test ebx, ebx */ /* 0x120EE887: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE6BD; /* 0x120EE889: je 0x120ee6bd */
L_120EE88F:
    eax = MEM32(ebp + (-0xC48)); /* 0x120EE88F: mov eax, dword ptr [ebp - 0xc48] */
    edx = MEM32(ebp + (-0xC4C)); /* 0x120EE895: mov edx, dword ptr [ebp - 0xc4c] */
    esi = MEM32(ebp + (-0xC44)); /* 0x120EE89B: mov esi, dword ptr [ebp - 0xc44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x120EE8A1: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120EE8A3: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x120EE8A5: mov ecx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120EE8A7: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_120EE8AD; /* 0x120EE8A9: jmp 0x120ee8ad */
L_120EE8AB:
    fp_xch(1); /* 0x120EE8AB: fxch st(1) */
L_120EE8AD:
    fp_xch(1); /* 0x120EE8AD: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + ecx)); /* 0x120EE8AF: fcom qword ptr [edx + ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EE8B2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x120EE8B4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EE8BD; /* 0x120EE8B7: jp 0x120ee8bd */
L_120EE8B9:
    fp_push(*(double*)ADDR(ecx)); /* 0x120EE8B9: fld qword ptr [ecx] */
    goto L_120EE8C0; /* 0x120EE8BB: jmp 0x120ee8c0 */
L_120EE8BD:
    fp_push(*(double*)ADDR(esi + ecx)); /* 0x120EE8BD: fld qword ptr [esi + ecx] */
L_120EE8C0:
    { double _v = fp_pop(); *(double*)ADDR(ecx + edi) = _v; } /* 0x120EE8C0: fstp qword ptr [ecx + edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x120EE8C3: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EE8C6: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EE8AB; /* 0x120EE8C7: jne 0x120ee8ab */
L_120EE8C9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE8C9: fstp st(0) */
L_120EE8CB:
    eax = MEM32(ebp + (-0x840)); /* 0x120EE8CB: mov eax, dword ptr [ebp - 0x840] */
    fp_push(0.0); /* 0x120EE8D1: fldz  */
    ecx = MEM32(ebp + 0xC); /* 0x120EE8D3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EE8D6: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x848)) */ /* 0x120EE8D7: cmp eax, dword ptr [ebp - 0x848] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x848)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x840)) = eax; /* 0x120EE8DD: mov dword ptr [ebp - 0x840], eax */
    eax = MEM32(ebp + (-0x824)); /* 0x120EE8E3: mov eax, dword ptr [ebp - 0x824] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EDE35; /* 0x120EE8E9: jb 0x120ede35 */
L_120EE8EF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE8EF: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x120EE8F1: pop edi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x120EE8F2: fstp st(1) */
    esi = POP32_VAL(esp); /* 0x120EE8F4: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EE8F5: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x120EE8F7: pop ebx */
L_120EE8F8:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EE8F8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EE8FB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EE8FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x120EE8FF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EE904: leave  */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x120EE905: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_120EE90D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EE90Du);

L_120EE90D:
    edi = edi; /* 0x120EE90D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EE90F: push ebp */
    ebp = esp; /* 0x120EE910: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120EE912: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120EE915: push ebx */
    PUSH32(esp, esi); /* 0x120EE916: push esi */
    PUSH32(esp, edi); /* 0x120EE917: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EE918: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120EE91B: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0x46580200u */ /* 0x120EE91D: cmp dword ptr [edi], 0x46580200 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x46580200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x120EE923: mov dword ptr [ebp + 8], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE926: jb 0x120ee9de */
L_120EE92C:
    /* cmp MEM32(edi), 0x46580201u */ /* 0x120EE92C: cmp dword ptr [edi], 0x46580201 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x46580201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EE940; /* 0x120EE932: jbe 0x120ee940 */
L_120EE934:
    /* cmp MEM32(edi), 0x54580100u */ /* 0x120EE934: cmp dword ptr [edi], 0x54580100 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x54580100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE93A: jne 0x120ee9de */
L_120EE940:
    ebx = MEM32(ebp + 0x10); /* 0x120EE940: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EE943: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120EE945: push esi */
    PUSH32(esp, ebx); /* 0x120EE946: push ebx */
    PUSH32(esp, 0x434C5846u); /* 0x120EE947: push 0x434c5846 */
    PUSH32(esp, edi); /* 0x120EE94C: push edi */
    RECOMP_CALL(sub_120E45E4); /* 0x120EE94D: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE952: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DE; /* 0x120EE954: js 0x120ee9de */
L_120EE95A:
    /* cmp eax, 1 */ /* 0x120EE95A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE95D: je 0x120ee9de */
L_120EE95F:
    PUSH32(esp, esi); /* 0x120EE95F: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EE960: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x54494C43u); /* 0x120EE963: push 0x54494c43 */
    PUSH32(esp, edi); /* 0x120EE968: push edi */
    RECOMP_CALL(sub_120E45E4); /* 0x120EE969: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE96E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DE; /* 0x120EE970: js 0x120ee9de */
L_120EE972:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EE972: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EE974: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x120EE975: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE977: je 0x120ee9de */
L_120EE979:
    /* cmp MEM32(ebx), esi */ /* 0x120EE979: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE97B: je 0x120ee9de */
L_120EE97D:
    eax = MEM32(ebp + 0x14); /* 0x120EE97D: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x120EE980: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x120EE982: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE984: je 0x120ee9de */
L_120EE986:
    /* cmp MEM32(eax), esi */ /* 0x120EE986: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE98C; /* 0x120EE988: jne 0x120ee98c */
L_120EE98A:
    MEM32(eax) = ecx; /* 0x120EE98A: mov dword ptr [eax], ecx */
L_120EE98C:
    ecx = MEM32(ebx); /* 0x120EE98C: mov ecx, dword ptr [ebx] */
    MEM32(ebp + 0x14) = ecx; /* 0x120EE98E: mov dword ptr [ebp + 0x14], ecx */
    ebx = MEM32(ecx); /* 0x120EE991: mov ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE993: add ecx, 4 */
    _flag_k = FK_ADD;
    edi = esi; /* 0x120EE996: mov edi, esi */
    /* test ebx, ebx */ /* 0x120EE998: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE9DA; /* 0x120EE99A: je 0x120ee9da */
L_120EE99C:
    esi = MEM32(ebp + 0x8); /* 0x120EE99C: mov esi, dword ptr [ebp + 8] */
    /* cmp ecx, esi */ /* 0x120EE99F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE9A1: jae 0x120ee9de */
L_120EE9A3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE9A3: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x120EE9A6: mov dword ptr [ebp + 0x14], ecx */
    eax = MEM32(ecx); /* 0x120EE9A9: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE9AB: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x120EE9AE: mov dword ptr [ebp + 0x14], ecx */
    PUSH32(esp, esi); /* 0x120EE9B1: push esi */
    ecx = ebp + 0x14; /* 0x120EE9B2: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x120EE9B5: push ecx */
    PUSH32(esp, eax); /* 0x120EE9B6: push eax */
    RECOMP_CALL(sub_120EDD00); /* 0x120EE9B7: call 0x120edd00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE9BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9E3; /* 0x120EE9BE: js 0x120ee9e3 */
L_120EE9C0:
    PUSH32(esp, esi); /* 0x120EE9C0: push esi */
    eax = ebp + 0x14; /* 0x120EE9C1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EE9C4: push eax */
    RECOMP_CALL(sub_120EDD73); /* 0x120EE9C5: call 0x120edd73 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EE9CA: mov esi, eax */
    /* test esi, esi */ /* 0x120EE9CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DA; /* 0x120EE9CE: js 0x120ee9da */
L_120EE9D0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EE9D0: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x120EE9D1: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE9DA; /* 0x120EE9D3: jae 0x120ee9da */
L_120EE9D5:
    ecx = MEM32(ebp + 0x14); /* 0x120EE9D5: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_120EE99C; /* 0x120EE9D8: jmp 0x120ee99c */
L_120EE9DA:
    eax = esi; /* 0x120EE9DA: mov eax, esi */
    goto L_120EE9E3; /* 0x120EE9DC: jmp 0x120ee9e3 */
L_120EE9DE:
    eax = 0x80004005u; /* 0x120EE9DE: mov eax, 0x80004005 */
L_120EE9E3:
    edi = POP32_VAL(esp); /* 0x120EE9E3: pop edi */
    esi = POP32_VAL(esp); /* 0x120EE9E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EE9E5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EE9E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EE9E7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EE9EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EE9EFu);

    goto L_120EE9EF;
L_120EE90D:
    edi = edi; /* 0x120EE90D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EE90F: push ebp */
    ebp = esp; /* 0x120EE910: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120EE912: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120EE915: push ebx */
    PUSH32(esp, esi); /* 0x120EE916: push esi */
    PUSH32(esp, edi); /* 0x120EE917: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EE918: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120EE91B: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0x46580200u */ /* 0x120EE91D: cmp dword ptr [edi], 0x46580200 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x46580200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x120EE923: mov dword ptr [ebp + 8], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE926: jb 0x120ee9de */
L_120EE92C:
    /* cmp MEM32(edi), 0x46580201u */ /* 0x120EE92C: cmp dword ptr [edi], 0x46580201 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x46580201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EE940; /* 0x120EE932: jbe 0x120ee940 */
L_120EE934:
    /* cmp MEM32(edi), 0x54580100u */ /* 0x120EE934: cmp dword ptr [edi], 0x54580100 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x54580100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE93A: jne 0x120ee9de */
L_120EE940:
    ebx = MEM32(ebp + 0x10); /* 0x120EE940: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EE943: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120EE945: push esi */
    PUSH32(esp, ebx); /* 0x120EE946: push ebx */
    PUSH32(esp, 0x434C5846u); /* 0x120EE947: push 0x434c5846 */
    PUSH32(esp, edi); /* 0x120EE94C: push edi */
    RECOMP_CALL(sub_120E45E4); /* 0x120EE94D: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE952: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DE; /* 0x120EE954: js 0x120ee9de */
L_120EE95A:
    /* cmp eax, 1 */ /* 0x120EE95A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE95D: je 0x120ee9de */
L_120EE95F:
    PUSH32(esp, esi); /* 0x120EE95F: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EE960: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x54494C43u); /* 0x120EE963: push 0x54494c43 */
    PUSH32(esp, edi); /* 0x120EE968: push edi */
    RECOMP_CALL(sub_120E45E4); /* 0x120EE969: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE96E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DE; /* 0x120EE970: js 0x120ee9de */
L_120EE972:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EE972: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EE974: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x120EE975: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE977: je 0x120ee9de */
L_120EE979:
    /* cmp MEM32(ebx), esi */ /* 0x120EE979: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE97B: je 0x120ee9de */
L_120EE97D:
    eax = MEM32(ebp + 0x14); /* 0x120EE97D: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x120EE980: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x120EE982: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE984: je 0x120ee9de */
L_120EE986:
    /* cmp MEM32(eax), esi */ /* 0x120EE986: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EE98C; /* 0x120EE988: jne 0x120ee98c */
L_120EE98A:
    MEM32(eax) = ecx; /* 0x120EE98A: mov dword ptr [eax], ecx */
L_120EE98C:
    ecx = MEM32(ebx); /* 0x120EE98C: mov ecx, dword ptr [ebx] */
    MEM32(ebp + 0x14) = ecx; /* 0x120EE98E: mov dword ptr [ebp + 0x14], ecx */
    ebx = MEM32(ecx); /* 0x120EE991: mov ebx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE993: add ecx, 4 */
    _flag_k = FK_ADD;
    edi = esi; /* 0x120EE996: mov edi, esi */
    /* test ebx, ebx */ /* 0x120EE998: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EE9DA; /* 0x120EE99A: je 0x120ee9da */
L_120EE99C:
    esi = MEM32(ebp + 0x8); /* 0x120EE99C: mov esi, dword ptr [ebp + 8] */
    /* cmp ecx, esi */ /* 0x120EE99F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE9DE; /* 0x120EE9A1: jae 0x120ee9de */
L_120EE9A3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE9A3: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x120EE9A6: mov dword ptr [ebp + 0x14], ecx */
    eax = MEM32(ecx); /* 0x120EE9A9: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EE9AB: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x120EE9AE: mov dword ptr [ebp + 0x14], ecx */
    PUSH32(esp, esi); /* 0x120EE9B1: push esi */
    ecx = ebp + 0x14; /* 0x120EE9B2: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x120EE9B5: push ecx */
    PUSH32(esp, eax); /* 0x120EE9B6: push eax */
    RECOMP_CALL(sub_120EDD00); /* 0x120EE9B7: call 0x120edd00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EE9BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9E3; /* 0x120EE9BE: js 0x120ee9e3 */
L_120EE9C0:
    PUSH32(esp, esi); /* 0x120EE9C0: push esi */
    eax = ebp + 0x14; /* 0x120EE9C1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EE9C4: push eax */
    RECOMP_CALL(sub_120EDD73); /* 0x120EE9C5: call 0x120edd73 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EE9CA: mov esi, eax */
    /* test esi, esi */ /* 0x120EE9CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EE9DA; /* 0x120EE9CE: js 0x120ee9da */
L_120EE9D0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EE9D0: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x120EE9D1: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EE9DA; /* 0x120EE9D3: jae 0x120ee9da */
L_120EE9D5:
    ecx = MEM32(ebp + 0x14); /* 0x120EE9D5: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_120EE99C; /* 0x120EE9D8: jmp 0x120ee99c */
L_120EE9DA:
    eax = esi; /* 0x120EE9DA: mov eax, esi */
    goto L_120EE9E3; /* 0x120EE9DC: jmp 0x120ee9e3 */
L_120EE9DE:
    eax = 0x80004005u; /* 0x120EE9DE: mov eax, 0x80004005 */
L_120EE9E3:
    edi = POP32_VAL(esp); /* 0x120EE9E3: pop edi */
    esi = POP32_VAL(esp); /* 0x120EE9E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EE9E5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EE9E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EE9E7: ret 0x10 */
L_120EE9EF:
    edi = edi; /* 0x120EE9EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EE9F1: push ebp */
    ebp = esp; /* 0x120EE9F2: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x120EE9F4: pop ebp */
    RECOMP_BACKEDGE();
    goto L_120EE90D; /* 0x120EE9F5: jmp 0x120ee90d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EE9FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EE9FFu);

L_120EE9FF:
    edi = edi; /* 0x120EE9FF: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EEA01: push esi */
    esi = ecx; /* 0x120EEA02: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120EEA04: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120EEA07: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x120EEA0C: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x10); /* 0x120EEA0F: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x120EEA12: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x120EEA16: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x120EEA19: mov eax, dword ptr [esi + 0x10] */
    ecx = POP32_VAL(esp); /* 0x120EEA1C: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x120EEA1D: mov ecx, dword ptr [esi + 0xc] */
    MEM32(ecx + 0x10) = eax; /* 0x120EEA20: mov dword ptr [ecx + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x120EEA23: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EEA24: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EEA2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEA2Au);

    goto L_120EEA2A;
L_120EE9FF:
    edi = edi; /* 0x120EE9FF: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EEA01: push esi */
    esi = ecx; /* 0x120EEA02: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120EEA04: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF388); /* 0x120EEA07: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x120EEA0C: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x10); /* 0x120EEA0F: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x120EEA12: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x120EEA16: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x120EEA19: mov eax, dword ptr [esi + 0x10] */
    ecx = POP32_VAL(esp); /* 0x120EEA1C: pop ecx */
    ecx = MEM32(esi + 0xC); /* 0x120EEA1D: mov ecx, dword ptr [esi + 0xc] */
    MEM32(ecx + 0x10) = eax; /* 0x120EEA20: mov dword ptr [ecx + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x120EEA23: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EEA24: ret  */
L_120EEA2A:
    edi = edi; /* 0x120EEA2A: mov edi, edi */
    PUSH32(esp, edi); /* 0x120EEA2C: push edi */
    edi = ecx; /* 0x120EEA2D: mov edi, ecx */
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x120EEA2F: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEA58; /* 0x120EEA33: je 0x120eea58 */
L_120EEA35:
    PUSH32(esp, esi); /* 0x120EEA35: push esi */
L_120EEA36:
    esi = MEM32(edi + 0x20); /* 0x120EEA36: mov esi, dword ptr [edi + 0x20] */
    eax = MEM32(esi + 0x20); /* 0x120EEA39: mov eax, dword ptr [esi + 0x20] */
    MEM32(edi + 0x20) = eax; /* 0x120EEA3C: mov dword ptr [edi + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x120EEA3F: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x120EEA43: mov ecx, esi */
    RECOMP_CALL(sub_120EEA2A); /* 0x120EEA45: call 0x120eea2a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EEA4A: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EEA4B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x120EEA50: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x120EEA54: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEA36; /* 0x120EEA55: jne 0x120eea36 */
L_120EEA57:
    esi = POP32_VAL(esp); /* 0x120EEA57: pop esi */
L_120EEA58:
    ecx = edi + 0xC; /* 0x120EEA58: lea ecx, [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x120EEA5B: pop edi */
    RECOMP_BACKEDGE();
    goto L_120EE9FF; /* 0x120EEA5C: jmp 0x120ee9ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EEA66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEA66u);

L_120EEA66:
    edi = edi; /* 0x120EEA66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEA68: push ebp */
    ebp = esp; /* 0x120EEA69: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EEA6B: push ecx */
    PUSH32(esp, ecx); /* 0x120EEA6C: push ecx */
    PUSH32(esp, edi); /* 0x120EEA6D: push edi */
    edi = ecx; /* 0x120EEA6E: mov edi, ecx */
    edx = MEM32(edi + 0x1C); /* 0x120EEA70: mov edx, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x8)) = edi; /* 0x120EEA73: mov dword ptr [ebp - 8], edi */
    /* test edx, edx */ /* 0x120EEA76: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEAAB; /* 0x120EEA78: je 0x120eeaab */
L_120EEA7A:
    PUSH32(esp, ebx); /* 0x120EEA7A: push ebx */
    PUSH32(esp, esi); /* 0x120EEA7B: push esi */
L_120EEA7C:
    esi = MEM32(edx + 0x1C); /* 0x120EEA7C: mov esi, dword ptr [edx + 0x1c] */
    ebx = edx + 0xC; /* 0x120EEA7F: lea ebx, [edx + 0xc] */
    /* cmp esi, ebx */ /* 0x120EEA82: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEAA2; /* 0x120EEA84: je 0x120eeaa2 */
L_120EEA86:
    eax = edi + 0x10; /* 0x120EEA86: lea eax, [edi + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120EEA89: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x120EEA8C: mov edi, eax */
L_120EEA8E:
    ecx = MEM32(esi + 0x4); /* 0x120EEA8E: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x38); /* 0x120EEA91: mov eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x120EEA94: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x120EEA96: mov dword ptr [ecx], eax */
    esi = MEM32(esi + 0x10); /* 0x120EEA98: mov esi, dword ptr [esi + 0x10] */
    /* cmp esi, ebx */ /* 0x120EEA9B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEA8E; /* 0x120EEA9D: jne 0x120eea8e */
L_120EEA9F:
    edi = MEM32(ebp + (-0x8)); /* 0x120EEA9F: mov edi, dword ptr [ebp - 8] */
L_120EEAA2:
    edx = MEM32(edx + 0x20); /* 0x120EEAA2: mov edx, dword ptr [edx + 0x20] */
    /* test edx, edx */ /* 0x120EEAA5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEA7C; /* 0x120EEAA7: jne 0x120eea7c */
L_120EEAA9:
    esi = POP32_VAL(esp); /* 0x120EEAA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EEAAA: pop ebx */
L_120EEAAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEAAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x120EEAAD: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EEAAE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EEAAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EEAB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEAB5u);

L_120EEAB5:
    edi = edi; /* 0x120EEAB5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEAB7: push ebp */
    ebp = esp; /* 0x120EEAB8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EEABA: push esi */
    PUSH32(esp, 8); /* 0x120EEABB: push 8 */
    esi = ecx; /* 0x120EEABD: mov esi, ecx */
    RECOMP_CALL(sub_121BF394); /* 0x120EEABF: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EEAC4: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x120EEAC6: pop ecx */
    /* test edx, edx */ /* 0x120EEAC7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEAD2; /* 0x120EEAC9: jne 0x120eead2 */
L_120EEACB:
    eax = 0x8007000Eu; /* 0x120EEACB: mov eax, 0x8007000e */
    goto L_120EEAE2; /* 0x120EEAD0: jmp 0x120eeae2 */
L_120EEAD2:
    eax = MEM32(ebp + 0x8); /* 0x120EEAD2: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x120EEAD5: mov dword ptr [edx], eax */
    eax = MEM32(esi + 0x24); /* 0x120EEAD7: mov eax, dword ptr [esi + 0x24] */
    MEM32(edx + 0x4) = eax; /* 0x120EEADA: mov dword ptr [edx + 4], eax */
    MEM32(esi + 0x24) = edx; /* 0x120EEADD: mov dword ptr [esi + 0x24], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEAE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EEAE2:
    esi = POP32_VAL(esp); /* 0x120EEAE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EEAE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EEAE4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EEAEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEAECu);

L_120EEAEC:
    edi = edi; /* 0x120EEAEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEAEE: push ebp */
    ebp = esp; /* 0x120EEAEF: mov ebp, esp */
    edx = ecx + 0x24; /* 0x120EEAF1: lea edx, [ecx + 0x24] */
    ecx = MEM32(edx); /* 0x120EEAF4: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x120EEAF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEB1E; /* 0x120EEAF8: je 0x120eeb1e */
L_120EEAFA:
    eax = MEM32(ebp + 0x8); /* 0x120EEAFA: mov eax, dword ptr [ebp + 8] */
L_120EEAFD:
    /* cmp MEM32(ecx), eax */ /* 0x120EEAFD: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEB0A; /* 0x120EEAFF: je 0x120eeb0a */
L_120EEB01:
    edx = ecx + 0x4; /* 0x120EEB01: lea edx, [ecx + 4] */
    ecx = MEM32(edx); /* 0x120EEB04: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x120EEB06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEAFD; /* 0x120EEB08: jne 0x120eeafd */
L_120EEB0A:
    /* test ecx, ecx */ /* 0x120EEB0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEB1E; /* 0x120EEB0C: je 0x120eeb1e */
L_120EEB0E:
    eax = MEM32(ecx + 0x4); /* 0x120EEB0E: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ecx); /* 0x120EEB11: push ecx */
    MEM32(edx) = eax; /* 0x120EEB12: mov dword ptr [edx], eax */
    RECOMP_CALL(sub_121BF388); /* 0x120EEB14: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EEB19: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEB1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EEB23; /* 0x120EEB1C: jmp 0x120eeb23 */
L_120EEB1E:
    eax = 0x80004005u; /* 0x120EEB1E: mov eax, 0x80004005 */
L_120EEB23:
    ebp = POP32_VAL(esp); /* 0x120EEB23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EEB24: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EEB2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEB2Cu);

L_120EEB2C:
    edi = edi; /* 0x120EEB2C: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EEB2E: push esi */
    esi = ecx; /* 0x120EEB2F: mov esi, ecx */
    PUSH32(esp, edi); /* 0x120EEB31: push edi */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x120EEB32: push dword ptr [esi + 0x10] */
    MEM32(esi) = 0x1200A030u; /* 0x120EEB35: mov dword ptr [esi], 0x1200a030 */
    RECOMP_CALL(sub_121BF388); /* 0x120EEB3B: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x1C); /* 0x120EEB40: mov edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x120EEB43: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x120EEB47: pop ecx */
    /* test edi, edi */ /* 0x120EEB48: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEB5A; /* 0x120EEB4A: je 0x120eeb5a */
L_120EEB4C:
    ecx = edi; /* 0x120EEB4C: mov ecx, edi */
    RECOMP_CALL(sub_120EEA2A); /* 0x120EEB4E: call 0x120eea2a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x120EEB53: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120EEB54: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EEB59: pop ecx */
L_120EEB5A:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x120EEB5A: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x120EEB5E: pop edi */
    esi = POP32_VAL(esp); /* 0x120EEB5F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EEB60: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EEB66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEB66u);

L_120EEB66:
    edi = edi; /* 0x120EEB66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEB68: push ebp */
    ebp = esp; /* 0x120EEB69: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EEB6B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120EEB6C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120EEB6F: push edi */
    PUSH32(esp, 4); /* 0x120EEB70: push 4 */
    ecx = POP32_VAL(esp); /* 0x120EEB72: pop ecx */
    edi = 0x12001D88u; /* 0x120EEB73: mov edi, 0x12001d88 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEB78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120EEB7A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EEB8F; /* 0x120EEB7C: je 0x120eeb8f */
L_120EEB7E:
    esi = MEM32(ebp + 0xC); /* 0x120EEB7E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120EEB81: push 4 */
    ecx = POP32_VAL(esp); /* 0x120EEB83: pop ecx */
    edi = 0x12018314u; /* 0x120EEB84: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEB89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120EEB8B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120EEBA1; /* 0x120EEB8D: jne 0x120eeba1 */
L_120EEB8F:
    ecx = MEM32(ebp + 0x8); /* 0x120EEB8F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x120EEB92: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x120EEB95: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120EEB97: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EEB99: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120EEB9A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EEB9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EEBA6; /* 0x120EEB9F: jmp 0x120eeba6 */
L_120EEBA1:
    eax = 0x80004002u; /* 0x120EEBA1: mov eax, 0x80004002 */
L_120EEBA6:
    edi = POP32_VAL(esp); /* 0x120EEBA6: pop edi */
    esi = POP32_VAL(esp); /* 0x120EEBA7: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EEBA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EEBA9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EEBB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEBB1u);

L_120EEBB1:
    edi = edi; /* 0x120EEBB1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEBB3: push ebp */
    ebp = esp; /* 0x120EEBB4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EEBB6: push ecx */
    PUSH32(esp, ecx); /* 0x120EEBB7: push ecx */
    PUSH32(esp, ebx); /* 0x120EEBB8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120EEBB9: mov ebx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx); /* 0x120EEBBC: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx + 0x4); /* 0x120EEBBE: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x120EEBC1: push esi */
    PUSH32(esp, edi); /* 0x120EEBC2: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120EEBC3: mov edi, dword ptr [ebp + 0x14] */
    edx = MEM32(edi); /* 0x120EEBC6: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EEBC8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x120EEBCA: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEBCD: jne 0x120eec3e */
L_120EEBCF:
    eax = MEM32(ecx); /* 0x120EEBCF: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x120EEBD1: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEBD3: jne 0x120eec3e */
L_120EEBD5:
    eax = MEM32(ecx + 0x10); /* 0x120EEBD5: mov eax, dword ptr [ecx + 0x10] */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x120EEBD8: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEBDB: jne 0x120eec3e */
L_120EEBDD:
    eax = MEM32(ecx + 0x8); /* 0x120EEBDD: mov eax, dword ptr [ecx + 8] */
    ebx = MEM32(ebp + 0x8); /* 0x120EEBE0: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + ebx), esi */ /* 0x120EEBE3: cmp dword ptr [eax + ebx], esi */
    _flag_a = (uint32_t)(MEM32(eax + ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEBED; /* 0x120EEBE6: jne 0x120eebed */
L_120EEBE8:
    MEM32(ebp + (-0x4)) = esi; /* 0x120EEBE8: mov dword ptr [ebp - 4], esi */
    goto L_120EEBF4; /* 0x120EEBEB: jmp 0x120eebf4 */
L_120EEBED:
    eax = eax + ebx + 0x4; /* 0x120EEBED: lea eax, [eax + ebx + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120EEBF1: mov dword ptr [ebp - 4], eax */
L_120EEBF4:
    eax = MEM32(edx + 0x8); /* 0x120EEBF4: mov eax, dword ptr [edx + 8] */
    edi = MEM32(ebp + 0x10); /* 0x120EEBF7: mov edi, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + edi), esi */ /* 0x120EEBFA: cmp dword ptr [eax + edi], esi */
    _flag_a = (uint32_t)(MEM32(eax + edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC03; /* 0x120EEBFD: jne 0x120eec03 */
L_120EEBFF:
    eax = esi; /* 0x120EEBFF: mov eax, esi */
    goto L_120EEC07; /* 0x120EEC01: jmp 0x120eec07 */
L_120EEC03:
    eax = eax + edi + 0x4; /* 0x120EEC03: lea eax, [eax + edi + 4] */
L_120EEC07:
    ecx = MEM32(ecx + 0xC); /* 0x120EEC07: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp MEM32(ecx + ebx), esi */ /* 0x120EEC0A: cmp dword ptr [ecx + ebx], esi */
    _flag_a = (uint32_t)(MEM32(ecx + ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC14; /* 0x120EEC0D: jne 0x120eec14 */
L_120EEC0F:
    MEM32(ebp + (-0x8)) = esi; /* 0x120EEC0F: mov dword ptr [ebp - 8], esi */
    goto L_120EEC1B; /* 0x120EEC12: jmp 0x120eec1b */
L_120EEC14:
    ecx = ecx + ebx + 0x4; /* 0x120EEC14: lea ecx, [ecx + ebx + 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120EEC18: mov dword ptr [ebp - 8], ecx */
L_120EEC1B:
    ecx = MEM32(edx + 0xC); /* 0x120EEC1B: mov ecx, dword ptr [edx + 0xc] */
    edx = edi; /* 0x120EEC1E: mov edx, edi */
    /* cmp MEM32(ecx + edx), esi */ /* 0x120EEC20: cmp dword ptr [ecx + edx], esi */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC29; /* 0x120EEC23: jne 0x120eec29 */
L_120EEC25:
    ecx = esi; /* 0x120EEC25: mov ecx, esi */
    goto L_120EEC2D; /* 0x120EEC27: jmp 0x120eec2d */
L_120EEC29:
    ecx = ecx + edx + 0x4; /* 0x120EEC29: lea ecx, [ecx + edx + 4] */
L_120EEC2D:
    edx = MEM32(ebp + (-0x4)); /* 0x120EEC2D: mov edx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + 0x14); /* 0x120EEC30: mov edi, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0xC); /* 0x120EEC33: mov ebx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x120EEC36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEC4C; /* 0x120EEC38: jne 0x120eec4c */
L_120EEC3A:
    /* test eax, eax */ /* 0x120EEC3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEC83; /* 0x120EEC3C: je 0x120eec83 */
L_120EEC3E:
    esi = 0x80004005u; /* 0x120EEC3E: mov esi, 0x80004005 */
L_120EEC43:
    edi = POP32_VAL(esp); /* 0x120EEC43: pop edi */
    eax = esi; /* 0x120EEC44: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EEC46: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EEC47: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EEC48: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EEC49: ret 0x14 */
L_120EEC4C:
    /* test eax, eax */ /* 0x120EEC4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEC4E: je 0x120eec3e */
L_120EEC50:
    SET_LO8(ebx, MEM8(edx)); /* 0x120EEC50: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x120EEC52: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + 0xC); /* 0x120EEC54: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC7C; /* 0x120EEC57: jne 0x120eec7c */
L_120EEC59:
    /* cmp MEM8(edx), 0 */ /* 0x120EEC59: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEC78; /* 0x120EEC5C: je 0x120eec78 */
L_120EEC5E:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x120EEC5E: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x120EEC61: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + 0x17) = (uint8_t)(LO8(ebx)); /* 0x120EEC64: mov byte ptr [ebp + 0x17], bl */
    ebx = MEM32(ebp + 0xC); /* 0x120EEC67: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC7C; /* 0x120EEC6A: jne 0x120eec7c */
L_120EEC6C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x120EEC6C: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120EEC6F: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x17), 0 */ /* 0x120EEC72: cmp byte ptr [ebp + 0x17], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x17)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC50; /* 0x120EEC76: jne 0x120eec50 */
L_120EEC78:
    eax = esi; /* 0x120EEC78: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_120EEC3A; /* 0x120EEC7A: jmp 0x120eec3a */
L_120EEC7C:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EEC7C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EEC7E: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    goto L_120EEC3A; /* 0x120EEC81: jmp 0x120eec3a */
L_120EEC83:
    eax = MEM32(ebp + (-0x8)); /* 0x120EEC83: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x120EEC86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEC90; /* 0x120EEC88: jne 0x120eec90 */
L_120EEC8A:
    /* test ecx, ecx */ /* 0x120EEC8A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EECA1; /* 0x120EEC8C: je 0x120eeca1 */
L_120EEC8E:
    RECOMP_BACKEDGE();
    goto L_120EEC3E; /* 0x120EEC8E: jmp 0x120eec3e */
L_120EEC90:
    /* test ecx, ecx */ /* 0x120EEC90: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEC92: je 0x120eec3e */
L_120EEC94:
    PUSH32(esp, ecx); /* 0x120EEC94: push ecx */
    PUSH32(esp, eax); /* 0x120EEC95: push eax */
    RECOMP_CALL(sub_121BF494); /* 0x120EEC96: call 0x121bf494 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EEC9B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EEC9C: pop ecx */
    /* test eax, eax */ /* 0x120EEC9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EEC9F: jne 0x120eec3e */
L_120EECA1:
    ecx = MEM32(ebx); /* 0x120EECA1: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx + 0x4); /* 0x120EECA3: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x120EECA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EEC3E; /* 0x120EECA8: js 0x120eec3e */
L_120EECAA:
    /* cmp eax, 3 */ /* 0x120EECAA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EED29; /* 0x120EECAD: jle 0x120eed29 */
L_120EECAF:
    /* cmp eax, 4 */ /* 0x120EECAF: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EED03; /* 0x120EECB2: je 0x120eed03 */
L_120EECB4:
    /* cmp eax, 5 */ /* 0x120EECB4: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EECB7: jne 0x120eec3e */
L_120EECB9:
    edx = MEM32(ecx + 0x14); /* 0x120EECB9: mov edx, dword ptr [ecx + 0x14] */
    eax = MEM32(edi); /* 0x120EECBC: mov eax, dword ptr [edi] */
    MEM32(ebp + 0x14) = edx; /* 0x120EECBE: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, MEM32(eax + 0x14) */ /* 0x120EECC1: cmp edx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EECC4: jne 0x120eec3e */
L_120EECCA:
    eax = ecx + 0x18; /* 0x120EECCA: lea eax, [ecx + 0x18] */
    MEM32(ebx) = eax; /* 0x120EECCD: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x18u; /* 0x120EECCF: add dword ptr [edi], 0x18 */
    _flag_k = FK_ADD;
    ebx = esi; /* 0x120EECD2: mov ebx, esi */
    /* test edx, edx */ /* 0x120EECD4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEC43; /* 0x120EECD6: je 0x120eec43 */
L_120EECDC:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EECDC: push dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x120EECDF: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EECE0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EECE3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EECE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EEBB1); /* 0x120EECE9: call 0x120eebb1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EECEE: mov esi, eax */
    /* test esi, esi */ /* 0x120EECF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EEC43; /* 0x120EECF2: js 0x120eec43 */
L_120EECF8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EECF8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x120EECF9: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EECDC; /* 0x120EECFC: jb 0x120eecdc */
L_120EECFE:
    RECOMP_BACKEDGE();
    goto L_120EEC43; /* 0x120EECFE: jmp 0x120eec43 */
L_120EED03:
    eax = MEM32(ecx); /* 0x120EED03: mov eax, dword ptr [ecx] */
    /* cmp eax, 5 */ /* 0x120EED05: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EED1E; /* 0x120EED08: jl 0x120eed1e */
L_120EED0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EED0A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EED0C: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, 9 */ /* 0x120EED0D: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EED19; /* 0x120EED10: jle 0x120eed19 */
L_120EED12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF1u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF1u; /* 0x120EED12: add eax, -0xf */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x120EED15: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EED1E; /* 0x120EED17: ja 0x120eed1e */
L_120EED19:
    eax = MEM32(ebp + 0x18); /* 0x120EED19: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = ecx; /* 0x120EED1C: mov dword ptr [eax], ecx */
L_120EED1E:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 0x14u; /* 0x120EED1E: add dword ptr [ebx], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x14u; /* 0x120EED21: add dword ptr [edi], 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120EEC43; /* 0x120EED24: jmp 0x120eec43 */
L_120EED29:
    edx = MEM32(edi); /* 0x120EED29: mov edx, dword ptr [edi] */
    eax = MEM32(ecx + 0x14); /* 0x120EED2B: mov eax, dword ptr [ecx + 0x14] */
    /* cmp eax, MEM32(edx + 0x14) */ /* 0x120EED2E: cmp eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EED31: jne 0x120eec3e */
L_120EED37:
    eax = MEM32(ecx + 0x18); /* 0x120EED37: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, MEM32(edx + 0x18) */ /* 0x120EED3A: cmp eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEC3E; /* 0x120EED3D: jne 0x120eec3e */
L_120EED43:
    eax = ecx + 0x1C; /* 0x120EED43: lea eax, [ecx + 0x1c] */
    MEM32(ebx) = eax; /* 0x120EED46: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x1Cu; /* 0x120EED48: add dword ptr [edi], 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120EEC43; /* 0x120EED4B: jmp 0x120eec43 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EED55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EED55u);

L_120EED55:
    edi = edi; /* 0x120EED55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EED57: push ebp */
    ebp = esp; /* 0x120EED58: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120EED5A: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120EED5D: push ebx */
    PUSH32(esp, esi); /* 0x120EED5E: push esi */
    PUSH32(esp, edi); /* 0x120EED5F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120EED60: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x120EED63: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x120EED65: mov ecx, dword ptr [eax + 4] */
    ebx = MEM32(eax + 0x10); /* 0x120EED68: mov ebx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EED6B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x120EED6D: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(eax); /* 0x120EED70: mov ecx, dword ptr [eax] */
    /* cmp ebx, 1 */ /* 0x120EED72: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EED7A; /* 0x120EED75: jae 0x120eed7a */
L_120EED77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EED77: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EED79: inc ebx */
    _flag_k = FK_INC;
L_120EED7A:
    esi = MEM32(eax + 0x8); /* 0x120EED7A: mov esi, dword ptr [eax + 8] */
    edi = MEM32(ebp + 0x8); /* 0x120EED7D: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + edi), edx */ /* 0x120EED80: cmp dword ptr [esi + edi], edx */
    _flag_a = (uint32_t)(MEM32(esi + edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EED89; /* 0x120EED83: jne 0x120eed89 */
L_120EED85:
    esi = edx; /* 0x120EED85: mov esi, edx */
    goto L_120EED8D; /* 0x120EED87: jmp 0x120eed8d */
L_120EED89:
    esi = esi + edi + 0x4; /* 0x120EED89: lea esi, [esi + edi + 4] */
L_120EED8D:
    eax = MEM32(eax + 0xC); /* 0x120EED8D: mov eax, dword ptr [eax + 0xc] */
    /* cmp MEM32(eax + edi), edx */ /* 0x120EED90: cmp dword ptr [eax + edi], edx */
    _flag_a = (uint32_t)(MEM32(eax + edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EED9A; /* 0x120EED93: jne 0x120eed9a */
L_120EED95:
    MEM32(ebp + (-0x4)) = edx; /* 0x120EED95: mov dword ptr [ebp - 4], edx */
    goto L_120EEDA1; /* 0x120EED98: jmp 0x120eeda1 */
L_120EED9A:
    eax = eax + edi + 0x4; /* 0x120EED9A: lea eax, [eax + edi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120EED9E: mov dword ptr [ebp - 4], eax */
L_120EEDA1:
    edi = MEM32(ebp + 0xC); /* 0x120EEDA1: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x120EEDA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEDA6: je 0x120eeee4 */
L_120EEDAC:
    eax = esi + 0x1; /* 0x120EEDAC: lea eax, [esi + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EEDAF: mov dword ptr [ebp - 0xc], eax */
L_120EEDB2:
    SET_LO8(eax, MEM8(esi)); /* 0x120EEDB2: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EEDB4: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120EEDB5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEDB2; /* 0x120EEDB7: jne 0x120eedb2 */
L_120EEDB9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0xC)); /* 0x120EEDB9: sub esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x120EEDBC: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEDC6; /* 0x120EEDBF: jne 0x120eedc6 */
L_120EEDC1:
    MEM32(ebp + (-0x4)) = edx; /* 0x120EEDC1: mov dword ptr [ebp - 4], edx */
    goto L_120EEDEA; /* 0x120EEDC4: jmp 0x120eedea */
L_120EEDC6:
    edi = MEM32(ebp + (-0x4)); /* 0x120EEDC6: mov edi, dword ptr [ebp - 4] */
    eax = edi + 0x1; /* 0x120EEDC9: lea eax, [edi + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EEDCC: mov dword ptr [ebp - 0xc], eax */
L_120EEDCF:
    SET_LO8(eax, MEM8(edi)); /* 0x120EEDCF: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EEDD1: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120EEDD2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEDCF; /* 0x120EEDD4: jne 0x120eedcf */
L_120EEDD6:
    eax = edi; /* 0x120EEDD6: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x120EEDD8: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x120EEDDB: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + 0xC); /* 0x120EEDDE: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EEDE1: add eax, 4 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120EEDE4: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120EEDE4: shr eax, 2 */
    MEM32(ebp + (-0x4)) = eax; /* 0x120EEDE7: mov dword ptr [ebp - 4], eax */
L_120EEDEA:
    eax = esi + 0x4; /* 0x120EEDEA: lea eax, [esi + 4] */
    esi = MEM32(ebp + 0x18); /* 0x120EEDED: mov esi, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120EEDF0: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120EEDF0: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x120EEDF3: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    eax = eax * 4 + 0x8; /* 0x120EEDF6: lea eax, [eax*4 + 8] */
    MEM32(esi) = eax; /* 0x120EEDFD: mov dword ptr [esi], eax */
    esi = MEM32(ebp + 0x14); /* 0x120EEDFF: mov esi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x120EEE02: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = edx; /* 0x120EEE05: mov dword ptr [esi], edx */
    MEM32(eax) = edx; /* 0x120EEE07: mov dword ptr [eax], edx */
    /* cmp MEM32(ebp + (-0x8)), edx */ /* 0x120EEE09: cmp dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEE0C: jl 0x120eeee4 */
L_120EEE12:
    /* cmp MEM32(ebp + (-0x8)), 1 */ /* 0x120EEE12: cmp dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EEEC5; /* 0x120EEE16: jle 0x120eeec5 */
L_120EEE1C:
    /* cmp MEM32(ebp + (-0x8)), 3 */ /* 0x120EEE1C: cmp dword ptr [ebp - 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EEEBE; /* 0x120EEE20: jle 0x120eeebe */
L_120EEE26:
    /* cmp MEM32(ebp + (-0x8)), 4 */ /* 0x120EEE26: cmp dword ptr [ebp - 8], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEE98; /* 0x120EEE2A: je 0x120eee98 */
L_120EEE2C:
    /* cmp MEM32(ebp + (-0x8)), 5 */ /* 0x120EEE2C: cmp dword ptr [ebp - 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEE30: jne 0x120eeee4 */
L_120EEE36:
    eax = MEM32(edi); /* 0x120EEE36: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x14); /* 0x120EEE38: mov ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x120EEE3B: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x120EEE3E: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x10); /* 0x120EEE40: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120EEE43: mov dword ptr [ebp - 4], ecx */
    MEM32(eax) = 0x18u; /* 0x120EEE46: mov dword ptr [eax], 0x18 */
    MEM32(ebp + 0xC) = edx; /* 0x120EEE4C: mov dword ptr [ebp + 0xc], edx */
    /* test ecx, ecx */ /* 0x120EEE4F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EEE8F; /* 0x120EEE51: je 0x120eee8f */
L_120EEE53:
    eax = ebp + (-0x8); /* 0x120EEE53: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120EEE56: push eax */
    eax = ebp + 0x14; /* 0x120EEE57: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EEE5A: push eax */
    eax = ebp + (-0xC); /* 0x120EEE5B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x120EEE5E: push eax */
    PUSH32(esp, edi); /* 0x120EEE5F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EEE60: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EED55); /* 0x120EEE63: call 0x120eed55 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EEE68: mov edx, eax */
    /* test edx, edx */ /* 0x120EEE6A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EEEE9; /* 0x120EEE6C: js 0x120eeee9 */
L_120EEE6E:
    ecx = MEM32(ebp + 0x14); /* 0x120EEE6E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x120EEE71: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x120EEE73: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x120EEE76: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EEE79: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x18); /* 0x120EEE7B: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120EEE7E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EEE81: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x120EEE83: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EEE86: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x120EEE87: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x120EEE8A: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EEE53; /* 0x120EEE8D: jb 0x120eee53 */
L_120EEE8F:
    eax = MEM32(esi); /* 0x120EEE8F: mov eax, dword ptr [esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x120EEE91: imul eax, ebx */
    MEM32(esi) = eax; /* 0x120EEE94: mov dword ptr [esi], eax */
    goto L_120EEEE9; /* 0x120EEE96: jmp 0x120eeee9 */
L_120EEE98:
    MEM32(eax) = 0x14u; /* 0x120EEE98: mov dword ptr [eax], 0x14 */
    /* cmp ecx, 4 */ /* 0x120EEE9E: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEEA1: jl 0x120eeee4 */
L_120EEEA3:
    /* cmp ecx, 9 */ /* 0x120EEEA3: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EEEB2; /* 0x120EEEA6: jle 0x120eeeb2 */
L_120EEEA8:
    /* cmp ecx, 0xEu */ /* 0x120EEEA8: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEEAB: jle 0x120eeee4 */
L_120EEEAD:
    /* cmp ecx, 0x10u */ /* 0x120EEEAD: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEEB0: jg 0x120eeee4 */
L_120EEEB2:
    eax = ebx; /* 0x120EEEB2: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EEEB4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EEEB4: shl eax, 2 */
    MEM32(esi) = eax; /* 0x120EEEB7: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x14u; /* 0x120EEEB9: add dword ptr [edi], 0x14 */
    _flag_k = FK_ADD;
    goto L_120EEEE9; /* 0x120EEEBC: jmp 0x120eeee9 */
L_120EEEBE:
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x120EEEBE: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x120EEEBE: shl ebx, 4 */
    MEM32(esi) = ebx; /* 0x120EEEC1: mov dword ptr [esi], ebx */
    goto L_120EEECC; /* 0x120EEEC3: jmp 0x120eeecc */
L_120EEEC5:
    eax = ebx; /* 0x120EEEC5: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EEEC7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EEEC7: shl eax, 2 */
    MEM32(esi) = eax; /* 0x120EEECA: mov dword ptr [esi], eax */
L_120EEECC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120EEECC: dec ecx */
    _flag_k = FK_DEC;
    ebx = MEM32(ebp + 0x10); /* 0x120EEECD: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x1Cu); /* 0x120EEED0: push 0x1c */
    eax = POP32_VAL(esp); /* 0x120EEED2: pop eax */
    MEM32(ebx) = eax; /* 0x120EEED3: mov dword ptr [ebx], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EEEDD; /* 0x120EEED5: je 0x120eeedd */
L_120EEED7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120EEED7: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EEEDD; /* 0x120EEED8: je 0x120eeedd */
L_120EEEDA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120EEEDA: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EEEE4; /* 0x120EEEDB: jne 0x120eeee4 */
L_120EEEDD:
    if (2u) _cf = (((MEM32(esi)) >> 30) & 1u); /* 0x120EEEDD: shl dword ptr [esi], 2 */
    if (2u) { _flag_a = recomp_flags_pack((MEM32(esi) << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(esi) = MEM32(esi) << 2u; /* 0x120EEEDD: shl dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x120EEEE0: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    goto L_120EEEE9; /* 0x120EEEE2: jmp 0x120eeee9 */
L_120EEEE4:
    edx = 0x80004005u; /* 0x120EEEE4: mov edx, 0x80004005 */
L_120EEEE9:
    edi = POP32_VAL(esp); /* 0x120EEEE9: pop edi */
    esi = POP32_VAL(esp); /* 0x120EEEEA: pop esi */
    eax = edx; /* 0x120EEEEB: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x120EEEED: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EEEEE: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EEEEF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EEEF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EEEF7u);

L_120EEEF7:
    edi = edi; /* 0x120EEEF7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EEEF9: push ebp */
    ebp = esp; /* 0x120EEEFA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120EEEFC: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x1C); /* 0x120EEEFF: mov edx, dword ptr [ebp + 0x1c] */
    ecx = MEM32(edx); /* 0x120EEF02: mov ecx, dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x120EEF04: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120EEF05: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx); /* 0x120EEF08: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x4); /* 0x120EEF0A: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x120EEF0D: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebx); /* 0x120EEF10: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x120EEF12: mov eax, dword ptr [eax] */
    ecx = MEM32(edx); /* 0x120EEF14: mov ecx, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x120EEF16: mov dword ptr [ecx], eax */
    eax = MEM32(ebx); /* 0x120EEF18: mov eax, dword ptr [ebx] */
    ecx = MEM32(edx); /* 0x120EEF1A: mov ecx, dword ptr [edx] */
    eax = MEM32(eax + 0x10); /* 0x120EEF1C: mov eax, dword ptr [eax + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x120EEF1F: mov dword ptr [ecx + 0x10], eax */
    ecx = MEM32(edx); /* 0x120EEF22: mov ecx, dword ptr [edx] */
    edx = MEM32(ebp + 0x18); /* 0x120EEF24: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(edx); /* 0x120EEF27: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x120EEF29: mov dword ptr [ecx + 8], eax */
    ecx = MEM32(ebx); /* 0x120EEF2C: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx + 0x4); /* 0x120EEF2E: mov eax, dword ptr [ecx + 4] */
    ebx = MEM32(ecx); /* 0x120EEF31: mov ebx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120EEF33: push esi */
    PUSH32(esp, edi); /* 0x120EEF34: push edi */
    edi = MEM32(ecx + 0x10); /* 0x120EEF35: mov edi, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EEF38: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x120EEF3A: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x120EEF3D: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x120EEF40: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, 1 */ /* 0x120EEF43: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EEF4B; /* 0x120EEF46: jae 0x120eef4b */
L_120EEF48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EEF48: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EEF4A: inc edi */
    _flag_k = FK_INC;
L_120EEF4B:
    eax = MEM32(ecx + 0x8); /* 0x120EEF4B: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(ebp + 0x8); /* 0x120EEF4E: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + edx), esi */ /* 0x120EEF51: cmp dword ptr [eax + edx], esi */
    _flag_a = (uint32_t)(MEM32(eax + edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EEF5D; /* 0x120EEF54: jne 0x120eef5d */
L_120EEF56:
    eax = esi; /* 0x120EEF56: mov eax, esi */
    MEM32(ebp + (-0xC)) = esi; /* 0x120EEF58: mov dword ptr [ebp - 0xc], esi */
    goto L_120EEF64; /* 0x120EEF5B: jmp 0x120eef64 */
L_120EEF5D:
    eax = eax + edx + 0x4; /* 0x120EEF5D: lea eax, [eax + edx + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EEF61: mov dword ptr [ebp - 0xc], eax */
L_120EEF64:
    ecx = MEM32(ecx + 0xC); /* 0x120EEF64: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp MEM32(ecx + edx), esi */ /* 0x120EEF67: cmp dword ptr [ecx + edx], esi */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EEF72; /* 0x120EEF6A: je 0x120eef72 */
L_120EEF6C:
    esi = edx; /* 0x120EEF6C: mov esi, edx */
    esi = ecx + esi + 0x4; /* 0x120EEF6E: lea esi, [ecx + esi + 4] */
L_120EEF72:
    edx = MEM32(ebp + 0x18); /* 0x120EEF72: mov edx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x8)) = esi; /* 0x120EEF75: mov dword ptr [ebp - 8], esi */
    /* test eax, eax */ /* 0x120EEF78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EEF7A: je 0x120ef175 */
L_120EEF80:
    esi = eax; /* 0x120EEF80: mov esi, eax */
    ecx = esi + 0x1; /* 0x120EEF82: lea ecx, [esi + 1] */
L_120EEF85:
    SET_LO8(eax, MEM8(esi)); /* 0x120EEF85: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EEF87: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120EEF88: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEF85; /* 0x120EEF8A: jne 0x120eef85 */
L_120EEF8C:
    eax = MEM32(edx); /* 0x120EEF8C: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120EEF8E: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x120EEF90: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EEF93: inc esi */
    _flag_k = FK_INC;
    MEM32(ecx + eax) = esi; /* 0x120EEF94: mov dword ptr [ecx + eax], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x120EEF97: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x120EEF9A: mov eax, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x120EEF9C: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120EEF9D: push dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120EEFA0: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120EEFA2: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EEFA3: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x1C); /* 0x120EEFA8: mov edx, dword ptr [ebp + 0x1c] */
    eax = esi + 0x3; /* 0x120EEFAB: lea eax, [esi + 3] */
    esi = MEM32(ebp + 0x18); /* 0x120EEFAE: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120EEFB1: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x120EEFB4: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x120EEFB6: mov ecx, dword ptr [esi] */
    eax = MEM32(edx); /* 0x120EEFB8: mov eax, dword ptr [edx] */
    MEM32(eax + 0xC) = ecx; /* 0x120EEFBA: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x120EEFBD: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EEFC0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120EEFC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEFD5; /* 0x120EEFC5: jne 0x120eefd5 */
L_120EEFC7:
    eax = MEM32(esi); /* 0x120EEFC7: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x14); /* 0x120EEFC9: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax) = MEM32(ecx + eax) & 0; /* 0x120EEFCC: and dword ptr [ecx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x120EEFD0: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    goto L_120EF013; /* 0x120EEFD3: jmp 0x120ef013 */
L_120EEFD5:
    esi = ecx; /* 0x120EEFD5: mov esi, ecx */
    edx = esi + 0x1; /* 0x120EEFD7: lea edx, [esi + 1] */
L_120EEFDA:
    SET_LO8(eax, MEM8(esi)); /* 0x120EEFDA: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EEFDC: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120EEFDD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EEFDA; /* 0x120EEFDF: jne 0x120eefda */
L_120EEFE1:
    ecx = MEM32(ebp + 0x14); /* 0x120EEFE1: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x120EEFE4: sub esi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x120EEFE6: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(edx); /* 0x120EEFE9: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EEFEB: inc esi */
    _flag_k = FK_INC;
    MEM32(ecx + eax) = esi; /* 0x120EEFEC: mov dword ptr [ecx + eax], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x120EEFEF: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x120EEFF2: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120EEFF4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x120EEFF7: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x120EEFFA: push esi */
    PUSH32(esp, ecx); /* 0x120EEFFB: push ecx */
    PUSH32(esp, eax); /* 0x120EEFFC: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EEFFD: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x1C); /* 0x120EF002: mov edx, dword ptr [ebp + 0x1c] */
    eax = esi + 0x3; /* 0x120EF005: lea eax, [esi + 3] */
    esi = MEM32(ebp + 0x18); /* 0x120EF008: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120EF00B: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EF00E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x120EF011: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
L_120EF013:
    eax = MEM32(ebp + (-0x14)); /* 0x120EF013: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x120EF016: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF175; /* 0x120EF018: js 0x120ef175 */
L_120EF01E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EF01E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EF020: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x120EF021: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF11A; /* 0x120EF023: jle 0x120ef11a */
L_120EF029:
    /* cmp eax, 3 */ /* 0x120EF029: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF117; /* 0x120EF02C: jle 0x120ef117 */
L_120EF032:
    /* cmp eax, 4 */ /* 0x120EF032: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF0CB; /* 0x120EF035: je 0x120ef0cb */
L_120EF03B:
    /* cmp eax, 5 */ /* 0x120EF03B: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EF03E: jne 0x120ef175 */
L_120EF044:
    ebx = MEM32(ebp + 0xC); /* 0x120EF044: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx); /* 0x120EF047: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x14); /* 0x120EF049: mov eax, dword ptr [eax + 0x14] */
    ecx = MEM32(edx); /* 0x120EF04C: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x14) = eax; /* 0x120EF04E: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(ebx); /* 0x120EF051: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x14); /* 0x120EF053: mov ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x120EF056: add eax, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x120EF059: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x18u; /* 0x120EF05B: add dword ptr [edx], 0x18 */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x120EF05E: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EF060: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx); /* 0x120EF063: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120EF065: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi); /* 0x120EF068: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EF06A: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x120EF06D: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x18) = ecx; /* 0x120EF070: mov dword ptr [ebp + 0x18], ecx */
    /* test edi, edi */ /* 0x120EF073: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF17A; /* 0x120EF075: je 0x120ef17a */
L_120EF07B:
    ecx = MEM32(ebp + (-0x14)); /* 0x120EF07B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x120EF07E: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = ecx; /* 0x120EF082: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x120EF084: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(edx) = ecx; /* 0x120EF087: mov dword ptr [edx], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x120EF089: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi) = ecx; /* 0x120EF08C: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x120EF08E: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x120EF091: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF0C3; /* 0x120EF093: je 0x120ef0c3 */
L_120EF095:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EF095: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EF098: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x120EF09B: push edx */
    PUSH32(esp, esi); /* 0x120EF09C: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EF09D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EF0A0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120EF0A3: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EF0A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EEEF7); /* 0x120EF0A7: call 0x120eeef7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EF0AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF17A; /* 0x120EF0AE: js 0x120ef17a */
L_120EF0B4:
    ecx = MEM32(ebp + 0xC); /* 0x120EF0B4: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x1C); /* 0x120EF0B7: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EF0BA: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = ecx; /* 0x120EF0BB: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ecx, MEM32(ebp + 0x18) */ /* 0x120EF0BE: cmp ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF095; /* 0x120EF0C1: jb 0x120ef095 */
L_120EF0C3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120EF0C3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF07B; /* 0x120EF0C4: jne 0x120ef07b */
L_120EF0C6:
    goto L_120EF17A; /* 0x120EF0C6: jmp 0x120ef17a */
L_120EF0CB:
    /* cmp ebx, 4 */ /* 0x120EF0CB: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EF0CE: jl 0x120ef175 */
L_120EF0D4:
    /* cmp ebx, 9 */ /* 0x120EF0D4: cmp ebx, 9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF0EB; /* 0x120EF0D7: jle 0x120ef0eb */
L_120EF0D9:
    /* cmp ebx, 0xEu */ /* 0x120EF0D9: cmp ebx, 0xe */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EF0DC: jle 0x120ef175 */
L_120EF0E2:
    /* cmp ebx, 0x10u */ /* 0x120EF0E2: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EF0E5: jg 0x120ef175 */
L_120EF0EB:
    /* test edi, edi */ /* 0x120EF0EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF10C; /* 0x120EF0ED: je 0x120ef10c */
L_120EF0EF:
    esi = MEM32(ebp + 0x24); /* 0x120EF0EF: mov esi, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x20); /* 0x120EF0F2: mov ebx, dword ptr [ebp + 0x20] */
    edx = MEM32(ebp + 0x10); /* 0x120EF0F5: mov edx, dword ptr [ebp + 0x10] */
L_120EF0F8:
    ecx = MEM32(ebx); /* 0x120EF0F8: mov ecx, dword ptr [ebx] */
    eax = MEM32(esi); /* 0x120EF0FA: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x120EF0FC: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x120EF0FE: inc dword ptr [esi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x120EF100: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x120EF103: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120EF106: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF0F8; /* 0x120EF107: jne 0x120ef0f8 */
L_120EF109:
    edx = MEM32(ebp + 0x1C); /* 0x120EF109: mov edx, dword ptr [ebp + 0x1c] */
L_120EF10C:
    esi = MEM32(ebp + 0xC); /* 0x120EF10C: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x14u; /* 0x120EF10F: add dword ptr [esi], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x14u; /* 0x120EF112: add dword ptr [edx], 0x14 */
    _flag_k = FK_ADD;
    goto L_120EF170; /* 0x120EF115: jmp 0x120ef170 */
L_120EF117:
    MEM32(ebp + (-0x10)) = ecx; /* 0x120EF117: mov dword ptr [ebp - 0x10], ecx */
L_120EF11A:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x120EF11A: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120EF11E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x120EF121: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x14); /* 0x120EF123: mov eax, dword ptr [eax + 0x14] */
    ecx = MEM32(edx); /* 0x120EF126: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x14) = eax; /* 0x120EF128: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(esi); /* 0x120EF12B: mov eax, dword ptr [esi] */
    ecx = MEM32(edx); /* 0x120EF12D: mov ecx, dword ptr [edx] */
    eax = MEM32(eax + 0x18); /* 0x120EF12F: mov eax, dword ptr [eax + 0x18] */
    MEM32(ecx + 0x18) = eax; /* 0x120EF132: mov dword ptr [ecx + 0x18], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF13C; /* 0x120EF135: je 0x120ef13c */
L_120EF137:
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x120EF137: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x120EF137: shl edi, 4 */
    goto L_120EF13F; /* 0x120EF13A: jmp 0x120ef13f */
L_120EF13C:
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x120EF13C: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x120EF13C: shl edi, 2 */
L_120EF13F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EF13F: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF148; /* 0x120EF140: je 0x120ef148 */
L_120EF142:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EF142: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF148; /* 0x120EF143: je 0x120ef148 */
L_120EF145:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EF145: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF175; /* 0x120EF146: jne 0x120ef175 */
L_120EF148:
    esi = MEM32(ebp + 0x20); /* 0x120EF148: mov esi, dword ptr [ebp + 0x20] */
    ebx = edi; /* 0x120EF14B: mov ebx, edi */
    edi = MEM32(ebp + 0x10); /* 0x120EF14D: mov edi, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120EF150: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120EF150: shl ebx, 2 */
    PUSH32(esp, ebx); /* 0x120EF153: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x120EF154: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x120EF156: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF440); /* 0x120EF158: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ebx; /* 0x120EF15D: add dword ptr [edi], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ebx; /* 0x120EF15F: add dword ptr [esi], ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x120EF161: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x1C); /* 0x120EF164: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x1Cu; /* 0x120EF167: add dword ptr [eax], 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EF16A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x1Cu; /* 0x120EF16D: add dword ptr [edx], 0x1c */
    _flag_k = FK_ADD;
L_120EF170:
    eax = MEM32(ebp + (-0x4)); /* 0x120EF170: mov eax, dword ptr [ebp - 4] */
    goto L_120EF17A; /* 0x120EF173: jmp 0x120ef17a */
L_120EF175:
    eax = 0x80004005u; /* 0x120EF175: mov eax, 0x80004005 */
L_120EF17A:
    edi = POP32_VAL(esp); /* 0x120EF17A: pop edi */
    esi = POP32_VAL(esp); /* 0x120EF17B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EF17C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EF17D: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120EF17E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120EF186(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF186u);

L_120EF186:
    edi = edi; /* 0x120EF186: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF188: push ebp */
    ebp = esp; /* 0x120EF189: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x120EF18B: mov eax, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x24); /* 0x120EF18E: mov edx, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x120EF191: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120EF192: mov esi, dword ptr [ebp + 0x14] */
    ecx = esi + eax; /* 0x120EF195: lea ecx, [esi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x1C); /* 0x120EF198: add ecx, dword ptr [ebp + 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x20); /* 0x120EF19B: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x120EF19E: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax + 0x4; /* 0x120EF1A1: lea eax, [ecx + eax + 4] */
    PUSH32(esp, edx); /* 0x120EF1A5: push edx */
    MEM32(ebp + 0x24) = eax; /* 0x120EF1A6: mov dword ptr [ebp + 0x24], eax */
    eax = ebp + 0x24; /* 0x120EF1A9: lea eax, [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x120EF1AC: push eax */
    eax = ebp + 0x14; /* 0x120EF1AD: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EF1B0: push eax */
    eax = ebp + 0x18; /* 0x120EF1B1: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x120EF1B4: push eax */
    PUSH32(esp, esi); /* 0x120EF1B5: push esi */
    eax = ebp + 0x10; /* 0x120EF1B6: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EF1B9: push eax */
    eax = ebp + 0xC; /* 0x120EF1BA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EF1BD: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EF1BE: push dword ptr [ebp + 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x120EF1C1: mov dword ptr [ebp + 0x14], ecx */
    RECOMP_CALL(sub_120EEEF7); /* 0x120EF1C4: call 0x120eeef7 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x120EF1C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EF1CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120EF1CB: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120EF1D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF1D3u);

L_120EF1D3:
    edi = edi; /* 0x120EF1D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF1D5: push ebp */
    ebp = esp; /* 0x120EF1D6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EF1D8: push ecx */
    PUSH32(esp, ebx); /* 0x120EF1D9: push ebx */
    PUSH32(esp, esi); /* 0x120EF1DA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120EF1DB: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EF1DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EF1E0: push edi */
    edi = MEM32(esi); /* 0x120EF1E1: mov edi, dword ptr [esi] */
    ecx = MEM32(edi + 0x4); /* 0x120EF1E3: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(edi); /* 0x120EF1E6: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EF1E8: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EF1E9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x120EF1EB: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF1F3; /* 0x120EF1EE: jb 0x120ef1f3 */
L_120EF1F0:
    ebx = MEM32(edi + 0x10); /* 0x120EF1F0: mov ebx, dword ptr [edi + 0x10] */
L_120EF1F3:
    /* test ecx, ecx */ /* 0x120EF1F3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF2A9; /* 0x120EF1F5: js 0x120ef2a9 */
L_120EF1FB:
    /* cmp ecx, 3 */ /* 0x120EF1FB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF289; /* 0x120EF1FE: jle 0x120ef289 */
L_120EF204:
    /* cmp ecx, 4 */ /* 0x120EF204: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF252; /* 0x120EF207: je 0x120ef252 */
L_120EF209:
    /* cmp ecx, 5 */ /* 0x120EF209: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EF2A9; /* 0x120EF20C: jne 0x120ef2a9 */
L_120EF212:
    eax = MEM32(edi + 0x14); /* 0x120EF212: mov eax, dword ptr [edi + 0x14] */
    ecx = edi + 0x18; /* 0x120EF215: lea ecx, [edi + 0x18] */
    MEM32(ebp + 0x8) = eax; /* 0x120EF218: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120EF21B: mov dword ptr [ebp - 4], ecx */
    MEM32(esi) = ecx; /* 0x120EF21E: mov dword ptr [esi], ecx */
    /* test ebx, ebx */ /* 0x120EF220: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF2AE; /* 0x120EF222: je 0x120ef2ae */
L_120EF228:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EF228: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x120EF22A: mov dword ptr [esi], ecx */
    /* test eax, eax */ /* 0x120EF22C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF24D; /* 0x120EF22E: je 0x120ef24d */
L_120EF230:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EF230: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EF233: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EF236: push esi */
    RECOMP_CALL(sub_120EF1D3); /* 0x120EF237: call 0x120ef1d3 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EF23C: mov edx, eax */
    /* test edx, edx */ /* 0x120EF23E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF2AE; /* 0x120EF240: js 0x120ef2ae */
L_120EF242:
    eax = MEM32(ebp + 0x8); /* 0x120EF242: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EF245: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x120EF246: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF230; /* 0x120EF248: jb 0x120ef230 */
L_120EF24A:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EF24A: mov ecx, dword ptr [ebp - 4] */
L_120EF24D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EF24D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF228; /* 0x120EF24E: jne 0x120ef228 */
L_120EF250:
    goto L_120EF2AE; /* 0x120EF250: jmp 0x120ef2ae */
L_120EF252:
    /* cmp eax, 4 */ /* 0x120EF252: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EF2A9; /* 0x120EF255: jl 0x120ef2a9 */
L_120EF257:
    /* cmp eax, 9 */ /* 0x120EF257: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF266; /* 0x120EF25A: jle 0x120ef266 */
L_120EF25C:
    /* cmp eax, 0xEu */ /* 0x120EF25C: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF2A9; /* 0x120EF25F: jle 0x120ef2a9 */
L_120EF261:
    /* cmp eax, 0x10u */ /* 0x120EF261: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120EF2A9; /* 0x120EF264: jg 0x120ef2a9 */
L_120EF266:
    /* test ebx, ebx */ /* 0x120EF266: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF284; /* 0x120EF268: je 0x120ef284 */
L_120EF26A:
    edi = MEM32(ebp + 0x10); /* 0x120EF26A: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x120EF26D: mov esi, dword ptr [ebp + 0xc] */
L_120EF270:
    eax = MEM32(esi); /* 0x120EF270: mov eax, dword ptr [esi] */
    ecx = MEM32(edi); /* 0x120EF272: mov ecx, dword ptr [edi] */
    eax = MEM32(eax); /* 0x120EF274: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x120EF276: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120EF278: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x120EF27B: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EF27E: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF270; /* 0x120EF27F: jne 0x120ef270 */
L_120EF281:
    esi = MEM32(ebp + 0x8); /* 0x120EF281: mov esi, dword ptr [ebp + 8] */
L_120EF284:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x14u; /* 0x120EF284: add dword ptr [esi], 0x14 */
    _flag_k = FK_ADD;
    goto L_120EF2AE; /* 0x120EF287: jmp 0x120ef2ae */
L_120EF289:
    ecx = MEM32(edi + 0x18); /* 0x120EF289: mov ecx, dword ptr [edi + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi + 0x14)); /* 0x120EF28C: imul ecx, dword ptr [edi + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x120EF290: imul ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF293: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF29C; /* 0x120EF294: je 0x120ef29c */
L_120EF296:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF296: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF29C; /* 0x120EF297: je 0x120ef29c */
L_120EF299:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF299: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF2A9; /* 0x120EF29A: jne 0x120ef2a9 */
L_120EF29C:
    eax = MEM32(ebp + 0xC); /* 0x120EF29C: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120EF29F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120EF29F: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EF2A2: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x1Cu; /* 0x120EF2A4: add dword ptr [esi], 0x1c */
    _flag_k = FK_ADD;
    goto L_120EF2AE; /* 0x120EF2A7: jmp 0x120ef2ae */
L_120EF2A9:
    edx = 0x80004005u; /* 0x120EF2A9: mov edx, 0x80004005 */
L_120EF2AE:
    edi = POP32_VAL(esp); /* 0x120EF2AE: pop edi */
    esi = POP32_VAL(esp); /* 0x120EF2AF: pop esi */
    eax = edx; /* 0x120EF2B0: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x120EF2B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EF2B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EF2B4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EF2BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF2BCu);

L_120EF2BC:
    edi = edi; /* 0x120EF2BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF2BE: push ebp */
    ebp = esp; /* 0x120EF2BF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EF2C1: push ecx */
    PUSH32(esp, ecx); /* 0x120EF2C2: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x120EF2C3: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x120EF2C6: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120EF2C8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x120EF2CC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x120EF2CE: push ebx */
    PUSH32(esp, esi); /* 0x120EF2CF: push esi */
    esi = MEM32(ecx + 0x4); /* 0x120EF2D0: mov esi, dword ptr [ecx + 4] */
    PUSH32(esp, edi); /* 0x120EF2D3: push edi */
    edi = MEM32(ecx + 0x10); /* 0x120EF2D4: mov edi, dword ptr [ecx + 0x10] */
    /* cmp edi, 1 */ /* 0x120EF2D7: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EF2DF; /* 0x120EF2DA: jae 0x120ef2df */
L_120EF2DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EF2DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EF2DE: inc edi */
    _flag_k = FK_INC;
L_120EF2DF:
    /* test esi, esi */ /* 0x120EF2DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF373; /* 0x120EF2E1: js 0x120ef373 */
L_120EF2E7:
    /* cmp esi, 3 */ /* 0x120EF2E7: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF360; /* 0x120EF2EA: jle 0x120ef360 */
L_120EF2EC:
    /* cmp esi, 4 */ /* 0x120EF2EC: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF336; /* 0x120EF2EF: je 0x120ef336 */
L_120EF2F1:
    /* cmp esi, 5 */ /* 0x120EF2F1: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EF373; /* 0x120EF2F4: jne 0x120ef373 */
L_120EF2F6:
    ebx = MEM32(ecx + 0x14); /* 0x120EF2F6: mov ebx, dword ptr [ecx + 0x14] */
    eax = ecx + 0x18; /* 0x120EF2F9: lea eax, [ecx + 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EF2FC: mov dword ptr [ebp - 8], eax */
    MEM32(edx) = eax; /* 0x120EF2FF: mov dword ptr [edx], eax */
    /* test edi, edi */ /* 0x120EF301: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF39A; /* 0x120EF303: je 0x120ef39a */
L_120EF309:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EF309: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = eax; /* 0x120EF30B: mov dword ptr [edx], eax */
    /* test ebx, ebx */ /* 0x120EF30D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF331; /* 0x120EF30F: je 0x120ef331 */
L_120EF311:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EF311: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EF314: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x120EF317: push edx */
    RECOMP_CALL(sub_120EF2BC); /* 0x120EF318: call 0x120ef2bc */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120EF31D: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120EF31F: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x120EF322: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF39A; /* 0x120EF324: js 0x120ef39a */
L_120EF326:
    edx = MEM32(ebp + 0x8); /* 0x120EF326: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EF329: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x120EF32A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF311; /* 0x120EF32C: jb 0x120ef311 */
L_120EF32E:
    eax = MEM32(ebp + (-0x8)); /* 0x120EF32E: mov eax, dword ptr [ebp - 8] */
L_120EF331:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120EF331: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF309; /* 0x120EF332: jne 0x120ef309 */
L_120EF334:
    goto L_120EF39A; /* 0x120EF334: jmp 0x120ef39a */
L_120EF336:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x120EF336: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xEu */ /* 0x120EF339: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EF373; /* 0x120EF33C: ja 0x120ef373 */
L_120EF33E:
    eax = (uint32_t)MEM8(eax + 0x120EF3AC); /* 0x120EF33E: movzx eax, byte ptr [eax + 0x120ef3ac] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x120EF3A4)); goto _ljump; }
L_120EF34C:
    eax = MEM32(ebp + 0xC); /* 0x120EF34C: mov eax, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x120EF34F: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120EF351: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120EF351: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EF354: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x120EF356: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EF359: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_120EF35B:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 0x14u; /* 0x120EF35B: add dword ptr [edx], 0x14 */
    _flag_k = FK_ADD;
    goto L_120EF39A; /* 0x120EF35E: jmp 0x120ef39a */
L_120EF360:
    ebx = MEM32(ecx + 0x18); /* 0x120EF360: mov ebx, dword ptr [ecx + 0x18] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ecx + 0x14)); /* 0x120EF363: imul ebx, dword ptr [ecx + 0x14] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x120EF367: imul ebx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF36A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF37A; /* 0x120EF36B: je 0x120ef37a */
L_120EF36D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF36D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF37A; /* 0x120EF36E: je 0x120ef37a */
L_120EF370:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF370: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF37A; /* 0x120EF371: je 0x120ef37a */
L_120EF373:
    eax = 0x80004005u; /* 0x120EF373: mov eax, 0x80004005 */
    goto L_120EF39D; /* 0x120EF378: jmp 0x120ef39d */
L_120EF37A:
    edi = MEM32(ebp + 0x10); /* 0x120EF37A: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x120EF37D: mov esi, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120EF380: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120EF380: shl ebx, 2 */
    PUSH32(esp, ebx); /* 0x120EF383: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x120EF384: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x120EF386: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF440); /* 0x120EF388: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ebx; /* 0x120EF38D: add dword ptr [esi], ebx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x120EF38F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + ebx; /* 0x120EF392: add dword ptr [edi], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EF394: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x1Cu; /* 0x120EF397: add dword ptr [eax], 0x1c */
    _flag_k = FK_ADD;
L_120EF39A:
    eax = MEM32(ebp + (-0x4)); /* 0x120EF39A: mov eax, dword ptr [ebp - 4] */
L_120EF39D:
    edi = POP32_VAL(esp); /* 0x120EF39D: pop edi */
    esi = POP32_VAL(esp); /* 0x120EF39E: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EF39F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EF3A0: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EF3A1: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x120EF34Cu: goto L_120EF34C;
      case 0x120EF35Bu: goto L_120EF35B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120EF3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF3C0u);

L_120EF3C0:
    edi = edi; /* 0x120EF3C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF3C2: push ebp */
    ebp = esp; /* 0x120EF3C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EF3C5: push ecx */
    PUSH32(esp, ecx); /* 0x120EF3C6: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120EF3C7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120EF3CB: push ebx */
    PUSH32(esp, esi); /* 0x120EF3CC: push esi */
    PUSH32(esp, edi); /* 0x120EF3CD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EF3CE: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi); /* 0x120EF3D1: mov edx, dword ptr [edi] */
    esi = MEM32(edx + 0x10); /* 0x120EF3D3: mov esi, dword ptr [edx + 0x10] */
    ecx = MEM32(edx + 0x4); /* 0x120EF3D6: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x120EF3D9: mov eax, dword ptr [edx] */
    /* cmp esi, 1 */ /* 0x120EF3DB: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EF3E3; /* 0x120EF3DE: jae 0x120ef3e3 */
L_120EF3E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EF3E0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EF3E2: inc esi */
    _flag_k = FK_INC;
L_120EF3E3:
    /* test ecx, ecx */ /* 0x120EF3E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF6C3; /* 0x120EF3E5: js 0x120ef6c3 */
L_120EF3EB:
    /* cmp ecx, 3 */ /* 0x120EF3EB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF6B0; /* 0x120EF3EE: jle 0x120ef6b0 */
L_120EF3F4:
    /* cmp ecx, 4 */ /* 0x120EF3F4: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF44F; /* 0x120EF3F7: je 0x120ef44f */
L_120EF3F9:
    /* cmp ecx, 5 */ /* 0x120EF3F9: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EF6C3; /* 0x120EF3FC: jne 0x120ef6c3 */
L_120EF402:
    ecx = MEM32(edx + 0x14); /* 0x120EF402: mov ecx, dword ptr [edx + 0x14] */
    eax = edx + 0x18; /* 0x120EF405: lea eax, [edx + 0x18] */
    MEM32(ebp + 0x8) = ecx; /* 0x120EF408: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EF40B: mov dword ptr [ebp - 8], eax */
    MEM32(edi) = eax; /* 0x120EF40E: mov dword ptr [edi], eax */
    /* test esi, esi */ /* 0x120EF410: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF6D5; /* 0x120EF412: je 0x120ef6d5 */
L_120EF418:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EF418: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x120EF41A: mov dword ptr [edi], eax */
    /* test ecx, ecx */ /* 0x120EF41C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF447; /* 0x120EF41E: je 0x120ef447 */
L_120EF420:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EF420: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EF423: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EF426: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120EF429: push edi */
    RECOMP_CALL(sub_120EF3C0); /* 0x120EF42A: call 0x120ef3c0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EF42F: mov edx, eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x120EF431: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x120EF434: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EF6D5; /* 0x120EF436: js 0x120ef6d5 */
L_120EF43C:
    ecx = MEM32(ebp + 0x8); /* 0x120EF43C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EF43F: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x120EF440: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF420; /* 0x120EF442: jb 0x120ef420 */
L_120EF444:
    eax = MEM32(ebp + (-0x8)); /* 0x120EF444: mov eax, dword ptr [ebp - 8] */
L_120EF447:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EF447: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF418; /* 0x120EF448: jne 0x120ef418 */
L_120EF44A:
    goto L_120EF6D5; /* 0x120EF44A: jmp 0x120ef6d5 */
L_120EF44F:
    /* cmp eax, 0xFu */ /* 0x120EF44F: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_120EF5ED; /* 0x120EF452: jg 0x120ef5ed */
L_120EF458:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF546; /* 0x120EF458: je 0x120ef546 */
L_120EF45E:
    /* cmp eax, 4 */ /* 0x120EF45E: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF4DE; /* 0x120EF461: je 0x120ef4de */
L_120EF463:
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF6C3; /* 0x120EF463: jle 0x120ef6c3 */
L_120EF469:
    /* cmp eax, 9 */ /* 0x120EF469: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF476; /* 0x120EF46C: jle 0x120ef476 */
L_120EF46E:
    /* cmp eax, 0xEu */ /* 0x120EF46E: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_120EF5FB; /* 0x120EF471: jmp 0x120ef5fb */
L_120EF476:
    /* test esi, esi */ /* 0x120EF476: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF6AB; /* 0x120EF478: je 0x120ef6ab */
L_120EF47E:
    edi = MEM32(ebp + 0xC); /* 0x120EF47E: mov edi, dword ptr [ebp + 0xc] */
L_120EF481:
    eax = MEM32(edi); /* 0x120EF481: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120EF483: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x120EF485: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + 0x8); /* 0x120EF488: mov eax, dword ptr [edx + 8] */
    ebx = MEM32(eax + ecx * 4); /* 0x120EF48B: mov ebx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF48E: mov eax, dword ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x120EF490: mov edx, dword ptr [ebp + 0x10] */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x120EF493: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x120EF493: shl ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x1C); /* 0x120EF496: add ebx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x8); /* 0x120EF499: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x120EF49C: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF49F: mov eax, dword ptr [edx] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x120EF4A1: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x120EF4A1: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x120EF4A4: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x120EF4A7: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x120EF4AB: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF4B9; /* 0x120EF4AE: je 0x120ef4b9 */
L_120EF4B0:
    eax = MEM32(ecx + 0x4); /* 0x120EF4B0: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax); /* 0x120EF4B3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF4B5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF4B6: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_120EF4B9:
    ecx = MEM32(ebx + 0x4); /* 0x120EF4B9: mov ecx, dword ptr [ebx + 4] */
    /* test ecx, ecx */ /* 0x120EF4BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF4CA; /* 0x120EF4BE: je 0x120ef4ca */
L_120EF4C0:
    eax = MEM32(ecx); /* 0x120EF4C0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF4C2: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF4C3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x120EF4C6: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF4CA:
    eax = MEM32(ebp + 0xC); /* 0x120EF4CA: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x120EF4CD: mov eax, dword ptr [eax + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x120EF4D0: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120EF4D3: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EF4D6: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF481; /* 0x120EF4D7: jne 0x120ef481 */
L_120EF4D9:
    goto L_120EF6A8; /* 0x120EF4D9: jmp 0x120ef6a8 */
L_120EF4DE:
    /* test esi, esi */ /* 0x120EF4DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF6AB; /* 0x120EF4E0: je 0x120ef6ab */
L_120EF4E6:
    edi = MEM32(ebp + 0xC); /* 0x120EF4E6: mov edi, dword ptr [ebp + 0xc] */
L_120EF4E9:
    eax = MEM32(edi); /* 0x120EF4E9: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120EF4EB: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x120EF4ED: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + 0x8); /* 0x120EF4F0: mov eax, dword ptr [edx + 8] */
    ebx = MEM32(eax + ecx * 4); /* 0x120EF4F3: mov ebx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF4F6: mov eax, dword ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x120EF4F8: mov edx, dword ptr [ebp + 0x10] */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x120EF4FB: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x120EF4FB: shl ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x1C); /* 0x120EF4FE: add ebx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x8); /* 0x120EF501: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x120EF504: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF507: mov eax, dword ptr [edx] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x120EF509: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x120EF509: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x120EF50C: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x120EF50F: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x120EF513: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF521; /* 0x120EF516: je 0x120ef521 */
L_120EF518:
    eax = MEM32(ecx + 0x4); /* 0x120EF518: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax); /* 0x120EF51B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF51D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF51E: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_120EF521:
    ecx = MEM32(ebx + 0x4); /* 0x120EF521: mov ecx, dword ptr [ebx + 4] */
    /* test ecx, ecx */ /* 0x120EF524: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF532; /* 0x120EF526: je 0x120ef532 */
L_120EF528:
    eax = MEM32(ecx); /* 0x120EF528: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF52A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF52B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x120EF52E: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF532:
    eax = MEM32(ebp + 0xC); /* 0x120EF532: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x120EF535: mov eax, dword ptr [eax + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x120EF538: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120EF53B: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EF53E: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF4E9; /* 0x120EF53F: jne 0x120ef4e9 */
L_120EF541:
    goto L_120EF6A8; /* 0x120EF541: jmp 0x120ef6a8 */
L_120EF546:
    /* test esi, esi */ /* 0x120EF546: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF6AB; /* 0x120EF548: je 0x120ef6ab */
L_120EF54E:
    edi = MEM32(ebp + 0xC); /* 0x120EF54E: mov edi, dword ptr [ebp + 0xc] */
L_120EF551:
    eax = MEM32(edi); /* 0x120EF551: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120EF553: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x120EF555: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + 0x8); /* 0x120EF558: mov eax, dword ptr [edx + 8] */
    ebx = MEM32(eax + ecx * 4); /* 0x120EF55B: mov ebx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF55E: mov eax, dword ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x120EF560: mov edx, dword ptr [ebp + 0x10] */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x120EF563: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x120EF563: shl ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x1C); /* 0x120EF566: add ebx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x8); /* 0x120EF569: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x120EF56C: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF56F: mov eax, dword ptr [edx] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x120EF571: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x120EF571: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x120EF574: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x120EF577: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x120EF57B: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF58C; /* 0x120EF57E: je 0x120ef58c */
L_120EF580:
    eax = MEM32(ecx + 0x4); /* 0x120EF580: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax); /* 0x120EF583: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF585: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF586: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120EF589: mov ecx, dword ptr [ebp + 0xc] */
L_120EF58C:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x120EF58C: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF59B; /* 0x120EF590: je 0x120ef59b */
L_120EF592:
    eax = MEM32(ecx + 0x10); /* 0x120EF592: mov eax, dword ptr [ecx + 0x10] */
    ecx = MEM32(eax); /* 0x120EF595: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF597: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF598: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_120EF59B:
    ecx = MEM32(ebx + 0x4); /* 0x120EF59B: mov ecx, dword ptr [ebx + 4] */
    /* test ecx, ecx */ /* 0x120EF59E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF5AC; /* 0x120EF5A0: je 0x120ef5ac */
L_120EF5A2:
    eax = MEM32(ecx); /* 0x120EF5A2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF5A4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF5A5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x120EF5A8: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF5AC:
    ecx = MEM32(ebx + 0x10); /* 0x120EF5AC: mov ecx, dword ptr [ebx + 0x10] */
    /* test ecx, ecx */ /* 0x120EF5AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF5BD; /* 0x120EF5B1: je 0x120ef5bd */
L_120EF5B3:
    eax = MEM32(ecx); /* 0x120EF5B3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF5B5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF5B6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x120EF5B9: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF5BD:
    edx = MEM32(ebp + 0xC); /* 0x120EF5BD: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x4); /* 0x120EF5C0: mov eax, dword ptr [edx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x120EF5C3: mov dword ptr [ebx + 4], eax */
    eax = MEM32(edx + 0x10); /* 0x120EF5C6: mov eax, dword ptr [edx + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x120EF5C9: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(edx + 0x1C); /* 0x120EF5CC: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x1C))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x1C)));
    eax = eax ^ MEM32(ebx + 0x1C); /* 0x120EF5CF: xor eax, dword ptr [ebx + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x120EF5D2: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) ^ eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) ^ eax));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) ^ eax; /* 0x120EF5D5: xor dword ptr [ebx + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x14); /* 0x120EF5D8: mov eax, dword ptr [edx + 0x14] */
    MEM32(ebx + 0x14) = eax; /* 0x120EF5DB: mov dword ptr [ebx + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120EF5DE: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EF5E1: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF551; /* 0x120EF5E2: jne 0x120ef551 */
L_120EF5E8:
    goto L_120EF6A8; /* 0x120EF5E8: jmp 0x120ef6a8 */
L_120EF5ED:
    /* cmp eax, 0x10u */ /* 0x120EF5ED: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF606; /* 0x120EF5F0: je 0x120ef606 */
L_120EF5F2:
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EF6C3; /* 0x120EF5F2: jle 0x120ef6c3 */
L_120EF5F8:
    /* cmp eax, 0x12u */ /* 0x120EF5F8: cmp eax, 0x12 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_120EF5FB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_120EF6AB; /* 0x120EF5FB: jle 0x120ef6ab */
L_120EF601:
    goto L_120EF6C3; /* 0x120EF601: jmp 0x120ef6c3 */
L_120EF606:
    /* test esi, esi */ /* 0x120EF606: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF6AB; /* 0x120EF608: je 0x120ef6ab */
L_120EF60E:
    edi = MEM32(ebp + 0xC); /* 0x120EF60E: mov edi, dword ptr [ebp + 0xc] */
L_120EF611:
    eax = MEM32(edi); /* 0x120EF611: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x120EF613: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0x14); /* 0x120EF615: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + 0x8); /* 0x120EF618: mov eax, dword ptr [edx + 8] */
    ebx = MEM32(eax + ecx * 4); /* 0x120EF61B: mov ebx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF61E: mov eax, dword ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x120EF620: mov edx, dword ptr [ebp + 0x10] */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x120EF623: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x120EF623: shl ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x1C); /* 0x120EF626: add ebx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x8); /* 0x120EF629: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x120EF62C: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x120EF62F: mov eax, dword ptr [edx] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x120EF631: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x120EF631: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x1C); /* 0x120EF634: add ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x120EF637: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x120EF63B: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF64C; /* 0x120EF63E: je 0x120ef64c */
L_120EF640:
    eax = MEM32(ecx + 0x4); /* 0x120EF640: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax); /* 0x120EF643: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF645: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF646: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120EF649: mov ecx, dword ptr [ebp + 0xc] */
L_120EF64C:
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x120EF64C: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF65B; /* 0x120EF650: je 0x120ef65b */
L_120EF652:
    eax = MEM32(ecx + 0x10); /* 0x120EF652: mov eax, dword ptr [ecx + 0x10] */
    ecx = MEM32(eax); /* 0x120EF655: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EF657: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EF658: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_120EF65B:
    ecx = MEM32(ebx + 0x4); /* 0x120EF65B: mov ecx, dword ptr [ebx + 4] */
    /* test ecx, ecx */ /* 0x120EF65E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF66C; /* 0x120EF660: je 0x120ef66c */
L_120EF662:
    eax = MEM32(ecx); /* 0x120EF662: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF664: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF665: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x120EF668: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF66C:
    ecx = MEM32(ebx + 0x10); /* 0x120EF66C: mov ecx, dword ptr [ebx + 0x10] */
    /* test ecx, ecx */ /* 0x120EF66F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF67D; /* 0x120EF671: je 0x120ef67d */
L_120EF673:
    eax = MEM32(ecx); /* 0x120EF673: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EF675: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EF676: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x120EF679: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF67D:
    edx = MEM32(ebp + 0xC); /* 0x120EF67D: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x4); /* 0x120EF680: mov eax, dword ptr [edx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x120EF683: mov dword ptr [ebx + 4], eax */
    eax = MEM32(edx + 0x10); /* 0x120EF686: mov eax, dword ptr [edx + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x120EF689: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(edx + 0x1C); /* 0x120EF68C: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x1C))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x1C)));
    eax = eax ^ MEM32(ebx + 0x1C); /* 0x120EF68F: xor eax, dword ptr [ebx + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x120EF692: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x1C) ^ eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x1C) ^ eax));
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) ^ eax; /* 0x120EF695: xor dword ptr [ebx + 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x14); /* 0x120EF698: mov eax, dword ptr [edx + 0x14] */
    MEM32(ebx + 0x14) = eax; /* 0x120EF69B: mov dword ptr [ebx + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120EF69E: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EF6A1: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EF611; /* 0x120EF6A2: jne 0x120ef611 */
L_120EF6A8:
    edi = MEM32(ebp + 0x8); /* 0x120EF6A8: mov edi, dword ptr [ebp + 8] */
L_120EF6AB:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x14u; /* 0x120EF6AB: add dword ptr [edi], 0x14 */
    _flag_k = FK_ADD;
    goto L_120EF6D5; /* 0x120EF6AE: jmp 0x120ef6d5 */
L_120EF6B0:
    ecx = MEM32(edx + 0x18); /* 0x120EF6B0: mov ecx, dword ptr [edx + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x14)); /* 0x120EF6B3: imul ecx, dword ptr [edx + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120EF6B7: imul ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF6BA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF6CA; /* 0x120EF6BB: je 0x120ef6ca */
L_120EF6BD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF6BD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF6CA; /* 0x120EF6BE: je 0x120ef6ca */
L_120EF6C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EF6C0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EF6CA; /* 0x120EF6C1: je 0x120ef6ca */
L_120EF6C3:
    eax = 0x80004005u; /* 0x120EF6C3: mov eax, 0x80004005 */
    goto L_120EF6D8; /* 0x120EF6C8: jmp 0x120ef6d8 */
L_120EF6CA:
    eax = MEM32(ebp + 0xC); /* 0x120EF6CA: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120EF6CD: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120EF6CD: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x120EF6D0: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x1Cu; /* 0x120EF6D2: add dword ptr [edi], 0x1c */
    _flag_k = FK_ADD;
L_120EF6D5:
    eax = MEM32(ebp + (-0x4)); /* 0x120EF6D5: mov eax, dword ptr [ebp - 4] */
L_120EF6D8:
    edi = POP32_VAL(esp); /* 0x120EF6D8: pop edi */
    esi = POP32_VAL(esp); /* 0x120EF6D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EF6DA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EF6DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EF6DC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EF6E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF6E4u);

L_120EF6E4:
    edi = edi; /* 0x120EF6E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF6E6: push ebp */
    ebp = esp; /* 0x120EF6E7: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x120EF6E9: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120EF6EC: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF709; /* 0x120EF6EF: je 0x120ef709 */
L_120EF6F1:
    /* cmp MEM32(eax), 0 */ /* 0x120EF6F1: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF709; /* 0x120EF6F4: je 0x120ef709 */
L_120EF6F6:
    PUSH32(esp, eax); /* 0x120EF6F6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EF6F7: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x120EF6FA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EF6FD: push eax */
    eax = ebp + 0x8; /* 0x120EF6FE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120EF701: push eax */
    RECOMP_CALL(sub_120EF3C0); /* 0x120EF702: call 0x120ef3c0 */
    RECOMP_FLAGS_IN();
    goto L_120EF70B; /* 0x120EF707: jmp 0x120ef70b */
L_120EF709:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EF709: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF70B:
    ebp = POP32_VAL(esp); /* 0x120EF70B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EF70C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EF714(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EF714u);

L_120EF714:
    edi = edi; /* 0x120EF714: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EF716: push ebp */
    ebp = esp; /* 0x120EF717: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120EF719: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x120EF71C: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120EF71F: push ebx */
    PUSH32(esp, esi); /* 0x120EF720: push esi */
    esi = ecx; /* 0x120EF721: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x120EF723: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ecx + 0x34); /* 0x120EF726: mov ebx, dword ptr [ecx + 0x34] */
    eax = MEM32(ecx + 0x38); /* 0x120EF729: mov eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edx + 0x24); /* 0x120EF72C: add ebx, dword ptr [edx + 0x24] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x24); /* 0x120EF72F: add eax, dword ptr [edx + 0x24] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120EF732: push edi */
    edi = MEM32(esi + 0x1C); /* 0x120EF733: mov edi, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120EF736: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EF739: mov dword ptr [ebp - 0xc], eax */
    /* test edi, edi */ /* 0x120EF73C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF77B; /* 0x120EF73E: je 0x120ef77b */
L_120EF740:
    ecx = esi + 0x10; /* 0x120EF740: lea ecx, [esi + 0x10] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120EF743: mov dword ptr [ebp - 0x10], ecx */
L_120EF746:
    eax = MEM32(edi); /* 0x120EF746: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x120EF748: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120EF74A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120EF74E: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x4); /* 0x120EF751: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EF754: push eax */
    eax = ebp + (-0x14); /* 0x120EF755: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x120EF758: push eax */
    PUSH32(esp, MEM32(ecx)); /* 0x120EF759: push dword ptr [ecx] */
    eax = ebp + (-0x18); /* 0x120EF75B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120EF75E: push eax */
    PUSH32(esp, MEM32(edx + 0x24)); /* 0x120EF75F: push dword ptr [edx + 0x24] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120EF762: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_120EEBB1); /* 0x120EF765: call 0x120eebb1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EF76A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EF7E6; /* 0x120EF76C: jns 0x120ef7e6 */
L_120EF76E:
    edi = MEM32(edi + 0x20); /* 0x120EF76E: mov edi, dword ptr [edi + 0x20] */
    edx = MEM32(ebp + 0x8); /* 0x120EF771: mov edx, dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x120EF774: lea ecx, [esi + 0x10] */
    /* test edi, edi */ /* 0x120EF777: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EF746; /* 0x120EF779: jne 0x120ef746 */
L_120EF77B:
    eax = ebp + (-0x14); /* 0x120EF77B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x120EF77E: push eax */
    eax = ebp + (-0x10); /* 0x120EF77F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120EF782: push eax */
    eax = ebp + (-0x4); /* 0x120EF783: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EF786: push eax */
    eax = ebp + (-0x18); /* 0x120EF787: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120EF78A: push eax */
    PUSH32(esp, MEM32(edx + 0x24)); /* 0x120EF78B: push dword ptr [edx + 0x24] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120EF78E: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_120EED55); /* 0x120EF791: call 0x120eed55 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EF796: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120EF798: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFA14; /* 0x120EF79A: js 0x120efa14 */
L_120EF7A0:
    eax = MEM32(esi + 0x14); /* 0x120EF7A0: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x120EF7A3: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x14)); /* 0x120EF7A6: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x120EF7A9: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ecx = eax + ebx + 0x4; /* 0x120EF7AC: lea ecx, [eax + ebx + 4] */
    eax = MEM32(esi + 0x18); /* 0x120EF7B0: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120EF7B3: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ecx, eax */ /* 0x120EF7B6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EF889; /* 0x120EF7B8: jbe 0x120ef889 */
L_120EF7BE:
    ecx = eax + eax; /* 0x120EF7BE: lea ecx, [eax + eax] */
    eax = 0x00010000u; /* 0x120EF7C1: mov eax, 0x10000 */
    /* cmp ecx, eax */ /* 0x120EF7C6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120EF7CC; /* 0x120EF7C8: jb 0x120ef7cc */
L_120EF7CA:
    eax = ecx; /* 0x120EF7CA: mov eax, ecx */
L_120EF7CC:
    PUSH32(esp, eax); /* 0x120EF7CC: push eax */
    MEM32(esi + 0x18) = eax; /* 0x120EF7CD: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_121BF394); /* 0x120EF7D0: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EF7D5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x120EF7D7: pop ecx */
    /* test edi, edi */ /* 0x120EF7D8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EF84B; /* 0x120EF7DA: jne 0x120ef84b */
L_120EF7DC:
    ebx = 0x8007000Eu; /* 0x120EF7DC: mov ebx, 0x8007000e */
    goto L_120EFA14; /* 0x120EF7E1: jmp 0x120efa14 */
L_120EF7E6:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x120EF7E6: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF80B; /* 0x120EF7EA: je 0x120ef80b */
L_120EF7EC:
    ecx = MEM32(edi + 0x1C); /* 0x120EF7EC: mov ecx, dword ptr [edi + 0x1c] */
    /* cmp MEM32(ecx), 0 */ /* 0x120EF7EF: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF80B; /* 0x120EF7F2: je 0x120ef80b */
L_120EF7F4:
    eax = MEM32(ebp + 0x8); /* 0x120EF7F4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x120EF7F7: mov ecx, dword ptr [ecx] */
    eax = MEM32(eax + 0x10); /* 0x120EF7F9: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x120EF7FC: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EF80B; /* 0x120EF7FF: je 0x120ef80b */
L_120EF801:
    ebx = 0x80004005u; /* 0x120EF801: mov ebx, 0x80004005 */
    goto L_120EFA14; /* 0x120EF806: jmp 0x120efa14 */
L_120EF80B:
    eax = edi + 0xC; /* 0x120EF80B: lea eax, [edi + 0xc] */
    /* cmp eax, MEM32(edi + 0x1C) */ /* 0x120EF80E: cmp eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EF922; /* 0x120EF811: jne 0x120ef922 */
L_120EF817:
    eax = MEM32(ebp + (-0xC)); /* 0x120EF817: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120EF81A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120EF81D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi + 0x4); /* 0x120EF820: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x120EF823: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x120EF825: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x120EF828: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x18); /* 0x120EF82B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120EF82E: push eax */
    eax = ebp + (-0x14); /* 0x120EF82F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x120EF832: push eax */
    eax = ebp + (-0x4); /* 0x120EF833: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EF836: push eax */
    RECOMP_CALL(sub_120EF2BC); /* 0x120EF837: call 0x120ef2bc */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EF83C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120EF83E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFA14; /* 0x120EF840: js 0x120efa14 */
L_120EF846:
    goto L_120EF91F; /* 0x120EF846: jmp 0x120ef91f */
L_120EF84B:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x120EF84B: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EF860; /* 0x120EF84F: jbe 0x120ef860 */
L_120EF851:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x120EF851: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x120EF854: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x120EF857: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x120EF858: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EF85D: add esp, 0xc */
    _flag_k = FK_ADD;
L_120EF860:
    ecx = MEM32(esi + 0x14); /* 0x120EF860: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x18); /* 0x120EF863: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120EF866: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x120EF868: push eax */
    eax = ecx + edi; /* 0x120EF869: lea eax, [ecx + edi] */
    PUSH32(esp, 0); /* 0x120EF86C: push 0 */
    PUSH32(esp, eax); /* 0x120EF86E: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x120EF86F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x120EF874: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x120EF877: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120EF87C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x120EF87F: mov ecx, esi */
    MEM32(esi + 0x10) = edi; /* 0x120EF881: mov dword ptr [esi + 0x10], edi */
    RECOMP_CALL(sub_120EEA66); /* 0x120EF884: call 0x120eea66 */
    RECOMP_FLAGS_IN();
L_120EF889:
    ecx = ebp + (-0x1C); /* 0x120EF889: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x120EF88C: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120EF88D: push dword ptr [ebp - 4] */
    eax = esi + 0x10; /* 0x120EF890: lea eax, [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x120EF893: push ebx */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x120EF894: push dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EF897: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, MEM32(eax)); /* 0x120EF89A: push dword ptr [eax] */
    eax = MEM32(ebp + (-0xC)); /* 0x120EF89C: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x120EF89F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120EF8A0: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x8); /* 0x120EF8A3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x120EF8A6: push dword ptr [eax + 0x24] */
    RECOMP_CALL(sub_120EF186); /* 0x120EF8A9: call 0x120ef186 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EF8AE: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120EF8B0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFA14; /* 0x120EF8B2: js 0x120efa14 */
L_120EF8B8:
    PUSH32(esp, 0x24u); /* 0x120EF8B8: push 0x24 */
    RECOMP_CALL(sub_121BF394); /* 0x120EF8BA: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EF8BF: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x120EF8C1: pop ecx */
    /* test edi, edi */ /* 0x120EF8C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF8DB; /* 0x120EF8C4: je 0x120ef8db */
L_120EF8C6:
    ecx = edi + 0xC; /* 0x120EF8C6: lea ecx, [edi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EF8C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x120EF8CB: mov dword ptr [ecx + 8], eax */
    MEM32(ecx) = eax; /* 0x120EF8CE: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x10) = ecx; /* 0x120EF8D0: mov dword ptr [ecx + 0x10], ecx */
    MEM32(ecx + 0xC) = ecx; /* 0x120EF8D3: mov dword ptr [ecx + 0xc], ecx */
    MEM32(edi + 0x20) = eax; /* 0x120EF8D6: mov dword ptr [edi + 0x20], eax */
    goto L_120EF8DD; /* 0x120EF8D9: jmp 0x120ef8dd */
L_120EF8DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EF8DB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF8DD:
    /* test edi, edi */ /* 0x120EF8DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF7DC; /* 0x120EF8DF: je 0x120ef7dc */
L_120EF8E5:
    eax = MEM32(esi + 0x14); /* 0x120EF8E5: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(ebp + (-0x14)); /* 0x120EF8E8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120EF8EB: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x120EF8ED: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x14); /* 0x120EF8EF: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x120EF8F2: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    eax = eax + ecx + 0x4; /* 0x120EF8F5: lea eax, [eax + ecx + 4] */
    MEM32(edi + 0x4) = eax; /* 0x120EF8F9: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x120EF8FC: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x8) = eax; /* 0x120EF8FF: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0x1C); /* 0x120EF902: mov eax, dword ptr [esi + 0x1c] */
    MEM32(edi + 0x20) = eax; /* 0x120EF905: mov dword ptr [edi + 0x20], eax */
    edx = MEM32(esi + 0x20); /* 0x120EF908: mov edx, dword ptr [esi + 0x20] */
    eax = MEM32(edi + 0x4); /* 0x120EF90B: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(esi + 0x10); /* 0x120EF90E: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EF911: inc edx */
    _flag_k = FK_INC;
    MEM32(ecx + eax + (-0x4)) = edx; /* 0x120EF912: mov dword ptr [ecx + eax - 4], edx */
    eax = MEM32(ebp + (-0x18)); /* 0x120EF916: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x1C) = edi; /* 0x120EF919: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0x14) = eax; /* 0x120EF91C: mov dword ptr [esi + 0x14], eax */
L_120EF91F:
    ebx = MEM32(ebp + (-0x8)); /* 0x120EF91F: mov ebx, dword ptr [ebp - 8] */
L_120EF922:
    PUSH32(esp, 0x14u); /* 0x120EF922: push 0x14 */
    RECOMP_CALL(sub_121BF394); /* 0x120EF924: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EF929: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x120EF92B: pop ecx */
    /* test esi, esi */ /* 0x120EF92C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF93F; /* 0x120EF92E: je 0x120ef93f */
L_120EF930:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x120EF930: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120EF934: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = esi; /* 0x120EF937: mov dword ptr [esi + 0x10], esi */
    MEM32(esi + 0xC) = esi; /* 0x120EF93A: mov dword ptr [esi + 0xc], esi */
    goto L_120EF941; /* 0x120EF93D: jmp 0x120ef941 */
L_120EF93F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EF93F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EF941:
    /* test esi, esi */ /* 0x120EF941: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF7DC; /* 0x120EF943: je 0x120ef7dc */
L_120EF949:
    eax = MEM32(edi + 0x8); /* 0x120EF949: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x120EF94C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EF999; /* 0x120EF94E: je 0x120ef999 */
L_120EF950:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EF950: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120EF952: push 4 */
    edx = POP32_VAL(esp); /* 0x120EF954: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EF955: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EF957: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EF95A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EF95C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EF95E: push ecx */
    RECOMP_CALL(sub_121BF394); /* 0x120EF95F: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EF964: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x120EF965: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x120EF968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EF976; /* 0x120EF96A: jne 0x120ef976 */
L_120EF96C:
    ebx = 0x8007000Eu; /* 0x120EF96C: mov ebx, 0x8007000e */
    goto L_120EFA02; /* 0x120EF971: jmp 0x120efa02 */
L_120EF976:
    MEM32(ebp + (-0x18)) = eax; /* 0x120EF976: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x120EF979: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120EF97C: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x18); /* 0x120EF97F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120EF982: push eax */
    eax = ebp + (-0x14); /* 0x120EF983: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x120EF986: push eax */
    eax = ebp + (-0xC); /* 0x120EF987: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x120EF98A: push eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x120EF98B: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_120EF1D3); /* 0x120EF98E: call 0x120ef1d3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EF993: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120EF995: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFA02; /* 0x120EF997: js 0x120efa02 */
L_120EF999:
    ecx = MEM32(ebp + 0xC); /* 0x120EF999: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120EF99C: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x120EF99F: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = ecx; /* 0x120EF9A1: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edi + 0x1C); /* 0x120EF9A4: mov eax, dword ptr [edi + 0x1c] */
    MEM32(eax + 0xC) = esi; /* 0x120EF9A7: mov dword ptr [eax + 0xc], esi */
    ebx = MEM32(ebp + (-0x10)); /* 0x120EF9AA: mov ebx, dword ptr [ebp - 0x10] */
    eax = edi + 0xC; /* 0x120EF9AD: lea eax, [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x120EF9B0: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x1C); /* 0x120EF9B3: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x120EF9B6: mov dword ptr [esi + 0x10], eax */
    MEM32(edi + 0x1C) = esi; /* 0x120EF9B9: mov dword ptr [edi + 0x1c], esi */
    MEM32(ecx + 0x48) = esi; /* 0x120EF9BC: mov dword ptr [ecx + 0x48], esi */
    eax = MEM32(edi); /* 0x120EF9BF: mov eax, dword ptr [edi] */
    MEM32(ecx + 0x34) = eax; /* 0x120EF9C1: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(edi + 0x4); /* 0x120EF9C4: mov eax, dword ptr [edi + 4] */
    MEM32(ecx + 0x38) = eax; /* 0x120EF9C7: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(ebx); /* 0x120EF9CA: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x120EF9CC: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EF9CE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x120EF9D0: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebx); /* 0x120EF9D3: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x120EF9D5: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x120EF9D8: mov dword ptr [ecx], eax */
    ecx = MEM32(ebx); /* 0x120EF9DA: mov ecx, dword ptr [ebx] */
    eax = MEM32(edi + 0x4); /* 0x120EF9DC: mov eax, dword ptr [edi + 4] */
    eax = ecx + eax + (-0x4); /* 0x120EF9DF: lea eax, [ecx + eax - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x120EF9E3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ecx + 0x48)); /* 0x120EF9E6: push dword ptr [ecx + 0x48] */
    MEM32(ecx + 0x8) = eax; /* 0x120EF9E9: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ecx + 0x38); /* 0x120EF9EC: mov eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x120EF9EF: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x120EF9F1: push dword ptr [edi + 0x18] */
    PUSH32(esp, eax); /* 0x120EF9F4: push eax */
    eax = MEM32(ecx + 0x34); /* 0x120EF9F5: mov eax, dword ptr [ecx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x120EF9F8: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120EF9FA: push eax */
    RECOMP_CALL(sub_120EF6E4); /* 0x120EF9FB: call 0x120ef6e4 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EFA00: mov ebx, eax */
L_120EFA02:
    /* test esi, esi */ /* 0x120EFA02: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFA14; /* 0x120EFA04: je 0x120efa14 */
L_120EFA06:
    ecx = esi; /* 0x120EFA06: mov ecx, esi */
    RECOMP_CALL(sub_120EE9FF); /* 0x120EFA08: call 0x120ee9ff */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EFA0D: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EFA0E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EFA13: pop ecx */
L_120EFA14:
    PUSH32(esp, 0); /* 0x120EFA14: push 0 */
    RECOMP_CALL(sub_121BF388); /* 0x120EFA16: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EFA1B: pop ecx */
    edi = POP32_VAL(esp); /* 0x120EFA1C: pop edi */
    esi = POP32_VAL(esp); /* 0x120EFA1D: pop esi */
    eax = ebx; /* 0x120EFA1E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x120EFA20: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EFA21: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EFA22: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EFA2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFA2Au);

L_120EFA2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFA2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EFA2C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EFA2E: inc edx */
    _flag_k = FK_INC;
    MEM32(ecx + 0x10) = eax; /* 0x120EFA2F: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x120EFA32: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x14) = eax; /* 0x120EFA35: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x18) = eax; /* 0x120EFA38: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x8) = eax; /* 0x120EFA3B: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x120EFA3E: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x24) = eax; /* 0x120EFA41: mov dword ptr [ecx + 0x24], eax */
    MEM32(ecx) = 0x1200A030u; /* 0x120EFA44: mov dword ptr [ecx], 0x1200a030 */
    MEM32(ecx + 0x4) = edx; /* 0x120EFA4A: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x20) = edx; /* 0x120EFA4D: mov dword ptr [ecx + 0x20], edx */
    eax = ecx; /* 0x120EFA50: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EFA52: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EFA58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFA58u);

L_120EFA58:
    edi = edi; /* 0x120EFA58: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFA5A: push ebp */
    ebp = esp; /* 0x120EFA5B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EFA5D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120EFA5E: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x120EFA61: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EFA6B; /* 0x120EFA64: je 0x120efa6b */
L_120EFA66:
    eax = MEM32(esi + 0x4); /* 0x120EFA66: mov eax, dword ptr [esi + 4] */
    goto L_120EFA7B; /* 0x120EFA69: jmp 0x120efa7b */
L_120EFA6B:
    ecx = esi; /* 0x120EFA6B: mov ecx, esi */
    RECOMP_CALL(sub_120EEB2C); /* 0x120EFA6D: call 0x120eeb2c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EFA72: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EFA73: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EFA78: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFA79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFA7B:
    esi = POP32_VAL(esp); /* 0x120EFA7B: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EFA7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFA7D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFA85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFA85u);

L_120EFA85:
    edi = edi; /* 0x120EFA85: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFA87: push ebp */
    ebp = esp; /* 0x120EFA88: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EFA8A: push ecx */
    PUSH32(esp, ecx); /* 0x120EFA8B: push ecx */
    PUSH32(esp, ebx); /* 0x120EFA8C: push ebx */
    PUSH32(esp, esi); /* 0x120EFA8D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120EFA8E: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi); /* 0x120EFA91: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x120EFA93: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EFA94: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ecx + edi + 0x10); /* 0x120EFA97: mov ebx, dword ptr [ecx + edi + 0x10] */
    edx = MEM32(ecx + edi + 0x4); /* 0x120EFA9B: mov edx, dword ptr [ecx + edi + 4] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120EFA9F: mov dword ptr [ebp - 8], ebx */
    /* test ebx, ebx */ /* 0x120EFAA2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFAAA; /* 0x120EFAA4: jne 0x120efaaa */
L_120EFAA6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EFAA6: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ebx; /* 0x120EFAA7: mov dword ptr [ebp - 8], ebx */
L_120EFAAA:
    /* test edx, edx */ /* 0x120EFAAA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFB7B; /* 0x120EFAAC: js 0x120efb7b */
L_120EFAB2:
    /* cmp edx, 3 */ /* 0x120EFAB2: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EFB3E; /* 0x120EFAB5: jle 0x120efb3e */
L_120EFABB:
    PUSH32(esp, 4); /* 0x120EFABB: push 4 */
    eax = POP32_VAL(esp); /* 0x120EFABD: pop eax */
    /* cmp edx, eax */ /* 0x120EFABE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFB1B; /* 0x120EFAC0: je 0x120efb1b */
L_120EFAC2:
    /* cmp edx, 5 */ /* 0x120EFAC2: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFB7B; /* 0x120EFAC5: jne 0x120efb7b */
L_120EFACB:
    eax = MEM32(ecx + edi + 0x14); /* 0x120EFACB: mov eax, dword ptr [ecx + edi + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x120EFACF: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x120EFAD2: mov dword ptr [ebp + 8], eax */
    eax = ecx + 0x18; /* 0x120EFAD5: lea eax, [ecx + 0x18] */
    MEM32(esi) = eax; /* 0x120EFAD8: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EFADA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x120EFADC: mov eax, esi */
    MEM32(edx) = esi; /* 0x120EFADE: mov dword ptr [edx], esi */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x120EFAE0: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFB0F; /* 0x120EFAE3: je 0x120efb0f */
L_120EFAE5:
    ebx = esi; /* 0x120EFAE5: mov ebx, esi */
L_120EFAE7:
    eax = ebp + (-0x4); /* 0x120EFAE7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EFAEA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EFAEB: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = esi; /* 0x120EFAEE: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edi); /* 0x120EFAF1: push edi */
    RECOMP_CALL(sub_120EFA85); /* 0x120EFAF2: call 0x120efa85 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x120EFAF7: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x120EFAFA: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x120EFAFC: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x120EFAFF: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x120EFB01: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EFAE7; /* 0x120EFB04: jne 0x120efae7 */
L_120EFB06:
    MEM32(ebp + 0x10) = ebx; /* 0x120EFB06: mov dword ptr [ebp + 0x10], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x120EFB09: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x10); /* 0x120EFB0C: mov eax, dword ptr [ebp + 0x10] */
L_120EFB0F:
    ecx = MEM32(edx); /* 0x120EFB0F: mov ecx, dword ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x120EFB11: imul ecx, ebx */
    MEM32(edx) = ecx; /* 0x120EFB14: mov dword ptr [edx], ecx */
L_120EFB16:
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x120EFB16: imul eax, ebx */
    goto L_120EFB83; /* 0x120EFB19: jmp 0x120efb83 */
L_120EFB1B:
    /* cmp MEM32(ecx + edi), 0xAu */ /* 0x120EFB1B: cmp dword ptr [ecx + edi], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + edi)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_120EFB32; /* 0x120EFB1F: jl 0x120efb32 */
L_120EFB21:
    /* cmp MEM32(ecx + edi), 0xEu */ /* 0x120EFB21: cmp dword ptr [ecx + edi], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx + edi)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EFB30; /* 0x120EFB25: jle 0x120efb30 */
L_120EFB27:
    /* cmp MEM32(ecx + edi), 0x00F30000u */ /* 0x120EFB27: cmp dword ptr [ecx + edi], 0xf30000 */
    _flag_a = (uint32_t)(MEM32(ecx + edi)); _flag_b = (uint32_t)(0x00F30000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFB32; /* 0x120EFB2E: jne 0x120efb32 */
L_120EFB30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFB30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFB32:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x120EFB32: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x120EFB35: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x120EFB37: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = ebx; /* 0x120EFB3A: mov dword ptr [ecx], ebx */
    RECOMP_BACKEDGE();
    goto L_120EFB16; /* 0x120EFB3C: jmp 0x120efb16 */
L_120EFB3E:
    eax = MEM32(ecx + edi + 0x18); /* 0x120EFB3E: mov eax, dword ptr [ecx + edi + 0x18] */
    edx = MEM32(ecx + edi + 0x14); /* 0x120EFB42: mov edx, dword ptr [ecx + edi + 0x14] */
    MEM32(ebp + 0x8) = eax; /* 0x120EFB46: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ecx + edi); /* 0x120EFB49: mov eax, dword ptr [ecx + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EFB4C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EFB5B; /* 0x120EFB4D: je 0x120efb5b */
L_120EFB4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EFB4F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EFB5B; /* 0x120EFB50: je 0x120efb5b */
L_120EFB52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EFB52: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EFB5B; /* 0x120EFB53: je 0x120efb5b */
L_120EFB55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EFB55: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x120EFB57: mov ebx, esi */
    goto L_120EFB5E; /* 0x120EFB59: jmp 0x120efb5e */
L_120EFB5B:
    PUSH32(esp, 4); /* 0x120EFB5B: push 4 */
    esi = POP32_VAL(esp); /* 0x120EFB5D: pop esi */
L_120EFB5E:
    eax = ecx + 0x1C; /* 0x120EFB5E: lea eax, [ecx + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x120EFB61: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x120EFB64: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EFB66: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x120EFB69: mov ecx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120EFB6C: imul eax, edx */
    edx = eax; /* 0x120EFB6F: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x120EFB71: imul edx, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120EFB74: imul eax, esi */
    MEM32(ecx) = edx; /* 0x120EFB77: mov dword ptr [ecx], edx */
    RECOMP_BACKEDGE();
    goto L_120EFB16; /* 0x120EFB79: jmp 0x120efb16 */
L_120EFB7B:
    eax = MEM32(ebp + 0x10); /* 0x120EFB7B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x120EFB7E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFB81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFB83:
    edi = POP32_VAL(esp); /* 0x120EFB83: pop edi */
    esi = POP32_VAL(esp); /* 0x120EFB84: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFB85: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EFB86: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EFB87: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EFB8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFB8Fu);

L_120EFB8F:
    edi = edi; /* 0x120EFB8F: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EFB91: push esi */
    esi = ecx; /* 0x120EFB92: mov esi, ecx */
    eax = MEM32(esi + 0x58); /* 0x120EFB94: mov eax, dword ptr [esi + 0x58] */
    MEM32(esi) = 0x1200A134u; /* 0x120EFB97: mov dword ptr [esi], 0x1200a134 */
    MEM32(esi + 0x6C) = 0x1200A040u; /* 0x120EFB9D: mov dword ptr [esi + 0x6c], 0x1200a040 */
    /* test eax, eax */ /* 0x120EFBA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFBAB; /* 0x120EFBA6: je 0x120efbab */
L_120EFBA8:
    PUSH32(esp, esi); /* 0x120EFBA8: push esi */
    RECOMP_ICALL(eax); /* 0x120EFBA9: call eax */
    RECOMP_FLAGS_IN();
L_120EFBAB:
    /* cmp MEM32(esi + 0x78), 0 */ /* 0x120EFBAB: cmp dword ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFBBA; /* 0x120EFBAF: je 0x120efbba */
L_120EFBB1:
    PUSH32(esp, MEM32(esi + 0x78)); /* 0x120EFBB1: push dword ptr [esi + 0x78] */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120EFBB4: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120EFBBA:
    esi = POP32_VAL(esp); /* 0x120EFBBA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EFBBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EFBC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFBC1u);

L_120EFBC1:
    edi = edi; /* 0x120EFBC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFBC3: push ebp */
    ebp = esp; /* 0x120EFBC4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120EFBC6: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x8); /* 0x120EFBC9: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EFBCC: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + 0x8) = eax; /* 0x120EFBCD: mov dword ptr [ecx + 8], eax */
    ebp = POP32_VAL(esp); /* 0x120EFBD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFBD1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFBD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFBD9u);

L_120EFBD9:
    edi = edi; /* 0x120EFBD9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFBDB: push ebp */
    ebp = esp; /* 0x120EFBDC: mov ebp, esp */
    eax = MEM32(ecx + 0x70); /* 0x120EFBDE: mov eax, dword ptr [ecx + 0x70] */
    edx = MEM32(ebp + 0x8); /* 0x120EFBE1: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120EFBE4: push esi */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120EFBE5: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x80000003u; /* 0x120EFBE7: mov esi, 0x80000003 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120EFBEC: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x120EFBEE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC17; /* 0x120EFBF0: jne 0x120efc17 */
L_120EFBF2:
    edx = ~edx; /* 0x120EFBF2: not edx */
    /* cmp MEM32(edx), 3 */ /* 0x120EFBF4: cmp dword ptr [edx], 3 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC13; /* 0x120EFBF7: jne 0x120efc13 */
L_120EFBF9:
    /* cmp MEM32(edx + 0x18), 0 */ /* 0x120EFBF9: cmp dword ptr [edx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC13; /* 0x120EFBFD: jne 0x120efc13 */
L_120EFBFF:
    /* cmp MEM32(edx + 0x10), 0xFFFFFFFFu */ /* 0x120EFBFF: cmp dword ptr [edx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC13; /* 0x120EFC03: jne 0x120efc13 */
L_120EFC05:
    eax = MEM32(edx + 0x4); /* 0x120EFC05: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x44); /* 0x120EFC08: mov eax, dword ptr [eax + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120EFC0B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120EFC0D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120EFC0F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EFC60; /* 0x120EFC11: jmp 0x120efc60 */
L_120EFC13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFC13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EFC60; /* 0x120EFC15: jmp 0x120efc60 */
L_120EFC17:
    eax = MEM32(ecx + 0x44); /* 0x120EFC17: mov eax, dword ptr [ecx + 0x44] */
    PUSH32(esp, ebx); /* 0x120EFC1A: push ebx */
    goto L_120EFC5B; /* 0x120EFC1B: jmp 0x120efc5b */
L_120EFC1D:
    /* test edx, edx */ /* 0x120EFC1D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFC26; /* 0x120EFC1F: jne 0x120efc26 */
L_120EFC21:
    /* cmp MEM32(eax + 0x20), edx */ /* 0x120EFC21: cmp dword ptr [eax + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_120EFC56; /* 0x120EFC24: jmp 0x120efc56 */
L_120EFC26:
    ecx = MEM32(eax + 0x20); /* 0x120EFC26: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x120EFC29: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFC58; /* 0x120EFC2B: je 0x120efc58 */
L_120EFC2D:
    esi = edx; /* 0x120EFC2D: mov esi, edx */
L_120EFC2F:
    SET_LO8(ebx, MEM8(esi)); /* 0x120EFC2F: mov bl, byte ptr [esi] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x120EFC31: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC4F; /* 0x120EFC33: jne 0x120efc4f */
L_120EFC35:
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFC35: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFC4B; /* 0x120EFC37: je 0x120efc4b */
L_120EFC39:
    SET_LO8(ebx, MEM8(esi + 0x1)); /* 0x120EFC39: mov bl, byte ptr [esi + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x120EFC3C: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC4F; /* 0x120EFC3F: jne 0x120efc4f */
L_120EFC41:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x120EFC41: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120EFC44: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFC47: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFC2F; /* 0x120EFC49: jne 0x120efc2f */
L_120EFC4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EFC4B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EFC54; /* 0x120EFC4D: jmp 0x120efc54 */
L_120EFC4F:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFC4F: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFC51: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120EFC54:
    /* test ecx, ecx */ /* 0x120EFC54: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFC56:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EFC5F; /* 0x120EFC56: je 0x120efc5f */
L_120EFC58:
    eax = MEM32(eax + 0x34); /* 0x120EFC58: mov eax, dword ptr [eax + 0x34] */
L_120EFC5B:
    /* test eax, eax */ /* 0x120EFC5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFC1D; /* 0x120EFC5D: jne 0x120efc1d */
L_120EFC5F:
    ebx = POP32_VAL(esp); /* 0x120EFC5F: pop ebx */
L_120EFC60:
    esi = POP32_VAL(esp); /* 0x120EFC60: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EFC61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFC62: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFC6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFC6Au);

L_120EFC6A:
    edi = edi; /* 0x120EFC6A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFC6C: push ebp */
    ebp = esp; /* 0x120EFC6D: mov ebp, esp */
    eax = MEM32(ecx + 0x48); /* 0x120EFC6F: mov eax, dword ptr [ecx + 0x48] */
    PUSH32(esp, ebx); /* 0x120EFC72: push ebx */
    goto L_120EFCB7; /* 0x120EFC73: jmp 0x120efcb7 */
L_120EFC75:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120EFC75: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFC81; /* 0x120EFC79: jne 0x120efc81 */
L_120EFC7B:
    /* cmp MEM32(eax + 0x20), 0 */ /* 0x120EFC7B: cmp dword ptr [eax + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_120EFCB2; /* 0x120EFC7F: jmp 0x120efcb2 */
L_120EFC81:
    ecx = MEM32(eax + 0x20); /* 0x120EFC81: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x120EFC84: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFCB4; /* 0x120EFC86: je 0x120efcb4 */
L_120EFC88:
    edx = MEM32(ebp + 0x8); /* 0x120EFC88: mov edx, dword ptr [ebp + 8] */
L_120EFC8B:
    SET_LO8(ebx, MEM8(edx)); /* 0x120EFC8B: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x120EFC8D: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFCAB; /* 0x120EFC8F: jne 0x120efcab */
L_120EFC91:
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFC91: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFCA7; /* 0x120EFC93: je 0x120efca7 */
L_120EFC95:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x120EFC95: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x120EFC98: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFCAB; /* 0x120EFC9B: jne 0x120efcab */
L_120EFC9D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x120EFC9D: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120EFCA0: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFCA3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFC8B; /* 0x120EFCA5: jne 0x120efc8b */
L_120EFCA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EFCA7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EFCB0; /* 0x120EFCA9: jmp 0x120efcb0 */
L_120EFCAB:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFCAB: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFCAD: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120EFCB0:
    /* test ecx, ecx */ /* 0x120EFCB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFCB2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EFCBB; /* 0x120EFCB2: je 0x120efcbb */
L_120EFCB4:
    eax = MEM32(eax + 0x28); /* 0x120EFCB4: mov eax, dword ptr [eax + 0x28] */
L_120EFCB7:
    /* test eax, eax */ /* 0x120EFCB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFC75; /* 0x120EFCB9: jne 0x120efc75 */
L_120EFCBB:
    ebx = POP32_VAL(esp); /* 0x120EFCBB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EFCBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFCBD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFCC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFCC5u);

L_120EFCC5:
    edi = edi; /* 0x120EFCC5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFCC7: push ebp */
    ebp = esp; /* 0x120EFCC8: mov ebp, esp */
    eax = MEM32(ecx + 0x40); /* 0x120EFCCA: mov eax, dword ptr [ecx + 0x40] */
    PUSH32(esp, ebx); /* 0x120EFCCD: push ebx */
    goto L_120EFD12; /* 0x120EFCCE: jmp 0x120efd12 */
L_120EFCD0:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120EFCD0: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFCDC; /* 0x120EFCD4: jne 0x120efcdc */
L_120EFCD6:
    /* cmp MEM32(eax + 0x20), 0 */ /* 0x120EFCD6: cmp dword ptr [eax + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_120EFD0D; /* 0x120EFCDA: jmp 0x120efd0d */
L_120EFCDC:
    ecx = MEM32(eax + 0x20); /* 0x120EFCDC: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x120EFCDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFD0F; /* 0x120EFCE1: je 0x120efd0f */
L_120EFCE3:
    edx = MEM32(ebp + 0x8); /* 0x120EFCE3: mov edx, dword ptr [ebp + 8] */
L_120EFCE6:
    SET_LO8(ebx, MEM8(edx)); /* 0x120EFCE6: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x120EFCE8: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFD06; /* 0x120EFCEA: jne 0x120efd06 */
L_120EFCEC:
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFCEC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFD02; /* 0x120EFCEE: je 0x120efd02 */
L_120EFCF0:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x120EFCF0: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x120EFCF3: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFD06; /* 0x120EFCF6: jne 0x120efd06 */
L_120EFCF8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x120EFCF8: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120EFCFB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x120EFCFE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFCE6; /* 0x120EFD00: jne 0x120efce6 */
L_120EFD02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EFD02: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EFD0B; /* 0x120EFD04: jmp 0x120efd0b */
L_120EFD06:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFD06: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EFD08: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120EFD0B:
    /* test ecx, ecx */ /* 0x120EFD0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFD0D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EFD16; /* 0x120EFD0D: je 0x120efd16 */
L_120EFD0F:
    eax = MEM32(eax + 0x34); /* 0x120EFD0F: mov eax, dword ptr [eax + 0x34] */
L_120EFD12:
    /* test eax, eax */ /* 0x120EFD12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFCD0; /* 0x120EFD14: jne 0x120efcd0 */
L_120EFD16:
    ebx = POP32_VAL(esp); /* 0x120EFD16: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EFD17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFD18: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFD20u);

L_120EFD20:
    edi = edi; /* 0x120EFD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFD22: push ebp */
    ebp = esp; /* 0x120EFD23: mov ebp, esp */
    eax = MEM32(ecx + 0x70); /* 0x120EFD25: mov eax, dword ptr [ecx + 0x70] */
    ecx = MEM32(ebp + 0x8); /* 0x120EFD28: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EFD2B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000003u; /* 0x120EFD2D: mov edx, 0x80000003 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120EFD32: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x120EFD34: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFD44; /* 0x120EFD36: jne 0x120efd44 */
L_120EFD38:
    ecx = ~ecx; /* 0x120EFD38: not ecx */
    /* cmp MEM32(ecx), 1 */ /* 0x120EFD3A: cmp dword ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFD44; /* 0x120EFD3D: jne 0x120efd44 */
L_120EFD3F:
    eax = MEM32(ecx + 0x4); /* 0x120EFD3F: mov eax, dword ptr [ecx + 4] */
    goto L_120EFD46; /* 0x120EFD42: jmp 0x120efd46 */
L_120EFD44:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFD44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFD46:
    ebp = POP32_VAL(esp); /* 0x120EFD46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EFD47: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EFD4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFD4Fu);

L_120EFD4F:
    edi = edi; /* 0x120EFD4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFD51: push ebp */
    ebp = esp; /* 0x120EFD52: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EFD54: push ecx */
    PUSH32(esp, ecx); /* 0x120EFD55: push ecx */
    PUSH32(esp, ebx); /* 0x120EFD56: push ebx */
    PUSH32(esp, esi); /* 0x120EFD57: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EFD58: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EFD5B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EFD5D: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120EFD5E: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120EFD61: mov dword ptr [ebp - 8], ebx */
    /* test esi, esi */ /* 0x120EFD64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFD6A; /* 0x120EFD66: je 0x120efd6a */
L_120EFD68:
    MEM32(esi) = ebx; /* 0x120EFD68: mov dword ptr [esi], ebx */
L_120EFD6A:
    ecx = MEM32(ebp + 0x8); /* 0x120EFD6A: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x8); /* 0x120EFD6D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120EFD70: push eax */
    eax = ebp + (-0x4); /* 0x120EFD71: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EFD74: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EFD75: push dword ptr [ebp + 0xc] */
    eax = ecx + (-0x6C); /* 0x120EFD78: lea eax, [ecx - 0x6c] */
    PUSH32(esp, eax); /* 0x120EFD7B: push eax */
    RECOMP_ICALL(MEM32(ecx + (-0x8))); /* 0x120EFD7C: call dword ptr [ecx - 8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EFD7F: mov edi, eax */
    /* test edi, edi */ /* 0x120EFD81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFD90; /* 0x120EFD83: js 0x120efd90 */
L_120EFD85:
    PUSH32(esp, esi); /* 0x120EFD85: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120EFD86: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_120EBC05); /* 0x120EFD89: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EFD8E: mov edi, eax */
L_120EFD90:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x120EFD90: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFDAA; /* 0x120EFD93: je 0x120efdaa */
L_120EFD95:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EFD95: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120EFD98: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120EBC05); /* 0x120EFD9B: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120EFDA0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EFDAA; /* 0x120EFDA2: js 0x120efdaa */
L_120EFDA4:
    /* test eax, eax */ /* 0x120EFDA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EFDAA; /* 0x120EFDA6: jns 0x120efdaa */
L_120EFDA8:
    edi = eax; /* 0x120EFDA8: mov edi, eax */
L_120EFDAA:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EFDAA: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120EFDAD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFDBA; /* 0x120EFDAF: je 0x120efdba */
L_120EFDB1:
    eax = MEM32(ecx); /* 0x120EFDB1: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EFDB3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EFDB4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x120EFDB7: mov dword ptr [ebp - 4], ebx */
L_120EFDBA:
    ecx = MEM32(ebp + (-0x8)); /* 0x120EFDBA: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120EFDBD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFDC7; /* 0x120EFDBF: je 0x120efdc7 */
L_120EFDC1:
    eax = MEM32(ecx); /* 0x120EFDC1: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EFDC3: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EFDC4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120EFDC7:
    eax = edi; /* 0x120EFDC7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120EFDC9: pop edi */
    esi = POP32_VAL(esp); /* 0x120EFDCA: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFDCB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EFDCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EFDCD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EFDD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFDD5u);

L_120EFDD5:
    edi = edi; /* 0x120EFDD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFDD7: push ebp */
    ebp = esp; /* 0x120EFDD8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120EFDDA: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120EFDDB: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EFDDE: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EFDDF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120EFDE1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFDEC; /* 0x120EFDE3: jne 0x120efdec */
L_120EFDE5:
    esi = 0x8876086Cu; /* 0x120EFDE5: mov esi, 0x8876086c */
    goto L_120EFE0B; /* 0x120EFDEA: jmp 0x120efe0b */
L_120EFDEC:
    edx = MEM32(ebp + 0x8); /* 0x120EFDEC: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120EFDEF: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFDF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120EFDF2: mov edi, ebx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFDF4: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFDF5: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFDF6: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFDF7: stosd dword ptr es:[edi], eax */
    ecx = MEM32(edx + (-0x4C)); /* 0x120EFDF8: mov ecx, dword ptr [edx - 0x4c] */
    MEM32(ebx + 0x4) = ecx; /* 0x120EFDFB: mov dword ptr [ebx + 4], ecx */
    ecx = MEM32(edx + (-0x50)); /* 0x120EFDFE: mov ecx, dword ptr [edx - 0x50] */
    MEM32(ebx + 0x8) = ecx; /* 0x120EFE01: mov dword ptr [ebx + 8], ecx */
    ecx = MEM32(edx + (-0x48)); /* 0x120EFE04: mov ecx, dword ptr [edx - 0x48] */
    MEM32(ebx + 0xC) = ecx; /* 0x120EFE07: mov dword ptr [ebx + 0xc], ecx */
    edi = POP32_VAL(esp); /* 0x120EFE0A: pop edi */
L_120EFE0B:
    eax = esi; /* 0x120EFE0B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EFE0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFE0E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EFE0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EFE10: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EFE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFE18u);

L_120EFE18:
    edi = edi; /* 0x120EFE18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFE1A: push ebp */
    ebp = esp; /* 0x120EFE1B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120EFE1D: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120EFE1E: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120EFE21: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EFE22: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120EFE24: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFE3C; /* 0x120EFE26: je 0x120efe3c */
L_120EFE28:
    ecx = MEM32(ebp + 0x8); /* 0x120EFE28: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EFE2B: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120EFE2E: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120EFD20); /* 0x120EFE31: call 0x120efd20 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120EFE36: mov edx, eax */
    /* test edx, edx */ /* 0x120EFE38: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFE43; /* 0x120EFE3A: jne 0x120efe43 */
L_120EFE3C:
    esi = 0x8876086Cu; /* 0x120EFE3C: mov esi, 0x8876086c */
    goto L_120EFE5E; /* 0x120EFE41: jmp 0x120efe5e */
L_120EFE43:
    PUSH32(esp, edi); /* 0x120EFE43: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFE44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120EFE46: mov edi, ebx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFE48: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFE49: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFE4A: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120EFE4B: stosd dword ptr es:[edi], eax */
    ecx = MEM32(edx + 0x20); /* 0x120EFE4C: mov ecx, dword ptr [edx + 0x20] */
    MEM32(ebx) = ecx; /* 0x120EFE4F: mov dword ptr [ebx], ecx */
    ecx = MEM32(edx + 0x24); /* 0x120EFE51: mov ecx, dword ptr [edx + 0x24] */
    MEM32(ebx + 0x4) = ecx; /* 0x120EFE54: mov dword ptr [ebx + 4], ecx */
    MEM32(ebx + 0x8) = esi; /* 0x120EFE57: mov dword ptr [ebx + 8], esi */
    MEM32(ebx + 0xC) = esi; /* 0x120EFE5A: mov dword ptr [ebx + 0xc], esi */
    edi = POP32_VAL(esp); /* 0x120EFE5D: pop edi */
L_120EFE5E:
    eax = esi; /* 0x120EFE5E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EFE60: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFE61: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EFE62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EFE63: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EFE6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFE6Bu);

L_120EFE6B:
    edi = edi; /* 0x120EFE6B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFE6D: push ebp */
    ebp = esp; /* 0x120EFE6E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EFE70: push ecx */
    PUSH32(esp, ecx); /* 0x120EFE71: push ecx */
    PUSH32(esp, ebx); /* 0x120EFE72: push ebx */
    PUSH32(esp, esi); /* 0x120EFE73: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120EFE74: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x120EFE77: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120EFE78: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120EFE7B: push edi */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x120EFE7C: push dword ptr [esi + 8] */
    eax = ecx; /* 0x120EFE7F: mov eax, ecx */
    PUSH32(esp, 1); /* 0x120EFE81: push 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EFE83: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120EFE85: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EFE86: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120EFE89: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x120EFE8C: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x120EFE8F: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x120EFE92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFE9D; /* 0x120EFE94: jne 0x120efe9d */
L_120EFE96:
    eax = 0x8007000Eu; /* 0x120EFE96: mov eax, 0x8007000e */
    goto L_120EFF17; /* 0x120EFE9B: jmp 0x120eff17 */
L_120EFE9D:
    eax = MEM32(esi + 0x4); /* 0x120EFE9D: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x40); /* 0x120EFEA0: mov ecx, dword ptr [eax + 0x40] */
    eax = MEM32(esi + 0x18); /* 0x120EFEA3: mov eax, dword ptr [esi + 0x18] */
    eax = ecx + eax + 0x18; /* 0x120EFEA6: lea eax, [ecx + eax + 0x18] */
    MEM32(ebp + 0x8) = eax; /* 0x120EFEAA: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi + 0x1C); /* 0x120EFEAD: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + 0xC) = eax; /* 0x120EFEB0: mov dword ptr [ebp + 0xc], eax */
    /* test edi, edi */ /* 0x120EFEB3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF15; /* 0x120EFEB5: je 0x120eff15 */
L_120EFEB7:
    eax = MEM32(esi + 0x8); /* 0x120EFEB7: mov eax, dword ptr [esi + 8] */
    MEM32(ebx + eax) = 3; /* 0x120EFEBA: mov dword ptr [ebx + eax], 3 */
    ecx = MEM32(esi + 0x8); /* 0x120EFEC1: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x4); /* 0x120EFEC4: mov eax, dword ptr [esi + 4] */
    MEM32(ebx + ecx + 0x4) = eax; /* 0x120EFEC7: mov dword ptr [ebx + ecx + 4], eax */
    eax = MEM32(esi + 0x4); /* 0x120EFECB: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x120EFECE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x40); /* 0x120EFED1: sub ecx, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x8); /* 0x120EFED4: mov eax, dword ptr [esi + 8] */
    MEM32(ebx + eax + 0x18) = ecx; /* 0x120EFED7: mov dword ptr [ebx + eax + 0x18], ecx */
    eax = ebp + (-0x4); /* 0x120EFEDB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EFEDE: push eax */
    eax = ebp + 0x8; /* 0x120EFEDF: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120EFEE2: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120EFEE3: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x3C)); /* 0x120EFEE6: push dword ptr [eax + 0x3c] */
    RECOMP_CALL(sub_120EFA85); /* 0x120EFEE9: call 0x120efa85 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x120EFEEE: mov ecx, dword ptr [esi + 8] */
    MEM32(ebx + ecx + 0x14) = eax; /* 0x120EFEF1: mov dword ptr [ebx + ecx + 0x14], eax */
    eax = MEM32(esi + 0x8); /* 0x120EFEF5: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120EFEF8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx + eax + 0x1C) = ecx; /* 0x120EFEFB: mov dword ptr [ebx + eax + 0x1c], ecx */
    eax = MEM32(ebp + (-0x4)); /* 0x120EFEFF: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x120EFF02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF0F; /* 0x120EFF04: je 0x120eff0f */
L_120EFF06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EFF06: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120EFF07: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EFF06; /* 0x120EFF0A: jne 0x120eff06 */
L_120EFF0C:
    MEM32(ebp + 0xC) = ecx; /* 0x120EFF0C: mov dword ptr [ebp + 0xc], ecx */
L_120EFF0F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x120EFF0F: add ebx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120EFF12: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EFEB7; /* 0x120EFF13: jne 0x120efeb7 */
L_120EFF15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFF15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFF17:
    edi = POP32_VAL(esp); /* 0x120EFF17: pop edi */
    esi = POP32_VAL(esp); /* 0x120EFF18: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFF19: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EFF1A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EFF1B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EFF23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EFF23u);

L_120EFF23:
    edi = edi; /* 0x120EFF23: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EFF25: push ebp */
    ebp = esp; /* 0x120EFF26: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120EFF28: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120EFF2B: push ebx */
    PUSH32(esp, esi); /* 0x120EFF2C: push esi */
    PUSH32(esp, edi); /* 0x120EFF2D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EFF2E: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x120EFF31: mov ebx, ecx */
    /* test edi, edi */ /* 0x120EFF33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF35: je 0x120eff58 */
L_120EFF37:
    eax = (uint32_t)LO16(edi); /* 0x120EFF37: movzx eax, di */
    /* cmp eax, edi */ /* 0x120EFF3A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF3C: je 0x120eff58 */
L_120EFF3E:
    eax = MEM32(ebx + 0x70); /* 0x120EFF3E: mov eax, dword ptr [ebx + 0x70] */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x120EFF41: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x80000003u; /* 0x120EFF43: mov ecx, 0x80000003 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x120EFF48: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x120EFF4A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFF61; /* 0x120EFF4C: jne 0x120eff61 */
L_120EFF4E:
    edi = ~edi; /* 0x120EFF4E: not edi */
    /* cmp MEM32(edi), 3 */ /* 0x120EFF50: cmp dword ptr [edi], 3 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x120EFF53: mov dword ptr [ebp + 8], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EFF71; /* 0x120EFF56: je 0x120eff71 */
L_120EFF58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFF58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EFF5A:
    edi = POP32_VAL(esp); /* 0x120EFF5A: pop edi */
    esi = POP32_VAL(esp); /* 0x120EFF5B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EFF5C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EFF5D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EFF5E: ret 0xc */
L_120EFF61:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EFF61: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x120EFF64: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x120EFF66: push edi */
    RECOMP_CALL(sub_120F1855); /* 0x120EFF67: call 0x120f1855 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EFF6C: mov edi, eax */
    MEM32(ebp + 0x8) = edi; /* 0x120EFF6E: mov dword ptr [ebp + 8], edi */
L_120EFF71:
    /* test edi, edi */ /* 0x120EFF71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF73: je 0x120eff58 */
L_120EFF75:
    ecx = MEM32(edi + 0x4); /* 0x120EFF75: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx + 0x40); /* 0x120EFF78: mov ecx, dword ptr [ecx + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x18); /* 0x120EFF7B: add ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x10), 0xFFFFFFFFu */ /* 0x120EFF7E: cmp dword ptr [edi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x3C); /* 0x120EFF82: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(ecx + eax + 0x10); /* 0x120EFF85: mov eax, dword ptr [ecx + eax + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EFF89: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF8C: jne 0x120eff58 */
L_120EFF8E:
    /* test eax, eax */ /* 0x120EFF8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF90: je 0x120eff58 */
L_120EFF92:
    edx = MEM32(ebp + 0xC); /* 0x120EFF92: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, eax */ /* 0x120EFF95: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFF97: jae 0x120eff58 */
L_120EFF99:
    esi = MEM32(edi + 0xC); /* 0x120EFF99: mov esi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EFF9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EFF9E: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x120EFFA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFFC1; /* 0x120EFFA3: je 0x120effc1 */
L_120EFFA5:
    /* cmp MEM32(esi + 0x10), edx */ /* 0x120EFFA5: cmp dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EFFB4; /* 0x120EFFA8: jae 0x120effb4 */
L_120EFFAA:
    MEM32(ebp + (-0x4)) = esi; /* 0x120EFFAA: mov dword ptr [ebp - 4], esi */
    esi = MEM32(esi + 0xC); /* 0x120EFFAD: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x120EFFB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EFFA5; /* 0x120EFFB2: jne 0x120effa5 */
L_120EFFB4:
    /* test esi, esi */ /* 0x120EFFB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFFC1; /* 0x120EFFB6: je 0x120effc1 */
L_120EFFB8:
    /* cmp MEM32(esi + 0x10), edx */ /* 0x120EFFB8: cmp dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F005D; /* 0x120EFFBB: jbe 0x120f005d */
L_120EFFC1:
    PUSH32(esp, 1); /* 0x120EFFC1: push 1 */
    PUSH32(esp, eax); /* 0x120EFFC3: push eax */
    PUSH32(esp, eax); /* 0x120EFFC4: push eax */
    PUSH32(esp, ebx); /* 0x120EFFC5: push ebx */
    RECOMP_ICALL(MEM32(ebx + 0x60)); /* 0x120EFFC6: call dword ptr [ebx + 0x60] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EFFC9: mov esi, eax */
    /* test esi, esi */ /* 0x120EFFCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EFF58; /* 0x120EFFCD: je 0x120eff58 */
L_120EFFCF:
    eax = MEM32(edi + 0x4); /* 0x120EFFCF: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x40); /* 0x120EFFD2: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x18); /* 0x120EFFD5: add eax, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x120EFFD8: mov dword ptr [ebp - 8], eax */
    eax = ebp + 0x10; /* 0x120EFFDB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EFFDE: push eax */
    eax = ebp + (-0x8); /* 0x120EFFDF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120EFFE2: push eax */
    PUSH32(esp, MEM32(ebx + 0x3C)); /* 0x120EFFE3: push dword ptr [ebx + 0x3c] */
    RECOMP_CALL(sub_120EFA85); /* 0x120EFFE6: call 0x120efa85 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x120EFFEB: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EFFEE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x120EFFF0: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(esi) = 3; /* 0x120EFFF2: mov dword ptr [esi], 3 */
    ecx = MEM32(edi + 0x4); /* 0x120EFFF8: mov ecx, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x120EFFFB: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(edi + 0x18); /* 0x120EFFFE: mov ecx, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = ecx; /* 0x120F0001: mov dword ptr [esi + 0x18], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x120F0004: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x10) = ecx; /* 0x120F0007: mov dword ptr [esi + 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F000A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = eax; /* 0x120F000C: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(edi + 0x1C); /* 0x120F000F: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + 0xC) = eax; /* 0x120F0012: mov dword ptr [ebp + 0xc], eax */
    MEM32(esi + 0x1C) = eax; /* 0x120F0015: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120F0018: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120F001B: imul eax, ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x120F001E: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test eax, eax */ /* 0x120F0020: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0042; /* 0x120F0022: je 0x120f0042 */
L_120F0024:
    edi = MEM32(ebp + 0xC); /* 0x120F0024: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F0027: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0029:
    edi = MEM32(edi + 0xC); /* 0x120F0029: mov edi, dword ptr [edi + 0xc] */
    MEM32(esi + 0x1C) = edi; /* 0x120F002C: mov dword ptr [esi + 0x1c], edi */
    eax = MEM32(esi + 0x10); /* 0x120F002F: mov eax, dword ptr [esi + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x120F0032: imul eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F0036: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x120F0038: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F003A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x120F003B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0029; /* 0x120F003D: jb 0x120f0029 */
L_120F003F:
    edi = MEM32(ebp + 0x8); /* 0x120F003F: mov edi, dword ptr [ebp + 8] */
L_120F0042:
    ecx = MEM32(ebp + (-0x4)); /* 0x120F0042: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120F0045: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0054; /* 0x120F0047: je 0x120f0054 */
L_120F0049:
    eax = MEM32(ecx + 0xC); /* 0x120F0049: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x120F004C: mov dword ptr [esi + 0xc], eax */
    MEM32(ecx + 0xC) = esi; /* 0x120F004F: mov dword ptr [ecx + 0xc], esi */
    goto L_120F005D; /* 0x120F0052: jmp 0x120f005d */
L_120F0054:
    eax = MEM32(edi + 0xC); /* 0x120F0054: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi + 0xC) = eax; /* 0x120F0057: mov dword ptr [esi + 0xc], eax */
    MEM32(edi + 0xC) = esi; /* 0x120F005A: mov dword ptr [edi + 0xc], esi */
L_120F005D:
    esi = ~esi; /* 0x120F005D: not esi */
    eax = esi; /* 0x120F005F: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_120EFF5A; /* 0x120F0061: jmp 0x120eff5a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F006B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F006Bu);

L_120F006B:
    edi = edi; /* 0x120F006B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F006D: push ebp */
    ebp = esp; /* 0x120F006E: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120F0070: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120F0073: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(edx + (-0x50)) */ /* 0x120F0076: cmp ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120F007F; /* 0x120F0079: jb 0x120f007f */
L_120F007B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F007B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F008F; /* 0x120F007D: jmp 0x120f008f */
L_120F007F:
    eax = MEM32(edx + (-0x2C)); /* 0x120F007F: mov eax, dword ptr [edx - 0x2c] */
    goto L_120F0087; /* 0x120F0082: jmp 0x120f0087 */
L_120F0084:
    eax = MEM32(eax + 0x34); /* 0x120F0084: mov eax, dword ptr [eax + 0x34] */
L_120F0087:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F0087: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + (-0x50)) */ /* 0x120F0088: cmp ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0084; /* 0x120F008B: jb 0x120f0084 */
L_120F008D:
    eax = ~eax; /* 0x120F008D: not eax */
L_120F008F:
    ebp = POP32_VAL(esp); /* 0x120F008F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F0090: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F0098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0098u);

L_120F0098:
    edi = edi; /* 0x120F0098: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F009A: push ebp */
    ebp = esp; /* 0x120F009B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F009D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F00A0: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F00A3: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120EFCC5); /* 0x120F00A6: call 0x120efcc5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F00AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F00B1; /* 0x120F00AD: je 0x120f00b1 */
L_120F00AF:
    eax = ~eax; /* 0x120F00AF: not eax */
L_120F00B1:
    ebp = POP32_VAL(esp); /* 0x120F00B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F00B2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F00BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F00BAu);

L_120F00BA:
    edi = edi; /* 0x120F00BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F00BC: push ebp */
    ebp = esp; /* 0x120F00BD: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120F00BF: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120F00C2: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(edx + (-0x48)) */ /* 0x120F00C5: cmp ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120F00CE; /* 0x120F00C8: jb 0x120f00ce */
L_120F00CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F00CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F00DE; /* 0x120F00CC: jmp 0x120f00de */
L_120F00CE:
    eax = MEM32(edx + (-0x24)); /* 0x120F00CE: mov eax, dword ptr [edx - 0x24] */
    goto L_120F00D6; /* 0x120F00D1: jmp 0x120f00d6 */
L_120F00D3:
    eax = MEM32(eax + 0x28); /* 0x120F00D3: mov eax, dword ptr [eax + 0x28] */
L_120F00D6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F00D6: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + (-0x48)) */ /* 0x120F00D7: cmp ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F00D3; /* 0x120F00DA: jb 0x120f00d3 */
L_120F00DC:
    eax = ~eax; /* 0x120F00DC: not eax */
L_120F00DE:
    ebp = POP32_VAL(esp); /* 0x120F00DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F00DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F00E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F00E7u);

L_120F00E7:
    edi = edi; /* 0x120F00E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F00E9: push ebp */
    ebp = esp; /* 0x120F00EA: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F00EC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F00EF: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F00F2: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120EFC6A); /* 0x120F00F5: call 0x120efc6a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F00FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0100; /* 0x120F00FC: je 0x120f0100 */
L_120F00FE:
    eax = ~eax; /* 0x120F00FE: not eax */
L_120F0100:
    ebp = POP32_VAL(esp); /* 0x120F0100: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F0101: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F0109(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0109u);

L_120F0109:
    edi = edi; /* 0x120F0109: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F010B: push ebp */
    ebp = esp; /* 0x120F010C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120F010E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F0111: push esi */
    PUSH32(esp, edi); /* 0x120F0112: push edi */
    edi = MEM32(eax + 0x8); /* 0x120F0113: mov edi, dword ptr [eax + 8] */
    eax = MEM32(edi + 0x18); /* 0x120F0116: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0119: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F011B: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F0158; /* 0x120F011D: je 0x120f0158 */
L_120F011F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F011F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F0147; /* 0x120F0120: je 0x120f0147 */
L_120F0122:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0122: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F0137; /* 0x120F0123: je 0x120f0137 */
L_120F0125:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0125: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F012F; /* 0x120F0126: je 0x120f012f */
L_120F0128:
    esi = 0x8876086Cu; /* 0x120F0128: mov esi, 0x8876086c */
    goto L_120F0170; /* 0x120F012D: jmp 0x120f0170 */
L_120F012F:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120F012F: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x20) = _v; } /* 0x120F0132: fstp qword ptr [edi + 0x20] */
    goto L_120F0170; /* 0x120F0135: jmp 0x120f0170 */
L_120F0137:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120F0137: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF2F7); /* 0x120F013A: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x20) = eax; /* 0x120F013F: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = esi; /* 0x120F0142: mov dword ptr [edi + 0x24], esi */
    goto L_120F0170; /* 0x120F0145: jmp 0x120f0170 */
L_120F0147:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120F0147: fld dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF371); /* 0x120F014A: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120F014F: cdq  */
    MEM32(edi + 0x20) = eax; /* 0x120F0150: mov dword ptr [edi + 0x20], eax */
    MEM32(edi + 0x24) = edx; /* 0x120F0153: mov dword ptr [edi + 0x24], edx */
    goto L_120F0170; /* 0x120F0156: jmp 0x120f0170 */
L_120F0158:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120F0158: fld dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x120F015B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120F015D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120F015F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120F0161: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120F016B; /* 0x120F0164: jnp 0x120f016b */
L_120F0166:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0166: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F0168: inc eax */
    _flag_k = FK_INC;
    goto L_120F016D; /* 0x120F0169: jmp 0x120f016d */
L_120F016B:
    eax = esi; /* 0x120F016B: mov eax, esi */
L_120F016D:
    MEM32(edi + 0x20) = eax; /* 0x120F016D: mov dword ptr [edi + 0x20], eax */
L_120F0170:
    edi = POP32_VAL(esp); /* 0x120F0170: pop edi */
    eax = esi; /* 0x120F0171: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F0173: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0174: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F0175: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F017D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F017Du);

L_120F017D:
    edi = edi; /* 0x120F017D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F017F: push ebp */
    ebp = esp; /* 0x120F0180: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120F0182: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F0185: push esi */
    esi = MEM32(eax + 0x8); /* 0x120F0186: mov esi, dword ptr [eax + 8] */
    eax = MEM32(esi + 0x18); /* 0x120F0189: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F018C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x120F018E: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F01C3; /* 0x120F0190: je 0x120f01c3 */
L_120F0192:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0192: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F01BE; /* 0x120F0193: je 0x120f01be */
L_120F0195:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0195: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F01AC; /* 0x120F0196: je 0x120f01ac */
L_120F0198:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0198: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F01A2; /* 0x120F0199: je 0x120f01a2 */
L_120F019B:
    edx = 0x8876086Cu; /* 0x120F019B: mov edx, 0x8876086c */
    goto L_120F01D6; /* 0x120F01A0: jmp 0x120f01d6 */
L_120F01A2:
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x120F01A2: fld qword ptr [esi + 0x20] */
L_120F01A5:
    eax = MEM32(ebp + 0xC); /* 0x120F01A5: mov eax, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120F01A8: fstp dword ptr [eax] */
    goto L_120F01D6; /* 0x120F01AA: jmp 0x120f01d6 */
L_120F01AC:
    eax = MEM32(esi + 0x20); /* 0x120F01AC: mov eax, dword ptr [esi + 0x20] */
    fp_push((double)(int32_t)MEM32(esi + 0x20)); /* 0x120F01AF: fild dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x120F01B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120F01A5; /* 0x120F01B4: jns 0x120f01a5 */
L_120F01B6:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x120F01B6: fadd dword ptr [0x120014d0] */
    RECOMP_BACKEDGE();
    goto L_120F01A5; /* 0x120F01BC: jmp 0x120f01a5 */
L_120F01BE:
    fp_push((double)(int32_t)MEM32(esi + 0x20)); /* 0x120F01BE: fild dword ptr [esi + 0x20] */
    RECOMP_BACKEDGE();
    goto L_120F01A5; /* 0x120F01C1: jmp 0x120f01a5 */
L_120F01C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F01C3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x20), edx */ /* 0x120F01C5: cmp dword ptr [esi + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F01C8: setne cl */
    MEM32(ebp + 0x8) = ecx; /* 0x120F01CB: mov dword ptr [ebp + 8], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x120F01CE: fild dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120F01D1: mov ecx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120F01D4: fstp dword ptr [ecx] */
L_120F01D6:
    eax = edx; /* 0x120F01D6: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x120F01D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F01D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F01DA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F01E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F01E2u);

L_120F01E2:
    edi = edi; /* 0x120F01E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F01E4: push ebp */
    ebp = esp; /* 0x120F01E5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F01E7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x120F01EA: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F01ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120F01EF: mov dword ptr [ebp - 0x14], eax */
    /* test edx, edx */ /* 0x120F01F2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F02D3; /* 0x120F01F4: je 0x120f02d3 */
L_120F01FA:
    eax = MEM32(ebp + 0x8); /* 0x120F01FA: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x120F01FD: mov ecx, dword ptr [eax + 0x14] */
    PUSH32(esp, ebx); /* 0x120F0200: push ebx */
    ebx = MEM32(eax + 0x18); /* 0x120F0201: mov ebx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x120F0204: push esi */
    PUSH32(esp, 4); /* 0x120F0205: push 4 */
    esi = POP32_VAL(esp); /* 0x120F0207: pop esi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F0208: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, esi */ /* 0x120F020B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F0216; /* 0x120F020D: jbe 0x120f0216 */
L_120F020F:
    eax = esi; /* 0x120F020F: mov eax, esi */
    MEM32(ebp + 0x8) = eax; /* 0x120F0211: mov dword ptr [ebp + 8], eax */
    goto L_120F021B; /* 0x120F0214: jmp 0x120f021b */
L_120F0216:
    eax = ecx; /* 0x120F0216: mov eax, ecx */
    MEM32(ebp + 0x8) = ecx; /* 0x120F0218: mov dword ptr [ebp + 8], ecx */
L_120F021B:
    MEM32(ebp + (-0x4)) = esi; /* 0x120F021B: mov dword ptr [ebp - 4], esi */
    /* cmp ebx, esi */ /* 0x120F021E: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0225; /* 0x120F0220: ja 0x120f0225 */
L_120F0222:
    MEM32(ebp + (-0x4)) = ebx; /* 0x120F0222: mov dword ptr [ebp - 4], ebx */
L_120F0225:
    esi = MEM32(ebp + 0xC); /* 0x120F0225: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120F0228: push edi */
L_120F0229:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F0229: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F022B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F029D; /* 0x120F022D: je 0x120f029d */
L_120F022F:
    edx = MEM32(ebp + 0x10); /* 0x120F022F: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = edx; /* 0x120F0232: mov dword ptr [ebp - 0xc], edx */
L_120F0235:
    ecx = MEM32(ebp + 0xC); /* 0x120F0235: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0238: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x120F023A: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F0275; /* 0x120F023D: jbe 0x120f0275 */
L_120F023F:
    eax = edx; /* 0x120F023F: mov eax, edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120F0241: mov dword ptr [ebp - 8], edx */
L_120F0244:
    fp_push(*(float*)&MEM32(eax)); /* 0x120F0244: fld dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x120F0246: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F0247: fstp dword ptr [esp] */
    PUSH32(esp, ecx); /* 0x120F024A: push ecx */
    RECOMP_CALL(sub_120F0109); /* 0x120F024B: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x120F0250: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x120F0253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F02D0; /* 0x120F0255: js 0x120f02d0 */
L_120F0257:
    eax = MEM32(ebp + (-0x8)); /* 0x120F0257: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120F025A: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x120F025D: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F0260: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120F0261: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x120F0264: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0xC) = ecx; /* 0x120F0267: mov dword ptr [ebp + 0xc], ecx */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x120F026A: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0244; /* 0x120F026D: jb 0x120f0244 */
L_120F026F:
    edx = MEM32(ebp + (-0xC)); /* 0x120F026F: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120F0272: mov eax, dword ptr [ebp + 8] */
L_120F0275:
    /* cmp esi, ebx */ /* 0x120F0275: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0289; /* 0x120F0277: jae 0x120f0289 */
L_120F0279:
    eax = ebx; /* 0x120F0279: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F027B: sub eax, esi */
    _flag_k = FK_CMP;
L_120F027D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F027D: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120F027E: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F027D; /* 0x120F0281: jne 0x120f027d */
L_120F0283:
    eax = MEM32(ebp + 0x8); /* 0x120F0283: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x120F0286: mov dword ptr [ebp + 0xc], ecx */
L_120F0289:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F0289: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x120F028A: add edx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F028D: mov dword ptr [ebp - 0xc], edx */
    /* cmp edi, eax */ /* 0x120F0290: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0235; /* 0x120F0292: jb 0x120f0235 */
L_120F0294:
    edx = MEM32(ebp + 0x14); /* 0x120F0294: mov edx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0xC); /* 0x120F0297: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120F029A: mov ecx, dword ptr [ebp - 0x10] */
L_120F029D:
    /* cmp edi, ecx */ /* 0x120F029D: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F02BD; /* 0x120F029F: jae 0x120f02bd */
L_120F02A1:
    eax = ecx; /* 0x120F02A1: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F02A3: sub eax, edi */
    _flag_k = FK_CMP;
L_120F02A5:
    /* test ebx, ebx */ /* 0x120F02A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F02B4; /* 0x120F02A7: je 0x120f02b4 */
L_120F02A9:
    ecx = ebx; /* 0x120F02A9: mov ecx, ebx */
L_120F02AB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F02AB: dec ecx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F02AC: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F02AB; /* 0x120F02AF: jne 0x120f02ab */
L_120F02B1:
    MEM32(ebp + 0xC) = esi; /* 0x120F02B1: mov dword ptr [ebp + 0xc], esi */
L_120F02B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F02B4: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F02A5; /* 0x120F02B5: jne 0x120f02a5 */
L_120F02B7:
    ecx = MEM32(ebp + (-0x10)); /* 0x120F02B7: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120F02BA: mov eax, dword ptr [ebp + 8] */
L_120F02BD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F02BD: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F02C1: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = edx; /* 0x120F02C2: mov dword ptr [ebp + 0x14], edx */
    /* test edx, edx */ /* 0x120F02C5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0229; /* 0x120F02C7: jne 0x120f0229 */
L_120F02CD:
    eax = MEM32(ebp + (-0x14)); /* 0x120F02CD: mov eax, dword ptr [ebp - 0x14] */
L_120F02D0:
    edi = POP32_VAL(esp); /* 0x120F02D0: pop edi */
    esi = POP32_VAL(esp); /* 0x120F02D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F02D2: pop ebx */
L_120F02D3:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F02D3: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F02D4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F02DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F02DCu);

L_120F02DC:
    edi = edi; /* 0x120F02DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F02DE: push ebp */
    ebp = esp; /* 0x120F02DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F02E1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F02E4: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120F02E5: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F02E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120F02EA: mov dword ptr [ebp - 0xc], eax */
    /* test ebx, ebx */ /* 0x120F02ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F03CF; /* 0x120F02EF: je 0x120f03cf */
L_120F02F5:
    eax = MEM32(ebp + 0x8); /* 0x120F02F5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F02F8: push esi */
    esi = MEM32(eax + 0x14); /* 0x120F02F9: mov esi, dword ptr [eax + 0x14] */
    PUSH32(esp, edi); /* 0x120F02FC: push edi */
    edi = MEM32(eax + 0x18); /* 0x120F02FD: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F0300: push 4 */
    eax = POP32_VAL(esp); /* 0x120F0302: pop eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x120F0303: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = edi; /* 0x120F0306: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F0309: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x120F030C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0313; /* 0x120F030E: ja 0x120f0313 */
L_120F0310:
    MEM32(ebp + 0x8) = esi; /* 0x120F0310: mov dword ptr [ebp + 8], esi */
L_120F0313:
    MEM32(ebp + 0x14) = eax; /* 0x120F0313: mov dword ptr [ebp + 0x14], eax */
    /* cmp edi, eax */ /* 0x120F0316: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F031D; /* 0x120F0318: ja 0x120f031d */
L_120F031A:
    MEM32(ebp + 0x14) = edi; /* 0x120F031A: mov dword ptr [ebp + 0x14], edi */
L_120F031D:
    eax = ebx; /* 0x120F031D: mov eax, ebx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x120F031F: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x120F031F: shl eax, 6 */
    PUSH32(esp, eax); /* 0x120F0322: push eax */
    PUSH32(esp, 0); /* 0x120F0323: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F0325: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F0328: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x120F032D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F0330: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F0333:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F0333: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x120F0335: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x120F0338: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F039D; /* 0x120F033B: jbe 0x120f039d */
L_120F033D:
    ecx = eax; /* 0x120F033D: mov ecx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x120F033F: mov dword ptr [ebp - 8], eax */
L_120F0342:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0342: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x120F0344: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F0377; /* 0x120F0347: jbe 0x120f0377 */
L_120F0349:
    eax = MEM32(ebp + 0xC); /* 0x120F0349: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F034C: mov edi, ecx */
L_120F034E:
    PUSH32(esp, edi); /* 0x120F034E: push edi */
    PUSH32(esp, eax); /* 0x120F034F: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F0350: call 0x120f017d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x120F0355: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x120F0358: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F03CD; /* 0x120F035A: js 0x120f03cd */
L_120F035C:
    eax = MEM32(ebp + 0xC); /* 0x120F035C: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F035F: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F0362: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120F0363: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F0366: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x120F0369: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F034E; /* 0x120F036C: jb 0x120f034e */
L_120F036E:
    edx = MEM32(ebp + (-0x4)); /* 0x120F036E: mov edx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x10)); /* 0x120F0371: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F0374: mov ecx, dword ptr [ebp - 8] */
L_120F0377:
    /* cmp esi, edi */ /* 0x120F0377: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F038B; /* 0x120F0379: jae 0x120f038b */
L_120F037B:
    eax = edi; /* 0x120F037B: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F037D: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F037F: mov esi, dword ptr [ebp + 0xc] */
L_120F0382:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0382: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F0383: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0382; /* 0x120F0386: jne 0x120f0382 */
L_120F0388:
    MEM32(ebp + 0xC) = esi; /* 0x120F0388: mov dword ptr [ebp + 0xc], esi */
L_120F038B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F038B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120F038C: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x120F038F: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F0392: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x120F0395: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0342; /* 0x120F0398: jb 0x120f0342 */
L_120F039A:
    esi = MEM32(ebp + (-0x14)); /* 0x120F039A: mov esi, dword ptr [ebp - 0x14] */
L_120F039D:
    /* cmp edx, esi */ /* 0x120F039D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F03BA; /* 0x120F039F: jae 0x120f03ba */
L_120F03A1:
    ecx = esi; /* 0x120F03A1: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F03A3: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F03A5:
    /* test edi, edi */ /* 0x120F03A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F03B7; /* 0x120F03A7: je 0x120f03b7 */
L_120F03A9:
    edx = MEM32(ebp + 0xC); /* 0x120F03A9: mov edx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x120F03AC: mov eax, edi */
L_120F03AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F03AE: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F03AF: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F03AE; /* 0x120F03B2: jne 0x120f03ae */
L_120F03B4:
    MEM32(ebp + 0xC) = edx; /* 0x120F03B4: mov dword ptr [ebp + 0xc], edx */
L_120F03B7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F03B7: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F03A5; /* 0x120F03B8: jne 0x120f03a5 */
L_120F03BA:
    eax = MEM32(ebp + 0x10); /* 0x120F03BA: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x120F03BD: add eax, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F03C0: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = eax; /* 0x120F03C1: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0333; /* 0x120F03C4: jne 0x120f0333 */
L_120F03CA:
    eax = MEM32(ebp + (-0xC)); /* 0x120F03CA: mov eax, dword ptr [ebp - 0xc] */
L_120F03CD:
    edi = POP32_VAL(esp); /* 0x120F03CD: pop edi */
    esi = POP32_VAL(esp); /* 0x120F03CE: pop esi */
L_120F03CF:
    ebx = POP32_VAL(esp); /* 0x120F03CF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F03D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F03D1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F03D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F03D9u);

L_120F03D9:
    edi = edi; /* 0x120F03D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F03DB: push ebp */
    ebp = esp; /* 0x120F03DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F03DE: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x14); /* 0x120F03E1: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F03E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120F03E6: mov dword ptr [ebp - 0x14], eax */
    /* test edx, edx */ /* 0x120F03E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F04CA; /* 0x120F03EB: je 0x120f04ca */
L_120F03F1:
    eax = MEM32(ebp + 0x8); /* 0x120F03F1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x120F03F4: mov ecx, dword ptr [eax + 0x14] */
    PUSH32(esp, ebx); /* 0x120F03F7: push ebx */
    ebx = MEM32(eax + 0x18); /* 0x120F03F8: mov ebx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x120F03FB: push esi */
    PUSH32(esp, 4); /* 0x120F03FC: push 4 */
    esi = POP32_VAL(esp); /* 0x120F03FE: pop esi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F03FF: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, esi */ /* 0x120F0402: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F040D; /* 0x120F0404: jbe 0x120f040d */
L_120F0406:
    eax = esi; /* 0x120F0406: mov eax, esi */
    MEM32(ebp + 0x8) = eax; /* 0x120F0408: mov dword ptr [ebp + 8], eax */
    goto L_120F0412; /* 0x120F040B: jmp 0x120f0412 */
L_120F040D:
    eax = ecx; /* 0x120F040D: mov eax, ecx */
    MEM32(ebp + 0x8) = ecx; /* 0x120F040F: mov dword ptr [ebp + 8], ecx */
L_120F0412:
    MEM32(ebp + (-0x4)) = esi; /* 0x120F0412: mov dword ptr [ebp - 4], esi */
    /* cmp ebx, esi */ /* 0x120F0415: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F041C; /* 0x120F0417: ja 0x120f041c */
L_120F0419:
    MEM32(ebp + (-0x4)) = ebx; /* 0x120F0419: mov dword ptr [ebp - 4], ebx */
L_120F041C:
    esi = MEM32(ebp + 0xC); /* 0x120F041C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120F041F: push edi */
L_120F0420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F0420: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F0422: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0494; /* 0x120F0424: je 0x120f0494 */
L_120F0426:
    edx = MEM32(ebp + 0x10); /* 0x120F0426: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = edx; /* 0x120F0429: mov dword ptr [ebp - 0xc], edx */
L_120F042C:
    ecx = MEM32(ebp + 0xC); /* 0x120F042C: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F042F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x120F0431: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F046C; /* 0x120F0434: jbe 0x120f046c */
L_120F0436:
    eax = edx; /* 0x120F0436: mov eax, edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120F0438: mov dword ptr [ebp - 8], edx */
L_120F043B:
    fp_push(*(float*)&MEM32(eax)); /* 0x120F043B: fld dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x120F043D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F043E: fstp dword ptr [esp] */
    PUSH32(esp, ecx); /* 0x120F0441: push ecx */
    RECOMP_CALL(sub_120F0109); /* 0x120F0442: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x120F0447: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x120F044A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F04C7; /* 0x120F044C: js 0x120f04c7 */
L_120F044E:
    eax = MEM32(ebp + (-0x8)); /* 0x120F044E: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0xC); /* 0x120F0451: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x120F0454: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F0457: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120F0458: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x120F045B: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0xC) = ecx; /* 0x120F045E: mov dword ptr [ebp + 0xc], ecx */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x120F0461: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F043B; /* 0x120F0464: jb 0x120f043b */
L_120F0466:
    edx = MEM32(ebp + (-0xC)); /* 0x120F0466: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120F0469: mov eax, dword ptr [ebp + 8] */
L_120F046C:
    /* cmp esi, ebx */ /* 0x120F046C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0480; /* 0x120F046E: jae 0x120f0480 */
L_120F0470:
    eax = ebx; /* 0x120F0470: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F0472: sub eax, esi */
    _flag_k = FK_CMP;
L_120F0474:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0474: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120F0475: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0474; /* 0x120F0478: jne 0x120f0474 */
L_120F047A:
    eax = MEM32(ebp + 0x8); /* 0x120F047A: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x120F047D: mov dword ptr [ebp + 0xc], ecx */
L_120F0480:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F0480: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x120F0481: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F0484: mov dword ptr [ebp - 0xc], edx */
    /* cmp edi, eax */ /* 0x120F0487: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F042C; /* 0x120F0489: jb 0x120f042c */
L_120F048B:
    edx = MEM32(ebp + 0x14); /* 0x120F048B: mov edx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0xC); /* 0x120F048E: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120F0491: mov ecx, dword ptr [ebp - 0x10] */
L_120F0494:
    /* cmp edi, ecx */ /* 0x120F0494: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F04B4; /* 0x120F0496: jae 0x120f04b4 */
L_120F0498:
    eax = ecx; /* 0x120F0498: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F049A: sub eax, edi */
    _flag_k = FK_CMP;
L_120F049C:
    /* test ebx, ebx */ /* 0x120F049C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F04AB; /* 0x120F049E: je 0x120f04ab */
L_120F04A0:
    ecx = ebx; /* 0x120F04A0: mov ecx, ebx */
L_120F04A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F04A2: dec ecx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F04A3: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F04A2; /* 0x120F04A6: jne 0x120f04a2 */
L_120F04A8:
    MEM32(ebp + 0xC) = esi; /* 0x120F04A8: mov dword ptr [ebp + 0xc], esi */
L_120F04AB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F04AB: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F049C; /* 0x120F04AC: jne 0x120f049c */
L_120F04AE:
    ecx = MEM32(ebp + (-0x10)); /* 0x120F04AE: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120F04B1: mov eax, dword ptr [ebp + 8] */
L_120F04B4:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F04B4: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F04B8: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = edx; /* 0x120F04B9: mov dword ptr [ebp + 0x14], edx */
    /* test edx, edx */ /* 0x120F04BC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0420; /* 0x120F04BE: jne 0x120f0420 */
L_120F04C4:
    eax = MEM32(ebp + (-0x14)); /* 0x120F04C4: mov eax, dword ptr [ebp - 0x14] */
L_120F04C7:
    edi = POP32_VAL(esp); /* 0x120F04C7: pop edi */
    esi = POP32_VAL(esp); /* 0x120F04C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F04C9: pop ebx */
L_120F04CA:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F04CA: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F04CB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F04D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F04D3u);

L_120F04D3:
    edi = edi; /* 0x120F04D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F04D5: push ebp */
    ebp = esp; /* 0x120F04D6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F04D8: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F04DB: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120F04DC: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F04DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120F04E1: mov dword ptr [ebp - 0xc], eax */
    /* test ebx, ebx */ /* 0x120F04E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F05C6; /* 0x120F04E6: je 0x120f05c6 */
L_120F04EC:
    eax = MEM32(ebp + 0x8); /* 0x120F04EC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F04EF: push esi */
    esi = MEM32(eax + 0x14); /* 0x120F04F0: mov esi, dword ptr [eax + 0x14] */
    PUSH32(esp, edi); /* 0x120F04F3: push edi */
    edi = MEM32(eax + 0x18); /* 0x120F04F4: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F04F7: push 4 */
    eax = POP32_VAL(esp); /* 0x120F04F9: pop eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x120F04FA: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = edi; /* 0x120F04FD: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F0500: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x120F0503: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F050A; /* 0x120F0505: ja 0x120f050a */
L_120F0507:
    MEM32(ebp + 0x8) = esi; /* 0x120F0507: mov dword ptr [ebp + 8], esi */
L_120F050A:
    MEM32(ebp + 0x14) = eax; /* 0x120F050A: mov dword ptr [ebp + 0x14], eax */
    /* cmp edi, eax */ /* 0x120F050D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0514; /* 0x120F050F: ja 0x120f0514 */
L_120F0511:
    MEM32(ebp + 0x14) = edi; /* 0x120F0511: mov dword ptr [ebp + 0x14], edi */
L_120F0514:
    eax = ebx; /* 0x120F0514: mov eax, ebx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x120F0516: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x120F0516: shl eax, 6 */
    PUSH32(esp, eax); /* 0x120F0519: push eax */
    PUSH32(esp, 0); /* 0x120F051A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F051C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F051F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x120F0524: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F0527: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F052A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F052A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x120F052C: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x120F052F: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F0594; /* 0x120F0532: jbe 0x120f0594 */
L_120F0534:
    ecx = eax; /* 0x120F0534: mov ecx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x120F0536: mov dword ptr [ebp - 8], eax */
L_120F0539:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0539: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x120F053B: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F056E; /* 0x120F053E: jbe 0x120f056e */
L_120F0540:
    eax = MEM32(ebp + 0xC); /* 0x120F0540: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F0543: mov edi, ecx */
L_120F0545:
    PUSH32(esp, edi); /* 0x120F0545: push edi */
    PUSH32(esp, eax); /* 0x120F0546: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F0547: call 0x120f017d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x120F054C: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x120F054F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F05C4; /* 0x120F0551: js 0x120f05c4 */
L_120F0553:
    eax = MEM32(ebp + 0xC); /* 0x120F0553: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F0556: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F0559: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120F055A: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F055D: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x120F0560: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0545; /* 0x120F0563: jb 0x120f0545 */
L_120F0565:
    edx = MEM32(ebp + (-0x4)); /* 0x120F0565: mov edx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x10)); /* 0x120F0568: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F056B: mov ecx, dword ptr [ebp - 8] */
L_120F056E:
    /* cmp esi, edi */ /* 0x120F056E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0582; /* 0x120F0570: jae 0x120f0582 */
L_120F0572:
    eax = edi; /* 0x120F0572: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F0574: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F0576: mov esi, dword ptr [ebp + 0xc] */
L_120F0579:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0579: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F057A: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0579; /* 0x120F057D: jne 0x120f0579 */
L_120F057F:
    MEM32(ebp + 0xC) = esi; /* 0x120F057F: mov dword ptr [ebp + 0xc], esi */
L_120F0582:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F0582: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120F0583: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x120F0586: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F0589: mov dword ptr [ebp - 8], ecx */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x120F058C: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0539; /* 0x120F058F: jb 0x120f0539 */
L_120F0591:
    esi = MEM32(ebp + (-0x14)); /* 0x120F0591: mov esi, dword ptr [ebp - 0x14] */
L_120F0594:
    /* cmp edx, esi */ /* 0x120F0594: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F05B1; /* 0x120F0596: jae 0x120f05b1 */
L_120F0598:
    ecx = esi; /* 0x120F0598: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F059A: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F059C:
    /* test edi, edi */ /* 0x120F059C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F05AE; /* 0x120F059E: je 0x120f05ae */
L_120F05A0:
    edx = MEM32(ebp + 0xC); /* 0x120F05A0: mov edx, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x120F05A3: mov eax, edi */
L_120F05A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F05A5: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F05A6: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F05A5; /* 0x120F05A9: jne 0x120f05a5 */
L_120F05AB:
    MEM32(ebp + 0xC) = edx; /* 0x120F05AB: mov dword ptr [ebp + 0xc], edx */
L_120F05AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F05AE: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F059C; /* 0x120F05AF: jne 0x120f059c */
L_120F05B1:
    eax = MEM32(ebp + 0x10); /* 0x120F05B1: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x120F05B4: add eax, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F05B7: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = eax; /* 0x120F05B8: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F052A; /* 0x120F05BB: jne 0x120f052a */
L_120F05C1:
    eax = MEM32(ebp + (-0xC)); /* 0x120F05C1: mov eax, dword ptr [ebp - 0xc] */
L_120F05C4:
    edi = POP32_VAL(esp); /* 0x120F05C4: pop edi */
    esi = POP32_VAL(esp); /* 0x120F05C5: pop esi */
L_120F05C6:
    ebx = POP32_VAL(esp); /* 0x120F05C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F05C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F05C8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F05D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F05D0u);

L_120F05D0:
    edi = edi; /* 0x120F05D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F05D2: push ebp */
    ebp = esp; /* 0x120F05D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120F05D5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F05D8: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120F05D9: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F05DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120F05DE: mov dword ptr [ebp - 0xc], eax */
    /* test ebx, ebx */ /* 0x120F05E1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F06DA; /* 0x120F05E3: je 0x120f06da */
L_120F05E9:
    eax = MEM32(ebp + 0x8); /* 0x120F05E9: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x14); /* 0x120F05EC: mov edx, dword ptr [eax + 0x14] */
    ecx = MEM32(eax + 0x18); /* 0x120F05EF: mov ecx, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F05F2: push 4 */
    eax = POP32_VAL(esp); /* 0x120F05F4: pop eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x120F05F5: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F05F8: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F05FB: mov dword ptr [ebp - 4], eax */
    /* cmp edx, eax */ /* 0x120F05FE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0605; /* 0x120F0600: ja 0x120f0605 */
L_120F0602:
    MEM32(ebp + (-0x4)) = edx; /* 0x120F0602: mov dword ptr [ebp - 4], edx */
L_120F0605:
    MEM32(ebp + 0x8) = eax; /* 0x120F0605: mov dword ptr [ebp + 8], eax */
    /* cmp ecx, eax */ /* 0x120F0608: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F060F; /* 0x120F060A: ja 0x120f060f */
L_120F060C:
    MEM32(ebp + 0x8) = ecx; /* 0x120F060C: mov dword ptr [ebp + 8], ecx */
L_120F060F:
    eax = MEM32(ebp + 0x10); /* 0x120F060F: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120F0612: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120F0613: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120F0616: push esi */
L_120F0617:
    /* cmp MEM32(eax), 0 */ /* 0x120F0617: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F06A7; /* 0x120F061A: je 0x120f06a7 */
L_120F0620:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0620: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x120F0622: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F068B; /* 0x120F0625: jbe 0x120f068b */
L_120F0627:
    edx = MEM32(ebp + 0xC); /* 0x120F0627: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F062A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x120F062C: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F0668; /* 0x120F062F: jbe 0x120f0668 */
L_120F0631:
    ebx = esi; /* 0x120F0631: mov ebx, esi */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x120F0633: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x120F0633: shl ebx, 4 */
L_120F0636:
    eax = MEM32(eax); /* 0x120F0636: mov eax, dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebx + eax)); /* 0x120F0638: fld dword ptr [ebx + eax] */
    PUSH32(esp, ecx); /* 0x120F063B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F063C: fstp dword ptr [esp] */
    PUSH32(esp, edx); /* 0x120F063F: push edx */
    RECOMP_CALL(sub_120F0109); /* 0x120F0640: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x120F0645: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x120F0648: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F06D8; /* 0x120F064A: js 0x120f06d8 */
L_120F0650:
    edx = MEM32(ebp + 0xC); /* 0x120F0650: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + 0xC); /* 0x120F0653: mov edx, dword ptr [edx + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x120F0656: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F0659: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120F065A: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x120F065D: mov dword ptr [ebp + 0xc], edx */
    /* cmp edi, MEM32(ebp + 0x8) */ /* 0x120F0660: cmp edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0636; /* 0x120F0663: jb 0x120f0636 */
L_120F0665:
    ecx = MEM32(ebp + (-0x10)); /* 0x120F0665: mov ecx, dword ptr [ebp - 0x10] */
L_120F0668:
    /* cmp edi, ecx */ /* 0x120F0668: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0679; /* 0x120F066A: jae 0x120f0679 */
L_120F066C:
    eax = ecx; /* 0x120F066C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F066E: sub eax, edi */
    _flag_k = FK_CMP;
L_120F0670:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0670: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F0671: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0670; /* 0x120F0674: jne 0x120f0670 */
L_120F0676:
    MEM32(ebp + 0xC) = edx; /* 0x120F0676: mov dword ptr [ebp + 0xc], edx */
L_120F0679:
    eax = MEM32(ebp + 0x10); /* 0x120F0679: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F067C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x120F067D: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0627; /* 0x120F0680: jb 0x120f0627 */
L_120F0682:
    edi = MEM32(ebp + 0xC); /* 0x120F0682: mov edi, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x120F0685: mov edx, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0x14); /* 0x120F0688: mov ebx, dword ptr [ebp + 0x14] */
L_120F068B:
    /* cmp esi, edx */ /* 0x120F068B: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F06C3; /* 0x120F068D: jae 0x120f06c3 */
L_120F068F:
    eax = edx; /* 0x120F068F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F0691: sub eax, esi */
    _flag_k = FK_CMP;
L_120F0693:
    /* test ecx, ecx */ /* 0x120F0693: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F06A2; /* 0x120F0695: je 0x120f06a2 */
L_120F0697:
    edx = ecx; /* 0x120F0697: mov edx, ecx */
L_120F0699:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F0699: dec edx */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F069A: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0699; /* 0x120F069D: jne 0x120f0699 */
L_120F069F:
    MEM32(ebp + 0xC) = edi; /* 0x120F069F: mov dword ptr [ebp + 0xc], edi */
L_120F06A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F06A2: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0693; /* 0x120F06A3: jne 0x120f0693 */
L_120F06A5:
    goto L_120F06BD; /* 0x120F06A5: jmp 0x120f06bd */
L_120F06A7:
    /* test edx, edx */ /* 0x120F06A7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F06C3; /* 0x120F06A9: je 0x120f06c3 */
L_120F06AB:
    /* test ecx, ecx */ /* 0x120F06AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F06BA; /* 0x120F06AD: je 0x120f06ba */
L_120F06AF:
    eax = ecx; /* 0x120F06AF: mov eax, ecx */
L_120F06B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F06B1: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F06B2: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F06B1; /* 0x120F06B5: jne 0x120f06b1 */
L_120F06B7:
    MEM32(ebp + 0xC) = edi; /* 0x120F06B7: mov dword ptr [ebp + 0xc], edi */
L_120F06BA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F06BA: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F06AB; /* 0x120F06BB: jne 0x120f06ab */
L_120F06BD:
    eax = MEM32(ebp + 0x10); /* 0x120F06BD: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x120F06C0: mov edx, dword ptr [ebp - 8] */
L_120F06C3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F06C3: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120F06C4: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ebx; /* 0x120F06C7: mov dword ptr [ebp + 0x14], ebx */
    MEM32(ebp + 0x10) = eax; /* 0x120F06CA: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120F06CD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0617; /* 0x120F06CF: jne 0x120f0617 */
L_120F06D5:
    eax = MEM32(ebp + (-0xC)); /* 0x120F06D5: mov eax, dword ptr [ebp - 0xc] */
L_120F06D8:
    esi = POP32_VAL(esp); /* 0x120F06D8: pop esi */
    edi = POP32_VAL(esp); /* 0x120F06D9: pop edi */
L_120F06DA:
    ebx = POP32_VAL(esp); /* 0x120F06DA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F06DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F06DC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F06E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F06E4u);

L_120F06E4:
    edi = edi; /* 0x120F06E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F06E6: push ebp */
    ebp = esp; /* 0x120F06E7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120F06E9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F06EC: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120F06ED: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F06F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120F06F2: mov dword ptr [ebp - 0x10], eax */
    /* test ebx, ebx */ /* 0x120F06F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F07E1; /* 0x120F06F7: je 0x120f07e1 */
L_120F06FD:
    eax = MEM32(ebp + 0x8); /* 0x120F06FD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x120F0700: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F0703: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x120F0706: push esi */
    PUSH32(esp, 4); /* 0x120F0707: push 4 */
    esi = POP32_VAL(esp); /* 0x120F0709: pop esi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F070A: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120F070D: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + 0x8) = esi; /* 0x120F0710: mov dword ptr [ebp + 8], esi */
    /* cmp ecx, esi */ /* 0x120F0713: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F071A; /* 0x120F0715: ja 0x120f071a */
L_120F0717:
    MEM32(ebp + 0x8) = ecx; /* 0x120F0717: mov dword ptr [ebp + 8], ecx */
L_120F071A:
    MEM32(ebp + (-0x4)) = esi; /* 0x120F071A: mov dword ptr [ebp - 4], esi */
    /* cmp edx, esi */ /* 0x120F071D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0724; /* 0x120F071F: ja 0x120f0724 */
L_120F0721:
    MEM32(ebp + (-0x4)) = edx; /* 0x120F0721: mov dword ptr [ebp - 4], edx */
L_120F0724:
    esi = MEM32(ebp + 0x10); /* 0x120F0724: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120F0727: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120F0728: mov edi, dword ptr [ebp + 0xc] */
L_120F072B:
    /* cmp MEM32(esi), 0 */ /* 0x120F072B: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F07E6; /* 0x120F072E: je 0x120f07e6 */
L_120F0734:
    PUSH32(esp, 0x40u); /* 0x120F0734: push 0x40 */
    PUSH32(esp, 0); /* 0x120F0736: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x120F0738: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF434); /* 0x120F073A: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x120F073F: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x120F0742: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F0745: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0748: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F074A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F07A9; /* 0x120F074C: je 0x120f07a9 */
L_120F074E:
    ecx = MEM32(ebp + 0xC); /* 0x120F074E: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F0751: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x120F0753: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F078A; /* 0x120F0756: jbe 0x120f078a */
L_120F0758:
    edi = esi; /* 0x120F0758: mov edi, esi */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x120F075A: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x120F075A: shl edi, 4 */
L_120F075D:
    eax = MEM32(ebp + 0x10); /* 0x120F075D: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x120F0760: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120F0762: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120F0764: push eax */
    PUSH32(esp, ecx); /* 0x120F0765: push ecx */
    RECOMP_CALL(sub_120F017D); /* 0x120F0766: call 0x120f017d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x120F076B: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x120F076E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F07DF; /* 0x120F0770: js 0x120f07df */
L_120F0772:
    ecx = MEM32(ebp + 0xC); /* 0x120F0772: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x120F0775: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F0778: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120F0779: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x120F077C: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x120F077F: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F075D; /* 0x120F0782: jb 0x120f075d */
L_120F0784:
    edx = MEM32(ebp + (-0x8)); /* 0x120F0784: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x8); /* 0x120F0787: mov eax, dword ptr [ebp + 8] */
L_120F078A:
    /* cmp ebx, edx */ /* 0x120F078A: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F079E; /* 0x120F078C: jae 0x120f079e */
L_120F078E:
    eax = edx; /* 0x120F078E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120F0790: sub eax, ebx */
    _flag_k = FK_CMP;
L_120F0792:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0792: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120F0793: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0792; /* 0x120F0796: jne 0x120f0792 */
L_120F0798:
    eax = MEM32(ebp + 0x8); /* 0x120F0798: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x120F079B: mov dword ptr [ebp + 0xc], ecx */
L_120F079E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F079E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x120F079F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F074E; /* 0x120F07A1: jb 0x120f074e */
L_120F07A3:
    edi = MEM32(ebp + 0xC); /* 0x120F07A3: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x14); /* 0x120F07A6: mov ebx, dword ptr [ebp + 0x14] */
L_120F07A9:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F07A9: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp esi, ecx */ /* 0x120F07AC: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F07C7; /* 0x120F07AE: jae 0x120f07c7 */
L_120F07B0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120F07B0: sub ecx, esi */
    _flag_k = FK_CMP;
L_120F07B2:
    /* test edx, edx */ /* 0x120F07B2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F07C1; /* 0x120F07B4: je 0x120f07c1 */
L_120F07B6:
    eax = edx; /* 0x120F07B6: mov eax, edx */
L_120F07B8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F07B8: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F07B9: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F07B8; /* 0x120F07BC: jne 0x120f07b8 */
L_120F07BE:
    MEM32(ebp + 0xC) = edi; /* 0x120F07BE: mov dword ptr [ebp + 0xc], edi */
L_120F07C1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F07C1: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F07B2; /* 0x120F07C2: jne 0x120f07b2 */
L_120F07C4:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F07C4: mov ecx, dword ptr [ebp - 0xc] */
L_120F07C7:
    esi = MEM32(ebp + 0x10); /* 0x120F07C7: mov esi, dword ptr [ebp + 0x10] */
L_120F07CA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F07CA: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120F07CB: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ebx; /* 0x120F07CE: mov dword ptr [ebp + 0x14], ebx */
    MEM32(ebp + 0x10) = esi; /* 0x120F07D1: mov dword ptr [ebp + 0x10], esi */
    /* test ebx, ebx */ /* 0x120F07D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F072B; /* 0x120F07D6: jne 0x120f072b */
L_120F07DC:
    eax = MEM32(ebp + (-0x10)); /* 0x120F07DC: mov eax, dword ptr [ebp - 0x10] */
L_120F07DF:
    edi = POP32_VAL(esp); /* 0x120F07DF: pop edi */
    esi = POP32_VAL(esp); /* 0x120F07E0: pop esi */
L_120F07E1:
    ebx = POP32_VAL(esp); /* 0x120F07E1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F07E2: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F07E3: ret 0x10 */
L_120F07E6:
    /* test ecx, ecx */ /* 0x120F07E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F07CA; /* 0x120F07E8: je 0x120f07ca */
L_120F07EA:
    /* test edx, edx */ /* 0x120F07EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F07F9; /* 0x120F07EC: je 0x120f07f9 */
L_120F07EE:
    eax = edx; /* 0x120F07EE: mov eax, edx */
L_120F07F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F07F0: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F07F1: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F07F0; /* 0x120F07F4: jne 0x120f07f0 */
L_120F07F6:
    MEM32(ebp + 0xC) = edi; /* 0x120F07F6: mov dword ptr [ebp + 0xc], edi */
L_120F07F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F07F9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F07EA; /* 0x120F07FA: jne 0x120f07ea */
L_120F07FC:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F07FC: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_120F07CA; /* 0x120F07FF: jmp 0x120f07ca */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F0806(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0806u);

L_120F0806:
    edi = edi; /* 0x120F0806: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0808: push ebp */
    ebp = esp; /* 0x120F0809: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120F080B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120F080E: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120F080F: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0812: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120F0814: mov dword ptr [ebp - 0x10], eax */
    /* test edi, edi */ /* 0x120F0817: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0918; /* 0x120F0819: je 0x120f0918 */
L_120F081F:
    eax = MEM32(ebp + 0x8); /* 0x120F081F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x120F0822: mov ecx, dword ptr [eax + 0x14] */
    PUSH32(esp, ebx); /* 0x120F0825: push ebx */
    ebx = MEM32(eax + 0x18); /* 0x120F0826: mov ebx, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F0829: push 4 */
    eax = POP32_VAL(esp); /* 0x120F082B: pop eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F082C: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F082F: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x120F0832: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0839; /* 0x120F0834: ja 0x120f0839 */
L_120F0836:
    MEM32(ebp + (-0x4)) = ecx; /* 0x120F0836: mov dword ptr [ebp - 4], ecx */
L_120F0839:
    MEM32(ebp + 0x8) = eax; /* 0x120F0839: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, eax */ /* 0x120F083C: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0843; /* 0x120F083E: ja 0x120f0843 */
L_120F0840:
    MEM32(ebp + 0x8) = ebx; /* 0x120F0840: mov dword ptr [ebp + 8], ebx */
L_120F0843:
    edx = MEM32(ebp + 0xC); /* 0x120F0843: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x120F0846: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120F0849: push esi */
L_120F084A:
    /* cmp MEM32(eax), 0 */ /* 0x120F084A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F08E5; /* 0x120F084D: je 0x120f08e5 */
L_120F0853:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0853: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x120F0855: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F08C9; /* 0x120F0858: jbe 0x120f08c9 */
L_120F085A:
    ecx = MEM32(ebp + 0x8); /* 0x120F085A: mov ecx, dword ptr [ebp + 8] */
L_120F085D:
    edx = MEM32(ebp + 0xC); /* 0x120F085D: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F0860: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120F0862: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F08A6; /* 0x120F0864: je 0x120f08a6 */
L_120F0866:
    ecx = esi; /* 0x120F0866: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120F0868: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120F0868: shl ecx, 2 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F086B: mov dword ptr [ebp - 0xc], ecx */
L_120F086E:
    eax = MEM32(eax); /* 0x120F086E: mov eax, dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x120F0870: fld dword ptr [ecx + eax] */
    PUSH32(esp, ecx); /* 0x120F0873: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F0874: fstp dword ptr [esp] */
    PUSH32(esp, edx); /* 0x120F0877: push edx */
    RECOMP_CALL(sub_120F0109); /* 0x120F0878: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x120F087D: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x120F0880: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0916; /* 0x120F0882: js 0x120f0916 */
L_120F0888:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F0888: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0xC); /* 0x120F088B: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + 0xC); /* 0x120F088E: mov edx, dword ptr [edx + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x120F0891: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F0894: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120F0895: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F0898: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x120F089B: mov dword ptr [ebp + 0xc], edx */
    /* cmp edi, MEM32(ebp + 0x8) */ /* 0x120F089E: cmp edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F086E; /* 0x120F08A1: jb 0x120f086e */
L_120F08A3:
    ecx = MEM32(ebp + 0x8); /* 0x120F08A3: mov ecx, dword ptr [ebp + 8] */
L_120F08A6:
    /* cmp edi, ebx */ /* 0x120F08A6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F08B7; /* 0x120F08A8: jae 0x120f08b7 */
L_120F08AA:
    eax = ebx; /* 0x120F08AA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F08AC: sub eax, edi */
    _flag_k = FK_CMP;
L_120F08AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F08AE: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F08AF: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F08AE; /* 0x120F08B2: jne 0x120f08ae */
L_120F08B4:
    MEM32(ebp + 0xC) = edx; /* 0x120F08B4: mov dword ptr [ebp + 0xc], edx */
L_120F08B7:
    eax = MEM32(ebp + 0x10); /* 0x120F08B7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F08BA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x120F08BB: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F085D; /* 0x120F08BE: jb 0x120f085d */
L_120F08C0:
    edx = MEM32(ebp + 0xC); /* 0x120F08C0: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F08C3: mov ecx, dword ptr [ebp - 8] */
    edi = MEM32(ebp + 0x14); /* 0x120F08C6: mov edi, dword ptr [ebp + 0x14] */
L_120F08C9:
    /* cmp esi, ecx */ /* 0x120F08C9: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0901; /* 0x120F08CB: jae 0x120f0901 */
L_120F08CD:
    eax = ecx; /* 0x120F08CD: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F08CF: sub eax, esi */
    _flag_k = FK_CMP;
L_120F08D1:
    /* test ebx, ebx */ /* 0x120F08D1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F08E0; /* 0x120F08D3: je 0x120f08e0 */
L_120F08D5:
    ecx = ebx; /* 0x120F08D5: mov ecx, ebx */
L_120F08D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F08D7: dec ecx */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F08D8: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F08D7; /* 0x120F08DB: jne 0x120f08d7 */
L_120F08DD:
    MEM32(ebp + 0xC) = edx; /* 0x120F08DD: mov dword ptr [ebp + 0xc], edx */
L_120F08E0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F08E0: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F08D1; /* 0x120F08E1: jne 0x120f08d1 */
L_120F08E3:
    goto L_120F08FB; /* 0x120F08E3: jmp 0x120f08fb */
L_120F08E5:
    /* test ecx, ecx */ /* 0x120F08E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0901; /* 0x120F08E7: je 0x120f0901 */
L_120F08E9:
    /* test ebx, ebx */ /* 0x120F08E9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F08F8; /* 0x120F08EB: je 0x120f08f8 */
L_120F08ED:
    eax = ebx; /* 0x120F08ED: mov eax, ebx */
L_120F08EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F08EF: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F08F0: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F08EF; /* 0x120F08F3: jne 0x120f08ef */
L_120F08F5:
    MEM32(ebp + 0xC) = edx; /* 0x120F08F5: mov dword ptr [ebp + 0xc], edx */
L_120F08F8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F08F8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F08E9; /* 0x120F08F9: jne 0x120f08e9 */
L_120F08FB:
    eax = MEM32(ebp + 0x10); /* 0x120F08FB: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F08FE: mov ecx, dword ptr [ebp - 8] */
L_120F0901:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F0901: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120F0902: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edi; /* 0x120F0905: mov dword ptr [ebp + 0x14], edi */
    MEM32(ebp + 0x10) = eax; /* 0x120F0908: mov dword ptr [ebp + 0x10], eax */
    /* test edi, edi */ /* 0x120F090B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F084A; /* 0x120F090D: jne 0x120f084a */
L_120F0913:
    eax = MEM32(ebp + (-0x10)); /* 0x120F0913: mov eax, dword ptr [ebp - 0x10] */
L_120F0916:
    esi = POP32_VAL(esp); /* 0x120F0916: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F0917: pop ebx */
L_120F0918:
    edi = POP32_VAL(esp); /* 0x120F0918: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F0919: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F091A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F0922(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0922u);

L_120F0922:
    edi = edi; /* 0x120F0922: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0924: push ebp */
    ebp = esp; /* 0x120F0925: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120F0927: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F092A: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120F092B: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F092E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120F0930: mov dword ptr [ebp - 0x10], eax */
    /* test ebx, ebx */ /* 0x120F0933: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0A1F; /* 0x120F0935: je 0x120f0a1f */
L_120F093B:
    eax = MEM32(ebp + 0x8); /* 0x120F093B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x120F093E: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F0941: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x120F0944: push esi */
    PUSH32(esp, 4); /* 0x120F0945: push 4 */
    esi = POP32_VAL(esp); /* 0x120F0947: pop esi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F0948: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120F094B: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + 0x8) = esi; /* 0x120F094E: mov dword ptr [ebp + 8], esi */
    /* cmp ecx, esi */ /* 0x120F0951: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0958; /* 0x120F0953: ja 0x120f0958 */
L_120F0955:
    MEM32(ebp + 0x8) = ecx; /* 0x120F0955: mov dword ptr [ebp + 8], ecx */
L_120F0958:
    MEM32(ebp + (-0x4)) = esi; /* 0x120F0958: mov dword ptr [ebp - 4], esi */
    /* cmp edx, esi */ /* 0x120F095B: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0962; /* 0x120F095D: ja 0x120f0962 */
L_120F095F:
    MEM32(ebp + (-0x4)) = edx; /* 0x120F095F: mov dword ptr [ebp - 4], edx */
L_120F0962:
    esi = MEM32(ebp + 0x10); /* 0x120F0962: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120F0965: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120F0966: mov edi, dword ptr [ebp + 0xc] */
L_120F0969:
    /* cmp MEM32(esi), 0 */ /* 0x120F0969: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F0A24; /* 0x120F096C: je 0x120f0a24 */
L_120F0972:
    PUSH32(esp, 0x40u); /* 0x120F0972: push 0x40 */
    PUSH32(esp, 0); /* 0x120F0974: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x120F0976: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF434); /* 0x120F0978: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x120F097D: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x120F0980: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F0983: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0986: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F0988: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F09E7; /* 0x120F098A: je 0x120f09e7 */
L_120F098C:
    ecx = MEM32(ebp + 0xC); /* 0x120F098C: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F098F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x120F0991: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F09C8; /* 0x120F0994: jbe 0x120f09c8 */
L_120F0996:
    ebx = esi; /* 0x120F0996: mov ebx, esi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120F0998: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120F0998: shl ebx, 2 */
L_120F099B:
    eax = MEM32(ebp + 0x10); /* 0x120F099B: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x120F099E: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x120F09A0: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120F09A2: push eax */
    PUSH32(esp, ecx); /* 0x120F09A3: push ecx */
    RECOMP_CALL(sub_120F017D); /* 0x120F09A4: call 0x120f017d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x120F09A9: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x120F09AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0A1D; /* 0x120F09AE: js 0x120f0a1d */
L_120F09B0:
    ecx = MEM32(ebp + 0xC); /* 0x120F09B0: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x120F09B3: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F09B6: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120F09B7: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x120F09BA: mov dword ptr [ebp + 0xc], ecx */
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x120F09BD: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F099B; /* 0x120F09C0: jb 0x120f099b */
L_120F09C2:
    edx = MEM32(ebp + (-0x8)); /* 0x120F09C2: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x8); /* 0x120F09C5: mov eax, dword ptr [ebp + 8] */
L_120F09C8:
    /* cmp edi, edx */ /* 0x120F09C8: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F09DC; /* 0x120F09CA: jae 0x120f09dc */
L_120F09CC:
    eax = edx; /* 0x120F09CC: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F09CE: sub eax, edi */
    _flag_k = FK_CMP;
L_120F09D0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F09D0: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120F09D1: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F09D0; /* 0x120F09D4: jne 0x120f09d0 */
L_120F09D6:
    eax = MEM32(ebp + 0x8); /* 0x120F09D6: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x120F09D9: mov dword ptr [ebp + 0xc], ecx */
L_120F09DC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F09DC: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x120F09DD: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F098C; /* 0x120F09DF: jb 0x120f098c */
L_120F09E1:
    edi = MEM32(ebp + 0xC); /* 0x120F09E1: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x14); /* 0x120F09E4: mov ebx, dword ptr [ebp + 0x14] */
L_120F09E7:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F09E7: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp esi, ecx */ /* 0x120F09EA: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0A05; /* 0x120F09EC: jae 0x120f0a05 */
L_120F09EE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120F09EE: sub ecx, esi */
    _flag_k = FK_CMP;
L_120F09F0:
    /* test edx, edx */ /* 0x120F09F0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F09FF; /* 0x120F09F2: je 0x120f09ff */
L_120F09F4:
    eax = edx; /* 0x120F09F4: mov eax, edx */
L_120F09F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F09F6: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F09F7: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F09F6; /* 0x120F09FA: jne 0x120f09f6 */
L_120F09FC:
    MEM32(ebp + 0xC) = edi; /* 0x120F09FC: mov dword ptr [ebp + 0xc], edi */
L_120F09FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F09FF: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F09F0; /* 0x120F0A00: jne 0x120f09f0 */
L_120F0A02:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F0A02: mov ecx, dword ptr [ebp - 0xc] */
L_120F0A05:
    esi = MEM32(ebp + 0x10); /* 0x120F0A05: mov esi, dword ptr [ebp + 0x10] */
L_120F0A08:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F0A08: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120F0A09: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ebx; /* 0x120F0A0C: mov dword ptr [ebp + 0x14], ebx */
    MEM32(ebp + 0x10) = esi; /* 0x120F0A0F: mov dword ptr [ebp + 0x10], esi */
    /* test ebx, ebx */ /* 0x120F0A12: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0969; /* 0x120F0A14: jne 0x120f0969 */
L_120F0A1A:
    eax = MEM32(ebp + (-0x10)); /* 0x120F0A1A: mov eax, dword ptr [ebp - 0x10] */
L_120F0A1D:
    edi = POP32_VAL(esp); /* 0x120F0A1D: pop edi */
    esi = POP32_VAL(esp); /* 0x120F0A1E: pop esi */
L_120F0A1F:
    ebx = POP32_VAL(esp); /* 0x120F0A1F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F0A20: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F0A21: ret 0x10 */
L_120F0A24:
    /* test ecx, ecx */ /* 0x120F0A24: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0A08; /* 0x120F0A26: je 0x120f0a08 */
L_120F0A28:
    /* test edx, edx */ /* 0x120F0A28: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0A37; /* 0x120F0A2A: je 0x120f0a37 */
L_120F0A2C:
    eax = edx; /* 0x120F0A2C: mov eax, edx */
L_120F0A2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0A2E: dec eax */
    _flag_k = FK_DEC;
    edi = MEM32(edi + 0xC); /* 0x120F0A2F: mov edi, dword ptr [edi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0A2E; /* 0x120F0A32: jne 0x120f0a2e */
L_120F0A34:
    MEM32(ebp + 0xC) = edi; /* 0x120F0A34: mov dword ptr [ebp + 0xc], edi */
L_120F0A37:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F0A37: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0A28; /* 0x120F0A38: jne 0x120f0a28 */
L_120F0A3A:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F0A3A: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_120F0A08; /* 0x120F0A3D: jmp 0x120f0a08 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F0A44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0A44u);

L_120F0A44:
    edi = edi; /* 0x120F0A44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0A46: push ebp */
    ebp = esp; /* 0x120F0A47: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F0A49: push ecx */
    PUSH32(esp, edi); /* 0x120F0A4A: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120F0A4B: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0A4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F0A50: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x120F0A53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0AB9; /* 0x120F0A55: je 0x120f0ab9 */
L_120F0A57:
    eax = MEM32(ebp + 0x8); /* 0x120F0A57: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x120F0A5A: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, ebx); /* 0x120F0A5D: push ebx */
    PUSH32(esp, 4); /* 0x120F0A5E: push 4 */
    ebx = POP32_VAL(esp); /* 0x120F0A60: pop ebx */
    MEM32(ebp + 0x14) = eax; /* 0x120F0A61: mov dword ptr [ebp + 0x14], eax */
    /* cmp eax, ebx */ /* 0x120F0A64: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0A6A; /* 0x120F0A66: ja 0x120f0a6a */
L_120F0A68:
    ebx = eax; /* 0x120F0A68: mov ebx, eax */
L_120F0A6A:
    PUSH32(esp, esi); /* 0x120F0A6A: push esi */
L_120F0A6B:
    ecx = MEM32(ebp + 0xC); /* 0x120F0A6B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0A6E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120F0A70: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0A9C; /* 0x120F0A72: je 0x120f0a9c */
L_120F0A74:
    eax = MEM32(ebp + 0x10); /* 0x120F0A74: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + esi * 4)); /* 0x120F0A77: fld dword ptr [eax + esi*4] */
    PUSH32(esp, ecx); /* 0x120F0A7A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F0A7B: fstp dword ptr [esp] */
    PUSH32(esp, ecx); /* 0x120F0A7E: push ecx */
    RECOMP_CALL(sub_120F0109); /* 0x120F0A7F: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x120F0A84: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F0A87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0AB7; /* 0x120F0A89: js 0x120f0ab7 */
L_120F0A8B:
    ecx = MEM32(ebp + 0xC); /* 0x120F0A8B: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x120F0A8E: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F0A91: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = ecx; /* 0x120F0A92: mov dword ptr [ebp + 0xc], ecx */
    /* cmp esi, ebx */ /* 0x120F0A95: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0A74; /* 0x120F0A97: jb 0x120f0a74 */
L_120F0A99:
    eax = MEM32(ebp + 0x14); /* 0x120F0A99: mov eax, dword ptr [ebp + 0x14] */
L_120F0A9C:
    /* cmp esi, eax */ /* 0x120F0A9C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0AAD; /* 0x120F0A9E: jae 0x120f0aad */
L_120F0AA0:
    edx = eax; /* 0x120F0AA0: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x120F0AA2: sub edx, esi */
    _flag_k = FK_CMP;
L_120F0AA4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F0AA4: dec edx */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx + 0xC); /* 0x120F0AA5: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0AA4; /* 0x120F0AA8: jne 0x120f0aa4 */
L_120F0AAA:
    MEM32(ebp + 0xC) = ecx; /* 0x120F0AAA: mov dword ptr [ebp + 0xc], ecx */
L_120F0AAD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x120F0AAD: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F0AB1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0A6B; /* 0x120F0AB2: jne 0x120f0a6b */
L_120F0AB4:
    eax = MEM32(ebp + (-0x4)); /* 0x120F0AB4: mov eax, dword ptr [ebp - 4] */
L_120F0AB7:
    esi = POP32_VAL(esp); /* 0x120F0AB7: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F0AB8: pop ebx */
L_120F0AB9:
    edi = POP32_VAL(esp); /* 0x120F0AB9: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F0ABA: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F0ABB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F0AC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0AC3u);

L_120F0AC3:
    edi = edi; /* 0x120F0AC3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0AC5: push ebp */
    ebp = esp; /* 0x120F0AC6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F0AC8: push ecx */
    PUSH32(esp, esi); /* 0x120F0AC9: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F0ACA: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0ACD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F0ACF: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x120F0AD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0B5E; /* 0x120F0AD4: je 0x120f0b5e */
L_120F0ADA:
    eax = MEM32(ebp + 0x8); /* 0x120F0ADA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120F0ADD: push ebx */
    ebx = MEM32(eax + 0x14); /* 0x120F0ADE: mov ebx, dword ptr [eax + 0x14] */
    PUSH32(esp, 4); /* 0x120F0AE1: push 4 */
    eax = POP32_VAL(esp); /* 0x120F0AE3: pop eax */
    MEM32(ebp + 0x14) = eax; /* 0x120F0AE4: mov dword ptr [ebp + 0x14], eax */
    /* cmp ebx, eax */ /* 0x120F0AE7: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F0AEE; /* 0x120F0AE9: ja 0x120f0aee */
L_120F0AEB:
    MEM32(ebp + 0x14) = ebx; /* 0x120F0AEB: mov dword ptr [ebp + 0x14], ebx */
L_120F0AEE:
    eax = esi; /* 0x120F0AEE: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120F0AF0: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120F0AF0: shl eax, 4 */
    PUSH32(esp, eax); /* 0x120F0AF3: push eax */
    PUSH32(esp, 0); /* 0x120F0AF4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F0AF6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F0AF9: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x120F0AFE: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x120F0B01: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F0B04: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120F0B07: push edi */
L_120F0B08:
    edx = MEM32(ebp + 0xC); /* 0x120F0B08: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F0B0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120F0B0D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0B3C; /* 0x120F0B0F: je 0x120f0b3c */
L_120F0B11:
    MEM32(ebp + 0x8) = eax; /* 0x120F0B11: mov dword ptr [ebp + 8], eax */
L_120F0B14:
    PUSH32(esp, eax); /* 0x120F0B14: push eax */
    PUSH32(esp, edx); /* 0x120F0B15: push edx */
    RECOMP_CALL(sub_120F017D); /* 0x120F0B16: call 0x120f017d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x120F0B1B: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F0B1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0B5C; /* 0x120F0B20: js 0x120f0b5c */
L_120F0B22:
    eax = MEM32(ebp + 0x8); /* 0x120F0B22: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x120F0B25: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x120F0B28: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(edx + 0xC); /* 0x120F0B2B: mov edx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F0B2E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120F0B2F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x120F0B32: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x120F0B35: mov dword ptr [ebp + 0xc], edx */
    /* cmp edi, ecx */ /* 0x120F0B38: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0B14; /* 0x120F0B3A: jb 0x120f0b14 */
L_120F0B3C:
    /* cmp edi, ebx */ /* 0x120F0B3C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F0B4D; /* 0x120F0B3E: jae 0x120f0b4d */
L_120F0B40:
    eax = ebx; /* 0x120F0B40: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F0B42: sub eax, edi */
    _flag_k = FK_CMP;
L_120F0B44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F0B44: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F0B45: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0B44; /* 0x120F0B48: jne 0x120f0b44 */
L_120F0B4A:
    MEM32(ebp + 0xC) = edx; /* 0x120F0B4A: mov dword ptr [ebp + 0xc], edx */
L_120F0B4D:
    eax = MEM32(ebp + 0x10); /* 0x120F0B4D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x120F0B50: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120F0B53: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = eax; /* 0x120F0B54: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F0B08; /* 0x120F0B57: jne 0x120f0b08 */
L_120F0B59:
    eax = MEM32(ebp + (-0x4)); /* 0x120F0B59: mov eax, dword ptr [ebp - 4] */
L_120F0B5C:
    edi = POP32_VAL(esp); /* 0x120F0B5C: pop edi */
    ebx = POP32_VAL(esp); /* 0x120F0B5D: pop ebx */
L_120F0B5E:
    esi = POP32_VAL(esp); /* 0x120F0B5E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F0B5F: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F0B60: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F0B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0B75u);

L_120F0B75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0B75: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x120F0B77: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x120F0B7A: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x120F0B7D: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x120F0B80: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x120F0B83: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x18) = eax; /* 0x120F0B86: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x120F0B89: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = eax; /* 0x120F0B8C: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x24) = eax; /* 0x120F0B8F: mov dword ptr [ecx + 0x24], eax */
    MEM32(ecx + 0x28) = eax; /* 0x120F0B92: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x120F0B95: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x30) = eax; /* 0x120F0B98: mov dword ptr [ecx + 0x30], eax */
    MEM32(ecx + 0x34) = eax; /* 0x120F0B9B: mov dword ptr [ecx + 0x34], eax */
    MEM32(ecx + 0x38) = eax; /* 0x120F0B9E: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x120F0BA1: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x40) = eax; /* 0x120F0BA4: mov dword ptr [ecx + 0x40], eax */
    MEM32(ecx + 0x44) = eax; /* 0x120F0BA7: mov dword ptr [ecx + 0x44], eax */
    MEM32(ecx + 0x48) = eax; /* 0x120F0BAA: mov dword ptr [ecx + 0x48], eax */
    MEM32(ecx + 0x4C) = eax; /* 0x120F0BAD: mov dword ptr [ecx + 0x4c], eax */
    MEM32(ecx + 0x50) = eax; /* 0x120F0BB0: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x54) = eax; /* 0x120F0BB3: mov dword ptr [ecx + 0x54], eax */
    MEM32(ecx + 0x58) = eax; /* 0x120F0BB6: mov dword ptr [ecx + 0x58], eax */
    MEM32(ecx + 0x68) = eax; /* 0x120F0BB9: mov dword ptr [ecx + 0x68], eax */
    MEM32(ecx + 0x64) = eax; /* 0x120F0BBC: mov dword ptr [ecx + 0x64], eax */
    MEM32(ecx + 0x5C) = eax; /* 0x120F0BBF: mov dword ptr [ecx + 0x5c], eax */
    MEM32(ecx + 0x60) = eax; /* 0x120F0BC2: mov dword ptr [ecx + 0x60], eax */
    MEM32(ecx) = 0x1200A138u; /* 0x120F0BC5: mov dword ptr [ecx], 0x1200a138 */
    eax = ecx; /* 0x120F0BCB: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120F0BCD: ret  */
    RECOMP_REGS_OUT();
}

void sub_120F0BD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0BD3u);

L_120F0BD3:
    edi = edi; /* 0x120F0BD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0BD5: push ebp */
    ebp = esp; /* 0x120F0BD6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F0BD8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F0BD9: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - 1; /* 0x120F0BDC: dec dword ptr [esi + 8] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F0BE6; /* 0x120F0BDF: je 0x120f0be6 */
L_120F0BE1:
    eax = MEM32(esi + 0x8); /* 0x120F0BE1: mov eax, dword ptr [esi + 8] */
    goto L_120F0BFB; /* 0x120F0BE4: jmp 0x120f0bfb */
L_120F0BE6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFF94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFF94u; /* 0x120F0BE6: add esi, -0x6c */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_120F0BF9; /* 0x120F0BE9: je 0x120f0bf9 */
L_120F0BEB:
    ecx = esi; /* 0x120F0BEB: mov ecx, esi */
    RECOMP_CALL(sub_120EFB8F); /* 0x120F0BED: call 0x120efb8f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120F0BF2: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120F0BF3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F0BF8: pop ecx */
L_120F0BF9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0BF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0BFB:
    esi = POP32_VAL(esp); /* 0x120F0BFB: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0BFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120F0BFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120F0C05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0C05u);

L_120F0C05:
    edi = edi; /* 0x120F0C05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0C07: push ebp */
    ebp = esp; /* 0x120F0C08: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F0C0A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120F0C0B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120F0C0E: push edi */
    PUSH32(esp, 4); /* 0x120F0C0F: push 4 */
    ecx = POP32_VAL(esp); /* 0x120F0C11: pop ecx */
    edi = 0x12001DA8u; /* 0x120F0C12: mov edi, 0x12001da8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0C17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120F0C19: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120F0C2E; /* 0x120F0C1B: je 0x120f0c2e */
L_120F0C1D:
    esi = MEM32(ebp + 0xC); /* 0x120F0C1D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120F0C20: push 4 */
    ecx = POP32_VAL(esp); /* 0x120F0C22: pop ecx */
    edi = 0x12018314u; /* 0x120F0C23: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0C28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120F0C2A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120F0C4E; /* 0x120F0C2C: jne 0x120f0c4e */
L_120F0C2E:
    ecx = MEM32(ebp + 0x8); /* 0x120F0C2E: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x120F0C31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0C3A; /* 0x120F0C33: je 0x120f0c3a */
L_120F0C35:
    edx = ecx + 0x6C; /* 0x120F0C35: lea edx, [ecx + 0x6c] */
    goto L_120F0C3C; /* 0x120F0C38: jmp 0x120f0c3c */
L_120F0C3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F0C3A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0C3C:
    eax = MEM32(ebp + 0x10); /* 0x120F0C3C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edx; /* 0x120F0C3F: mov dword ptr [eax], edx */
    eax = ecx + 0x6C; /* 0x120F0C41: lea eax, [ecx + 0x6c] */
    ecx = MEM32(eax); /* 0x120F0C44: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120F0C46: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120F0C47: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0C4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F0C59; /* 0x120F0C4C: jmp 0x120f0c59 */
L_120F0C4E:
    eax = MEM32(ebp + 0x10); /* 0x120F0C4E: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x120F0C51: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80004002u; /* 0x120F0C54: mov eax, 0x80004002 */
L_120F0C59:
    edi = POP32_VAL(esp); /* 0x120F0C59: pop edi */
    esi = POP32_VAL(esp); /* 0x120F0C5A: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0C5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0C5C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0C64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0C64u);

L_120F0C64:
    edi = edi; /* 0x120F0C64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0C66: push ebp */
    ebp = esp; /* 0x120F0C67: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F0C69: push esi */
    PUSH32(esp, edi); /* 0x120F0C6A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F0C6B: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0C6E: push dword ptr [ebp + 0xc] */
    ecx = edi + (-0x6C); /* 0x120F0C71: lea ecx, [edi - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0C74: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_120EFBD9); /* 0x120F0C76: call 0x120efbd9 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F0C7B: mov edx, eax */
    /* test edx, edx */ /* 0x120F0C7D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0C88; /* 0x120F0C7F: jne 0x120f0c88 */
L_120F0C81:
    esi = 0x8876086Cu; /* 0x120F0C81: mov esi, 0x8876086c */
    goto L_120F0CFD; /* 0x120F0C86: jmp 0x120f0cfd */
L_120F0C88:
    eax = MEM32(edx + 0x4); /* 0x120F0C88: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x2C); /* 0x120F0C8B: mov eax, dword ptr [eax + 0x2c] */
    eax = MEM32(eax + 0x68); /* 0x120F0C8E: mov eax, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x120F0C91: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x120F0C94: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F0CCC; /* 0x120F0C97: je 0x120f0ccc */
L_120F0C99:
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120F0C99: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0CAA; /* 0x120F0C9B: je 0x120f0caa */
L_120F0C9D:
    eax = MEM32(edx + 0x4); /* 0x120F0C9D: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(eax + 0x44); /* 0x120F0CA0: mov ecx, dword ptr [eax + 0x44] */
    eax = MEM32(edi + (-0x38)); /* 0x120F0CA3: mov eax, dword ptr [edi - 0x38] */
    _flag_a = (uint32_t)(MEM32(eax + ecx)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + ecx) = MEM32(eax + ecx) & 0xFFFFFFFEu; /* 0x120F0CA6: and dword ptr [eax + ecx], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0CAA:
    eax = MEM32(edx + 0x4); /* 0x120F0CAA: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(eax + 0x2C); /* 0x120F0CAD: mov ecx, dword ptr [eax + 0x2c] */
    eax = MEM32(ecx + 0x6C); /* 0x120F0CB0: mov eax, dword ptr [ecx + 0x6c] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x68) | 0x80u)); _flag_b = (uint32_t)((MEM32(ecx + 0x68) | 0x80u));
    MEM32(ecx + 0x68) = MEM32(ecx + 0x68) | 0x80u; /* 0x120F0CB3: or dword ptr [ecx + 0x68], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x6C) = eax; /* 0x120F0CBA: mov dword ptr [ecx + 0x6c], eax */
    eax = MEM32(edx + 0x4); /* 0x120F0CBD: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(eax + 0x44); /* 0x120F0CC0: mov ecx, dword ptr [eax + 0x44] */
    eax = MEM32(edi + (-0x38)); /* 0x120F0CC3: mov eax, dword ptr [edi - 0x38] */
    _flag_a = (uint32_t)((MEM32(eax + ecx) | 2)); _flag_b = (uint32_t)((MEM32(eax + ecx) | 2));
    MEM32(eax + ecx) = MEM32(eax + ecx) | 2; /* 0x120F0CC6: or dword ptr [eax + ecx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F0CFD; /* 0x120F0CCA: jmp 0x120f0cfd */
L_120F0CCC:
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120F0CCC: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0CDD; /* 0x120F0CCE: je 0x120f0cdd */
L_120F0CD0:
    eax = MEM32(edx + 0x4); /* 0x120F0CD0: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(eax + 0x44); /* 0x120F0CD3: mov ecx, dword ptr [eax + 0x44] */
    eax = MEM32(edi + (-0x38)); /* 0x120F0CD6: mov eax, dword ptr [edi - 0x38] */
    _flag_a = (uint32_t)((MEM32(eax + ecx) | 1)); _flag_b = (uint32_t)((MEM32(eax + ecx) | 1));
    MEM32(eax + ecx) = MEM32(eax + ecx) | 1; /* 0x120F0CD9: or dword ptr [eax + ecx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0CDD:
    eax = MEM32(edx + 0x4); /* 0x120F0CDD: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x2C); /* 0x120F0CE0: mov eax, dword ptr [eax + 0x2c] */
    ecx = MEM32(eax + 0x6C); /* 0x120F0CE3: mov ecx, dword ptr [eax + 0x6c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) & 0xFFFFFF7Fu; /* 0x120F0CE6: and dword ptr [eax + 0x68], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x6C) = ecx; /* 0x120F0CED: mov dword ptr [eax + 0x6c], ecx */
    ecx = MEM32(edx + 0x4); /* 0x120F0CF0: mov ecx, dword ptr [edx + 4] */
    edx = MEM32(ecx + 0x44); /* 0x120F0CF3: mov edx, dword ptr [ecx + 0x44] */
    ecx = MEM32(edi + (-0x38)); /* 0x120F0CF6: mov ecx, dword ptr [edi - 0x38] */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + edx) = MEM32(ecx + edx) & 0xFFFFFFFDu; /* 0x120F0CF9: and dword ptr [ecx + edx], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0CFD:
    edi = POP32_VAL(esp); /* 0x120F0CFD: pop edi */
    eax = esi; /* 0x120F0CFE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F0D00: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0D02: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0D0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0D0Au);

L_120F0D0A:
    edi = edi; /* 0x120F0D0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0D0C: push ebp */
    ebp = esp; /* 0x120F0D0D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F0D0F: push esi */
    PUSH32(esp, edi); /* 0x120F0D10: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F0D11: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0D14: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120F0D16: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0D2C; /* 0x120F0D18: je 0x120f0d2c */
L_120F0D1A:
    ecx = MEM32(ebp + 0x8); /* 0x120F0D1A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0D1D: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F0D20: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120EFBD9); /* 0x120F0D23: call 0x120efbd9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F0D28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0D33; /* 0x120F0D2A: jne 0x120f0d33 */
L_120F0D2C:
    esi = 0x80004005u; /* 0x120F0D2C: mov esi, 0x80004005 */
    goto L_120F0D51; /* 0x120F0D31: jmp 0x120f0d51 */
L_120F0D33:
    eax = MEM32(eax + 0x4); /* 0x120F0D33: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x2C); /* 0x120F0D36: mov eax, dword ptr [eax + 0x2c] */
    eax = MEM32(eax + 0x68); /* 0x120F0D39: mov eax, dword ptr [eax + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x120F0D3C: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120F0D41: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0D4A; /* 0x120F0D43: je 0x120f0d4a */
L_120F0D45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0D45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F0D47: inc eax */
    _flag_k = FK_INC;
    goto L_120F0D4C; /* 0x120F0D48: jmp 0x120f0d4c */
L_120F0D4A:
    eax = esi; /* 0x120F0D4A: mov eax, esi */
L_120F0D4C:
    ecx = (uint32_t)LO8(eax); /* 0x120F0D4C: movzx ecx, al */
    MEM32(edi) = ecx; /* 0x120F0D4F: mov dword ptr [edi], ecx */
L_120F0D51:
    edi = POP32_VAL(esp); /* 0x120F0D51: pop edi */
    eax = esi; /* 0x120F0D52: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F0D54: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0D55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0D56: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0D5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0D5Eu);

L_120F0D5E:
    edi = edi; /* 0x120F0D5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0D60: push ebp */
    ebp = esp; /* 0x120F0D61: mov ebp, esp */
    eax = MEM32(ecx + 0x70); /* 0x120F0D63: mov eax, dword ptr [ecx + 0x70] */
    edx = MEM32(ebp + 0x8); /* 0x120F0D66: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F0D69: push esi */
    esi = 0x80000003u; /* 0x120F0D6A: mov esi, 0x80000003 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120F0D6F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120F0D71: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x120F0D73: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x120F0D75: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F0D88; /* 0x120F0D76: jne 0x120f0d88 */
L_120F0D78:
    edx = ~edx; /* 0x120F0D78: not edx */
    /* cmp MEM32(edx), 2 */ /* 0x120F0D7A: cmp dword ptr [edx], 2 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F0D83; /* 0x120F0D7D: je 0x120f0d83 */
L_120F0D7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0D7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F0D8E; /* 0x120F0D81: jmp 0x120f0d8e */
L_120F0D83:
    eax = MEM32(edx + 0x4); /* 0x120F0D83: mov eax, dword ptr [edx + 4] */
    goto L_120F0D8E; /* 0x120F0D86: jmp 0x120f0d8e */
L_120F0D88:
    PUSH32(esp, edx); /* 0x120F0D88: push edx */
    RECOMP_CALL(sub_120EFC6A); /* 0x120F0D89: call 0x120efc6a */
    RECOMP_FLAGS_IN();
L_120F0D8E:
    ebp = POP32_VAL(esp); /* 0x120F0D8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120F0D8F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120F0D97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0D97u);

L_120F0D97:
    edi = edi; /* 0x120F0D97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0D99: push ebp */
    ebp = esp; /* 0x120F0D9A: mov ebp, esp */
    eax = MEM32(ecx + 0x70); /* 0x120F0D9C: mov eax, dword ptr [ecx + 0x70] */
    edx = MEM32(ebp + 0x8); /* 0x120F0D9F: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120F0DA2: push esi */
    esi = 0x80000003u; /* 0x120F0DA3: mov esi, 0x80000003 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120F0DA8: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120F0DAA: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x120F0DAC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x120F0DAE: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F0DC1; /* 0x120F0DAF: jne 0x120f0dc1 */
L_120F0DB1:
    edx = ~edx; /* 0x120F0DB1: not edx */
    /* cmp MEM32(edx), 0 */ /* 0x120F0DB3: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F0DBC; /* 0x120F0DB6: je 0x120f0dbc */
L_120F0DB8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0DB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F0DC7; /* 0x120F0DBA: jmp 0x120f0dc7 */
L_120F0DBC:
    eax = MEM32(edx + 0x4); /* 0x120F0DBC: mov eax, dword ptr [edx + 4] */
    goto L_120F0DC7; /* 0x120F0DBF: jmp 0x120f0dc7 */
L_120F0DC1:
    PUSH32(esp, edx); /* 0x120F0DC1: push edx */
    RECOMP_CALL(sub_120EFCC5); /* 0x120F0DC2: call 0x120efcc5 */
    RECOMP_FLAGS_IN();
L_120F0DC7:
    ebp = POP32_VAL(esp); /* 0x120F0DC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120F0DC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120F0DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0DD0u);

L_120F0DD0:
    edi = edi; /* 0x120F0DD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0DD2: push ebp */
    ebp = esp; /* 0x120F0DD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120F0DD5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F0DD8: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x120F0DD9: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F0DDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120F0DDE: push esi */
    esi = ecx; /* 0x120F0DDF: mov esi, ecx */
    PUSH32(esp, edi); /* 0x120F0DE1: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x120F0DE2: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F0DE5: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F0DE8: mov dword ptr [ebp - 0xc], ecx */
    /* test ebx, ebx */ /* 0x120F0DEB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0DF1; /* 0x120F0DED: je 0x120f0df1 */
L_120F0DEF:
    MEM32(ebx) = ecx; /* 0x120F0DEF: mov dword ptr [ebx], ecx */
L_120F0DF1:
    eax = MEM32(ebp + 0x18); /* 0x120F0DF1: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x120F0DF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0DFA; /* 0x120F0DF6: je 0x120f0dfa */
L_120F0DF8:
    MEM32(eax) = ecx; /* 0x120F0DF8: mov dword ptr [eax], ecx */
L_120F0DFA:
    edi = MEM32(ebp + 0x8); /* 0x120F0DFA: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0DFD: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFF94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFF94u; /* 0x120F0E00: add edi, -0x6c */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x120F0E03: mov ecx, edi */
    RECOMP_CALL(sub_120F0D5E); /* 0x120F0E05: call 0x120f0d5e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F0E0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0E15; /* 0x120F0E0C: jne 0x120f0e15 */
L_120F0E0E:
    edi = 0x8876086Cu; /* 0x120F0E0E: mov edi, 0x8876086c */
    goto L_120F0E77; /* 0x120F0E13: jmp 0x120f0e77 */
L_120F0E15:
    esi = MEM32(ebp + 0x8); /* 0x120F0E15: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0xC); /* 0x120F0E18: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x120F0E1B: push ecx */
    ecx = ebp + (-0x8); /* 0x120F0E1C: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x120F0E1F: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120F0E20: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F0E23: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120F0E26: push eax */
    PUSH32(esp, edi); /* 0x120F0E27: push edi */
    RECOMP_ICALL(MEM32(esi + (-0x4))); /* 0x120F0E28: call dword ptr [esi - 4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120F0E2B: mov edi, eax */
    /* test edi, edi */ /* 0x120F0E2D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0E74; /* 0x120F0E2F: js 0x120f0e74 */
L_120F0E31:
    eax = ebp + (-0x4); /* 0x120F0E31: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120F0E34: push eax */
    eax = MEM32(esi + 0x4); /* 0x120F0E35: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120F0E38: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120F0E3D: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120F0E3E: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120F0E41: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120F0E43: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120F0E44: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120F0E47: push eax */
    RECOMP_CALL(sub_120E626A); /* 0x120F0E48: call 0x120e626a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120F0E4D: mov edi, eax */
    /* test edi, edi */ /* 0x120F0E4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0E74; /* 0x120F0E51: js 0x120f0e74 */
L_120F0E53:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120F0E53: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120F0E56: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120EBC05); /* 0x120F0E59: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120F0E5E: mov edi, eax */
    /* test edi, edi */ /* 0x120F0E60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0E74; /* 0x120F0E62: js 0x120f0e74 */
L_120F0E64:
    /* test ebx, ebx */ /* 0x120F0E64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0E74; /* 0x120F0E66: je 0x120f0e74 */
L_120F0E68:
    eax = MEM32(ebp + (-0x4)); /* 0x120F0E68: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0E6B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x120F0E6D: mov dword ptr [ebx], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x120F0E6F: mov dword ptr [ebp - 4], esi */
    goto L_120F0E77; /* 0x120F0E72: jmp 0x120f0e77 */
L_120F0E74:
    esi = MEM32(ebp + (-0x4)); /* 0x120F0E74: mov esi, dword ptr [ebp - 4] */
L_120F0E77:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x120F0E77: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F0E95; /* 0x120F0E7B: je 0x120f0e95 */
L_120F0E7D:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120F0E7D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120F0E80: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_120EBC05); /* 0x120F0E83: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x120F0E88: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F0E92; /* 0x120F0E8A: js 0x120f0e92 */
L_120F0E8C:
    /* test eax, eax */ /* 0x120F0E8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120F0E92; /* 0x120F0E8E: jns 0x120f0e92 */
L_120F0E90:
    edi = eax; /* 0x120F0E90: mov edi, eax */
L_120F0E92:
    esi = MEM32(ebp + (-0x4)); /* 0x120F0E92: mov esi, dword ptr [ebp - 4] */
L_120F0E95:
    /* test esi, esi */ /* 0x120F0E95: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0EA3; /* 0x120F0E97: je 0x120f0ea3 */
L_120F0E99:
    eax = MEM32(esi); /* 0x120F0E99: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120F0E9B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120F0E9C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120F0E9F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0EA3:
    ecx = MEM32(ebp + (-0x8)); /* 0x120F0EA3: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120F0EA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0EB4; /* 0x120F0EA8: je 0x120f0eb4 */
L_120F0EAA:
    eax = MEM32(ecx); /* 0x120F0EAA: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120F0EAC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120F0EAD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120F0EB0: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0EB4:
    ecx = MEM32(ebp + (-0xC)); /* 0x120F0EB4: mov ecx, dword ptr [ebp - 0xc] */
    /* test ecx, ecx */ /* 0x120F0EB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0EC1; /* 0x120F0EB9: je 0x120f0ec1 */
L_120F0EBB:
    eax = MEM32(ecx); /* 0x120F0EBB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120F0EBD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120F0EBE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120F0EC1:
    eax = edi; /* 0x120F0EC1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120F0EC3: pop edi */
    esi = POP32_VAL(esp); /* 0x120F0EC4: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F0EC5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F0EC6: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120F0EC7: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120F0ECF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0ECFu);

L_120F0ECF:
    edi = edi; /* 0x120F0ECF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0ED1: push ebp */
    ebp = esp; /* 0x120F0ED2: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120F0ED4: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120F0ED5: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120F0ED8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0ED9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120F0EDB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0EF3; /* 0x120F0EDD: je 0x120f0ef3 */
L_120F0EDF:
    ecx = MEM32(ebp + 0x8); /* 0x120F0EDF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0EE2: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F0EE5: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120F0D5E); /* 0x120F0EE8: call 0x120f0d5e */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F0EED: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F0EEF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0EFA; /* 0x120F0EF1: jne 0x120f0efa */
L_120F0EF3:
    esi = 0x8876086Cu; /* 0x120F0EF3: mov esi, 0x8876086c */
    goto L_120F0F0A; /* 0x120F0EF8: jmp 0x120f0f0a */
L_120F0EFA:
    PUSH32(esp, edi); /* 0x120F0EFA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0EFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120F0EFD: mov edi, ebx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F0EFF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F0F00: stosd dword ptr es:[edi], eax */
    ecx = MEM32(ecx + 0x20); /* 0x120F0F01: mov ecx, dword ptr [ecx + 0x20] */
    MEM32(ebx) = ecx; /* 0x120F0F04: mov dword ptr [ebx], ecx */
    MEM32(ebx + 0x4) = esi; /* 0x120F0F06: mov dword ptr [ebx + 4], esi */
    edi = POP32_VAL(esp); /* 0x120F0F09: pop edi */
L_120F0F0A:
    eax = esi; /* 0x120F0F0A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F0F0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F0F0D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120F0F0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0F0F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0F17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0F17u);

L_120F0F17:
    edi = edi; /* 0x120F0F17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0F19: push ebp */
    ebp = esp; /* 0x120F0F1A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120F0F1C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120F0F1D: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120F0F20: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F0F21: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120F0F23: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0F3B; /* 0x120F0F25: je 0x120f0f3b */
L_120F0F27:
    ecx = MEM32(ebp + 0x8); /* 0x120F0F27: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0F2A: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F0F2D: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120F0D97); /* 0x120F0F30: call 0x120f0d97 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F0F35: mov edx, eax */
    /* test edx, edx */ /* 0x120F0F37: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0F42; /* 0x120F0F39: jne 0x120f0f42 */
L_120F0F3B:
    esi = 0x8876086Cu; /* 0x120F0F3B: mov esi, 0x8876086c */
    goto L_120F0F5C; /* 0x120F0F40: jmp 0x120f0f5c */
L_120F0F42:
    PUSH32(esp, edi); /* 0x120F0F42: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0F43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x120F0F45: mov edi, ebx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F0F47: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F0F48: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F0F49: stosd dword ptr es:[edi], eax */
    ecx = MEM32(edx + 0x20); /* 0x120F0F4A: mov ecx, dword ptr [edx + 0x20] */
    MEM32(ebx) = ecx; /* 0x120F0F4D: mov dword ptr [ebx], ecx */
    ecx = MEM32(edx + 0x28); /* 0x120F0F4F: mov ecx, dword ptr [edx + 0x28] */
    MEM32(ebx + 0x4) = ecx; /* 0x120F0F52: mov dword ptr [ebx + 4], ecx */
    ecx = MEM32(edx + 0x24); /* 0x120F0F55: mov ecx, dword ptr [edx + 0x24] */
    MEM32(ebx + 0x8) = ecx; /* 0x120F0F58: mov dword ptr [ebx + 8], ecx */
    edi = POP32_VAL(esp); /* 0x120F0F5B: pop edi */
L_120F0F5C:
    eax = esi; /* 0x120F0F5C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F0F5E: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F0F5F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120F0F60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0F61: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0F69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0F69u);

L_120F0F69:
    edi = edi; /* 0x120F0F69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0F6B: push ebp */
    ebp = esp; /* 0x120F0F6C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F0F6E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x120F0F71: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F0F73: push dword ptr [ebp + 0x10] */
    ecx = ecx + (-0x6C); /* 0x120F0F76: lea ecx, [ecx - 0x6c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F0F79: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120EFF23); /* 0x120F0F7C: call 0x120eff23 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120F0F81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0F82: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F0F8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0F8Au);

L_120F0F8A:
    edi = edi; /* 0x120F0F8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0F8C: push ebp */
    ebp = esp; /* 0x120F0F8D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F0F8F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120F0F90: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x120F0F93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F0F9B; /* 0x120F0F95: jne 0x120f0f9b */
L_120F0F97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0F97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F0FE6; /* 0x120F0F99: jmp 0x120f0fe6 */
L_120F0F9B:
    PUSH32(esp, edi); /* 0x120F0F9B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F0F9C: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFF94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFF94u; /* 0x120F0F9F: add edi, -0x6c */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x120F0FA2: push esi */
    ecx = edi; /* 0x120F0FA3: mov ecx, edi */
    RECOMP_CALL(sub_120EFBD9); /* 0x120F0FA5: call 0x120efbd9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F0FAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0FB6; /* 0x120F0FAC: je 0x120f0fb6 */
L_120F0FAE:
    eax = MEM32(eax + 0x4); /* 0x120F0FAE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x28); /* 0x120F0FB1: mov ecx, dword ptr [eax + 0x28] */
    goto L_120F0FC5; /* 0x120F0FB4: jmp 0x120f0fc5 */
L_120F0FB6:
    PUSH32(esp, esi); /* 0x120F0FB6: push esi */
    ecx = edi; /* 0x120F0FB7: mov ecx, edi */
    RECOMP_CALL(sub_120F0D97); /* 0x120F0FB9: call 0x120f0d97 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F0FBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0FCA; /* 0x120F0FC0: je 0x120f0fca */
L_120F0FC2:
    ecx = MEM32(eax + 0x24); /* 0x120F0FC2: mov ecx, dword ptr [eax + 0x24] */
L_120F0FC5:
    eax = MEM32(eax + 0x30); /* 0x120F0FC5: mov eax, dword ptr [eax + 0x30] */
    goto L_120F0FDC; /* 0x120F0FC8: jmp 0x120f0fdc */
L_120F0FCA:
    PUSH32(esp, esi); /* 0x120F0FCA: push esi */
    ecx = edi; /* 0x120F0FCB: mov ecx, edi */
    RECOMP_CALL(sub_120EFD20); /* 0x120F0FCD: call 0x120efd20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F0FD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F0FE3; /* 0x120F0FD4: je 0x120f0fe3 */
L_120F0FD6:
    ecx = MEM32(eax + 0x24); /* 0x120F0FD6: mov ecx, dword ptr [eax + 0x24] */
    eax = MEM32(eax + 0x28); /* 0x120F0FD9: mov eax, dword ptr [eax + 0x28] */
L_120F0FDC:
    edx = MEM32(ebp + 0x10); /* 0x120F0FDC: mov edx, dword ptr [ebp + 0x10] */
    /* cmp edx, ecx */ /* 0x120F0FDF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0FEE; /* 0x120F0FE1: jb 0x120f0fee */
L_120F0FE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F0FE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F0FE5:
    edi = POP32_VAL(esp); /* 0x120F0FE5: pop edi */
L_120F0FE6:
    esi = POP32_VAL(esp); /* 0x120F0FE6: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F0FE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F0FE8: ret 0xc */
L_120F0FEB:
    eax = MEM32(eax + 0x34); /* 0x120F0FEB: mov eax, dword ptr [eax + 0x34] */
L_120F0FEE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F0FEE: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x120F0FEF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F0FEB; /* 0x120F0FF1: jb 0x120f0feb */
L_120F0FF3:
    eax = ~eax; /* 0x120F0FF3: not eax */
    RECOMP_BACKEDGE();
    goto L_120F0FE5; /* 0x120F0FF5: jmp 0x120f0fe5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F0FFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F0FFCu);

L_120F0FFC:
    edi = edi; /* 0x120F0FFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F0FFE: push ebp */
    ebp = esp; /* 0x120F0FFF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120F1001: push ebx */
    PUSH32(esp, esi); /* 0x120F1002: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120F1003: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120F1006: push edi */
    ebx = ecx; /* 0x120F1007: mov ebx, ecx */
    /* test esi, esi */ /* 0x120F1009: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F100B: je 0x120f10ae */
L_120F1011:
    SET_LO8(eax, MEM8(esi)); /* 0x120F1011: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x120F1013: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F1015: je 0x120f10ae */
L_120F101B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120F101B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EFBD9); /* 0x120F101E: call 0x120efbd9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1023: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F102C; /* 0x120F1025: je 0x120f102c */
L_120F1027:
    eax = MEM32(eax + 0x4); /* 0x120F1027: mov eax, dword ptr [eax + 4] */
    goto L_120F103A; /* 0x120F102A: jmp 0x120f103a */
L_120F102C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120F102C: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x120F102F: mov ecx, ebx */
    RECOMP_CALL(sub_120F0D97); /* 0x120F1031: call 0x120f0d97 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1036: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F103F; /* 0x120F1038: je 0x120f103f */
L_120F103A:
    edi = MEM32(eax + 0x30); /* 0x120F103A: mov edi, dword ptr [eax + 0x30] */
    goto L_120F1050; /* 0x120F103D: jmp 0x120f1050 */
L_120F103F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120F103F: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x120F1042: mov ecx, ebx */
    RECOMP_CALL(sub_120EFD20); /* 0x120F1044: call 0x120efd20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1049: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F104B: je 0x120f10ae */
L_120F104D:
    edi = MEM32(eax + 0x28); /* 0x120F104D: mov edi, dword ptr [eax + 0x28] */
L_120F1050:
    /* test edi, edi */ /* 0x120F1050: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F1052: je 0x120f10ae */
L_120F1054:
    SET_LO8(edx, MEM8(esi)); /* 0x120F1054: mov dl, byte ptr [esi] */
L_120F1056:
    eax = MEM32(edi + 0x4); /* 0x120F1056: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1059: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x18); /* 0x120F105C: add eax, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x3C); /* 0x120F105F: mov ecx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120F1062: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x120F1064: mov ecx, dword ptr [eax + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x120F1067: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebx + 0x3C); /* 0x120F106A: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp MEM32(ecx + eax), 0 */ /* 0x120F106D: cmp dword ptr [ecx + eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F10A7; /* 0x120F1071: je 0x120f10a7 */
L_120F1073:
    ecx = eax + ecx + 0x4; /* 0x120F1073: lea ecx, [eax + ecx + 4] */
    /* test ecx, ecx */ /* 0x120F1077: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10A7; /* 0x120F1079: je 0x120f10a7 */
L_120F107B:
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x120F107B: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F108D; /* 0x120F107D: jne 0x120f108d */
L_120F107F:
    SET_LO8(eax, LO8(edx)); /* 0x120F107F: mov al, dl */
L_120F1081:
    /* test LO8(eax), LO8(eax) */ /* 0x120F1081: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F108D; /* 0x120F1083: je 0x120f108d */
L_120F1085:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1085: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x120F1086: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F1088: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x120F1089: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1081; /* 0x120F108B: je 0x120f1081 */
L_120F108D:
    SET_LO8(eax, MEM8(esi)); /* 0x120F108D: mov al, byte ptr [esi] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x120F108F: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1125; /* 0x120F1091: je 0x120f1125 */
L_120F1097:
    /* cmp MEM8(ecx), 0 */ /* 0x120F1097: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F10A4; /* 0x120F109A: jne 0x120f10a4 */
L_120F109C:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F109C: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1112; /* 0x120F109E: je 0x120f1112 */
L_120F10A0:
    /* cmp LO8(eax), 0x5Bu */ /* 0x120F10A0: cmp al, 0x5b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F10B7; /* 0x120F10A2: je 0x120f10b7 */
L_120F10A4:
    esi = MEM32(ebp + 0xC); /* 0x120F10A4: mov esi, dword ptr [ebp + 0xc] */
L_120F10A7:
    edi = MEM32(edi + 0x34); /* 0x120F10A7: mov edi, dword ptr [edi + 0x34] */
    /* test edi, edi */ /* 0x120F10AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1056; /* 0x120F10AC: jne 0x120f1056 */
L_120F10AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F10AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F10B0:
    edi = POP32_VAL(esp); /* 0x120F10B0: pop edi */
    esi = POP32_VAL(esp); /* 0x120F10B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F10B2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120F10B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F10B4: ret 0xc */
L_120F10B7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F10B7: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x120F10B8: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F10BB: jl 0x120f10ae */
L_120F10BD:
    /* cmp MEM8(esi), 0x39u */ /* 0x120F10BD: cmp byte ptr [esi], 0x39 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F10C0: jg 0x120f10ae */
L_120F10C2:
    PUSH32(esp, esi); /* 0x120F10C2: push esi */
    RECOMP_CALL(sub_121BF728); /* 0x120F10C3: call 0x121bf728 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F10C8: pop ecx */
    ecx = eax; /* 0x120F10C9: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x120F10CB: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x120F10CE: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F10D1: jae 0x120f10ae */
L_120F10D3:
    goto L_120F10DA; /* 0x120F10D3: jmp 0x120f10da */
L_120F10D5:
    /* cmp LO8(eax), 0x39u */ /* 0x120F10D5: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_120F10E0; /* 0x120F10D7: jg 0x120f10e0 */
L_120F10D9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F10D9: inc esi */
    _flag_k = FK_INC;
L_120F10DA:
    SET_LO8(eax, MEM8(esi)); /* 0x120F10DA: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x120F10DC: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_120F10D5; /* 0x120F10DE: jge 0x120f10d5 */
L_120F10E0:
    /* cmp MEM8(esi), 0x5Du */ /* 0x120F10E0: cmp byte ptr [esi], 0x5d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F10E3: jne 0x120f10ae */
L_120F10E5:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F10E5: push dword ptr [ebp + 0x10] */
    edi = ~edi; /* 0x120F10E8: not edi */
    PUSH32(esp, ecx); /* 0x120F10EA: push ecx */
    PUSH32(esp, edi); /* 0x120F10EB: push edi */
    ecx = ebx; /* 0x120F10EC: mov ecx, ebx */
    RECOMP_CALL(sub_120EFF23); /* 0x120F10EE: call 0x120eff23 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F10F3: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F10F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F10F7: je 0x120f10ae */
L_120F10F9:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x120F10F9: mov al, byte ptr [esi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x120F10FC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1104; /* 0x120F10FE: jne 0x120f1104 */
L_120F1100:
    eax = ecx; /* 0x120F1100: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_120F10B0; /* 0x120F1102: jmp 0x120f10b0 */
L_120F1104:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F1104: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F10AE; /* 0x120F1106: jne 0x120f10ae */
L_120F1108:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F1108: push dword ptr [ebp + 0x10] */
    eax = esi + 0x2; /* 0x120F110B: lea eax, [esi + 2] */
    PUSH32(esp, eax); /* 0x120F110E: push eax */
    PUSH32(esp, ecx); /* 0x120F110F: push ecx */
    goto L_120F111C; /* 0x120F1110: jmp 0x120f111c */
L_120F1112:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F1112: push dword ptr [ebp + 0x10] */
    eax = esi + 0x1; /* 0x120F1115: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120F1118: push eax */
    edi = ~edi; /* 0x120F1119: not edi */
    PUSH32(esp, edi); /* 0x120F111B: push edi */
L_120F111C:
    ecx = ebx; /* 0x120F111C: mov ecx, ebx */
    RECOMP_CALL(sub_120F15F2); /* 0x120F111E: call 0x120f15f2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120F10B0; /* 0x120F1123: jmp 0x120f10b0 */
L_120F1125:
    edi = ~edi; /* 0x120F1125: not edi */
    eax = edi; /* 0x120F1127: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_120F10B0; /* 0x120F1129: jmp 0x120f10b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F1130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1130u);

L_120F1130:
    edi = edi; /* 0x120F1130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1132: push ebp */
    ebp = esp; /* 0x120F1133: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F1135: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1138: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F113B: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120F0D97); /* 0x120F113E: call 0x120f0d97 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F1143: mov edx, eax */
    /* test edx, edx */ /* 0x120F1145: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F114D; /* 0x120F1147: jne 0x120f114d */
L_120F1149:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1149: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1165; /* 0x120F114B: jmp 0x120f1165 */
L_120F114D:
    ecx = MEM32(ebp + 0x10); /* 0x120F114D: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(edx + 0x28) */ /* 0x120F1150: cmp ecx, dword ptr [edx + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1149; /* 0x120F1153: jae 0x120f1149 */
L_120F1155:
    eax = MEM32(edx + 0x2C); /* 0x120F1155: mov eax, dword ptr [edx + 0x2c] */
    goto L_120F115D; /* 0x120F1158: jmp 0x120f115d */
L_120F115A:
    eax = MEM32(eax + 0x2C); /* 0x120F115A: mov eax, dword ptr [eax + 0x2c] */
L_120F115D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F115D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + 0x28) */ /* 0x120F115E: cmp ecx, dword ptr [edx + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F115A; /* 0x120F1161: jb 0x120f115a */
L_120F1163:
    eax = ~eax; /* 0x120F1163: not eax */
L_120F1165:
    ebp = POP32_VAL(esp); /* 0x120F1165: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F1166: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F116E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F116Eu);

L_120F116E:
    edi = edi; /* 0x120F116E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1170: push ebp */
    ebp = esp; /* 0x120F1171: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F1173: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1176: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F1179: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120F0D97); /* 0x120F117C: call 0x120f0d97 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1181: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F11CF; /* 0x120F1183: je 0x120f11cf */
L_120F1185:
    PUSH32(esp, ebx); /* 0x120F1185: push ebx */
    goto L_120F11C7; /* 0x120F1186: jmp 0x120f11c7 */
L_120F1188:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F1188: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1194; /* 0x120F118C: jne 0x120f1194 */
L_120F118E:
    /* cmp MEM32(eax + 0x20), 0 */ /* 0x120F118E: cmp dword ptr [eax + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_120F11C5; /* 0x120F1192: jmp 0x120f11c5 */
L_120F1194:
    ecx = MEM32(eax + 0x20); /* 0x120F1194: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x120F1197: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F11C7; /* 0x120F1199: je 0x120f11c7 */
L_120F119B:
    edx = MEM32(ebp + 0x10); /* 0x120F119B: mov edx, dword ptr [ebp + 0x10] */
L_120F119E:
    SET_LO8(ebx, MEM8(edx)); /* 0x120F119E: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x120F11A0: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F11BE; /* 0x120F11A2: jne 0x120f11be */
L_120F11A4:
    /* test LO8(ebx), LO8(ebx) */ /* 0x120F11A4: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F11BA; /* 0x120F11A6: je 0x120f11ba */
L_120F11A8:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x120F11A8: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x120F11AB: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F11BE; /* 0x120F11AE: jne 0x120f11be */
L_120F11B0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x120F11B0: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120F11B3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x120F11B6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F119E; /* 0x120F11B8: jne 0x120f119e */
L_120F11BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F11BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F11C3; /* 0x120F11BC: jmp 0x120f11c3 */
L_120F11BE:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120F11BE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120F11C0: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120F11C3:
    /* test ecx, ecx */ /* 0x120F11C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_120F11C5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120F11D3; /* 0x120F11C5: je 0x120f11d3 */
L_120F11C7:
    eax = MEM32(eax + 0x2C); /* 0x120F11C7: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x120F11CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1188; /* 0x120F11CC: jne 0x120f1188 */
L_120F11CE:
    ebx = POP32_VAL(esp); /* 0x120F11CE: pop ebx */
L_120F11CF:
    ebp = POP32_VAL(esp); /* 0x120F11CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F11D0: ret 0xc */
L_120F11D3:
    eax = ~eax; /* 0x120F11D3: not eax */
    RECOMP_BACKEDGE();
    goto L_120F11CE; /* 0x120F11D5: jmp 0x120f11ce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F11DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F11DCu);

L_120F11DC:
    edi = edi; /* 0x120F11DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F11DE: push ebp */
    ebp = esp; /* 0x120F11DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120F11E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F11E4: push ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F11E5: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x120F11E8: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x120F11EB: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x120F11ED: mov eax, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x120F11EF: push esi */
    esi = MEM32(edx + 0x4); /* 0x120F11F0: mov esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F11F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120F11F5: push edi */
    edi = MEM32(edx + 0x10); /* 0x120F11F6: mov edi, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120F11F9: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x120F11FC: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1206; /* 0x120F11FF: jne 0x120f1206 */
L_120F1201:
    /* cmp edi, 1 */ /* 0x120F1201: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1209; /* 0x120F1204: jae 0x120f1209 */
L_120F1206:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F1206: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1208: inc edi */
    _flag_k = FK_INC;
L_120F1209:
    /* test esi, esi */ /* 0x120F1209: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F133F; /* 0x120F120B: js 0x120f133f */
L_120F1211:
    /* cmp esi, 3 */ /* 0x120F1211: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120F1328; /* 0x120F1214: jle 0x120f1328 */
L_120F121A:
    /* cmp esi, 4 */ /* 0x120F121A: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1277; /* 0x120F121D: je 0x120f1277 */
L_120F121F:
    /* cmp esi, 5 */ /* 0x120F121F: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F133F; /* 0x120F1222: jne 0x120f133f */
L_120F1228:
    eax = MEM32(edx + 0x14); /* 0x120F1228: mov eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x120F122B: add edx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x120F122E: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x120F1231: mov dword ptr [ebp - 0xc], edx */
    MEM32(ecx) = edx; /* 0x120F1234: mov dword ptr [ecx], edx */
    /* test edi, edi */ /* 0x120F1236: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F12FA; /* 0x120F1238: je 0x120f12fa */
L_120F123E:
    MEM32(ecx) = edx; /* 0x120F123E: mov dword ptr [ecx], edx */
    esi = ebx; /* 0x120F1240: mov esi, ebx */
    /* test eax, eax */ /* 0x120F1242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F126F; /* 0x120F1244: je 0x120f126f */
L_120F1246:
    PUSH32(esp, ebx); /* 0x120F1246: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F1247: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F124A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x120F124D: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F124E: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120F11DC); /* 0x120F1251: call 0x120f11dc */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x120F1256: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F1259: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F1417; /* 0x120F125B: js 0x120f1417 */
L_120F1261:
    eax = MEM32(ebp + 0x14); /* 0x120F1261: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x120F1264: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1267: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x120F1268: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1246; /* 0x120F126A: jb 0x120f1246 */
L_120F126C:
    edx = MEM32(ebp + (-0xC)); /* 0x120F126C: mov edx, dword ptr [ebp - 0xc] */
L_120F126F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F126F: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F123E; /* 0x120F1270: jne 0x120f123e */
L_120F1272:
    goto L_120F1417; /* 0x120F1272: jmp 0x120f1417 */
L_120F1277:
    /* cmp eax, 4 */ /* 0x120F1277: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F130B; /* 0x120F127A: jne 0x120f130b */
L_120F1280:
    /* test edi, edi */ /* 0x120F1280: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F12F7; /* 0x120F1282: je 0x120f12f7 */
L_120F1284:
    edx = MEM32(ebp + 0xC); /* 0x120F1284: mov edx, dword ptr [ebp + 0xc] */
L_120F1287:
    /* cmp MEM32(edx), ebx */ /* 0x120F1287: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F12F4; /* 0x120F1289: je 0x120f12f4 */
L_120F128B:
    eax = MEM32(ebp + 0x10); /* 0x120F128B: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x120F128E: mov eax, dword ptr [eax] */
    esi = MEM32(eax); /* 0x120F1290: mov esi, dword ptr [eax] */
    MEM32(ebp + 0x14) = ebx; /* 0x120F1292: mov dword ptr [ebp + 0x14], ebx */
    ecx = ebx; /* 0x120F1295: mov ecx, ebx */
    /* test esi, esi */ /* 0x120F1297: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F12D1; /* 0x120F1299: je 0x120f12d1 */
L_120F129B:
    ecx = esi; /* 0x120F129B: mov ecx, esi */
    edx = ecx + 0x1; /* 0x120F129D: lea edx, [ecx + 1] */
L_120F12A0:
    SET_LO8(eax, MEM8(ecx)); /* 0x120F12A0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F12A2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120F12A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F12A0; /* 0x120F12A5: jne 0x120f12a0 */
L_120F12A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F12A7: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x120F12A9: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x120F12AC: push eax */
    MEM32(ebp + 0x14) = eax; /* 0x120F12AD: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x120F12B0: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x120F12B3: push eax */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x120F12B4: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x120F12B7: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x120F12BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1301; /* 0x120F12BC: je 0x120f1301 */
L_120F12BE:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120F12BE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120F12C1: push esi */
    PUSH32(esp, eax); /* 0x120F12C2: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120F12C3: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x120F12C8: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0xC); /* 0x120F12CB: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F12CE: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F12D1:
    eax = MEM32(edx); /* 0x120F12D1: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x8); /* 0x120F12D3: mov eax, dword ptr [eax + 8] */
    MEM32(eax + 0x20) = ecx; /* 0x120F12D6: mov dword ptr [eax + 0x20], ecx */
    eax = MEM32(edx); /* 0x120F12D9: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x8); /* 0x120F12DB: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x120F12DE: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x24) = ecx; /* 0x120F12E1: mov dword ptr [eax + 0x24], ecx */
    eax = MEM32(ebp + 0x10); /* 0x120F12E4: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x120F12E7: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F12EA: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(edx); /* 0x120F12EB: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0xC); /* 0x120F12ED: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx) = eax; /* 0x120F12F0: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1287; /* 0x120F12F2: jne 0x120f1287 */
L_120F12F4:
    ecx = MEM32(ebp + 0x8); /* 0x120F12F4: mov ecx, dword ptr [ebp + 8] */
L_120F12F7:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 0x14u; /* 0x120F12F7: add dword ptr [ecx], 0x14 */
    _flag_k = FK_ADD;
L_120F12FA:
    eax = ebx; /* 0x120F12FA: mov eax, ebx */
    goto L_120F141A; /* 0x120F12FC: jmp 0x120f141a */
L_120F1301:
    eax = 0x8007000Eu; /* 0x120F1301: mov eax, 0x8007000e */
    goto L_120F141A; /* 0x120F1306: jmp 0x120f141a */
L_120F130B:
    /* test edi, edi */ /* 0x120F130B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F12F7; /* 0x120F130D: je 0x120f12f7 */
L_120F130F:
    esi = MEM32(ebp + 0x10); /* 0x120F130F: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x120F1312: mov edx, dword ptr [ebp + 0xc] */
L_120F1315:
    /* cmp MEM32(edx), ebx */ /* 0x120F1315: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F12F7; /* 0x120F1317: je 0x120f12f7 */
L_120F1319:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x120F1319: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F131C: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(edx); /* 0x120F131D: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0xC); /* 0x120F131F: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx) = eax; /* 0x120F1322: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1315; /* 0x120F1324: jne 0x120f1315 */
L_120F1326:
    RECOMP_BACKEDGE();
    goto L_120F12F7; /* 0x120F1326: jmp 0x120f12f7 */
L_120F1328:
    esi = MEM32(edx + 0x18); /* 0x120F1328: mov esi, dword ptr [edx + 0x18] */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edx + 0x14)); /* 0x120F132B: imul esi, dword ptr [edx + 0x14] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x120F132F: imul esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1332: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F13CE; /* 0x120F1333: je 0x120f13ce */
L_120F1339:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1339: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F137C; /* 0x120F133A: je 0x120f137c */
L_120F133C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F133C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1349; /* 0x120F133D: je 0x120f1349 */
L_120F133F:
    eax = 0x80004005u; /* 0x120F133F: mov eax, 0x80004005 */
    goto L_120F141A; /* 0x120F1344: jmp 0x120f141a */
L_120F1349:
    ecx = MEM32(ebp + 0x10); /* 0x120F1349: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120F134C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1370; /* 0x120F134E: je 0x120f1370 */
L_120F1350:
    edx = MEM32(ebp + 0xC); /* 0x120F1350: mov edx, dword ptr [ebp + 0xc] */
L_120F1353:
    edi = MEM32(edx); /* 0x120F1353: mov edi, dword ptr [edx] */
    /* test edi, edi */ /* 0x120F1355: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1370; /* 0x120F1357: je 0x120f1370 */
L_120F1359:
    eax = MEM32(ecx); /* 0x120F1359: mov eax, dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + ebx * 4)); /* 0x120F135B: fld dword ptr [eax + ebx*4] */
    eax = MEM32(edi + 0x8); /* 0x120F135E: mov eax, dword ptr [edi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x120F1361: fstp qword ptr [eax + 0x20] */
    eax = MEM32(edx); /* 0x120F1364: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0xC); /* 0x120F1366: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F1369: inc ebx */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x120F136A: mov dword ptr [edx], eax */
    /* cmp ebx, esi */ /* 0x120F136C: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1353; /* 0x120F136E: jb 0x120f1353 */
L_120F1370:
    eax = esi; /* 0x120F1370: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120F1372: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120F1372: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x120F1375: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    goto L_120F1411; /* 0x120F1377: jmp 0x120f1411 */
L_120F137C:
    edi = MEM32(ebp + 0x10); /* 0x120F137C: mov edi, dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x120F137F: mov ecx, ebx */
    /* test esi, esi */ /* 0x120F1381: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F13C5; /* 0x120F1383: je 0x120f13c5 */
L_120F1385:
    edx = MEM32(ebp + 0xC); /* 0x120F1385: mov edx, dword ptr [ebp + 0xc] */
L_120F1388:
    edx = MEM32(edx); /* 0x120F1388: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x120F138A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F13C5; /* 0x120F138C: je 0x120f13c5 */
L_120F138E:
    edx = MEM32(edx + 0x8); /* 0x120F138E: mov edx, dword ptr [edx + 8] */
    /* cmp MEM32(edx + 0x18), 2 */ /* 0x120F1391: cmp dword ptr [edx + 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120F1395: mov eax, dword ptr [edi] */
    eax = MEM32(eax + ecx * 4); /* 0x120F1397: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + 0x14) = edx; /* 0x120F139A: mov dword ptr [ebp + 0x14], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F13A7; /* 0x120F139D: jne 0x120f13a7 */
L_120F139F:
    MEM32(edx + 0x20) = eax; /* 0x120F139F: mov dword ptr [edx + 0x20], eax */
    MEM32(edx + 0x24) = ebx; /* 0x120F13A2: mov dword ptr [edx + 0x24], ebx */
    goto L_120F13B6; /* 0x120F13A5: jmp 0x120f13b6 */
L_120F13A7:
    edi = MEM32(ebp + 0x14); /* 0x120F13A7: mov edi, dword ptr [ebp + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120F13AA: cdq  */
    MEM32(edi + 0x20) = eax; /* 0x120F13AB: mov dword ptr [edi + 0x20], eax */
    eax = edi; /* 0x120F13AE: mov eax, edi */
    edi = MEM32(ebp + 0x10); /* 0x120F13B0: mov edi, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x24) = edx; /* 0x120F13B3: mov dword ptr [eax + 0x24], edx */
L_120F13B6:
    edx = MEM32(ebp + 0xC); /* 0x120F13B6: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x120F13B9: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0xC); /* 0x120F13BB: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F13BE: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x120F13BF: mov dword ptr [edx], eax */
    /* cmp ecx, esi */ /* 0x120F13C1: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1388; /* 0x120F13C3: jb 0x120f1388 */
L_120F13C5:
    eax = esi; /* 0x120F13C5: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120F13C7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120F13C7: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x120F13CA: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    goto L_120F1411; /* 0x120F13CC: jmp 0x120f1411 */
L_120F13CE:
    edx = MEM32(ebp + 0x10); /* 0x120F13CE: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = ebx; /* 0x120F13D1: mov dword ptr [ebp + 0x14], ebx */
    /* test esi, esi */ /* 0x120F13D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F140A; /* 0x120F13D6: je 0x120f140a */
L_120F13D8:
    edi = MEM32(ebp + 0xC); /* 0x120F13D8: mov edi, dword ptr [ebp + 0xc] */
L_120F13DB:
    eax = MEM32(edi); /* 0x120F13DB: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x120F13DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F140A; /* 0x120F13DF: je 0x120f140a */
L_120F13E1:
    eax = MEM32(edx); /* 0x120F13E1: mov eax, dword ptr [edx] */
    edx = MEM32(ebp + 0x14); /* 0x120F13E3: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F13E6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + edx * 4), ebx */ /* 0x120F13E8: cmp dword ptr [eax + edx*4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120F13EB: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x8); /* 0x120F13ED: mov eax, dword ptr [eax + 8] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F13F0: setne cl */
    MEM32(eax + 0x20) = ecx; /* 0x120F13F3: mov dword ptr [eax + 0x20], ecx */
    eax = MEM32(edi); /* 0x120F13F6: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0xC); /* 0x120F13F8: mov eax, dword ptr [eax + 0xc] */
    ecx = edx; /* 0x120F13FB: mov ecx, edx */
    edx = MEM32(ebp + 0x10); /* 0x120F13FD: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F1400: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120F1401: mov dword ptr [ebp + 0x14], ecx */
    MEM32(edi) = eax; /* 0x120F1404: mov dword ptr [edi], eax */
    /* cmp ecx, esi */ /* 0x120F1406: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F13DB; /* 0x120F1408: jb 0x120f13db */
L_120F140A:
    eax = esi; /* 0x120F140A: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120F140C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120F140C: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x120F140F: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
L_120F1411:
    eax = MEM32(ebp + 0x8); /* 0x120F1411: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x1Cu; /* 0x120F1414: add dword ptr [eax], 0x1c */
    _flag_k = FK_ADD;
L_120F1417:
    eax = MEM32(ebp + (-0x4)); /* 0x120F1417: mov eax, dword ptr [ebp - 4] */
L_120F141A:
    edi = POP32_VAL(esp); /* 0x120F141A: pop edi */
    esi = POP32_VAL(esp); /* 0x120F141B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F141C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F141D: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F141E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F1426(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1426u);

L_120F1426:
    edi = edi; /* 0x120F1426: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1428: push ebp */
    ebp = esp; /* 0x120F1429: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F142B: push ecx */
    PUSH32(esp, ecx); /* 0x120F142C: push ecx */
    PUSH32(esp, ebx); /* 0x120F142D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F142E: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx); /* 0x120F1431: mov ecx, dword ptr [ebx] */
    edx = MEM32(ecx + 0x4); /* 0x120F1433: mov edx, dword ptr [ecx + 4] */
    eax = MEM32(ecx); /* 0x120F1436: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120F1438: push esi */
    esi = MEM32(ecx + 0x10); /* 0x120F1439: mov esi, dword ptr [ecx + 0x10] */
    PUSH32(esp, edi); /* 0x120F143C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F143D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x120F143F: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x120F1442: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F144C; /* 0x120F1445: jne 0x120f144c */
L_120F1447:
    /* cmp esi, 1 */ /* 0x120F1447: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F144F; /* 0x120F144A: jae 0x120f144f */
L_120F144C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F144C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F144E: inc esi */
    _flag_k = FK_INC;
L_120F144F:
    /* test edx, edx */ /* 0x120F144F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F1527; /* 0x120F1451: js 0x120f1527 */
L_120F1457:
    /* cmp edx, 3 */ /* 0x120F1457: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120F1514; /* 0x120F145A: jle 0x120f1514 */
L_120F1460:
    /* cmp edx, 4 */ /* 0x120F1460: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F14C2; /* 0x120F1463: je 0x120f14c2 */
L_120F1465:
    /* cmp edx, 5 */ /* 0x120F1465: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1527; /* 0x120F1468: jne 0x120f1527 */
L_120F146E:
    eax = MEM32(ecx + 0x14); /* 0x120F146E: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x120F1471: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x120F1474: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F1477: mov dword ptr [ebp - 8], ecx */
    MEM32(ebx) = ecx; /* 0x120F147A: mov dword ptr [ebx], ecx */
    /* test esi, esi */ /* 0x120F147C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F15D7; /* 0x120F147E: je 0x120f15d7 */
L_120F1484:
    MEM32(ebx) = ecx; /* 0x120F1484: mov dword ptr [ebx], ecx */
    MEM32(ebp + 0x8) = edi; /* 0x120F1486: mov dword ptr [ebp + 8], edi */
    /* test eax, eax */ /* 0x120F1489: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F14B5; /* 0x120F148B: je 0x120f14b5 */
L_120F148D:
    PUSH32(esp, edi); /* 0x120F148D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F148E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1491: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120F1494: push ebx */
    RECOMP_CALL(sub_120F1426); /* 0x120F1495: call 0x120f1426 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F149A: mov edx, eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x120F149C: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x120F149F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F14B8; /* 0x120F14A1: js 0x120f14b8 */
L_120F14A3:
    eax = MEM32(ebp + 0x8); /* 0x120F14A3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F14A6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x120F14A7: mov dword ptr [ebp + 8], eax */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x120F14AA: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F148D; /* 0x120F14AD: jb 0x120f148d */
L_120F14AF:
    eax = MEM32(ebp + 0x14); /* 0x120F14AF: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x120F14B2: mov ecx, dword ptr [ebp - 8] */
L_120F14B5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120F14B5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1484; /* 0x120F14B6: jne 0x120f1484 */
L_120F14B8:
    eax = MEM32(ebp + (-0x4)); /* 0x120F14B8: mov eax, dword ptr [ebp - 4] */
L_120F14BB:
    edi = POP32_VAL(esp); /* 0x120F14BB: pop edi */
    esi = POP32_VAL(esp); /* 0x120F14BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F14BD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F14BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F14BF: ret 0x10 */
L_120F14C2:
    /* cmp eax, 4 */ /* 0x120F14C2: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F14F0; /* 0x120F14C5: jne 0x120f14f0 */
L_120F14C7:
    /* test esi, esi */ /* 0x120F14C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F150F; /* 0x120F14C9: je 0x120f150f */
L_120F14CB:
    edi = MEM32(ebp + 0x10); /* 0x120F14CB: mov edi, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x120F14CE: mov edx, dword ptr [ebp + 0xc] */
L_120F14D1:
    eax = MEM32(edx); /* 0x120F14D1: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x120F14D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F150F; /* 0x120F14D5: je 0x120f150f */
L_120F14D7:
    eax = MEM32(eax + 0x8); /* 0x120F14D7: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x20); /* 0x120F14DA: mov eax, dword ptr [eax + 0x20] */
    ecx = MEM32(edi); /* 0x120F14DD: mov ecx, dword ptr [edi] */
    MEM32(ecx) = eax; /* 0x120F14DF: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x120F14E1: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120F14E4: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(edx); /* 0x120F14E5: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0xC); /* 0x120F14E7: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx) = eax; /* 0x120F14EA: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F14D1; /* 0x120F14EC: jne 0x120f14d1 */
L_120F14EE:
    goto L_120F150F; /* 0x120F14EE: jmp 0x120f150f */
L_120F14F0:
    /* test esi, esi */ /* 0x120F14F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F150F; /* 0x120F14F2: je 0x120f150f */
L_120F14F4:
    edx = MEM32(ebp + 0x10); /* 0x120F14F4: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x120F14F7: mov ecx, dword ptr [ebp + 0xc] */
L_120F14FA:
    /* cmp MEM32(ecx), edi */ /* 0x120F14FA: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F150F; /* 0x120F14FC: je 0x120f150f */
L_120F14FE:
    eax = MEM32(edx); /* 0x120F14FE: mov eax, dword ptr [edx] */
    MEM32(eax) = edi; /* 0x120F1500: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x120F1502: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120F1505: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(ecx); /* 0x120F1506: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x120F1508: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx) = eax; /* 0x120F150B: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F14FA; /* 0x120F150D: jne 0x120f14fa */
L_120F150F:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 0x14u; /* 0x120F150F: add dword ptr [ebx], 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120F14B8; /* 0x120F1512: jmp 0x120f14b8 */
L_120F1514:
    edx = MEM32(ecx + 0x18); /* 0x120F1514: mov edx, dword ptr [ecx + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x14)); /* 0x120F1517: imul edx, dword ptr [ecx + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x120F151B: imul edx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F151E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1594; /* 0x120F151F: je 0x120f1594 */
L_120F1521:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1521: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1564; /* 0x120F1522: je 0x120f1564 */
L_120F1524:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1524: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F152E; /* 0x120F1525: je 0x120f152e */
L_120F1527:
    eax = 0x80004005u; /* 0x120F1527: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_120F14BB; /* 0x120F152C: jmp 0x120f14bb */
L_120F152E:
    ecx = MEM32(ebp + 0x10); /* 0x120F152E: mov ecx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x120F1531: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F155B; /* 0x120F1533: je 0x120f155b */
L_120F1535:
    esi = MEM32(ebp + 0xC); /* 0x120F1535: mov esi, dword ptr [ebp + 0xc] */
L_120F1538:
    eax = MEM32(esi); /* 0x120F1538: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x120F153A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F155B; /* 0x120F153C: je 0x120f155b */
L_120F153E:
    eax = MEM32(eax + 0x8); /* 0x120F153E: mov eax, dword ptr [eax + 8] */
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x120F1541: fld qword ptr [eax + 0x20] */
    eax = MEM32(ecx); /* 0x120F1544: mov eax, dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120F1546: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120F1549: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edi * 4) = _v; } /* 0x120F154C: fstp dword ptr [eax + edi*4] */
    eax = MEM32(esi); /* 0x120F154F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0xC); /* 0x120F1551: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1554: inc edi */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x120F1555: mov dword ptr [esi], eax */
    /* cmp edi, edx */ /* 0x120F1557: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1538; /* 0x120F1559: jb 0x120f1538 */
L_120F155B:
    eax = edx; /* 0x120F155B: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120F155D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120F155D: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x120F1560: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    goto L_120F15CF; /* 0x120F1562: jmp 0x120f15cf */
L_120F1564:
    esi = MEM32(ebp + 0x10); /* 0x120F1564: mov esi, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x120F1567: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F15C8; /* 0x120F1569: je 0x120f15c8 */
L_120F156B:
    ecx = MEM32(ebp + 0xC); /* 0x120F156B: mov ecx, dword ptr [ebp + 0xc] */
L_120F156E:
    eax = MEM32(ecx); /* 0x120F156E: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x120F1570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F15C8; /* 0x120F1572: je 0x120f15c8 */
L_120F1574:
    eax = MEM32(eax + 0x8); /* 0x120F1574: mov eax, dword ptr [eax + 8] */
    /* cmp MEM32(eax + 0x18), 2 */ /* 0x120F1577: cmp dword ptr [eax + 0x18], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x20); /* 0x120F157B: mov eax, dword ptr [eax + 0x20] */
    ecx = MEM32(esi); /* 0x120F157E: mov ecx, dword ptr [esi] */
    MEM32(ecx + edi * 4) = eax; /* 0x120F1580: mov dword ptr [ecx + edi*4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x120F1583: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x120F1586: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x120F1588: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F158B: inc edi */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x120F158C: mov dword ptr [ecx], eax */
    /* cmp edi, edx */ /* 0x120F158E: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F156E; /* 0x120F1590: jb 0x120f156e */
L_120F1592:
    goto L_120F15C8; /* 0x120F1592: jmp 0x120f15c8 */
L_120F1594:
    esi = MEM32(ebp + 0x10); /* 0x120F1594: mov esi, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x120F1597: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F15C8; /* 0x120F1599: je 0x120f15c8 */
L_120F159B:
    ecx = MEM32(ebp + 0xC); /* 0x120F159B: mov ecx, dword ptr [ebp + 0xc] */
    ebx = edi; /* 0x120F159E: mov ebx, edi */
L_120F15A0:
    eax = MEM32(ecx); /* 0x120F15A0: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x120F15A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F15C5; /* 0x120F15A4: je 0x120f15c5 */
L_120F15A6:
    eax = MEM32(eax + 0x8); /* 0x120F15A6: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F15A9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x20), edi */ /* 0x120F15AB: cmp dword ptr [eax + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x120F15AE: mov eax, dword ptr [esi] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F15B0: setne cl */
    MEM32(eax + ebx * 4) = ecx; /* 0x120F15B3: mov dword ptr [eax + ebx*4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x120F15B6: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x120F15B9: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x120F15BB: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F15BE: inc ebx */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x120F15BF: mov dword ptr [ecx], eax */
    /* cmp ebx, edx */ /* 0x120F15C1: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F15A0; /* 0x120F15C3: jb 0x120f15a0 */
L_120F15C5:
    ebx = MEM32(ebp + 0x8); /* 0x120F15C5: mov ebx, dword ptr [ebp + 8] */
L_120F15C8:
    eax = edx; /* 0x120F15C8: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120F15CA: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120F15CA: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x120F15CD: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
L_120F15CF:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 0x1Cu; /* 0x120F15CF: add dword ptr [ebx], 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120F14B8; /* 0x120F15D2: jmp 0x120f14b8 */
L_120F15D7:
    eax = edi; /* 0x120F15D7: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_120F14BB; /* 0x120F15D9: jmp 0x120f14bb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F15F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F15F2u);

L_120F15F2:
    edi = edi; /* 0x120F15F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F15F4: push ebp */
    ebp = esp; /* 0x120F15F5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F15F7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F15FA: push ebx */
    PUSH32(esp, esi); /* 0x120F15FB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F15FC: mov esi, dword ptr [ebp + 8] */
    edx = ecx; /* 0x120F15FF: mov edx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x120F1601: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120F1604: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x120F1605: mov dword ptr [ebp - 4], edx */
    /* test esi, esi */ /* 0x120F1608: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17A8; /* 0x120F160A: je 0x120f17a8 */
L_120F1610:
    MEM32(ebp + 0xC) = ecx; /* 0x120F1610: mov dword ptr [ebp + 0xc], ecx */
L_120F1613:
    eax = (uint32_t)LO16(esi); /* 0x120F1613: movzx eax, si */
    /* cmp eax, esi */ /* 0x120F1616: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1618: je 0x120f17ac */
L_120F161E:
    eax = MEM32(edx + 0x70); /* 0x120F161E: mov eax, dword ptr [edx + 0x70] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120F1621: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x120F1623: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80000003u */ /* 0x120F1628: cmp eax, 0x80000003 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F163E; /* 0x120F162D: jne 0x120f163e */
L_120F162F:
    esi = ~esi; /* 0x120F162F: not esi */
    /* cmp MEM32(esi), 3 */ /* 0x120F1631: cmp dword ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1634: jne 0x120f17ac */
L_120F163A:
    ebx = esi; /* 0x120F163A: mov ebx, esi */
    goto L_120F1653; /* 0x120F163C: jmp 0x120f1653 */
L_120F163E:
    eax = MEM32(ebp + 0x10); /* 0x120F163E: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F1641: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F1642: push eax */
    PUSH32(esp, esi); /* 0x120F1643: push esi */
    ecx = edx; /* 0x120F1644: mov ecx, edx */
    RECOMP_CALL(sub_120F1855); /* 0x120F1646: call 0x120f1855 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120F164B: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x120F164E: mov edx, dword ptr [ebp - 4] */
    ebx = eax; /* 0x120F1651: mov ebx, eax */
L_120F1653:
    /* test ebx, ebx */ /* 0x120F1653: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1655: je 0x120f17ac */
L_120F165B:
    /* test ecx, ecx */ /* 0x120F165B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17D6; /* 0x120F165D: je 0x120f17d6 */
L_120F1663:
    eax = MEM32(ebx + 0x4); /* 0x120F1663: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1666: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x18); /* 0x120F1669: add eax, dword ptr [ebx + 0x18] */
    _flag_k = FK_ADD;
    ecx = edx + 0x3C; /* 0x120F166C: lea ecx, [edx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x120F166F: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x120F1671: mov dword ptr [ebp + 8], ecx */
    /* cmp MEM32(eax + 0x4), 5 */ /* 0x120F1674: cmp dword ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1678: jne 0x120f17ac */
L_120F167E:
    /* cmp MEM32(ebx + 0x10), 0xFFFFFFFFu */ /* 0x120F167E: cmp dword ptr [ebx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F168E; /* 0x120F1682: jne 0x120f168e */
L_120F1684:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F1684: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1688: jne 0x120f17ac */
L_120F168E:
    eax = MEM32(eax + 0x14); /* 0x120F168E: mov eax, dword ptr [eax + 0x14] */
    edi = ebx + 0x8; /* 0x120F1691: lea edi, [ebx + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x120F1694: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x120F1697: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x120F169A: mov dword ptr [ebp - 0x10], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F16B3; /* 0x120F169D: jne 0x120f16b3 */
L_120F169F:
    PUSH32(esp, eax); /* 0x120F169F: push eax */
    PUSH32(esp, ebx); /* 0x120F16A0: push ebx */
    ecx = edx; /* 0x120F16A1: mov ecx, edx */
    RECOMP_CALL(sub_120EFE6B); /* 0x120F16A3: call 0x120efe6b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F16A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F17AC; /* 0x120F16AA: js 0x120f17ac */
L_120F16B0:
    eax = MEM32(ebp + (-0xC)); /* 0x120F16B0: mov eax, dword ptr [ebp - 0xc] */
L_120F16B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F16B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F16B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F16B7:
    MEM32(ebp + (-0x8)) = ecx; /* 0x120F16B7: mov dword ptr [ebp - 8], ecx */
    /* cmp esi, eax */ /* 0x120F16BA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F16BC: jae 0x120f17ac */
L_120F16C2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi); /* 0x120F16C2: add ecx, dword ptr [edi] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x120F16C4: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x120F16C7: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x4); /* 0x120F16C9: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F16CC: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F16CF: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120F16D2: add eax, edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x120F16D4: mov ecx, dword ptr [eax + 8] */
    /* cmp MEM32(ecx + edx), 0 */ /* 0x120F16D7: cmp dword ptr [ecx + edx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x120F16DB: mov dword ptr [ebp - 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1726; /* 0x120F16DE: je 0x120f1726 */
L_120F16E0:
    eax = MEM32(ebp + 0x8); /* 0x120F16E0: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x120F16E3: mov eax, dword ptr [eax] */
    eax = eax + ecx + 0x4; /* 0x120F16E5: lea eax, [eax + ecx + 4] */
    /* test eax, eax */ /* 0x120F16E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1726; /* 0x120F16EB: je 0x120f1726 */
L_120F16ED:
    ecx = MEM32(ebp + 0xC); /* 0x120F16ED: mov ecx, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F16F0: mov edi, ecx */
    SET_LO8(ecx, MEM8(ecx)); /* 0x120F16F2: mov cl, byte ptr [ecx] */
    goto L_120F16FE; /* 0x120F16F4: jmp 0x120f16fe */
L_120F16F6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x120F16F6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1702; /* 0x120F16F8: je 0x120f1702 */
L_120F16FA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F16FA: inc edi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edi)); /* 0x120F16FB: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F16FD: inc eax */
    _flag_k = FK_INC;
L_120F16FE:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x120F16FE: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F16F6; /* 0x120F1700: je 0x120f16f6 */
L_120F1702:
    SET_LO8(ecx, MEM8(edi)); /* 0x120F1702: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x120F1704: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F17CA; /* 0x120F1706: je 0x120f17ca */
L_120F170C:
    /* cmp MEM8(eax), 0 */ /* 0x120F170C: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1723; /* 0x120F170F: jne 0x120f1723 */
L_120F1711:
    SET_LO8(eax, LO8(ecx)); /* 0x120F1711: mov al, cl */
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F1713: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F178D; /* 0x120F1715: je 0x120f178d */
L_120F1717:
    /* cmp LO8(eax), 0x40u */ /* 0x120F1717: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F17B0; /* 0x120F1719: je 0x120f17b0 */
L_120F171F:
    /* cmp LO8(eax), 0x5Bu */ /* 0x120F171F: cmp al, 0x5b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1732; /* 0x120F1721: je 0x120f1732 */
L_120F1723:
    edi = ebx + 0x8; /* 0x120F1723: lea edi, [ebx + 8] */
L_120F1726:
    ecx = MEM32(ebp + (-0x8)); /* 0x120F1726: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x120F1729: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F172C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x120F172D: add ecx, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_120F16B7; /* 0x120F1730: jmp 0x120f16b7 */
L_120F1732:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1732: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), 0x30u */ /* 0x120F1733: cmp byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1736: jl 0x120f17ac */
L_120F1738:
    /* cmp MEM8(edi), 0x39u */ /* 0x120F1738: cmp byte ptr [edi], 0x39 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F173B: jg 0x120f17ac */
L_120F173D:
    PUSH32(esp, edi); /* 0x120F173D: push edi */
    RECOMP_CALL(sub_121BF728); /* 0x120F173E: call 0x121bf728 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F1743: pop ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x120F1744: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x120F1747: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F174A: jae 0x120f17ac */
L_120F174C:
    goto L_120F1754; /* 0x120F174C: jmp 0x120f1754 */
L_120F174E:
    /* cmp LO8(ecx), 0x39u */ /* 0x120F174E: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_120F175B; /* 0x120F1751: jg 0x120f175b */
L_120F1753:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1753: inc edi */
    _flag_k = FK_INC;
L_120F1754:
    SET_LO8(ecx, MEM8(edi)); /* 0x120F1754: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), 0x30u */ /* 0x120F1756: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_120F174E; /* 0x120F1759: jge 0x120f174e */
L_120F175B:
    /* cmp MEM8(edi), 0x5Du */ /* 0x120F175B: cmp byte ptr [edi], 0x5d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F175E: jne 0x120f17ac */
L_120F1760:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F1760: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120F1763: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x120F1766: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x120F1767: mov eax, dword ptr [ebp - 0x10] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F176A: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F176A: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x120F176D: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    esi = ~esi; /* 0x120F176F: not esi */
    PUSH32(esp, esi); /* 0x120F1771: push esi */
    RECOMP_CALL(sub_120EFF23); /* 0x120F1772: call 0x120eff23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120F1777: mov esi, eax */
    /* test esi, esi */ /* 0x120F1779: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F177B: je 0x120f17ac */
L_120F177D:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x120F177D: mov al, byte ptr [edi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x120F1780: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17D2; /* 0x120F1782: je 0x120f17d2 */
L_120F1784:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F1784: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F1786: jne 0x120f17ac */
L_120F1788:
    ecx = edi + 0x2; /* 0x120F1788: lea ecx, [edi + 2] */
    goto L_120F179A; /* 0x120F178B: jmp 0x120f179a */
L_120F178D:
    eax = MEM32(ebp + (-0x10)); /* 0x120F178D: mov eax, dword ptr [ebp - 0x10] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F1790: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F1790: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x120F1793: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    ecx = edi + 0x1; /* 0x120F1795: lea ecx, [edi + 1] */
    esi = ~esi; /* 0x120F1798: not esi */
L_120F179A:
    edx = MEM32(ebp + (-0x4)); /* 0x120F179A: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + 0xC) = ecx; /* 0x120F179D: mov dword ptr [ebp + 0xc], ecx */
    /* test esi, esi */ /* 0x120F17A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1613; /* 0x120F17A2: jne 0x120f1613 */
L_120F17A8:
    /* test ecx, ecx */ /* 0x120F17A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F17DC; /* 0x120F17AA: jne 0x120f17dc */
L_120F17AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F17AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F17EF; /* 0x120F17AE: jmp 0x120f17ef */
L_120F17B0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F17B0: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120F17B3: mov ecx, dword ptr [ebp - 4] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F17B6: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F17B6: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x8); /* 0x120F17B9: add esi, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    eax = edi + 0x1; /* 0x120F17BC: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x120F17BF: push eax */
    esi = ~esi; /* 0x120F17C0: not esi */
    PUSH32(esp, esi); /* 0x120F17C2: push esi */
    RECOMP_CALL(sub_120F0FFC); /* 0x120F17C3: call 0x120f0ffc */
    RECOMP_FLAGS_IN();
    goto L_120F17EF; /* 0x120F17C8: jmp 0x120f17ef */
L_120F17CA:
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F17CA: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F17CA: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0x8); /* 0x120F17CD: add esi, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    esi = ~esi; /* 0x120F17D0: not esi */
L_120F17D2:
    eax = esi; /* 0x120F17D2: mov eax, esi */
    goto L_120F17EF; /* 0x120F17D4: jmp 0x120f17ef */
L_120F17D6:
    ebx = ~ebx; /* 0x120F17D6: not ebx */
    eax = ebx; /* 0x120F17D8: mov eax, ebx */
    goto L_120F17EF; /* 0x120F17DA: jmp 0x120f17ef */
L_120F17DC:
    eax = MEM32(ebp + 0x10); /* 0x120F17DC: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F17DF: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F17E0: push eax */
    PUSH32(esp, ecx); /* 0x120F17E1: push ecx */
    ecx = edx; /* 0x120F17E2: mov ecx, edx */
    RECOMP_CALL(sub_120F1855); /* 0x120F17E4: call 0x120f1855 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F17E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F17AC; /* 0x120F17EB: je 0x120f17ac */
L_120F17ED:
    eax = ~eax; /* 0x120F17ED: not eax */
L_120F17EF:
    edi = POP32_VAL(esp); /* 0x120F17EF: pop edi */
    esi = POP32_VAL(esp); /* 0x120F17F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F17F1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F17F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F17F3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F17FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F17FBu);

L_120F17FB:
    edi = edi; /* 0x120F17FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F17FD: push ebp */
    ebp = esp; /* 0x120F17FE: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120F1800: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F180A; /* 0x120F1804: jne 0x120f180a */
L_120F1806:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1806: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F181D; /* 0x120F1808: jmp 0x120f181d */
L_120F180A:
    ecx = MEM32(ebp + 0x8); /* 0x120F180A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x120F180D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F180F: push dword ptr [ebp + 0x10] */
    ecx = ecx + (-0x6C); /* 0x120F1812: lea ecx, [ecx - 0x6c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1815: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120F0FFC); /* 0x120F1818: call 0x120f0ffc */
    RECOMP_FLAGS_IN();
L_120F181D:
    ebp = POP32_VAL(esp); /* 0x120F181D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F181E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F1826(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1826u);

L_120F1826:
    edi = edi; /* 0x120F1826: mov edi, edi */
    PUSH32(esp, esi); /* 0x120F1828: push esi */
    esi = ecx; /* 0x120F1829: mov esi, ecx */
    RECOMP_CALL(sub_120F0B75); /* 0x120F182B: call 0x120f0b75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x70) = MEM32(esi + 0x70) & 0; /* 0x120F1830: and dword ptr [esi + 0x70], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x78) = MEM32(esi + 0x78) & 0; /* 0x120F1834: and dword ptr [esi + 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1200A134u; /* 0x120F1838: mov dword ptr [esi], 0x1200a134 */
    MEM32(esi + 0x6C) = 0x1200A040u; /* 0x120F183E: mov dword ptr [esi + 0x6c], 0x1200a040 */
    MEM32(esi + 0x74) = 1; /* 0x120F1845: mov dword ptr [esi + 0x74], 1 */
    eax = esi; /* 0x120F184C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F184E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120F184F: ret  */
    RECOMP_REGS_OUT();
}

void sub_120F1855(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1855u);

L_120F1855:
    edi = edi; /* 0x120F1855: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1857: push ebp */
    ebp = esp; /* 0x120F1858: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F185A: push ecx */
    PUSH32(esp, ebx); /* 0x120F185B: push ebx */
    PUSH32(esp, esi); /* 0x120F185C: push esi */
    ebx = ecx; /* 0x120F185D: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x120F185F: push edi */
    edi = MEM32(ebx + 0x44); /* 0x120F1860: mov edi, dword ptr [ebx + 0x44] */
    /* test edi, edi */ /* 0x120F1863: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F1865: je 0x120f18c4 */
L_120F1867:
    edx = MEM32(ebx + 0x3C); /* 0x120F1867: mov edx, dword ptr [ebx + 0x3c] */
L_120F186A:
    eax = MEM32(edi + 0x4); /* 0x120F186A: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F186D: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x18); /* 0x120F1870: add eax, dword ptr [edi + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120F1873: add eax, edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x120F1875: mov ecx, dword ptr [eax + 8] */
    /* cmp MEM32(ecx + edx), 0 */ /* 0x120F1878: cmp dword ptr [ecx + edx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F187C: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F18BD; /* 0x120F187F: je 0x120f18bd */
L_120F1881:
    ecx = edx + ecx + 0x4; /* 0x120F1881: lea ecx, [edx + ecx + 4] */
    /* test ecx, ecx */ /* 0x120F1885: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F18BD; /* 0x120F1887: je 0x120f18bd */
L_120F1889:
    eax = MEM32(ebp + 0x8); /* 0x120F1889: mov eax, dword ptr [ebp + 8] */
    esi = eax; /* 0x120F188C: mov esi, eax */
    SET_LO8(eax, MEM8(eax)); /* 0x120F188E: mov al, byte ptr [eax] */
    goto L_120F189A; /* 0x120F1890: jmp 0x120f189a */
L_120F1892:
    /* test LO8(eax), LO8(eax) */ /* 0x120F1892: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F189E; /* 0x120F1894: je 0x120f189e */
L_120F1896:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1896: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x120F1897: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F1899: inc ecx */
    _flag_k = FK_INC;
L_120F189A:
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x120F189A: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1892; /* 0x120F189C: je 0x120f1892 */
L_120F189E:
    SET_LO8(eax, MEM8(esi)); /* 0x120F189E: mov al, byte ptr [esi] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x120F18A0: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1956; /* 0x120F18A2: je 0x120f1956 */
L_120F18A8:
    /* cmp MEM8(ecx), 0 */ /* 0x120F18A8: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F18BD; /* 0x120F18AB: jne 0x120f18bd */
L_120F18AD:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F18AD: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1943; /* 0x120F18AF: je 0x120f1943 */
L_120F18B5:
    /* cmp LO8(eax), 0x40u */ /* 0x120F18B5: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F192A; /* 0x120F18B7: je 0x120f192a */
L_120F18B9:
    /* cmp LO8(eax), 0x5Bu */ /* 0x120F18B9: cmp al, 0x5b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F18CD; /* 0x120F18BB: je 0x120f18cd */
L_120F18BD:
    edi = MEM32(edi + 0x34); /* 0x120F18BD: mov edi, dword ptr [edi + 0x34] */
    /* test edi, edi */ /* 0x120F18C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F186A; /* 0x120F18C2: jne 0x120f186a */
L_120F18C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F18C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120F18C6:
    edi = POP32_VAL(esp); /* 0x120F18C6: pop edi */
    esi = POP32_VAL(esp); /* 0x120F18C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F18C8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F18C9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F18CA: ret 8 */
L_120F18CD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F18CD: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0x30u */ /* 0x120F18CE: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F18D1: jl 0x120f18c4 */
L_120F18D3:
    /* cmp MEM8(esi), 0x39u */ /* 0x120F18D3: cmp byte ptr [esi], 0x39 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F18D6: jg 0x120f18c4 */
L_120F18D8:
    PUSH32(esp, esi); /* 0x120F18D8: push esi */
    RECOMP_CALL(sub_121BF728); /* 0x120F18D9: call 0x121bf728 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F18DE: pop ecx */
    ecx = eax; /* 0x120F18DF: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x120F18E1: mov eax, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x120F18E4: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F18E7: jae 0x120f18c4 */
L_120F18E9:
    goto L_120F18F0; /* 0x120F18E9: jmp 0x120f18f0 */
L_120F18EB:
    /* cmp LO8(eax), 0x39u */ /* 0x120F18EB: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_120F18F6; /* 0x120F18ED: jg 0x120f18f6 */
L_120F18EF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F18EF: inc esi */
    _flag_k = FK_INC;
L_120F18F0:
    SET_LO8(eax, MEM8(esi)); /* 0x120F18F0: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x120F18F2: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_120F18EB; /* 0x120F18F4: jge 0x120f18eb */
L_120F18F6:
    /* cmp MEM8(esi), 0x5Du */ /* 0x120F18F6: cmp byte ptr [esi], 0x5d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F18F9: jne 0x120f18c4 */
L_120F18FB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F18FB: push dword ptr [ebp + 0xc] */
    edi = ~edi; /* 0x120F18FE: not edi */
    PUSH32(esp, ecx); /* 0x120F1900: push ecx */
    PUSH32(esp, edi); /* 0x120F1901: push edi */
    ecx = ebx; /* 0x120F1902: mov ecx, ebx */
    RECOMP_CALL(sub_120EFF23); /* 0x120F1904: call 0x120eff23 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1909: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F190B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F190D: je 0x120f18c4 */
L_120F190F:
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x120F190F: mov al, byte ptr [esi + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x120F1912: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F191C; /* 0x120F1914: jne 0x120f191c */
L_120F1916:
    ecx = ~ecx; /* 0x120F1916: not ecx */
    eax = ecx; /* 0x120F1918: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_120F18C6; /* 0x120F191A: jmp 0x120f18c6 */
L_120F191C:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120F191C: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F191E: jne 0x120f18c4 */
L_120F1920:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1920: push dword ptr [ebp + 0xc] */
    eax = esi + 0x2; /* 0x120F1923: lea eax, [esi + 2] */
    PUSH32(esp, eax); /* 0x120F1926: push eax */
    PUSH32(esp, ecx); /* 0x120F1927: push ecx */
    goto L_120F194D; /* 0x120F1928: jmp 0x120f194d */
L_120F192A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F192A: push dword ptr [ebp + 0xc] */
    eax = esi + 0x1; /* 0x120F192D: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120F1930: push eax */
    edi = ~edi; /* 0x120F1931: not edi */
    PUSH32(esp, edi); /* 0x120F1933: push edi */
    ecx = ebx; /* 0x120F1934: mov ecx, ebx */
    RECOMP_CALL(sub_120F0FFC); /* 0x120F1936: call 0x120f0ffc */
    RECOMP_FLAGS_IN();
L_120F193B:
    /* test eax, eax */ /* 0x120F193B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F18C4; /* 0x120F193D: je 0x120f18c4 */
L_120F193F:
    eax = ~eax; /* 0x120F193F: not eax */
    RECOMP_BACKEDGE();
    goto L_120F18C6; /* 0x120F1941: jmp 0x120f18c6 */
L_120F1943:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1943: push dword ptr [ebp + 0xc] */
    eax = esi + 0x1; /* 0x120F1946: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x120F1949: push eax */
    edi = ~edi; /* 0x120F194A: not edi */
    PUSH32(esp, edi); /* 0x120F194C: push edi */
L_120F194D:
    ecx = ebx; /* 0x120F194D: mov ecx, ebx */
    RECOMP_CALL(sub_120F15F2); /* 0x120F194F: call 0x120f15f2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_120F193B; /* 0x120F1954: jmp 0x120f193b */
L_120F1956:
    eax = edi; /* 0x120F1956: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_120F18C6; /* 0x120F1958: jmp 0x120f18c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120F1962(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1962u);

L_120F1962:
    edi = edi; /* 0x120F1962: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1964: push ebp */
    ebp = esp; /* 0x120F1965: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F1967: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x120F196A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F196C: push dword ptr [ebp + 0x10] */
    ecx = ecx + (-0x6C); /* 0x120F196F: lea ecx, [ecx - 0x6c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1972: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120F15F2); /* 0x120F1975: call 0x120f15f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120F197A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F197B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F1983(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1983u);

L_120F1983:
    edi = edi; /* 0x120F1983: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1985: push ebp */
    ebp = esp; /* 0x120F1986: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x120F1988: mov edx, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(edx); /* 0x120F198B: movzx eax, dx */
    /* cmp eax, edx */ /* 0x120F198E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1996; /* 0x120F1990: jne 0x120f1996 */
L_120F1992:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1992: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F19C2; /* 0x120F1994: jmp 0x120f19c2 */
L_120F1996:
    eax = MEM32(ecx + 0x70); /* 0x120F1996: mov eax, dword ptr [ecx + 0x70] */
    PUSH32(esp, esi); /* 0x120F1999: push esi */
    esi = 0x80000003u; /* 0x120F199A: mov esi, 0x80000003 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x120F199F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x120F19A1: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x120F19A3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x120F19A5: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F19B9; /* 0x120F19A6: jne 0x120f19b9 */
L_120F19A8:
    edx = ~edx; /* 0x120F19A8: not edx */
    eax = MEM32(edx); /* 0x120F19AA: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120F19AC: sub eax, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120F19AF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120F19B1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x120F19B3: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120F19B5: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F19C2; /* 0x120F19B7: jmp 0x120f19c2 */
L_120F19B9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F19B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x120F19BC: push edx */
    RECOMP_CALL(sub_120F1855); /* 0x120F19BD: call 0x120f1855 */
    RECOMP_FLAGS_IN();
L_120F19C2:
    ebp = POP32_VAL(esp); /* 0x120F19C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120F19C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120F19CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F19CBu);

L_120F19CB:
    edi = edi; /* 0x120F19CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F19CD: push ebp */
    ebp = esp; /* 0x120F19CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F19D0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120F19D1: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120F19D4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F19D5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F19D7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F19E5; /* 0x120F19D9: jne 0x120f19e5 */
L_120F19DB:
    edi = 0x8876086Cu; /* 0x120F19DB: mov edi, 0x8876086c */
    goto L_120F1AEB; /* 0x120F19E0: jmp 0x120f1aeb */
L_120F19E5:
    PUSH32(esp, ebx); /* 0x120F19E5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F19E6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F19E9: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F19EB: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F19EE: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F19F1: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x120F19F6: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x120F19F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1A07; /* 0x120F19FB: jne 0x120f1a07 */
L_120F19FD:
    edi = 0x8876086Cu; /* 0x120F19FD: mov edi, 0x8876086c */
    goto L_120F1AEA; /* 0x120F1A02: jmp 0x120f1aea */
L_120F1A07:
    edx = eax + 0x18; /* 0x120F1A07: lea edx, [eax + 0x18] */
    eax = MEM32(eax + 0x4); /* 0x120F1A0A: mov eax, dword ptr [eax + 4] */
    ecx = ebx + (-0x30); /* 0x120F1A0D: lea ecx, [ebx - 0x30] */
    ebx = MEM32(eax + 0x40); /* 0x120F1A10: mov ebx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edx); /* 0x120F1A13: add ebx, dword ptr [edx] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2Cu); /* 0x120F1A15: push 0x2c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx); /* 0x120F1A17: add ebx, dword ptr [ecx] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x120F1A19: push edi */
    PUSH32(esp, esi); /* 0x120F1A1A: push esi */
    MEM32(ebp + 0x10) = ecx; /* 0x120F1A1B: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120F1A1E: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x120F1A23: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x120F1A26: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(edx); /* 0x120F1A29: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F1A2B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + ecx), edi */ /* 0x120F1A2E: cmp dword ptr [eax + ecx], edi */
    _flag_a = (uint32_t)(MEM32(eax + ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1A37; /* 0x120F1A31: jne 0x120f1a37 */
L_120F1A33:
    eax = edi; /* 0x120F1A33: mov eax, edi */
    goto L_120F1A3B; /* 0x120F1A35: jmp 0x120f1a3b */
L_120F1A37:
    eax = eax + ecx + 0x4; /* 0x120F1A37: lea eax, [eax + ecx + 4] */
L_120F1A3B:
    MEM32(esi) = eax; /* 0x120F1A3B: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0xC); /* 0x120F1A3D: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(edx); /* 0x120F1A40: mov ecx, dword ptr [edx] */
    /* cmp MEM32(eax + ecx), edi */ /* 0x120F1A42: cmp dword ptr [eax + ecx], edi */
    _flag_a = (uint32_t)(MEM32(eax + ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1A4B; /* 0x120F1A45: jne 0x120f1a4b */
L_120F1A47:
    eax = edi; /* 0x120F1A47: mov eax, edi */
    goto L_120F1A4F; /* 0x120F1A49: jmp 0x120f1a4f */
L_120F1A4B:
    eax = eax + ecx + 0x4; /* 0x120F1A4B: lea eax, [eax + ecx + 4] */
L_120F1A4F:
    ecx = MEM32(ebp + 0xC); /* 0x120F1A4F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x120F1A52: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx + 0x14); /* 0x120F1A55: mov eax, dword ptr [ecx + 0x14] */
    MEM32(esi + 0x28) = eax; /* 0x120F1A58: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(ecx + 0x4); /* 0x120F1A5B: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x44); /* 0x120F1A5E: mov edx, dword ptr [eax + 0x44] */
    /* test edx, edx */ /* 0x120F1A61: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1A6A; /* 0x120F1A63: jne 0x120f1a6a */
L_120F1A65:
    PUSH32(esp, 4); /* 0x120F1A65: push 4 */
    eax = POP32_VAL(esp); /* 0x120F1A67: pop eax */
    goto L_120F1A73; /* 0x120F1A68: jmp 0x120f1a73 */
L_120F1A6A:
    eax = MEM32(ebp + 0x8); /* 0x120F1A6A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + (-0x38)); /* 0x120F1A6D: mov eax, dword ptr [eax - 0x38] */
    eax = MEM32(edx + eax); /* 0x120F1A70: mov eax, dword ptr [edx + eax] */
L_120F1A73:
    MEM32(esi + 0x24) = eax; /* 0x120F1A73: mov dword ptr [esi + 0x24], eax */
    eax = MEM32(ebx); /* 0x120F1A76: mov eax, dword ptr [ebx] */
    MEM32(esi + 0xC) = eax; /* 0x120F1A78: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x120F1A7B: mov eax, dword ptr [ebx + 4] */
    MEM32(esi + 0x8) = eax; /* 0x120F1A7E: mov dword ptr [esi + 8], eax */
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1A81: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1A8C; /* 0x120F1A85: jne 0x120f1a8c */
L_120F1A87:
    eax = MEM32(ebx + 0x10); /* 0x120F1A87: mov eax, dword ptr [ebx + 0x10] */
    goto L_120F1A8E; /* 0x120F1A8A: jmp 0x120f1a8e */
L_120F1A8C:
    eax = edi; /* 0x120F1A8C: mov eax, edi */
L_120F1A8E:
    MEM32(esi + 0x18) = eax; /* 0x120F1A8E: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = edi; /* 0x120F1A91: mov dword ptr [esi + 0x1c], edi */
    /* cmp MEM32(ecx + 0x18), edi */ /* 0x120F1A94: cmp dword ptr [ecx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1AA8; /* 0x120F1A97: jne 0x120f1aa8 */
L_120F1A99:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1A99: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1AA8; /* 0x120F1A9D: jne 0x120f1aa8 */
L_120F1A9F:
    eax = MEM32(ecx + 0x4); /* 0x120F1A9F: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x28); /* 0x120F1AA2: mov eax, dword ptr [eax + 0x28] */
    MEM32(esi + 0x1C) = eax; /* 0x120F1AA5: mov dword ptr [esi + 0x1c], eax */
L_120F1AA8:
    eax = MEM32(esi + 0x8); /* 0x120F1AA8: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1AAB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1ADA; /* 0x120F1AAC: je 0x120f1ada */
L_120F1AAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x120F1AAE: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1AD5; /* 0x120F1AB1: je 0x120f1ad5 */
L_120F1AB3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1AB3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1AC7; /* 0x120F1AB4: je 0x120f1ac7 */
L_120F1AB6:
    MEM32(esi + 0x20) = edi; /* 0x120F1AB6: mov dword ptr [esi + 0x20], edi */
    eax = MEM32(ebx + 0x14); /* 0x120F1AB9: mov eax, dword ptr [ebx + 0x14] */
    MEM32(esi + 0x10) = eax; /* 0x120F1ABC: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebx + 0x18); /* 0x120F1ABF: mov eax, dword ptr [ebx + 0x18] */
    MEM32(esi + 0x14) = eax; /* 0x120F1AC2: mov dword ptr [esi + 0x14], eax */
    goto L_120F1AEA; /* 0x120F1AC5: jmp 0x120f1aea */
L_120F1AC7:
    eax = MEM32(ebx + 0x14); /* 0x120F1AC7: mov eax, dword ptr [ebx + 0x14] */
    MEM32(esi + 0x20) = eax; /* 0x120F1ACA: mov dword ptr [esi + 0x20], eax */
L_120F1ACD:
    MEM32(esi + 0x10) = edi; /* 0x120F1ACD: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = edi; /* 0x120F1AD0: mov dword ptr [esi + 0x14], edi */
    goto L_120F1AEA; /* 0x120F1AD3: jmp 0x120f1aea */
L_120F1AD5:
    MEM32(esi + 0x20) = edi; /* 0x120F1AD5: mov dword ptr [esi + 0x20], edi */
    RECOMP_BACKEDGE();
    goto L_120F1ACD; /* 0x120F1AD8: jmp 0x120f1acd */
L_120F1ADA:
    MEM32(esi + 0x20) = edi; /* 0x120F1ADA: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x10) = 1; /* 0x120F1ADD: mov dword ptr [esi + 0x10], 1 */
    ecx = MEM32(ebx + 0x14); /* 0x120F1AE4: mov ecx, dword ptr [ebx + 0x14] */
    MEM32(esi + 0x14) = ecx; /* 0x120F1AE7: mov dword ptr [esi + 0x14], ecx */
L_120F1AEA:
    ebx = POP32_VAL(esp); /* 0x120F1AEA: pop ebx */
L_120F1AEB:
    eax = edi; /* 0x120F1AEB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120F1AED: pop edi */
    esi = POP32_VAL(esp); /* 0x120F1AEE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F1AEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F1AF0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F1AF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1AF8u);

L_120F1AF8:
    edi = edi; /* 0x120F1AF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1AFA: push ebp */
    ebp = esp; /* 0x120F1AFB: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120F1AFD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1B24; /* 0x120F1B01: jne 0x120f1b24 */
L_120F1B03:
    edx = MEM32(ebp + 0x8); /* 0x120F1B03: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x120F1B06: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(edx + (-0x4C)) */ /* 0x120F1B09: cmp ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1B12; /* 0x120F1B0C: jb 0x120f1b12 */
L_120F1B0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1B0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1B90; /* 0x120F1B10: jmp 0x120f1b90 */
L_120F1B12:
    eax = MEM32(edx + (-0x28)); /* 0x120F1B12: mov eax, dword ptr [edx - 0x28] */
    goto L_120F1B1A; /* 0x120F1B15: jmp 0x120f1b1a */
L_120F1B17:
    eax = MEM32(eax + 0x34); /* 0x120F1B17: mov eax, dword ptr [eax + 0x34] */
L_120F1B1A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120F1B1A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + (-0x4C)) */ /* 0x120F1B1B: cmp ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1B17; /* 0x120F1B1E: jb 0x120f1b17 */
L_120F1B20:
    eax = ~eax; /* 0x120F1B20: not eax */
    goto L_120F1B90; /* 0x120F1B22: jmp 0x120f1b90 */
L_120F1B24:
    PUSH32(esp, ebx); /* 0x120F1B24: push ebx */
    PUSH32(esp, esi); /* 0x120F1B25: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F1B26: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F1B29: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1B2B: push dword ptr [ebp + 0xc] */
    ebx = esi + (-0x6C); /* 0x120F1B2E: lea ebx, [esi - 0x6c] */
    ecx = ebx; /* 0x120F1B31: mov ecx, ebx */
    RECOMP_CALL(sub_120F1983); /* 0x120F1B33: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1B38: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1B3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1B66; /* 0x120F1B3C: je 0x120f1b66 */
L_120F1B3E:
    eax = MEM32(ecx + 0x4); /* 0x120F1B3E: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1B41: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F1B44: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + (-0x30)); /* 0x120F1B47: add eax, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x4), 5 */ /* 0x120F1B4A: cmp dword ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1B66; /* 0x120F1B4E: jne 0x120f1b66 */
L_120F1B50:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1B50: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1B5C; /* 0x120F1B54: jne 0x120f1b5c */
L_120F1B56:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F1B56: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1B66; /* 0x120F1B5A: jne 0x120f1b66 */
L_120F1B5C:
    eax = MEM32(eax + 0x14); /* 0x120F1B5C: mov eax, dword ptr [eax + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x120F1B5F: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x120F1B62: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1B6A; /* 0x120F1B64: jb 0x120f1b6a */
L_120F1B66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1B66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1B8E; /* 0x120F1B68: jmp 0x120f1b8e */
L_120F1B6A:
    PUSH32(esp, edi); /* 0x120F1B6A: push edi */
    edi = ecx + 0x8; /* 0x120F1B6B: lea edi, [ecx + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x120F1B6E: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1B84; /* 0x120F1B71: jne 0x120f1b84 */
L_120F1B73:
    PUSH32(esp, eax); /* 0x120F1B73: push eax */
    PUSH32(esp, ecx); /* 0x120F1B74: push ecx */
    ecx = ebx; /* 0x120F1B75: mov ecx, ebx */
    RECOMP_CALL(sub_120EFE6B); /* 0x120F1B77: call 0x120efe6b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1B7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120F1B84; /* 0x120F1B7E: jns 0x120f1b84 */
L_120F1B80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1B80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1B8D; /* 0x120F1B82: jmp 0x120f1b8d */
L_120F1B84:
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F1B84: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F1B84: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi); /* 0x120F1B87: add esi, dword ptr [edi] */
    _flag_k = FK_ADD;
    esi = ~esi; /* 0x120F1B89: not esi */
    eax = esi; /* 0x120F1B8B: mov eax, esi */
L_120F1B8D:
    edi = POP32_VAL(esp); /* 0x120F1B8D: pop edi */
L_120F1B8E:
    esi = POP32_VAL(esp); /* 0x120F1B8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F1B8F: pop ebx */
L_120F1B90:
    ebp = POP32_VAL(esp); /* 0x120F1B90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F1B91: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F1B99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1B99u);

L_120F1B99:
    edi = edi; /* 0x120F1B99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1B9B: push ebp */
    ebp = esp; /* 0x120F1B9C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F1B9E: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120F1B9F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F1BA3: push ebx */
    PUSH32(esp, esi); /* 0x120F1BA4: push esi */
    PUSH32(esp, edi); /* 0x120F1BA5: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1BFE; /* 0x120F1BA6: jne 0x120f1bfe */
L_120F1BA8:
    ebx = MEM32(ebp + 0x8); /* 0x120F1BA8: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebx + (-0x28)); /* 0x120F1BAB: mov esi, dword ptr [ebx - 0x28] */
    /* test esi, esi */ /* 0x120F1BAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1BF7; /* 0x120F1BB0: je 0x120f1bf7 */
L_120F1BB2:
    edi = MEM32(ebp + 0x10); /* 0x120F1BB2: mov edi, dword ptr [ebp + 0x10] */
L_120F1BB5:
    eax = MEM32(esi + 0x4); /* 0x120F1BB5: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1BB8: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x18); /* 0x120F1BBB: add eax, dword ptr [esi + 0x18] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + (-0x30)); /* 0x120F1BBE: mov ecx, dword ptr [ebx - 0x30] */
    edx = MEM32(eax + ecx + 0xC); /* 0x120F1BC1: mov edx, dword ptr [eax + ecx + 0xc] */
    /* cmp MEM32(edx + ecx), 0 */ /* 0x120F1BC5: cmp dword ptr [edx + ecx], 0 */
    _flag_a = (uint32_t)(MEM32(edx + ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1BE4; /* 0x120F1BC9: je 0x120f1be4 */
L_120F1BCB:
    eax = ecx + edx + 0x4; /* 0x120F1BCB: lea eax, [ecx + edx + 4] */
    /* test eax, eax */ /* 0x120F1BCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1BE4; /* 0x120F1BD1: je 0x120f1be4 */
L_120F1BD3:
    /* test edi, edi */ /* 0x120F1BD3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1BE8; /* 0x120F1BD5: je 0x120f1be8 */
L_120F1BD7:
    PUSH32(esp, edi); /* 0x120F1BD7: push edi */
    PUSH32(esp, eax); /* 0x120F1BD8: push eax */
    RECOMP_CALL(sub_121BF494); /* 0x120F1BD9: call 0x121bf494 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F1BDE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120F1BDF: pop ecx */
    /* test eax, eax */ /* 0x120F1BE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1BE6; /* 0x120F1BE2: jmp 0x120f1be6 */
L_120F1BE4:
    /* test edi, edi */ /* 0x120F1BE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
L_120F1BE6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120F1BEF; /* 0x120F1BE6: je 0x120f1bef */
L_120F1BE8:
    esi = MEM32(esi + 0x34); /* 0x120F1BE8: mov esi, dword ptr [esi + 0x34] */
    /* test esi, esi */ /* 0x120F1BEB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1BB5; /* 0x120F1BED: jne 0x120f1bb5 */
L_120F1BEF:
    /* test esi, esi */ /* 0x120F1BEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1CC6; /* 0x120F1BF1: jne 0x120f1cc6 */
L_120F1BF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1BF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1CCA; /* 0x120F1BF9: jmp 0x120f1cca */
L_120F1BFE:
    esi = MEM32(ebp + 0x8); /* 0x120F1BFE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F1C01: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1C03: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F1C06: lea ecx, [esi - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F1C09: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1C0E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1C10: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1BF7; /* 0x120F1C12: je 0x120f1bf7 */
L_120F1C14:
    eax = MEM32(ecx + 0x4); /* 0x120F1C14: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1C17: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F1C1A: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    edx = esi + (-0x30); /* 0x120F1C1D: lea edx, [esi - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x120F1C20: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edx; /* 0x120F1C22: mov dword ptr [ebp + 8], edx */
    /* cmp MEM32(eax + 0x4), 5 */ /* 0x120F1C25: cmp dword ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1BF7; /* 0x120F1C29: jne 0x120f1bf7 */
L_120F1C2B:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1C2B: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1C37; /* 0x120F1C2F: jne 0x120f1c37 */
L_120F1C31:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F1C31: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1BF7; /* 0x120F1C35: jne 0x120f1bf7 */
L_120F1C37:
    edi = MEM32(eax + 0x14); /* 0x120F1C37: mov edi, dword ptr [eax + 0x14] */
    eax = ecx + 0x8; /* 0x120F1C3A: lea eax, [ecx + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x120F1C3D: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x120F1C40: mov dword ptr [ebp + 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1C59; /* 0x120F1C43: jne 0x120f1c59 */
L_120F1C45:
    PUSH32(esp, edi); /* 0x120F1C45: push edi */
    PUSH32(esp, ecx); /* 0x120F1C46: push ecx */
    ecx = esi + (-0x6C); /* 0x120F1C47: lea ecx, [esi - 0x6c] */
    RECOMP_CALL(sub_120EFE6B); /* 0x120F1C4A: call 0x120efe6b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F1C4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F1BF7; /* 0x120F1C51: js 0x120f1bf7 */
L_120F1C53:
    eax = MEM32(ebp + 0xC); /* 0x120F1C53: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x120F1C56: mov edx, dword ptr [ebp + 8] */
L_120F1C59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F1C59: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120F1C5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1CB6; /* 0x120F1C5D: je 0x120f1cb6 */
L_120F1C5F:
    ebx = MEM32(ebp + 0x10); /* 0x120F1C5F: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F1C62: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120F1C64: mov dword ptr [ebp - 4], ecx */
L_120F1C67:
    eax = MEM32(eax); /* 0x120F1C67: mov eax, dword ptr [eax] */
    edx = MEM32(edx); /* 0x120F1C69: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120F1C6B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x4); /* 0x120F1C6D: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1C70: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F1C73: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + edx + 0xC); /* 0x120F1C76: mov ecx, dword ptr [eax + edx + 0xc] */
    /* cmp MEM32(edx + ecx), 0 */ /* 0x120F1C7A: cmp dword ptr [edx + ecx], 0 */
    _flag_a = (uint32_t)(MEM32(edx + ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1C9E; /* 0x120F1C7E: je 0x120f1c9e */
L_120F1C80:
    eax = MEM32(ebp + 0x8); /* 0x120F1C80: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x120F1C83: mov eax, dword ptr [eax] */
    eax = eax + ecx + 0x4; /* 0x120F1C85: lea eax, [eax + ecx + 4] */
    /* test eax, eax */ /* 0x120F1C89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1C9E; /* 0x120F1C8B: je 0x120f1c9e */
L_120F1C8D:
    /* test ebx, ebx */ /* 0x120F1C8D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1CA2; /* 0x120F1C8F: je 0x120f1ca2 */
L_120F1C91:
    PUSH32(esp, ebx); /* 0x120F1C91: push ebx */
    PUSH32(esp, eax); /* 0x120F1C92: push eax */
    RECOMP_CALL(sub_121BF494); /* 0x120F1C93: call 0x121bf494 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120F1C98: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120F1C99: pop ecx */
    /* test eax, eax */ /* 0x120F1C9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120F1CA0; /* 0x120F1C9C: jmp 0x120f1ca0 */
L_120F1C9E:
    /* test ebx, ebx */ /* 0x120F1C9E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_120F1CA0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120F1CB6; /* 0x120F1CA0: je 0x120f1cb6 */
L_120F1CA2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120F1CA2: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x120F1CA5: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x120F1CA8: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1CAB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x120F1CAC: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120F1CAF: mov dword ptr [ebp - 4], ecx */
    /* cmp esi, edi */ /* 0x120F1CB2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1C67; /* 0x120F1CB4: jb 0x120f1c67 */
L_120F1CB6:
    /* cmp esi, edi */ /* 0x120F1CB6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1BF7; /* 0x120F1CB8: je 0x120f1bf7 */
L_120F1CBE:
    eax = MEM32(ebp + 0xC); /* 0x120F1CBE: mov eax, dword ptr [ebp + 0xc] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x120F1CC1: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x120F1CC1: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x120F1CC4: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
L_120F1CC6:
    esi = ~esi; /* 0x120F1CC6: not esi */
    eax = esi; /* 0x120F1CC8: mov eax, esi */
L_120F1CCA:
    edi = POP32_VAL(esp); /* 0x120F1CCA: pop edi */
    esi = POP32_VAL(esp); /* 0x120F1CCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F1CCC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F1CCD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F1CCE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F1CD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1CD6u);

L_120F1CD6:
    edi = edi; /* 0x120F1CD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1CD8: push ebp */
    ebp = esp; /* 0x120F1CD9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F1CDB: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F1CDC: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120F1CDF: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F1CE0: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120F1CE3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1CF2; /* 0x120F1CE5: je 0x120f1cf2 */
L_120F1CE7:
    /* test edi, edi */ /* 0x120F1CE7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1CF2; /* 0x120F1CE9: jne 0x120f1cf2 */
L_120F1CEB:
    eax = 0x8876086Cu; /* 0x120F1CEB: mov eax, 0x8876086c */
    goto L_120F1D51; /* 0x120F1CF0: jmp 0x120f1d51 */
L_120F1CF2:
    PUSH32(esp, ebx); /* 0x120F1CF2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F1CF3: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F1CF6: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1CF8: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F1CFB: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F1CFE: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1D03: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1D05: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1D13; /* 0x120F1D07: je 0x120f1d13 */
L_120F1D09:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x120F1D09: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1D1A; /* 0x120F1D0C: je 0x120f1d1a */
L_120F1D0E:
    /* cmp MEM32(ecx + 0x14), esi */ /* 0x120F1D0E: cmp dword ptr [ecx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F1D1A; /* 0x120F1D11: jbe 0x120f1d1a */
L_120F1D13:
    eax = 0x8876086Cu; /* 0x120F1D13: mov eax, 0x8876086c */
    goto L_120F1D50; /* 0x120F1D18: jmp 0x120f1d50 */
L_120F1D1A:
    eax = MEM32(ecx + 0x1C); /* 0x120F1D1A: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ebp + 0x10) = eax; /* 0x120F1D1D: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ecx + 0x4); /* 0x120F1D20: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1D23: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F1D26: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1D28: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edi; /* 0x120F1D2C: mov dword ptr [ebp + 0x14], edi */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F1D2F: setne dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F1D32: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    ecx = ebx + (-0x6C); /* 0x120F1D35: lea ecx, [ebx - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + (-0x30)); /* 0x120F1D38: add eax, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x120F1D3B: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x14; /* 0x120F1D3E: lea eax, [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x120F1D41: push edx */
    PUSH32(esp, eax); /* 0x120F1D42: push eax */
    eax = ebp + 0x10; /* 0x120F1D43: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120F1D46: push eax */
    eax = ebp + 0x8; /* 0x120F1D47: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120F1D4A: push eax */
    RECOMP_CALL(sub_120F11DC); /* 0x120F1D4B: call 0x120f11dc */
    RECOMP_FLAGS_IN();
L_120F1D50:
    ebx = POP32_VAL(esp); /* 0x120F1D50: pop ebx */
L_120F1D51:
    edi = POP32_VAL(esp); /* 0x120F1D51: pop edi */
    esi = POP32_VAL(esp); /* 0x120F1D52: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F1D53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F1D54: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F1D5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1D5Cu);

L_120F1D5C:
    edi = edi; /* 0x120F1D5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1D5E: push ebp */
    ebp = esp; /* 0x120F1D5F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F1D61: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F1D62: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120F1D65: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F1D66: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120F1D69: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1D78; /* 0x120F1D6B: je 0x120f1d78 */
L_120F1D6D:
    /* test edi, edi */ /* 0x120F1D6D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1D78; /* 0x120F1D6F: jne 0x120f1d78 */
L_120F1D71:
    eax = 0x8876086Cu; /* 0x120F1D71: mov eax, 0x8876086c */
    goto L_120F1DD4; /* 0x120F1D76: jmp 0x120f1dd4 */
L_120F1D78:
    PUSH32(esp, ebx); /* 0x120F1D78: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F1D79: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F1D7C: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1D7E: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F1D81: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F1D84: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F1D89: mov edx, eax */
    /* test edx, edx */ /* 0x120F1D8B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1D99; /* 0x120F1D8D: je 0x120f1d99 */
L_120F1D8F:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x120F1D8F: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1DA0; /* 0x120F1D92: je 0x120f1da0 */
L_120F1D94:
    /* cmp MEM32(edx + 0x14), esi */ /* 0x120F1D94: cmp dword ptr [edx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F1DA0; /* 0x120F1D97: jbe 0x120f1da0 */
L_120F1D99:
    eax = 0x8876086Cu; /* 0x120F1D99: mov eax, 0x8876086c */
    goto L_120F1DD3; /* 0x120F1D9E: jmp 0x120f1dd3 */
L_120F1DA0:
    eax = MEM32(edx + 0x1C); /* 0x120F1DA0: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ebp + 0x10) = eax; /* 0x120F1DA3: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edx + 0x4); /* 0x120F1DA6: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1DA9: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F1DAC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x10), 0xFFFFFFFFu */ /* 0x120F1DAE: cmp dword ptr [edx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edi; /* 0x120F1DB2: mov dword ptr [ebp + 0x14], edi */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F1DB5: setne cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x18); /* 0x120F1DB8: add eax, dword ptr [edx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + (-0x30)); /* 0x120F1DBB: add eax, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F1DBE: mov dword ptr [ebp + 0xc], eax */
    eax = ebp + 0x14; /* 0x120F1DC1: lea eax, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x120F1DC4: push ecx */
    PUSH32(esp, eax); /* 0x120F1DC5: push eax */
    eax = ebp + 0x10; /* 0x120F1DC6: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120F1DC9: push eax */
    eax = ebp + 0xC; /* 0x120F1DCA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120F1DCD: push eax */
    RECOMP_CALL(sub_120F1426); /* 0x120F1DCE: call 0x120f1426 */
    RECOMP_FLAGS_IN();
L_120F1DD3:
    ebx = POP32_VAL(esp); /* 0x120F1DD3: pop ebx */
L_120F1DD4:
    edi = POP32_VAL(esp); /* 0x120F1DD4: pop edi */
    esi = POP32_VAL(esp); /* 0x120F1DD5: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F1DD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F1DD7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F1DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F1DDFu);

L_120F1DDF:
    edi = edi; /* 0x120F1DDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F1DE1: push ebp */
    ebp = esp; /* 0x120F1DE2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F1DE4: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F1DE7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1DF7; /* 0x120F1DEB: jne 0x120f1df7 */
L_120F1DED:
    ecx = 0x8876086Cu; /* 0x120F1DED: mov ecx, 0x8876086c */
    goto L_120F1FFA; /* 0x120F1DF2: jmp 0x120f1ffa */
L_120F1DF7:
    PUSH32(esp, esi); /* 0x120F1DF7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F1DF8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F1DFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F1DFD: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F1DFE: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F1DFF: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F1E02: lea ecx, [esi - 0x6c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F1E05: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_120F1983); /* 0x120F1E08: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1E0D: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1E0F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1E2B; /* 0x120F1E11: je 0x120f1e2b */
L_120F1E13:
    eax = MEM32(ecx + 0x4); /* 0x120F1E13: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F1E16: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F1E19: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + (-0x30)); /* 0x120F1E1C: add eax, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F1E1F: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F1E35; /* 0x120F1E23: je 0x120f1e35 */
L_120F1E25:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F1E25: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F1E35; /* 0x120F1E29: jne 0x120f1e35 */
L_120F1E2B:
    ecx = 0x8876086Cu; /* 0x120F1E2B: mov ecx, 0x8876086c */
    goto L_120F1FF9; /* 0x120F1E30: jmp 0x120f1ff9 */
L_120F1E35:
    edx = MEM32(eax + 0x4); /* 0x120F1E35: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F1E38: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F1E39: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x120F1E3A: push ebx */
    PUSH32(esp, edi); /* 0x120F1E3B: push edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1F2B; /* 0x120F1E3C: je 0x120f1f2b */
L_120F1E42:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F1E42: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F1E4F; /* 0x120F1E43: je 0x120f1e4f */
L_120F1E45:
    ecx = 0x8876086Cu; /* 0x120F1E45: mov ecx, 0x8876086c */
    goto L_120F1FF7; /* 0x120F1E4A: jmp 0x120f1ff7 */
L_120F1E4F:
    esi = MEM32(ecx + 0x1C); /* 0x120F1E4F: mov esi, dword ptr [ecx + 0x1c] */
    ebx = MEM32(eax + 0x14); /* 0x120F1E52: mov ebx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F1E55: mov edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F1E58: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F1E5A: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120F1E5D: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x10)) = edx; /* 0x120F1E60: mov dword ptr [ebp - 0x10], edx */
    /* cmp ebx, 4 */ /* 0x120F1E63: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F1E70; /* 0x120F1E66: jbe 0x120f1e70 */
L_120F1E68:
    PUSH32(esp, 4); /* 0x120F1E68: push 4 */
    eax = POP32_VAL(esp); /* 0x120F1E6A: pop eax */
    MEM32(ebp + 0x8) = eax; /* 0x120F1E6B: mov dword ptr [ebp + 8], eax */
    goto L_120F1E75; /* 0x120F1E6E: jmp 0x120f1e75 */
L_120F1E70:
    eax = ebx; /* 0x120F1E70: mov eax, ebx */
    MEM32(ebp + 0x8) = ebx; /* 0x120F1E72: mov dword ptr [ebp + 8], ebx */
L_120F1E75:
    MEM32(ebp + (-0x8)) = 4; /* 0x120F1E75: mov dword ptr [ebp - 8], 4 */
    /* cmp edx, 4 */ /* 0x120F1E7C: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F1E84; /* 0x120F1E7F: ja 0x120f1e84 */
L_120F1E81:
    MEM32(ebp + (-0x8)) = edx; /* 0x120F1E81: mov dword ptr [ebp - 8], edx */
L_120F1E84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F1E84: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F1E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1EF5; /* 0x120F1E88: je 0x120f1ef5 */
L_120F1E8A:
    ebx = MEM32(ebp + 0x10); /* 0x120F1E8A: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x120F1E8D: mov dword ptr [ebp - 0xc], ebx */
L_120F1E90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F1E90: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F1E92: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F1ECB; /* 0x120F1E95: jbe 0x120f1ecb */
L_120F1E97:
    eax = MEM32(ebp + 0xC); /* 0x120F1E97: mov eax, dword ptr [ebp + 0xc] */
L_120F1E9A:
    fp_push(*(float*)&MEM32(ebx)); /* 0x120F1E9A: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x120F1E9C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F1E9D: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120F1EA0: push eax */
    RECOMP_CALL(sub_120F0109); /* 0x120F1EA1: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1EA6: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1EA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F1FF7; /* 0x120F1EAA: js 0x120f1ff7 */
L_120F1EB0:
    eax = MEM32(ebp + 0xC); /* 0x120F1EB0: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F1EB3: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1EB6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120F1EB7: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F1EBA: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F1EBD: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1E9A; /* 0x120F1EC0: jb 0x120f1e9a */
L_120F1EC2:
    edx = MEM32(ebp + (-0x10)); /* 0x120F1EC2: mov edx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0xC)); /* 0x120F1EC5: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120F1EC8: mov eax, dword ptr [ebp + 8] */
L_120F1ECB:
    /* cmp esi, edx */ /* 0x120F1ECB: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1EE4; /* 0x120F1ECD: jae 0x120f1ee4 */
L_120F1ECF:
    eax = edx; /* 0x120F1ECF: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F1ED1: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F1ED3: mov esi, dword ptr [ebp + 0xc] */
L_120F1ED6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1ED6: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F1ED7: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1ED6; /* 0x120F1EDA: jne 0x120f1ed6 */
L_120F1EDC:
    eax = MEM32(ebp + 0x8); /* 0x120F1EDC: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F1EDF: mov dword ptr [ebp + 0xc], esi */
    goto L_120F1EE7; /* 0x120F1EE2: jmp 0x120f1ee7 */
L_120F1EE4:
    esi = MEM32(ebp + 0xC); /* 0x120F1EE4: mov esi, dword ptr [ebp + 0xc] */
L_120F1EE7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1EE7: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120F1EE8: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120F1EEB: mov dword ptr [ebp - 0xc], ebx */
    /* cmp edi, eax */ /* 0x120F1EEE: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1E90; /* 0x120F1EF0: jb 0x120f1e90 */
L_120F1EF2:
    ebx = MEM32(ebp + (-0x14)); /* 0x120F1EF2: mov ebx, dword ptr [ebp - 0x14] */
L_120F1EF5:
    /* cmp edi, ebx */ /* 0x120F1EF5: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1F13; /* 0x120F1EF7: jae 0x120f1f13 */
L_120F1EF9:
    eax = ebx; /* 0x120F1EF9: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F1EFB: sub eax, edi */
    _flag_k = FK_CMP;
L_120F1EFD:
    /* test edx, edx */ /* 0x120F1EFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1F0D; /* 0x120F1EFF: je 0x120f1f0d */
L_120F1F01:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F1F01: dec edx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F1F02: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1F01; /* 0x120F1F05: jne 0x120f1f01 */
L_120F1F07:
    edx = MEM32(ebp + (-0x10)); /* 0x120F1F07: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = esi; /* 0x120F1F0A: mov dword ptr [ebp + 0xc], esi */
L_120F1F0D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1F0D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1EFD; /* 0x120F1F0E: jne 0x120f1efd */
L_120F1F10:
    eax = MEM32(ebp + 0x8); /* 0x120F1F10: mov eax, dword ptr [ebp + 8] */
L_120F1F13:
    edi = MEM32(ebp + (-0x4)); /* 0x120F1F13: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F1F16: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F1F1A: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edi; /* 0x120F1F1B: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x120F1F1E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1E84; /* 0x120F1F20: jne 0x120f1e84 */
L_120F1F26:
    goto L_120F1FF7; /* 0x120F1F26: jmp 0x120f1ff7 */
L_120F1F2B:
    ebx = MEM32(eax + 0x14); /* 0x120F1F2B: mov ebx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F1F2E: mov edx, dword ptr [eax + 0x18] */
    esi = MEM32(ecx + 0x1C); /* 0x120F1F31: mov esi, dword ptr [ecx + 0x1c] */
    PUSH32(esp, 4); /* 0x120F1F34: push 4 */
    eax = POP32_VAL(esp); /* 0x120F1F36: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F1F37: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F1F39: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120F1F3C: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x120F1F3F: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + 0x8) = eax; /* 0x120F1F42: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, eax */ /* 0x120F1F45: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F1F4C; /* 0x120F1F47: ja 0x120f1f4c */
L_120F1F49:
    MEM32(ebp + 0x8) = ebx; /* 0x120F1F49: mov dword ptr [ebp + 8], ebx */
L_120F1F4C:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F1F4C: mov dword ptr [ebp - 8], eax */
    /* cmp edx, eax */ /* 0x120F1F4F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F1F56; /* 0x120F1F51: ja 0x120f1f56 */
L_120F1F53:
    MEM32(ebp + (-0x8)) = edx; /* 0x120F1F53: mov dword ptr [ebp - 8], edx */
L_120F1F56:
    eax = MEM32(ebp + 0x8); /* 0x120F1F56: mov eax, dword ptr [ebp + 8] */
L_120F1F59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F1F59: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F1F5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1FC6; /* 0x120F1F5D: je 0x120f1fc6 */
L_120F1F5F:
    ebx = MEM32(ebp + 0x10); /* 0x120F1F5F: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x120F1F62: mov dword ptr [ebp - 0x10], ebx */
L_120F1F65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F1F65: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F1F67: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F1F9C; /* 0x120F1F6A: jbe 0x120f1f9c */
L_120F1F6C:
    eax = MEM32(ebp + 0xC); /* 0x120F1F6C: mov eax, dword ptr [ebp + 0xc] */
L_120F1F6F:
    fp_push(*(float*)&MEM32(ebx)); /* 0x120F1F6F: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x120F1F71: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F1F72: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120F1F75: push eax */
    RECOMP_CALL(sub_120F0109); /* 0x120F1F76: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F1F7B: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F1F7D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F1FF7; /* 0x120F1F7F: js 0x120f1ff7 */
L_120F1F81:
    eax = MEM32(ebp + 0xC); /* 0x120F1F81: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F1F84: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F1F87: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120F1F88: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F1F8B: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F1F8E: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1F6F; /* 0x120F1F91: jb 0x120f1f6f */
L_120F1F93:
    edx = MEM32(ebp + (-0xC)); /* 0x120F1F93: mov edx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0x10)); /* 0x120F1F96: mov ebx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120F1F99: mov eax, dword ptr [ebp + 8] */
L_120F1F9C:
    /* cmp esi, edx */ /* 0x120F1F9C: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1FB5; /* 0x120F1F9E: jae 0x120f1fb5 */
L_120F1FA0:
    eax = edx; /* 0x120F1FA0: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F1FA2: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F1FA4: mov esi, dword ptr [ebp + 0xc] */
L_120F1FA7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1FA7: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F1FA8: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1FA7; /* 0x120F1FAB: jne 0x120f1fa7 */
L_120F1FAD:
    eax = MEM32(ebp + 0x8); /* 0x120F1FAD: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F1FB0: mov dword ptr [ebp + 0xc], esi */
    goto L_120F1FB8; /* 0x120F1FB3: jmp 0x120f1fb8 */
L_120F1FB5:
    esi = MEM32(ebp + 0xC); /* 0x120F1FB5: mov esi, dword ptr [ebp + 0xc] */
L_120F1FB8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F1FB8: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120F1FB9: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120F1FBC: mov dword ptr [ebp - 0x10], ebx */
    /* cmp edi, eax */ /* 0x120F1FBF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F1F65; /* 0x120F1FC1: jb 0x120f1f65 */
L_120F1FC3:
    ebx = MEM32(ebp + (-0x14)); /* 0x120F1FC3: mov ebx, dword ptr [ebp - 0x14] */
L_120F1FC6:
    /* cmp edi, ebx */ /* 0x120F1FC6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F1FE4; /* 0x120F1FC8: jae 0x120f1fe4 */
L_120F1FCA:
    eax = ebx; /* 0x120F1FCA: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F1FCC: sub eax, edi */
    _flag_k = FK_CMP;
L_120F1FCE:
    /* test edx, edx */ /* 0x120F1FCE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F1FDE; /* 0x120F1FD0: je 0x120f1fde */
L_120F1FD2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F1FD2: dec edx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F1FD3: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1FD2; /* 0x120F1FD6: jne 0x120f1fd2 */
L_120F1FD8:
    edx = MEM32(ebp + (-0xC)); /* 0x120F1FD8: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + 0xC) = esi; /* 0x120F1FDB: mov dword ptr [ebp + 0xc], esi */
L_120F1FDE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F1FDE: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F1FCE; /* 0x120F1FDF: jne 0x120f1fce */
L_120F1FE1:
    eax = MEM32(ebp + 0x8); /* 0x120F1FE1: mov eax, dword ptr [ebp + 8] */
L_120F1FE4:
    edi = MEM32(ebp + (-0x4)); /* 0x120F1FE4: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F1FE7: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F1FEB: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edi; /* 0x120F1FEC: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x120F1FEF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F1F59; /* 0x120F1FF1: jne 0x120f1f59 */
L_120F1FF7:
    edi = POP32_VAL(esp); /* 0x120F1FF7: pop edi */
    ebx = POP32_VAL(esp); /* 0x120F1FF8: pop ebx */
L_120F1FF9:
    esi = POP32_VAL(esp); /* 0x120F1FF9: pop esi */
L_120F1FFA:
    eax = ecx; /* 0x120F1FFA: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F1FFC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F1FFD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2005(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2005u);

L_120F2005:
    edi = edi; /* 0x120F2005: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2007: push ebp */
    ebp = esp; /* 0x120F2008: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120F200A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F200D: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F2011: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F201E; /* 0x120F2012: jne 0x120f201e */
L_120F2014:
    ebx = 0x8876086Cu; /* 0x120F2014: mov ebx, 0x8876086c */
    goto L_120F223A; /* 0x120F2019: jmp 0x120f223a */
L_120F201E:
    PUSH32(esp, esi); /* 0x120F201E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F201F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2022: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F2024: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F2025: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2026: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F2029: lea ecx, [esi - 0x6c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F202C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_120F1983); /* 0x120F202F: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2034: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2036: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2052; /* 0x120F2038: je 0x120f2052 */
L_120F203A:
    eax = MEM32(ecx + 0x4); /* 0x120F203A: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F203D: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2040: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + (-0x30)); /* 0x120F2043: add eax, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F2046: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F205C; /* 0x120F204A: je 0x120f205c */
L_120F204C:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F204C: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F205C; /* 0x120F2050: jne 0x120f205c */
L_120F2052:
    ebx = 0x8876086Cu; /* 0x120F2052: mov ebx, 0x8876086c */
    goto L_120F2239; /* 0x120F2057: jmp 0x120f2239 */
L_120F205C:
    edx = MEM32(eax + 0x4); /* 0x120F205C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F205F: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F2060: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x120F2061: push edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F215B; /* 0x120F2062: je 0x120f215b */
L_120F2068:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F2068: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2075; /* 0x120F2069: je 0x120f2075 */
L_120F206B:
    ebx = 0x8876086Cu; /* 0x120F206B: mov ebx, 0x8876086c */
    goto L_120F2238; /* 0x120F2070: jmp 0x120f2238 */
L_120F2075:
    esi = MEM32(ecx + 0x1C); /* 0x120F2075: mov esi, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x14); /* 0x120F2078: mov ecx, dword ptr [eax + 0x14] */
    edi = MEM32(eax + 0x18); /* 0x120F207B: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F207E: push 4 */
    eax = POP32_VAL(esp); /* 0x120F2080: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F2081: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F2083: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120F2086: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x120F2089: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F208C: mov dword ptr [ebp + 8], eax */
    /* cmp ecx, eax */ /* 0x120F208F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2096; /* 0x120F2091: ja 0x120f2096 */
L_120F2093:
    MEM32(ebp + 0x8) = ecx; /* 0x120F2093: mov dword ptr [ebp + 8], ecx */
L_120F2096:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F2096: mov dword ptr [ebp - 8], eax */
    /* cmp edi, eax */ /* 0x120F2099: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F20A0; /* 0x120F209B: ja 0x120f20a0 */
L_120F209D:
    MEM32(ebp + (-0x8)) = edi; /* 0x120F209D: mov dword ptr [ebp - 8], edi */
L_120F20A0:
    PUSH32(esp, 0x40u); /* 0x120F20A0: push 0x40 */
    PUSH32(esp, 0); /* 0x120F20A2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F20A4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F20A7: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F20AC: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F20AF:
    eax = MEM32(ebp + 0x8); /* 0x120F20AF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F20B2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F20B4: mov dword ptr [ebp - 0xc], edx */
    /* test eax, eax */ /* 0x120F20B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2126; /* 0x120F20B9: je 0x120f2126 */
L_120F20BB:
    ecx = MEM32(ebp + 0x10); /* 0x120F20BB: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F20BE: mov dword ptr [ebp - 0x10], ecx */
L_120F20C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F20C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F20C3: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F20FC; /* 0x120F20C6: jbe 0x120f20fc */
L_120F20C8:
    eax = MEM32(ebp + 0xC); /* 0x120F20C8: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F20CB: mov edi, ecx */
L_120F20CD:
    PUSH32(esp, edi); /* 0x120F20CD: push edi */
    PUSH32(esp, eax); /* 0x120F20CE: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F20CF: call 0x120f017d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120F20D4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120F20D6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F2238; /* 0x120F20D8: js 0x120f2238 */
L_120F20DE:
    eax = MEM32(ebp + 0xC); /* 0x120F20DE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F20E1: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F20E4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120F20E5: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F20E8: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F20EB: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F20CD; /* 0x120F20EE: jb 0x120f20cd */
L_120F20F0:
    edx = MEM32(ebp + (-0xC)); /* 0x120F20F0: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120F20F3: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x120F20F6: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120F20F9: mov eax, dword ptr [ebp + 8] */
L_120F20FC:
    /* cmp esi, edi */ /* 0x120F20FC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2115; /* 0x120F20FE: jae 0x120f2115 */
L_120F2100:
    eax = edi; /* 0x120F2100: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2102: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F2104: mov esi, dword ptr [ebp + 0xc] */
L_120F2107:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2107: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2108: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2107; /* 0x120F210B: jne 0x120f2107 */
L_120F210D:
    eax = MEM32(ebp + 0x8); /* 0x120F210D: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F2110: mov dword ptr [ebp + 0xc], esi */
    goto L_120F2118; /* 0x120F2113: jmp 0x120f2118 */
L_120F2115:
    esi = MEM32(ebp + 0xC); /* 0x120F2115: mov esi, dword ptr [ebp + 0xc] */
L_120F2118:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F2118: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120F2119: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F211C: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F211F: mov dword ptr [ebp - 0x10], ecx */
    /* cmp edx, eax */ /* 0x120F2122: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F20C1; /* 0x120F2124: jb 0x120f20c1 */
L_120F2126:
    eax = MEM32(ebp + (-0x18)); /* 0x120F2126: mov eax, dword ptr [ebp - 0x18] */
    /* cmp edx, eax */ /* 0x120F2129: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2143; /* 0x120F212B: jae 0x120f2143 */
L_120F212D:
    ecx = eax; /* 0x120F212D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F212F: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F2131:
    /* test edi, edi */ /* 0x120F2131: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2140; /* 0x120F2133: je 0x120f2140 */
L_120F2135:
    eax = edi; /* 0x120F2135: mov eax, edi */
L_120F2137:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2137: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2138: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2137; /* 0x120F213B: jne 0x120f2137 */
L_120F213D:
    MEM32(ebp + 0xC) = esi; /* 0x120F213D: mov dword ptr [ebp + 0xc], esi */
L_120F2140:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F2140: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2131; /* 0x120F2141: jne 0x120f2131 */
L_120F2143:
    eax = MEM32(ebp + (-0x4)); /* 0x120F2143: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F2146: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F214A: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F214B: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F214E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F20AF; /* 0x120F2150: jne 0x120f20af */
L_120F2156:
    goto L_120F2238; /* 0x120F2156: jmp 0x120f2238 */
L_120F215B:
    esi = MEM32(ecx + 0x1C); /* 0x120F215B: mov esi, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x14); /* 0x120F215E: mov ecx, dword ptr [eax + 0x14] */
    edi = MEM32(eax + 0x18); /* 0x120F2161: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F2164: push 4 */
    eax = POP32_VAL(esp); /* 0x120F2166: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F2167: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F2169: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120F216C: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x120F216F: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F2172: mov dword ptr [ebp + 8], eax */
    /* cmp ecx, eax */ /* 0x120F2175: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F217C; /* 0x120F2177: ja 0x120f217c */
L_120F2179:
    MEM32(ebp + 0x8) = ecx; /* 0x120F2179: mov dword ptr [ebp + 8], ecx */
L_120F217C:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F217C: mov dword ptr [ebp - 8], eax */
    /* cmp edi, eax */ /* 0x120F217F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2186; /* 0x120F2181: ja 0x120f2186 */
L_120F2183:
    MEM32(ebp + (-0x8)) = edi; /* 0x120F2183: mov dword ptr [ebp - 8], edi */
L_120F2186:
    PUSH32(esp, 0x40u); /* 0x120F2186: push 0x40 */
    PUSH32(esp, 0); /* 0x120F2188: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F218A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F218D: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F2192: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F2195:
    eax = MEM32(ebp + 0x8); /* 0x120F2195: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F2198: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x120F219A: mov dword ptr [ebp - 0x10], edx */
    /* test eax, eax */ /* 0x120F219D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2208; /* 0x120F219F: je 0x120f2208 */
L_120F21A1:
    ecx = MEM32(ebp + 0x10); /* 0x120F21A1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F21A4: mov dword ptr [ebp - 0xc], ecx */
L_120F21A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F21A7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F21A9: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F21DE; /* 0x120F21AC: jbe 0x120f21de */
L_120F21AE:
    eax = MEM32(ebp + 0xC); /* 0x120F21AE: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F21B1: mov edi, ecx */
L_120F21B3:
    PUSH32(esp, edi); /* 0x120F21B3: push edi */
    PUSH32(esp, eax); /* 0x120F21B4: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F21B5: call 0x120f017d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120F21BA: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120F21BC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F2238; /* 0x120F21BE: js 0x120f2238 */
L_120F21C0:
    eax = MEM32(ebp + 0xC); /* 0x120F21C0: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F21C3: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F21C6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120F21C7: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F21CA: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F21CD: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F21B3; /* 0x120F21D0: jb 0x120f21b3 */
L_120F21D2:
    edx = MEM32(ebp + (-0x10)); /* 0x120F21D2: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120F21D5: mov ecx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x18)); /* 0x120F21D8: mov edi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120F21DB: mov eax, dword ptr [ebp + 8] */
L_120F21DE:
    /* cmp esi, edi */ /* 0x120F21DE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F21F7; /* 0x120F21E0: jae 0x120f21f7 */
L_120F21E2:
    eax = edi; /* 0x120F21E2: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F21E4: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F21E6: mov esi, dword ptr [ebp + 0xc] */
L_120F21E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F21E9: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F21EA: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F21E9; /* 0x120F21ED: jne 0x120f21e9 */
L_120F21EF:
    eax = MEM32(ebp + 0x8); /* 0x120F21EF: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F21F2: mov dword ptr [ebp + 0xc], esi */
    goto L_120F21FA; /* 0x120F21F5: jmp 0x120f21fa */
L_120F21F7:
    esi = MEM32(ebp + 0xC); /* 0x120F21F7: mov esi, dword ptr [ebp + 0xc] */
L_120F21FA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F21FA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120F21FB: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x120F21FE: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F2201: mov dword ptr [ebp - 0xc], ecx */
    /* cmp edx, eax */ /* 0x120F2204: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F21A7; /* 0x120F2206: jb 0x120f21a7 */
L_120F2208:
    eax = MEM32(ebp + (-0x14)); /* 0x120F2208: mov eax, dword ptr [ebp - 0x14] */
    /* cmp edx, eax */ /* 0x120F220B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2225; /* 0x120F220D: jae 0x120f2225 */
L_120F220F:
    ecx = eax; /* 0x120F220F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F2211: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F2213:
    /* test edi, edi */ /* 0x120F2213: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2222; /* 0x120F2215: je 0x120f2222 */
L_120F2217:
    eax = edi; /* 0x120F2217: mov eax, edi */
L_120F2219:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2219: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F221A: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2219; /* 0x120F221D: jne 0x120f2219 */
L_120F221F:
    MEM32(ebp + 0xC) = esi; /* 0x120F221F: mov dword ptr [ebp + 0xc], esi */
L_120F2222:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F2222: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2213; /* 0x120F2223: jne 0x120f2213 */
L_120F2225:
    eax = MEM32(ebp + (-0x4)); /* 0x120F2225: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F2228: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F222C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F222D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F2230: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2195; /* 0x120F2232: jne 0x120f2195 */
L_120F2238:
    edi = POP32_VAL(esp); /* 0x120F2238: pop edi */
L_120F2239:
    esi = POP32_VAL(esp); /* 0x120F2239: pop esi */
L_120F223A:
    eax = ebx; /* 0x120F223A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x120F223C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F223D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F223E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2246(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2246u);

L_120F2246:
    edi = edi; /* 0x120F2246: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2248: push ebp */
    ebp = esp; /* 0x120F2249: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120F224B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F224E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F225E; /* 0x120F2252: jne 0x120f225e */
L_120F2254:
    ecx = 0x8876086Cu; /* 0x120F2254: mov ecx, 0x8876086c */
    goto L_120F2461; /* 0x120F2259: jmp 0x120f2461 */
L_120F225E:
    PUSH32(esp, esi); /* 0x120F225E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F225F: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2262: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F2264: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F2265: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2266: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F2269: lea ecx, [esi - 0x6c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F226C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_120F1983); /* 0x120F226F: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2274: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2276: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2292; /* 0x120F2278: je 0x120f2292 */
L_120F227A:
    eax = MEM32(ecx + 0x4); /* 0x120F227A: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F227D: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2280: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + (-0x30)); /* 0x120F2283: add eax, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F2286: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F229C; /* 0x120F228A: je 0x120f229c */
L_120F228C:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F228C: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F229C; /* 0x120F2290: jne 0x120f229c */
L_120F2292:
    ecx = 0x8876086Cu; /* 0x120F2292: mov ecx, 0x8876086c */
    goto L_120F2460; /* 0x120F2297: jmp 0x120f2460 */
L_120F229C:
    edx = MEM32(eax + 0x4); /* 0x120F229C: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F229F: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F22A0: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x120F22A1: push ebx */
    PUSH32(esp, edi); /* 0x120F22A2: push edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F238B; /* 0x120F22A3: je 0x120f238b */
L_120F22A9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F22A9: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F22B6; /* 0x120F22AA: je 0x120f22b6 */
L_120F22AC:
    ecx = 0x8876086Cu; /* 0x120F22AC: mov ecx, 0x8876086c */
    goto L_120F245E; /* 0x120F22B1: jmp 0x120f245e */
L_120F22B6:
    ebx = MEM32(eax + 0x14); /* 0x120F22B6: mov ebx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F22B9: mov edx, dword ptr [eax + 0x18] */
    esi = MEM32(ecx + 0x1C); /* 0x120F22BC: mov esi, dword ptr [ecx + 0x1c] */
    PUSH32(esp, 4); /* 0x120F22BF: push 4 */
    eax = POP32_VAL(esp); /* 0x120F22C1: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F22C2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F22C4: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120F22C7: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x10)) = edx; /* 0x120F22CA: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + 0x8) = eax; /* 0x120F22CD: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, eax */ /* 0x120F22D0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F22D7; /* 0x120F22D2: ja 0x120f22d7 */
L_120F22D4:
    MEM32(ebp + 0x8) = ebx; /* 0x120F22D4: mov dword ptr [ebp + 8], ebx */
L_120F22D7:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F22D7: mov dword ptr [ebp - 8], eax */
    /* cmp edx, eax */ /* 0x120F22DA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F22E1; /* 0x120F22DC: ja 0x120f22e1 */
L_120F22DE:
    MEM32(ebp + (-0x8)) = edx; /* 0x120F22DE: mov dword ptr [ebp - 8], edx */
L_120F22E1:
    eax = MEM32(ebp + 0x8); /* 0x120F22E1: mov eax, dword ptr [ebp + 8] */
L_120F22E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F22E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F22E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2355; /* 0x120F22E8: je 0x120f2355 */
L_120F22EA:
    ebx = MEM32(ebp + 0x10); /* 0x120F22EA: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x120F22ED: mov dword ptr [ebp - 0xc], ebx */
L_120F22F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F22F0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F22F2: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F232B; /* 0x120F22F5: jbe 0x120f232b */
L_120F22F7:
    eax = MEM32(ebp + 0xC); /* 0x120F22F7: mov eax, dword ptr [ebp + 0xc] */
L_120F22FA:
    fp_push(*(float*)&MEM32(ebx)); /* 0x120F22FA: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x120F22FC: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F22FD: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120F2300: push eax */
    RECOMP_CALL(sub_120F0109); /* 0x120F2301: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2306: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2308: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F245E; /* 0x120F230A: js 0x120f245e */
L_120F2310:
    eax = MEM32(ebp + 0xC); /* 0x120F2310: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F2313: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F2316: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120F2317: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F231A: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F231D: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F22FA; /* 0x120F2320: jb 0x120f22fa */
L_120F2322:
    edx = MEM32(ebp + (-0x10)); /* 0x120F2322: mov edx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0xC)); /* 0x120F2325: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x120F2328: mov eax, dword ptr [ebp + 8] */
L_120F232B:
    /* cmp esi, edx */ /* 0x120F232B: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2344; /* 0x120F232D: jae 0x120f2344 */
L_120F232F:
    eax = edx; /* 0x120F232F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2331: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F2333: mov esi, dword ptr [ebp + 0xc] */
L_120F2336:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2336: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2337: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2336; /* 0x120F233A: jne 0x120f2336 */
L_120F233C:
    eax = MEM32(ebp + 0x8); /* 0x120F233C: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F233F: mov dword ptr [ebp + 0xc], esi */
    goto L_120F2347; /* 0x120F2342: jmp 0x120f2347 */
L_120F2344:
    esi = MEM32(ebp + 0xC); /* 0x120F2344: mov esi, dword ptr [ebp + 0xc] */
L_120F2347:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F2347: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120F2348: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120F234B: mov dword ptr [ebp - 0xc], ebx */
    /* cmp edi, eax */ /* 0x120F234E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F22F0; /* 0x120F2350: jb 0x120f22f0 */
L_120F2352:
    ebx = MEM32(ebp + (-0x14)); /* 0x120F2352: mov ebx, dword ptr [ebp - 0x14] */
L_120F2355:
    /* cmp edi, ebx */ /* 0x120F2355: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2373; /* 0x120F2357: jae 0x120f2373 */
L_120F2359:
    eax = ebx; /* 0x120F2359: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F235B: sub eax, edi */
    _flag_k = FK_CMP;
L_120F235D:
    /* test edx, edx */ /* 0x120F235D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F236D; /* 0x120F235F: je 0x120f236d */
L_120F2361:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F2361: dec edx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2362: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2361; /* 0x120F2365: jne 0x120f2361 */
L_120F2367:
    edx = MEM32(ebp + (-0x10)); /* 0x120F2367: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0xC) = esi; /* 0x120F236A: mov dword ptr [ebp + 0xc], esi */
L_120F236D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F236D: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F235D; /* 0x120F236E: jne 0x120f235d */
L_120F2370:
    eax = MEM32(ebp + 0x8); /* 0x120F2370: mov eax, dword ptr [ebp + 8] */
L_120F2373:
    edi = MEM32(ebp + (-0x4)); /* 0x120F2373: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F2376: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F237A: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edi; /* 0x120F237B: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x120F237E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F22E4; /* 0x120F2380: jne 0x120f22e4 */
L_120F2386:
    goto L_120F245E; /* 0x120F2386: jmp 0x120f245e */
L_120F238B:
    esi = MEM32(ecx + 0x1C); /* 0x120F238B: mov esi, dword ptr [ecx + 0x1c] */
    ebx = MEM32(eax + 0x14); /* 0x120F238E: mov ebx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x120F2391: mov edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F2394: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F2396: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120F2399: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x120F239C: mov dword ptr [ebp - 0xc], edx */
    /* cmp ebx, 4 */ /* 0x120F239F: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F23AC; /* 0x120F23A2: jbe 0x120f23ac */
L_120F23A4:
    PUSH32(esp, 4); /* 0x120F23A4: push 4 */
    eax = POP32_VAL(esp); /* 0x120F23A6: pop eax */
    MEM32(ebp + 0x8) = eax; /* 0x120F23A7: mov dword ptr [ebp + 8], eax */
    goto L_120F23B1; /* 0x120F23AA: jmp 0x120f23b1 */
L_120F23AC:
    eax = ebx; /* 0x120F23AC: mov eax, ebx */
    MEM32(ebp + 0x8) = ebx; /* 0x120F23AE: mov dword ptr [ebp + 8], ebx */
L_120F23B1:
    MEM32(ebp + (-0x8)) = 4; /* 0x120F23B1: mov dword ptr [ebp - 8], 4 */
    /* cmp edx, 4 */ /* 0x120F23B8: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F23C0; /* 0x120F23BB: ja 0x120f23c0 */
L_120F23BD:
    MEM32(ebp + (-0x8)) = edx; /* 0x120F23BD: mov dword ptr [ebp - 8], edx */
L_120F23C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F23C0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120F23C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F242D; /* 0x120F23C4: je 0x120f242d */
L_120F23C6:
    ebx = MEM32(ebp + 0x10); /* 0x120F23C6: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x120F23C9: mov dword ptr [ebp - 0x10], ebx */
L_120F23CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F23CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F23CE: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F2403; /* 0x120F23D1: jbe 0x120f2403 */
L_120F23D3:
    eax = MEM32(ebp + 0xC); /* 0x120F23D3: mov eax, dword ptr [ebp + 0xc] */
L_120F23D6:
    fp_push(*(float*)&MEM32(ebx)); /* 0x120F23D6: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x120F23D8: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F23D9: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120F23DC: push eax */
    RECOMP_CALL(sub_120F0109); /* 0x120F23DD: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F23E2: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F23E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F245E; /* 0x120F23E6: js 0x120f245e */
L_120F23E8:
    eax = MEM32(ebp + 0xC); /* 0x120F23E8: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F23EB: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F23EE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x120F23EF: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F23F2: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F23F5: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F23D6; /* 0x120F23F8: jb 0x120f23d6 */
L_120F23FA:
    edx = MEM32(ebp + (-0xC)); /* 0x120F23FA: mov edx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0x10)); /* 0x120F23FD: mov ebx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120F2400: mov eax, dword ptr [ebp + 8] */
L_120F2403:
    /* cmp esi, edx */ /* 0x120F2403: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F241C; /* 0x120F2405: jae 0x120f241c */
L_120F2407:
    eax = edx; /* 0x120F2407: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2409: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F240B: mov esi, dword ptr [ebp + 0xc] */
L_120F240E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F240E: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F240F: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F240E; /* 0x120F2412: jne 0x120f240e */
L_120F2414:
    eax = MEM32(ebp + 0x8); /* 0x120F2414: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F2417: mov dword ptr [ebp + 0xc], esi */
    goto L_120F241F; /* 0x120F241A: jmp 0x120f241f */
L_120F241C:
    esi = MEM32(ebp + 0xC); /* 0x120F241C: mov esi, dword ptr [ebp + 0xc] */
L_120F241F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F241F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120F2420: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120F2423: mov dword ptr [ebp - 0x10], ebx */
    /* cmp edi, eax */ /* 0x120F2426: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F23CC; /* 0x120F2428: jb 0x120f23cc */
L_120F242A:
    ebx = MEM32(ebp + (-0x14)); /* 0x120F242A: mov ebx, dword ptr [ebp - 0x14] */
L_120F242D:
    /* cmp edi, ebx */ /* 0x120F242D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F244B; /* 0x120F242F: jae 0x120f244b */
L_120F2431:
    eax = ebx; /* 0x120F2431: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F2433: sub eax, edi */
    _flag_k = FK_CMP;
L_120F2435:
    /* test edx, edx */ /* 0x120F2435: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2445; /* 0x120F2437: je 0x120f2445 */
L_120F2439:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F2439: dec edx */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F243A: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2439; /* 0x120F243D: jne 0x120f2439 */
L_120F243F:
    edx = MEM32(ebp + (-0xC)); /* 0x120F243F: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + 0xC) = esi; /* 0x120F2442: mov dword ptr [ebp + 0xc], esi */
L_120F2445:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2445: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2435; /* 0x120F2446: jne 0x120f2435 */
L_120F2448:
    eax = MEM32(ebp + 0x8); /* 0x120F2448: mov eax, dword ptr [ebp + 8] */
L_120F244B:
    edi = MEM32(ebp + (-0x4)); /* 0x120F244B: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F244E: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120F2452: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edi; /* 0x120F2453: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x120F2456: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F23C0; /* 0x120F2458: jne 0x120f23c0 */
L_120F245E:
    edi = POP32_VAL(esp); /* 0x120F245E: pop edi */
    ebx = POP32_VAL(esp); /* 0x120F245F: pop ebx */
L_120F2460:
    esi = POP32_VAL(esp); /* 0x120F2460: pop esi */
L_120F2461:
    eax = ecx; /* 0x120F2461: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F2463: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2464: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F246C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F246Cu);

L_120F246C:
    edi = edi; /* 0x120F246C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F246E: push ebp */
    ebp = esp; /* 0x120F246F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120F2471: sub esp, 0x18 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F2474: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120F2478: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2485; /* 0x120F2479: jne 0x120f2485 */
L_120F247B:
    ebx = 0x8876086Cu; /* 0x120F247B: mov ebx, 0x8876086c */
    goto L_120F26A1; /* 0x120F2480: jmp 0x120f26a1 */
L_120F2485:
    PUSH32(esp, esi); /* 0x120F2485: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F2486: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2489: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120F248B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x120F248C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F248D: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F2490: lea ecx, [esi - 0x6c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F2493: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_120F1983); /* 0x120F2496: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F249B: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F249D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F24B9; /* 0x120F249F: je 0x120f24b9 */
L_120F24A1:
    eax = MEM32(ecx + 0x4); /* 0x120F24A1: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F24A4: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F24A7: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + (-0x30)); /* 0x120F24AA: add eax, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F24AD: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F24C3; /* 0x120F24B1: je 0x120f24c3 */
L_120F24B3:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F24B3: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F24C3; /* 0x120F24B7: jne 0x120f24c3 */
L_120F24B9:
    ebx = 0x8876086Cu; /* 0x120F24B9: mov ebx, 0x8876086c */
    goto L_120F26A0; /* 0x120F24BE: jmp 0x120f26a0 */
L_120F24C3:
    edx = MEM32(eax + 0x4); /* 0x120F24C3: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F24C6: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F24C7: dec edx */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x120F24C8: push edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F25C2; /* 0x120F24C9: je 0x120f25c2 */
L_120F24CF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120F24CF: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F24DC; /* 0x120F24D0: je 0x120f24dc */
L_120F24D2:
    ebx = 0x8876086Cu; /* 0x120F24D2: mov ebx, 0x8876086c */
    goto L_120F269F; /* 0x120F24D7: jmp 0x120f269f */
L_120F24DC:
    esi = MEM32(ecx + 0x1C); /* 0x120F24DC: mov esi, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x14); /* 0x120F24DF: mov ecx, dword ptr [eax + 0x14] */
    edi = MEM32(eax + 0x18); /* 0x120F24E2: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F24E5: push 4 */
    eax = POP32_VAL(esp); /* 0x120F24E7: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F24E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F24EA: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120F24ED: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x120F24F0: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F24F3: mov dword ptr [ebp + 8], eax */
    /* cmp ecx, eax */ /* 0x120F24F6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F24FD; /* 0x120F24F8: ja 0x120f24fd */
L_120F24FA:
    MEM32(ebp + 0x8) = ecx; /* 0x120F24FA: mov dword ptr [ebp + 8], ecx */
L_120F24FD:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F24FD: mov dword ptr [ebp - 8], eax */
    /* cmp edi, eax */ /* 0x120F2500: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2507; /* 0x120F2502: ja 0x120f2507 */
L_120F2504:
    MEM32(ebp + (-0x8)) = edi; /* 0x120F2504: mov dword ptr [ebp - 8], edi */
L_120F2507:
    PUSH32(esp, 0x40u); /* 0x120F2507: push 0x40 */
    PUSH32(esp, 0); /* 0x120F2509: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F250B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F250E: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F2513: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F2516:
    eax = MEM32(ebp + 0x8); /* 0x120F2516: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F2519: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F251B: mov dword ptr [ebp - 0xc], edx */
    /* test eax, eax */ /* 0x120F251E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F258D; /* 0x120F2520: je 0x120f258d */
L_120F2522:
    ecx = MEM32(ebp + 0x10); /* 0x120F2522: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F2525: mov dword ptr [ebp - 0x10], ecx */
L_120F2528:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2528: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F252A: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F2563; /* 0x120F252D: jbe 0x120f2563 */
L_120F252F:
    eax = MEM32(ebp + 0xC); /* 0x120F252F: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F2532: mov edi, ecx */
L_120F2534:
    PUSH32(esp, edi); /* 0x120F2534: push edi */
    PUSH32(esp, eax); /* 0x120F2535: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F2536: call 0x120f017d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120F253B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120F253D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F269F; /* 0x120F253F: js 0x120f269f */
L_120F2545:
    eax = MEM32(ebp + 0xC); /* 0x120F2545: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F2548: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F254B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120F254C: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F254F: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F2552: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F2534; /* 0x120F2555: jb 0x120f2534 */
L_120F2557:
    edx = MEM32(ebp + (-0xC)); /* 0x120F2557: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120F255A: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x120F255D: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120F2560: mov eax, dword ptr [ebp + 8] */
L_120F2563:
    /* cmp esi, edi */ /* 0x120F2563: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F257C; /* 0x120F2565: jae 0x120f257c */
L_120F2567:
    eax = edi; /* 0x120F2567: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2569: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F256B: mov esi, dword ptr [ebp + 0xc] */
L_120F256E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F256E: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F256F: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F256E; /* 0x120F2572: jne 0x120f256e */
L_120F2574:
    eax = MEM32(ebp + 0x8); /* 0x120F2574: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F2577: mov dword ptr [ebp + 0xc], esi */
    goto L_120F257F; /* 0x120F257A: jmp 0x120f257f */
L_120F257C:
    esi = MEM32(ebp + 0xC); /* 0x120F257C: mov esi, dword ptr [ebp + 0xc] */
L_120F257F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F257F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x120F2580: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x120F2583: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120F2586: mov dword ptr [ebp - 0x10], ecx */
    /* cmp edx, eax */ /* 0x120F2589: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F2528; /* 0x120F258B: jb 0x120f2528 */
L_120F258D:
    eax = MEM32(ebp + (-0x18)); /* 0x120F258D: mov eax, dword ptr [ebp - 0x18] */
    /* cmp edx, eax */ /* 0x120F2590: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F25AA; /* 0x120F2592: jae 0x120f25aa */
L_120F2594:
    ecx = eax; /* 0x120F2594: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F2596: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F2598:
    /* test edi, edi */ /* 0x120F2598: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F25A7; /* 0x120F259A: je 0x120f25a7 */
L_120F259C:
    eax = edi; /* 0x120F259C: mov eax, edi */
L_120F259E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F259E: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F259F: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F259E; /* 0x120F25A2: jne 0x120f259e */
L_120F25A4:
    MEM32(ebp + 0xC) = esi; /* 0x120F25A4: mov dword ptr [ebp + 0xc], esi */
L_120F25A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F25A7: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2598; /* 0x120F25A8: jne 0x120f2598 */
L_120F25AA:
    eax = MEM32(ebp + (-0x4)); /* 0x120F25AA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F25AD: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F25B1: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F25B2: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F25B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2516; /* 0x120F25B7: jne 0x120f2516 */
L_120F25BD:
    goto L_120F269F; /* 0x120F25BD: jmp 0x120f269f */
L_120F25C2:
    esi = MEM32(ecx + 0x1C); /* 0x120F25C2: mov esi, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x14); /* 0x120F25C5: mov ecx, dword ptr [eax + 0x14] */
    edi = MEM32(eax + 0x18); /* 0x120F25C8: mov edi, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x120F25CB: push 4 */
    eax = POP32_VAL(esp); /* 0x120F25CD: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F25CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x120F25D0: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120F25D3: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x120F25D6: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + 0x8) = eax; /* 0x120F25D9: mov dword ptr [ebp + 8], eax */
    /* cmp ecx, eax */ /* 0x120F25DC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F25E3; /* 0x120F25DE: ja 0x120f25e3 */
L_120F25E0:
    MEM32(ebp + 0x8) = ecx; /* 0x120F25E0: mov dword ptr [ebp + 8], ecx */
L_120F25E3:
    MEM32(ebp + (-0x8)) = eax; /* 0x120F25E3: mov dword ptr [ebp - 8], eax */
    /* cmp edi, eax */ /* 0x120F25E6: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F25ED; /* 0x120F25E8: ja 0x120f25ed */
L_120F25EA:
    MEM32(ebp + (-0x8)) = edi; /* 0x120F25EA: mov dword ptr [ebp - 8], edi */
L_120F25ED:
    PUSH32(esp, 0x40u); /* 0x120F25ED: push 0x40 */
    PUSH32(esp, 0); /* 0x120F25EF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F25F1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121BF434); /* 0x120F25F4: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F25F9: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F25FC:
    eax = MEM32(ebp + 0x8); /* 0x120F25FC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F25FF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x120F2601: mov dword ptr [ebp - 0x10], edx */
    /* test eax, eax */ /* 0x120F2604: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F266F; /* 0x120F2606: je 0x120f266f */
L_120F2608:
    ecx = MEM32(ebp + 0x10); /* 0x120F2608: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F260B: mov dword ptr [ebp - 0xc], ecx */
L_120F260E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F260E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x120F2610: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F2645; /* 0x120F2613: jbe 0x120f2645 */
L_120F2615:
    eax = MEM32(ebp + 0xC); /* 0x120F2615: mov eax, dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x120F2618: mov edi, ecx */
L_120F261A:
    PUSH32(esp, edi); /* 0x120F261A: push edi */
    PUSH32(esp, eax); /* 0x120F261B: push eax */
    RECOMP_CALL(sub_120F017D); /* 0x120F261C: call 0x120f017d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120F2621: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120F2623: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F269F; /* 0x120F2625: js 0x120f269f */
L_120F2627:
    eax = MEM32(ebp + 0xC); /* 0x120F2627: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x120F262A: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F262D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120F262E: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x120F2631: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x120F2634: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F261A; /* 0x120F2637: jb 0x120f261a */
L_120F2639:
    edx = MEM32(ebp + (-0x10)); /* 0x120F2639: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120F263C: mov ecx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x18)); /* 0x120F263F: mov edi, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120F2642: mov eax, dword ptr [ebp + 8] */
L_120F2645:
    /* cmp esi, edi */ /* 0x120F2645: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F265E; /* 0x120F2647: jae 0x120f265e */
L_120F2649:
    eax = edi; /* 0x120F2649: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F264B: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x120F264D: mov esi, dword ptr [ebp + 0xc] */
L_120F2650:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2650: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2651: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2650; /* 0x120F2654: jne 0x120f2650 */
L_120F2656:
    eax = MEM32(ebp + 0x8); /* 0x120F2656: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x120F2659: mov dword ptr [ebp + 0xc], esi */
    goto L_120F2661; /* 0x120F265C: jmp 0x120f2661 */
L_120F265E:
    esi = MEM32(ebp + 0xC); /* 0x120F265E: mov esi, dword ptr [ebp + 0xc] */
L_120F2661:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120F2661: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120F2662: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x120F2665: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120F2668: mov dword ptr [ebp - 0xc], ecx */
    /* cmp edx, eax */ /* 0x120F266B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F260E; /* 0x120F266D: jb 0x120f260e */
L_120F266F:
    eax = MEM32(ebp + (-0x14)); /* 0x120F266F: mov eax, dword ptr [ebp - 0x14] */
    /* cmp edx, eax */ /* 0x120F2672: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F268C; /* 0x120F2674: jae 0x120f268c */
L_120F2676:
    ecx = eax; /* 0x120F2676: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120F2678: sub ecx, edx */
    _flag_k = FK_CMP;
L_120F267A:
    /* test edi, edi */ /* 0x120F267A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2689; /* 0x120F267C: je 0x120f2689 */
L_120F267E:
    eax = edi; /* 0x120F267E: mov eax, edi */
L_120F2680:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2680: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(esi + 0xC); /* 0x120F2681: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2680; /* 0x120F2684: jne 0x120f2680 */
L_120F2686:
    MEM32(ebp + 0xC) = esi; /* 0x120F2686: mov dword ptr [ebp + 0xc], esi */
L_120F2689:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F2689: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F267A; /* 0x120F268A: jne 0x120f267a */
L_120F268C:
    eax = MEM32(ebp + (-0x4)); /* 0x120F268C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x120F268F: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2693: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x120F2694: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x120F2697: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F25FC; /* 0x120F2699: jne 0x120f25fc */
L_120F269F:
    edi = POP32_VAL(esp); /* 0x120F269F: pop edi */
L_120F26A0:
    esi = POP32_VAL(esp); /* 0x120F26A0: pop esi */
L_120F26A1:
    eax = ebx; /* 0x120F26A1: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x120F26A3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F26A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F26A5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F26AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F26ADu);

L_120F26AD:
    edi = edi; /* 0x120F26AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F26AF: push ebp */
    ebp = esp; /* 0x120F26B0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F26B2: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F26B3: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120F26B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F26C7; /* 0x120F26B8: je 0x120f26c7 */
L_120F26BA:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F26BA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F26C7; /* 0x120F26BE: jne 0x120f26c7 */
L_120F26C0:
    eax = 0x8876086Cu; /* 0x120F26C0: mov eax, 0x8876086c */
    goto L_120F2729; /* 0x120F26C5: jmp 0x120f2729 */
L_120F26C7:
    PUSH32(esp, ebx); /* 0x120F26C7: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F26C8: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F26CB: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F26CD: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F26D0: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F26D3: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F26D8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F26DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2723; /* 0x120F26DC: je 0x120f2723 */
L_120F26DE:
    eax = MEM32(ecx + 0x4); /* 0x120F26DE: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F26E1: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F26E4: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F26E7: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F26EA: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2723; /* 0x120F26ED: ja 0x120f2723 */
L_120F26EF:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F26EF: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2723; /* 0x120F26F3: je 0x120f2723 */
L_120F26F5:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F26F5: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2723; /* 0x120F26F9: jne 0x120f2723 */
L_120F26FB:
    eax = MEM32(edx + 0x4); /* 0x120F26FB: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F26FE: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F26FF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2714; /* 0x120F2700: je 0x120f2714 */
L_120F2702:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2702: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2723; /* 0x120F2703: jne 0x120f2723 */
L_120F2705:
    PUSH32(esp, esi); /* 0x120F2705: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2706: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2709: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F270C: push edx */
    RECOMP_CALL(sub_120F03D9); /* 0x120F270D: call 0x120f03d9 */
    RECOMP_FLAGS_IN();
    goto L_120F2728; /* 0x120F2712: jmp 0x120f2728 */
L_120F2714:
    PUSH32(esp, esi); /* 0x120F2714: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2715: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2718: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F271B: push edx */
    RECOMP_CALL(sub_120F01E2); /* 0x120F271C: call 0x120f01e2 */
    RECOMP_FLAGS_IN();
    goto L_120F2728; /* 0x120F2721: jmp 0x120f2728 */
L_120F2723:
    eax = 0x8876086Cu; /* 0x120F2723: mov eax, 0x8876086c */
L_120F2728:
    ebx = POP32_VAL(esp); /* 0x120F2728: pop ebx */
L_120F2729:
    esi = POP32_VAL(esp); /* 0x120F2729: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F272A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F272B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2733(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2733u);

L_120F2733:
    edi = edi; /* 0x120F2733: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2735: push ebp */
    ebp = esp; /* 0x120F2736: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2738: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2739: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120F273C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F274D; /* 0x120F273E: je 0x120f274d */
L_120F2740:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F2740: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F274D; /* 0x120F2744: jne 0x120f274d */
L_120F2746:
    eax = 0x8876086Cu; /* 0x120F2746: mov eax, 0x8876086c */
    goto L_120F27AF; /* 0x120F274B: jmp 0x120f27af */
L_120F274D:
    PUSH32(esp, ebx); /* 0x120F274D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F274E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2751: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2753: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F2756: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2759: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F275E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2760: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F27A9; /* 0x120F2762: je 0x120f27a9 */
L_120F2764:
    eax = MEM32(ecx + 0x4); /* 0x120F2764: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F2767: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F276A: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F276D: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F2770: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F27A9; /* 0x120F2773: ja 0x120f27a9 */
L_120F2775:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F2775: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F27A9; /* 0x120F2779: je 0x120f27a9 */
L_120F277B:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F277B: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F27A9; /* 0x120F277F: jne 0x120f27a9 */
L_120F2781:
    eax = MEM32(edx + 0x4); /* 0x120F2781: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2784: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2785: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F279A; /* 0x120F2786: je 0x120f279a */
L_120F2788:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2788: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F27A9; /* 0x120F2789: jne 0x120f27a9 */
L_120F278B:
    PUSH32(esp, esi); /* 0x120F278B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F278C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F278F: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2792: push edx */
    RECOMP_CALL(sub_120F01E2); /* 0x120F2793: call 0x120f01e2 */
    RECOMP_FLAGS_IN();
    goto L_120F27AE; /* 0x120F2798: jmp 0x120f27ae */
L_120F279A:
    PUSH32(esp, esi); /* 0x120F279A: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F279B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F279E: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F27A1: push edx */
    RECOMP_CALL(sub_120F03D9); /* 0x120F27A2: call 0x120f03d9 */
    RECOMP_FLAGS_IN();
    goto L_120F27AE; /* 0x120F27A7: jmp 0x120f27ae */
L_120F27A9:
    eax = 0x8876086Cu; /* 0x120F27A9: mov eax, 0x8876086c */
L_120F27AE:
    ebx = POP32_VAL(esp); /* 0x120F27AE: pop ebx */
L_120F27AF:
    esi = POP32_VAL(esp); /* 0x120F27AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F27B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F27B1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F27B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F27B9u);

L_120F27B9:
    edi = edi; /* 0x120F27B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F27BB: push ebp */
    ebp = esp; /* 0x120F27BC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F27BE: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F27BF: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F27C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F27C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2836; /* 0x120F27C6: je 0x120f2836 */
L_120F27C8:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120F27C8: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F27D4; /* 0x120F27CB: jne 0x120f27d4 */
L_120F27CD:
    eax = 0x8876086Cu; /* 0x120F27CD: mov eax, 0x8876086c */
    goto L_120F2836; /* 0x120F27D2: jmp 0x120f2836 */
L_120F27D4:
    PUSH32(esp, ebx); /* 0x120F27D4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F27D5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F27D8: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F27DA: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F27DD: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F27E0: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F27E5: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F27E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2830; /* 0x120F27E9: je 0x120f2830 */
L_120F27EB:
    eax = MEM32(ecx + 0x4); /* 0x120F27EB: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F27EE: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F27F1: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F27F4: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F27F7: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2830; /* 0x120F27FA: ja 0x120f2830 */
L_120F27FC:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F27FC: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2830; /* 0x120F2800: je 0x120f2830 */
L_120F2802:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2802: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2830; /* 0x120F2806: jne 0x120f2830 */
L_120F2808:
    eax = MEM32(edx + 0x4); /* 0x120F2808: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F280B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F280C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2821; /* 0x120F280D: je 0x120f2821 */
L_120F280F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F280F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2830; /* 0x120F2810: jne 0x120f2830 */
L_120F2812:
    PUSH32(esp, esi); /* 0x120F2812: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2813: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2816: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2819: push edx */
    RECOMP_CALL(sub_120F04D3); /* 0x120F281A: call 0x120f04d3 */
    RECOMP_FLAGS_IN();
    goto L_120F2835; /* 0x120F281F: jmp 0x120f2835 */
L_120F2821:
    PUSH32(esp, esi); /* 0x120F2821: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2822: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2825: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2828: push edx */
    RECOMP_CALL(sub_120F02DC); /* 0x120F2829: call 0x120f02dc */
    RECOMP_FLAGS_IN();
    goto L_120F2835; /* 0x120F282E: jmp 0x120f2835 */
L_120F2830:
    eax = 0x8876086Cu; /* 0x120F2830: mov eax, 0x8876086c */
L_120F2835:
    ebx = POP32_VAL(esp); /* 0x120F2835: pop ebx */
L_120F2836:
    esi = POP32_VAL(esp); /* 0x120F2836: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2837: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2838: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2840u);

L_120F2840:
    edi = edi; /* 0x120F2840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2842: push ebp */
    ebp = esp; /* 0x120F2843: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2845: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2846: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2849: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F284B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F28BD; /* 0x120F284D: je 0x120f28bd */
L_120F284F:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120F284F: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F285B; /* 0x120F2852: jne 0x120f285b */
L_120F2854:
    eax = 0x8876086Cu; /* 0x120F2854: mov eax, 0x8876086c */
    goto L_120F28BD; /* 0x120F2859: jmp 0x120f28bd */
L_120F285B:
    PUSH32(esp, ebx); /* 0x120F285B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F285C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F285F: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2861: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F2864: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2867: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F286C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F286E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F28B7; /* 0x120F2870: je 0x120f28b7 */
L_120F2872:
    eax = MEM32(ecx + 0x4); /* 0x120F2872: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F2875: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F2878: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F287B: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F287E: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F28B7; /* 0x120F2881: ja 0x120f28b7 */
L_120F2883:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F2883: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F28B7; /* 0x120F2887: je 0x120f28b7 */
L_120F2889:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2889: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F28B7; /* 0x120F288D: jne 0x120f28b7 */
L_120F288F:
    eax = MEM32(edx + 0x4); /* 0x120F288F: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2892: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2893: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F28A8; /* 0x120F2894: je 0x120f28a8 */
L_120F2896:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2896: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F28B7; /* 0x120F2897: jne 0x120f28b7 */
L_120F2899:
    PUSH32(esp, esi); /* 0x120F2899: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F289A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F289D: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F28A0: push edx */
    RECOMP_CALL(sub_120F02DC); /* 0x120F28A1: call 0x120f02dc */
    RECOMP_FLAGS_IN();
    goto L_120F28BC; /* 0x120F28A6: jmp 0x120f28bc */
L_120F28A8:
    PUSH32(esp, esi); /* 0x120F28A8: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F28A9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F28AC: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F28AF: push edx */
    RECOMP_CALL(sub_120F04D3); /* 0x120F28B0: call 0x120f04d3 */
    RECOMP_FLAGS_IN();
    goto L_120F28BC; /* 0x120F28B5: jmp 0x120f28bc */
L_120F28B7:
    eax = 0x8876086Cu; /* 0x120F28B7: mov eax, 0x8876086c */
L_120F28BC:
    ebx = POP32_VAL(esp); /* 0x120F28BC: pop ebx */
L_120F28BD:
    esi = POP32_VAL(esp); /* 0x120F28BD: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F28BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F28BF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F28C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F28C7u);

L_120F28C7:
    edi = edi; /* 0x120F28C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F28C9: push ebp */
    ebp = esp; /* 0x120F28CA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F28CC: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F28CD: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120F28D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F28E1; /* 0x120F28D2: je 0x120f28e1 */
L_120F28D4:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F28D4: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F28E1; /* 0x120F28D8: jne 0x120f28e1 */
L_120F28DA:
    eax = 0x8876086Cu; /* 0x120F28DA: mov eax, 0x8876086c */
    goto L_120F2943; /* 0x120F28DF: jmp 0x120f2943 */
L_120F28E1:
    PUSH32(esp, ebx); /* 0x120F28E1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F28E2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F28E5: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F28E7: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F28EA: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F28ED: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F28F2: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F28F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F293D; /* 0x120F28F6: je 0x120f293d */
L_120F28F8:
    eax = MEM32(ecx + 0x4); /* 0x120F28F8: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F28FB: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F28FE: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F2901: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F2904: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F293D; /* 0x120F2907: ja 0x120f293d */
L_120F2909:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F2909: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F293D; /* 0x120F290D: je 0x120f293d */
L_120F290F:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F290F: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F293D; /* 0x120F2913: jne 0x120f293d */
L_120F2915:
    eax = MEM32(edx + 0x4); /* 0x120F2915: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2918: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2919: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F292E; /* 0x120F291A: je 0x120f292e */
L_120F291C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F291C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F293D; /* 0x120F291D: jne 0x120f293d */
L_120F291F:
    PUSH32(esp, esi); /* 0x120F291F: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2920: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2923: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2926: push edx */
    RECOMP_CALL(sub_120F0806); /* 0x120F2927: call 0x120f0806 */
    RECOMP_FLAGS_IN();
    goto L_120F2942; /* 0x120F292C: jmp 0x120f2942 */
L_120F292E:
    PUSH32(esp, esi); /* 0x120F292E: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F292F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2932: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2935: push edx */
    RECOMP_CALL(sub_120F05D0); /* 0x120F2936: call 0x120f05d0 */
    RECOMP_FLAGS_IN();
    goto L_120F2942; /* 0x120F293B: jmp 0x120f2942 */
L_120F293D:
    eax = 0x8876086Cu; /* 0x120F293D: mov eax, 0x8876086c */
L_120F2942:
    ebx = POP32_VAL(esp); /* 0x120F2942: pop ebx */
L_120F2943:
    esi = POP32_VAL(esp); /* 0x120F2943: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2944: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2945: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F294D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F294Du);

L_120F294D:
    edi = edi; /* 0x120F294D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F294F: push ebp */
    ebp = esp; /* 0x120F2950: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2952: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2953: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120F2956: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2967; /* 0x120F2958: je 0x120f2967 */
L_120F295A:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F295A: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2967; /* 0x120F295E: jne 0x120f2967 */
L_120F2960:
    eax = 0x8876086Cu; /* 0x120F2960: mov eax, 0x8876086c */
    goto L_120F29C9; /* 0x120F2965: jmp 0x120f29c9 */
L_120F2967:
    PUSH32(esp, ebx); /* 0x120F2967: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F2968: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F296B: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F296D: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F2970: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2973: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2978: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F297A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F29C3; /* 0x120F297C: je 0x120f29c3 */
L_120F297E:
    eax = MEM32(ecx + 0x4); /* 0x120F297E: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F2981: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F2984: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F2987: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F298A: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F29C3; /* 0x120F298D: ja 0x120f29c3 */
L_120F298F:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F298F: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F29C3; /* 0x120F2993: je 0x120f29c3 */
L_120F2995:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2995: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F29C3; /* 0x120F2999: jne 0x120f29c3 */
L_120F299B:
    eax = MEM32(edx + 0x4); /* 0x120F299B: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F299E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F299F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F29B4; /* 0x120F29A0: je 0x120f29b4 */
L_120F29A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F29A2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F29C3; /* 0x120F29A3: jne 0x120f29c3 */
L_120F29A5:
    PUSH32(esp, esi); /* 0x120F29A5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F29A6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F29A9: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F29AC: push edx */
    RECOMP_CALL(sub_120F05D0); /* 0x120F29AD: call 0x120f05d0 */
    RECOMP_FLAGS_IN();
    goto L_120F29C8; /* 0x120F29B2: jmp 0x120f29c8 */
L_120F29B4:
    PUSH32(esp, esi); /* 0x120F29B4: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F29B5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F29B8: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F29BB: push edx */
    RECOMP_CALL(sub_120F0806); /* 0x120F29BC: call 0x120f0806 */
    RECOMP_FLAGS_IN();
    goto L_120F29C8; /* 0x120F29C1: jmp 0x120f29c8 */
L_120F29C3:
    eax = 0x8876086Cu; /* 0x120F29C3: mov eax, 0x8876086c */
L_120F29C8:
    ebx = POP32_VAL(esp); /* 0x120F29C8: pop ebx */
L_120F29C9:
    esi = POP32_VAL(esp); /* 0x120F29C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F29CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F29CB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F29D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F29D3u);

L_120F29D3:
    edi = edi; /* 0x120F29D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F29D5: push ebp */
    ebp = esp; /* 0x120F29D6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F29D8: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F29D9: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F29DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F29DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2A50; /* 0x120F29E0: je 0x120f2a50 */
L_120F29E2:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120F29E2: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F29EE; /* 0x120F29E5: jne 0x120f29ee */
L_120F29E7:
    eax = 0x8876086Cu; /* 0x120F29E7: mov eax, 0x8876086c */
    goto L_120F2A50; /* 0x120F29EC: jmp 0x120f2a50 */
L_120F29EE:
    PUSH32(esp, ebx); /* 0x120F29EE: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F29EF: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F29F2: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F29F4: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F29F7: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F29FA: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F29FF: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2A01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2A4A; /* 0x120F2A03: je 0x120f2a4a */
L_120F2A05:
    eax = MEM32(ecx + 0x4); /* 0x120F2A05: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F2A08: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F2A0B: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F2A0E: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F2A11: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2A4A; /* 0x120F2A14: ja 0x120f2a4a */
L_120F2A16:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F2A16: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2A4A; /* 0x120F2A1A: je 0x120f2a4a */
L_120F2A1C:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2A1C: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2A4A; /* 0x120F2A20: jne 0x120f2a4a */
L_120F2A22:
    eax = MEM32(edx + 0x4); /* 0x120F2A22: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2A25: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2A26: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2A3B; /* 0x120F2A27: je 0x120f2a3b */
L_120F2A29:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2A29: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2A4A; /* 0x120F2A2A: jne 0x120f2a4a */
L_120F2A2C:
    PUSH32(esp, esi); /* 0x120F2A2C: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2A2D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2A30: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2A33: push edx */
    RECOMP_CALL(sub_120F0922); /* 0x120F2A34: call 0x120f0922 */
    RECOMP_FLAGS_IN();
    goto L_120F2A4F; /* 0x120F2A39: jmp 0x120f2a4f */
L_120F2A3B:
    PUSH32(esp, esi); /* 0x120F2A3B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2A3C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2A3F: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2A42: push edx */
    RECOMP_CALL(sub_120F06E4); /* 0x120F2A43: call 0x120f06e4 */
    RECOMP_FLAGS_IN();
    goto L_120F2A4F; /* 0x120F2A48: jmp 0x120f2a4f */
L_120F2A4A:
    eax = 0x8876086Cu; /* 0x120F2A4A: mov eax, 0x8876086c */
L_120F2A4F:
    ebx = POP32_VAL(esp); /* 0x120F2A4F: pop ebx */
L_120F2A50:
    esi = POP32_VAL(esp); /* 0x120F2A50: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2A51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2A52: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2A5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2A5Au);

L_120F2A5A:
    edi = edi; /* 0x120F2A5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2A5C: push ebp */
    ebp = esp; /* 0x120F2A5D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2A5F: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2A60: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2A63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F2A65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2AD7; /* 0x120F2A67: je 0x120f2ad7 */
L_120F2A69:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120F2A69: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2A75; /* 0x120F2A6C: jne 0x120f2a75 */
L_120F2A6E:
    eax = 0x8876086Cu; /* 0x120F2A6E: mov eax, 0x8876086c */
    goto L_120F2AD7; /* 0x120F2A73: jmp 0x120f2ad7 */
L_120F2A75:
    PUSH32(esp, ebx); /* 0x120F2A75: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F2A76: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2A79: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2A7B: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F2A7E: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2A81: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2A86: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2A88: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2AD1; /* 0x120F2A8A: je 0x120f2ad1 */
L_120F2A8C:
    eax = MEM32(ecx + 0x4); /* 0x120F2A8C: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x40); /* 0x120F2A8F: mov edx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x18); /* 0x120F2A92: add edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + (-0x30)); /* 0x120F2A95: add edx, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x10) */ /* 0x120F2A98: cmp esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2AD1; /* 0x120F2A9B: ja 0x120f2ad1 */
L_120F2A9D:
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x120F2A9D: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2AD1; /* 0x120F2AA1: je 0x120f2ad1 */
L_120F2AA3:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2AA3: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2AD1; /* 0x120F2AA7: jne 0x120f2ad1 */
L_120F2AA9:
    eax = MEM32(edx + 0x4); /* 0x120F2AA9: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2AAC: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2AAD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2AC2; /* 0x120F2AAE: je 0x120f2ac2 */
L_120F2AB0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2AB0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2AD1; /* 0x120F2AB1: jne 0x120f2ad1 */
L_120F2AB3:
    PUSH32(esp, esi); /* 0x120F2AB3: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2AB4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2AB7: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2ABA: push edx */
    RECOMP_CALL(sub_120F06E4); /* 0x120F2ABB: call 0x120f06e4 */
    RECOMP_FLAGS_IN();
    goto L_120F2AD6; /* 0x120F2AC0: jmp 0x120f2ad6 */
L_120F2AC2:
    PUSH32(esp, esi); /* 0x120F2AC2: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2AC3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2AC6: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, edx); /* 0x120F2AC9: push edx */
    RECOMP_CALL(sub_120F0922); /* 0x120F2ACA: call 0x120f0922 */
    RECOMP_FLAGS_IN();
    goto L_120F2AD6; /* 0x120F2ACF: jmp 0x120f2ad6 */
L_120F2AD1:
    eax = 0x8876086Cu; /* 0x120F2AD1: mov eax, 0x8876086c */
L_120F2AD6:
    ebx = POP32_VAL(esp); /* 0x120F2AD6: pop ebx */
L_120F2AD7:
    esi = POP32_VAL(esp); /* 0x120F2AD7: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2AD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2AD9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2AE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2AE1u);

L_120F2AE1:
    edi = edi; /* 0x120F2AE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2AE3: push ebp */
    ebp = esp; /* 0x120F2AE4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2AE6: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2AE7: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120F2AEA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2AFB; /* 0x120F2AEC: je 0x120f2afb */
L_120F2AEE:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120F2AEE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2AFB; /* 0x120F2AF2: jne 0x120f2afb */
L_120F2AF4:
    eax = 0x8876086Cu; /* 0x120F2AF4: mov eax, 0x8876086c */
    goto L_120F2B4A; /* 0x120F2AF9: jmp 0x120f2b4a */
L_120F2AFB:
    PUSH32(esp, edi); /* 0x120F2AFB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F2AFC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2AFF: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2B01: push dword ptr [ebp + 0xc] */
    ecx = edi + (-0x6C); /* 0x120F2B04: lea ecx, [edi - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2B07: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2B0C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2B0E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2B44; /* 0x120F2B10: je 0x120f2b44 */
L_120F2B12:
    eax = MEM32(ecx + 0x4); /* 0x120F2B12: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2B15: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2B18: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + (-0x30)); /* 0x120F2B1B: add eax, dword ptr [edi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(eax + 0x10) */ /* 0x120F2B1E: cmp esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2B44; /* 0x120F2B21: ja 0x120f2b44 */
L_120F2B23:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F2B23: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2B44; /* 0x120F2B27: je 0x120f2b44 */
L_120F2B29:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2B29: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2B44; /* 0x120F2B2D: jne 0x120f2b44 */
L_120F2B2F:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x120F2B2F: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2B44; /* 0x120F2B33: jne 0x120f2b44 */
L_120F2B35:
    PUSH32(esp, esi); /* 0x120F2B35: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2B36: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2B39: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x120F2B3C: push eax */
    RECOMP_CALL(sub_120F0A44); /* 0x120F2B3D: call 0x120f0a44 */
    RECOMP_FLAGS_IN();
    goto L_120F2B49; /* 0x120F2B42: jmp 0x120f2b49 */
L_120F2B44:
    eax = 0x8876086Cu; /* 0x120F2B44: mov eax, 0x8876086c */
L_120F2B49:
    edi = POP32_VAL(esp); /* 0x120F2B49: pop edi */
L_120F2B4A:
    esi = POP32_VAL(esp); /* 0x120F2B4A: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2B4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2B4C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2B54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2B54u);

L_120F2B54:
    edi = edi; /* 0x120F2B54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2B56: push ebp */
    ebp = esp; /* 0x120F2B57: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2B59: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120F2B5A: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2B5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120F2B5F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2BBE; /* 0x120F2B61: je 0x120f2bbe */
L_120F2B63:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120F2B63: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2B6F; /* 0x120F2B66: jne 0x120f2b6f */
L_120F2B68:
    eax = 0x8876086Cu; /* 0x120F2B68: mov eax, 0x8876086c */
    goto L_120F2BBE; /* 0x120F2B6D: jmp 0x120f2bbe */
L_120F2B6F:
    PUSH32(esp, edi); /* 0x120F2B6F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F2B70: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2B73: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2B75: push dword ptr [ebp + 0xc] */
    ecx = edi + (-0x6C); /* 0x120F2B78: lea ecx, [edi - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2B7B: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2B80: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2B82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2BB8; /* 0x120F2B84: je 0x120f2bb8 */
L_120F2B86:
    eax = MEM32(ecx + 0x4); /* 0x120F2B86: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2B89: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2B8C: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + (-0x30)); /* 0x120F2B8F: add eax, dword ptr [edi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(eax + 0x10) */ /* 0x120F2B92: cmp esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2BB8; /* 0x120F2B95: ja 0x120f2bb8 */
L_120F2B97:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F2B97: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2BB8; /* 0x120F2B9B: je 0x120f2bb8 */
L_120F2B9D:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2B9D: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2BB8; /* 0x120F2BA1: jne 0x120f2bb8 */
L_120F2BA3:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x120F2BA3: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2BB8; /* 0x120F2BA7: jne 0x120f2bb8 */
L_120F2BA9:
    PUSH32(esp, esi); /* 0x120F2BA9: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2BAA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x120F2BAD: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x120F2BB0: push eax */
    RECOMP_CALL(sub_120F0AC3); /* 0x120F2BB1: call 0x120f0ac3 */
    RECOMP_FLAGS_IN();
    goto L_120F2BBD; /* 0x120F2BB6: jmp 0x120f2bbd */
L_120F2BB8:
    eax = 0x8876086Cu; /* 0x120F2BB8: mov eax, 0x8876086c */
L_120F2BBD:
    edi = POP32_VAL(esp); /* 0x120F2BBD: pop edi */
L_120F2BBE:
    esi = POP32_VAL(esp); /* 0x120F2BBE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2BBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120F2BC0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120F2BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2BC8u);

L_120F2BC8:
    edi = edi; /* 0x120F2BC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2BCA: push ebp */
    ebp = esp; /* 0x120F2BCB: mov ebp, esp */
    PUSH32(esp, edi); /* 0x120F2BCD: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F2BCE: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x120F2BD1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2BDF; /* 0x120F2BD3: jne 0x120f2bdf */
L_120F2BD5:
    eax = 0x8876086Cu; /* 0x120F2BD5: mov eax, 0x8876086c */
    goto L_120F2C7D; /* 0x120F2BDA: jmp 0x120f2c7d */
L_120F2BDF:
    PUSH32(esp, ebx); /* 0x120F2BDF: push ebx */
    PUSH32(esp, esi); /* 0x120F2BE0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120F2BE1: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F2BE4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F2BE6: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x120F2BE7: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2BE8: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0x6C); /* 0x120F2BEB: lea ecx, [esi - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2BEE: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x120F2BF3: mov edx, eax */
    /* test edx, edx */ /* 0x120F2BF5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2C16; /* 0x120F2BF7: je 0x120f2c16 */
L_120F2BF9:
    eax = MEM32(edx + 0x4); /* 0x120F2BF9: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(eax + 0x40); /* 0x120F2BFC: mov ecx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0x18); /* 0x120F2BFF: add ecx, dword ptr [edx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + (-0x30)); /* 0x120F2C02: add ecx, dword ptr [esi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x10), 0 */ /* 0x120F2C05: cmp dword ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2C11; /* 0x120F2C09: je 0x120f2c11 */
L_120F2C0B:
    /* cmp MEM32(edx + 0x10), 0xFFFFFFFFu */ /* 0x120F2C0B: cmp dword ptr [edx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2C16; /* 0x120F2C0F: je 0x120f2c16 */
L_120F2C11:
    /* cmp MEM32(ecx + 0x4), ebx */ /* 0x120F2C11: cmp dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2C1D; /* 0x120F2C14: je 0x120f2c1d */
L_120F2C16:
    eax = 0x8876086Cu; /* 0x120F2C16: mov eax, 0x8876086c */
    goto L_120F2C7B; /* 0x120F2C1B: jmp 0x120f2c7b */
L_120F2C1D:
    esi = MEM32(ecx + 0x14); /* 0x120F2C1D: mov esi, dword ptr [ecx + 0x14] */
    edx = MEM32(edx + 0x1C); /* 0x120F2C20: mov edx, dword ptr [edx + 0x1c] */
    PUSH32(esp, 4); /* 0x120F2C23: push 4 */
    ecx = POP32_VAL(esp); /* 0x120F2C25: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2C26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x120F2C28: mov dword ptr [ebp + 0x10], edx */
    MEM32(ebp + 0x8) = esi; /* 0x120F2C2B: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + 0xC) = ecx; /* 0x120F2C2E: mov dword ptr [ebp + 0xc], ecx */
    /* cmp esi, ecx */ /* 0x120F2C31: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2C3A; /* 0x120F2C33: ja 0x120f2c3a */
L_120F2C35:
    ecx = esi; /* 0x120F2C35: mov ecx, esi */
    MEM32(ebp + 0xC) = ecx; /* 0x120F2C37: mov dword ptr [ebp + 0xc], ecx */
L_120F2C3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2C3A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120F2C3C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2C60; /* 0x120F2C3E: je 0x120f2c60 */
L_120F2C40:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x120F2C40: fld dword ptr [edi + esi*4] */
    PUSH32(esp, ecx); /* 0x120F2C43: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120F2C44: fstp dword ptr [esp] */
    PUSH32(esp, edx); /* 0x120F2C47: push edx */
    RECOMP_CALL(sub_120F0109); /* 0x120F2C48: call 0x120f0109 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120F2C4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F2C7B; /* 0x120F2C4F: js 0x120f2c7b */
L_120F2C51:
    edx = MEM32(ebp + 0x10); /* 0x120F2C51: mov edx, dword ptr [ebp + 0x10] */
    edx = MEM32(edx + 0xC); /* 0x120F2C54: mov edx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120F2C57: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x120F2C58: mov dword ptr [ebp + 0x10], edx */
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x120F2C5B: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F2C40; /* 0x120F2C5E: jb 0x120f2c40 */
L_120F2C60:
    ecx = MEM32(ebp + 0x8); /* 0x120F2C60: mov ecx, dword ptr [ebp + 8] */
    /* cmp esi, ecx */ /* 0x120F2C63: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2C72; /* 0x120F2C65: jae 0x120f2c72 */
L_120F2C67:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x120F2C67: sub ecx, esi */
    _flag_k = FK_CMP;
L_120F2C69:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120F2C69: dec ecx */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F2C6A: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2C69; /* 0x120F2C6D: jne 0x120f2c69 */
L_120F2C6F:
    MEM32(ebp + 0x10) = edx; /* 0x120F2C6F: mov dword ptr [ebp + 0x10], edx */
L_120F2C72:
    ecx = MEM32(ebp + 0xC); /* 0x120F2C72: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x120F2C75: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F2C78: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2C3A; /* 0x120F2C79: jne 0x120f2c3a */
L_120F2C7B:
    esi = POP32_VAL(esp); /* 0x120F2C7B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F2C7C: pop ebx */
L_120F2C7D:
    edi = POP32_VAL(esp); /* 0x120F2C7D: pop edi */
    ebp = POP32_VAL(esp); /* 0x120F2C7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2C7F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2C87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2C87u);

L_120F2C87:
    edi = edi; /* 0x120F2C87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2C89: push ebp */
    ebp = esp; /* 0x120F2C8A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120F2C8C: push ecx */
    PUSH32(esp, esi); /* 0x120F2C8D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120F2C8E: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120F2C91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2C9F; /* 0x120F2C93: jne 0x120f2c9f */
L_120F2C95:
    ecx = 0x8876086Cu; /* 0x120F2C95: mov ecx, 0x8876086c */
    goto L_120F2D4B; /* 0x120F2C9A: jmp 0x120f2d4b */
L_120F2C9F:
    PUSH32(esp, ebx); /* 0x120F2C9F: push ebx */
    PUSH32(esp, edi); /* 0x120F2CA0: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F2CA1: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F2CA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F2CA6: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x120F2CA7: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2CA8: push dword ptr [ebp + 0xc] */
    ecx = edi + (-0x6C); /* 0x120F2CAB: lea ecx, [edi - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2CAE: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2CB3: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2CB5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2CD6; /* 0x120F2CB7: je 0x120f2cd6 */
L_120F2CB9:
    eax = MEM32(ecx + 0x4); /* 0x120F2CB9: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2CBC: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2CBF: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + (-0x30)); /* 0x120F2CC2: add eax, dword ptr [edi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x120F2CC5: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2CD1; /* 0x120F2CC9: je 0x120f2cd1 */
L_120F2CCB:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2CCB: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2CD6; /* 0x120F2CCF: je 0x120f2cd6 */
L_120F2CD1:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x120F2CD1: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2CDD; /* 0x120F2CD4: je 0x120f2cdd */
L_120F2CD6:
    ecx = 0x8876086Cu; /* 0x120F2CD6: mov ecx, 0x8876086c */
    goto L_120F2D49; /* 0x120F2CDB: jmp 0x120f2d49 */
L_120F2CDD:
    edx = MEM32(ecx + 0x1C); /* 0x120F2CDD: mov edx, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x14); /* 0x120F2CE0: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, 4); /* 0x120F2CE3: push 4 */
    edi = POP32_VAL(esp); /* 0x120F2CE5: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120F2CE6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edx; /* 0x120F2CE8: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x120F2CEB: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x10) = edi; /* 0x120F2CEE: mov dword ptr [ebp + 0x10], edi */
    /* cmp eax, edi */ /* 0x120F2CF1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2CF8; /* 0x120F2CF3: ja 0x120f2cf8 */
L_120F2CF5:
    MEM32(ebp + 0x10) = eax; /* 0x120F2CF5: mov dword ptr [ebp + 0x10], eax */
L_120F2CF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2CF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x120F2CFA: mov edi, esi */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F2CFC: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F2CFD: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F2CFE: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x120F2CFF: stosd dword ptr es:[edi], eax */
L_120F2D00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120F2D00: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x120F2D02: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120F2D31; /* 0x120F2D05: jbe 0x120f2d31 */
L_120F2D07:
    eax = esi; /* 0x120F2D07: mov eax, esi */
    MEM32(ebp + 0x8) = esi; /* 0x120F2D09: mov dword ptr [ebp + 8], esi */
L_120F2D0C:
    PUSH32(esp, eax); /* 0x120F2D0C: push eax */
    PUSH32(esp, edx); /* 0x120F2D0D: push edx */
    RECOMP_CALL(sub_120F017D); /* 0x120F2D0E: call 0x120f017d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2D13: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2D15: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120F2D49; /* 0x120F2D17: js 0x120f2d49 */
L_120F2D19:
    eax = MEM32(ebp + 0x8); /* 0x120F2D19: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x120F2D1C: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + 0xC); /* 0x120F2D1F: mov edx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F2D22: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120F2D23: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x120F2D26: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x120F2D29: mov dword ptr [ebp + 0xc], edx */
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x120F2D2C: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120F2D0C; /* 0x120F2D2F: jb 0x120f2d0c */
L_120F2D31:
    eax = MEM32(ebp + (-0x4)); /* 0x120F2D31: mov eax, dword ptr [ebp - 4] */
    /* cmp edi, eax */ /* 0x120F2D34: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120F2D43; /* 0x120F2D36: jae 0x120f2d43 */
L_120F2D38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120F2D38: sub eax, edi */
    _flag_k = FK_CMP;
L_120F2D3A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2D3A: dec eax */
    _flag_k = FK_DEC;
    edx = MEM32(edx + 0xC); /* 0x120F2D3B: mov edx, dword ptr [edx + 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2D3A; /* 0x120F2D3E: jne 0x120f2d3a */
L_120F2D40:
    MEM32(ebp + 0xC) = edx; /* 0x120F2D40: mov dword ptr [ebp + 0xc], edx */
L_120F2D43:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120F2D43: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120F2D46: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2D00; /* 0x120F2D47: jne 0x120f2d00 */
L_120F2D49:
    edi = POP32_VAL(esp); /* 0x120F2D49: pop edi */
    ebx = POP32_VAL(esp); /* 0x120F2D4A: pop ebx */
L_120F2D4B:
    eax = ecx; /* 0x120F2D4B: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x120F2D4D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120F2D4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2D4F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2D57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2D57u);

L_120F2D57:
    edi = edi; /* 0x120F2D57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2D59: push ebp */
    ebp = esp; /* 0x120F2D5A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x120F2D5C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120F2D5F: push ebx */
    PUSH32(esp, esi); /* 0x120F2D60: push esi */
    PUSH32(esp, edi); /* 0x120F2D61: push edi */
    PUSH32(esp, 1); /* 0x120F2D62: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2D64: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F2D67: lea ecx, [ecx - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2D6A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_120F1983); /* 0x120F2D6C: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2D71: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2D73: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2DEB; /* 0x120F2D75: je 0x120f2deb */
L_120F2D77:
    eax = MEM32(ecx + 0x4); /* 0x120F2D77: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2D7A: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2D7D: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x120F2D80: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + (-0x30)); /* 0x120F2D83: add eax, dword ptr [edx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), esi */ /* 0x120F2D86: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2D91; /* 0x120F2D89: je 0x120f2d91 */
L_120F2D8B:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2D8B: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2DEB; /* 0x120F2D8F: je 0x120f2deb */
L_120F2D91:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x120F2D91: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2DEB; /* 0x120F2D95: jne 0x120f2deb */
L_120F2D97:
    /* cmp MEM32(eax), 4 */ /* 0x120F2D97: cmp dword ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2DEB; /* 0x120F2D9A: jne 0x120f2deb */
L_120F2D9C:
    eax = MEM32(ecx + 0x1C); /* 0x120F2D9C: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x120F2D9F: mov eax, dword ptr [eax + 8] */
    ebx = esi; /* 0x120F2DA2: mov ebx, esi */
    edi = esi; /* 0x120F2DA4: mov edi, esi */
    MEM32(ebp + 0x8) = eax; /* 0x120F2DA6: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x120F2DA9: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2DE3; /* 0x120F2DAC: je 0x120f2de3 */
L_120F2DAE:
    edi = MEM32(ebp + 0x10); /* 0x120F2DAE: mov edi, dword ptr [ebp + 0x10] */
    ecx = edi + 0x1; /* 0x120F2DB1: lea ecx, [edi + 1] */
L_120F2DB4:
    SET_LO8(eax, MEM8(edi)); /* 0x120F2DB4: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F2DB6: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x120F2DB7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2DB4; /* 0x120F2DB9: jne 0x120f2db4 */
L_120F2DBB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x120F2DBB: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120F2DBD: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x120F2DBE: push edi */
    eax = edx + (-0x6C); /* 0x120F2DBF: lea eax, [edx - 0x6c] */
    PUSH32(esp, eax); /* 0x120F2DC2: push eax */
    RECOMP_ICALL(MEM32(edx + (-0x10))); /* 0x120F2DC3: call dword ptr [edx - 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120F2DC6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120F2DC8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2DD3; /* 0x120F2DCA: jne 0x120f2dd3 */
L_120F2DCC:
    esi = 0x8007000Eu; /* 0x120F2DCC: mov esi, 0x8007000e */
    goto L_120F2DF0; /* 0x120F2DD1: jmp 0x120f2df0 */
L_120F2DD3:
    PUSH32(esp, edi); /* 0x120F2DD3: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120F2DD4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120F2DD7: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x120F2DD8: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x120F2DDD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120F2DE0: add esp, 0xc */
    _flag_k = FK_ADD;
L_120F2DE3:
    MEM32(eax + 0x20) = ebx; /* 0x120F2DE3: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x24) = edi; /* 0x120F2DE6: mov dword ptr [eax + 0x24], edi */
    goto L_120F2DF0; /* 0x120F2DE9: jmp 0x120f2df0 */
L_120F2DEB:
    esi = 0x8876086Cu; /* 0x120F2DEB: mov esi, 0x8876086c */
L_120F2DF0:
    edi = POP32_VAL(esp); /* 0x120F2DF0: pop edi */
    eax = esi; /* 0x120F2DF1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F2DF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x120F2DF4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120F2DF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2DF6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2DFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2DFEu);

L_120F2DFE:
    edi = edi; /* 0x120F2DFE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2E00: push ebp */
    ebp = esp; /* 0x120F2E01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2E03: push esi */
    PUSH32(esp, edi); /* 0x120F2E04: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F2E05: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2E08: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120F2E0A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2E15; /* 0x120F2E0C: jne 0x120f2e15 */
L_120F2E0E:
    esi = 0x8876086Cu; /* 0x120F2E0E: mov esi, 0x8876086c */
    goto L_120F2E61; /* 0x120F2E13: jmp 0x120f2e61 */
L_120F2E15:
    PUSH32(esp, ebx); /* 0x120F2E15: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120F2E16: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2E19: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2E1B: push dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x6C); /* 0x120F2E1E: lea ecx, [ebx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2E21: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2E26: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2E28: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2E5B; /* 0x120F2E2A: je 0x120f2e5b */
L_120F2E2C:
    eax = MEM32(ecx + 0x4); /* 0x120F2E2C: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2E2F: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2E32: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + (-0x30)); /* 0x120F2E35: add eax, dword ptr [ebx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), esi */ /* 0x120F2E38: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2E43; /* 0x120F2E3B: je 0x120f2e43 */
L_120F2E3D:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2E3D: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2E5B; /* 0x120F2E41: je 0x120f2e5b */
L_120F2E43:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x120F2E43: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2E5B; /* 0x120F2E47: jne 0x120f2e5b */
L_120F2E49:
    /* cmp MEM32(eax), 4 */ /* 0x120F2E49: cmp dword ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2E5B; /* 0x120F2E4C: jne 0x120f2e5b */
L_120F2E4E:
    eax = MEM32(ecx + 0x1C); /* 0x120F2E4E: mov eax, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x120F2E51: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x20); /* 0x120F2E54: mov eax, dword ptr [eax + 0x20] */
    MEM32(edi) = eax; /* 0x120F2E57: mov dword ptr [edi], eax */
    goto L_120F2E60; /* 0x120F2E59: jmp 0x120f2e60 */
L_120F2E5B:
    esi = 0x8876086Cu; /* 0x120F2E5B: mov esi, 0x8876086c */
L_120F2E60:
    ebx = POP32_VAL(esp); /* 0x120F2E60: pop ebx */
L_120F2E61:
    edi = POP32_VAL(esp); /* 0x120F2E61: pop edi */
    eax = esi; /* 0x120F2E62: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F2E64: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2E65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2E66: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2E6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2E6Eu);

L_120F2E6E:
    edi = edi; /* 0x120F2E6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2E70: push ebp */
    ebp = esp; /* 0x120F2E71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2E73: push esi */
    PUSH32(esp, edi); /* 0x120F2E74: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120F2E75: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x120F2E78: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2E7A: push dword ptr [ebp + 0xc] */
    ecx = edi + (-0x6C); /* 0x120F2E7D: lea ecx, [edi - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2E80: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_120F1983); /* 0x120F2E82: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2E87: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2E89: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2E8B: je 0x120f2ef7 */
L_120F2E8D:
    eax = MEM32(ecx + 0x4); /* 0x120F2E8D: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2E90: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2E93: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + (-0x30)); /* 0x120F2E96: add eax, dword ptr [edi - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), esi */ /* 0x120F2E99: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2EA4; /* 0x120F2E9C: je 0x120f2ea4 */
L_120F2E9E:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2E9E: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2EA2: je 0x120f2ef7 */
L_120F2EA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120F2EA4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x120F2EA6: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F2EA9: setne dl */
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x120F2EAC: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x120F2EB0: mov dword ptr [ebp + 0x10], edx */
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2EB3: ja 0x120f2ef7 */
L_120F2EB5:
    /* cmp MEM32(eax + 0x14), 1 */ /* 0x120F2EB5: cmp dword ptr [eax + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2EB9: jne 0x120f2ef7 */
L_120F2EBB:
    /* cmp MEM32(eax + 0x18), 1 */ /* 0x120F2EBB: cmp dword ptr [eax + 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2EBF: jne 0x120f2ef7 */
L_120F2EC1:
    eax = MEM32(ecx + 0x1C); /* 0x120F2EC1: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x8); /* 0x120F2EC4: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(ecx + 0x18); /* 0x120F2EC7: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2ECA: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2EF2; /* 0x120F2ECC: je 0x120f2ef2 */
L_120F2ECE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2ECE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2EE7; /* 0x120F2ECF: je 0x120f2ee7 */
L_120F2ED1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2ED1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2EDF; /* 0x120F2ED2: je 0x120f2edf */
L_120F2ED4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2ED4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2EF7; /* 0x120F2ED5: jne 0x120f2ef7 */
L_120F2ED7:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x120F2ED7: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x120F2EDA: fstp qword ptr [ecx + 0x20] */
    goto L_120F2EFC; /* 0x120F2EDD: jmp 0x120f2efc */
L_120F2EDF:
    MEM32(ecx + 0x20) = edx; /* 0x120F2EDF: mov dword ptr [ecx + 0x20], edx */
    MEM32(ecx + 0x24) = esi; /* 0x120F2EE2: mov dword ptr [ecx + 0x24], esi */
    goto L_120F2EFC; /* 0x120F2EE5: jmp 0x120f2efc */
L_120F2EE7:
    eax = edx; /* 0x120F2EE7: mov eax, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x120F2EE9: cdq  */
    MEM32(ecx + 0x20) = eax; /* 0x120F2EEA: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x24) = edx; /* 0x120F2EED: mov dword ptr [ecx + 0x24], edx */
    goto L_120F2EFC; /* 0x120F2EF0: jmp 0x120f2efc */
L_120F2EF2:
    MEM32(ecx + 0x20) = edx; /* 0x120F2EF2: mov dword ptr [ecx + 0x20], edx */
    goto L_120F2EFC; /* 0x120F2EF5: jmp 0x120f2efc */
L_120F2EF7:
    esi = 0x8876086Cu; /* 0x120F2EF7: mov esi, 0x8876086c */
L_120F2EFC:
    edi = POP32_VAL(esp); /* 0x120F2EFC: pop edi */
    eax = esi; /* 0x120F2EFD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F2EFF: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2F00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2F01: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120F2F09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120F2F09u);

L_120F2F09:
    edi = edi; /* 0x120F2F09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120F2F0B: push ebp */
    ebp = esp; /* 0x120F2F0C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120F2F0E: push esi */
    PUSH32(esp, edi); /* 0x120F2F0F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120F2F10: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120F2F13: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120F2F15: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120F2F20; /* 0x120F2F17: jne 0x120f2f20 */
L_120F2F19:
    esi = 0x8876086Cu; /* 0x120F2F19: mov esi, 0x8876086c */
    goto L_120F2F9F; /* 0x120F2F1E: jmp 0x120f2f9f */
L_120F2F20:
    ecx = MEM32(ebp + 0x8); /* 0x120F2F20: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120F2F23: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120F2F24: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120F2F26: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x120F2F27: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120F2F28: push dword ptr [ebp + 0xc] */
    ecx = ecx + (-0x6C); /* 0x120F2F2B: lea ecx, [ecx - 0x6c] */
    RECOMP_CALL(sub_120F1983); /* 0x120F2F2E: call 0x120f1983 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120F2F33: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120F2F35: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F37: je 0x120f2f99 */
L_120F2F39:
    eax = MEM32(ecx + 0x4); /* 0x120F2F39: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x40); /* 0x120F2F3C: mov eax, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x18); /* 0x120F2F3F: add eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x120F2F42: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + (-0x30)); /* 0x120F2F45: add eax, dword ptr [edx - 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x10), esi */ /* 0x120F2F48: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2F53; /* 0x120F2F4B: je 0x120f2f53 */
L_120F2F4D:
    /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu */ /* 0x120F2F4D: cmp dword ptr [ecx + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F51: je 0x120f2f99 */
L_120F2F53:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x120F2F53: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F57: ja 0x120f2f99 */
L_120F2F59:
    /* cmp MEM32(eax + 0x14), ebx */ /* 0x120F2F59: cmp dword ptr [eax + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F5C: jne 0x120f2f99 */
L_120F2F5E:
    /* cmp MEM32(eax + 0x18), ebx */ /* 0x120F2F5E: cmp dword ptr [eax + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F61: jne 0x120f2f99 */
L_120F2F63:
    eax = MEM32(ecx + 0x1C); /* 0x120F2F63: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(eax + 0x8); /* 0x120F2F66: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(ecx + 0x18); /* 0x120F2F69: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x120F2F6C: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2F8D; /* 0x120F2F6E: je 0x120f2f8d */
L_120F2F70:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2F70: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2F8D; /* 0x120F2F71: je 0x120f2f8d */
L_120F2F73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2F73: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120F2F8D; /* 0x120F2F74: je 0x120f2f8d */
L_120F2F76:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120F2F76: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120F2F99; /* 0x120F2F77: jne 0x120f2f99 */
L_120F2F79:
    fp_push(0.0); /* 0x120F2F79: fldz  */
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x120F2F7B: fld qword ptr [ecx + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120F2F7E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120F2F80: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120F2F82: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120F2F89; /* 0x120F2F85: jp 0x120f2f89 */
L_120F2F87:
    ebx = esi; /* 0x120F2F87: mov ebx, esi */
L_120F2F89:
    MEM32(edi) = ebx; /* 0x120F2F89: mov dword ptr [edi], ebx */
    goto L_120F2F9E; /* 0x120F2F8B: jmp 0x120f2f9e */
L_120F2F8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120F2F8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x20), esi */ /* 0x120F2F8F: cmp dword ptr [ecx + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120F2F92: setne al */
    MEM32(edi) = eax; /* 0x120F2F95: mov dword ptr [edi], eax */
    goto L_120F2F9E; /* 0x120F2F97: jmp 0x120f2f9e */
L_120F2F99:
    esi = 0x8876086Cu; /* 0x120F2F99: mov esi, 0x8876086c */
L_120F2F9E:
    ebx = POP32_VAL(esp); /* 0x120F2F9E: pop ebx */
L_120F2F9F:
    edi = POP32_VAL(esp); /* 0x120F2F9F: pop edi */
    eax = esi; /* 0x120F2FA0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120F2FA2: pop esi */
    ebp = POP32_VAL(esp); /* 0x120F2FA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120F2FA4: ret 0xc */
    RECOMP_REGS_OUT();
}
