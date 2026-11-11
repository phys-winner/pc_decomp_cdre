#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BA9C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA9C6u);

L_007BA9C6:
    ecx = MEM32(ebp + (-0x110)); /* 0x007BA9C6: mov ecx, dword ptr [ebp - 0x110] */
    goto L_0040A000; /* 0x007BA9CC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA9D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA9D1u);

L_007BA9D1:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007BA9D1: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007BA9D7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA9DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA9DCu);

L_007BA9DC:
    eax = MEM32(0x928524); /* 0x007BA9DC: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007BA9E1: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BA9E4: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BA9E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BA9EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA9EAu);

L_007BA9EA:
    eax = MEM32(0x928524); /* 0x007BA9EA: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x007BA9EF: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BA9F2: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BA9F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BA9F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA9F8u);

L_007BA9F8:
    eax = MEM32(0x928524); /* 0x007BA9F8: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    eax = eax & 0xFFFFFF7Fu; /* 0x007BA9FD: and eax, 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA02: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA07: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA08u);

L_007BAA08:
    eax = MEM32(0x928524); /* 0x007BAA08: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    eax = eax & 0xFFFFFFFBu; /* 0x007BAA0D: and eax, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA10: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA15: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA16u);

L_007BAA16:
    eax = MEM32(0x928524); /* 0x007BAA16: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x007BAA1B: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA1E: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA23: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA24u);

L_007BAA24:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007BAA24: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007BAA2A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA2Fu);

L_007BAA2F:
    ecx = MEM32(ebp + (-0x110)); /* 0x007BAA2F: mov ecx, dword ptr [ebp - 0x110] */
    goto L_0040A000; /* 0x007BAA35: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA3Au);

L_007BAA3A:
    eax = MEM32(0x928524); /* 0x007BAA3A: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x007BAA3F: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA42: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA47: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA48u);

L_007BAA48:
    eax = MEM32(0x928524); /* 0x007BAA48: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDFu);
    eax = eax & 0xFFFFFFDFu; /* 0x007BAA4D: and eax, 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA50: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA55: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA56u);

L_007BAA56:
    eax = MEM32(0x928524); /* 0x007BAA56: mov eax, dword ptr [0x928524] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBFu);
    eax = eax & 0xFFFFFFBFu; /* 0x007BAA5B: and eax, 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928524) = eax; /* 0x007BAA5E: mov dword ptr [0x928524], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BAA63: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BAA64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA64u);

L_007BAA64:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007BAA64: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007BAA6A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA6Fu);

L_007BAA6F:
    ecx = MEM32(ebp + (-0x104)); /* 0x007BAA6F: mov ecx, dword ptr [ebp - 0x104] */
    goto L_0040A000; /* 0x007BAA75: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA7Au);

L_007BAA7A:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007BAA7A: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007BAA80: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA85u);

L_007BAA85:
    ecx = MEM32(ebp + (-0x104)); /* 0x007BAA85: mov ecx, dword ptr [ebp - 0x104] */
    goto L_0040A000; /* 0x007BAA8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAA90u);

    goto L_007BAA90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAA90:
    edx = MEM32(esp + 0x8); /* 0x007BAA90: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x114); /* 0x007BAA94: lea eax, [edx - 0x114] */
    ecx = MEM32(edx + (-0x118)); /* 0x007BAA9A: mov ecx, dword ptr [edx - 0x118] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAAA0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAAA2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007BAAA7: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BAAAA: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAAAD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAAAF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008447E8u; /* 0x007BAAB4: mov eax, 0x8447e8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAAB9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAAC0u);

L_007BAAC0:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BAAC0: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BAAC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAAC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAAC8u);

L_007BAAC8:
    ecx = MEM32(ebp + (-0x60)); /* 0x007BAAC8: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007BAACB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAAD0u);

    goto L_007BAAD0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAAD0:
    edx = MEM32(esp + 0x8); /* 0x007BAAD0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAAD4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x007BAAD7: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAADD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAADF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BAAE4: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAAE7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAAE9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008448A0u; /* 0x007BAAEE: mov eax, 0x8448a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAAF3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB00u);

L_007BAB00:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BAB00: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BAB03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB08u);

L_007BAB08:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BAB08: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BAB0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB10u);

L_007BAB10:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BAB10: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BAB13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB18u);

L_007BAB18:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BAB18: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BAB1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB20u);

    goto L_007BAB20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAB20:
    edx = MEM32(esp + 0x8); /* 0x007BAB20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAB24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BAB27: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAB2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAB2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008448D4u; /* 0x007BAB31: mov eax, 0x8448d4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAB36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB40u);

L_007BAB40:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BAB40: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BAB43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB48u);

L_007BAB48:
    ecx = MEM32(ebp + (-0x20)); /* 0x007BAB48: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007BAB4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB50u);

L_007BAB50:
    ecx = MEM32(ebp + (-0x20)); /* 0x007BAB50: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007BAB53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB58u);

L_007BAB58:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BAB58: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BAB5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB60u);

    goto L_007BAB60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAB60:
    edx = MEM32(esp + 0x8); /* 0x007BAB60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAB64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BAB67: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAB6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAB6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844918u; /* 0x007BAB71: mov eax, 0x844918 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAB76: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB80u);

L_007BAB80:
    ecx = MEM32(ebp + (-0xB4)); /* 0x007BAB80: mov ecx, dword ptr [ebp - 0xb4] */
    goto L_0040A000; /* 0x007BAB86: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB8Bu);

L_007BAB8B:
    ecx = MEM32(ebp + (-0x60)); /* 0x007BAB8B: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007BAB8E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB93u);

L_007BAB93:
    ecx = MEM32(ebp + (-0xB4)); /* 0x007BAB93: mov ecx, dword ptr [ebp - 0xb4] */
    goto L_0040A000; /* 0x007BAB99: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAB9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAB9Eu);

L_007BAB9E:
    ecx = MEM32(ebp + (-0x60)); /* 0x007BAB9E: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007BABA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BABA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABA6u);

    goto L_007BABA6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BABA6:
    edx = MEM32(esp + 0x8); /* 0x007BABA6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BABAA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10C)); /* 0x007BABAD: mov ecx, dword ptr [edx - 0x10c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BABB3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BABB5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BABBA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BABBD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BABBF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084495Cu; /* 0x007BABC4: mov eax, 0x84495c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BABC9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BABD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABD0u);

L_007BABD0:
    ecx = MEM32(ebp + (-0xAC)); /* 0x007BABD0: mov ecx, dword ptr [ebp - 0xac] */
    goto L_0040A000; /* 0x007BABD6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BABDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABDBu);

L_007BABDB:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007BABDB: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BABE1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BABE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABE6u);

L_007BABE6:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007BABE6: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007BABEC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BABF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABF1u);

L_007BABF1:
    ecx = MEM32(ebp + (-0xA4)); /* 0x007BABF1: mov ecx, dword ptr [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BABF7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BABFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BABFCu);

    goto L_007BABFC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BABFC:
    edx = MEM32(esp + 0x8); /* 0x007BABFC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAC00: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE4)); /* 0x007BAC03: mov ecx, dword ptr [edx - 0xe4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAC09: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAC0B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BAC10: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAC13: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAC15: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008449A0u; /* 0x007BAC1A: mov eax, 0x8449a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAC1F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC30u);

L_007BAC30:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BAC30: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BAC33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC38u);

L_007BAC38:
    ecx = MEM32(ebp + (-0x78)); /* 0x007BAC38: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007BAC3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC40u);

L_007BAC40:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BAC40: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BAC43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC48u);

L_007BAC48:
    ecx = MEM32(ebp + (-0x78)); /* 0x007BAC48: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007BAC4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC50u);

    goto L_007BAC50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAC50:
    edx = MEM32(esp + 0x8); /* 0x007BAC50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAC54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x104)); /* 0x007BAC57: mov ecx, dword ptr [edx - 0x104] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAC5D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAC5F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BAC64: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAC67: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAC69: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008449E4u; /* 0x007BAC6E: mov eax, 0x8449e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAC73: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC80u);

L_007BAC80:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007BAC80: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BAC83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC88u);

L_007BAC88:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007BAC88: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BAC8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC90u);

L_007BAC90:
    ecx = MEM32(ebp + (-0xCC)); /* 0x007BAC90: mov ecx, dword ptr [ebp - 0xcc] */
    goto L_0040A000; /* 0x007BAC96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAC9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAC9Bu);

L_007BAC9B:
    ecx = MEM32(ebp + (-0xB8)); /* 0x007BAC9B: mov ecx, dword ptr [ebp - 0xb8] */
    goto L_0040A000; /* 0x007BACA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BACA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACA6u);

    goto L_007BACA6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BACA6:
    edx = MEM32(esp + 0x8); /* 0x007BACA6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BACAA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x11C)); /* 0x007BACAD: mov ecx, dword ptr [edx - 0x11c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BACB3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BACB5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BACBA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BACBD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BACBF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844A28u; /* 0x007BACC4: mov eax, 0x844a28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BACC9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BACD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACD0u);

L_007BACD0:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007BACD0: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BACD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BACD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACD8u);

L_007BACD8:
    ecx = MEM32(ebp + (-0x8C)); /* 0x007BACD8: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BACDE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BACE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACE3u);

L_007BACE3:
    ecx = MEM32(ebp + (-0x94)); /* 0x007BACE3: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x007BACE9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BACEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACEEu);

L_007BACEE:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007BACEE: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BACF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BACF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BACF6u);

    goto L_007BACF6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BACF6:
    edx = MEM32(esp + 0x8); /* 0x007BACF6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BACFA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xEC)); /* 0x007BACFD: mov ecx, dword ptr [edx - 0xec] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAD03: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAD05: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BAD0A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAD0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAD0F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844A6Cu; /* 0x007BAD14: mov eax, 0x844a6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAD19: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD20u);

L_007BAD20:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BAD20: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BAD23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD28u);

L_007BAD28:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BAD28: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BAD2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD30u);

L_007BAD30:
    ecx = MEM32(ebp + 0x20); /* 0x007BAD30: mov ecx, dword ptr [ebp + 0x20] */
    goto L_0040A000; /* 0x007BAD33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD38u);

L_007BAD38:
    ecx = MEM32(ebp + 0x10); /* 0x007BAD38: mov ecx, dword ptr [ebp + 0x10] */
    goto L_0040A000; /* 0x007BAD3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD40u);

    goto L_007BAD40;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAD40:
    edx = MEM32(esp + 0x8); /* 0x007BAD40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAD44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BAD47: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAD4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAD4C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844AB0u; /* 0x007BAD51: mov eax, 0x844ab0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAD56: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD60u);

L_007BAD60:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BAD60: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BAD63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD68u);

L_007BAD68:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BAD68: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BAD6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD70u);

    goto L_007BAD70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAD70:
    edx = MEM32(esp + 0x8); /* 0x007BAD70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAD74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007BAD77: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAD7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAD7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844AF4u; /* 0x007BAD81: mov eax, 0x844af4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAD86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD90u);

L_007BAD90:
    ecx = MEM32(ebp + 0x1C); /* 0x007BAD90: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_0040A000; /* 0x007BAD93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAD98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAD98u);

L_007BAD98:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BAD98: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BAD9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BADA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADA0u);

    goto L_007BADA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BADA0:
    edx = MEM32(esp + 0x8); /* 0x007BADA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BADA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BADA7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BADAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BADAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844B28u; /* 0x007BADB1: mov eax, 0x844b28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BADB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BADC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADC0u);

L_007BADC0:
    ecx = MEM32(ebp + 0x1C); /* 0x007BADC0: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_0040A000; /* 0x007BADC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BADC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADC8u);

L_007BADC8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BADC8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BADCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BADD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADD0u);

L_007BADD0:
    ecx = MEM32(ebp + 0x1C); /* 0x007BADD0: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_0040A000; /* 0x007BADD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BADD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADD8u);

L_007BADD8:
    ecx = MEM32(ebp + 0x10); /* 0x007BADD8: mov ecx, dword ptr [ebp + 0x10] */
    goto L_0040A000; /* 0x007BADDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BADE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BADE0u);

    goto L_007BADE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BADE0:
    edx = MEM32(esp + 0x8); /* 0x007BADE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BADE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BADE7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BADEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BADEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844B5Cu; /* 0x007BADF1: mov eax, 0x844b5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BADF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE00u);

L_007BAE00:
    ecx = MEM32(ebp + 0x8); /* 0x007BAE00: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007BAE03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE08u);

L_007BAE08:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BAE08: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BAE0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE10u);

L_007BAE10:
    ecx = MEM32(ebp + 0xC); /* 0x007BAE10: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007BAE13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE18u);

L_007BAE18:
    ecx = MEM32(ebp + 0x1C); /* 0x007BAE18: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_0040A000; /* 0x007BAE1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE20u);

L_007BAE20:
    ecx = MEM32(ebp + 0xC); /* 0x007BAE20: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007BAE23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE28u);

L_007BAE28:
    ecx = MEM32(ebp + 0x10); /* 0x007BAE28: mov ecx, dword ptr [ebp + 0x10] */
    goto L_0040A000; /* 0x007BAE2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE30u);

L_007BAE30:
    ecx = MEM32(ebp + 0xC); /* 0x007BAE30: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007BAE33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE38u);

L_007BAE38:
    ecx = MEM32(ebp + 0x10); /* 0x007BAE38: mov ecx, dword ptr [ebp + 0x10] */
    goto L_0040A000; /* 0x007BAE3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE40u);

L_007BAE40:
    ecx = MEM32(ebp + 0x18); /* 0x007BAE40: mov ecx, dword ptr [ebp + 0x18] */
    goto L_0040A000; /* 0x007BAE43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE48u);

    goto L_007BAE48;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAE48:
    edx = MEM32(esp + 0x8); /* 0x007BAE48: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAE4C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BAE4F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAE52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAE54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844BA0u; /* 0x007BAE59: mov eax, 0x844ba0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAE5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE70u);

L_007BAE70:
    ecx = MEM32(ebp + 0x14); /* 0x007BAE70: mov ecx, dword ptr [ebp + 0x14] */
    goto L_0040A000; /* 0x007BAE73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE78u);

L_007BAE78:
    ecx = MEM32(ebp + 0x8); /* 0x007BAE78: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007BAE7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAE80u);

    goto L_007BAE80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAE80:
    edx = MEM32(esp + 0x8); /* 0x007BAE80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAE84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BAE87: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAE8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAE8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844C10u; /* 0x007BAE91: mov eax, 0x844c10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAE96: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEA0u);

L_007BAEA0:
    ecx = MEM32(ebp + (-0x28)); /* 0x007BAEA0: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x007BAEA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEA8u);

L_007BAEA8:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007BAEA8: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BAEAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEB0u);

L_007BAEB0:
    ecx = MEM32(ebp + 0x8); /* 0x007BAEB0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007BAEB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEB8u);

L_007BAEB8:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007BAEB8: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BAEBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEC0u);

    goto L_007BAEC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAEC0:
    edx = MEM32(esp + 0x8); /* 0x007BAEC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAEC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x007BAEC7: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAECA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAECC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844C44u; /* 0x007BAED1: mov eax, 0x844c44 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAED6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEE0u);

L_007BAEE0:
    ecx = MEM32(ebp + 0x8); /* 0x007BAEE0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007BAEE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEE8u);

L_007BAEE8:
    ecx = MEM32(ebp + 0xC); /* 0x007BAEE8: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007BAEEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEF0u);

L_007BAEF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BAEF0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BAEF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAEF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAEF8u);

    goto L_007BAEF8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAEF8:
    edx = MEM32(esp + 0x8); /* 0x007BAEF8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAEFC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BAEFF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAF02: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAF04: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844C88u; /* 0x007BAF09: mov eax, 0x844c88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAF0E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF20u);

L_007BAF20:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BAF20: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BAF23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF28u);

L_007BAF28:
    ecx = MEM32(ebp + (-0x44)); /* 0x007BAF28: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BAF2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF30u);

    goto L_007BAF30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAF30:
    edx = MEM32(esp + 0x8); /* 0x007BAF30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAF34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x007BAF37: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAF3A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAF3C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BAF41: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAF44: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAF46: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844CC4u; /* 0x007BAF4B: mov eax, 0x844cc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAF50: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF60u);

L_007BAF60:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BAF60: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BAF63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAF68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF68u);

L_007BAF68:
    ecx = MEM32(ebp + (-0x44)); /* 0x007BAF68: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BAF6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BAF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAF70u);

    goto L_007BAF70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BAF70:
    edx = MEM32(esp + 0x8); /* 0x007BAF70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BAF74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007BAF77: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAF7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAF7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BAF81: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BAF84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BAF86: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00844CF8u; /* 0x007BAF8B: mov eax, 0x844cf8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BAF90: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BAFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BAFA0u);

L_007BAFA0:
    ecx = ebp + 0x10; /* 0x007BAFA0: lea ecx, [ebp + 0x10] */
    goto L_0040A000; /* 0x007BAFA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
