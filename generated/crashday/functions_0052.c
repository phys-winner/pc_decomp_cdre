#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_006D5AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5AA0u);

L_006D5AA0:
    PUSH32(esp, ebp); /* 0x006D5AA0: push ebp */
    ebp = esp; /* 0x006D5AA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5AA3: push -1 */
    PUSH32(esp, 0x007C6B33u); /* 0x006D5AA5: push 0x7c6b33 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D5AAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5AB0: push eax */
    PUSH32(esp, ecx); /* 0x006D5AB1: push ecx */
    PUSH32(esp, esi); /* 0x006D5AB2: push esi */
    eax = MEM32(0x855000); /* 0x006D5AB3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D5AB8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D5ABA: push eax */
    eax = ebp + (-0xC); /* 0x006D5ABB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D5ABE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D5AC4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D5AC6: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00801A1Cu; /* 0x006D5AC9: mov dword ptr [esi], 0x801a1c */
    MEM32(esi + 0x4) = 0x00801A04u; /* 0x006D5ACF: mov dword ptr [esi + 4], 0x801a04 */
    MEM32(ebp + (-0x4)) = 1; /* 0x006D5AD6: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi + 0x14); /* 0x006D5ADD: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x006D5AE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5AFB; /* 0x006D5AE2: je 0x6d5afb */
L_006D5AE4:
    eax = MEM32(ecx); /* 0x006D5AE4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D5AE6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D5AE7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D5AEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5AFB; /* 0x006D5AEC: je 0x6d5afb */
L_006D5AEE:
    ecx = MEM32(esi + 0x10); /* 0x006D5AEE: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x00801998u); /* 0x006D5AF1: push 0x801998 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D5AF6: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006D5AFB:
    ecx = MEM32(esi + 0x18); /* 0x006D5AFB: mov ecx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x006D5AFE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5B19; /* 0x006D5B00: je 0x6d5b19 */
L_006D5B02:
    eax = MEM32(ecx); /* 0x006D5B02: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D5B04: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D5B05: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D5B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5B19; /* 0x006D5B0A: je 0x6d5b19 */
L_006D5B0C:
    ecx = MEM32(esi + 0x10); /* 0x006D5B0C: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x00801974u); /* 0x006D5B0F: push 0x801974 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D5B14: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006D5B19:
    eax = MEM32(esi + 0x10); /* 0x006D5B19: mov eax, dword ptr [esi + 0x10] */
    ecx = esi + 0x8; /* 0x006D5B1C: lea ecx, [esi + 8] */
    MEM32(esi + 0x4) = 0x008030A8u; /* 0x006D5B1F: mov dword ptr [esi + 4], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006D5B26: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006D5B2C: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0x00801A40u; /* 0x006D5B31: mov dword ptr [esi + 4], 0x801a40 */
    MEM32(esi) = 0x00801A40u; /* 0x006D5B38: mov dword ptr [esi], 0x801a40 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D5B3E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D5B41: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5B48: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D5B49: pop esi */
    esp = ebp; /* 0x006D5B4A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D5B4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5B4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5B4Eu);

    goto L_006D5B4E;
L_006D5850:
    PUSH32(esp, ebp); /* 0x006D5850: push ebp */
    ebp = esp; /* 0x006D5851: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D5853: push esi */
    esi = ecx; /* 0x006D5854: mov esi, ecx */
    RECOMP_CALL(sub_006D5AA0); /* 0x006D5856: call 0x6d5aa0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D585B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D586B; /* 0x006D585F: je 0x6d586b */
L_006D5861:
    PUSH32(esp, esi); /* 0x006D5861: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5862: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5868: add esp, 4 */
    _flag_k = FK_ADD;
L_006D586B:
    eax = esi; /* 0x006D586B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D586D: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D586E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D586F: ret 4 */
L_006D5B4E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x006D5B4E: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006D5850; /* 0x006D5B51: jmp 0x6d5850 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D5B56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5B56u);

    goto L_006D5B56;
L_006D5A90:
    /* test ecx, ecx */ /* 0x006D5A90: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5A9B; /* 0x006D5A92: je 0x6d5a9b */
L_006D5A94:
    eax = MEM32(ecx); /* 0x006D5A94: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006D5A96: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D5A98: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_006D5A9B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5A9B: ret  */
L_006D5B56:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x006D5B56: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006D5A90; /* 0x006D5B59: jmp 0x6d5a90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D5B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5B60u);

L_006D5B60:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFECu; /* 0x006D5B60: add ecx, -0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFu */ /* 0x006D5B63: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D5B8D; /* 0x006D5B66: ja 0x6d5b8d */
L_006D5B68:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x6D5B90)); goto _ljump; }
L_006D5B6F:
    eax = 8; /* 0x006D5B6F: mov eax, 8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B74: ret  */
L_006D5B75:
    eax = 5; /* 0x006D5B75: mov eax, 5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B7A: ret  */
L_006D5B7B:
    eax = 4; /* 0x006D5B7B: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B80: ret  */
L_006D5B81:
    eax = 2; /* 0x006D5B81: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B86: ret  */
L_006D5B87:
    eax = 0xAu; /* 0x006D5B87: mov eax, 0xa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B8C: ret  */
L_006D5B8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D5B8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5B8F: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D5B6Fu: goto L_006D5B6F;
      case 0x006D5B75u: goto L_006D5B75;
      case 0x006D5B7Bu: goto L_006D5B7B;
      case 0x006D5B81u: goto L_006D5B81;
      case 0x006D5B87u: goto L_006D5B87;
      case 0x006D5B8Du: goto L_006D5B8D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D5BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5BD0u);

L_006D5BD0:
    PUSH32(esp, ebx); /* 0x006D5BD0: push ebx */
    ebx = ecx; /* 0x006D5BD1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006D5BD3: push esi */
    esi = MEM32(ebx + 0x450); /* 0x006D5BD4: mov esi, dword ptr [ebx + 0x450] */
    /* test esi, esi */ /* 0x006D5BDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5BF9; /* 0x006D5BDC: je 0x6d5bf9 */
L_006D5BDE:
    eax = MEM32(esi + 0x4); /* 0x006D5BDE: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006D5BE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5BEF; /* 0x006D5BE3: je 0x6d5bef */
L_006D5BE5:
    PUSH32(esp, eax); /* 0x006D5BE5: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D5BE6: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5BEC: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5BEF:
    PUSH32(esp, esi); /* 0x006D5BEF: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5BF0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5BF6: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5BF9:
    eax = MEM32(ebx + 0x454); /* 0x006D5BF9: mov eax, dword ptr [ebx + 0x454] */
    /* test eax, eax */ /* 0x006D5BFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5C6D; /* 0x006D5C01: je 0x6d5c6d */
L_006D5C03:
    PUSH32(esp, edi); /* 0x006D5C03: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D5C04: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), edi */ /* 0x006D5C06: cmp dword ptr [eax + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D5C47; /* 0x006D5C09: jbe 0x6d5c47 */
L_006D5C0B:
    goto L_006D5C10; /* 0x006D5C0B: jmp 0x6d5c10 */
L_006D5C10:
    /* cmp MEM32(eax), 0 */ /* 0x006D5C10: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5C20; /* 0x006D5C13: jne 0x6d5c20 */
L_006D5C15:
    esi = MEM32(eax + 0x8); /* 0x006D5C15: mov esi, dword ptr [eax + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x006D5C18: imul esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x006D5C1B: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D5C26; /* 0x006D5C1E: jmp 0x6d5c26 */
L_006D5C20:
    eax = MEM32(eax + 0x4); /* 0x006D5C20: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax + edi * 4); /* 0x006D5C23: mov esi, dword ptr [eax + edi*4] */
L_006D5C26:
    /* test esi, esi */ /* 0x006D5C26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5C3B; /* 0x006D5C28: je 0x6d5c3b */
L_006D5C2A:
    ecx = esi; /* 0x006D5C2A: mov ecx, esi */
    RECOMP_CALL(sub_006D5C70); /* 0x006D5C2C: call 0x6d5c70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5C31: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5C32: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5C38: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5C3B:
    eax = MEM32(ebx + 0x454); /* 0x006D5C3B: mov eax, dword ptr [ebx + 0x454] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D5C41: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x006D5C42: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D5C10; /* 0x006D5C45: jb 0x6d5c10 */
L_006D5C47:
    esi = MEM32(ebx + 0x454); /* 0x006D5C47: mov esi, dword ptr [ebx + 0x454] */
    edi = POP32_VAL(esp); /* 0x006D5C4D: pop edi */
    /* test esi, esi */ /* 0x006D5C4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5C6D; /* 0x006D5C50: je 0x6d5c6d */
L_006D5C52:
    eax = MEM32(esi + 0x4); /* 0x006D5C52: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006D5C55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5C63; /* 0x006D5C57: je 0x6d5c63 */
L_006D5C59:
    PUSH32(esp, eax); /* 0x006D5C59: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D5C5A: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5C60: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5C63:
    PUSH32(esp, esi); /* 0x006D5C63: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5C64: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5C6A: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5C6D:
    esi = POP32_VAL(esp); /* 0x006D5C6D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5C6E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5C6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5C70u);

L_006D5C70:
    PUSH32(esp, ebx); /* 0x006D5C70: push ebx */
    ebx = ecx; /* 0x006D5C71: mov ebx, ecx */
    eax = MEM32(ebx + 0x138); /* 0x006D5C73: mov eax, dword ptr [ebx + 0x138] */
    /* test eax, eax */ /* 0x006D5C79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5CE4; /* 0x006D5C7B: je 0x6d5ce4 */
L_006D5C7D:
    PUSH32(esp, esi); /* 0x006D5C7D: push esi */
    PUSH32(esp, edi); /* 0x006D5C7E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D5C7F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), edi */ /* 0x006D5C81: cmp dword ptr [eax + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D5CBD; /* 0x006D5C84: jbe 0x6d5cbd */
L_006D5C86:
    /* cmp MEM32(eax), 0 */ /* 0x006D5C86: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5C96; /* 0x006D5C89: jne 0x6d5c96 */
L_006D5C8B:
    esi = MEM32(eax + 0x8); /* 0x006D5C8B: mov esi, dword ptr [eax + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x006D5C8E: imul esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x006D5C91: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D5C9C; /* 0x006D5C94: jmp 0x6d5c9c */
L_006D5C96:
    esi = MEM32(eax + 0x4); /* 0x006D5C96: mov esi, dword ptr [eax + 4] */
    esi = MEM32(esi + edi * 4); /* 0x006D5C99: mov esi, dword ptr [esi + edi*4] */
L_006D5C9C:
    /* test esi, esi */ /* 0x006D5C9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5CB1; /* 0x006D5C9E: je 0x6d5cb1 */
L_006D5CA0:
    ecx = esi; /* 0x006D5CA0: mov ecx, esi */
    RECOMP_CALL(sub_006D5D10); /* 0x006D5CA2: call 0x6d5d10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5CA7: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5CA8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5CAE: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5CB1:
    eax = MEM32(ebx + 0x138); /* 0x006D5CB1: mov eax, dword ptr [ebx + 0x138] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D5CB7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x006D5CB8: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D5C86; /* 0x006D5CBB: jb 0x6d5c86 */
L_006D5CBD:
    esi = MEM32(ebx + 0x138); /* 0x006D5CBD: mov esi, dword ptr [ebx + 0x138] */
    /* test esi, esi */ /* 0x006D5CC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5CE2; /* 0x006D5CC5: je 0x6d5ce2 */
L_006D5CC7:
    eax = MEM32(esi + 0x4); /* 0x006D5CC7: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006D5CCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5CD8; /* 0x006D5CCC: je 0x6d5cd8 */
L_006D5CCE:
    PUSH32(esp, eax); /* 0x006D5CCE: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D5CCF: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5CD5: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5CD8:
    PUSH32(esp, esi); /* 0x006D5CD8: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5CD9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5CDF: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5CE2:
    edi = POP32_VAL(esp); /* 0x006D5CE2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5CE3: pop esi */
L_006D5CE4:
    ebx = POP32_VAL(esp); /* 0x006D5CE4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5CE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5CF0u);

L_006D5CF0:
    PUSH32(esp, esi); /* 0x006D5CF0: push esi */
    esi = ecx; /* 0x006D5CF1: mov esi, ecx */
    RECOMP_CALL(sub_006D5D10); /* 0x006D5CF3: call 0x6d5d10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5CF8: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5CF9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5CFF: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006D5D02: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D5D04: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D5D05: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D5D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5D10u);

L_006D5D10:
    PUSH32(esp, ebp); /* 0x006D5D10: push ebp */
    ebp = esp; /* 0x006D5D11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D5D13: push ecx */
    PUSH32(esp, ebx); /* 0x006D5D14: push ebx */
    ebx = MEM32(0x7CC6A8); /* 0x006D5D15: mov ebx, dword ptr [0x7cc6a8] */
    PUSH32(esp, esi); /* 0x006D5D1B: push esi */
    esi = MEM32(0x7CC694); /* 0x006D5D1C: mov esi, dword ptr [0x7cc694] */
    PUSH32(esp, edi); /* 0x006D5D22: push edi */
    edi = ecx; /* 0x006D5D23: mov edi, ecx */
    eax = MEM32(edi + 0x14); /* 0x006D5D25: mov eax, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5D28: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006D5D2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D45; /* 0x006D5D2D: je 0x6d5d45 */
L_006D5D2F:
    ecx = MEM32(eax + 0x4); /* 0x006D5D2F: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006D5D32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D3F; /* 0x006D5D34: je 0x6d5d3f */
L_006D5D36:
    PUSH32(esp, ecx); /* 0x006D5D36: push ecx */
    RECOMP_ICALL(ebx); /* 0x006D5D37: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D5D39: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D3C: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D3F:
    PUSH32(esp, eax); /* 0x006D5D3F: push eax */
    RECOMP_ICALL(esi); /* 0x006D5D40: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D42: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D45:
    eax = MEM32(edi + 0x18); /* 0x006D5D45: mov eax, dword ptr [edi + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5D48: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006D5D4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D65; /* 0x006D5D4D: je 0x6d5d65 */
L_006D5D4F:
    ecx = MEM32(eax + 0x4); /* 0x006D5D4F: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006D5D52: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D5F; /* 0x006D5D54: je 0x6d5d5f */
L_006D5D56:
    PUSH32(esp, ecx); /* 0x006D5D56: push ecx */
    RECOMP_ICALL(ebx); /* 0x006D5D57: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D5D59: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D5C: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D5F:
    PUSH32(esp, eax); /* 0x006D5D5F: push eax */
    RECOMP_ICALL(esi); /* 0x006D5D60: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D62: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D65:
    eax = MEM32(edi + 0x1C); /* 0x006D5D65: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5D68: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006D5D6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D85; /* 0x006D5D6D: je 0x6d5d85 */
L_006D5D6F:
    ecx = MEM32(eax + 0x4); /* 0x006D5D6F: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006D5D72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D7F; /* 0x006D5D74: je 0x6d5d7f */
L_006D5D76:
    PUSH32(esp, ecx); /* 0x006D5D76: push ecx */
    RECOMP_ICALL(ebx); /* 0x006D5D77: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D5D79: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D7C: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D7F:
    PUSH32(esp, eax); /* 0x006D5D7F: push eax */
    RECOMP_ICALL(esi); /* 0x006D5D80: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D82: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D85:
    eax = MEM32(edi + 0x20); /* 0x006D5D85: mov eax, dword ptr [edi + 0x20] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5D88: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006D5D8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5DA5; /* 0x006D5D8D: je 0x6d5da5 */
L_006D5D8F:
    ecx = MEM32(eax + 0x4); /* 0x006D5D8F: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006D5D92: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5D9F; /* 0x006D5D94: je 0x6d5d9f */
L_006D5D96:
    PUSH32(esp, ecx); /* 0x006D5D96: push ecx */
    RECOMP_ICALL(ebx); /* 0x006D5D97: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D5D99: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5D9C: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5D9F:
    PUSH32(esp, eax); /* 0x006D5D9F: push eax */
    RECOMP_ICALL(esi); /* 0x006D5DA0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5DA2: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5DA5:
    eax = MEM32(edi + 0x24); /* 0x006D5DA5: mov eax, dword ptr [edi + 0x24] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5DA8: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006D5DAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5DC5; /* 0x006D5DAD: je 0x6d5dc5 */
L_006D5DAF:
    ecx = MEM32(eax + 0x4); /* 0x006D5DAF: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x006D5DB2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5DBF; /* 0x006D5DB4: je 0x6d5dbf */
L_006D5DB6:
    PUSH32(esp, ecx); /* 0x006D5DB6: push ecx */
    RECOMP_ICALL(ebx); /* 0x006D5DB7: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D5DB9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5DBC: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5DBF:
    PUSH32(esp, eax); /* 0x006D5DBF: push eax */
    RECOMP_ICALL(esi); /* 0x006D5DC0: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5DC2: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5DC5:
    edi = MEM32(edi + 0x28); /* 0x006D5DC5: mov edi, dword ptr [edi + 0x28] */
    /* test edi, edi */ /* 0x006D5DC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5DDF; /* 0x006D5DCA: je 0x6d5ddf */
L_006D5DCC:
    eax = MEM32(edi + 0x4); /* 0x006D5DCC: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x006D5DCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5DD9; /* 0x006D5DD1: je 0x6d5dd9 */
L_006D5DD3:
    PUSH32(esp, eax); /* 0x006D5DD3: push eax */
    RECOMP_ICALL(ebx); /* 0x006D5DD4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5DD6: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5DD9:
    PUSH32(esp, edi); /* 0x006D5DD9: push edi */
    RECOMP_ICALL(esi); /* 0x006D5DDA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5DDC: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5DDF:
    edi = POP32_VAL(esp); /* 0x006D5DDF: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5DE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5DE1: pop ebx */
    esp = ebp; /* 0x006D5DE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D5DE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5DE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5DF0u);

L_006D5DF0:
    PUSH32(esp, ebx); /* 0x006D5DF0: push ebx */
    ebx = ecx; /* 0x006D5DF1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006D5DF3: push esi */
    PUSH32(esp, edi); /* 0x006D5DF4: push edi */
    edi = MEM32(0x7CC694); /* 0x006D5DF5: mov edi, dword ptr [0x7cc694] */
    eax = MEM32(ebx + 0x4); /* 0x006D5DFB: mov eax, dword ptr [ebx + 4] */
    /* test eax, eax */ /* 0x006D5DFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E73; /* 0x006D5E00: je 0x6d5e73 */
L_006D5E02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D5E02: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), edi */ /* 0x006D5E04: cmp dword ptr [eax + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D5E47; /* 0x006D5E07: jbe 0x6d5e47 */
L_006D5E09:
    esp = esp; /* 0x006D5E09: lea esp, [esp] */
L_006D5E10:
    eax = MEM32(ebx + 0x4); /* 0x006D5E10: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM32(eax), 0 */ /* 0x006D5E13: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5E23; /* 0x006D5E16: jne 0x6d5e23 */
L_006D5E18:
    esi = MEM32(eax + 0x8); /* 0x006D5E18: mov esi, dword ptr [eax + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x006D5E1B: imul esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x006D5E1E: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D5E29; /* 0x006D5E21: jmp 0x6d5e29 */
L_006D5E23:
    eax = MEM32(eax + 0x4); /* 0x006D5E23: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax + edi * 4); /* 0x006D5E26: mov esi, dword ptr [eax + edi*4] */
L_006D5E29:
    /* test esi, esi */ /* 0x006D5E29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E3E; /* 0x006D5E2B: je 0x6d5e3e */
L_006D5E2D:
    ecx = esi; /* 0x006D5E2D: mov ecx, esi */
    RECOMP_CALL(sub_006D5BD0); /* 0x006D5E2F: call 0x6d5bd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5E34: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5E35: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5E3B: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5E3E:
    eax = MEM32(ebx + 0x4); /* 0x006D5E3E: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D5E41: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x006D5E42: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D5E10; /* 0x006D5E45: jb 0x6d5e10 */
L_006D5E47:
    esi = MEM32(ebx + 0x4); /* 0x006D5E47: mov esi, dword ptr [ebx + 4] */
    /* test esi, esi */ /* 0x006D5E4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E6D; /* 0x006D5E4C: je 0x6d5e6d */
L_006D5E4E:
    eax = MEM32(esi + 0x4); /* 0x006D5E4E: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006D5E51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E5F; /* 0x006D5E53: je 0x6d5e5f */
L_006D5E55:
    PUSH32(esp, eax); /* 0x006D5E55: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D5E56: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5E5C: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5E5F:
    edi = MEM32(0x7CC694); /* 0x006D5E5F: mov edi, dword ptr [0x7cc694] */
    PUSH32(esp, esi); /* 0x006D5E65: push esi */
    RECOMP_ICALL(edi); /* 0x006D5E66: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5E68: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006D5E73; /* 0x006D5E6B: jmp 0x6d5e73 */
L_006D5E6D:
    edi = MEM32(0x7CC694); /* 0x006D5E6D: mov edi, dword ptr [0x7cc694] */
L_006D5E73:
    esi = MEM32(ebx + 0x28); /* 0x006D5E73: mov esi, dword ptr [ebx + 0x28] */
    /* test esi, esi */ /* 0x006D5E76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E98; /* 0x006D5E78: je 0x6d5e98 */
L_006D5E7A:
    eax = MEM32(esi + 0x4); /* 0x006D5E7A: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006D5E7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5E8B; /* 0x006D5E7F: je 0x6d5e8b */
L_006D5E81:
    PUSH32(esp, eax); /* 0x006D5E81: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D5E82: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5E88: add esp, 4 */
    _flag_k = FK_ADD;
L_006D5E8B:
    PUSH32(esp, esi); /* 0x006D5E8B: push esi */
    RECOMP_ICALL(edi); /* 0x006D5E8C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5E8E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x28) = 0; /* 0x006D5E91: mov dword ptr [ebx + 0x28], 0 */
L_006D5E98:
    edi = POP32_VAL(esp); /* 0x006D5E98: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5E99: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5E9A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5E9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5EA0u);

L_006D5EA0:
    PUSH32(esp, esi); /* 0x006D5EA0: push esi */
    esi = ecx; /* 0x006D5EA1: mov esi, ecx */
    RECOMP_CALL(sub_006D5BD0); /* 0x006D5EA3: call 0x6d5bd0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5EA8: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5EA9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5EAF: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006D5EB2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D5EB4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D5EB5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D5EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5EC0u);

L_006D5EC0:
    PUSH32(esp, ebp); /* 0x006D5EC0: push ebp */
    ebp = esp; /* 0x006D5EC1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D5EC3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x006D5EC6: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006D5EC9: push esi */
    edx = MEM32(eax); /* 0x006D5ECA: mov edx, dword ptr [eax] */
    esi = MEM32(ecx); /* 0x006D5ECC: mov esi, dword ptr [ecx] */
    /* cmp edx, esi */ /* 0x006D5ECE: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D5EDA; /* 0x006D5ED0: jbe 0x6d5eda */
L_006D5ED2:
    eax = 1; /* 0x006D5ED2: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006D5ED7: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D5ED8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5ED9: ret  */
L_006D5EDA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_006D5EE2; /* 0x006D5EDA: jae 0x6d5ee2 */
L_006D5EDC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006D5EDC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D5EDF: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D5EE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5EE1: ret  */
L_006D5EE2:
    edx = MEM32(eax + 0x4); /* 0x006D5EE2: mov edx, dword ptr [eax + 4] */
    esi = MEM32(ecx + 0x4); /* 0x006D5EE5: mov esi, dword ptr [ecx + 4] */
    /* cmp edx, esi */ /* 0x006D5EE8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006D5ED2; /* 0x006D5EEA: ja 0x6d5ed2 */
L_006D5EEC:
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D5EDC; /* 0x006D5EEC: jb 0x6d5edc */
L_006D5EEE:
    edx = MEM32(eax + 0xC); /* 0x006D5EEE: mov edx, dword ptr [eax + 0xc] */
    esi = MEM32(ecx + 0xC); /* 0x006D5EF1: mov esi, dword ptr [ecx + 0xc] */
    /* cmp edx, esi */ /* 0x006D5EF4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006D5ED2; /* 0x006D5EF6: jg 0x6d5ed2 */
L_006D5EF8:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D5EDC; /* 0x006D5EF8: jl 0x6d5edc */
L_006D5EFA:
    eax = MEM32(eax + 0x8); /* 0x006D5EFA: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ecx + 0x8); /* 0x006D5EFD: mov ecx, dword ptr [ecx + 8] */
    /* cmp eax, ecx */ /* 0x006D5F00: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006D5ED2; /* 0x006D5F02: ja 0x6d5ed2 */
L_006D5F04:
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006D5F04: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x006D5F06: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D5F07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5F08: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5F10u);

L_006D5F10:
    PUSH32(esp, ebp); /* 0x006D5F10: push ebp */
    ebp = esp; /* 0x006D5F11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5F13: push -1 */
    PUSH32(esp, 0x007C6B58u); /* 0x006D5F15: push 0x7c6b58 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D5F1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5F20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006D5F21: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D5F24: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D5F29: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006D5F2B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x006D5F2E: push ebx */
    PUSH32(esp, esi); /* 0x006D5F2F: push esi */
    PUSH32(esp, edi); /* 0x006D5F30: push edi */
    PUSH32(esp, eax); /* 0x006D5F31: push eax */
    eax = ebp + (-0xC); /* 0x006D5F32: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D5F35: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D5F3B: mov esi, ecx */
    MEM32(ebp + (-0x4C)) = 0; /* 0x006D5F3D: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x006D5F44: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 4; /* 0x006D5F4B: mov dword ptr [ebp - 0x44], 4 */
    MEM32(ebp + (-0x40)) = 0; /* 0x006D5F52: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x006D5F59: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D5F60: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi), 0 */ /* 0x006D5F67: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5F76; /* 0x006D5F6A: jne 0x6d5f76 */
L_006D5F6C:
    edi = 0x80004005u; /* 0x006D5F6C: mov edi, 0x80004005 */
    goto L_006D6262; /* 0x006D5F71: jmp 0x6d6262 */
L_006D5F76:
    ebx = MEM32(0x7CC698); /* 0x006D5F76: mov ebx, dword ptr [0x7cc698] */
    PUSH32(esp, 0x14u); /* 0x006D5F7C: push 0x14 */
    RECOMP_ICALL(ebx); /* 0x006D5F7E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5F80: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D5F83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5FAB; /* 0x006D5F85: je 0x6d5fab */
L_006D5F87:
    MEM32(eax) = 1; /* 0x006D5F87: mov dword ptr [eax], 1 */
    MEM32(eax + 0x4) = 0; /* 0x006D5F8D: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D5F94: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D5F9B: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D5FA2: mov dword ptr [eax + 0x10], 0 */
    goto L_006D5FAD; /* 0x006D5FA9: jmp 0x6d5fad */
L_006D5FAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D5FAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D5FAD:
    MEM32(esi + 0x4) = eax; /* 0x006D5FAD: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x006D5FB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5FBE; /* 0x006D5FB2: jne 0x6d5fbe */
L_006D5FB4:
    edi = 0x8007000Eu; /* 0x006D5FB4: mov edi, 0x8007000e */
    goto L_006D6262; /* 0x006D5FB9: jmp 0x6d6262 */
L_006D5FBE:
    PUSH32(esp, 0x14u); /* 0x006D5FBE: push 0x14 */
    RECOMP_ICALL(ebx); /* 0x006D5FC0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5FC2: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D5FC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5FED; /* 0x006D5FC7: je 0x6d5fed */
L_006D5FC9:
    MEM32(eax) = 0; /* 0x006D5FC9: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D5FCF: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D5FD6: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D5FDD: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D5FE4: mov dword ptr [eax + 0x10], 0 */
    goto L_006D5FEF; /* 0x006D5FEB: jmp 0x6d5fef */
L_006D5FED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D5FED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D5FEF:
    MEM32(esi + 0x28) = eax; /* 0x006D5FEF: mov dword ptr [esi + 0x28], eax */
    /* test eax, eax */ /* 0x006D5FF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6000; /* 0x006D5FF4: jne 0x6d6000 */
L_006D5FF6:
    edi = 0x8007000Eu; /* 0x006D5FF6: mov edi, 0x8007000e */
    goto L_006D6262; /* 0x006D5FFB: jmp 0x6d6262 */
L_006D6000:
    ecx = ebp + (-0x24); /* 0x006D6000: lea ecx, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = 0x16u; /* 0x006D6003: mov dword ptr [ebp - 0x24], 0x16 */
    PUSH32(esp, ecx); /* 0x006D600A: push ecx */
    ecx = eax; /* 0x006D600B: mov ecx, eax */
    RECOMP_CALL(sub_006D77D0); /* 0x006D600D: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D6012: mov edi, eax */
    /* test edi, edi */ /* 0x006D6014: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6262; /* 0x006D6016: js 0x6d6262 */
L_006D601C:
    ecx = MEM32(esi + 0x28); /* 0x006D601C: mov ecx, dword ptr [esi + 0x28] */
    eax = ebp + (-0x24); /* 0x006D601F: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006D6022: push eax */
    MEM32(ebp + (-0x24)) = 0x18u; /* 0x006D6023: mov dword ptr [ebp - 0x24], 0x18 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D602A: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D602F: mov edi, eax */
    /* test edi, edi */ /* 0x006D6031: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6262; /* 0x006D6033: js 0x6d6262 */
L_006D6039:
    ecx = MEM32(esi + 0x28); /* 0x006D6039: mov ecx, dword ptr [esi + 0x28] */
    eax = ebp + (-0x24); /* 0x006D603C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006D603F: push eax */
    MEM32(ebp + (-0x24)) = 0x17u; /* 0x006D6040: mov dword ptr [ebp - 0x24], 0x17 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6047: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D604C: mov edi, eax */
    /* test edi, edi */ /* 0x006D604E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6262; /* 0x006D6050: js 0x6d6262 */
L_006D6056:
    ecx = MEM32(esi + 0x28); /* 0x006D6056: mov ecx, dword ptr [esi + 0x28] */
    eax = ebp + (-0x24); /* 0x006D6059: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006D605C: push eax */
    MEM32(ebp + (-0x24)) = 0x23u; /* 0x006D605D: mov dword ptr [ebp - 0x24], 0x23 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6064: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D6069: mov edi, eax */
    /* test edi, edi */ /* 0x006D606B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6262; /* 0x006D606D: js 0x6d6262 */
L_006D6073:
    eax = MEM32(esi); /* 0x006D6073: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006D6075: push eax */
    ecx = MEM32(eax); /* 0x006D6076: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x006D6078: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D607B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = eax; /* 0x006D607D: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x006D6080: mov dword ptr [ebp - 0x28], edi */
    /* test eax, eax */ /* 0x006D6083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6260; /* 0x006D6085: je 0x6d6260 */
L_006D608B:
    goto L_006D6090; /* 0x006D608B: jmp 0x6d6090 */
L_006D6090:
    PUSH32(esp, 0x458u); /* 0x006D6090: push 0x458 */
    RECOMP_ICALL(ebx); /* 0x006D6095: call ebx */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006D6097: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6099: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006D609C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D62A3; /* 0x006D609E: je 0x6d62a3 */
L_006D60A4:
    PUSH32(esp, 0x14u); /* 0x006D60A4: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D60A6: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D60AC: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D60AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D60D7; /* 0x006D60B1: je 0x6d60d7 */
L_006D60B3:
    MEM32(eax) = 0; /* 0x006D60B3: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D60B9: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0x10u; /* 0x006D60C0: mov dword ptr [eax + 8], 0x10 */
    MEM32(eax + 0xC) = 0; /* 0x006D60C7: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D60CE: mov dword ptr [eax + 0x10], 0 */
    goto L_006D60D9; /* 0x006D60D5: jmp 0x6d60d9 */
L_006D60D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D60D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D60D9:
    PUSH32(esp, 0x14u); /* 0x006D60D9: push 0x14 */
    MEM32(ebx + 0x450) = eax; /* 0x006D60DB: mov dword ptr [ebx + 0x450], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D60E1: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D60E7: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D60EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6112; /* 0x006D60EC: je 0x6d6112 */
L_006D60EE:
    MEM32(eax) = 1; /* 0x006D60EE: mov dword ptr [eax], 1 */
    MEM32(eax + 0x4) = 0; /* 0x006D60F4: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D60FB: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D6102: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6109: mov dword ptr [eax + 0x10], 0 */
    goto L_006D6114; /* 0x006D6110: jmp 0x6d6114 */
L_006D6112:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6112: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D6114:
    /* cmp MEM32(ebx + 0x450), 0 */ /* 0x006D6114: cmp dword ptr [ebx + 0x450], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x450)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x454) = eax; /* 0x006D611B: mov dword ptr [ebx + 0x454], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D629B; /* 0x006D6121: je 0x6d629b */
L_006D6127:
    /* test eax, eax */ /* 0x006D6127: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D629B; /* 0x006D6129: je 0x6d629b */
L_006D612F:
    MEM32(ebx) = edi; /* 0x006D612F: mov dword ptr [ebx], edi */
    eax = ebx + 0x4; /* 0x006D6131: lea eax, [ebx + 4] */
    ecx = MEM32(esi); /* 0x006D6134: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006D6136: push eax */
    PUSH32(esp, 0); /* 0x006D6137: push 0 */
    PUSH32(esp, edi); /* 0x006D6139: push edi */
    edx = MEM32(ecx); /* 0x006D613A: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D613C: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x006D613D: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x28); /* 0x006D6140: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D6143: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = 0; /* 0x006D6145: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x006D614C: mov dword ptr [ebp - 0x2c], ecx */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006D614F: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D61F8; /* 0x006D6152: jbe 0x6d61f8 */
L_006D6158:
    goto L_006D6160; /* 0x006D6158: jmp 0x6d6160 */
L_006D6160:
    PUSH32(esp, ecx); /* 0x006D6160: push ecx */
    ecx = MEM32(esi + 0x28); /* 0x006D6161: mov ecx, dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_006D7890); /* 0x006D6164: call 0x6d7890 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x006D6169: mov edx, dword ptr [eax] */
    eax = MEM32(esi); /* 0x006D616B: mov eax, dword ptr [esi] */
    PUSH32(esp, edx); /* 0x006D616D: push edx */
    PUSH32(esp, edi); /* 0x006D616E: push edi */
    PUSH32(esp, eax); /* 0x006D616F: push eax */
    ecx = MEM32(eax); /* 0x006D6170: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x30)) = edx; /* 0x006D6172: mov dword ptr [ebp - 0x30], edx */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x006D6175: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D6178: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x006D617A: mov dword ptr [ebp - 0x34], eax */
    /* test eax, eax */ /* 0x006D617D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D61E2; /* 0x006D617F: je 0x6d61e2 */
L_006D6181:
    ecx = MEM32(esi); /* 0x006D6181: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x20); /* 0x006D6183: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x006D6186: push edx */
    PUSH32(esp, edi); /* 0x006D6187: push edi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x006D6188: push dword ptr [ebp - 0x30] */
    eax = MEM32(ecx); /* 0x006D618B: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006D618D: push dword ptr [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x006D6190: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x006D6191: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x006D6194: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x006D6197: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D61DC; /* 0x006D619A: jb 0x6d61dc */
L_006D619C:
    eax = MEM32(ebp + (-0x1C)); /* 0x006D619C: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x006D619F: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D61DC; /* 0x006D61A2: jb 0x6d61dc */
L_006D61A4:
    ecx = MEM32(ebp + (-0x14)); /* 0x006D61A4: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_006D5B60); /* 0x006D61A7: call 0x6d5b60 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(esi + 0x14) */ /* 0x006D61AC: cmp eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D61DC; /* 0x006D61AF: jb 0x6d61dc */
L_006D61B1:
    ecx = MEM32(ebx + 0x450); /* 0x006D61B1: mov ecx, dword ptr [ebx + 0x450] */
    eax = ebp + (-0x20); /* 0x006D61B7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x006D61BA: push eax */
    RECOMP_CALL(sub_006D77D0); /* 0x006D61BB: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x006D61C0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006D61C3: push eax */
    ecx = ebp + (-0x4C); /* 0x006D61C4: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_006D78C0); /* 0x006D61C7: call 0x6d78c0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D61CC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D61DC; /* 0x006D61CE: jne 0x6d61dc */
L_006D61D0:
    eax = ebp + (-0x14); /* 0x006D61D0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006D61D3: push eax */
    ecx = ebp + (-0x4C); /* 0x006D61D4: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_006D77D0); /* 0x006D61D7: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D61DC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D61DC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x34)) */ /* 0x006D61DD: cmp edi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6181; /* 0x006D61E0: jb 0x6d6181 */
L_006D61E2:
    ecx = MEM32(ebp + (-0x2C)); /* 0x006D61E2: mov ecx, dword ptr [ebp - 0x2c] */
    eax = MEM32(esi + 0x28); /* 0x006D61E5: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D61E8: inc ecx */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x28)); /* 0x006D61E9: mov edi, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x006D61EC: mov dword ptr [ebp - 0x2c], ecx */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x006D61EF: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6160; /* 0x006D61F2: jb 0x6d6160 */
L_006D61F8:
    ecx = MEM32(ebx + 0x450); /* 0x006D61F8: mov ecx, dword ptr [ebx + 0x450] */
    PUSH32(esp, 0x006D5EC0u); /* 0x006D61FE: push 0x6d5ec0 */
    PUSH32(esp, 0x10u); /* 0x006D6203: push 0x10 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x006D6205: push dword ptr [ecx + 0xc] */
    PUSH32(esp, 0); /* 0x006D6208: push 0 */
    RECOMP_CALL(sub_006D7890); /* 0x006D620A: call 0x6d7890 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006D620F: push eax */
    RECOMP_ICALL(MEM32(0x7CC4C0)); /* 0x006D6210: call dword ptr [0x7cc4c0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6216: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x4C); /* 0x006D6219: lea eax, [ebp - 0x4c] */
    ecx = esi; /* 0x006D621C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006D621E: push eax */
    PUSH32(esp, ebx); /* 0x006D621F: push ebx */
    RECOMP_CALL(sub_006D62B0); /* 0x006D6220: call 0x6d62b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D6225: mov edi, eax */
    /* test edi, edi */ /* 0x006D6227: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6291; /* 0x006D6229: js 0x6d6291 */
L_006D622B:
    eax = MEM32(ebx + 0x454); /* 0x006D622B: mov eax, dword ptr [ebx + 0x454] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006D6231: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6241; /* 0x006D6235: jne 0x6d6241 */
L_006D6237:
    PUSH32(esp, ecx); /* 0x006D6237: push ecx */
    ecx = ebx; /* 0x006D6238: mov ecx, ebx */
    RECOMP_CALL(sub_006D5EA0); /* 0x006D623A: call 0x6d5ea0 */
    RECOMP_FLAGS_IN();
    goto L_006D624A; /* 0x006D623F: jmp 0x6d624a */
L_006D6241:
    ecx = MEM32(esi + 0x4); /* 0x006D6241: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x006D6244: push ebx */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6245: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D624A:
    edi = MEM32(ebp + (-0x28)); /* 0x006D624A: mov edi, dword ptr [ebp - 0x28] */
    ebx = MEM32(0x7CC698); /* 0x006D624D: mov ebx, dword ptr [0x7cc698] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D6253: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = edi; /* 0x006D6254: mov dword ptr [ebp - 0x28], edi */
    /* cmp edi, MEM32(ebp + (-0x38)) */ /* 0x006D6257: cmp edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6090; /* 0x006D625A: jb 0x6d6090 */
L_006D6260:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D6260: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D6262:
    eax = MEM32(ebp + (-0x48)); /* 0x006D6262: mov eax, dword ptr [ebp - 0x48] */
    /* test eax, eax */ /* 0x006D6265: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6273; /* 0x006D6267: je 0x6d6273 */
L_006D6269:
    PUSH32(esp, eax); /* 0x006D6269: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D626A: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6270: add esp, 4 */
    _flag_k = FK_ADD;
L_006D6273:
    eax = edi; /* 0x006D6273: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D6275: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D6278: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D627F: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D6280: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6281: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D6282: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006D6283: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D6286: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6288: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D628D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D628F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D6290: ret  */
L_006D6291:
    PUSH32(esp, ecx); /* 0x006D6291: push ecx */
    ecx = ebx; /* 0x006D6292: mov ecx, ebx */
    RECOMP_CALL(sub_006D5EA0); /* 0x006D6294: call 0x6d5ea0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D6262; /* 0x006D6299: jmp 0x6d6262 */
L_006D629B:
    PUSH32(esp, ecx); /* 0x006D629B: push ecx */
    ecx = ebx; /* 0x006D629C: mov ecx, ebx */
    RECOMP_CALL(sub_006D5EA0); /* 0x006D629E: call 0x6d5ea0 */
    RECOMP_FLAGS_IN();
L_006D62A3:
    edi = 0x8007000Eu; /* 0x006D62A3: mov edi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_006D6262; /* 0x006D62A8: jmp 0x6d6262 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D62B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D62B0u);

L_006D62B0:
    PUSH32(esp, ebp); /* 0x006D62B0: push ebp */
    ebp = esp; /* 0x006D62B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006D62B3: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D62B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D62BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D62BD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006D62C0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006D62C3: push ebx */
    PUSH32(esp, esi); /* 0x006D62C4: push esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x006D62C5: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D62C8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x006D62CA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006D62CD: push edi */
    edi = MEM32(0x7CC694); /* 0x006D62CE: mov edi, dword ptr [0x7cc694] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006D62D4: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006D62D7: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x10)) = 1; /* 0x006D62DA: mov dword ptr [ebp - 0x10], 1 */
    MEM32(ebp + (-0xC)) = 3; /* 0x006D62E1: mov dword ptr [ebp - 0xc], 3 */
    MEM32(ebp + (-0x8)) = 2; /* 0x006D62E8: mov dword ptr [ebp - 8], 2 */
    /* nop */ /* 0x006D62EF: nop  */
L_006D62F0:
    PUSH32(esp, 0x13Cu); /* 0x006D62F0: push 0x13c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D62F5: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D62FB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D62FD: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006D6300: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D640C; /* 0x006D6302: je 0x6d640c */
L_006D6308:
    PUSH32(esp, 0x14u); /* 0x006D6308: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D630A: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6310: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D6313: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D633B; /* 0x006D6315: je 0x6d633b */
L_006D6317:
    MEM32(eax) = 1; /* 0x006D6317: mov dword ptr [eax], 1 */
    MEM32(eax + 0x4) = 0; /* 0x006D631D: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D6324: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D632B: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6332: mov dword ptr [eax + 0x10], 0 */
    goto L_006D633D; /* 0x006D6339: jmp 0x6d633d */
L_006D633B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D633B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D633D:
    MEM32(esi + 0x138) = eax; /* 0x006D633D: mov dword ptr [esi + 0x138], eax */
    /* test eax, eax */ /* 0x006D6343: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D63FF; /* 0x006D6345: je 0x6d63ff */
L_006D634B:
    eax = MEM32(ebp + (-0x14)); /* 0x006D634B: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + ebx * 4 + (-0x10)); /* 0x006D634E: mov ecx, dword ptr [ebp + ebx*4 - 0x10] */
    eax = MEM32(eax); /* 0x006D6352: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x006D6354: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x006D6356: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x4) = ecx; /* 0x006D6359: mov dword ptr [esi + 4], ecx */
    edx = MEM32(eax); /* 0x006D635C: mov edx, dword ptr [eax] */
    eax = esi + 0x8; /* 0x006D635E: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x006D6361: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x006D6362: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x006D6365: push ecx */
    edi = MEM32(edx); /* 0x006D6366: mov edi, dword ptr [edx] */
    PUSH32(esp, MEM32(eax)); /* 0x006D6368: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006D636A: push edx */
    RECOMP_ICALL(MEM32(edi + 0x38)); /* 0x006D636B: call dword ptr [edi + 0x38] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D636E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D6387; /* 0x006D6370: jns 0x6d6387 */
L_006D6372:
    ecx = esi; /* 0x006D6372: mov ecx, esi */
    RECOMP_CALL(sub_006D5C70); /* 0x006D6374: call 0x6d5c70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC694); /* 0x006D6379: mov edi, dword ptr [0x7cc694] */
    PUSH32(esp, esi); /* 0x006D637F: push esi */
    RECOMP_ICALL(edi); /* 0x006D6380: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6382: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006D63BA; /* 0x006D6385: jmp 0x6d63ba */
L_006D6387:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006D6387: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x006D638A: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x006D638D: push esi */
    RECOMP_CALL(sub_006D6430); /* 0x006D638E: call 0x6d6430 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D6393: mov edi, eax */
    /* test edi, edi */ /* 0x006D6395: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D63D9; /* 0x006D6397: js 0x6d63d9 */
L_006D6399:
    eax = MEM32(esi + 0x138); /* 0x006D6399: mov eax, dword ptr [esi + 0x138] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006D639F: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6372; /* 0x006D63A3: je 0x6d6372 */
L_006D63A5:
    eax = MEM32(ebp + (-0x14)); /* 0x006D63A5: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x006D63A8: push esi */
    ecx = MEM32(eax + 0x454); /* 0x006D63A9: mov ecx, dword ptr [eax + 0x454] */
    RECOMP_CALL(sub_006D77D0); /* 0x006D63AF: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC694); /* 0x006D63B4: mov edi, dword ptr [0x7cc694] */
L_006D63BA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006D63BA: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 3 */ /* 0x006D63BB: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D62F0; /* 0x006D63BE: jb 0x6d62f0 */
L_006D63C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D63C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D63C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006D63C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D63C8: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D63C9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D63CC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D63CE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D63D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D63D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D63D6: ret 8 */
L_006D63D9:
    ecx = esi; /* 0x006D63D9: mov ecx, esi */
    RECOMP_CALL(sub_006D5C70); /* 0x006D63DB: call 0x6d5c70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D63E0: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D63E1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D63E7: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x006D63EA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006D63EC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D63ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D63EE: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D63EF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D63F2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D63F4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D63F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D63FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D63FC: ret 8 */
L_006D63FF:
    ecx = esi; /* 0x006D63FF: mov ecx, esi */
    RECOMP_CALL(sub_006D5C70); /* 0x006D6401: call 0x6d5c70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D6406: push esi */
    RECOMP_ICALL(edi); /* 0x006D6407: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6409: add esp, 4 */
    _flag_k = FK_ADD;
L_006D640C:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D640C: mov ecx, dword ptr [ebp - 4] */
    eax = 0x8007000Eu; /* 0x006D640F: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x006D6414: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6415: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D6416: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D6418: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6419: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D641E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6420: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D6421: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D6430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6430u);

L_006D6430:
    PUSH32(esp, ebp); /* 0x006D6430: push ebp */
    ebp = esp; /* 0x006D6431: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006D6433: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6436: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D643B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D643D: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(0x809AF0); /* 0x006D6440: movdqa xmm0, xmmword ptr [0x809af0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D6448: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006D644A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006D644B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006D644E: push esi */
    PUSH32(esp, edi); /* 0x006D644F: push edi */
    edi = ecx; /* 0x006D6450: mov edi, ecx */
    MEM32(ebp + (-0xC)) = 0x19u; /* 0x006D6452: mov dword ptr [ebp - 0xc], 0x19 */
    ecx = MEM32(ebp + 0xC); /* 0x006D6459: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x006D645C: mov dword ptr [ebp - 0x38], ecx */
    xmm_st(ebp + (-0x1C), _xmm[0]); /* 0x006D645F: movdqu xmmword ptr [ebp - 0x1c], xmm0 */
    MEM32(ebp + (-0x8)) = 0x18u; /* 0x006D6464: mov dword ptr [ebp - 8], 0x18 */
    MEM16(ebp + (-0x28)) = (uint16_t)(0x100u); /* 0x006D646B: mov word ptr [ebp - 0x28], 0x100 */
    MEM32(ebp + (-0x34)) = edx; /* 0x006D6471: mov dword ptr [ebp - 0x34], edx */
    /* cmp MEM32(ecx + 0xC), edx */ /* 0x006D6474: cmp dword ptr [ecx + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D6786; /* 0x006D6477: jbe 0x6d6786 */
L_006D647D:
    ecx = ecx; /* 0x006D647D: lea ecx, [ecx] */
L_006D6480:
    /* cmp MEM32(ecx), 0 */ /* 0x006D6480: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6490; /* 0x006D6483: jne 0x6d6490 */
L_006D6485:
    eax = MEM32(ecx + 0x8); /* 0x006D6485: mov eax, dword ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006D6488: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x006D648B: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    goto L_006D6496; /* 0x006D648E: jmp 0x6d6496 */
L_006D6490:
    eax = MEM32(ecx + 0x4); /* 0x006D6490: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + edx * 4); /* 0x006D6493: mov eax, dword ptr [eax + edx*4] */
L_006D6496:
    eax = MEM32(eax); /* 0x006D6496: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D6498: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = eax; /* 0x006D649A: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x006D649D: mov dword ptr [ebp - 0x2c], ecx */
L_006D64A0:
    eax = MEM32(ebp + ecx * 4 + (-0x1C)); /* 0x006D64A0: mov eax, dword ptr [ebp + ecx*4 - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x006D64A4: add eax, -0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFu */ /* 0x006D64A7: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D64CF; /* 0x006D64AA: ja 0x6d64cf */
L_006D64AC:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D67C4)); goto _ljump; }
L_006D64B3:
    eax = 8; /* 0x006D64B3: mov eax, 8 */
    goto L_006D64D1; /* 0x006D64B8: jmp 0x6d64d1 */
L_006D64BA:
    eax = 1; /* 0x006D64BA: mov eax, 1 */
    goto L_006D64D1; /* 0x006D64BF: jmp 0x6d64d1 */
L_006D64C1:
    eax = 4; /* 0x006D64C1: mov eax, 4 */
    goto L_006D64D1; /* 0x006D64C6: jmp 0x6d64d1 */
L_006D64C8:
    eax = 2; /* 0x006D64C8: mov eax, 2 */
    goto L_006D64D1; /* 0x006D64CD: jmp 0x6d64d1 */
L_006D64CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D64CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D64D1:
    /* cmp eax, MEM32(edi + 0x18) */ /* 0x006D64D1: cmp eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6766; /* 0x006D64D4: jb 0x6d6766 */
L_006D64DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D64DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x006D64DC: mov dword ptr [ebp - 0x24], esi */
    /* nop */ /* 0x006D64DF: nop  */
L_006D64E0:
    SET_LO8(eax, MEM8(ebp + esi + (-0x28))); /* 0x006D64E0: mov al, byte ptr [ebp + esi - 0x28] */
    MEM8(ebp + (-0x1D)) = (uint8_t)(LO8(eax)); /* 0x006D64E4: mov byte ptr [ebp - 0x1d], al */
    /* test LO8(eax), LO8(eax) */ /* 0x006D64E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D64F0; /* 0x006D64E9: jne 0x6d64f0 */
L_006D64EB:
    /* cmp MEM8(edi + 0x26), LO8(eax) */ /* 0x006D64EB: cmp byte ptr [edi + 0x26], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x26)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006D64F4; /* 0x006D64EE: jmp 0x6d64f4 */
L_006D64F0:
    /* cmp MEM8(edi + 0x27), 0 */ /* 0x006D64F0: cmp byte ptr [edi + 0x27], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x27)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_006D64F4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_006D6756; /* 0x006D64F4: jne 0x6d6756 */
L_006D64FA:
    esi = MEM32(ebp + (-0x2C)); /* 0x006D64FA: mov esi, dword ptr [ebp - 0x2c] */
    edx = MEM32(edi); /* 0x006D64FD: mov edx, dword ptr [edi] */
    eax = (uint32_t)LO8(eax); /* 0x006D64FF: movzx eax, al */
    PUSH32(esp, eax); /* 0x006D6502: push eax */
    eax = MEM32(ebp + esi * 4 + (-0x1C)); /* 0x006D6503: mov eax, dword ptr [ebp + esi*4 - 0x1c] */
    ecx = MEM32(edx); /* 0x006D6507: mov ecx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x006D6509: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x006D650A: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x006D650D: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x006D6510: push dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x006D6512: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x006D6513: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x24)); /* 0x006D6516: mov esi, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x006D6519: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6756; /* 0x006D651B: js 0x6d6756 */
L_006D6521:
    PUSH32(esp, 0x2Cu); /* 0x006D6521: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D6523: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D6529: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D652B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006D652E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D67AC; /* 0x006D6530: je 0x6d67ac */
L_006D6536:
    PUSH32(esp, 0x14u); /* 0x006D6536: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D6538: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D653E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D6541: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6569; /* 0x006D6543: je 0x6d6569 */
L_006D6545:
    MEM32(eax) = 0; /* 0x006D6545: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D654B: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D6552: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D6559: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6560: mov dword ptr [eax + 0x10], 0 */
    goto L_006D656B; /* 0x006D6567: jmp 0x6d656b */
L_006D6569:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6569: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D656B:
    PUSH32(esp, 0x14u); /* 0x006D656B: push 0x14 */
    MEM32(esi + 0x14) = eax; /* 0x006D656D: mov dword ptr [esi + 0x14], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D6570: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6576: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D6579: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D65A1; /* 0x006D657B: je 0x6d65a1 */
L_006D657D:
    MEM32(eax) = 0; /* 0x006D657D: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D6583: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D658A: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D6591: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6598: mov dword ptr [eax + 0x10], 0 */
    goto L_006D65A3; /* 0x006D659F: jmp 0x6d65a3 */
L_006D65A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D65A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D65A3:
    PUSH32(esp, 0x14u); /* 0x006D65A3: push 0x14 */
    MEM32(esi + 0x18) = eax; /* 0x006D65A5: mov dword ptr [esi + 0x18], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D65A8: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D65AE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D65B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D65D9; /* 0x006D65B3: je 0x6d65d9 */
L_006D65B5:
    MEM32(eax) = 0; /* 0x006D65B5: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D65BB: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D65C2: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D65C9: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D65D0: mov dword ptr [eax + 0x10], 0 */
    goto L_006D65DB; /* 0x006D65D7: jmp 0x6d65db */
L_006D65D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D65D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D65DB:
    PUSH32(esp, 0x14u); /* 0x006D65DB: push 0x14 */
    MEM32(esi + 0x1C) = eax; /* 0x006D65DD: mov dword ptr [esi + 0x1c], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D65E0: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D65E6: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D65E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6611; /* 0x006D65EB: je 0x6d6611 */
L_006D65ED:
    MEM32(eax) = 0; /* 0x006D65ED: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D65F3: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 8; /* 0x006D65FA: mov dword ptr [eax + 8], 8 */
    MEM32(eax + 0xC) = 0; /* 0x006D6601: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6608: mov dword ptr [eax + 0x10], 0 */
    goto L_006D6613; /* 0x006D660F: jmp 0x6d6613 */
L_006D6611:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6611: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D6613:
    PUSH32(esp, 0x14u); /* 0x006D6613: push 0x14 */
    MEM32(esi + 0x20) = eax; /* 0x006D6615: mov dword ptr [esi + 0x20], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D6618: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D661E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D6621: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6649; /* 0x006D6623: je 0x6d6649 */
L_006D6625:
    MEM32(eax) = 0; /* 0x006D6625: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D662B: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D6632: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D6639: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6640: mov dword ptr [eax + 0x10], 0 */
    goto L_006D664B; /* 0x006D6647: jmp 0x6d664b */
L_006D6649:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6649: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D664B:
    PUSH32(esp, 0x14u); /* 0x006D664B: push 0x14 */
    MEM32(esi + 0x24) = eax; /* 0x006D664D: mov dword ptr [esi + 0x24], eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D6650: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6656: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D6659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6681; /* 0x006D665B: je 0x6d6681 */
L_006D665D:
    MEM32(eax) = 0; /* 0x006D665D: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x006D6663: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 4; /* 0x006D666A: mov dword ptr [eax + 8], 4 */
    MEM32(eax + 0xC) = 0; /* 0x006D6671: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D6678: mov dword ptr [eax + 0x10], 0 */
    goto L_006D6683; /* 0x006D667F: jmp 0x6d6683 */
L_006D6681:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6681: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D6683:
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006D6683: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x28) = eax; /* 0x006D6687: mov dword ptr [esi + 0x28], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D668A: je 0x6d679b */
L_006D6690:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x006D6690: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D6694: je 0x6d679b */
L_006D669A:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006D669A: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D669E: je 0x6d679b */
L_006D66A4:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x006D66A4: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D66A8: je 0x6d679b */
L_006D66AE:
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x006D66AE: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D66B2: je 0x6d679b */
L_006D66B8:
    /* test eax, eax */ /* 0x006D66B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D679B; /* 0x006D66BA: je 0x6d679b */
L_006D66C0:
    eax = MEM32(ebx); /* 0x006D66C0: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x006D66C2: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(esi) = eax; /* 0x006D66C5: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0x4); /* 0x006D66C7: mov eax, dword ptr [ebx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x006D66CA: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x006D66CD: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi + 0x8) = eax; /* 0x006D66D0: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + ecx * 4 + (-0x1C)); /* 0x006D66D3: mov eax, dword ptr [ebp + ecx*4 - 0x1c] */
    MEM32(esi + 0xC) = eax; /* 0x006D66D7: mov dword ptr [esi + 0xc], eax */
    SET_LO8(eax, MEM8(ebp + (-0x1D))); /* 0x006D66DA: mov al, byte ptr [ebp - 0x1d] */
    MEM8(esi + 0x10) = (uint8_t)(LO8(eax)); /* 0x006D66DD: mov byte ptr [esi + 0x10], al */
    /* cmp MEM8(edi + 0x24), 0 */ /* 0x006D66E0: cmp byte ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6701; /* 0x006D66E4: je 0x6d6701 */
L_006D66E6:
    PUSH32(esp, esi); /* 0x006D66E6: push esi */
    ecx = edi; /* 0x006D66E7: mov ecx, edi */
    RECOMP_CALL(sub_006D6810); /* 0x006D66E9: call 0x6d6810 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x006D66EE: mov eax, dword ptr [esi + 0x14] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006D66F1: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6701; /* 0x006D66F5: jne 0x6d6701 */
L_006D66F7:
    PUSH32(esp, ecx); /* 0x006D66F7: push ecx */
    ecx = esi; /* 0x006D66F8: mov ecx, esi */
    RECOMP_CALL(sub_006D5CF0); /* 0x006D66FA: call 0x6d5cf0 */
    RECOMP_FLAGS_IN();
    goto L_006D6753; /* 0x006D66FF: jmp 0x6d6753 */
L_006D6701:
    PUSH32(esp, esi); /* 0x006D6701: push esi */
    ecx = edi; /* 0x006D6702: mov ecx, edi */
    RECOMP_CALL(sub_006D6960); /* 0x006D6704: call 0x6d6960 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x006D6709: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006D670C: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D671C; /* 0x006D6710: jne 0x6d671c */
L_006D6712:
    PUSH32(esp, ecx); /* 0x006D6712: push ecx */
    ecx = esi; /* 0x006D6713: mov ecx, esi */
    RECOMP_CALL(sub_006D5CF0); /* 0x006D6715: call 0x6d5cf0 */
    RECOMP_FLAGS_IN();
    goto L_006D6753; /* 0x006D671A: jmp 0x6d6753 */
L_006D671C:
    PUSH32(esp, esi); /* 0x006D671C: push esi */
    ecx = edi; /* 0x006D671D: mov ecx, edi */
    RECOMP_CALL(sub_006D6AD0); /* 0x006D671F: call 0x6d6ad0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D6724: push esi */
    PUSH32(esp, ebx); /* 0x006D6725: push ebx */
    ecx = edi; /* 0x006D6726: mov ecx, edi */
    RECOMP_CALL(sub_006D6B90); /* 0x006D6728: call 0x6d6b90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x24); /* 0x006D672D: mov eax, dword ptr [esi + 0x24] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x006D6730: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6740; /* 0x006D6734: jne 0x6d6740 */
L_006D6736:
    PUSH32(esp, ecx); /* 0x006D6736: push ecx */
    ecx = esi; /* 0x006D6737: mov ecx, esi */
    RECOMP_CALL(sub_006D5CF0); /* 0x006D6739: call 0x6d5cf0 */
    RECOMP_FLAGS_IN();
    goto L_006D6753; /* 0x006D673E: jmp 0x6d6753 */
L_006D6740:
    PUSH32(esp, esi); /* 0x006D6740: push esi */
    PUSH32(esp, ebx); /* 0x006D6741: push ebx */
    RECOMP_CALL(sub_006D6C80); /* 0x006D6742: call 0x6d6c80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x138); /* 0x006D6747: mov ecx, dword ptr [ebx + 0x138] */
    PUSH32(esp, esi); /* 0x006D674D: push esi */
    RECOMP_CALL(sub_006D77D0); /* 0x006D674E: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6753:
    esi = MEM32(ebp + (-0x24)); /* 0x006D6753: mov esi, dword ptr [ebp - 0x24] */
L_006D6756:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D6756: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = esi; /* 0x006D6757: mov dword ptr [ebp - 0x24], esi */
    /* cmp esi, 2 */ /* 0x006D675A: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D64E0; /* 0x006D675D: jb 0x6d64e0 */
L_006D6763:
    ecx = MEM32(ebp + (-0x2C)); /* 0x006D6763: mov ecx, dword ptr [ebp - 0x2c] */
L_006D6766:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D6766: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x006D6767: mov dword ptr [ebp - 0x2c], ecx */
    /* cmp ecx, 6 */ /* 0x006D676A: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D64A0; /* 0x006D676D: jb 0x6d64a0 */
L_006D6773:
    edx = MEM32(ebp + (-0x34)); /* 0x006D6773: mov edx, dword ptr [ebp - 0x34] */
    ecx = MEM32(ebp + (-0x38)); /* 0x006D6776: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D6779: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x34)) = edx; /* 0x006D677A: mov dword ptr [ebp - 0x34], edx */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x006D677D: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6480; /* 0x006D6780: jb 0x6d6480 */
L_006D6786:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D6786: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D6788: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6789: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D678A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D678B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D678E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6790: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D6795: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6797: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D6798: ret 8 */
L_006D679B:
    ecx = esi; /* 0x006D679B: mov ecx, esi */
    RECOMP_CALL(sub_006D5D10); /* 0x006D679D: call 0x6d5d10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D67A2: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D67A3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D67A9: add esp, 4 */
    _flag_k = FK_ADD;
L_006D67AC:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D67AC: mov ecx, dword ptr [ebp - 4] */
    eax = 0x8007000Eu; /* 0x006D67AF: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x006D67B4: pop edi */
    esi = POP32_VAL(esp); /* 0x006D67B5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D67B6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D67B8: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D67B9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D67BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D67C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D67C1: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D64B3u: goto L_006D64B3;
      case 0x006D64BAu: goto L_006D64BA;
      case 0x006D64C1u: goto L_006D64C1;
      case 0x006D64C8u: goto L_006D64C8;
      case 0x006D64CFu: goto L_006D64CF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D6810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6810u);

L_006D6810:
    PUSH32(esp, ebp); /* 0x006D6810: push ebp */
    ebp = esp; /* 0x006D6811: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x006D6813: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6816: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D681B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D681D: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(0x809B00); /* 0x006D6820: movdqa xmm0, xmmword ptr [0x809b00] */
    PUSH32(esp, ebx); /* 0x006D6828: push ebx */
    PUSH32(esp, esi); /* 0x006D6829: push esi */
    PUSH32(esp, edi); /* 0x006D682A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D682B: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x006D682E: mov ebx, ecx */
    xmm_st(ebp + (-0x1C), _xmm[0]); /* 0x006D6830: movdqu xmmword ptr [ebp - 0x1c], xmm0 */
    MEM32(ebp + (-0xC)) = 0x4Fu; /* 0x006D6835: mov dword ptr [ebp - 0xc], 0x4f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D683C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = 0x47u; /* 0x006D683E: mov dword ptr [ebp - 8], 0x47 */
L_006D6845:
    edx = MEM32(ebp + esi * 4 + (-0x1C)); /* 0x006D6845: mov edx, dword ptr [ebp + esi*4 - 0x1c] */
    MEM32(ebp + (-0x20)) = edx; /* 0x006D6849: mov dword ptr [ebp - 0x20], edx */
    eax = edx + (-0x47); /* 0x006D684C: lea eax, [edx - 0x47] */
    /* cmp eax, 9 */ /* 0x006D684F: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D6877; /* 0x006D6852: ja 0x6d6877 */
L_006D6854:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D6904)); goto _ljump; }
L_006D685B:
    ecx = 0x10u; /* 0x006D685B: mov ecx, 0x10 */
    goto L_006D6879; /* 0x006D6860: jmp 0x6d6879 */
L_006D6862:
    ecx = 0xFu; /* 0x006D6862: mov ecx, 0xf */
    goto L_006D6879; /* 0x006D6867: jmp 0x6d6879 */
L_006D6869:
    ecx = 0x18u; /* 0x006D6869: mov ecx, 0x18 */
    goto L_006D6879; /* 0x006D686E: jmp 0x6d6879 */
L_006D6870:
    ecx = 0x20u; /* 0x006D6870: mov ecx, 0x20 */
    goto L_006D6879; /* 0x006D6875: jmp 0x6d6879 */
L_006D6877:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D6877: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D6879:
    /* cmp ecx, MEM32(ebx + 0x1C) */ /* 0x006D6879: cmp ecx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D68E5; /* 0x006D687C: jb 0x6d68e5 */
L_006D687E:
    /* cmp eax, 9 */ /* 0x006D687E: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D689F; /* 0x006D6881: ja 0x6d689f */
L_006D6883:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D692C)); goto _ljump; }
L_006D688A:
    eax = 1; /* 0x006D688A: mov eax, 1 */
    goto L_006D68A1; /* 0x006D688F: jmp 0x6d68a1 */
L_006D6891:
    eax = 8; /* 0x006D6891: mov eax, 8 */
    goto L_006D68A1; /* 0x006D6896: jmp 0x6d68a1 */
L_006D6898:
    eax = 4; /* 0x006D6898: mov eax, 4 */
    goto L_006D68A1; /* 0x006D689D: jmp 0x6d68a1 */
L_006D689F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D689F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D68A1:
    /* cmp eax, MEM32(ebx + 0x20) */ /* 0x006D68A1: cmp eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D68E5; /* 0x006D68A4: jb 0x6d68e5 */
L_006D68A6:
    ecx = MEM32(ebx); /* 0x006D68A6: mov ecx, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x006D68A8: push edx */
    PUSH32(esp, 1); /* 0x006D68A9: push 1 */
    PUSH32(esp, 2); /* 0x006D68AB: push 2 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006D68AD: push dword ptr [edi + 8] */
    eax = MEM32(ecx); /* 0x006D68B0: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D68B2: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x006D68B5: push dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x006D68B7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006D68B8: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D68BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D68E5; /* 0x006D68BD: js 0x6d68e5 */
L_006D68BF:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x006D68BF: push dword ptr [ebp - 0x20] */
    eax = MEM32(ebx); /* 0x006D68C2: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006D68C4: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006D68C7: push dword ptr [edi + 8] */
    ecx = MEM32(eax); /* 0x006D68CA: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D68CC: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x006D68CF: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x006D68D1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D68D2: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D68D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D68E5; /* 0x006D68D7: js 0x6d68e5 */
L_006D68D9:
    ecx = MEM32(edi + 0x14); /* 0x006D68D9: mov ecx, dword ptr [edi + 0x14] */
    eax = ebp + (-0x20); /* 0x006D68DC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x006D68DF: push eax */
    RECOMP_CALL(sub_006D77D0); /* 0x006D68E0: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D68E5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D68E5: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 6 */ /* 0x006D68E6: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6845; /* 0x006D68E9: jb 0x6d6845 */
L_006D68EF:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D68EF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006D68F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D68F3: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D68F4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D68F6: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D68F7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D68FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D68FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D68FF: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D685Bu: goto L_006D685B;
      case 0x006D6862u: goto L_006D6862;
      case 0x006D6869u: goto L_006D6869;
      case 0x006D6870u: goto L_006D6870;
      case 0x006D6877u: goto L_006D6877;
      case 0x006D688Au: goto L_006D688A;
      case 0x006D6891u: goto L_006D6891;
      case 0x006D6898u: goto L_006D6898;
      case 0x006D689Fu: goto L_006D689F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D6960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6960u);

L_006D6960:
    PUSH32(esp, ebp); /* 0x006D6960: push ebp */
    ebp = esp; /* 0x006D6961: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x006D6963: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6966: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D696B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D696D: mov dword ptr [ebp - 4], eax */
    _xmm[1] = xmm_ld(0x809A60); /* 0x006D6970: movdqa xmm1, xmmword ptr [0x809a60] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D6978: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006D697A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006D697B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006D697E: push esi */
    PUSH32(esp, edi); /* 0x006D697F: push edi */
    MEM32(ebp + (-0x58)) = ecx; /* 0x006D6980: mov dword ptr [ebp - 0x58], ecx */
    esi = ebp + (-0x38); /* 0x006D6983: lea esi, [ebp - 0x38] */
    MEM32(ebp + (-0x4C)) = ebx; /* 0x006D6986: mov dword ptr [ebp - 0x4c], ebx */
    esp = esp; /* 0x006D6989: lea esp, [esp] */
L_006D6990:
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x006D6990: movd xmm0, edx */
    eax = edx + 0x4; /* 0x006D6994: lea eax, [edx + 4] */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x006D6997: pshufd xmm0, xmm0, 0 */
    esi = esi + 0x20; /* 0x006D699C: lea esi, [esi + 0x20] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] += _s.u32[_k]; } /* 0x006D699F: paddd xmm0, xmm1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006D69A3: add edx, 8 */
    _flag_k = FK_ADD;
    xmm_st(esi + (-0x30), _xmm[0]); /* 0x006D69A6: movdqu xmmword ptr [esi - 0x30], xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D69AB: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; _xmm[0].u32[0] = _s.u32[0]; _xmm[0].u32[1] = _s.u32[0]; _xmm[0].u32[2] = _s.u32[0]; _xmm[0].u32[3] = _s.u32[0]; } /* 0x006D69AF: pshufd xmm0, xmm0, 0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] += _s.u32[_k]; } /* 0x006D69B4: paddd xmm0, xmm1 */
    xmm_st(esi + (-0x20), _xmm[0]); /* 0x006D69B8: movdqu xmmword ptr [esi - 0x20], xmm0 */
    /* cmp edx, 0x10u */ /* 0x006D69BD: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D6990; /* 0x006D69C0: jl 0x6d6990 */
L_006D69C2:
    /* cmp edx, 0x11u */ /* 0x006D69C2: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D69D1; /* 0x006D69C5: jge 0x6d69d1 */
L_006D69C7:
    MEM32(ebp + edx * 4 + (-0x48)) = edx; /* 0x006D69C7: mov dword ptr [ebp + edx*4 - 0x48], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D69CB: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 0x11u */ /* 0x006D69CC: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D69C7; /* 0x006D69CF: jl 0x6d69c7 */
L_006D69D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D69D1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D69D3:
    eax = MEM32(ebp + edi * 4 + (-0x48)); /* 0x006D69D3: mov eax, dword ptr [ebp + edi*4 - 0x48] */
    esi = ebp + (-0x5C); /* 0x006D69D7: lea esi, [ebp - 0x5c] */
    ecx = MEM32(ecx); /* 0x006D69DA: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x006D69DC: push esi */
    PUSH32(esp, eax); /* 0x006D69DD: push eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x006D69DE: mov dword ptr [ebp - 0x50], eax */
    eax = (uint32_t)MEM8(ebx + 0x10); /* 0x006D69E1: movzx eax, byte ptr [ebx + 0x10] */
    edx = MEM32(ecx); /* 0x006D69E5: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x006D69E7: push eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x006D69E8: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x006D69EB: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x006D69EE: push dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x006D69F0: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x006D69F1: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D69F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D6AAE; /* 0x006D69F6: js 0x6d6aae */
L_006D69FC:
    esi = MEM32(ebx + 0x18); /* 0x006D69FC: mov esi, dword ptr [ebx + 0x18] */
    ecx = MEM32(esi + 0x8); /* 0x006D69FF: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x006D6A02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6AA2; /* 0x006D6A04: je 0x6d6aa2 */
L_006D6A0A:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006D6A0A: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6A19; /* 0x006D6A0E: je 0x6d6a19 */
L_006D6A10:
    eax = MEM32(esi + 0xC); /* 0x006D6A10: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D6A13: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x006D6A14: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D6A6A; /* 0x006D6A17: jbe 0x6d6a6a */
L_006D6A19:
    ebx = MEM32(esi + 0x10); /* 0x006D6A19: mov ebx, dword ptr [esi + 0x10] */
    /* test ebx, ebx */ /* 0x006D6A1C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6A27; /* 0x006D6A1E: jne 0x6d6a27 */
L_006D6A20:
    ebx = 0x10u; /* 0x006D6A20: mov ebx, 0x10 */
    goto L_006D6A29; /* 0x006D6A25: jmp 0x6d6a29 */
L_006D6A27:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x006D6A27: add ebx, ebx */
    _flag_k = FK_ADD;
L_006D6A29:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x006D6A29: imul ecx, ebx */
    PUSH32(esp, ecx); /* 0x006D6A2C: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x006D6A2D: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6A32: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x54)) = eax; /* 0x006D6A35: mov dword ptr [ebp - 0x54], eax */
    /* test eax, eax */ /* 0x006D6A38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6A9F; /* 0x006D6A3A: je 0x6d6a9f */
L_006D6A3C:
    edx = MEM32(esi + 0x4); /* 0x006D6A3C: mov edx, dword ptr [esi + 4] */
    /* test edx, edx */ /* 0x006D6A3F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6A61; /* 0x006D6A41: je 0x6d6a61 */
L_006D6A43:
    ecx = MEM32(esi + 0xC); /* 0x006D6A43: mov ecx, dword ptr [esi + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x8)); /* 0x006D6A46: imul ecx, dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x006D6A4A: push ecx */
    PUSH32(esp, edx); /* 0x006D6A4B: push edx */
    PUSH32(esp, eax); /* 0x006D6A4C: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006D6A4D: call 0x780838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006D6A52: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D6A55: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x54)); /* 0x006D6A5B: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6A5E: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006D6A61:
    MEM32(esi + 0x10) = ebx; /* 0x006D6A61: mov dword ptr [esi + 0x10], ebx */
    ebx = MEM32(ebp + (-0x4C)); /* 0x006D6A64: mov ebx, dword ptr [ebp - 0x4c] */
    MEM32(esi + 0x4) = eax; /* 0x006D6A67: mov dword ptr [esi + 4], eax */
L_006D6A6A:
    /* cmp MEM32(esi), 0 */ /* 0x006D6A6A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6A8E; /* 0x006D6A6D: jne 0x6d6a8e */
L_006D6A6F:
    ecx = MEM32(esi + 0x8); /* 0x006D6A6F: mov ecx, dword ptr [esi + 8] */
    eax = ebp + (-0x50); /* 0x006D6A72: lea eax, [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x006D6A75: push ecx */
    PUSH32(esp, eax); /* 0x006D6A76: push eax */
    eax = MEM32(esi + 0xC); /* 0x006D6A77: mov eax, dword ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D6A7A: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x006D6A7D: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D6A80: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006D6A81: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D6A86: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006D6A89: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    goto L_006D6AA2; /* 0x006D6A8C: jmp 0x6d6aa2 */
L_006D6A8E:
    ecx = MEM32(esi + 0xC); /* 0x006D6A8E: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x50); /* 0x006D6A91: lea edx, [ebp - 0x50] */
    eax = MEM32(esi + 0x4); /* 0x006D6A94: mov eax, dword ptr [esi + 4] */
    MEM32(eax + ecx * 4) = edx; /* 0x006D6A97: mov dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006D6A9A: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    goto L_006D6AA2; /* 0x006D6A9D: jmp 0x6d6aa2 */
L_006D6A9F:
    ebx = MEM32(ebp + (-0x4C)); /* 0x006D6A9F: mov ebx, dword ptr [ebp - 0x4c] */
L_006D6AA2:
    ecx = MEM32(ebx + 0x1C); /* 0x006D6AA2: mov ecx, dword ptr [ebx + 0x1c] */
    eax = ebp + (-0x5C); /* 0x006D6AA5: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x006D6AA8: push eax */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6AA9: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6AAE:
    ecx = MEM32(ebp + (-0x58)); /* 0x006D6AAE: mov ecx, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D6AB1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 0x11u */ /* 0x006D6AB2: cmp edi, 0x11 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D69D3; /* 0x006D6AB5: jb 0x6d69d3 */
L_006D6ABB:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D6ABB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006D6ABE: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6ABF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D6AC0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D6AC2: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6AC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D6AC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6ACA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D6ACB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D6AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6AD0u);

L_006D6AD0:
    PUSH32(esp, ebp); /* 0x006D6AD0: push ebp */
    ebp = esp; /* 0x006D6AD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006D6AD3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D6AD6: push ebx */
    PUSH32(esp, esi); /* 0x006D6AD7: push esi */
    PUSH32(esp, edi); /* 0x006D6AD8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D6AD9: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D6ADC: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D6ADF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x006D6AE1: mov dword ptr [ebp - 8], ecx */
    edx = MEM32(edi + 0x14); /* 0x006D6AE4: mov edx, dword ptr [edi + 0x14] */
    /* cmp MEM32(edx + 0xC), ecx */ /* 0x006D6AE7: cmp dword ptr [edx + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D6B7D; /* 0x006D6AEA: jbe 0x6d6b7d */
L_006D6AF0:
    /* cmp MEM32(edx), 0 */ /* 0x006D6AF0: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6B00; /* 0x006D6AF3: jne 0x6d6b00 */
L_006D6AF5:
    eax = MEM32(edx + 0x8); /* 0x006D6AF5: mov eax, dword ptr [edx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D6AF8: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x006D6AFB: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    goto L_006D6B06; /* 0x006D6AFE: jmp 0x6d6b06 */
L_006D6B00:
    eax = MEM32(edx + 0x4); /* 0x006D6B00: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + ecx * 4); /* 0x006D6B03: mov eax, dword ptr [eax + ecx*4] */
L_006D6B06:
    eax = MEM32(eax); /* 0x006D6B06: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D6B08: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x006D6B0A: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x18); /* 0x006D6B0D: mov eax, dword ptr [edi + 0x18] */
    /* cmp MEM32(eax + 0xC), esi */ /* 0x006D6B10: cmp dword ptr [eax + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D6B6D; /* 0x006D6B13: jbe 0x6d6b6d */
L_006D6B15:
    /* cmp MEM32(eax), 0 */ /* 0x006D6B15: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6B25; /* 0x006D6B18: jne 0x6d6b25 */
L_006D6B1A:
    ecx = MEM32(eax + 0x8); /* 0x006D6B1A: mov ecx, dword ptr [eax + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x006D6B1D: imul ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x006D6B20: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D6B2B; /* 0x006D6B23: jmp 0x6d6b2b */
L_006D6B25:
    eax = MEM32(eax + 0x4); /* 0x006D6B25: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi * 4); /* 0x006D6B28: mov ecx, dword ptr [eax + esi*4] */
L_006D6B2B:
    eax = MEM32(ebp + (-0xC)); /* 0x006D6B2B: mov eax, dword ptr [ebp - 0xc] */
    ebx = MEM32(ecx); /* 0x006D6B2E: mov ebx, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006D6B30: push 0 */
    PUSH32(esp, ebx); /* 0x006D6B32: push ebx */
    ecx = MEM32(eax); /* 0x006D6B33: mov ecx, dword ptr [eax] */
    eax = (uint32_t)MEM8(edi + 0x10); /* 0x006D6B35: movzx eax, byte ptr [edi + 0x10] */
    PUSH32(esp, eax); /* 0x006D6B39: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D6B3A: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x006D6B3D: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D6B3F: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x006D6B42: push dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x006D6B44: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x006D6B45: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D6B48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D6B61; /* 0x006D6B4A: jns 0x6d6b61 */
L_006D6B4C:
    eax = MEM32(ebp + 0x8); /* 0x006D6B4C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x20); /* 0x006D6B4F: mov ecx, dword ptr [edi + 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006D6B52: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x14); /* 0x006D6B55: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006D6B58: push eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x006D6B59: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6B5C: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6B61:
    eax = MEM32(edi + 0x18); /* 0x006D6B61: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D6B64: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax + 0xC) */ /* 0x006D6B65: cmp esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6B15; /* 0x006D6B68: jb 0x6d6b15 */
L_006D6B6A:
    ecx = MEM32(ebp + (-0x8)); /* 0x006D6B6A: mov ecx, dword ptr [ebp - 8] */
L_006D6B6D:
    edx = MEM32(edi + 0x14); /* 0x006D6B6D: mov edx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D6B70: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x006D6B71: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, MEM32(edx + 0xC) */ /* 0x006D6B74: cmp ecx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6AF0; /* 0x006D6B77: jb 0x6d6af0 */
L_006D6B7D:
    edi = POP32_VAL(esp); /* 0x006D6B7D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6B7E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D6B7F: pop ebx */
    esp = ebp; /* 0x006D6B80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6B82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D6B83: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D6B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6B90u);

L_006D6B90:
    PUSH32(esp, ebp); /* 0x006D6B90: push ebp */
    ebp = esp; /* 0x006D6B91: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D6B93: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006D6B94: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006D6B97: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006D6B98: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006D6B9B: push edi */
    eax = MEM32(ebx + 0x24); /* 0x006D6B9C: mov eax, dword ptr [ebx + 0x24] */
    edi = ecx; /* 0x006D6B9F: mov edi, ecx */
    /* test eax, 0x00010000u */ /* 0x006D6BA1: test eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C46; /* 0x006D6BA6: je 0x6d6c46 */
L_006D6BAC:
    /* test eax, 0x00100000u */ /* 0x006D6BAC: test eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6BE2; /* 0x006D6BB1: je 0x6d6be2 */
L_006D6BB3:
    ecx = MEM32(edi + 0x8); /* 0x006D6BB3: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x006D6BB6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6BCF; /* 0x006D6BB8: je 0x6d6bcf */
L_006D6BBA:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006D6BBA: push dword ptr [esi + 0xc] */
    eax = ebx + 0x8; /* 0x006D6BBD: lea eax, [ebx + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006D6BC0: push dword ptr [esi + 8] */
    PUSH32(esp, 3); /* 0x006D6BC3: push 3 */
    PUSH32(esp, eax); /* 0x006D6BC5: push eax */
    RECOMP_ICALL(ecx); /* 0x006D6BC6: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6BC8: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x006D6BCB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6BE2; /* 0x006D6BCD: je 0x6d6be2 */
L_006D6BCF:
    ecx = MEM32(esi + 0x24); /* 0x006D6BCF: mov ecx, dword ptr [esi + 0x24] */
    eax = ebp + 0x8; /* 0x006D6BD2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D6BD5: push eax */
    MEM32(ebp + 0x8) = 3; /* 0x006D6BD6: mov dword ptr [ebp + 8], 3 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6BDD: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6BE2:
    ecx = MEM32(edi + 0x8); /* 0x006D6BE2: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x006D6BE5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6BFE; /* 0x006D6BE7: je 0x6d6bfe */
L_006D6BE9:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006D6BE9: push dword ptr [esi + 0xc] */
    eax = ebx + 0x8; /* 0x006D6BEC: lea eax, [ebx + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006D6BEF: push dword ptr [esi + 8] */
    PUSH32(esp, 2); /* 0x006D6BF2: push 2 */
    PUSH32(esp, eax); /* 0x006D6BF4: push eax */
    RECOMP_ICALL(ecx); /* 0x006D6BF5: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6BF7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x006D6BFA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C11; /* 0x006D6BFC: je 0x6d6c11 */
L_006D6BFE:
    ecx = MEM32(esi + 0x24); /* 0x006D6BFE: mov ecx, dword ptr [esi + 0x24] */
    eax = ebp + 0x8; /* 0x006D6C01: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D6C04: push eax */
    MEM32(ebp + 0x8) = 2; /* 0x006D6C05: mov dword ptr [ebp + 8], 2 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6C0C: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6C11:
    /* cmp MEM8(edi + 0x25), 0 */ /* 0x006D6C11: cmp byte ptr [edi + 0x25], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x25)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6C46; /* 0x006D6C15: je 0x6d6c46 */
L_006D6C17:
    ecx = MEM32(edi + 0x8); /* 0x006D6C17: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x006D6C1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C33; /* 0x006D6C1C: je 0x6d6c33 */
L_006D6C1E:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006D6C1E: push dword ptr [esi + 0xc] */
    eax = ebx + 0x8; /* 0x006D6C21: lea eax, [ebx + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006D6C24: push dword ptr [esi + 8] */
    PUSH32(esp, 1); /* 0x006D6C27: push 1 */
    PUSH32(esp, eax); /* 0x006D6C29: push eax */
    RECOMP_ICALL(ecx); /* 0x006D6C2A: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6C2C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x006D6C2F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C46; /* 0x006D6C31: je 0x6d6c46 */
L_006D6C33:
    ecx = MEM32(esi + 0x24); /* 0x006D6C33: mov ecx, dword ptr [esi + 0x24] */
    eax = ebp + 0x8; /* 0x006D6C36: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D6C39: push eax */
    MEM32(ebp + 0x8) = 1; /* 0x006D6C3A: mov dword ptr [ebp + 8], 1 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6C41: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6C46:
    ecx = MEM32(edi + 0x8); /* 0x006D6C46: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x006D6C49: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C62; /* 0x006D6C4B: je 0x6d6c62 */
L_006D6C4D:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006D6C4D: push dword ptr [esi + 0xc] */
    eax = ebx + 0x8; /* 0x006D6C50: lea eax, [ebx + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006D6C53: push dword ptr [esi + 8] */
    PUSH32(esp, 0); /* 0x006D6C56: push 0 */
    PUSH32(esp, eax); /* 0x006D6C58: push eax */
    RECOMP_ICALL(ecx); /* 0x006D6C59: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6C5B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x006D6C5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6C75; /* 0x006D6C60: je 0x6d6c75 */
L_006D6C62:
    ecx = MEM32(esi + 0x24); /* 0x006D6C62: mov ecx, dword ptr [esi + 0x24] */
    eax = ebp + 0x8; /* 0x006D6C65: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D6C68: push eax */
    MEM32(ebp + 0x8) = 0; /* 0x006D6C69: mov dword ptr [ebp + 8], 0 */
    RECOMP_CALL(sub_006D77D0); /* 0x006D6C70: call 0x6d77d0 */
    RECOMP_FLAGS_IN();
L_006D6C75:
    edi = POP32_VAL(esp); /* 0x006D6C75: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6C76: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D6C77: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D6C78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D6C79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D6C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6C80u);

L_006D6C80:
    PUSH32(esp, ebp); /* 0x006D6C80: push ebp */
    ebp = esp; /* 0x006D6C81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006D6C83: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6C86: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D6C8B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D6C8D: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x006D6C90: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006D6C93: push ebx */
    PUSH32(esp, esi); /* 0x006D6C94: push esi */
    PUSH32(esp, edi); /* 0x006D6C95: push edi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x006D6C96: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D6C99: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0x80000000u; /* 0x006D6C9B: mov dword ptr [ebp - 0x1c], 0x80000000 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006D6CA2: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 1; /* 0x006D6CA9: mov dword ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x10)) = 2; /* 0x006D6CB0: mov dword ptr [ebp - 0x10], 2 */
    MEM32(ebp + (-0xC)) = 4; /* 0x006D6CB7: mov dword ptr [ebp - 0xc], 4 */
    MEM32(ebp + (-0x8)) = 8; /* 0x006D6CBE: mov dword ptr [ebp - 8], 8 */
L_006D6CC5:
    /* cmp MEM8(ecx + 0x10), 0 */ /* 0x006D6CC5: cmp byte ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + edi * 4 + (-0x1C)); /* 0x006D6CC9: mov eax, dword ptr [ebp + edi*4 - 0x1c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x006D6CCD: mov dword ptr [ebp - 0x24], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6CED; /* 0x006D6CD0: je 0x6d6ced */
L_006D6CD2:
    /* cmp eax, 2 */ /* 0x006D6CD2: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6D9B; /* 0x006D6CD5: je 0x6d6d9b */
L_006D6CDB:
    /* cmp eax, 4 */ /* 0x006D6CDB: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6D9B; /* 0x006D6CDE: je 0x6d6d9b */
L_006D6CE4:
    /* cmp eax, 8 */ /* 0x006D6CE4: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6D9B; /* 0x006D6CE7: je 0x6d6d9b */
L_006D6CED:
    /* test eax, eax */ /* 0x006D6CED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6CFD; /* 0x006D6CEF: je 0x6d6cfd */
L_006D6CF1:
    edx = MEM32(ebp + 0x8); /* 0x006D6CF1: mov edx, dword ptr [ebp + 8] */
    /* test MEM32(edx + 0x1C), eax */ /* 0x006D6CF4: test dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6D9B; /* 0x006D6CF7: je 0x6d6d9b */
L_006D6CFD:
    esi = MEM32(ecx + 0x28); /* 0x006D6CFD: mov esi, dword ptr [ecx + 0x28] */
    ecx = MEM32(esi + 0x8); /* 0x006D6D00: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x006D6D03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6D98; /* 0x006D6D05: je 0x6d6d98 */
L_006D6D0B:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006D6D0B: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6D1A; /* 0x006D6D0F: je 0x6d6d1a */
L_006D6D11:
    eax = MEM32(esi + 0xC); /* 0x006D6D11: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D6D14: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x006D6D15: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D6D68; /* 0x006D6D18: jbe 0x6d6d68 */
L_006D6D1A:
    ebx = MEM32(esi + 0x10); /* 0x006D6D1A: mov ebx, dword ptr [esi + 0x10] */
    /* test ebx, ebx */ /* 0x006D6D1D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6D28; /* 0x006D6D1F: jne 0x6d6d28 */
L_006D6D21:
    ebx = 0x10u; /* 0x006D6D21: mov ebx, 0x10 */
    goto L_006D6D2A; /* 0x006D6D26: jmp 0x6d6d2a */
L_006D6D28:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x006D6D28: add ebx, ebx */
    _flag_k = FK_ADD;
L_006D6D2A:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x006D6D2A: imul ecx, ebx */
    PUSH32(esp, ecx); /* 0x006D6D2D: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x006D6D2E: call 0x77f3df */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6D33: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x006D6D36: mov dword ptr [ebp - 0x28], eax */
    /* test eax, eax */ /* 0x006D6D39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6D98; /* 0x006D6D3B: je 0x6d6d98 */
L_006D6D3D:
    edx = MEM32(esi + 0x4); /* 0x006D6D3D: mov edx, dword ptr [esi + 4] */
    /* test edx, edx */ /* 0x006D6D40: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6D62; /* 0x006D6D42: je 0x6d6d62 */
L_006D6D44:
    ecx = MEM32(esi + 0xC); /* 0x006D6D44: mov ecx, dword ptr [esi + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x8)); /* 0x006D6D47: imul ecx, dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x006D6D4B: push ecx */
    PUSH32(esp, edx); /* 0x006D6D4C: push edx */
    PUSH32(esp, eax); /* 0x006D6D4D: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006D6D4E: call 0x780838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006D6D53: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D6D56: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x006D6D5C: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D6D5F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006D6D62:
    MEM32(esi + 0x4) = eax; /* 0x006D6D62: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x10) = ebx; /* 0x006D6D65: mov dword ptr [esi + 0x10], ebx */
L_006D6D68:
    /* cmp MEM32(esi), 0 */ /* 0x006D6D68: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D6D89; /* 0x006D6D6B: jne 0x6d6d89 */
L_006D6D6D:
    ecx = MEM32(esi + 0x8); /* 0x006D6D6D: mov ecx, dword ptr [esi + 8] */
    eax = ebp + (-0x24); /* 0x006D6D70: lea eax, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x006D6D73: push ecx */
    PUSH32(esp, eax); /* 0x006D6D74: push eax */
    eax = MEM32(esi + 0xC); /* 0x006D6D75: mov eax, dword ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D6D78: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x006D6D7B: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D6D7E: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006D6D7F: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D6D84: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006D6D95; /* 0x006D6D87: jmp 0x6d6d95 */
L_006D6D89:
    ecx = MEM32(esi + 0xC); /* 0x006D6D89: mov ecx, dword ptr [esi + 0xc] */
    edx = ebp + (-0x24); /* 0x006D6D8C: lea edx, [ebp - 0x24] */
    eax = MEM32(esi + 0x4); /* 0x006D6D8F: mov eax, dword ptr [esi + 4] */
    MEM32(eax + ecx * 4) = edx; /* 0x006D6D92: mov dword ptr [eax + ecx*4], edx */
L_006D6D95:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006D6D95: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
L_006D6D98:
    ecx = MEM32(ebp + (-0x20)); /* 0x006D6D98: mov ecx, dword ptr [ebp - 0x20] */
L_006D6D9B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D6D9B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 6 */ /* 0x006D6D9C: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D6CC5; /* 0x006D6D9F: jb 0x6d6cc5 */
L_006D6DA5:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D6DA5: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006D6DA8: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6DA9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D6DAA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D6DAC: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6DAD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D6DB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6DB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D6DB5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D6DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6DC0u);

L_006D6DC0:
    PUSH32(esp, ebp); /* 0x006D6DC0: push ebp */
    ebp = esp; /* 0x006D6DC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D6DC3: push ecx */
    PUSH32(esp, esi); /* 0x006D6DC4: push esi */
    esi = MEM32(0x87CBBC); /* 0x006D6DC5: mov esi, dword ptr [0x87cbbc] */
    PUSH32(esp, edi); /* 0x006D6DCB: push edi */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006D6DCC: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x10); /* 0x006D6DD0: mov eax, dword ptr [esi + 0x10] */
    edi = MEM32(eax + 0x10C); /* 0x006D6DD3: mov edi, dword ptr [eax + 0x10c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6E2C; /* 0x006D6DD9: je 0x6d6e2c */
L_006D6DDB:
    eax = MEM32(edi); /* 0x006D6DDB: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x006D6DDD: push ebx */
    ebx = esi + 0x18; /* 0x006D6DDE: lea ebx, [esi + 0x18] */
    PUSH32(esp, ebx); /* 0x006D6DE1: push ebx */
    PUSH32(esp, 0); /* 0x006D6DE2: push 0 */
    PUSH32(esp, edi); /* 0x006D6DE4: push edi */
    RECOMP_ICALL(MEM32(eax + 0x98)); /* 0x006D6DE5: call dword ptr [eax + 0x98] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D6DEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6E2C; /* 0x006D6DED: jne 0x6d6e2c */
L_006D6DEF:
    eax = MEM32(ebx); /* 0x006D6DEF: mov eax, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x006D6DF1: push eax */
    ecx = MEM32(eax); /* 0x006D6DF2: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D6DF4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x006D6DF7: mov eax, dword ptr [esi + 0x14] */
    edx = ebp + (-0x4); /* 0x006D6DFA: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x006D6DFD: push edx */
    PUSH32(esp, 0); /* 0x006D6DFE: push 0 */
    PUSH32(esp, eax); /* 0x006D6E00: push eax */
    ecx = MEM32(eax); /* 0x006D6E01: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x006D6E03: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x006D6E06: pop ebx */
    /* test eax, eax */ /* 0x006D6E07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6E2C; /* 0x006D6E09: jne 0x6d6e2c */
L_006D6E0B:
    eax = MEM32(ebp + (-0x4)); /* 0x006D6E0B: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x006D6E0E: push eax */
    ecx = MEM32(eax); /* 0x006D6E0F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D6E11: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006D6E14: push dword ptr [ebp - 4] */
    eax = MEM32(edi); /* 0x006D6E17: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x006D6E19: push 0 */
    PUSH32(esp, edi); /* 0x006D6E1B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x94)); /* 0x006D6E1C: call dword ptr [eax + 0x94] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D6E22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6E2C; /* 0x006D6E24: jne 0x6d6e2c */
L_006D6E26:
    edi = POP32_VAL(esp); /* 0x006D6E26: pop edi */
    esi = POP32_VAL(esp); /* 0x006D6E27: pop esi */
    esp = ebp; /* 0x006D6E28: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6E2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D6E2B: ret  */
L_006D6E2C:
    ecx = MEM32(esi + 0x10); /* 0x006D6E2C: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x00801A88u); /* 0x006D6E2F: push 0x801a88 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D6E34: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D6E39u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D6E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6E40u);

L_006D6E40:
    PUSH32(esp, ebp); /* 0x006D6E40: push ebp */
    ebp = esp; /* 0x006D6E41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D6E43: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006D6E46: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6E49: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D6E4E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x006D6E50: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, esi); /* 0x006D6E54: push esi */
    esi = ecx; /* 0x006D6E55: mov esi, ecx */
    /* cmp MEM8(esi + 0x1C), 0 */ /* 0x006D6E57: cmp byte ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6E83; /* 0x006D6E5B: je 0x6d6e83 */
L_006D6E5D:
    eax = MEM32(esi + 0x10); /* 0x006D6E5D: mov eax, dword ptr [esi + 0x10] */
    ecx = esp + 0x4; /* 0x006D6E60: lea ecx, [esp + 4] */
    PUSH32(esp, ecx); /* 0x006D6E64: push ecx */
    PUSH32(esp, 0); /* 0x006D6E65: push 0 */
    PUSH32(esp, eax); /* 0x006D6E67: push eax */
    edx = MEM32(eax); /* 0x006D6E68: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x44)); /* 0x006D6E6A: call dword ptr [edx + 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x006D6E6D: mov eax, dword ptr [esp + 0x1c] */
    ecx = esi + (-0x4); /* 0x006D6E71: lea ecx, [esi - 4] */
    MEM32(esi + 0x20) = eax; /* 0x006D6E74: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esp + 0x20); /* 0x006D6E77: mov eax, dword ptr [esp + 0x20] */
    MEM32(esi + 0x24) = eax; /* 0x006D6E7B: mov dword ptr [esi + 0x24], eax */
    RECOMP_CALL(sub_006D7190); /* 0x006D6E7E: call 0x6d7190 */
    RECOMP_FLAGS_IN();
L_006D6E83:
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x006D6E83: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6E91; /* 0x006D6E87: je 0x6d6e91 */
L_006D6E89:
    ecx = esi + (-0x4); /* 0x006D6E89: lea ecx, [esi - 4] */
    RECOMP_CALL(sub_006D7190); /* 0x006D6E8C: call 0x6d7190 */
    RECOMP_FLAGS_IN();
L_006D6E91:
    ecx = MEM32(esp + 0x24); /* 0x006D6E91: mov ecx, dword ptr [esp + 0x24] */
    esi = POP32_VAL(esp); /* 0x006D6E95: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D6E96: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D6E98: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D6E9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6E9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D6EA0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D6EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6EB0u);

L_006D6EB0:
    PUSH32(esp, edi); /* 0x006D6EB0: push edi */
    edi = ecx; /* 0x006D6EB1: mov edi, ecx */
    /* cmp MEM8(edi + 0x1C), 0 */ /* 0x006D6EB3: cmp byte ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6EE2; /* 0x006D6EB7: je 0x6d6ee2 */
L_006D6EB9:
    eax = MEM32(edi + 0xC); /* 0x006D6EB9: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, esi); /* 0x006D6EBC: push esi */
    PUSH32(esp, 0); /* 0x006D6EBD: push 0 */
    edx = MEM32(eax + 0x10C); /* 0x006D6EBF: mov edx, dword ptr [eax + 0x10c] */
    eax = edi + 0x10; /* 0x006D6EC5: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x006D6EC8: push eax */
    PUSH32(esp, 0); /* 0x006D6EC9: push 0 */
    PUSH32(esp, 0x16u); /* 0x006D6ECB: push 0x16 */
    esi = MEM32(edx); /* 0x006D6ECD: mov esi, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x006D6ECF: push 1 */
    PUSH32(esp, 1); /* 0x006D6ED1: push 1 */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x006D6ED3: push dword ptr [edi + 0x24] */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006D6ED6: push dword ptr [edi + 0x20] */
    PUSH32(esp, edx); /* 0x006D6ED9: push edx */
    RECOMP_ICALL(MEM32(esi + 0x5C)); /* 0x006D6EDA: call dword ptr [esi + 0x5c] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006D6EDD: pop esi */
    /* test eax, eax */ /* 0x006D6EDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D6EE4; /* 0x006D6EE0: jne 0x6d6ee4 */
L_006D6EE2:
    edi = POP32_VAL(esp); /* 0x006D6EE2: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D6EE3: ret  */
L_006D6EE4:
    ecx = MEM32(edi + 0xC); /* 0x006D6EE4: mov ecx, dword ptr [edi + 0xc] */
    PUSH32(esp, 0x00801A68u); /* 0x006D6EE7: push 0x801a68 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D6EEC: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D6EF1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D6F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6F00u);

L_006D6F00:
    PUSH32(esp, ebp); /* 0x006D6F00: push ebp */
    ebp = esp; /* 0x006D6F01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D6F03: push -1 */
    PUSH32(esp, 0x007C6B9Eu); /* 0x006D6F05: push 0x7c6b9e */
    eax = MEM32(FS_BASE + (0)); /* 0x006D6F0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D6F10: push eax */
    PUSH32(esp, ecx); /* 0x006D6F11: push ecx */
    PUSH32(esp, esi); /* 0x006D6F12: push esi */
    eax = MEM32(0x855000); /* 0x006D6F13: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D6F18: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D6F1A: push eax */
    eax = ebp + (-0xC); /* 0x006D6F1B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D6F1E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D6F24: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D6F26: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00801ACCu; /* 0x006D6F29: mov dword ptr [esi], 0x801acc */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D6F2F: push dword ptr [ebp + 8] */
    ecx = esi + 0x4; /* 0x006D6F32: lea ecx, [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D6F35: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_006DBF60); /* 0x006D6F3C: call 0x6dbf60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D6F41: mov byte ptr [ebp - 4], 1 */
    MEM32(ecx) = 0x00801AB4u; /* 0x006D6F45: mov dword ptr [ecx], 0x801ab4 */
    ecx = esi + 0x40; /* 0x006D6F4B: lea ecx, [esi + 0x40] */
    MEM32(esi) = 0x00801AE8u; /* 0x006D6F4E: mov dword ptr [esi], 0x801ae8 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x006D6F54: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x006D6F5B: mov dword ptr [ecx + 0x10], 0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x006D6F62: mov byte ptr [ecx], 0 */
    eax = MEM32(ebp + 0xC); /* 0x006D6F65: mov eax, dword ptr [ebp + 0xc] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006D6F68: mov byte ptr [ebp - 4], 2 */
    MEM32(esi + 0x14) = eax; /* 0x006D6F6C: mov dword ptr [esi + 0x14], eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x006D6F6F: mov al, byte ptr [ebp + 0x10] */
    MEM8(esi + 0x20) = (uint8_t)(LO8(eax)); /* 0x006D6F72: mov byte ptr [esi + 0x20], al */
    eax = MEM32(ebp + 0x14); /* 0x006D6F75: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x1C) = 0xFFFFFFFFu; /* 0x006D6F78: mov dword ptr [esi + 0x1c], 0xffffffff */
    /* cmp ecx, eax */ /* 0x006D6F7F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D6F8D; /* 0x006D6F81: je 0x6d6f8d */
L_006D6F83:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D6F83: push -1 */
    PUSH32(esp, 0); /* 0x006D6F85: push 0 */
    PUSH32(esp, eax); /* 0x006D6F87: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x006D6F88: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006D6F8D:
    eax = esi; /* 0x006D6F8D: mov eax, esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D6F8F: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D6F96: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D6F99: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D6FA0: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D6FA1: pop esi */
    esp = ebp; /* 0x006D6FA2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D6FA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D6FA5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006D6FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6FB0u);

L_006D6FB0:
    PUSH32(esp, ebp); /* 0x006D6FB0: push ebp */
    ebp = esp; /* 0x006D6FB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D6FB3: push esi */
    esi = ecx; /* 0x006D6FB4: mov esi, ecx */
    RECOMP_CALL(sub_006D7210); /* 0x006D6FB6: call 0x6d7210 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D6FBB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6FCB; /* 0x006D6FBF: je 0x6d6fcb */
L_006D6FC1:
    PUSH32(esp, esi); /* 0x006D6FC1: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D6FC2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6FC8: add esp, 4 */
    _flag_k = FK_ADD;
L_006D6FCB:
    eax = esi; /* 0x006D6FCB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D6FCD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D6FCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D6FCF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D6FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D6FE0u);

L_006D6FE0:
    PUSH32(esp, ebp); /* 0x006D6FE0: push ebp */
    ebp = esp; /* 0x006D6FE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006D6FE3: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D6FE6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D6FEB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D6FED: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ecx + 0x14); /* 0x006D6FF0: mov ecx, dword ptr [ecx + 0x14] */
    PUSH32(esp, esi); /* 0x006D6FF3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006D6FF4: mov esi, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x006D6FF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7033; /* 0x006D6FF9: je 0x6d7033 */
L_006D6FFB:
    eax = MEM32(ecx); /* 0x006D6FFB: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x24); /* 0x006D6FFD: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x006D7000: push edx */
    PUSH32(esp, 0); /* 0x006D7001: push 0 */
    PUSH32(esp, ecx); /* 0x006D7003: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x006D7004: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x006D7007: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi) = eax; /* 0x006D700A: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x006D700C: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x4) = eax; /* 0x006D700F: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x006D7012: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEBu; /* 0x006D7015: add eax, -0x15 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x10) = (uint8_t)(0); /* 0x006D7018: mov byte ptr [esi + 0x10], 0 */
    /* cmp eax, 0xFu */ /* 0x006D701C: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D7033; /* 0x006D701F: ja 0x6d7033 */
L_006D7021:
    eax = (uint32_t)MEM8(eax + 0x6D704C); /* 0x006D7021: movzx eax, byte ptr [eax + 0x6d704c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D7044)); goto _ljump; }
L_006D702F:
    MEM8(esi + 0x10) = (uint8_t)(1); /* 0x006D702F: mov byte ptr [esi + 0x10], 1 */
L_006D7033:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D7033: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D7036: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D7038: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7039: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D703E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7040: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7041: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D702Fu: goto L_006D702F;
      case 0x006D7033u: goto L_006D7033;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D7060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7060u);

L_006D7060:
    PUSH32(esp, ebp); /* 0x006D7060: push ebp */
    ebp = esp; /* 0x006D7061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D7063: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006D7066: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D7069: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D706E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x006D7070: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x006D7074: push ebx */
    PUSH32(esp, esi); /* 0x006D7075: push esi */
    esi = ecx; /* 0x006D7076: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D7078: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006D7079: mov edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x14); /* 0x006D707C: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x006D707F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7114; /* 0x006D7081: je 0x6d7114 */
L_006D7087:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x006D7087: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7114; /* 0x006D708B: jne 0x6d7114 */
L_006D7091:
    /* cmp MEM32(esi + 0x1C), 0xFFFFFFFFu */ /* 0x006D7091: cmp dword ptr [esi + 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7114; /* 0x006D7095: jne 0x6d7114 */
L_006D7097:
    eax = MEM32(ecx); /* 0x006D7097: mov eax, dword ptr [ecx] */
    edx = esp + 0x14; /* 0x006D7099: lea edx, [esp + 0x14] */
    PUSH32(esp, edx); /* 0x006D709D: push edx */
    PUSH32(esp, 0); /* 0x006D709E: push 0 */
    PUSH32(esp, ecx); /* 0x006D70A0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x006D70A1: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x14), 0x15u */ /* 0x006D70A4: cmp dword ptr [esp + 0x14], 0x15 */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7114; /* 0x006D70A9: jne 0x6d7114 */
L_006D70AB:
    eax = MEM32(esi + 0x14); /* 0x006D70AB: mov eax, dword ptr [esi + 0x14] */
    edx = esp + 0xC; /* 0x006D70AE: lea edx, [esp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x006D70B2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x006D70B5: push 0 */
    PUSH32(esp, 0); /* 0x006D70B7: push 0 */
    ecx = MEM32(eax); /* 0x006D70B9: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006D70BB: push edx */
    PUSH32(esp, ebx); /* 0x006D70BC: push ebx */
    PUSH32(esp, eax); /* 0x006D70BD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x006D70BE: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D70C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7114; /* 0x006D70C3: jne 0x6d7114 */
L_006D70C5:
    eax = MEM32(esi); /* 0x006D70C5: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D70C7: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006D70C9: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D70CA: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x006D70CD: mov eax, dword ptr [esp + 0xc] */
    ecx = ebx; /* 0x006D70D1: mov ecx, ebx */
    _xmm[1].u64[0] = MEM64(0x809078); _xmm[1].u64[1] = 0; /* 0x006D70D3: movsd xmm1, qword ptr [0x809078] */
    MEM32(edi + 0x14) = eax; /* 0x006D70DB: mov dword ptr [edi + 0x14], eax */
    RECOMP_CALL(sub_0042A2F0); /* 0x006D70DE: call 0x42a2f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x006D70E3: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D70E5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)sse_cvt_i32((double)_xmm[0].f64[0], 1); /* 0x006D70E7: cvttsd2si ecx, xmm0 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006D70EB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D70ED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x006D70EF: mov dword ptr [edi], eax */
    eax = MEM32(edi + 0x4); /* 0x006D70F1: mov eax, dword ptr [edi + 4] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006D70F4: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(edi + 0x4) = eax; /* 0x006D70F6: mov dword ptr [edi + 4], eax */
    eax = MEM32(esp + 0x10); /* 0x006D70F9: mov eax, dword ptr [esp + 0x10] */
    MEM32(esi + 0x1C) = ebx; /* 0x006D70FD: mov dword ptr [esi + 0x1c], ebx */
    edi = POP32_VAL(esp); /* 0x006D7100: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7101: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7102: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x006D7103: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D7107: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7109: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D710E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7110: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D7111: ret 8 */
L_006D7114:
    ecx = MEM32(esp + 0x34); /* 0x006D7114: mov ecx, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7118: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D711A: pop edi */
    esi = POP32_VAL(esp); /* 0x006D711B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D711C: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D711D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D711F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7124: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7126: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D7127: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D7130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7130u);

L_006D7130:
    PUSH32(esp, esi); /* 0x006D7130: push esi */
    esi = ecx; /* 0x006D7131: mov esi, ecx */
    ecx = MEM32(esi + 0x14); /* 0x006D7133: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x006D7136: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7150; /* 0x006D7138: je 0x6d7150 */
L_006D713A:
    edx = MEM32(esi + 0x1C); /* 0x006D713A: mov edx, dword ptr [esi + 0x1c] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x006D713D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7150; /* 0x006D7140: je 0x6d7150 */
L_006D7142:
    eax = MEM32(ecx); /* 0x006D7142: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x006D7144: push edx */
    PUSH32(esp, ecx); /* 0x006D7145: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x006D7146: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C) = 0xFFFFFFFFu; /* 0x006D7149: mov dword ptr [esi + 0x1c], 0xffffffff */
L_006D7150:
    esi = POP32_VAL(esp); /* 0x006D7150: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7151: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D7160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7160u);

L_006D7160:
    PUSH32(esp, ebp); /* 0x006D7160: push ebp */
    ebp = esp; /* 0x006D7161: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D7163: push esi */
    esi = MEM32(ecx + 0x14); /* 0x006D7164: mov esi, dword ptr [ecx + 0x14] */
    /* test esi, esi */ /* 0x006D7167: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7187; /* 0x006D7169: je 0x6d7187 */
L_006D716B:
    edx = MEM32(ebp + 0x8); /* 0x006D716B: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, 8 */ /* 0x006D716E: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D7187; /* 0x006D7171: jae 0x6d7187 */
L_006D7173:
    eax = MEM32(ecx + 0x10); /* 0x006D7173: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x006D7176: push esi */
    PUSH32(esp, edx); /* 0x006D7177: push edx */
    eax = MEM32(eax + 0x10C); /* 0x006D7178: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, eax); /* 0x006D717E: push eax */
    ecx = MEM32(eax); /* 0x006D717F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x006D7181: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
L_006D7187:
    esi = POP32_VAL(esp); /* 0x006D7187: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D7188: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7189: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D7190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7190u);

L_006D7190:
    PUSH32(esp, ecx); /* 0x006D7190: push ecx */
    PUSH32(esp, esi); /* 0x006D7191: push esi */
    PUSH32(esp, edi); /* 0x006D7192: push edi */
    edi = ecx; /* 0x006D7193: mov edi, ecx */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x006D7195: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D71F0; /* 0x006D7199: je 0x6d71f0 */
L_006D719B:
    esi = MEM32(0x927C48); /* 0x006D719B: mov esi, dword ptr [0x927c48] */
    /* test esi, esi */ /* 0x006D71A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D71C3; /* 0x006D71A3: je 0x6d71c3 */
L_006D71A5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x006D71A5: add esi, -4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006D71C3; /* 0x006D71A8: je 0x6d71c3 */
L_006D71AA:
    ebx = ebx; /* 0x006D71AA: lea ebx, [ebx] */
L_006D71B0:
    eax = MEM32(esi); /* 0x006D71B0: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D71B2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D71B4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x006D71B7: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x006D71BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D71C3; /* 0x006D71BC: je 0x6d71c3 */
L_006D71BE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x006D71BE: add esi, -4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006D71B0; /* 0x006D71C1: jne 0x6d71b0 */
L_006D71C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D71C3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D71C5:
    eax = MEM32(edi + 0x10); /* 0x006D71C5: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, 0); /* 0x006D71C8: push 0 */
    PUSH32(esp, esi); /* 0x006D71CA: push esi */
    eax = MEM32(eax + 0x10C); /* 0x006D71CB: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, eax); /* 0x006D71D1: push eax */
    ecx = MEM32(eax); /* 0x006D71D2: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x006D71D4: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D71DA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x006D71DB: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D71C5; /* 0x006D71DE: jb 0x6d71c5 */
L_006D71E0:
    eax = MEM32(edi + 0x14); /* 0x006D71E0: mov eax, dword ptr [edi + 0x14] */
    PUSH32(esp, eax); /* 0x006D71E3: push eax */
    ecx = MEM32(eax); /* 0x006D71E4: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D71E6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D71E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D71F4; /* 0x006D71EB: jne 0x6d71f4 */
L_006D71ED:
    MEM32(edi + 0x14) = eax; /* 0x006D71ED: mov dword ptr [edi + 0x14], eax */
L_006D71F0:
    edi = POP32_VAL(esp); /* 0x006D71F0: pop edi */
    esi = POP32_VAL(esp); /* 0x006D71F1: pop esi */
    ecx = POP32_VAL(esp); /* 0x006D71F2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D71F3: ret  */
L_006D71F4:
    ecx = MEM32(edi + 0x10); /* 0x006D71F4: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, 0x00801A48u); /* 0x006D71F7: push 0x801a48 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D71FC: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D7201u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D7210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7210u);

L_006D7210:
    PUSH32(esp, ebp); /* 0x006D7210: push ebp */
    ebp = esp; /* 0x006D7211: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D7213: push -1 */
    PUSH32(esp, 0x007C6B9Eu); /* 0x006D7215: push 0x7c6b9e */
    eax = MEM32(FS_BASE + (0)); /* 0x006D721A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D7220: push eax */
    PUSH32(esp, ecx); /* 0x006D7221: push ecx */
    PUSH32(esp, esi); /* 0x006D7222: push esi */
    eax = MEM32(0x855000); /* 0x006D7223: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D7228: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D722A: push eax */
    eax = ebp + (-0xC); /* 0x006D722B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D722E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D7234: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D7236: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00801AE8u; /* 0x006D7239: mov dword ptr [esi], 0x801ae8 */
    MEM32(esi + 0x4) = 0x00801AB4u; /* 0x006D723F: mov dword ptr [esi + 4], 0x801ab4 */
    MEM32(ebp + (-0x4)) = 2; /* 0x006D7246: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_006D7190); /* 0x006D724D: call 0x6d7190 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D7252: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(esi + 0x54), 0x10u */ /* 0x006D7256: cmp dword ptr [esi + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D7268; /* 0x006D725A: jb 0x6d7268 */
L_006D725C:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x006D725C: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D725F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D7265: add esp, 4 */
    _flag_k = FK_ADD;
L_006D7268:
    MEM32(esi + 0x54) = 0xFu; /* 0x006D7268: mov dword ptr [esi + 0x54], 0xf */
    ecx = esi + 0x8; /* 0x006D726F: lea ecx, [esi + 8] */
    MEM32(esi + 0x50) = 0; /* 0x006D7272: mov dword ptr [esi + 0x50], 0 */
    MEM8(esi + 0x40) = (uint8_t)(0); /* 0x006D7279: mov byte ptr [esi + 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006D727D: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(esi + 0x10); /* 0x006D7281: mov eax, dword ptr [esi + 0x10] */
    MEM32(esi + 0x4) = 0x008030A8u; /* 0x006D7284: mov dword ptr [esi + 4], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006D728B: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006D7291: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0x00801A40u; /* 0x006D7296: mov dword ptr [esi + 4], 0x801a40 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D729D: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi) = 0x00801A40u; /* 0x006D72A4: mov dword ptr [esi], 0x801a40 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D72AA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D72AD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D72B4: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D72B5: pop esi */
    esp = ebp; /* 0x006D72B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D72B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D72B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D72BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D72BAu);

    goto L_006D72BA;
L_006D6FB0:
    PUSH32(esp, ebp); /* 0x006D6FB0: push ebp */
    ebp = esp; /* 0x006D6FB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D6FB3: push esi */
    esi = ecx; /* 0x006D6FB4: mov esi, ecx */
    RECOMP_CALL(sub_006D7210); /* 0x006D6FB6: call 0x6d7210 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D6FBB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D6FCB; /* 0x006D6FBF: je 0x6d6fcb */
L_006D6FC1:
    PUSH32(esp, esi); /* 0x006D6FC1: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D6FC2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D6FC8: add esp, 4 */
    _flag_k = FK_ADD;
L_006D6FCB:
    eax = esi; /* 0x006D6FCB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D6FCD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D6FCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D6FCF: ret 4 */
L_006D72BA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x006D72BA: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006D6FB0; /* 0x006D72BD: jmp 0x6d6fb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D72D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D72D0u);

L_006D72D0:
    PUSH32(esp, ebp); /* 0x006D72D0: push ebp */
    ebp = esp; /* 0x006D72D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006D72D3: sub esp, 0x1c */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D72D6: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D72DD: push ebx */
    PUSH32(esp, esi); /* 0x006D72DE: push esi */
    PUSH32(esp, edi); /* 0x006D72DF: push edi */
    esi = ecx; /* 0x006D72E0: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7320; /* 0x006D72E2: jne 0x6d7320 */
L_006D72E4:
    eax = ebp + (-0x8); /* 0x006D72E4: lea eax, [ebp - 8] */
    MEM32(0x9280A0) = 1; /* 0x006D72E7: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D72F1: push eax */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006D72F2: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D72F8: mov edi, eax */
    MEM32(0x928070) = edi; /* 0x006D72FA: mov dword ptr [0x928070], edi */
    /* test edi, edi */ /* 0x006D7300: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D752F; /* 0x006D7302: je 0x6d752f */
L_006D7308:
    eax = MEM32(ebp + (-0x8)); /* 0x006D7308: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006D730B: mov dword ptr [ebp - 0xc], eax */
    MEM32(0x928098) = eax; /* 0x006D730E: mov dword ptr [0x928098], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006D7313: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D7316: mov dword ptr [ebp - 4], eax */
    MEM32(0x92809C) = eax; /* 0x006D7319: mov dword ptr [0x92809c], eax */
    goto L_006D7338; /* 0x006D731E: jmp 0x6d7338 */
L_006D7320:
    edx = MEM32(0x92809C); /* 0x006D7320: mov edx, dword ptr [0x92809c] */
    ecx = MEM32(0x928098); /* 0x006D7326: mov ecx, dword ptr [0x928098] */
    edi = MEM32(0x928070); /* 0x006D732C: mov edi, dword ptr [0x928070] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006D7332: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D7335: mov dword ptr [ebp - 0xc], ecx */
L_006D7338:
    /* test edi, edi */ /* 0x006D7338: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D752F; /* 0x006D733A: je 0x6d752f */
L_006D7340:
    edx = MEM32(0x928080); /* 0x006D7340: mov edx, dword ptr [0x928080] */
    eax = edx; /* 0x006D7346: mov eax, edx */
    ecx = MEM32(0x928084); /* 0x006D7348: mov ecx, dword ptr [0x928084] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x006D734E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7368; /* 0x006D7350: je 0x6d7368 */
L_006D7352:
    /* cmp esi, 1 */ /* 0x006D7352: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7368; /* 0x006D7355: je 0x6d7368 */
L_006D7357:
    /* cmp esi, 4 */ /* 0x006D7357: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7368; /* 0x006D735A: je 0x6d7368 */
L_006D735C:
    eax = MEM32(ebp + (-0xC)); /* 0x006D735C: mov eax, dword ptr [ebp - 0xc] */
    ebx = ecx; /* 0x006D735F: mov ebx, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D7361: mov ecx, dword ptr [ebp - 4] */
    edi = edx; /* 0x006D7364: mov edi, edx */
    goto L_006D738F; /* 0x006D7366: jmp 0x6d738f */
L_006D7368:
    eax = ebp + (-0x10); /* 0x006D7368: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x006D736B: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006D736C: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x006D7372: mov ebx, dword ptr [ebp - 0xc] */
    ecx = MEM32(0x92809C); /* 0x006D7375: mov ecx, dword ptr [0x92809c] */
    eax = MEM32(0x928098); /* 0x006D737B: mov eax, dword ptr [0x928098] */
    edi = MEM32(ebp + (-0x10)); /* 0x006D7380: mov edi, dword ptr [ebp - 0x10] */
    edx = MEM32(0x928080); /* 0x006D7383: mov edx, dword ptr [0x928080] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006D7389: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x006D738C: mov dword ptr [ebp - 0xc], eax */
L_006D738F:
    /* cmp esi, 6 */ /* 0x006D738F: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D73D9; /* 0x006D7392: jne 0x6d73d9 */
L_006D7394:
    ecx = edi; /* 0x006D7394: mov ecx, edi */
    edx = ebx; /* 0x006D7396: mov edx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x928088));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x928088); /* 0x006D7398: sub ecx, dword ptr [0x928088] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(0x92808C), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D739E: sbb edx, dword ptr [0x92808c] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_0078074F); /* 0x006D73A4: call 0x78074f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x006D73A9: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D73AC: mov ecx, dword ptr [ebp - 0xc] */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x006D73AF: movsd qword ptr [ebp - 0x18], xmm0 */
    RECOMP_CALL(sub_0078074F); /* 0x006D73B4: call 0x78074f */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x006D73B9: movsd xmm1, qword ptr [ebp - 0x18] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x006D73BE: divsd xmm1, xmm0 */
    MEM32(0x928088) = edi; /* 0x006D73C2: mov dword ptr [0x928088], edi */
    MEM32(0x92808C) = ebx; /* 0x006D73C8: mov dword ptr [0x92808c], ebx */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006D73CE: cvtpd2ps xmm0, xmm1 */
    edi = POP32_VAL(esp); /* 0x006D73D2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D73D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D73D4: pop ebx */
    esp = ebp; /* 0x006D73D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D73D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D73D8: ret  */
L_006D73D9:
    /* cmp esi, 5 */ /* 0x006D73D9: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7417; /* 0x006D73DC: jne 0x6d7417 */
L_006D73DE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x928090));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(0x928090); /* 0x006D73DE: sub edi, dword ptr [0x928090] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x006D73E4: mov ecx, edi */
    { uint32_t _sa = ebx, _sb = MEM32(0x928094), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D73E6: sbb ebx, dword ptr [0x928094] */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ebx; /* 0x006D73EC: mov edx, ebx */
    RECOMP_CALL(sub_0078074F); /* 0x006D73EE: call 0x78074f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x006D73F3: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D73F6: mov ecx, dword ptr [ebp - 0xc] */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x006D73F9: movsd qword ptr [ebp - 0x18], xmm0 */
    RECOMP_CALL(sub_0078074F); /* 0x006D73FE: call 0x78074f */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x006D7403: movsd xmm1, qword ptr [ebp - 0x18] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x006D7408: divsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006D740C: cvtpd2ps xmm0, xmm1 */
    edi = POP32_VAL(esp); /* 0x006D7410: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7411: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7412: pop ebx */
    esp = ebp; /* 0x006D7413: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7416: ret  */
L_006D7417:
    /* test esi, esi */ /* 0x006D7417: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D744B; /* 0x006D7419: jne 0x6d744b */
L_006D741B:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D741B: xorps xmm0, xmm0 */
    MEM32(0x928090) = edi; /* 0x006D741E: mov dword ptr [0x928090], edi */
    MEM32(0x928094) = ebx; /* 0x006D7424: mov dword ptr [0x928094], ebx */
    MEM32(0x928088) = edi; /* 0x006D742A: mov dword ptr [0x928088], edi */
    MEM32(0x92808C) = ebx; /* 0x006D7430: mov dword ptr [0x92808c], ebx */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006D7436: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x866088) = esi; /* 0x006D743E: mov dword ptr [0x866088], esi */
    edi = POP32_VAL(esp); /* 0x006D7444: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7445: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7446: pop ebx */
    esp = ebp; /* 0x006D7447: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7449: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D744A: ret  */
L_006D744B:
    /* cmp esi, 1 */ /* 0x006D744B: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7499; /* 0x006D744E: jne 0x6d7499 */
L_006D7450:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D7450: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7471; /* 0x006D7457: je 0x6d7471 */
L_006D7459:
    ecx = edi; /* 0x006D7459: mov ecx, edi */
    eax = ebx; /* 0x006D745B: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006D745D: sub ecx, edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(0x928084), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D745F: sbb eax, dword ptr [0x928084] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x928090)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928090) = MEM32(0x928090) + ecx; /* 0x006D7465: add dword ptr [0x928090], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(0x928094), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D746B: adc dword ptr [0x928094], eax */
      MEM32(0x928094) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_006D7471:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D7471: xorps xmm0, xmm0 */
    MEM32(0x928088) = edi; /* 0x006D7474: mov dword ptr [0x928088], edi */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006D747A: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x92808C) = ebx; /* 0x006D7482: mov dword ptr [0x92808c], ebx */
    MEM32(0x866088) = 0; /* 0x006D7488: mov dword ptr [0x866088], 0 */
    edi = POP32_VAL(esp); /* 0x006D7492: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7493: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7494: pop ebx */
    esp = ebp; /* 0x006D7495: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7497: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7498: ret  */
L_006D7499:
    /* cmp esi, 2 */ /* 0x006D7499: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D74D3; /* 0x006D749C: jne 0x6d74d3 */
L_006D749E:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D749E: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D74C9; /* 0x006D74A5: jne 0x6d74c9 */
L_006D74A7:
    MEM32(0x928080) = edi; /* 0x006D74A7: mov dword ptr [0x928080], edi */
    MEM32(0x928084) = ebx; /* 0x006D74AD: mov dword ptr [0x928084], ebx */
    MEM32(0x928088) = edi; /* 0x006D74B3: mov dword ptr [0x928088], edi */
    MEM32(0x92808C) = ebx; /* 0x006D74B9: mov dword ptr [0x92808c], ebx */
    MEM32(0x866088) = 1; /* 0x006D74BF: mov dword ptr [0x866088], 1 */
L_006D74C9:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D74C9: xorps xmm0, xmm0 */
    edi = POP32_VAL(esp); /* 0x006D74CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D74CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D74CE: pop ebx */
    esp = ebp; /* 0x006D74CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D74D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D74D2: ret  */
L_006D74D3:
    /* cmp esi, 3 */ /* 0x006D74D3: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D74F9; /* 0x006D74D6: jne 0x6d74f9 */
L_006D74D8:
    PUSH32(esp, 0); /* 0x006D74D8: push 0 */
    PUSH32(esp, 0xAu); /* 0x006D74DA: push 0xa */
    PUSH32(esp, ecx); /* 0x006D74DC: push ecx */
    PUSH32(esp, eax); /* 0x006D74DD: push eax */
    RECOMP_CALL(sub_00780050); /* 0x006D74DE: call 0x780050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x928080)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928080) = MEM32(0x928080) + eax; /* 0x006D74E3: add dword ptr [0x928080], eax */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D74E9: xorps xmm0, xmm0 */
    { uint32_t _aa = MEM32(0x928084), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D74EC: adc dword ptr [0x928084], edx */
      MEM32(0x928084) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x006D74F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D74F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D74F4: pop ebx */
    esp = ebp; /* 0x006D74F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D74F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D74F8: ret  */
L_006D74F9:
    /* cmp esi, 4 */ /* 0x006D74F9: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7690; /* 0x006D74FC: jne 0x6d7690 */
L_006D7502:
    edx = ebx; /* 0x006D7502: mov edx, ebx */
    ecx = edi; /* 0x006D7504: mov ecx, edi */
    RECOMP_CALL(sub_0078074F); /* 0x006D7506: call 0x78074f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x006D750B: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D750E: mov ecx, dword ptr [ebp - 0xc] */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x006D7511: movsd qword ptr [ebp - 0x18], xmm0 */
    RECOMP_CALL(sub_0078074F); /* 0x006D7516: call 0x78074f */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x006D751B: movsd xmm1, qword ptr [ebp - 0x18] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x006D7520: divsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006D7524: cvtpd2ps xmm0, xmm1 */
    edi = POP32_VAL(esp); /* 0x006D7528: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7529: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D752A: pop ebx */
    esp = ebp; /* 0x006D752B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D752D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D752E: ret  */
L_006D752F:
    _xmm[2].u64[0] = MEM64(0x928060); _xmm[2].u64[1] = 0; /* 0x006D752F: movsd xmm2, qword ptr [0x928060] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x006D7537: xorps xmm3, xmm3 */
    _flag_a = SSE_COMI(_xmm[2].f64[0], _xmm[3].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006D753A: ucomisd xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006D753E: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006D753F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_006D7554; /* 0x006D7542: jnp 0x6d7554 */
L_006D7544:
    /* cmp esi, 1 */ /* 0x006D7544: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7554; /* 0x006D7547: je 0x6d7554 */
L_006D7549:
    /* cmp esi, 4 */ /* 0x006D7549: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7554; /* 0x006D754C: je 0x6d7554 */
L_006D754E:
    _xmm[1] = _xmm[2]; /* 0x006D754E: movapd xmm1, xmm2 */
    goto L_006D7581; /* 0x006D7552: jmp 0x6d7581 */
L_006D7554:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D7554: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[2].u64[0] = MEM64(0x928060); _xmm[2].u64[1] = 0; /* 0x006D755A: movsd xmm2, qword ptr [0x928060] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x006D7562: xorps xmm3, xmm3 */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006D7565: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006D7569: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D756D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D756D: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006D7570: addsd xmm1, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006D7579: mulsd xmm1, qword ptr [0x808c60] */
L_006D7581:
    /* cmp esi, 6 */ /* 0x006D7581: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D75A5; /* 0x006D7584: jne 0x6d75a5 */
L_006D7586:
    _xmm[0] = _xmm[1]; /* 0x006D7586: movapd xmm0, xmm1 */
    { double _s = sse_f64(MEM64(0x928078)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006D758A: subsd xmm0, qword ptr [0x928078] */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D7592: movsd qword ptr [0x928078], xmm1 */
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x006D759A: cvtsd2ss xmm0, xmm0 */
    edi = POP32_VAL(esp); /* 0x006D759E: pop edi */
    esi = POP32_VAL(esp); /* 0x006D759F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D75A0: pop ebx */
    esp = ebp; /* 0x006D75A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D75A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D75A4: ret  */
L_006D75A5:
    /* cmp esi, 5 */ /* 0x006D75A5: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D75C0; /* 0x006D75A8: jne 0x6d75c0 */
L_006D75AA:
    { double _s = sse_f64(MEM64(0x928068)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] - _s); } /* 0x006D75AA: subsd xmm1, qword ptr [0x928068] */
L_006D75B2:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D75B2: xorps xmm0, xmm0 */
    _xmm[0].f32[0] = (float)_xmm[1].f64[0]; /* 0x006D75B5: cvtsd2ss xmm0, xmm1 */
    edi = POP32_VAL(esp); /* 0x006D75B9: pop edi */
    esi = POP32_VAL(esp); /* 0x006D75BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D75BB: pop ebx */
    esp = ebp; /* 0x006D75BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D75BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D75BF: ret  */
L_006D75C0:
    /* test esi, esi */ /* 0x006D75C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D75EC; /* 0x006D75C2: jne 0x6d75ec */
L_006D75C4:
    MEM64(0x928068) = _xmm[1].u64[0]; /* 0x006D75C4: movsd qword ptr [0x928068], xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D75CC: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D75CF: movsd qword ptr [0x928078], xmm1 */
    MEM64(0x928060) = _xmm[3].u64[0]; /* 0x006D75D7: movsd qword ptr [0x928060], xmm3 */
    MEM32(0x866088) = esi; /* 0x006D75DF: mov dword ptr [0x866088], esi */
    edi = POP32_VAL(esp); /* 0x006D75E5: pop edi */
    esi = POP32_VAL(esp); /* 0x006D75E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D75E7: pop ebx */
    esp = ebp; /* 0x006D75E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D75EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D75EB: ret  */
L_006D75EC:
    /* cmp esi, 1 */ /* 0x006D75EC: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7636; /* 0x006D75EF: jne 0x6d7636 */
L_006D75F1:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D75F1: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7612; /* 0x006D75F8: je 0x6d7612 */
L_006D75FA:
    _xmm[0] = _xmm[1]; /* 0x006D75FA: movapd xmm0, xmm1 */
    { double _s = _xmm[2].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006D75FE: subsd xmm0, xmm2 */
    { double _s = sse_f64(MEM64(0x928068)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D7602: addsd xmm0, qword ptr [0x928068] */
    MEM64(0x928068) = _xmm[0].u64[0]; /* 0x006D760A: movsd qword ptr [0x928068], xmm0 */
L_006D7612:
    MEM64(0x928060) = _xmm[3].u64[0]; /* 0x006D7612: movsd qword ptr [0x928060], xmm3 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D761A: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D761D: movsd qword ptr [0x928078], xmm1 */
    MEM32(0x866088) = 0; /* 0x006D7625: mov dword ptr [0x866088], 0 */
    edi = POP32_VAL(esp); /* 0x006D762F: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7630: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7631: pop ebx */
    esp = ebp; /* 0x006D7632: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7634: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7635: ret  */
L_006D7636:
    /* cmp esi, 2 */ /* 0x006D7636: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7668; /* 0x006D7639: jne 0x6d7668 */
L_006D763B:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D763B: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D765E; /* 0x006D7642: jne 0x6d765e */
L_006D7644:
    MEM64(0x928060) = _xmm[1].u64[0]; /* 0x006D7644: movsd qword ptr [0x928060], xmm1 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D764C: movsd qword ptr [0x928078], xmm1 */
    MEM32(0x866088) = 1; /* 0x006D7654: mov dword ptr [0x866088], 1 */
L_006D765E:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D765E: xorps xmm0, xmm0 */
    edi = POP32_VAL(esp); /* 0x006D7661: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7662: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7663: pop ebx */
    esp = ebp; /* 0x006D7664: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7666: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7667: ret  */
L_006D7668:
    /* cmp esi, 3 */ /* 0x006D7668: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7687; /* 0x006D766B: jne 0x6d7687 */
L_006D766D:
    { double _s = sse_f64(MEM64(0x808D88)); _xmm[2].f64[0] = (double)(_xmm[2].f64[0] + _s); } /* 0x006D766D: addsd xmm2, qword ptr [0x808d88] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D7675: xorps xmm0, xmm0 */
    MEM64(0x928060) = _xmm[2].u64[0]; /* 0x006D7678: movsd qword ptr [0x928060], xmm2 */
    edi = POP32_VAL(esp); /* 0x006D7680: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7681: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D7682: pop ebx */
    esp = ebp; /* 0x006D7683: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7686: ret  */
L_006D7687:
    /* cmp esi, 4 */ /* 0x006D7687: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D75B2; /* 0x006D768A: je 0x6d75b2 */
L_006D7690:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x006D7690: movss xmm0, dword ptr [0x809824] */
    edi = POP32_VAL(esp); /* 0x006D7698: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7699: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D769A: pop ebx */
    esp = ebp; /* 0x006D769B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D769D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D769E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D76A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D76A0u);

L_006D76A0:
    PUSH32(esp, ebp); /* 0x006D76A0: push ebp */
    ebp = esp; /* 0x006D76A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D76A3: push -1 */
    PUSH32(esp, 0x007C6BC8u); /* 0x006D76A5: push 0x7c6bc8 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D76AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D76B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006D76B1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D76B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D76B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x006D76BB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x006D76BE: push esi */
    PUSH32(esp, edi); /* 0x006D76BF: push edi */
    PUSH32(esp, eax); /* 0x006D76C0: push eax */
    eax = ebp + (-0xC); /* 0x006D76C1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D76C4: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x006D76CA: mov esi, edx */
    edi = ecx; /* 0x006D76CC: mov edi, ecx */
    /* test edi, edi */ /* 0x006D76CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D779A; /* 0x006D76D0: je 0x6d779a */
L_006D76D6:
    /* test esi, esi */ /* 0x006D76D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D779A; /* 0x006D76D8: je 0x6d779a */
L_006D76DE:
    ecx = esi; /* 0x006D76DE: mov ecx, esi */
    edx = ecx + 0x1; /* 0x006D76E0: lea edx, [ecx + 1] */
L_006D76E3:
    SET_LO8(eax, MEM8(ecx)); /* 0x006D76E3: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D76E5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006D76E6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D76E3; /* 0x006D76E8: jne 0x6d76e3 */
L_006D76EA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006D76EA: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D76EC: mov dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D76F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0; /* 0x006D76F5: mov dword ptr [ebp - 0x18], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x006D76FC: mov word ptr [ebp - 0x2c], ax */
    PUSH32(esp, ecx); /* 0x006D7700: push ecx */
    eax = ecx + 0x1; /* 0x006D7701: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x18)) = 7; /* 0x006D7704: mov dword ptr [ebp - 0x18], 7 */
    PUSH32(esp, eax); /* 0x006D770B: push eax */
    ecx = ebp + (-0x2C); /* 0x006D770C: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D770F: mov dword ptr [ebp - 0x1c], 0 */
    RECOMP_CALL(sub_006D7950); /* 0x006D7716: call 0x6d7950 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x006D771B: mov edx, esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D771D: mov dword ptr [ebp - 4], 0 */
    ecx = edx + 0x1; /* 0x006D7724: lea ecx, [edx + 1] */
L_006D7727:
    SET_LO8(eax, MEM8(edx)); /* 0x006D7727: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D7729: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006D772A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7727; /* 0x006D772C: jne 0x6d7727 */
L_006D772E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x006D772E: sub edx, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x006D7730: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x2C); /* 0x006D7734: lea ecx, [ebp - 0x2c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(ebp + (-0x2C)); } /* 0x006D7737: cmovae ecx, dword ptr [ebp - 0x2c] */
    eax = edx + 0x1; /* 0x006D773B: lea eax, [edx + 1] */
    PUSH32(esp, eax); /* 0x006D773E: push eax */
    PUSH32(esp, esi); /* 0x006D773F: push esi */
    PUSH32(esp, ecx); /* 0x006D7740: push ecx */
    RECOMP_ICALL(MEM32(0x7CC564)); /* 0x006D7741: call dword ptr [0x7cc564] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x006D7747: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x2C); /* 0x006D774B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x200u); /* 0x006D774E: push 0x200 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x2C)); } /* 0x006D7753: cmovae eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006D7757: push eax */
    PUSH32(esp, edi); /* 0x006D7758: push edi */
    RECOMP_ICALL(MEM32(0x7CC56C)); /* 0x006D7759: call dword ptr [0x7cc56c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D775F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006D7761: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM16(edi + 0x3FE) = (uint16_t)(LO16(eax)); /* 0x006D7764: mov word ptr [edi + 0x3fe], ax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D776B: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x006D7772: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D7784; /* 0x006D7776: jb 0x6d7784 */
L_006D7778:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x006D7778: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D777B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D7781: add esp, 4 */
    _flag_k = FK_ADD;
L_006D7784:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7784: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 7; /* 0x006D7786: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D778D: mov dword ptr [ebp - 0x1c], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x006D7794: mov word ptr [ebp - 0x2c], ax */
    goto L_006D779F; /* 0x006D7798: jmp 0x6d779f */
L_006D779A:
    eax = 0x80070057u; /* 0x006D779A: mov eax, 0x80070057 */
L_006D779F:
    ecx = MEM32(ebp + (-0xC)); /* 0x006D779F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D77A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D77A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D77AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006D77AB: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D77AC: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D77AF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D77B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D77B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D77B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D77B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D77D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D77D0u);

L_006D77D0:
    PUSH32(esp, ebp); /* 0x006D77D0: push ebp */
    ebp = esp; /* 0x006D77D1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D77D3: push esi */
    esi = ecx; /* 0x006D77D4: mov esi, ecx */
    ecx = MEM32(esi + 0x8); /* 0x006D77D6: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x006D77D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D77E7; /* 0x006D77DB: jne 0x6d77e7 */
L_006D77DD:
    eax = 0x80004005u; /* 0x006D77DD: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x006D77E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D77E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D77E4: ret 4 */
L_006D77E7:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006D77E7: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D77EB: push ebx */
    PUSH32(esp, edi); /* 0x006D77EC: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D77F8; /* 0x006D77ED: je 0x6d77f8 */
L_006D77EF:
    eax = MEM32(esi + 0xC); /* 0x006D77EF: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D77F2: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x006D77F3: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D784E; /* 0x006D77F6: jbe 0x6d784e */
L_006D77F8:
    edi = MEM32(esi + 0x10); /* 0x006D77F8: mov edi, dword ptr [esi + 0x10] */
    /* test edi, edi */ /* 0x006D77FB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7806; /* 0x006D77FD: jne 0x6d7806 */
L_006D77FF:
    edi = 0x10u; /* 0x006D77FF: mov edi, 0x10 */
    goto L_006D7808; /* 0x006D7804: jmp 0x6d7808 */
L_006D7806:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x006D7806: add edi, edi */
    _flag_k = FK_ADD;
L_006D7808:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x006D7808: imul ecx, edi */
    PUSH32(esp, ecx); /* 0x006D780B: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x006D780C: call 0x77f3df */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006D7811: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D7813: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006D7816: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7826; /* 0x006D7818: jne 0x6d7826 */
L_006D781A:
    edi = POP32_VAL(esp); /* 0x006D781A: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D781B: pop ebx */
    eax = 0x8007000Eu; /* 0x006D781C: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x006D7821: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D7822: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7823: ret 4 */
L_006D7826:
    ecx = MEM32(esi + 0x4); /* 0x006D7826: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x006D7829: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7848; /* 0x006D782B: je 0x6d7848 */
L_006D782D:
    eax = MEM32(esi + 0xC); /* 0x006D782D: mov eax, dword ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x8)); /* 0x006D7830: imul eax, dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x006D7834: push eax */
    PUSH32(esp, ecx); /* 0x006D7835: push ecx */
    PUSH32(esp, ebx); /* 0x006D7836: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x006D7837: call 0x780838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006D783C: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D783F: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D7845: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006D7848:
    MEM32(esi + 0x4) = ebx; /* 0x006D7848: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x10) = edi; /* 0x006D784B: mov dword ptr [esi + 0x10], edi */
L_006D784E:
    /* cmp MEM32(esi), 0 */ /* 0x006D784E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7878; /* 0x006D7851: jne 0x6d7878 */
L_006D7853:
    ecx = MEM32(esi + 0x8); /* 0x006D7853: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0xC); /* 0x006D7856: mov eax, dword ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D7859: imul eax, ecx */
    PUSH32(esp, ecx); /* 0x006D785C: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D785D: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x006D7860: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D7863: push eax */
    RECOMP_CALL(sub_00780838); /* 0x006D7864: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006D7869: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D786C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D786F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D7871: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D7872: pop ebx */
    esi = POP32_VAL(esp); /* 0x006D7873: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D7874: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7875: ret 4 */
L_006D7878:
    edx = MEM32(esi + 0xC); /* 0x006D7878: mov edx, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x006D787B: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x006D787E: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x006D7881: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D7882: pop ebx */
    MEM32(ecx + edx * 4) = eax; /* 0x006D7883: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x006D7886: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7889: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D788B: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D788C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D788D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D7890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7890u);

L_006D7890:
    PUSH32(esp, ebp); /* 0x006D7890: push ebp */
    ebp = esp; /* 0x006D7891: mov ebp, esp */
    /* cmp MEM32(ecx), 0 */ /* 0x006D7893: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D78A6; /* 0x006D7896: jne 0x6d78a6 */
L_006D7898:
    eax = MEM32(ecx + 0x8); /* 0x006D7898: mov eax, dword ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x006D789B: imul eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x006D789F: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006D78A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D78A3: ret 4 */
L_006D78A6:
    ecx = MEM32(ecx + 0x4); /* 0x006D78A6: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x006D78A9: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(ecx + eax * 4); /* 0x006D78AC: mov eax, dword ptr [ecx + eax*4] */
    ebp = POP32_VAL(esp); /* 0x006D78AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D78B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D78C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D78C0u);

L_006D78C0:
    PUSH32(esp, ebp); /* 0x006D78C0: push ebp */
    ebp = esp; /* 0x006D78C1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D78C3: push ebx */
    PUSH32(esp, esi); /* 0x006D78C4: push esi */
    ebx = ecx; /* 0x006D78C5: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006D78C7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D78C8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x006D78CA: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D793C; /* 0x006D78CD: jbe 0x6d793c */
L_006D78CF:
    /* nop */ /* 0x006D78CF: nop  */
L_006D78D0:
    /* cmp MEM32(ebx), 0 */ /* 0x006D78D0: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D792B; /* 0x006D78D3: jne 0x6d792b */
L_006D78D5:
    edx = MEM32(ebx + 0x8); /* 0x006D78D5: mov edx, dword ptr [ebx + 8] */
    eax = edx; /* 0x006D78D8: mov eax, edx */
    esi = MEM32(ebp + 0x8); /* 0x006D78DA: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x006D78DD: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x4); /* 0x006D78E0: add eax, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x006D78E3: sub edx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_006D78F9; /* 0x006D78E6: jb 0x6d78f9 */
L_006D78E8:
    ecx = MEM32(eax); /* 0x006D78E8: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi) */ /* 0x006D78EA: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D78FE; /* 0x006D78EC: jne 0x6d78fe */
L_006D78EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006D78EE: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006D78F1: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x006D78F4: sub edx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_006D78E8; /* 0x006D78F7: jae 0x6d78e8 */
L_006D78F9:
    /* cmp edx, 0xFFFFFFFCu */ /* 0x006D78F9: cmp edx, -4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7945; /* 0x006D78FC: je 0x6d7945 */
L_006D78FE:
    SET_LO8(ecx, MEM8(eax)); /* 0x006D78FE: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(esi) */ /* 0x006D7900: cmp cl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7936; /* 0x006D7902: jne 0x6d7936 */
L_006D7904:
    /* cmp edx, 0xFFFFFFFDu */ /* 0x006D7904: cmp edx, -3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7945; /* 0x006D7907: je 0x6d7945 */
L_006D7909:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x006D7909: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(esi + 0x1) */ /* 0x006D790C: cmp cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7936; /* 0x006D790F: jne 0x6d7936 */
L_006D7911:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x006D7911: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7945; /* 0x006D7914: je 0x6d7945 */
L_006D7916:
    SET_LO8(ecx, MEM8(eax + 0x2)); /* 0x006D7916: mov cl, byte ptr [eax + 2] */
    /* cmp LO8(ecx), MEM8(esi + 0x2) */ /* 0x006D7919: cmp cl, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7936; /* 0x006D791C: jne 0x6d7936 */
L_006D791E:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x006D791E: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7945; /* 0x006D7921: je 0x6d7945 */
L_006D7923:
    SET_LO8(eax, MEM8(eax + 0x3)); /* 0x006D7923: mov al, byte ptr [eax + 3] */
    /* cmp LO8(eax), MEM8(esi + 0x3) */ /* 0x006D7926: cmp al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_006D7934; /* 0x006D7929: jmp 0x6d7934 */
L_006D792B:
    eax = MEM32(ebx + 0x4); /* 0x006D792B: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x006D792E: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + edi * 4), ecx */ /* 0x006D7931: cmp dword ptr [eax + edi*4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_006D7934:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_006D7945; /* 0x006D7934: je 0x6d7945 */
L_006D7936:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D7936: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0xC) */ /* 0x006D7937: cmp edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D78D0; /* 0x006D793A: jb 0x6d78d0 */
L_006D793C:
    edi = POP32_VAL(esp); /* 0x006D793C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D793D: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006D793E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x006D7940: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D7941: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7942: ret 4 */
L_006D7945:
    edi = POP32_VAL(esp); /* 0x006D7945: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7946: pop esi */
    SET_LO8(eax, 1); /* 0x006D7947: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x006D7949: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D794A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D794B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D7950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7950u);

L_006D7950:
    PUSH32(esp, ebp); /* 0x006D7950: push ebp */
    ebp = esp; /* 0x006D7951: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D7953: push esi */
    PUSH32(esp, edi); /* 0x006D7954: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D7955: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x006D7958: mov esi, ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x006D795A: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D796A; /* 0x006D795D: jne 0x6d796a */
L_006D795F:
    PUSH32(esp, 0x007CCE5Cu); /* 0x006D795F: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x006D7964: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_006D796A:
    /* cmp edi, 0x7FFFFFFEu */ /* 0x006D796A: cmp edi, 0x7ffffffe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D797D; /* 0x006D7970: jbe 0x6d797d */
L_006D7972:
    PUSH32(esp, 0x007CCE5Cu); /* 0x006D7972: push 0x7cce5c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x006D7977: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_006D797D:
    eax = MEM32(esi + 0x14); /* 0x006D797D: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x006D7980: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D79B6; /* 0x006D7982: jae 0x6d79b6 */
L_006D7984:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006D7984: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x006D7987: push edi */
    RECOMP_CALL(sub_005C9C30); /* 0x006D7988: call 0x5c9c30 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x006D798D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D79E6; /* 0x006D798F: je 0x6d79e6 */
L_006D7991:
    PUSH32(esp, 0x58u); /* 0x006D7991: push 0x58 */
    PUSH32(esp, edi); /* 0x006D7993: push edi */
    PUSH32(esp, 0); /* 0x006D7994: push 0 */
    ecx = esi; /* 0x006D7996: mov ecx, esi */
    RECOMP_CALL(sub_006662E0); /* 0x006D7998: call 0x6662e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x006D799D: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x006D79A1: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_006D79DE; /* 0x006D79A4: jb 0x6d79de */
L_006D79A6:
    eax = MEM32(esi); /* 0x006D79A6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D79A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x006D79AA: mov word ptr [eax + edi*2], cx */
    eax = esi; /* 0x006D79AE: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006D79B0: pop edi */
    esi = POP32_VAL(esp); /* 0x006D79B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D79B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D79B3: ret 8 */
L_006D79B6:
    /* test edi, edi */ /* 0x006D79B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7991; /* 0x006D79B8: jne 0x6d7991 */
L_006D79BA:
    MEM32(esi + 0x10) = edi; /* 0x006D79BA: mov dword ptr [esi + 0x10], edi */
    /* cmp eax, 8 */ /* 0x006D79BD: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D79D1; /* 0x006D79C0: jb 0x6d79d1 */
L_006D79C2:
    eax = MEM32(esi); /* 0x006D79C2: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D79C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D79C6: pop edi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x006D79C7: mov word ptr [eax], cx */
    eax = esi; /* 0x006D79CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D79CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D79CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D79CE: ret 8 */
L_006D79D1:
    eax = esi; /* 0x006D79D1: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D79D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D79D5: pop edi */
    esi = POP32_VAL(esp); /* 0x006D79D6: pop esi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x006D79D7: mov word ptr [eax], cx */
    ebp = POP32_VAL(esp); /* 0x006D79DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D79DB: ret 8 */
L_006D79DE:
    eax = esi; /* 0x006D79DE: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D79E0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x006D79E2: mov word ptr [eax + edi*2], cx */
L_006D79E6:
    edi = POP32_VAL(esp); /* 0x006D79E6: pop edi */
    eax = esi; /* 0x006D79E7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D79E9: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D79EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D79EB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D79F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D79F0u);

L_006D79F0:
    PUSH32(esp, ebp); /* 0x006D79F0: push ebp */
    ebp = esp; /* 0x006D79F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x006D79F3: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D79F9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D79FE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D7A00: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006D7A03: push esi */
    PUSH32(esp, edx); /* 0x006D7A04: push edx */
    PUSH32(esp, 0x00801B24u); /* 0x006D7A05: push 0x801b24 */
    eax = ebp + (-0x84); /* 0x006D7A0A: lea eax, [ebp - 0x84] */
    MEM32(ebp + (-0x88)) = 0; /* 0x006D7A10: mov dword ptr [ebp - 0x88], 0 */
    PUSH32(esp, 0x40u); /* 0x006D7A1A: push 0x40 */
    PUSH32(esp, eax); /* 0x006D7A1C: push eax */
    esi = ecx; /* 0x006D7A1D: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC4C8)); /* 0x006D7A1F: call dword ptr [0x7cc4c8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D7A25: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x84); /* 0x006D7A28: lea eax, [ebp - 0x84] */
    ecx = esi; /* 0x006D7A2E: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006D7A30: push eax */
    RECOMP_CALL(sub_005C8920); /* 0x006D7A31: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006D7A36: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x006D7A39: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D7A3B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D7A3D: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7A3E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7A43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7A45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7A46: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D7A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7A50u);

L_006D7A50:
    MEM32(ecx) = 0x00801890u; /* 0x006D7A50: mov dword ptr [ecx], 0x801890 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7A56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x1C) = 0; /* 0x006D7A58: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x006D7A5F: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x24) = 0x190u; /* 0x006D7A66: mov dword ptr [ecx + 0x24], 0x190 */
    MEM32(ecx + 0x28) = 0x12Cu; /* 0x006D7A6D: mov dword ptr [ecx + 0x28], 0x12c */
    MEM32(ecx + 0x2C) = 5; /* 0x006D7A74: mov dword ptr [ecx + 0x2c], 5 */
    MEM32(ecx + 0x30) = 0; /* 0x006D7A7B: mov dword ptr [ecx + 0x30], 0 */
    MEM32(ecx + 0x34) = 0xFu; /* 0x006D7A82: mov dword ptr [ecx + 0x34], 0xf */
    MEM32(ecx + 0x38) = 0; /* 0x006D7A89: mov dword ptr [ecx + 0x38], 0 */
    MEM32(ecx + 0x3C) = 0; /* 0x006D7A90: mov dword ptr [ecx + 0x3c], 0 */
    MEM16(ecx + 0x4) = (uint16_t)(0); /* 0x006D7A97: mov word ptr [ecx + 4], 0 */
    MEM32(ecx + 0x10) = 0; /* 0x006D7A9D: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x104) = 0; /* 0x006D7AA4: mov dword ptr [ecx + 0x104], 0 */
    MEM32(ecx + 0x108) = 0; /* 0x006D7AAE: mov dword ptr [ecx + 0x108], 0 */
    MEM32(ecx + 0xF8) = 0; /* 0x006D7AB8: mov dword ptr [ecx + 0xf8], 0 */
    MEM32(ecx + 0xFC) = 0; /* 0x006D7AC2: mov dword ptr [ecx + 0xfc], 0 */
    MEM32(ecx + 0x100) = 0; /* 0x006D7ACC: mov dword ptr [ecx + 0x100], 0 */
    MEM32(ecx + 0xB4) = 1; /* 0x006D7AD6: mov dword ptr [ecx + 0xb4], 1 */
    MEM32(ecx + 0xB8) = 0; /* 0x006D7AE0: mov dword ptr [ecx + 0xb8], 0 */
    MEM32(ecx + 0xBC) = 0x00010000u; /* 0x006D7AEA: mov dword ptr [ecx + 0xbc], 0x10000 */
    MEM32(ecx + 0x25C) = 0; /* 0x006D7AF4: mov dword ptr [ecx + 0x25c], 0 */
    MEM32(ecx + 0x288) = 0; /* 0x006D7AFE: mov dword ptr [ecx + 0x288], 0 */
    MEM32(ecx + 0x28C) = 0; /* 0x006D7B08: mov dword ptr [ecx + 0x28c], 0 */
    MEM32(ecx + 0x290) = 0; /* 0x006D7B12: mov dword ptr [ecx + 0x290], 0 */
    MEM16(ecx + 0x294) = (uint16_t)(LO16(eax)); /* 0x006D7B1C: mov word ptr [ecx + 0x294], ax */
    MEM16(ecx + 0x348) = (uint16_t)(LO16(eax)); /* 0x006D7B23: mov word ptr [ecx + 0x348], ax */
    MEM32(ecx + 0x284) = eax; /* 0x006D7B2A: mov dword ptr [ecx + 0x284], eax */
    MEM32(ecx + 0x6C) = eax; /* 0x006D7B30: mov dword ptr [ecx + 0x6c], eax */
    MEM32(ecx + 0x68) = eax; /* 0x006D7B33: mov dword ptr [ecx + 0x68], eax */
    MEM32(ecx + 0xA8) = eax; /* 0x006D7B36: mov dword ptr [ecx + 0xa8], eax */
    MEM32(ecx + 0xA4) = eax; /* 0x006D7B3C: mov dword ptr [ecx + 0xa4], eax */
    eax = ecx; /* 0x006D7B42: mov eax, ecx */
    MEM32(0x87CBC0) = ecx; /* 0x006D7B44: mov dword ptr [0x87cbc0], ecx */
    MEM32(ecx + 0x400) = 0x280u; /* 0x006D7B4A: mov dword ptr [ecx + 0x400], 0x280 */
    MEM32(ecx + 0x404) = 0x1E0u; /* 0x006D7B54: mov dword ptr [ecx + 0x404], 0x1e0 */
    MEM32(ecx + 0x408) = 0x00010000u; /* 0x006D7B5E: mov dword ptr [ecx + 0x408], 0x10000 */
    MEM32(ecx + 0x260) = 0x90CF0000u; /* 0x006D7B68: mov dword ptr [ecx + 0x260], 0x90cf0000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7B72: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D7B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7B80u);

L_006D7B80:
    PUSH32(esp, ebp); /* 0x006D7B80: push ebp */
    ebp = esp; /* 0x006D7B81: mov ebp, esp */
    ecx = MEM32(0x87CBC0); /* 0x006D7B83: mov ecx, dword ptr [0x87cbc0] */
    /* test ecx, ecx */ /* 0x006D7B89: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7B93; /* 0x006D7B8B: je 0x6d7b93 */
L_006D7B8D:
    eax = MEM32(ecx); /* 0x006D7B8D: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x006D7B8F: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x38)); goto _ljump; }
L_006D7B93:
    ebp = POP32_VAL(esp); /* 0x006D7B93: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC700)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D7BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7BA0u);

L_006D7BA0:
    PUSH32(esp, ebp); /* 0x006D7BA0: push ebp */
    ebp = esp; /* 0x006D7BA1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006D7BA3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x006D7BA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7BAF; /* 0x006D7BA8: jne 0x6d7baf */
L_006D7BAA:
    edx = eax + 0x20; /* 0x006D7BAA: lea edx, [eax + 0x20] */
    goto L_006D7BD0; /* 0x006D7BAD: jmp 0x6d7bd0 */
L_006D7BAF:
    /* cmp eax, 1 */ /* 0x006D7BAF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7BB9; /* 0x006D7BB2: jne 0x6d7bb9 */
L_006D7BB4:
    edx = eax + 0x7F; /* 0x006D7BB4: lea edx, [eax + 0x7f] */
    goto L_006D7BD0; /* 0x006D7BB7: jmp 0x6d7bd0 */
L_006D7BB9:
    /* cmp eax, 2 */ /* 0x006D7BB9: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7BC3; /* 0x006D7BBC: jne 0x6d7bc3 */
L_006D7BBE:
    edx = eax + 0x3E; /* 0x006D7BBE: lea edx, [eax + 0x3e] */
    goto L_006D7BD0; /* 0x006D7BC1: jmp 0x6d7bd0 */
L_006D7BC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D7BC3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x50u; /* 0x006D7BC5: mov ecx, 0x50 */
    /* cmp eax, 3 */ /* 0x006D7BCA: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edx = ecx; } /* 0x006D7BCD: cmove edx, ecx */
L_006D7BD0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006D7BD0: push dword ptr [ebp + 0x14] */
    ecx = MEM32(0x87CBC0); /* 0x006D7BD3: mov ecx, dword ptr [0x87cbc0] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D7BD9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x006D7BDC: push edx */
    eax = MEM32(ecx); /* 0x006D7BDD: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D7BDF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D7BE2: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D7BE5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006D7BE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006D7BE9: setns al */
    ebp = POP32_VAL(esp); /* 0x006D7BEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D7BED: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D7C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D7C00u);

L_006D7C00:
    PUSH32(esp, ebp); /* 0x006D7C00: push ebp */
    ebp = esp; /* 0x006D7C01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D7C03: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x006D7C06: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D7C09: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D7C0E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4C) = eax; /* 0x006D7C10: mov dword ptr [esp + 0x4c], eax */
    eax = MEM32(ebp + 0x8); /* 0x006D7C14: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006D7C17: push esi */
    PUSH32(esp, edi); /* 0x006D7C18: push edi */
    edi = ecx; /* 0x006D7C19: mov edi, ecx */
    PUSH32(esp, 0x20u); /* 0x006D7C1B: push 0x20 */
    MEM32(edi + 0x8) = eax; /* 0x006D7C1D: mov dword ptr [edi + 8], eax */
    RECOMP_ICALL(MEM32(0x7CC92C)); /* 0x006D7C20: call dword ptr [0x7cc92c] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x104) = eax; /* 0x006D7C26: mov dword ptr [edi + 0x104], eax */
    /* test eax, eax */ /* 0x006D7C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D7C56; /* 0x006D7C2E: jne 0x6d7c56 */
L_006D7C30:
    PUSH32(esp, 0x00801B00u); /* 0x006D7C30: push 0x801b00 */
    PUSH32(esp, 1); /* 0x006D7C35: push 1 */
    PUSH32(esp, 0x82000001u); /* 0x006D7C37: push 0x82000001 */
    ecx = edi; /* 0x006D7C3C: mov ecx, edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D7C3E: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D7C43: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7C44: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006D7C45: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D7C49: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7C4B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7C50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7C52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7C53: ret 4 */
L_006D7C56:
    ecx = edi + 0x18; /* 0x006D7C56: lea ecx, [edi + 0x18] */
    MEM32(edi + 0x20) = 0x006D7BA0u; /* 0x006D7C59: mov dword ptr [edi + 0x20], 0x6d7ba0 */
    MEM32(ecx) = eax; /* 0x006D7C60: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_006D5F10); /* 0x006D7C62: call 0x6d5f10 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D7C67: mov esi, eax */
    /* test esi, esi */ /* 0x006D7C69: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D7CA9; /* 0x006D7C6B: jns 0x6d7ca9 */
L_006D7C6D:
    edx = MEM32(edi + 0x104); /* 0x006D7C6D: mov edx, dword ptr [edi + 0x104] */
    /* test edx, edx */ /* 0x006D7C73: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7C87; /* 0x006D7C75: je 0x6d7c87 */
L_006D7C77:
    ecx = MEM32(edx); /* 0x006D7C77: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x006D7C79: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D7C7A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x104) = 0; /* 0x006D7C7D: mov dword ptr [edi + 0x104], 0 */
L_006D7C87:
    PUSH32(esp, 0x00801B9Cu); /* 0x006D7C87: push 0x801b9c */
    PUSH32(esp, 1); /* 0x006D7C8C: push 1 */
    PUSH32(esp, esi); /* 0x006D7C8E: push esi */
    ecx = edi; /* 0x006D7C8F: mov ecx, edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D7C91: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D7C96: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7C97: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006D7C98: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D7C9C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7C9E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7CA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7CA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7CA6: ret 4 */
L_006D7CA9:
    /* cmp MEM32(edi + 0xF8), 0 */ /* 0x006D7CA9: cmp dword ptr [edi + 0xf8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xF8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7DDA; /* 0x006D7CB0: jne 0x6d7dda */
L_006D7CB6:
    /* test MEM32(edi + 0x260), 0x00C00000u */ /* 0x006D7CB6: test dword ptr [edi + 0x260], 0xc00000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x260)); _flag_b = (uint32_t)(0x00C00000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x40) = 0; /* 0x006D7CC0: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = 0; /* 0x006D7CC8: mov dword ptr [esp + 0x44], 0 */
    MEM32(esp + 0x48) = 0; /* 0x006D7CD0: mov dword ptr [esp + 0x48], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7CE7; /* 0x006D7CD8: je 0x6d7ce7 */
L_006D7CDA:
    eax = esp + 0x40; /* 0x006D7CDA: lea eax, [esp + 0x40] */
    PUSH32(esp, eax); /* 0x006D7CDE: push eax */
    RECOMP_ICALL(MEM32(0x7CC060)); /* 0x006D7CDF: call dword ptr [0x7cc060] */
    RECOMP_FLAGS_IN();
    goto L_006D7CE9; /* 0x006D7CE5: jmp 0x6d7ce9 */
L_006D7CE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7CE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D7CE9:
    MEM32(edi + 0x40C) = eax; /* 0x006D7CE9: mov dword ptr [edi + 0x40c], eax */
    eax = MEM32(edi + 0x8); /* 0x006D7CEF: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 0x65u); /* 0x006D7CF2: push 0x65 */
    PUSH32(esp, eax); /* 0x006D7CF4: push eax */
    MEM32(esp + 0x10) = 0; /* 0x006D7CF5: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x14) = 0x006D7B80u; /* 0x006D7CFD: mov dword ptr [esp + 0x14], 0x6d7b80 */
    MEM32(esp + 0x18) = 0; /* 0x006D7D05: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x006D7D0D: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x20) = eax; /* 0x006D7D15: mov dword ptr [esp + 0x20], eax */
    RECOMP_ICALL(MEM32(0x7CC8A8)); /* 0x006D7D19: call dword ptr [0x7cc8a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7F00u); /* 0x006D7D1F: push 0x7f00 */
    PUSH32(esp, 0); /* 0x006D7D24: push 0 */
    MEM32(esp + 0x24) = eax; /* 0x006D7D26: mov dword ptr [esp + 0x24], eax */
    RECOMP_ICALL(MEM32(0x7CC82C)); /* 0x006D7D2A: call dword ptr [0x7cc82c] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x20) = eax; /* 0x006D7D30: mov dword ptr [esp + 0x20], eax */
    eax = MEM32(edi + 0x40C); /* 0x006D7D34: mov eax, dword ptr [edi + 0x40c] */
    MEM32(esp + 0x24) = eax; /* 0x006D7D3A: mov dword ptr [esp + 0x24], eax */
    eax = esp + 0x8; /* 0x006D7D3E: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x006D7D42: push eax */
    MEM32(esp + 0x2C) = 0; /* 0x006D7D43: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0x00801B8Cu; /* 0x006D7D4B: mov dword ptr [esp + 0x30], 0x801b8c */
    RECOMP_ICALL(MEM32(0x7CC854)); /* 0x006D7D53: call dword ptr [0x7cc854] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8Du); /* 0x006D7D59: push 0x8d */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006D7D5E: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x7CC844)); /* 0x006D7D61: call dword ptr [0x7cc844] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x404)); /* 0x006D7D67: push dword ptr [edi + 0x404] */
    esi = eax; /* 0x006D7D6D: mov esi, eax */
    eax = esp + 0x34; /* 0x006D7D6F: lea eax, [esp + 0x34] */
    PUSH32(esp, MEM32(edi + 0x400)); /* 0x006D7D73: push dword ptr [edi + 0x400] */
    PUSH32(esp, 0); /* 0x006D7D79: push 0 */
    PUSH32(esp, 0); /* 0x006D7D7B: push 0 */
    PUSH32(esp, eax); /* 0x006D7D7D: push eax */
    RECOMP_ICALL(MEM32(0x7CC840)); /* 0x006D7D7E: call dword ptr [0x7cc840] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D7D84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006D7D86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D7D88: setne al */
    PUSH32(esp, eax); /* 0x006D7D8B: push eax */
    PUSH32(esp, MEM32(edi + 0x260)); /* 0x006D7D8C: push dword ptr [edi + 0x260] */
    eax = esp + 0x38; /* 0x006D7D92: lea eax, [esp + 0x38] */
    PUSH32(esp, eax); /* 0x006D7D96: push eax */
    RECOMP_ICALL(MEM32(0x7CC858)); /* 0x006D7D97: call dword ptr [0x7cc858] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x3C); /* 0x006D7D9D: mov eax, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x34); /* 0x006D7DA1: sub eax, dword ptr [esp + 0x34] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x006D7DA5: push 0 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006D7DA7: push dword ptr [edi + 8] */
    PUSH32(esp, esi); /* 0x006D7DAA: push esi */
    PUSH32(esp, 0); /* 0x006D7DAB: push 0 */
    PUSH32(esp, eax); /* 0x006D7DAD: push eax */
    eax = MEM32(esp + 0x4C); /* 0x006D7DAE: mov eax, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x44); /* 0x006D7DB2: sub eax, dword ptr [esp + 0x44] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D7DB6: push eax */
    PUSH32(esp, 0x64u); /* 0x006D7DB7: push 0x64 */
    PUSH32(esp, 0x64u); /* 0x006D7DB9: push 0x64 */
    PUSH32(esp, MEM32(edi + 0x260)); /* 0x006D7DBB: push dword ptr [edi + 0x260] */
    PUSH32(esp, MEM32(edi + 0x3FC)); /* 0x006D7DC1: push dword ptr [edi + 0x3fc] */
    PUSH32(esp, 0x00801B8Cu); /* 0x006D7DC7: push 0x801b8c */
    PUSH32(esp, 0); /* 0x006D7DCC: push 0 */
    RECOMP_ICALL(MEM32(0x7CC850)); /* 0x006D7DCE: call dword ptr [0x7cc850] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xF8) = eax; /* 0x006D7DD4: mov dword ptr [edi + 0xf8], eax */
L_006D7DDA:
    /* cmp MEM32(edi + 0xFC), 0 */ /* 0x006D7DDA: cmp dword ptr [edi + 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7DEF; /* 0x006D7DE1: jne 0x6d7def */
L_006D7DE3:
    eax = MEM32(edi + 0xF8); /* 0x006D7DE3: mov eax, dword ptr [edi + 0xf8] */
    MEM32(edi + 0xFC) = eax; /* 0x006D7DE9: mov dword ptr [edi + 0xfc], eax */
L_006D7DEF:
    eax = edi + 0x264; /* 0x006D7DEF: lea eax, [edi + 0x264] */
    PUSH32(esp, eax); /* 0x006D7DF5: push eax */
    PUSH32(esp, MEM32(edi + 0xF8)); /* 0x006D7DF6: push dword ptr [edi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC828)); /* 0x006D7DFC: call dword ptr [0x7cc828] */
    RECOMP_FLAGS_IN();
    eax = edi + 0x274; /* 0x006D7E02: lea eax, [edi + 0x274] */
    PUSH32(esp, eax); /* 0x006D7E08: push eax */
    PUSH32(esp, MEM32(edi + 0xF8)); /* 0x006D7E09: push dword ptr [edi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006D7E0F: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D7E15: mov ecx, edi */
    RECOMP_CALL(sub_006D85B0); /* 0x006D7E17: call 0x6d85b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D7E1C: mov esi, eax */
    /* test esi, esi */ /* 0x006D7E1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D7E5E; /* 0x006D7E20: jns 0x6d7e5e */
L_006D7E22:
    edx = MEM32(edi + 0x104); /* 0x006D7E22: mov edx, dword ptr [edi + 0x104] */
    /* test edx, edx */ /* 0x006D7E28: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7E3C; /* 0x006D7E2A: je 0x6d7e3c */
L_006D7E2C:
    ecx = MEM32(edx); /* 0x006D7E2C: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x006D7E2E: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D7E2F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x104) = 0; /* 0x006D7E32: mov dword ptr [edi + 0x104], 0 */
L_006D7E3C:
    PUSH32(esp, 0x00801B54u); /* 0x006D7E3C: push 0x801b54 */
    PUSH32(esp, 1); /* 0x006D7E41: push 1 */
    PUSH32(esp, esi); /* 0x006D7E43: push esi */
    ecx = edi; /* 0x006D7E44: mov ecx, edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D7E46: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D7E4B: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7E4C: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006D7E4D: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D7E51: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7E53: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7E58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7E5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7E5B: ret 4 */
L_006D7E5E:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D7E5E: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D7E9B; /* 0x006D7E65: jne 0x6d7e9b */
L_006D7E67:
    eax = esp + 0x40; /* 0x006D7E67: lea eax, [esp + 0x40] */
    MEM32(0x9280A0) = 1; /* 0x006D7E6B: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D7E75: push eax */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006D7E76: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D7E7C: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D7E81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7EF5; /* 0x006D7E83: je 0x6d7ef5 */
L_006D7E85:
    ecx = MEM32(esp + 0x40); /* 0x006D7E85: mov ecx, dword ptr [esp + 0x40] */
    MEM32(0x928098) = ecx; /* 0x006D7E89: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0x44); /* 0x006D7E8F: mov ecx, dword ptr [esp + 0x44] */
    MEM32(0x92809C) = ecx; /* 0x006D7E93: mov dword ptr [0x92809c], ecx */
    goto L_006D7EA0; /* 0x006D7E99: jmp 0x6d7ea0 */
L_006D7E9B:
    eax = MEM32(0x928070); /* 0x006D7E9B: mov eax, dword ptr [0x928070] */
L_006D7EA0:
    /* test eax, eax */ /* 0x006D7EA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7EF5; /* 0x006D7EA2: je 0x6d7ef5 */
L_006D7EA4:
    eax = esp + 0x40; /* 0x006D7EA4: lea eax, [esp + 0x40] */
    PUSH32(esp, eax); /* 0x006D7EA8: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006D7EA9: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x866088), 0 */ /* 0x006D7EAF: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x44); /* 0x006D7EB6: mov edx, dword ptr [esp + 0x44] */
    esi = MEM32(esp + 0x40); /* 0x006D7EBA: mov esi, dword ptr [esp + 0x40] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7EDC; /* 0x006D7EBE: je 0x6d7edc */
L_006D7EC0:
    ecx = esi; /* 0x006D7EC0: mov ecx, esi */
    eax = edx; /* 0x006D7EC2: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x928080));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x928080); /* 0x006D7EC4: sub ecx, dword ptr [0x928080] */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(0x928084), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D7ECA: sbb eax, dword ptr [0x928084] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x928090)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928090) = MEM32(0x928090) + ecx; /* 0x006D7ED0: add dword ptr [0x928090], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(0x928094), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D7ED6: adc dword ptr [0x928094], eax */
      MEM32(0x928094) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_006D7EDC:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D7EDC: xorps xmm0, xmm0 */
    MEM32(0x928088) = esi; /* 0x006D7EDF: mov dword ptr [0x928088], esi */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006D7EE5: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x92808C) = edx; /* 0x006D7EED: mov dword ptr [0x92808c], edx */
    goto L_006D7F4F; /* 0x006D7EF3: jmp 0x6d7f4f */
L_006D7EF5:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D7EF5: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006D7EFB: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006D7EFF: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D7F03: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D7F03: shr eax, 0x1f */
    /* cmp MEM32(0x866088), 0 */ /* 0x006D7F06: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006D7F0D: addsd xmm1, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006D7F16: mulsd xmm1, qword ptr [0x808c60] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7F3C; /* 0x006D7F1E: je 0x6d7f3c */
L_006D7F20:
    _xmm[0] = _xmm[1]; /* 0x006D7F20: movapd xmm0, xmm1 */
    { double _s = sse_f64(MEM64(0x928060)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006D7F24: subsd xmm0, qword ptr [0x928060] */
    { double _s = sse_f64(MEM64(0x928068)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D7F2C: addsd xmm0, qword ptr [0x928068] */
    MEM64(0x928068) = _xmm[0].u64[0]; /* 0x006D7F34: movsd qword ptr [0x928068], xmm0 */
L_006D7F3C:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D7F3C: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D7F3F: movsd qword ptr [0x928078], xmm1 */
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D7F47: movsd qword ptr [0x928060], xmm0 */
L_006D7F4F:
    eax = MEM32(edi); /* 0x006D7F4F: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x006D7F51: mov ecx, edi */
    MEM32(0x866088) = 0; /* 0x006D7F53: mov dword ptr [0x866088], 0 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x006D7F5D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D7F60: mov esi, eax */
    /* test esi, esi */ /* 0x006D7F62: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D7FA2; /* 0x006D7F64: jns 0x6d7fa2 */
L_006D7F66:
    edx = MEM32(edi + 0x104); /* 0x006D7F66: mov edx, dword ptr [edi + 0x104] */
    /* test edx, edx */ /* 0x006D7F6C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D7F80; /* 0x006D7F6E: je 0x6d7f80 */
L_006D7F70:
    ecx = MEM32(edx); /* 0x006D7F70: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x006D7F72: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D7F73: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x104) = 0; /* 0x006D7F76: mov dword ptr [edi + 0x104], 0 */
L_006D7F80:
    PUSH32(esp, 0x00801B2Cu); /* 0x006D7F80: push 0x801b2c */
    PUSH32(esp, 1); /* 0x006D7F85: push 1 */
    PUSH32(esp, esi); /* 0x006D7F87: push esi */
    ecx = edi; /* 0x006D7F88: mov ecx, edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D7F8A: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D7F8F: pop edi */
    esi = POP32_VAL(esp); /* 0x006D7F90: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006D7F91: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D7F95: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D7F97: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D7F9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D7F9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D7F9F: ret 4 */
L_006D7FA2:
    /* cmp MEM8(edi + 0xB4), 0 */ /* 0x006D7FA2: cmp byte ptr [edi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(edi + 0x400); /* 0x006D7FA9: mov eax, dword ptr [edi + 0x400] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D7FC8; /* 0x006D7FAF: je 0x6d7fc8 */
L_006D7FB1:
    MEM32(edi + 0x54) = eax; /* 0x006D7FB1: mov dword ptr [edi + 0x54], eax */
    eax = MEM32(edi + 0x404); /* 0x006D7FB4: mov eax, dword ptr [edi + 0x404] */
    MEM32(edi + 0x58) = eax; /* 0x006D7FBA: mov dword ptr [edi + 0x58], eax */
    eax = MEM32(edi + 0x284); /* 0x006D7FBD: mov eax, dword ptr [edi + 0x284] */
    MEM32(edi + 0x5C) = eax; /* 0x006D7FC3: mov dword ptr [edi + 0x5c], eax */
    goto L_006D7FE6; /* 0x006D7FC6: jmp 0x6d7fe6 */
L_006D7FC8:
    MEM32(edi + 0x90) = eax; /* 0x006D7FC8: mov dword ptr [edi + 0x90], eax */
    eax = MEM32(edi + 0x404); /* 0x006D7FCE: mov eax, dword ptr [edi + 0x404] */
    MEM32(edi + 0x94) = eax; /* 0x006D7FD4: mov dword ptr [edi + 0x94], eax */
    eax = MEM32(edi + 0x284); /* 0x006D7FDA: mov eax, dword ptr [edi + 0x284] */
    MEM32(edi + 0x98) = eax; /* 0x006D7FE0: mov dword ptr [edi + 0x98], eax */
L_006D7FE6:
    ecx = edi; /* 0x006D7FE6: mov ecx, edi */
    RECOMP_CALL(sub_006D8CC0); /* 0x006D7FE8: call 0x6d8cc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D7FED: mov esi, eax */
    /* test esi, esi */ /* 0x006D7FEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D802F; /* 0x006D7FF1: jns 0x6d802f */
L_006D7FF3:
    edx = MEM32(edi + 0x104); /* 0x006D7FF3: mov edx, dword ptr [edi + 0x104] */
    /* test edx, edx */ /* 0x006D7FF9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D800D; /* 0x006D7FFB: je 0x6d800d */
L_006D7FFD:
    ecx = MEM32(edx); /* 0x006D7FFD: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x006D7FFF: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D8000: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x104) = 0; /* 0x006D8003: mov dword ptr [edi + 0x104], 0 */
L_006D800D:
    PUSH32(esp, 0x00801D64u); /* 0x006D800D: push 0x801d64 */
    PUSH32(esp, 1); /* 0x006D8012: push 1 */
    PUSH32(esp, esi); /* 0x006D8014: push esi */
    ecx = edi; /* 0x006D8015: mov ecx, edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D8017: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D801C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D801D: pop esi */
    ecx = MEM32(esp + 0x4C); /* 0x006D801E: mov ecx, dword ptr [esp + 0x4c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D8022: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D8024: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D8029: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D802B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D802C: ret 4 */
L_006D802F:
    eax = MEM32(edi); /* 0x006D802F: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x006D8031: mov ecx, edi */
    PUSH32(esp, 0); /* 0x006D8033: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8035: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x54); /* 0x006D8038: mov ecx, dword ptr [esp + 0x54] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D803C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D803E: pop edi */
    esi = POP32_VAL(esp); /* 0x006D803F: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D8040: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D8042: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D8047: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8049: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D804A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D8050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D8050u);

L_006D8050:
    PUSH32(esp, ebp); /* 0x006D8050: push ebp */
    ebp = esp; /* 0x006D8051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006D8053: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D8056: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D805B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D805D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006D8060: push ebx */
    PUSH32(esp, esi); /* 0x006D8061: push esi */
    esi = ecx; /* 0x006D8062: mov esi, ecx */
    ecx = ebp + (-0x14); /* 0x006D8064: lea ecx, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x006D8067: push edi */
    PUSH32(esp, ecx); /* 0x006D8068: push ecx */
    PUSH32(esp, 0); /* 0x006D8069: push 0 */
    eax = MEM32(esi + 0x104); /* 0x006D806B: mov eax, dword ptr [esi + 0x104] */
    PUSH32(esp, eax); /* 0x006D8071: push eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x006D8072: mov dword ptr [ebp - 0x1c], esi */
    edx = MEM32(eax); /* 0x006D8075: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x006D8077: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D807A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D807C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x006D807E: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D8081: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x006D8083: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(esi + 0x1C); /* 0x006D8086: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006D8089: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x2C)) = edx; /* 0x006D808C: mov dword ptr [ebp - 0x2c], edx */
    eax = MEM32(eax + 0xC); /* 0x006D808F: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x40)) = eax; /* 0x006D8092: mov dword ptr [ebp - 0x40], eax */
    /* test eax, eax */ /* 0x006D8095: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D827B; /* 0x006D8097: je 0x6d827b */
L_006D809D:
    ebx = MEM32(esi + 0x1C); /* 0x006D809D: mov ebx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x006D80A0: mov dword ptr [ebp - 0x3c], ebx */
L_006D80A3:
    /* cmp MEM32(ebx), 0 */ /* 0x006D80A3: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D80B3; /* 0x006D80A6: jne 0x6d80b3 */
L_006D80A8:
    eax = MEM32(ebx + 0x8); /* 0x006D80A8: mov eax, dword ptr [ebx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006D80AB: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x4); /* 0x006D80AE: add eax, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    goto L_006D80B9; /* 0x006D80B1: jmp 0x6d80b9 */
L_006D80B3:
    eax = MEM32(ebx + 0x4); /* 0x006D80B3: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + edx * 4); /* 0x006D80B6: mov eax, dword ptr [eax + edx*4] */
L_006D80B9:
    MEM32(ebp + (-0x24)) = eax; /* 0x006D80B9: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D80BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x454); /* 0x006D80BE: mov eax, dword ptr [eax + 0x454] */
    MEM32(ebp + (-0x30)) = ebx; /* 0x006D80C4: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x34)) = eax; /* 0x006D80C7: mov dword ptr [ebp - 0x34], eax */
    edi = MEM32(eax + 0xC); /* 0x006D80CA: mov edi, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x38)) = edi; /* 0x006D80CD: mov dword ptr [ebp - 0x38], edi */
    /* test edi, edi */ /* 0x006D80D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8187; /* 0x006D80D2: je 0x6d8187 */
L_006D80D8:
    /* cmp MEM32(eax), 0 */ /* 0x006D80D8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D80E8; /* 0x006D80DB: jne 0x6d80e8 */
L_006D80DD:
    edi = MEM32(eax + 0x8); /* 0x006D80DD: mov edi, dword ptr [eax + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x006D80E0: imul edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x4); /* 0x006D80E3: add edi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D80EE; /* 0x006D80E6: jmp 0x6d80ee */
L_006D80E8:
    eax = MEM32(eax + 0x4); /* 0x006D80E8: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax + ebx * 4); /* 0x006D80EB: mov edi, dword ptr [eax + ebx*4] */
L_006D80EE:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x006D80EE: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D80FA; /* 0x006D80F2: je 0x6d80fa */
L_006D80F4:
    /* cmp MEM32(edi + 0x4), 2 */ /* 0x006D80F4: cmp dword ptr [edi + 4], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8174; /* 0x006D80F8: jne 0x6d8174 */
L_006D80FA:
    esi = MEM32(edi + 0x138); /* 0x006D80FA: mov esi, dword ptr [edi + 0x138] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D8100: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edx */ /* 0x006D8102: cmp dword ptr [esi + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D8174; /* 0x006D8105: jbe 0x6d8174 */
L_006D8107:
    /* cmp MEM32(esi), 0 */ /* 0x006D8107: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8117; /* 0x006D810A: jne 0x6d8117 */
L_006D810C:
    eax = MEM32(esi + 0x8); /* 0x006D810C: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006D810F: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x006D8112: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    goto L_006D811D; /* 0x006D8115: jmp 0x6d811d */
L_006D8117:
    eax = MEM32(esi + 0x4); /* 0x006D8117: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + edx * 4); /* 0x006D811A: mov eax, dword ptr [eax + edx*4] */
L_006D811D:
    ecx = MEM32(eax + 0x8); /* 0x006D811D: mov ecx, dword ptr [eax + 8] */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006D8120: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D8123: sete bl */
    /* cmp MEM8(eax + 0x10), 0 */ /* 0x006D8126: cmp byte ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8168; /* 0x006D812A: je 0x6d8168 */
L_006D812C:
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x006D812C: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x006D812F: mov ecx, dword ptr [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D816B; /* 0x006D8132: jne 0x6d816b */
L_006D8134:
    /* test ecx, ecx */ /* 0x006D8134: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D814E; /* 0x006D8136: je 0x6d814e */
L_006D8138:
    /* cmp MEM32(ecx + 0x4), 1 */ /* 0x006D8138: cmp dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8144; /* 0x006D813C: je 0x6d8144 */
L_006D813E:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x006D813E: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D814E; /* 0x006D8142: je 0x6d814e */
L_006D8144:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x006D8144: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D816B; /* 0x006D8148: jne 0x6d816b */
L_006D814A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D814A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D816B; /* 0x006D814C: je 0x6d816b */
L_006D814E:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x006D814E: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x24)); /* 0x006D8152: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x006D8155: mov dword ptr [ebp - 0x28], ecx */
    ecx = eax; /* 0x006D8158: mov ecx, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x006D815A: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x006D815D: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D816B; /* 0x006D8160: jne 0x6d816b */
L_006D8162:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D8162: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D8197; /* 0x006D8164: jne 0x6d8197 */
L_006D8166:
    goto L_006D816B; /* 0x006D8166: jmp 0x6d816b */
L_006D8168:
    ecx = MEM32(ebp + (-0x18)); /* 0x006D8168: mov ecx, dword ptr [ebp - 0x18] */
L_006D816B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D816B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0xC) */ /* 0x006D816C: cmp edx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D8107; /* 0x006D816F: jb 0x6d8107 */
L_006D8171:
    ebx = MEM32(ebp + (-0x30)); /* 0x006D8171: mov ebx, dword ptr [ebp - 0x30] */
L_006D8174:
    eax = MEM32(ebp + (-0x34)); /* 0x006D8174: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006D8177: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ebx; /* 0x006D8178: mov dword ptr [ebp - 0x30], ebx */
    /* cmp ebx, MEM32(ebp + (-0x38)) */ /* 0x006D817B: cmp ebx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D80D8; /* 0x006D817E: jb 0x6d80d8 */
L_006D8184:
    edx = MEM32(ebp + (-0x2C)); /* 0x006D8184: mov edx, dword ptr [ebp - 0x2c] */
L_006D8187:
    ebx = MEM32(ebp + (-0x3C)); /* 0x006D8187: mov ebx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D818A: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x006D818B: mov dword ptr [ebp - 0x2c], edx */
    /* cmp edx, MEM32(ebp + (-0x40)) */ /* 0x006D818E: cmp edx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D80A3; /* 0x006D8191: jb 0x6d80a3 */
L_006D8197:
    /* test ecx, ecx */ /* 0x006D8197: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D827B; /* 0x006D8199: je 0x6d827b */
L_006D819F:
    ebx = MEM32(ebp + (-0x1C)); /* 0x006D819F: mov ebx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x28)); /* 0x006D81A2: mov eax, dword ptr [ebp - 0x28] */
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006D81A5: movdqu xmm0, xmmword ptr [ebp - 0x14] */
    MEM32(ebx + 0x48) = eax; /* 0x006D81AA: mov dword ptr [ebx + 0x48], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x006D81AD: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebx + 0x4C) = eax; /* 0x006D81B0: mov dword ptr [ebx + 0x4c], eax */
    eax = MEM32(ebx + 0x27C); /* 0x006D81B3: mov eax, dword ptr [ebx + 0x27c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x274));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x274); /* 0x006D81B9: sub eax, dword ptr [ebx + 0x274] */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x7C) = eax; /* 0x006D81BF: mov dword ptr [ebx + 0x7c], eax */
    eax = MEM32(ebx + 0x280); /* 0x006D81C2: mov eax, dword ptr [ebx + 0x280] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x278));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x278); /* 0x006D81C8: sub eax, dword ptr [ebx + 0x278] */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebx + 0x3C), 0 */ /* 0x006D81CE: cmp byte ptr [ebx + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x3C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x50) = ecx; /* 0x006D81D2: mov dword ptr [ebx + 0x50], ecx */
    MEM8(ebx + 0x44) = (uint8_t)(1); /* 0x006D81D5: mov byte ptr [ebx + 0x44], 1 */
    xmm_st(ebx + 0x54, _xmm[0]); /* 0x006D81D9: movdqu xmmword ptr [ebx + 0x54], xmm0 */
    MEM32(ebx + 0x80) = eax; /* 0x006D81DE: mov dword ptr [ebx + 0x80], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D81F8; /* 0x006D81E4: je 0x6d81f8 */
L_006D81E6:
    eax = MEM32(ecx + 0x14); /* 0x006D81E6: mov eax, dword ptr [ecx + 0x14] */
    /* cmp MEM32(eax), 0 */ /* 0x006D81E9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D81EC: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D81F3; /* 0x006D81EF: je 0x6d81f3 */
L_006D81F1:
    eax = MEM32(eax); /* 0x006D81F1: mov eax, dword ptr [eax] */
L_006D81F3:
    eax = MEM32(eax); /* 0x006D81F3: mov eax, dword ptr [eax] */
    MEM32(ebx + 0x64) = eax; /* 0x006D81F5: mov dword ptr [ebx + 0x64], eax */
L_006D81F8:
    edx = MEM32(ebx + 0x68); /* 0x006D81F8: mov edx, dword ptr [ebx + 0x68] */
    /* test edx, edx */ /* 0x006D81FB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D822F; /* 0x006D81FD: je 0x6d822f */
L_006D81FF:
    eax = MEM32(ebx + 0x104); /* 0x006D81FF: mov eax, dword ptr [ebx + 0x104] */
    esi = ebp + (-0x1C); /* 0x006D8205: lea esi, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x006D8208: push esi */
    PUSH32(esp, edx); /* 0x006D8209: push edx */
    PUSH32(esp, 1); /* 0x006D820A: push 1 */
    PUSH32(esp, 0x15u); /* 0x006D820C: push 0x15 */
    PUSH32(esp, 1); /* 0x006D820E: push 1 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D8210: mov dword ptr [ebp - 0x1c], 0 */
    ecx = MEM32(eax); /* 0x006D8217: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D8219: push 0 */
    PUSH32(esp, eax); /* 0x006D821B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x006D821C: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x006D821F: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebx + 0x6C) = 0; /* 0x006D8222: mov dword ptr [ebx + 0x6c], 0 */
    /* test eax, eax */ /* 0x006D8229: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D823D; /* 0x006D822B: jns 0x6d823d */
L_006D822D:
    goto L_006D8236; /* 0x006D822D: jmp 0x6d8236 */
L_006D822F:
    MEM32(ebx + 0x6C) = 0; /* 0x006D822F: mov dword ptr [ebx + 0x6c], 0 */
L_006D8236:
    MEM32(ebx + 0x68) = 0; /* 0x006D8236: mov dword ptr [ebx + 0x68], 0 */
L_006D823D:
    eax = MEM32(ecx + 0x24); /* 0x006D823D: mov eax, dword ptr [ecx + 0x24] */
    /* cmp MEM32(eax), 0 */ /* 0x006D8240: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D8243: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D824A; /* 0x006D8246: je 0x6d824a */
L_006D8248:
    eax = MEM32(eax); /* 0x006D8248: mov eax, dword ptr [eax] */
L_006D824A:
    eax = MEM32(eax); /* 0x006D824A: mov eax, dword ptr [eax] */
    ecx = 1; /* 0x006D824C: mov ecx, 1 */
    /* cmp MEM8(ebx + 0xBD), 0 */ /* 0x006D8251: cmp byte ptr [ebx + 0xbd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xBD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x70) = eax; /* 0x006D8258: mov dword ptr [ebx + 0x70], eax */
    eax = 0x80000000u; /* 0x006D825B: mov eax, 0x80000000 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006D8260: cmovne eax, ecx */
    MEM32(ebx + 0x74) = eax; /* 0x006D8263: mov dword ptr [ebx + 0x74], eax */
    SET_LO8(eax, LO8(ecx)); /* 0x006D8266: mov al, cl */
    edi = POP32_VAL(esp); /* 0x006D8268: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8269: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D826A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D826B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D826E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D8270: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D8275: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8277: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D8278: ret 8 */
L_006D827B:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D827B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006D827E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x006D8280: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8281: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D8282: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D8284: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D8285: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D828A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D828C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D828D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D8290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D8290u);

L_006D8290:
    PUSH32(esp, ebp); /* 0x006D8290: push ebp */
    ebp = esp; /* 0x006D8291: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x006D8293: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D8296: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D829B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D829D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx + 0x1C); /* 0x006D82A0: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D82A3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006D82A5: push ebx */
    PUSH32(esp, esi); /* 0x006D82A6: push esi */
    PUSH32(esp, edi); /* 0x006D82A7: push edi */
    MEM32(ebp + (-0x28)) = ecx; /* 0x006D82A8: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x58)) = 0; /* 0x006D82AB: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x006D82B2: mov dword ptr [ebp - 0x54], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x006D82B9: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x006D82C0: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x006D82C7: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006D82CE: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x2C)) = edx; /* 0x006D82D5: mov dword ptr [ebp - 0x2c], edx */
    /* cmp MEM32(eax + 0xC), edx */ /* 0x006D82D8: cmp dword ptr [eax + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D859B; /* 0x006D82DB: jbe 0x6d859b */
L_006D82E1:
    eax = MEM32(ecx + 0x1C); /* 0x006D82E1: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp MEM32(eax), 0 */ /* 0x006D82E4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D82F4; /* 0x006D82E7: jne 0x6d82f4 */
L_006D82E9:
    ebx = MEM32(eax + 0x8); /* 0x006D82E9: mov ebx, dword ptr [eax + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x006D82EC: imul ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x4); /* 0x006D82EF: add ebx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D82FA; /* 0x006D82F2: jmp 0x6d82fa */
L_006D82F4:
    eax = MEM32(eax + 0x4); /* 0x006D82F4: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(eax + edx * 4); /* 0x006D82F7: mov ebx, dword ptr [eax + edx*4] */
L_006D82FA:
    eax = MEM32(ecx + 0x104); /* 0x006D82FA: mov eax, dword ptr [ecx + 0x104] */
    edx = ebp + (-0x14); /* 0x006D8300: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x006D8303: push edx */
    PUSH32(esp, MEM32(ebx)); /* 0x006D8304: push dword ptr [ebx] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x006D8306: mov dword ptr [ebp - 0x1c], ebx */
    ecx = MEM32(eax); /* 0x006D8309: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D830B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x006D830C: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x454); /* 0x006D830F: mov eax, dword ptr [ebx + 0x454] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D8315: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ecx; /* 0x006D8317: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x006D831A: mov dword ptr [ebp - 0x24], eax */
    edx = MEM32(eax + 0xC); /* 0x006D831D: mov edx, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x48)) = edx; /* 0x006D8320: mov dword ptr [ebp - 0x48], edx */
    /* test edx, edx */ /* 0x006D8323: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8404; /* 0x006D8325: je 0x6d8404 */
L_006D832B:
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006D832B: movdqu xmm0, xmmword ptr [ebp - 0x14] */
L_006D8330:
    /* cmp MEM32(eax), 0 */ /* 0x006D8330: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8340; /* 0x006D8333: jne 0x6d8340 */
L_006D8335:
    esi = MEM32(eax + 0x8); /* 0x006D8335: mov esi, dword ptr [eax + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x006D8338: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x4); /* 0x006D833B: add esi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006D8346; /* 0x006D833E: jmp 0x6d8346 */
L_006D8340:
    eax = MEM32(eax + 0x4); /* 0x006D8340: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax + ecx * 4); /* 0x006D8343: mov esi, dword ptr [eax + ecx*4] */
L_006D8346:
    edi = MEM32(esi + 0x138); /* 0x006D8346: mov edi, dword ptr [esi + 0x138] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D834C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC), edx */ /* 0x006D834E: cmp dword ptr [edi + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D83F4; /* 0x006D8351: jbe 0x6d83f4 */
L_006D8357:
    /* cmp MEM32(edi), 0 */ /* 0x006D8357: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8367; /* 0x006D835A: jne 0x6d8367 */
L_006D835C:
    eax = MEM32(edi + 0x8); /* 0x006D835C: mov eax, dword ptr [edi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x006D835F: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x006D8362: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    goto L_006D836D; /* 0x006D8365: jmp 0x6d836d */
L_006D8367:
    eax = MEM32(edi + 0x4); /* 0x006D8367: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + edx * 4); /* 0x006D836A: mov eax, dword ptr [eax + edx*4] */
L_006D836D:
    ecx = MEM32(eax + 0x8); /* 0x006D836D: mov ecx, dword ptr [eax + 8] */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006D8370: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x138); /* 0x006D8373: mov edi, dword ptr [esi + 0x138] */
    SET_HI8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D8379: sete bh */
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x006D837C: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D837F: sete bl */
    /* cmp MEM8(eax + 0x10), 0 */ /* 0x006D8382: cmp byte ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D8386: jne 0x6d83e7 */
L_006D8388:
    ecx = MEM32(ebp + (-0x18)); /* 0x006D8388: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x006D838B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D83C8; /* 0x006D838D: je 0x6d83c8 */
L_006D838F:
    /* cmp MEM32(ecx + 0x4), 1 */ /* 0x006D838F: cmp dword ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D839B; /* 0x006D8393: je 0x6d839b */
L_006D8395:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D8395: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D83C8; /* 0x006D8399: je 0x6d83c8 */
L_006D839B:
    ecx = MEM32(eax + 0x4); /* 0x006D839B: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, 1 */ /* 0x006D839E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83A1: jne 0x6d83e7 */
L_006D83A3:
    edi = MEM32(ebp + (-0x18)); /* 0x006D83A3: mov edi, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x8)); /* 0x006D83A6: mov ecx, dword ptr [ebp - 8] */
    /* cmp MEM32(edi + 0x8), ecx */ /* 0x006D83A9: cmp dword ptr [edi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x4); /* 0x006D83AC: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(esi + 0x138); /* 0x006D83AF: mov edi, dword ptr [esi + 0x138] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D83BB; /* 0x006D83B5: je 0x6d83bb */
L_006D83B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D83B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D83C8; /* 0x006D83B9: jne 0x6d83c8 */
L_006D83BB:
    /* cmp ecx, 1 */ /* 0x006D83BB: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83BE: jne 0x6d83e7 */
L_006D83C0:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D83C0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83C2: je 0x6d83e7 */
L_006D83C4:
    /* test HI8(ebx), HI8(ebx) */ /* 0x006D83C4: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83C6: je 0x6d83e7 */
L_006D83C8:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D83C8: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x1C)); /* 0x006D83CC: mov ecx, dword ptr [ebp - 0x1c] */
    xmm_st(ebp + (-0x58), _xmm[0]); /* 0x006D83CF: movdqu xmmword ptr [ebp - 0x58], xmm0 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x006D83D4: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x006D83D7: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x006D83DA: mov dword ptr [ebp - 0x18], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83DD: jne 0x6d83e7 */
L_006D83DF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D83DF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D83E7; /* 0x006D83E1: je 0x6d83e7 */
L_006D83E3:
    /* test HI8(ebx), HI8(ebx) */ /* 0x006D83E3: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D8420; /* 0x006D83E5: jne 0x6d8420 */
L_006D83E7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D83E7: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(edi + 0xC) */ /* 0x006D83E8: cmp edx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D8357; /* 0x006D83EB: jb 0x6d8357 */
L_006D83F1:
    ecx = MEM32(ebp + (-0x30)); /* 0x006D83F1: mov ecx, dword ptr [ebp - 0x30] */
L_006D83F4:
    eax = MEM32(ebp + (-0x24)); /* 0x006D83F4: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D83F7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = ecx; /* 0x006D83F8: mov dword ptr [ebp - 0x30], ecx */
    /* cmp ecx, MEM32(ebp + (-0x48)) */ /* 0x006D83FB: cmp ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D8330; /* 0x006D83FE: jb 0x6d8330 */
L_006D8404:
    ecx = MEM32(ebp + (-0x28)); /* 0x006D8404: mov ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x2C)); /* 0x006D8407: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D840A: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edx; /* 0x006D840B: mov dword ptr [ebp - 0x2c], edx */
    eax = MEM32(ecx + 0x1C); /* 0x006D840E: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp edx, MEM32(eax + 0xC) */ /* 0x006D8411: cmp edx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D82E1; /* 0x006D8414: jb 0x6d82e1 */
L_006D841A:
    eax = MEM32(ebp + (-0x18)); /* 0x006D841A: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x20)); /* 0x006D841D: mov ecx, dword ptr [ebp - 0x20] */
L_006D8420:
    /* test eax, eax */ /* 0x006D8420: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D859B; /* 0x006D8422: je 0x6d859b */
L_006D8428:
    esi = MEM32(ecx + 0x450); /* 0x006D8428: mov esi, dword ptr [ecx + 0x450] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D842E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 0; /* 0x006D8430: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x006D8437: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x006D843E: mov dword ptr [ebp - 0x38], 0 */
    ebx = MEM32(esi + 0xC); /* 0x006D8445: mov ebx, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x3C)) = 0; /* 0x006D8448: mov dword ptr [ebp - 0x3c], 0 */
    _xmm[0] = xmm_ld(ebp + (-0x44)); /* 0x006D844F: movdqu xmm0, xmmword ptr [ebp - 0x44] */
    /* test ebx, ebx */ /* 0x006D8454: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D84C7; /* 0x006D8456: je 0x6d84c7 */
L_006D8458:
    eax = MEM32(eax + 0x8); /* 0x006D8458: mov eax, dword ptr [eax + 8] */
    edi = MEM32(ebp + (-0x54)); /* 0x006D845B: mov edi, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006D845E: mov dword ptr [ebp - 0x1c], eax */
L_006D8461:
    /* cmp MEM32(esi), 0 */ /* 0x006D8461: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8471; /* 0x006D8464: jne 0x6d8471 */
L_006D8466:
    ecx = MEM32(esi + 0x8); /* 0x006D8466: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x006D8469: imul ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x4); /* 0x006D846C: add ecx, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    goto L_006D847A; /* 0x006D846F: jmp 0x6d847a */
L_006D8471:
    eax = MEM32(esi + 0x4); /* 0x006D8471: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + edx * 4); /* 0x006D8474: mov ecx, dword ptr [eax + edx*4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x006D8477: mov eax, dword ptr [ebp - 0x1c] */
L_006D847A:
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x006D847A: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D84B6; /* 0x006D847D: jne 0x6d84b6 */
L_006D847F:
    ebx = MEM32(ebp + (-0x58)); /* 0x006D847F: mov ebx, dword ptr [ebp - 0x58] */
    /* cmp MEM32(ecx), ebx */ /* 0x006D8482: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0xC); /* 0x006D8484: mov ebx, dword ptr [esi + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D84A7; /* 0x006D8487: jne 0x6d84a7 */
L_006D8489:
    eax = MEM32(ecx + 0x4); /* 0x006D8489: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, edi */ /* 0x006D848C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D84A2; /* 0x006D848E: jne 0x6d84a2 */
L_006D8490:
    ebx = MEM32(ebp + (-0x50)); /* 0x006D8490: mov ebx, dword ptr [ebp - 0x50] */
    /* cmp MEM32(ecx + 0x8), ebx */ /* 0x006D8493: cmp dword ptr [ecx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0xC); /* 0x006D8496: mov ebx, dword ptr [esi + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D84BD; /* 0x006D8499: je 0x6d84bd */
L_006D849B:
    /* cmp eax, edi */ /* 0x006D849B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D84A2; /* 0x006D849D: jne 0x6d84a2 */
L_006D849F:
    eax = MEM32(ecx + 0x8); /* 0x006D849F: mov eax, dword ptr [ecx + 8] */
L_006D84A2:
    eax = MEM32(ebp + (-0x1C)); /* 0x006D84A2: mov eax, dword ptr [ebp - 0x1c] */
    goto L_006D84AD; /* 0x006D84A5: jmp 0x6d84ad */
L_006D84A7:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x006D84A7: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D84B6; /* 0x006D84AB: jne 0x6d84b6 */
L_006D84AD:
    _xmm[0] = xmm_ld(ecx); /* 0x006D84AD: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(ebp + (-0x44), _xmm[0]); /* 0x006D84B1: movdqu xmmword ptr [ebp - 0x44], xmm0 */
L_006D84B6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D84B6: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x006D84B7: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D8461; /* 0x006D84B9: jb 0x6d8461 */
L_006D84BB:
    goto L_006D84C1; /* 0x006D84BB: jmp 0x6d84c1 */
L_006D84BD:
    _xmm[0] = xmm_ld(ecx); /* 0x006D84BD: movdqu xmm0, xmmword ptr [ecx] */
L_006D84C1:
    ecx = MEM32(ebp + (-0x20)); /* 0x006D84C1: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x18)); /* 0x006D84C4: mov eax, dword ptr [ebp - 0x18] */
L_006D84C7:
    ebx = MEM32(ebp + (-0x28)); /* 0x006D84C7: mov ebx, dword ptr [ebp - 0x28] */
    /* cmp MEM8(ebx + 0x3C), 0 */ /* 0x006D84CA: cmp byte ptr [ebx + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x3C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x84) = ecx; /* 0x006D84CE: mov dword ptr [ebx + 0x84], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x006D84D4: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebx + 0x88) = ecx; /* 0x006D84D7: mov dword ptr [ebx + 0x88], ecx */
    MEM32(ebx + 0x8C) = eax; /* 0x006D84DD: mov dword ptr [ebx + 0x8c], eax */
    MEM8(ebx + 0x44) = (uint8_t)(0); /* 0x006D84E3: mov byte ptr [ebx + 0x44], 0 */
    xmm_st(ebx + 0x90, _xmm[0]); /* 0x006D84E7: movdqu xmmword ptr [ebx + 0x90], xmm0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8506; /* 0x006D84EF: je 0x6d8506 */
L_006D84F1:
    eax = MEM32(eax + 0x14); /* 0x006D84F1: mov eax, dword ptr [eax + 0x14] */
    /* cmp MEM32(eax), 0 */ /* 0x006D84F4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D84F7: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D84FE; /* 0x006D84FA: je 0x6d84fe */
L_006D84FC:
    eax = MEM32(eax); /* 0x006D84FC: mov eax, dword ptr [eax] */
L_006D84FE:
    eax = MEM32(eax); /* 0x006D84FE: mov eax, dword ptr [eax] */
    MEM32(ebx + 0xA0) = eax; /* 0x006D8500: mov dword ptr [ebx + 0xa0], eax */
L_006D8506:
    edx = MEM32(ebx + 0xA4); /* 0x006D8506: mov edx, dword ptr [ebx + 0xa4] */
    /* test edx, edx */ /* 0x006D850C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8540; /* 0x006D850E: je 0x6d8540 */
L_006D8510:
    eax = MEM32(ebx + 0x104); /* 0x006D8510: mov eax, dword ptr [ebx + 0x104] */
    esi = ebp + (-0x24); /* 0x006D8516: lea esi, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x006D8519: push esi */
    PUSH32(esp, edx); /* 0x006D851A: push edx */
    PUSH32(esp, 1); /* 0x006D851B: push 1 */
    PUSH32(esp, 0x15u); /* 0x006D851D: push 0x15 */
    PUSH32(esp, 1); /* 0x006D851F: push 1 */
    MEM32(ebp + (-0x24)) = 0; /* 0x006D8521: mov dword ptr [ebp - 0x24], 0 */
    ecx = MEM32(eax); /* 0x006D8528: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D852A: push 0 */
    PUSH32(esp, eax); /* 0x006D852C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x006D852D: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0xA8) = 0; /* 0x006D8530: mov dword ptr [ebx + 0xa8], 0 */
    /* test eax, eax */ /* 0x006D853A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D8554; /* 0x006D853C: jns 0x6d8554 */
L_006D853E:
    goto L_006D854A; /* 0x006D853E: jmp 0x6d854a */
L_006D8540:
    MEM32(ebx + 0xA8) = 0; /* 0x006D8540: mov dword ptr [ebx + 0xa8], 0 */
L_006D854A:
    MEM32(ebx + 0xA4) = 0; /* 0x006D854A: mov dword ptr [ebx + 0xa4], 0 */
L_006D8554:
    eax = MEM32(ebp + (-0x18)); /* 0x006D8554: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x24); /* 0x006D8557: mov eax, dword ptr [eax + 0x24] */
    /* cmp MEM32(eax), 0 */ /* 0x006D855A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D855D: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8564; /* 0x006D8560: je 0x6d8564 */
L_006D8562:
    eax = MEM32(eax); /* 0x006D8562: mov eax, dword ptr [eax] */
L_006D8564:
    eax = MEM32(eax); /* 0x006D8564: mov eax, dword ptr [eax] */
    ecx = 1; /* 0x006D8566: mov ecx, 1 */
    /* cmp MEM8(ebx + 0xBD), 0 */ /* 0x006D856B: cmp byte ptr [ebx + 0xbd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xBD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0xAC) = eax; /* 0x006D8572: mov dword ptr [ebx + 0xac], eax */
    eax = 0x80000000u; /* 0x006D8578: mov eax, 0x80000000 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006D857D: cmovne eax, ecx */
    MEM32(ebx + 0xB0) = eax; /* 0x006D8580: mov dword ptr [ebx + 0xb0], eax */
    SET_LO8(eax, LO8(ecx)); /* 0x006D8586: mov al, cl */
    edi = POP32_VAL(esp); /* 0x006D8588: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8589: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D858A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D858B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D858E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D8590: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D8595: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8597: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D8598: ret 8 */
L_006D859B:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D859B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006D859E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x006D85A0: pop edi */
    esi = POP32_VAL(esp); /* 0x006D85A1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D85A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D85A4: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D85A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D85AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D85AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D85AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D85B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D85B0u);

L_006D85B0:
    PUSH32(esp, ecx); /* 0x006D85B0: push ecx */
    PUSH32(esp, ebx); /* 0x006D85B1: push ebx */
    PUSH32(esp, esi); /* 0x006D85B2: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D85B3: sub esp, 8 */
    _flag_k = FK_CMP;
    esi = ecx; /* 0x006D85B6: mov esi, ecx */
    RECOMP_CALL(sub_006D8290); /* 0x006D85B8: call 0x6d8290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D85BD: push 0 */
    PUSH32(esp, ecx); /* 0x006D85BF: push ecx */
    ecx = esi; /* 0x006D85C0: mov ecx, esi */
    SET_LO8(ebx, LO8(eax)); /* 0x006D85C2: mov bl, al */
    RECOMP_CALL(sub_006D8050); /* 0x006D85C4: call 0x6d8050 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x409), 0 */ /* 0x006D85C9: cmp byte ptr [esi + 0x409], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x409)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi + 0x78) = (uint8_t)(0); /* 0x006D85D0: mov byte ptr [esi + 0x78], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D85DE; /* 0x006D85D4: je 0x6d85de */
L_006D85D6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D85D6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D85DE; /* 0x006D85D8: je 0x6d85de */
L_006D85DA:
    MEM8(esi + 0x44) = (uint8_t)(0); /* 0x006D85DA: mov byte ptr [esi + 0x44], 0 */
L_006D85DE:
    /* test LO8(eax), LO8(eax) */ /* 0x006D85DE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D85E9; /* 0x006D85E0: jne 0x6d85e9 */
L_006D85E2:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D85E2: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D85F1; /* 0x006D85E4: je 0x6d85f1 */
L_006D85E6:
    MEM8(esi + 0x44) = (uint8_t)(LO8(eax)); /* 0x006D85E6: mov byte ptr [esi + 0x44], al */
L_006D85E9:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006D85E9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D85FA; /* 0x006D85EB: jne 0x6d85fa */
L_006D85ED:
    /* test LO8(eax), LO8(eax) */ /* 0x006D85ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D85FA; /* 0x006D85EF: jne 0x6d85fa */
L_006D85F1:
    eax = 0x82000003u; /* 0x006D85F1: mov eax, 0x82000003 */
    esi = POP32_VAL(esp); /* 0x006D85F6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D85F7: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006D85F8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D85F9: ret  */
L_006D85FA:
    esi = POP32_VAL(esp); /* 0x006D85FA: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D85FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D85FD: pop ebx */
    ecx = POP32_VAL(esp); /* 0x006D85FE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D85FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D8600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D8600u);

L_006D8600:
    PUSH32(esp, ebp); /* 0x006D8600: push ebp */
    ebp = esp; /* 0x006D8601: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D8603: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D8606: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D8609: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x006D860A: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006D860D: push esi */
    esi = ecx; /* 0x006D860E: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D8610: push edi */
    edi = MEM32(ebp + 0x10); /* 0x006D8611: mov edi, dword ptr [ebp + 0x10] */
    /* cmp ebx, 0x112u */ /* 0x006D8614: cmp ebx, 0x112 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x112u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D8A71; /* 0x006D861A: ja 0x6d8a71 */
L_006D8620:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8A17; /* 0x006D8620: je 0x6d8a17 */
L_006D8626:
    /* cmp ebx, 0x24u */ /* 0x006D8626: cmp ebx, 0x24 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D8778; /* 0x006D8629: ja 0x6d8778 */
L_006D862F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8765; /* 0x006D862F: je 0x6d8765 */
L_006D8635:
    /* cmp ebx, 5 */ /* 0x006D8635: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D86E5; /* 0x006D8638: je 0x6d86e5 */
L_006D863E:
    /* cmp ebx, 0x10u */ /* 0x006D863E: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8686; /* 0x006D8641: je 0x6d8686 */
L_006D8643:
    /* cmp ebx, 0x20u */ /* 0x006D8643: cmp ebx, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8646: jne 0x6d871e */
L_006D864C:
    /* cmp MEM8(esi + 0xB5), 0 */ /* 0x006D864C: cmp byte ptr [esi + 0xb5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8653: je 0x6d871e */
L_006D8659:
    PUSH32(esp, 0); /* 0x006D8659: push 0 */
    RECOMP_ICALL(MEM32(0x7CC818)); /* 0x006D865B: call dword ptr [0x7cc818] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x408), 0 */ /* 0x006D8661: cmp byte ptr [esi + 0x408], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x408)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8678; /* 0x006D8668: je 0x6d8678 */
L_006D866A:
    eax = MEM32(esi + 0x108); /* 0x006D866A: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D8670: push 1 */
    PUSH32(esp, eax); /* 0x006D8672: push eax */
    ecx = MEM32(eax); /* 0x006D8673: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D8675: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_006D8678:
    eax = 1; /* 0x006D8678: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006D867D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D867E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D867F: pop ebx */
    esp = ebp; /* 0x006D8680: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8682: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8683: ret 0x10 */
L_006D8686:
    RECOMP_CALL(sub_006DA620); /* 0x006D8686: call 0x6da620 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x104); /* 0x006D868B: mov ecx, dword ptr [esi + 0x104] */
    /* test ecx, ecx */ /* 0x006D8691: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D86A5; /* 0x006D8693: je 0x6d86a5 */
L_006D8695:
    eax = MEM32(ecx); /* 0x006D8695: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D8697: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D8698: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x104) = 0; /* 0x006D869B: mov dword ptr [esi + 0x104], 0 */
L_006D86A5:
    eax = MEM32(esi); /* 0x006D86A5: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D86A7: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x006D86A9: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x006D86AC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006D86AF: push edi */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x006D86B0: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D86B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D86C1; /* 0x006D86B8: je 0x6d86c1 */
L_006D86BA:
    PUSH32(esp, eax); /* 0x006D86BA: push eax */
    RECOMP_ICALL(MEM32(0x7CC85C)); /* 0x006D86BB: call dword ptr [0x7cc85c] */
    RECOMP_FLAGS_IN();
L_006D86C1:
    PUSH32(esp, edi); /* 0x006D86C1: push edi */
    RECOMP_ICALL(MEM32(0x7CC888)); /* 0x006D86C2: call dword ptr [0x7cc888] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D86C8: push 0 */
    RECOMP_ICALL(MEM32(0x7CC890)); /* 0x006D86CA: call dword ptr [0x7cc890] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xF8) = 0; /* 0x006D86D0: mov dword ptr [esi + 0xf8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D86DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D86DC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D86DD: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D86DE: pop ebx */
    esp = ebp; /* 0x006D86DF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D86E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D86E2: ret 0x10 */
L_006D86E5:
    /* cmp edi, 1 */ /* 0x006D86E5: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D86F9; /* 0x006D86E8: jne 0x6d86f9 */
L_006D86EA:
    eax = MEM32(esi); /* 0x006D86EA: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x006D86EC: push edi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D86ED: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0xB7) = (uint16_t)(LO16(edi)); /* 0x006D86F0: mov word ptr [esi + 0xb7], di */
    goto L_006D871E; /* 0x006D86F7: jmp 0x6d871e */
L_006D86F9:
    /* cmp edi, 2 */ /* 0x006D86F9: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8736; /* 0x006D86FC: jne 0x6d8736 */
L_006D86FE:
    /* cmp MEM8(esi + 0xB7), 0 */ /* 0x006D86FE: cmp byte ptr [esi + 0xb7], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D870E; /* 0x006D8705: je 0x6d870e */
L_006D8707:
    eax = MEM32(esi); /* 0x006D8707: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D8709: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D870B: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
L_006D870E:
    MEM16(esi + 0xB7) = (uint16_t)(0x100u); /* 0x006D870E: mov word ptr [esi + 0xb7], 0x100 */
L_006D8717:
    ecx = esi; /* 0x006D8717: mov ecx, esi */
L_006D8719:
    RECOMP_CALL(sub_006D8B90); /* 0x006D8719: call 0x6d8b90 */
    RECOMP_FLAGS_IN();
L_006D871E:
    eax = MEM32(ebp + 0x14); /* 0x006D871E: mov eax, dword ptr [ebp + 0x14] */
L_006D8721:
    PUSH32(esp, eax); /* 0x006D8721: push eax */
    PUSH32(esp, edi); /* 0x006D8722: push edi */
    PUSH32(esp, ebx); /* 0x006D8723: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D8724: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC700)); /* 0x006D8727: call dword ptr [0x7cc700] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D872D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D872E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D872F: pop ebx */
    esp = ebp; /* 0x006D8730: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8733: ret 0x10 */
L_006D8736:
    /* test edi, edi */ /* 0x006D8736: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8738: jne 0x6d871e */
L_006D873A:
    /* cmp MEM8(esi + 0xB8), 0 */ /* 0x006D873A: cmp byte ptr [esi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D874C; /* 0x006D8741: je 0x6d874c */
L_006D8743:
    MEM8(esi + 0xB8) = (uint8_t)(0); /* 0x006D8743: mov byte ptr [esi + 0xb8], 0 */
    RECOMP_BACKEDGE();
    goto L_006D8719; /* 0x006D874A: jmp 0x6d8719 */
L_006D874C:
    /* cmp MEM8(esi + 0xB7), 0 */ /* 0x006D874C: cmp byte ptr [esi + 0xb7], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8753: je 0x6d871e */
L_006D8755:
    eax = MEM32(esi); /* 0x006D8755: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D8757: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8759: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xB7) = (uint8_t)(0); /* 0x006D875C: mov byte ptr [esi + 0xb7], 0 */
    RECOMP_BACKEDGE();
    goto L_006D8717; /* 0x006D8763: jmp 0x6d8717 */
L_006D8765:
    eax = MEM32(ebp + 0x14); /* 0x006D8765: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x18) = 0x64u; /* 0x006D8768: mov dword ptr [eax + 0x18], 0x64 */
    MEM32(eax + 0x1C) = 0x64u; /* 0x006D876F: mov dword ptr [eax + 0x1c], 0x64 */
    RECOMP_BACKEDGE();
    goto L_006D8721; /* 0x006D8776: jmp 0x6d8721 */
L_006D8778:
    /* cmp ebx, 0x84u */ /* 0x006D8778: cmp ebx, 0x84 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8A56; /* 0x006D877E: je 0x6d8a56 */
L_006D8784:
    /* cmp ebx, 0x111u */ /* 0x006D8784: cmp ebx, 0x111 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x111u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D878A: jne 0x6d871e */
L_006D878C:
    eax = (uint32_t)LO16(edi); /* 0x006D878C: movzx eax, di */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF63BEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFF63BEu; /* 0x006D878F: add eax, 0xffff63be */
    _flag_k = FK_ADD;
    /* cmp eax, 4 */ /* 0x006D8794: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8797: ja 0x6d871e */
L_006D8799:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D8B2C)); goto _ljump; }
L_006D87A0:
    /* cmp MEM8(esi + 0xBE), 0 */ /* 0x006D87A0: cmp byte ptr [esi + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D87A7: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D87AA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x006D87AC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0xBE) = (uint8_t)(LO8(eax)); /* 0x006D87AE: mov byte ptr [esi + 0xbe], al */
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D87B4: sete cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D87B7: inc ecx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_006D72D0); /* 0x006D87B8: call 0x6d72d0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D87BD: jmp 0x6d871e */
L_006D87C2:
    /* cmp MEM8(esi + 0xBE), 0 */ /* 0x006D87C2: cmp byte ptr [esi + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D888D; /* 0x006D87C9: jne 0x6d888d */
L_006D87CF:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D87CF: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D880C; /* 0x006D87D6: jne 0x6d880c */
L_006D87D8:
    eax = esp + 0x10; /* 0x006D87D8: lea eax, [esp + 0x10] */
    MEM32(0x9280A0) = 1; /* 0x006D87DC: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D87E6: push eax */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006D87E7: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D87ED: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D87F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D885C; /* 0x006D87F4: je 0x6d885c */
L_006D87F6:
    ecx = MEM32(esp + 0x10); /* 0x006D87F6: mov ecx, dword ptr [esp + 0x10] */
    MEM32(0x928098) = ecx; /* 0x006D87FA: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0x14); /* 0x006D8800: mov ecx, dword ptr [esp + 0x14] */
    MEM32(0x92809C) = ecx; /* 0x006D8804: mov dword ptr [0x92809c], ecx */
    goto L_006D8811; /* 0x006D880A: jmp 0x6d8811 */
L_006D880C:
    eax = MEM32(0x928070); /* 0x006D880C: mov eax, dword ptr [0x928070] */
L_006D8811:
    /* test eax, eax */ /* 0x006D8811: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D885C; /* 0x006D8813: je 0x6d885c */
L_006D8815:
    eax = MEM32(0x928080); /* 0x006D8815: mov eax, dword ptr [0x928080] */
    _flag_a = (uint32_t)((eax | MEM32(0x928084))); _flag_b = (uint32_t)((eax | MEM32(0x928084)));
    eax = eax | MEM32(0x928084); /* 0x006D881A: or eax, dword ptr [0x928084] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D882D; /* 0x006D8820: jne 0x6d882d */
L_006D8822:
    eax = esp + 0x10; /* 0x006D8822: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006D8826: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006D8827: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
L_006D882D:
    PUSH32(esp, 0); /* 0x006D882D: push 0 */
    PUSH32(esp, 0xAu); /* 0x006D882F: push 0xa */
    PUSH32(esp, MEM32(0x92809C)); /* 0x006D8831: push dword ptr [0x92809c] */
    PUSH32(esp, MEM32(0x928098)); /* 0x006D8837: push dword ptr [0x928098] */
    RECOMP_CALL(sub_00780050); /* 0x006D883D: call 0x780050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x928080)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928080) = MEM32(0x928080) + eax; /* 0x006D8842: add dword ptr [0x928080], eax */
    _flag_k = FK_ADD;
    MEM16(esi + 0xBE) = (uint16_t)(0x100u); /* 0x006D8848: mov word ptr [esi + 0xbe], 0x100 */
    { uint32_t _aa = MEM32(0x928084), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D8851: adc dword ptr [0x928084], edx */
      MEM32(0x928084) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8857: jmp 0x6d871e */
L_006D885C:
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006D885C: movsd xmm0, qword ptr [0x928060] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808B20))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006D8864: ucomisd xmm0, qword ptr [0x808b20] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006D886C: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006D886D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006D8880; /* 0x006D8870: jp 0x6d8880 */
L_006D8872:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D8872: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006D8878: movsd xmm0, qword ptr [0x928060] */
L_006D8880:
    { double _s = sse_f64(MEM64(0x808D88)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D8880: addsd xmm0, qword ptr [0x808d88] */
    goto L_006D898C; /* 0x006D8888: jmp 0x6d898c */
L_006D888D:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D888D: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D88CE; /* 0x006D8894: jne 0x6d88ce */
L_006D8896:
    eax = esp + 0x10; /* 0x006D8896: lea eax, [esp + 0x10] */
    MEM32(0x9280A0) = 1; /* 0x006D889A: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D88A4: push eax */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006D88A5: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D88AB: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D88B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8939; /* 0x006D88B2: je 0x6d8939 */
L_006D88B8:
    ecx = MEM32(esp + 0x10); /* 0x006D88B8: mov ecx, dword ptr [esp + 0x10] */
    MEM32(0x928098) = ecx; /* 0x006D88BC: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0x14); /* 0x006D88C2: mov ecx, dword ptr [esp + 0x14] */
    MEM32(0x92809C) = ecx; /* 0x006D88C6: mov dword ptr [0x92809c], ecx */
    goto L_006D88D3; /* 0x006D88CC: jmp 0x6d88d3 */
L_006D88CE:
    eax = MEM32(0x928070); /* 0x006D88CE: mov eax, dword ptr [0x928070] */
L_006D88D3:
    /* test eax, eax */ /* 0x006D88D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8939; /* 0x006D88D5: je 0x6d8939 */
L_006D88D7:
    ecx = MEM32(0x928080); /* 0x006D88D7: mov ecx, dword ptr [0x928080] */
    eax = ecx; /* 0x006D88DD: mov eax, ecx */
    edx = MEM32(0x928084); /* 0x006D88DF: mov edx, dword ptr [0x928084] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x006D88E5: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D88FC; /* 0x006D88E7: jne 0x6d88fc */
L_006D88E9:
    eax = esp + 0x10; /* 0x006D88E9: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006D88ED: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006D88EE: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x14); /* 0x006D88F4: mov edx, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x10); /* 0x006D88F8: mov ecx, dword ptr [esp + 0x10] */
L_006D88FC:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D88FC: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8994; /* 0x006D8903: jne 0x6d8994 */
L_006D8909:
    MEM32(0x928080) = ecx; /* 0x006D8909: mov dword ptr [0x928080], ecx */
    MEM32(0x928084) = edx; /* 0x006D890F: mov dword ptr [0x928084], edx */
    MEM32(0x928088) = ecx; /* 0x006D8915: mov dword ptr [0x928088], ecx */
    MEM32(0x92808C) = edx; /* 0x006D891B: mov dword ptr [0x92808c], edx */
    MEM32(0x866088) = 1; /* 0x006D8921: mov dword ptr [0x866088], 1 */
    MEM16(esi + 0xBE) = (uint16_t)(0x100u); /* 0x006D892B: mov word ptr [esi + 0xbe], 0x100 */
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8934: jmp 0x6d871e */
L_006D8939:
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006D8939: movsd xmm0, qword ptr [0x928060] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808B20))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006D8941: ucomisd xmm0, qword ptr [0x808b20] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006D8949: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006D894A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006D8971; /* 0x006D894D: jp 0x6d8971 */
L_006D894F:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D894F: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D8955: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006D8959: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D895D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D895D: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D8960: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006D8969: mulsd xmm0, qword ptr [0x808c60] */
L_006D8971:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D8971: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8994; /* 0x006D8978: jne 0x6d8994 */
L_006D897A:
    MEM64(0x928078) = _xmm[0].u64[0]; /* 0x006D897A: movsd qword ptr [0x928078], xmm0 */
    MEM32(0x866088) = 1; /* 0x006D8982: mov dword ptr [0x866088], 1 */
L_006D898C:
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D898C: movsd qword ptr [0x928060], xmm0 */
L_006D8994:
    MEM16(esi + 0xBE) = (uint16_t)(0x100u); /* 0x006D8994: mov word ptr [esi + 0xbe], 0x100 */
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D899D: jmp 0x6d871e */
L_006D89A2:
    eax = MEM32(esi); /* 0x006D89A2: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D89A4: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D89A6: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D89A9: mov ecx, esi */
    RECOMP_CALL(sub_006D9A80); /* 0x006D89AB: call 0x6d9a80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D89B0: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D89B2: mov ecx, esi */
    PUSH32(esp, 0); /* 0x006D89B4: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D89B6: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D89B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D89BB: pop edi */
    esi = POP32_VAL(esp); /* 0x006D89BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D89BD: pop ebx */
    esp = ebp; /* 0x006D89BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D89C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D89C1: ret 0x10 */
L_006D89C4:
    eax = MEM32(esi); /* 0x006D89C4: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D89C6: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D89C8: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D89CB: mov ecx, esi */
    RECOMP_CALL(sub_006D97E0); /* 0x006D89CD: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D89D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D89E9; /* 0x006D89D4: jns 0x6d89e9 */
L_006D89D6:
    PUSH32(esp, 0x00801D2Cu); /* 0x006D89D6: push 0x801d2c */
    PUSH32(esp, 1); /* 0x006D89DB: push 1 */
    PUSH32(esp, 0x8200000Cu); /* 0x006D89DD: push 0x8200000c */
    ecx = esi; /* 0x006D89E2: mov ecx, esi */
    RECOMP_CALL(sub_006DA670); /* 0x006D89E4: call 0x6da670 */
    RECOMP_FLAGS_IN();
L_006D89E9:
    eax = MEM32(esi); /* 0x006D89E9: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D89EB: mov ecx, esi */
    PUSH32(esp, 0); /* 0x006D89ED: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D89EF: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D89F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D89F4: pop edi */
    esi = POP32_VAL(esp); /* 0x006D89F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D89F6: pop ebx */
    esp = ebp; /* 0x006D89F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D89F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D89FA: ret 0x10 */
L_006D89FD:
    PUSH32(esp, 0); /* 0x006D89FD: push 0 */
    PUSH32(esp, 0); /* 0x006D89FF: push 0 */
    PUSH32(esp, 0x10u); /* 0x006D8A01: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D8A03: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006D8A06: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D8A0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D8A0E: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8A0F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D8A10: pop ebx */
    esp = ebp; /* 0x006D8A11: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8A13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8A14: ret 0x10 */
L_006D8A17:
    /* cmp edi, 0xF030u */ /* 0x006D8A17: cmp edi, 0xf030 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xF030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D8A44; /* 0x006D8A1D: ja 0x6d8a44 */
L_006D8A1F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8A34; /* 0x006D8A1F: je 0x6d8a34 */
L_006D8A21:
    eax = edi; /* 0x006D8A21: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xF000u; /* 0x006D8A23: sub eax, 0xf000 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D8A56; /* 0x006D8A28: je 0x6d8a56 */
L_006D8A2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x006D8A2A: sub eax, 0x10 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D8A56; /* 0x006D8A2D: je 0x6d8a56 */
L_006D8A2F:
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8A2F: jmp 0x6d871e */
L_006D8A34:
    RECOMP_CALL(sub_006D97E0); /* 0x006D8A34: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D8A39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D8A3B: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8A3C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D8A3D: pop ebx */
    esp = ebp; /* 0x006D8A3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8A40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8A41: ret 0x10 */
L_006D8A44:
    eax = edi; /* 0x006D8A44: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xF100u; /* 0x006D8A46: sub eax, 0xf100 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D8A56; /* 0x006D8A4B: je 0x6d8a56 */
L_006D8A4D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x006D8A4D: sub eax, 0x70 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8A50: jne 0x6d871e */
L_006D8A56:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D8A56: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8A5D: jne 0x6d871e */
L_006D8A63:
    eax = 1; /* 0x006D8A63: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006D8A68: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8A69: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D8A6A: pop ebx */
    esp = ebp; /* 0x006D8A6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8A6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8A6E: ret 0x10 */
L_006D8A71:
    eax = ebx + (-0x200); /* 0x006D8A71: lea eax, [ebx - 0x200] */
    /* cmp eax, 0x32u */ /* 0x006D8A77: cmp eax, 0x32 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8A7A: ja 0x6d871e */
L_006D8A80:
    eax = (uint32_t)MEM8(eax + 0x6D8B58); /* 0x006D8A80: movzx eax, byte ptr [eax + 0x6d8b58] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6D8B40)); goto _ljump; }
L_006D8A8E:
    eax = MEM32(esi); /* 0x006D8A8E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D8A90: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8A92: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8A95: jmp 0x6d871e */
L_006D8A9A:
    eax = MEM32(esi); /* 0x006D8A9A: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D8A9C: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8A9E: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D8717; /* 0x006D8AA1: jmp 0x6d8717 */
L_006D8AA6:
    /* cmp MEM8(esi + 0xB5), 0 */ /* 0x006D8AA6: cmp byte ptr [esi + 0xb5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8AAD: je 0x6d871e */
L_006D8AB3:
    /* cmp MEM32(esi + 0x108), 0 */ /* 0x006D8AB3: cmp dword ptr [esi + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8ABA: je 0x6d871e */
L_006D8AC0:
    eax = esp + 0x10; /* 0x006D8AC0: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006D8AC4: push eax */
    RECOMP_ICALL(MEM32(0x7CC848)); /* 0x006D8AC5: call dword ptr [0x7cc848] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D8ACB: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8AE5; /* 0x006D8AD2: jne 0x6d8ae5 */
L_006D8AD4:
    eax = esp + 0x10; /* 0x006D8AD4: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006D8AD8: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D8AD9: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC824)); /* 0x006D8ADF: call dword ptr [0x7cc824] */
    RECOMP_FLAGS_IN();
L_006D8AE5:
    eax = MEM32(esi + 0x108); /* 0x006D8AE5: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D8AEB: push 0 */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006D8AED: push dword ptr [esp + 0x18] */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006D8AF1: push dword ptr [esp + 0x18] */
    ecx = MEM32(eax); /* 0x006D8AF5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D8AF7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x006D8AF8: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8AFB: jmp 0x6d871e */
L_006D8B00:
    eax = MEM32(esi); /* 0x006D8B00: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D8B02: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8B04: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_006D871E; /* 0x006D8B07: jmp 0x6d871e */
L_006D8B0C:
    /* test edi, edi */ /* 0x006D8B0C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8678; /* 0x006D8B0E: je 0x6d8678 */
L_006D8B14:
    /* cmp edi, 7 */ /* 0x006D8B14: cmp edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D871E; /* 0x006D8B17: jne 0x6d871e */
L_006D8B1D:
    eax = edi + (-0x6); /* 0x006D8B1D: lea eax, [edi - 6] */
    edi = POP32_VAL(esp); /* 0x006D8B20: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8B21: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D8B22: pop ebx */
    esp = ebp; /* 0x006D8B23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8B25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D8B26: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D871Eu: goto L_006D871E;
      case 0x006D87A0u: goto L_006D87A0;
      case 0x006D87C2u: goto L_006D87C2;
      case 0x006D89A2u: goto L_006D89A2;
      case 0x006D89C4u: goto L_006D89C4;
      case 0x006D89FDu: goto L_006D89FD;
      case 0x006D8A8Eu: goto L_006D8A8E;
      case 0x006D8A9Au: goto L_006D8A9A;
      case 0x006D8AA6u: goto L_006D8AA6;
      case 0x006D8B00u: goto L_006D8B00;
      case 0x006D8B0Cu: goto L_006D8B0C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D8B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D8B90u);

L_006D8B90:
    PUSH32(esp, ebp); /* 0x006D8B90: push ebp */
    ebp = esp; /* 0x006D8B91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006D8B93: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006D8B96: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006D8B99: push esi */
    esi = ecx; /* 0x006D8B9A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D8B9C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D8B9D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0xBA), 0 */ /* 0x006D8B9F: cmp byte ptr [esi + 0xba], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBA)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0] = xmm_ld(esi + 0x274); /* 0x006D8BA6: movdqu xmm0, xmmword ptr [esi + 0x274] */
    xmm_st(esp + 0x10, _xmm[0]); /* 0x006D8BAE: movdqu xmmword ptr [esp + 0x10], xmm0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8BBE; /* 0x006D8BB4: je 0x6d8bbe */
L_006D8BB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D8BB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D8BB8: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8BB9: pop esi */
    esp = ebp; /* 0x006D8BBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8BBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D8BBD: ret  */
L_006D8BBE:
    eax = esi + 0x264; /* 0x006D8BBE: lea eax, [esi + 0x264] */
    PUSH32(esp, eax); /* 0x006D8BC4: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D8BC5: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC828)); /* 0x006D8BCB: call dword ptr [0x7cc828] */
    RECOMP_FLAGS_IN();
    eax = esi + 0x274; /* 0x006D8BD1: lea eax, [esi + 0x274] */
    PUSH32(esp, eax); /* 0x006D8BD7: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D8BD8: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006D8BDE: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x27C); /* 0x006D8BE4: mov ecx, dword ptr [esi + 0x27c] */
    eax = MEM32(esp + 0x18); /* 0x006D8BEA: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x274));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x274); /* 0x006D8BEE: sub ecx, dword ptr [esi + 0x274] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x006D8BF4: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x006D8BF8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8C21; /* 0x006D8BFA: jne 0x6d8c21 */
L_006D8BFC:
    ecx = MEM32(esi + 0x280); /* 0x006D8BFC: mov ecx, dword ptr [esi + 0x280] */
    eax = MEM32(esp + 0x1C); /* 0x006D8C02: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x278));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x278); /* 0x006D8C06: sub ecx, dword ptr [esi + 0x278] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x14); /* 0x006D8C0C: sub eax, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x006D8C10: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8C21; /* 0x006D8C12: jne 0x6d8c21 */
L_006D8C14:
    /* cmp MEM8(esi + 0xB9), 0 */ /* 0x006D8C14: cmp byte ptr [esi + 0xb9], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB9)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8CB3; /* 0x006D8C1B: je 0x6d8cb3 */
L_006D8C21:
    eax = MEM32(esi); /* 0x006D8C21: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D8C23: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006D8C25: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8C27: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x27C); /* 0x006D8C2A: mov ecx, dword ptr [esi + 0x27c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x274));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x274); /* 0x006D8C30: sub ecx, dword ptr [esi + 0x274] */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x280); /* 0x006D8C36: mov eax, dword ptr [esi + 0x280] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x278));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x278); /* 0x006D8C3C: sub eax, dword ptr [esi + 0x278] */
    _flag_k = FK_CMP;
    MEM32(esi + 0xC0) = ecx; /* 0x006D8C42: mov dword ptr [esi + 0xc0], ecx */
    MEM32(esi + 0xC4) = eax; /* 0x006D8C48: mov dword ptr [esi + 0xc4], eax */
    MEM32(esi + 0x7C) = ecx; /* 0x006D8C4E: mov dword ptr [esi + 0x7c], ecx */
    MEM32(esi + 0x80) = eax; /* 0x006D8C51: mov dword ptr [esi + 0x80], eax */
    /* cmp MEM32(esi + 0x108), edi */ /* 0x006D8C57: cmp dword ptr [esi + 0x108], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8CAA; /* 0x006D8C5D: je 0x6d8caa */
L_006D8C5F:
    ecx = esi; /* 0x006D8C5F: mov ecx, esi */
    RECOMP_CALL(sub_006D93B0); /* 0x006D8C61: call 0x6d93b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D8C66: mov edi, eax */
    /* test edi, edi */ /* 0x006D8C68: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D8CAA; /* 0x006D8C6A: jns 0x6d8caa */
L_006D8C6C:
    /* cmp edi, 0x88760868u */ /* 0x006D8C6C: cmp edi, 0x88760868 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x88760868u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8C8D; /* 0x006D8C72: jne 0x6d8c8d */
L_006D8C74:
    eax = MEM32(esi); /* 0x006D8C74: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D8C76: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006D8C78: push edi */
    ecx = esi; /* 0x006D8C79: mov ecx, esi */
    MEM8(esi + 0xB6) = (uint8_t)(1); /* 0x006D8C7B: mov byte ptr [esi + 0xb6], 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8C82: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x006D8C85: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006D8C87: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8C88: pop esi */
    esp = ebp; /* 0x006D8C89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8C8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D8C8C: ret  */
L_006D8C8D:
    /* cmp edi, 0x8876017Cu */ /* 0x006D8C8D: cmp edi, 0x8876017c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8876017Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x8200000Cu; /* 0x006D8C93: mov eax, 0x8200000c */
    PUSH32(esp, 0x00801CF4u); /* 0x006D8C98: push 0x801cf4 */
    if (CMP_NE(_flag_a, _flag_b)) { edi = eax; } /* 0x006D8C9D: cmovne edi, eax */
    ecx = esi; /* 0x006D8CA0: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006D8CA2: push 1 */
    PUSH32(esp, edi); /* 0x006D8CA4: push edi */
    RECOMP_CALL(sub_006DA670); /* 0x006D8CA5: call 0x6da670 */
    RECOMP_FLAGS_IN();
L_006D8CAA:
    eax = MEM32(esi); /* 0x006D8CAA: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D8CAC: mov ecx, esi */
    PUSH32(esp, 0); /* 0x006D8CAE: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D8CB0: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
L_006D8CB3:
    eax = edi; /* 0x006D8CB3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006D8CB5: pop edi */
    esi = POP32_VAL(esp); /* 0x006D8CB6: pop esi */
    esp = ebp; /* 0x006D8CB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D8CB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D8CBA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D8CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D8CC0u);

L_006D8CC0:
    PUSH32(esp, ebp); /* 0x006D8CC0: push ebp */
    ebp = esp; /* 0x006D8CC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x434u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x434u; /* 0x006D8CC3: sub esp, 0x434 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D8CC9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D8CCE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D8CD0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006D8CD3: push ebx */
    ebx = ecx; /* 0x006D8CD4: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006D8CD6: push esi */
    PUSH32(esp, edi); /* 0x006D8CD7: push edi */
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8CD8: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8CE3; /* 0x006D8CDC: je 0x6d8ce3 */
L_006D8CDE:
    eax = MEM32(ebx + 0x48); /* 0x006D8CDE: mov eax, dword ptr [ebx + 0x48] */
    goto L_006D8CE9; /* 0x006D8CE1: jmp 0x6d8ce9 */
L_006D8CE3:
    eax = MEM32(ebx + 0x84); /* 0x006D8CE3: mov eax, dword ptr [ebx + 0x84] */
L_006D8CE9:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8CE9: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x430)) = eax; /* 0x006D8CED: mov dword ptr [ebp - 0x430], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8CFA; /* 0x006D8CF3: je 0x6d8cfa */
L_006D8CF5:
    edi = MEM32(ebx + 0x4C); /* 0x006D8CF5: mov edi, dword ptr [ebx + 0x4c] */
    goto L_006D8D00; /* 0x006D8CF8: jmp 0x6d8d00 */
L_006D8CFA:
    edi = MEM32(ebx + 0x88); /* 0x006D8CFA: mov edi, dword ptr [ebx + 0x88] */
L_006D8D00:
    SET_LO8(eax, MEM8(ebx + 0x44)); /* 0x006D8D00: mov al, byte ptr [ebx + 0x44] */
    MEM8(ebx + 0xB4) = (uint8_t)(LO8(eax)); /* 0x006D8D03: mov byte ptr [ebx + 0xb4], al */
    eax = MEM32(ebx); /* 0x006D8D09: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x428)) = edi; /* 0x006D8D0B: mov dword ptr [ebp - 0x428], edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D8D11: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D8D14: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x006D8D16: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x006D8D18: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test MEM32(edi + 0x28), 0x1000u */ /* 0x006D8D1A: test dword ptr [edi + 0x28], 0x1000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8D36; /* 0x006D8D21: je 0x6d8d36 */
L_006D8D23:
    PUSH32(esp, 0x00801CC4u); /* 0x006D8D23: push 0x801cc4 */
    PUSH32(esp, 0); /* 0x006D8D28: push 0 */
    PUSH32(esp, 0x8200000Du); /* 0x006D8D2A: push 0x8200000d */
    ecx = ebx; /* 0x006D8D2F: mov ecx, ebx */
    RECOMP_CALL(sub_006DA670); /* 0x006D8D31: call 0x6da670 */
    RECOMP_FLAGS_IN();
L_006D8D36:
    /* cmp MEM8(ebx + 0x40A), 0 */ /* 0x006D8D36: cmp byte ptr [ebx + 0x40a], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x40A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x80u; /* 0x006D8D3D: mov eax, 0x80 */
    ecx = 0x84u; /* 0x006D8D42: mov ecx, 0x84 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006D8D47: cmovne eax, ecx */
    /* cmp MEM32(ebx + 0xD0), 0 */ /* 0x006D8D4A: cmp dword ptr [ebx + 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x420)) = eax; /* 0x006D8D51: mov dword ptr [ebp - 0x420], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8D63; /* 0x006D8D57: je 0x6d8d63 */
L_006D8D59:
    MEM32(ebx + 0xEC) = 0; /* 0x006D8D59: mov dword ptr [ebx + 0xec], 0 */
L_006D8D63:
    /* cmp MEM8(ebx + 0xB4), 0 */ /* 0x006D8D63: cmp byte ptr [ebx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8D78; /* 0x006D8D6A: jne 0x6d8d78 */
L_006D8D6C:
    eax = MEM32(ebx + 0x284); /* 0x006D8D6C: mov eax, dword ptr [ebx + 0x284] */
    MEM32(ebx + 0xF0) = eax; /* 0x006D8D72: mov dword ptr [ebx + 0xf0], eax */
L_006D8D78:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8D78: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8D83; /* 0x006D8D7C: je 0x6d8d83 */
L_006D8D7E:
    eax = MEM32(ebx + 0x50); /* 0x006D8D7E: mov eax, dword ptr [ebx + 0x50] */
    goto L_006D8D89; /* 0x006D8D81: jmp 0x6d8d89 */
L_006D8D83:
    eax = MEM32(ebx + 0x8C); /* 0x006D8D83: mov eax, dword ptr [ebx + 0x8c] */
L_006D8D89:
    edx = MEM32(ebx + 0x104); /* 0x006D8D89: mov edx, dword ptr [ebx + 0x104] */
    MEM32(ebp + (-0x41C)) = eax; /* 0x006D8D8F: mov dword ptr [ebp - 0x41c], eax */
    eax = ebx + 0x108; /* 0x006D8D95: lea eax, [ebx + 0x108] */
    PUSH32(esp, eax); /* 0x006D8D9B: push eax */
    eax = ebx + 0xC0; /* 0x006D8D9C: lea eax, [ebx + 0xc0] */
    ecx = MEM32(edx); /* 0x006D8DA2: mov ecx, dword ptr [edx] */
    PUSH32(esp, eax); /* 0x006D8DA4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x006D8DA5: push dword ptr [ebp - 0x420] */
    eax = MEM32(ebp + (-0x41C)); /* 0x006D8DAB: mov eax, dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebx + 0xFC)); /* 0x006D8DB1: push dword ptr [ebx + 0xfc] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D8DB7: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x006D8DBA: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006D8DBC: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x006D8DBD: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0xD0), 0 */ /* 0x006D8DC0: cmp dword ptr [ebx + 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x006D8DC7: mov edi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8E31; /* 0x006D8DC9: je 0x6d8e31 */
L_006D8DCB:
    eax = MEM32(ebx + 0x108); /* 0x006D8DCB: mov eax, dword ptr [ebx + 0x108] */
    /* test eax, eax */ /* 0x006D8DD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8E31; /* 0x006D8DD3: je 0x6d8e31 */
L_006D8DD5:
    ecx = MEM32(eax); /* 0x006D8DD5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x006D8DD7: push 1 */
    PUSH32(esp, 0xA1u); /* 0x006D8DD9: push 0xa1 */
    PUSH32(esp, eax); /* 0x006D8DDE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D8DDF: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x108); /* 0x006D8DE5: mov eax, dword ptr [ebx + 0x108] */
    PUSH32(esp, 1); /* 0x006D8DEB: push 1 */
    PUSH32(esp, 0x1Bu); /* 0x006D8DED: push 0x1b */
    PUSH32(esp, eax); /* 0x006D8DEF: push eax */
    ecx = MEM32(eax); /* 0x006D8DF0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D8DF2: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x108); /* 0x006D8DF8: mov eax, dword ptr [ebx + 0x108] */
    PUSH32(esp, 7); /* 0x006D8DFE: push 7 */
    PUSH32(esp, 0x19u); /* 0x006D8E00: push 0x19 */
    PUSH32(esp, eax); /* 0x006D8E02: push eax */
    ecx = MEM32(eax); /* 0x006D8E03: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D8E05: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x108); /* 0x006D8E0B: mov eax, dword ptr [ebx + 0x108] */
    PUSH32(esp, 8); /* 0x006D8E11: push 8 */
    PUSH32(esp, 0x18u); /* 0x006D8E13: push 0x18 */
    PUSH32(esp, eax); /* 0x006D8E15: push eax */
    ecx = MEM32(eax); /* 0x006D8E16: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D8E18: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x108); /* 0x006D8E1E: mov eax, dword ptr [ebx + 0x108] */
    PUSH32(esp, 1); /* 0x006D8E24: push 1 */
    PUSH32(esp, 0xFu); /* 0x006D8E26: push 0xf */
    PUSH32(esp, eax); /* 0x006D8E28: push eax */
    ecx = MEM32(eax); /* 0x006D8E29: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D8E2B: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
L_006D8E31:
    /* test edi, edi */ /* 0x006D8E31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D9170; /* 0x006D8E33: js 0x6d9170 */
L_006D8E39:
    /* cmp MEM8(ebx + 0xB4), 0 */ /* 0x006D8E39: cmp byte ptr [ebx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8E59; /* 0x006D8E40: je 0x6d8e59 */
L_006D8E42:
    ecx = MEM32(ebx + 0x7C); /* 0x006D8E42: mov ecx, dword ptr [ebx + 0x7c] */
    eax = MEM32(ebx + 0x80); /* 0x006D8E45: mov eax, dword ptr [ebx + 0x80] */
    MEM32(ebp + (-0x424)) = ecx; /* 0x006D8E4B: mov dword ptr [ebp - 0x424], ecx */
    MEM32(ebp + (-0x42C)) = eax; /* 0x006D8E51: mov dword ptr [ebp - 0x42c], eax */
    goto L_006D8E94; /* 0x006D8E57: jmp 0x6d8e94 */
L_006D8E59:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8E59: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebx + 0x54; /* 0x006D8E5D: lea eax, [ebx + 0x54] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8E68; /* 0x006D8E60: jne 0x6d8e68 */
L_006D8E62:
    eax = ebx + 0x90; /* 0x006D8E62: lea eax, [ebx + 0x90] */
L_006D8E68:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8E68: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0] = xmm_ld(eax); /* 0x006D8E6C: movdqu xmm0, xmmword ptr [eax] */
    eax = ebx + 0x54; /* 0x006D8E70: lea eax, [ebx + 0x54] */
    MEM32(ebp + (-0x424)) = _xmm[0].u32[0]; /* 0x006D8E73: movd dword ptr [ebp - 0x424], xmm0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8E83; /* 0x006D8E7B: jne 0x6d8e83 */
L_006D8E7D:
    eax = ebx + 0x90; /* 0x006D8E7D: lea eax, [ebx + 0x90] */
L_006D8E83:
    _xmm[0] = xmm_ld(eax); /* 0x006D8E83: movdqu xmm0, xmmword ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006D8E87: psrldq xmm0, 4 */
    MEM32(ebp + (-0x42C)) = _xmm[0].u32[0]; /* 0x006D8E8C: movd dword ptr [ebp - 0x42c], xmm0 */
L_006D8E94:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8E94: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8E9F; /* 0x006D8E98: je 0x6d8e9f */
L_006D8E9A:
    eax = MEM32(ebx + 0x68); /* 0x006D8E9A: mov eax, dword ptr [ebx + 0x68] */
    goto L_006D8EA5; /* 0x006D8E9D: jmp 0x6d8ea5 */
L_006D8E9F:
    eax = MEM32(ebx + 0xA4); /* 0x006D8E9F: mov eax, dword ptr [ebx + 0xa4] */
L_006D8EA5:
    /* test eax, eax */ /* 0x006D8EA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D8EFA; /* 0x006D8EA7: je 0x6d8efa */
L_006D8EA9:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8EA9: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8EB4; /* 0x006D8EAD: je 0x6d8eb4 */
L_006D8EAF:
    eax = MEM32(ebx + 0x6C); /* 0x006D8EAF: mov eax, dword ptr [ebx + 0x6c] */
    goto L_006D8EBA; /* 0x006D8EB2: jmp 0x6d8eba */
L_006D8EB4:
    eax = MEM32(ebx + 0xA8); /* 0x006D8EB4: mov eax, dword ptr [ebx + 0xa8] */
L_006D8EBA:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8EBA: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x41C)) = eax; /* 0x006D8EBE: mov dword ptr [ebp - 0x41c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8ECB; /* 0x006D8EC4: je 0x6d8ecb */
L_006D8EC6:
    edi = MEM32(ebx + 0x68); /* 0x006D8EC6: mov edi, dword ptr [ebx + 0x68] */
    goto L_006D8ED1; /* 0x006D8EC9: jmp 0x6d8ed1 */
L_006D8ECB:
    edi = MEM32(ebx + 0xA4); /* 0x006D8ECB: mov edi, dword ptr [ebx + 0xa4] */
L_006D8ED1:
    ecx = MEM32(ebx + 0x108); /* 0x006D8ED1: mov ecx, dword ptr [ebx + 0x108] */
    eax = ebx + 0x10; /* 0x006D8ED7: lea eax, [ebx + 0x10] */
    PUSH32(esp, 0); /* 0x006D8EDA: push 0 */
    PUSH32(esp, eax); /* 0x006D8EDC: push eax */
    PUSH32(esp, 1); /* 0x006D8EDD: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x006D8EDF: push dword ptr [ebp - 0x41c] */
    edx = MEM32(ecx); /* 0x006D8EE5: mov edx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x006D8EE7: push edi */
    PUSH32(esp, 0x15u); /* 0x006D8EE8: push 0x15 */
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x006D8EEA: push dword ptr [ebp - 0x42c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x006D8EF0: push dword ptr [ebp - 0x424] */
    PUSH32(esp, ecx); /* 0x006D8EF6: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x70)); /* 0x006D8EF7: call dword ptr [edx + 0x70] */
    RECOMP_FLAGS_IN();
L_006D8EFA:
    ecx = MEM32(ebx + 0x108); /* 0x006D8EFA: mov ecx, dword ptr [ebx + 0x108] */
    edi = ebx + 0x14; /* 0x006D8F00: lea edi, [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x006D8F03: push edi */
    PUSH32(esp, 0); /* 0x006D8F04: push 0 */
    PUSH32(esp, ecx); /* 0x006D8F06: push ecx */
    eax = MEM32(ecx); /* 0x006D8F07: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x98)); /* 0x006D8F09: call dword ptr [eax + 0x98] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D8F0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D8F1B; /* 0x006D8F11: jne 0x6d8f1b */
L_006D8F13:
    eax = MEM32(edi); /* 0x006D8F13: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x006D8F15: push eax */
    ecx = MEM32(eax); /* 0x006D8F16: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D8F18: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_006D8F1B:
    /* cmp MEM8(ebx + 0x44), 0 */ /* 0x006D8F1B: cmp byte ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8F26; /* 0x006D8F1F: je 0x6d8f26 */
L_006D8F21:
    eax = MEM32(ebx + 0x68); /* 0x006D8F21: mov eax, dword ptr [ebx + 0x68] */
    goto L_006D8F2C; /* 0x006D8F24: jmp 0x6d8f2c */
L_006D8F26:
    eax = MEM32(ebx + 0xA4); /* 0x006D8F26: mov eax, dword ptr [ebx + 0xa4] */
L_006D8F2C:
    /* test eax, eax */ /* 0x006D8F2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D8F34; /* 0x006D8F2E: jne 0x6d8f34 */
L_006D8F30:
    eax = MEM32(edi); /* 0x006D8F30: mov eax, dword ptr [edi] */
    goto L_006D8F37; /* 0x006D8F32: jmp 0x6d8f37 */
L_006D8F34:
    eax = MEM32(ebx + 0x10); /* 0x006D8F34: mov eax, dword ptr [ebx + 0x10] */
L_006D8F37:
    /* cmp MEM8(ebx + 0xB4), 0 */ /* 0x006D8F37: cmp byte ptr [ebx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0xC) = eax; /* 0x006D8F3E: mov dword ptr [ebx + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D8F92; /* 0x006D8F41: je 0x6d8f92 */
L_006D8F43:
    eax = ebp + (-0x418); /* 0x006D8F43: lea eax, [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x006D8F49: push eax */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D8F4A: push dword ptr [ebx + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC828)); /* 0x006D8F50: call dword ptr [0x7cc828] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC864); /* 0x006D8F56: mov esi, dword ptr [0x7cc864] */
    PUSH32(esp, 0); /* 0x006D8F5C: push 0 */
    RECOMP_ICALL(esi); /* 0x006D8F5E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x410)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x410)); /* 0x006D8F60: sub eax, dword ptr [ebp - 0x410] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D8F66: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D8F67: sub eax, edx */
    _flag_k = FK_CMP;
    edi = eax; /* 0x006D8F69: mov edi, eax */
    PUSH32(esp, 1); /* 0x006D8F6B: push 1 */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x006D8F6D: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    RECOMP_ICALL(esi); /* 0x006D8F6F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x40C)); /* 0x006D8F71: sub eax, dword ptr [ebp - 0x40c] */
    _flag_k = FK_CMP;
    PUSH32(esp, 5); /* 0x006D8F77: push 5 */
    PUSH32(esp, 0); /* 0x006D8F79: push 0 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D8F7B: cdq  */
    PUSH32(esp, 0); /* 0x006D8F7C: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D8F7E: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D8F80: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    PUSH32(esp, eax); /* 0x006D8F82: push eax */
    PUSH32(esp, edi); /* 0x006D8F83: push edi */
    PUSH32(esp, 0); /* 0x006D8F84: push 0 */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D8F86: push dword ptr [ebx + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D8F8C: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D8F92:
    ecx = MEM32(ebx + 0x108); /* 0x006D8F92: mov ecx, dword ptr [ebx + 0x108] */
    eax = ebx + 0x10C; /* 0x006D8F98: lea eax, [ebx + 0x10c] */
    PUSH32(esp, eax); /* 0x006D8F9E: push eax */
    PUSH32(esp, ecx); /* 0x006D8F9F: push ecx */
    edx = MEM32(ecx); /* 0x006D8FA0: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x006D8FA2: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x428)); /* 0x006D8FA5: mov esi, dword ptr [ebp - 0x428] */
    eax = MEM32(ebp + (-0x420)); /* 0x006D8FAB: mov eax, dword ptr [ebp - 0x420] */
    MEM32(ebx + 0x25C) = eax; /* 0x006D8FB1: mov dword ptr [ebx + 0x25c], eax */
    ecx = MEM32(esi + 0x4); /* 0x006D8FB7: mov ecx, dword ptr [esi + 4] */
    /* cmp ecx, 2 */ /* 0x006D8FBA: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8FC6; /* 0x006D8FBD: jne 0x6d8fc6 */
L_006D8FBF:
    PUSH32(esp, 0x00801DC8u); /* 0x006D8FBF: push 0x801dc8 */
    goto L_006D8FDC; /* 0x006D8FC4: jmp 0x6d8fdc */
L_006D8FC6:
    /* cmp ecx, 1 */ /* 0x006D8FC6: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8FD2; /* 0x006D8FC9: jne 0x6d8fd2 */
L_006D8FCB:
    PUSH32(esp, 0x00801DC0u); /* 0x006D8FCB: push 0x801dc0 */
    goto L_006D8FDC; /* 0x006D8FD0: jmp 0x6d8fdc */
L_006D8FD2:
    /* cmp ecx, 3 */ /* 0x006D8FD2: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D8FEF; /* 0x006D8FD5: jne 0x6d8fef */
L_006D8FD7:
    PUSH32(esp, 0x00801DB8u); /* 0x006D8FD7: push 0x801db8 */
L_006D8FDC:
    eax = ebx + 0x294; /* 0x006D8FDC: lea eax, [ebx + 0x294] */
    PUSH32(esp, eax); /* 0x006D8FE2: push eax */
    RECOMP_ICALL(MEM32(0x7CC140)); /* 0x006D8FE3: call dword ptr [0x7cc140] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x420)); /* 0x006D8FE9: mov eax, dword ptr [ebp - 0x420] */
L_006D8FEF:
    edi = MEM32(0x7CC13C); /* 0x006D8FEF: mov edi, dword ptr [0x7cc13c] */
    ecx = eax; /* 0x006D8FF5: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x006D8FF7: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D901A; /* 0x006D8FFA: je 0x6d901a */
L_006D8FFC:
    /* test LO8(eax), 0x10u */ /* 0x006D8FFC: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D901A; /* 0x006D8FFE: je 0x6d901a */
L_006D9000:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D9000: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx + 0x294; /* 0x006D9004: lea eax, [ebx + 0x294] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9013; /* 0x006D900A: jne 0x6d9013 */
L_006D900C:
    PUSH32(esp, 0x00801D9Cu); /* 0x006D900C: push 0x801d9c */
    goto L_006D9065; /* 0x006D9011: jmp 0x6d9065 */
L_006D9013:
    PUSH32(esp, 0x00801C1Cu); /* 0x006D9013: push 0x801c1c */
    goto L_006D9065; /* 0x006D9018: jmp 0x6d9065 */
L_006D901A:
    /* test ecx, ecx */ /* 0x006D901A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9038; /* 0x006D901C: je 0x6d9038 */
L_006D901E:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D901E: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx + 0x294; /* 0x006D9022: lea eax, [ebx + 0x294] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9031; /* 0x006D9028: jne 0x6d9031 */
L_006D902A:
    PUSH32(esp, 0x00801C08u); /* 0x006D902A: push 0x801c08 */
    goto L_006D9065; /* 0x006D902F: jmp 0x6d9065 */
L_006D9031:
    PUSH32(esp, 0x00801BE0u); /* 0x006D9031: push 0x801be0 */
    goto L_006D9065; /* 0x006D9036: jmp 0x6d9065 */
L_006D9038:
    /* test LO8(eax), LO8(eax) */ /* 0x006D9038: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9056; /* 0x006D903A: jns 0x6d9056 */
L_006D903C:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D903C: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx + 0x294; /* 0x006D9040: lea eax, [ebx + 0x294] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D904F; /* 0x006D9046: jne 0x6d904f */
L_006D9048:
    PUSH32(esp, 0x00801BC8u); /* 0x006D9048: push 0x801bc8 */
    goto L_006D9065; /* 0x006D904D: jmp 0x6d9065 */
L_006D904F:
    PUSH32(esp, 0x00801C98u); /* 0x006D904F: push 0x801c98 */
    goto L_006D9065; /* 0x006D9054: jmp 0x6d9065 */
L_006D9056:
    /* test LO8(eax), 0x20u */ /* 0x006D9056: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9068; /* 0x006D9058: je 0x6d9068 */
L_006D905A:
    PUSH32(esp, 0x00801C84u); /* 0x006D905A: push 0x801c84 */
    eax = ebx + 0x294; /* 0x006D905F: lea eax, [ebx + 0x294] */
L_006D9065:
    PUSH32(esp, eax); /* 0x006D9065: push eax */
    RECOMP_ICALL(edi); /* 0x006D9066: call edi */
    RECOMP_FLAGS_IN();
L_006D9068:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x006D9068: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D90B7; /* 0x006D906C: jne 0x6d90b7 */
L_006D906E:
    PUSH32(esp, 0x00801C7Cu); /* 0x006D906E: push 0x801c7c */
    esi = ebx + 0x294; /* 0x006D9073: lea esi, [ebx + 0x294] */
    PUSH32(esp, esi); /* 0x006D9079: push esi */
    RECOMP_ICALL(edi); /* 0x006D907A: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x430)); /* 0x006D907C: mov edx, dword ptr [ebp - 0x430] */
    PUSH32(esp, ecx); /* 0x006D9082: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x204u; /* 0x006D9083: add edx, 0x204 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x408); /* 0x006D9089: lea ecx, [ebp - 0x408] */
    RECOMP_CALL(sub_006D76A0); /* 0x006D908F: call 0x6d76a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D9094: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006D9097: push esi */
    RECOMP_ICALL(MEM32(0x7CC10C)); /* 0x006D9098: call dword ptr [0x7cc10c] */
    RECOMP_FLAGS_IN();
    ecx = 0x59u; /* 0x006D909E: mov ecx, 0x59 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D90A3: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x408); /* 0x006D90A5: lea eax, [ebp - 0x408] */
    PUSH32(esp, ecx); /* 0x006D90AB: push ecx */
    PUSH32(esp, eax); /* 0x006D90AC: push eax */
    PUSH32(esp, esi); /* 0x006D90AD: push esi */
    RECOMP_ICALL(MEM32(0x7CC574)); /* 0x006D90AE: call dword ptr [0x7cc574] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D90B4: add esp, 0xc */
    _flag_k = FK_ADD;
L_006D90B7:
    eax = MEM32(ebx + 0x108); /* 0x006D90B7: mov eax, dword ptr [ebx + 0x108] */
    edx = ebp + (-0x41C); /* 0x006D90BD: lea edx, [ebp - 0x41c] */
    PUSH32(esp, edx); /* 0x006D90C3: push edx */
    PUSH32(esp, 0); /* 0x006D90C4: push 0 */
    PUSH32(esp, 0); /* 0x006D90C6: push 0 */
    MEM32(ebp + (-0x41C)) = 0; /* 0x006D90C8: mov dword ptr [ebp - 0x41c], 0 */
    ecx = MEM32(eax); /* 0x006D90D2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D90D4: push 0 */
    PUSH32(esp, eax); /* 0x006D90D6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x006D90D7: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x41C)); /* 0x006D90DA: mov ecx, dword ptr [ebp - 0x41c] */
    eax = ebx + 0x23C; /* 0x006D90E0: lea eax, [ebx + 0x23c] */
    PUSH32(esp, eax); /* 0x006D90E6: push eax */
    PUSH32(esp, ecx); /* 0x006D90E7: push ecx */
    edx = MEM32(ecx); /* 0x006D90E8: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x006D90EA: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x41C)); /* 0x006D90ED: mov eax, dword ptr [ebp - 0x41c] */
    PUSH32(esp, eax); /* 0x006D90F3: push eax */
    ecx = MEM32(eax); /* 0x006D90F4: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D90F6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x408), 0 */ /* 0x006D90F9: cmp byte ptr [ebx + 0x408], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x408)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9138; /* 0x006D9100: je 0x6d9138 */
L_006D9102:
    /* cmp MEM8(ebx + 0xB4), 0 */ /* 0x006D9102: cmp byte ptr [ebx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9138; /* 0x006D9109: jne 0x6d9138 */
L_006D910B:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x006D910B: push -0xc */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D910D: push dword ptr [ebx + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC834)); /* 0x006D9113: call dword ptr [0x7cc834] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006D9119: push ecx */
    ecx = MEM32(ebx + 0x108); /* 0x006D911A: mov ecx, dword ptr [ebx + 0x108] */
    edx = eax; /* 0x006D9120: mov edx, eax */
    RECOMP_CALL(sub_006DC0A0); /* 0x006D9122: call 0x6dc0a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x108); /* 0x006D9127: mov eax, dword ptr [ebx + 0x108] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D912D: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x006D9130: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x006D9132: push 1 */
    PUSH32(esp, eax); /* 0x006D9134: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D9135: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_006D9138:
    eax = MEM32(ebx); /* 0x006D9138: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x006D913A: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006D913C: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D913F: mov edi, eax */
    ecx = ebx; /* 0x006D9141: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x006D9143: mov eax, dword ptr [ebx] */
    /* test edi, edi */ /* 0x006D9145: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D914E; /* 0x006D9147: jns 0x6d914e */
L_006D9149:
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006D9149: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_006D9169; /* 0x006D914C: jmp 0x6d9169 */
L_006D914E:
    MEM8(ebx + 0xBB) = (uint8_t)(1); /* 0x006D914E: mov byte ptr [ebx + 0xbb], 1 */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x006D9155: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D9158: mov edi, eax */
    /* test edi, edi */ /* 0x006D915A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9211; /* 0x006D915C: jns 0x6d9211 */
L_006D9162:
    eax = MEM32(ebx); /* 0x006D9162: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x006D9164: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006D9166: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_006D9169:
    ecx = ebx; /* 0x006D9169: mov ecx, ebx */
    RECOMP_CALL(sub_006DA620); /* 0x006D916B: call 0x6da620 */
    RECOMP_FLAGS_IN();
L_006D9170:
    /* cmp edi, 0x8200000Bu */ /* 0x006D9170: cmp edi, 0x8200000b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8200000Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D91FE; /* 0x006D9176: je 0x6d91fe */
L_006D917C:
    /* cmp edi, 0x80070002u */ /* 0x006D917C: cmp edi, 0x80070002 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80070002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D91FE; /* 0x006D9182: je 0x6d91fe */
L_006D9184:
    eax = MEM32(ebp + (-0x428)); /* 0x006D9184: mov eax, dword ptr [ebp - 0x428] */
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x006D918A: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D91FE; /* 0x006D918E: jne 0x6d91fe */
L_006D9190:
    PUSH32(esp, 1); /* 0x006D9190: push 1 */
    PUSH32(esp, ecx); /* 0x006D9192: push ecx */
    ecx = ebx; /* 0x006D9193: mov ecx, ebx */
    RECOMP_CALL(sub_006D8050); /* 0x006D9195: call 0x6d8050 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D919A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D91FE; /* 0x006D919C: je 0x6d91fe */
L_006D919E:
    eax = MEM32(ebx); /* 0x006D919E: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x006D91A0: mov ecx, ebx */
    MEM8(ebx + 0xB4) = (uint8_t)(1); /* 0x006D91A2: mov byte ptr [ebx + 0xb4], 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D91A9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x268); /* 0x006D91AC: mov ecx, dword ptr [ebx + 0x268] */
    eax = MEM32(ebx + 0x270); /* 0x006D91B2: mov eax, dword ptr [ebx + 0x270] */
    edx = MEM32(ebx + 0x264); /* 0x006D91B8: mov edx, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D91BE: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D91C0: push 0x40 */
    PUSH32(esp, eax); /* 0x006D91C2: push eax */
    eax = MEM32(ebx + 0x26C); /* 0x006D91C3: mov eax, dword ptr [ebx + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D91C9: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D91CB: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D91CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx + 0x4), LO8(eax) */ /* 0x006D91CE: cmp byte ptr [ebx + 4], al */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D91D1: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D91D2: setne al */
    PUSH32(esp, edx); /* 0x006D91D5: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D91D6: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D91D9: push eax */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D91DA: push dword ptr [ebx + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D91E0: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00801C4Cu); /* 0x006D91E6: push 0x801c4c */
    PUSH32(esp, 2); /* 0x006D91EB: push 2 */
    PUSH32(esp, edi); /* 0x006D91ED: push edi */
    ecx = ebx; /* 0x006D91EE: mov ecx, ebx */
    RECOMP_CALL(sub_006DA670); /* 0x006D91F0: call 0x6da670 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x006D91F5: mov ecx, ebx */
    RECOMP_CALL(sub_006D8CC0); /* 0x006D91F7: call 0x6d8cc0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D91FC: mov edi, eax */
L_006D91FE:
    eax = edi; /* 0x006D91FE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006D9200: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9201: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9202: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D9203: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D9206: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D9208: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D920D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D920F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9210: ret  */
L_006D9211:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D9211: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9214: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D9216: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9217: pop esi */
    MEM8(ebx + 0xBC) = (uint8_t)(1); /* 0x006D9218: mov byte ptr [ebx + 0xbc], 1 */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D921F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D9221: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D9222: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D9227: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9229: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D922A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D9230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D9230u);

L_006D9230:
    edx = ecx; /* 0x006D9230: mov edx, ecx */
    PUSH32(esp, esi); /* 0x006D9232: push esi */
    eax = (uint32_t)MEM8(edx + 0x44); /* 0x006D9233: movzx eax, byte ptr [edx + 0x44] */
    MEM32(edx + 0xE0) = eax; /* 0x006D9237: mov dword ptr [edx + 0xe0], eax */
    MEM32(edx + 0xCC) = 1; /* 0x006D923D: mov dword ptr [edx + 0xcc], 1 */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D9247: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9252; /* 0x006D924B: je 0x6d9252 */
L_006D924D:
    esi = MEM32(edx + 0x68); /* 0x006D924D: mov esi, dword ptr [edx + 0x68] */
    goto L_006D9258; /* 0x006D9250: jmp 0x6d9258 */
L_006D9252:
    esi = MEM32(edx + 0xA4); /* 0x006D9252: mov esi, dword ptr [edx + 0xa4] */
L_006D9258:
    MEM32(edx + 0xD0) = esi; /* 0x006D9258: mov dword ptr [edx + 0xd0], esi */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D925E: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9269; /* 0x006D9262: je 0x6d9269 */
L_006D9264:
    eax = MEM32(edx + 0x6C); /* 0x006D9264: mov eax, dword ptr [edx + 0x6c] */
    goto L_006D926F; /* 0x006D9267: jmp 0x6d926f */
L_006D9269:
    eax = MEM32(edx + 0xA8); /* 0x006D9269: mov eax, dword ptr [edx + 0xa8] */
L_006D926F:
    SET_LO8(ecx, MEM8(edx + 0x3C)); /* 0x006D926F: mov cl, byte ptr [edx + 0x3c] */
    MEM32(edx + 0xD4) = eax; /* 0x006D9272: mov dword ptr [edx + 0xd4], eax */
    eax = (uint32_t)LO8(ecx); /* 0x006D9278: movzx eax, cl */
    MEM32(edx + 0xE4) = eax; /* 0x006D927B: mov dword ptr [edx + 0xe4], eax */
    eax = MEM32(edx + 0xF8); /* 0x006D9281: mov eax, dword ptr [edx + 0xf8] */
    MEM32(edx + 0xD8) = 1; /* 0x006D9287: mov dword ptr [edx + 0xd8], 1 */
    MEM32(edx + 0xDC) = eax; /* 0x006D9291: mov dword ptr [edx + 0xdc], eax */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006D9297: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D92C4; /* 0x006D9299: je 0x6d92c4 */
L_006D929B:
    MEM32(edx + 0xEC) = 2; /* 0x006D929B: mov dword ptr [edx + 0xec], 2 */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D92A5: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D92B6; /* 0x006D92A9: je 0x6d92b6 */
L_006D92AB:
    eax = MEM32(edx + 0x64); /* 0x006D92AB: mov eax, dword ptr [edx + 0x64] */
    MEM32(edx + 0xE8) = eax; /* 0x006D92AE: mov dword ptr [edx + 0xe8], eax */
    goto L_006D92CE; /* 0x006D92B4: jmp 0x6d92ce */
L_006D92B6:
    eax = MEM32(edx + 0xA0); /* 0x006D92B6: mov eax, dword ptr [edx + 0xa0] */
    MEM32(edx + 0xE8) = eax; /* 0x006D92BC: mov dword ptr [edx + 0xe8], eax */
    goto L_006D92CE; /* 0x006D92C2: jmp 0x6d92ce */
L_006D92C4:
    MEM32(edx + 0xEC) = 0; /* 0x006D92C4: mov dword ptr [edx + 0xec], 0 */
L_006D92CE:
    /* cmp MEM8(edx + 0x78), 0 */ /* 0x006D92CE: cmp byte ptr [edx + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D92DB; /* 0x006D92D2: je 0x6d92db */
L_006D92D4:
    _flag_a = (uint32_t)((MEM32(edx + 0xEC) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0xEC) | 4));
    MEM32(edx + 0xEC) = MEM32(edx + 0xEC) | 4; /* 0x006D92D4: or dword ptr [edx + 0xec], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D92DB:
    /* cmp MEM8(edx + 0xB4), 0 */ /* 0x006D92DB: cmp byte ptr [edx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D931F; /* 0x006D92E2: je 0x6d931f */
L_006D92E4:
    eax = MEM32(edx + 0x7C); /* 0x006D92E4: mov eax, dword ptr [edx + 0x7c] */
    MEM32(edx + 0xC0) = eax; /* 0x006D92E7: mov dword ptr [edx + 0xc0], eax */
    eax = MEM32(edx + 0x80); /* 0x006D92ED: mov eax, dword ptr [edx + 0x80] */
    MEM32(edx + 0xC4) = eax; /* 0x006D92F3: mov dword ptr [edx + 0xc4], eax */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D92F9: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9304; /* 0x006D92FD: je 0x6d9304 */
L_006D92FF:
    eax = MEM32(edx + 0x50); /* 0x006D92FF: mov eax, dword ptr [edx + 0x50] */
    goto L_006D930A; /* 0x006D9302: jmp 0x6d930a */
L_006D9304:
    eax = MEM32(edx + 0x8C); /* 0x006D9304: mov eax, dword ptr [edx + 0x8c] */
L_006D930A:
    eax = MEM32(eax + 0xC); /* 0x006D930A: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx + 0xC8) = eax; /* 0x006D930D: mov dword ptr [edx + 0xc8], eax */
    MEM32(edx + 0xF0) = 0; /* 0x006D9313: mov dword ptr [edx + 0xf0], 0 */
    goto L_006D9380; /* 0x006D931D: jmp 0x6d9380 */
L_006D931F:
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D931F: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edx + 0x54; /* 0x006D9323: lea eax, [edx + 0x54] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D932E; /* 0x006D9326: jne 0x6d932e */
L_006D9328:
    eax = edx + 0x90; /* 0x006D9328: lea eax, [edx + 0x90] */
L_006D932E:
    _xmm[0] = xmm_ld(eax); /* 0x006D932E: movdqu xmm0, xmmword ptr [eax] */
    eax = edx + 0x54; /* 0x006D9332: lea eax, [edx + 0x54] */
    MEM32(edx + 0xC0) = _xmm[0].u32[0]; /* 0x006D9335: movd dword ptr [edx + 0xc0], xmm0 */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D933D: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9349; /* 0x006D9341: jne 0x6d9349 */
L_006D9343:
    eax = edx + 0x90; /* 0x006D9343: lea eax, [edx + 0x90] */
L_006D9349:
    _xmm[0] = xmm_ld(eax); /* 0x006D9349: movdqu xmm0, xmmword ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006D934D: psrldq xmm0, 4 */
    MEM32(edx + 0xC4) = _xmm[0].u32[0]; /* 0x006D9352: movd dword ptr [edx + 0xc4], xmm0 */
    /* cmp MEM8(edx + 0x44), 0 */ /* 0x006D935A: cmp byte ptr [edx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9365; /* 0x006D935E: je 0x6d9365 */
L_006D9360:
    eax = MEM32(edx + 0x50); /* 0x006D9360: mov eax, dword ptr [edx + 0x50] */
    goto L_006D936B; /* 0x006D9363: jmp 0x6d936b */
L_006D9365:
    eax = MEM32(edx + 0x8C); /* 0x006D9365: mov eax, dword ptr [edx + 0x8c] */
L_006D936B:
    eax = MEM32(eax + 0xC); /* 0x006D936B: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx + 0xC8) = eax; /* 0x006D936E: mov dword ptr [edx + 0xc8], eax */
    eax = MEM32(edx + 0x98); /* 0x006D9374: mov eax, dword ptr [edx + 0x98] */
    MEM32(edx + 0xF0) = eax; /* 0x006D937A: mov dword ptr [edx + 0xf0], eax */
L_006D9380:
    /* cmp MEM8(edx + 0xBD), 0 */ /* 0x006D9380: cmp byte ptr [edx + 0xbd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xBD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x80000000u; /* 0x006D9387: mov eax, 0x80000000 */
    ecx = 1; /* 0x006D938C: mov ecx, 1 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006D9391: cmovne eax, ecx */
    /* test esi, esi */ /* 0x006D9394: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xF4) = eax; /* 0x006D9396: mov dword ptr [edx + 0xf4], eax */
    esi = POP32_VAL(esp); /* 0x006D939C: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D93A9; /* 0x006D939D: je 0x6d93a9 */
L_006D939F:
    MEM32(edx + 0xEC) = 0; /* 0x006D939F: mov dword ptr [edx + 0xec], 0 */
L_006D93A9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D93A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D93B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D93B0u);

L_006D93B0:
    PUSH32(esp, ebp); /* 0x006D93B0: push ebp */
    ebp = esp; /* 0x006D93B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D93B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006D93B6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006D93B9: push esi */
    esi = ecx; /* 0x006D93BA: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x006D93BC: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x006D93BF: push edi */
    MEM8(esi + 0xB9) = (uint8_t)(0); /* 0x006D93C0: mov byte ptr [esi + 0xb9], 0 */
    edi = esi + 0x10; /* 0x006D93C7: lea edi, [esi + 0x10] */
    /* test ecx, ecx */ /* 0x006D93CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D93DA; /* 0x006D93CC: je 0x6d93da */
L_006D93CE:
    eax = MEM32(ecx); /* 0x006D93CE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D93D0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D93D1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0; /* 0x006D93D4: mov dword ptr [edi], 0 */
L_006D93DA:
    /* cmp MEM8(esi + 0xBC), 0 */ /* 0x006D93DA: cmp byte ptr [esi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D93F1; /* 0x006D93E1: je 0x6d93f1 */
L_006D93E3:
    eax = MEM32(esi); /* 0x006D93E3: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D93E5: mov ecx, esi */
    MEM8(esi + 0xBC) = (uint8_t)(0); /* 0x006D93E7: mov byte ptr [esi + 0xbc], 0 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006D93EE: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_006D93F1:
    ecx = MEM32(esi + 0x108); /* 0x006D93F1: mov ecx, dword ptr [esi + 0x108] */
    edx = esi + 0xC0; /* 0x006D93F7: lea edx, [esi + 0xc0] */
    MEM32(esi + 0xD4) = 0; /* 0x006D93FD: mov dword ptr [esi + 0xd4], 0 */
    PUSH32(esp, edx); /* 0x006D9407: push edx */
    PUSH32(esp, ecx); /* 0x006D9408: push ecx */
    eax = MEM32(ecx); /* 0x006D9409: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x006D940B: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D940E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9434; /* 0x006D9410: jns 0x6d9434 */
L_006D9412:
    eax = MEM32(esi); /* 0x006D9412: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D9414: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006D9416: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D9419: mov eax, dword ptr [esi + 0x108] */
    edx = esi + 0xC0; /* 0x006D941F: lea edx, [esi + 0xc0] */
    PUSH32(esp, edx); /* 0x006D9425: push edx */
    PUSH32(esp, eax); /* 0x006D9426: push eax */
    ecx = MEM32(eax); /* 0x006D9427: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x006D9429: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D942C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D97D0; /* 0x006D942E: js 0x6d97d0 */
L_006D9434:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D9434: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9450; /* 0x006D943B: je 0x6d9450 */
L_006D943D:
    ecx = MEM32(esi + 0x7C); /* 0x006D943D: mov ecx, dword ptr [esi + 0x7c] */
    eax = MEM32(esi + 0x80); /* 0x006D9440: mov eax, dword ptr [esi + 0x80] */
    MEM32(esp + 0x18) = ecx; /* 0x006D9446: mov dword ptr [esp + 0x18], ecx */
    MEM32(esp + 0x14) = eax; /* 0x006D944A: mov dword ptr [esp + 0x14], eax */
    goto L_006D9487; /* 0x006D944E: jmp 0x6d9487 */
L_006D9450:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9450: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + 0x54; /* 0x006D9454: lea eax, [esi + 0x54] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D945F; /* 0x006D9457: jne 0x6d945f */
L_006D9459:
    eax = esi + 0x90; /* 0x006D9459: lea eax, [esi + 0x90] */
L_006D945F:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D945F: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0] = xmm_ld(eax); /* 0x006D9463: movdqu xmm0, xmmword ptr [eax] */
    eax = esi + 0x54; /* 0x006D9467: lea eax, [esi + 0x54] */
    MEM32(esp + 0x18) = _xmm[0].u32[0]; /* 0x006D946A: movd dword ptr [esp + 0x18], xmm0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9478; /* 0x006D9470: jne 0x6d9478 */
L_006D9472:
    eax = esi + 0x90; /* 0x006D9472: lea eax, [esi + 0x90] */
L_006D9478:
    _xmm[0] = xmm_ld(eax); /* 0x006D9478: movdqu xmm0, xmmword ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006D947C: psrldq xmm0, 4 */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x006D9481: movd dword ptr [esp + 0x14], xmm0 */
L_006D9487:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9487: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9492; /* 0x006D948B: je 0x6d9492 */
L_006D948D:
    eax = MEM32(esi + 0x68); /* 0x006D948D: mov eax, dword ptr [esi + 0x68] */
    goto L_006D9498; /* 0x006D9490: jmp 0x6d9498 */
L_006D9492:
    eax = MEM32(esi + 0xA4); /* 0x006D9492: mov eax, dword ptr [esi + 0xa4] */
L_006D9498:
    /* test eax, eax */ /* 0x006D9498: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D94E2; /* 0x006D949A: je 0x6d94e2 */
L_006D949C:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D949C: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D94A7; /* 0x006D94A0: je 0x6d94a7 */
L_006D94A2:
    eax = MEM32(esi + 0x6C); /* 0x006D94A2: mov eax, dword ptr [esi + 0x6c] */
    goto L_006D94AD; /* 0x006D94A5: jmp 0x6d94ad */
L_006D94A7:
    eax = MEM32(esi + 0xA8); /* 0x006D94A7: mov eax, dword ptr [esi + 0xa8] */
L_006D94AD:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D94AD: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x10) = eax; /* 0x006D94B1: mov dword ptr [esp + 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D94BC; /* 0x006D94B5: je 0x6d94bc */
L_006D94B7:
    edx = MEM32(esi + 0x68); /* 0x006D94B7: mov edx, dword ptr [esi + 0x68] */
    goto L_006D94C2; /* 0x006D94BA: jmp 0x6d94c2 */
L_006D94BC:
    edx = MEM32(esi + 0xA4); /* 0x006D94BC: mov edx, dword ptr [esi + 0xa4] */
L_006D94C2:
    eax = MEM32(esi + 0x108); /* 0x006D94C2: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D94C8: push 0 */
    PUSH32(esp, edi); /* 0x006D94CA: push edi */
    PUSH32(esp, 1); /* 0x006D94CB: push 1 */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D94CD: push dword ptr [esp + 0x1c] */
    ecx = MEM32(eax); /* 0x006D94D1: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006D94D3: push edx */
    PUSH32(esp, 0x15u); /* 0x006D94D4: push 0x15 */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x006D94D6: push dword ptr [esp + 0x2c] */
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x006D94DA: push dword ptr [esp + 0x34] */
    PUSH32(esp, eax); /* 0x006D94DE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x70)); /* 0x006D94DF: call dword ptr [ecx + 0x70] */
    RECOMP_FLAGS_IN();
L_006D94E2:
    ecx = MEM32(esi + 0x108); /* 0x006D94E2: mov ecx, dword ptr [esi + 0x108] */
    edi = esi + 0x14; /* 0x006D94E8: lea edi, [esi + 0x14] */
    PUSH32(esp, edi); /* 0x006D94EB: push edi */
    PUSH32(esp, 0); /* 0x006D94EC: push 0 */
    PUSH32(esp, ecx); /* 0x006D94EE: push ecx */
    eax = MEM32(ecx); /* 0x006D94EF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x98)); /* 0x006D94F1: call dword ptr [eax + 0x98] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D94F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D9503; /* 0x006D94F9: jne 0x6d9503 */
L_006D94FB:
    eax = MEM32(edi); /* 0x006D94FB: mov eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x006D94FD: push eax */
    ecx = MEM32(eax); /* 0x006D94FE: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D9500: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_006D9503:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9503: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D950E; /* 0x006D9507: je 0x6d950e */
L_006D9509:
    eax = MEM32(esi + 0x68); /* 0x006D9509: mov eax, dword ptr [esi + 0x68] */
    goto L_006D9514; /* 0x006D950C: jmp 0x6d9514 */
L_006D950E:
    eax = MEM32(esi + 0xA4); /* 0x006D950E: mov eax, dword ptr [esi + 0xa4] */
L_006D9514:
    /* test eax, eax */ /* 0x006D9514: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D951C; /* 0x006D9516: jne 0x6d951c */
L_006D9518:
    eax = MEM32(edi); /* 0x006D9518: mov eax, dword ptr [edi] */
    goto L_006D951F; /* 0x006D951A: jmp 0x6d951f */
L_006D951C:
    eax = MEM32(esi + 0x10); /* 0x006D951C: mov eax, dword ptr [esi + 0x10] */
L_006D951F:
    MEM32(esi + 0xC) = eax; /* 0x006D951F: mov dword ptr [esi + 0xc], eax */
    edx = esp + 0xC; /* 0x006D9522: lea edx, [esp + 0xc] */
    eax = MEM32(esi + 0x108); /* 0x006D9526: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, edx); /* 0x006D952C: push edx */
    PUSH32(esp, 0); /* 0x006D952D: push 0 */
    PUSH32(esp, 0); /* 0x006D952F: push 0 */
    MEM32(esp + 0x18) = 0; /* 0x006D9531: mov dword ptr [esp + 0x18], 0 */
    ecx = MEM32(eax); /* 0x006D9539: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D953B: push 0 */
    PUSH32(esp, eax); /* 0x006D953D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x006D953E: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0xC); /* 0x006D9541: mov ecx, dword ptr [esp + 0xc] */
    eax = esi + 0x23C; /* 0x006D9545: lea eax, [esi + 0x23c] */
    PUSH32(esp, eax); /* 0x006D954B: push eax */
    PUSH32(esp, ecx); /* 0x006D954C: push ecx */
    edx = MEM32(ecx); /* 0x006D954D: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x006D954F: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x006D9552: mov eax, dword ptr [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006D9556: push eax */
    ecx = MEM32(eax); /* 0x006D9557: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D9559: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x408), 0 */ /* 0x006D955C: cmp byte ptr [esi + 0x408], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x408)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D959B; /* 0x006D9563: je 0x6d959b */
L_006D9565:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D9565: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D959B; /* 0x006D956C: jne 0x6d959b */
L_006D956E:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x006D956E: push -0xc */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9570: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC834)); /* 0x006D9576: call dword ptr [0x7cc834] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006D957C: push ecx */
    ecx = MEM32(esi + 0x108); /* 0x006D957D: mov ecx, dword ptr [esi + 0x108] */
    edx = eax; /* 0x006D9583: mov edx, eax */
    RECOMP_CALL(sub_006DC0A0); /* 0x006D9585: call 0x6dc0a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D958A: mov eax, dword ptr [esi + 0x108] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D9590: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x006D9593: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x006D9595: push 1 */
    PUSH32(esp, eax); /* 0x006D9597: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D9598: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_006D959B:
    eax = MEM32(esi); /* 0x006D959B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D959D: mov ecx, esi */
    eax = MEM32(eax + 0x18); /* 0x006D959F: mov eax, dword ptr [eax + 0x18] */
    RECOMP_ICALL(eax); /* 0x006D95A2: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D95A4: mov edi, eax */
    /* test edi, edi */ /* 0x006D95A6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D95B9; /* 0x006D95A8: jns 0x6d95b9 */
L_006D95AA:
    edx = MEM32(esi); /* 0x006D95AA: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x006D95AC: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x24)); /* 0x006D95AE: call dword ptr [edx + 0x24] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x006D95B1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006D95B3: pop edi */
    esi = POP32_VAL(esp); /* 0x006D95B4: pop esi */
    esp = ebp; /* 0x006D95B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D95B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D95B8: ret  */
L_006D95B9:
    /* cmp MEM8(esi + 0xBE), 0 */ /* 0x006D95B9: cmp byte ptr [esi + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi + 0xBC) = (uint8_t)(1); /* 0x006D95C0: mov byte ptr [esi + 0xbc], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D97CE; /* 0x006D95C7: jne 0x6d97ce */
L_006D95CD:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D95CD: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC100); /* 0x006D95D4: mov edi, dword ptr [0x7cc100] */
    MEM8(esi + 0xBF) = (uint8_t)(1); /* 0x006D95DA: mov byte ptr [esi + 0xbf], 1 */
    esi = MEM32(0x7CC104); /* 0x006D95E1: mov esi, dword ptr [0x7cc104] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9619; /* 0x006D95E7: jne 0x6d9619 */
L_006D95E9:
    eax = esp + 0x18; /* 0x006D95E9: lea eax, [esp + 0x18] */
    MEM32(0x9280A0) = 1; /* 0x006D95ED: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D95F7: push eax */
    RECOMP_ICALL(esi); /* 0x006D95F8: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D95FA: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D95FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9675; /* 0x006D9601: je 0x6d9675 */
L_006D9603:
    ecx = MEM32(esp + 0x18); /* 0x006D9603: mov ecx, dword ptr [esp + 0x18] */
    MEM32(0x928098) = ecx; /* 0x006D9607: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0x1C); /* 0x006D960D: mov ecx, dword ptr [esp + 0x1c] */
    MEM32(0x92809C) = ecx; /* 0x006D9611: mov dword ptr [0x92809c], ecx */
    goto L_006D961E; /* 0x006D9617: jmp 0x6d961e */
L_006D9619:
    eax = MEM32(0x928070); /* 0x006D9619: mov eax, dword ptr [0x928070] */
L_006D961E:
    /* test eax, eax */ /* 0x006D961E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9675; /* 0x006D9620: je 0x6d9675 */
L_006D9622:
    eax = esp + 0x18; /* 0x006D9622: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x006D9626: push eax */
    RECOMP_ICALL(edi); /* 0x006D9627: call edi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9629: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x1C); /* 0x006D9630: mov edx, dword ptr [esp + 0x1c] */
    esi = MEM32(esp + 0x18); /* 0x006D9634: mov esi, dword ptr [esp + 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9656; /* 0x006D9638: je 0x6d9656 */
L_006D963A:
    ecx = esi; /* 0x006D963A: mov ecx, esi */
    eax = edx; /* 0x006D963C: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x928080));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x928080); /* 0x006D963E: sub ecx, dword ptr [0x928080] */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(0x928084), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D9644: sbb eax, dword ptr [0x928084] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x928090)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928090) = MEM32(0x928090) + ecx; /* 0x006D964A: add dword ptr [0x928090], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(0x928094), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D9650: adc dword ptr [0x928094], eax */
      MEM32(0x928094) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_006D9656:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D9656: xorps xmm0, xmm0 */
    MEM32(0x928088) = esi; /* 0x006D9659: mov dword ptr [0x928088], esi */
    esi = MEM32(0x7CC104); /* 0x006D965F: mov esi, dword ptr [0x7cc104] */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006D9665: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x92808C) = edx; /* 0x006D966D: mov dword ptr [0x92808c], edx */
    goto L_006D96CF; /* 0x006D9673: jmp 0x6d96cf */
L_006D9675:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D9675: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006D967B: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006D967F: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D9683: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D9683: shr eax, 0x1f */
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9686: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006D968D: addsd xmm1, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006D9696: mulsd xmm1, qword ptr [0x808c60] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D96BC; /* 0x006D969E: je 0x6d96bc */
L_006D96A0:
    _xmm[0] = _xmm[1]; /* 0x006D96A0: movapd xmm0, xmm1 */
    { double _s = sse_f64(MEM64(0x928060)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006D96A4: subsd xmm0, qword ptr [0x928060] */
    { double _s = sse_f64(MEM64(0x928068)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D96AC: addsd xmm0, qword ptr [0x928068] */
    MEM64(0x928068) = _xmm[0].u64[0]; /* 0x006D96B4: movsd qword ptr [0x928068], xmm0 */
L_006D96BC:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D96BC: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D96BF: movsd qword ptr [0x928078], xmm1 */
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D96C7: movsd qword ptr [0x928060], xmm0 */
L_006D96CF:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D96CF: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x866088) = 0; /* 0x006D96D6: mov dword ptr [0x866088], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9712; /* 0x006D96E0: jne 0x6d9712 */
L_006D96E2:
    eax = esp + 0x18; /* 0x006D96E2: lea eax, [esp + 0x18] */
    MEM32(0x9280A0) = 1; /* 0x006D96E6: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D96F0: push eax */
    RECOMP_ICALL(esi); /* 0x006D96F1: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D96F3: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D96F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9773; /* 0x006D96FA: je 0x6d9773 */
L_006D96FC:
    ecx = MEM32(esp + 0x18); /* 0x006D96FC: mov ecx, dword ptr [esp + 0x18] */
    MEM32(0x928098) = ecx; /* 0x006D9700: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0x1C); /* 0x006D9706: mov ecx, dword ptr [esp + 0x1c] */
    MEM32(0x92809C) = ecx; /* 0x006D970A: mov dword ptr [0x92809c], ecx */
    goto L_006D9717; /* 0x006D9710: jmp 0x6d9717 */
L_006D9712:
    eax = MEM32(0x928070); /* 0x006D9712: mov eax, dword ptr [0x928070] */
L_006D9717:
    /* test eax, eax */ /* 0x006D9717: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9773; /* 0x006D9719: je 0x6d9773 */
L_006D971B:
    ecx = MEM32(0x928080); /* 0x006D971B: mov ecx, dword ptr [0x928080] */
    eax = ecx; /* 0x006D9721: mov eax, ecx */
    edx = MEM32(0x928084); /* 0x006D9723: mov edx, dword ptr [0x928084] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x006D9729: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D973C; /* 0x006D972B: jne 0x6d973c */
L_006D972D:
    eax = esp + 0x18; /* 0x006D972D: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x006D9731: push eax */
    RECOMP_ICALL(edi); /* 0x006D9732: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x1C); /* 0x006D9734: mov edx, dword ptr [esp + 0x1c] */
    ecx = MEM32(esp + 0x18); /* 0x006D9738: mov ecx, dword ptr [esp + 0x18] */
L_006D973C:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D973C: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D97CE; /* 0x006D9743: jne 0x6d97ce */
L_006D9749:
    MEM32(0x928080) = ecx; /* 0x006D9749: mov dword ptr [0x928080], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D974F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928084) = edx; /* 0x006D9751: mov dword ptr [0x928084], edx */
    MEM32(0x928088) = ecx; /* 0x006D9757: mov dword ptr [0x928088], ecx */
    MEM32(0x92808C) = edx; /* 0x006D975D: mov dword ptr [0x92808c], edx */
    MEM32(0x866088) = 1; /* 0x006D9763: mov dword ptr [0x866088], 1 */
    edi = POP32_VAL(esp); /* 0x006D976D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D976E: pop esi */
    esp = ebp; /* 0x006D976F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9771: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9772: ret  */
L_006D9773:
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006D9773: movsd xmm0, qword ptr [0x928060] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808B20))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006D977B: ucomisd xmm0, qword ptr [0x808b20] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006D9783: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006D9784: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006D97AB; /* 0x006D9787: jp 0x6d97ab */
L_006D9789:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006D9789: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D978F: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006D9793: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D9797: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D9797: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D979A: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006D97A3: mulsd xmm0, qword ptr [0x808c60] */
L_006D97AB:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D97AB: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D97CE; /* 0x006D97B2: jne 0x6d97ce */
L_006D97B4:
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D97B4: movsd qword ptr [0x928060], xmm0 */
    MEM64(0x928078) = _xmm[0].u64[0]; /* 0x006D97BC: movsd qword ptr [0x928078], xmm0 */
    MEM32(0x866088) = 1; /* 0x006D97C4: mov dword ptr [0x866088], 1 */
L_006D97CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D97CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D97D0:
    edi = POP32_VAL(esp); /* 0x006D97D0: pop edi */
    esi = POP32_VAL(esp); /* 0x006D97D1: pop esi */
    esp = ebp; /* 0x006D97D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D97D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D97D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D97E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D97E0u);

L_006D97E0:
    PUSH32(esp, ebp); /* 0x006D97E0: push ebp */
    ebp = esp; /* 0x006D97E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D97E3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006D97E6: push ecx */
    PUSH32(esp, ebx); /* 0x006D97E7: push ebx */
    PUSH32(esp, esi); /* 0x006D97E8: push esi */
    esi = ecx; /* 0x006D97E9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D97EB: push edi */
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D97EC: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D97F7; /* 0x006D97F0: je 0x6d97f7 */
L_006D97F2:
    eax = MEM32(esi + 0x50); /* 0x006D97F2: mov eax, dword ptr [esi + 0x50] */
    goto L_006D97FD; /* 0x006D97F5: jmp 0x6d97fd */
L_006D97F7:
    eax = MEM32(esi + 0x8C); /* 0x006D97F7: mov eax, dword ptr [esi + 0x8c] */
L_006D97FD:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D97FD: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x006D9801: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D980A; /* 0x006D9803: je 0x6d980a */
L_006D9805:
    eax = MEM32(esi + 0x50); /* 0x006D9805: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9810; /* 0x006D9808: jmp 0x6d9810 */
L_006D980A:
    eax = MEM32(esi + 0x8C); /* 0x006D980A: mov eax, dword ptr [esi + 0x8c] */
L_006D9810:
    ebx = MEM32(eax + 0x4); /* 0x006D9810: mov ebx, dword ptr [eax + 4] */
    eax = MEM32(esi); /* 0x006D9813: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D9815: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D9817: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D981A: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x006D9821: mov ecx, esi */
    MEM8(esi + 0xBA) = (uint8_t)(1); /* 0x006D9823: mov byte ptr [esi + 0xba], 1 */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D982A: sete al */
    MEM8(esi + 0xB4) = (uint8_t)(LO8(eax)); /* 0x006D982D: mov byte ptr [esi + 0xb4], al */
    MEM8(esi + 0x44) = (uint8_t)(LO8(eax)); /* 0x006D9833: mov byte ptr [esi + 0x44], al */
    eax = MEM32(esi); /* 0x006D9836: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D9838: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x40B), 0 */ /* 0x006D983B: cmp byte ptr [esi + 0x40b], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x40B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9852; /* 0x006D9842: je 0x6d9852 */
L_006D9844:
    eax = MEM32(esi + 0x108); /* 0x006D9844: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D984A: push 0 */
    PUSH32(esp, eax); /* 0x006D984C: push eax */
    ecx = MEM32(eax); /* 0x006D984D: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x006D984F: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
L_006D9852:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9852: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D985D; /* 0x006D9856: je 0x6d985d */
L_006D9858:
    eax = MEM32(esi + 0x50); /* 0x006D9858: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9863; /* 0x006D985B: jmp 0x6d9863 */
L_006D985D:
    eax = MEM32(esi + 0x8C); /* 0x006D985D: mov eax, dword ptr [esi + 0x8c] */
L_006D9863:
    /* cmp MEM32(eax), edi */ /* 0x006D9863: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D988C; /* 0x006D9865: jne 0x6d988c */
L_006D9867:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9867: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9872; /* 0x006D986B: je 0x6d9872 */
L_006D986D:
    eax = MEM32(esi + 0x50); /* 0x006D986D: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9878; /* 0x006D9870: jmp 0x6d9878 */
L_006D9872:
    eax = MEM32(esi + 0x8C); /* 0x006D9872: mov eax, dword ptr [esi + 0x8c] */
L_006D9878:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x006D9878: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D988C; /* 0x006D987B: jne 0x6d988c */
L_006D987D:
    eax = MEM32(esi); /* 0x006D987D: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D987F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x006D9881: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D9883: mov ecx, esi */
    RECOMP_CALL(sub_006D93B0); /* 0x006D9885: call 0x6d93b0 */
    RECOMP_FLAGS_IN();
    goto L_006D98D4; /* 0x006D988A: jmp 0x6d98d4 */
L_006D988C:
    /* cmp MEM32(esi + 0x108), 0 */ /* 0x006D988C: cmp dword ptr [esi + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98CD; /* 0x006D9893: je 0x6d98cd */
L_006D9895:
    /* cmp MEM8(esi + 0xBC), 0 */ /* 0x006D9895: cmp byte ptr [esi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98AC; /* 0x006D989C: je 0x6d98ac */
L_006D989E:
    eax = MEM32(esi); /* 0x006D989E: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98A0: mov ecx, esi */
    MEM8(esi + 0xBC) = (uint8_t)(0); /* 0x006D98A2: mov byte ptr [esi + 0xbc], 0 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006D98A9: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_006D98AC:
    /* cmp MEM8(esi + 0xBB), 0 */ /* 0x006D98AC: cmp byte ptr [esi + 0xbb], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98C3; /* 0x006D98B3: je 0x6d98c3 */
L_006D98B5:
    eax = MEM32(esi); /* 0x006D98B5: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98B7: mov ecx, esi */
    MEM8(esi + 0xBB) = (uint8_t)(0); /* 0x006D98B9: mov byte ptr [esi + 0xbb], 0 */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006D98C0: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
L_006D98C3:
    MEM32(esi + 0x108) = 0; /* 0x006D98C3: mov dword ptr [esi + 0x108], 0 */
L_006D98CD:
    ecx = esi; /* 0x006D98CD: mov ecx, esi */
    RECOMP_CALL(sub_006D8CC0); /* 0x006D98CF: call 0x6d8cc0 */
    RECOMP_FLAGS_IN();
L_006D98D4:
    edi = eax; /* 0x006D98D4: mov edi, eax */
    MEM8(esi + 0xBA) = (uint8_t)(0); /* 0x006D98D6: mov byte ptr [esi + 0xba], 0 */
    /* test edi, edi */ /* 0x006D98DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D995A; /* 0x006D98DF: jns 0x6d995a */
L_006D98E1:
    /* cmp edi, 0x8876017Cu */ /* 0x006D98E1: cmp edi, 0x8876017c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8876017Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x8200000Cu; /* 0x006D98E7: mov eax, 0x8200000c */
    if (CMP_NE(_flag_a, _flag_b)) { edi = eax; } /* 0x006D98EC: cmovne edi, eax */
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D98EF: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9944; /* 0x006D98F6: jne 0x6d9944 */
L_006D98F8:
    eax = MEM32(esi); /* 0x006D98F8: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98FA: mov ecx, esi */
    MEM8(esi + 0xB4) = (uint8_t)(1); /* 0x006D98FC: mov byte ptr [esi + 0xb4], 1 */
    MEM8(esi + 0x44) = (uint8_t)(1); /* 0x006D9903: mov byte ptr [esi + 0x44], 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D9907: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x268); /* 0x006D990A: mov ecx, dword ptr [esi + 0x268] */
    eax = MEM32(esi + 0x270); /* 0x006D9910: mov eax, dword ptr [esi + 0x270] */
    edx = MEM32(esi + 0x264); /* 0x006D9916: mov edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D991C: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D991E: push 0x40 */
    PUSH32(esp, eax); /* 0x006D9920: push eax */
    eax = MEM32(esi + 0x26C); /* 0x006D9921: mov eax, dword ptr [esi + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D9927: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D9929: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D992A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x006D992C: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D992F: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9930: setne al */
    PUSH32(esp, edx); /* 0x006D9933: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D9934: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D9937: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9938: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D993E: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D9944:
    PUSH32(esp, 0x00801FC4u); /* 0x006D9944: push 0x801fc4 */
    PUSH32(esp, 1); /* 0x006D9949: push 1 */
    PUSH32(esp, edi); /* 0x006D994B: push edi */
    ecx = esi; /* 0x006D994C: mov ecx, esi */
    RECOMP_CALL(sub_006DA670); /* 0x006D994E: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D9953: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9954: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9955: pop ebx */
    esp = ebp; /* 0x006D9956: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9958: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9959: ret  */
L_006D995A:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D995A: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D999D; /* 0x006D9961: je 0x6d999d */
L_006D9963:
    ecx = MEM32(esi + 0x268); /* 0x006D9963: mov ecx, dword ptr [esi + 0x268] */
    eax = MEM32(esi + 0x270); /* 0x006D9969: mov eax, dword ptr [esi + 0x270] */
    edx = MEM32(esi + 0x264); /* 0x006D996F: mov edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D9975: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D9977: push 0x40 */
    PUSH32(esp, eax); /* 0x006D9979: push eax */
    eax = MEM32(esi + 0x26C); /* 0x006D997A: mov eax, dword ptr [esi + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D9980: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D9982: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9983: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x006D9985: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D9988: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9989: setne al */
    PUSH32(esp, edx); /* 0x006D998C: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D998D: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D9990: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9991: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D9997: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D999D:
    /* cmp MEM8(esi + 0x5), 0 */ /* 0x006D999D: cmp byte ptr [esi + 5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D99BC; /* 0x006D99A1: je 0x6d99bc */
L_006D99A3:
    eax = MEM32(esi + 0x108); /* 0x006D99A3: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D99A9: push 1 */
    PUSH32(esp, eax); /* 0x006D99AB: push eax */
    ecx = MEM32(eax); /* 0x006D99AC: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x006D99AE: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D99B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006D99B3: setns al */
    MEM8(esi + 0x40B) = (uint8_t)(LO8(eax)); /* 0x006D99B6: mov byte ptr [esi + 0x40b], al */
L_006D99BC:
    eax = esi + 0x274; /* 0x006D99BC: lea eax, [esi + 0x274] */
    PUSH32(esp, eax); /* 0x006D99C2: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D99C3: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006D99C9: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D99CF: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D99D1: mov ecx, esi */
    PUSH32(esp, 0); /* 0x006D99D3: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D99D5: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D99D8: pop edi */
    esi = POP32_VAL(esp); /* 0x006D99D9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D99DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D99DC: pop ebx */
    esp = ebp; /* 0x006D99DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D99DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D99E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D99F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D99F0u);

L_006D99F0:
    PUSH32(esp, esi); /* 0x006D99F0: push esi */
    esi = ecx; /* 0x006D99F1: mov esi, ecx */
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D99F3: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9A35; /* 0x006D99FA: je 0x6d9a35 */
L_006D99FC:
    PUSH32(esp, MEM32(esi + 0x260)); /* 0x006D99FC: push dword ptr [esi + 0x260] */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006D9A02: push -0x10 */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9A04: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006D9A0A: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x100); /* 0x006D9A10: mov eax, dword ptr [esi + 0x100] */
    /* test eax, eax */ /* 0x006D9A16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9A71; /* 0x006D9A18: je 0x6d9a71 */
L_006D9A1A:
    PUSH32(esp, eax); /* 0x006D9A1A: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9A1B: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC84C)); /* 0x006D9A21: call dword ptr [0x7cc84c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x100) = 0; /* 0x006D9A27: mov dword ptr [esi + 0x100], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9A31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D9A33: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9A34: ret  */
L_006D9A35:
    PUSH32(esp, 0x90080000u); /* 0x006D9A35: push 0x90080000 */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x006D9A3A: push -0x10 */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9A3C: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC8B4)); /* 0x006D9A42: call dword ptr [0x7cc8b4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x100), 0 */ /* 0x006D9A48: cmp dword ptr [esi + 0x100], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x100)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9A71; /* 0x006D9A4F: jne 0x6d9a71 */
L_006D9A51:
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9A51: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x006D9A57: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D9A5D: push 0 */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9A5F: push dword ptr [esi + 0xf8] */
    MEM32(esi + 0x100) = eax; /* 0x006D9A65: mov dword ptr [esi + 0x100], eax */
    RECOMP_ICALL(MEM32(0x7CC84C)); /* 0x006D9A6B: call dword ptr [0x7cc84c] */
    RECOMP_FLAGS_IN();
L_006D9A71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9A71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D9A73: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9A74: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D9A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D9A80u);

L_006D9A80:
    PUSH32(esp, ebp); /* 0x006D9A80: push ebp */
    ebp = esp; /* 0x006D9A81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x006D9A83: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D9A89: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D9A8E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D9A90: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006D9A93: push ebx */
    ebx = ecx; /* 0x006D9A94: mov ebx, ecx */
    MEM8(ebp + (-0x82)) = (uint8_t)(0); /* 0x006D9A96: mov byte ptr [ebp - 0x82], 0 */
    PUSH32(esp, esi); /* 0x006D9A9D: push esi */
    PUSH32(esp, edi); /* 0x006D9A9E: push edi */
    SET_LO8(ecx, MEM8(ebx + 0xB4)); /* 0x006D9A9F: mov cl, byte ptr [ebx + 0xb4] */
    MEM8(ebp + (-0x81)) = (uint8_t)(LO8(ecx)); /* 0x006D9AA5: mov byte ptr [ebp - 0x81], cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006D9AAB: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D9B1C; /* 0x006D9AAD: jne 0x6d9b1c */
L_006D9AAF:
    eax = MEM32(ebx + 0xC8); /* 0x006D9AAF: mov eax, dword ptr [ebx + 0xc8] */
    /* cmp eax, 0x18u */ /* 0x006D9AB5: cmp eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9AC8; /* 0x006D9AB8: je 0x6d9ac8 */
L_006D9ABA:
    /* cmp eax, 0x17u */ /* 0x006D9ABA: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9AC8; /* 0x006D9ABD: je 0x6d9ac8 */
L_006D9ABF:
    /* cmp eax, 0x16u */ /* 0x006D9ABF: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9BB6; /* 0x006D9AC2: jne 0x6d9bb6 */
L_006D9AC8:
    /* cmp MEM32(ebx + 0xD0), 0 */ /* 0x006D9AC8: cmp dword ptr [ebx + 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9BB6; /* 0x006D9ACF: jne 0x6d9bb6 */
L_006D9AD5:
    /* cmp MEM32(ebx + 0xD8), 1 */ /* 0x006D9AD5: cmp dword ptr [ebx + 0xd8], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9BB6; /* 0x006D9ADC: jne 0x6d9bb6 */
L_006D9AE2:
    /* test MEM8(ebx + 0xEC), 1 */ /* 0x006D9AE2: test byte ptr [ebx + 0xec], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xEC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9BB6; /* 0x006D9AE9: je 0x6d9bb6 */
L_006D9AEF:
    /* test MEM32(ebx + 0x25C), 0x200u */ /* 0x006D9AEF: test dword ptr [ebx + 0x25c], 0x200 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x25C)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D9BB6; /* 0x006D9AF9: jne 0x6d9bb6 */
L_006D9AFF:
    eax = MEM32(ebx + 0x108); /* 0x006D9AFF: mov eax, dword ptr [ebx + 0x108] */
    PUSH32(esp, 1); /* 0x006D9B05: push 1 */
    PUSH32(esp, eax); /* 0x006D9B07: push eax */
    ecx = MEM32(eax); /* 0x006D9B08: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x006D9B0A: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9B0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D9BB6; /* 0x006D9B0F: js 0x6d9bb6 */
L_006D9B15:
    MEM8(ebp + (-0x82)) = (uint8_t)(1); /* 0x006D9B15: mov byte ptr [ebp - 0x82], 1 */
L_006D9B1C:
    SET_LO8(eax, MEM8(ebp + (-0x81))); /* 0x006D9B1C: mov al, byte ptr [ebp - 0x81] */
    esi = ebx + 0x44; /* 0x006D9B22: lea esi, [ebx + 0x44] */
    PUSH32(esp, 0); /* 0x006D9B25: push 0 */
    ecx = 0x1Cu; /* 0x006D9B27: mov ecx, 0x1c */
    edi = ebp + (-0x100); /* 0x006D9B2C: lea edi, [ebp - 0x100] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D9B32: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(ebp + (-0x100)) = (uint8_t)(LO8(eax)); /* 0x006D9B34: mov byte ptr [ebp - 0x100], al */
    esi = ebp + (-0x100); /* 0x006D9B3A: lea esi, [ebp - 0x100] */
    PUSH32(esp, 0x006DC920u); /* 0x006D9B40: push 0x6dc920 */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D9B45: push dword ptr [ebx + 0xf8] */
    eax = ebp + (-0x80); /* 0x006D9B4B: lea eax, [ebp - 0x80] */
    ecx = 0x1Cu; /* 0x006D9B4E: mov ecx, 0x1c */
    MEM32(0x87CBC4) = eax; /* 0x006D9B53: mov dword ptr [0x87cbc4], eax */
    edi = ebp + (-0x78); /* 0x006D9B58: lea edi, [ebp - 0x78] */
    eax = ebx + 0x18; /* 0x006D9B5B: lea eax, [ebx + 0x18] */
    PUSH32(esp, 0x90u); /* 0x006D9B5E: push 0x90 */
    MEM32(ebp + (-0x7C)) = eax; /* 0x006D9B63: mov dword ptr [ebp - 0x7c], eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D9B66: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D9B68: push 0 */
    RECOMP_ICALL(MEM32(0x7CC7FC)); /* 0x006D9B6A: call dword ptr [0x7cc7fc] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x82)), 0 */ /* 0x006D9B70: cmp byte ptr [ebp - 0x82], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x82))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = eax; /* 0x006D9B77: mov esi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9B89; /* 0x006D9B79: je 0x6d9b89 */
L_006D9B7B:
    ecx = MEM32(ebx + 0x108); /* 0x006D9B7B: mov ecx, dword ptr [ebx + 0x108] */
    PUSH32(esp, 0); /* 0x006D9B81: push 0 */
    PUSH32(esp, ecx); /* 0x006D9B83: push ecx */
    edx = MEM32(ecx); /* 0x006D9B84: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x50)); /* 0x006D9B86: call dword ptr [edx + 0x50] */
    RECOMP_FLAGS_IN();
L_006D9B89:
    /* cmp esi, 1 */ /* 0x006D9B89: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9BEE; /* 0x006D9B8C: je 0x6d9bee */
L_006D9B8E:
    SET_LO8(eax, MEM8(ebp + (-0x81))); /* 0x006D9B8E: mov al, byte ptr [ebp - 0x81] */
    /* cmp LO8(eax), MEM8(ebx + 0xB4) */ /* 0x006D9B94: cmp al, byte ptr [ebx + 0xb4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebx + 0xB4)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9EAF; /* 0x006D9B9A: je 0x6d9eaf */
L_006D9BA0:
    ecx = ebx; /* 0x006D9BA0: mov ecx, ebx */
    RECOMP_CALL(sub_006D97E0); /* 0x006D9BA2: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9BA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9EAF; /* 0x006D9BA9: jns 0x6d9eaf */
L_006D9BAF:
    PUSH32(esp, 0x00801EF0u); /* 0x006D9BAF: push 0x801ef0 */
    goto L_006D9BCA; /* 0x006D9BB4: jmp 0x6d9bca */
L_006D9BB6:
    ecx = ebx; /* 0x006D9BB6: mov ecx, ebx */
    RECOMP_CALL(sub_006D97E0); /* 0x006D9BB8: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9BBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9B1C; /* 0x006D9BBF: jns 0x6d9b1c */
L_006D9BC5:
    PUSH32(esp, 0x00801F68u); /* 0x006D9BC5: push 0x801f68 */
L_006D9BCA:
    PUSH32(esp, 1); /* 0x006D9BCA: push 1 */
    PUSH32(esp, 0x8200000Cu); /* 0x006D9BCC: push 0x8200000c */
    ecx = ebx; /* 0x006D9BD1: mov ecx, ebx */
    RECOMP_CALL(sub_006DA670); /* 0x006D9BD3: call 0x6da670 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x006D9BD8: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x006D9BDD: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9BDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9BDF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D9BE0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D9BE3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D9BE5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D9BEA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9BEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9BED: ret  */
L_006D9BEE:
    ecx = 0x1Cu; /* 0x006D9BEE: mov ecx, 0x1c */
    esi = ebp + (-0x78); /* 0x006D9BF3: lea esi, [ebp - 0x78] */
    edi = ebx + 0x44; /* 0x006D9BF6: lea edi, [ebx + 0x44] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D9BF9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO8(eax, MEM8(ebx + 0x44)); /* 0x006D9BFB: mov al, byte ptr [ebx + 0x44] */
    ecx = ebx; /* 0x006D9BFE: mov ecx, ebx */
    MEM8(ebx + 0xB4) = (uint8_t)(LO8(eax)); /* 0x006D9C00: mov byte ptr [ebx + 0xb4], al */
    RECOMP_CALL(sub_006DA620); /* 0x006D9C06: call 0x6da620 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x006D9C0B: mov ecx, ebx */
    RECOMP_CALL(sub_006D8CC0); /* 0x006D9C0D: call 0x6d8cc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D9C12: mov esi, eax */
    /* test esi, esi */ /* 0x006D9C14: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9C9F; /* 0x006D9C16: jns 0x6d9c9f */
L_006D9C1C:
    /* cmp esi, 0x8876017Cu */ /* 0x006D9C1C: cmp esi, 0x8876017c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8876017Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x8200000Cu; /* 0x006D9C22: mov eax, 0x8200000c */
    if (CMP_NE(_flag_a, _flag_b)) { esi = eax; } /* 0x006D9C27: cmovne esi, eax */
    /* cmp MEM8(ebx + 0xB4), 0 */ /* 0x006D9C2A: cmp byte ptr [ebx + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9C7F; /* 0x006D9C31: jne 0x6d9c7f */
L_006D9C33:
    eax = MEM32(ebx); /* 0x006D9C33: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x006D9C35: mov ecx, ebx */
    MEM8(ebx + 0xB4) = (uint8_t)(1); /* 0x006D9C37: mov byte ptr [ebx + 0xb4], 1 */
    MEM8(ebx + 0x44) = (uint8_t)(1); /* 0x006D9C3E: mov byte ptr [ebx + 0x44], 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D9C42: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x268); /* 0x006D9C45: mov ecx, dword ptr [ebx + 0x268] */
    eax = MEM32(ebx + 0x270); /* 0x006D9C4B: mov eax, dword ptr [ebx + 0x270] */
    edx = MEM32(ebx + 0x264); /* 0x006D9C51: mov edx, dword ptr [ebx + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D9C57: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D9C59: push 0x40 */
    PUSH32(esp, eax); /* 0x006D9C5B: push eax */
    eax = MEM32(ebx + 0x26C); /* 0x006D9C5C: mov eax, dword ptr [ebx + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D9C62: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D9C64: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9C65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx + 0x4), LO8(eax) */ /* 0x006D9C67: cmp byte ptr [ebx + 4], al */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D9C6A: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9C6B: setne al */
    PUSH32(esp, edx); /* 0x006D9C6E: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D9C6F: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D9C72: push eax */
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x006D9C73: push dword ptr [ebx + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D9C79: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D9C7F:
    PUSH32(esp, 0x008020F0u); /* 0x006D9C7F: push 0x8020f0 */
    PUSH32(esp, 1); /* 0x006D9C84: push 1 */
    PUSH32(esp, esi); /* 0x006D9C86: push esi */
    ecx = ebx; /* 0x006D9C87: mov ecx, ebx */
    RECOMP_CALL(sub_006DA670); /* 0x006D9C89: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D9C8E: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9C8F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9C90: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D9C91: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D9C94: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D9C96: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D9C9B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9C9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9C9E: ret  */
L_006D9C9F:
    /* cmp MEM8(ebx + 0xBE), 0 */ /* 0x006D9C9F: cmp byte ptr [ebx + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9EAF; /* 0x006D9CA6: jne 0x6d9eaf */
L_006D9CAC:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D9CAC: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC8F8); /* 0x006D9CB3: mov esi, dword ptr [0x7cc8f8] */
    edi = MEM32(0x7CC100); /* 0x006D9CB9: mov edi, dword ptr [0x7cc100] */
    MEM8(ebx + 0xBF) = (uint8_t)(1); /* 0x006D9CBF: mov byte ptr [ebx + 0xbf], 1 */
    ebx = MEM32(0x7CC104); /* 0x006D9CC6: mov ebx, dword ptr [0x7cc104] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9D04; /* 0x006D9CCC: jne 0x6d9d04 */
L_006D9CCE:
    eax = ebp + (-0x90); /* 0x006D9CCE: lea eax, [ebp - 0x90] */
    MEM32(0x9280A0) = 1; /* 0x006D9CD4: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D9CDE: push eax */
    RECOMP_ICALL(ebx); /* 0x006D9CDF: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D9CE1: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D9CE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9D66; /* 0x006D9CE8: je 0x6d9d66 */
L_006D9CEA:
    ecx = MEM32(ebp + (-0x90)); /* 0x006D9CEA: mov ecx, dword ptr [ebp - 0x90] */
    MEM32(0x928098) = ecx; /* 0x006D9CF0: mov dword ptr [0x928098], ecx */
    ecx = MEM32(ebp + (-0x8C)); /* 0x006D9CF6: mov ecx, dword ptr [ebp - 0x8c] */
    MEM32(0x92809C) = ecx; /* 0x006D9CFC: mov dword ptr [0x92809c], ecx */
    goto L_006D9D09; /* 0x006D9D02: jmp 0x6d9d09 */
L_006D9D04:
    eax = MEM32(0x928070); /* 0x006D9D04: mov eax, dword ptr [0x928070] */
L_006D9D09:
    /* test eax, eax */ /* 0x006D9D09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9D66; /* 0x006D9D0B: je 0x6d9d66 */
L_006D9D0D:
    eax = ebp + (-0x90); /* 0x006D9D0D: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x006D9D13: push eax */
    RECOMP_ICALL(edi); /* 0x006D9D14: call edi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9D16: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x8C)); /* 0x006D9D1D: mov edx, dword ptr [ebp - 0x8c] */
    esi = MEM32(ebp + (-0x90)); /* 0x006D9D23: mov esi, dword ptr [ebp - 0x90] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9D47; /* 0x006D9D29: je 0x6d9d47 */
L_006D9D2B:
    ecx = esi; /* 0x006D9D2B: mov ecx, esi */
    eax = edx; /* 0x006D9D2D: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x928080));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x928080); /* 0x006D9D2F: sub ecx, dword ptr [0x928080] */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(0x928084), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D9D35: sbb eax, dword ptr [0x928084] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x928090)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928090) = MEM32(0x928090) + ecx; /* 0x006D9D3B: add dword ptr [0x928090], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(0x928094), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D9D41: adc dword ptr [0x928094], eax */
      MEM32(0x928094) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_006D9D47:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D9D47: xorps xmm0, xmm0 */
    MEM32(0x928088) = esi; /* 0x006D9D4A: mov dword ptr [0x928088], esi */
    esi = MEM32(0x7CC8F8); /* 0x006D9D50: mov esi, dword ptr [0x7cc8f8] */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006D9D56: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x92808C) = edx; /* 0x006D9D5E: mov dword ptr [0x92808c], edx */
    goto L_006D9DBC; /* 0x006D9D64: jmp 0x6d9dbc */
L_006D9D66:
    RECOMP_ICALL(esi); /* 0x006D9D66: call esi */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006D9D68: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006D9D6C: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D9D70: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D9D70: shr eax, 0x1f */
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9D73: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006D9D7A: addsd xmm1, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006D9D83: mulsd xmm1, qword ptr [0x808c60] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9DA9; /* 0x006D9D8B: je 0x6d9da9 */
L_006D9D8D:
    _xmm[0] = _xmm[1]; /* 0x006D9D8D: movapd xmm0, xmm1 */
    { double _s = sse_f64(MEM64(0x928060)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006D9D91: subsd xmm0, qword ptr [0x928060] */
    { double _s = sse_f64(MEM64(0x928068)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D9D99: addsd xmm0, qword ptr [0x928068] */
    MEM64(0x928068) = _xmm[0].u64[0]; /* 0x006D9DA1: movsd qword ptr [0x928068], xmm0 */
L_006D9DA9:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D9DA9: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006D9DAC: movsd qword ptr [0x928078], xmm1 */
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D9DB4: movsd qword ptr [0x928060], xmm0 */
L_006D9DBC:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006D9DBC: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x866088) = 0; /* 0x006D9DC3: mov dword ptr [0x866088], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9E05; /* 0x006D9DCD: jne 0x6d9e05 */
L_006D9DCF:
    eax = ebp + (-0x90); /* 0x006D9DCF: lea eax, [ebp - 0x90] */
    MEM32(0x9280A0) = 1; /* 0x006D9DD5: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006D9DDF: push eax */
    RECOMP_ICALL(ebx); /* 0x006D9DE0: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006D9DE2: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006D9DE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9E58; /* 0x006D9DE9: je 0x6d9e58 */
L_006D9DEB:
    ecx = MEM32(ebp + (-0x90)); /* 0x006D9DEB: mov ecx, dword ptr [ebp - 0x90] */
    MEM32(0x928098) = ecx; /* 0x006D9DF1: mov dword ptr [0x928098], ecx */
    ecx = MEM32(ebp + (-0x8C)); /* 0x006D9DF7: mov ecx, dword ptr [ebp - 0x8c] */
    MEM32(0x92809C) = ecx; /* 0x006D9DFD: mov dword ptr [0x92809c], ecx */
    goto L_006D9E0A; /* 0x006D9E03: jmp 0x6d9e0a */
L_006D9E05:
    eax = MEM32(0x928070); /* 0x006D9E05: mov eax, dword ptr [0x928070] */
L_006D9E0A:
    /* test eax, eax */ /* 0x006D9E0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9E58; /* 0x006D9E0C: je 0x6d9e58 */
L_006D9E0E:
    ecx = MEM32(0x928080); /* 0x006D9E0E: mov ecx, dword ptr [0x928080] */
    eax = ecx; /* 0x006D9E14: mov eax, ecx */
    edx = MEM32(0x928084); /* 0x006D9E16: mov edx, dword ptr [0x928084] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x006D9E1C: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D9E35; /* 0x006D9E1E: jne 0x6d9e35 */
L_006D9E20:
    eax = ebp + (-0x90); /* 0x006D9E20: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x006D9E26: push eax */
    RECOMP_ICALL(edi); /* 0x006D9E27: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8C)); /* 0x006D9E29: mov edx, dword ptr [ebp - 0x8c] */
    ecx = MEM32(ebp + (-0x90)); /* 0x006D9E2F: mov ecx, dword ptr [ebp - 0x90] */
L_006D9E35:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9E35: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9EAF; /* 0x006D9E3C: jne 0x6d9eaf */
L_006D9E3E:
    MEM32(0x928080) = ecx; /* 0x006D9E3E: mov dword ptr [0x928080], ecx */
    MEM32(0x928084) = edx; /* 0x006D9E44: mov dword ptr [0x928084], edx */
    MEM32(0x928088) = ecx; /* 0x006D9E4A: mov dword ptr [0x928088], ecx */
    MEM32(0x92808C) = edx; /* 0x006D9E50: mov dword ptr [0x92808c], edx */
    goto L_006D9EA5; /* 0x006D9E56: jmp 0x6d9ea5 */
L_006D9E58:
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006D9E58: movsd xmm0, qword ptr [0x928060] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808B20))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006D9E60: ucomisd xmm0, qword ptr [0x808b20] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006D9E68: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006D9E69: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006D9E8C; /* 0x006D9E6C: jp 0x6d9e8c */
L_006D9E6E:
    RECOMP_ICALL(esi); /* 0x006D9E6E: call esi */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D9E70: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006D9E74: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D9E78: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D9E78: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D9E7B: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006D9E84: mulsd xmm0, qword ptr [0x808c60] */
L_006D9E8C:
    /* cmp MEM32(0x866088), 0 */ /* 0x006D9E8C: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9EAF; /* 0x006D9E93: jne 0x6d9eaf */
L_006D9E95:
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006D9E95: movsd qword ptr [0x928060], xmm0 */
    MEM64(0x928078) = _xmm[0].u64[0]; /* 0x006D9E9D: movsd qword ptr [0x928078], xmm0 */
L_006D9EA5:
    MEM32(0x866088) = 1; /* 0x006D9EA5: mov dword ptr [0x866088], 1 */
L_006D9EAF:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D9EAF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9EB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D9EB4: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9EB5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D9EB6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D9EB8: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D9EB9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D9EBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9EC1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D9ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D9ED0u);

L_006D9ED0:
    PUSH32(esp, ebp); /* 0x006D9ED0: push ebp */
    ebp = esp; /* 0x006D9ED1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D9ED3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006D9ED6: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D9ED9: push ebx */
    PUSH32(esp, esi); /* 0x006D9EDA: push esi */
    PUSH32(esp, edi); /* 0x006D9EDB: push edi */
    PUSH32(esp, 0x71u); /* 0x006D9EDC: push 0x71 */
    PUSH32(esp, 0); /* 0x006D9EDE: push 0 */
    esi = ecx; /* 0x006D9EE0: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC838)); /* 0x006D9EE2: call dword ptr [0x7cc838] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D9EE8: push 0 */
    PUSH32(esp, 0); /* 0x006D9EEA: push 0 */
    PUSH32(esp, 0); /* 0x006D9EEC: push 0 */
    edi = eax; /* 0x006D9EEE: mov edi, eax */
    MEM32(esp + 0x1C) = 0; /* 0x006D9EF0: mov dword ptr [esp + 0x1c], 0 */
    PUSH32(esp, 0); /* 0x006D9EF8: push 0 */
    eax = esp + 0x1C; /* 0x006D9EFA: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x006D9EFE: push eax */
    RECOMP_ICALL(MEM32(0x7CC874)); /* 0x006D9EFF: call dword ptr [0x7cc874] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x10), 0x12u */ /* 0x006D9F05: cmp dword ptr [esp + 0x10], 0x12 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9FC6; /* 0x006D9F0A: je 0x6d9fc6 */
L_006D9F10:
    ebx = MEM32(0x7CC134); /* 0x006D9F10: mov ebx, dword ptr [0x7cc134] */
    goto L_006D9F20; /* 0x006D9F16: jmp 0x6d9f20 */
L_006D9F20:
    /* cmp MEM8(esi + 0xB5), 0 */ /* 0x006D9F20: cmp byte ptr [esi + 0xb5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esp + 0xC; /* 0x006D9F27: lea eax, [esp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9F3E; /* 0x006D9F2B: je 0x6d9f3e */
L_006D9F2D:
    PUSH32(esp, 1); /* 0x006D9F2D: push 1 */
    PUSH32(esp, 0); /* 0x006D9F2F: push 0 */
    PUSH32(esp, 0); /* 0x006D9F31: push 0 */
    PUSH32(esp, 0); /* 0x006D9F33: push 0 */
    PUSH32(esp, eax); /* 0x006D9F35: push eax */
    RECOMP_ICALL(MEM32(0x7CC874)); /* 0x006D9F36: call dword ptr [0x7cc874] */
    RECOMP_FLAGS_IN();
    goto L_006D9F4B; /* 0x006D9F3C: jmp 0x6d9f4b */
L_006D9F3E:
    PUSH32(esp, 0); /* 0x006D9F3E: push 0 */
    PUSH32(esp, 0); /* 0x006D9F40: push 0 */
    PUSH32(esp, 0); /* 0x006D9F42: push 0 */
    PUSH32(esp, eax); /* 0x006D9F44: push eax */
    RECOMP_ICALL(MEM32(0x7CC88C)); /* 0x006D9F45: call dword ptr [0x7cc88c] */
    RECOMP_FLAGS_IN();
L_006D9F4B:
    /* test eax, eax */ /* 0x006D9F4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9F4D: setne al */
    /* test LO8(eax), LO8(eax) */ /* 0x006D9F50: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9F8B; /* 0x006D9F52: je 0x6d9f8b */
L_006D9F54:
    /* test edi, edi */ /* 0x006D9F54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9F73; /* 0x006D9F56: je 0x6d9f73 */
L_006D9F58:
    eax = MEM32(esi + 0xF8); /* 0x006D9F58: mov eax, dword ptr [esi + 0xf8] */
    /* test eax, eax */ /* 0x006D9F5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9F73; /* 0x006D9F60: je 0x6d9f73 */
L_006D9F62:
    ecx = esp + 0xC; /* 0x006D9F62: lea ecx, [esp + 0xc] */
    PUSH32(esp, ecx); /* 0x006D9F66: push ecx */
    PUSH32(esp, edi); /* 0x006D9F67: push edi */
    PUSH32(esp, eax); /* 0x006D9F68: push eax */
    RECOMP_ICALL(MEM32(0x7CC81C)); /* 0x006D9F69: call dword ptr [0x7cc81c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9F6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D9FBB; /* 0x006D9F71: jne 0x6d9fbb */
L_006D9F73:
    eax = esp + 0xC; /* 0x006D9F73: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006D9F77: push eax */
    RECOMP_ICALL(MEM32(0x7CC8A0)); /* 0x006D9F78: call dword ptr [0x7cc8a0] */
    RECOMP_FLAGS_IN();
    eax = esp + 0xC; /* 0x006D9F7E: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x006D9F82: push eax */
    RECOMP_ICALL(MEM32(0x7CC704)); /* 0x006D9F83: call dword ptr [0x7cc704] */
    RECOMP_FLAGS_IN();
    goto L_006D9FBB; /* 0x006D9F89: jmp 0x6d9fbb */
L_006D9F8B:
    /* cmp MEM8(esi + 0xB6), 0 */ /* 0x006D9F8B: cmp byte ptr [esi + 0xb6], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB6)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9F98; /* 0x006D9F92: je 0x6d9f98 */
L_006D9F94:
    PUSH32(esp, 0x64u); /* 0x006D9F94: push 0x64 */
    RECOMP_ICALL(ebx); /* 0x006D9F96: call ebx */
    RECOMP_FLAGS_IN();
L_006D9F98:
    /* cmp MEM8(esi + 0xB5), 0 */ /* 0x006D9F98: cmp byte ptr [esi + 0xb5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9FBB; /* 0x006D9F9F: je 0x6d9fbb */
L_006D9FA1:
    ecx = esi; /* 0x006D9FA1: mov ecx, esi */
    RECOMP_CALL(sub_006D9FE0); /* 0x006D9FA3: call 0x6d9fe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9FA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D9FBB; /* 0x006D9FAA: jns 0x6d9fbb */
L_006D9FAC:
    PUSH32(esp, 0x00802098u); /* 0x006D9FAC: push 0x802098 */
    PUSH32(esp, 1); /* 0x006D9FB1: push 1 */
    PUSH32(esp, eax); /* 0x006D9FB3: push eax */
    ecx = esi; /* 0x006D9FB4: mov ecx, esi */
    RECOMP_CALL(sub_006DA670); /* 0x006D9FB6: call 0x6da670 */
    RECOMP_FLAGS_IN();
L_006D9FBB:
    /* cmp MEM32(esp + 0x10), 0x12u */ /* 0x006D9FBB: cmp dword ptr [esp + 0x10], 0x12 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9F20; /* 0x006D9FC0: jne 0x6d9f20 */
L_006D9FC6:
    /* test edi, edi */ /* 0x006D9FC6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D9FD1; /* 0x006D9FC8: je 0x6d9fd1 */
L_006D9FCA:
    PUSH32(esp, edi); /* 0x006D9FCA: push edi */
    RECOMP_ICALL(MEM32(0x7CC820)); /* 0x006D9FCB: call dword ptr [0x7cc820] */
    RECOMP_FLAGS_IN();
L_006D9FD1:
    eax = MEM32(esp + 0x14); /* 0x006D9FD1: mov eax, dword ptr [esp + 0x14] */
    edi = POP32_VAL(esp); /* 0x006D9FD5: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9FD6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9FD7: pop ebx */
    esp = ebp; /* 0x006D9FD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9FDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9FDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D9FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D9FE0u);

L_006D9FE0:
    PUSH32(esp, ebp); /* 0x006D9FE0: push ebp */
    ebp = esp; /* 0x006D9FE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D9FE3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006D9FE6: push esi */
    esi = ecx; /* 0x006D9FE7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D9FE9: push edi */
    eax = MEM32(esi + 0x108); /* 0x006D9FEA: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, eax); /* 0x006D9FF0: push eax */
    edx = MEM32(eax); /* 0x006D9FF1: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x006D9FF3: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D9FF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DA05A; /* 0x006D9FF8: jns 0x6da05a */
L_006D9FFA:
    /* cmp eax, 0x88760869u */ /* 0x006D9FFA: cmp eax, 0x88760869 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x88760869u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA063; /* 0x006D9FFF: jne 0x6da063 */
L_006DA001:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006DA001: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA036; /* 0x006DA008: je 0x6da036 */
L_006DA00A:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006DA00A: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA015; /* 0x006DA00E: je 0x6da015 */
L_006DA010:
    edi = MEM32(esi + 0x48); /* 0x006DA010: mov edi, dword ptr [esi + 0x48] */
    goto L_006DA01B; /* 0x006DA013: jmp 0x6da01b */
L_006DA015:
    edi = MEM32(esi + 0x84); /* 0x006DA015: mov edi, dword ptr [esi + 0x84] */
L_006DA01B:
    ecx = MEM32(esi + 0x104); /* 0x006DA01B: mov ecx, dword ptr [esi + 0x104] */
    eax = esi + 0x54; /* 0x006DA021: lea eax, [esi + 0x54] */
    PUSH32(esp, eax); /* 0x006DA024: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x006DA025: push dword ptr [edi] */
    edx = MEM32(ecx); /* 0x006DA027: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DA029: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x006DA02A: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x60); /* 0x006DA02D: mov eax, dword ptr [esi + 0x60] */
    MEM32(esi + 0xC8) = eax; /* 0x006DA030: mov dword ptr [esi + 0xc8], eax */
L_006DA036:
    ecx = esi; /* 0x006DA036: mov ecx, esi */
    RECOMP_CALL(sub_006D93B0); /* 0x006DA038: call 0x6d93b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DA03D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DA063; /* 0x006DA03F: jns 0x6da063 */
L_006DA041:
    PUSH32(esp, 0x00802030u); /* 0x006DA041: push 0x802030 */
    PUSH32(esp, 1); /* 0x006DA046: push 1 */
    PUSH32(esp, 0x8200000Cu); /* 0x006DA048: push 0x8200000c */
    ecx = esi; /* 0x006DA04D: mov ecx, esi */
    RECOMP_CALL(sub_006DA670); /* 0x006DA04F: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006DA054: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA055: pop esi */
    esp = ebp; /* 0x006DA056: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA058: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DA059: ret  */
L_006DA05A:
    MEM8(esi + 0xB6) = (uint8_t)(0); /* 0x006DA05A: mov byte ptr [esi + 0xb6], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA061: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA063:
    edi = POP32_VAL(esp); /* 0x006DA063: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA064: pop esi */
    esp = ebp; /* 0x006DA065: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA067: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DA068: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DA070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DA070u);

L_006DA070:
    PUSH32(esp, ebp); /* 0x006DA070: push ebp */
    ebp = esp; /* 0x006DA071: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006DA073: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1A0u; /* 0x006DA076: sub esp, 0x1a0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DA07C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006DA081: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x19C) = eax; /* 0x006DA083: mov dword ptr [esp + 0x19c], eax */
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006DA08A: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006DA091: push esi */
    PUSH32(esp, edi); /* 0x006DA092: push edi */
    esi = ecx; /* 0x006DA093: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA0CB; /* 0x006DA095: jne 0x6da0cb */
L_006DA097:
    eax = esp + 0x8; /* 0x006DA097: lea eax, [esp + 8] */
    MEM32(0x9280A0) = 1; /* 0x006DA09B: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, eax); /* 0x006DA0A5: push eax */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x006DA0A6: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    MEM32(0x928070) = eax; /* 0x006DA0AC: mov dword ptr [0x928070], eax */
    /* test eax, eax */ /* 0x006DA0B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA113; /* 0x006DA0B3: je 0x6da113 */
L_006DA0B5:
    ecx = MEM32(esp + 0x8); /* 0x006DA0B5: mov ecx, dword ptr [esp + 8] */
    MEM32(0x928098) = ecx; /* 0x006DA0B9: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0xC); /* 0x006DA0BF: mov ecx, dword ptr [esp + 0xc] */
    MEM32(0x92809C) = ecx; /* 0x006DA0C3: mov dword ptr [0x92809c], ecx */
    goto L_006DA0D0; /* 0x006DA0C9: jmp 0x6da0d0 */
L_006DA0CB:
    eax = MEM32(0x928070); /* 0x006DA0CB: mov eax, dword ptr [0x928070] */
L_006DA0D0:
    /* test eax, eax */ /* 0x006DA0D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA113; /* 0x006DA0D2: je 0x6da113 */
L_006DA0D4:
    eax = esp + 0x8; /* 0x006DA0D4: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x006DA0D8: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006DA0D9: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0xC); /* 0x006DA0DF: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x8); /* 0x006DA0E3: mov ecx, dword ptr [esp + 8] */
    RECOMP_CALL(sub_0078074F); /* 0x006DA0E7: call 0x78074f */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x92809C); /* 0x006DA0EC: mov edx, dword ptr [0x92809c] */
    ecx = MEM32(0x928098); /* 0x006DA0F2: mov ecx, dword ptr [0x928098] */
    MEM64(esp + 0x8) = _xmm[0].u64[0]; /* 0x006DA0F8: movsd qword ptr [esp + 8], xmm0 */
    RECOMP_CALL(sub_0078074F); /* 0x006DA0FE: call 0x78074f */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(esp + 0x8); _xmm[1].u64[1] = 0; /* 0x006DA103: movsd xmm1, qword ptr [esp + 8] */
    { double _s = _xmm[0].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] / _s); } /* 0x006DA109: divsd xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; _xmm[2].f32[0] = (float)_s.f64[0]; _xmm[2].f32[1] = (float)_s.f64[1]; _xmm[2].u64[1] = 0; } /* 0x006DA10D: cvtpd2ps xmm2, xmm1 */
    goto L_006DA139; /* 0x006DA111: jmp 0x6da139 */
L_006DA113:
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x006DA113: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DA119: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DA11D: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DA121: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DA121: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DA124: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006DA12D: mulsd xmm0, qword ptr [0x808c60] */
    { xmm_t _s = _xmm[0]; _xmm[2].f32[0] = (float)_s.f64[0]; _xmm[2].f32[1] = (float)_s.f64[1]; _xmm[2].u64[1] = 0; } /* 0x006DA135: cvtpd2ps xmm2, xmm0 */
L_006DA139:
    eax = MEM32(0x9280AC); /* 0x006DA139: mov eax, dword ptr [0x9280ac] */
    _xmm[1] = _xmm[2]; /* 0x006DA13E: movaps xmm1, xmm2 */
    { float _s = sse_f32(MEM32(0x9280A8)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006DA141: subss xmm1, dword ptr [0x9280a8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006DA149: inc eax */
    _flag_k = FK_INC;
    MEM32(0x9280AC) = eax; /* 0x006DA14A: mov dword ptr [0x9280ac], eax */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(0x808CB0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006DA14F: comiss xmm1, dword ptr [0x808cb0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_006DA327; /* 0x006DA156: jbe 0x6da327 */
L_006DA15C:
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DA15C: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DA160: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DA164: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DA164: shr eax, 0x1f */
    MEM32(0x9280AC) = 0; /* 0x006DA167: mov dword ptr [0x9280ac], 0 */
    MEM32(0x9280A8) = _xmm[2].u32[0]; /* 0x006DA171: movss dword ptr [0x9280a8], xmm2 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DA179: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = esi + 0x54; /* 0x006DA182: lea eax, [esi + 0x54] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DA185: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006DA189: divss xmm0, xmm1 */
    MEM32(esi + 0x290) = _xmm[0].u32[0]; /* 0x006DA18D: movss dword ptr [esi + 0x290], xmm0 */
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006DA195: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA1A1; /* 0x006DA199: jne 0x6da1a1 */
L_006DA19B:
    eax = esi + 0x90; /* 0x006DA19B: lea eax, [esi + 0x90] */
L_006DA1A1:
    _xmm[0] = xmm_ld(eax); /* 0x006DA1A1: movdqu xmm0, xmmword ptr [eax] */
    edi = MEM32(0x7CC570); /* 0x006DA1A5: mov edi, dword ptr [0x7cc570] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006DA1AB: psrldq xmm0, 0xc */
    ecx = _xmm[0].u32[0]; /* 0x006DA1B0: movd ecx, xmm0 */
    /* cmp ecx, MEM32(esi + 0x23C) */ /* 0x006DA1B4: cmp ecx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x23C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA1D6; /* 0x006DA1BA: jne 0x6da1d6 */
L_006DA1BC:
    PUSH32(esp, 0x64u); /* 0x006DA1BC: push 0x64 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006DA1BE: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006DC470); /* 0x006DA1C0: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DA1C5: push eax */
    eax = esp + 0xE0; /* 0x006DA1C6: lea eax, [esp + 0xe0] */
    PUSH32(esp, eax); /* 0x006DA1CD: push eax */
    RECOMP_ICALL(MEM32(0x7CC138)); /* 0x006DA1CE: call dword ptr [0x7cc138] */
    RECOMP_FLAGS_IN();
    goto L_006DA200; /* 0x006DA1D4: jmp 0x6da200 */
L_006DA1D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006DA1D6: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006DC470); /* 0x006DA1D8: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x23C); /* 0x006DA1DD: mov ecx, dword ptr [esi + 0x23c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006DA1E3: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, eax); /* 0x006DA1E5: push eax */
    RECOMP_CALL(sub_006DC470); /* 0x006DA1E6: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DA1EB: push eax */
    PUSH32(esp, 0x00801FFCu); /* 0x006DA1EC: push 0x801ffc */
    eax = esp + 0xE4; /* 0x006DA1F1: lea eax, [esp + 0xe4] */
    PUSH32(esp, 0x64u); /* 0x006DA1F8: push 0x64 */
    PUSH32(esp, eax); /* 0x006DA1FA: push eax */
    RECOMP_ICALL(edi); /* 0x006DA1FB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006DA1FD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_006DA200:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA200: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x19E) = (uint16_t)(LO16(eax)); /* 0x006DA202: mov word ptr [esp + 0x19e], ax */
    /* cmp MEM8(esi + 0x3C), LO8(eax) */ /* 0x006DA20A: cmp byte ptr [esi + 0x3c], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA244; /* 0x006DA20D: je 0x6da244 */
L_006DA20F:
    /* cmp MEM8(esi + 0x44), LO8(eax) */ /* 0x006DA20F: cmp byte ptr [esi + 0x44], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA219; /* 0x006DA212: je 0x6da219 */
L_006DA214:
    ecx = MEM32(esi + 0x64); /* 0x006DA214: mov ecx, dword ptr [esi + 0x64] */
    goto L_006DA21F; /* 0x006DA217: jmp 0x6da21f */
L_006DA219:
    ecx = MEM32(esi + 0xA0); /* 0x006DA219: mov ecx, dword ptr [esi + 0xa0] */
L_006DA21F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006DA21F: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006DC470); /* 0x006DA221: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DA226: push eax */
    PUSH32(esp, 0x00801E50u); /* 0x006DA227: push 0x801e50 */
    eax = esp + 0x18; /* 0x006DA22C: lea eax, [esp + 0x18] */
    PUSH32(esp, 0x64u); /* 0x006DA230: push 0x64 */
    PUSH32(esp, eax); /* 0x006DA232: push eax */
    RECOMP_ICALL(edi); /* 0x006DA233: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006DA235: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA238: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0xD6) = (uint16_t)(LO16(eax)); /* 0x006DA23A: mov word ptr [esp + 0xd6], ax */
    goto L_006DA24B; /* 0x006DA242: jmp 0x6da24b */
L_006DA244:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA244: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x006DA246: mov word ptr [esp + 0x10], ax */
L_006DA24B:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006DA24B: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA256; /* 0x006DA24F: je 0x6da256 */
L_006DA251:
    eax = MEM32(esi + 0x68); /* 0x006DA251: mov eax, dword ptr [esi + 0x68] */
    goto L_006DA25C; /* 0x006DA254: jmp 0x6da25c */
L_006DA256:
    eax = MEM32(esi + 0xA4); /* 0x006DA256: mov eax, dword ptr [esi + 0xa4] */
L_006DA25C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006DA25C: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xFu */ /* 0x006DA25D: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DA2D9; /* 0x006DA260: ja 0x6da2d9 */
L_006DA262:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6DA33C)); goto _ljump; }
L_006DA269:
    eax = 0x00801E18u; /* 0x006DA269: mov eax, 0x801e18 */
    goto L_006DA2DE; /* 0x006DA26E: jmp 0x6da2de */
L_006DA270:
    eax = 0x00801DF4u; /* 0x006DA270: mov eax, 0x801df4 */
    goto L_006DA2DE; /* 0x006DA275: jmp 0x6da2de */
L_006DA277:
    eax = 0x00801DD0u; /* 0x006DA277: mov eax, 0x801dd0 */
    goto L_006DA2DE; /* 0x006DA27C: jmp 0x6da2de */
L_006DA27E:
    eax = 0x00801EC8u; /* 0x006DA27E: mov eax, 0x801ec8 */
    goto L_006DA2DE; /* 0x006DA283: jmp 0x6da2de */
L_006DA285:
    eax = 0x00801EA4u; /* 0x006DA285: mov eax, 0x801ea4 */
    goto L_006DA2DE; /* 0x006DA28A: jmp 0x6da2de */
L_006DA28C:
    eax = 0x00801E80u; /* 0x006DA28C: mov eax, 0x801e80 */
    goto L_006DA2DE; /* 0x006DA291: jmp 0x6da2de */
L_006DA293:
    eax = 0x00801E5Cu; /* 0x006DA293: mov eax, 0x801e5c */
    goto L_006DA2DE; /* 0x006DA298: jmp 0x6da2de */
L_006DA29A:
    eax = 0x0080278Cu; /* 0x006DA29A: mov eax, 0x80278c */
    goto L_006DA2DE; /* 0x006DA29F: jmp 0x6da2de */
L_006DA2A1:
    eax = 0x00802768u; /* 0x006DA2A1: mov eax, 0x802768 */
    goto L_006DA2DE; /* 0x006DA2A6: jmp 0x6da2de */
L_006DA2A8:
    eax = 0x00802740u; /* 0x006DA2A8: mov eax, 0x802740 */
    goto L_006DA2DE; /* 0x006DA2AD: jmp 0x6da2de */
L_006DA2AF:
    eax = 0x00802718u; /* 0x006DA2AF: mov eax, 0x802718 */
    goto L_006DA2DE; /* 0x006DA2B4: jmp 0x6da2de */
L_006DA2B6:
    eax = 0x00802828u; /* 0x006DA2B6: mov eax, 0x802828 */
    goto L_006DA2DE; /* 0x006DA2BB: jmp 0x6da2de */
L_006DA2BD:
    eax = 0x00802800u; /* 0x006DA2BD: mov eax, 0x802800 */
    goto L_006DA2DE; /* 0x006DA2C2: jmp 0x6da2de */
L_006DA2C4:
    eax = 0x008027D8u; /* 0x006DA2C4: mov eax, 0x8027d8 */
    goto L_006DA2DE; /* 0x006DA2C9: jmp 0x6da2de */
L_006DA2CB:
    eax = 0x008027B0u; /* 0x006DA2CB: mov eax, 0x8027b0 */
    goto L_006DA2DE; /* 0x006DA2D0: jmp 0x6da2de */
L_006DA2D2:
    eax = 0x008023C4u; /* 0x006DA2D2: mov eax, 0x8023c4 */
    goto L_006DA2DE; /* 0x006DA2D7: jmp 0x6da2de */
L_006DA2D9:
    eax = 0x007F533Cu; /* 0x006DA2D9: mov eax, 0x7f533c */
L_006DA2DE:
    _xmm[0].u64[0] = MEM32(esi + 0x290); _xmm[0].u64[1] = 0; /* 0x006DA2DE: movss xmm0, dword ptr [esi + 0x290] */
    PUSH32(esp, eax); /* 0x006DA2E6: push eax */
    eax = esp + 0x14; /* 0x006DA2E7: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x006DA2EB: push eax */
    eax = esp + 0xE0; /* 0x006DA2EC: lea eax, [esp + 0xe0] */
    PUSH32(esp, eax); /* 0x006DA2F3: push eax */
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x006DA2F4: push dword ptr [esi + 0x258] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DA2FA: cvtps2pd xmm0, xmm0 */
    eax = esi + 0x348; /* 0x006DA2FD: lea eax, [esi + 0x348] */
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x006DA303: push dword ptr [esi + 0x254] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006DA309: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006DA30C: movsd qword ptr [esp], xmm0 */
    PUSH32(esp, 0x00802390u); /* 0x006DA311: push 0x802390 */
    PUSH32(esp, 0x5Au); /* 0x006DA316: push 0x5a */
    PUSH32(esp, eax); /* 0x006DA318: push eax */
    RECOMP_ICALL(edi); /* 0x006DA319: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x006DA31B: add esp, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA31E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x3FA) = (uint16_t)(LO16(eax)); /* 0x006DA320: mov word ptr [esi + 0x3fa], ax */
L_006DA327:
    ecx = MEM32(esp + 0x1A4); /* 0x006DA327: mov ecx, dword ptr [esp + 0x1a4] */
    edi = POP32_VAL(esp); /* 0x006DA32E: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA32F: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DA330: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DA332: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DA337: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA339: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DA33A: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006DA269u: goto L_006DA269;
      case 0x006DA270u: goto L_006DA270;
      case 0x006DA277u: goto L_006DA277;
      case 0x006DA27Eu: goto L_006DA27E;
      case 0x006DA285u: goto L_006DA285;
      case 0x006DA28Cu: goto L_006DA28C;
      case 0x006DA293u: goto L_006DA293;
      case 0x006DA29Au: goto L_006DA29A;
      case 0x006DA2A1u: goto L_006DA2A1;
      case 0x006DA2A8u: goto L_006DA2A8;
      case 0x006DA2AFu: goto L_006DA2AF;
      case 0x006DA2B6u: goto L_006DA2B6;
      case 0x006DA2BDu: goto L_006DA2BD;
      case 0x006DA2C4u: goto L_006DA2C4;
      case 0x006DA2CBu: goto L_006DA2CB;
      case 0x006DA2D2u: goto L_006DA2D2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006DA380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DA380u);

L_006DA380:
    PUSH32(esp, ebp); /* 0x006DA380: push ebp */
    ebp = esp; /* 0x006DA381: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006DA383: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x006DA386: mov dl, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA389: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006DA38B: sub esp, 8 */
    _flag_k = FK_CMP;
    /* test LO8(edx), LO8(edx) */ /* 0x006DA38E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006DA390: setne al */
    PUSH32(esp, esi); /* 0x006DA393: push esi */
    esi = MEM32(0x9280A4); /* 0x006DA394: mov esi, dword ptr [0x9280a4] */
    eax = eax * 2 + (-0x1); /* 0x006DA39A: lea eax, [eax*2 - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006DA3A1: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006DA3A3: push edi */
    edi = ecx; /* 0x006DA3A4: mov edi, ecx */
    MEM32(0x9280A4) = esi; /* 0x006DA3A6: mov dword ptr [0x9280a4], esi */
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) ? 1 : 0); /* 0x006DA3AC: sete al */
    MEM8(edi + 0xB5) = (uint8_t)(LO8(eax)); /* 0x006DA3AF: mov byte ptr [edi + 0xb5], al */
    eax = MEM32(0x7CC104); /* 0x006DA3B5: mov eax, dword ptr [0x7cc104] */
    /* test LO8(edx), LO8(edx) */ /* 0x006DA3BA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA4E9; /* 0x006DA3BC: je 0x6da4e9 */
L_006DA3C2:
    /* cmp esi, 1 */ /* 0x006DA3C2: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA4E9; /* 0x006DA3C5: jne 0x6da4e9 */
L_006DA3CB:
    /* cmp MEM8(edi + 0xBE), 0 */ /* 0x006DA3CB: cmp byte ptr [edi + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA60C; /* 0x006DA3D2: je 0x6da60c */
L_006DA3D8:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006DA3D8: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA414; /* 0x006DA3DF: jne 0x6da414 */
L_006DA3E1:
    ecx = esp + 0x8; /* 0x006DA3E1: lea ecx, [esp + 8] */
    MEM32(0x9280A0) = esi; /* 0x006DA3E5: mov dword ptr [0x9280a0], esi */
    PUSH32(esp, ecx); /* 0x006DA3EB: push ecx */
    RECOMP_ICALL(eax); /* 0x006DA3EC: call eax */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006DA3EE: mov edx, eax */
    MEM32(0x928070) = edx; /* 0x006DA3F0: mov dword ptr [0x928070], edx */
    /* test edx, edx */ /* 0x006DA3F6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA47F; /* 0x006DA3F8: je 0x6da47f */
L_006DA3FE:
    ecx = MEM32(esp + 0x8); /* 0x006DA3FE: mov ecx, dword ptr [esp + 8] */
    MEM32(0x928098) = ecx; /* 0x006DA402: mov dword ptr [0x928098], ecx */
    ecx = MEM32(esp + 0xC); /* 0x006DA408: mov ecx, dword ptr [esp + 0xc] */
    MEM32(0x92809C) = ecx; /* 0x006DA40C: mov dword ptr [0x92809c], ecx */
    goto L_006DA41A; /* 0x006DA412: jmp 0x6da41a */
L_006DA414:
    edx = MEM32(0x928070); /* 0x006DA414: mov edx, dword ptr [0x928070] */
L_006DA41A:
    /* test edx, edx */ /* 0x006DA41A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA47F; /* 0x006DA41C: je 0x6da47f */
L_006DA41E:
    ecx = MEM32(0x928080); /* 0x006DA41E: mov ecx, dword ptr [0x928080] */
    eax = ecx; /* 0x006DA424: mov eax, ecx */
    esi = MEM32(0x928084); /* 0x006DA426: mov esi, dword ptr [0x928084] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x006DA42C: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA449; /* 0x006DA42E: jne 0x6da449 */
L_006DA430:
    eax = esp + 0x8; /* 0x006DA430: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x006DA434: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006DA435: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0xC); /* 0x006DA43B: mov esi, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x8); /* 0x006DA43F: mov ecx, dword ptr [esp + 8] */
    edx = MEM32(0x928070); /* 0x006DA443: mov edx, dword ptr [0x928070] */
L_006DA449:
    /* cmp MEM32(0x866088), 0 */ /* 0x006DA449: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x7CC104); /* 0x006DA450: mov eax, dword ptr [0x7cc104] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA4EF; /* 0x006DA455: jne 0x6da4ef */
L_006DA45B:
    MEM32(0x928080) = ecx; /* 0x006DA45B: mov dword ptr [0x928080], ecx */
    MEM32(0x928084) = esi; /* 0x006DA461: mov dword ptr [0x928084], esi */
    MEM32(0x928088) = ecx; /* 0x006DA467: mov dword ptr [0x928088], ecx */
    MEM32(0x92808C) = esi; /* 0x006DA46D: mov dword ptr [0x92808c], esi */
    MEM32(0x866088) = 1; /* 0x006DA473: mov dword ptr [0x866088], 1 */
    goto L_006DA4EF; /* 0x006DA47D: jmp 0x6da4ef */
L_006DA47F:
    _xmm[0].u64[0] = MEM64(0x928060); _xmm[0].u64[1] = 0; /* 0x006DA47F: movsd xmm0, qword ptr [0x928060] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x808B20))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006DA487: ucomisd xmm0, qword ptr [0x808b20] */
    _flag_k = FK_EFLAGS;
    esi = MEM32(0x7CC8F8); /* 0x006DA48F: mov esi, dword ptr [0x7cc8f8] */
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x006DA495: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x006DA496: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_006DA4BF; /* 0x006DA499: jp 0x6da4bf */
L_006DA49B:
    RECOMP_ICALL(esi); /* 0x006DA49B: call esi */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x928070); /* 0x006DA49D: mov edx, dword ptr [0x928070] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DA4A3: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DA4A7: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DA4AB: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DA4AB: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DA4AE: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006DA4B7: mulsd xmm0, qword ptr [0x808c60] */
L_006DA4BF:
    /* cmp MEM32(0x866088), 0 */ /* 0x006DA4BF: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x7CC104); /* 0x006DA4C6: mov eax, dword ptr [0x7cc104] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA4F5; /* 0x006DA4CB: jne 0x6da4f5 */
L_006DA4CD:
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006DA4CD: movsd qword ptr [0x928060], xmm0 */
    MEM64(0x928078) = _xmm[0].u64[0]; /* 0x006DA4D5: movsd qword ptr [0x928078], xmm0 */
    MEM32(0x866088) = 1; /* 0x006DA4DD: mov dword ptr [0x866088], 1 */
    goto L_006DA4F5; /* 0x006DA4E7: jmp 0x6da4f5 */
L_006DA4E9:
    edx = MEM32(0x928070); /* 0x006DA4E9: mov edx, dword ptr [0x928070] */
L_006DA4EF:
    esi = MEM32(0x7CC8F8); /* 0x006DA4EF: mov esi, dword ptr [0x7cc8f8] */
L_006DA4F5:
    /* cmp MEM32(0x9280A4), 0 */ /* 0x006DA4F5: cmp dword ptr [0x9280a4], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA60C; /* 0x006DA4FC: jne 0x6da60c */
L_006DA502:
    /* cmp MEM8(edi + 0xBE), 0 */ /* 0x006DA502: cmp byte ptr [edi + 0xbe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA60C; /* 0x006DA509: je 0x6da60c */
L_006DA50F:
    /* cmp MEM32(0x9280A0), 0 */ /* 0x006DA50F: cmp dword ptr [0x9280a0], 0 */
    _flag_a = (uint32_t)(MEM32(0x9280A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA547; /* 0x006DA516: jne 0x6da547 */
L_006DA518:
    ecx = esp + 0x8; /* 0x006DA518: lea ecx, [esp + 8] */
    MEM32(0x9280A0) = 1; /* 0x006DA51C: mov dword ptr [0x9280a0], 1 */
    PUSH32(esp, ecx); /* 0x006DA526: push ecx */
    RECOMP_ICALL(eax); /* 0x006DA527: call eax */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006DA529: mov edx, eax */
    MEM32(0x928070) = edx; /* 0x006DA52B: mov dword ptr [0x928070], edx */
    /* test edx, edx */ /* 0x006DA531: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA5AC; /* 0x006DA533: je 0x6da5ac */
L_006DA535:
    eax = MEM32(esp + 0x8); /* 0x006DA535: mov eax, dword ptr [esp + 8] */
    MEM32(0x928098) = eax; /* 0x006DA539: mov dword ptr [0x928098], eax */
    eax = MEM32(esp + 0xC); /* 0x006DA53E: mov eax, dword ptr [esp + 0xc] */
    MEM32(0x92809C) = eax; /* 0x006DA542: mov dword ptr [0x92809c], eax */
L_006DA547:
    /* test edx, edx */ /* 0x006DA547: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DA5AC; /* 0x006DA549: je 0x6da5ac */
L_006DA54B:
    eax = esp + 0x8; /* 0x006DA54B: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x006DA54F: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x006DA550: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x866088), 0 */ /* 0x006DA556: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0xC); /* 0x006DA55D: mov edx, dword ptr [esp + 0xc] */
    esi = MEM32(esp + 0x8); /* 0x006DA561: mov esi, dword ptr [esp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA583; /* 0x006DA565: je 0x6da583 */
L_006DA567:
    ecx = esi; /* 0x006DA567: mov ecx, esi */
    eax = edx; /* 0x006DA569: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x928080));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x928080); /* 0x006DA56B: sub ecx, dword ptr [0x928080] */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = MEM32(0x928084), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006DA571: sbb eax, dword ptr [0x928084] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x928090)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x928090) = MEM32(0x928090) + ecx; /* 0x006DA577: add dword ptr [0x928090], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(0x928094), _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006DA57D: adc dword ptr [0x928094], eax */
      MEM32(0x928094) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_006DA583:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DA583: xorps xmm0, xmm0 */
    MEM32(0x928088) = esi; /* 0x006DA586: mov dword ptr [0x928088], esi */
    MEM64(0x928080) = _xmm[0].u64[0]; /* 0x006DA58C: movlpd qword ptr [0x928080], xmm0 */
    MEM32(0x92808C) = edx; /* 0x006DA594: mov dword ptr [0x92808c], edx */
    MEM32(0x866088) = 0; /* 0x006DA59A: mov dword ptr [0x866088], 0 */
    edi = POP32_VAL(esp); /* 0x006DA5A4: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA5A5: pop esi */
    esp = ebp; /* 0x006DA5A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA5A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DA5A9: ret 4 */
L_006DA5AC:
    RECOMP_ICALL(esi); /* 0x006DA5AC: call esi */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x006DA5AE: movd xmm1, eax */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006DA5B2: cvtdq2pd xmm1, xmm1 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DA5B6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DA5B6: shr eax, 0x1f */
    /* cmp MEM32(0x866088), 0 */ /* 0x006DA5B9: cmp dword ptr [0x866088], 0 */
    _flag_a = (uint32_t)(MEM32(0x866088)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] + _s); } /* 0x006DA5C0: addsd xmm1, qword ptr [eax*8 + 0x809c60] */
    { double _s = sse_f64(MEM64(0x808C60)); _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006DA5C9: mulsd xmm1, qword ptr [0x808c60] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA5EF; /* 0x006DA5D1: je 0x6da5ef */
L_006DA5D3:
    _xmm[0] = _xmm[1]; /* 0x006DA5D3: movapd xmm0, xmm1 */
    { double _s = sse_f64(MEM64(0x928060)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] - _s); } /* 0x006DA5D7: subsd xmm0, qword ptr [0x928060] */
    { double _s = sse_f64(MEM64(0x928068)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DA5DF: addsd xmm0, qword ptr [0x928068] */
    MEM64(0x928068) = _xmm[0].u64[0]; /* 0x006DA5E7: movsd qword ptr [0x928068], xmm0 */
L_006DA5EF:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DA5EF: xorps xmm0, xmm0 */
    MEM64(0x928078) = _xmm[1].u64[0]; /* 0x006DA5F2: movsd qword ptr [0x928078], xmm1 */
    MEM64(0x928060) = _xmm[0].u64[0]; /* 0x006DA5FA: movsd qword ptr [0x928060], xmm0 */
    MEM32(0x866088) = 0; /* 0x006DA602: mov dword ptr [0x866088], 0 */
L_006DA60C:
    edi = POP32_VAL(esp); /* 0x006DA60C: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA60D: pop esi */
    esp = ebp; /* 0x006DA60E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA610: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DA611: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DA620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DA620u);

L_006DA620:
    PUSH32(esp, esi); /* 0x006DA620: push esi */
    esi = ecx; /* 0x006DA621: mov esi, ecx */
    /* cmp MEM32(esi + 0x108), 0 */ /* 0x006DA623: cmp dword ptr [esi + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA662; /* 0x006DA62A: je 0x6da662 */
L_006DA62C:
    /* cmp MEM8(esi + 0xBC), 0 */ /* 0x006DA62C: cmp byte ptr [esi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA641; /* 0x006DA633: je 0x6da641 */
L_006DA635:
    eax = MEM32(esi); /* 0x006DA635: mov eax, dword ptr [esi] */
    MEM8(esi + 0xBC) = (uint8_t)(0); /* 0x006DA637: mov byte ptr [esi + 0xbc], 0 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006DA63E: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_006DA641:
    /* cmp MEM8(esi + 0xBB), 0 */ /* 0x006DA641: cmp byte ptr [esi + 0xbb], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA658; /* 0x006DA648: je 0x6da658 */
L_006DA64A:
    eax = MEM32(esi); /* 0x006DA64A: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006DA64C: mov ecx, esi */
    MEM8(esi + 0xBB) = (uint8_t)(0); /* 0x006DA64E: mov byte ptr [esi + 0xbb], 0 */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006DA655: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
L_006DA658:
    MEM32(esi + 0x108) = 0; /* 0x006DA658: mov dword ptr [esi + 0x108], 0 */
L_006DA662:
    esi = POP32_VAL(esp); /* 0x006DA662: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DA663: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DA670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DA670u);

L_006DA670:
    PUSH32(esp, ebp); /* 0x006DA670: push ebp */
    ebp = esp; /* 0x006DA671: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DA673: push -1 */
    PUSH32(esp, 0x007C6BFBu); /* 0x006DA675: push 0x7c6bfb */
    eax = MEM32(FS_BASE + (0)); /* 0x006DA67A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DA680: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x828u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x828u; /* 0x006DA681: sub esp, 0x828 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DA687: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DA68C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x006DA68E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x006DA691: push ebx */
    PUSH32(esp, esi); /* 0x006DA692: push esi */
    PUSH32(esp, edi); /* 0x006DA693: push edi */
    PUSH32(esp, eax); /* 0x006DA694: push eax */
    eax = ebp + (-0xC); /* 0x006DA695: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DA698: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x830)) = ecx; /* 0x006DA69E: mov dword ptr [ebp - 0x830], ecx */
    /* cmp MEM8(0x9280B0), 0 */ /* 0x006DA6A4: cmp byte ptr [0x9280b0], 0 */
    _flag_a = (uint32_t)(MEM8(0x9280B0)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(ebp + 0x8); /* 0x006DA6AB: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x006DA6AE: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x834)) = edx; /* 0x006DA6B1: mov dword ptr [ebp - 0x834], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA6D9; /* 0x006DA6B7: je 0x6da6d9 */
L_006DA6B9:
    eax = edx; /* 0x006DA6B9: mov eax, edx */
L_006DA6BB:
    ecx = MEM32(ebp + (-0xC)); /* 0x006DA6BB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DA6BE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DA6C5: pop ecx */
    edi = POP32_VAL(esp); /* 0x006DA6C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006DA6C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DA6C8: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DA6C9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DA6CC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DA6CE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DA6D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DA6D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006DA6D6: ret 0xc */
L_006DA6D9:
    /* cmp edx, 0x82000001u */ /* 0x006DA6D9: cmp edx, 0x82000001 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x82000001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006DA73C; /* 0x006DA6DF: jg 0x6da73c */
L_006DA6E1:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA71C; /* 0x006DA6E1: je 0x6da71c */
L_006DA6E3:
    /* cmp edx, 0x80070002u */ /* 0x006DA6E3: cmp edx, 0x80070002 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80070002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA83C; /* 0x006DA6E9: je 0x6da83c */
L_006DA6EF:
    /* cmp edx, 0x8007000Eu */ /* 0x006DA6EF: cmp edx, 0x8007000e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DA8E1; /* 0x006DA6F5: jne 0x6da8e1 */
L_006DA6FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA6FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x006DA6FD: lea ecx, [ecx] */
L_006DA700:
    eax = (uint32_t)MEM16(ecx + 0x802D60); /* 0x006DA700: movzx eax, word ptr [ecx + 0x802d60] */
    ecx = ecx + 0x2; /* 0x006DA707: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA70A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA712: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA700; /* 0x006DA715: jne 0x6da700 */
L_006DA717:
    goto L_006DA91E; /* 0x006DA717: jmp 0x6da91e */
L_006DA71C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA71C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA71E: mov edi, edi */
L_006DA720:
    eax = (uint32_t)MEM16(ecx + 0x8021C0); /* 0x006DA720: movzx eax, word ptr [ecx + 0x8021c0] */
    ecx = ecx + 0x2; /* 0x006DA727: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA72A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA732: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA720; /* 0x006DA735: jne 0x6da720 */
L_006DA737:
    goto L_006DA91E; /* 0x006DA737: jmp 0x6da91e */
L_006DA73C:
    /* cmp edx, 0x8876017Cu */ /* 0x006DA73C: cmp edx, 0x8876017c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8876017Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006DA8D9; /* 0x006DA742: jg 0x6da8d9 */
L_006DA748:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA8BC; /* 0x006DA748: je 0x6da8bc */
L_006DA74E:
    eax = edx + 0x7DFFFFFD; /* 0x006DA74E: lea eax, [edx + 0x7dfffffd] */
    /* cmp eax, 0xAu */ /* 0x006DA754: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DA8E1; /* 0x006DA757: ja 0x6da8e1 */
L_006DA75D:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6DAB10)); goto _ljump; }
L_006DA764:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA764: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA766:
    eax = (uint32_t)MEM16(ecx + 0x802160); /* 0x006DA766: movzx eax, word ptr [ecx + 0x802160] */
    ecx = ecx + 0x2; /* 0x006DA76D: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA770: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA778: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA766; /* 0x006DA77B: jne 0x6da766 */
L_006DA77D:
    goto L_006DA91E; /* 0x006DA77D: jmp 0x6da91e */
L_006DA782:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA782: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA784:
    eax = (uint32_t)MEM16(ecx + 0x8025C0); /* 0x006DA784: movzx eax, word ptr [ecx + 0x8025c0] */
    ecx = ecx + 0x2; /* 0x006DA78B: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA78E: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA796: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA784; /* 0x006DA799: jne 0x6da784 */
L_006DA79B:
    goto L_006DA91E; /* 0x006DA79B: jmp 0x6da91e */
L_006DA7A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA7A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA7A2:
    eax = (uint32_t)MEM16(ecx + 0x802550); /* 0x006DA7A2: movzx eax, word ptr [ecx + 0x802550] */
    ecx = ecx + 0x2; /* 0x006DA7A9: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA7AC: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA7B4: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA7A2; /* 0x006DA7B7: jne 0x6da7a2 */
L_006DA7B9:
    goto L_006DA91E; /* 0x006DA7B9: jmp 0x6da91e */
L_006DA7BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA7BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA7C0:
    eax = (uint32_t)MEM16(ecx + 0x802480); /* 0x006DA7C0: movzx eax, word ptr [ecx + 0x802480] */
    ecx = ecx + 0x2; /* 0x006DA7C7: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA7CA: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA7D2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA7C0; /* 0x006DA7D5: jne 0x6da7c0 */
L_006DA7D7:
    goto L_006DA91E; /* 0x006DA7D7: jmp 0x6da91e */
L_006DA7DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA7DC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA7DE: mov edi, edi */
L_006DA7E0:
    eax = (uint32_t)MEM16(ecx + 0x8023F0); /* 0x006DA7E0: movzx eax, word ptr [ecx + 0x8023f0] */
    ecx = ecx + 0x2; /* 0x006DA7E7: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA7EA: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA7F2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA7E0; /* 0x006DA7F5: jne 0x6da7e0 */
L_006DA7F7:
    goto L_006DA91E; /* 0x006DA7F7: jmp 0x6da91e */
L_006DA7FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA7FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA7FE: mov edi, edi */
L_006DA800:
    eax = (uint32_t)MEM16(ecx + 0x802C40); /* 0x006DA800: movzx eax, word ptr [ecx + 0x802c40] */
    ecx = ecx + 0x2; /* 0x006DA807: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA80A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA812: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA800; /* 0x006DA815: jne 0x6da800 */
L_006DA817:
    goto L_006DA91E; /* 0x006DA817: jmp 0x6da91e */
L_006DA81C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA81C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA81E: mov edi, edi */
L_006DA820:
    eax = (uint32_t)MEM16(ecx + 0x802B20); /* 0x006DA820: movzx eax, word ptr [ecx + 0x802b20] */
    ecx = ecx + 0x2; /* 0x006DA827: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA82A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA832: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA820; /* 0x006DA835: jne 0x6da820 */
L_006DA837:
    goto L_006DA91E; /* 0x006DA837: jmp 0x6da91e */
L_006DA83C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA83C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA83E: mov edi, edi */
L_006DA840:
    eax = (uint32_t)MEM16(ecx + 0x802AE0); /* 0x006DA840: movzx eax, word ptr [ecx + 0x802ae0] */
    ecx = ecx + 0x2; /* 0x006DA847: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA84A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA852: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA840; /* 0x006DA855: jne 0x6da840 */
L_006DA857:
    goto L_006DA91E; /* 0x006DA857: jmp 0x6da91e */
L_006DA85C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA85C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA85E: mov edi, edi */
L_006DA860:
    eax = (uint32_t)MEM16(ecx + 0x802A10); /* 0x006DA860: movzx eax, word ptr [ecx + 0x802a10] */
    ecx = ecx + 0x2; /* 0x006DA867: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA86A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA872: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA860; /* 0x006DA875: jne 0x6da860 */
L_006DA877:
    goto L_006DA91E; /* 0x006DA877: jmp 0x6da91e */
L_006DA87C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA87C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA87E: mov edi, edi */
L_006DA880:
    eax = (uint32_t)MEM16(ecx + 0x802F50); /* 0x006DA880: movzx eax, word ptr [ecx + 0x802f50] */
    ecx = ecx + 0x2; /* 0x006DA887: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA88A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA892: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA880; /* 0x006DA895: jne 0x6da880 */
L_006DA897:
    goto L_006DA91E; /* 0x006DA897: jmp 0x6da91e */
L_006DA89C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA89C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA89E: mov edi, edi */
L_006DA8A0:
    eax = (uint32_t)MEM16(ecx + 0x802D90); /* 0x006DA8A0: movzx eax, word ptr [ecx + 0x802d90] */
    ecx = ecx + 0x2; /* 0x006DA8A7: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA8AA: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA8B2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA8A0; /* 0x006DA8B5: jne 0x6da8a0 */
L_006DA8B7:
    goto L_006DA91E; /* 0x006DA8B7: jmp 0x6da91e */
L_006DA8BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA8BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA8BE: mov edi, edi */
L_006DA8C0:
    eax = (uint32_t)MEM16(ecx + 0x802D20); /* 0x006DA8C0: movzx eax, word ptr [ecx + 0x802d20] */
    ecx = ecx + 0x2; /* 0x006DA8C7: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA8CA: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA8D2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA8C0; /* 0x006DA8D5: jne 0x6da8c0 */
L_006DA8D7:
    goto L_006DA91E; /* 0x006DA8D7: jmp 0x6da91e */
L_006DA8D9:
    /* cmp edx, 0x88760827u */ /* 0x006DA8D9: cmp edx, 0x88760827 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x88760827u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DA8FC; /* 0x006DA8DF: je 0x6da8fc */
L_006DA8E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA8E1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DA8E3:
    eax = (uint32_t)MEM16(ecx + 0x802870); /* 0x006DA8E3: movzx eax, word ptr [ecx + 0x802870] */
    ecx = ecx + 0x2; /* 0x006DA8EA: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA8ED: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA8F5: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA8E3; /* 0x006DA8F8: jne 0x6da8e3 */
L_006DA8FA:
    goto L_006DA91E; /* 0x006DA8FA: jmp 0x6da91e */
L_006DA8FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DA8FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x006DA8FE: mov edi, edi */
L_006DA900:
    eax = (uint32_t)MEM16(ecx + 0x802920); /* 0x006DA900: movzx eax, word ptr [ecx + 0x802920] */
    ecx = ecx + 0x2; /* 0x006DA907: lea ecx, [ecx + 2] */
    MEM16(ebp + ecx + (-0x816)) = (uint16_t)(LO16(eax)); /* 0x006DA90A: mov word ptr [ebp + ecx - 0x816], ax */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA912: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA900; /* 0x006DA915: jne 0x6da900 */
L_006DA917:
    MEM32(ebp + 0xC) = 1; /* 0x006DA917: mov dword ptr [ebp + 0xc], 1 */
L_006DA91E:
    ecx = ebp + (-0x814); /* 0x006DA91E: lea ecx, [ebp - 0x814] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x006DA924: add ecx, -2 */
    _flag_k = FK_ADD;
    goto L_006DA930; /* 0x006DA927: jmp 0x6da930 */
L_006DA930:
    SET_LO16(eax, MEM16(ecx + 0x2)); /* 0x006DA930: mov ax, word ptr [ecx + 2] */
    ecx = ecx + 0x2; /* 0x006DA934: lea ecx, [ecx + 2] */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA937: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA930; /* 0x006DA93A: jne 0x6da930 */
L_006DA93C:
    eax = MEM32(0x80285C); /* 0x006DA93C: mov eax, dword ptr [0x80285c] */
    MEM32(ecx) = eax; /* 0x006DA941: mov dword ptr [ecx], eax */
    SET_LO16(eax, MEM16(0x802860)); /* 0x006DA943: mov ax, word ptr [0x802860] */
    MEM16(ecx + 0x4) = (uint16_t)(LO16(eax)); /* 0x006DA949: mov word ptr [ecx + 4], ax */
    ecx = ebp + (-0x814); /* 0x006DA94D: lea ecx, [ebp - 0x814] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x006DA953: add ecx, -2 */
    _flag_k = FK_ADD;
L_006DA956:
    SET_LO16(eax, MEM16(ecx + 0x2)); /* 0x006DA956: mov ax, word ptr [ecx + 2] */
    ecx = ecx + 0x2; /* 0x006DA95A: lea ecx, [ecx + 2] */
    /* test LO16(eax), LO16(eax) */ /* 0x006DA95D: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA956; /* 0x006DA960: jne 0x6da956 */
L_006DA962:
    eax = MEM32(0x802850); /* 0x006DA962: mov eax, dword ptr [0x802850] */
    MEM32(ecx) = eax; /* 0x006DA967: mov dword ptr [ecx], eax */
    eax = MEM32(0x802854); /* 0x006DA969: mov eax, dword ptr [0x802854] */
    MEM32(ecx + 0x4) = eax; /* 0x006DA96E: mov dword ptr [ecx + 4], eax */
    SET_LO16(eax, MEM16(0x802858)); /* 0x006DA971: mov ax, word ptr [0x802858] */
    MEM16(ecx + 0x8) = (uint16_t)(LO16(eax)); /* 0x006DA977: mov word ptr [ecx + 8], ax */
    ecx = ebp + (-0x82C); /* 0x006DA97B: lea ecx, [ebp - 0x82c] */
    RECOMP_CALL(sub_006D79F0); /* 0x006DA981: call 0x6d79f0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006DA986: mov edx, eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DA988: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(edx + 0x14), 8 */ /* 0x006DA98F: cmp dword ptr [edx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006DA997; /* 0x006DA993: jb 0x6da997 */
L_006DA995:
    edx = MEM32(edx); /* 0x006DA995: mov edx, dword ptr [edx] */
L_006DA997:
    esi = edx; /* 0x006DA997: mov esi, edx */
    esp = esp; /* 0x006DA999: lea esp, [esp] */
L_006DA9A0:
    SET_LO16(eax, MEM16(edx)); /* 0x006DA9A0: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x006DA9A3: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x006DA9A6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA9A0; /* 0x006DA9A9: jne 0x6da9a0 */
L_006DA9AB:
    edi = ebp + (-0x814); /* 0x006DA9AB: lea edi, [ebp - 0x814] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006DA9B1: sub edx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x006DA9B3: add edi, -2 */
    _flag_k = FK_ADD;
L_006DA9B6:
    SET_LO16(eax, MEM16(edi + 0x2)); /* 0x006DA9B6: mov ax, word ptr [edi + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x006DA9BA: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x006DA9BD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DA9B6; /* 0x006DA9C0: jne 0x6da9b6 */
L_006DA9C2:
    ecx = edx; /* 0x006DA9C2: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x006DA9C4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x006DA9C4: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006DA9C7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x006DA9C9: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x006DA9CB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x006DA9CE: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006DA9D0: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x818)), 8 */ /* 0x006DA9D7: cmp dword ptr [ebp - 0x818], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x818))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006DA9EF; /* 0x006DA9DE: jb 0x6da9ef */
L_006DA9E0:
    PUSH32(esp, MEM32(ebp + (-0x82C))); /* 0x006DA9E0: push dword ptr [ebp - 0x82c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DA9E6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DA9EC: add esp, 4 */
    _flag_k = FK_ADD;
L_006DA9EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DA9EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x818)) = 7; /* 0x006DA9F1: mov dword ptr [ebp - 0x818], 7 */
    ecx = ebp + (-0x814); /* 0x006DA9FB: lea ecx, [ebp - 0x814] */
    MEM32(ebp + (-0x81C)) = 0; /* 0x006DAA01: mov dword ptr [ebp - 0x81c], 0 */
    MEM16(ebp + (-0x82C)) = (uint16_t)(LO16(eax)); /* 0x006DAA0B: mov word ptr [ebp - 0x82c], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x006DAA12: add ecx, -2 */
    _flag_k = FK_ADD;
L_006DAA15:
    SET_LO16(eax, MEM16(ecx + 0x2)); /* 0x006DAA15: mov ax, word ptr [ecx + 2] */
    ecx = ecx + 0x2; /* 0x006DAA19: lea ecx, [ecx + 2] */
    /* test LO16(eax), LO16(eax) */ /* 0x006DAA1C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAA15; /* 0x006DAA1F: jne 0x6daa15 */
L_006DAA21:
    eax = MEM32(0x8029F8); /* 0x006DAA21: mov eax, dword ptr [0x8029f8] */
    esi = ebx; /* 0x006DAA26: mov esi, ebx */
    MEM32(ecx) = eax; /* 0x006DAA28: mov dword ptr [ecx], eax */
    eax = MEM32(0x8029FC); /* 0x006DAA2A: mov eax, dword ptr [0x8029fc] */
    MEM32(ecx + 0x4) = eax; /* 0x006DAA2F: mov dword ptr [ecx + 4], eax */
    SET_LO16(eax, MEM16(0x802A00)); /* 0x006DAA32: mov ax, word ptr [0x802a00] */
    MEM16(ecx + 0x8) = (uint16_t)(LO16(eax)); /* 0x006DAA38: mov word ptr [ecx + 8], ax */
    esp = esp; /* 0x006DAA3C: lea esp, [esp] */
L_006DAA40:
    SET_LO16(eax, MEM16(ebx)); /* 0x006DAA40: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x006DAA43: add ebx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x006DAA46: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAA40; /* 0x006DAA49: jne 0x6daa40 */
L_006DAA4B:
    edi = ebp + (-0x814); /* 0x006DAA4B: lea edi, [ebp - 0x814] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x006DAA51: sub ebx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x006DAA53: add edi, -2 */
    _flag_k = FK_ADD;
L_006DAA56:
    SET_LO16(eax, MEM16(edi + 0x2)); /* 0x006DAA56: mov ax, word ptr [edi + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x006DAA5A: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x006DAA5D: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAA56; /* 0x006DAA60: jne 0x6daa56 */
L_006DAA62:
    ecx = ebx; /* 0x006DAA62: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x006DAA64: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x006DAA64: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006DAA67: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x006DAA69: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x006DAA6B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x006DAA6E: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x006DAA72: rep movsb byte ptr es:[edi], byte ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DAAE9; /* 0x006DAA74: jne 0x6daae9 */
L_006DAA7A:
    edi = ebp + (-0x814); /* 0x006DAA7A: lea edi, [ebp - 0x814] */
    MEM8(0x9280B0) = (uint8_t)(1); /* 0x006DAA80: mov byte ptr [0x9280b0], 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x006DAA87: add edi, -2 */
    _flag_k = FK_ADD;
    ebx = ebx; /* 0x006DAA8A: lea ebx, [ebx] */
L_006DAA90:
    SET_LO16(eax, MEM16(edi + 0x2)); /* 0x006DAA90: mov ax, word ptr [edi + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x006DAA94: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x006DAA97: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAA90; /* 0x006DAA9A: jne 0x6daa90 */
L_006DAA9C:
    ecx = 0x19u; /* 0x006DAA9C: mov ecx, 0x19 */
    eax = ebp + (-0x814); /* 0x006DAAA1: lea eax, [ebp - 0x814] */
    esi = 0x00802990u; /* 0x006DAAA7: mov esi, 0x802990 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006DAAAC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x006DAAAE: push 0x10 */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x006DAAB0: movsw word ptr es:[edi], word ptr [esi] */
    esi = MEM32(ebp + (-0x830)); /* 0x006DAAB2: mov esi, dword ptr [ebp - 0x830] */
    PUSH32(esp, MEM32(esi + 0x3FC)); /* 0x006DAAB8: push dword ptr [esi + 0x3fc] */
    PUSH32(esp, eax); /* 0x006DAABE: push eax */
    PUSH32(esp, 0); /* 0x006DAABF: push 0 */
    RECOMP_ICALL(MEM32(0x7CC87C)); /* 0x006DAAC1: call dword ptr [0x7cc87c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xF8); /* 0x006DAAC7: mov eax, dword ptr [esi + 0xf8] */
    /* test eax, eax */ /* 0x006DAACD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAADE; /* 0x006DAACF: je 0x6daade */
L_006DAAD1:
    PUSH32(esp, 0); /* 0x006DAAD1: push 0 */
    PUSH32(esp, 0); /* 0x006DAAD3: push 0 */
    PUSH32(esp, 0x10u); /* 0x006DAAD5: push 0x10 */
    PUSH32(esp, eax); /* 0x006DAAD7: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DAAD8: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
L_006DAADE:
    eax = MEM32(ebp + (-0x834)); /* 0x006DAADE: mov eax, dword ptr [ebp - 0x834] */
    RECOMP_BACKEDGE();
    goto L_006DA6BB; /* 0x006DAAE4: jmp 0x6da6bb */
L_006DAAE9:
    esi = MEM32(ebp + (-0x830)); /* 0x006DAAE9: mov esi, dword ptr [ebp - 0x830] */
    eax = ebp + (-0x814); /* 0x006DAAEF: lea eax, [ebp - 0x814] */
    PUSH32(esp, 0x30u); /* 0x006DAAF5: push 0x30 */
    PUSH32(esp, MEM32(esi + 0x3FC)); /* 0x006DAAF7: push dword ptr [esi + 0x3fc] */
    PUSH32(esp, eax); /* 0x006DAAFD: push eax */
    PUSH32(esp, 0); /* 0x006DAAFE: push 0 */
    RECOMP_ICALL(MEM32(0x7CC87C)); /* 0x006DAB00: call dword ptr [0x7cc87c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DAB06: push 0 */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x006DAB08: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
    edi = edi; /* 0x006DAB0E: mov edi, edi */
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x006DAB10: cmpsd dword ptr fs:[esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x006DAB12u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edx + (-0x5FFF9259))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + (-0x5FFF9259)) = (uint8_t)(MEM8(edx + (-0x5FFF9259)) + LO8(eax)); /* 0x006DAB13: add byte ptr [edx - 0x5fff9259], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x006DAB19: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x006DAB1Au, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(esi + (-0x23FF9259))) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + (-0x23FF9259)) = (uint8_t)(MEM8(esi + (-0x23FF9259)) + HI8(ebx)); /* 0x006DAB1B: add byte ptr [esi - 0x23ff9259], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x006DAB21: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x006DAB22u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(ebx)); /* 0x006DAB23: add ah, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _a, _b; _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x006DAB25: cmpsd dword ptr [esi], dword ptr es:[edi] */
    _flag_k = FK_CMP;
    void_lift_trap(0x006DAB26u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax + ebp * 4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ebp * 4) = (uint8_t)(MEM8(eax + ebp * 4) + LO8(ebx)); /* 0x006DAB27: add byte ptr [eax + ebp*4], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x006DAB2Au, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax + ebp * 4 + 0x6D)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ebp * 4 + 0x6D) = (uint8_t)(MEM8(eax + ebp * 4 + 0x6D) + HI8(ebx)); /* 0x006DAB2B: add byte ptr [eax + ebp*4 + 0x6d], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + ebp * 4)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ebp * 4) = (uint8_t)(MEM8(eax + ebp * 4) + HI8(ebx)); /* 0x006DAB2F: add byte ptr [eax + ebp*4], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x006DAB32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax + ebp * 4 + 0x6D)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ebp * 4 + 0x6D) = (uint8_t)(MEM8(eax + ebp * 4 + 0x6D) + LO8(ebx)); /* 0x006DAB33: add byte ptr [eax + ebp*4 + 0x6d], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + ebp * 4 + (-0x3333FF93))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ebp * 4 + (-0x3333FF93)) = (uint8_t)(MEM8(eax + ebp * 4 + (-0x3333FF93)) + LO8(ebx)); /* 0x006DAB37: add byte ptr [eax + ebp*4 - 0x3333ff93], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x006DAB3Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x006DA764u: goto L_006DA764;
      case 0x006DA782u: goto L_006DA782;
      case 0x006DA7A0u: goto L_006DA7A0;
      case 0x006DA7BEu: goto L_006DA7BE;
      case 0x006DA7DCu: goto L_006DA7DC;
      case 0x006DA7FCu: goto L_006DA7FC;
      case 0x006DA81Cu: goto L_006DA81C;
      case 0x006DA83Cu: goto L_006DA83C;
      case 0x006DA85Cu: goto L_006DA85C;
      case 0x006DA87Cu: goto L_006DA87C;
      case 0x006DA89Cu: goto L_006DA89C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006DAB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAB40u);

L_006DAB40:
    PUSH32(esp, ebp); /* 0x006DAB40: push ebp */
    ebp = esp; /* 0x006DAB41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DAB43: push -1 */
    PUSH32(esp, 0x007C6B33u); /* 0x006DAB45: push 0x7c6b33 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DAB4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DAB50: push eax */
    PUSH32(esp, ecx); /* 0x006DAB51: push ecx */
    PUSH32(esp, esi); /* 0x006DAB52: push esi */
    eax = MEM32(0x855000); /* 0x006DAB53: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DAB58: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DAB5A: push eax */
    eax = ebp + (-0xC); /* 0x006DAB5B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DAB5E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DAB64: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DAB66: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803074u; /* 0x006DAB69: mov dword ptr [esi], 0x803074 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006DAB6F: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x4; /* 0x006DAB76: lea ecx, [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DAB79: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_006DBF60); /* 0x006DAB7C: call 0x6dbf60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006DAB81: mov byte ptr [ebp - 4], 1 */
    edx = ebp + 0x8; /* 0x006DAB85: lea edx, [ebp + 8] */
    MEM32(ecx) = 0x0080305Cu; /* 0x006DAB88: mov dword ptr [ecx], 0x80305c */
    ecx = MEM32(ebp + 0xC); /* 0x006DAB8E: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x006DAB91: push edx */
    MEM32(esi) = 0x00803028u; /* 0x006DAB92: mov dword ptr [esi], 0x803028 */
    MEM32(esi + 0x14) = ecx; /* 0x006DAB98: mov dword ptr [esi + 0x14], ecx */
    eax = MEM32(ecx); /* 0x006DAB9B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006DAB9D: push 0 */
    PUSH32(esp, ecx); /* 0x006DAB9F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xF4)); /* 0x006DABA0: call dword ptr [eax + 0xf4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DABA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x14); /* 0x006DABA8: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(eax); /* 0x006DABAB: mov ecx, dword ptr [eax] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DABBB; /* 0x006DABAD: jne 0x6dabbb */
L_006DABAF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DABAF: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x006DABB2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE8)); /* 0x006DABB3: call dword ptr [ecx + 0xe8] */
    RECOMP_FLAGS_IN();
    goto L_006DABC6; /* 0x006DABB9: jmp 0x6dabc6 */
L_006DABBB:
    PUSH32(esp, eax); /* 0x006DABBB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006DABBC: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0; /* 0x006DABBF: mov dword ptr [esi + 0x14], 0 */
L_006DABC6:
    eax = esi; /* 0x006DABC6: mov eax, esi */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x006DABC8: mov byte ptr [esi + 0x18], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006DABCC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DABCF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DABD6: pop ecx */
    esi = POP32_VAL(esp); /* 0x006DABD7: pop esi */
    esp = ebp; /* 0x006DABD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DABDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DABDB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DABE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DABE0u);

L_006DABE0:
    PUSH32(esp, ebp); /* 0x006DABE0: push ebp */
    ebp = esp; /* 0x006DABE1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DABE3: push esi */
    esi = ecx; /* 0x006DABE4: mov esi, ecx */
    RECOMP_CALL(sub_006DAC10); /* 0x006DABE6: call 0x6dac10 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006DABEB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DABFB; /* 0x006DABEF: je 0x6dabfb */
L_006DABF1:
    PUSH32(esp, esi); /* 0x006DABF1: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DABF2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DABF8: add esp, 4 */
    _flag_k = FK_ADD;
L_006DABFB:
    eax = esi; /* 0x006DABFB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006DABFD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006DABFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DABFF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DAC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAC10u);

L_006DAC10:
    PUSH32(esp, ebp); /* 0x006DAC10: push ebp */
    ebp = esp; /* 0x006DAC11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006DAC13: push -1 */
    PUSH32(esp, 0x007C6B33u); /* 0x006DAC15: push 0x7c6b33 */
    eax = MEM32(FS_BASE + (0)); /* 0x006DAC1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006DAC20: push eax */
    PUSH32(esp, ecx); /* 0x006DAC21: push ecx */
    PUSH32(esp, esi); /* 0x006DAC22: push esi */
    eax = MEM32(0x855000); /* 0x006DAC23: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DAC28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DAC2A: push eax */
    eax = ebp + (-0xC); /* 0x006DAC2B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006DAC2E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006DAC34: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006DAC36: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803028u; /* 0x006DAC39: mov dword ptr [esi], 0x803028 */
    MEM32(esi + 0x4) = 0x0080305Cu; /* 0x006DAC3F: mov dword ptr [esi + 4], 0x80305c */
    MEM32(ebp + (-0x4)) = 1; /* 0x006DAC46: mov dword ptr [ebp - 4], 1 */
    ecx = MEM32(esi + 0x14); /* 0x006DAC4D: mov ecx, dword ptr [esi + 0x14] */
    /* test ecx, ecx */ /* 0x006DAC50: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAC6B; /* 0x006DAC52: je 0x6dac6b */
L_006DAC54:
    eax = MEM32(ecx); /* 0x006DAC54: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DAC56: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DAC57: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DAC5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAC6B; /* 0x006DAC5C: je 0x6dac6b */
L_006DAC5E:
    ecx = MEM32(esi + 0x10); /* 0x006DAC5E: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x00803008u); /* 0x006DAC61: push 0x803008 */
    RECOMP_CALL(sub_006D1E10); /* 0x006DAC66: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006DAC6B:
    eax = MEM32(esi + 0x10); /* 0x006DAC6B: mov eax, dword ptr [esi + 0x10] */
    ecx = esi + 0x8; /* 0x006DAC6E: lea ecx, [esi + 8] */
    MEM32(esi + 0x4) = 0x008030A8u; /* 0x006DAC71: mov dword ptr [esi + 4], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006DAC78: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006DAC7E: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0x00801A40u; /* 0x006DAC83: mov dword ptr [esi + 4], 0x801a40 */
    MEM32(esi) = 0x00801A40u; /* 0x006DAC8A: mov dword ptr [esi], 0x801a40 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006DAC90: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006DAC93: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006DAC9A: pop ecx */
    esi = POP32_VAL(esp); /* 0x006DAC9B: pop esi */
    esp = ebp; /* 0x006DAC9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DAC9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAC9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DACA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DACA0u);

L_006DACA0:
    PUSH32(esp, ebp); /* 0x006DACA0: push ebp */
    ebp = esp; /* 0x006DACA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006DACA3: push ecx */
    ecx = MEM32(ecx + 0x14); /* 0x006DACA4: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x006DACA7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DACB1; /* 0x006DACA9: jne 0x6dacb1 */
L_006DACAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DACAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x006DACAD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DACAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DACB0: ret  */
L_006DACB1:
    eax = MEM32(ecx); /* 0x006DACB1: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x006DACB3: lea edx, [ebp - 4] */
    PUSH32(esp, 0); /* 0x006DACB6: push 0 */
    PUSH32(esp, edx); /* 0x006DACB8: push edx */
    PUSH32(esp, ecx); /* 0x006DACB9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xFC)); /* 0x006DACBA: call dword ptr [eax + 0xfc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006DACC0: mov eax, dword ptr [ebp - 4] */
    MEM8(0x87CBB9) = (uint8_t)(1); /* 0x006DACC3: mov byte ptr [0x87cbb9], 1 */
    esp = ebp; /* 0x006DACCA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DACCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DACCD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DACD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DACD0u);

L_006DACD0:
    PUSH32(esp, ebp); /* 0x006DACD0: push ebp */
    ebp = esp; /* 0x006DACD1: mov ebp, esp */
    ecx = MEM32(ecx + 0x14); /* 0x006DACD3: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x006DACD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DACE6; /* 0x006DACD8: je 0x6dace6 */
L_006DACDA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DACDA: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x006DACDD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DACDF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x100)); /* 0x006DACE0: call dword ptr [eax + 0x100] */
    RECOMP_FLAGS_IN();
L_006DACE6:
    ebp = POP32_VAL(esp); /* 0x006DACE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DACE7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DACF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DACF0u);

L_006DACF0:
    ecx = MEM32(ecx + 0x14); /* 0x006DACF0: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x006DACF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAD00; /* 0x006DACF5: je 0x6dad00 */
L_006DACF7:
    eax = MEM32(ecx); /* 0x006DACF7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DACF9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x108)); /* 0x006DACFA: call dword ptr [eax + 0x108] */
    RECOMP_FLAGS_IN();
L_006DAD00:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAD00: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DAD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAD10u);

L_006DAD10:
    ecx = MEM32(ecx + 0x14); /* 0x006DAD10: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x006DAD13: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAD27; /* 0x006DAD15: je 0x6dad27 */
L_006DAD17:
    eax = MEM32(ecx); /* 0x006DAD17: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DAD19: push ecx */
    MEM8(0x87CBB9) = (uint8_t)(0); /* 0x006DAD1A: mov byte ptr [0x87cbb9], 0 */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006DAD21: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
L_006DAD27:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAD27: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DAD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAD30u);

L_006DAD30:
    PUSH32(esp, ebp); /* 0x006DAD30: push ebp */
    ebp = esp; /* 0x006DAD31: mov ebp, esp */
    edx = MEM32(ecx + 0x14); /* 0x006DAD33: mov edx, dword ptr [ecx + 0x14] */
    /* test edx, edx */ /* 0x006DAD36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAD40; /* 0x006DAD38: jne 0x6dad40 */
L_006DAD3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DAD3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006DAD3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DAD3D: ret 8 */
L_006DAD40:
    eax = MEM32(ebp + 0xC); /* 0x006DAD40: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DAD43: push dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x006DAD46: mov ecx, dword ptr [edx] */
    PUSH32(esp, MEM32(eax)); /* 0x006DAD48: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006DAD4A: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x006DAD4B: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006DAD4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DAD4F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DAD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAD60u);

L_006DAD60:
    PUSH32(esp, ebp); /* 0x006DAD60: push ebp */
    ebp = esp; /* 0x006DAD61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DAD63: push esi */
    esi = ecx; /* 0x006DAD64: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006DAD66: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DADB5; /* 0x006DAD6A: je 0x6dadb5 */
L_006DAD6C:
    PUSH32(esp, 0); /* 0x006DAD6C: push 0 */
    PUSH32(esp, 0x008687D8u); /* 0x006DAD6E: push 0x8687d8 */
    PUSH32(esp, 0x008687C0u); /* 0x006DAD73: push 0x8687c0 */
    PUSH32(esp, 0); /* 0x006DAD78: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006DAD7A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_00780022); /* 0x006DAD7D: call 0x780022 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006DAD82: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006DAD85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DADA4; /* 0x006DAD87: je 0x6dada4 */
L_006DAD89:
    ecx = MEM32(esi + 0x14); /* 0x006DAD89: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x006DAD8C: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DAD8F: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x006DAD92: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DAD94: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xD0)); /* 0x006DAD95: call dword ptr [edx + 0xd0] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x18) = (uint8_t)(1); /* 0x006DAD9B: mov byte ptr [esi + 0x18], 1 */
    esi = POP32_VAL(esp); /* 0x006DAD9F: pop esi */
    ebp = POP32_VAL(esp); /* 0x006DADA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DADA1: ret 8 */
L_006DADA4:
    eax = MEM32(esi + 0x14); /* 0x006DADA4: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, 0); /* 0x006DADA7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DADA9: push dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x006DADAC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DADAE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xD0)); /* 0x006DADAF: call dword ptr [ecx + 0xd0] */
    RECOMP_FLAGS_IN();
L_006DADB5:
    esi = POP32_VAL(esp); /* 0x006DADB5: pop esi */
    ebp = POP32_VAL(esp); /* 0x006DADB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DADB7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DADC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DADC0u);

L_006DADC0:
    PUSH32(esp, ebp); /* 0x006DADC0: push ebp */
    ebp = esp; /* 0x006DADC1: mov ebp, esp */
    edx = MEM32(ecx + 0x14); /* 0x006DADC3: mov edx, dword ptr [ecx + 0x14] */
    /* test edx, edx */ /* 0x006DADC6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DADDB; /* 0x006DADC8: je 0x6daddb */
L_006DADCA:
    eax = MEM32(ebp + 0x8); /* 0x006DADCA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006DADCD: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x006DADD0: mov ecx, dword ptr [edx] */
    PUSH32(esp, MEM32(eax)); /* 0x006DADD2: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006DADD4: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x98)); /* 0x006DADD5: call dword ptr [ecx + 0x98] */
    RECOMP_FLAGS_IN();
L_006DADDB:
    ebp = POP32_VAL(esp); /* 0x006DADDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DADDC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DADE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DADE0u);

L_006DADE0:
    PUSH32(esp, ebp); /* 0x006DADE0: push ebp */
    ebp = esp; /* 0x006DADE1: mov ebp, esp */
    edx = MEM32(ecx + 0x14); /* 0x006DADE3: mov edx, dword ptr [ecx + 0x14] */
    /* test edx, edx */ /* 0x006DADE6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DADFB; /* 0x006DADE8: je 0x6dadfb */
L_006DADEA:
    eax = MEM32(ebp + 0x8); /* 0x006DADEA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006DADED: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x006DADF0: mov ecx, dword ptr [edx] */
    PUSH32(esp, MEM32(eax)); /* 0x006DADF2: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006DADF4: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x88)); /* 0x006DADF5: call dword ptr [ecx + 0x88] */
    RECOMP_FLAGS_IN();
L_006DADFB:
    ebp = POP32_VAL(esp); /* 0x006DADFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DADFC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DAE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAE00u);

L_006DAE00:
    PUSH32(esp, ebp); /* 0x006DAE00: push ebp */
    ebp = esp; /* 0x006DAE01: mov ebp, esp */
    edx = MEM32(ecx + 0x14); /* 0x006DAE03: mov edx, dword ptr [ecx + 0x14] */
    /* test edx, edx */ /* 0x006DAE06: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAE22; /* 0x006DAE08: je 0x6dae22 */
L_006DAE0A:
    eax = MEM32(ebp + 0xC); /* 0x006DAE0A: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x006DAE0D: mov ecx, dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x006DAE0F: push ecx */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x006DAE10: movss xmm0, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x006DAE14: mov eax, dword ptr [ebp + 8] */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x006DAE17: movss dword ptr [esp], xmm0 */
    PUSH32(esp, MEM32(eax)); /* 0x006DAE1C: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006DAE1E: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x78)); /* 0x006DAE1F: call dword ptr [ecx + 0x78] */
    RECOMP_FLAGS_IN();
L_006DAE22:
    ebp = POP32_VAL(esp); /* 0x006DAE22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DAE23: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DAE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAE30u);

L_006DAE30:
    PUSH32(esp, ebp); /* 0x006DAE30: push ebp */
    ebp = esp; /* 0x006DAE31: mov ebp, esp */
    edx = MEM32(ecx + 0x14); /* 0x006DAE33: mov edx, dword ptr [ecx + 0x14] */
    /* test edx, edx */ /* 0x006DAE36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAE48; /* 0x006DAE38: je 0x6dae48 */
L_006DAE3A:
    eax = MEM32(ebp + 0x8); /* 0x006DAE3A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006DAE3D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edx); /* 0x006DAE40: mov ecx, dword ptr [edx] */
    PUSH32(esp, MEM32(eax)); /* 0x006DAE42: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x006DAE44: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x68)); /* 0x006DAE45: call dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_IN();
L_006DAE48:
    ebp = POP32_VAL(esp); /* 0x006DAE48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DAE49: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DAE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAE50u);

L_006DAE50:
    PUSH32(esp, ebp); /* 0x006DAE50: push ebp */
    ebp = esp; /* 0x006DAE51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006DAE53: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006DAE56: push esi */
    esi = ecx; /* 0x006DAE57: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x006DAE59: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x006DAE5C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAEB8; /* 0x006DAE5E: je 0x6daeb8 */
L_006DAE60:
    /* cmp MEM8(esi + 0x14), 0 */ /* 0x006DAE60: cmp byte ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DAEB4; /* 0x006DAE64: je 0x6daeb4 */
L_006DAE66:
    eax = MEM32(ecx); /* 0x006DAE66: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x006DAE68: push ebx */
    PUSH32(esp, edi); /* 0x006DAE69: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DAE6A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x006DAE6C: push ebx */
    PUSH32(esp, ebx); /* 0x006DAE6D: push ebx */
    PUSH32(esp, ecx); /* 0x006DAE6E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006DAE6F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DAE72: mov edi, eax */
    /* test edi, edi */ /* 0x006DAE74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAEB2; /* 0x006DAE76: je 0x6daeb2 */
L_006DAE78:
    ecx = MEM32(esi + 0x10); /* 0x006DAE78: mov ecx, dword ptr [esi + 0x10] */
    eax = ebp + (-0x2C); /* 0x006DAE7B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006DAE7E: push eax */
    PUSH32(esp, edi); /* 0x006DAE7F: push edi */
    PUSH32(esp, ecx); /* 0x006DAE80: push ecx */
    edx = MEM32(ecx); /* 0x006DAE81: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x006DAE83: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DAE86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAE9F; /* 0x006DAE88: jne 0x6dae9f */
L_006DAE8A:
    /* cmp MEM32(ebp + (-0x20)), 5 */ /* 0x006DAE8A: cmp dword ptr [ebp - 0x20], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DAE9F; /* 0x006DAE8E: jne 0x6dae9f */
L_006DAE90:
    eax = MEM32(esi + 0x10); /* 0x006DAE90: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, 0); /* 0x006DAE93: push 0 */
    PUSH32(esp, edi); /* 0x006DAE95: push edi */
    PUSH32(esp, eax); /* 0x006DAE96: push eax */
    ecx = MEM32(eax); /* 0x006DAE97: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xD0)); /* 0x006DAE99: call dword ptr [ecx + 0xd0] */
    RECOMP_FLAGS_IN();
L_006DAE9F:
    eax = MEM32(esi + 0x10); /* 0x006DAE9F: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006DAEA2: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x006DAEA3: push ebx */
    PUSH32(esp, 0); /* 0x006DAEA4: push 0 */
    PUSH32(esp, eax); /* 0x006DAEA6: push eax */
    ecx = MEM32(eax); /* 0x006DAEA7: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x006DAEA9: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DAEAC: mov edi, eax */
    /* test edi, edi */ /* 0x006DAEAE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DAE78; /* 0x006DAEB0: jne 0x6dae78 */
L_006DAEB2:
    edi = POP32_VAL(esp); /* 0x006DAEB2: pop edi */
    ebx = POP32_VAL(esp); /* 0x006DAEB3: pop ebx */
L_006DAEB4:
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x006DAEB4: mov byte ptr [esi + 0x14], 0 */
L_006DAEB8:
    esi = POP32_VAL(esp); /* 0x006DAEB8: pop esi */
    esp = ebp; /* 0x006DAEB9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DAEBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAEBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DAEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAEC0u);

L_006DAEC0:
    ecx = MEM32(ecx + 0x10); /* 0x006DAEC0: mov ecx, dword ptr [ecx + 0x10] */
    /* test ecx, ecx */ /* 0x006DAEC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAED0; /* 0x006DAEC5: je 0x6daed0 */
L_006DAEC7:
    eax = MEM32(ecx); /* 0x006DAEC7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DAEC9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x114)); /* 0x006DAECA: call dword ptr [eax + 0x114] */
    RECOMP_FLAGS_IN();
L_006DAED0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAED0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DAEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAEE0u);

L_006DAEE0:
    ecx = MEM32(ecx + 0x10); /* 0x006DAEE0: mov ecx, dword ptr [ecx + 0x10] */
    /* test ecx, ecx */ /* 0x006DAEE3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DAEF0; /* 0x006DAEE5: je 0x6daef0 */
L_006DAEE7:
    eax = MEM32(ecx); /* 0x006DAEE7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DAEE9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x118)); /* 0x006DAEEA: call dword ptr [eax + 0x118] */
    RECOMP_FLAGS_IN();
L_006DAEF0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DAEF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DAEF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAEF1u);

    goto L_006DAEF1;
L_006DABE0:
    PUSH32(esp, ebp); /* 0x006DABE0: push ebp */
    ebp = esp; /* 0x006DABE1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DABE3: push esi */
    esi = ecx; /* 0x006DABE4: mov esi, ecx */
    RECOMP_CALL(sub_006DAC10); /* 0x006DABE6: call 0x6dac10 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006DABEB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DABFB; /* 0x006DABEF: je 0x6dabfb */
L_006DABF1:
    PUSH32(esp, esi); /* 0x006DABF1: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DABF2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DABF8: add esp, 4 */
    _flag_k = FK_ADD;
L_006DABFB:
    eax = esi; /* 0x006DABFB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006DABFD: pop esi */
    ebp = POP32_VAL(esp); /* 0x006DABFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DABFF: ret 4 */
L_006DAEF1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x006DAEF1: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006DABE0; /* 0x006DAEF4: jmp 0x6dabe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006DAF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAF00u);

L_006DAF00:
    PUSH32(esp, esi); /* 0x006DAF00: push esi */
    PUSH32(esp, 0x50u); /* 0x006DAF01: push 0x50 */
    esi = ecx; /* 0x006DAF03: mov esi, ecx */
    PUSH32(esp, 0x008015A8u); /* 0x006DAF05: push 0x8015a8 */
    PUSH32(esp, esi); /* 0x006DAF0A: push esi */
    RECOMP_ICALL(MEM32(0x7CC56C)); /* 0x006DAF0B: call dword ptr [0x7cc56c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DAF11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xA0) = 0xCu; /* 0x006DAF13: mov dword ptr [esi + 0xa0], 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006DAF1D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM16(esi + 0x9E) = (uint16_t)(LO16(eax)); /* 0x006DAF20: mov word ptr [esi + 0x9e], ax */
    MEM32(esi + 0x6C0) = eax; /* 0x006DAF27: mov dword ptr [esi + 0x6c0], eax */
    MEM32(esi + 0xA8) = eax; /* 0x006DAF2D: mov dword ptr [esi + 0xa8], eax */
    MEM32(esi + 0xAC) = eax; /* 0x006DAF33: mov dword ptr [esi + 0xac], eax */
    MEM32(esi + 0xB0) = eax; /* 0x006DAF39: mov dword ptr [esi + 0xb0], eax */
    MEM32(esi + 0x6C4) = eax; /* 0x006DAF3F: mov dword ptr [esi + 0x6c4], eax */
    MEM32(esi + 0x6C8) = eax; /* 0x006DAF45: mov dword ptr [esi + 0x6c8], eax */
    eax = esi; /* 0x006DAF4B: mov eax, esi */
    MEM32(esi + 0xA4) = 1; /* 0x006DAF4D: mov dword ptr [esi + 0xa4], 1 */
    esi = POP32_VAL(esp); /* 0x006DAF57: pop esi */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006DAF58: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006DAF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAF60u);

L_006DAF60:
    PUSH32(esp, ebp); /* 0x006DAF60: push ebp */
    ebp = esp; /* 0x006DAF61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DAF63: push esi */
    PUSH32(esp, edi); /* 0x006DAF64: push edi */
    PUSH32(esp, 0x48u); /* 0x006DAF65: push 0x48 */
    PUSH32(esp, 0x5Au); /* 0x006DAF67: push 0x5a */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DAF69: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x006DAF6C: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC04C)); /* 0x006DAF6E: call dword ptr [0x7cc04c] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DAF74: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006DAF78: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(esi + 0xBC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006DAF7B: mulss xmm0, dword ptr [esi + 0xbc] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006DAF83: cvttss2si eax, xmm0 */
    PUSH32(esp, eax); /* 0x006DAF87: push eax */
    PUSH32(esp, MEM32(esi + 0xA0)); /* 0x006DAF88: push dword ptr [esi + 0xa0] */
    RECOMP_ICALL(MEM32(0x7CC144)); /* 0x006DAF8E: call dword ptr [0x7cc144] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xA4); /* 0x006DAF94: mov edx, dword ptr [esi + 0xa4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006DAF9A: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006DAF9C: push esi */
    PUSH32(esp, 2); /* 0x006DAF9D: push 2 */
    PUSH32(esp, 4); /* 0x006DAF9F: push 4 */
    PUSH32(esp, 0); /* 0x006DAFA1: push 0 */
    PUSH32(esp, 0); /* 0x006DAFA3: push 0 */
    PUSH32(esp, 1); /* 0x006DAFA5: push 1 */
    /* test LO8(edx), 1 */ /* 0x006DAFA7: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = 0x190u; /* 0x006DAFAA: mov ecx, 0x190 */
    PUSH32(esp, 0); /* 0x006DAFAF: push 0 */
    PUSH32(esp, 0); /* 0x006DAFB1: push 0 */
    edi = 0x2BCu; /* 0x006DAFB3: mov edi, 0x2bc */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edi; } /* 0x006DAFB8: cmovne ecx, edi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006DAFBB: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x006DAFBB: shr edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x006DAFBD: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x006DAFC0: push edx */
    PUSH32(esp, ecx); /* 0x006DAFC1: push ecx */
    PUSH32(esp, 0); /* 0x006DAFC2: push 0 */
    PUSH32(esp, 0); /* 0x006DAFC4: push 0 */
    PUSH32(esp, 0); /* 0x006DAFC6: push 0 */
    PUSH32(esp, eax); /* 0x006DAFC8: push eax */
    RECOMP_ICALL(MEM32(0x7CC08C)); /* 0x006DAFC9: call dword ptr [0x7cc08c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x006DAFCF: mov ecx, dword ptr [ebp + 0xc] */
    edx = eax; /* 0x006DAFD2: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DAFD4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x006DAFD6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006DAFD8: pop edi */
    esi = POP32_VAL(esp); /* 0x006DAFD9: pop esi */
    MEM32(ecx) = edx; /* 0x006DAFDA: mov dword ptr [ecx], edx */
    ecx = 0x80004005u; /* 0x006DAFDC: mov ecx, 0x80004005 */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x006DAFE1: cmove eax, ecx */
    ebp = POP32_VAL(esp); /* 0x006DAFE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DAFE5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DAFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DAFF0u);

L_006DAFF0:
    PUSH32(esp, ebp); /* 0x006DAFF0: push ebp */
    ebp = esp; /* 0x006DAFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006DAFF3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006DAFF6: push ebx */
    PUSH32(esp, esi); /* 0x006DAFF7: push esi */
    PUSH32(esp, edi); /* 0x006DAFF8: push edi */
    eax = ebp + (-0x10); /* 0x006DAFF9: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = 0x78u; /* 0x006DAFFC: mov dword ptr [ebp - 8], 0x78 */
    PUSH32(esp, eax); /* 0x006DB003: push eax */
    PUSH32(esp, 1); /* 0x006DB004: push 1 */
    eax = ebp + (-0x8); /* 0x006DB006: lea eax, [ebp - 8] */
    edi = ecx; /* 0x006DB009: mov edi, ecx */
    PUSH32(esp, eax); /* 0x006DB00B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DB00C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC074)); /* 0x006DB00F: call dword ptr [0x7cc074] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB015: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB21F; /* 0x006DB017: je 0x6db21f */
L_006DB01D:
    _xmm[0].u64[0] = (uint32_t)(MEM32(ebp + (-0xC))); _xmm[0].u64[1] = 0; /* 0x006DB01D: movd xmm0, dword ptr [ebp - 0xc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006DB022: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x808BEC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006DB025: mulss xmm0, dword ptr [0x808bec] */
    RECOMP_CALL(sub_00420310); /* 0x006DB02D: call 0x420310 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_007803B0); /* 0x006DB032: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006DB037: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DB039: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 0x20u); /* 0x006DB03B: mov al, 0x20 */
    MEM32(edi + 0x6C0) = esi; /* 0x006DB03D: mov dword ptr [edi + 0x6c0], esi */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x006DB043: mov byte ptr [ebp - 1], al */
L_006DB046:
    SET_LO16(eax, (uint16_t)(int16_t)(int8_t)LO8(eax)); /* 0x006DB046: cbw  */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x006DB048: mov word ptr [ebp - 8], ax */
    eax = ebp + (-0x10); /* 0x006DB04C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x006DB04F: push eax */
    PUSH32(esp, 1); /* 0x006DB050: push 1 */
    eax = ebp + (-0x8); /* 0x006DB052: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006DB055: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DB056: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC074)); /* 0x006DB059: call dword ptr [0x7cc074] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB05F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB21F; /* 0x006DB061: je 0x6db21f */
L_006DB067:
    ecx = MEM32(edi + 0x6C0); /* 0x006DB067: mov ecx, dword ptr [edi + 0x6c0] */
    edx = MEM32(ebp + (-0x10)); /* 0x006DB06D: mov edx, dword ptr [ebp - 0x10] */
    eax = ecx + edx; /* 0x006DB070: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006DB073: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0xB4) */ /* 0x006DB075: cmp eax, dword ptr [edi + 0xb4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xB4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x006DB07B: mov eax, dword ptr [ebp - 0xc] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DB085; /* 0x006DB07E: jbe 0x6db085 */
L_006DB080:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006DB080: inc ebx */
    _flag_k = FK_INC;
    esi = ecx; /* 0x006DB081: mov esi, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x006DB083: add ebx, eax */
    _flag_k = FK_ADD;
L_006DB085:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006DB085: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0xB8) */ /* 0x006DB087: cmp eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DB211; /* 0x006DB08D: ja 0x6db211 */
L_006DB093:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x006DB093: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DB1EB; /* 0x006DB097: jne 0x6db1eb */
L_006DB09D:
    PUSH32(esp, 0); /* 0x006DB09D: push 0 */
    PUSH32(esp, 1); /* 0x006DB09F: push 1 */
    eax = ebp + (-0x8); /* 0x006DB0A1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006DB0A4: push eax */
    PUSH32(esp, 0); /* 0x006DB0A5: push 0 */
    PUSH32(esp, 2); /* 0x006DB0A7: push 2 */
    PUSH32(esp, ebx); /* 0x006DB0A9: push ebx */
    PUSH32(esp, esi); /* 0x006DB0AA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DB0AB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC058)); /* 0x006DB0AE: call dword ptr [0x7cc058] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB0B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB21F; /* 0x006DB0B6: je 0x6db21f */
L_006DB0BC:
    eax = esi; /* 0x006DB0BC: mov eax, esi */
    ecx = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x006DB0BE: movsx ecx, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x6C0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x6C0); /* 0x006DB0C2: sub eax, dword ptr [edi + 0x6c0] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x006DB0C8: mov edx, dword ptr [ebp - 0x10] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB0CB: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB0CF: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB0D3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB0D3: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB0D6: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(edi + 0xB4); /* 0x006DB0DF: mov eax, dword ptr [edi + 0xb4] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006DB0E5: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB0E9: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB0ED: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB0F1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB0F1: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB0F4: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = ecx + (-0x14); /* 0x006DB0FD: lea eax, [ecx - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006DB100: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006DB102: add eax, eax */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DB104: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006DB108: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(ebx); _xmm[0].u64[1] = 0; /* 0x006DB10C: movd xmm0, ebx */
    MEM32(edi + eax * 8) = _xmm[1].u32[0]; /* 0x006DB110: movss dword ptr [edi + eax*8], xmm1 */
    eax = ebx; /* 0x006DB115: mov eax, ebx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB117: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB11B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB11B: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB11E: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(edi + 0xB8); /* 0x006DB127: mov eax, dword ptr [edi + 0xb8] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006DB12D: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB131: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB135: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB139: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB139: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB13C: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DB145: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006DB149: divss xmm1, xmm0 */
    MEM32(edi + ecx * 8 + (-0x13C)) = _xmm[1].u32[0]; /* 0x006DB14D: movss dword ptr [edi + ecx*8 - 0x13c], xmm1 */
    eax = MEM32(edi + 0x6C0); /* 0x006DB156: mov eax, dword ptr [edi + 0x6c0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006DB15C: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006DB15E: add eax, esi */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB160: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB164: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB168: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB168: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB16B: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(edi + 0xB4); /* 0x006DB174: mov eax, dword ptr [edi + 0xb4] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006DB17A: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB17E: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB182: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB186: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB186: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB189: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(ebp + (-0xC)); /* 0x006DB192: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006DB195: add eax, ebx */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DB197: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006DB19B: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB19F: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB1A3: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB1A7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB1A7: shr eax, 0x1f */
    MEM32(edi + ecx * 8 + (-0x138)) = _xmm[1].u32[0]; /* 0x006DB1AA: movss dword ptr [edi + ecx*8 - 0x138], xmm1 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB1B3: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(edi + 0xB8); /* 0x006DB1BC: mov eax, dword ptr [edi + 0xb8] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006DB1C2: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DB1C6: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB1CA: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB1CE: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB1CE: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB1D1: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DB1DA: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006DB1DE: divss xmm1, xmm0 */
    MEM32(edi + ecx * 8 + (-0x134)) = _xmm[1].u32[0]; /* 0x006DB1E2: movss dword ptr [edi + ecx*8 - 0x134], xmm1 */
L_006DB1EB:
    eax = MEM32(edi + 0x6C0); /* 0x006DB1EB: mov eax, dword ptr [edi + 0x6c0] */
    eax = edx + eax * 2; /* 0x006DB1F1: lea eax, [edx + eax*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006DB1F4: add esi, eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x006DB1F6: mov al, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x006DB1F9: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x006DB1FB: mov byte ptr [ebp - 1], al */
    /* cmp LO8(eax), 0x7Fu */ /* 0x006DB1FE: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006DB046; /* 0x006DB200: jl 0x6db046 */
L_006DB206:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DB206: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006DB208: pop edi */
    esi = POP32_VAL(esp); /* 0x006DB209: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DB20A: pop ebx */
    esp = ebp; /* 0x006DB20B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DB20D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DB20E: ret 8 */
L_006DB211:
    eax = 0x88760867u; /* 0x006DB211: mov eax, 0x88760867 */
    edi = POP32_VAL(esp); /* 0x006DB216: pop edi */
    esi = POP32_VAL(esp); /* 0x006DB217: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DB218: pop ebx */
    esp = ebp; /* 0x006DB219: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DB21B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DB21C: ret 8 */
L_006DB21F:
    edi = POP32_VAL(esp); /* 0x006DB21F: pop edi */
    esi = POP32_VAL(esp); /* 0x006DB220: pop esi */
    eax = 0x80004005u; /* 0x006DB221: mov eax, 0x80004005 */
    ebx = POP32_VAL(esp); /* 0x006DB226: pop ebx */
    esp = ebp; /* 0x006DB227: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DB229: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DB22A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DB230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DB230u);

L_006DB230:
    PUSH32(esp, ebp); /* 0x006DB230: push ebp */
    ebp = esp; /* 0x006DB231: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006DB233: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1A8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1A8u; /* 0x006DB236: sub esp, 0x1a8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DB23C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006DB241: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1A4) = eax; /* 0x006DB243: mov dword ptr [esp + 0x1a4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006DB24A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006DB24D: push esi */
    esi = ecx; /* 0x006DB24E: mov esi, ecx */
    MEM32(esp + 0x18) = 0; /* 0x006DB250: mov dword ptr [esp + 0x18], 0 */
    PUSH32(esp, edi); /* 0x006DB258: push edi */
    PUSH32(esp, 0); /* 0x006DB259: push 0 */
    MEM32(esp + 0x24) = 0; /* 0x006DB25B: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x34) = 0; /* 0x006DB263: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x30) = 0; /* 0x006DB26B: mov dword ptr [esp + 0x30], 0 */
    MEM32(esi + 0xA8) = eax; /* 0x006DB273: mov dword ptr [esi + 0xa8], eax */
    MEM32(esi + 0xBC) = 0x3F800000u; /* 0x006DB279: mov dword ptr [esi + 0xbc], 0x3f800000 */
    RECOMP_ICALL(MEM32(0x7CC084)); /* 0x006DB283: call dword ptr [0x7cc084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB289: mov edi, eax */
    PUSH32(esp, 1); /* 0x006DB28B: push 1 */
    PUSH32(esp, edi); /* 0x006DB28D: push edi */
    MEM32(esp + 0x20) = edi; /* 0x006DB28E: mov dword ptr [esp + 0x20], edi */
    RECOMP_ICALL(MEM32(0x7CC054)); /* 0x006DB292: call dword ptr [0x7cc054] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1C; /* 0x006DB298: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x006DB29C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DB29E: push eax */
    PUSH32(esp, edi); /* 0x006DB29F: push edi */
    RECOMP_CALL(sub_006DAF60); /* 0x006DB2A0: call 0x6daf60 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB2A5: mov edi, eax */
    /* test edi, edi */ /* 0x006DB2A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB57A; /* 0x006DB2A9: js 0x6db57a */
L_006DB2AF:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006DB2AF: push dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x1C); /* 0x006DB2B3: mov edi, dword ptr [esp + 0x1c] */
    PUSH32(esp, edi); /* 0x006DB2B7: push edi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB2B8: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DB2BE: push 1 */
    PUSH32(esp, edi); /* 0x006DB2C0: push edi */
    ecx = esi; /* 0x006DB2C1: mov ecx, esi */
    MEM32(esp + 0x28) = eax; /* 0x006DB2C3: mov dword ptr [esp + 0x28], eax */
    MEM32(esi + 0xB8) = 0x80u; /* 0x006DB2C7: mov dword ptr [esi + 0xb8], 0x80 */
    MEM32(esi + 0xB4) = 0x80u; /* 0x006DB2D1: mov dword ptr [esi + 0xb4], 0x80 */
    RECOMP_CALL(sub_006DAFF0); /* 0x006DB2DB: call 0x6daff0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB2E0: mov edi, eax */
    /* cmp edi, 0x88760867u */ /* 0x006DB2E2: cmp edi, 0x88760867 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x88760867u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DB323; /* 0x006DB2E8: jne 0x6db323 */
L_006DB2EA:
    ebx = ebx; /* 0x006DB2EA: lea ebx, [ebx] */
L_006DB2F0:
    eax = MEM32(esi + 0xB4); /* 0x006DB2F0: mov eax, dword ptr [esi + 0xb4] */
    ecx = esi; /* 0x006DB2F6: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006DB2F8: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0xB4) = eax; /* 0x006DB2FA: mov dword ptr [esi + 0xb4], eax */
    eax = MEM32(esi + 0xB8); /* 0x006DB300: mov eax, dword ptr [esi + 0xb8] */
    PUSH32(esp, 1); /* 0x006DB306: push 1 */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006DB308: push dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006DB30C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0xB8) = eax; /* 0x006DB30E: mov dword ptr [esi + 0xb8], eax */
    RECOMP_CALL(sub_006DAFF0); /* 0x006DB314: call 0x6daff0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB319: mov edi, eax */
    /* cmp edi, 0x88760867u */ /* 0x006DB31B: cmp edi, 0x88760867 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x88760867u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DB2F0; /* 0x006DB321: je 0x6db2f0 */
L_006DB323:
    /* test edi, edi */ /* 0x006DB323: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB57A; /* 0x006DB325: js 0x6db57a */
L_006DB32B:
    eax = MEM32(esi + 0xA8); /* 0x006DB32B: mov eax, dword ptr [esi + 0xa8] */
    edx = esp + 0x78; /* 0x006DB331: lea edx, [esp + 0x78] */
    PUSH32(esp, edx); /* 0x006DB335: push edx */
    PUSH32(esp, eax); /* 0x006DB336: push eax */
    ecx = MEM32(eax); /* 0x006DB337: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x006DB339: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xB4); /* 0x006DB33C: mov edx, dword ptr [esi + 0xb4] */
    ecx = MEM32(esp + 0xD0); /* 0x006DB342: mov ecx, dword ptr [esp + 0xd0] */
    /* cmp edx, ecx */ /* 0x006DB349: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DB413; /* 0x006DB34B: jbe 0x6db413 */
L_006DB351:
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x006DB351: movd xmm0, ecx */
    eax = ecx; /* 0x006DB355: mov eax, ecx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB357: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DB35B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DB35B: shr eax, 0x1f */
    edi = MEM32(esp + 0x18); /* 0x006DB35E: mov edi, dword ptr [esp + 0x18] */
    MEM32(esi + 0xB8) = ecx; /* 0x006DB362: mov dword ptr [esi + 0xb8], ecx */
    MEM32(esi + 0xB4) = ecx; /* 0x006DB368: mov dword ptr [esi + 0xb4], ecx */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB36E: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    SET_LO8(eax, 1); /* 0x006DB377: mov al, 1 */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006DB379: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x006DB37D: movd xmm0, edx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DB381: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x006DB385: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x006DB385: shr edx, 0x1f */
    { double _s = sse_f64(MEM64(edx * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DB388: addsd xmm0, qword ptr [edx*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DB391: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006DB395: divss xmm1, xmm0 */
    MEM32(esi + 0xBC) = _xmm[1].u32[0]; /* 0x006DB399: movss dword ptr [esi + 0xbc], xmm1 */
L_006DB3A1:
    /* test LO8(eax), LO8(eax) */ /* 0x006DB3A1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DB3BD; /* 0x006DB3A3: jne 0x6db3bd */
L_006DB3A5:
    _xmm[0].u64[0] = MEM32(esi + 0xBC); _xmm[0].u64[1] = 0; /* 0x006DB3A5: movss xmm0, dword ptr [esi + 0xbc] */
    { float _s = sse_f32(MEM32(0x808C78)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006DB3AD: mulss xmm0, dword ptr [0x808c78] */
    MEM32(esi + 0xBC) = _xmm[0].u32[0]; /* 0x006DB3B5: movss dword ptr [esi + 0xbc], xmm0 */
L_006DB3BD:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x006DB3BD: push dword ptr [esp + 0x20] */
    PUSH32(esp, edi); /* 0x006DB3C1: push edi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB3C2: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DB3C8: push eax */
    RECOMP_ICALL(MEM32(0x7CC07C)); /* 0x006DB3C9: call dword ptr [0x7cc07c] */
    RECOMP_FLAGS_IN();
    eax = esp + 0x1C; /* 0x006DB3CF: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x006DB3D3: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DB3D5: push eax */
    PUSH32(esp, edi); /* 0x006DB3D6: push edi */
    RECOMP_CALL(sub_006DAF60); /* 0x006DB3D7: call 0x6daf60 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB3DC: mov edi, eax */
    /* test edi, edi */ /* 0x006DB3DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB57A; /* 0x006DB3E0: js 0x6db57a */
L_006DB3E6:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006DB3E6: push dword ptr [esp + 0x1c] */
    edi = MEM32(esp + 0x1C); /* 0x006DB3EA: mov edi, dword ptr [esp + 0x1c] */
    PUSH32(esp, edi); /* 0x006DB3EE: push edi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB3EF: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DB3F5: push 1 */
    PUSH32(esp, edi); /* 0x006DB3F7: push edi */
    ecx = esi; /* 0x006DB3F8: mov ecx, esi */
    MEM32(esp + 0x28) = eax; /* 0x006DB3FA: mov dword ptr [esp + 0x28], eax */
    MEM8(esp + 0x1F) = (uint8_t)(0); /* 0x006DB3FE: mov byte ptr [esp + 0x1f], 0 */
    RECOMP_CALL(sub_006DAFF0); /* 0x006DB403: call 0x6daff0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x88760867u */ /* 0x006DB408: cmp eax, 0x88760867 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x88760867u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(esp + 0x17)); /* 0x006DB40D: mov al, byte ptr [esp + 0x17] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DB3A1; /* 0x006DB411: je 0x6db3a1 */
L_006DB413:
    ecx = MEM32(esi + 0xA8); /* 0x006DB413: mov ecx, dword ptr [esi + 0xa8] */
    edx = esi + 0xAC; /* 0x006DB419: lea edx, [esi + 0xac] */
    PUSH32(esp, 0); /* 0x006DB41F: push 0 */
    PUSH32(esp, edx); /* 0x006DB421: push edx */
    PUSH32(esp, 1); /* 0x006DB422: push 1 */
    eax = MEM32(ecx); /* 0x006DB424: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x1Au); /* 0x006DB426: push 0x1a */
    PUSH32(esp, 0); /* 0x006DB428: push 0 */
    PUSH32(esp, 1); /* 0x006DB42A: push 1 */
    PUSH32(esp, MEM32(esi + 0xB8)); /* 0x006DB42C: push dword ptr [esi + 0xb8] */
    PUSH32(esp, MEM32(esi + 0xB4)); /* 0x006DB432: push dword ptr [esi + 0xb4] */
    PUSH32(esp, ecx); /* 0x006DB438: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x006DB439: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB43C: mov edi, eax */
    /* test edi, edi */ /* 0x006DB43E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB57A; /* 0x006DB440: js 0x6db57a */
L_006DB446:
    eax = MEM32(esi + 0xB4); /* 0x006DB446: mov eax, dword ptr [esi + 0xb4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DB44C: xorps xmm0, xmm0 */
    edi = MEM32(esp + 0x18); /* 0x006DB44F: mov edi, dword ptr [esp + 0x18] */
    xmm_st(esp + 0x40, _xmm[0]); /* 0x006DB453: movdqa xmmword ptr [esp + 0x40], xmm0 */
    MEM32(esp + 0x44) = eax; /* 0x006DB459: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(esi + 0xB8); /* 0x006DB45D: mov eax, dword ptr [esi + 0xb8] */
    PUSH32(esp, 0); /* 0x006DB463: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006DB465: neg eax */
    _flag_k = FK_CMP;
    xmm_st(esp + 0x54, _xmm[0]); /* 0x006DB467: movdqa xmmword ptr [esp + 0x54], xmm0 */
    PUSH32(esp, 0); /* 0x006DB46D: push 0 */
    MEM32(esp + 0x50) = eax; /* 0x006DB46F: mov dword ptr [esp + 0x50], eax */
    eax = esp + 0x3C; /* 0x006DB473: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x006DB477: push eax */
    PUSH32(esp, 0); /* 0x006DB478: push 0 */
    eax = esp + 0x50; /* 0x006DB47A: lea eax, [esp + 0x50] */
    MEM64(esp + 0x70) = _xmm[0].u64[0]; /* 0x006DB47E: movq qword ptr [esp + 0x70], xmm0 */
    PUSH32(esp, eax); /* 0x006DB484: push eax */
    PUSH32(esp, edi); /* 0x006DB485: push edi */
    MEM32(esp + 0x58) = 0x28u; /* 0x006DB486: mov dword ptr [esp + 0x58], 0x28 */
    MEM32(esp + 0x64) = 0x00200001u; /* 0x006DB48E: mov dword ptr [esp + 0x64], 0x200001 */
    MEM32(esp + 0x68) = 0; /* 0x006DB496: mov dword ptr [esp + 0x68], 0 */
    RECOMP_ICALL(MEM32(0x7CC048)); /* 0x006DB49E: call dword ptr [0x7cc048] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DB4A4: push eax */
    PUSH32(esp, edi); /* 0x006DB4A5: push edi */
    MEM32(esp + 0x38) = eax; /* 0x006DB4A6: mov dword ptr [esp + 0x38], eax */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB4AA: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00FFFFFFu); /* 0x006DB4B0: push 0xffffff */
    PUSH32(esp, edi); /* 0x006DB4B5: push edi */
    MEM32(esp + 0x34) = eax; /* 0x006DB4B6: mov dword ptr [esp + 0x34], eax */
    RECOMP_ICALL(MEM32(0x7CC06C)); /* 0x006DB4BA: call dword ptr [0x7cc06c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DB4C0: push 0 */
    PUSH32(esp, edi); /* 0x006DB4C2: push edi */
    RECOMP_ICALL(MEM32(0x7CC050)); /* 0x006DB4C3: call dword ptr [0x7cc050] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DB4C9: push 0 */
    PUSH32(esp, edi); /* 0x006DB4CB: push edi */
    RECOMP_ICALL(MEM32(0x7CC05C)); /* 0x006DB4CC: call dword ptr [0x7cc05c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DB4D2: push 0 */
    PUSH32(esp, edi); /* 0x006DB4D4: push edi */
    ecx = esi; /* 0x006DB4D5: mov ecx, esi */
    RECOMP_CALL(sub_006DAFF0); /* 0x006DB4D7: call 0x6daff0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DB4DC: mov edi, eax */
    /* test edi, edi */ /* 0x006DB4DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB57A; /* 0x006DB4E0: js 0x6db57a */
L_006DB4E6:
    eax = MEM32(esi + 0xAC); /* 0x006DB4E6: mov eax, dword ptr [esi + 0xac] */
    edx = esp + 0x38; /* 0x006DB4EC: lea edx, [esp + 0x38] */
    PUSH32(esp, 0); /* 0x006DB4F0: push 0 */
    PUSH32(esp, 0); /* 0x006DB4F2: push 0 */
    PUSH32(esp, edx); /* 0x006DB4F4: push edx */
    ecx = MEM32(eax); /* 0x006DB4F5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006DB4F7: push 0 */
    PUSH32(esp, eax); /* 0x006DB4F9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x006DB4FA: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x3C); /* 0x006DB4FD: mov ecx, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DB501: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = ecx; /* 0x006DB503: mov dword ptr [esp + 0x28], ecx */
    MEM32(esp + 0x24) = eax; /* 0x006DB507: mov dword ptr [esp + 0x24], eax */
    /* cmp MEM32(esi + 0xB8), eax */ /* 0x006DB50B: cmp dword ptr [esi + 0xb8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DB578; /* 0x006DB511: jbe 0x6db578 */
L_006DB513:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DB513: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x006DB515: mov edx, ecx */
    /* cmp MEM32(esi + 0xB4), edi */ /* 0x006DB517: cmp dword ptr [esi + 0xb4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DB563; /* 0x006DB51D: jbe 0x6db563 */
L_006DB51F:
    /* nop */ /* 0x006DB51F: nop  */
L_006DB520:
    ecx = MEM32(esi + 0xB4); /* 0x006DB520: mov ecx, dword ptr [esi + 0xb4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006DB526: imul ecx, eax */
    eax = MEM32(esp + 0x34); /* 0x006DB529: mov eax, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x006DB52D: add ecx, edi */
    _flag_k = FK_ADD;
    eax = MEM32(eax + ecx * 4); /* 0x006DB52F: mov eax, dword ptr [eax + ecx*4] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x006DB532: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x006DB532: shr eax, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x006DB535: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB54A; /* 0x006DB537: jbe 0x6db54a */
L_006DB539:
    eax = (uint32_t)LO8(eax); /* 0x006DB539: movzx eax, al */
    ecx = 0xFFFu; /* 0x006DB53C: mov ecx, 0xfff */
    if (12u) _cf = (((LO16(eax)) >> 4) & 1u); /* 0x006DB541: shl ax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << 12u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << 12u); /* 0x006DB541: shl ax, 0xc */
    _flag_a = (uint32_t)((LO16(eax) | LO16(ecx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(ecx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(ecx)); /* 0x006DB545: or ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_006DB54C; /* 0x006DB548: jmp 0x6db54c */
L_006DB54A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DB54A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DB54C:
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x006DB54C: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006DB54F: inc edi */
    _flag_k = FK_INC;
    eax = MEM32(esp + 0x24); /* 0x006DB550: mov eax, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x006DB554: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0xB4) */ /* 0x006DB557: cmp edi, dword ptr [esi + 0xb4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xB4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DB520; /* 0x006DB55D: jb 0x6db520 */
L_006DB55F:
    ecx = MEM32(esp + 0x28); /* 0x006DB55F: mov ecx, dword ptr [esp + 0x28] */
L_006DB563:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esp + 0x38); /* 0x006DB563: add ecx, dword ptr [esp + 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006DB567: inc eax */
    _flag_k = FK_INC;
    MEM32(esp + 0x28) = ecx; /* 0x006DB568: mov dword ptr [esp + 0x28], ecx */
    MEM32(esp + 0x24) = eax; /* 0x006DB56C: mov dword ptr [esp + 0x24], eax */
    /* cmp eax, MEM32(esi + 0xB8) */ /* 0x006DB570: cmp eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DB513; /* 0x006DB576: jb 0x6db513 */
L_006DB578:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DB578: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DB57A:
    ecx = MEM32(esi + 0xAC); /* 0x006DB57A: mov ecx, dword ptr [esi + 0xac] */
    /* test ecx, ecx */ /* 0x006DB580: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB58C; /* 0x006DB582: je 0x6db58c */
L_006DB584:
    eax = MEM32(ecx); /* 0x006DB584: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006DB586: push 0 */
    PUSH32(esp, ecx); /* 0x006DB588: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x006DB589: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
L_006DB58C:
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x006DB58C: push dword ptr [esp + 0x2c] */
    esi = MEM32(esp + 0x1C); /* 0x006DB590: mov esi, dword ptr [esp + 0x1c] */
    PUSH32(esp, esi); /* 0x006DB594: push esi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB595: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x006DB59B: push dword ptr [esp + 0x20] */
    PUSH32(esp, esi); /* 0x006DB59F: push esi */
    RECOMP_ICALL(MEM32(0x7CC080)); /* 0x006DB5A0: call dword ptr [0x7cc080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x30)); /* 0x006DB5A6: push dword ptr [esp + 0x30] */
    RECOMP_ICALL(MEM32(0x7CC07C)); /* 0x006DB5AA: call dword ptr [0x7cc07c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006DB5B0: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC07C)); /* 0x006DB5B4: call dword ptr [0x7cc07c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DB5BA: push esi */
    RECOMP_ICALL(MEM32(0x7CC070)); /* 0x006DB5BB: call dword ptr [0x7cc070] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1AC); /* 0x006DB5C1: mov ecx, dword ptr [esp + 0x1ac] */
    eax = edi; /* 0x006DB5C8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006DB5CA: pop edi */
    esi = POP32_VAL(esp); /* 0x006DB5CB: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DB5CC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DB5CE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DB5D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DB5D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DB5D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DB5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DB5E0u);

L_006DB5E0:
    PUSH32(esp, ebp); /* 0x006DB5E0: push ebp */
    ebp = esp; /* 0x006DB5E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x174u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x174u; /* 0x006DB5E3: sub esp, 0x174 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DB5E9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DB5EE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DB5F0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006DB5F3: push ebx */
    PUSH32(esp, esi); /* 0x006DB5F4: push esi */
    PUSH32(esp, edi); /* 0x006DB5F5: push edi */
    esi = ecx; /* 0x006DB5F6: mov esi, ecx */
    PUSH32(esp, 0); /* 0x006DB5F8: push 0 */
    ecx = MEM32(esi + 0xA8); /* 0x006DB5FA: mov ecx, dword ptr [esi + 0xa8] */
    eax = esi + 0xB0; /* 0x006DB600: lea eax, [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x006DB606: push eax */
    PUSH32(esp, 0); /* 0x006DB607: push 0 */
    PUSH32(esp, 0); /* 0x006DB609: push 0 */
    edx = MEM32(ecx); /* 0x006DB60B: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0x208u); /* 0x006DB60D: push 0x208 */
    PUSH32(esp, 0x2580u); /* 0x006DB612: push 0x2580 */
    PUSH32(esp, ecx); /* 0x006DB617: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x006DB618: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB61B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB9C9; /* 0x006DB61D: js 0x6db9c9 */
L_006DB623:
    eax = MEM32(esi + 0xA8); /* 0x006DB623: mov eax, dword ptr [esi + 0xa8] */
    edx = ebp + (-0x170); /* 0x006DB629: lea edx, [ebp - 0x170] */
    MEM32(ebp + (-0x170)) = 0; /* 0x006DB62F: mov dword ptr [ebp - 0x170], 0 */
    SET_LO8(ebx, 1); /* 0x006DB639: mov bl, 1 */
    PUSH32(esp, edx); /* 0x006DB63B: push edx */
    PUSH32(esp, eax); /* 0x006DB63C: push eax */
    ecx = MEM32(eax); /* 0x006DB63D: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x006DB63F: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB642: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB708; /* 0x006DB644: js 0x6db708 */
L_006DB64A:
    eax = MEM32(esi + 0xA8); /* 0x006DB64A: mov eax, dword ptr [esi + 0xa8] */
    edx = ebp + (-0x168); /* 0x006DB650: lea edx, [ebp - 0x168] */
    MEM32(ebp + (-0x16C)) = 0; /* 0x006DB656: mov dword ptr [ebp - 0x16c], 0 */
    PUSH32(esp, edx); /* 0x006DB660: push edx */
    PUSH32(esp, eax); /* 0x006DB661: push eax */
    ecx = MEM32(eax); /* 0x006DB662: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x006DB664: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB667: mov eax, dword ptr [esi + 0xa8] */
    edx = ebp + (-0x14); /* 0x006DB66D: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x006DB670: push edx */
    PUSH32(esp, 0); /* 0x006DB671: push 0 */
    PUSH32(esp, eax); /* 0x006DB673: push eax */
    ecx = MEM32(eax); /* 0x006DB674: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x006DB676: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB679: mov eax, dword ptr [esi + 0xa8] */
    edx = ebp + (-0x16C); /* 0x006DB67F: lea edx, [ebp - 0x16c] */
    PUSH32(esp, edx); /* 0x006DB685: push edx */
    PUSH32(esp, 0); /* 0x006DB686: push 0 */
    PUSH32(esp, eax); /* 0x006DB688: push eax */
    ecx = MEM32(eax); /* 0x006DB689: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x98)); /* 0x006DB68B: call dword ptr [ecx + 0x98] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DB691: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DB6EE; /* 0x006DB693: js 0x6db6ee */
L_006DB695:
    eax = MEM32(ebp + (-0x16C)); /* 0x006DB695: mov eax, dword ptr [ebp - 0x16c] */
    edx = ebp + (-0x34); /* 0x006DB69B: lea edx, [ebp - 0x34] */
    PUSH32(esp, edx); /* 0x006DB69E: push edx */
    PUSH32(esp, eax); /* 0x006DB69F: push eax */
    ecx = MEM32(eax); /* 0x006DB6A0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006DB6A2: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x006DB6A5: push dword ptr [ebp - 0x34] */
    eax = MEM32(ebp + (-0x170)); /* 0x006DB6A8: mov eax, dword ptr [ebp - 0x170] */
    PUSH32(esp, 1); /* 0x006DB6AE: push 1 */
    PUSH32(esp, 0x00080001u); /* 0x006DB6B0: push 0x80001 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006DB6B5: push dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x006DB6B8: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x168))); /* 0x006DB6BA: push dword ptr [ebp - 0x168] */
    PUSH32(esp, MEM32(ebp + (-0x164))); /* 0x006DB6C0: push dword ptr [ebp - 0x164] */
    PUSH32(esp, eax); /* 0x006DB6C6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x006DB6C7: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DB6CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)LO8(ebx); /* 0x006DB6CC: movzx ebx, bl */
    /* test eax, eax */ /* 0x006DB6CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { ebx = ecx; } /* 0x006DB6D1: cmovs ebx, ecx */
    ecx = MEM32(ebp + (-0x16C)); /* 0x006DB6D4: mov ecx, dword ptr [ebp - 0x16c] */
    /* test ecx, ecx */ /* 0x006DB6DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB6EE; /* 0x006DB6DC: je 0x6db6ee */
L_006DB6DE:
    eax = MEM32(ecx); /* 0x006DB6DE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DB6E0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DB6E1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x16C)) = 0; /* 0x006DB6E4: mov dword ptr [ebp - 0x16c], 0 */
L_006DB6EE:
    ecx = MEM32(ebp + (-0x170)); /* 0x006DB6EE: mov ecx, dword ptr [ebp - 0x170] */
    /* test ecx, ecx */ /* 0x006DB6F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB708; /* 0x006DB6F6: je 0x6db708 */
L_006DB6F8:
    eax = MEM32(ecx); /* 0x006DB6F8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DB6FA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DB6FB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x170)) = 0; /* 0x006DB6FE: mov dword ptr [ebp - 0x170], 0 */
L_006DB708:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DB708: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx; /* 0x006DB70A: lea ebx, [ebx] */
L_006DB710:
    eax = MEM32(esi + 0xA8); /* 0x006DB710: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, eax); /* 0x006DB716: push eax */
    ecx = MEM32(eax); /* 0x006DB717: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x006DB719: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB71F: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x006DB725: push dword ptr [esi + 0xac] */
    PUSH32(esp, 0); /* 0x006DB72B: push 0 */
    ecx = MEM32(eax); /* 0x006DB72D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB72F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x006DB730: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0xA4), 4 */ /* 0x006DB736: test byte ptr [esi + 0xa4], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0xA4)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi + 0xA8); /* 0x006DB73D: mov eax, dword ptr [esi + 0xa8] */
    ecx = MEM32(eax); /* 0x006DB743: mov ecx, dword ptr [eax] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB74B; /* 0x006DB745: je 0x6db74b */
L_006DB747:
    PUSH32(esp, 1); /* 0x006DB747: push 1 */
    goto L_006DB74D; /* 0x006DB749: jmp 0x6db74d */
L_006DB74B:
    PUSH32(esp, 0); /* 0x006DB74B: push 0 */
L_006DB74D:
    PUSH32(esp, 7); /* 0x006DB74D: push 7 */
    PUSH32(esp, eax); /* 0x006DB74F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB750: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB756: mov eax, dword ptr [esi + 0xa8] */
    ecx = MEM32(eax); /* 0x006DB75C: mov ecx, dword ptr [eax] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x006DB75E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB78E; /* 0x006DB760: je 0x6db78e */
L_006DB762:
    PUSH32(esp, 1); /* 0x006DB762: push 1 */
    PUSH32(esp, 0x1Bu); /* 0x006DB764: push 0x1b */
    PUSH32(esp, eax); /* 0x006DB766: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB767: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB76D: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 5); /* 0x006DB773: push 5 */
    PUSH32(esp, 0x13u); /* 0x006DB775: push 0x13 */
    PUSH32(esp, eax); /* 0x006DB777: push eax */
    ecx = MEM32(eax); /* 0x006DB778: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB77A: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB780: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 6); /* 0x006DB786: push 6 */
    PUSH32(esp, 0x14u); /* 0x006DB788: push 0x14 */
    ecx = MEM32(eax); /* 0x006DB78A: mov ecx, dword ptr [eax] */
    goto L_006DB792; /* 0x006DB78C: jmp 0x6db792 */
L_006DB78E:
    PUSH32(esp, 0); /* 0x006DB78E: push 0 */
    PUSH32(esp, 0x1Bu); /* 0x006DB790: push 0x1b */
L_006DB792:
    PUSH32(esp, eax); /* 0x006DB792: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB793: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB799: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB79F: push 1 */
    PUSH32(esp, 0xFu); /* 0x006DB7A1: push 0xf */
    PUSH32(esp, eax); /* 0x006DB7A3: push eax */
    ecx = MEM32(eax); /* 0x006DB7A4: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB7A6: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB7AC: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 8); /* 0x006DB7B2: push 8 */
    PUSH32(esp, 0x18u); /* 0x006DB7B4: push 0x18 */
    PUSH32(esp, eax); /* 0x006DB7B6: push eax */
    ecx = MEM32(eax); /* 0x006DB7B7: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB7B9: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB7BF: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 7); /* 0x006DB7C5: push 7 */
    PUSH32(esp, 0x19u); /* 0x006DB7C7: push 0x19 */
    PUSH32(esp, eax); /* 0x006DB7C9: push eax */
    ecx = MEM32(eax); /* 0x006DB7CA: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB7CC: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB7D2: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 3); /* 0x006DB7D8: push 3 */
    PUSH32(esp, 8); /* 0x006DB7DA: push 8 */
    PUSH32(esp, eax); /* 0x006DB7DC: push eax */
    ecx = MEM32(eax); /* 0x006DB7DD: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB7DF: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB7E5: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 3); /* 0x006DB7EB: push 3 */
    PUSH32(esp, 0x16u); /* 0x006DB7ED: push 0x16 */
    PUSH32(esp, eax); /* 0x006DB7EF: push eax */
    ecx = MEM32(eax); /* 0x006DB7F0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB7F2: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB7F8: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB7FE: push 0 */
    PUSH32(esp, 0x34u); /* 0x006DB800: push 0x34 */
    PUSH32(esp, eax); /* 0x006DB802: push eax */
    ecx = MEM32(eax); /* 0x006DB803: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB805: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB80B: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB811: push 1 */
    PUSH32(esp, 0x88u); /* 0x006DB813: push 0x88 */
    PUSH32(esp, eax); /* 0x006DB818: push eax */
    ecx = MEM32(eax); /* 0x006DB819: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB81B: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB821: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB827: push 0 */
    PUSH32(esp, 0x98u); /* 0x006DB829: push 0x98 */
    PUSH32(esp, eax); /* 0x006DB82E: push eax */
    ecx = MEM32(eax); /* 0x006DB82F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB831: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB837: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB83D: push 0 */
    PUSH32(esp, 0x97u); /* 0x006DB83F: push 0x97 */
    PUSH32(esp, eax); /* 0x006DB844: push eax */
    ecx = MEM32(eax); /* 0x006DB845: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB847: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB84D: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB853: push 0 */
    PUSH32(esp, 0xA7u); /* 0x006DB855: push 0xa7 */
    PUSH32(esp, eax); /* 0x006DB85A: push eax */
    ecx = MEM32(eax); /* 0x006DB85B: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB85D: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB863: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB869: push 0 */
    PUSH32(esp, 0x1Cu); /* 0x006DB86B: push 0x1c */
    PUSH32(esp, eax); /* 0x006DB86D: push eax */
    ecx = MEM32(eax); /* 0x006DB86E: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB870: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB876: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0xFu); /* 0x006DB87C: push 0xf */
    PUSH32(esp, 0xA8u); /* 0x006DB87E: push 0xa8 */
    PUSH32(esp, eax); /* 0x006DB883: push eax */
    ecx = MEM32(eax); /* 0x006DB884: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006DB886: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB88C: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 4); /* 0x006DB892: push 4 */
    PUSH32(esp, 1); /* 0x006DB894: push 1 */
    PUSH32(esp, 0); /* 0x006DB896: push 0 */
    ecx = MEM32(eax); /* 0x006DB898: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB89A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB89B: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB8A1: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 2); /* 0x006DB8A7: push 2 */
    PUSH32(esp, 2); /* 0x006DB8A9: push 2 */
    PUSH32(esp, 0); /* 0x006DB8AB: push 0 */
    ecx = MEM32(eax); /* 0x006DB8AD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB8AF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB8B0: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB8B6: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB8BC: push 0 */
    PUSH32(esp, 3); /* 0x006DB8BE: push 3 */
    PUSH32(esp, 0); /* 0x006DB8C0: push 0 */
    ecx = MEM32(eax); /* 0x006DB8C2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB8C4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB8C5: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB8CB: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 4); /* 0x006DB8D1: push 4 */
    PUSH32(esp, 4); /* 0x006DB8D3: push 4 */
    PUSH32(esp, 0); /* 0x006DB8D5: push 0 */
    ecx = MEM32(eax); /* 0x006DB8D7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB8D9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB8DA: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB8E0: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 2); /* 0x006DB8E6: push 2 */
    PUSH32(esp, 5); /* 0x006DB8E8: push 5 */
    PUSH32(esp, 0); /* 0x006DB8EA: push 0 */
    ecx = MEM32(eax); /* 0x006DB8EC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB8EE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB8EF: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB8F5: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB8FB: push 0 */
    PUSH32(esp, 6); /* 0x006DB8FD: push 6 */
    PUSH32(esp, 0); /* 0x006DB8FF: push 0 */
    ecx = MEM32(eax); /* 0x006DB901: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB903: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB904: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB90A: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB910: push 0 */
    PUSH32(esp, 0xBu); /* 0x006DB912: push 0xb */
    PUSH32(esp, 0); /* 0x006DB914: push 0 */
    ecx = MEM32(eax); /* 0x006DB916: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB918: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB919: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB91F: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB925: push 0 */
    PUSH32(esp, 0x18u); /* 0x006DB927: push 0x18 */
    PUSH32(esp, 0); /* 0x006DB929: push 0 */
    ecx = MEM32(eax); /* 0x006DB92B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB92D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB92E: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB934: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB93A: push 1 */
    PUSH32(esp, 1); /* 0x006DB93C: push 1 */
    PUSH32(esp, 1); /* 0x006DB93E: push 1 */
    ecx = MEM32(eax); /* 0x006DB940: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB942: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB943: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB949: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB94F: push 1 */
    PUSH32(esp, 4); /* 0x006DB951: push 4 */
    PUSH32(esp, 1); /* 0x006DB953: push 1 */
    ecx = MEM32(eax); /* 0x006DB955: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB957: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006DB958: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB95E: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB964: push 1 */
    PUSH32(esp, 6); /* 0x006DB966: push 6 */
    PUSH32(esp, 0); /* 0x006DB968: push 0 */
    ecx = MEM32(eax); /* 0x006DB96A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB96C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006DB96D: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB973: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 1); /* 0x006DB979: push 1 */
    PUSH32(esp, 5); /* 0x006DB97B: push 5 */
    PUSH32(esp, 0); /* 0x006DB97D: push 0 */
    ecx = MEM32(eax); /* 0x006DB97F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DB981: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006DB982: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DB988: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DB98E: push 0 */
    PUSH32(esp, 7); /* 0x006DB990: push 7 */
    ecx = MEM32(eax); /* 0x006DB992: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006DB994: push 0 */
    PUSH32(esp, eax); /* 0x006DB996: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006DB997: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xA8); /* 0x006DB99D: mov ecx, dword ptr [esi + 0xa8] */
    eax = esi + 0x6C4; /* 0x006DB9A3: lea eax, [esi + 0x6c4] */
    edx = MEM32(ecx); /* 0x006DB9A9: mov edx, dword ptr [ecx] */
    /* test edi, edi */ /* 0x006DB9AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB9B5; /* 0x006DB9AD: je 0x6db9b5 */
L_006DB9AF:
    eax = esi + 0x6C8; /* 0x006DB9AF: lea eax, [esi + 0x6c8] */
L_006DB9B5:
    PUSH32(esp, eax); /* 0x006DB9B5: push eax */
    PUSH32(esp, ecx); /* 0x006DB9B6: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xF4)); /* 0x006DB9B7: call dword ptr [edx + 0xf4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006DB9BD: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 2 */ /* 0x006DB9BE: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DB710; /* 0x006DB9C1: jb 0x6db710 */
L_006DB9C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DB9C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DB9C9:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DB9C9: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006DB9CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006DB9CD: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DB9CE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DB9D0: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DB9D1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DB9D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DB9D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DB9D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DB9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DB9E0u);

L_006DB9E0:
    PUSH32(esp, esi); /* 0x006DB9E0: push esi */
    esi = ecx; /* 0x006DB9E1: mov esi, ecx */
    ecx = MEM32(esi + 0xB0); /* 0x006DB9E3: mov ecx, dword ptr [esi + 0xb0] */
    /* test ecx, ecx */ /* 0x006DB9E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DB9FD; /* 0x006DB9EB: je 0x6db9fd */
L_006DB9ED:
    eax = MEM32(ecx); /* 0x006DB9ED: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DB9EF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DB9F0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xB0) = 0; /* 0x006DB9F3: mov dword ptr [esi + 0xb0], 0 */
L_006DB9FD:
    ecx = MEM32(esi + 0x6C4); /* 0x006DB9FD: mov ecx, dword ptr [esi + 0x6c4] */
    /* test ecx, ecx */ /* 0x006DBA03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBA17; /* 0x006DBA05: je 0x6dba17 */
L_006DBA07:
    eax = MEM32(ecx); /* 0x006DBA07: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DBA09: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DBA0A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C4) = 0; /* 0x006DBA0D: mov dword ptr [esi + 0x6c4], 0 */
L_006DBA17:
    ecx = MEM32(esi + 0x6C8); /* 0x006DBA17: mov ecx, dword ptr [esi + 0x6c8] */
    /* test ecx, ecx */ /* 0x006DBA1D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBA31; /* 0x006DBA1F: je 0x6dba31 */
L_006DBA21:
    eax = MEM32(ecx); /* 0x006DBA21: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DBA23: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DBA24: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C8) = 0; /* 0x006DBA27: mov dword ptr [esi + 0x6c8], 0 */
L_006DBA31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DBA31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006DBA33: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DBA34: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DBA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DBA40u);

L_006DBA40:
    PUSH32(esp, ebp); /* 0x006DBA40: push ebp */
    ebp = esp; /* 0x006DBA41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x006DBA43: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006DBA46: push ebx */
    PUSH32(esp, esi); /* 0x006DBA47: push esi */
    esi = ecx; /* 0x006DBA48: mov esi, ecx */
    MEM32(ebp + (-0x40)) = _xmm[2].u32[0]; /* 0x006DBA4A: movss dword ptr [ebp - 0x40], xmm2 */
    PUSH32(esp, edi); /* 0x006DBA4F: push edi */
    MEM32(ebp + (-0x30)) = _xmm[1].u32[0]; /* 0x006DBA50: movss dword ptr [ebp - 0x30], xmm1 */
    /* cmp MEM32(esi + 0xA8), 0 */ /* 0x006DBA55: cmp dword ptr [esi + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DBA6C; /* 0x006DBA5C: jne 0x6dba6c */
L_006DBA5E:
    eax = 0x80004005u; /* 0x006DBA5E: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x006DBA63: pop edi */
    esi = POP32_VAL(esp); /* 0x006DBA64: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DBA65: pop ebx */
    esp = ebp; /* 0x006DBA66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DBA68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006DBA69: ret 0xc */
L_006DBA6C:
    eax = MEM32(esi + 0x6C4); /* 0x006DBA6C: mov eax, dword ptr [esi + 0x6c4] */
    PUSH32(esp, eax); /* 0x006DBA72: push eax */
    ecx = MEM32(eax); /* 0x006DBA73: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x006DBA75: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x6C8); /* 0x006DBA78: mov eax, dword ptr [esi + 0x6c8] */
    PUSH32(esp, eax); /* 0x006DBA7E: push eax */
    ecx = MEM32(eax); /* 0x006DBA7F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x006DBA81: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DBA84: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0x144u); /* 0x006DBA8A: push 0x144 */
    PUSH32(esp, eax); /* 0x006DBA8F: push eax */
    ecx = MEM32(eax); /* 0x006DBA90: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x164)); /* 0x006DBA92: call dword ptr [ecx + 0x164] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DBA98: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0); /* 0x006DBA9E: push 0 */
    PUSH32(esp, eax); /* 0x006DBAA0: push eax */
    ecx = MEM32(eax); /* 0x006DBAA1: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x006DBAA3: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DBAA9: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, 0x1Cu); /* 0x006DBAAF: push 0x1c */
    PUSH32(esp, 0); /* 0x006DBAB1: push 0 */
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x006DBAB3: push dword ptr [esi + 0xb0] */
    ecx = MEM32(eax); /* 0x006DBAB9: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006DBABB: push 0 */
    PUSH32(esp, eax); /* 0x006DBABD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x006DBABE: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x6C0); /* 0x006DBAC4: mov eax, dword ptr [esi + 0x6c0] */
    edx = ebp + (-0x8); /* 0x006DBACA: lea edx, [ebp - 8] */
    _xmm[1].u64[0] = MEM32(ebp + (-0x30)); _xmm[1].u64[1] = 0; /* 0x006DBACD: movss xmm1, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DBAD2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2000u); /* 0x006DBAD4: push 0x2000 */
    PUSH32(esp, edx); /* 0x006DBAD9: push edx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DBADA: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DBADE: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DBAE2: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DBAE2: shr eax, 0x1f */
    PUSH32(esp, ebx); /* 0x006DBAE5: push ebx */
    MEM32(ebp + (-0x8)) = 0; /* 0x006DBAE6: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, ebx); /* 0x006DBAED: push ebx */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DBAEE: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(esi + 0xB0); /* 0x006DBAF7: mov eax, dword ptr [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x006DBAFD: push eax */
    ecx = MEM32(eax); /* 0x006DBAFE: mov ecx, dword ptr [eax] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DBB00: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006DBB04: subss xmm1, xmm0 */
    MEM32(ebp + (-0x30)) = _xmm[1].u32[0]; /* 0x006DBB08: movss dword ptr [ebp - 0x30], xmm1 */
    MEM32(ebp + (-0x44)) = _xmm[1].u32[0]; /* 0x006DBB0D: movss dword ptr [ebp - 0x44], xmm1 */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x006DBB12: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x006DBB15: mov edi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(edi); /* 0x006DBB18: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x006DBB1B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBF22; /* 0x006DBB1E: je 0x6dbf22 */
L_006DBB24:
    _xmm[6].u64[0] = MEM32(ebp + (-0x30)); _xmm[6].u64[1] = 0; /* 0x006DBB24: movss xmm6, dword ptr [ebp - 0x30] */
    esp = esp; /* 0x006DBB29: lea esp, [esp] */
L_006DBB30:
    edx = (uint32_t)LO16(eax); /* 0x006DBB30: movzx edx, ax */
    edi = edi + 0x2; /* 0x006DBB33: lea edi, [edi + 2] */
    /* cmp edx, 0xAu */ /* 0x006DBB36: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DBB86; /* 0x006DBB39: jne 0x6dbb86 */
L_006DBB3B:
    eax = MEM32(esi + 0xB8); /* 0x006DBB3B: mov eax, dword ptr [esi + 0xb8] */
    _xmm[1].u64[0] = MEM32(esi + 0xCC); _xmm[1].u64[1] = 0; /* 0x006DBB41: movss xmm1, dword ptr [esi + 0xcc] */
    { float _s = sse_f32(MEM32(esi + 0xC4)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006DBB49: subss xmm1, dword ptr [esi + 0xc4] */
    _xmm[6].u64[0] = MEM32(ebp + (-0x44)); _xmm[6].u64[1] = 0; /* 0x006DBB51: movss xmm6, dword ptr [ebp - 0x44] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DBB56: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DBB5A: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DBB5E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DBB5E: shr eax, 0x1f */
    MEM32(ebp + (-0x30)) = _xmm[6].u32[0]; /* 0x006DBB61: movss dword ptr [ebp - 0x30], xmm6 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DBB66: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DBB6F: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006DBB73: mulss xmm1, xmm0 */
    { float _s = sse_f32(MEM32(ebp + (-0x40))); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006DBB77: addss xmm1, dword ptr [ebp - 0x40] */
    _xmm[2] = _xmm[1]; /* 0x006DBB7C: movaps xmm2, xmm1 */
    MEM32(ebp + (-0x40)) = _xmm[2].u32[0]; /* 0x006DBB7F: movss dword ptr [ebp - 0x40], xmm2 */
    goto L_006DBB8B; /* 0x006DBB84: jmp 0x6dbb8b */
L_006DBB86:
    _xmm[2].u64[0] = MEM32(ebp + (-0x40)); _xmm[2].u64[1] = 0; /* 0x006DBB86: movss xmm2, dword ptr [ebp - 0x40] */
L_006DBB8B:
    ecx = edx; /* 0x006DBB8B: mov ecx, edx */
    eax = ecx + (-0x20); /* 0x006DBB8D: lea eax, [ecx - 0x20] */
    /* test eax, eax */ /* 0x006DBB90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DBF16; /* 0x006DBB92: js 0x6dbf16 */
L_006DBB98:
    /* cmp eax, 0x60u */ /* 0x006DBB98: cmp eax, 0x60 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006DBF16; /* 0x006DBB9B: jge 0x6dbf16 */
L_006DBBA1:
    eax = ecx + (-0x14); /* 0x006DBBA1: lea eax, [ecx - 0x14] */
    _xmm[1].u64[0] = MEM32(esi + 0xBC); _xmm[1].u64[1] = 0; /* 0x006DBBA4: movss xmm1, dword ptr [esi + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006DBBAC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006DBBAE: add ecx, ecx */
    _flag_k = FK_ADD;
    _xmm[7].u64[0] = MEM32(esi + eax * 8); _xmm[7].u64[1] = 0; /* 0x006DBBB0: movss xmm7, dword ptr [esi + eax*8] */
    eax = MEM32(esi + 0xB4); /* 0x006DBBB5: mov eax, dword ptr [esi + 0xb4] */
    _xmm[0].u64[0] = MEM32(esi + ecx * 8 + (-0x138)); _xmm[0].u64[1] = 0; /* 0x006DBBBB: movss xmm0, dword ptr [esi + ecx*8 - 0x138] */
    _xmm[4] = _xmm[0]; /* 0x006DBBC4: movaps xmm4, xmm0 */
    MEM32(ebp + (-0x3C)) = _xmm[0].u32[0]; /* 0x006DBBC7: movss dword ptr [ebp - 0x3c], xmm0 */
    _xmm[5].u64[0] = MEM32(esi + ecx * 8 + (-0x134)); _xmm[5].u64[1] = 0; /* 0x006DBBCC: movss xmm5, dword ptr [esi + ecx*8 - 0x134] */
    { float _s = _xmm[7].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x006DBBD5: subss xmm4, xmm7 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DBBD9: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DBBDD: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DBBE1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DBBE1: shr eax, 0x1f */
    _xmm[3].u64[0] = MEM32(esi + ecx * 8 + (-0x13C)); _xmm[3].u64[1] = 0; /* 0x006DBBE4: movss xmm3, dword ptr [esi + ecx*8 - 0x13c] */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DBBED: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(esi + 0xB8); /* 0x006DBBF6: mov eax, dword ptr [esi + 0xb8] */
    MEM32(ebp + (-0x34)) = _xmm[5].u32[0]; /* 0x006DBBFC: movss dword ptr [ebp - 0x34], xmm5 */
    { float _s = _xmm[3].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x006DBC01: subss xmm5, xmm3 */
    MEM32(ebp + (-0x38)) = _xmm[3].u32[0]; /* 0x006DBC05: movss dword ptr [ebp - 0x38], xmm3 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DBC0A: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] * _s); } /* 0x006DBC0E: mulss xmm4, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DBC12: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DBC16: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DBC1A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DBC1A: shr eax, 0x1f */
    { float _s = _xmm[1].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] / _s); } /* 0x006DBC1D: divss xmm4, xmm1 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DBC21: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    MEM32(ebp + (-0x48)) = _xmm[4].u32[0]; /* 0x006DBC2A: movss dword ptr [ebp - 0x48], xmm4 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DBC2F: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] * _s); } /* 0x006DBC33: mulss xmm5, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] / _s); } /* 0x006DBC37: divss xmm5, xmm1 */
    /* cmp edx, 0x20u */ /* 0x006DBC3B: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DBEE6; /* 0x006DBC3E: je 0x6dbee6 */
L_006DBC44:
    eax = MEM32(ebp + (-0x8)); /* 0x006DBC44: mov eax, dword ptr [ebp - 8] */
    { float _s = _xmm[2].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] + _s); } /* 0x006DBC47: addss xmm5, xmm2 */
    _xmm[1].u64[0] = MEM32(0x808C18); _xmm[1].u64[1] = 0; /* 0x006DBC4B: movss xmm1, dword ptr [0x808c18] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DBC53: xorps xmm0, xmm0 */
    _xmm[3] = _xmm[6]; /* 0x006DBC56: movaps xmm3, xmm6 */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBC59: mov dword ptr [ebp - 0x24], 0x3f666666 */
    { float _s = _xmm[0].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] + _s); } /* 0x006DBC60: addss xmm3, xmm0 */
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBC64: mov dword ptr [ebp - 0x20], 0x3f800000 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x34)); _xmm[0].u64[1] = 0; /* 0x006DBC6B: movss xmm0, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBC70: movss dword ptr [ebp - 0x14], xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[5].f32[0] = (float)(_xmm[5].f32[0] - _s); } /* 0x006DBC75: subss xmm5, xmm1 */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBC79: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBC7C: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    { float _s = _xmm[1].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] - _s); } /* 0x006DBC83: subss xmm3, xmm1 */
    MEM32(ebp + (-0x18)) = _xmm[7].u32[0]; /* 0x006DBC87: movss dword ptr [ebp - 0x18], xmm7 */
    MEM32(ebp + (-0x28)) = _xmm[5].u32[0]; /* 0x006DBC8C: movss dword ptr [ebp - 0x28], xmm5 */
    MEM32(ebp + (-0x2C)) = _xmm[3].u32[0]; /* 0x006DBC91: movss dword ptr [ebp - 0x2c], xmm3 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBC96: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBC9B: mov dword ptr [ebp - 0x24], 0x3f666666 */
    MEM32(ebp + (-0x2C)) = _xmm[3].u32[0]; /* 0x006DBCA2: movss dword ptr [ebp - 0x2c], xmm3 */
    xmm_st(eax, _xmm[0]); /* 0x006DBCA7: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBCAB: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBCAE: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBCB3: mov dword ptr [ebp - 0x20], 0x3f800000 */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBCBA: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBCC1: movq qword ptr [eax + 0x10], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DBCC6: xorps xmm0, xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBCC9: mov eax, dword ptr [ebp - 8] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006DBCCC: addss xmm2, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x38)); _xmm[0].u64[1] = 0; /* 0x006DBCD0: movss xmm0, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBCD5: movss dword ptr [ebp - 0x14], xmm0 */
    MEM32(ebp + (-0x18)) = _xmm[7].u32[0]; /* 0x006DBCDA: movss dword ptr [ebp - 0x18], xmm7 */
    MEM32(eax + 0x18) = ecx; /* 0x006DBCDF: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBCE2: mov eax, dword ptr [ebp - 8] */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] - _s); } /* 0x006DBCE5: subss xmm2, xmm1 */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBCE9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x006DBCEC: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x006DBCEF: mov dword ptr [ebp - 8], eax */
    _xmm[1] = _xmm[4]; /* 0x006DBCF2: movaps xmm1, xmm4 */
    { float _s = _xmm[6].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] + _s); } /* 0x006DBCF5: addss xmm1, xmm6 */
    MEM32(ebp + (-0x28)) = _xmm[2].u32[0]; /* 0x006DBCF9: movss dword ptr [ebp - 0x28], xmm2 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBCFE: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBD03: mov dword ptr [ebp - 0x24], 0x3f666666 */
    { float _s = sse_f32(MEM32(0x808C18)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] - _s); } /* 0x006DBD0A: subss xmm1, dword ptr [0x808c18] */
    xmm_st(eax, _xmm[0]); /* 0x006DBD12: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD16: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBD19: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x28)) = _xmm[5].u32[0]; /* 0x006DBD1E: movss dword ptr [ebp - 0x28], xmm5 */
    MEM32(ebp + (-0x2C)) = _xmm[1].u32[0]; /* 0x006DBD23: movss dword ptr [ebp - 0x2c], xmm1 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBD28: movq qword ptr [eax + 0x10], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD2D: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x3C)); _xmm[0].u64[1] = 0; /* 0x006DBD30: movss xmm0, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x006DBD35: movss dword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x34)); _xmm[0].u64[1] = 0; /* 0x006DBD3A: movss xmm0, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x18) = ecx; /* 0x006DBD3F: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD42: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x006DBD45: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBD48: movss dword ptr [ebp - 0x14], xmm0 */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBD4D: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006DBD50: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBD53: mov dword ptr [ebp - 0x20], 0x3f800000 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBD5A: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBD5F: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    MEM32(ebp + (-0x2C)) = _xmm[1].u32[0]; /* 0x006DBD66: movss dword ptr [ebp - 0x2c], xmm1 */
    xmm_st(eax, _xmm[0]); /* 0x006DBD6B: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD6F: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBD72: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x28)) = _xmm[2].u32[0]; /* 0x006DBD77: movss dword ptr [ebp - 0x28], xmm2 */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBD7C: mov dword ptr [ebp - 0x24], 0x3f666666 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBD83: movq qword ptr [eax + 0x10], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD88: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x3C)); _xmm[0].u64[1] = 0; /* 0x006DBD8B: movss xmm0, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x006DBD90: movss dword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x38)); _xmm[0].u64[1] = 0; /* 0x006DBD95: movss xmm0, dword ptr [ebp - 0x38] */
    MEM32(eax + 0x18) = ecx; /* 0x006DBD9A: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBD9D: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x006DBDA0: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBDA3: mov dword ptr [ebp - 0x20], 0x3f800000 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006DBDAA: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBDAD: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBDB4: movss dword ptr [ebp - 0x14], xmm0 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBDB9: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBDBE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x006DBDC1: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = _xmm[1].u32[0]; /* 0x006DBDC4: movss dword ptr [ebp - 0x2c], xmm1 */
    xmm_st(eax, _xmm[0]); /* 0x006DBDC9: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBDCD: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBDD0: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x28)) = _xmm[5].u32[0]; /* 0x006DBDD5: movss dword ptr [ebp - 0x28], xmm5 */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBDDA: mov dword ptr [ebp - 0x24], 0x3f666666 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBDE1: movq qword ptr [eax + 0x10], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBDE6: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x3C)); _xmm[0].u64[1] = 0; /* 0x006DBDE9: movss xmm0, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x18)) = _xmm[0].u32[0]; /* 0x006DBDEE: movss dword ptr [ebp - 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + (-0x34)); _xmm[0].u64[1] = 0; /* 0x006DBDF3: movss xmm0, dword ptr [ebp - 0x34] */
    MEM32(eax + 0x18) = ecx; /* 0x006DBDF8: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBDFB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x006DBDFE: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBE01: movss dword ptr [ebp - 0x14], xmm0 */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBE06: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006DBE09: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBE0C: mov dword ptr [ebp - 0x20], 0x3f800000 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBE13: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBE18: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    MEM32(ebp + (-0x2C)) = _xmm[3].u32[0]; /* 0x006DBE1F: movss dword ptr [ebp - 0x2c], xmm3 */
    xmm_st(eax, _xmm[0]); /* 0x006DBE24: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBE28: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBE2B: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x28)) = _xmm[2].u32[0]; /* 0x006DBE30: movss dword ptr [ebp - 0x28], xmm2 */
    MEM32(ebp + (-0x24)) = 0x3F666666u; /* 0x006DBE35: mov dword ptr [ebp - 0x24], 0x3f666666 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBE3C: movq qword ptr [eax + 0x10], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBE41: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x38)); _xmm[0].u64[1] = 0; /* 0x006DBE44: movss xmm0, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x14)) = _xmm[0].u32[0]; /* 0x006DBE49: movss dword ptr [ebp - 0x14], xmm0 */
    MEM32(ebp + (-0x20)) = 0x3F800000u; /* 0x006DBE4E: mov dword ptr [ebp - 0x20], 0x3f800000 */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006DBE55: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    MEM32(eax + 0x18) = ecx; /* 0x006DBE5A: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBE5D: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x006DBE60: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x006DBE63: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x006DBE66: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x1C)) = 0xFFFFFF00u; /* 0x006DBE69: mov dword ptr [ebp - 0x1c], 0xffffff00 */
    MEM32(ebp + (-0x18)) = _xmm[7].u32[0]; /* 0x006DBE70: movss dword ptr [ebp - 0x18], xmm7 */
    xmm_st(eax, _xmm[0]); /* 0x006DBE75: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBE79: mov eax, dword ptr [ebp - 8] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006DBE7C: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x006DBE81: movq qword ptr [eax + 0x10], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x006DBE86: mov eax, dword ptr [ebp - 8] */
    MEM32(eax + 0x18) = ecx; /* 0x006DBE89: mov dword ptr [eax + 0x18], ecx */
    eax = ebx + ebx * 2; /* 0x006DBE8C: lea eax, [ebx + ebx*2] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x1Cu; /* 0x006DBE8F: add dword ptr [ebp - 8], 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, 0x126u */ /* 0x006DBE93: cmp eax, 0x126 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x126u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DBEE6; /* 0x006DBE98: jbe 0x6dbee6 */
L_006DBE9A:
    eax = MEM32(esi + 0xB0); /* 0x006DBE9A: mov eax, dword ptr [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x006DBEA0: push eax */
    ecx = MEM32(eax); /* 0x006DBEA1: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006DBEA3: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xA8); /* 0x006DBEA6: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, ebx); /* 0x006DBEAC: push ebx */
    PUSH32(esp, 0); /* 0x006DBEAD: push 0 */
    PUSH32(esp, 4); /* 0x006DBEAF: push 4 */
    ecx = MEM32(eax); /* 0x006DBEB1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DBEB3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x144)); /* 0x006DBEB4: call dword ptr [ecx + 0x144] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x006DBEBA: mov eax, dword ptr [esi + 0xb0] */
    edx = ebp + (-0x8); /* 0x006DBEC0: lea edx, [ebp - 8] */
    PUSH32(esp, 0x2000u); /* 0x006DBEC3: push 0x2000 */
    PUSH32(esp, edx); /* 0x006DBEC8: push edx */
    PUSH32(esp, 0); /* 0x006DBEC9: push 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x006DBECB: mov dword ptr [ebp - 8], 0 */
    ecx = MEM32(eax); /* 0x006DBED2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006DBED4: push 0 */
    PUSH32(esp, eax); /* 0x006DBED6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x006DBED7: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    _xmm[4].u64[0] = MEM32(ebp + (-0x48)); _xmm[4].u64[1] = 0; /* 0x006DBEDA: movss xmm4, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DBEDF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[6].u64[0] = MEM32(ebp + (-0x30)); _xmm[6].u64[1] = 0; /* 0x006DBEE1: movss xmm6, dword ptr [ebp - 0x30] */
L_006DBEE6:
    eax = MEM32(esi + 0x6C0); /* 0x006DBEE6: mov eax, dword ptr [esi + 0x6c0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006DBEEC: add eax, eax */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006DBEEE: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006DBEF2: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006DBEF6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006DBEF6: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006DBEF9: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006DBF02: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] - _s); } /* 0x006DBF06: subss xmm4, xmm0 */
    { float _s = _xmm[6].f32[0]; _xmm[4].f32[0] = (float)(_xmm[4].f32[0] + _s); } /* 0x006DBF0A: addss xmm4, xmm6 */
    _xmm[6] = _xmm[4]; /* 0x006DBF0E: movaps xmm6, xmm4 */
    MEM32(ebp + (-0x30)) = _xmm[6].u32[0]; /* 0x006DBF11: movss dword ptr [ebp - 0x30], xmm6 */
L_006DBF16:
    eax = (uint32_t)MEM16(edi); /* 0x006DBF16: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x006DBF19: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DBB30; /* 0x006DBF1C: jne 0x6dbb30 */
L_006DBF22:
    eax = MEM32(esi + 0xB0); /* 0x006DBF22: mov eax, dword ptr [esi + 0xb0] */
    PUSH32(esp, eax); /* 0x006DBF28: push eax */
    ecx = MEM32(eax); /* 0x006DBF29: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006DBF2B: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x006DBF2E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBF46; /* 0x006DBF30: je 0x6dbf46 */
L_006DBF32:
    eax = MEM32(esi + 0xA8); /* 0x006DBF32: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, ebx); /* 0x006DBF38: push ebx */
    PUSH32(esp, 0); /* 0x006DBF39: push 0 */
    PUSH32(esp, 4); /* 0x006DBF3B: push 4 */
    ecx = MEM32(eax); /* 0x006DBF3D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DBF3F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x144)); /* 0x006DBF40: call dword ptr [ecx + 0x144] */
    RECOMP_FLAGS_IN();
L_006DBF46:
    eax = MEM32(esi + 0x6C4); /* 0x006DBF46: mov eax, dword ptr [esi + 0x6c4] */
    PUSH32(esp, eax); /* 0x006DBF4C: push eax */
    ecx = MEM32(eax); /* 0x006DBF4D: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x006DBF4F: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006DBF52: pop edi */
    esi = POP32_VAL(esp); /* 0x006DBF53: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DBF54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DBF56: pop ebx */
    esp = ebp; /* 0x006DBF57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DBF59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006DBF5A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006DBF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DBF60u);

L_006DBF60:
    PUSH32(esp, ebp); /* 0x006DBF60: push ebp */
    ebp = esp; /* 0x006DBF61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DBF63: push esi */
    esi = MEM32(0x927C48); /* 0x006DBF64: mov esi, dword ptr [0x927c48] */
    edx = ecx + 0x4; /* 0x006DBF6A: lea edx, [ecx + 4] */
    MEM32(ecx) = 0x00801A40u; /* 0x006DBF6D: mov dword ptr [ecx], 0x801a40 */
    MEM32(edx) = 0; /* 0x006DBF73: mov dword ptr [edx], 0 */
    MEM32(edx + 0x4) = 0; /* 0x006DBF79: mov dword ptr [edx + 4], 0 */
    /* test esi, esi */ /* 0x006DBF80: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBFA5; /* 0x006DBF82: je 0x6dbfa5 */
L_006DBF84:
    MEM32(edx) = 0; /* 0x006DBF84: mov dword ptr [edx], 0 */
    MEM32(edx + 0x4) = 0; /* 0x006DBF8A: mov dword ptr [edx + 4], 0 */
    eax = MEM32(esi); /* 0x006DBF91: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006DBF93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DBF9E; /* 0x006DBF95: je 0x6dbf9e */
L_006DBF97:
    MEM32(edx) = eax; /* 0x006DBF97: mov dword ptr [edx], eax */
    eax = MEM32(esi); /* 0x006DBF99: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = edx; /* 0x006DBF9B: mov dword ptr [eax + 4], edx */
L_006DBF9E:
    MEM32(edx + 0x4) = esi; /* 0x006DBF9E: mov dword ptr [edx + 4], esi */
    MEM32(esi) = edx; /* 0x006DBFA1: mov dword ptr [esi], edx */
    goto L_006DBFAB; /* 0x006DBFA3: jmp 0x6dbfab */
L_006DBFA5:
    MEM32(0x927C48) = edx; /* 0x006DBFA5: mov dword ptr [0x927c48], edx */
L_006DBFAB:
    eax = MEM32(ebp + 0x8); /* 0x006DBFAB: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x006DBFAE: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx) = 0x008030A8u; /* 0x006DBFB1: mov dword ptr [ecx], 0x8030a8 */
    esi = POP32_VAL(esp); /* 0x006DBFB7: pop esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) + 1; /* 0x006DBFB8: inc dword ptr [eax + 0xa18] */
    _flag_k = FK_INC;
    eax = ecx; /* 0x006DBFBE: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x006DBFC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DBFC1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DBFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DBFD0u);

L_006DBFD0:
    PUSH32(esp, ebp); /* 0x006DBFD0: push ebp */
    ebp = esp; /* 0x006DBFD1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006DBFD3: push esi */
    esi = ecx; /* 0x006DBFD4: mov esi, ecx */
    eax = MEM32(esi + 0xC); /* 0x006DBFD6: mov eax, dword ptr [esi + 0xc] */
    ecx = esi + 0x4; /* 0x006DBFD9: lea ecx, [esi + 4] */
    MEM32(esi) = 0x008030A8u; /* 0x006DBFDC: mov dword ptr [esi], 0x8030a8 */
    _flag_a = (uint32_t)(MEM32(eax + 0xA18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA18) = MEM32(eax + 0xA18) - 1; /* 0x006DBFE2: dec dword ptr [eax + 0xa18] */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_006DC040); /* 0x006DBFE8: call 0x6dc040 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006DBFED: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x00801A40u; /* 0x006DBFF1: mov dword ptr [esi], 0x801a40 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC003; /* 0x006DBFF7: je 0x6dc003 */
L_006DBFF9:
    PUSH32(esp, esi); /* 0x006DBFF9: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006DBFFA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DC000: add esp, 4 */
    _flag_k = FK_ADD;
L_006DC003:
    eax = esi; /* 0x006DC003: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006DC005: pop esi */
    ebp = POP32_VAL(esp); /* 0x006DC006: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DC007: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DC040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC040u);

L_006DC040:
    /* cmp MEM32(0x927C48), ecx */ /* 0x006DC040: cmp dword ptr [0x927c48], ecx */
    _flag_a = (uint32_t)(MEM32(0x927C48)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DC079; /* 0x006DC046: jne 0x6dc079 */
L_006DC048:
    edx = MEM32(ecx); /* 0x006DC048: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x006DC04A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC071; /* 0x006DC04C: je 0x6dc071 */
L_006DC04E:
    eax = edx + (-0x4); /* 0x006DC04E: lea eax, [edx - 4] */
    /* test eax, eax */ /* 0x006DC051: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC071; /* 0x006DC053: je 0x6dc071 */
L_006DC055:
    /* test edx, edx */ /* 0x006DC055: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC065; /* 0x006DC057: je 0x6dc065 */
L_006DC059:
    eax = edx + (-0x4); /* 0x006DC059: lea eax, [edx - 4] */
    /* test eax, eax */ /* 0x006DC05C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC065; /* 0x006DC05E: je 0x6dc065 */
L_006DC060:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006DC060: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_006DC074; /* 0x006DC063: jmp 0x6dc074 */
L_006DC065:
    MEM32(0x927C48) = 0; /* 0x006DC065: mov dword ptr [0x927c48], 0 */
    goto L_006DC079; /* 0x006DC06F: jmp 0x6dc079 */
L_006DC071:
    eax = MEM32(ecx + 0x4); /* 0x006DC071: mov eax, dword ptr [ecx + 4] */
L_006DC074:
    MEM32(0x927C48) = eax; /* 0x006DC074: mov dword ptr [0x927c48], eax */
L_006DC079:
    edx = MEM32(ecx); /* 0x006DC079: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x006DC07B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC085; /* 0x006DC07D: je 0x6dc085 */
L_006DC07F:
    eax = MEM32(ecx + 0x4); /* 0x006DC07F: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x006DC082: mov dword ptr [edx + 4], eax */
L_006DC085:
    edx = MEM32(ecx + 0x4); /* 0x006DC085: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x006DC088: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC090; /* 0x006DC08A: je 0x6dc090 */
L_006DC08C:
    eax = MEM32(ecx); /* 0x006DC08C: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x006DC08E: mov dword ptr [edx], eax */
L_006DC090:
    MEM32(ecx + 0x4) = 0; /* 0x006DC090: mov dword ptr [ecx + 4], 0 */
    MEM32(ecx) = 0; /* 0x006DC097: mov dword ptr [ecx], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC09D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DC0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC0A0u);

L_006DC0A0:
    PUSH32(esp, ebp); /* 0x006DC0A0: push ebp */
    ebp = esp; /* 0x006DC0A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x006DC0A3: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DC0A9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DC0AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006DC0B0: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, ebx); /* 0x006DC0B3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DC0B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = ecx; /* 0x006DC0B6: mov dword ptr [ebp - 0x7c], ecx */
    PUSH32(esp, esi); /* 0x006DC0B9: push esi */
    PUSH32(esp, edi); /* 0x006DC0BA: push edi */
    MEM32(ebp + (-0x64)) = eax; /* 0x006DC0BB: mov dword ptr [ebp - 0x64], eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006DC0BE: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x5C)) = eax; /* 0x006DC0C1: mov dword ptr [ebp - 0x5c], eax */
    esi = 0x80004005u; /* 0x006DC0C4: mov esi, 0x80004005 */
    MEM32(ebp + (-0x60)) = eax; /* 0x006DC0C9: mov dword ptr [ebp - 0x60], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DC0CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = eax; /* 0x006DC0CE: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x80)) = eax; /* 0x006DC0D1: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0x90); /* 0x006DC0D4: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x006DC0DA: push eax */
    PUSH32(esp, edx); /* 0x006DC0DB: push edx */
    MEM32(ebp + (-0x48)) = 0; /* 0x006DC0DC: mov dword ptr [ebp - 0x48], 0 */
    xmm_st(ebp + (-0x90), _xmm[0]); /* 0x006DC0E3: movdqu xmmword ptr [ebp - 0x90], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC80C)); /* 0x006DC0EB: call dword ptr [0x7cc80c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DC0F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC3DD; /* 0x006DC0F3: je 0x6dc3dd */
L_006DC0F9:
    eax = ebp + (-0xBC); /* 0x006DC0F9: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x006DC0FF: push eax */
    PUSH32(esp, 0x18u); /* 0x006DC100: push 0x18 */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006DC102: push dword ptr [ebp - 0x84] */
    RECOMP_ICALL(MEM32(0x7CC064)); /* 0x006DC108: call dword ptr [0x7cc064] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DC10E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC3DD; /* 0x006DC110: je 0x6dc3dd */
L_006DC116:
    /* cmp MEM32(ebp + (-0x80)), 0 */ /* 0x006DC116: cmp dword ptr [ebp - 0x80], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xB8)); /* 0x006DC11A: mov ebx, dword ptr [ebp - 0xb8] */
    edi = MEM32(ebp + (-0xB4)); /* 0x006DC120: mov edi, dword ptr [ebp - 0xb4] */
    ecx = edi; /* 0x006DC126: mov ecx, edi */
    MEM32(ebp + (-0x54)) = ebx; /* 0x006DC128: mov dword ptr [ebp - 0x54], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DC13B; /* 0x006DC12B: jne 0x6dc13b */
L_006DC12D:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006DC12D: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x006DC12D: shr ecx, 1 */
    MEM32(ebp + (-0x70)) = 1; /* 0x006DC12F: mov dword ptr [ebp - 0x70], 1 */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x006DC136: mov dword ptr [ebp - 0x4c], ecx */
    goto L_006DC145; /* 0x006DC139: jmp 0x6dc145 */
L_006DC13B:
    MEM32(ebp + (-0x70)) = 0; /* 0x006DC13B: mov dword ptr [ebp - 0x70], 0 */
    MEM32(ebp + (-0x4C)) = edi; /* 0x006DC142: mov dword ptr [ebp - 0x4c], edi */
L_006DC145:
    edx = MEM32(ebp + (-0x7C)); /* 0x006DC145: mov edx, dword ptr [ebp - 0x7c] */
    esi = ebp + (-0x48); /* 0x006DC148: lea esi, [ebp - 0x48] */
    PUSH32(esp, 0); /* 0x006DC14B: push 0 */
    PUSH32(esp, esi); /* 0x006DC14D: push esi */
    PUSH32(esp, 3); /* 0x006DC14E: push 3 */
    eax = MEM32(edx); /* 0x006DC150: mov eax, dword ptr [edx] */
    PUSH32(esp, 0x15u); /* 0x006DC152: push 0x15 */
    PUSH32(esp, ecx); /* 0x006DC154: push ecx */
    PUSH32(esp, ebx); /* 0x006DC155: push ebx */
    PUSH32(esp, edx); /* 0x006DC156: push edx */
    RECOMP_ICALL(MEM32(eax + 0x90)); /* 0x006DC157: call dword ptr [eax + 0x90] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006DC15D: mov esi, eax */
    /* test esi, esi */ /* 0x006DC15F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DC3DB; /* 0x006DC161: js 0x6dc3db */
L_006DC167:
    eax = edi; /* 0x006DC167: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DC169: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x006DC16B: imul eax, ebx */
    edx = 4; /* 0x006DC16E: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x006DC173: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x006DC175: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x006DC178: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x006DC17A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006DC17C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006DC17D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x006DC183: push 0x2c */
    MEM32(ebp + (-0x44)) = eax; /* 0x006DC185: mov dword ptr [ebp - 0x44], eax */
    eax = ebp + (-0x40); /* 0x006DC188: lea eax, [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x006DC18B: push 0 */
    PUSH32(esp, eax); /* 0x006DC18D: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006DC18E: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006DC193: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = 0x28u; /* 0x006DC196: mov dword ptr [ebp - 0x40], 0x28 */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x006DC19D: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = edi; /* 0x006DC1A0: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x34)) = 0x00200001u; /* 0x006DC1A3: mov dword ptr [ebp - 0x34], 0x200001 */
    PUSH32(esp, 0); /* 0x006DC1AA: push 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x006DC1AC: mov dword ptr [ebp - 0x30], 0 */
    RECOMP_ICALL(MEM32(0x7CC810)); /* 0x006DC1B3: call dword ptr [0x7cc810] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DC1B9: push eax */
    MEM32(ebp + (-0x60)) = eax; /* 0x006DC1BA: mov dword ptr [ebp - 0x60], eax */
    RECOMP_ICALL(MEM32(0x7CC084)); /* 0x006DC1BD: call dword ptr [0x7cc084] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x5C)) = eax; /* 0x006DC1C3: mov dword ptr [ebp - 0x5c], eax */
    /* test eax, eax */ /* 0x006DC1C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DC1D7; /* 0x006DC1C8: jne 0x6dc1d7 */
L_006DC1CA:
    ebx = MEM32(ebp + (-0x44)); /* 0x006DC1CA: mov ebx, dword ptr [ebp - 0x44] */
    esi = 0x80004005u; /* 0x006DC1CD: mov esi, 0x80004005 */
    goto L_006DC3DD; /* 0x006DC1D2: jmp 0x6dc3dd */
L_006DC1D7:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006DC1D7: push dword ptr [ebp - 0x84] */
    ebx = MEM32(0x7CC080); /* 0x006DC1DD: mov ebx, dword ptr [0x7cc080] */
    PUSH32(esp, eax); /* 0x006DC1E3: push eax */
    RECOMP_ICALL(ebx); /* 0x006DC1E4: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DC1E6: push 0 */
    esi = eax; /* 0x006DC1E8: mov esi, eax */
    eax = ebp + (-0x40); /* 0x006DC1EA: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x006DC1ED: push eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x006DC1EE: push dword ptr [ebp - 0x44] */
    PUSH32(esp, edi); /* 0x006DC1F1: push edi */
    PUSH32(esp, 0); /* 0x006DC1F2: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006DC1F4: push dword ptr [ebp - 0x84] */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x006DC1FA: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(MEM32(0x7CC040)); /* 0x006DC1FD: call dword ptr [0x7cc040] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DC203: push esi */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x006DC204: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(ebx); /* 0x006DC207: call ebx */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x70)), 0 */ /* 0x006DC209: cmp dword ptr [ebp - 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x54)); /* 0x006DC20D: mov esi, dword ptr [ebp - 0x54] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DC274; /* 0x006DC210: jne 0x6dc274 */
L_006DC212:
    eax = MEM32(ebp + (-0x4C)); /* 0x006DC212: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DC215: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x006DC217: imul eax, esi */
    edx = 4; /* 0x006DC21A: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x006DC21F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x006DC221: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x006DC224: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x006DC226: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006DC228: push ecx */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006DC229: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DC22F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = eax; /* 0x006DC232: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x60)); /* 0x006DC235: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x006DC238: push eax */
    RECOMP_ICALL(MEM32(0x7CC084)); /* 0x006DC239: call dword ptr [0x7cc084] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x64)) = eax; /* 0x006DC23F: mov dword ptr [ebp - 0x64], eax */
    /* test eax, eax */ /* 0x006DC242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DC253; /* 0x006DC244: jne 0x6dc253 */
L_006DC246:
    ebx = MEM32(ebp + (-0x44)); /* 0x006DC246: mov ebx, dword ptr [ebp - 0x44] */
    esi = 0x80004005u; /* 0x006DC249: mov esi, 0x80004005 */
    goto L_006DC3DD; /* 0x006DC24E: jmp 0x6dc3dd */
L_006DC253:
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x006DC253: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x006DC256: push eax */
    RECOMP_ICALL(ebx); /* 0x006DC257: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DC259: push 0 */
    eax = ebp + (-0x40); /* 0x006DC25B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x006DC25E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x006DC25F: push dword ptr [ebp - 0x58] */
    eax = MEM32(ebp + (-0x64)); /* 0x006DC262: mov eax, dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x006DC265: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, 0); /* 0x006DC268: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x006DC26A: push dword ptr [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x006DC26D: push eax */
    RECOMP_ICALL(MEM32(0x7CC040)); /* 0x006DC26E: call dword ptr [0x7cc040] */
    RECOMP_FLAGS_IN();
L_006DC274:
    eax = MEM32(ebp + (-0x48)); /* 0x006DC274: mov eax, dword ptr [ebp - 0x48] */
    edx = ebp + (-0xA4); /* 0x006DC277: lea edx, [ebp - 0xa4] */
    PUSH32(esp, 0); /* 0x006DC27D: push 0 */
    PUSH32(esp, 0); /* 0x006DC27F: push 0 */
    PUSH32(esp, edx); /* 0x006DC281: push edx */
    ecx = MEM32(eax); /* 0x006DC282: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006DC284: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x006DC285: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x006DC288: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006DC28B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = edx; /* 0x006DC28D: mov dword ptr [ebp - 0x50], edx */
    /* test ecx, ecx */ /* 0x006DC290: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC3AC; /* 0x006DC292: je 0x6dc3ac */
L_006DC298:
    eax = esi; /* 0x006DC298: mov eax, esi */
    ebx = ecx * 4 + (-0x4); /* 0x006DC29A: lea ebx, [ecx*4 - 4] */
    ecx = MEM32(ebp + (-0x44)); /* 0x006DC2A1: mov ecx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x006DC2A4: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x98)) = eax; /* 0x006DC2A6: mov dword ptr [ebp - 0x98], eax */
    eax = MEM32(ebp + (-0xA0)); /* 0x006DC2AC: mov eax, dword ptr [ebp - 0xa0] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x006DC2B2: mov dword ptr [ebp - 0x6c], eax */
    eax = (uint32_t)((int32_t)esi * (int32_t)0xFFFFFFFCu); /* 0x006DC2B5: imul eax, esi, -4 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi); /* 0x006DC2B8: imul ebx, esi */
    MEM32(ebp + (-0x94)) = eax; /* 0x006DC2BB: mov dword ptr [ebp - 0x94], eax */
    eax = edi + (-0x1); /* 0x006DC2C1: lea eax, [edi - 1] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x006DC2C4: imul eax, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x006DC2C7: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x78)) = ebx; /* 0x006DC2C9: mov dword ptr [ebp - 0x78], ebx */
    MEM32(ebp + (-0x74)) = eax; /* 0x006DC2CC: mov dword ptr [ebp - 0x74], eax */
    /* nop */ /* 0x006DC2CF: nop  */
L_006DC2D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DC2D0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006DC2D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC383; /* 0x006DC2D4: je 0x6dc383 */
L_006DC2DA:
    eax = MEM32(ebp + (-0x58)); /* 0x006DC2DA: mov eax, dword ptr [ebp - 0x58] */
    esi = MEM32(ebp + (-0x6C)); /* 0x006DC2DD: mov esi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006DC2E0: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x68)) = 0xFu; /* 0x006DC2E2: mov dword ptr [ebp - 0x68], 0xf */
    MEM32(ebp + (-0x9C)) = eax; /* 0x006DC2E9: mov dword ptr [ebp - 0x9c], eax */
    /* nop */ /* 0x006DC2EF: nop  */
L_006DC2F0:
    /* cmp MEM32(ebp + (-0x70)), 0 */ /* 0x006DC2F0: cmp dword ptr [ebp - 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC308; /* 0x006DC2F4: je 0x6dc308 */
L_006DC2F6:
    eax = MEM32(ebp + (-0x74)); /* 0x006DC2F6: mov eax, dword ptr [ebp - 0x74] */
    edx = MEM32(ebp + (-0x44)); /* 0x006DC2F9: mov edx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006DC2FC: add eax, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx); /* 0x006DC2FE: mov ecx, dword ptr [ebx] */
    eax = MEM32(edx + eax * 4); /* 0x006DC300: mov eax, dword ptr [edx + eax*4] */
    edx = MEM32(ebp + (-0x50)); /* 0x006DC303: mov edx, dword ptr [ebp - 0x50] */
    goto L_006DC30D; /* 0x006DC306: jmp 0x6dc30d */
L_006DC308:
    ecx = MEM32(eax + ebx); /* 0x006DC308: mov ecx, dword ptr [eax + ebx] */
    eax = MEM32(ebx); /* 0x006DC30B: mov eax, dword ptr [ebx] */
L_006DC30D:
    /* test eax, eax */ /* 0x006DC30D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DC31B; /* 0x006DC30F: jne 0x6dc31b */
L_006DC311:
    _flag_a = (uint32_t)((ecx | 0xFF000000u)); _flag_b = (uint32_t)((ecx | 0xFF000000u));
    ecx = ecx | 0xFF000000u; /* 0x006DC311: or ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x006DC317: mov dword ptr [esi], ecx */
    goto L_006DC321; /* 0x006DC319: jmp 0x6dc321 */
L_006DC31B:
    MEM32(esi) = 0; /* 0x006DC31B: mov dword ptr [esi], 0 */
L_006DC321:
    /* cmp edi, 0xCu */ /* 0x006DC321: cmp edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006DC35E; /* 0x006DC324: jae 0x6dc35e */
L_006DC326:
    /* cmp edx, 5 */ /* 0x006DC326: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006DC35E; /* 0x006DC329: jae 0x6dc35e */
L_006DC32B:
    ecx = 0xCCC0u; /* 0x006DC32B: mov ecx, 0xccc0 */
    MEM32(ebp + (-0x14)) = 0xA2A0CCC0u; /* 0x006DC330: mov dword ptr [ebp - 0x14], 0xa2a0ccc0 */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(ecx)); /* 0x006DC337: mov word ptr [ebp - 0xc], cx */
    eax = 1; /* 0x006DC33B: mov eax, 1 */
    ecx = MEM32(ebp + (-0x68)); /* 0x006DC340: mov ecx, dword ptr [ebp - 0x68] */
    MEM32(ebp + (-0x10)) = 0xA2A0A4A0u; /* 0x006DC343: mov dword ptr [ebp - 0x10], 0xa2a0a4a0 */
    edx = (uint32_t)MEM16(ebp + edx * 2 + (-0x14)); /* 0x006DC34A: movzx edx, word ptr [ebp + edx*2 - 0x14] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006DC34F: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006DC34F: shl eax, cl */
    /* test eax, edx */ /* 0x006DC351: test eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x50)); /* 0x006DC353: mov edx, dword ptr [ebp - 0x50] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC35E; /* 0x006DC356: je 0x6dc35e */
L_006DC358:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFF808080u)); _flag_b = (uint32_t)((MEM32(esi) | 0xFF808080u));
    MEM32(esi) = MEM32(esi) | 0xFF808080u; /* 0x006DC358: or dword ptr [esi], 0xff808080 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DC35E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) - 1; /* 0x006DC35E: dec dword ptr [ebp - 0x68] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006DC361: inc edi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x9C)); /* 0x006DC362: mov eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x006DC368: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006DC36B: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x54)) */ /* 0x006DC36E: cmp edi, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DC2F0; /* 0x006DC371: jb 0x6dc2f0 */
L_006DC377:
    esi = MEM32(ebp + (-0x54)); /* 0x006DC377: mov esi, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x74)); /* 0x006DC37A: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(ebp + (-0x44)); /* 0x006DC37D: mov ecx, dword ptr [ebp - 0x44] */
    ebx = MEM32(ebp + (-0x78)); /* 0x006DC380: mov ebx, dword ptr [ebp - 0x78] */
L_006DC383:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x94)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x94)); /* 0x006DC383: add ebx, dword ptr [ebp - 0x94] */
    _flag_k = FK_ADD;
    edi = esi * 4; /* 0x006DC389: lea edi, [esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x98)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x98)); /* 0x006DC390: add eax, dword ptr [ebp - 0x98] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006DC396: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) + edi; /* 0x006DC397: add dword ptr [ebp - 0x6c], edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = edx; /* 0x006DC39A: mov dword ptr [ebp - 0x50], edx */
    MEM32(ebp + (-0x78)) = ebx; /* 0x006DC39D: mov dword ptr [ebp - 0x78], ebx */
    MEM32(ebp + (-0x74)) = eax; /* 0x006DC3A0: mov dword ptr [ebp - 0x74], eax */
    /* cmp edx, MEM32(ebp + (-0x4C)) */ /* 0x006DC3A3: cmp edx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DC2D0; /* 0x006DC3A6: jb 0x6dc2d0 */
L_006DC3AC:
    eax = MEM32(ebp + (-0x48)); /* 0x006DC3AC: mov eax, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x006DC3AF: push eax */
    ecx = MEM32(eax); /* 0x006DC3B0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x006DC3B2: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x006DC3B5: push dword ptr [ebp - 0x48] */
    ecx = MEM32(ebp + (-0x7C)); /* 0x006DC3B8: mov ecx, dword ptr [ebp - 0x7c] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x006DC3BB: push dword ptr [ebp - 0x88] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x006DC3C1: push dword ptr [ebp - 0x8c] */
    eax = MEM32(ecx); /* 0x006DC3C7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DC3C9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006DC3CA: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x44)); /* 0x006DC3CD: mov ebx, dword ptr [ebp - 0x44] */
    esi = eax; /* 0x006DC3D0: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DC3D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006DC3D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { esi = eax; } /* 0x006DC3D6: cmovns esi, eax */
    goto L_006DC3DD; /* 0x006DC3D9: jmp 0x6dc3dd */
L_006DC3DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DC3DB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006DC3DD:
    eax = MEM32(ebp + (-0x84)); /* 0x006DC3DD: mov eax, dword ptr [ebp - 0x84] */
    edi = MEM32(0x7CC07C); /* 0x006DC3E3: mov edi, dword ptr [0x7cc07c] */
    /* test eax, eax */ /* 0x006DC3E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC3F0; /* 0x006DC3EB: je 0x6dc3f0 */
L_006DC3ED:
    PUSH32(esp, eax); /* 0x006DC3ED: push eax */
    RECOMP_ICALL(edi); /* 0x006DC3EE: call edi */
    RECOMP_FLAGS_IN();
L_006DC3F0:
    eax = MEM32(ebp + (-0x80)); /* 0x006DC3F0: mov eax, dword ptr [ebp - 0x80] */
    /* test eax, eax */ /* 0x006DC3F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC3FA; /* 0x006DC3F5: je 0x6dc3fa */
L_006DC3F7:
    PUSH32(esp, eax); /* 0x006DC3F7: push eax */
    RECOMP_ICALL(edi); /* 0x006DC3F8: call edi */
    RECOMP_FLAGS_IN();
L_006DC3FA:
    eax = MEM32(ebp + (-0x60)); /* 0x006DC3FA: mov eax, dword ptr [ebp - 0x60] */
    /* test eax, eax */ /* 0x006DC3FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC40A; /* 0x006DC3FF: je 0x6dc40a */
L_006DC401:
    PUSH32(esp, eax); /* 0x006DC401: push eax */
    PUSH32(esp, 0); /* 0x006DC402: push 0 */
    RECOMP_ICALL(MEM32(0x7CC814)); /* 0x006DC404: call dword ptr [0x7cc814] */
    RECOMP_FLAGS_IN();
L_006DC40A:
    eax = MEM32(ebp + (-0x64)); /* 0x006DC40A: mov eax, dword ptr [ebp - 0x64] */
    edi = MEM32(0x7CC070); /* 0x006DC40D: mov edi, dword ptr [0x7cc070] */
    /* test eax, eax */ /* 0x006DC413: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC41A; /* 0x006DC415: je 0x6dc41a */
L_006DC417:
    PUSH32(esp, eax); /* 0x006DC417: push eax */
    RECOMP_ICALL(edi); /* 0x006DC418: call edi */
    RECOMP_FLAGS_IN();
L_006DC41A:
    eax = MEM32(ebp + (-0x5C)); /* 0x006DC41A: mov eax, dword ptr [ebp - 0x5c] */
    /* test eax, eax */ /* 0x006DC41D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC424; /* 0x006DC41F: je 0x6dc424 */
L_006DC421:
    PUSH32(esp, eax); /* 0x006DC421: push eax */
    RECOMP_ICALL(edi); /* 0x006DC422: call edi */
    RECOMP_FLAGS_IN();
L_006DC424:
    eax = MEM32(ebp + (-0x58)); /* 0x006DC424: mov eax, dword ptr [ebp - 0x58] */
    edi = MEM32(0x7CC694); /* 0x006DC427: mov edi, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x006DC42D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC437; /* 0x006DC42F: je 0x6dc437 */
L_006DC431:
    PUSH32(esp, eax); /* 0x006DC431: push eax */
    RECOMP_ICALL(edi); /* 0x006DC432: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DC434: add esp, 4 */
    _flag_k = FK_ADD;
L_006DC437:
    /* test ebx, ebx */ /* 0x006DC437: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC441; /* 0x006DC439: je 0x6dc441 */
L_006DC43B:
    PUSH32(esp, ebx); /* 0x006DC43B: push ebx */
    RECOMP_ICALL(edi); /* 0x006DC43C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DC43E: add esp, 4 */
    _flag_k = FK_ADD;
L_006DC441:
    ecx = MEM32(ebp + (-0x48)); /* 0x006DC441: mov ecx, dword ptr [ebp - 0x48] */
    /* test ecx, ecx */ /* 0x006DC444: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC44E; /* 0x006DC446: je 0x6dc44e */
L_006DC448:
    eax = MEM32(ecx); /* 0x006DC448: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DC44A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DC44B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_006DC44E:
    ecx = MEM32(ebp + (-0x8)); /* 0x006DC44E: mov ecx, dword ptr [ebp - 8] */
    eax = esi; /* 0x006DC451: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DC453: pop edi */
    esi = POP32_VAL(esp); /* 0x006DC454: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DC455: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DC457: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DC458: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DC45D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DC45F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC460: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DC470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC470u);

L_006DC470:
    PUSH32(esp, esi); /* 0x006DC470: push esi */
    /* cmp ecx, 0x3154454Du */ /* 0x006DC471: cmp ecx, 0x3154454d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3154454Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006DC67B; /* 0x006DC477: jg 0x6dc67b */
L_006DC47D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC674; /* 0x006DC47D: je 0x6dc674 */
L_006DC483:
    /* cmp ecx, 0x75u */ /* 0x006DC483: cmp ecx, 0x75 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x75u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DC6D1; /* 0x006DC486: ja 0x6dc6d1 */
L_006DC48C:
    eax = (uint32_t)MEM8(ecx + 0x6DC7DC); /* 0x006DC48C: movzx eax, byte ptr [ecx + 0x6dc7dc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6DC718)); goto _ljump; }
L_006DC49A:
    esi = 0x008031B4u; /* 0x006DC49A: mov esi, 0x8031b4 */
    goto L_006DC6EB; /* 0x006DC49F: jmp 0x6dc6eb */
L_006DC4A4:
    esi = 0x00803230u; /* 0x006DC4A4: mov esi, 0x803230 */
    goto L_006DC6EB; /* 0x006DC4A9: jmp 0x6dc6eb */
L_006DC4AE:
    esi = 0x00803210u; /* 0x006DC4AE: mov esi, 0x803210 */
    goto L_006DC6EB; /* 0x006DC4B3: jmp 0x6dc6eb */
L_006DC4B8:
    esi = 0x008031F0u; /* 0x006DC4B8: mov esi, 0x8031f0 */
    goto L_006DC6EB; /* 0x006DC4BD: jmp 0x6dc6eb */
L_006DC4C2:
    esi = 0x008031D4u; /* 0x006DC4C2: mov esi, 0x8031d4 */
    goto L_006DC6EB; /* 0x006DC4C7: jmp 0x6dc6eb */
L_006DC4CC:
    esi = 0x00803118u; /* 0x006DC4CC: mov esi, 0x803118 */
    goto L_006DC6EB; /* 0x006DC4D1: jmp 0x6dc6eb */
L_006DC4D6:
    esi = 0x008030F8u; /* 0x006DC4D6: mov esi, 0x8030f8 */
    goto L_006DC6EB; /* 0x006DC4DB: jmp 0x6dc6eb */
L_006DC4E0:
    esi = 0x008030D8u; /* 0x006DC4E0: mov esi, 0x8030d8 */
    goto L_006DC6EB; /* 0x006DC4E5: jmp 0x6dc6eb */
L_006DC4EA:
    esi = 0x008030BCu; /* 0x006DC4EA: mov esi, 0x8030bc */
    goto L_006DC6EB; /* 0x006DC4EF: jmp 0x6dc6eb */
L_006DC4F4:
    esi = 0x008031A0u; /* 0x006DC4F4: mov esi, 0x8031a0 */
    goto L_006DC6EB; /* 0x006DC4F9: jmp 0x6dc6eb */
L_006DC4FE:
    esi = 0x00803180u; /* 0x006DC4FE: mov esi, 0x803180 */
    goto L_006DC6EB; /* 0x006DC503: jmp 0x6dc6eb */
L_006DC508:
    esi = 0x00803160u; /* 0x006DC508: mov esi, 0x803160 */
    goto L_006DC6EB; /* 0x006DC50D: jmp 0x6dc6eb */
L_006DC512:
    esi = 0x00803138u; /* 0x006DC512: mov esi, 0x803138 */
    goto L_006DC6EB; /* 0x006DC517: jmp 0x6dc6eb */
L_006DC51C:
    esi = 0x00803398u; /* 0x006DC51C: mov esi, 0x803398 */
    goto L_006DC6EB; /* 0x006DC521: jmp 0x6dc6eb */
L_006DC526:
    esi = 0x00803378u; /* 0x006DC526: mov esi, 0x803378 */
    goto L_006DC6EB; /* 0x006DC52B: jmp 0x6dc6eb */
L_006DC530:
    esi = 0x0080335Cu; /* 0x006DC530: mov esi, 0x80335c */
    goto L_006DC6EB; /* 0x006DC535: jmp 0x6dc6eb */
L_006DC53A:
    esi = 0x00803334u; /* 0x006DC53A: mov esi, 0x803334 */
    goto L_006DC6EB; /* 0x006DC53F: jmp 0x6dc6eb */
L_006DC544:
    esi = 0x008033F8u; /* 0x006DC544: mov esi, 0x8033f8 */
    goto L_006DC6EB; /* 0x006DC549: jmp 0x6dc6eb */
L_006DC54E:
    esi = 0x008033E0u; /* 0x006DC54E: mov esi, 0x8033e0 */
    goto L_006DC6EB; /* 0x006DC553: jmp 0x6dc6eb */
L_006DC558:
    esi = 0x008033CCu; /* 0x006DC558: mov esi, 0x8033cc */
    goto L_006DC6EB; /* 0x006DC55D: jmp 0x6dc6eb */
L_006DC562:
    esi = 0x008033B8u; /* 0x006DC562: mov esi, 0x8033b8 */
    goto L_006DC6EB; /* 0x006DC567: jmp 0x6dc6eb */
L_006DC56C:
    esi = 0x00803298u; /* 0x006DC56C: mov esi, 0x803298 */
    goto L_006DC6EB; /* 0x006DC571: jmp 0x6dc6eb */
L_006DC576:
    esi = 0x00803280u; /* 0x006DC576: mov esi, 0x803280 */
    goto L_006DC6EB; /* 0x006DC57B: jmp 0x6dc6eb */
L_006DC580:
    esi = 0x00803268u; /* 0x006DC580: mov esi, 0x803268 */
    goto L_006DC6EB; /* 0x006DC585: jmp 0x6dc6eb */
L_006DC58A:
    esi = 0x0080324Cu; /* 0x006DC58A: mov esi, 0x80324c */
    goto L_006DC6EB; /* 0x006DC58F: jmp 0x6dc6eb */
L_006DC594:
    esi = 0x00803314u; /* 0x006DC594: mov esi, 0x803314 */
    goto L_006DC6EB; /* 0x006DC599: jmp 0x6dc6eb */
L_006DC59E:
    esi = 0x008032F4u; /* 0x006DC59E: mov esi, 0x8032f4 */
    goto L_006DC6EB; /* 0x006DC5A3: jmp 0x6dc6eb */
L_006DC5A8:
    esi = 0x008032D8u; /* 0x006DC5A8: mov esi, 0x8032d8 */
    goto L_006DC6EB; /* 0x006DC5AD: jmp 0x6dc6eb */
L_006DC5B2:
    esi = 0x008032B0u; /* 0x006DC5B2: mov esi, 0x8032b0 */
    goto L_006DC6EB; /* 0x006DC5B7: jmp 0x6dc6eb */
L_006DC5BC:
    esi = 0x00803560u; /* 0x006DC5BC: mov esi, 0x803560 */
    goto L_006DC6EB; /* 0x006DC5C1: jmp 0x6dc6eb */
L_006DC5C6:
    esi = 0x00803474u; /* 0x006DC5C6: mov esi, 0x803474 */
    goto L_006DC6EB; /* 0x006DC5CB: jmp 0x6dc6eb */
L_006DC5D0:
    esi = 0x00803458u; /* 0x006DC5D0: mov esi, 0x803458 */
    goto L_006DC6EB; /* 0x006DC5D5: jmp 0x6dc6eb */
L_006DC5DA:
    esi = 0x0080343Cu; /* 0x006DC5DA: mov esi, 0x80343c */
    goto L_006DC6EB; /* 0x006DC5DF: jmp 0x6dc6eb */
L_006DC5E4:
    esi = 0x00803420u; /* 0x006DC5E4: mov esi, 0x803420 */
    goto L_006DC6EB; /* 0x006DC5E9: jmp 0x6dc6eb */
L_006DC5EE:
    esi = 0x008034E0u; /* 0x006DC5EE: mov esi, 0x8034e0 */
    goto L_006DC6EB; /* 0x006DC5F3: jmp 0x6dc6eb */
L_006DC5F8:
    esi = 0x008034C8u; /* 0x006DC5F8: mov esi, 0x8034c8 */
    goto L_006DC6EB; /* 0x006DC5FD: jmp 0x6dc6eb */
L_006DC602:
    esi = 0x008034B0u; /* 0x006DC602: mov esi, 0x8034b0 */
    goto L_006DC6EB; /* 0x006DC607: jmp 0x6dc6eb */
L_006DC60C:
    esi = 0x0080348Cu; /* 0x006DC60C: mov esi, 0x80348c */
    goto L_006DC6EB; /* 0x006DC611: jmp 0x6dc6eb */
L_006DC616:
    esi = 0x008036D8u; /* 0x006DC616: mov esi, 0x8036d8 */
    goto L_006DC6EB; /* 0x006DC61B: jmp 0x6dc6eb */
L_006DC620:
    esi = 0x008036B8u; /* 0x006DC620: mov esi, 0x8036b8 */
    goto L_006DC6EB; /* 0x006DC625: jmp 0x6dc6eb */
L_006DC62A:
    esi = 0x00803690u; /* 0x006DC62A: mov esi, 0x803690 */
    goto L_006DC6EB; /* 0x006DC62F: jmp 0x6dc6eb */
L_006DC634:
    esi = 0x0080375Cu; /* 0x006DC634: mov esi, 0x80375c */
    goto L_006DC6EB; /* 0x006DC639: jmp 0x6dc6eb */
L_006DC63E:
    esi = 0x0080373Cu; /* 0x006DC63E: mov esi, 0x80373c */
    goto L_006DC6EB; /* 0x006DC643: jmp 0x6dc6eb */
L_006DC648:
    esi = 0x00803710u; /* 0x006DC648: mov esi, 0x803710 */
    goto L_006DC6EB; /* 0x006DC64D: jmp 0x6dc6eb */
L_006DC652:
    esi = 0x008036F8u; /* 0x006DC652: mov esi, 0x8036f8 */
    goto L_006DC6EB; /* 0x006DC657: jmp 0x6dc6eb */
L_006DC65C:
    esi = 0x00803638u; /* 0x006DC65C: mov esi, 0x803638 */
    goto L_006DC6EB; /* 0x006DC661: jmp 0x6dc6eb */
L_006DC666:
    esi = 0x0080360Cu; /* 0x006DC666: mov esi, 0x80360c */
    goto L_006DC6EB; /* 0x006DC66B: jmp 0x6dc6eb */
L_006DC66D:
    esi = 0x008035F0u; /* 0x006DC66D: mov esi, 0x8035f0 */
    goto L_006DC6EB; /* 0x006DC672: jmp 0x6dc6eb */
L_006DC674:
    esi = 0x00803668u; /* 0x006DC674: mov esi, 0x803668 */
    goto L_006DC6EB; /* 0x006DC679: jmp 0x6dc6eb */
L_006DC67B:
    /* cmp ecx, 0x33545844u */ /* 0x006DC67B: cmp ecx, 0x33545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x33545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006DC6B9; /* 0x006DC681: jg 0x6dc6b9 */
L_006DC683:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6B2; /* 0x006DC683: je 0x6dc6b2 */
L_006DC685:
    /* cmp ecx, 0x31545844u */ /* 0x006DC685: cmp ecx, 0x31545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x31545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6AB; /* 0x006DC68B: je 0x6dc6ab */
L_006DC68D:
    /* cmp ecx, 0x32545844u */ /* 0x006DC68D: cmp ecx, 0x32545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6A4; /* 0x006DC693: je 0x6dc6a4 */
L_006DC695:
    /* cmp ecx, 0x32595559u */ /* 0x006DC695: cmp ecx, 0x32595559 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DC6D1; /* 0x006DC69B: jne 0x6dc6d1 */
L_006DC69D:
    esi = 0x00803530u; /* 0x006DC69D: mov esi, 0x803530 */
    goto L_006DC6EB; /* 0x006DC6A2: jmp 0x6dc6eb */
L_006DC6A4:
    esi = 0x00803500u; /* 0x006DC6A4: mov esi, 0x803500 */
    goto L_006DC6EB; /* 0x006DC6A9: jmp 0x6dc6eb */
L_006DC6AB:
    esi = 0x00803518u; /* 0x006DC6AB: mov esi, 0x803518 */
    goto L_006DC6EB; /* 0x006DC6B0: jmp 0x6dc6eb */
L_006DC6B2:
    esi = 0x008035B8u; /* 0x006DC6B2: mov esi, 0x8035b8 */
    goto L_006DC6EB; /* 0x006DC6B7: jmp 0x6dc6eb */
L_006DC6B9:
    /* cmp ecx, 0x34545844u */ /* 0x006DC6B9: cmp ecx, 0x34545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6E6; /* 0x006DC6BF: je 0x6dc6e6 */
L_006DC6C1:
    /* cmp ecx, 0x35545844u */ /* 0x006DC6C1: cmp ecx, 0x35545844 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x35545844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6DF; /* 0x006DC6C7: je 0x6dc6df */
L_006DC6C9:
    /* cmp ecx, 0x59565955u */ /* 0x006DC6C9: cmp ecx, 0x59565955 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC6D8; /* 0x006DC6CF: je 0x6dc6d8 */
L_006DC6D1:
    esi = 0x008035D0u; /* 0x006DC6D1: mov esi, 0x8035d0 */
    goto L_006DC6EB; /* 0x006DC6D6: jmp 0x6dc6eb */
L_006DC6D8:
    esi = 0x00803548u; /* 0x006DC6D8: mov esi, 0x803548 */
    goto L_006DC6EB; /* 0x006DC6DD: jmp 0x6dc6eb */
L_006DC6DF:
    esi = 0x00803588u; /* 0x006DC6DF: mov esi, 0x803588 */
    goto L_006DC6EB; /* 0x006DC6E4: jmp 0x6dc6eb */
L_006DC6E6:
    esi = 0x008035A0u; /* 0x006DC6E6: mov esi, 0x8035a0 */
L_006DC6EB:
    /* test LO8(edx), LO8(edx) */ /* 0x006DC6EB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DC712; /* 0x006DC6ED: jne 0x6dc712 */
L_006DC6EF:
    PUSH32(esp, 0x00803658u); /* 0x006DC6EF: push 0x803658 */
    PUSH32(esp, esi); /* 0x006DC6F4: push esi */
    RECOMP_ICALL(MEM32(0x7CC578)); /* 0x006DC6F5: call dword ptr [0x7cc578] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006DC6FB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006DC6FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC712; /* 0x006DC700: je 0x6dc712 */
L_006DC702:
    PUSH32(esp, 0x00803658u); /* 0x006DC702: push 0x803658 */
    RECOMP_ICALL(MEM32(0x7CC10C)); /* 0x006DC707: call dword ptr [0x7cc10c] */
    RECOMP_FLAGS_IN();
    eax = esi + eax * 2; /* 0x006DC70D: lea eax, [esi + eax*2] */
    esi = POP32_VAL(esp); /* 0x006DC710: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC711: ret  */
L_006DC712:
    eax = esi; /* 0x006DC712: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006DC714: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC715: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006DC49Au: goto L_006DC49A;
      case 0x006DC4A4u: goto L_006DC4A4;
      case 0x006DC4AEu: goto L_006DC4AE;
      case 0x006DC4B8u: goto L_006DC4B8;
      case 0x006DC4C2u: goto L_006DC4C2;
      case 0x006DC4CCu: goto L_006DC4CC;
      case 0x006DC4D6u: goto L_006DC4D6;
      case 0x006DC4E0u: goto L_006DC4E0;
      case 0x006DC4EAu: goto L_006DC4EA;
      case 0x006DC4F4u: goto L_006DC4F4;
      case 0x006DC4FEu: goto L_006DC4FE;
      case 0x006DC508u: goto L_006DC508;
      case 0x006DC512u: goto L_006DC512;
      case 0x006DC51Cu: goto L_006DC51C;
      case 0x006DC526u: goto L_006DC526;
      case 0x006DC530u: goto L_006DC530;
      case 0x006DC53Au: goto L_006DC53A;
      case 0x006DC544u: goto L_006DC544;
      case 0x006DC54Eu: goto L_006DC54E;
      case 0x006DC558u: goto L_006DC558;
      case 0x006DC562u: goto L_006DC562;
      case 0x006DC56Cu: goto L_006DC56C;
      case 0x006DC576u: goto L_006DC576;
      case 0x006DC580u: goto L_006DC580;
      case 0x006DC58Au: goto L_006DC58A;
      case 0x006DC594u: goto L_006DC594;
      case 0x006DC59Eu: goto L_006DC59E;
      case 0x006DC5A8u: goto L_006DC5A8;
      case 0x006DC5B2u: goto L_006DC5B2;
      case 0x006DC5BCu: goto L_006DC5BC;
      case 0x006DC5C6u: goto L_006DC5C6;
      case 0x006DC5D0u: goto L_006DC5D0;
      case 0x006DC5DAu: goto L_006DC5DA;
      case 0x006DC5E4u: goto L_006DC5E4;
      case 0x006DC5EEu: goto L_006DC5EE;
      case 0x006DC5F8u: goto L_006DC5F8;
      case 0x006DC602u: goto L_006DC602;
      case 0x006DC60Cu: goto L_006DC60C;
      case 0x006DC616u: goto L_006DC616;
      case 0x006DC620u: goto L_006DC620;
      case 0x006DC62Au: goto L_006DC62A;
      case 0x006DC634u: goto L_006DC634;
      case 0x006DC63Eu: goto L_006DC63E;
      case 0x006DC648u: goto L_006DC648;
      case 0x006DC652u: goto L_006DC652;
      case 0x006DC65Cu: goto L_006DC65C;
      case 0x006DC666u: goto L_006DC666;
      case 0x006DC66Du: goto L_006DC66D;
      case 0x006DC6D1u: goto L_006DC6D1;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006DC860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC860u);

L_006DC860:
    /* cmp ecx, 0x10u */ /* 0x006DC860: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DC8D2; /* 0x006DC863: ja 0x6dc8d2 */
L_006DC865:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x6DC8D8)); goto _ljump; }
L_006DC86C:
    eax = 0x0080383Cu; /* 0x006DC86C: mov eax, 0x80383c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC871: ret  */
L_006DC872:
    eax = 0x00803804u; /* 0x006DC872: mov eax, 0x803804 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC877: ret  */
L_006DC878:
    eax = 0x008037D0u; /* 0x006DC878: mov eax, 0x8037d0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC87D: ret  */
L_006DC87E:
    eax = 0x00803AA4u; /* 0x006DC87E: mov eax, 0x803aa4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC883: ret  */
L_006DC884:
    eax = 0x00803A70u; /* 0x006DC884: mov eax, 0x803a70 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC889: ret  */
L_006DC88A:
    eax = 0x00803A3Cu; /* 0x006DC88A: mov eax, 0x803a3c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC88F: ret  */
L_006DC890:
    eax = 0x00803A08u; /* 0x006DC890: mov eax, 0x803a08 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC895: ret  */
L_006DC896:
    eax = 0x00803B74u; /* 0x006DC896: mov eax, 0x803b74 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC89B: ret  */
L_006DC89C:
    eax = 0x00803B40u; /* 0x006DC89C: mov eax, 0x803b40 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8A1: ret  */
L_006DC8A2:
    eax = 0x00803B0Cu; /* 0x006DC8A2: mov eax, 0x803b0c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8A7: ret  */
L_006DC8A8:
    eax = 0x00803AD8u; /* 0x006DC8A8: mov eax, 0x803ad8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8AD: ret  */
L_006DC8AE:
    eax = 0x00803920u; /* 0x006DC8AE: mov eax, 0x803920 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8B3: ret  */
L_006DC8B4:
    eax = 0x008038ECu; /* 0x006DC8B4: mov eax, 0x8038ec */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8B9: ret  */
L_006DC8BA:
    eax = 0x008038B8u; /* 0x006DC8BA: mov eax, 0x8038b8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8BF: ret  */
L_006DC8C0:
    eax = 0x00803884u; /* 0x006DC8C0: mov eax, 0x803884 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8C5: ret  */
L_006DC8C6:
    eax = 0x008039D4u; /* 0x006DC8C6: mov eax, 0x8039d4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8CB: ret  */
L_006DC8CC:
    eax = 0x008039A0u; /* 0x006DC8CC: mov eax, 0x8039a0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8D1: ret  */
L_006DC8D2:
    eax = 0x0080396Cu; /* 0x006DC8D2: mov eax, 0x80396c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DC8D7: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006DC86Cu: goto L_006DC86C;
      case 0x006DC872u: goto L_006DC872;
      case 0x006DC878u: goto L_006DC878;
      case 0x006DC87Eu: goto L_006DC87E;
      case 0x006DC884u: goto L_006DC884;
      case 0x006DC88Au: goto L_006DC88A;
      case 0x006DC890u: goto L_006DC890;
      case 0x006DC896u: goto L_006DC896;
      case 0x006DC89Cu: goto L_006DC89C;
      case 0x006DC8A2u: goto L_006DC8A2;
      case 0x006DC8A8u: goto L_006DC8A8;
      case 0x006DC8AEu: goto L_006DC8AE;
      case 0x006DC8B4u: goto L_006DC8B4;
      case 0x006DC8BAu: goto L_006DC8BA;
      case 0x006DC8C0u: goto L_006DC8C0;
      case 0x006DC8C6u: goto L_006DC8C6;
      case 0x006DC8CCu: goto L_006DC8CC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006DC920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC920u);

L_006DC920:
    PUSH32(esp, ebp); /* 0x006DC920: push ebp */
    ebp = esp; /* 0x006DC921: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x006DC923: pop ebp */
    goto L_006DCB50; /* 0x006DC924: jmp 0x6dcb50 */
L_006DCB50:
    PUSH32(esp, ebp); /* 0x006DCB50: push ebp */
    ebp = esp; /* 0x006DCB51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006DCB53: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40Cu; /* 0x006DCB56: sub esp, 0x40c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DCB5C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006DCB61: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x408) = eax; /* 0x006DCB63: mov dword ptr [esp + 0x408], eax */
    eax = MEM32(ebp + 0xC); /* 0x006DCB6A: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x006DCB6D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006DCB70: push ebx */
    PUSH32(esp, esi); /* 0x006DCB71: push esi */
    PUSH32(esp, edi); /* 0x006DCB72: push edi */
    edi = MEM32(0x87CBC4); /* 0x006DCB73: mov edi, dword ptr [0x87cbc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x110u; /* 0x006DCB79: sub eax, 0x110 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DCE66; /* 0x006DCB7E: je 0x6dce66 */
L_006DCB84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006DCB84: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DCBA0; /* 0x006DCB85: je 0x6dcba0 */
L_006DCB87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DCB87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006DCB89: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCB8A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCB8B: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCB8C: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCB93: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCB95: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCB9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCB9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCB9D: ret 0x10 */
L_006DCBA0:
    eax = MEM32(ebp + 0x10); /* 0x006DCBA0: mov eax, dword ptr [ebp + 0x10] */
    esi = 1; /* 0x006DCBA3: mov esi, 1 */
    ecx = (uint32_t)LO16(eax); /* 0x006DCBA8: movzx ecx, ax */
    /* cmp ecx, 0x3E8u */ /* 0x006DCBAB: cmp ecx, 0x3e8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006DCC2F; /* 0x006DCBB1: jg 0x6dcc2f */
L_006DCBB3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DCC03; /* 0x006DCBB3: je 0x6dcc03 */
L_006DCBB5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006DCBB5: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DCBE1; /* 0x006DCBB6: je 0x6dcbe1 */
L_006DCBB8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006DCBB8: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCBB9: jne 0x6dce4d */
L_006DCBBF:
    PUSH32(esp, 2); /* 0x006DCBBF: push 2 */
    PUSH32(esp, edx); /* 0x006DCBC1: push edx */
    RECOMP_ICALL(MEM32(0x7CC8B8)); /* 0x006DCBC2: call dword ptr [0x7cc8b8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCBC8: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCBCA: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCBCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCBCC: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCBCD: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCBD4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCBD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCBDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCBDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCBDE: ret 0x10 */
L_006DCBE1:
    PUSH32(esp, 1); /* 0x006DCBE1: push 1 */
    PUSH32(esp, edx); /* 0x006DCBE3: push edx */
    RECOMP_ICALL(MEM32(0x7CC8B8)); /* 0x006DCBE4: call dword ptr [0x7cc8b8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCBEA: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCBEC: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCBED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCBEE: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCBEF: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCBF6: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCBF8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCBFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCBFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCC00: ret 0x10 */
L_006DCC03:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCC03: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCC03: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCC06: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCC09: jne 0x6dce4d */
L_006DCC0F:
    ecx = edi; /* 0x006DCC0F: mov ecx, edi */
    RECOMP_CALL(sub_006DD1E0); /* 0x006DCC11: call 0x6dd1e0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCC16: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCC18: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCC19: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCC1A: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCC1B: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCC22: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCC24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCC29: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCC2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCC2C: ret 0x10 */
L_006DCC2F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3EAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3EAu; /* 0x006DCC2F: sub ecx, 0x3ea */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x10u */ /* 0x006DCC35: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCC38: ja 0x6dce4d */
L_006DCC3E:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x6DCFA8)); goto _ljump; }
L_006DCC45:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCC45: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCC45: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCC48: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCC4B: jne 0x6dce4d */
L_006DCC51:
    ecx = edi; /* 0x006DCC51: mov ecx, edi */
    RECOMP_CALL(sub_006DCFF0); /* 0x006DCC53: call 0x6dcff0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCC58: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCC5A: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCC5B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCC5C: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCC5D: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCC64: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCC66: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCC6B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCC6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCC6E: ret 0x10 */
L_006DCC71:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCC71: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCC71: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCC74: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCC77: jne 0x6dce4d */
L_006DCC7D:
    ecx = edi; /* 0x006DCC7D: mov ecx, edi */
    RECOMP_CALL(sub_006DD6D0); /* 0x006DCC7F: call 0x6dd6d0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCC84: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCC86: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCC87: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCC88: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCC89: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCC90: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCC92: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCC97: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCC99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCC9A: ret 0x10 */
L_006DCC9D:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCC9D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCC9D: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCCA0: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCCA3: jne 0x6dce4d */
L_006DCCA9:
    ecx = edi; /* 0x006DCCA9: mov ecx, edi */
    RECOMP_CALL(sub_006DDB20); /* 0x006DCCAB: call 0x6ddb20 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCCB0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCCB2: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCCB3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCCB4: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCCB5: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCCBC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCCBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCCC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCCC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCCC6: ret 0x10 */
L_006DCCC9:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCCC9: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCCC9: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCCCC: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCCCF: jne 0x6dce4d */
L_006DCCD5:
    ecx = edi; /* 0x006DCCD5: mov ecx, edi */
    RECOMP_CALL(sub_006DDD60); /* 0x006DCCD7: call 0x6ddd60 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCCDC: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCCDE: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCCDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCCE0: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCCE1: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCCE8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCCEA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCCEF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCCF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCCF2: ret 0x10 */
L_006DCCF5:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCCF5: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCCF5: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCCF8: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCCFB: jne 0x6dce4d */
L_006DCD01:
    ecx = edi; /* 0x006DCD01: mov ecx, edi */
    RECOMP_CALL(sub_006DDDB0); /* 0x006DCD03: call 0x6dddb0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCD08: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCD0A: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCD0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCD0C: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCD0D: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCD14: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCD16: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCD1B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCD1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCD1E: ret 0x10 */
L_006DCD21:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCD21: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCD21: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCD24: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCD27: jne 0x6dce4d */
L_006DCD2D:
    ecx = edi; /* 0x006DCD2D: mov ecx, edi */
    RECOMP_CALL(sub_006DE350); /* 0x006DCD2F: call 0x6de350 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCD34: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCD36: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCD37: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCD38: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCD39: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCD40: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCD42: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCD47: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCD49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCD4A: ret 0x10 */
L_006DCD4D:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCD4D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCD4D: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCD50: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCD53: jne 0x6dce4d */
L_006DCD59:
    ecx = edi; /* 0x006DCD59: mov ecx, edi */
    RECOMP_CALL(sub_006DE510); /* 0x006DCD5B: call 0x6de510 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCD60: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCD62: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCD63: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCD64: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCD65: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCD6C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCD6E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCD73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCD75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCD76: ret 0x10 */
L_006DCD79:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCD79: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCD79: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCD7C: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCD7F: jne 0x6dce4d */
L_006DCD85:
    ecx = edi; /* 0x006DCD85: mov ecx, edi */
    RECOMP_CALL(sub_006DE6F0); /* 0x006DCD87: call 0x6de6f0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCD8C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCD8E: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCD8F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCD90: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCD91: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCD98: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCD9A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCD9F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCDA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCDA2: ret 0x10 */
L_006DCDA5:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCDA5: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCDA5: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCDA8: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCDAB: jne 0x6dce4d */
L_006DCDB1:
    ecx = edi; /* 0x006DCDB1: mov ecx, edi */
    RECOMP_CALL(sub_006DE740); /* 0x006DCDB3: call 0x6de740 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCDB8: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCDBA: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCDBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCDBC: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCDBD: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCDC4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCDC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCDCB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCDCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCDCE: ret 0x10 */
L_006DCDD1:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCDD1: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCDD1: shr eax, 0x10 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x006DCDD4: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCDD7: jne 0x6dce4d */
L_006DCDD9:
    ecx = edi; /* 0x006DCDD9: mov ecx, edi */
    RECOMP_CALL(sub_006DE790); /* 0x006DCDDB: call 0x6de790 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006DCDE0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCDE2: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCDE3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCDE4: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCDE5: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCDEC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCDEE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCDF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCDF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCDF6: ret 0x10 */
L_006DCDF9:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DCDF9: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DCDF9: shr eax, 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DCDFC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x006DCDFE: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCE01: jne 0x6dce4d */
L_006DCE03:
    PUSH32(esp, 0x3F4u); /* 0x006DCE03: push 0x3f4 */
    PUSH32(esp, MEM32(edi)); /* 0x006DCE08: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DCE0A: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DCE10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DCE4D; /* 0x006DCE12: je 0x6dce4d */
L_006DCE14:
    PUSH32(esp, 0); /* 0x006DCE14: push 0 */
    PUSH32(esp, 0); /* 0x006DCE16: push 0 */
    PUSH32(esp, 0xF0u); /* 0x006DCE18: push 0xf0 */
    PUSH32(esp, eax); /* 0x006DCE1D: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DCE1E: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x006DCE24: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006DCE27: sete al */
    MEM8(edi + 0x3C) = (uint8_t)(LO8(eax)); /* 0x006DCE2A: mov byte ptr [edi + 0x3c], al */
    eax = esi; /* 0x006DCE2D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCE2F: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCE30: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCE31: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCE32: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCE39: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCE3B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCE40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCE42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCE43: ret 0x10 */
L_006DCE46:
    ecx = edi; /* 0x006DCE46: mov ecx, edi */
    RECOMP_CALL(sub_006DD2D0); /* 0x006DCE48: call 0x6dd2d0 */
    RECOMP_FLAGS_IN();
L_006DCE4D:
    eax = esi; /* 0x006DCE4D: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006DCE4F: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCE50: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCE51: pop ebx */
    ecx = MEM32(esp + 0x408); /* 0x006DCE52: mov ecx, dword ptr [esp + 0x408] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCE59: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCE5B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCE60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCE62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCE63: ret 0x10 */
L_006DCE66:
    eax = MEM32(edi + 0x4); /* 0x006DCE66: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DCE69: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x7CC8B0); /* 0x006DCE6B: mov esi, dword ptr [0x7cc8b0] */
    ebx = MEM32(0x7CC708); /* 0x006DCE71: mov ebx, dword ptr [0x7cc708] */
    MEM32(edi) = edx; /* 0x006DCE77: mov dword ptr [edi], edx */
    eax = MEM32(eax + 0x4); /* 0x006DCE79: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = ecx; /* 0x006DCE7C: mov dword ptr [esp + 0xc], ecx */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006DCE80: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DCF30; /* 0x006DCE83: jbe 0x6dcf30 */
L_006DCE89:
    esp = esp; /* 0x006DCE89: lea esp, [esp] */
L_006DCE90:
    eax = MEM32(edi + 0x4); /* 0x006DCE90: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x006DCE93: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax), 0 */ /* 0x006DCE96: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCEA6; /* 0x006DCE99: jne 0x6dcea6 */
L_006DCE9B:
    ebx = MEM32(eax + 0x8); /* 0x006DCE9B: mov ebx, dword ptr [eax + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x006DCE9E: imul ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x4); /* 0x006DCEA1: add ebx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006DCEAC; /* 0x006DCEA4: jmp 0x6dceac */
L_006DCEA6:
    eax = MEM32(eax + 0x4); /* 0x006DCEA6: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(eax + ecx * 4); /* 0x006DCEA9: mov ebx, dword ptr [eax + ecx*4] */
L_006DCEAC:
    PUSH32(esp, ecx); /* 0x006DCEAC: push ecx */
    edx = ebx + 0x204; /* 0x006DCEAD: lea edx, [ebx + 0x204] */
    ecx = esp + 0x14; /* 0x006DCEB3: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_006D76A0); /* 0x006DCEB7: call 0x6d76a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006DCEBC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3EAu); /* 0x006DCEBF: push 0x3ea */
    PUSH32(esp, MEM32(edi)); /* 0x006DCEC4: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DCEC6: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006DCEC8: mov esi, eax */
    eax = esp + 0x10; /* 0x006DCECA: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x006DCECE: push eax */
    PUSH32(esp, 0); /* 0x006DCECF: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DCED1: push 0x143 */
    PUSH32(esp, esi); /* 0x006DCED6: push esi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DCED7: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006DCEDD: push ebx */
    PUSH32(esp, eax); /* 0x006DCEDE: push eax */
    PUSH32(esp, 0x151u); /* 0x006DCEDF: push 0x151 */
    PUSH32(esp, esi); /* 0x006DCEE4: push esi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DCEE5: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x006DCEEB: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DCEF6; /* 0x006DCEEF: je 0x6dcef6 */
L_006DCEF1:
    ecx = MEM32(edi + 0x14); /* 0x006DCEF1: mov ecx, dword ptr [edi + 0x14] */
    goto L_006DCEF9; /* 0x006DCEF4: jmp 0x6dcef9 */
L_006DCEF6:
    ecx = MEM32(edi + 0x50); /* 0x006DCEF6: mov ecx, dword ptr [edi + 0x50] */
L_006DCEF9:
    eax = MEM32(ebx); /* 0x006DCEF9: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(ecx) */ /* 0x006DCEFB: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DCF0C; /* 0x006DCEFD: jne 0x6dcf0c */
L_006DCEFF:
    PUSH32(esp, ebx); /* 0x006DCEFF: push ebx */
    PUSH32(esp, 0x3EAu); /* 0x006DCF00: push 0x3ea */
    ecx = edi; /* 0x006DCF05: mov ecx, edi */
    RECOMP_CALL(sub_006DC970); /* 0x006DCF07: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DCF0C:
    eax = MEM32(edi + 0x4); /* 0x006DCF0C: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(esp + 0xC); /* 0x006DCF0F: mov ecx, dword ptr [esp + 0xc] */
    esi = MEM32(0x7CC8B0); /* 0x006DCF13: mov esi, dword ptr [0x7cc8b0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006DCF19: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0xC) = ecx; /* 0x006DCF1A: mov dword ptr [esp + 0xc], ecx */
    eax = MEM32(eax + 0x4); /* 0x006DCF1E: mov eax, dword ptr [eax + 4] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x006DCF21: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DCE90; /* 0x006DCF24: jb 0x6dce90 */
L_006DCF2A:
    ebx = MEM32(0x7CC708); /* 0x006DCF2A: mov ebx, dword ptr [0x7cc708] */
L_006DCF30:
    PUSH32(esp, 0x3EAu); /* 0x006DCF30: push 0x3ea */
    PUSH32(esp, MEM32(edi)); /* 0x006DCF35: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DCF37: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DCF39: push 0 */
    PUSH32(esp, 0); /* 0x006DCF3B: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DCF3D: push 0x147 */
    PUSH32(esp, eax); /* 0x006DCF42: push eax */
    RECOMP_ICALL(ebx); /* 0x006DCF43: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DCF45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DCF8C; /* 0x006DCF47: jns 0x6dcf8c */
L_006DCF49:
    PUSH32(esp, 0x3EAu); /* 0x006DCF49: push 0x3ea */
    PUSH32(esp, MEM32(edi)); /* 0x006DCF4E: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DCF50: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DCF52: push 0 */
    PUSH32(esp, 0); /* 0x006DCF54: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DCF56: push 0x146 */
    PUSH32(esp, eax); /* 0x006DCF5B: push eax */
    RECOMP_ICALL(ebx); /* 0x006DCF5C: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DCF5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DCF8C; /* 0x006DCF60: je 0x6dcf8c */
L_006DCF62:
    PUSH32(esp, 0x3EAu); /* 0x006DCF62: push 0x3ea */
    PUSH32(esp, MEM32(edi)); /* 0x006DCF67: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DCF69: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DCF6B: push 0 */
    PUSH32(esp, 0); /* 0x006DCF6D: push 0 */
    esi = eax; /* 0x006DCF6F: mov esi, eax */
    PUSH32(esp, 0x14Eu); /* 0x006DCF71: push 0x14e */
    PUSH32(esp, esi); /* 0x006DCF76: push esi */
    RECOMP_ICALL(ebx); /* 0x006DCF77: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DCF79: push esi */
    PUSH32(esp, 0x000103EAu); /* 0x006DCF7A: push 0x103ea */
    PUSH32(esp, 0x111u); /* 0x006DCF7F: push 0x111 */
    PUSH32(esp, MEM32(edi)); /* 0x006DCF84: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DCF86: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
L_006DCF8C:
    ecx = MEM32(esp + 0x414); /* 0x006DCF8C: mov ecx, dword ptr [esp + 0x414] */
    eax = 1; /* 0x006DCF93: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006DCF98: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCF99: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCF9A: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006DCF9B: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCF9D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCFA2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCFA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006DCFA5: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x006DCC45u: goto L_006DCC45;
      case 0x006DCC71u: goto L_006DCC71;
      case 0x006DCC9Du: goto L_006DCC9D;
      case 0x006DCCC9u: goto L_006DCCC9;
      case 0x006DCCF5u: goto L_006DCCF5;
      case 0x006DCD21u: goto L_006DCD21;
      case 0x006DCD4Du: goto L_006DCD4D;
      case 0x006DCD79u: goto L_006DCD79;
      case 0x006DCDA5u: goto L_006DCDA5;
      case 0x006DCDD1u: goto L_006DCDD1;
      case 0x006DCDF9u: goto L_006DCDF9;
      case 0x006DCE46u: goto L_006DCE46;
      case 0x006DCE4Du: goto L_006DCE4D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006DC930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC930u);

L_006DC930:
    PUSH32(esp, ebp); /* 0x006DC930: push ebp */
    ebp = esp; /* 0x006DC931: mov ebp, esp */
    PUSH32(esp, edi); /* 0x006DC933: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DC934: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ecx)); /* 0x006DC937: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DC939: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006DC93F: push dword ptr [ebp + 0x10] */
    edi = eax; /* 0x006DC942: mov edi, eax */
    PUSH32(esp, 0); /* 0x006DC944: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DC946: push 0x143 */
    PUSH32(esp, edi); /* 0x006DC94B: push edi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DC94C: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006DC952: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x006DC955: push eax */
    PUSH32(esp, 0x151u); /* 0x006DC956: push 0x151 */
    PUSH32(esp, edi); /* 0x006DC95B: push edi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DC95C: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006DC962: pop edi */
    ebp = POP32_VAL(esp); /* 0x006DC963: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006DC964: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006DC970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DC970u);

L_006DC970:
    PUSH32(esp, ebp); /* 0x006DC970: push ebp */
    ebp = esp; /* 0x006DC971: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006DC973: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006DC976: push ebx */
    PUSH32(esp, esi); /* 0x006DC977: push esi */
    esi = MEM32(0x7CC8B0); /* 0x006DC978: mov esi, dword ptr [0x7cc8b0] */
    ebx = ecx; /* 0x006DC97E: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006DC980: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DC981: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x006DC984: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, MEM32(ebx)); /* 0x006DC987: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DC989: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DC98B: push dword ptr [ebp + 8] */
    edi = eax; /* 0x006DC98E: mov edi, eax */
    PUSH32(esp, MEM32(ebx)); /* 0x006DC990: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DC992: call esi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC708); /* 0x006DC994: mov ebx, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DC99A: push 0 */
    PUSH32(esp, 0); /* 0x006DC99C: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DC99E: push 0x146 */
    PUSH32(esp, eax); /* 0x006DC9A3: push eax */
    RECOMP_ICALL(ebx); /* 0x006DC9A4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006DC9A6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DC9A8: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x006DC9AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DC9F7; /* 0x006DC9AD: je 0x6dc9f7 */
L_006DC9AF:
    /* nop */ /* 0x006DC9AF: nop  */
L_006DC9B0:
    PUSH32(esp, 0); /* 0x006DC9B0: push 0 */
    PUSH32(esp, esi); /* 0x006DC9B2: push esi */
    PUSH32(esp, 0x150u); /* 0x006DC9B3: push 0x150 */
    PUSH32(esp, edi); /* 0x006DC9B8: push edi */
    RECOMP_ICALL(ebx); /* 0x006DC9B9: call ebx */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x006DC9BB: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DC9CF; /* 0x006DC9BE: je 0x6dc9cf */
L_006DC9C0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006DC9C0: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x006DC9C1: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DC9B0; /* 0x006DC9C4: jb 0x6dc9b0 */
L_006DC9C6:
    edi = POP32_VAL(esp); /* 0x006DC9C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006DC9C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DC9C8: pop ebx */
    esp = ebp; /* 0x006DC9C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DC9CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DC9CC: ret 8 */
L_006DC9CF:
    PUSH32(esp, 0); /* 0x006DC9CF: push 0 */
    PUSH32(esp, esi); /* 0x006DC9D1: push esi */
    PUSH32(esp, 0x14Eu); /* 0x006DC9D2: push 0x14e */
    PUSH32(esp, edi); /* 0x006DC9D7: push edi */
    RECOMP_ICALL(ebx); /* 0x006DC9D8: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006DC9DA: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x006DC9DD: movzx eax, ax */
    PUSH32(esp, edi); /* 0x006DC9E0: push edi */
    _flag_a = (uint32_t)((eax | 0x00010000u)); _flag_b = (uint32_t)((eax | 0x00010000u));
    eax = eax | 0x00010000u; /* 0x006DC9E1: or eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DC9E6: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x006DC9E7: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0x111u); /* 0x006DC9EA: push 0x111 */
    PUSH32(esp, MEM32(eax)); /* 0x006DC9EF: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DC9F1: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
L_006DC9F7:
    edi = POP32_VAL(esp); /* 0x006DC9F7: pop edi */
    esi = POP32_VAL(esp); /* 0x006DC9F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DC9F9: pop ebx */
    esp = ebp; /* 0x006DC9FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DC9FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DC9FD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DCA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DCA00u);

L_006DCA00:
    PUSH32(esp, ebp); /* 0x006DCA00: push ebp */
    ebp = esp; /* 0x006DCA01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006DCA03: push ebx */
    PUSH32(esp, esi); /* 0x006DCA04: push esi */
    PUSH32(esp, edi); /* 0x006DCA05: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006DCA06: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x006DCA09: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006DCA0B: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x006DCA0C: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DCA0E: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DCA14: push 0 */
    PUSH32(esp, 0); /* 0x006DCA16: push 0 */
    esi = eax; /* 0x006DCA18: mov esi, eax */
    PUSH32(esp, 0x14Eu); /* 0x006DCA1A: push 0x14e */
    PUSH32(esp, esi); /* 0x006DCA1F: push esi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DCA20: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DCA26: push esi */
    eax = (uint32_t)LO16(edi); /* 0x006DCA27: movzx eax, di */
    _flag_a = (uint32_t)((eax | 0x00010000u)); _flag_b = (uint32_t)((eax | 0x00010000u));
    eax = eax | 0x00010000u; /* 0x006DCA2A: or eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006DCA2F: push eax */
    PUSH32(esp, 0x111u); /* 0x006DCA30: push 0x111 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DCA35: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DCA37: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006DCA3D: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCA3E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DCA3F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006DCA40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DCA41: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DCA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DCA50u);

L_006DCA50:
    PUSH32(esp, ebp); /* 0x006DCA50: push ebp */
    ebp = esp; /* 0x006DCA51: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006DCA53: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ecx)); /* 0x006DCA56: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DCA58: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DCA5E: push 0 */
    PUSH32(esp, 0); /* 0x006DCA60: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DCA62: push 0x14b */
    PUSH32(esp, eax); /* 0x006DCA67: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DCA68: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x006DCA6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006DCA6F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006DCA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DCA80u);

L_006DCA80:
    PUSH32(esp, ebp); /* 0x006DCA80: push ebp */
    ebp = esp; /* 0x006DCA81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1A0u; /* 0x006DCA83: sub esp, 0x1a0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DCA89: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DCA8E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DCA90: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x006DCA93: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006DCA96: push ebx */
    PUSH32(esp, esi); /* 0x006DCA97: push esi */
    esi = MEM32(0x7CC8B0); /* 0x006DCA98: mov esi, dword ptr [0x7cc8b0] */
    ebx = ecx; /* 0x006DCA9E: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x006DCAA0: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006DCAA1: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006DCAA4: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x006DCAA5: push dword ptr [ebx] */
    MEM32(ebp + (-0x198)) = eax; /* 0x006DCAA7: mov dword ptr [ebp - 0x198], eax */
    RECOMP_ICALL(esi); /* 0x006DCAAD: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DCAAF: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x006DCAB0: push dword ptr [ebx] */
    MEM32(ebp + (-0x1A0)) = eax; /* 0x006DCAB2: mov dword ptr [ebp - 0x1a0], eax */
    RECOMP_ICALL(esi); /* 0x006DCAB8: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DCABA: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DCAC0: push 0 */
    PUSH32(esp, 0); /* 0x006DCAC2: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DCAC4: push 0x146 */
    PUSH32(esp, eax); /* 0x006DCAC9: push eax */
    RECOMP_ICALL(edi); /* 0x006DCACA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006DCACC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x19C)) = eax; /* 0x006DCACE: mov dword ptr [ebp - 0x19c], eax */
    /* test eax, eax */ /* 0x006DCAD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DCB22; /* 0x006DCAD6: je 0x6dcb22 */
L_006DCAD8:
    ebx = MEM32(ebp + (-0x1A0)); /* 0x006DCAD8: mov ebx, dword ptr [ebp - 0x1a0] */
    edi = edi; /* 0x006DCADE: mov edi, edi */
L_006DCAE0:
    PUSH32(esp, 0); /* 0x006DCAE0: push 0 */
    PUSH32(esp, esi); /* 0x006DCAE2: push esi */
    PUSH32(esp, 0x149u); /* 0x006DCAE3: push 0x149 */
    PUSH32(esp, ebx); /* 0x006DCAE8: push ebx */
    RECOMP_ICALL(edi); /* 0x006DCAE9: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xC8u */ /* 0x006DCAEB: cmp eax, 0xc8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006DCB19; /* 0x006DCAF0: jge 0x6dcb19 */
L_006DCAF2:
    eax = ebp + (-0x194); /* 0x006DCAF2: lea eax, [ebp - 0x194] */
    PUSH32(esp, eax); /* 0x006DCAF8: push eax */
    PUSH32(esp, esi); /* 0x006DCAF9: push esi */
    PUSH32(esp, 0x148u); /* 0x006DCAFA: push 0x148 */
    PUSH32(esp, ebx); /* 0x006DCAFF: push ebx */
    RECOMP_ICALL(edi); /* 0x006DCB00: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x198))); /* 0x006DCB02: push dword ptr [ebp - 0x198] */
    eax = ebp + (-0x194); /* 0x006DCB08: lea eax, [ebp - 0x194] */
    PUSH32(esp, eax); /* 0x006DCB0E: push eax */
    RECOMP_ICALL(MEM32(0x7CC148)); /* 0x006DCB0F: call dword ptr [0x7cc148] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DCB15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DCB37; /* 0x006DCB17: je 0x6dcb37 */
L_006DCB19:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006DCB19: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x19C)) */ /* 0x006DCB1A: cmp esi, dword ptr [ebp - 0x19c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x19C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DCAE0; /* 0x006DCB20: jb 0x6dcae0 */
L_006DCB22:
    edi = POP32_VAL(esp); /* 0x006DCB22: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCB23: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006DCB24: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x006DCB26: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006DCB27: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DCB2A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCB2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCB31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCB33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DCB34: ret 8 */
L_006DCB37:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DCB37: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x006DCB3A: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x006DCB3C: pop edi */
    esi = POP32_VAL(esp); /* 0x006DCB3D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DCB3E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DCB40: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DCB41: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DCB46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DCB48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006DCB49: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006DCFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DCFF0u);

L_006DCFF0:
    PUSH32(esp, ebp); /* 0x006DCFF0: push ebp */
    ebp = esp; /* 0x006DCFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006DCFF3: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DCFF6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DCFFB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DCFFD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006DD000: push ebx */
    PUSH32(esp, esi); /* 0x006DD001: push esi */
    PUSH32(esp, edi); /* 0x006DD002: push edi */
    ebx = ecx; /* 0x006DD003: mov ebx, ecx */
    PUSH32(esp, 0x3EAu); /* 0x006DD005: push 0x3ea */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD00A: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD00C: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD012: mov edi, dword ptr [0x7cc708] */
    esi = eax; /* 0x006DD018: mov esi, eax */
    PUSH32(esp, 0); /* 0x006DD01A: push 0 */
    PUSH32(esp, 0); /* 0x006DD01C: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD01E: push 0x147 */
    PUSH32(esp, esi); /* 0x006DD023: push esi */
    RECOMP_ICALL(edi); /* 0x006DD024: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DD1CA; /* 0x006DD028: js 0x6dd1ca */
L_006DD02E:
    PUSH32(esp, 0); /* 0x006DD02E: push 0 */
    PUSH32(esp, eax); /* 0x006DD030: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD031: push 0x150 */
    PUSH32(esp, esi); /* 0x006DD036: push esi */
    RECOMP_ICALL(edi); /* 0x006DD037: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DD039: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x006DD03B: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x006DD03E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD1CA; /* 0x006DD040: je 0x6dd1ca */
L_006DD046:
    /* cmp MEM8(ebx + 0x8), 0 */ /* 0x006DD046: cmp byte ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD082; /* 0x006DD04A: je 0x6dd082 */
L_006DD04C:
    esi = MEM32(ebx + 0x4); /* 0x006DD04C: mov esi, dword ptr [ebx + 4] */
    MEM32(ebx + 0xC) = edi; /* 0x006DD04F: mov dword ptr [ebx + 0xc], edi */
    ecx = MEM32(esi); /* 0x006DD052: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x006DD054: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD05E; /* 0x006DD056: je 0x6dd05e */
L_006DD058:
    eax = MEM32(ecx); /* 0x006DD058: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006DD05A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006DD05B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_006DD05E:
    esi = MEM32(esi); /* 0x006DD05E: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x006DD060: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD085; /* 0x006DD062: je 0x6dd085 */
L_006DD064:
    eax = MEM32(esi); /* 0x006DD064: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x006DD066: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x006DD069: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x006DD06A: push dword ptr [edi] */
    PUSH32(esp, esi); /* 0x006DD06C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x006DD06D: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD070: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DD07A; /* 0x006DD072: js 0x6dd07a */
L_006DD074:
    eax = MEM32(ebp + (-0x8)); /* 0x006DD074: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x24) = eax; /* 0x006DD077: mov dword ptr [ebx + 0x24], eax */
L_006DD07A:
    eax = MEM32(esi); /* 0x006DD07A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x006DD07C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006DD07D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_006DD085; /* 0x006DD080: jmp 0x6dd085 */
L_006DD082:
    MEM32(ebx + 0x48) = edi; /* 0x006DD082: mov dword ptr [ebx + 0x48], edi */
L_006DD085:
    esi = MEM32(0x7CC8B0); /* 0x006DD085: mov esi, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0x3E8u); /* 0x006DD08B: push 0x3e8 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD090: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DD092: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD094: push 0 */
    PUSH32(esp, 0); /* 0x006DD096: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD098: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD09D: push eax */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DD09E: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x454); /* 0x006DD0A4: mov eax, dword ptr [edi + 0x454] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DD0AA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x006DD0AC: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006DD0AF: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DD168; /* 0x006DD0B2: jbe 0x6dd168 */
L_006DD0B8:
    /* cmp MEM32(eax), 0 */ /* 0x006DD0B8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD0C8; /* 0x006DD0BB: jne 0x6dd0c8 */
L_006DD0BD:
    edi = MEM32(eax + 0x8); /* 0x006DD0BD: mov edi, dword ptr [eax + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x006DD0C0: imul edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x4); /* 0x006DD0C3: add edi, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006DD0CE; /* 0x006DD0C6: jmp 0x6dd0ce */
L_006DD0C8:
    eax = MEM32(eax + 0x4); /* 0x006DD0C8: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax + ecx * 4); /* 0x006DD0CB: mov edi, dword ptr [eax + ecx*4] */
L_006DD0CE:
    eax = MEM32(edi + 0x4); /* 0x006DD0CE: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006DD0D1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DD0F5; /* 0x006DD0D2: je 0x6dd0f5 */
L_006DD0D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006DD0D4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DD0EC; /* 0x006DD0D5: je 0x6dd0ec */
L_006DD0D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006DD0D7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006DD0E3; /* 0x006DD0D8: je 0x6dd0e3 */
L_006DD0DA:
    MEM32(ebp + (-0x18)) = 0x00803864u; /* 0x006DD0DA: mov dword ptr [ebp - 0x18], 0x803864 */
    goto L_006DD0FC; /* 0x006DD0E1: jmp 0x6dd0fc */
L_006DD0E3:
    MEM32(ebp + (-0x18)) = 0x00803794u; /* 0x006DD0E3: mov dword ptr [ebp - 0x18], 0x803794 */
    goto L_006DD0FC; /* 0x006DD0EA: jmp 0x6dd0fc */
L_006DD0EC:
    MEM32(ebp + (-0x18)) = 0x00803774u; /* 0x006DD0EC: mov dword ptr [ebp - 0x18], 0x803774 */
    goto L_006DD0FC; /* 0x006DD0F3: jmp 0x6dd0fc */
L_006DD0F5:
    MEM32(ebp + (-0x18)) = 0x008037B0u; /* 0x006DD0F5: mov dword ptr [ebp - 0x18], 0x8037b0 */
L_006DD0FC:
    PUSH32(esp, 0x3E8u); /* 0x006DD0FC: push 0x3e8 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD101: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DD103: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006DD105: push dword ptr [ebp - 0x18] */
    esi = eax; /* 0x006DD108: mov esi, eax */
    PUSH32(esp, 0); /* 0x006DD10A: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DD10C: push 0x143 */
    PUSH32(esp, esi); /* 0x006DD111: push esi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DD112: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD118: push edi */
    PUSH32(esp, eax); /* 0x006DD119: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD11A: push 0x151 */
    PUSH32(esp, esi); /* 0x006DD11F: push esi */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DD120: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x8), 0 */ /* 0x006DD126: cmp byte ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD131; /* 0x006DD12A: je 0x6dd131 */
L_006DD12C:
    ecx = MEM32(ebx + 0x14); /* 0x006DD12C: mov ecx, dword ptr [ebx + 0x14] */
    goto L_006DD134; /* 0x006DD12F: jmp 0x6dd134 */
L_006DD131:
    ecx = MEM32(ebx + 0x50); /* 0x006DD131: mov ecx, dword ptr [ebx + 0x50] */
L_006DD134:
    eax = MEM32(edi + 0x4); /* 0x006DD134: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x006DD137: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD149; /* 0x006DD13A: jne 0x6dd149 */
L_006DD13C:
    PUSH32(esp, edi); /* 0x006DD13C: push edi */
    PUSH32(esp, 0x3E8u); /* 0x006DD13D: push 0x3e8 */
    ecx = ebx; /* 0x006DD142: mov ecx, ebx */
    RECOMP_CALL(sub_006DC970); /* 0x006DD144: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DD149:
    eax = MEM32(ebp + (-0x20)); /* 0x006DD149: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006DD14C: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(0x7CC8B0); /* 0x006DD14F: mov esi, dword ptr [0x7cc8b0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006DD155: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x006DD156: mov dword ptr [ebp - 0x1c], ecx */
    eax = MEM32(eax + 0x454); /* 0x006DD159: mov eax, dword ptr [eax + 0x454] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x006DD15F: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD0B8; /* 0x006DD162: jb 0x6dd0b8 */
L_006DD168:
    PUSH32(esp, 0x3E8u); /* 0x006DD168: push 0x3e8 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD16D: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DD16F: call esi */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD171: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD177: push 0 */
    PUSH32(esp, 0); /* 0x006DD179: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD17B: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD180: push eax */
    RECOMP_ICALL(edi); /* 0x006DD181: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD183: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD1CA; /* 0x006DD185: jns 0x6dd1ca */
L_006DD187:
    PUSH32(esp, 0x3E8u); /* 0x006DD187: push 0x3e8 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD18C: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DD18E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD190: push 0 */
    PUSH32(esp, 0); /* 0x006DD192: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DD194: push 0x146 */
    PUSH32(esp, eax); /* 0x006DD199: push eax */
    RECOMP_ICALL(edi); /* 0x006DD19A: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD19C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD1CA; /* 0x006DD19E: je 0x6dd1ca */
L_006DD1A0:
    PUSH32(esp, 0x3E8u); /* 0x006DD1A0: push 0x3e8 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD1A5: push dword ptr [ebx] */
    RECOMP_ICALL(esi); /* 0x006DD1A7: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD1A9: push 0 */
    PUSH32(esp, 0); /* 0x006DD1AB: push 0 */
    esi = eax; /* 0x006DD1AD: mov esi, eax */
    PUSH32(esp, 0x14Eu); /* 0x006DD1AF: push 0x14e */
    PUSH32(esp, esi); /* 0x006DD1B4: push esi */
    RECOMP_ICALL(edi); /* 0x006DD1B5: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DD1B7: push esi */
    PUSH32(esp, 0x000103E8u); /* 0x006DD1B8: push 0x103e8 */
    PUSH32(esp, 0x111u); /* 0x006DD1BD: push 0x111 */
    PUSH32(esp, MEM32(ebx)); /* 0x006DD1C2: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DD1C4: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
L_006DD1CA:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DD1CA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006DD1CD: pop edi */
    esi = POP32_VAL(esp); /* 0x006DD1CE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DD1CF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DD1D1: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DD1D2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DD1D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DD1D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DD1DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DD1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DD1E0u);

L_006DD1E0:
    PUSH32(esp, ebx); /* 0x006DD1E0: push ebx */
    PUSH32(esp, esi); /* 0x006DD1E1: push esi */
    PUSH32(esp, edi); /* 0x006DD1E2: push edi */
    edi = ecx; /* 0x006DD1E3: mov edi, ecx */
    PUSH32(esp, 0x3E8u); /* 0x006DD1E5: push 0x3e8 */
    PUSH32(esp, MEM32(edi)); /* 0x006DD1EA: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD1EC: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC708); /* 0x006DD1F2: mov ebx, dword ptr [0x7cc708] */
    esi = eax; /* 0x006DD1F8: mov esi, eax */
    PUSH32(esp, 0); /* 0x006DD1FA: push 0 */
    PUSH32(esp, 0); /* 0x006DD1FC: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD1FE: push 0x147 */
    PUSH32(esp, esi); /* 0x006DD203: push esi */
    RECOMP_ICALL(ebx); /* 0x006DD204: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD206: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DD2C9; /* 0x006DD208: js 0x6dd2c9 */
L_006DD20E:
    PUSH32(esp, 0); /* 0x006DD20E: push 0 */
    PUSH32(esp, eax); /* 0x006DD210: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD211: push 0x150 */
    PUSH32(esp, esi); /* 0x006DD216: push esi */
    RECOMP_ICALL(ebx); /* 0x006DD217: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD219: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD2C9; /* 0x006DD21B: je 0x6dd2c9 */
L_006DD221:
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x006DD221: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD22C; /* 0x006DD225: je 0x6dd22c */
L_006DD227:
    MEM32(edi + 0x10) = eax; /* 0x006DD227: mov dword ptr [edi + 0x10], eax */
    goto L_006DD22F; /* 0x006DD22A: jmp 0x6dd22f */
L_006DD22C:
    MEM32(edi + 0x4C) = eax; /* 0x006DD22C: mov dword ptr [edi + 0x4c], eax */
L_006DD22F:
    edx = MEM32(eax + 0x138); /* 0x006DD22F: mov edx, dword ptr [eax + 0x138] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x006DD235: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_HI8(ebx, 0); /* 0x006DD237: xor bh, bh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DD239: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edx + 0xC); /* 0x006DD23B: mov esi, dword ptr [edx + 0xc] */
    /* test esi, esi */ /* 0x006DD23E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD269; /* 0x006DD240: je 0x6dd269 */
L_006DD242:
    /* cmp MEM32(edx), 0 */ /* 0x006DD242: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD252; /* 0x006DD245: jne 0x6dd252 */
L_006DD247:
    eax = MEM32(edx + 0x8); /* 0x006DD247: mov eax, dword ptr [edx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006DD24A: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x006DD24D: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    goto L_006DD258; /* 0x006DD250: jmp 0x6dd258 */
L_006DD252:
    eax = MEM32(edx + 0x4); /* 0x006DD252: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + ecx * 4); /* 0x006DD255: mov eax, dword ptr [eax + ecx*4] */
L_006DD258:
    /* cmp MEM8(eax + 0x10), 0 */ /* 0x006DD258: cmp byte ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD262; /* 0x006DD25C: je 0x6dd262 */
L_006DD25E:
    SET_LO8(ebx, 1); /* 0x006DD25E: mov bl, 1 */
    goto L_006DD264; /* 0x006DD260: jmp 0x6dd264 */
L_006DD262:
    SET_HI8(ebx, 1); /* 0x006DD262: mov bh, 1 */
L_006DD264:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006DD264: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x006DD265: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD242; /* 0x006DD267: jb 0x6dd242 */
L_006DD269:
    eax = (uint32_t)LO8(ebx); /* 0x006DD269: movzx eax, bl */
    PUSH32(esp, eax); /* 0x006DD26C: push eax */
    PUSH32(esp, 0x3F8u); /* 0x006DD26D: push 0x3f8 */
    PUSH32(esp, MEM32(edi)); /* 0x006DD272: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD274: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC884); /* 0x006DD27A: mov esi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x006DD280: push eax */
    RECOMP_ICALL(esi); /* 0x006DD281: call esi */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)HI8(ebx); /* 0x006DD283: movzx eax, bh */
    PUSH32(esp, eax); /* 0x006DD286: push eax */
    PUSH32(esp, 0x3FAu); /* 0x006DD287: push 0x3fa */
    PUSH32(esp, MEM32(edi)); /* 0x006DD28C: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD28E: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD294: push eax */
    RECOMP_ICALL(esi); /* 0x006DD295: call esi */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x006DD297: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD2A8; /* 0x006DD29B: je 0x6dd2a8 */
L_006DD29D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006DD29D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD2A8; /* 0x006DD29F: je 0x6dd2a8 */
L_006DD2A1:
    PUSH32(esp, 0x3F8u); /* 0x006DD2A1: push 0x3f8 */
    goto L_006DD2AD; /* 0x006DD2A6: jmp 0x6dd2ad */
L_006DD2A8:
    PUSH32(esp, 0x3FAu); /* 0x006DD2A8: push 0x3fa */
L_006DD2AD:
    PUSH32(esp, 0x3FAu); /* 0x006DD2AD: push 0x3fa */
    PUSH32(esp, 0x3F8u); /* 0x006DD2B2: push 0x3f8 */
    PUSH32(esp, MEM32(edi)); /* 0x006DD2B7: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC808)); /* 0x006DD2B9: call dword ptr [0x7cc808] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006DD2BF: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x006DD2C1: pop edi */
    esi = POP32_VAL(esp); /* 0x006DD2C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DD2C3: pop ebx */
    goto L_006DD2D0; /* 0x006DD2C4: jmp 0x6dd2d0 */
L_006DD2C9:
    edi = POP32_VAL(esp); /* 0x006DD2C9: pop edi */
    esi = POP32_VAL(esp); /* 0x006DD2CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DD2CB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DD2CC: ret  */
L_006DD2D0:
    PUSH32(esp, ebp); /* 0x006DD2D0: push ebp */
    ebp = esp; /* 0x006DD2D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD8u; /* 0x006DD2D3: sub esp, 0xd8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DD2D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DD2DE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DD2E0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006DD2E3: push ebx */
    ebx = MEM32(0x7CC8B0); /* 0x006DD2E4: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, esi); /* 0x006DD2EA: push esi */
    PUSH32(esp, edi); /* 0x006DD2EB: push edi */
    esi = ecx; /* 0x006DD2EC: mov esi, ecx */
    PUSH32(esp, 0x3EAu); /* 0x006DD2EE: push 0x3ea */
    PUSH32(esp, MEM32(esi)); /* 0x006DD2F3: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD2F5: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD2F7: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD2FD: push 0 */
    PUSH32(esp, 0); /* 0x006DD2FF: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD301: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD306: push eax */
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD307: mov dword ptr [ebp - 0xd0], eax */
    RECOMP_ICALL(edi); /* 0x006DD30D: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD30F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD31F; /* 0x006DD311: jns 0x6dd31f */
L_006DD313:
    MEM32(ebp + (-0xD0)) = 0; /* 0x006DD313: mov dword ptr [ebp - 0xd0], 0 */
    goto L_006DD335; /* 0x006DD31D: jmp 0x6dd335 */
L_006DD31F:
    PUSH32(esp, 0); /* 0x006DD31F: push 0 */
    PUSH32(esp, eax); /* 0x006DD321: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD322: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x006DD327: push dword ptr [ebp - 0xd0] */
    RECOMP_ICALL(edi); /* 0x006DD32D: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD32F: mov dword ptr [ebp - 0xd0], eax */
L_006DD335:
    PUSH32(esp, 0x3E8u); /* 0x006DD335: push 0x3e8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD33A: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD33C: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD33E: push 0 */
    PUSH32(esp, 0); /* 0x006DD340: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD342: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD347: push eax */
    MEM32(ebp + (-0xD4)) = eax; /* 0x006DD348: mov dword ptr [ebp - 0xd4], eax */
    RECOMP_ICALL(edi); /* 0x006DD34E: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD350: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD358; /* 0x006DD352: jns 0x6dd358 */
L_006DD354:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD354: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006DD368; /* 0x006DD356: jmp 0x6dd368 */
L_006DD358:
    PUSH32(esp, 0); /* 0x006DD358: push 0 */
    PUSH32(esp, eax); /* 0x006DD35A: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD35B: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x006DD360: push dword ptr [ebp - 0xd4] */
    RECOMP_ICALL(edi); /* 0x006DD366: call edi */
    RECOMP_FLAGS_IN();
L_006DD368:
    /* cmp MEM32(ebp + (-0xD0)), 0 */ /* 0x006DD368: cmp dword ptr [ebp - 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xD4)) = eax; /* 0x006DD36F: mov dword ptr [ebp - 0xd4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD6BE; /* 0x006DD375: je 0x6dd6be */
L_006DD37B:
    /* test eax, eax */ /* 0x006DD37B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD6BE; /* 0x006DD37D: je 0x6dd6be */
L_006DD383:
    PUSH32(esp, 0x3F8u); /* 0x006DD383: push 0x3f8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD388: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC804)); /* 0x006DD38A: call dword ptr [0x7cc804] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD390: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0xD0)); /* 0x006DD392: mov eax, dword ptr [ebp - 0xd0] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD53E; /* 0x006DD398: je 0x6dd53e */
L_006DD39E:
    PUSH32(esp, 1); /* 0x006DD39E: push 1 */
    PUSH32(esp, 0x3F4u); /* 0x006DD3A0: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3A5: push dword ptr [esi] */
    MEM32(esi + 0xC) = eax; /* 0x006DD3A7: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD3AA: mov eax, dword ptr [ebp - 0xd4] */
    MEM8(esi + 0x8) = (uint8_t)(1); /* 0x006DD3B0: mov byte ptr [esi + 8], 1 */
    MEM32(esi + 0x10) = eax; /* 0x006DD3B4: mov dword ptr [esi + 0x10], eax */
    RECOMP_ICALL(ebx); /* 0x006DD3B7: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD3B9: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD3BA: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x3C), 0 */ /* 0x006DD3C0: cmp byte ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0); /* 0x006DD3C4: push 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD3CC; /* 0x006DD3C6: je 0x6dd3cc */
L_006DD3C8:
    PUSH32(esp, 1); /* 0x006DD3C8: push 1 */
    goto L_006DD3CE; /* 0x006DD3CA: jmp 0x6dd3ce */
L_006DD3CC:
    PUSH32(esp, 0); /* 0x006DD3CC: push 0 */
L_006DD3CE:
    PUSH32(esp, 0xF1u); /* 0x006DD3CE: push 0xf1 */
    PUSH32(esp, 0x3F4u); /* 0x006DD3D3: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3D8: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD3DA: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD3DC: push eax */
    RECOMP_ICALL(edi); /* 0x006DD3DD: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD3DF: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3E4: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD3E6: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD3E8: push 0 */
    PUSH32(esp, 0); /* 0x006DD3EA: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD3EC: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD3F1: push eax */
    RECOMP_ICALL(edi); /* 0x006DD3F2: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x006DD3F4: mov ecx, dword ptr [esi + 0x24] */
    SET_LO8(edx, 1); /* 0x006DD3F7: mov dl, 1 */
    RECOMP_CALL(sub_006DC470); /* 0x006DD3F9: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD3FE: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD403: push dword ptr [esi] */
    edi = eax; /* 0x006DD405: mov edi, eax */
    eax = MEM32(esi + 0x24); /* 0x006DD407: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD40A: mov dword ptr [ebp - 0xd0], eax */
    RECOMP_ICALL(ebx); /* 0x006DD410: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD412: push edi */
    edi = MEM32(0x7CC708); /* 0x006DD413: mov edi, dword ptr [0x7cc708] */
    ebx = eax; /* 0x006DD419: mov ebx, eax */
    PUSH32(esp, 0); /* 0x006DD41B: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DD41D: push 0x143 */
    PUSH32(esp, ebx); /* 0x006DD422: push ebx */
    RECOMP_ICALL(edi); /* 0x006DD423: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x006DD425: push dword ptr [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x006DD42B: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD42C: push 0x151 */
    PUSH32(esp, ebx); /* 0x006DD431: push ebx */
    RECOMP_ICALL(edi); /* 0x006DD432: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD434: push ecx */
    PUSH32(esp, 0x3EBu); /* 0x006DD435: push 0x3eb */
    ecx = esi; /* 0x006DD43A: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD43C: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC8B0); /* 0x006DD441: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0); /* 0x006DD447: push 0 */
    PUSH32(esp, 0x3EBu); /* 0x006DD449: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD44E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD450: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD452: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD453: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006DD459: push dword ptr [esi + 0x1c] */
    edi = (uint32_t)MEM16(esi + 0x1C); /* 0x006DD45C: movzx edi, word ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x006DD460: push dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x006DD463: movzx eax, word ptr [esi + 0x18] */
    if (16u) _cf = (((edi) >> 16) & 1u); /* 0x006DD467: shl edi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edi << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 16u; /* 0x006DD467: shl edi, 0x10 */
    PUSH32(esp, 0x00803BA8u); /* 0x006DD46A: push 0x803ba8 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x006DD46F: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xCC); /* 0x006DD471: lea eax, [ebp - 0xcc] */
    PUSH32(esp, 0x32u); /* 0x006DD477: push 0x32 */
    PUSH32(esp, eax); /* 0x006DD479: push eax */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DD47A: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006DD480: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD483: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6A)) = (uint16_t)(LO16(eax)); /* 0x006DD485: mov word ptr [ebp - 0x6a], ax */
    PUSH32(esp, 0x3ECu); /* 0x006DD489: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD48E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD490: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD492: push 0 */
    PUSH32(esp, 0); /* 0x006DD494: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD496: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD49B: push eax */
    eax = MEM32(0x7CC708); /* 0x006DD49C: mov eax, dword ptr [0x7cc708] */
    RECOMP_ICALL(eax); /* 0x006DD4A1: call eax */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xCC); /* 0x006DD4A3: lea eax, [ebp - 0xcc] */
    ecx = esi; /* 0x006DD4A9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DD4AB: push eax */
    PUSH32(esp, edi); /* 0x006DD4AC: push edi */
    PUSH32(esp, 0x3ECu); /* 0x006DD4AD: push 0x3ec */
    RECOMP_CALL(sub_006DC930); /* 0x006DD4B2: call 0x6dc930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD4B7: push ecx */
    PUSH32(esp, 0x3ECu); /* 0x006DD4B8: push 0x3ec */
    ecx = esi; /* 0x006DD4BD: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD4BF: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD4C4: push 0 */
    PUSH32(esp, 0x3ECu); /* 0x006DD4C6: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD4CB: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD4CD: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC884); /* 0x006DD4CF: mov edi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x006DD4D5: push eax */
    RECOMP_ICALL(edi); /* 0x006DD4D6: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x20); /* 0x006DD4D8: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006DD4DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD4F0; /* 0x006DD4DD: jne 0x6dd4f0 */
L_006DD4DF:
    PUSH32(esp, 0x00803C78u); /* 0x006DD4DF: push 0x803c78 */
    eax = ebp + (-0x68); /* 0x006DD4E4: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x006DD4E7: push eax */
    RECOMP_ICALL(MEM32(0x7CC140)); /* 0x006DD4E8: call dword ptr [0x7cc140] */
    RECOMP_FLAGS_IN();
    goto L_006DD505; /* 0x006DD4EE: jmp 0x6dd505 */
L_006DD4F0:
    PUSH32(esp, eax); /* 0x006DD4F0: push eax */
    PUSH32(esp, 0x00803C6Cu); /* 0x006DD4F1: push 0x803c6c */
    eax = ebp + (-0x68); /* 0x006DD4F6: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0x32u); /* 0x006DD4F9: push 0x32 */
    PUSH32(esp, eax); /* 0x006DD4FB: push eax */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DD4FC: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006DD502: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006DD505:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD505: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006DD507: mov ecx, esi */
    PUSH32(esp, 0x3EEu); /* 0x006DD509: push 0x3ee */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x006DD50E: mov word ptr [ebp - 6], ax */
    RECOMP_CALL(sub_006DCA50); /* 0x006DD512: call 0x6dca50 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x006DD517: lea eax, [ebp - 0x68] */
    ecx = esi; /* 0x006DD51A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DD51C: push eax */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x006DD51D: push dword ptr [esi + 0x20] */
    PUSH32(esp, 0x3EEu); /* 0x006DD520: push 0x3ee */
    RECOMP_CALL(sub_006DC930); /* 0x006DD525: call 0x6dc930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD52A: push ecx */
    PUSH32(esp, 0x3EEu); /* 0x006DD52B: push 0x3ee */
    ecx = esi; /* 0x006DD530: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD532: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD537: push 0 */
    goto L_006DD6B2; /* 0x006DD539: jmp 0x6dd6b2 */
L_006DD53E:
    PUSH32(esp, 0); /* 0x006DD53E: push 0 */
    PUSH32(esp, 0x3F4u); /* 0x006DD540: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD545: push dword ptr [esi] */
    MEM32(esi + 0x48) = eax; /* 0x006DD547: mov dword ptr [esi + 0x48], eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD54A: mov eax, dword ptr [ebp - 0xd4] */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x006DD550: mov byte ptr [esi + 8], 0 */
    MEM32(esi + 0x4C) = eax; /* 0x006DD554: mov dword ptr [esi + 0x4c], eax */
    RECOMP_ICALL(ebx); /* 0x006DD557: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD559: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD55A: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD560: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD565: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD567: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD569: push 0 */
    PUSH32(esp, 0); /* 0x006DD56B: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD56D: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD572: push eax */
    RECOMP_ICALL(edi); /* 0x006DD573: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD575: mov eax, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DD57B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD0)) = edi; /* 0x006DD57D: mov dword ptr [ebp - 0xd0], edi */
    ecx = MEM32(eax + 0x138); /* 0x006DD583: mov ecx, dword ptr [eax + 0x138] */
    /* cmp MEM32(ecx + 0xC), edi */ /* 0x006DD589: cmp dword ptr [ecx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DD649; /* 0x006DD58C: jbe 0x6dd649 */
L_006DD592:
    /* cmp MEM32(ecx), 0 */ /* 0x006DD592: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD5A2; /* 0x006DD595: jne 0x6dd5a2 */
L_006DD597:
    eax = MEM32(ecx + 0x8); /* 0x006DD597: mov eax, dword ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x006DD59A: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x006DD59D: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    goto L_006DD5A8; /* 0x006DD5A0: jmp 0x6dd5a8 */
L_006DD5A2:
    eax = MEM32(ecx + 0x4); /* 0x006DD5A2: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + edi * 4); /* 0x006DD5A5: mov eax, dword ptr [eax + edi*4] */
L_006DD5A8:
    /* cmp MEM8(eax + 0x10), 0 */ /* 0x006DD5A8: cmp byte ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD627; /* 0x006DD5AC: jne 0x6dd627 */
L_006DD5AE:
    ebx = MEM32(eax + 0x8); /* 0x006DD5AE: mov ebx, dword ptr [eax + 8] */
    SET_LO8(edx, 1); /* 0x006DD5B1: mov dl, 1 */
    ecx = ebx; /* 0x006DD5B3: mov ecx, ebx */
    MEM32(ebp + (-0xD8)) = ebx; /* 0x006DD5B5: mov dword ptr [ebp - 0xd8], ebx */
    RECOMP_CALL(sub_006DC470); /* 0x006DD5BB: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD5C0: push eax */
    PUSH32(esp, 0x3EBu); /* 0x006DD5C1: push 0x3eb */
    ecx = esi; /* 0x006DD5C6: mov ecx, esi */
    RECOMP_CALL(sub_006DCA80); /* 0x006DD5C8: call 0x6dca80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006DD5CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD627; /* 0x006DD5CF: jne 0x6dd627 */
L_006DD5D1:
    SET_LO8(edx, 1); /* 0x006DD5D1: mov dl, 1 */
    ecx = ebx; /* 0x006DD5D3: mov ecx, ebx */
    RECOMP_CALL(sub_006DC470); /* 0x006DD5D5: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD5DA: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD5DF: push dword ptr [esi] */
    edi = eax; /* 0x006DD5E1: mov edi, eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD5E3: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD5E9: push edi */
    PUSH32(esp, 0); /* 0x006DD5EA: push 0 */
    ebx = eax; /* 0x006DD5EC: mov ebx, eax */
    eax = MEM32(0x7CC708); /* 0x006DD5EE: mov eax, dword ptr [0x7cc708] */
    PUSH32(esp, 0x143u); /* 0x006DD5F3: push 0x143 */
    PUSH32(esp, ebx); /* 0x006DD5F8: push ebx */
    RECOMP_ICALL(eax); /* 0x006DD5F9: call eax */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xD8)); /* 0x006DD5FB: mov edi, dword ptr [ebp - 0xd8] */
    PUSH32(esp, edi); /* 0x006DD601: push edi */
    PUSH32(esp, eax); /* 0x006DD602: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD603: push 0x151 */
    PUSH32(esp, ebx); /* 0x006DD608: push ebx */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DD609: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(esi + 0x60) */ /* 0x006DD60F: cmp edi, dword ptr [esi + 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x60));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD621; /* 0x006DD612: jne 0x6dd621 */
L_006DD614:
    PUSH32(esp, edi); /* 0x006DD614: push edi */
    PUSH32(esp, 0x3EBu); /* 0x006DD615: push 0x3eb */
    ecx = esi; /* 0x006DD61A: mov ecx, esi */
    RECOMP_CALL(sub_006DC970); /* 0x006DD61C: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DD621:
    edi = MEM32(ebp + (-0xD0)); /* 0x006DD621: mov edi, dword ptr [ebp - 0xd0] */
L_006DD627:
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD627: mov eax, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006DD62D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xD0)) = edi; /* 0x006DD62E: mov dword ptr [ebp - 0xd0], edi */
    ecx = MEM32(eax + 0x138); /* 0x006DD634: mov ecx, dword ptr [eax + 0x138] */
    /* cmp edi, MEM32(ecx + 0xC) */ /* 0x006DD63A: cmp edi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD592; /* 0x006DD63D: jb 0x6dd592 */
L_006DD643:
    ebx = MEM32(0x7CC8B0); /* 0x006DD643: mov ebx, dword ptr [0x7cc8b0] */
L_006DD649:
    PUSH32(esp, 0x3EBu); /* 0x006DD649: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD64E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD650: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD652: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD658: push 0 */
    PUSH32(esp, 0); /* 0x006DD65A: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD65C: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD661: push eax */
    RECOMP_ICALL(edi); /* 0x006DD662: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD664: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD68E; /* 0x006DD666: jns 0x6dd68e */
L_006DD668:
    PUSH32(esp, 0x3EBu); /* 0x006DD668: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD66D: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD66F: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD671: push 0 */
    PUSH32(esp, 0); /* 0x006DD673: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DD675: push 0x146 */
    PUSH32(esp, eax); /* 0x006DD67A: push eax */
    RECOMP_ICALL(edi); /* 0x006DD67B: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD67D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD68E; /* 0x006DD67F: je 0x6dd68e */
L_006DD681:
    PUSH32(esp, ecx); /* 0x006DD681: push ecx */
    PUSH32(esp, 0x3EBu); /* 0x006DD682: push 0x3eb */
    ecx = esi; /* 0x006DD687: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD689: call 0x6dca00 */
    RECOMP_FLAGS_IN();
L_006DD68E:
    PUSH32(esp, 1); /* 0x006DD68E: push 1 */
    PUSH32(esp, 0x3EBu); /* 0x006DD690: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD695: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD697: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC884); /* 0x006DD699: mov edi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x006DD69F: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6A0: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DD6A2: push 1 */
    PUSH32(esp, 0x3ECu); /* 0x006DD6A4: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD6A9: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD6AB: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD6AD: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6AE: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DD6B0: push 1 */
L_006DD6B2:
    PUSH32(esp, 0x3EEu); /* 0x006DD6B2: push 0x3ee */
    PUSH32(esp, MEM32(esi)); /* 0x006DD6B7: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD6B9: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD6BB: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6BC: call edi */
    RECOMP_FLAGS_IN();
L_006DD6BE:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DD6BE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006DD6C1: pop edi */
    esi = POP32_VAL(esp); /* 0x006DD6C2: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DD6C3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DD6C5: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DD6C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DD6CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DD6CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DD6CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DD2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DD2D0u);

L_006DD2D0:
    PUSH32(esp, ebp); /* 0x006DD2D0: push ebp */
    ebp = esp; /* 0x006DD2D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD8u; /* 0x006DD2D3: sub esp, 0xd8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DD2D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DD2DE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DD2E0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006DD2E3: push ebx */
    ebx = MEM32(0x7CC8B0); /* 0x006DD2E4: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, esi); /* 0x006DD2EA: push esi */
    PUSH32(esp, edi); /* 0x006DD2EB: push edi */
    esi = ecx; /* 0x006DD2EC: mov esi, ecx */
    PUSH32(esp, 0x3EAu); /* 0x006DD2EE: push 0x3ea */
    PUSH32(esp, MEM32(esi)); /* 0x006DD2F3: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD2F5: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD2F7: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD2FD: push 0 */
    PUSH32(esp, 0); /* 0x006DD2FF: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD301: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD306: push eax */
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD307: mov dword ptr [ebp - 0xd0], eax */
    RECOMP_ICALL(edi); /* 0x006DD30D: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD30F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD31F; /* 0x006DD311: jns 0x6dd31f */
L_006DD313:
    MEM32(ebp + (-0xD0)) = 0; /* 0x006DD313: mov dword ptr [ebp - 0xd0], 0 */
    goto L_006DD335; /* 0x006DD31D: jmp 0x6dd335 */
L_006DD31F:
    PUSH32(esp, 0); /* 0x006DD31F: push 0 */
    PUSH32(esp, eax); /* 0x006DD321: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD322: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x006DD327: push dword ptr [ebp - 0xd0] */
    RECOMP_ICALL(edi); /* 0x006DD32D: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD32F: mov dword ptr [ebp - 0xd0], eax */
L_006DD335:
    PUSH32(esp, 0x3E8u); /* 0x006DD335: push 0x3e8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD33A: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD33C: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD33E: push 0 */
    PUSH32(esp, 0); /* 0x006DD340: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD342: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD347: push eax */
    MEM32(ebp + (-0xD4)) = eax; /* 0x006DD348: mov dword ptr [ebp - 0xd4], eax */
    RECOMP_ICALL(edi); /* 0x006DD34E: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD350: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD358; /* 0x006DD352: jns 0x6dd358 */
L_006DD354:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD354: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006DD368; /* 0x006DD356: jmp 0x6dd368 */
L_006DD358:
    PUSH32(esp, 0); /* 0x006DD358: push 0 */
    PUSH32(esp, eax); /* 0x006DD35A: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD35B: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x006DD360: push dword ptr [ebp - 0xd4] */
    RECOMP_ICALL(edi); /* 0x006DD366: call edi */
    RECOMP_FLAGS_IN();
L_006DD368:
    /* cmp MEM32(ebp + (-0xD0)), 0 */ /* 0x006DD368: cmp dword ptr [ebp - 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xD4)) = eax; /* 0x006DD36F: mov dword ptr [ebp - 0xd4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD6BE; /* 0x006DD375: je 0x6dd6be */
L_006DD37B:
    /* test eax, eax */ /* 0x006DD37B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD6BE; /* 0x006DD37D: je 0x6dd6be */
L_006DD383:
    PUSH32(esp, 0x3F8u); /* 0x006DD383: push 0x3f8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD388: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC804)); /* 0x006DD38A: call dword ptr [0x7cc804] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD390: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0xD0)); /* 0x006DD392: mov eax, dword ptr [ebp - 0xd0] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD53E; /* 0x006DD398: je 0x6dd53e */
L_006DD39E:
    PUSH32(esp, 1); /* 0x006DD39E: push 1 */
    PUSH32(esp, 0x3F4u); /* 0x006DD3A0: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3A5: push dword ptr [esi] */
    MEM32(esi + 0xC) = eax; /* 0x006DD3A7: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD3AA: mov eax, dword ptr [ebp - 0xd4] */
    MEM8(esi + 0x8) = (uint8_t)(1); /* 0x006DD3B0: mov byte ptr [esi + 8], 1 */
    MEM32(esi + 0x10) = eax; /* 0x006DD3B4: mov dword ptr [esi + 0x10], eax */
    RECOMP_ICALL(ebx); /* 0x006DD3B7: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD3B9: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD3BA: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x3C), 0 */ /* 0x006DD3C0: cmp byte ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0); /* 0x006DD3C4: push 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DD3CC; /* 0x006DD3C6: je 0x6dd3cc */
L_006DD3C8:
    PUSH32(esp, 1); /* 0x006DD3C8: push 1 */
    goto L_006DD3CE; /* 0x006DD3CA: jmp 0x6dd3ce */
L_006DD3CC:
    PUSH32(esp, 0); /* 0x006DD3CC: push 0 */
L_006DD3CE:
    PUSH32(esp, 0xF1u); /* 0x006DD3CE: push 0xf1 */
    PUSH32(esp, 0x3F4u); /* 0x006DD3D3: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3D8: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD3DA: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD3DC: push eax */
    RECOMP_ICALL(edi); /* 0x006DD3DD: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD3DF: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD3E4: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD3E6: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD3E8: push 0 */
    PUSH32(esp, 0); /* 0x006DD3EA: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD3EC: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD3F1: push eax */
    RECOMP_ICALL(edi); /* 0x006DD3F2: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x006DD3F4: mov ecx, dword ptr [esi + 0x24] */
    SET_LO8(edx, 1); /* 0x006DD3F7: mov dl, 1 */
    RECOMP_CALL(sub_006DC470); /* 0x006DD3F9: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD3FE: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD403: push dword ptr [esi] */
    edi = eax; /* 0x006DD405: mov edi, eax */
    eax = MEM32(esi + 0x24); /* 0x006DD407: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0xD0)) = eax; /* 0x006DD40A: mov dword ptr [ebp - 0xd0], eax */
    RECOMP_ICALL(ebx); /* 0x006DD410: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD412: push edi */
    edi = MEM32(0x7CC708); /* 0x006DD413: mov edi, dword ptr [0x7cc708] */
    ebx = eax; /* 0x006DD419: mov ebx, eax */
    PUSH32(esp, 0); /* 0x006DD41B: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DD41D: push 0x143 */
    PUSH32(esp, ebx); /* 0x006DD422: push ebx */
    RECOMP_ICALL(edi); /* 0x006DD423: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x006DD425: push dword ptr [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x006DD42B: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD42C: push 0x151 */
    PUSH32(esp, ebx); /* 0x006DD431: push ebx */
    RECOMP_ICALL(edi); /* 0x006DD432: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD434: push ecx */
    PUSH32(esp, 0x3EBu); /* 0x006DD435: push 0x3eb */
    ecx = esi; /* 0x006DD43A: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD43C: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC8B0); /* 0x006DD441: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0); /* 0x006DD447: push 0 */
    PUSH32(esp, 0x3EBu); /* 0x006DD449: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD44E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD450: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD452: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD453: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006DD459: push dword ptr [esi + 0x1c] */
    edi = (uint32_t)MEM16(esi + 0x1C); /* 0x006DD45C: movzx edi, word ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x006DD460: push dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x006DD463: movzx eax, word ptr [esi + 0x18] */
    if (16u) _cf = (((edi) >> 16) & 1u); /* 0x006DD467: shl edi, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edi << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 16u; /* 0x006DD467: shl edi, 0x10 */
    PUSH32(esp, 0x00803BA8u); /* 0x006DD46A: push 0x803ba8 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x006DD46F: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xCC); /* 0x006DD471: lea eax, [ebp - 0xcc] */
    PUSH32(esp, 0x32u); /* 0x006DD477: push 0x32 */
    PUSH32(esp, eax); /* 0x006DD479: push eax */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DD47A: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006DD480: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD483: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6A)) = (uint16_t)(LO16(eax)); /* 0x006DD485: mov word ptr [ebp - 0x6a], ax */
    PUSH32(esp, 0x3ECu); /* 0x006DD489: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD48E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD490: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD492: push 0 */
    PUSH32(esp, 0); /* 0x006DD494: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD496: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD49B: push eax */
    eax = MEM32(0x7CC708); /* 0x006DD49C: mov eax, dword ptr [0x7cc708] */
    RECOMP_ICALL(eax); /* 0x006DD4A1: call eax */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xCC); /* 0x006DD4A3: lea eax, [ebp - 0xcc] */
    ecx = esi; /* 0x006DD4A9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DD4AB: push eax */
    PUSH32(esp, edi); /* 0x006DD4AC: push edi */
    PUSH32(esp, 0x3ECu); /* 0x006DD4AD: push 0x3ec */
    RECOMP_CALL(sub_006DC930); /* 0x006DD4B2: call 0x6dc930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD4B7: push ecx */
    PUSH32(esp, 0x3ECu); /* 0x006DD4B8: push 0x3ec */
    ecx = esi; /* 0x006DD4BD: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD4BF: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD4C4: push 0 */
    PUSH32(esp, 0x3ECu); /* 0x006DD4C6: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD4CB: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD4CD: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC884); /* 0x006DD4CF: mov edi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x006DD4D5: push eax */
    RECOMP_ICALL(edi); /* 0x006DD4D6: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x20); /* 0x006DD4D8: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006DD4DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD4F0; /* 0x006DD4DD: jne 0x6dd4f0 */
L_006DD4DF:
    PUSH32(esp, 0x00803C78u); /* 0x006DD4DF: push 0x803c78 */
    eax = ebp + (-0x68); /* 0x006DD4E4: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x006DD4E7: push eax */
    RECOMP_ICALL(MEM32(0x7CC140)); /* 0x006DD4E8: call dword ptr [0x7cc140] */
    RECOMP_FLAGS_IN();
    goto L_006DD505; /* 0x006DD4EE: jmp 0x6dd505 */
L_006DD4F0:
    PUSH32(esp, eax); /* 0x006DD4F0: push eax */
    PUSH32(esp, 0x00803C6Cu); /* 0x006DD4F1: push 0x803c6c */
    eax = ebp + (-0x68); /* 0x006DD4F6: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0x32u); /* 0x006DD4F9: push 0x32 */
    PUSH32(esp, eax); /* 0x006DD4FB: push eax */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DD4FC: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006DD502: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006DD505:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD505: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006DD507: mov ecx, esi */
    PUSH32(esp, 0x3EEu); /* 0x006DD509: push 0x3ee */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x006DD50E: mov word ptr [ebp - 6], ax */
    RECOMP_CALL(sub_006DCA50); /* 0x006DD512: call 0x6dca50 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x006DD517: lea eax, [ebp - 0x68] */
    ecx = esi; /* 0x006DD51A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006DD51C: push eax */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x006DD51D: push dword ptr [esi + 0x20] */
    PUSH32(esp, 0x3EEu); /* 0x006DD520: push 0x3ee */
    RECOMP_CALL(sub_006DC930); /* 0x006DD525: call 0x6dc930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006DD52A: push ecx */
    PUSH32(esp, 0x3EEu); /* 0x006DD52B: push 0x3ee */
    ecx = esi; /* 0x006DD530: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD532: call 0x6dca00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD537: push 0 */
    goto L_006DD6B2; /* 0x006DD539: jmp 0x6dd6b2 */
L_006DD53E:
    PUSH32(esp, 0); /* 0x006DD53E: push 0 */
    PUSH32(esp, 0x3F4u); /* 0x006DD540: push 0x3f4 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD545: push dword ptr [esi] */
    MEM32(esi + 0x48) = eax; /* 0x006DD547: mov dword ptr [esi + 0x48], eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD54A: mov eax, dword ptr [ebp - 0xd4] */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x006DD550: mov byte ptr [esi + 8], 0 */
    MEM32(esi + 0x4C) = eax; /* 0x006DD554: mov dword ptr [esi + 0x4c], eax */
    RECOMP_ICALL(ebx); /* 0x006DD557: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD559: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DD55A: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD560: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD565: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD567: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD569: push 0 */
    PUSH32(esp, 0); /* 0x006DD56B: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD56D: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD572: push eax */
    RECOMP_ICALL(edi); /* 0x006DD573: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD575: mov eax, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006DD57B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD0)) = edi; /* 0x006DD57D: mov dword ptr [ebp - 0xd0], edi */
    ecx = MEM32(eax + 0x138); /* 0x006DD583: mov ecx, dword ptr [eax + 0x138] */
    /* cmp MEM32(ecx + 0xC), edi */ /* 0x006DD589: cmp dword ptr [ecx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DD649; /* 0x006DD58C: jbe 0x6dd649 */
L_006DD592:
    /* cmp MEM32(ecx), 0 */ /* 0x006DD592: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD5A2; /* 0x006DD595: jne 0x6dd5a2 */
L_006DD597:
    eax = MEM32(ecx + 0x8); /* 0x006DD597: mov eax, dword ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x006DD59A: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x006DD59D: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    goto L_006DD5A8; /* 0x006DD5A0: jmp 0x6dd5a8 */
L_006DD5A2:
    eax = MEM32(ecx + 0x4); /* 0x006DD5A2: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + edi * 4); /* 0x006DD5A5: mov eax, dword ptr [eax + edi*4] */
L_006DD5A8:
    /* cmp MEM8(eax + 0x10), 0 */ /* 0x006DD5A8: cmp byte ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD627; /* 0x006DD5AC: jne 0x6dd627 */
L_006DD5AE:
    ebx = MEM32(eax + 0x8); /* 0x006DD5AE: mov ebx, dword ptr [eax + 8] */
    SET_LO8(edx, 1); /* 0x006DD5B1: mov dl, 1 */
    ecx = ebx; /* 0x006DD5B3: mov ecx, ebx */
    MEM32(ebp + (-0xD8)) = ebx; /* 0x006DD5B5: mov dword ptr [ebp - 0xd8], ebx */
    RECOMP_CALL(sub_006DC470); /* 0x006DD5BB: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD5C0: push eax */
    PUSH32(esp, 0x3EBu); /* 0x006DD5C1: push 0x3eb */
    ecx = esi; /* 0x006DD5C6: mov ecx, esi */
    RECOMP_CALL(sub_006DCA80); /* 0x006DD5C8: call 0x6dca80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006DD5CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD627; /* 0x006DD5CF: jne 0x6dd627 */
L_006DD5D1:
    SET_LO8(edx, 1); /* 0x006DD5D1: mov dl, 1 */
    ecx = ebx; /* 0x006DD5D3: mov ecx, ebx */
    RECOMP_CALL(sub_006DC470); /* 0x006DD5D5: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EBu); /* 0x006DD5DA: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD5DF: push dword ptr [esi] */
    edi = eax; /* 0x006DD5E1: mov edi, eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD5E3: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD5E9: push edi */
    PUSH32(esp, 0); /* 0x006DD5EA: push 0 */
    ebx = eax; /* 0x006DD5EC: mov ebx, eax */
    eax = MEM32(0x7CC708); /* 0x006DD5EE: mov eax, dword ptr [0x7cc708] */
    PUSH32(esp, 0x143u); /* 0x006DD5F3: push 0x143 */
    PUSH32(esp, ebx); /* 0x006DD5F8: push ebx */
    RECOMP_ICALL(eax); /* 0x006DD5F9: call eax */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xD8)); /* 0x006DD5FB: mov edi, dword ptr [ebp - 0xd8] */
    PUSH32(esp, edi); /* 0x006DD601: push edi */
    PUSH32(esp, eax); /* 0x006DD602: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD603: push 0x151 */
    PUSH32(esp, ebx); /* 0x006DD608: push ebx */
    RECOMP_ICALL(MEM32(0x7CC708)); /* 0x006DD609: call dword ptr [0x7cc708] */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(esi + 0x60) */ /* 0x006DD60F: cmp edi, dword ptr [esi + 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x60));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD621; /* 0x006DD612: jne 0x6dd621 */
L_006DD614:
    PUSH32(esp, edi); /* 0x006DD614: push edi */
    PUSH32(esp, 0x3EBu); /* 0x006DD615: push 0x3eb */
    ecx = esi; /* 0x006DD61A: mov ecx, esi */
    RECOMP_CALL(sub_006DC970); /* 0x006DD61C: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DD621:
    edi = MEM32(ebp + (-0xD0)); /* 0x006DD621: mov edi, dword ptr [ebp - 0xd0] */
L_006DD627:
    eax = MEM32(ebp + (-0xD4)); /* 0x006DD627: mov eax, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006DD62D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xD0)) = edi; /* 0x006DD62E: mov dword ptr [ebp - 0xd0], edi */
    ecx = MEM32(eax + 0x138); /* 0x006DD634: mov ecx, dword ptr [eax + 0x138] */
    /* cmp edi, MEM32(ecx + 0xC) */ /* 0x006DD63A: cmp edi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD592; /* 0x006DD63D: jb 0x6dd592 */
L_006DD643:
    ebx = MEM32(0x7CC8B0); /* 0x006DD643: mov ebx, dword ptr [0x7cc8b0] */
L_006DD649:
    PUSH32(esp, 0x3EBu); /* 0x006DD649: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD64E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD650: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD652: mov edi, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD658: push 0 */
    PUSH32(esp, 0); /* 0x006DD65A: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD65C: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD661: push eax */
    RECOMP_ICALL(edi); /* 0x006DD662: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD664: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD68E; /* 0x006DD666: jns 0x6dd68e */
L_006DD668:
    PUSH32(esp, 0x3EBu); /* 0x006DD668: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD66D: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD66F: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD671: push 0 */
    PUSH32(esp, 0); /* 0x006DD673: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DD675: push 0x146 */
    PUSH32(esp, eax); /* 0x006DD67A: push eax */
    RECOMP_ICALL(edi); /* 0x006DD67B: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD67D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD68E; /* 0x006DD67F: je 0x6dd68e */
L_006DD681:
    PUSH32(esp, ecx); /* 0x006DD681: push ecx */
    PUSH32(esp, 0x3EBu); /* 0x006DD682: push 0x3eb */
    ecx = esi; /* 0x006DD687: mov ecx, esi */
    RECOMP_CALL(sub_006DCA00); /* 0x006DD689: call 0x6dca00 */
    RECOMP_FLAGS_IN();
L_006DD68E:
    PUSH32(esp, 1); /* 0x006DD68E: push 1 */
    PUSH32(esp, 0x3EBu); /* 0x006DD690: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD695: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD697: call ebx */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC884); /* 0x006DD699: mov edi, dword ptr [0x7cc884] */
    PUSH32(esp, eax); /* 0x006DD69F: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6A0: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DD6A2: push 1 */
    PUSH32(esp, 0x3ECu); /* 0x006DD6A4: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD6A9: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD6AB: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD6AD: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6AE: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x006DD6B0: push 1 */
L_006DD6B2:
    PUSH32(esp, 0x3EEu); /* 0x006DD6B2: push 0x3ee */
    PUSH32(esp, MEM32(esi)); /* 0x006DD6B7: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD6B9: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD6BB: push eax */
    RECOMP_ICALL(edi); /* 0x006DD6BC: call edi */
    RECOMP_FLAGS_IN();
L_006DD6BE:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DD6BE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006DD6C1: pop edi */
    esi = POP32_VAL(esp); /* 0x006DD6C2: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DD6C3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DD6C5: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DD6C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DD6CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DD6CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DD6CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DD6D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DD6D0u);

L_006DD6D0:
    PUSH32(esp, ebp); /* 0x006DD6D0: push ebp */
    ebp = esp; /* 0x006DD6D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x006DD6D3: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DD6D9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DD6DE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DD6E0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006DD6E3: push ebx */
    PUSH32(esp, esi); /* 0x006DD6E4: push esi */
    PUSH32(esp, edi); /* 0x006DD6E5: push edi */
    esi = ecx; /* 0x006DD6E6: mov esi, ecx */
    PUSH32(esp, 0x3F8u); /* 0x006DD6E8: push 0x3f8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD6ED: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC804)); /* 0x006DD6EF: call dword ptr [0x7cc804] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC8B0); /* 0x006DD6F5: mov ebx, dword ptr [0x7cc8b0] */
    edi = MEM32(0x7CC708); /* 0x006DD6FB: mov edi, dword ptr [0x7cc708] */
    /* test eax, eax */ /* 0x006DD701: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD8FC; /* 0x006DD703: jne 0x6dd8fc */
L_006DD709:
    PUSH32(esp, 0x3EAu); /* 0x006DD709: push 0x3ea */
    PUSH32(esp, MEM32(esi)); /* 0x006DD70E: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD710: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD712: push 0 */
    PUSH32(esp, 0); /* 0x006DD714: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD716: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD71B: push eax */
    MEM32(ebp + (-0x74)) = eax; /* 0x006DD71C: mov dword ptr [ebp - 0x74], eax */
    RECOMP_ICALL(edi); /* 0x006DD71F: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD721: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD72E; /* 0x006DD723: jns 0x6dd72e */
L_006DD725:
    MEM32(ebp + (-0x78)) = 0; /* 0x006DD725: mov dword ptr [ebp - 0x78], 0 */
    goto L_006DD73E; /* 0x006DD72C: jmp 0x6dd73e */
L_006DD72E:
    PUSH32(esp, 0); /* 0x006DD72E: push 0 */
    PUSH32(esp, eax); /* 0x006DD730: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD731: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x006DD736: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(edi); /* 0x006DD739: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x78)) = eax; /* 0x006DD73B: mov dword ptr [ebp - 0x78], eax */
L_006DD73E:
    PUSH32(esp, 0x3EBu); /* 0x006DD73E: push 0x3eb */
    PUSH32(esp, MEM32(esi)); /* 0x006DD743: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD745: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD747: push 0 */
    PUSH32(esp, 0); /* 0x006DD749: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD74B: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD750: push eax */
    MEM32(ebp + (-0x74)) = eax; /* 0x006DD751: mov dword ptr [ebp - 0x74], eax */
    RECOMP_ICALL(edi); /* 0x006DD754: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD756: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD75E; /* 0x006DD758: jns 0x6dd75e */
L_006DD75A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006DD76B; /* 0x006DD75C: jmp 0x6dd76b */
L_006DD75E:
    PUSH32(esp, 0); /* 0x006DD75E: push 0 */
    PUSH32(esp, eax); /* 0x006DD760: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD761: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x006DD766: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(edi); /* 0x006DD769: call edi */
    RECOMP_FLAGS_IN();
L_006DD76B:
    PUSH32(esp, 0x3ECu); /* 0x006DD76B: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD770: push dword ptr [esi] */
    MEM32(ebp + (-0x80)) = eax; /* 0x006DD772: mov dword ptr [ebp - 0x80], eax */
    MEM32(esi + 0x60) = eax; /* 0x006DD775: mov dword ptr [esi + 0x60], eax */
    RECOMP_ICALL(ebx); /* 0x006DD778: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD77A: push 0 */
    PUSH32(esp, 0); /* 0x006DD77C: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD77E: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD783: push eax */
    RECOMP_ICALL(edi); /* 0x006DD784: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x78)); /* 0x006DD786: mov ecx, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DD789: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0x450); /* 0x006DD78B: mov ecx, dword ptr [ecx + 0x450] */
    /* cmp MEM32(ecx + 0xC), ebx */ /* 0x006DD791: cmp dword ptr [ecx + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DD88F; /* 0x006DD794: jbe 0x6dd88f */
L_006DD79A:
    ebx = ebx; /* 0x006DD79A: lea ebx, [ebx] */
L_006DD7A0:
    /* cmp MEM32(ecx), 0 */ /* 0x006DD7A0: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD7B0; /* 0x006DD7A3: jne 0x6dd7b0 */
L_006DD7A5:
    eax = MEM32(ecx + 0x8); /* 0x006DD7A5: mov eax, dword ptr [ecx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x006DD7A8: imul eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x006DD7AB: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    goto L_006DD7B6; /* 0x006DD7AE: jmp 0x6dd7b6 */
L_006DD7B0:
    eax = MEM32(ecx + 0x4); /* 0x006DD7B0: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + ebx * 4); /* 0x006DD7B3: mov eax, dword ptr [eax + ebx*4] */
L_006DD7B6:
    _xmm[0] = xmm_ld(eax); /* 0x006DD7B6: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ebp + (-0x94), _xmm[0]); /* 0x006DD7BA: movdqu xmmword ptr [ebp - 0x94], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006DD7C2: psrldq xmm0, 0xc */
    eax = _xmm[0].u32[0]; /* 0x006DD7C7: movd eax, xmm0 */
    /* cmp eax, MEM32(ebp + (-0x80)) */ /* 0x006DD7CB: cmp eax, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x80)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD87C; /* 0x006DD7CE: jne 0x6dd87c */
L_006DD7D4:
    edx = MEM32(ebp + (-0x90)); /* 0x006DD7D4: mov edx, dword ptr [ebp - 0x90] */
    eax = MEM32(ebp + (-0x94)); /* 0x006DD7DA: mov eax, dword ptr [ebp - 0x94] */
    PUSH32(esp, edx); /* 0x006DD7E0: push edx */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x006DD7E1: push dword ptr [ebp - 0x94] */
    ecx = (uint32_t)LO16(edx); /* 0x006DD7E7: movzx ecx, dx */
    eax = (uint32_t)LO16(eax); /* 0x006DD7EA: movzx eax, ax */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x006DD7ED: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x006DD7ED: shl ecx, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x006DD7F0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x70); /* 0x006DD7F2: lea eax, [ebp - 0x70] */
    PUSH32(esp, 0x00803BA8u); /* 0x006DD7F5: push 0x803ba8 */
    PUSH32(esp, 0x32u); /* 0x006DD7FA: push 0x32 */
    PUSH32(esp, eax); /* 0x006DD7FC: push eax */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x006DD7FD: mov dword ptr [ebp - 0x7c], ecx */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DD800: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006DD806: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DD809: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x006DD80B: mov word ptr [ebp - 0xe], ax */
    ecx = esi; /* 0x006DD80F: mov ecx, esi */
    eax = ebp + (-0x70); /* 0x006DD811: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x006DD814: push eax */
    PUSH32(esp, 0x3ECu); /* 0x006DD815: push 0x3ec */
    RECOMP_CALL(sub_006DCA80); /* 0x006DD81A: call 0x6dca80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006DD81F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DD87C; /* 0x006DD821: jne 0x6dd87c */
L_006DD823:
    PUSH32(esp, 0x3ECu); /* 0x006DD823: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD828: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD82A: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006DD830: mov edi, eax */
    eax = ebp + (-0x70); /* 0x006DD832: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x006DD835: push eax */
    eax = MEM32(0x7CC708); /* 0x006DD836: mov eax, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DD83B: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DD83D: push 0x143 */
    PUSH32(esp, edi); /* 0x006DD842: push edi */
    RECOMP_ICALL(eax); /* 0x006DD843: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x006DD845: push dword ptr [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x006DD848: push eax */
    PUSH32(esp, 0x151u); /* 0x006DD849: push 0x151 */
    PUSH32(esp, edi); /* 0x006DD84E: push edi */
    edi = MEM32(0x7CC708); /* 0x006DD84F: mov edi, dword ptr [0x7cc708] */
    RECOMP_ICALL(edi); /* 0x006DD855: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x94)); /* 0x006DD857: mov eax, dword ptr [ebp - 0x94] */
    /* cmp MEM32(esi + 0x54), eax */ /* 0x006DD85D: cmp dword ptr [esi + 0x54], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD87C; /* 0x006DD860: jne 0x6dd87c */
L_006DD862:
    eax = MEM32(ebp + (-0x90)); /* 0x006DD862: mov eax, dword ptr [ebp - 0x90] */
    /* cmp MEM32(esi + 0x58), eax */ /* 0x006DD868: cmp dword ptr [esi + 0x58], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD87C; /* 0x006DD86B: jne 0x6dd87c */
L_006DD86D:
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x006DD86D: push dword ptr [ebp - 0x7c] */
    ecx = esi; /* 0x006DD870: mov ecx, esi */
    PUSH32(esp, 0x3ECu); /* 0x006DD872: push 0x3ec */
    RECOMP_CALL(sub_006DC970); /* 0x006DD877: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DD87C:
    eax = MEM32(ebp + (-0x78)); /* 0x006DD87C: mov eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006DD87F: inc ebx */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x450); /* 0x006DD880: mov ecx, dword ptr [eax + 0x450] */
    /* cmp ebx, MEM32(ecx + 0xC) */ /* 0x006DD886: cmp ebx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD7A0; /* 0x006DD889: jb 0x6dd7a0 */
L_006DD88F:
    ebx = MEM32(0x7CC8B0); /* 0x006DD88F: mov ebx, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0x3ECu); /* 0x006DD895: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD89A: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD89C: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD89E: push 0 */
    PUSH32(esp, 0); /* 0x006DD8A0: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD8A2: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD8A7: push eax */
    RECOMP_ICALL(edi); /* 0x006DD8A8: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD8AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DD8FC; /* 0x006DD8AC: jns 0x6dd8fc */
L_006DD8AE:
    PUSH32(esp, 0x3ECu); /* 0x006DD8AE: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD8B3: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD8B5: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD8B7: push 0 */
    PUSH32(esp, 0); /* 0x006DD8B9: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DD8BB: push 0x146 */
    PUSH32(esp, eax); /* 0x006DD8C0: push eax */
    RECOMP_ICALL(edi); /* 0x006DD8C1: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD8C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DD8FC; /* 0x006DD8C5: je 0x6dd8fc */
L_006DD8C7:
    PUSH32(esp, 0x3ECu); /* 0x006DD8C7: push 0x3ec */
    PUSH32(esp, MEM32(esi)); /* 0x006DD8CC: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD8CE: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD8D0: push 0 */
    PUSH32(esp, 0); /* 0x006DD8D2: push 0 */
    edi = eax; /* 0x006DD8D4: mov edi, eax */
    eax = MEM32(0x7CC708); /* 0x006DD8D6: mov eax, dword ptr [0x7cc708] */
    PUSH32(esp, 0x14Eu); /* 0x006DD8DB: push 0x14e */
    PUSH32(esp, edi); /* 0x006DD8E0: push edi */
    RECOMP_ICALL(eax); /* 0x006DD8E1: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD8E3: push edi */
    PUSH32(esp, 0x000103ECu); /* 0x006DD8E4: push 0x103ec */
    PUSH32(esp, 0x111u); /* 0x006DD8E9: push 0x111 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD8EE: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DD8F0: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x7CC708); /* 0x006DD8F6: mov edi, dword ptr [0x7cc708] */
L_006DD8FC:
    PUSH32(esp, 0x3E8u); /* 0x006DD8FC: push 0x3e8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DD901: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DD903: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD905: push 0 */
    PUSH32(esp, 0); /* 0x006DD907: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DD909: push 0x147 */
    PUSH32(esp, eax); /* 0x006DD90E: push eax */
    MEM32(ebp + (-0x74)) = eax; /* 0x006DD90F: mov dword ptr [ebp - 0x74], eax */
    RECOMP_ICALL(edi); /* 0x006DD912: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DD914: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DDB0C; /* 0x006DD916: js 0x6ddb0c */
L_006DD91C:
    PUSH32(esp, 0); /* 0x006DD91C: push 0 */
    PUSH32(esp, eax); /* 0x006DD91E: push eax */
    PUSH32(esp, 0x150u); /* 0x006DD91F: push 0x150 */
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x006DD924: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(edi); /* 0x006DD927: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x7C)) = eax; /* 0x006DD929: mov dword ptr [ebp - 0x7c], eax */
    /* test eax, eax */ /* 0x006DD92C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DDB0C; /* 0x006DD92E: je 0x6ddb0c */
L_006DD934:
    PUSH32(esp, 0x3EFu); /* 0x006DD934: push 0x3ef */
    PUSH32(esp, MEM32(esi)); /* 0x006DD939: push dword ptr [esi] */
    MEM8(ebp + (-0x80)) = (uint8_t)(0); /* 0x006DD93B: mov byte ptr [ebp - 0x80], 0 */
    RECOMP_ICALL(ebx); /* 0x006DD93F: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DD941: push 0 */
    PUSH32(esp, 0); /* 0x006DD943: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DD945: push 0x14b */
    PUSH32(esp, eax); /* 0x006DD94A: push eax */
    RECOMP_ICALL(edi); /* 0x006DD94B: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x7C)); /* 0x006DD94D: mov edx, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006DD950: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x78)) = ecx; /* 0x006DD952: mov dword ptr [ebp - 0x78], ecx */
    eax = MEM32(edx + 0x138); /* 0x006DD955: mov eax, dword ptr [edx + 0x138] */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x006DD95B: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DDA75; /* 0x006DD95E: jbe 0x6dda75 */
L_006DD964:
    /* cmp MEM32(eax), 0 */ /* 0x006DD964: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD974; /* 0x006DD967: jne 0x6dd974 */
L_006DD969:
    ebx = MEM32(eax + 0x8); /* 0x006DD969: mov ebx, dword ptr [eax + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x006DD96C: imul ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x4); /* 0x006DD96F: add ebx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006DD97A; /* 0x006DD972: jmp 0x6dd97a */
L_006DD974:
    eax = MEM32(eax + 0x4); /* 0x006DD974: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(eax + ecx * 4); /* 0x006DD977: mov ebx, dword ptr [eax + ecx*4] */
L_006DD97A:
    SET_LO8(eax, MEM8(ebx + 0x10)); /* 0x006DD97A: mov al, byte ptr [ebx + 0x10] */
    MEM32(ebp + (-0x74)) = ebx; /* 0x006DD97D: mov dword ptr [ebp - 0x74], ebx */
    /* cmp LO8(eax), MEM8(esi + 0x8) */ /* 0x006DD980: cmp al, byte ptr [esi + 8] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDA36; /* 0x006DD983: jne 0x6dda36 */
L_006DD989:
    /* cmp MEM8(esi + 0x8), 0 */ /* 0x006DD989: cmp byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + 0x18; /* 0x006DD98D: lea eax, [esi + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DD995; /* 0x006DD990: jne 0x6dd995 */
L_006DD992:
    eax = esi + 0x54; /* 0x006DD992: lea eax, [esi + 0x54] */
L_006DD995:
    _xmm[0] = xmm_ld(eax); /* 0x006DD995: movdqu xmm0, xmmword ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006DD999: psrldq xmm0, 0xc */
    eax = _xmm[0].u32[0]; /* 0x006DD99E: movd eax, xmm0 */
    /* cmp MEM32(ebx + 0x8), eax */ /* 0x006DD9A2: cmp dword ptr [ebx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDA36; /* 0x006DD9A5: jne 0x6dda36 */
L_006DD9AB:
    ecx = MEM32(ebx + 0xC); /* 0x006DD9AB: mov ecx, dword ptr [ebx + 0xc] */
    SET_LO8(edx, 1); /* 0x006DD9AE: mov dl, 1 */
    RECOMP_CALL(sub_006DC470); /* 0x006DD9B0: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DD9B5: push eax */
    PUSH32(esp, 0x3EFu); /* 0x006DD9B6: push 0x3ef */
    ecx = esi; /* 0x006DD9BB: mov ecx, esi */
    RECOMP_CALL(sub_006DCA80); /* 0x006DD9BD: call 0x6dca80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006DD9C2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DDA30; /* 0x006DD9C4: jne 0x6dda30 */
L_006DD9C6:
    ecx = MEM32(ebx + 0xC); /* 0x006DD9C6: mov ecx, dword ptr [ebx + 0xc] */
    SET_LO8(edx, 1); /* 0x006DD9C9: mov dl, 1 */
    RECOMP_CALL(sub_006DC470); /* 0x006DD9CB: call 0x6dc470 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3EFu); /* 0x006DD9D0: push 0x3ef */
    PUSH32(esp, MEM32(esi)); /* 0x006DD9D5: push dword ptr [esi] */
    edi = eax; /* 0x006DD9D7: mov edi, eax */
    eax = MEM32(ebx + 0xC); /* 0x006DD9D9: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x84)) = eax; /* 0x006DD9DC: mov dword ptr [ebp - 0x84], eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DD9E2: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DD9E8: push edi */
    edi = MEM32(0x7CC708); /* 0x006DD9E9: mov edi, dword ptr [0x7cc708] */
    ebx = eax; /* 0x006DD9EF: mov ebx, eax */
    PUSH32(esp, 0); /* 0x006DD9F1: push 0 */
    PUSH32(esp, 0x143u); /* 0x006DD9F3: push 0x143 */
    PUSH32(esp, ebx); /* 0x006DD9F8: push ebx */
    RECOMP_ICALL(edi); /* 0x006DD9F9: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x006DD9FB: push dword ptr [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x006DDA01: push eax */
    PUSH32(esp, 0x151u); /* 0x006DDA02: push 0x151 */
    PUSH32(esp, ebx); /* 0x006DDA07: push ebx */
    RECOMP_ICALL(edi); /* 0x006DDA08: call edi */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x8), 0 */ /* 0x006DDA0A: cmp byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DDA15; /* 0x006DDA0E: je 0x6dda15 */
L_006DDA10:
    ecx = MEM32(esi + 0x14); /* 0x006DDA10: mov ecx, dword ptr [esi + 0x14] */
    goto L_006DDA18; /* 0x006DDA13: jmp 0x6dda18 */
L_006DDA15:
    ecx = MEM32(esi + 0x50); /* 0x006DDA15: mov ecx, dword ptr [esi + 0x50] */
L_006DDA18:
    ebx = MEM32(ebp + (-0x74)); /* 0x006DDA18: mov ebx, dword ptr [ebp - 0x74] */
    eax = MEM32(ebx + 0xC); /* 0x006DDA1B: mov eax, dword ptr [ebx + 0xc] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x006DDA1E: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDA30; /* 0x006DDA21: jne 0x6dda30 */
L_006DDA23:
    PUSH32(esp, eax); /* 0x006DDA23: push eax */
    PUSH32(esp, 0x3EFu); /* 0x006DDA24: push 0x3ef */
    ecx = esi; /* 0x006DDA29: mov ecx, esi */
    RECOMP_CALL(sub_006DC970); /* 0x006DDA2B: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DDA30:
    ecx = MEM32(ebp + (-0x78)); /* 0x006DDA30: mov ecx, dword ptr [ebp - 0x78] */
    edx = MEM32(ebp + (-0x7C)); /* 0x006DDA33: mov edx, dword ptr [ebp - 0x7c] */
L_006DDA36:
    /* cmp MEM8(ebx + 0x10), 1 */ /* 0x006DDA36: cmp byte ptr [ebx + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDA55; /* 0x006DDA3A: jne 0x6dda55 */
L_006DDA3C:
    eax = MEM32(ebx + 0x8); /* 0x006DDA3C: mov eax, dword ptr [ebx + 8] */
    ebx = MEM32(ebp + (-0x80)); /* 0x006DDA3F: mov ebx, dword ptr [ebp - 0x80] */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x006DDA42: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 1; /* 0x006DDA45: mov eax, 1 */
    ebx = (uint32_t)LO8(ebx); /* 0x006DDA4A: movzx ebx, bl */
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x006DDA4D: cmove ebx, eax */
    MEM32(ebp + (-0x80)) = ebx; /* 0x006DDA50: mov dword ptr [ebp - 0x80], ebx */
    goto L_006DDA58; /* 0x006DDA53: jmp 0x6dda58 */
L_006DDA55:
    ebx = MEM32(ebp + (-0x80)); /* 0x006DDA55: mov ebx, dword ptr [ebp - 0x80] */
L_006DDA58:
    eax = MEM32(edx + 0x138); /* 0x006DDA58: mov eax, dword ptr [edx + 0x138] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006DDA5E: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x78)) = ecx; /* 0x006DDA5F: mov dword ptr [ebp - 0x78], ecx */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x006DDA62: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DD964; /* 0x006DDA65: jb 0x6dd964 */
L_006DDA6B:
    /* test LO8(ebx), LO8(ebx) */ /* 0x006DDA6B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(0x7CC8B0); /* 0x006DDA6D: mov ebx, dword ptr [0x7cc8b0] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DDAAB; /* 0x006DDA73: jne 0x6ddaab */
L_006DDA75:
    PUSH32(esp, 0); /* 0x006DDA75: push 0 */
    PUSH32(esp, 0x3F8u); /* 0x006DDA77: push 0x3f8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DDA7C: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DDA7E: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006DDA80: push eax */
    RECOMP_ICALL(MEM32(0x7CC884)); /* 0x006DDA81: call dword ptr [0x7cc884] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x8), 0 */ /* 0x006DDA87: cmp byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006DDAAB; /* 0x006DDA8B: je 0x6ddaab */
L_006DDA8D:
    PUSH32(esp, 0x3FAu); /* 0x006DDA8D: push 0x3fa */
    PUSH32(esp, 0x3FAu); /* 0x006DDA92: push 0x3fa */
    PUSH32(esp, 0x3F8u); /* 0x006DDA97: push 0x3f8 */
    PUSH32(esp, MEM32(esi)); /* 0x006DDA9C: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC808)); /* 0x006DDA9E: call dword ptr [0x7cc808] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006DDAA4: mov ecx, esi */
    RECOMP_CALL(sub_006DD2D0); /* 0x006DDAA6: call 0x6dd2d0 */
    RECOMP_FLAGS_IN();
L_006DDAAB:
    PUSH32(esp, 0x3EFu); /* 0x006DDAAB: push 0x3ef */
    PUSH32(esp, MEM32(esi)); /* 0x006DDAB0: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DDAB2: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDAB4: push 0 */
    PUSH32(esp, 0); /* 0x006DDAB6: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DDAB8: push 0x147 */
    PUSH32(esp, eax); /* 0x006DDABD: push eax */
    RECOMP_ICALL(edi); /* 0x006DDABE: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDAC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DDB0C; /* 0x006DDAC2: jns 0x6ddb0c */
L_006DDAC4:
    PUSH32(esp, 0x3EFu); /* 0x006DDAC4: push 0x3ef */
    PUSH32(esp, MEM32(esi)); /* 0x006DDAC9: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DDACB: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDACD: push 0 */
    PUSH32(esp, 0); /* 0x006DDACF: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DDAD1: push 0x146 */
    PUSH32(esp, eax); /* 0x006DDAD6: push eax */
    RECOMP_ICALL(edi); /* 0x006DDAD7: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDAD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DDB0C; /* 0x006DDADB: je 0x6ddb0c */
L_006DDADD:
    PUSH32(esp, 0x3EFu); /* 0x006DDADD: push 0x3ef */
    PUSH32(esp, MEM32(esi)); /* 0x006DDAE2: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006DDAE4: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDAE6: push 0 */
    PUSH32(esp, 0); /* 0x006DDAE8: push 0 */
    edi = eax; /* 0x006DDAEA: mov edi, eax */
    eax = MEM32(0x7CC708); /* 0x006DDAEC: mov eax, dword ptr [0x7cc708] */
    PUSH32(esp, 0x14Eu); /* 0x006DDAF1: push 0x14e */
    PUSH32(esp, edi); /* 0x006DDAF6: push edi */
    RECOMP_ICALL(eax); /* 0x006DDAF7: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006DDAF9: push edi */
    PUSH32(esp, 0x000103EFu); /* 0x006DDAFA: push 0x103ef */
    PUSH32(esp, 0x111u); /* 0x006DDAFF: push 0x111 */
    PUSH32(esp, MEM32(esi)); /* 0x006DDB04: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DDB06: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
L_006DDB0C:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DDB0C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006DDB0F: pop edi */
    esi = POP32_VAL(esp); /* 0x006DDB10: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DDB11: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006DDB13: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DDB14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DDB19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DDB1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DDB1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006DDB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006DDB20u);

L_006DDB20:
    PUSH32(esp, ebp); /* 0x006DDB20: push ebp */
    ebp = esp; /* 0x006DDB21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x006DDB23: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006DDB29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006DDB2E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006DDB30: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x006DDB33: push edi */
    edi = ecx; /* 0x006DDB34: mov edi, ecx */
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x006DDB36: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDD50; /* 0x006DDB3A: jne 0x6ddd50 */
L_006DDB40:
    PUSH32(esp, ebx); /* 0x006DDB40: push ebx */
    PUSH32(esp, esi); /* 0x006DDB41: push esi */
    PUSH32(esp, 0x3EAu); /* 0x006DDB42: push 0x3ea */
    PUSH32(esp, MEM32(edi)); /* 0x006DDB47: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DDB49: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC708); /* 0x006DDB4F: mov ebx, dword ptr [0x7cc708] */
    esi = eax; /* 0x006DDB55: mov esi, eax */
    PUSH32(esp, 0); /* 0x006DDB57: push 0 */
    PUSH32(esp, 0); /* 0x006DDB59: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DDB5B: push 0x147 */
    PUSH32(esp, esi); /* 0x006DDB60: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDB61: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDB63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006DDD4E; /* 0x006DDB65: js 0x6ddd4e */
L_006DDB6B:
    PUSH32(esp, 0); /* 0x006DDB6B: push 0 */
    PUSH32(esp, eax); /* 0x006DDB6D: push eax */
    PUSH32(esp, 0x150u); /* 0x006DDB6E: push 0x150 */
    PUSH32(esp, esi); /* 0x006DDB73: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDB74: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = eax; /* 0x006DDB76: mov dword ptr [ebp - 0x6c], eax */
    /* test eax, eax */ /* 0x006DDB79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DDD4E; /* 0x006DDB7B: je 0x6ddd4e */
L_006DDB81:
    PUSH32(esp, 0x3ECu); /* 0x006DDB81: push 0x3ec */
    PUSH32(esp, MEM32(edi)); /* 0x006DDB86: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DDB88: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDB8E: push 0 */
    PUSH32(esp, 0); /* 0x006DDB90: push 0 */
    esi = eax; /* 0x006DDB92: mov esi, eax */
    PUSH32(esp, 0x147u); /* 0x006DDB94: push 0x147 */
    PUSH32(esp, esi); /* 0x006DDB99: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDB9A: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDB9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DDBA4; /* 0x006DDB9E: jns 0x6ddba4 */
L_006DDBA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DDBA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006DDBAF; /* 0x006DDBA2: jmp 0x6ddbaf */
L_006DDBA4:
    PUSH32(esp, 0); /* 0x006DDBA4: push 0 */
    PUSH32(esp, eax); /* 0x006DDBA6: push eax */
    PUSH32(esp, 0x150u); /* 0x006DDBA7: push 0x150 */
    PUSH32(esp, esi); /* 0x006DDBAC: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDBAD: call ebx */
    RECOMP_FLAGS_IN();
L_006DDBAF:
    ecx = (uint32_t)LO16(eax); /* 0x006DDBAF: movzx ecx, ax */
    PUSH32(esp, 0x3EBu); /* 0x006DDBB2: push 0x3eb */
    PUSH32(esp, MEM32(edi)); /* 0x006DDBB7: push dword ptr [edi] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006DDBB9: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006DDBB9: shr eax, 0x10 */
    MEM32(ebp + (-0x74)) = ecx; /* 0x006DDBBC: mov dword ptr [ebp - 0x74], ecx */
    MEM32(ebp + (-0x78)) = eax; /* 0x006DDBBF: mov dword ptr [ebp - 0x78], eax */
    MEM32(edi + 0x54) = ecx; /* 0x006DDBC2: mov dword ptr [edi + 0x54], ecx */
    MEM32(edi + 0x58) = eax; /* 0x006DDBC5: mov dword ptr [edi + 0x58], eax */
    RECOMP_ICALL(MEM32(0x7CC8B0)); /* 0x006DDBC8: call dword ptr [0x7cc8b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDBCE: push 0 */
    PUSH32(esp, 0); /* 0x006DDBD0: push 0 */
    esi = eax; /* 0x006DDBD2: mov esi, eax */
    PUSH32(esp, 0x147u); /* 0x006DDBD4: push 0x147 */
    PUSH32(esp, esi); /* 0x006DDBD9: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDBDA: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDBDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DDBE9; /* 0x006DDBDE: jns 0x6ddbe9 */
L_006DDBE0:
    MEM32(ebp + (-0x70)) = 0; /* 0x006DDBE0: mov dword ptr [ebp - 0x70], 0 */
    goto L_006DDBF7; /* 0x006DDBE7: jmp 0x6ddbf7 */
L_006DDBE9:
    PUSH32(esp, 0); /* 0x006DDBE9: push 0 */
    PUSH32(esp, eax); /* 0x006DDBEB: push eax */
    PUSH32(esp, 0x150u); /* 0x006DDBEC: push 0x150 */
    PUSH32(esp, esi); /* 0x006DDBF1: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDBF2: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x70)) = eax; /* 0x006DDBF4: mov dword ptr [ebp - 0x70], eax */
L_006DDBF7:
    esi = MEM32(0x7CC8B0); /* 0x006DDBF7: mov esi, dword ptr [0x7cc8b0] */
    PUSH32(esp, 0x3EEu); /* 0x006DDBFD: push 0x3ee */
    PUSH32(esp, MEM32(edi)); /* 0x006DDC02: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DDC04: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDC06: push 0 */
    PUSH32(esp, 0); /* 0x006DDC08: push 0 */
    PUSH32(esp, 0x14Bu); /* 0x006DDC0A: push 0x14b */
    PUSH32(esp, eax); /* 0x006DDC0F: push eax */
    RECOMP_ICALL(ebx); /* 0x006DDC10: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x6C)); /* 0x006DDC12: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006DDC15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x450); /* 0x006DDC17: mov eax, dword ptr [eax + 0x450] */
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x006DDC1D: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006DDCEC; /* 0x006DDC20: jbe 0x6ddcec */
L_006DDC26:
    /* cmp MEM32(eax), 0 */ /* 0x006DDC26: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDC36; /* 0x006DDC29: jne 0x6ddc36 */
L_006DDC2B:
    ecx = MEM32(eax + 0x8); /* 0x006DDC2B: mov ecx, dword ptr [eax + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x006DDC2E: imul ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x4); /* 0x006DDC31: add ecx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    goto L_006DDC3C; /* 0x006DDC34: jmp 0x6ddc3c */
L_006DDC36:
    eax = MEM32(eax + 0x4); /* 0x006DDC36: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ebx * 4); /* 0x006DDC39: mov ecx, dword ptr [eax + ebx*4] */
L_006DDC3C:
    _xmm[0] = xmm_ld(ecx); /* 0x006DDC3C: movdqu xmm0, xmmword ptr [ecx] */
    xmm_st(ebp + (-0x88), _xmm[0]); /* 0x006DDC40: movdqu xmmword ptr [ebp - 0x88], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006DDC48: psrldq xmm0, 0xc */
    eax = _xmm[0].u32[0]; /* 0x006DDC4D: movd eax, xmm0 */
    /* cmp eax, MEM32(ebp + (-0x70)) */ /* 0x006DDC51: cmp eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDCD3; /* 0x006DDC54: jne 0x6ddcd3 */
L_006DDC56:
    eax = MEM32(ebp + (-0x74)); /* 0x006DDC56: mov eax, dword ptr [ebp - 0x74] */
    /* cmp MEM32(ebp + (-0x88)), eax */ /* 0x006DDC59: cmp dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDCD3; /* 0x006DDC5F: jne 0x6ddcd3 */
L_006DDC61:
    eax = MEM32(ebp + (-0x78)); /* 0x006DDC61: mov eax, dword ptr [ebp - 0x78] */
    /* cmp MEM32(ebp + (-0x84)), eax */ /* 0x006DDC64: cmp dword ptr [ebp - 0x84], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDCD3; /* 0x006DDC6A: jne 0x6ddcd3 */
L_006DDC6C:
    esi = MEM32(ebp + (-0x80)); /* 0x006DDC6C: mov esi, dword ptr [ebp - 0x80] */
    eax = ebp + (-0x68); /* 0x006DDC6F: lea eax, [ebp - 0x68] */
    /* test esi, esi */ /* 0x006DDC72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DDC84; /* 0x006DDC74: jne 0x6ddc84 */
L_006DDC76:
    PUSH32(esp, 0x00803C78u); /* 0x006DDC76: push 0x803c78 */
    PUSH32(esp, eax); /* 0x006DDC7B: push eax */
    RECOMP_ICALL(MEM32(0x7CC140)); /* 0x006DDC7C: call dword ptr [0x7cc140] */
    RECOMP_FLAGS_IN();
    goto L_006DDC96; /* 0x006DDC82: jmp 0x6ddc96 */
L_006DDC84:
    PUSH32(esp, esi); /* 0x006DDC84: push esi */
    PUSH32(esp, 0x00803C6Cu); /* 0x006DDC85: push 0x803c6c */
    PUSH32(esp, 0x32u); /* 0x006DDC8A: push 0x32 */
    PUSH32(esp, eax); /* 0x006DDC8C: push eax */
    RECOMP_ICALL(MEM32(0x7CC570)); /* 0x006DDC8D: call dword ptr [0x7cc570] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006DDC93: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006DDC96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006DDC96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x006DDC98: mov ecx, edi */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x006DDC9A: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x68); /* 0x006DDC9E: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x006DDCA1: push eax */
    PUSH32(esp, 0x3EEu); /* 0x006DDCA2: push 0x3ee */
    RECOMP_CALL(sub_006DCA80); /* 0x006DDCA7: call 0x6dca80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006DDCAC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006DDCD3; /* 0x006DDCAE: jne 0x6ddcd3 */
L_006DDCB0:
    eax = ebp + (-0x68); /* 0x006DDCB0: lea eax, [ebp - 0x68] */
    ecx = edi; /* 0x006DDCB3: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006DDCB5: push eax */
    PUSH32(esp, esi); /* 0x006DDCB6: push esi */
    PUSH32(esp, 0x3EEu); /* 0x006DDCB7: push 0x3ee */
    RECOMP_CALL(sub_006DC930); /* 0x006DDCBC: call 0x6dc930 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x5C), esi */ /* 0x006DDCC1: cmp dword ptr [edi + 0x5c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x5C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006DDCD3; /* 0x006DDCC4: jne 0x6ddcd3 */
L_006DDCC6:
    PUSH32(esp, esi); /* 0x006DDCC6: push esi */
    PUSH32(esp, 0x3EEu); /* 0x006DDCC7: push 0x3ee */
    ecx = edi; /* 0x006DDCCC: mov ecx, edi */
    RECOMP_CALL(sub_006DC970); /* 0x006DDCCE: call 0x6dc970 */
    RECOMP_FLAGS_IN();
L_006DDCD3:
    eax = MEM32(ebp + (-0x6C)); /* 0x006DDCD3: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006DDCD6: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x450); /* 0x006DDCD7: mov eax, dword ptr [eax + 0x450] */
    /* cmp ebx, MEM32(eax + 0xC) */ /* 0x006DDCDD: cmp ebx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006DDC26; /* 0x006DDCE0: jb 0x6ddc26 */
L_006DDCE6:
    esi = MEM32(0x7CC8B0); /* 0x006DDCE6: mov esi, dword ptr [0x7cc8b0] */
L_006DDCEC:
    PUSH32(esp, 0x3EEu); /* 0x006DDCEC: push 0x3ee */
    PUSH32(esp, MEM32(edi)); /* 0x006DDCF1: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DDCF3: call esi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC708); /* 0x006DDCF5: mov ebx, dword ptr [0x7cc708] */
    PUSH32(esp, 0); /* 0x006DDCFB: push 0 */
    PUSH32(esp, 0); /* 0x006DDCFD: push 0 */
    PUSH32(esp, 0x147u); /* 0x006DDCFF: push 0x147 */
    PUSH32(esp, eax); /* 0x006DDD04: push eax */
    RECOMP_ICALL(ebx); /* 0x006DDD05: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDD07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006DDD4E; /* 0x006DDD09: jns 0x6ddd4e */
L_006DDD0B:
    PUSH32(esp, 0x3EEu); /* 0x006DDD0B: push 0x3ee */
    PUSH32(esp, MEM32(edi)); /* 0x006DDD10: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DDD12: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDD14: push 0 */
    PUSH32(esp, 0); /* 0x006DDD16: push 0 */
    PUSH32(esp, 0x146u); /* 0x006DDD18: push 0x146 */
    PUSH32(esp, eax); /* 0x006DDD1D: push eax */
    RECOMP_ICALL(ebx); /* 0x006DDD1E: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006DDD20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006DDD4E; /* 0x006DDD22: je 0x6ddd4e */
L_006DDD24:
    PUSH32(esp, 0x3EEu); /* 0x006DDD24: push 0x3ee */
    PUSH32(esp, MEM32(edi)); /* 0x006DDD29: push dword ptr [edi] */
    RECOMP_ICALL(esi); /* 0x006DDD2B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006DDD2D: push 0 */
    PUSH32(esp, 0); /* 0x006DDD2F: push 0 */
    esi = eax; /* 0x006DDD31: mov esi, eax */
    PUSH32(esp, 0x14Eu); /* 0x006DDD33: push 0x14e */
    PUSH32(esp, esi); /* 0x006DDD38: push esi */
    RECOMP_ICALL(ebx); /* 0x006DDD39: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006DDD3B: push esi */
    PUSH32(esp, 0x000103EEu); /* 0x006DDD3C: push 0x103ee */
    PUSH32(esp, 0x111u); /* 0x006DDD41: push 0x111 */
    PUSH32(esp, MEM32(edi)); /* 0x006DDD46: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC7F8)); /* 0x006DDD48: call dword ptr [0x7cc7f8] */
    RECOMP_FLAGS_IN();
L_006DDD4E:
    esi = POP32_VAL(esp); /* 0x006DDD4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006DDD4F: pop ebx */
L_006DDD50:
    ecx = MEM32(ebp + (-0x4)); /* 0x006DDD50: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006DDD53: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006DDD55: pop edi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006DDD56: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006DDD5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006DDD5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006DDD5E: ret  */
    RECOMP_REGS_OUT();
}
