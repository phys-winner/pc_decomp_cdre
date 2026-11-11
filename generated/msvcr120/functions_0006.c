#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10025A7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025A7Cu);

L_10025A7C:
    PUSH32(esp, MEM32(0x100E0ABC)); /* 0x10025A7C: push dword ptr [0x100e0abc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025A82: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E0ABC)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0ABC) = MEM32(0x100E0ABC) & 0; /* 0x10025A87: and dword ptr [0x100e0abc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x100E0AA4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AA4) = MEM32(0x100E0AA4) & 0; /* 0x10025A8E: and dword ptr [0x100e0aa4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10025A95: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025A96: ret  */
    RECOMP_REGS_OUT();
}

void sub_10025A97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025A97u);

L_10025A97:
    PUSH32(esp, ebp); /* 0x10025A97: push ebp */
    ebp = esp; /* 0x10025A98: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10025A9A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100E0AA0); /* 0x10025A9D: mov eax, dword ptr [0x100e0aa0] */
    PUSH32(esp, ebx); /* 0x10025AA2: push ebx */
    PUSH32(esp, esi); /* 0x10025AA3: push esi */
    PUSH32(esp, edi); /* 0x10025AA4: push edi */
    edi = ecx; /* 0x10025AA5: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025AA7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x10025AA9: push 0xc */
    edx = POP32_VAL(esp); /* 0x10025AAB: pop edx */
    MEM32(ebp + (-0x18)) = edi; /* 0x10025AAC: mov dword ptr [ebp - 0x18], edi */
    MEM32(edi + 0x14) = eax; /* 0x10025AAF: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(0x100E0AB4); /* 0x10025AB2: mov eax, dword ptr [0x100e0ab4] */
    MEM32(edi + 0x18) = eax; /* 0x10025AB7: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(0x100E0AC0); /* 0x10025ABA: mov eax, dword ptr [0x100e0ac0] */
    MEM32(edi + 0x1C) = eax; /* 0x10025ABF: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(edi + 0x14); /* 0x10025AC2: mov eax, dword ptr [edi + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025AC5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025AC7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025ACA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025ACC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025ACE: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025ACF: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x14) * (int32_t)0xCu); /* 0x10025AD4: imul ecx, dword ptr [edi + 0x14], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025AD8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x44) = eax; /* 0x10025ADA: mov dword ptr [edi + 0x44], eax */
    PUSH32(esp, ecx); /* 0x10025ADD: push ecx */
    PUSH32(esp, ebx); /* 0x10025ADE: push ebx */
    PUSH32(esp, eax); /* 0x10025ADF: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10025AE0: call 0x10011533 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x18); /* 0x10025AE5: mov esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025AE8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x28u); /* 0x10025AEA: push 0x28 */
    edx = POP32_VAL(esp); /* 0x10025AEC: pop edx */
    eax = esi; /* 0x10025AED: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025AEF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025AF1: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025AF4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025AF6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10025AF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10025AFA: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x10025AFD: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10025B00: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x10025B02: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10025B04: push eax */
    RECOMP_CALL(sub_10011683); /* 0x10025B05: call 0x10011683 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10025B0A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10025B0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025B9B; /* 0x10025B0F: je 0x10025b9b */
L_10025B15:
    MEM32(eax) = esi; /* 0x10025B15: mov dword ptr [eax], esi */
    ecx = eax + 0x4; /* 0x10025B17: lea ecx, [eax + 4] */
L_10025B1A:
    eax = (uint32_t)((int32_t)MEM32(edi + 0x18) * (int32_t)0x28u); /* 0x10025B1A: imul eax, dword ptr [edi + 0x18], 0x28 */
    MEM32(edi + 0x48) = ecx; /* 0x10025B1E: mov dword ptr [edi + 0x48], ecx */
    PUSH32(esp, eax); /* 0x10025B21: push eax */
    PUSH32(esp, ebx); /* 0x10025B22: push ebx */
    PUSH32(esp, ecx); /* 0x10025B23: push ecx */
    RECOMP_CALL(sub_10011533); /* 0x10025B24: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10025B29: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x100E03E4), 4 */ /* 0x10025B2C: cmp dword ptr [0x100e03e4], 4 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1005278A; /* 0x10025B33: jl 0x1005278a */
L_10025B39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025B39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x10025B3B: mov edx, ebx */
    ebx = MEM32(0x100E0ABC); /* 0x10025B3D: mov ebx, dword ptr [0x100e0abc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x10025B43: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10025B46: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(0x100E0AA4), ecx */ /* 0x10025B49: cmp dword ptr [0x100e0aa4], ecx */
    _flag_a = (uint32_t)(MEM32(0x100E0AA4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10025B75; /* 0x10025B4F: jbe 0x10025b75 */
L_10025B51:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & ecx; /* 0x10025B51: and dword ptr [ebp - 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10025B54:
    eax = MEM32(ebx); /* 0x10025B54: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100260E4; /* 0x10025B57: je 0x100260e4 */
L_10025B5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B5D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B5E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10025B8E; /* 0x10025B5F: je 0x10025b8e */
L_10025B61:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + 0x4); /* 0x10025B61: add edx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebx + 0x4); /* 0x10025B64: add ebx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x10025B67: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x10025B6A: mov dword ptr [ebp - 8], edx */
    /* cmp edx, MEM32(0x100E0AA4) */ /* 0x10025B6D: cmp edx, dword ptr [0x100e0aa4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x100E0AA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10025B54; /* 0x10025B73: jb 0x10025b54 */
L_10025B75:
    RECOMP_CALL(sub_10025A7C); /* 0x10025B75: call 0x10025a7c */
    RECOMP_FLAGS_IN();
L_10025B7A:
    /* cmp MEM8(0x100E0AAC), 0 */ /* 0x10025B7A: cmp byte ptr [0x100e0aac], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052893; /* 0x10025B81: jne 0x10052893 */
L_10025B87:
    edi = POP32_VAL(esp); /* 0x10025B87: pop edi */
    esi = POP32_VAL(esp); /* 0x10025B88: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025B89: pop ebx */
    esp = ebp; /* 0x10025B8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10025B8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025B8D: ret  */
L_10025B8E:
    /* cmp MEM8(0x100E0AAC), LO8(eax) */ /* 0x10025B8E: cmp byte ptr [0x100e0aac], al */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025B61; /* 0x10025B94: je 0x10025b61 */
L_10025B96:
    goto L_1005273E; /* 0x10025B96: jmp 0x1005273e */
L_10025B9B:
    ecx = ebx; /* 0x10025B9B: mov ecx, ebx */
    RECOMP_BACKEDGE();
    goto L_10025B1A; /* 0x10025B9D: jmp 0x10025b1a */
L_100260E4:
    /* cmp MEM8(0x100E0AAC), 0 */ /* 0x100260E4: cmp byte ptr [0x100e0aac], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002611C; /* 0x100260EB: jne 0x1002611c */
L_100260ED:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x100260ED: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002611C; /* 0x100260F1: je 0x1002611c */
L_100260F3:
    eax = (uint32_t)MEM16(ebx + 0x24); /* 0x100260F3: movzx eax, word ptr [ebx + 0x24] */
    PUSH32(esp, ecx); /* 0x100260F7: push ecx */
    PUSH32(esp, ecx); /* 0x100260F8: push ecx */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x100260F9: push dword ptr [ebx + 0x20] */
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x28u); /* 0x100260FC: imul esi, ecx, 0x28 */
    PUSH32(esp, eax); /* 0x100260FF: push eax */
    PUSH32(esp, ecx); /* 0x10026100: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x10026101: mov ecx, dword ptr [edi + 0x48] */
    PUSH32(esp, edi); /* 0x10026104: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10026105: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025FE0); /* 0x10026107: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x48); /* 0x1002610C: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(ebx + 0x8); /* 0x1002610F: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x10026112: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x8)); /* 0x10026115: mov edx, dword ptr [ebp - 8] */
    MEM32(esi + ecx + 0x14) = eax; /* 0x10026118: mov dword ptr [esi + ecx + 0x14], eax */
L_1002611C:
    esi = MEM32(ebx + 0x20); /* 0x1002611C: mov esi, dword ptr [ebx + 0x20] */
    /* test esi, esi */ /* 0x1002611F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025B61; /* 0x10026121: je 0x10025b61 */
L_10026127:
    edx = MEM32(edi + 0x44); /* 0x10026127: mov edx, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x1002612A: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(ebx + 0x24); /* 0x1002612D: movzx ecx, word ptr [ebx + 0x24] */
    eax = MEM32(ebx + 0x8); /* 0x10026131: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0xCu; /* 0x10026134: add dword ptr [ebp - 0x10], 0xc */
    _flag_k = FK_ADD;
    MEM32(edx + 0x8) = eax; /* 0x10026138: mov dword ptr [edx + 8], eax */
    eax = ecx; /* 0x1002613B: mov eax, ecx */
    MEM32(edx + 0x4) = eax; /* 0x1002613D: mov dword ptr [edx + 4], eax */
    MEM32(edx) = esi; /* 0x10026140: mov dword ptr [edx], esi */
L_10026142:
    edx = MEM32(ebp + (-0x8)); /* 0x10026142: mov edx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_10025B61; /* 0x10026145: jmp 0x10025b61 */
L_1005273E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005273E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x20; /* 0x10052740: lea esi, [ebx + 0x20] */
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x28u); /* 0x10052743: imul eax, ecx, 0x28 */
    MEM32(ebp + (-0x14)) = edx; /* 0x10052746: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x10052749: mov dword ptr [ebp - 0xc], eax */
L_1005274C:
    /* cmp MEM32(esi), 0 */ /* 0x1005274C: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052775; /* 0x1005274F: je 0x10052775 */
L_10052751:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x10052751: movzx eax, word ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x10052755: push ecx */
    PUSH32(esp, ecx); /* 0x10052756: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x10052757: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10052759: push eax */
    PUSH32(esp, ecx); /* 0x1005275A: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x1005275B: mov ecx, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x1005275E: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10052761: push edi */
    RECOMP_CALL(sub_10025FE0); /* 0x10052762: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x10052767: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x14)); /* 0x1005276A: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005276D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x28u; /* 0x1005276E: add dword ptr [ebp - 0xc], 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10052772: mov dword ptr [ebp - 4], ecx */
L_10052775:
    eax = (uint32_t)MEM16(ebx + 0x1E); /* 0x10052775: movzx eax, word ptr [ebx + 0x1e] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10052779: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1005277A: add esi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edx; /* 0x1005277D: mov dword ptr [ebp - 0x14], edx */
    /* cmp edx, eax */ /* 0x10052780: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026142; /* 0x10052782: jge 0x10026142 */
L_10052788:
    RECOMP_BACKEDGE();
    goto L_1005274C; /* 0x10052788: jmp 0x1005274c */
L_1005278A:
    esi = MEM32(0x100E0ABC); /* 0x1005278A: mov esi, dword ptr [0x100e0abc] */
    /* test esi, esi */ /* 0x10052790: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100527C6; /* 0x10052792: jne 0x100527c6 */
L_10052794:
    ecx = MEM32(0x100E0AB0); /* 0x10052794: mov ecx, dword ptr [0x100e0ab0] */
    /* test ecx, ecx */ /* 0x1005279A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100527A8; /* 0x1005279C: je 0x100527a8 */
L_1005279E:
    PUSH32(esp, ebx); /* 0x1005279E: push ebx */
    RECOMP_CALL(sub_1006F82A); /* 0x1005279F: call 0x1006f82a */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100527A4: mov esi, dword ptr [eax] */
    goto L_100527AE; /* 0x100527A6: jmp 0x100527ae */
L_100527A8:
    esi = MEM32(0x100E0A9C); /* 0x100527A8: mov esi, dword ptr [0x100e0a9c] */
L_100527AE:
    PUSH32(esp, ecx); /* 0x100527AE: push ecx */
    PUSH32(esp, ecx); /* 0x100527AF: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x100527B0: mov ecx, dword ptr [edi + 0x48] */
    PUSH32(esp, esi); /* 0x100527B3: push esi */
    PUSH32(esp, ebx); /* 0x100527B4: push ebx */
    PUSH32(esp, ebx); /* 0x100527B5: push ebx */
    PUSH32(esp, edi); /* 0x100527B6: push edi */
    RECOMP_CALL(sub_10025FE0); /* 0x100527B7: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x44); /* 0x100527BC: mov eax, dword ptr [edi + 0x44] */
    MEM32(eax) = esi; /* 0x100527BF: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_10025B7A; /* 0x100527C1: jmp 0x10025b7a */
L_100527C6:
    ecx = ebx; /* 0x100527C6: mov ecx, ebx */
    edx = ebx; /* 0x100527C8: mov edx, ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x100527CA: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x100527CD: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(0x100E0AA4), ecx */ /* 0x100527D0: cmp dword ptr [0x100e0aa4], ecx */
    _flag_a = (uint32_t)(MEM32(0x100E0AA4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10025B75; /* 0x100527D6: jbe 0x10025b75 */
L_100527DC:
    MEM32(ebp + (-0x10)) = ebx; /* 0x100527DC: mov dword ptr [ebp - 0x10], ebx */
L_100527DF:
    eax = MEM32(esi + 0x4); /* 0x100527DF: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100527E2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005281D; /* 0x100527E3: je 0x1005281d */
L_100527E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100527E5: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100527E6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10052879; /* 0x100527E7: jne 0x10052879 */
L_100527ED:
    /* cmp MEM8(0x100E0AAC), LO8(eax) */ /* 0x100527ED: cmp byte ptr [0x100e0aac], al */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052879; /* 0x100527F3: je 0x10052879 */
L_100527F9:
    /* cmp MEM32(esi), eax */ /* 0x100527F9: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052879; /* 0x100527FB: je 0x10052879 */
L_100527FD:
    PUSH32(esp, ecx); /* 0x100527FD: push ecx */
    PUSH32(esp, ecx); /* 0x100527FE: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x100527FF: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10052801: push eax */
    PUSH32(esp, ecx); /* 0x10052802: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x10052803: mov ecx, dword ptr [edi + 0x48] */
    PUSH32(esp, edi); /* 0x10052806: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x10052807: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025FE0); /* 0x10052809: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1005280E: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0xC)); /* 0x10052811: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052814: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10052815: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x28u; /* 0x10052818: add ebx, 0x28 */
    _flag_k = FK_ADD;
    goto L_10052879; /* 0x1005281B: jmp 0x10052879 */
L_1005281D:
    /* cmp MEM8(0x100E0AAC), 0 */ /* 0x1005281D: cmp byte ptr [0x100e0aac], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052854; /* 0x10052824: jne 0x10052854 */
L_10052826:
    /* cmp MEM32(esi), 0 */ /* 0x10052826: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052879; /* 0x10052829: je 0x10052879 */
L_1005282B:
    PUSH32(esp, ecx); /* 0x1005282B: push ecx */
    PUSH32(esp, ecx); /* 0x1005282C: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x1005282D: push dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1005282F: push 0 */
    PUSH32(esp, ecx); /* 0x10052831: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x10052832: mov ecx, dword ptr [edi + 0x48] */
    PUSH32(esp, edi); /* 0x10052835: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x10052836: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025FE0); /* 0x10052838: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x48); /* 0x1005283D: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(esi + 0x8); /* 0x10052840: mov eax, dword ptr [esi + 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x10052843: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebx + ecx + 0x14) = eax; /* 0x10052846: mov dword ptr [ebx + ecx + 0x14], eax */
    ecx = MEM32(ebp + (-0x4)); /* 0x1005284A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005284D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x28u; /* 0x1005284E: add ebx, 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10052851: mov dword ptr [ebp - 4], ecx */
L_10052854:
    eax = MEM32(esi); /* 0x10052854: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10052856: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x10052859: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052879; /* 0x1005285B: je 0x10052879 */
L_1005285D:
    ecx = MEM32(edi + 0x44); /* 0x1005285D: mov ecx, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x10052860: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x8); /* 0x10052863: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10052866: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0xCu; /* 0x1005286A: add dword ptr [ebp - 0x10], 0xc */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = eax; /* 0x1005286E: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x10052871: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ecx) = eax; /* 0x10052874: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + (-0x4)); /* 0x10052876: mov ecx, dword ptr [ebp - 4] */
L_10052879:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x10052879: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1005287C: add esi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x1005287F: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, MEM32(0x100E0AA4) */ /* 0x10052882: cmp edx, dword ptr [0x100e0aa4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x100E0AA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10025B75; /* 0x10052888: jae 0x10025b75 */
L_1005288E:
    RECOMP_BACKEDGE();
    goto L_100527DF; /* 0x1005288E: jmp 0x100527df */
L_10052893:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10052893: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x18), edx */ /* 0x10052895: cmp dword ptr [edi + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10025B87; /* 0x10052898: jbe 0x10025b87 */
L_1005289E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005289E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100528A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100528A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x14), esi */ /* 0x100528A2: cmp dword ptr [edi + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100528F8; /* 0x100528A5: jbe 0x100528f8 */
L_100528A7:
    ebx = MEM32(edi + 0x48); /* 0x100528A7: mov ebx, dword ptr [edi + 0x48] */
    eax = MEM32(edi + 0x44); /* 0x100528AA: mov eax, dword ptr [edi + 0x44] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x100528AD: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x100528B0: mov dword ptr [ebp - 0xc], eax */
    ebx = MEM32(ecx + ebx + 0xC); /* 0x100528B3: mov ebx, dword ptr [ecx + ebx + 0xc] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x100528B7: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100528BA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100528BC:
    edi = MEM32(ebp + (-0x10)); /* 0x100528BC: mov edi, dword ptr [ebp - 0x10] */
    /* cmp edi, MEM32(ebx + eax + 0x4) */ /* 0x100528BF: cmp edi, dword ptr [ebx + eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x18)); /* 0x100528C3: mov edi, dword ptr [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100528DC; /* 0x100528C6: jne 0x100528dc */
L_100528C8:
    eax = MEM32(ebp + (-0x14)); /* 0x100528C8: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0xC)); /* 0x100528CB: mov edi, dword ptr [ebp - 0xc] */
    eax = MEM32(ecx + eax); /* 0x100528CE: mov eax, dword ptr [ecx + eax] */
    /* test MEM32(ebx + edi), eax */ /* 0x100528D1: test dword ptr [ebx + edi], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edi)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x100528D4: mov edi, dword ptr [ebp - 0x18] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100528E7; /* 0x100528D7: jne 0x100528e7 */
L_100528D9:
    eax = MEM32(edi + 0x44); /* 0x100528D9: mov eax, dword ptr [edi + 0x44] */
L_100528DC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100528DC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x100528DD: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi + 0x14) */ /* 0x100528E0: cmp esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100528F8; /* 0x100528E3: jae 0x100528f8 */
L_100528E5:
    RECOMP_BACKEDGE();
    goto L_100528BC; /* 0x100528E5: jmp 0x100528bc */
L_100528E7:
    ebx = MEM32(edi + 0x44); /* 0x100528E7: mov ebx, dword ptr [edi + 0x44] */
    eax = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x100528EA: imul eax, esi, 0xc */
    esi = MEM32(ebp + (-0x14)); /* 0x100528ED: mov esi, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + ebx + 0x8); /* 0x100528F0: mov eax, dword ptr [eax + ebx + 8] */
    MEM32(esi + ecx + 0x14) = eax; /* 0x100528F4: mov dword ptr [esi + ecx + 0x14], eax */
L_100528F8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100528F8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x100528F9: add ecx, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(edi + 0x18) */ /* 0x100528FC: cmp edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10025B87; /* 0x100528FF: jae 0x10025b87 */
L_10052905:
    RECOMP_BACKEDGE();
    goto L_100528A0; /* 0x10052905: jmp 0x100528a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025BA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025BA2u);

L_10025BA2:
    PUSH32(esp, eax); /* 0x10025BA2: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x10025BA3: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x10025BAA: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x10025BAE: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10025BB2: push ebx */
    PUSH32(esp, esi); /* 0x10025BB3: push esi */
    PUSH32(esp, edi); /* 0x10025BB4: push edi */
    MEM32(eax) = ebp; /* 0x10025BB5: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x10025BB7: mov ebp, eax */
    eax = MEM32(0x100DF7B8); /* 0x10025BB9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10025BBE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10025BC0: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x10025BC1: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10025BC4: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x10025BC7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x10025BCE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10025BD1: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025BD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10025BD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025BD8u);

L_10025BD8:
    PUSH32(esp, 0x24u); /* 0x10025BD8: push 0x24 */
    eax = 0x100DB5C8u; /* 0x10025BDA: mov eax, 0x100db5c8 */
    RECOMP_CALL(sub_10025BA2); /* 0x10025BDF: call 0x10025ba2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100E0AB8u); /* 0x10025BE4: push 0x100e0ab8 */
    PUSH32(esp, 0x100E0A9Cu); /* 0x10025BE9: push 0x100e0a9c */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x10025BEE: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10025BF4: push eax */
    RECOMP_ICALL(MEM32(0x100E5178)); /* 0x10025BF5: call dword ptr [0x100e5178] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10025BFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100524D8; /* 0x10025BFD: je 0x100524d8 */
L_10025C03:
    eax = MEM32(0x100E0A9C); /* 0x10025C03: mov eax, dword ptr [0x100e0a9c] */
    /* cmp eax, MEM32(0x100E0AB8) */ /* 0x10025C08: cmp eax, dword ptr [0x100e0ab8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0AB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052501; /* 0x10025C0E: jne 0x10052501 */
L_10025C14:
    RECOMP_CALL(sub_10025C1A); /* 0x10025C14: call 0x10025c1a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025C19: ret  */
L_100524D8:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100524D8: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100524DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100524EA; /* 0x100524E0: jle 0x100524ea */
L_100524E2:
    eax = (uint32_t)LO16(eax); /* 0x100524E2: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x100524E5: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100524EA:
    PUSH32(esp, eax); /* 0x100524EA: push eax */
    ecx = ebp + (-0x30); /* 0x100524EB: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_1006C31C); /* 0x100524EE: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x100524F3: push 0x100dcf40 */
    eax = ebp + (-0x30); /* 0x100524F8: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100524FB: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100524FC: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10052501:
    /* cmp MEM32(0x100E03E4), 4 */ /* 0x10052501: cmp dword ptr [0x100e03e4], 4 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10052565; /* 0x10052508: jl 0x10052565 */
L_1005250A:
    RECOMP_ICALL(MEM32(0x100E504C)); /* 0x1005250A: call dword ptr [0x100e504c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10052510: push eax */
    ecx = ebp + (-0x1C); /* 0x10052511: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1006F8AE); /* 0x10052514: call 0x1006f8ae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10052519: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1005251B: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10052520: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10052522: pop ecx */
    /* test esi, esi */ /* 0x10052523: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052540; /* 0x10052525: je 0x10052540 */
L_10052527:
    ecx = (uint32_t)MEM16(ebp + (-0x18)); /* 0x10052527: movzx ecx, word ptr [ebp - 0x18] */
    edi = esi; /* 0x1005252B: mov edi, esi */
    edx = MEM32(0x100E0A9C); /* 0x1005252D: mov edx, dword ptr [0x100e0a9c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052533: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052535: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052536: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052537: stosd dword ptr es:[edi], eax */
    MEM16(esi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x10052538: mov word ptr [esi + 4], cx */
    MEM32(esi) = edx; /* 0x1005253C: mov dword ptr [esi], edx */
    goto L_10052542; /* 0x1005253E: jmp 0x10052542 */
L_10052540:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10052540: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052542:
    PUSH32(esp, 8); /* 0x10052542: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x10052544: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10052549: pop ecx */
    /* test eax, eax */ /* 0x1005254A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052559; /* 0x1005254C: je 0x10052559 */
L_1005254E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005254E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = esi; /* 0x10052550: mov dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052553: inc ecx */
    _flag_k = FK_INC;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10052554: mov word ptr [eax], cx */
    goto L_1005255B; /* 0x10052557: jmp 0x1005255b */
L_10052559:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052559: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005255B:
    MEM32(0x100E0AC4) = eax; /* 0x1005255B: mov dword ptr [0x100e0ac4], eax */
    RECOMP_BACKEDGE();
    goto L_10025C14; /* 0x10052560: jmp 0x10025c14 */
L_10052565:
    PUSH32(esp, 8); /* 0x10052565: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x10052567: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005256C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1005256E: pop ecx */
    MEM32(ebp + (-0x20)) = esi; /* 0x1005256F: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10052572: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10052576: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100525AC; /* 0x10052578: je 0x100525ac */
L_1005257A:
    PUSH32(esp, 0xCu); /* 0x1005257A: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1005257C: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10052581: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10052583: pop ecx */
    /* test edx, edx */ /* 0x10052584: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005259F; /* 0x10052586: je 0x1005259f */
L_10052588:
    ecx = MEM32(0x100E0A9C); /* 0x10052588: mov ecx, dword ptr [0x100e0a9c] */
    edi = edx; /* 0x1005258E: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052590: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052592: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052593: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10052594: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052595: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx + 0x4) = (uint16_t)(LO16(eax)); /* 0x10052597: mov word ptr [edx + 4], ax */
    MEM32(edx) = ecx; /* 0x1005259B: mov dword ptr [edx], ecx */
    goto L_100525A1; /* 0x1005259D: jmp 0x100525a1 */
L_1005259F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005259F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100525A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100525A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x100525A3: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100525A6: inc eax */
    _flag_k = FK_INC;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100525A7: mov word ptr [esi], ax */
    goto L_100525AE; /* 0x100525AA: jmp 0x100525ae */
L_100525AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100525AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100525AE:
    MEM32(0x100E0AC4) = esi; /* 0x100525AE: mov dword ptr [0x100e0ac4], esi */
    RECOMP_BACKEDGE();
    goto L_10025C14; /* 0x100525B4: jmp 0x10025c14 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025C1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025C1Au);

    goto L_10025C1A;
L_100149D7:
    ecx = MEM32(ebp + (-0xC)); /* 0x100149D7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100149DA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100149E1: pop ecx */
    edi = POP32_VAL(esp); /* 0x100149E2: pop edi */
    edi = POP32_VAL(esp); /* 0x100149E3: pop edi */
    esi = POP32_VAL(esp); /* 0x100149E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x100149E5: pop ebx */
    esp = ebp; /* 0x100149E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100149E8: pop ebp */
    PUSH32(esp, ecx); /* 0x100149E9: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100149EA: ret  */
L_10025C1A:
    ecx = MEM32(ebp + (-0x10)); /* 0x10025C1A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10025C1D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10025C1F: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100149D7; /* 0x10025C24: jmp 0x100149d7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025C29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025C29u);

L_10025C29:
    PUSH32(esp, esi); /* 0x10025C29: push esi */
    PUSH32(esp, 0); /* 0x10025C2A: push 0 */
    PUSH32(esp, MEM32(0x100E066C)); /* 0x10025C2C: push dword ptr [0x100e066c] */
    esi = ecx; /* 0x10025C32: mov esi, ecx */
    PUSH32(esp, esi); /* 0x10025C34: push esi */
    RECOMP_CALL(sub_10012426); /* 0x10025C35: call 0x10012426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10025C3A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10025C3D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10025C3F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025C40: ret  */
    RECOMP_REGS_OUT();
}

void sub_10025C41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025C41u);

L_10025C41:
    PUSH32(esp, 0x14u); /* 0x10025C41: push 0x14 */
    eax = 0x100DB4C1u; /* 0x10025C43: mov eax, 0x100db4c1 */
    RECOMP_CALL(sub_100149A4); /* 0x10025C48: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10025C4D: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x10025C4F: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025C52: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x10027BD4u; /* 0x10025C54: mov dword ptr [edi], 0x10027bd4 */
    MEM32(edi + 0x4) = ebx; /* 0x10025C5A: mov dword ptr [edi + 4], ebx */
    ecx = edi + 0x2C; /* 0x10025C5D: lea ecx, [edi + 0x2c] */
    MEM32(edi + 0x8) = ebx; /* 0x10025C60: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0xC) = 0x10u; /* 0x10025C63: mov dword ptr [edi + 0xc], 0x10 */
    MEM32(edi + 0x10) = ebx; /* 0x10025C6A: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x24) = ebx; /* 0x10025C6D: mov dword ptr [edi + 0x24], ebx */
    MEM32(edi + 0x28) = ebx; /* 0x10025C70: mov dword ptr [edi + 0x28], ebx */
    RECOMP_CALL(sub_10025C29); /* 0x10025C73: call 0x10025c29 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x10025C78: mov dword ptr [ebp - 4], ebx */
    esi = edi + 0x68; /* 0x10025C7B: lea esi, [edi + 0x68] */
    MEM32(edi + 0x44) = ebx; /* 0x10025C7E: mov dword ptr [edi + 0x44], ebx */
    ecx = esi + 0xC; /* 0x10025C81: lea ecx, [esi + 0xc] */
    MEM32(edi + 0x48) = ebx; /* 0x10025C84: mov dword ptr [edi + 0x48], ebx */
    MEM32(edi + 0x4C) = ebx; /* 0x10025C87: mov dword ptr [edi + 0x4c], ebx */
    MEM32(edi + 0x50) = ebx; /* 0x10025C8A: mov dword ptr [edi + 0x50], ebx */
    MEM32(edi + 0x54) = ebx; /* 0x10025C8D: mov dword ptr [edi + 0x54], ebx */
    MEM32(edi + 0x58) = ebx; /* 0x10025C90: mov dword ptr [edi + 0x58], ebx */
    MEM32(edi + 0x5C) = ebx; /* 0x10025C93: mov dword ptr [edi + 0x5c], ebx */
    MEM32(edi + 0x60) = ebx; /* 0x10025C96: mov dword ptr [edi + 0x60], ebx */
    MEM32(edi + 0x64) = ebx; /* 0x10025C99: mov dword ptr [edi + 0x64], ebx */
    MEM32(ebp + (-0x10)) = esi; /* 0x10025C9C: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = ebx; /* 0x10025C9F: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x10025CA1: mov dword ptr [esi + 4], ebx */
    RECOMP_CALL(sub_10025C29); /* 0x10025CA4: call 0x10025c29 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x10025CA9: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_10026F10); /* 0x10025CAD: call 0x10026f10 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x10025CB2: mov dword ptr [esi + 8], eax */
    SET_LO8(ecx, 1); /* 0x10025CB5: mov cl, 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x10025CB7: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_10025760); /* 0x10025CBB: call 0x10025760 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x10025CC0: mov ecx, edi */
    RECOMP_CALL(sub_10025A97); /* 0x10025CC2: call 0x10025a97 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100E03E4), 3 */ /* 0x10025CC7: cmp dword ptr [0x100e03e4], 3 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x10025CCE: push 4 */
    esi = POP32_VAL(esp); /* 0x10025CD0: pop esi */
    if (CMP_L(_flag_a, _flag_b)) goto L_10052407; /* 0x10025CD1: jl 0x10052407 */
L_10025CD7:
    MEM32(edi + 0x8C) = ebx; /* 0x10025CD7: mov dword ptr [edi + 0x8c], ebx */
L_10025CDD:
    RECOMP_CALL(sub_10023C0B); /* 0x10025CDD: call 0x10023c0b */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x50) = eax; /* 0x10025CE2: mov dword ptr [edi + 0x50], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025CE5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x10025CE7: mov eax, dword ptr [edi + 0xc] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x10025CEA: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025CEC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025CEF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025CF1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025CF3: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025CF4: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x54) = eax; /* 0x10025CF9: mov dword ptr [edi + 0x54], eax */
    eax = edi; /* 0x10025CFC: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x10025CFE: pop ecx */
    RECOMP_CALL(sub_100149D7); /* 0x10025CFF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025D04: ret  */
L_10052407:
    PUSH32(esp, esi); /* 0x10052407: push esi */
    PUSH32(esp, 0x3000u); /* 0x10052408: push 0x3000 */
    PUSH32(esp, 0x1000u); /* 0x1005240D: push 0x1000 */
    PUSH32(esp, ebx); /* 0x10052412: push ebx */
    RECOMP_ICALL(MEM32(0x100E51A0)); /* 0x10052413: call dword ptr [0x100e51a0] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8C) = eax; /* 0x10052419: mov dword ptr [edi + 0x8c], eax */
    /* test eax, eax */ /* 0x1005241F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005244D; /* 0x10052421: jne 0x1005244d */
L_10052423:
    PUSH32(esp, 1); /* 0x10052423: push 1 */
    eax = ebp + (-0x10); /* 0x10052425: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x1002C7ECu; /* 0x10052428: mov dword ptr [ebp - 0x10], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1005242F: push eax */
    ecx = ebp + (-0x20); /* 0x10052430: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10033A4A); /* 0x10052433: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x10052438: push 0x1002c7fc */
    eax = ebp + (-0x20); /* 0x1005243D: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x1002D1CCu; /* 0x10052440: mov dword ptr [ebp - 0x20], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x10052447: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052448: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1005244D:
    MEM8(eax) = (uint8_t)(1); /* 0x1005244D: mov byte ptr [eax], 1 */
    RECOMP_BACKEDGE();
    goto L_10025CDD; /* 0x10052450: jmp 0x10025cdd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025D05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025D05u);

L_10025D05:
    PUSH32(esp, 0xCu); /* 0x10025D05: push 0xc */
    eax = 0x100DB460u; /* 0x10025D07: mov eax, 0x100db460 */
    RECOMP_CALL(sub_100149A4); /* 0x10025D0C: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E032Cu; /* 0x10025D11: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10025D16: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10025D19: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025D1E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10025D20: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(0x100E0AA8); /* 0x10025D23: mov eax, dword ptr [0x100e0aa8] */
    /* test eax, eax */ /* 0x10025D28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100523A4; /* 0x10025D2A: jne 0x100523a4 */
L_10025D30:
    PUSH32(esp, 0x90u); /* 0x10025D30: push 0x90 */
    RECOMP_CALL(sub_1000EE11); /* 0x10025D35: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025D3A: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x10025D3B: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x10025D3E: mov byte ptr [ebp - 4], 1 */
    /* test eax, eax */ /* 0x10025D42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025D72; /* 0x10025D44: je 0x10025d72 */
L_10025D46:
    ecx = eax; /* 0x10025D46: mov ecx, eax */
    RECOMP_CALL(sub_10025C41); /* 0x10025D48: call 0x10025c41 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10025D4D: mov esi, eax */
L_10025D4F:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10025D4F: mov byte ptr [ebp - 4], bl */
    ecx = esi; /* 0x10025D52: mov ecx, esi */
    eax = MEM32(esi); /* 0x10025D54: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10025D56: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0330); /* 0x10025D58: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x10025D5D: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0AA8) = eax; /* 0x10025D5F: mov dword ptr [0x100e0aa8], eax */
L_10025D64:
    MEM32(0x100E032C) = ebx; /* 0x10025D64: mov dword ptr [0x100e032c], ebx */
    eax = esi; /* 0x10025D6A: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x10025D6C: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025D71: ret  */
L_10025D72:
    esi = ebx; /* 0x10025D72: mov esi, ebx */
    RECOMP_BACKEDGE();
    goto L_10025D4F; /* 0x10025D74: jmp 0x10025d4f */
L_100523A4:
    esi = MEM32(0x100E0330); /* 0x100523A4: mov esi, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x100523AA: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x4; /* 0x100523AC: lea edi, [esi + 4] */
L_100523AF:
    edx = MEM32(edi); /* 0x100523AF: mov edx, dword ptr [edi] */
    /* test edx, edx */ /* 0x100523B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100523C8; /* 0x100523B3: je 0x100523c8 */
L_100523B5:
    ecx = edx + 0x1; /* 0x100523B5: lea ecx, [edx + 1] */
    eax = edx; /* 0x100523B8: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x100523BA: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x100523BE: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025D64; /* 0x100523C0: je 0x10025d64 */
L_100523C6:
    RECOMP_BACKEDGE();
    goto L_100523AF; /* 0x100523C6: jmp 0x100523af */
L_100523C8:
    PUSH32(esp, 0x90u); /* 0x100523C8: push 0x90 */
    RECOMP_CALL(sub_1000EE11); /* 0x100523CD: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100523D2: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x100523D3: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x100523D6: mov byte ptr [ebp - 4], 2 */
    /* test eax, eax */ /* 0x100523DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100523E9; /* 0x100523DC: je 0x100523e9 */
L_100523DE:
    ecx = eax; /* 0x100523DE: mov ecx, eax */
    RECOMP_CALL(sub_10025C41); /* 0x100523E0: call 0x10025c41 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100523E5: mov esi, eax */
    goto L_100523EB; /* 0x100523E7: jmp 0x100523eb */
L_100523E9:
    esi = ebx; /* 0x100523E9: mov esi, ebx */
L_100523EB:
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x100523EB: mov byte ptr [ebp - 4], bl */
    ecx = esi; /* 0x100523EE: mov ecx, esi */
    edx = MEM32(esi); /* 0x100523F0: mov edx, dword ptr [esi] */
    RECOMP_ICALL(MEM32(edx)); /* 0x100523F2: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x100523F4: mov ecx, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x100523FA: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0AA8) = ecx; /* 0x100523FC: mov dword ptr [0x100e0aa8], ecx */
    RECOMP_BACKEDGE();
    goto L_10025D64; /* 0x10052402: jmp 0x10025d64 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025D82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025D82u);

L_10025D82:
    PUSH32(esp, ebp); /* 0x10025D82: push ebp */
    ebp = esp; /* 0x10025D83: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10025D85: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10025D88: push esi */
    esi = ecx; /* 0x10025D89: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025D8B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10025D8D: push 4 */
    edx = POP32_VAL(esp); /* 0x10025D8F: pop edx */
    MEM32(esi) = eax; /* 0x10025D90: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x10025D92: add eax, 0x1f */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10025D95: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x10025D95: shr eax, 5 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025D98: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025D9A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025D9D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025D9F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025DA1: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025DA2: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x10025DA7: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Fu; /* 0x10025DA9: add ecx, 0x1f */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x10025DAC: mov dword ptr [esi + 4], eax */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10025DAF: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x10025DAF: shr ecx, 5 */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10025DB2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10025DB2: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10025DB5: push ecx */
    PUSH32(esp, 0); /* 0x10025DB6: push 0 */
    PUSH32(esp, eax); /* 0x10025DB8: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10025DB9: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10025DBE: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10025DC1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10025DC3: pop esi */
    ebp = POP32_VAL(esp); /* 0x10025DC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10025DC5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10025DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025DC8u);

L_10025DC8:
    PUSH32(esp, 4); /* 0x10025DC8: push 4 */
    eax = 0x100DBD28u; /* 0x10025DCA: mov eax, 0x100dbd28 */
    RECOMP_CALL(sub_100149A4); /* 0x10025DCF: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x10025DD4: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10025DD6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x10025DD8: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x10025DDB: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_100258DA); /* 0x10025DDE: call 0x100258da */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10025DE3: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x10025DE6: mov ecx, edi */
    PUSH32(esp, eax); /* 0x10025DE8: push eax */
    RECOMP_CALL(sub_10025D82); /* 0x10025DE9: call 0x10025d82 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x10025DEE: mov dword ptr [ebp - 4], esi */
    ecx = MEM32(ebp + 0xC); /* 0x10025DF1: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 1; /* 0x10025DF4: mov dword ptr [ebp - 0x10], 1 */
    eax = MEM32(ecx); /* 0x10025DFB: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10025DFD: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10025E02: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005322B; /* 0x10025E04: jne 0x1005322b */
L_10025E0A:
    edx = MEM32(edi); /* 0x10025E0A: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1Fu; /* 0x10025E0C: add edx, 0x1f */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10025E0F: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x10025E0F: shr edx, 5 */
    /* test edx, edx */ /* 0x10025E12: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025E22; /* 0x10025E14: je 0x10025e22 */
L_10025E16:
    ecx = MEM32(edi + 0x4); /* 0x10025E16: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)((MEM32(ecx + esi * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + esi * 4) | 0xFFFFFFFFu));
    MEM32(ecx + esi * 4) = MEM32(ecx + esi * 4) | 0xFFFFFFFFu; /* 0x10025E19: or dword ptr [ecx + esi*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10025E1D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x10025E1E: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10025E16; /* 0x10025E20: jb 0x10025e16 */
L_10025E22:
    eax = edi; /* 0x10025E22: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x10025E24: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10025E29: ret 8 */
L_1005322B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005322B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10053278; /* 0x1005322C: je 0x10053278 */
L_1005322E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005322E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005326A; /* 0x1005322F: je 0x1005326a */
L_10053231:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10053231: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10025E22; /* 0x10053232: jne 0x10025e22 */
L_10053238:
    eax = MEM32(ecx + 0x8); /* 0x10053238: mov eax, dword ptr [ecx + 8] */
    ecx = ebx + 0x168; /* 0x1005323B: lea ecx, [ebx + 0x168] */
    MEM32(ebp + 0x8) = eax; /* 0x10053241: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0xC; /* 0x10053244: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10053247: push eax */
    eax = ebp + 0x8; /* 0x10053248: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1005324B: push eax */
    RECOMP_CALL(sub_10026174); /* 0x1005324C: call 0x10026174 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x10053251: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10053254: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x4); /* 0x10053255: mov eax, dword ptr [edi + 4] */
    edx = ecx; /* 0x10053258: mov edx, ecx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1005325A: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x1005325A: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005325D: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10053260: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x10053260: shl esi, cl */
    _flag_a = (uint32_t)((MEM32(eax + edx * 4) | esi)); _flag_b = (uint32_t)((MEM32(eax + edx * 4) | esi));
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) | esi; /* 0x10053262: or dword ptr [eax + edx*4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10025E22; /* 0x10053265: jmp 0x10025e22 */
L_1005326A:
    ecx = MEM32(ecx + 0x8); /* 0x1005326A: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ebx + 0x20); /* 0x1005326D: mov eax, dword ptr [ebx + 0x20] */
    eax = MEM32(eax + ecx * 4); /* 0x10053270: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x10053273: add eax, 8 */
    _flag_k = FK_ADD;
    goto L_10053286; /* 0x10053276: jmp 0x10053286 */
L_10053278:
    ecx = MEM32(ecx + 0x8); /* 0x10053278: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ebx + 0x1C); /* 0x1005327B: mov eax, dword ptr [ebx + 0x1c] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1005327E: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1005327E: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x10053281: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10053284: add eax, ecx */
    _flag_k = FK_ADD;
L_10053286:
    PUSH32(esp, eax); /* 0x10053286: push eax */
    ecx = edi; /* 0x10053287: mov ecx, edi */
    RECOMP_CALL(sub_10025ECF); /* 0x10053289: call 0x10025ecf */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10025E22; /* 0x1005328E: jmp 0x10025e22 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025E2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025E2Cu);

L_10025E2C:
    PUSH32(esp, ebp); /* 0x10025E2C: push ebp */
    ebp = esp; /* 0x10025E2D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10025E2F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x10025E32: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10025E35: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10025E36: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10025E39: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10025E3A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10025E3D: push edi */
    edi = ecx; /* 0x10025E3E: mov edi, ecx */
    PUSH32(esp, esi); /* 0x10025E40: push esi */
    ecx = edi + 0xC; /* 0x10025E41: lea ecx, [edi + 0xc] */
    MEM32(edi + 0x100) = ebx; /* 0x10025E44: mov dword ptr [edi + 0x100], ebx */
    MEM32(edi + 0x8) = eax; /* 0x10025E4A: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_1002762F); /* 0x10025E4D: call 0x1002762f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x110)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x110) = MEM32(edi + 0x110) & 0; /* 0x10025E52: and dword ptr [edi + 0x110], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xC); /* 0x10025E59: lea eax, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x10025E5C: push esi */
    MEM32(edi + 0x11C) = 1; /* 0x10025E5D: mov dword ptr [edi + 0x11c], 1 */
    ecx = MEM32(ebx + 0x4); /* 0x10025E67: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x10025E6A: push eax */
    RECOMP_CALL(sub_10025DC8); /* 0x10025E6B: call 0x10025dc8 */
    RECOMP_FLAGS_IN();
    ebx = edi + 0x1C; /* 0x10025E70: lea ebx, [edi + 0x1c] */
    esi = eax; /* 0x10025E73: mov esi, eax */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x10025E75: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025E78: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025E7D: pop ecx */
    ecx = MEM32(esi); /* 0x10025E7E: mov ecx, dword ptr [esi] */
    MEM32(ebx) = ecx; /* 0x10025E80: mov dword ptr [ebx], ecx */
    eax = MEM32(esi + 0x4); /* 0x10025E82: mov eax, dword ptr [esi + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x10025E85: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x10025E88: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10025E8B: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x10025E8F: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025E92: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025E97: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x10025E98: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x10025E9B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10025E9D: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x10025EA2: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052D71; /* 0x10025EA5: je 0x10052d71 */
L_10025EAB:
    PUSH32(esp, ebx); /* 0x10025EAB: push ebx */
    ecx = edi + 0x38; /* 0x10025EAC: lea ecx, [edi + 0x38] */
    RECOMP_CALL(sub_10025ECF); /* 0x10025EAF: call 0x10025ecf */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x10025EB4: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025EC6; /* 0x10025EB8: je 0x10025ec6 */
L_10025EBA:
    ecx = MEM32(edi + 0x48); /* 0x10025EBA: mov ecx, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10025EBD: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x10025EC0: push ebx */
    RECOMP_CALL(sub_10025ECF); /* 0x10025EC1: call 0x10025ecf */
    RECOMP_FLAGS_IN();
L_10025EC6:
    edi = POP32_VAL(esp); /* 0x10025EC6: pop edi */
    esi = POP32_VAL(esp); /* 0x10025EC7: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025EC8: pop ebx */
    esp = ebp; /* 0x10025EC9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10025ECB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10025ECC: ret 0xc */
L_10052D71:
    eax = MEM32(ecx + 0x8); /* 0x10052D71: mov eax, dword ptr [ecx + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x10052D74: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x10) = eax; /* 0x10052D77: mov dword ptr [ebp + 0x10], eax */
    eax = ebp + 0x8; /* 0x10052D7A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10052D7D: push eax */
    eax = ebp + 0x10; /* 0x10052D7E: lea eax, [ebp + 0x10] */
    ecx = MEM32(ecx + 0x4); /* 0x10052D81: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x10052D84: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x168u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x168u; /* 0x10052D85: add ecx, 0x168 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10026174); /* 0x10052D8B: call 0x10026174 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10052D90: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x24) = eax; /* 0x10052D93: mov dword ptr [edi + 0x24], eax */
    RECOMP_BACKEDGE();
    goto L_10025EAB; /* 0x10052D96: jmp 0x10025eab */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025ECF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025ECFu);

L_10025ECF:
    PUSH32(esp, ebp); /* 0x10025ECF: push ebp */
    ebp = esp; /* 0x10025ED0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10025ED2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10025ED3: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10025ED6: push esi */
    esi = ecx; /* 0x10025ED7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10025ED9: push edi */
    edi = MEM32(ebx); /* 0x10025EDA: mov edi, dword ptr [ebx] */
    /* cmp MEM32(esi), edi */ /* 0x10025EDC: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025F09; /* 0x10025EDE: je 0x10025f09 */
L_10025EE0:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10025EE0: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025EE3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025EE8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x10025EEA: mov dword ptr [esi], edi */
    PUSH32(esp, 4); /* 0x10025EEC: push 4 */
    eax = edi + 0x1F; /* 0x10025EEE: lea eax, [edi + 0x1f] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10025EF1: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x10025EF1: shr eax, 5 */
    edx = POP32_VAL(esp); /* 0x10025EF4: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025EF5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025EF7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025EFA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025EFC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025EFE: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025EFF: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025F04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10025F05: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x10025F06: mov dword ptr [esi + 4], eax */
L_10025F09:
    edx = MEM32(esi); /* 0x10025F09: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10025F0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1Fu; /* 0x10025F0D: add edx, 0x1f */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10025F10: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x10025F10: shr edx, 5 */
    /* test edx, edx */ /* 0x10025F13: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025F28; /* 0x10025F15: je 0x10025f28 */
L_10025F17:
    eax = MEM32(ebx + 0x4); /* 0x10025F17: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(esi + 0x4); /* 0x10025F1A: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(eax + edi * 4); /* 0x10025F1D: mov eax, dword ptr [eax + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x10025F20: mov dword ptr [ecx + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10025F23: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, edx */ /* 0x10025F24: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10025F17; /* 0x10025F26: jb 0x10025f17 */
L_10025F28:
    edi = POP32_VAL(esp); /* 0x10025F28: pop edi */
    esi = POP32_VAL(esp); /* 0x10025F29: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025F2A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10025F2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10025F2C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10025F2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025F2Fu);

L_10025F2F:
    PUSH32(esp, 4); /* 0x10025F2F: push 4 */
    eax = 0x100DAB3Cu; /* 0x10025F31: mov eax, 0x100dab3c */
    RECOMP_CALL(sub_100149A4); /* 0x10025F36: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10025F3B: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x10025F3D: mov dword ptr [ebp - 0x10], edi */
    eax = MEM32(ebp + 0x8); /* 0x10025F40: mov eax, dword ptr [ebp + 8] */
    ecx = edi + 0x4; /* 0x10025F43: lea ecx, [edi + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10025F46: push dword ptr [ebp + 0xc] */
    MEM32(edi) = eax; /* 0x10025F49: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025F4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = ebx; /* 0x10025F4D: mov dword ptr [ecx], ebx */
    MEM32(ecx + 0x4) = ebx; /* 0x10025F4F: mov dword ptr [ecx + 4], ebx */
    RECOMP_CALL(sub_10025ECF); /* 0x10025F52: call 0x10025ecf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x10025F57: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025F5A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10025F5C: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x10) = eax; /* 0x10025F5F: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x10025F62: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x10025F65: push 4 */
    edx = POP32_VAL(esp); /* 0x10025F67: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025F68: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(edi + 0x14) = ebx; /* 0x10025F6A: mov dword ptr [edi + 0x14], ebx */
    MEM32(edi + 0x18) = ebx; /* 0x10025F6D: mov dword ptr [edi + 0x18], ebx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025F70: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025F73: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025F75: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025F77: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025F78: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x10025F7D: mov ecx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10025F80: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10025F80: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10025F83: push ecx */
    PUSH32(esp, ebx); /* 0x10025F84: push ebx */
    PUSH32(esp, eax); /* 0x10025F85: push eax */
    MEM32(edi + 0xC) = eax; /* 0x10025F86: mov dword ptr [edi + 0xc], eax */
    RECOMP_CALL(sub_10011533); /* 0x10025F89: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10025F8E: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x10025F91: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x10025F93: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10025F98: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10025F9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025F9Bu);

L_10025F9B:
    PUSH32(esp, ebp); /* 0x10025F9B: push ebp */
    ebp = esp; /* 0x10025F9C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10025F9E: push esi */
    PUSH32(esp, 8); /* 0x10025F9F: push 8 */
    esi = ecx; /* 0x10025FA1: mov esi, ecx */
    RECOMP_CALL(sub_1000EE11); /* 0x10025FA3: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025FA8: pop ecx */
    /* test eax, eax */ /* 0x10025FA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025FD0; /* 0x10025FAB: je 0x10025fd0 */
L_10025FAD:
    MEM32(eax) = 0x10025FD8u; /* 0x10025FAD: mov dword ptr [eax], 0x10025fd8 */
    MEM32(eax + 0x4) = esi; /* 0x10025FB3: mov dword ptr [eax + 4], esi */
L_10025FB6:
    MEM32(esi + 0x20) = eax; /* 0x10025FB6: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + 0x8); /* 0x10025FB9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = eax; /* 0x10025FBC: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x10025FBF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x10025FC2: mov dword ptr [esi + 4], eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x10025FC5: mov al, byte ptr [ebp + 0x10] */
    MEM8(esi + 0x8) = (uint8_t)(LO8(eax)); /* 0x10025FC8: mov byte ptr [esi + 8], al */
    esi = POP32_VAL(esp); /* 0x10025FCB: pop esi */
    ebp = POP32_VAL(esp); /* 0x10025FCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10025FCD: ret 0xc */
L_10025FD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10025FD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10025FB6; /* 0x10025FD2: jmp 0x10025fb6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025FD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025FD8u);

L_10025FD8:
    void_lift_trap(0x10025FD8u, "hlt ");
    PUSH32(esp, esp); /* 0x10025FD9: push esp */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10025FDA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x55100245u */ /* 0x10025FDC: cmp eax, 0x55100245 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x55100245u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebp = esp; /* 0x10025FE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10025FE3: push ebx */
    PUSH32(esp, esi); /* 0x10025FE4: push esi */
    PUSH32(esp, edi); /* 0x10025FE5: push edi */
    PUSH32(esp, 8); /* 0x10025FE6: push 8 */
    esi = ecx; /* 0x10025FE8: mov esi, ecx */
    RECOMP_CALL(sub_1000EE11); /* 0x10025FEA: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10025FEF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10025FF1: pop ecx */
    /* test eax, eax */ /* 0x10025FF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260C0; /* 0x10025FF4: je 0x100260c0 */
L_10025FFA:
    MEM32(eax) = 0x100260D0u; /* 0x10025FFA: mov dword ptr [eax], 0x100260d0 */
    MEM32(eax + 0x4) = esi; /* 0x10026000: mov dword ptr [eax + 4], esi */
L_10026003:
    ebx = MEM32(ebp + 0x14); /* 0x10026003: mov ebx, dword ptr [ebp + 0x14] */
    edx = edi; /* 0x10026006: mov edx, edi */
    MEM32(esi + 0x24) = eax; /* 0x10026008: mov dword ptr [esi + 0x24], eax */
    ecx = ebx; /* 0x1002600B: mov ecx, ebx */
    eax = MEM32(ebp + 0x8); /* 0x1002600D: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x18) = eax; /* 0x10026010: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x10026013: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(eax); /* 0x10026016: movzx eax, ax */
    MEM32(esi + 0x10) = eax; /* 0x10026019: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x1002601C: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(eax); /* 0x1002601F: movzx eax, ax */
    MEM32(esi + 0xC) = eax; /* 0x10026022: mov dword ptr [esi + 0xc], eax */
    MEM32(esi) = ebx; /* 0x10026025: mov dword ptr [esi], ebx */
    /* test ebx, ebx */ /* 0x10026027: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026033; /* 0x10026029: je 0x10026033 */
L_1002602B:
    eax = ecx + (-0x1); /* 0x1002602B: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002602E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1002602F: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002602B; /* 0x10026031: jne 0x1002602b */
L_10026033:
    eax = (uint32_t)LO16(edx); /* 0x10026033: movzx eax, dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10026036: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x10026038: mov dword ptr [ebp + 8], eax */
    MEM32(esi + 0x4) = eax; /* 0x1002603B: mov dword ptr [esi + 4], eax */
    PUSH32(esp, 0x24u); /* 0x1002603E: push 0x24 */
    edx = POP32_VAL(esp); /* 0x10026040: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10026041: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esi + 0x8) = edi; /* 0x10026043: mov dword ptr [esi + 8], edi */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10026046: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10026049: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002604B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002604D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1002604F: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x10026052: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10026055: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x10026057: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10026059: push eax */
    RECOMP_CALL(sub_10011683); /* 0x1002605A: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002605F: pop ecx */
    /* test eax, eax */ /* 0x10026060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260C7; /* 0x10026062: je 0x100260c7 */
L_10026064:
    ecx = MEM32(ebp + 0x8); /* 0x10026064: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x10026067: mov dword ptr [eax], ecx */
    ecx = eax + 0x4; /* 0x10026069: lea ecx, [eax + 4] */
L_1002606C:
    eax = (uint32_t)((int32_t)MEM32(esi + 0x4) * (int32_t)0x24u); /* 0x1002606C: imul eax, dword ptr [esi + 4], 0x24 */
    MEM32(esi + 0x20) = ecx; /* 0x10026070: mov dword ptr [esi + 0x20], ecx */
    PUSH32(esp, eax); /* 0x10026073: push eax */
    PUSH32(esp, edi); /* 0x10026074: push edi */
    PUSH32(esp, ecx); /* 0x10026075: push ecx */
    RECOMP_CALL(sub_10011533); /* 0x10026076: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002607B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1002607E: mov eax, edi */
    /* cmp MEM32(esi + 0x4), edi */ /* 0x10026080: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100260B9; /* 0x10026083: jbe 0x100260b9 */
L_10026085:
    edx = edi; /* 0x10026085: mov edx, edi */
L_10026087:
    /* test LO8(ebx), 1 */ /* 0x10026087: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260B1; /* 0x1002608A: je 0x100260b1 */
L_1002608C:
    ecx = MEM32(esi + 0x20); /* 0x1002608C: mov ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1002608F: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10026091: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x10026092: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x24u; /* 0x10026095: add edx, 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0xC); /* 0x10026098: mov eax, dword ptr [esi + 0xc] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1002609B: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1002609B: shl eax, 8 */
    PUSH32(esp, edi); /* 0x1002609E: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1002609F: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x100260A1: mov dword ptr [ebp + 0xc], edx */
    PUSH32(esp, eax); /* 0x100260A4: push eax */
    PUSH32(esp, esi); /* 0x100260A5: push esi */
    RECOMP_CALL(sub_10025F9B); /* 0x100260A6: call 0x10025f9b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100260AB: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x100260AE: mov edx, dword ptr [ebp + 0xc] */
L_100260B1:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x100260B1: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x100260B1: shr ebx, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100260B3: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x100260B4: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10026087; /* 0x100260B7: jb 0x10026087 */
L_100260B9:
    edi = POP32_VAL(esp); /* 0x100260B9: pop edi */
    esi = POP32_VAL(esp); /* 0x100260BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100260BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100260BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x100260BD: ret 0x18 */
L_100260C0:
    eax = edi; /* 0x100260C0: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_10026003; /* 0x100260C2: jmp 0x10026003 */
L_100260C7:
    ecx = edi; /* 0x100260C7: mov ecx, edi */
    RECOMP_BACKEDGE();
    goto L_1002606C; /* 0x100260C9: jmp 0x1002606c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025FE0u);

L_10025FE0:
    PUSH32(esp, ebp); /* 0x10025FE0: push ebp */
    ebp = esp; /* 0x10025FE1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10025FE3: push ebx */
    PUSH32(esp, esi); /* 0x10025FE4: push esi */
    PUSH32(esp, edi); /* 0x10025FE5: push edi */
    PUSH32(esp, 8); /* 0x10025FE6: push 8 */
    esi = ecx; /* 0x10025FE8: mov esi, ecx */
    RECOMP_CALL(sub_1000EE11); /* 0x10025FEA: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10025FEF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10025FF1: pop ecx */
    /* test eax, eax */ /* 0x10025FF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260C0; /* 0x10025FF4: je 0x100260c0 */
L_10025FFA:
    MEM32(eax) = 0x100260D0u; /* 0x10025FFA: mov dword ptr [eax], 0x100260d0 */
    MEM32(eax + 0x4) = esi; /* 0x10026000: mov dword ptr [eax + 4], esi */
L_10026003:
    ebx = MEM32(ebp + 0x14); /* 0x10026003: mov ebx, dword ptr [ebp + 0x14] */
    edx = edi; /* 0x10026006: mov edx, edi */
    MEM32(esi + 0x24) = eax; /* 0x10026008: mov dword ptr [esi + 0x24], eax */
    ecx = ebx; /* 0x1002600B: mov ecx, ebx */
    eax = MEM32(ebp + 0x8); /* 0x1002600D: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x18) = eax; /* 0x10026010: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x10026013: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(eax); /* 0x10026016: movzx eax, ax */
    MEM32(esi + 0x10) = eax; /* 0x10026019: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x1002601C: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(eax); /* 0x1002601F: movzx eax, ax */
    MEM32(esi + 0xC) = eax; /* 0x10026022: mov dword ptr [esi + 0xc], eax */
    MEM32(esi) = ebx; /* 0x10026025: mov dword ptr [esi], ebx */
    /* test ebx, ebx */ /* 0x10026027: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026033; /* 0x10026029: je 0x10026033 */
L_1002602B:
    eax = ecx + (-0x1); /* 0x1002602B: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002602E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1002602F: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002602B; /* 0x10026031: jne 0x1002602b */
L_10026033:
    eax = (uint32_t)LO16(edx); /* 0x10026033: movzx eax, dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10026036: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x10026038: mov dword ptr [ebp + 8], eax */
    MEM32(esi + 0x4) = eax; /* 0x1002603B: mov dword ptr [esi + 4], eax */
    PUSH32(esp, 0x24u); /* 0x1002603E: push 0x24 */
    edx = POP32_VAL(esp); /* 0x10026040: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10026041: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esi + 0x8) = edi; /* 0x10026043: mov dword ptr [esi + 8], edi */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10026046: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10026049: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002604B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002604D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1002604F: add ecx, 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x10026052: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10026055: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x10026057: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10026059: push eax */
    RECOMP_CALL(sub_10011683); /* 0x1002605A: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002605F: pop ecx */
    /* test eax, eax */ /* 0x10026060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260C7; /* 0x10026062: je 0x100260c7 */
L_10026064:
    ecx = MEM32(ebp + 0x8); /* 0x10026064: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x10026067: mov dword ptr [eax], ecx */
    ecx = eax + 0x4; /* 0x10026069: lea ecx, [eax + 4] */
L_1002606C:
    eax = (uint32_t)((int32_t)MEM32(esi + 0x4) * (int32_t)0x24u); /* 0x1002606C: imul eax, dword ptr [esi + 4], 0x24 */
    MEM32(esi + 0x20) = ecx; /* 0x10026070: mov dword ptr [esi + 0x20], ecx */
    PUSH32(esp, eax); /* 0x10026073: push eax */
    PUSH32(esp, edi); /* 0x10026074: push edi */
    PUSH32(esp, ecx); /* 0x10026075: push ecx */
    RECOMP_CALL(sub_10011533); /* 0x10026076: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002607B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1002607E: mov eax, edi */
    /* cmp MEM32(esi + 0x4), edi */ /* 0x10026080: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100260B9; /* 0x10026083: jbe 0x100260b9 */
L_10026085:
    edx = edi; /* 0x10026085: mov edx, edi */
L_10026087:
    /* test LO8(ebx), 1 */ /* 0x10026087: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100260B1; /* 0x1002608A: je 0x100260b1 */
L_1002608C:
    ecx = MEM32(esi + 0x20); /* 0x1002608C: mov ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1002608F: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10026091: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x10026092: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x24u; /* 0x10026095: add edx, 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0xC); /* 0x10026098: mov eax, dword ptr [esi + 0xc] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1002609B: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1002609B: shl eax, 8 */
    PUSH32(esp, edi); /* 0x1002609E: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1002609F: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x100260A1: mov dword ptr [ebp + 0xc], edx */
    PUSH32(esp, eax); /* 0x100260A4: push eax */
    PUSH32(esp, esi); /* 0x100260A5: push esi */
    RECOMP_CALL(sub_10025F9B); /* 0x100260A6: call 0x10025f9b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100260AB: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x100260AE: mov edx, dword ptr [ebp + 0xc] */
L_100260B1:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x100260B1: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x100260B1: shr ebx, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100260B3: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x100260B4: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10026087; /* 0x100260B7: jb 0x10026087 */
L_100260B9:
    edi = POP32_VAL(esp); /* 0x100260B9: pop edi */
    esi = POP32_VAL(esp); /* 0x100260BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100260BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100260BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x100260BD: ret 0x18 */
L_100260C0:
    eax = edi; /* 0x100260C0: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_10026003; /* 0x100260C2: jmp 0x10026003 */
L_100260C7:
    ecx = edi; /* 0x100260C7: mov ecx, edi */
    RECOMP_BACKEDGE();
    goto L_1002606C; /* 0x100260C9: jmp 0x1002606c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100260D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100260D0u);

    goto L_100260D0;
L_10025B54:
    eax = MEM32(ebx); /* 0x10025B54: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100260E4; /* 0x10025B57: je 0x100260e4 */
L_10025B5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B5D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10025B5E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10025B8E; /* 0x10025B5F: je 0x10025b8e */
L_10025B61:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + 0x4); /* 0x10025B61: add edx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebx + 0x4); /* 0x10025B64: add ebx, dword ptr [ebx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x10025B67: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x10025B6A: mov dword ptr [ebp - 8], edx */
    /* cmp edx, MEM32(0x100E0AA4) */ /* 0x10025B6D: cmp edx, dword ptr [0x100e0aa4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x100E0AA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10025B54; /* 0x10025B73: jb 0x10025b54 */
L_10025B75:
    RECOMP_CALL(sub_10025A7C); /* 0x10025B75: call 0x10025a7c */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x100E0AAC), 0 */ /* 0x10025B7A: cmp byte ptr [0x100e0aac], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052893; /* 0x10025B81: jne 0x10052893 */
L_10025B87:
    edi = POP32_VAL(esp); /* 0x10025B87: pop edi */
    esi = POP32_VAL(esp); /* 0x10025B88: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025B89: pop ebx */
    esp = ebp; /* 0x10025B8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10025B8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025B8D: ret  */
L_10025B8E:
    /* cmp MEM8(0x100E0AAC), LO8(eax) */ /* 0x10025B8E: cmp byte ptr [0x100e0aac], al */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025B61; /* 0x10025B94: je 0x10025b61 */
L_10025B96:
    goto L_1005273E; /* 0x10025B96: jmp 0x1005273e */
L_100260D0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x100260D0: inc esp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100260D1: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100260D2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2C100245u);
    eax = eax & 0x2C100245u; /* 0x100260D4: and eax, 0x2c100245 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100260D9: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100260DA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 0x33100245u */ /* 0x100260DC: cmp eax, 0x33100245 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33100245u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100260E1: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100260E2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100260E4:
    /* cmp MEM8(0x100E0AAC), 0 */ /* 0x100260E4: cmp byte ptr [0x100e0aac], 0 */
    _flag_a = (uint32_t)(MEM8(0x100E0AAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002611C; /* 0x100260EB: jne 0x1002611c */
L_100260ED:
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x100260ED: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002611C; /* 0x100260F1: je 0x1002611c */
L_100260F3:
    eax = (uint32_t)MEM16(ebx + 0x24); /* 0x100260F3: movzx eax, word ptr [ebx + 0x24] */
    PUSH32(esp, ecx); /* 0x100260F7: push ecx */
    PUSH32(esp, ecx); /* 0x100260F8: push ecx */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x100260F9: push dword ptr [ebx + 0x20] */
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x28u); /* 0x100260FC: imul esi, ecx, 0x28 */
    PUSH32(esp, eax); /* 0x100260FF: push eax */
    PUSH32(esp, ecx); /* 0x10026100: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x10026101: mov ecx, dword ptr [edi + 0x48] */
    PUSH32(esp, edi); /* 0x10026104: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10026105: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025FE0); /* 0x10026107: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x48); /* 0x1002610C: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(ebx + 0x8); /* 0x1002610F: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x10026112: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x8)); /* 0x10026115: mov edx, dword ptr [ebp - 8] */
    MEM32(esi + ecx + 0x14) = eax; /* 0x10026118: mov dword ptr [esi + ecx + 0x14], eax */
L_1002611C:
    esi = MEM32(ebx + 0x20); /* 0x1002611C: mov esi, dword ptr [ebx + 0x20] */
    /* test esi, esi */ /* 0x1002611F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025B61; /* 0x10026121: je 0x10025b61 */
L_10026127:
    edx = MEM32(edi + 0x44); /* 0x10026127: mov edx, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x1002612A: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(ebx + 0x24); /* 0x1002612D: movzx ecx, word ptr [ebx + 0x24] */
    eax = MEM32(ebx + 0x8); /* 0x10026131: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0xCu; /* 0x10026134: add dword ptr [ebp - 0x10], 0xc */
    _flag_k = FK_ADD;
    MEM32(edx + 0x8) = eax; /* 0x10026138: mov dword ptr [edx + 8], eax */
    eax = ecx; /* 0x1002613B: mov eax, ecx */
    MEM32(edx + 0x4) = eax; /* 0x1002613D: mov dword ptr [edx + 4], eax */
    MEM32(edx) = esi; /* 0x10026140: mov dword ptr [edx], esi */
L_10026142:
    edx = MEM32(ebp + (-0x8)); /* 0x10026142: mov edx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_10025B61; /* 0x10026145: jmp 0x10025b61 */
L_1005273E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005273E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x20; /* 0x10052740: lea esi, [ebx + 0x20] */
    eax = (uint32_t)((int32_t)ecx * (int32_t)0x28u); /* 0x10052743: imul eax, ecx, 0x28 */
    MEM32(ebp + (-0x14)) = edx; /* 0x10052746: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x10052749: mov dword ptr [ebp - 0xc], eax */
L_1005274C:
    /* cmp MEM32(esi), 0 */ /* 0x1005274C: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052775; /* 0x1005274F: je 0x10052775 */
L_10052751:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x10052751: movzx eax, word ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x10052755: push ecx */
    PUSH32(esp, ecx); /* 0x10052756: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x10052757: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10052759: push eax */
    PUSH32(esp, ecx); /* 0x1005275A: push ecx */
    ecx = MEM32(edi + 0x48); /* 0x1005275B: mov ecx, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x1005275E: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10052761: push edi */
    RECOMP_CALL(sub_10025FE0); /* 0x10052762: call 0x10025fe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x10052767: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x14)); /* 0x1005276A: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005276D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x28u; /* 0x1005276E: add dword ptr [ebp - 0xc], 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10052772: mov dword ptr [ebp - 4], ecx */
L_10052775:
    eax = (uint32_t)MEM16(ebx + 0x1E); /* 0x10052775: movzx eax, word ptr [ebx + 0x1e] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10052779: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1005277A: add esi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edx; /* 0x1005277D: mov dword ptr [ebp - 0x14], edx */
    /* cmp edx, eax */ /* 0x10052780: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026142; /* 0x10052782: jge 0x10026142 */
L_10052788:
    RECOMP_BACKEDGE();
    goto L_1005274C; /* 0x10052788: jmp 0x1005274c */
L_10052893:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10052893: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x18), edx */ /* 0x10052895: cmp dword ptr [edi + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10025B87; /* 0x10052898: jbe 0x10025b87 */
L_1005289E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005289E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100528A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100528A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x14), esi */ /* 0x100528A2: cmp dword ptr [edi + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100528F8; /* 0x100528A5: jbe 0x100528f8 */
L_100528A7:
    ebx = MEM32(edi + 0x48); /* 0x100528A7: mov ebx, dword ptr [edi + 0x48] */
    eax = MEM32(edi + 0x44); /* 0x100528AA: mov eax, dword ptr [edi + 0x44] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x100528AD: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x100528B0: mov dword ptr [ebp - 0xc], eax */
    ebx = MEM32(ecx + ebx + 0xC); /* 0x100528B3: mov ebx, dword ptr [ecx + ebx + 0xc] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x100528B7: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100528BA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100528BC:
    edi = MEM32(ebp + (-0x10)); /* 0x100528BC: mov edi, dword ptr [ebp - 0x10] */
    /* cmp edi, MEM32(ebx + eax + 0x4) */ /* 0x100528BF: cmp edi, dword ptr [ebx + eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x18)); /* 0x100528C3: mov edi, dword ptr [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100528DC; /* 0x100528C6: jne 0x100528dc */
L_100528C8:
    eax = MEM32(ebp + (-0x14)); /* 0x100528C8: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0xC)); /* 0x100528CB: mov edi, dword ptr [ebp - 0xc] */
    eax = MEM32(ecx + eax); /* 0x100528CE: mov eax, dword ptr [ecx + eax] */
    /* test MEM32(ebx + edi), eax */ /* 0x100528D1: test dword ptr [ebx + edi], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edi)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x18)); /* 0x100528D4: mov edi, dword ptr [ebp - 0x18] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100528E7; /* 0x100528D7: jne 0x100528e7 */
L_100528D9:
    eax = MEM32(edi + 0x44); /* 0x100528D9: mov eax, dword ptr [edi + 0x44] */
L_100528DC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100528DC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x100528DD: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi + 0x14) */ /* 0x100528E0: cmp esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100528F8; /* 0x100528E3: jae 0x100528f8 */
L_100528E5:
    RECOMP_BACKEDGE();
    goto L_100528BC; /* 0x100528E5: jmp 0x100528bc */
L_100528E7:
    ebx = MEM32(edi + 0x44); /* 0x100528E7: mov ebx, dword ptr [edi + 0x44] */
    eax = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x100528EA: imul eax, esi, 0xc */
    esi = MEM32(ebp + (-0x14)); /* 0x100528ED: mov esi, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + ebx + 0x8); /* 0x100528F0: mov eax, dword ptr [eax + ebx + 8] */
    MEM32(esi + ecx + 0x14) = eax; /* 0x100528F4: mov dword ptr [esi + ecx + 0x14], eax */
L_100528F8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100528F8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x100528F9: add ecx, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(edi + 0x18) */ /* 0x100528FC: cmp edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10025B87; /* 0x100528FF: jae 0x10025b87 */
L_10052905:
    RECOMP_BACKEDGE();
    goto L_100528A0; /* 0x10052905: jmp 0x100528a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002614A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002614Au);

L_1002614A:
    PUSH32(esp, ebx); /* 0x1002614A: push ebx */
    PUSH32(esp, esi); /* 0x1002614B: push esi */
    PUSH32(esp, edi); /* 0x1002614C: push edi */
    ebx = edx; /* 0x1002614D: mov ebx, edx */
    edi = 0x811C9DC5u; /* 0x1002614F: mov edi, 0x811c9dc5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10026154: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026156:
    eax = (uint32_t)MEM8(esi + ecx); /* 0x10026156: movzx eax, byte ptr [esi + ecx] */
    _flag_a = (uint32_t)((eax ^ edi)); _flag_b = (uint32_t)((eax ^ edi));
    eax = eax ^ edi; /* 0x1002615A: xor eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (uint32_t)((int32_t)eax * (int32_t)0x01000193u); /* 0x1002615C: imul edi, eax, 0x1000193 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10026162: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x10026163: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10026156; /* 0x10026166: jb 0x10026156 */
L_10026168:
    eax = edi; /* 0x10026168: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1002616A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1002616C: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x1002616E: pop edi */
    esi = POP32_VAL(esp); /* 0x1002616F: pop esi */
    eax = edx; /* 0x10026170: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x10026172: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026173: ret  */
    RECOMP_REGS_OUT();
}

void sub_10026174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026174u);

L_10026174:
    PUSH32(esp, ebp); /* 0x10026174: push ebp */
    ebp = esp; /* 0x10026175: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10026177: push esi */
    esi = ecx; /* 0x10026178: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1002617A: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi); /* 0x1002617D: mov edx, dword ptr [esi] */
    RECOMP_CALL(sub_1002614A); /* 0x1002617F: call 0x1002614a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10026184: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10026185: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x10026188: mov ecx, esi */
    RECOMP_CALL(sub_10024F4D); /* 0x1002618A: call 0x10024f4d */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1002618F: pop esi */
    /* test eax, eax */ /* 0x10026190: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100261A4; /* 0x10026192: je 0x100261a4 */
L_10026194:
    edx = MEM32(ebp + 0xC); /* 0x10026194: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10026197: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100261A0; /* 0x10026199: je 0x100261a0 */
L_1002619B:
    ecx = MEM32(eax + 0x8); /* 0x1002619B: mov ecx, dword ptr [eax + 8] */
    MEM32(edx) = ecx; /* 0x1002619E: mov dword ptr [edx], ecx */
L_100261A0:
    ebp = POP32_VAL(esp); /* 0x100261A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100261A1: ret 8 */
L_100261A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100261A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100261A0; /* 0x100261A6: jmp 0x100261a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100265EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100265EEu);

    goto L_100265EE;
L_100265E1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100265E1: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100265E2: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x100265E4: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1002661C; /* 0x100265E7: jl 0x1002661c */
L_100265E9:
    ebx = MEM32(ebp + (-0x10)); /* 0x100265E9: mov ebx, dword ptr [ebp - 0x10] */
    goto L_1002665F; /* 0x100265EC: jmp 0x1002665f */
L_100265EE:
    PUSH32(esp, ebp); /* 0x100265EE: push ebp */
    ebp = esp; /* 0x100265EF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100265F1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100265F4: push ebx */
    PUSH32(esp, esi); /* 0x100265F5: push esi */
    PUSH32(esp, edi); /* 0x100265F6: push edi */
    esi = ecx; /* 0x100265F7: mov esi, ecx */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x100265F9: mov byte ptr [ebp - 5], 0 */
    PUSH32(esp, 4); /* 0x100265FD: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100265FF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10026601: pop eax */
    edx = MEM32(esi + 0x30); /* 0x10026602: mov edx, dword ptr [esi + 0x30] */
    MEM32(ebp + (-0xC)) = edx; /* 0x10026605: mov dword ptr [ebp - 0xc], edx */
L_10026608:
    ebx = edx + 0x8; /* 0x10026608: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x1002660B: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1002660E: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_10026662; /* 0x10026611: jl 0x10026662 */
L_10026613:
    ebx = MEM32(edx); /* 0x10026613: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10026615: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x28), edx */ /* 0x10026617: cmp dword ptr [esi + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_100265E9; /* 0x1002661A: jle 0x100265e9 */
L_1002661C:
    /* cmp MEM32(ebx), 0 */ /* 0x1002661C: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100265E1; /* 0x1002661F: jne 0x100265e1 */
L_10026621:
    ecx = MEM32(ebp + 0x8); /* 0x10026621: mov ecx, dword ptr [ebp + 8] */
    eax = edx + edi; /* 0x10026624: lea eax, [edx + edi] */
    MEM32(ecx + 0x64) = eax; /* 0x10026627: mov dword ptr [ecx + 0x64], eax */
    eax = MEM32(esi + 0x40); /* 0x1002662A: mov eax, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002662D: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10026630: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10026632: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10026636: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100536D6; /* 0x10026638: jne 0x100536d6 */
L_1002663E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1002663E: add edi, edx */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5)) = (uint8_t)(1); /* 0x10026640: mov byte ptr [ebp - 5], 1 */
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x10026644: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10026653; /* 0x10026647: jl 0x10026653 */
L_10026649:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10026649: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x40; /* 0x1002664B: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002664E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1002664F: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10026653:
    ebx = MEM32(ebp + (-0x10)); /* 0x10026653: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10026656: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x10026659: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x1002665B: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_1002665F:
    edx = MEM32(ebp + (-0xC)); /* 0x1002665F: mov edx, dword ptr [ebp - 0xc] */
L_10026662:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x10026662: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100536DE; /* 0x10026666: je 0x100536de */
L_1002666C:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x1002666C: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(edx + 0x4); /* 0x10026670: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, 4); /* 0x10026673: push 4 */
    MEM32(ebp + (-0xC)) = edx; /* 0x10026675: mov dword ptr [ebp - 0xc], edx */
    eax = POP32_VAL(esp); /* 0x10026678: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10026608; /* 0x10026679: je 0x10026608 */
L_1002667B:
    eax = edi; /* 0x1002667B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1002667D: pop edi */
    esi = POP32_VAL(esp); /* 0x1002667E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002667F: pop ebx */
    esp = ebp; /* 0x10026680: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026682: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10026683: ret 4 */
L_100536D6:
    PUSH32(esp, 4); /* 0x100536D6: push 4 */
    eax = POP32_VAL(esp); /* 0x100536D8: pop eax */
    RECOMP_BACKEDGE();
    goto L_100265E1; /* 0x100536D9: jmp 0x100265e1 */
L_100536DE:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x100536DE: push -2 */
    ecx = POP32_VAL(esp); /* 0x100536E0: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100536E1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x100536E4: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x28); /* 0x100536E8: add edi, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = edx + 0x4; /* 0x100536EB: lea ebx, [edx + 4] */
    /* cmp MEM32(ebx), 0 */ /* 0x100536EE: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053762; /* 0x100536F1: jne 0x10053762 */
L_100536F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100536F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100536F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100536F7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x100536F8: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x100536FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053762; /* 0x100536FE: jne 0x10053762 */
L_10053700:
    eax = MEM32(esi + 0x28); /* 0x10053700: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10053703: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10053705: push 4 */
    edx = POP32_VAL(esp); /* 0x10053707: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10053708: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1005370A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1005370D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1005370F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10053711: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10053712: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10053717: mov ecx, eax */
    eax = MEM32(esi + 0x28); /* 0x10053719: mov eax, dword ptr [esi + 0x28] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1005371C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1005371C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1005371F: push eax */
    PUSH32(esp, 0); /* 0x10053720: push 0 */
    PUSH32(esp, ecx); /* 0x10053722: push ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10053723: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10011533); /* 0x10053726: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1005372B: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1005372D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10053732: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10053734: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x10053737: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005374A; /* 0x10053739: je 0x1005374a */
L_1005373B:
    eax = MEM32(ebp + (-0x14)); /* 0x1005373B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1005373E: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0xFFFFFFFFu; /* 0x10053742: or dword ptr [ecx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x10053746: mov dword ptr [ecx], eax */
    goto L_1005374C; /* 0x10053748: jmp 0x1005374c */
L_1005374A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005374A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005374C:
    edx = MEM32(esi + 0x3C); /* 0x1005374C: mov edx, dword ptr [esi + 0x3c] */
    /* cmp edx, MEM32(esi + 0x38) */ /* 0x1005374F: cmp edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005375D; /* 0x10053752: jge 0x1005375d */
L_10053754:
    eax = MEM32(esi + 0x34); /* 0x10053754: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + edx * 4) = ecx; /* 0x10053757: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1; /* 0x1005375A: inc dword ptr [esi + 0x3c] */
    _flag_k = FK_INC;
L_1005375D:
    { uint32_t _tmp = MEM32(ebx); /* 0x1005375D: xchg dword ptr [ebx], ecx */
      MEM32(ebx) = ecx;
      ecx = _tmp; }
    edx = MEM32(ebp + (-0xC)); /* 0x1005375F: mov edx, dword ptr [ebp - 0xc] */
L_10053762:
    /* cmp MEM32(ebx), 1 */ /* 0x10053762: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002666C; /* 0x10053765: jne 0x1002666c */
L_1005376B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1005376B: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0x1007A46Cu; /* 0x1005376F: mov dword ptr [ebp - 0x18], 0x1007a46c */
L_10053776:
    ecx = ebp + (-0x24); /* 0x10053776: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10068D76); /* 0x10053779: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 1 */ /* 0x1005377E: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053776; /* 0x10053781: je 0x10053776 */
L_10053783:
    edx = MEM32(ebp + (-0xC)); /* 0x10053783: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_1002666C; /* 0x10053786: jmp 0x1002666c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026686u);

L_10026686:
    PUSH32(esp, ebp); /* 0x10026686: push ebp */
    ebp = esp; /* 0x10026687: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10026689: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1002668C: push ecx */
    PUSH32(esp, ebx); /* 0x1002668D: push ebx */
    PUSH32(esp, esi); /* 0x1002668E: push esi */
    PUSH32(esp, edi); /* 0x1002668F: push edi */
    edi = ecx; /* 0x10026690: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10026692: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10026697: mov ebx, eax */
    eax = edi + 0x38; /* 0x10026699: lea eax, [edi + 0x38] */
    PUSH32(esp, eax); /* 0x1002669C: push eax */
    MEM32(esp + 0x10) = eax; /* 0x1002669D: mov dword ptr [esp + 0x10], eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x100266A1: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100266A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053665; /* 0x100266A9: jne 0x10053665 */
L_100266AF:
    ecx = MEM32(edi); /* 0x100266AF: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100266B1: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100266B4: push edi */
    eax = MEM32(ecx); /* 0x100266B5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x100266B7: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100266BA: mov esi, eax */
L_100266BC:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x100266BC: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053683; /* 0x100266C0: jne 0x10053683 */
L_100266C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100266C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x24; /* 0x100266C8: lea eax, [edi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100266CB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100266CC: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edi); /* 0x100266D0: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x90)); /* 0x100266D2: push dword ptr [esi + 0x90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x100266D8: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10026817); /* 0x100266DB: call 0x10026817 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x100266E0: mov eax, dword ptr [edi] */
    edx = MEM32(eax + 0x1B8); /* 0x100266E2: mov edx, dword ptr [eax + 0x1b8] */
    eax = MEM32(edi); /* 0x100266E8: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x1B4), edx */ /* 0x100266EA: cmp dword ptr [eax + 0x1b4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1B4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100266FE; /* 0x100266F0: jne 0x100266fe */
L_100266F2:
    eax = MEM32(edi); /* 0x100266F2: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x100266F4: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005369E; /* 0x100266F8: jg 0x1005369e */
L_100266FE:
    ecx = MEM32(esp + 0xC); /* 0x100266FE: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, esi); /* 0x10026702: push esi */
    RECOMP_CALL(sub_100265EE); /* 0x10026703: call 0x100265ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x10026708: push 0 */
    PUSH32(esp, 1); /* 0x1002670A: push 1 */
    ecx = esi; /* 0x1002670C: mov ecx, esi */
    RECOMP_CALL(sub_100247D7); /* 0x1002670E: call 0x100247d7 */
    RECOMP_FLAGS_IN();
L_10026713:
    edi = POP32_VAL(esp); /* 0x10026713: pop edi */
    eax = esi; /* 0x10026714: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10026716: pop esi */
    ebx = POP32_VAL(esp); /* 0x10026717: pop ebx */
    esp = ebp; /* 0x10026718: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002671A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002671B: ret 8 */
L_10053665:
    esi = eax + (-0xBC); /* 0x10053665: lea esi, [eax - 0xbc] */
    /* test esi, esi */ /* 0x1005366B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100266AF; /* 0x1005366D: je 0x100266af */
L_10053673:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10053673: push dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x10053676: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10053678: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1005367A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1005367B: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100266BC; /* 0x1005367E: jmp 0x100266bc */
L_10053683:
    ecx = ebx + (-0x4); /* 0x10053683: lea ecx, [ebx - 4] */
    MEM8(esi + 0xAC) = (uint8_t)(1); /* 0x10053686: mov byte ptr [esi + 0xac], 1 */
    MEM32(esi + 0xB0) = ecx; /* 0x1005368D: mov dword ptr [esi + 0xb0], ecx */
    MEM32(ecx + 0xA4) = esi; /* 0x10053693: mov dword ptr [ecx + 0xa4], esi */
    RECOMP_BACKEDGE();
    goto L_100266C6; /* 0x10053699: jmp 0x100266c6 */
L_1005369E:
    PUSH32(esp, esi); /* 0x1005369E: push esi */
    ecx = edi + 0x38; /* 0x1005369F: lea ecx, [edi + 0x38] */
    RECOMP_CALL(sub_100265EE); /* 0x100536A2: call 0x100265ee */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x100536A7: mov ecx, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x100536A9: push 1 */
    RECOMP_CALL(sub_1007433B); /* 0x100536AB: call 0x1007433b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100536B0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026713; /* 0x100536B2: je 0x10026713 */
L_100536B8:
    /* test ebx, ebx */ /* 0x100536B8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100536C1; /* 0x100536BA: je 0x100536c1 */
L_100536BC:
    ecx = MEM32(ebx + 0x18); /* 0x100536BC: mov ecx, dword ptr [ebx + 0x18] */
    goto L_100536C7; /* 0x100536BF: jmp 0x100536c7 */
L_100536C1:
    eax = MEM32(edi + 0x4); /* 0x100536C1: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x8); /* 0x100536C4: mov ecx, dword ptr [eax + 8] */
L_100536C7:
    eax = MEM32(esi); /* 0x100536C7: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x100536C9: push 0 */
    PUSH32(esp, ecx); /* 0x100536CB: push ecx */
    ecx = esi; /* 0x100536CC: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x100536CE: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10026713; /* 0x100536D1: jmp 0x10026713 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026817(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026817u);

L_10026817:
    PUSH32(esp, ebp); /* 0x10026817: push ebp */
    ebp = esp; /* 0x10026818: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1002681A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1002681D: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1002681F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10026822: push ebx */
    PUSH32(esp, esi); /* 0x10026823: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10026824: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x10026826: mov dword ptr [ebp - 8], edx */
    eax = MEM32(edx + 0x8); /* 0x10026829: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002682C: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1002682D: push edi */
    edi = esi; /* 0x1002682E: mov edi, esi */
    eax = eax + ecx * 4; /* 0x10026830: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x10026833: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026837: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x10026838: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026864; /* 0x1002683A: jne 0x10026864 */
L_1002683C:
    ebx = MEM32(edx + 0x4); /* 0x1002683C: mov ebx, dword ptr [edx + 4] */
    eax = ecx; /* 0x1002683F: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10026841: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x10026841: shr eax, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10026844: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10026847: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10026847: shl eax, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1002684A: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1002684C: mov dword ptr [ebp + 8], eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1002684F: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x1002684F: shl esi, cl */
    eax = MEM32(ebx); /* 0x10026851: mov eax, dword ptr [ebx] */
    /* test esi, eax */ /* 0x10026853: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051FB5; /* 0x10026855: jne 0x10051fb5 */
L_1002685B:
    ecx = MEM32(edx + 0x4); /* 0x1002685B: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x1002685E: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ecx) | esi)); _flag_b = (uint32_t)((MEM32(ecx) | esi));
    MEM32(ecx) = MEM32(ecx) | esi; /* 0x10026861: lock or dword ptr [ecx], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026864:
    eax = edi; /* 0x10026864: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10026866: pop edi */
    esi = POP32_VAL(esp); /* 0x10026867: pop esi */
    ebx = POP32_VAL(esp); /* 0x10026868: pop ebx */
    esp = ebp; /* 0x10026869: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002686B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002686C: ret 4 */
L_10051FB5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x10051FB5: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x10051FB9: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0xC)) = 0x1007A487u; /* 0x10051FBB: mov dword ptr [ebp - 0xc], 0x1007a487 */
    /* test esi, eax */ /* 0x10051FC2: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002685B; /* 0x10051FC4: je 0x1002685b */
L_10051FCA:
    ecx = ebp + (-0x18); /* 0x10051FCA: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_10068D76); /* 0x10051FCD: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x10051FD2: mov eax, dword ptr [ebx] */
    /* test esi, eax */ /* 0x10051FD4: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051FCA; /* 0x10051FD6: jne 0x10051fca */
L_10051FD8:
    edx = MEM32(ebp + (-0x8)); /* 0x10051FD8: mov edx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1002685B; /* 0x10051FDB: jmp 0x1002685b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002686F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002686Fu);

L_1002686F:
    PUSH32(esp, ebp); /* 0x1002686F: push ebp */
    ebp = esp; /* 0x10026870: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10026872: push ecx */
    PUSH32(esp, esi); /* 0x10026873: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10026874: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10026877: push edi */
    edi = ecx; /* 0x10026878: mov edi, ecx */
    PUSH32(esp, esi); /* 0x1002687A: push esi */
    ecx = edi + 0x48; /* 0x1002687B: lea ecx, [edi + 0x48] */
    RECOMP_CALL(sub_10026817); /* 0x1002687E: call 0x10026817 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x5C); /* 0x10026883: mov ecx, dword ptr [edi + 0x5c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10026886: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (7u) _cf = (((esi) >> 25) & 1u); /* 0x10026888: shl esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 7u; /* 0x10026888: shl esi, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002688B: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + ecx), eax */ /* 0x1002688C: cmp dword ptr [esi + ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi + ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005380B; /* 0x1002688F: je 0x1005380b */
L_10026895:
    edi = POP32_VAL(esp); /* 0x10026895: pop edi */
    esi = POP32_VAL(esp); /* 0x10026896: pop esi */
    ecx = POP32_VAL(esp); /* 0x10026897: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10026898: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10026899: ret 4 */
L_1005380B:
    ecx = MEM32(edi + 0x5C); /* 0x1005380B: mov ecx, dword ptr [edi + 0x5c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005380E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10053810: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10053812: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10026895; /* 0x10053816: jmp 0x10026895 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002689C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002689Cu);

L_1002689C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002689C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1002689E: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x100268A0: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x100268A3: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x100268A6: mov dword ptr [ecx + 0xc], eax */
    eax = ecx; /* 0x100268A9: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100268AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100268AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100268ACu);

L_100268AC:
    PUSH32(esp, 0x10u); /* 0x100268AC: push 0x10 */
    PUSH32(esp, 0x100268E0u); /* 0x100268AE: push 0x100268e0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100268B3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100268B8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100268BA: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x100268BD: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x100268C0: mov dword ptr [ebp - 4], esi */
L_100268C3:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x100268C3: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100268FC; /* 0x100268C6: jge 0x100268fc */
L_100268C8:
    ecx = MEM32(ebp + 0x8); /* 0x100268C8: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x100268CB: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x100268CE: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x100268D1: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100268D4: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100268D5: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_100268C3; /* 0x100268D8: jmp 0x100268c3 */
L_100268FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100268FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100268FE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x100268FF: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10026902: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10026916); /* 0x10026909: call 0x10026916 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000EDC3); /* 0x1002690E: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10026913: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10026916(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026916u);

L_10026916:
    /* test eax, eax */ /* 0x10026916: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B4D6; /* 0x10026918: je 0x1005b4d6 */
L_1002691E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002691E: ret  */
L_1005B4D6:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1005B4D6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1005B4D9: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005B4DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005B4DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009E2DC); /* 0x1005B4E0: call 0x1009e2dc */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002691E; /* 0x1005B4E5: jmp 0x1002691e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002691F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002691Fu);

L_1002691F:
    PUSH32(esp, ecx); /* 0x1002691F: push ecx */
    PUSH32(esp, esi); /* 0x10026920: push esi */
    PUSH32(esp, edi); /* 0x10026921: push edi */
    edi = ecx; /* 0x10026922: mov edi, ecx */
    eax = MEM32(edi); /* 0x10026924: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10026926: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100258DA); /* 0x10026929: call 0x100258da */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1002692E: mov edx, eax */
    eax = MEM32(edi); /* 0x10026930: mov eax, dword ptr [edi] */
    esi = MEM32(eax + 0x8); /* 0x10026932: mov esi, dword ptr [eax + 8] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10026935: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053423; /* 0x10026938: je 0x10053423 */
L_1002693E:
    /* cmp MEM32(eax + 0x4), 0xFFFFFFFFu */ /* 0x1002693E: cmp dword ptr [eax + 4], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002694D; /* 0x10026942: jne 0x1002694d */
L_10026944:
    /* cmp esi, edx */ /* 0x10026944: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002694A; /* 0x10026946: ja 0x1002694a */
L_10026948:
    esi = edx; /* 0x10026948: mov esi, edx */
L_1002694A:
    MEM32(eax + 0x4) = esi; /* 0x1002694A: mov dword ptr [eax + 4], esi */
L_1002694D:
    edi = POP32_VAL(esp); /* 0x1002694D: pop edi */
    esi = POP32_VAL(esp); /* 0x1002694E: pop esi */
    ecx = POP32_VAL(esp); /* 0x1002694F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026950: ret  */
L_10053423:
    ecx = MEM32(eax + 0x4); /* 0x10053423: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, esi */ /* 0x10053426: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053437; /* 0x10053428: jne 0x10053437 */
L_1005342A:
    MEM32(eax + 0x4) = edx; /* 0x1005342A: mov dword ptr [eax + 4], edx */
    eax = MEM32(edi); /* 0x1005342D: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = edx; /* 0x1005342F: mov dword ptr [eax + 8], edx */
    RECOMP_BACKEDGE();
    goto L_1002694D; /* 0x10053432: jmp 0x1002694d */
L_10053437:
    /* cmp ecx, edx */ /* 0x10053437: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1005343D; /* 0x10053439: jb 0x1005343d */
L_1005343B:
    ecx = edx; /* 0x1005343B: mov ecx, edx */
L_1005343D:
    MEM32(eax + 0x8) = ecx; /* 0x1005343D: mov dword ptr [eax + 8], ecx */
    RECOMP_BACKEDGE();
    goto L_1002694D; /* 0x10053440: jmp 0x1002694d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026951(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026951u);

L_10026951:
    PUSH32(esp, 0x2Cu); /* 0x10026951: push 0x2c */
    eax = 0x100DBD68u; /* 0x10026953: mov eax, 0x100dbd68 */
    RECOMP_CALL(sub_1001FB2C); /* 0x10026958: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1002695D: mov edi, ecx */
    PUSH32(esp, 0x28u); /* 0x1002695F: push 0x28 */
    RECOMP_CALL(sub_1000EE11); /* 0x10026961: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026966: pop ecx */
    ebx = eax; /* 0x10026967: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10026969: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x28u); /* 0x1002696B: push 0x28 */
    PUSH32(esp, 0x100E0674u); /* 0x1002696D: push 0x100e0674 */
    PUSH32(esp, ebx); /* 0x10026972: push ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x10026973: mov dword ptr [ebp - 0x14], ebx */
    MEM32(edi) = ebx; /* 0x10026976: mov dword ptr [edi], ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x10026978: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1000F594); /* 0x1002697B: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10026980: add esp, 0xc */
    _flag_k = FK_ADD;
L_10026983:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x10026983: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10053348; /* 0x10026986: jb 0x10053348 */
L_1002698C:
    PUSH32(esp, 1); /* 0x1002698C: push 1 */
    ecx = edi; /* 0x1002698E: mov ecx, edi */
    RECOMP_CALL(sub_10024CB7); /* 0x10026990: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x10026995: push 2 */
    ecx = edi; /* 0x10026997: mov ecx, edi */
    esi = eax; /* 0x10026999: mov esi, eax */
    RECOMP_CALL(sub_10024CB7); /* 0x1002699B: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100269A0: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100533C0; /* 0x100269A3: jne 0x100533c0 */
L_100269A9:
    ecx = edi; /* 0x100269A9: mov ecx, edi */
    RECOMP_CALL(sub_1002691F); /* 0x100269AB: call 0x1002691f */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x100269B0: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100269B5: ret 8 */
L_10053348:
    edx = MEM32(ebp + 0xC); /* 0x10053348: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x1005334B: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x1005334E: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + (-0x4)); /* 0x10053350: mov ecx, dword ptr [eax - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10053353: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x10053356: mov dword ptr [edx], eax */
    edx = MEM32(eax + (-0x4)); /* 0x10053358: mov edx, dword ptr [eax - 4] */
    /* cmp ecx, 9 */ /* 0x1005335B: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10053389; /* 0x1005335E: jbe 0x10053389 */
L_10053360:
    RECOMP_CALL(sub_100754C8); /* 0x10053360: call 0x100754c8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x10053365: mov dword ptr [ebp + 8], eax */
    ecx = ebp + (-0x20); /* 0x10053368: lea ecx, [ebp - 0x20] */
    eax = ebp + 0x8; /* 0x1005336B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1005336E: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1005336F: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = 0x10067674u; /* 0x10053374: mov dword ptr [ebp - 0x20], 0x10067674 */
    eax = ebp + (-0x20); /* 0x1005337B: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0x100DD0C0u); /* 0x1005337E: push 0x100dd0c0 */
L_10053383:
    PUSH32(esp, eax); /* 0x10053383: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10053384: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10053389:
    RECOMP_CALL(sub_100754D8); /* 0x10053389: call 0x100754d8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1005338E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100533B7; /* 0x10053390: jne 0x100533b7 */
L_10053392:
    RECOMP_CALL(sub_100754C8); /* 0x10053392: call 0x100754c8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x10053397: mov dword ptr [ebp + 8], eax */
    ecx = ebp + (-0x2C); /* 0x1005339A: lea ecx, [ebp - 0x2c] */
    eax = ebp + 0x8; /* 0x1005339D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100533A0: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x100533A1: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = 0x10067714u; /* 0x100533A6: mov dword ptr [ebp - 0x2c], 0x10067714 */
    eax = ebp + (-0x2C); /* 0x100533AD: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x100DD088u); /* 0x100533B0: push 0x100dd088 */
    RECOMP_BACKEDGE();
    goto L_10053383; /* 0x100533B5: jmp 0x10053383 */
L_100533B7:
    MEM32(ebx + ecx * 4) = edx; /* 0x100533B7: mov dword ptr [ebx + ecx*4], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100533BA: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10026983; /* 0x100533BB: jmp 0x10026983 */
L_100533C0:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100533C0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100269A9; /* 0x100533C3: je 0x100269a9 */
L_100533C9:
    /* cmp esi, eax */ /* 0x100533C9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100269A9; /* 0x100533CB: jae 0x100269a9 */
L_100533D1:
    ecx = ebp + (-0x38); /* 0x100533D1: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1009DD55); /* 0x100533D4: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = 0x100676B4u; /* 0x100533D9: mov dword ptr [ebp - 0x38], 0x100676b4 */
    eax = ebp + (-0x38); /* 0x100533E0: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x100DD0A4u); /* 0x100533E3: push 0x100dd0a4 */
    RECOMP_BACKEDGE();
    goto L_10053383; /* 0x100533E8: jmp 0x10053383 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100269B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100269B8u);

L_100269B8:
    PUSH32(esp, ebp); /* 0x100269B8: push ebp */
    ebp = esp; /* 0x100269B9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100269BB: push ecx */
    PUSH32(esp, ecx); /* 0x100269BC: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100269BD: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x100269C0: lea eax, [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100269C3: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x100269C6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100269C9: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100269CA: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10026951); /* 0x100269CD: call 0x10026951 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100269D2: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x100269D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100269D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100269D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100269D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100269D9u);

L_100269D9:
    PUSH32(esp, ebp); /* 0x100269D9: push ebp */
    ebp = esp; /* 0x100269DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100269DC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100269DF: push esi */
    PUSH32(esp, 2); /* 0x100269E0: push 2 */
    esi = ecx; /* 0x100269E2: mov esi, ecx */
    RECOMP_CALL(sub_10024CB7); /* 0x100269E4: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100269E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005344C; /* 0x100269EB: je 0x1005344c */
L_100269F1:
    PUSH32(esp, 8); /* 0x100269F1: push 8 */
    ecx = esi; /* 0x100269F3: mov ecx, esi */
    RECOMP_CALL(sub_10024CB7); /* 0x100269F5: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x100269FA: pop esi */
    /* test eax, eax */ /* 0x100269FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053445; /* 0x100269FD: je 0x10053445 */
L_10026A03:
    esp = ebp; /* 0x10026A03: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026A05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026A06: ret  */
L_10053445:
    eax = MEM32(0x10067988); /* 0x10053445: mov eax, dword ptr [0x10067988] */
    goto L_10053451; /* 0x1005344A: jmp 0x10053451 */
L_1005344C:
    eax = MEM32(0x10067970); /* 0x1005344C: mov eax, dword ptr [0x10067970] */
L_10053451:
    MEM32(ebp + (-0x4)) = eax; /* 0x10053451: mov dword ptr [ebp - 4], eax */
    ecx = ebp + (-0x10); /* 0x10053454: lea ecx, [ebp - 0x10] */
    eax = ebp + (-0x4); /* 0x10053457: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1005345A: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1005345B: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD088u); /* 0x10053460: push 0x100dd088 */
    eax = ebp + (-0x10); /* 0x10053465: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x10067714u; /* 0x10053468: mov dword ptr [ebp - 0x10], 0x10067714 */
    PUSH32(esp, eax); /* 0x1005346F: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10053470: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10053475u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026A07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026A07u);

L_10026A07:
    PUSH32(esp, 0xCu); /* 0x10026A07: push 0xc */
    eax = 0x100DBAF2u; /* 0x10026A09: mov eax, 0x100dbaf2 */
    RECOMP_CALL(sub_100149A4); /* 0x10026A0E: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = ecx; /* 0x10026A13: mov eax, ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10026A15: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_100269D9); /* 0x10026A18: call 0x100269d9 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0328u; /* 0x10026A1D: mov ecx, 0x100e0328 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10026A22: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026A25: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10026A2A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10026A2C: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(0x100E0ACC); /* 0x10026A2F: mov eax, dword ptr [0x100e0acc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10026A34: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E0ACC) = eax; /* 0x10026A35: mov dword ptr [0x100e0acc], eax */
    /* cmp eax, 1 */ /* 0x10026A3A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026A66; /* 0x10026A3D: jne 0x10026a66 */
L_10026A3F:
    /* cmp MEM32(0x100E0AD8), ebx */ /* 0x10026A3F: cmp dword ptr [0x100e0ad8], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026A4C; /* 0x10026A45: jne 0x10026a4c */
L_10026A47:
    RECOMP_CALL(sub_10026E58); /* 0x10026A47: call 0x10026e58 */
    RECOMP_FLAGS_IN();
L_10026A4C:
    esi = 0x80000000u; /* 0x10026A4C: mov esi, 0x80000000 */
    /* test MEM32(0x100DFDDC), esi */ /* 0x10026A51: test dword ptr [0x100dfddc], esi */
    _flag_a = (uint32_t)(MEM32(0x100DFDDC)); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10026A66; /* 0x10026A57: jne 0x10026a66 */
L_10026A59:
    RECOMP_CALL(sub_10026F29); /* 0x10026A59: call 0x10026f29 */
    RECOMP_FLAGS_IN();
    eax = 0x100DFDDCu; /* 0x10026A5E: mov eax, 0x100dfddc */
    _flag_a = (uint32_t)((MEM32(eax) | esi)); _flag_b = (uint32_t)((MEM32(eax) | esi));
    MEM32(eax) = MEM32(eax) | esi; /* 0x10026A63: lock or dword ptr [eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026A66:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10026A66: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x210u); /* 0x10026A6A: push 0x210 */
    MEM32(0x100E0328) = ebx; /* 0x10026A6F: mov dword ptr [0x100e0328], ebx */
    RECOMP_CALL(sub_1000EE11); /* 0x10026A75: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10026A7A: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10026A7C: pop ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x10026A7D: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = 1; /* 0x10026A80: mov dword ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x10026A87: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026AB8; /* 0x10026A89: je 0x10026ab8 */
L_10026A8B:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10026A8B: push dword ptr [ebp - 0x10] */
    ecx = edi + 0x8; /* 0x10026A8E: lea ecx, [edi + 8] */
    MEM32(edi) = 0x10026AC0u; /* 0x10026A91: mov dword ptr [edi], 0x10026ac0 */
    RECOMP_CALL(sub_10024A40); /* 0x10026A97: call 0x10024a40 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0x10026AE0u; /* 0x10026A9C: mov dword ptr [edi], 0x10026ae0 */
    MEM32(edi + 0x8) = 0x1002420Cu; /* 0x10026AA2: mov dword ptr [edi + 8], 0x1002420c */
L_10026AA9:
    /* test edi, edi */ /* 0x10026AA9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026AB0; /* 0x10026AAB: je 0x10026ab0 */
L_10026AAD:
    ebx = edi + 0x8; /* 0x10026AAD: lea ebx, [edi + 8] */
L_10026AB0:
    eax = ebx; /* 0x10026AB0: mov eax, ebx */
    RECOMP_CALL(sub_100149D7); /* 0x10026AB2: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026AB7: ret  */
L_10026AB8:
    edi = ebx; /* 0x10026AB8: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_10026AA9; /* 0x10026ABA: jmp 0x10026aa9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026AC0u);

L_10026AC0:
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10026AC0: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026AC3: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10026AC5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x10026AC6: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10026AC8: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026ACB: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10026ACD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x10026ACE: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10026AD0: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026AD3: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10026AD5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x10026AD6: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10026AD8: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = HI8(eax), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026ADB: adc ah, bh */
      SET_HI8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, 2); /* 0x10026ADD: push 2 */
    { uint32_t _aa = MEM8(eax + 0x5A), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026ADF: adc byte ptr [eax + 0x5a], dh */
      MEM8(eax + 0x5A) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10026AE2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_BD127281; /* 0x10026AE4: jmp 0xbd127281 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_BD127281: RECOMP_ITAIL(0xBD127281u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026AE0u);

L_10026AE0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_10026B3C; /* 0x10026AE0: jo 0x10026b3c */
L_10026AE2:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10026AE2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_BD127281; /* 0x10026AE4: jmp 0xbd127281 */
L_10026B3C:
    PUSH32(esp, esi); /* 0x10026B3C: push esi */
    RECOMP_ICALL(edi); /* 0x10026B3D: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10026BC0u); /* 0x10026B3F: push 0x10026bc0 */
    PUSH32(esp, esi); /* 0x10026B44: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x10026B45: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(edi); /* 0x10026B48: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x10026B4A: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x10026B4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026B9C; /* 0x10026B4F: je 0x10026b9c */
L_10026B51:
    /* test eax, eax */ /* 0x10026B51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026B9C; /* 0x10026B53: je 0x10026b9c */
L_10026B55:
    edx = MEM32(0x100E0330); /* 0x10026B55: mov edx, dword ptr [0x100e0330] */
    ecx = edx; /* 0x10026B5B: mov ecx, edx */
    PUSH32(esp, 0x10026BD8u); /* 0x10026B5D: push 0x10026bd8 */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x10026B62: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x10026B64: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1001FB64u); /* 0x10026B66: push 0x1001fb64 */
    MEM32(0x100E0A94) = ecx; /* 0x10026B6B: mov dword ptr [0x100e0a94], ecx */
    MEM32(0x100E0A98) = edx; /* 0x10026B71: mov dword ptr [0x100e0a98], edx */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10026B77: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10026B7D: push eax */
    RECOMP_ICALL(edi); /* 0x10026B7E: call edi */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10026B80: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10026B82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051FEB; /* 0x10026B84: je 0x10051feb */
L_10026B8A:
    eax = MEM32(0x100E0330); /* 0x10026B8A: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10026B8F: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10026B91: pop edi */
    MEM32(0x100E0A90) = eax; /* 0x10026B92: mov dword ptr [0x100e0a90], eax */
    esi = POP32_VAL(esp); /* 0x10026B97: pop esi */
    esp = ebp; /* 0x10026B98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026B9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026B9B: ret  */
L_10026B9C:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10026B9C: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10051FF7; /* 0x10026BA2: jmp 0x10051ff7 */
L_10051FEB:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10051FEB: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051FF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051FFB; /* 0x10051FF3: jg 0x10051ffb */
L_10051FF5:
    goto L_10052003; /* 0x10051FF5: jmp 0x10052003 */
L_10051FF7:
    /* test eax, eax */ /* 0x10051FF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052003; /* 0x10051FF9: jle 0x10052003 */
L_10051FFB:
    eax = (uint32_t)LO16(eax); /* 0x10051FFB: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10051FFE: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052003:
    PUSH32(esp, eax); /* 0x10052003: push eax */
    ecx = ebp + (-0x14); /* 0x10052004: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052007: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x1005200C: push 0x100dcf40 */
    eax = ebp + (-0x14); /* 0x10052011: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10052014: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052015: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005201Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_BD127281: RECOMP_ITAIL(0xBD127281u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026B1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026B1Cu);

L_10026B1C:
    PUSH32(esp, ebp); /* 0x10026B1C: push ebp */
    ebp = esp; /* 0x10026B1D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10026B1F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10026B22: push esi */
    PUSH32(esp, edi); /* 0x10026B23: push edi */
    PUSH32(esp, 0x1001FB64u); /* 0x10026B24: push 0x1001fb64 */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10026B29: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x100E501C); /* 0x10026B2F: mov edi, dword ptr [0x100e501c] */
    esi = eax; /* 0x10026B35: mov esi, eax */
    PUSH32(esp, 0x10026BA8u); /* 0x10026B37: push 0x10026ba8 */
    PUSH32(esp, esi); /* 0x10026B3C: push esi */
    RECOMP_ICALL(edi); /* 0x10026B3D: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10026BC0u); /* 0x10026B3F: push 0x10026bc0 */
    PUSH32(esp, esi); /* 0x10026B44: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x10026B45: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(edi); /* 0x10026B48: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x10026B4A: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x10026B4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026B9C; /* 0x10026B4F: je 0x10026b9c */
L_10026B51:
    /* test eax, eax */ /* 0x10026B51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026B9C; /* 0x10026B53: je 0x10026b9c */
L_10026B55:
    edx = MEM32(0x100E0330); /* 0x10026B55: mov edx, dword ptr [0x100e0330] */
    ecx = edx; /* 0x10026B5B: mov ecx, edx */
    PUSH32(esp, 0x10026BD8u); /* 0x10026B5D: push 0x10026bd8 */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x10026B62: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x10026B64: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1001FB64u); /* 0x10026B66: push 0x1001fb64 */
    MEM32(0x100E0A94) = ecx; /* 0x10026B6B: mov dword ptr [0x100e0a94], ecx */
    MEM32(0x100E0A98) = edx; /* 0x10026B71: mov dword ptr [0x100e0a98], edx */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10026B77: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10026B7D: push eax */
    RECOMP_ICALL(edi); /* 0x10026B7E: call edi */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10026B80: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10026B82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051FEB; /* 0x10026B84: je 0x10051feb */
L_10026B8A:
    eax = MEM32(0x100E0330); /* 0x10026B8A: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10026B8F: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10026B91: pop edi */
    MEM32(0x100E0A90) = eax; /* 0x10026B92: mov dword ptr [0x100e0a90], eax */
    esi = POP32_VAL(esp); /* 0x10026B97: pop esi */
    esp = ebp; /* 0x10026B98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026B9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026B9B: ret  */
L_10026B9C:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10026B9C: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10051FF7; /* 0x10026BA2: jmp 0x10051ff7 */
L_10051FEB:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10051FEB: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051FF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051FFB; /* 0x10051FF3: jg 0x10051ffb */
L_10051FF5:
    goto L_10052003; /* 0x10051FF5: jmp 0x10052003 */
L_10051FF7:
    /* test eax, eax */ /* 0x10051FF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052003; /* 0x10051FF9: jle 0x10052003 */
L_10051FFB:
    eax = (uint32_t)LO16(eax); /* 0x10051FFB: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10051FFE: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052003:
    PUSH32(esp, eax); /* 0x10052003: push eax */
    ecx = ebp + (-0x14); /* 0x10052004: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052007: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x1005200C: push 0x100dcf40 */
    eax = ebp + (-0x14); /* 0x10052011: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10052014: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052015: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005201Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026BA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026BA8u);

L_10026BA8:
    PUSH32(esp, ebx); /* 0x10026BA8: push ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026C00; /* 0x10026BA9: je 0x10026c00 */
L_10026BAC:
    PUSH32(esp, 0x64616572u); /* 0x10026BAC: push 0x64616572 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026BB1: inc edi */
    _flag_k = FK_INC;
    if ((_cf != 0)) goto L_10026C23; /* 0x10026BB2: jb 0x10026c23 */
L_10026BB4:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C26; /* 0x10026BB4: jne 0x10026c26 */
L_10026BB6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10026BB6: inc ecx */
    _flag_k = FK_INC;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x69) * (int32_t)0x7974u)); /* 0x10026BB7: imul bp, word ptr [esi + 0x69], 0x7974 */
    _flag_a = (uint32_t)(MEM8(eax + 0x54746547)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x54746547) = (uint8_t)(MEM8(eax + 0x54746547) + LO8(edx)); /* 0x10026BBE: add byte ptr [eax + 0x54746547], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x64616572u); /* 0x10026BC4: push 0x64616572 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026BC9: inc edi */
    _flag_k = FK_INC;
    if ((_cf != 0)) goto L_10026C3B; /* 0x10026BCA: jb 0x10026c3b */
L_10026BCC:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C3E; /* 0x10026BCC: jne 0x10026c3e */
L_10026BCE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10026BCE: inc ecx */
    _flag_k = FK_INC;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x69) * (int32_t)0x7974u)); /* 0x10026BCF: imul bp, word ptr [esi + 0x69], 0x7974 */
    _flag_a = (uint32_t)(MEM8(eax + 0x43746547)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x43746547) = (uint8_t)(MEM8(eax + 0x43746547) + LO8(edx)); /* 0x10026BD6: add byte ptr [eax + 0x43746547], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C50; /* 0x10026BDC: jne 0x10026c50 */
L_10026BDE:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C45; /* 0x10026BDE: jb 0x10026c45 */
L_10026BE0:
    /* outsb: no port I/O under Win32 */ /* 0x10026BE0: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026C33; /* 0x10026BE1: je 0x10026c33 */
L_10026BE3:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C54; /* 0x10026BE3: jb 0x10026c54 */
L_10026BE5:
    void_lift_trap(0x10026BE5u, "arpl word ptr [ebp + 0x73], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026C59; /* 0x10026BE8: jae 0x10026c59 */
L_10026BEA:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C3A; /* 0x10026BEA: jb 0x10026c3a */
L_10026BEC:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C5B; /* 0x10026BEC: jne 0x10026c5b */
L_10026BEE:
    void_lift_trap(0x10026BEEu, "bound esp, qword ptr [ebp + 0x72]");
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10026BF1: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10026BF4; /* 0x10026BF2: js 0x10026bf4 */
L_10026BF4:
    PUSH32(esp, ebp); /* 0x10026BF4: push ebp */
    ebp = esp; /* 0x10026BF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x10026BF7: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10026BFD: mov eax, dword ptr [0x100df7b8] */
    goto L_10026C02; /* falls through past a gap */
L_10026C00:
    _flag_a = (uint32_t)((eax | 0x89C53310u)); _flag_b = (uint32_t)((eax | 0x89C53310u));
    eax = eax | 0x89C53310u; /* 0x10026C00: or eax, 0x89c53310 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10026C05; /* falls through past a gap */
L_10026C02:
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10026C02: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10026C04: mov dword ptr [ebp - 4], eax */
    goto L_10026C07; /* falls through past a gap */
L_10026C05:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10026C05: inc ebp */
    _flag_k = FK_INC;
    _df = 1; /* 0x10026C06: cld  */
L_10026C07:
    PUSH32(esp, esi); /* 0x10026C07: push esi */
    eax = ebp + (-0x120); /* 0x10026C08: lea eax, [ebp - 0x120] */
    MEM32(ebp + (-0x120)) = 0x114u; /* 0x10026C0E: mov dword ptr [ebp - 0x120], 0x114 */
    PUSH32(esp, eax); /* 0x10026C18: push eax */
    RECOMP_ICALL(MEM32(0x100E519C)); /* 0x10026C19: call dword ptr [0x100e519c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10026C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100524B1; /* 0x10026C21: je 0x100524b1 */
    goto L_10026C27; /* falls through past a gap */
L_10026C23:
    SET_HI8(ebx, MEM8(eax + (-0x7A74FFFE))); /* 0x10026C23: mov bh, byte ptr [eax - 0x7a74fffe] */
    goto L_10026C29; /* falls through past a gap */
L_10026C26:
    _flag_a = (uint32_t)(MEM8(ebx + (-0x11B7B))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x11B7B)) = (uint8_t)(MEM8(ebx + (-0x11B7B)) + LO8(ecx)); /* 0x10026C26: add byte ptr [ebx - 0x11b7b], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026C2C; /* falls through past a gap */
L_10026C27:
    eax = MEM32(ebp + (-0x11C)); /* 0x10026C27: mov eax, dword ptr [ebp - 0x11c] */
    goto L_10026C2D; /* falls through past a gap */
L_10026C29:
    /* in: no port I/O under Win32 */ /* 0x10026C29: in al, 0xfe */
    RECOMP_ITAIL(0x10026C2Bu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026C2C:
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x6)); goto _ljump; }
L_10026C2D:
    PUSH32(esp, 6); /* 0x10026C2D: push 6 */
    esi = POP32_VAL(esp); /* 0x10026C2F: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x10026C30: sub eax, 5 */
    _flag_k = FK_CMP;
L_10026C33:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052473; /* 0x10026C33: je 0x10052473 */
L_10026C39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C39: dec eax */
    _flag_k = FK_DEC;
L_10026C3A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10026C52; /* 0x10026C3A: jne 0x10026c52 */
    goto L_10026C3C; /* falls through past a gap */
L_10026C3B:
    PUSH32(esp, _seg_ss); /* 0x10026C3B: push ss */
L_10026C3C:
    eax = MEM32(ebp + (-0x118)); /* 0x10026C3C: mov eax, dword ptr [ebp - 0x118] */
    goto L_10026C42; /* falls through past a gap */
L_10026C3E:
    RECOMP_ICALL(0x94026C41u); /* 0x10026C3E: call 0x94026c41 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_10026C43; /* falls through past a gap */
L_10026C42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10026C42: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_10026C45; /* falls through past a gap */
L_10026C43:
    RECOMP_ICALL(0x29867B48u); /* 0x10026C43: call 0x29867b48 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_10026C48; /* falls through past a gap */
L_10026C45:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052464; /* 0x10026C45: je 0x10052464 */
    goto L_10026C4B; /* falls through past a gap */
L_10026C48:
    eax = 0x0F480002u; /* 0x10026C48: mov eax, 0xf480002 */
    goto L_10026C4D; /* falls through past a gap */
L_10026C4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C4B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052455; /* 0x10026C4C: je 0x10052455 */
    goto L_10026C52; /* falls through past a gap */
L_10026C4D:
    /* test MEM8(ebx), LO8(eax) */ /* 0x10026C4D: test byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x35890002u; /* 0x10026C4F: mov eax, 0x35890002 */
    goto L_10026C54; /* falls through past a gap */
L_10026C50:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x10026C50: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026C52:
    MEM32(0x100E03E4) = esi; /* 0x10026C52: mov dword ptr [0x100e03e4], esi */
    goto L_10026C58; /* falls through past a gap */
L_10026C54:
    /* in: no port I/O under Win32 */ /* 0x10026C54: in al, 3 */
    PUSH32(esp, _seg_cs); /* 0x10026C56: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026C57: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026C59; /* falls through past a gap */
L_10026C58:
    RECOMP_CALL(sub_10026B1C); /* 0x10026C58: call 0x10026b1c */
    RECOMP_FLAGS_IN();
    goto L_10026C5D; /* falls through past a gap */
L_10026C59:
    edi = 0x39FFFFFEu; /* 0x10026C59: mov edi, 0x39fffffe */
    goto L_10026C5E; /* falls through past a gap */
L_10026C5D:
    /* cmp MEM32(0x100E03E4), esi */ /* 0x10026C5D: cmp dword ptr [0x100e03e4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026C63; /* falls through past a gap */
L_10026C5E:
    _flag_a = (uint32_t)((eax ^ 0x100E03E4u)); _flag_b = (uint32_t)((eax ^ 0x100E03E4u));
    eax = eax ^ 0x100E03E4u; /* 0x10026C5E: xor eax, 0x100e03e4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026C63:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10026C6A; /* 0x10026C63: jl 0x10026c6a */
L_10026C65:
    RECOMP_CALL(sub_10026C80); /* 0x10026C65: call 0x10026c80 */
    RECOMP_FLAGS_IN();
L_10026C6A:
    ecx = MEM32(ebp + (-0x4)); /* 0x10026C6A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10026C6D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10026C6F: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10026C70: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10026C75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026C78: ret  */
L_10026C79:
    /* cmp eax, 4 */ /* 0x10026C79: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026C58; /* 0x10026C7C: jge 0x10026c58 */
L_10026C7E:
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x10026C7E: jmp 0x10026c6a */
L_10052455:
    MEM32(0x100E03E4) = 4; /* 0x10052455: mov dword ptr [0x100e03e4], 4 */
    RECOMP_BACKEDGE();
    goto L_10026C58; /* 0x1005245F: jmp 0x10026c58 */
L_10052464:
    MEM32(0x100E03E4) = 3; /* 0x10052464: mov dword ptr [0x100e03e4], 3 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005246E: jmp 0x10026c6a */
L_10052473:
    eax = MEM32(ebp + (-0x118)); /* 0x10052473: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10052479: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100524AA; /* 0x1005247C: je 0x100524aa */
L_1005247E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005247E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005249D; /* 0x1005247F: je 0x1005249d */
L_10052481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10052481: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10052493; /* 0x10052482: jne 0x10052493 */
L_10052484:
    MEM32(0x100E03E4) = 2; /* 0x10052484: mov dword ptr [0x100e03e4], 2 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005248E: jmp 0x10026c6a */
L_10052493:
    eax = MEM32(0x100E03E4); /* 0x10052493: mov eax, dword ptr [0x100e03e4] */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x10052498: jmp 0x10026c79 */
L_1005249D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005249D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005249F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E03E4) = eax; /* 0x100524A0: mov dword ptr [0x100e03e4], eax */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x100524A5: jmp 0x10026c79 */
L_100524AA:
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E03E4) = MEM32(0x100E03E4) & 0; /* 0x100524AA: and dword ptr [0x100e03e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100524B1:
    ecx = ebp + (-0x12C); /* 0x100524B1: lea ecx, [ebp - 0x12c] */
    RECOMP_CALL(sub_1009DD55); /* 0x100524B7: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFD8u); /* 0x100524BC: push 0x100dcfd8 */
    eax = ebp + (-0x12C); /* 0x100524C1: lea eax, [ebp - 0x12c] */
    MEM32(ebp + (-0x12C)) = 0x100677B4u; /* 0x100524C7: mov dword ptr [ebp - 0x12c], 0x100677b4 */
    PUSH32(esp, eax); /* 0x100524D1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100524D2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100524D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    L_10026C5B: RECOMP_ITAIL(0x10026C5Bu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026BC0u);

L_10026BC0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026BC0: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026C18; /* 0x10026BC1: je 0x10026c18 */
L_10026BC4:
    PUSH32(esp, 0x64616572u); /* 0x10026BC4: push 0x64616572 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026BC9: inc edi */
    _flag_k = FK_INC;
    if ((_cf != 0)) goto L_10026C3B; /* 0x10026BCA: jb 0x10026c3b */
L_10026BCC:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C3E; /* 0x10026BCC: jne 0x10026c3e */
L_10026BCE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10026BCE: inc ecx */
    _flag_k = FK_INC;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x69) * (int32_t)0x7974u)); /* 0x10026BCF: imul bp, word ptr [esi + 0x69], 0x7974 */
    _flag_a = (uint32_t)(MEM8(eax + 0x43746547)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x43746547) = (uint8_t)(MEM8(eax + 0x43746547) + LO8(edx)); /* 0x10026BD6: add byte ptr [eax + 0x43746547], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C50; /* 0x10026BDC: jne 0x10026c50 */
L_10026BDE:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C45; /* 0x10026BDE: jb 0x10026c45 */
L_10026BE0:
    /* outsb: no port I/O under Win32 */ /* 0x10026BE0: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026C33; /* 0x10026BE1: je 0x10026c33 */
L_10026BE3:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C54; /* 0x10026BE3: jb 0x10026c54 */
L_10026BE5:
    void_lift_trap(0x10026BE5u, "arpl word ptr [ebp + 0x73], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026C59; /* 0x10026BE8: jae 0x10026c59 */
L_10026BEA:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026C3A; /* 0x10026BEA: jb 0x10026c3a */
L_10026BEC:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C5B; /* 0x10026BEC: jne 0x10026c5b */
L_10026BEE:
    void_lift_trap(0x10026BEEu, "bound esp, qword ptr [ebp + 0x72]");
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10026BF1: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10026BF4; /* 0x10026BF2: js 0x10026bf4 */
L_10026BF4:
    PUSH32(esp, ebp); /* 0x10026BF4: push ebp */
    ebp = esp; /* 0x10026BF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x10026BF7: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10026BFD: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10026C02: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10026C04: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10026C07: push esi */
    eax = ebp + (-0x120); /* 0x10026C08: lea eax, [ebp - 0x120] */
    MEM32(ebp + (-0x120)) = 0x114u; /* 0x10026C0E: mov dword ptr [ebp - 0x120], 0x114 */
L_10026C18:
    PUSH32(esp, eax); /* 0x10026C18: push eax */
    RECOMP_ICALL(MEM32(0x100E519C)); /* 0x10026C19: call dword ptr [0x100e519c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10026C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100524B1; /* 0x10026C21: je 0x100524b1 */
L_10026C27:
    eax = MEM32(ebp + (-0x11C)); /* 0x10026C27: mov eax, dword ptr [ebp - 0x11c] */
    PUSH32(esp, 6); /* 0x10026C2D: push 6 */
    esi = POP32_VAL(esp); /* 0x10026C2F: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x10026C30: sub eax, 5 */
    _flag_k = FK_CMP;
L_10026C33:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052473; /* 0x10026C33: je 0x10052473 */
L_10026C39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C39: dec eax */
    _flag_k = FK_DEC;
L_10026C3A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10026C52; /* 0x10026C3A: jne 0x10026c52 */
    goto L_10026C3C; /* falls through past a gap */
L_10026C3B:
    PUSH32(esp, _seg_ss); /* 0x10026C3B: push ss */
L_10026C3C:
    eax = MEM32(ebp + (-0x118)); /* 0x10026C3C: mov eax, dword ptr [ebp - 0x118] */
    goto L_10026C42; /* falls through past a gap */
L_10026C3E:
    RECOMP_ICALL(0x94026C41u); /* 0x10026C3E: call 0x94026c41 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_10026C43; /* falls through past a gap */
L_10026C42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10026C42: sub eax, 0 */
    _flag_k = FK_CMP;
    goto L_10026C45; /* falls through past a gap */
L_10026C43:
    RECOMP_ICALL(0x29867B48u); /* 0x10026C43: call 0x29867b48 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_10026C48; /* falls through past a gap */
L_10026C45:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052464; /* 0x10026C45: je 0x10052464 */
    goto L_10026C4B; /* falls through past a gap */
L_10026C48:
    eax = 0x0F480002u; /* 0x10026C48: mov eax, 0xf480002 */
    goto L_10026C4D; /* falls through past a gap */
L_10026C4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C4B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052455; /* 0x10026C4C: je 0x10052455 */
    goto L_10026C52; /* falls through past a gap */
L_10026C4D:
    /* test MEM8(ebx), LO8(eax) */ /* 0x10026C4D: test byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x35890002u; /* 0x10026C4F: mov eax, 0x35890002 */
    goto L_10026C54; /* falls through past a gap */
L_10026C50:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x10026C50: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026C52:
    MEM32(0x100E03E4) = esi; /* 0x10026C52: mov dword ptr [0x100e03e4], esi */
    goto L_10026C58; /* falls through past a gap */
L_10026C54:
    /* in: no port I/O under Win32 */ /* 0x10026C54: in al, 3 */
    PUSH32(esp, _seg_cs); /* 0x10026C56: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026C57: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026C59; /* falls through past a gap */
L_10026C58:
    RECOMP_CALL(sub_10026B1C); /* 0x10026C58: call 0x10026b1c */
    RECOMP_FLAGS_IN();
    goto L_10026C5D; /* falls through past a gap */
L_10026C59:
    edi = 0x39FFFFFEu; /* 0x10026C59: mov edi, 0x39fffffe */
    goto L_10026C5E; /* falls through past a gap */
L_10026C5D:
    /* cmp MEM32(0x100E03E4), esi */ /* 0x10026C5D: cmp dword ptr [0x100e03e4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026C63; /* falls through past a gap */
L_10026C5E:
    _flag_a = (uint32_t)((eax ^ 0x100E03E4u)); _flag_b = (uint32_t)((eax ^ 0x100E03E4u));
    eax = eax ^ 0x100E03E4u; /* 0x10026C5E: xor eax, 0x100e03e4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026C63:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10026C6A; /* 0x10026C63: jl 0x10026c6a */
L_10026C65:
    RECOMP_CALL(sub_10026C80); /* 0x10026C65: call 0x10026c80 */
    RECOMP_FLAGS_IN();
L_10026C6A:
    ecx = MEM32(ebp + (-0x4)); /* 0x10026C6A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10026C6D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10026C6F: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10026C70: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10026C75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026C78: ret  */
L_10026C79:
    /* cmp eax, 4 */ /* 0x10026C79: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026C58; /* 0x10026C7C: jge 0x10026c58 */
L_10026C7E:
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x10026C7E: jmp 0x10026c6a */
L_10052455:
    MEM32(0x100E03E4) = 4; /* 0x10052455: mov dword ptr [0x100e03e4], 4 */
    RECOMP_BACKEDGE();
    goto L_10026C58; /* 0x1005245F: jmp 0x10026c58 */
L_10052464:
    MEM32(0x100E03E4) = 3; /* 0x10052464: mov dword ptr [0x100e03e4], 3 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005246E: jmp 0x10026c6a */
L_10052473:
    eax = MEM32(ebp + (-0x118)); /* 0x10052473: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10052479: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100524AA; /* 0x1005247C: je 0x100524aa */
L_1005247E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005247E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005249D; /* 0x1005247F: je 0x1005249d */
L_10052481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10052481: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10052493; /* 0x10052482: jne 0x10052493 */
L_10052484:
    MEM32(0x100E03E4) = 2; /* 0x10052484: mov dword ptr [0x100e03e4], 2 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005248E: jmp 0x10026c6a */
L_10052493:
    eax = MEM32(0x100E03E4); /* 0x10052493: mov eax, dword ptr [0x100e03e4] */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x10052498: jmp 0x10026c79 */
L_1005249D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005249D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005249F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E03E4) = eax; /* 0x100524A0: mov dword ptr [0x100e03e4], eax */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x100524A5: jmp 0x10026c79 */
L_100524AA:
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E03E4) = MEM32(0x100E03E4) & 0; /* 0x100524AA: and dword ptr [0x100e03e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100524B1:
    ecx = ebp + (-0x12C); /* 0x100524B1: lea ecx, [ebp - 0x12c] */
    RECOMP_CALL(sub_1009DD55); /* 0x100524B7: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFD8u); /* 0x100524BC: push 0x100dcfd8 */
    eax = ebp + (-0x12C); /* 0x100524C1: lea eax, [ebp - 0x12c] */
    MEM32(ebp + (-0x12C)) = 0x100677B4u; /* 0x100524C7: mov dword ptr [ebp - 0x12c], 0x100677b4 */
    PUSH32(esp, eax); /* 0x100524D1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100524D2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100524D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026C5B: RECOMP_ITAIL(0x10026C5Bu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026BD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026BD8u);

L_10026BD8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026BD8: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026C1F; /* 0x10026BD9: je 0x10026c1f */
L_10026BDC:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C50; /* 0x10026BDC: jne 0x10026c50 */
L_10026BDE:
    if ((_cf != 0)) goto L_10026C45; /* 0x10026BDE: jb 0x10026c45 */
L_10026BE0:
    /* outsb: no port I/O under Win32 */ /* 0x10026BE0: outsb dx, byte ptr [esi] */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026C33; /* 0x10026BE1: je 0x10026c33 */
L_10026BE3:
    if ((_cf != 0)) goto L_10026C54; /* 0x10026BE3: jb 0x10026c54 */
L_10026BE5:
    void_lift_trap(0x10026BE5u, "arpl word ptr [ebp + 0x73], sp");
    if ((_cf == 0)) goto L_10026C59; /* 0x10026BE8: jae 0x10026c59 */
L_10026BEA:
    if ((_cf != 0)) goto L_10026C3A; /* 0x10026BEA: jb 0x10026c3a */
L_10026BEC:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026C5B; /* 0x10026BEC: jne 0x10026c5b */
L_10026BEE:
    void_lift_trap(0x10026BEEu, "bound esp, qword ptr [ebp + 0x72]");
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10026BF1: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10026BF4; /* 0x10026BF2: js 0x10026bf4 */
L_10026BF4:
    PUSH32(esp, ebp); /* 0x10026BF4: push ebp */
    ebp = esp; /* 0x10026BF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x10026BF7: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10026BFD: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10026C02: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10026C04: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10026C07: push esi */
    eax = ebp + (-0x120); /* 0x10026C08: lea eax, [ebp - 0x120] */
    MEM32(ebp + (-0x120)) = 0x114u; /* 0x10026C0E: mov dword ptr [ebp - 0x120], 0x114 */
    PUSH32(esp, eax); /* 0x10026C18: push eax */
    RECOMP_ICALL(MEM32(0x100E519C)); /* 0x10026C19: call dword ptr [0x100e519c] */
    RECOMP_FLAGS_IN();
L_10026C1F:
    /* test eax, eax */ /* 0x10026C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100524B1; /* 0x10026C21: je 0x100524b1 */
L_10026C27:
    eax = MEM32(ebp + (-0x11C)); /* 0x10026C27: mov eax, dword ptr [ebp - 0x11c] */
    PUSH32(esp, 6); /* 0x10026C2D: push 6 */
    esi = POP32_VAL(esp); /* 0x10026C2F: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x10026C30: sub eax, 5 */
    _flag_k = FK_CMP;
L_10026C33:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052473; /* 0x10026C33: je 0x10052473 */
L_10026C39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C39: dec eax */
    _flag_k = FK_DEC;
L_10026C3A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10026C52; /* 0x10026C3A: jne 0x10026c52 */
L_10026C3C:
    eax = MEM32(ebp + (-0x118)); /* 0x10026C3C: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10026C42: sub eax, 0 */
    _flag_k = FK_CMP;
L_10026C45:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10052464; /* 0x10026C45: je 0x10052464 */
L_10026C4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C4B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052455; /* 0x10026C4C: je 0x10052455 */
    goto L_10026C52; /* falls through past a gap */
L_10026C50:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x10026C50: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026C52:
    MEM32(0x100E03E4) = esi; /* 0x10026C52: mov dword ptr [0x100e03e4], esi */
    goto L_10026C58; /* falls through past a gap */
L_10026C54:
    /* in: no port I/O under Win32 */ /* 0x10026C54: in al, 3 */
    PUSH32(esp, _seg_cs); /* 0x10026C56: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026C57: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026C59; /* falls through past a gap */
L_10026C58:
    RECOMP_CALL(sub_10026B1C); /* 0x10026C58: call 0x10026b1c */
    RECOMP_FLAGS_IN();
    goto L_10026C5D; /* falls through past a gap */
L_10026C59:
    edi = 0x39FFFFFEu; /* 0x10026C59: mov edi, 0x39fffffe */
    goto L_10026C5E; /* falls through past a gap */
L_10026C5D:
    /* cmp MEM32(0x100E03E4), esi */ /* 0x10026C5D: cmp dword ptr [0x100e03e4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026C63; /* falls through past a gap */
L_10026C5E:
    _flag_a = (uint32_t)((eax ^ 0x100E03E4u)); _flag_b = (uint32_t)((eax ^ 0x100E03E4u));
    eax = eax ^ 0x100E03E4u; /* 0x10026C5E: xor eax, 0x100e03e4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10026C63:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10026C6A; /* 0x10026C63: jl 0x10026c6a */
L_10026C65:
    RECOMP_CALL(sub_10026C80); /* 0x10026C65: call 0x10026c80 */
    RECOMP_FLAGS_IN();
L_10026C6A:
    ecx = MEM32(ebp + (-0x4)); /* 0x10026C6A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10026C6D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10026C6F: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10026C70: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10026C75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026C78: ret  */
L_10026C79:
    /* cmp eax, 4 */ /* 0x10026C79: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026C58; /* 0x10026C7C: jge 0x10026c58 */
L_10026C7E:
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x10026C7E: jmp 0x10026c6a */
L_10052455:
    MEM32(0x100E03E4) = 4; /* 0x10052455: mov dword ptr [0x100e03e4], 4 */
    RECOMP_BACKEDGE();
    goto L_10026C58; /* 0x1005245F: jmp 0x10026c58 */
L_10052464:
    MEM32(0x100E03E4) = 3; /* 0x10052464: mov dword ptr [0x100e03e4], 3 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005246E: jmp 0x10026c6a */
L_10052473:
    eax = MEM32(ebp + (-0x118)); /* 0x10052473: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10052479: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100524AA; /* 0x1005247C: je 0x100524aa */
L_1005247E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005247E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005249D; /* 0x1005247F: je 0x1005249d */
L_10052481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10052481: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10052493; /* 0x10052482: jne 0x10052493 */
L_10052484:
    MEM32(0x100E03E4) = 2; /* 0x10052484: mov dword ptr [0x100e03e4], 2 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005248E: jmp 0x10026c6a */
L_10052493:
    eax = MEM32(0x100E03E4); /* 0x10052493: mov eax, dword ptr [0x100e03e4] */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x10052498: jmp 0x10026c79 */
L_1005249D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005249D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005249F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E03E4) = eax; /* 0x100524A0: mov dword ptr [0x100e03e4], eax */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x100524A5: jmp 0x10026c79 */
L_100524AA:
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E03E4) = MEM32(0x100E03E4) & 0; /* 0x100524AA: and dword ptr [0x100e03e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100524B1:
    ecx = ebp + (-0x12C); /* 0x100524B1: lea ecx, [ebp - 0x12c] */
    RECOMP_CALL(sub_1009DD55); /* 0x100524B7: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFD8u); /* 0x100524BC: push 0x100dcfd8 */
    eax = ebp + (-0x12C); /* 0x100524C1: lea eax, [ebp - 0x12c] */
    MEM32(ebp + (-0x12C)) = 0x100677B4u; /* 0x100524C7: mov dword ptr [ebp - 0x12c], 0x100677b4 */
    PUSH32(esp, eax); /* 0x100524D1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100524D2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100524D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026C5B: RECOMP_ITAIL(0x10026C5Bu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026BF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026BF4u);

L_10026BF4:
    PUSH32(esp, ebp); /* 0x10026BF4: push ebp */
    ebp = esp; /* 0x10026BF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x10026BF7: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10026BFD: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10026C02: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10026C04: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10026C07: push esi */
    eax = ebp + (-0x120); /* 0x10026C08: lea eax, [ebp - 0x120] */
    MEM32(ebp + (-0x120)) = 0x114u; /* 0x10026C0E: mov dword ptr [ebp - 0x120], 0x114 */
    PUSH32(esp, eax); /* 0x10026C18: push eax */
    RECOMP_ICALL(MEM32(0x100E519C)); /* 0x10026C19: call dword ptr [0x100e519c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10026C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100524B1; /* 0x10026C21: je 0x100524b1 */
L_10026C27:
    eax = MEM32(ebp + (-0x11C)); /* 0x10026C27: mov eax, dword ptr [ebp - 0x11c] */
    PUSH32(esp, 6); /* 0x10026C2D: push 6 */
    esi = POP32_VAL(esp); /* 0x10026C2F: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x10026C30: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052473; /* 0x10026C33: je 0x10052473 */
L_10026C39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C39: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10026C52; /* 0x10026C3A: jne 0x10026c52 */
L_10026C3C:
    eax = MEM32(ebp + (-0x118)); /* 0x10026C3C: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10026C42: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052464; /* 0x10026C45: je 0x10052464 */
L_10026C4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10026C4B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10052455; /* 0x10026C4C: je 0x10052455 */
L_10026C52:
    MEM32(0x100E03E4) = esi; /* 0x10026C52: mov dword ptr [0x100e03e4], esi */
L_10026C58:
    RECOMP_CALL(sub_10026B1C); /* 0x10026C58: call 0x10026b1c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100E03E4), esi */ /* 0x10026C5D: cmp dword ptr [0x100e03e4], esi */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10026C6A; /* 0x10026C63: jl 0x10026c6a */
L_10026C65:
    RECOMP_CALL(sub_10026C80); /* 0x10026C65: call 0x10026c80 */
    RECOMP_FLAGS_IN();
L_10026C6A:
    ecx = MEM32(ebp + (-0x4)); /* 0x10026C6A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10026C6D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10026C6F: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10026C70: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10026C75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026C78: ret  */
L_10026C79:
    /* cmp eax, 4 */ /* 0x10026C79: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10026C58; /* 0x10026C7C: jge 0x10026c58 */
L_10026C7E:
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x10026C7E: jmp 0x10026c6a */
L_10052455:
    MEM32(0x100E03E4) = 4; /* 0x10052455: mov dword ptr [0x100e03e4], 4 */
    RECOMP_BACKEDGE();
    goto L_10026C58; /* 0x1005245F: jmp 0x10026c58 */
L_10052464:
    MEM32(0x100E03E4) = 3; /* 0x10052464: mov dword ptr [0x100e03e4], 3 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005246E: jmp 0x10026c6a */
L_10052473:
    eax = MEM32(ebp + (-0x118)); /* 0x10052473: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x10052479: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100524AA; /* 0x1005247C: je 0x100524aa */
L_1005247E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005247E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005249D; /* 0x1005247F: je 0x1005249d */
L_10052481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10052481: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10052493; /* 0x10052482: jne 0x10052493 */
L_10052484:
    MEM32(0x100E03E4) = 2; /* 0x10052484: mov dword ptr [0x100e03e4], 2 */
    RECOMP_BACKEDGE();
    goto L_10026C6A; /* 0x1005248E: jmp 0x10026c6a */
L_10052493:
    eax = MEM32(0x100E03E4); /* 0x10052493: mov eax, dword ptr [0x100e03e4] */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x10052498: jmp 0x10026c79 */
L_1005249D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005249D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005249F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E03E4) = eax; /* 0x100524A0: mov dword ptr [0x100e03e4], eax */
    RECOMP_BACKEDGE();
    goto L_10026C79; /* 0x100524A5: jmp 0x10026c79 */
L_100524AA:
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E03E4) = MEM32(0x100E03E4) & 0; /* 0x100524AA: and dword ptr [0x100e03e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100524B1:
    ecx = ebp + (-0x12C); /* 0x100524B1: lea ecx, [ebp - 0x12c] */
    RECOMP_CALL(sub_1009DD55); /* 0x100524B7: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFD8u); /* 0x100524BC: push 0x100dcfd8 */
    eax = ebp + (-0x12C); /* 0x100524C1: lea eax, [ebp - 0x12c] */
    MEM32(ebp + (-0x12C)) = 0x100677B4u; /* 0x100524C7: mov dword ptr [ebp - 0x12c], 0x100677b4 */
    PUSH32(esp, eax); /* 0x100524D1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100524D2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100524D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026C80u);

L_10026C80:
    PUSH32(esp, ebp); /* 0x10026C80: push ebp */
    ebp = esp; /* 0x10026C81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026C83: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10026C86: push ebx */
    PUSH32(esp, 0x800u); /* 0x10026C87: push 0x800 */
    PUSH32(esp, 0); /* 0x10026C8C: push 0 */
    ebx = 0x100248E8u; /* 0x10026C8E: mov ebx, 0x100248e8 */
    PUSH32(esp, ebx); /* 0x10026C93: push ebx */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x10026C94: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AE4) = eax; /* 0x10026C9A: mov dword ptr [0x100e0ae4], eax */
    /* test eax, eax */ /* 0x10026C9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005387A; /* 0x10026CA1: je 0x1005387a */
L_10026CA7:
    PUSH32(esp, 0x10024900u); /* 0x10026CA7: push 0x10024900 */
    PUSH32(esp, ebx); /* 0x10026CAC: push ebx */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10026CAD: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10026CB3: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x10026CB4: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10026CBA: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10026CBC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053886; /* 0x10026CBE: je 0x10053886 */
L_10026CC4:
    eax = MEM32(0x100E0330); /* 0x10026CC4: mov eax, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026D08u); /* 0x10026CC9: push 0x10026d08 */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10026CCE: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10026CD0: push ebx */
    MEM32(0x100E0AE0) = eax; /* 0x10026CD1: mov dword ptr [0x100e0ae0], eax */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10026CD6: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10026CDC: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x10026CDD: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10026CE3: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10026CE5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053886; /* 0x10026CE7: je 0x10053886 */
L_10026CED:
    eax = MEM32(0x100E0330); /* 0x10026CED: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x10026CF2: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100E0AE8u; /* 0x10026CF4: mov ecx, 0x100e0ae8 */
    MEM32(0x100E0AEC) = eax; /* 0x10026CF9: mov dword ptr [0x100e0aec], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10026CFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10026D00: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x10026D01: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    ebx = POP32_VAL(esp); /* 0x10026D03: pop ebx */
    esp = ebp; /* 0x10026D04: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026D06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026D07: ret  */
L_1005387A:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005387A: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10053880: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10053890; /* 0x10053882: jg 0x10053890 */
L_10053884:
    goto L_10053898; /* 0x10053884: jmp 0x10053898 */
L_10053886:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10053886: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005388C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10053898; /* 0x1005388E: jle 0x10053898 */
L_10053890:
    eax = (uint32_t)LO16(eax); /* 0x10053890: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10053893: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10053898:
    PUSH32(esp, eax); /* 0x10053898: push eax */
    ecx = ebp + (-0x10); /* 0x10053899: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x1005389C: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x100538A1: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x100538A6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100538A9: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100538AA: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100538AFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026D08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026D08u);

L_10026D08:
    PUSH32(esp, edx); /* 0x10026D08: push edx */
    /* outsd: no port I/O under Win32 */ /* 0x10026D09: outsd dx, dword ptr [esi] */
    PUSH32(esp, ebp); /* 0x10026D0A: push ebp */
    /* outsb: no port I/O under Win32 */ /* 0x10026D0B: outsb dx, byte ptr [esi] */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x69) * (int32_t)0x6C616974u); /* 0x10026D0C: imul ebp, dword ptr [esi + 0x69], 0x6c616974 */
    edi = (uint32_t)((int32_t)MEM32(edx + 0x65) * (int32_t)0x57565300u); /* 0x10026D13: imul edi, dword ptr [edx + 0x65], 0x57565300 */
    PUSH32(esp, 0x800u); /* 0x10026D1A: push 0x800 */
    PUSH32(esp, 0); /* 0x10026D1F: push 0 */
    esi = 0x10026DC4u; /* 0x10026D21: mov esi, 0x10026dc4 */
    ebx = ecx; /* 0x10026D26: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10026D28: push esi */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x10026D29: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10026D2F: mov edi, eax */
    /* test edi, edi */ /* 0x10026D31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005379E; /* 0x10026D33: je 0x1005379e */
L_10026D39:
    esi = MEM32(0x100E501C); /* 0x10026D39: mov esi, dword ptr [0x100e501c] */
    PUSH32(esp, 0x10026DE0u); /* 0x10026D3F: push 0x10026de0 */
    PUSH32(esp, edi); /* 0x10026D44: push edi */
    RECOMP_ICALL(esi); /* 0x10026D45: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D47: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026DF4u); /* 0x10026D4D: push 0x10026df4 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D54: push edi */
    MEM32(ebx) = ecx; /* 0x10026D55: mov dword ptr [ebx], ecx */
    RECOMP_ICALL(esi); /* 0x10026D57: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D59: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E0Cu); /* 0x10026D5F: push 0x10026e0c */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D64: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D66: push edi */
    MEM32(ebx + 0x4) = ecx; /* 0x10026D67: mov dword ptr [ebx + 4], ecx */
    RECOMP_ICALL(esi); /* 0x10026D6A: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D6C: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E18u); /* 0x10026D72: push 0x10026e18 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D77: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D79: push edi */
    MEM32(ebx + 0x8) = ecx; /* 0x10026D7A: mov dword ptr [ebx + 8], ecx */
    RECOMP_ICALL(esi); /* 0x10026D7D: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D7F: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E30u); /* 0x10026D85: push 0x10026e30 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D8C: push edi */
    MEM32(ebx + 0xC) = ecx; /* 0x10026D8D: mov dword ptr [ebx + 0xc], ecx */
    RECOMP_ICALL(esi); /* 0x10026D90: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D92: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E44u); /* 0x10026D98: push 0x10026e44 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D9D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D9F: push edi */
    MEM32(ebx + 0x10) = ecx; /* 0x10026DA0: mov dword ptr [ebx + 0x10], ecx */
    RECOMP_ICALL(esi); /* 0x10026DA3: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026DA5: mov ecx, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026DAB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = ecx; /* 0x10026DAD: mov dword ptr [ebx + 0x14], ecx */
L_10026DB0:
    edi = POP32_VAL(esp); /* 0x10026DB0: pop edi */
    esi = POP32_VAL(esp); /* 0x10026DB1: pop esi */
    eax = ebx; /* 0x10026DB2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10026DB4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026DB5: ret  */
L_10026DB6:
    edi = eax; /* 0x10026DB6: mov edi, eax */
    /* test edi, edi */ /* 0x10026DB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026DB0; /* 0x10026DBA: je 0x10026db0 */
L_10026DBC:
    RECOMP_BACKEDGE();
    goto L_10026D39; /* 0x10026DBC: jmp 0x10026d39 */
L_1005379E:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005379E: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x57u */ /* 0x100537A4: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026DB0; /* 0x100537A7: jne 0x10026db0 */
L_100537AD:
    PUSH32(esp, esi); /* 0x100537AD: push esi */
    RECOMP_ICALL(MEM32(0x100E51B4)); /* 0x100537AE: call dword ptr [0x100e51b4] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10026DB6; /* 0x100537B4: jmp 0x10026db6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026D17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026D17u);

L_10026D17:
    PUSH32(esp, ebx); /* 0x10026D17: push ebx */
    PUSH32(esp, esi); /* 0x10026D18: push esi */
    PUSH32(esp, edi); /* 0x10026D19: push edi */
    PUSH32(esp, 0x800u); /* 0x10026D1A: push 0x800 */
    PUSH32(esp, 0); /* 0x10026D1F: push 0 */
    esi = 0x10026DC4u; /* 0x10026D21: mov esi, 0x10026dc4 */
    ebx = ecx; /* 0x10026D26: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10026D28: push esi */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x10026D29: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10026D2F: mov edi, eax */
    /* test edi, edi */ /* 0x10026D31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005379E; /* 0x10026D33: je 0x1005379e */
L_10026D39:
    esi = MEM32(0x100E501C); /* 0x10026D39: mov esi, dword ptr [0x100e501c] */
    PUSH32(esp, 0x10026DE0u); /* 0x10026D3F: push 0x10026de0 */
    PUSH32(esp, edi); /* 0x10026D44: push edi */
    RECOMP_ICALL(esi); /* 0x10026D45: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D47: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026DF4u); /* 0x10026D4D: push 0x10026df4 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D54: push edi */
    MEM32(ebx) = ecx; /* 0x10026D55: mov dword ptr [ebx], ecx */
    RECOMP_ICALL(esi); /* 0x10026D57: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D59: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E0Cu); /* 0x10026D5F: push 0x10026e0c */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D64: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D66: push edi */
    MEM32(ebx + 0x4) = ecx; /* 0x10026D67: mov dword ptr [ebx + 4], ecx */
    RECOMP_ICALL(esi); /* 0x10026D6A: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D6C: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E18u); /* 0x10026D72: push 0x10026e18 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D77: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D79: push edi */
    MEM32(ebx + 0x8) = ecx; /* 0x10026D7A: mov dword ptr [ebx + 8], ecx */
    RECOMP_ICALL(esi); /* 0x10026D7D: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D7F: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E30u); /* 0x10026D85: push 0x10026e30 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D8C: push edi */
    MEM32(ebx + 0xC) = ecx; /* 0x10026D8D: mov dword ptr [ebx + 0xc], ecx */
    RECOMP_ICALL(esi); /* 0x10026D90: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026D92: mov ecx, dword ptr [0x100e0330] */
    PUSH32(esp, 0x10026E44u); /* 0x10026D98: push 0x10026e44 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026D9D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10026D9F: push edi */
    MEM32(ebx + 0x10) = ecx; /* 0x10026DA0: mov dword ptr [ebx + 0x10], ecx */
    RECOMP_ICALL(esi); /* 0x10026DA3: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0330); /* 0x10026DA5: mov ecx, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x10026DAB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = ecx; /* 0x10026DAD: mov dword ptr [ebx + 0x14], ecx */
L_10026DB0:
    edi = POP32_VAL(esp); /* 0x10026DB0: pop edi */
    esi = POP32_VAL(esp); /* 0x10026DB1: pop esi */
    eax = ebx; /* 0x10026DB2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10026DB4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026DB5: ret  */
L_10026DB6:
    edi = eax; /* 0x10026DB6: mov edi, eax */
    /* test edi, edi */ /* 0x10026DB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026DB0; /* 0x10026DBA: je 0x10026db0 */
L_10026DBC:
    RECOMP_BACKEDGE();
    goto L_10026D39; /* 0x10026DBC: jmp 0x10026d39 */
L_1005379E:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005379E: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x57u */ /* 0x100537A4: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026DB0; /* 0x100537A7: jne 0x10026db0 */
L_100537AD:
    PUSH32(esp, esi); /* 0x100537AD: push esi */
    RECOMP_ICALL(MEM32(0x100E51B4)); /* 0x100537AE: call dword ptr [0x100e51b4] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10026DB6; /* 0x100537B4: jmp 0x10026db6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026DC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026DC4u);

L_10026DC4:
    POPAD(); /* 0x10026DC4: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x76)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x76) = (uint8_t)(MEM8(eax + eax + 0x76) + HI8(eax)); /* 0x10026DC5: add byte ptr [eax + eax + 0x76], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x10026DC9: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_10026DCE; /* 0x10026DCC: jo 0x10026dce */
L_10026DCE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00320033u); /* 0x10026DCE: imul eax, dword ptr [eax], 0x320033 */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x10026DD4: add byte ptr cs:[eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x10026DD9: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x67655290)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x67655290) = (uint8_t)(MEM8(eax + 0x67655290) + LO8(edx)); /* 0x10026DDD: add byte ptr [eax + 0x67655290], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x74) * (int32_t)0x72547265u); /* 0x10026DE3: imul esi, dword ptr [ebx + 0x74], 0x72547265 */
    POPAD(); /* 0x10026DEA: popal  */
    void_lift_trap(0x10026DEBu, "arpl word ptr [ebp + 0x47], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E59; /* 0x10026DEE: jne 0x10026e59 */
L_10026DF0:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E4A; /* 0x10026DF0: jae 0x10026e4a */
L_10026DF3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) + LO8(edx)); /* 0x10026DF3: add byte ptr [ebp + 0x6e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E5D; /* 0x10026DF6: jb 0x10026e5d */
L_10026DF8:
    esi = (uint32_t)((int32_t)MEM32(ebp + edi + 0x74) * (int32_t)0x72547265u); /* 0x10026DF8: imul esi, dword ptr [bp + di + 0x74], 0x72547265 */
    POPAD(); /* 0x10026E00: popal  */
    void_lift_trap(0x10026E01u, "arpl word ptr [ebp + 0x47], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E6F; /* 0x10026E04: jne 0x10026e6f */
L_10026E06:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E09; /* 0x10026E06: jae 0x10026e09 */
L_10026E09:
    /* nop */ /* 0x10026E09: nop  */
    /* nop */ /* 0x10026E0A: nop  */
    /* nop */ /* 0x10026E0B: nop  */
    PUSH32(esp, esp); /* 0x10026E0C: push esp */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10026E70; /* 0x10026E0D: jb 0x10026e70 */
L_10026E0F:
    void_lift_trap(0x10026E0Fu, "arpl word ptr [ebp + 0x45], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10026E79; /* 0x10026E12: jbe 0x10026e79 */
L_10026E14:
    /* outsb: no port I/O under Win32 */ /* 0x10026E14: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026E17; /* 0x10026E15: je 0x10026e17 */
L_10026E17:
    /* nop */ /* 0x10026E17: nop  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E18: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E70; /* 0x10026E19: je 0x10026e70 */
L_10026E1C:
    if ((_cf != 0)) goto L_10026E7F; /* 0x10026E1C: jb 0x10026e7f */
L_10026E1E:
    void_lift_trap(0x10026E1Eu, "arpl word ptr [ebp + 0x4c], sp");
    /* outsd: no port I/O under Win32 */ /* 0x10026E21: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10026E6F; /* 0x10026E22: jb 0x10026e6f */
L_10026E27:
    POPAD(); /* 0x10026E27: popal  */
    /* outsb: no port I/O under Win32 */ /* 0x10026E28: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10026E29u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + 0x65479090))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + 0x65479090)) = (uint8_t)(MEM8(GS_BASE + (eax + 0x65479090)) + LO8(edx)); /* 0x10026E2B: add byte ptr gs:[eax + 0x65479090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E32: je 0x10026e88 */
L_10026E34:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    goto L_10026E5A; /* falls through past a gap */
L_10026E59:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xB8u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xB8u); /* 0x10026E59: add al, 0xb8 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E5B; /* falls through past a gap */
L_10026E5A:
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    goto L_10026E5F; /* falls through past a gap */
L_10026E5B:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xB4u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xB4u); /* 0x10026E5B: add al, 0xb4 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E5D:
    _flag_a = (uint32_t)((eax | 0xDB40E810u)); _flag_b = (uint32_t)((eax | 0xDB40E810u));
    eax = eax | 0xDB40E810u; /* 0x10026E5D: or eax, 0xdb40e810 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x10026E62u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E5F:
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    goto L_10026E71; /* falls through past a gap */
L_10026E70:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x7CFF039B))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x7CFF039B)) = MEM32(ebx + (-0x7CFF039B)) + 1; /* 0x10026E70: inc dword ptr [ebx - 0x7cff039b] */
    _flag_k = FK_INC;
    goto L_10026E76; /* falls through past a gap */
L_10026E71:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7C; /* falls through past a gap */
L_10026E76:
    /* cmp eax, 0x100E0AD8u */ /* 0x10026E76: cmp eax, 0x100e0ad8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E0AD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7B; /* falls through past a gap */
L_10026E79:
    PUSH32(esp, _seg_cs); /* 0x10026E79: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7A: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E7C; /* falls through past a gap */
L_10026E7B:
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x20) = (uint8_t)(MEM8(ebp + 0x20) + HI8(edx)); /* 0x10026E7B: add byte ptr [ebp + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E7E; /* falls through past a gap */
L_10026E7C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    goto L_10026E80; /* falls through past a gap */
L_10026E7F:
    { uint32_t _sa = LO8(eax), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7F: sbb al, ch */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x10026E81u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E80:
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026E6F: RECOMP_ITAIL(0x10026E6Fu); { RECOMP_REGS_OUT(); return; }
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026DE0u);

L_10026DE0:
    PUSH32(esp, edx); /* 0x10026DE0: push edx */
    esi = (uint32_t)((int32_t)MEM32(GS_BASE + (ebp + edi + 0x74)) * (int32_t)0x72547265u); /* 0x10026DE1: imul esi, dword ptr gs:[bp + di + 0x74], 0x72547265 */
    POPAD(); /* 0x10026DEA: popal  */
    void_lift_trap(0x10026DEBu, "arpl word ptr [ebp + 0x47], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10026E59; /* 0x10026DEE: jne 0x10026e59 */
L_10026DF0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10026E4A; /* 0x10026DF0: jae 0x10026e4a */
L_10026DF3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) + LO8(edx)); /* 0x10026DF3: add byte ptr [ebp + 0x6e], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E5D; /* 0x10026DF6: jb 0x10026e5d */
L_10026DF8:
    esi = (uint32_t)((int32_t)MEM32(ebp + edi + 0x74) * (int32_t)0x72547265u); /* 0x10026DF8: imul esi, dword ptr [bp + di + 0x74], 0x72547265 */
    POPAD(); /* 0x10026E00: popal  */
    void_lift_trap(0x10026E01u, "arpl word ptr [ebp + 0x47], sp");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E6F; /* 0x10026E04: jne 0x10026e6f */
L_10026E06:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E09; /* 0x10026E06: jae 0x10026e09 */
L_10026E09:
    /* nop */ /* 0x10026E09: nop  */
    /* nop */ /* 0x10026E0A: nop  */
    /* nop */ /* 0x10026E0B: nop  */
    PUSH32(esp, esp); /* 0x10026E0C: push esp */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10026E70; /* 0x10026E0D: jb 0x10026e70 */
L_10026E0F:
    void_lift_trap(0x10026E0Fu, "arpl word ptr [ebp + 0x45], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10026E79; /* 0x10026E12: jbe 0x10026e79 */
L_10026E14:
    /* outsb: no port I/O under Win32 */ /* 0x10026E14: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026E17; /* 0x10026E15: je 0x10026e17 */
L_10026E17:
    /* nop */ /* 0x10026E17: nop  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E18: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E70; /* 0x10026E19: je 0x10026e70 */
L_10026E1C:
    if ((_cf != 0)) goto L_10026E7F; /* 0x10026E1C: jb 0x10026e7f */
L_10026E1E:
    void_lift_trap(0x10026E1Eu, "arpl word ptr [ebp + 0x4c], sp");
    /* outsd: no port I/O under Win32 */ /* 0x10026E21: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10026E6F; /* 0x10026E22: jb 0x10026e6f */
L_10026E27:
    POPAD(); /* 0x10026E27: popal  */
    /* outsb: no port I/O under Win32 */ /* 0x10026E28: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10026E29u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + 0x65479090))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + 0x65479090)) = (uint8_t)(MEM8(GS_BASE + (eax + 0x65479090)) + LO8(edx)); /* 0x10026E2B: add byte ptr gs:[eax + 0x65479090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E32: je 0x10026e88 */
L_10026E34:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    goto L_10026E5A; /* falls through past a gap */
L_10026E59:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xB8u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xB8u); /* 0x10026E59: add al, 0xb8 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E5B; /* falls through past a gap */
L_10026E5A:
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    goto L_10026E5F; /* falls through past a gap */
L_10026E5B:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xB4u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xB4u); /* 0x10026E5B: add al, 0xb4 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E5D:
    _flag_a = (uint32_t)((eax | 0xDB40E810u)); _flag_b = (uint32_t)((eax | 0xDB40E810u));
    eax = eax | 0xDB40E810u; /* 0x10026E5D: or eax, 0xdb40e810 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x10026E62u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E5F:
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    goto L_10026E71; /* falls through past a gap */
L_10026E70:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x7CFF039B))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x7CFF039B)) = MEM32(ebx + (-0x7CFF039B)) + 1; /* 0x10026E70: inc dword ptr [ebx - 0x7cff039b] */
    _flag_k = FK_INC;
    goto L_10026E76; /* falls through past a gap */
L_10026E71:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7C; /* falls through past a gap */
L_10026E76:
    /* cmp eax, 0x100E0AD8u */ /* 0x10026E76: cmp eax, 0x100e0ad8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E0AD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7B; /* falls through past a gap */
L_10026E79:
    PUSH32(esp, _seg_cs); /* 0x10026E79: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7A: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E7C; /* falls through past a gap */
L_10026E7B:
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x20) = (uint8_t)(MEM8(ebp + 0x20) + HI8(edx)); /* 0x10026E7B: add byte ptr [ebp + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E7E; /* falls through past a gap */
L_10026E7C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    goto L_10026E80; /* falls through past a gap */
L_10026E7F:
    { uint32_t _sa = LO8(eax), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7F: sbb al, ch */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x10026E81u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E80:
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026E6F: RECOMP_ITAIL(0x10026E6Fu); { RECOMP_REGS_OUT(); return; }
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026DF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026DF4u);

L_10026DF4:
    PUSH32(esp, ebp); /* 0x10026DF4: push ebp */
    /* outsb: no port I/O under Win32 */ /* 0x10026DF5: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10026E5D; /* 0x10026DF6: jb 0x10026e5d */
L_10026DF8:
    esi = (uint32_t)((int32_t)MEM32(ebp + edi + 0x74) * (int32_t)0x72547265u); /* 0x10026DF8: imul esi, dword ptr [bp + di + 0x74], 0x72547265 */
    POPAD(); /* 0x10026E00: popal  */
    void_lift_trap(0x10026E01u, "arpl word ptr [ebp + 0x47], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10026E6F; /* 0x10026E04: jne 0x10026e6f */
L_10026E06:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10026E09; /* 0x10026E06: jae 0x10026e09 */
L_10026E09:
    /* nop */ /* 0x10026E09: nop  */
    /* nop */ /* 0x10026E0A: nop  */
    /* nop */ /* 0x10026E0B: nop  */
    PUSH32(esp, esp); /* 0x10026E0C: push esp */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10026E70; /* 0x10026E0D: jb 0x10026e70 */
L_10026E0F:
    void_lift_trap(0x10026E0Fu, "arpl word ptr [ebp + 0x45], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10026E79; /* 0x10026E12: jbe 0x10026e79 */
L_10026E14:
    /* outsb: no port I/O under Win32 */ /* 0x10026E14: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026E17; /* 0x10026E15: je 0x10026e17 */
L_10026E17:
    /* nop */ /* 0x10026E17: nop  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E18: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E70; /* 0x10026E19: je 0x10026e70 */
L_10026E1C:
    if ((_cf != 0)) goto L_10026E7F; /* 0x10026E1C: jb 0x10026e7f */
L_10026E1E:
    void_lift_trap(0x10026E1Eu, "arpl word ptr [ebp + 0x4c], sp");
    /* outsd: no port I/O under Win32 */ /* 0x10026E21: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10026E6F; /* 0x10026E22: jb 0x10026e6f */
L_10026E27:
    POPAD(); /* 0x10026E27: popal  */
    /* outsb: no port I/O under Win32 */ /* 0x10026E28: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10026E29u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + 0x65479090))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + 0x65479090)) = (uint8_t)(MEM8(GS_BASE + (eax + 0x65479090)) + LO8(edx)); /* 0x10026E2B: add byte ptr gs:[eax + 0x65479090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E32: je 0x10026e88 */
L_10026E34:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    goto L_10026E5F; /* falls through past a gap */
L_10026E5D:
    _flag_a = (uint32_t)((eax | 0xDB40E810u)); _flag_b = (uint32_t)((eax | 0xDB40E810u));
    eax = eax | 0xDB40E810u; /* 0x10026E5D: or eax, 0xdb40e810 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ITAIL(0x10026E62u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E5F:
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    goto L_10026E71; /* falls through past a gap */
L_10026E70:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x7CFF039B))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x7CFF039B)) = MEM32(ebx + (-0x7CFF039B)) + 1; /* 0x10026E70: inc dword ptr [ebx - 0x7cff039b] */
    _flag_k = FK_INC;
    goto L_10026E76; /* falls through past a gap */
L_10026E71:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7C; /* falls through past a gap */
L_10026E76:
    /* cmp eax, 0x100E0AD8u */ /* 0x10026E76: cmp eax, 0x100e0ad8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E0AD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7B; /* falls through past a gap */
L_10026E79:
    PUSH32(esp, _seg_cs); /* 0x10026E79: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7A: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E7C; /* falls through past a gap */
L_10026E7B:
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x20) = (uint8_t)(MEM8(ebp + 0x20) + HI8(edx)); /* 0x10026E7B: add byte ptr [ebp + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E7E; /* falls through past a gap */
L_10026E7C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    goto L_10026E80; /* falls through past a gap */
L_10026E7F:
    { uint32_t _sa = LO8(eax), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7F: sbb al, ch */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x10026E81u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E80:
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026E6F: RECOMP_ITAIL(0x10026E6Fu); { RECOMP_REGS_OUT(); return; }
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026E0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026E0Cu);

L_10026E0C:
    PUSH32(esp, esp); /* 0x10026E0C: push esp */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10026E70; /* 0x10026E0D: jb 0x10026e70 */
L_10026E0F:
    void_lift_trap(0x10026E0Fu, "arpl word ptr [ebp + 0x45], sp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10026E79; /* 0x10026E12: jbe 0x10026e79 */
L_10026E14:
    /* outsb: no port I/O under Win32 */ /* 0x10026E14: outsb dx, byte ptr [esi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026E17; /* 0x10026E15: je 0x10026e17 */
L_10026E17:
    /* nop */ /* 0x10026E17: nop  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E18: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E70; /* 0x10026E19: je 0x10026e70 */
L_10026E1C:
    if ((_cf != 0)) goto L_10026E7F; /* 0x10026E1C: jb 0x10026e7f */
L_10026E1E:
    void_lift_trap(0x10026E1Eu, "arpl word ptr [ebp + 0x4c], sp");
    /* outsd: no port I/O under Win32 */ /* 0x10026E21: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10026E6F; /* 0x10026E22: jb 0x10026e6f */
L_10026E27:
    POPAD(); /* 0x10026E27: popal  */
    /* outsb: no port I/O under Win32 */ /* 0x10026E28: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10026E29u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + 0x65479090))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + 0x65479090)) = (uint8_t)(MEM8(GS_BASE + (eax + 0x65479090)) + LO8(edx)); /* 0x10026E2B: add byte ptr gs:[eax + 0x65479090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E32: je 0x10026e88 */
L_10026E34:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    goto L_10026E71; /* falls through past a gap */
L_10026E70:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x7CFF039B))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x7CFF039B)) = MEM32(ebx + (-0x7CFF039B)) + 1; /* 0x10026E70: inc dword ptr [ebx - 0x7cff039b] */
    _flag_k = FK_INC;
    goto L_10026E76; /* falls through past a gap */
L_10026E71:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7C; /* falls through past a gap */
L_10026E76:
    /* cmp eax, 0x100E0AD8u */ /* 0x10026E76: cmp eax, 0x100e0ad8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E0AD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7B; /* falls through past a gap */
L_10026E79:
    PUSH32(esp, _seg_cs); /* 0x10026E79: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7A: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E7C; /* falls through past a gap */
L_10026E7B:
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x20) = (uint8_t)(MEM8(ebp + 0x20) + HI8(edx)); /* 0x10026E7B: add byte ptr [ebp + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E7E; /* falls through past a gap */
L_10026E7C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    goto L_10026E80; /* falls through past a gap */
L_10026E7F:
    { uint32_t _sa = LO8(eax), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7F: sbb al, ch */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x10026E81u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E80:
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026E6F: RECOMP_ITAIL(0x10026E6Fu); { RECOMP_REGS_OUT(); return; }
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026E18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026E18u);

L_10026E18:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E18: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E70; /* 0x10026E19: je 0x10026e70 */
L_10026E1C:
    if ((_cf != 0)) goto L_10026E7F; /* 0x10026E1C: jb 0x10026e7f */
L_10026E1E:
    void_lift_trap(0x10026E1Eu, "arpl word ptr [ebp + 0x4c], sp");
    /* outsd: no port I/O under Win32 */ /* 0x10026E21: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_10026E6F; /* 0x10026E22: jb 0x10026e6f */
L_10026E27:
    POPAD(); /* 0x10026E27: popal  */
    /* outsb: no port I/O under Win32 */ /* 0x10026E28: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10026E29u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + 0x65479090))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + 0x65479090)) = (uint8_t)(MEM8(GS_BASE + (eax + 0x65479090)) + LO8(edx)); /* 0x10026E2B: add byte ptr gs:[eax + 0x65479090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E32: je 0x10026e88 */
L_10026E34:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    goto L_10026E71; /* falls through past a gap */
L_10026E70:
    _flag_a = (uint32_t)(MEM32(ebx + (-0x7CFF039B))); _flag_b = (uint32_t)(1);
    MEM32(ebx + (-0x7CFF039B)) = MEM32(ebx + (-0x7CFF039B)) + 1; /* 0x10026E70: inc dword ptr [ebx - 0x7cff039b] */
    _flag_k = FK_INC;
    goto L_10026E76; /* falls through past a gap */
L_10026E71:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_10026E7C; /* falls through past a gap */
L_10026E76:
    /* cmp eax, 0x100E0AD8u */ /* 0x10026E76: cmp eax, 0x100e0ad8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E0AD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + 0x20) = (uint8_t)(MEM8(ebp + 0x20) + HI8(edx)); /* 0x10026E7B: add byte ptr [ebp + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026E7E; /* falls through past a gap */
L_10026E7C:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    goto L_10026E80; /* falls through past a gap */
L_10026E7F:
    { uint32_t _sa = LO8(eax), _sb = HI8(ecx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E7F: sbb al, ch */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_ITAIL(0x10026E81u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026E80:
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026E6F: RECOMP_ITAIL(0x10026E6Fu); { RECOMP_REGS_OUT(); return; }
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026E30u);

L_10026E30:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E30: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E88; /* 0x10026E31: je 0x10026e88 */
L_10026E34:
    if ((_cf != 0)) goto L_10026E97; /* 0x10026E34: jb 0x10026e97 */
L_10026E36:
    void_lift_trap(0x10026E36u, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E39: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E3A: popal  */
    void_lift_trap(0x10026E3Bu, "bound ebp, qword ptr [ebp + 0x4c]");
    if ((_cf != 0 || recomp_cond(_flag_k, _flag_a, _flag_b, CC_E))) goto L_10026EA7; /* 0x10026E3F: jbe 0x10026ea7 */
L_10026E42:
    void_lift_trap(0x10026E42u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + LO8(eax)); /* 0x10026E43: add byte ptr [edi + 0x65], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E46: je 0x10026e9c */
L_10026E48:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_10026E88:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    goto L_10026E99; /* falls through past a gap */
L_10026E97:
    /* in: no port I/O under Win32 */ /* 0x10026E97: in al, dx */
    { uint32_t _aa = LO8(eax), _ab = 0xE8u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E98: adc al, 0xe8 */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10026E9A; /* falls through past a gap */
L_10026E99:
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9A:
    { uint32_t _sa = MEM32(eax), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10026E9A: sbb dword ptr [eax], eax */
      MEM32(eax) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    goto L_10026EA8; /* falls through past a gap */
L_10026EA7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(ecx)); /* 0x10026EA7: add al, ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10026EA9; /* falls through past a gap */
L_10026EA8:
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    goto L_10026EAD; /* falls through past a gap */
L_10026EA9:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ebx, LO8(ebx) - LO8(ebx)); /* 0x10026EA9: sub bl, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10026EAD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026E44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026E44u);

L_10026E44:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10026E44: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10026E9C; /* 0x10026E45: je 0x10026e9c */
L_10026E48:
    if ((_cf != 0)) goto L_10026EAB; /* 0x10026E48: jb 0x10026eab */
L_10026E4A:
    void_lift_trap(0x10026E4Au, "arpl word ptr [ebp + 0x45], sp");
    /* outsb: no port I/O under Win32 */ /* 0x10026E4D: outsb dx, byte ptr [esi] */
    POPAD(); /* 0x10026E4E: popal  */
    void_lift_trap(0x10026E4Fu, "bound ebp, qword ptr [ebp + 0x46]");
    void_lift_trap(0x10026E53u, "insb byte ptr es:[edi], dx");
    POPAD(); /* 0x10026E54: popal  */
    if ((_cf == 0)) goto L_10026E58; /* 0x10026E55: jae 0x10026e58 */
L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
    goto L_10026E9E; /* falls through past a gap */
L_10026E9C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10026E9C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_10026EAB: RECOMP_ITAIL(0x10026EABu); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_10026E58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026E58u);

L_10026E58:
    PUSH32(esp, 4); /* 0x10026E58: push 4 */
    eax = 0x100DB404u; /* 0x10026E5A: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10026E5F: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0324u; /* 0x10026E64: mov ecx, 0x100e0324 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10026E69: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10026E6C: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10026E71: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10026E75: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10026E9E; /* 0x10026E7C: jne 0x10026e9e */
L_10026E7E:
    PUSH32(esp, 0x18u); /* 0x10026E7E: push 0x18 */
    RECOMP_CALL(sub_1000EE11); /* 0x10026E80: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10026E85: pop ecx */
    /* test eax, eax */ /* 0x10026E86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026EAE; /* 0x10026E88: je 0x10026eae */
L_10026E8A:
    ecx = eax; /* 0x10026E8A: mov ecx, eax */
    RECOMP_CALL(sub_10026D17); /* 0x10026E8C: call 0x10026d17 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AD8) = eax; /* 0x10026E91: mov dword ptr [0x100e0ad8], eax */
L_10026E96:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10026E96: sub esp, 0x14 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10026EB7); /* 0x10026E99: call 0x10026eb7 */
    RECOMP_FLAGS_IN();
L_10026E9E:
    MEM32(0x100E0324) = 0; /* 0x10026E9E: mov dword ptr [0x100e0324], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x10026EA8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026EAD: ret  */
L_10026EAE:
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10026EAE: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10026E96; /* 0x10026EB5: jmp 0x10026e96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026EB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026EB7u);

L_10026EB7:
    PUSH32(esp, ebp); /* 0x10026EB7: push ebp */
    ebp = esp; /* 0x10026EB8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10026EBA: push ecx */
    eax = MEM32(0x100E0AD8); /* 0x10026EBB: mov eax, dword ptr [0x100e0ad8] */
    PUSH32(esp, esi); /* 0x10026EC0: push esi */
    PUSH32(esp, edi); /* 0x10026EC1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10026EC2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax); /* 0x10026EC4: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x10026EC6: push edi */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x10026EC7: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x10026ECD: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10026EFA; /* 0x10026ECF: je 0x10026efa */
L_10026ED1:
    _flag_a = (uint32_t)((esi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((esi ^ MEM32(0x100E0330)));
    esi = esi ^ MEM32(0x100E0330); /* 0x10026ED1: xor esi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x100E0AD0u); /* 0x10026ED7: push 0x100e0ad0 */
    PUSH32(esp, edi); /* 0x10026EDC: push edi */
    PUSH32(esp, edi); /* 0x10026EDD: push edi */
    PUSH32(esp, 0x100E069Cu); /* 0x10026EDE: push 0x100e069c */
    PUSH32(esp, 7); /* 0x10026EE3: push 7 */
    PUSH32(esp, 0x10026F00u); /* 0x10026EE5: push 0x10026f00 */
    PUSH32(esp, edi); /* 0x10026EEA: push edi */
    PUSH32(esp, 0x1007A19Du); /* 0x10026EEB: push 0x1007a19d */
    RECOMP_ICALL(esi); /* 0x10026EF0: call esi */
    RECOMP_FLAGS_IN();
L_10026EF2:
    edi = POP32_VAL(esp); /* 0x10026EF2: pop edi */
    esi = POP32_VAL(esp); /* 0x10026EF3: pop esi */
    esp = ebp; /* 0x10026EF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026EF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10026EF7: ret 0x14 */
L_10026EFA:
    PUSH32(esp, 0x7Fu); /* 0x10026EFA: push 0x7f */
    eax = POP32_VAL(esp); /* 0x10026EFC: pop eax */
    RECOMP_BACKEDGE();
    goto L_10026EF2; /* 0x10026EFD: jmp 0x10026ef2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026F00u);

    goto L_10026F00;
L_10026ECF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10026EFA; /* 0x10026ECF: je 0x10026efa */
L_10026ED1:
    _flag_a = (uint32_t)((esi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((esi ^ MEM32(0x100E0330)));
    esi = esi ^ MEM32(0x100E0330); /* 0x10026ED1: xor esi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x100E0AD0u); /* 0x10026ED7: push 0x100e0ad0 */
    PUSH32(esp, edi); /* 0x10026EDC: push edi */
    PUSH32(esp, edi); /* 0x10026EDD: push edi */
    PUSH32(esp, 0x100E069Cu); /* 0x10026EDE: push 0x100e069c */
    PUSH32(esp, 7); /* 0x10026EE3: push 7 */
    PUSH32(esp, 0x10026F00u); /* 0x10026EE5: push 0x10026f00 */
    PUSH32(esp, edi); /* 0x10026EEA: push edi */
    PUSH32(esp, 0x1007A19Du); /* 0x10026EEB: push 0x1007a19d */
    RECOMP_ICALL(esi); /* 0x10026EF0: call esi */
    RECOMP_FLAGS_IN();
L_10026EF2:
    edi = POP32_VAL(esp); /* 0x10026EF2: pop edi */
    esi = POP32_VAL(esp); /* 0x10026EF3: pop esi */
    esp = ebp; /* 0x10026EF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026EF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10026EF7: ret 0x14 */
L_10026EFA:
    PUSH32(esp, 0x7Fu); /* 0x10026EFA: push 0x7f */
    eax = POP32_VAL(esp); /* 0x10026EFC: pop eax */
    RECOMP_BACKEDGE();
    goto L_10026EF2; /* 0x10026EFD: jmp 0x10026ef2 */
L_10026F00:
    MEM32(0xB5F7B697) = eax; /* 0x10026F00: mov dword ptr [0xb5f7b697], eax */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x10026F05: dec ebp */
    _flag_k = FK_DEC;
    /* cmp ecx, MEM32(ebp + (-0x42)) */ /* 0x10026F06: cmp ecx, dword ptr [ebp - 0x42] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x42)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NO(_flag_a, _flag_b)) goto L_10026ECF; /* 0x10026F09: jno 0x10026ecf */
L_10026F0B:
    { uint32_t _rv = (MEM8(esi + (-0x74AAD0A7))) & 255u, _rn = ((LO8(ecx)) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi + (-0x74AAD0A7)) = (uint8_t)(_rv); } /* 0x10026F0B: rol byte ptr [esi - 0x74aad0a7], cl */
    /* in: no port I/O under Win32 */ /* 0x10026F12: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10026F13: sub esp, 0x10 */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(0x100E5180)); /* 0x10026F16: call dword ptr [0x100e5180] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10026F1C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052045; /* 0x10026F1F: je 0x10052045 */
L_10026F25:
    esp = ebp; /* 0x10026F25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026F27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026F28: ret  */
L_10052045:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052045: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005204B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052057; /* 0x1005204D: jle 0x10052057 */
L_1005204F:
    eax = (uint32_t)LO16(eax); /* 0x1005204F: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052052: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052057:
    PUSH32(esp, eax); /* 0x10052057: push eax */
    ecx = ebp + (-0x10); /* 0x10052058: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x1005205B: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052060: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x10052065: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10052068: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052069: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005206Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026F10u);

L_10026F10:
    PUSH32(esp, ebp); /* 0x10026F10: push ebp */
    ebp = esp; /* 0x10026F11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10026F13: sub esp, 0x10 */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(0x100E5180)); /* 0x10026F16: call dword ptr [0x100e5180] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10026F1C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052045; /* 0x10026F1F: je 0x10052045 */
L_10026F25:
    esp = ebp; /* 0x10026F25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026F27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026F28: ret  */
L_10052045:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052045: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005204B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052057; /* 0x1005204D: jle 0x10052057 */
L_1005204F:
    eax = (uint32_t)LO16(eax); /* 0x1005204F: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052052: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052057:
    PUSH32(esp, eax); /* 0x10052057: push eax */
    ecx = ebp + (-0x10); /* 0x10052058: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x1005205B: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052060: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x10052065: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10052068: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052069: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005206Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026F29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026F29u);

L_10026F29:
    PUSH32(esp, ebp); /* 0x10026F29: push ebp */
    ebp = esp; /* 0x10026F2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10026F2C: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10026F2F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_100258DA); /* 0x10026F32: call 0x100258da */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10026F37: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10026F39: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x10026F3A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10026F3C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFA0u);
    eax = eax & 0xFA0u; /* 0x10026F3E: and eax, 0xfa0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E066C) = eax; /* 0x10026F43: mov dword ptr [0x100e066c], eax */
    RECOMP_CALL(sub_10026F10); /* 0x10026F48: call 0x10026f10 */
    RECOMP_FLAGS_IN();
    MEM32(0x100DFDE0) = eax; /* 0x10026F4D: mov dword ptr [0x100dfde0], eax */
    RECOMP_ICALL(MEM32(0x100E5180)); /* 0x10026F52: call dword ptr [0x100e5180] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E0AF0) = eax; /* 0x10026F58: mov dword ptr [0x100e0af0], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10026F5D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052F79; /* 0x10026F60: je 0x10052f79 */
L_10026F66:
    esp = ebp; /* 0x10026F66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10026F68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026F69: ret  */
L_10052F79:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052F79: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052F7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052F8B; /* 0x10052F81: jle 0x10052f8b */
L_10052F83:
    eax = (uint32_t)LO16(eax); /* 0x10052F83: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052F86: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052F8B:
    PUSH32(esp, eax); /* 0x10052F8B: push eax */
    ecx = esp + 0x4; /* 0x10052F8C: lea ecx, [esp + 4] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052F90: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052F95: push 0x100dcf40 */
    eax = esp + 0x4; /* 0x10052F9A: lea eax, [esp + 4] */
    PUSH32(esp, eax); /* 0x10052F9E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052F9F: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10052FA4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10026F6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026F6Au);

L_10026F6A:
    PUSH32(esp, ebp); /* 0x10026F6A: push ebp */
    ebp = esp; /* 0x10026F6B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10026F6D: push esi */
    PUSH32(esp, 0x28u); /* 0x10026F6E: push 0x28 */
    esi = ecx; /* 0x10026F70: mov esi, ecx */
    RECOMP_CALL(sub_1000EE11); /* 0x10026F72: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x10026F77: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x28u); /* 0x10026F7A: push 0x28 */
    MEM32(esi) = eax; /* 0x10026F7C: mov dword ptr [esi], eax */
    PUSH32(esp, MEM32(edx)); /* 0x10026F7E: push dword ptr [edx] */
    PUSH32(esp, eax); /* 0x10026F80: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x10026F81: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10026F86: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10026F89: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10026F8B: pop esi */
    ebp = POP32_VAL(esp); /* 0x10026F8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10026F8D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10026FC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026FC9u);

L_10026FC9:
    PUSH32(esp, ebp); /* 0x10026FC9: push ebp */
    ebp = esp; /* 0x10026FCA: mov ebp, esp */
    eax = MEM32(0x100DFA24); /* 0x10026FCC: mov eax, dword ptr [0x100dfa24] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10026FD1: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10026FE7; /* 0x10026FD7: je 0x10026fe7 */
L_10026FD9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10026FD9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10026FDC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10026FDF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10026FE2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10026FE5: call eax */
    RECOMP_FLAGS_IN();
L_10026FE7:
    ebp = POP32_VAL(esp); /* 0x10026FE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10026FE8: ret  */
    RECOMP_REGS_OUT();
}

void sub_10026FED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10026FEDu);

L_10026FED:
    PUSH32(esp, ebp); /* 0x10026FED: push ebp */
    ebp = esp; /* 0x10026FEE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10026FF0: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10026FF3: push ebx */
    PUSH32(esp, esi); /* 0x10026FF4: push esi */
    SET_LO8(ebx, LO8(edx)); /* 0x10026FF5: mov bl, dl */
    esi = ecx; /* 0x10026FF7: mov esi, ecx */
    RECOMP_CALL(sub_10023A83); /* 0x10026FF9: call 0x10023a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10026FFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100DFDDCu; /* 0x10027000: mov ecx, 0x100dfddc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10027005: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10027006: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1002700A: push -1 */
    PUSH32(esp, 0xFFFFD8F0u); /* 0x1002700C: push 0xffffd8f0 */
    PUSH32(esp, 0); /* 0x10027011: push 0 */
    PUSH32(esp, esi); /* 0x10027013: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x10027014: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x10027019: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)LO8(ebx); /* 0x1002701C: movzx eax, bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1002701F: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x10027021: mov dword ptr [ebp - 8], edx */
    PUSH32(esp, 0); /* 0x10027024: push 0 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10027026: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10027028: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1002702A: push eax */
    eax = ebp + (-0xC); /* 0x1002702B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1002702E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002702F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10026FC9); /* 0x10027032: call 0x10026fc9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10027037: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002703A: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1002703D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002703E: pop ebx */
    esp = ebp; /* 0x1002703F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027041: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10027042: ret  */
    RECOMP_REGS_OUT();
}

void sub_10027043(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027043u);

L_10027043:
    PUSH32(esp, ebp); /* 0x10027043: push ebp */
    ebp = esp; /* 0x10027044: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10027046: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10027049: push ebx */
    PUSH32(esp, esi); /* 0x1002704A: push esi */
    PUSH32(esp, edi); /* 0x1002704B: push edi */
    edi = ecx; /* 0x1002704C: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1002704E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027050: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10027052: push 4 */
    edx = POP32_VAL(esp); /* 0x10027054: pop edx */
    MEM32(edi + 0x24) = eax; /* 0x10027055: mov dword ptr [edi + 0x24], eax */
    eax = 0x100u; /* 0x10027058: mov eax, 0x100 */
    MEM32(edi + 0x28) = eax; /* 0x1002705D: mov dword ptr [edi + 0x28], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10027060: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(edi + 0x10) = ebx; /* 0x10027062: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x2C) = ebx; /* 0x10027065: mov dword ptr [edi + 0x2c], ebx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10027068: seto cl */
    MEM32(edi + 0x30) = ebx; /* 0x1002706B: mov dword ptr [edi + 0x30], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002706E: neg ecx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x38) = 0x200u; /* 0x10027070: mov dword ptr [edi + 0x38], 0x200 */
    MEM32(edi + 0x3C) = 1; /* 0x10027077: mov dword ptr [edi + 0x3c], 1 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002707E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x40) = ebx; /* 0x10027080: mov dword ptr [edi + 0x40], ebx */
    MEM32(edi + 0x44) = 0x7FFFFFFFu; /* 0x10027083: mov dword ptr [edi + 0x44], 0x7fffffff */
    PUSH32(esp, ecx); /* 0x1002708A: push ecx */
    MEM32(edi + 0x48) = ebx; /* 0x1002708B: mov dword ptr [edi + 0x48], ebx */
    RECOMP_CALL(sub_10011683); /* 0x1002708E: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x10027093: mov ecx, dword ptr [edi + 0x28] */
    esi = eax; /* 0x10027096: mov esi, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10027098: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10027098: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1002709B: push ecx */
    PUSH32(esp, ebx); /* 0x1002709C: push ebx */
    PUSH32(esp, esi); /* 0x1002709D: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1002709E: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x100270A3: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x100270A5: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100270AA: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100270AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10027107; /* 0x100270AF: je 0x10027107 */
L_100270B1:
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x100270B1: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x100270B5: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x100270B7: mov dword ptr [eax + 4], ebx */
L_100270BA:
    MEM32(edi + 0x30) = eax; /* 0x100270BA: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100270BD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x100270BF: mov eax, dword ptr [edi + 0x38] */
    PUSH32(esp, 4); /* 0x100270C2: push 4 */
    edx = POP32_VAL(esp); /* 0x100270C4: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x100270C5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x100270C7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100270CA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100270CC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100270CE: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100270CF: call 0x10011683 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E51A8); /* 0x100270D4: mov esi, dword ptr [0x100e51a8] */
    ecx = POP32_VAL(esp); /* 0x100270DA: pop ecx */
    ecx = MEM32(edi + 0x30); /* 0x100270DB: mov ecx, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x100270DE: mov dword ptr [edi + 0x34], eax */
    PUSH32(esp, edi); /* 0x100270E1: push edi */
    MEM32(eax) = ecx; /* 0x100270E2: mov dword ptr [eax], ecx */
    RECOMP_ICALL(esi); /* 0x100270E4: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x100270E6: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x100270E9: push eax */
    RECOMP_ICALL(esi); /* 0x100270EA: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x100270EC: mov ecx, dword ptr [edi + 0x28] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100270EF: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100270FE; /* 0x100270F1: je 0x100270fe */
L_100270F3:
    eax = MEM32(edi + 0x2C); /* 0x100270F3: mov eax, dword ptr [edi + 0x2c] */
L_100270F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100270F6: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100270F7: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100270F6; /* 0x100270F9: jne 0x100270f6 */
L_100270FB:
    MEM32(edi + 0x2C) = eax; /* 0x100270FB: mov dword ptr [edi + 0x2c], eax */
L_100270FE:
    eax = edi; /* 0x100270FE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10027100: pop edi */
    esi = POP32_VAL(esp); /* 0x10027101: pop esi */
    ebx = POP32_VAL(esp); /* 0x10027102: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10027103: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10027104: ret 0xc */
L_10027107:
    eax = ebx; /* 0x10027107: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_100270BA; /* 0x10027109: jmp 0x100270ba */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027218u);

L_10027218:
    PUSH32(esp, ebp); /* 0x10027218: push ebp */
    ebp = esp; /* 0x10027219: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1002721B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1002721E: push ebx */
    PUSH32(esp, esi); /* 0x1002721F: push esi */
    PUSH32(esp, edi); /* 0x10027220: push edi */
    edi = ecx; /* 0x10027221: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10027223: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027225: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10027227: push 4 */
    edx = POP32_VAL(esp); /* 0x10027229: pop edx */
    MEM32(edi + 0x24) = eax; /* 0x1002722A: mov dword ptr [edi + 0x24], eax */
    eax = 0x100u; /* 0x1002722D: mov eax, 0x100 */
    MEM32(edi + 0x28) = eax; /* 0x10027232: mov dword ptr [edi + 0x28], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10027235: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(edi + 0x10) = ebx; /* 0x10027237: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x2C) = ebx; /* 0x1002723A: mov dword ptr [edi + 0x2c], ebx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002723D: seto cl */
    MEM32(edi + 0x30) = ebx; /* 0x10027240: mov dword ptr [edi + 0x30], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10027243: neg ecx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x38) = 0x200u; /* 0x10027245: mov dword ptr [edi + 0x38], 0x200 */
    MEM32(edi + 0x3C) = 1; /* 0x1002724C: mov dword ptr [edi + 0x3c], 1 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10027253: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x40) = ebx; /* 0x10027255: mov dword ptr [edi + 0x40], ebx */
    MEM32(edi + 0x44) = 0x40u; /* 0x10027258: mov dword ptr [edi + 0x44], 0x40 */
    PUSH32(esp, ecx); /* 0x1002725F: push ecx */
    MEM32(edi + 0x48) = ebx; /* 0x10027260: mov dword ptr [edi + 0x48], ebx */
    RECOMP_CALL(sub_10011683); /* 0x10027263: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x10027268: mov ecx, dword ptr [edi + 0x28] */
    esi = eax; /* 0x1002726B: mov esi, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1002726D: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1002726D: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10027270: push ecx */
    PUSH32(esp, ebx); /* 0x10027271: push ebx */
    PUSH32(esp, esi); /* 0x10027272: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10027273: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10027278: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1002727A: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002727F: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10027282: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100272DC; /* 0x10027284: je 0x100272dc */
L_10027286:
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x10027286: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1002728A: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x1002728C: mov dword ptr [eax + 4], ebx */
L_1002728F:
    MEM32(edi + 0x30) = eax; /* 0x1002728F: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027292: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x10027294: mov eax, dword ptr [edi + 0x38] */
    PUSH32(esp, 4); /* 0x10027297: push 4 */
    edx = POP32_VAL(esp); /* 0x10027299: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1002729A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002729C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002729F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100272A1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100272A3: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100272A4: call 0x10011683 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E51A8); /* 0x100272A9: mov esi, dword ptr [0x100e51a8] */
    ecx = POP32_VAL(esp); /* 0x100272AF: pop ecx */
    ecx = MEM32(edi + 0x30); /* 0x100272B0: mov ecx, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x100272B3: mov dword ptr [edi + 0x34], eax */
    PUSH32(esp, edi); /* 0x100272B6: push edi */
    MEM32(eax) = ecx; /* 0x100272B7: mov dword ptr [eax], ecx */
    RECOMP_ICALL(esi); /* 0x100272B9: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x100272BB: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x100272BE: push eax */
    RECOMP_ICALL(esi); /* 0x100272BF: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x100272C1: mov ecx, dword ptr [edi + 0x28] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100272C4: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100272D3; /* 0x100272C6: je 0x100272d3 */
L_100272C8:
    eax = MEM32(edi + 0x2C); /* 0x100272C8: mov eax, dword ptr [edi + 0x2c] */
L_100272CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100272CB: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100272CC: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100272CB; /* 0x100272CE: jne 0x100272cb */
L_100272D0:
    MEM32(edi + 0x2C) = eax; /* 0x100272D0: mov dword ptr [edi + 0x2c], eax */
L_100272D3:
    eax = edi; /* 0x100272D3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100272D5: pop edi */
    esi = POP32_VAL(esp); /* 0x100272D6: pop esi */
    ebx = POP32_VAL(esp); /* 0x100272D7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100272D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100272D9: ret 0xc */
L_100272DC:
    eax = ebx; /* 0x100272DC: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1002728F; /* 0x100272DE: jmp 0x1002728f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100272E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100272E0u);

L_100272E0:
    PUSH32(esp, ebp); /* 0x100272E0: push ebp */
    ebp = esp; /* 0x100272E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100272E3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100272E6: push ebx */
    PUSH32(esp, esi); /* 0x100272E7: push esi */
    PUSH32(esp, edi); /* 0x100272E8: push edi */
    esi = ecx; /* 0x100272E9: mov esi, ecx */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x100272EB: mov byte ptr [ebp - 5], 0 */
    PUSH32(esp, 4); /* 0x100272EF: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100272F1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x100272F3: pop eax */
    edx = MEM32(esi + 0x30); /* 0x100272F4: mov edx, dword ptr [esi + 0x30] */
    MEM32(ebp + (-0xC)) = edx; /* 0x100272F7: mov dword ptr [ebp - 0xc], edx */
L_100272FA:
    ebx = edx + 0x8; /* 0x100272FA: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x100272FD: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x10027300: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_10027357; /* 0x10027303: jl 0x10027357 */
L_10027305:
    ebx = MEM32(edx); /* 0x10027305: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10027307: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x28), edx */ /* 0x10027309: cmp dword ptr [esi + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10027383; /* 0x1002730C: jle 0x10027383 */
L_1002730E:
    /* cmp MEM32(ebx), 0 */ /* 0x1002730E: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002737B; /* 0x10027311: jne 0x1002737b */
L_10027313:
    ecx = MEM32(ebp + 0x8); /* 0x10027313: mov ecx, dword ptr [ebp + 8] */
    eax = edx + edi; /* 0x10027316: lea eax, [edx + edi] */
    MEM32(ecx + 0xF8) = eax; /* 0x10027319: mov dword ptr [ecx + 0xf8], eax */
    eax = MEM32(esi + 0x40); /* 0x1002731F: mov eax, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10027322: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10027325: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10027327: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1002732B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052DD2; /* 0x1002732D: jne 0x10052dd2 */
L_10027333:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x10027333: add edi, edx */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5)) = (uint8_t)(1); /* 0x10027335: mov byte ptr [ebp - 5], 1 */
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x10027339: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10027348; /* 0x1002733C: jl 0x10027348 */
L_1002733E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002733E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x40; /* 0x10027340: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10027343: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10027344: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10027348:
    ebx = MEM32(ebp + (-0x10)); /* 0x10027348: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1002734B: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1002734E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10027350: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_10027354:
    edx = MEM32(ebp + (-0xC)); /* 0x10027354: mov edx, dword ptr [ebp - 0xc] */
L_10027357:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x10027357: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052DDA; /* 0x1002735B: je 0x10052dda */
L_10027361:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x10027361: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(edx + 0x4); /* 0x10027365: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, 4); /* 0x10027368: push 4 */
    MEM32(ebp + (-0xC)) = edx; /* 0x1002736A: mov dword ptr [ebp - 0xc], edx */
    eax = POP32_VAL(esp); /* 0x1002736D: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100272FA; /* 0x1002736E: je 0x100272fa */
L_10027370:
    eax = edi; /* 0x10027370: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10027372: pop edi */
    esi = POP32_VAL(esp); /* 0x10027373: pop esi */
    ebx = POP32_VAL(esp); /* 0x10027374: pop ebx */
    esp = ebp; /* 0x10027375: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10027378: ret 4 */
L_1002737B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002737B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1002737C: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x1002737E: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1002730E; /* 0x10027381: jl 0x1002730e */
L_10027383:
    ebx = MEM32(ebp + (-0x10)); /* 0x10027383: mov ebx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_10027354; /* 0x10027386: jmp 0x10027354 */
L_10052DD2:
    PUSH32(esp, 4); /* 0x10052DD2: push 4 */
    eax = POP32_VAL(esp); /* 0x10052DD4: pop eax */
    RECOMP_BACKEDGE();
    goto L_1002737B; /* 0x10052DD5: jmp 0x1002737b */
L_10052DDA:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10052DDA: push -2 */
    ecx = POP32_VAL(esp); /* 0x10052DDC: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10052DDD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10052DE0: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x28); /* 0x10052DE4: add edi, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = edx + 0x4; /* 0x10052DE7: lea ebx, [edx + 4] */
    /* cmp MEM32(ebx), 0 */ /* 0x10052DEA: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052E5E; /* 0x10052DED: jne 0x10052e5e */
L_10052DEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052DEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052DF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052DF3: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10052DF4: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10052DF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052E5E; /* 0x10052DFA: jne 0x10052e5e */
L_10052DFC:
    eax = MEM32(esi + 0x28); /* 0x10052DFC: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052DFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10052E01: push 4 */
    edx = POP32_VAL(esp); /* 0x10052E03: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10052E04: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10052E06: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10052E09: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10052E0B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10052E0D: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10052E0E: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10052E13: mov ecx, eax */
    eax = MEM32(esi + 0x28); /* 0x10052E15: mov eax, dword ptr [esi + 0x28] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10052E18: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10052E18: shl eax, 2 */
    PUSH32(esp, eax); /* 0x10052E1B: push eax */
    PUSH32(esp, 0); /* 0x10052E1C: push 0 */
    PUSH32(esp, ecx); /* 0x10052E1E: push ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10052E1F: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10011533); /* 0x10052E22: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10052E27: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x10052E29: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10052E2E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10052E30: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x10052E33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052E46; /* 0x10052E35: je 0x10052e46 */
L_10052E37:
    eax = MEM32(ebp + (-0x14)); /* 0x10052E37: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10052E3A: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0xFFFFFFFFu; /* 0x10052E3E: or dword ptr [ecx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x10052E42: mov dword ptr [ecx], eax */
    goto L_10052E48; /* 0x10052E44: jmp 0x10052e48 */
L_10052E46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052E46: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052E48:
    edx = MEM32(esi + 0x3C); /* 0x10052E48: mov edx, dword ptr [esi + 0x3c] */
    /* cmp edx, MEM32(esi + 0x38) */ /* 0x10052E4B: cmp edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10052E59; /* 0x10052E4E: jge 0x10052e59 */
L_10052E50:
    eax = MEM32(esi + 0x34); /* 0x10052E50: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + edx * 4) = ecx; /* 0x10052E53: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1; /* 0x10052E56: inc dword ptr [esi + 0x3c] */
    _flag_k = FK_INC;
L_10052E59:
    { uint32_t _tmp = MEM32(ebx); /* 0x10052E59: xchg dword ptr [ebx], ecx */
      MEM32(ebx) = ecx;
      ecx = _tmp; }
    edx = MEM32(ebp + (-0xC)); /* 0x10052E5B: mov edx, dword ptr [ebp - 0xc] */
L_10052E5E:
    /* cmp MEM32(ebx), 1 */ /* 0x10052E5E: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10027361; /* 0x10052E61: jne 0x10027361 */
L_10052E67:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10052E67: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0x1007A46Cu; /* 0x10052E6B: mov dword ptr [ebp - 0x18], 0x1007a46c */
L_10052E72:
    ecx = ebp + (-0x24); /* 0x10052E72: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10068D76); /* 0x10052E75: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 1 */ /* 0x10052E7A: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052E72; /* 0x10052E7D: je 0x10052e72 */
L_10052E7F:
    edx = MEM32(ebp + (-0xC)); /* 0x10052E7F: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_10027361; /* 0x10052E82: jmp 0x10027361 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027388(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027388u);

L_10027388:
    PUSH32(esp, ebp); /* 0x10027388: push ebp */
    ebp = esp; /* 0x10027389: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002738B: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1002738C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1002738F: push ebx */
    ebx = ecx; /* 0x10027390: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10027392: push esi */
    eax = MEM32(eax); /* 0x10027393: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x10027395: push edi */
    ecx = ebx + 0x10; /* 0x10027396: lea ecx, [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10027399: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052D9B; /* 0x1002739E: jne 0x10052d9b */
L_100273A4:
    edi = MEM32(ebp + 0xC); /* 0x100273A4: mov edi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x100273A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x100273A9: mov dword ptr [ebp - 4], ecx */
    eax = edi + 0x60; /* 0x100273AC: lea eax, [edi + 0x60] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052DA3; /* 0x100273AF: jne 0x10052da3 */
L_100273B5:
    PUSH32(esp, eax); /* 0x100273B5: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x100273B6: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100273BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052DAB; /* 0x100273BE: jne 0x10052dab */
L_100273C4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100273C4: push dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x100273C7: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x100273C9: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x100273CB: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x100273CC: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100273CF: mov esi, eax */
L_100273D1:
    eax = MEM32(ebp + (-0x4)); /* 0x100273D1: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x100273D4: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x104) = ecx; /* 0x100273D6: mov dword ptr [esi + 0x104], ecx */
    ecx = edi + 0xBC; /* 0x100273DC: lea ecx, [edi + 0xbc] */
    MEM32(eax) = esi; /* 0x100273E2: mov dword ptr [eax], esi */
    /* cmp MEM32(ecx), 0 */ /* 0x100273E4: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100273EE; /* 0x100273E7: jne 0x100273ee */
L_100273E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100273E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100273EB: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x100273EC: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
L_100273EE:
    eax = MEM32(ebp + 0x8); /* 0x100273EE: mov eax, dword ptr [ebp + 8] */
    ecx = edi + 0x60; /* 0x100273F1: lea ecx, [edi + 0x60] */
    PUSH32(esp, esi); /* 0x100273F4: push esi */
    /* test MEM32(eax), 0x0FFFFFFFu */ /* 0x100273F5: test dword ptr [eax], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052DCA; /* 0x100273FB: jne 0x10052dca */
L_10027401:
    RECOMP_CALL(sub_100272E0); /* 0x10027401: call 0x100272e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10027406: pop edi */
    eax = esi; /* 0x10027407: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10027409: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002740A: pop ebx */
    esp = ebp; /* 0x1002740B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002740D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002740E: ret 8 */
L_10052D9B:
    ecx = ebx + 0xC; /* 0x10052D9B: lea ecx, [ebx + 0xc] */
    RECOMP_BACKEDGE();
    goto L_100273A4; /* 0x10052D9E: jmp 0x100273a4 */
L_10052DA3:
    eax = edi + 0x10; /* 0x10052DA3: lea eax, [edi + 0x10] */
    RECOMP_BACKEDGE();
    goto L_100273B5; /* 0x10052DA6: jmp 0x100273b5 */
L_10052DAB:
    esi = eax + (-0x120); /* 0x10052DAB: lea esi, [eax - 0x120] */
    /* test esi, esi */ /* 0x10052DB1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100273C4; /* 0x10052DB3: je 0x100273c4 */
L_10052DB9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10052DB9: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x10052DBC: mov ecx, esi */
    PUSH32(esp, edi); /* 0x10052DBE: push edi */
    PUSH32(esp, ebx); /* 0x10052DBF: push ebx */
    RECOMP_CALL(sub_10025E2C); /* 0x10052DC0: call 0x10025e2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100273D1; /* 0x10052DC5: jmp 0x100273d1 */
L_10052DCA:
    ecx = edi + 0x10; /* 0x10052DCA: lea ecx, [edi + 0x10] */
    RECOMP_BACKEDGE();
    goto L_10027401; /* 0x10052DCD: jmp 0x10027401 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100274CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100274CCu);

L_100274CC:
    PUSH32(esp, ebp); /* 0x100274CC: push ebp */
    ebp = esp; /* 0x100274CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x100274CF: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100274D2: push ebx */
    PUSH32(esp, esi); /* 0x100274D3: push esi */
    PUSH32(esp, edi); /* 0x100274D4: push edi */
    esi = ecx; /* 0x100274D5: mov esi, ecx */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x100274D7: mov byte ptr [ebp - 5], 0 */
    PUSH32(esp, 4); /* 0x100274DB: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100274DD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x100274DF: pop eax */
    edx = MEM32(esi + 0x30); /* 0x100274E0: mov edx, dword ptr [esi + 0x30] */
    MEM32(ebp + (-0xC)) = edx; /* 0x100274E3: mov dword ptr [ebp - 0xc], edx */
L_100274E6:
    ebx = edx + 0x8; /* 0x100274E6: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x100274E9: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x100274EC: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_10027540; /* 0x100274EF: jl 0x10027540 */
L_100274F1:
    ebx = MEM32(edx); /* 0x100274F1: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100274F3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x28), edx */ /* 0x100274F5: cmp dword ptr [esi + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002756C; /* 0x100274F8: jle 0x1002756c */
L_100274FA:
    /* cmp MEM32(ebx), 0 */ /* 0x100274FA: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10027564; /* 0x100274FD: jne 0x10027564 */
L_100274FF:
    ecx = MEM32(ebp + 0x8); /* 0x100274FF: mov ecx, dword ptr [ebp + 8] */
    eax = edx + edi; /* 0x10027502: lea eax, [edx + edi] */
    MEM32(ecx + 0x18) = eax; /* 0x10027505: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi + 0x40); /* 0x10027508: mov eax, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1002750B: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002750E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10027510: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10027514: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053293; /* 0x10027516: jne 0x10053293 */
L_1002751C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1002751C: add edi, edx */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x5)) = (uint8_t)(1); /* 0x1002751E: mov byte ptr [ebp - 5], 1 */
    /* cmp edi, MEM32(ebp + (-0x14)) */ /* 0x10027522: cmp edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10027531; /* 0x10027525: jl 0x10027531 */
L_10027527:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027527: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x40; /* 0x10027529: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002752C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1002752D: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10027531:
    ebx = MEM32(ebp + (-0x10)); /* 0x10027531: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10027534: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x10027537: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10027539: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_1002753D:
    edx = MEM32(ebp + (-0xC)); /* 0x1002753D: mov edx, dword ptr [ebp - 0xc] */
L_10027540:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x10027540: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005329B; /* 0x10027544: je 0x1005329b */
L_1002754A:
    /* cmp MEM8(ebp + (-0x5)), 0 */ /* 0x1002754A: cmp byte ptr [ebp - 5], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(edx + 0x4); /* 0x1002754E: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, 4); /* 0x10027551: push 4 */
    MEM32(ebp + (-0xC)) = edx; /* 0x10027553: mov dword ptr [ebp - 0xc], edx */
    eax = POP32_VAL(esp); /* 0x10027556: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100274E6; /* 0x10027557: je 0x100274e6 */
L_10027559:
    eax = edi; /* 0x10027559: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1002755B: pop edi */
    esi = POP32_VAL(esp); /* 0x1002755C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002755D: pop ebx */
    esp = ebp; /* 0x1002755E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027560: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10027561: ret 4 */
L_10027564:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10027564: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x10027565: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x10027567: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100274FA; /* 0x1002756A: jl 0x100274fa */
L_1002756C:
    ebx = MEM32(ebp + (-0x10)); /* 0x1002756C: mov ebx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1002753D; /* 0x1002756F: jmp 0x1002753d */
L_10053293:
    PUSH32(esp, 4); /* 0x10053293: push 4 */
    eax = POP32_VAL(esp); /* 0x10053295: pop eax */
    RECOMP_BACKEDGE();
    goto L_10027564; /* 0x10053296: jmp 0x10027564 */
L_1005329B:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1005329B: push -2 */
    ecx = POP32_VAL(esp); /* 0x1005329D: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005329E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x100532A1: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x28); /* 0x100532A5: add edi, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = edx + 0x4; /* 0x100532A8: lea ebx, [edx + 4] */
    /* cmp MEM32(ebx), 0 */ /* 0x100532AB: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005331F; /* 0x100532AE: jne 0x1005331f */
L_100532B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100532B0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100532B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100532B4: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x100532B5: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x100532B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005331F; /* 0x100532BB: jne 0x1005331f */
L_100532BD:
    eax = MEM32(esi + 0x28); /* 0x100532BD: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100532C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x100532C2: push 4 */
    edx = POP32_VAL(esp); /* 0x100532C4: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x100532C5: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x100532C7: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100532CA: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100532CC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100532CE: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100532CF: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100532D4: mov ecx, eax */
    eax = MEM32(esi + 0x28); /* 0x100532D6: mov eax, dword ptr [esi + 0x28] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100532D9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100532D9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x100532DC: push eax */
    PUSH32(esp, 0); /* 0x100532DD: push 0 */
    PUSH32(esp, ecx); /* 0x100532DF: push ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x100532E0: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10011533); /* 0x100532E3: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x100532E8: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x100532EA: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100532EF: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100532F1: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x100532F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053307; /* 0x100532F6: je 0x10053307 */
L_100532F8:
    eax = MEM32(ebp + (-0x14)); /* 0x100532F8: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x100532FB: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0xFFFFFFFFu; /* 0x100532FF: or dword ptr [ecx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x10053303: mov dword ptr [ecx], eax */
    goto L_10053309; /* 0x10053305: jmp 0x10053309 */
L_10053307:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10053307: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10053309:
    edx = MEM32(esi + 0x3C); /* 0x10053309: mov edx, dword ptr [esi + 0x3c] */
    /* cmp edx, MEM32(esi + 0x38) */ /* 0x1005330C: cmp edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005331A; /* 0x1005330F: jge 0x1005331a */
L_10053311:
    eax = MEM32(esi + 0x34); /* 0x10053311: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + edx * 4) = ecx; /* 0x10053314: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1; /* 0x10053317: inc dword ptr [esi + 0x3c] */
    _flag_k = FK_INC;
L_1005331A:
    { uint32_t _tmp = MEM32(ebx); /* 0x1005331A: xchg dword ptr [ebx], ecx */
      MEM32(ebx) = ecx;
      ecx = _tmp; }
    edx = MEM32(ebp + (-0xC)); /* 0x1005331C: mov edx, dword ptr [ebp - 0xc] */
L_1005331F:
    /* cmp MEM32(ebx), 1 */ /* 0x1005331F: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002754A; /* 0x10053322: jne 0x1002754a */
L_10053328:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10053328: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0x1007A46Cu; /* 0x1005332C: mov dword ptr [ebp - 0x18], 0x1007a46c */
L_10053333:
    ecx = ebp + (-0x24); /* 0x10053333: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10068D76); /* 0x10053336: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 1 */ /* 0x1005333B: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053333; /* 0x1005333E: je 0x10053333 */
L_10053340:
    edx = MEM32(ebp + (-0xC)); /* 0x10053340: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_1002754A; /* 0x10053343: jmp 0x1002754a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027571(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027571u);

L_10027571:
    PUSH32(esp, ebp); /* 0x10027571: push ebp */
    ebp = esp; /* 0x10027572: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10027574: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10027577: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002757A: push ebx */
    PUSH32(esp, esi); /* 0x1002757B: push esi */
    PUSH32(esp, edi); /* 0x1002757C: push edi */
    edi = ecx; /* 0x1002757D: mov edi, ecx */
    ebx = edi + 0x60; /* 0x1002757F: lea ebx, [edi + 0x60] */
    PUSH32(esp, ebx); /* 0x10027582: push ebx */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10027583: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027589: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1002758B: mov esi, ecx */
    /* test eax, eax */ /* 0x1002758D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053132; /* 0x1002758F: jne 0x10053132 */
L_10027595:
    /* cmp MEM32(edi + 0xC), ecx */ /* 0x10027595: cmp dword ptr [edi + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005313F; /* 0x10027598: jne 0x1005313f */
L_1002759E:
    /* test esi, esi */ /* 0x1002759E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005313A; /* 0x100275A0: jne 0x1005313a */
L_100275A6:
    PUSH32(esp, 0x38u); /* 0x100275A6: push 0x38 */
    RECOMP_CALL(sub_1000EE11); /* 0x100275A8: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100275AD: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100275AF: pop ecx */
    /* test esi, esi */ /* 0x100275B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100275DC; /* 0x100275B2: je 0x100275dc */
L_100275B4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100275B4: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x100275B7: mov ecx, esi */
    PUSH32(esp, edi); /* 0x100275B9: push edi */
    RECOMP_CALL(sub_10027666); /* 0x100275BA: call 0x10027666 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100275E4u; /* 0x100275BF: mov dword ptr [esi], 0x100275e4 */
    MEM8(esi + 0x30) = (uint8_t)(1); /* 0x100275C5: mov byte ptr [esi + 0x30], 1 */
L_100275C9:
    PUSH32(esp, esi); /* 0x100275C9: push esi */
    ecx = ebx; /* 0x100275CA: mov ecx, ebx */
    RECOMP_CALL(sub_100274CC); /* 0x100275CC: call 0x100274cc */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x100275D1: pop edi */
    eax = esi; /* 0x100275D2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100275D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x100275D5: pop ebx */
    esp = ebp; /* 0x100275D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100275D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100275D9: ret 4 */
L_100275DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100275DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x100275DE: jmp 0x100275c9 */
L_10053132:
    esi = eax + (-0x34); /* 0x10053132: lea esi, [eax - 0x34] */
    RECOMP_BACKEDGE();
    goto L_10027595; /* 0x10053135: jmp 0x10027595 */
L_1005313A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005313A: push dword ptr [ebp + 8] */
    goto L_10053186; /* 0x1005313D: jmp 0x10053186 */
L_1005313F:
    MEM32(esp + 0x10) = ecx; /* 0x1005313F: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x18) = ecx; /* 0x10053143: mov dword ptr [esp + 0x18], ecx */
    MEM32(esp + 0x1C) = ecx; /* 0x10053147: mov dword ptr [esp + 0x1c], ecx */
    /* test esi, esi */ /* 0x1005314B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053181; /* 0x1005314D: jne 0x10053181 */
L_1005314F:
    PUSH32(esp, 0x3Cu); /* 0x1005314F: push 0x3c */
    RECOMP_CALL(sub_1000EE11); /* 0x10053151: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10053156: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10053158: pop ecx */
    /* test esi, esi */ /* 0x10053159: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100275DC; /* 0x1005315B: je 0x100275dc */
L_10053161:
    eax = esp + 0x10; /* 0x10053161: lea eax, [esp + 0x10] */
    ecx = esi; /* 0x10053165: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10053167: push eax */
    PUSH32(esp, edi); /* 0x10053168: push edi */
    RECOMP_CALL(sub_10027666); /* 0x10053169: call 0x10027666 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x1005316E: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x100531A0u; /* 0x10053172: mov dword ptr [esi], 0x100531a0 */
    MEM8(esi + 0x30) = (uint8_t)(2); /* 0x10053178: mov byte ptr [esi + 0x30], 2 */
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x1005317C: jmp 0x100275c9 */
L_10053181:
    eax = esp + 0x10; /* 0x10053181: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x10053185: push eax */
L_10053186:
    ecx = esi + 0x20; /* 0x10053186: lea ecx, [esi + 0x20] */
    MEM32(esi + 0x14) = 1; /* 0x10053189: mov dword ptr [esi + 0x14], 1 */
    RECOMP_CALL(sub_1002762F); /* 0x10053190: call 0x1002762f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x10053195: jmp 0x100275c9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100275E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100275E4u);

L_100275E4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1002760C; /* 0x100275E4: jg 0x1002760c */
L_100275E6:
    _seg_es = POP32_VAL(esp); /* 0x100275E6: pop es */
    { uint32_t _aa = MEM8(esi + 0x24), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100275E7: adc byte ptr [esi + 0x24], ch */
      MEM8(esi + 0x24) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x100275EA: pop es */
    { uint32_t _aa = MEM8(edx + 0x24), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100275EB: adc byte ptr [edx + 0x24], dh */
      MEM8(edx + 0x24) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x100275EE: pop es */
    { uint32_t _aa = MEM8(edx + (-0xFEFF8DC)), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100275EF: adc byte ptr [edx - 0xfeff8dc], cl */
      MEM8(edx + (-0xFEFF8DC)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    eax = eax & MEM32(edi); /* 0x100275F5: and eax, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100275F7: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8CFF1007u);
    eax = eax & 0x8CFF1007u; /* 0x100275F9: and eax, 0x8cff1007 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, _seg_es); /* 0x100275FE: push es */
    { uint32_t _aa = MEM8(eax + 0x26), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100275FF: adc byte ptr [eax + 0x26], al */
      MEM8(eax + 0x26) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10027602: pop es */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027603: adc byte ptr [ecx], dl */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10027609; /* 0x10027605: je 0x10027609 */
L_10027607:
    { uint32_t _aa = MEM8(esi + 0x55100724), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027607: adc byte ptr [esi + 0x55100724], ch */
      MEM8(esi + 0x55100724) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1002760D; /* falls through past a gap */
L_10027609:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(eax, LO8(eax) & 7); /* 0x10027609: and al, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002760B: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1002760E; /* falls through past a gap */
L_1002760C:
    PUSH32(esp, ebp); /* 0x1002760C: push ebp */
L_1002760D:
    ebp = esp; /* 0x1002760D: mov ebp, esp */
    goto L_1002760F; /* falls through past a gap */
L_1002760E:
    /* in: no port I/O under Win32 */ /* 0x1002760E: in al, dx */
L_1002760F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1002760F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10027612: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10027615: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp) = eax; /* 0x10027617: mov dword ptr [esp], eax */
    MEM32(esp + 0x8) = eax; /* 0x1002761A: mov dword ptr [esp + 8], eax */
    MEM32(esp + 0xC) = eax; /* 0x1002761E: mov dword ptr [esp + 0xc], eax */
    eax = esp; /* 0x10027622: lea eax, [esp] */
    PUSH32(esp, eax); /* 0x10027625: push eax */
    RECOMP_CALL(sub_10027571); /* 0x10027626: call 0x10027571 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002762B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002762D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002762E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002762F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002762Fu);

L_1002762F:
    PUSH32(esp, ebp); /* 0x1002762F: push ebp */
    ebp = esp; /* 0x10027630: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10027632: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10027635: push esi */
    esi = 0x0FFFFFFFu; /* 0x10027636: mov esi, 0xfffffff */
    eax = MEM32(edx); /* 0x1002763B: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx))); _flag_b = (uint32_t)((eax ^ MEM32(ecx)));
    eax = eax ^ MEM32(ecx); /* 0x1002763D: xor eax, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1002763F: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx) ^ eax));
    MEM32(ecx) = MEM32(ecx) ^ eax; /* 0x10027641: xor dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx); /* 0x10027643: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx))); _flag_b = (uint32_t)((eax ^ MEM32(ecx)));
    eax = eax ^ MEM32(ecx); /* 0x10027645: xor eax, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x10027647: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(edx))); _flag_b = (uint32_t)((eax ^ MEM32(edx)));
    eax = eax ^ MEM32(edx); /* 0x10027649: xor eax, dword ptr [edx] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1002764B: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x1002764D: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x10027650: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x4); /* 0x10027653: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x10027656: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0xC); /* 0x10027659: mov eax, dword ptr [edx + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x1002765C: mov dword ptr [ecx + 0xc], eax */
    eax = ecx; /* 0x1002765F: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x10027661: pop esi */
    ebp = POP32_VAL(esp); /* 0x10027662: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10027663: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10027666(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027666u);

L_10027666:
    PUSH32(esp, ebp); /* 0x10027666: push ebp */
    ebp = esp; /* 0x10027667: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10027669: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1002766C: push esi */
    PUSH32(esp, edi); /* 0x1002766D: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002766E: push dword ptr [ebp + 0xc] */
    edi = ecx; /* 0x10027671: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10027673: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10027675: inc esi */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x10027676: mov dword ptr [edi + 4], eax */
    ecx = edi + 0x20; /* 0x10027679: lea ecx, [edi + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002767C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x100276BCu; /* 0x1002767E: mov dword ptr [edi], 0x100276bc */
    MEM32(edi + 0x8) = eax; /* 0x10027684: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = eax; /* 0x10027687: mov dword ptr [edi + 0xc], eax */
    MEM32(edi + 0x10) = eax; /* 0x1002768A: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = eax; /* 0x1002768D: mov dword ptr [edi + 0x14], eax */
    MEM32(ecx) = eax; /* 0x10027690: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x8) = eax; /* 0x10027692: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x10027695: mov dword ptr [ecx + 0xc], eax */
    MEM32(edi + 0x14) = esi; /* 0x10027698: mov dword ptr [edi + 0x14], esi */
    RECOMP_CALL(sub_1002762F); /* 0x1002769B: call 0x1002762f */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x100276A0: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14Cu; /* 0x100276A3: add eax, 0x14c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x100276A8: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100276AC: inc esi */
    _flag_k = FK_INC;
    MEM32(edi + 0x1C) = esi; /* 0x100276AD: mov dword ptr [edi + 0x1c], esi */
    eax = edi; /* 0x100276B0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100276B2: pop edi */
    esi = POP32_VAL(esp); /* 0x100276B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x100276B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100276B5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100276BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100276BCu);

L_100276BC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_100276E4; /* 0x100276BC: jg 0x100276e4 */
L_100276BE:
    _seg_es = POP32_VAL(esp); /* 0x100276BE: pop es */
    { uint32_t _aa = MEM8(esi + 0x24), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276BF: adc byte ptr [esi + 0x24], ch */
      MEM8(esi + 0x24) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x100276C2: pop es */
    { uint32_t _aa = MEM8(edx + 0x24), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276C3: adc byte ptr [edx + 0x24], dh */
      MEM8(edx + 0x24) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x100276C6: pop es */
    { uint32_t _aa = MEM8(edx + (-0xFEFF8DC)), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276C7: adc byte ptr [edx - 0xfeff8dc], cl */
      MEM8(edx + (-0xFEFF8DC)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    eax = eax & MEM32(edi); /* 0x100276CD: and eax, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(edx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276CF: adc byte ptr [edx], al */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46D31007u);
    eax = eax & 0x46D31007u; /* 0x100276D1: and eax, 0x46d31007 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100276D6: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100276D8: inc eax */
    _flag_k = FK_INC;
    _seg_es = POP32_VAL(esp); /* 0x100276D9: pop es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276DB: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100276DD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100276DE: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _a, _b; _a = LO8(eax); _b = MEM8(edi); edi += _df; _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); } /* 0x100276E0: scasb al, byte ptr es:[edi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(eax, LO8(eax) & 7); /* 0x100276E1: and al, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276E3: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100276E5; /* falls through past a gap */
L_100276E4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276E6; /* falls through past a gap */
L_100276E5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276E7; /* falls through past a gap */
L_100276E6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276E8; /* falls through past a gap */
L_100276E7:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E7: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276E9; /* falls through past a gap */
L_100276E8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276EA; /* falls through past a gap */
L_100276E9:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276EB; /* falls through past a gap */
L_100276EA:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276EA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276EC; /* falls through past a gap */
L_100276EB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276EB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276ED; /* falls through past a gap */
L_100276EC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276EC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276EE; /* falls through past a gap */
L_100276ED:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276ED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276EF; /* falls through past a gap */
L_100276EE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276EE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276F0; /* falls through past a gap */
L_100276EF:
    _flag_a = (uint32_t)(MEM8(eax + 0x9)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x9) = (uint8_t)(MEM8(eax + 0x9) + HI8(ebx)); /* 0x100276EF: add byte ptr [eax + 9], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100276F2; /* falls through past a gap */
L_100276F0:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100276FB; /* 0x100276F0: js 0x100276fb */
L_100276F2:
    PUSH32(esp, _seg_cs); /* 0x100276F2: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276F3: adc al, bh */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_100276F9; /* 0x100276F5: jbe 0x100276f9 */
L_100276F7:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100276F7: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100276F9:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276F9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100276FB:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276FB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100276FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100276FF: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027701: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x10027703: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_A)) goto L_10027709; /* 0x10027705: ja 0x10027709 */
L_10027707:
    { uint32_t _aa = MEM8(edi + esi * 2), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027707: adc byte ptr [edi + esi*2], dl */
      MEM8(edi + esi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1002770A; /* falls through past a gap */
L_10027709:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_1002770D; /* 0x10027709: ja 0x1002770d */
    goto L_1002770B; /* falls through past a gap */
L_1002770A:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002770A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1002770C; /* falls through past a gap */
L_1002770B:
    { uint32_t _aa = HI8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002770B: adc ah, al */
      SET_HI8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1002770D; /* falls through past a gap */
L_1002770C:
    edi = MEM32(ebp + 0x2); _seg_es = MEM16(ebp + 0x2 + 4); /* 0x1002770C: les edi, ptr [ebp + 2] */
    goto L_1002770F; /* falls through past a gap */
L_1002770D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_10027711; /* 0x1002770D: jge 0x10027711 */
L_1002770F:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002770F: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10027711:
    /* nop */ /* 0x10027711: nop  */
    /* nop */ /* 0x10027712: nop  */
    /* nop */ /* 0x10027713: nop  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1002771F; /* 0x10027714: js 0x1002771f */
L_10027716:
    PUSH32(esp, _seg_cs); /* 0x10027716: push cs */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027717: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027719: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002771B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002771D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1002771F:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1002771F: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027721u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10027A0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027A0Bu);

L_10027A0B:
    edx = MEM32(ecx + 0xB8); /* 0x10027A0B: mov edx, dword ptr [ecx + 0xb8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x80));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x80); /* 0x10027A11: add edx, dword ptr [ecx + 0x80] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0xBC); /* 0x10027A17: mov eax, dword ptr [ecx + 0xbc] */
    /* cmp eax, edx */ /* 0x10027A1D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10027A23; /* 0x10027A1F: jb 0x10027a23 */
L_10027A21:
    eax = edx; /* 0x10027A21: mov eax, edx */
L_10027A23:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10027A23: ret  */
    RECOMP_REGS_OUT();
}

void sub_10027A24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027A24u);

L_10027A24:
    PUSH32(esp, ebp); /* 0x10027A24: push ebp */
    ebp = esp; /* 0x10027A25: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10027A27: push ecx */
    PUSH32(esp, ebx); /* 0x10027A28: push ebx */
    PUSH32(esp, esi); /* 0x10027A29: push esi */
    PUSH32(esp, edi); /* 0x10027A2A: push edi */
    ebx = ecx; /* 0x10027A2B: mov ebx, ecx */
    RECOMP_CALL(sub_10024749); /* 0x10027A2D: call 0x10024749 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10027A32: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x30u); /* 0x10027A35: push 0x30 */
    PUSH32(esp, 0); /* 0x10027A37: push 0 */
    esi = edi + 0x40; /* 0x10027A39: lea esi, [edi + 0x40] */
    PUSH32(esp, esi); /* 0x10027A3C: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10027A3D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10027A42: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x10027A45: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x10027A47: push esi */
    PUSH32(esp, edi); /* 0x10027A48: push edi */
    PUSH32(esp, 0); /* 0x10027A49: push 0 */
    RECOMP_CALL(sub_10027AAF); /* 0x10027A4B: call 0x10027aaf */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x10027A50: mov ecx, edi */
    RECOMP_CALL(sub_10027A0B); /* 0x10027A52: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x10027A57: mov dword ptr [ebp - 4], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x10027A5A: fild dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x10027A5D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052CEC; /* 0x10027A5F: js 0x10052cec */
L_10027A65:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10027A65: mov al, byte ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x10027A68: fstp qword ptr [esi + 0x20] */
    MEM8(esi + 0x28) = (uint8_t)(LO8(eax)); /* 0x10027A6B: mov byte ptr [esi + 0x28], al */
    eax = MEM32(ebx + 0x54); /* 0x10027A6E: mov eax, dword ptr [ebx + 0x54] */
    MEM32(ebp + 0xC) = 1; /* 0x10027A71: mov dword ptr [ebp + 0xc], 1 */
    MEM32(eax) = esi; /* 0x10027A78: mov dword ptr [eax], esi */
    edi = MEM32(ebx + 0x64); /* 0x10027A7A: mov edi, dword ptr [ebx + 0x64] */
    /* test edi, edi */ /* 0x10027A7D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10027AAB; /* 0x10027A7F: je 0x10027aab */
L_10027A81:
    edi = MEM32(edi + 0x18); /* 0x10027A81: mov edi, dword ptr [edi + 0x18] */
L_10027A84:
    /* test edi, edi */ /* 0x10027A84: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10027AA2; /* 0x10027A86: je 0x10027aa2 */
L_10027A88:
    eax = MEM32(ebp + 0x8); /* 0x10027A88: mov eax, dword ptr [ebp + 8] */
L_10027A8B:
    /* cmp edi, eax */ /* 0x10027A8B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052CF7; /* 0x10027A8D: jne 0x10052cf7 */
L_10027A93:
    /* cmp edi, MEM32(ebx + 0x64) */ /* 0x10027A93: cmp edi, dword ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052D42; /* 0x10027A96: jne 0x10052d42 */
L_10027A9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10027A9C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10027A9E:
    /* test edi, edi */ /* 0x10027A9E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10027A8B; /* 0x10027AA0: jne 0x10027a8b */
L_10027AA2:
    edi = POP32_VAL(esp); /* 0x10027AA2: pop edi */
    esi = POP32_VAL(esp); /* 0x10027AA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x10027AA4: pop ebx */
    esp = ebp; /* 0x10027AA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027AA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10027AA8: ret 8 */
L_10027AAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10027AAB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10027A84; /* 0x10027AAD: jmp 0x10027a84 */
L_10052CEC:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x10052CEC: fadd qword ptr [0x10067ce0] */
    RECOMP_BACKEDGE();
    goto L_10027A65; /* 0x10052CF2: jmp 0x10027a65 */
L_10052CF7:
    PUSH32(esp, 0x30u); /* 0x10052CF7: push 0x30 */
    esi = edi + 0x40; /* 0x10052CF9: lea esi, [edi + 0x40] */
    PUSH32(esp, 0); /* 0x10052CFC: push 0 */
    PUSH32(esp, esi); /* 0x10052CFE: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10052CFF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10052D04: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x10052D07: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x10052D09: push esi */
    PUSH32(esp, edi); /* 0x10052D0A: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10052D0B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10027AAF); /* 0x10052D0E: call 0x10027aaf */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x10052D13: mov ecx, edi */
    RECOMP_CALL(sub_10027A0B); /* 0x10052D15: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x10052D1A: mov dword ptr [ebp - 4], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x10052D1D: fild dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x10052D20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10052D2A; /* 0x10052D22: jns 0x10052d2a */
L_10052D24:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x10052D24: fadd qword ptr [0x10067ce0] */
L_10052D2A:
    ecx = MEM32(ebp + 0xC); /* 0x10052D2A: mov ecx, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x10052D2D: fstp qword ptr [esi + 0x20] */
    eax = MEM32(ebx + 0x54); /* 0x10052D30: mov eax, dword ptr [ebx + 0x54] */
    MEM32(eax + ecx * 4) = esi; /* 0x10052D33: mov dword ptr [eax + ecx*4], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052D36: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x10052D37: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x10052D3A: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_BACKEDGE();
    goto L_10027A93; /* 0x10052D3D: jmp 0x10027a93 */
L_10052D42:
    edi = MEM32(edi + 0x18); /* 0x10052D42: mov edi, dword ptr [edi + 0x18] */
    RECOMP_BACKEDGE();
    goto L_10027A9E; /* 0x10052D45: jmp 0x10027a9e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027AAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027AAFu);

L_10027AAF:
    PUSH32(esp, ebp); /* 0x10027AAF: push ebp */
    ebp = esp; /* 0x10027AB0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10027AB2: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10027AB5: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x10027AB8: fldz  */
    PUSH32(esp, esi); /* 0x10027ABA: push esi */
    PUSH32(esp, edi); /* 0x10027ABB: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10027ABC: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10027ABF: mov dword ptr [ebp - 4], ecx */
    MEM32(edi) = eax; /* 0x10027AC2: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0xC); /* 0x10027AC4: mov eax, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x10027AC7: fstp qword ptr [edi + 8] */
    MEM32(edi + 0x10) = eax; /* 0x10027ACA: mov dword ptr [edi + 0x10], eax */
    esi = MEM32(eax + 0x10); /* 0x10027ACD: mov esi, dword ptr [eax + 0x10] */
    /* test esi, esi */ /* 0x10027AD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10027B0A; /* 0x10027AD2: je 0x10027b0a */
L_10027AD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10027AD4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10027AD6: push ebx */
    ebx = edx; /* 0x10027AD7: mov ebx, edx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10027AD9: mov dword ptr [ebp - 8], ebx */
    /* cmp MEM32(ecx + 0x18), edx */ /* 0x10027ADC: cmp dword ptr [ecx + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10027B09; /* 0x10027ADF: jbe 0x10027b09 */
L_10027AE1:
    eax = edx; /* 0x10027AE1: mov eax, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2Cu; /* 0x10027AE3: add esi, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x10027AE6: mov dword ptr [ebp - 0xc], eax */
L_10027AE9:
    MEM32(esi + (-0x4)) = edx; /* 0x10027AE9: mov dword ptr [esi - 4], edx */
    MEM32(esi) = edx; /* 0x10027AEC: mov dword ptr [esi], edx */
    /* cmp MEM32(esi + (-0x10)), edx */ /* 0x10027AEE: cmp dword ptr [esi - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(esi + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10052C82; /* 0x10027AF1: ja 0x10052c82 */
L_10027AF7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10027AF7: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x10027AF8: add eax, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x10027AFB: add esi, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x10027AFE: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x10027B01: mov dword ptr [ebp - 0xc], eax */
    /* cmp ebx, MEM32(ecx + 0x18) */ /* 0x10027B04: cmp ebx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10027AE9; /* 0x10027B07: jb 0x10027ae9 */
L_10027B09:
    ebx = POP32_VAL(esp); /* 0x10027B09: pop ebx */
L_10027B0A:
    edi = POP32_VAL(esp); /* 0x10027B0A: pop edi */
    esi = POP32_VAL(esp); /* 0x10027B0B: pop esi */
    esp = ebp; /* 0x10027B0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027B0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10027B0F: ret 0xc */
L_10052C82:
    MEM32(ebp + 0x10) = edx; /* 0x10052C82: mov dword ptr [ebp + 0x10], edx */
    /* cmp MEM32(esi + (-0x28)), edx */ /* 0x10052C85: cmp dword ptr [esi - 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + (-0x28))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10027AF7; /* 0x10052C88: jbe 0x10027af7 */
L_10052C8E:
    ebx = MEM32(ebp + (-0x4)); /* 0x10052C8E: mov ebx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x10052C91: mov ecx, edx */
    MEM32(ebp + 0xC) = edx; /* 0x10052C93: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + 0x8) = edx; /* 0x10052C96: mov dword ptr [ebp + 8], edx */
L_10052C99:
    edx = MEM32(esi + 0x4); /* 0x10052C99: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x8); /* 0x10052C9C: add edx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx), 4 */ /* 0x10052C9F: cmp dword ptr [edx], 4 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(edx + 0x30) = (uint8_t)(0); /* 0x10052CA2: mov byte ptr [edx + 0x30], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052CCE; /* 0x10052CA6: jne 0x10052cce */
L_10052CA8:
    /* cmp MEM32(edx + 0x18), 0 */ /* 0x10052CA8: cmp dword ptr [edx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052CCE; /* 0x10052CAC: jne 0x10052cce */
L_10052CAE:
    ecx = MEM32(ebx + 0x48); /* 0x10052CAE: mov ecx, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10052CB1: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x10052CB3: push edi */
    eax = MEM32(ecx + 0x20); /* 0x10052CB4: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x10052CB7: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10052CBA: push eax */
    PUSH32(esp, ecx); /* 0x10052CBB: push ecx */
    PUSH32(esp, edx); /* 0x10052CBC: push edx */
    eax = esi + (-0x2C); /* 0x10052CBD: lea eax, [esi - 0x2c] */
    ecx = ebx; /* 0x10052CC0: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x10052CC2: push eax */
    RECOMP_CALL(sub_10070BFA); /* 0x10052CC3: call 0x10070bfa */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x10052CC8: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x10052CCB: mov ecx, dword ptr [ebp + 0x10] */
L_10052CCE:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x34u; /* 0x10052CCE: add dword ptr [ebp + 8], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052CD2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x24u; /* 0x10052CD3: add dword ptr [ebp + 0xc], 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x10052CD7: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, MEM32(esi + (-0x28)) */ /* 0x10052CDA: cmp ecx, dword ptr [esi - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10052C99; /* 0x10052CDD: jb 0x10052c99 */
L_10052CDF:
    ebx = MEM32(ebp + (-0x8)); /* 0x10052CDF: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10052CE2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x10052CE4: mov ecx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_10027AF7; /* 0x10052CE7: jmp 0x10027af7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027B12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027B12u);

L_10027B12:
    PUSH32(esp, ecx); /* 0x10027B12: push ecx */
    /* cmp MEM32(0x100E03E4), 4 */ /* 0x10027B13: cmp dword ptr [0x100e03e4], 4 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10027B28; /* 0x10027B1A: jl 0x10027b28 */
L_10027B1C:
    RECOMP_CALL(sub_10027B2F); /* 0x10027B1C: call 0x10027b2f */
    RECOMP_FLAGS_IN();
L_10027B21:
    MEM32(0x100E0ABC) = eax; /* 0x10027B21: mov dword ptr [0x100e0abc], eax */
    ecx = POP32_VAL(esp); /* 0x10027B26: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10027B27: ret  */
L_10027B28:
    RECOMP_CALL(sub_1006EEBE); /* 0x10027B28: call 0x1006eebe */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10027B21; /* 0x10027B2D: jmp 0x10027b21 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027B2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027B2Fu);

L_10027B2F:
    PUSH32(esp, ebp); /* 0x10027B2F: push ebp */
    ebp = esp; /* 0x10027B30: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10027B32: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10027B35: push ebx */
    PUSH32(esp, esi); /* 0x10027B36: push esi */
    PUSH32(esp, edi); /* 0x10027B37: push edi */
    PUSH32(esp, 0x10027BACu); /* 0x10027B38: push 0x10027bac */
    ebx = ecx; /* 0x10027B3D: mov ebx, ecx */
    PUSH32(esp, 0x1001FB64u); /* 0x10027B3F: push 0x1001fb64 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10027B44: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x10027B47: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10027B4D: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x10027B4E: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10027B54: mov edi, eax */
    /* test edi, edi */ /* 0x10027B56: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005206F; /* 0x10027B58: je 0x1005206f */
L_10027B5E:
    PUSH32(esp, 0x100E0AA4u); /* 0x10027B5E: push 0x100e0aa4 */
    PUSH32(esp, 0); /* 0x10027B63: push 0 */
    PUSH32(esp, ebx); /* 0x10027B65: push ebx */
    RECOMP_ICALL(edi); /* 0x10027B66: call edi */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E500C); /* 0x10027B68: mov esi, dword ptr [0x100e500c] */
    RECOMP_ICALL(esi); /* 0x10027B6E: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x10027B70: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005207B; /* 0x10027B73: jne 0x1005207b */
L_10027B79:
    PUSH32(esp, MEM32(0x100E0AA4)); /* 0x10027B79: push dword ptr [0x100e0aa4] */
    RECOMP_CALL(sub_1000ED30); /* 0x10027B7F: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10027B84: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10027B86: pop ecx */
    /* test ebx, ebx */ /* 0x10027B87: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052083; /* 0x10027B89: je 0x10052083 */
L_10027B8F:
    PUSH32(esp, 0x100E0AA4u); /* 0x10027B8F: push 0x100e0aa4 */
    PUSH32(esp, ebx); /* 0x10027B94: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10027B95: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x10027B98: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10027B9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005207B; /* 0x10027B9C: je 0x1005207b */
L_10027BA2:
    edi = POP32_VAL(esp); /* 0x10027BA2: pop edi */
    esi = POP32_VAL(esp); /* 0x10027BA3: pop esi */
    eax = ebx; /* 0x10027BA4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10027BA6: pop ebx */
    esp = ebp; /* 0x10027BA7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10027BA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10027BAA: ret  */
L_1005206F:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005206F: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052075: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100520A9; /* 0x10052077: jg 0x100520a9 */
L_10052079:
    goto L_100520B1; /* 0x10052079: jmp 0x100520b1 */
L_1005207B:
    RECOMP_ICALL(esi); /* 0x1005207B: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005207D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100520A9; /* 0x1005207F: jg 0x100520a9 */
L_10052081:
    goto L_100520B1; /* 0x10052081: jmp 0x100520b1 */
L_10052083:
    PUSH32(esp, 1); /* 0x10052083: push 1 */
    eax = ebp + (-0x4); /* 0x10052085: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x1002C7ECu; /* 0x10052088: mov dword ptr [ebp - 4], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x1005208F: push eax */
    ecx = ebp + (-0x10); /* 0x10052090: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10033A4A); /* 0x10052093: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x1002D1CCu; /* 0x10052098: mov dword ptr [ebp - 0x10], 0x1002d1cc */
    eax = ebp + (-0x10); /* 0x1005209F: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x1002C7FCu); /* 0x100520A2: push 0x1002c7fc */
    goto L_100520C2; /* 0x100520A7: jmp 0x100520c2 */
L_100520A9:
    eax = (uint32_t)LO16(eax); /* 0x100520A9: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x100520AC: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100520B1:
    PUSH32(esp, eax); /* 0x100520B1: push eax */
    ecx = ebp + (-0x14); /* 0x100520B2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x100520B5: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x100520BA: push 0x100dcf40 */
    eax = ebp + (-0x14); /* 0x100520BF: lea eax, [ebp - 0x14] */
L_100520C2:
    PUSH32(esp, eax); /* 0x100520C2: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100520C3: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100520C8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027BAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027BACu);

L_10027BAC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10027BAC: inc edi */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10027BFC; /* 0x10027BAD: je 0x10027bfc */
L_10027BB0:
    /* outsd: no port I/O under Win32 */ /* 0x10027BB0: outsd dx, dword ptr [esi] */
    esp = (uint32_t)((int32_t)MEM32(ebp + edi + 0x61) * (int32_t)0x6F72506Cu); /* 0x10027BB1: imul esp, dword ptr [bp + di + 0x61], 0x6f72506c */
    void_lift_trap(0x10027BB9u, "arpl word ptr [ebp + 0x73], sp");
    if ((_cf == 0)) goto L_10027C2D; /* 0x10027BBC: jae 0x10027c2d */
L_10027BBE:
    if ((_cf != 0)) goto L_10027C09; /* 0x10027BBE: jb 0x10027c09 */
L_10027BC0:
    /* outsb: no port I/O under Win32 */ /* 0x10027BC0: outsb dx, byte ptr [esi] */
    void_lift_trap(0x10027BC1u, "outsw dx, word ptr [esi]");
    if ((_cf != 0)) goto L_10027C32; /* 0x10027BC3: jb 0x10027c32 */
L_10027BC5:
    POPAD(); /* 0x10027BC5: popal  */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10027C31; /* 0x10027BC6: je 0x10027c31 */
L_10027BC8:
    /* outsd: no port I/O under Win32 */ /* 0x10027BC8: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x10027BC9: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10027BCA: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10027BCD; /* 0x10027BCB: js 0x10027bcd */
L_10027BCD:
    /* nop */ /* 0x10027BCD: nop  */
    /* nop */ /* 0x10027BCE: nop  */
    /* nop */ /* 0x10027BCF: nop  */
    /* in: no port I/O under Win32 */ /* 0x10027BD0: in al, dx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NP, _cf)) goto L_10027BD5; /* 0x10027BD1: jnp 0x10027bd5 */
L_10027BD3:
    { uint32_t _aa = MEM8(esi + 0x5D), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BD3: adc byte ptr [esi + 0x5d], dh */
      MEM8(esi + 0x5D) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027BD6; /* falls through past a gap */
L_10027BD5:
    ebp = POP32_VAL(esp); /* 0x10027BD5: pop ebp */
L_10027BD6:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BD6: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NO)) goto L_10027BDA; /* 0x10027BD8: jno 0x10027bda */
L_10027BDA:
    _seg_es = POP32_VAL(esp); /* 0x10027BDA: pop es */
    { uint32_t _aa = MEM8(edi + ecx * 2), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BDB: adc byte ptr [edi + ecx*2], cl */
      MEM8(edi + ecx * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BDE: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10027BE0: clc  */
    PUSH32(esp, _seg_es); /* 0x10027BE2: push es */
    { uint32_t _aa = MEM8(esi), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BE3: adc byte ptr [esi], bl */
      MEM8(esi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10027BE5: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BE6: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10027BE8: clc  */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x10027BE9: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BEB: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0xE)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ecx + 0xE) = (uint8_t)(MEM8(eax + ecx + 0xE) + HI8(ecx)); /* 0x10027BF7: add byte ptr [eax + ecx + 0xe], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BFB: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027BFD; /* falls through past a gap */
L_10027BFC:
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x10)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + eax + 0x10) = (uint8_t)(MEM8(edx + eax + 0x10) + HI8(ebx)); /* 0x10027BFC: add byte ptr [edx + eax + 0x10], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C00; /* falls through past a gap */
L_10027BFD:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_10027C01; /* 0x10027BFD: jl 0x10027c01 */
L_10027BFF:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BFF: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C01; /* falls through past a gap */
L_10027C00:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C02; /* falls through past a gap */
L_10027C01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C03; /* falls through past a gap */
L_10027C02:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C04; /* falls through past a gap */
L_10027C03:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C03: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C05; /* falls through past a gap */
L_10027C04:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C06; /* falls through past a gap */
L_10027C05:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C05: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C07; /* falls through past a gap */
L_10027C06:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C08; /* falls through past a gap */
L_10027C07:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x10027C07: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C09; /* falls through past a gap */
L_10027C08:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x10027C08: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C0A; /* falls through past a gap */
L_10027C09:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C09: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C0B; /* falls through past a gap */
L_10027C0A:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C0C; /* falls through past a gap */
L_10027C0B:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x10027C0B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C0D; /* falls through past a gap */
L_10027C0C:
    { uint32_t _aa = MEM8(edx + eax + 0x10), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C0C: adc byte ptr [edx + eax + 0x10], bh */
      MEM8(edx + eax + 0x10) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C10; /* falls through past a gap */
L_10027C0D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C11; /* 0x10027C0D: jl 0x10027c11 */
L_10027C0F:
    { uint32_t _aa = MEM8(esp + edi * 2), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C0F: adc byte ptr [esp + edi*2], bl */
      MEM8(esp + edi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C12; /* falls through past a gap */
L_10027C10:
    { uint32_t _sa = LO8(eax), _sb = 0x7Cu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C10: sbb al, 0x7c */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C12; /* falls through past a gap */
L_10027C11:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C15; /* 0x10027C11: jl 0x10027c15 */
    goto L_10027C13; /* falls through past a gap */
L_10027C12:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C12: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C14; /* falls through past a gap */
L_10027C13:
    { uint32_t _aa = MEM8(eax + 0x7C), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C13: adc byte ptr [eax + 0x7c], al */
      MEM8(eax + 0x7C) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C16; /* falls through past a gap */
L_10027C14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10027C14: inc eax */
    _flag_k = FK_INC;
L_10027C15:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C19; /* 0x10027C15: jl 0x10027c19 */
    goto L_10027C17; /* falls through past a gap */
L_10027C16:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C16: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C18; /* falls through past a gap */
L_10027C17:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C17: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C19; /* falls through past a gap */
L_10027C18:
    _flag_a = (uint32_t)(MEM8(eax + 0x86C9090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x86C9090) = (uint8_t)(MEM8(eax + 0x86C9090) + LO8(edx)); /* 0x10027C18: add byte ptr [eax + 0x86c9090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C1E; /* falls through past a gap */
L_10027C19:
    /* nop */ /* 0x10027C19: nop  */
    /* nop */ /* 0x10027C1A: nop  */
    /* nop */ /* 0x10027C1B: nop  */
    void_lift_trap(0x10027C1Cu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)((MEM8(esi) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) | LO8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | LO8(ecx)); /* 0x10027C1D: or byte ptr [esi], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10027C1F; /* falls through past a gap */
L_10027C1E:
    PUSH32(esp, _seg_cs); /* 0x10027C1E: push cs */
L_10027C1F:
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C1F: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C21: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C23: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10027C27: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027C29u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10027C2D:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C2D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C2F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C32; /* falls through past a gap */
L_10027C31:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C31: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C33; /* falls through past a gap */
L_10027C32:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C32: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C34; /* falls through past a gap */
L_10027C33:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C33: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C35; /* falls through past a gap */
L_10027C34:
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x10)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + eax + 0x10) = (uint8_t)(MEM8(edx + eax + 0x10) + HI8(ebx)); /* 0x10027C34: add byte ptr [edx + eax + 0x10], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C38; /* falls through past a gap */
L_10027C35:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_10027C39; /* 0x10027C35: jl 0x10027c39 */
L_10027C37:
    { uint32_t _aa = MEM8(eax + 0x7C), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C37: adc byte ptr [eax + 0x7c], al */
      MEM8(eax + 0x7C) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C3A; /* falls through past a gap */
L_10027C38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10027C38: inc eax */
    _flag_k = FK_INC;
L_10027C39:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C3D; /* 0x10027C39: jl 0x10027c3d */
    goto L_10027C3B; /* falls through past a gap */
L_10027C3A:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C3A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C3C; /* falls through past a gap */
L_10027C3B:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C3B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C3D; /* falls through past a gap */
L_10027C3C:
    _flag_a = (uint32_t)(MEM8(eax + 0x7DC9090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x7DC9090) = (uint8_t)(MEM8(eax + 0x7DC9090) + LO8(edx)); /* 0x10027C3C: add byte ptr [eax + 0x7dc9090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C42; /* falls through past a gap */
L_10027C3D:
    /* nop */ /* 0x10027C3D: nop  */
    /* nop */ /* 0x10027C3E: nop  */
    /* nop */ /* 0x10027C3F: nop  */
    _st[0] += *(double*)ADDR(edi); /* 0x10027C40: fadd qword ptr [edi] */
L_10027C42:
    PUSH32(esp, _seg_cs); /* 0x10027C42: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C43: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C47: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10027C4B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027C4Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10027BD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027BD4u);

L_10027BD4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_10027C33; /* 0x10027BD4: jbe 0x10027c33 */
L_10027BD6:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BD6: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NO)) goto L_10027BDA; /* 0x10027BD8: jno 0x10027bda */
L_10027BDA:
    _seg_es = POP32_VAL(esp); /* 0x10027BDA: pop es */
    { uint32_t _aa = MEM8(edi + ecx * 2), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BDB: adc byte ptr [edi + ecx*2], cl */
      MEM8(edi + ecx * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BDE: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10027BE0: clc  */
    PUSH32(esp, _seg_es); /* 0x10027BE2: push es */
    { uint32_t _aa = MEM8(esi), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BE3: adc byte ptr [esi], bl */
      MEM8(esi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10027BE5: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027BE6: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10027BE8: clc  */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(eax)); /* 0x10027BE9: add byte ptr [edi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BEB: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BED: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BEF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027BF5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0xE)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + ecx + 0xE) = (uint8_t)(MEM8(eax + ecx + 0xE) + HI8(ecx)); /* 0x10027BF7: add byte ptr [eax + ecx + 0xe], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BFB: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C01; /* 0x10027BFD: jl 0x10027c01 */
L_10027BFF:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027BFF: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10027C01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C03: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C05: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x10027C07: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C09: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x10027C0B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_10027C11; /* 0x10027C0D: jl 0x10027c11 */
L_10027C0F:
    { uint32_t _aa = MEM8(esp + edi * 2), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C0F: adc byte ptr [esp + edi*2], bl */
      MEM8(esp + edi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C12; /* falls through past a gap */
L_10027C11:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C15; /* 0x10027C11: jl 0x10027c15 */
    goto L_10027C13; /* falls through past a gap */
L_10027C12:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C12: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C14; /* falls through past a gap */
L_10027C13:
    { uint32_t _aa = MEM8(eax + 0x7C), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C13: adc byte ptr [eax + 0x7c], al */
      MEM8(eax + 0x7C) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C16; /* falls through past a gap */
L_10027C14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10027C14: inc eax */
    _flag_k = FK_INC;
L_10027C15:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C19; /* 0x10027C15: jl 0x10027c19 */
    goto L_10027C17; /* falls through past a gap */
L_10027C16:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C16: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C18; /* falls through past a gap */
L_10027C17:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C17: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C19; /* falls through past a gap */
L_10027C18:
    _flag_a = (uint32_t)(MEM8(eax + 0x86C9090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x86C9090) = (uint8_t)(MEM8(eax + 0x86C9090) + LO8(edx)); /* 0x10027C18: add byte ptr [eax + 0x86c9090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C1E; /* falls through past a gap */
L_10027C19:
    /* nop */ /* 0x10027C19: nop  */
    /* nop */ /* 0x10027C1A: nop  */
    /* nop */ /* 0x10027C1B: nop  */
    void_lift_trap(0x10027C1Cu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)((MEM8(esi) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi) | LO8(ecx))) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | LO8(ecx)); /* 0x10027C1D: or byte ptr [esi], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10027C1F; /* falls through past a gap */
L_10027C1E:
    PUSH32(esp, _seg_cs); /* 0x10027C1E: push cs */
L_10027C1F:
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C1F: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C21: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C23: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10027C27: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027C29u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10027C33:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C33: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_10027C39; /* 0x10027C35: jl 0x10027c39 */
L_10027C37:
    { uint32_t _aa = MEM8(eax + 0x7C), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C37: adc byte ptr [eax + 0x7c], al */
      MEM8(eax + 0x7C) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C3A; /* falls through past a gap */
L_10027C39:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10027C3D; /* 0x10027C39: jl 0x10027c3d */
    goto L_10027C3B; /* falls through past a gap */
L_10027C3A:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027C3A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C3C; /* falls through past a gap */
L_10027C3B:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C3B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027C3D; /* falls through past a gap */
L_10027C3C:
    _flag_a = (uint32_t)(MEM8(eax + 0x7DC9090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x7DC9090) = (uint8_t)(MEM8(eax + 0x7DC9090) + LO8(edx)); /* 0x10027C3C: add byte ptr [eax + 0x7dc9090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027C42; /* falls through past a gap */
L_10027C3D:
    /* nop */ /* 0x10027C3D: nop  */
    /* nop */ /* 0x10027C3E: nop  */
    /* nop */ /* 0x10027C3F: nop  */
    _st[0] += *(double*)ADDR(edi); /* 0x10027C40: fadd qword ptr [edi] */
L_10027C42:
    PUSH32(esp, _seg_cs); /* 0x10027C42: push cs */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027C43: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C47: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027C49: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10027C4B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027C4Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10027EFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027EFCu);

L_10027EFC:
    void_lift_trap(0x10027EFCu, "into ");
    PUSH32(esp, ebp); /* 0x10027EFD: push ebp */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027EFE: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10027F5C; /* 0x10027F00: js 0x10027f5c */
L_10027F02:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027F02: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { _cf = !(recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 1u); _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x10027F04: cmc  */
    MEM32(esi) = 0x06CA7F10u; /* 0x10027F05: mov dword ptr [esi], 0x6ca7f10 */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F0B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F0F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F11: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F13: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F15: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + eax) = (uint8_t)(MEM8(edi + eax) + LO8(eax)); /* 0x10027F17: add byte ptr [edi + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x10027F1A: push cs */
    { uint32_t _aa = MEM8(eax), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F1B: adc byte ptr [eax], ah */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10027F21; /* 0x10027F1D: jg 0x10027f21 */
L_10027F1F:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F1F: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10027F21:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F21: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F23: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F25: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x10027F27: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F29: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x10027F2B: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_G)) goto L_10027F31; /* 0x10027F2D: jg 0x10027f31 */
L_10027F2F:
    { uint32_t _aa = MEM8(edi + edi * 2), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F2F: adc byte ptr [edi + edi*2], bh */
      MEM8(edi + edi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027F32; /* falls through past a gap */
L_10027F31:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10027F35; /* 0x10027F31: jg 0x10027f35 */
    goto L_10027F33; /* falls through past a gap */
L_10027F32:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027F32: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027F34; /* falls through past a gap */
L_10027F33:
    { uint32_t _aa = MEM8(eax + 0x7F), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F33: adc byte ptr [eax + 0x7f], bl */
      MEM8(eax + 0x7F) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027F36; /* falls through past a gap */
L_10027F34:
    eax = POP32_VAL(esp); /* 0x10027F34: pop eax */
L_10027F35:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10027F39; /* 0x10027F35: jg 0x10027f39 */
    goto L_10027F37; /* falls through past a gap */
L_10027F36:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10027F36: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027F38; /* falls through past a gap */
L_10027F37:
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F37: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10027F39; /* falls through past a gap */
L_10027F38:
    _flag_a = (uint32_t)(MEM8(eax + 0x7049090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x7049090) = (uint8_t)(MEM8(eax + 0x7049090) + LO8(edx)); /* 0x10027F38: add byte ptr [eax + 0x7049090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10027F3E; /* falls through past a gap */
L_10027F39:
    /* nop */ /* 0x10027F39: nop  */
    /* nop */ /* 0x10027F3A: nop  */
    /* nop */ /* 0x10027F3B: nop  */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 7); /* 0x10027F3C: add al, 7 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10027F3E:
    PUSH32(esp, _seg_cs); /* 0x10027F3E: push cs */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10027F3F: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F41: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F43: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F45: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10027F47: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027F49u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10027F5C:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F5C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F5E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10027F62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10027F64u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_10027F89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027F89u);

L_10027F89:
    PUSH32(esp, ebp); /* 0x10027F89: push ebp */
    ebp = esp; /* 0x10027F8A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10027F8C: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10027F8F: push esi */
    esi = ecx; /* 0x10027F90: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x10027F92: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edx; /* 0x10027F96: mov dword ptr [esi], edx */
    eax = MEM32(edx + 0x90); /* 0x10027F98: mov eax, dword ptr [edx + 0x90] */
    MEM32(esi + 0x8) = eax; /* 0x10027F9E: mov dword ptr [esi + 8], eax */
    eax = MEM32(edx + 0x50); /* 0x10027FA1: mov eax, dword ptr [edx + 0x50] */
    eax = MEM32(eax); /* 0x10027FA4: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4) = eax; /* 0x10027FA6: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_10027FD6); /* 0x10027FA9: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x10027FAE: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    MEM32(esi + 0x18) = eax; /* 0x10027FB1: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = edx; /* 0x10027FB4: mov dword ptr [esi + 0x1c], edx */
    MEM32(esi + 0x10) = eax; /* 0x10027FB7: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = edx; /* 0x10027FBA: mov dword ptr [esi + 0x14], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005378B; /* 0x10027FBD: jne 0x1005378b */
L_10027FC3:
    MEM32(esi + 0x20) = 0x10077349u; /* 0x10027FC3: mov dword ptr [esi + 0x20], 0x10077349 */
    MEM32(esi + 0x24) = 0x1007766Bu; /* 0x10027FCA: mov dword ptr [esi + 0x24], 0x1007766b */
L_10027FD1:
    esi = POP32_VAL(esp); /* 0x10027FD1: pop esi */
    ebp = POP32_VAL(esp); /* 0x10027FD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10027FD3: ret 8 */
L_1005378B:
    MEM32(esi + 0x20) = 0x10076E1Du; /* 0x1005378B: mov dword ptr [esi + 0x20], 0x10076e1d */
    MEM32(esi + 0x24) = 0x10076F2Cu; /* 0x10053792: mov dword ptr [esi + 0x24], 0x10076f2c */
    RECOMP_BACKEDGE();
    goto L_10027FD1; /* 0x10053799: jmp 0x10027fd1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10027FD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027FD6u);

L_10027FD6:
    eax = MEM32(0x100DFA78); /* 0x10027FD6: mov eax, dword ptr [0x100dfa78] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10027FDB: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F18E; /* 0x10027FE1: je 0x1005f18e */
L_10027FE7:
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1005F18E:
    RECOMP_ICALL(MEM32(0x100E527C)); /* 0x1005F18E: call dword ptr [0x100e527c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005F194: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F196: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10027FE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10027FE9u);

L_10027FE9:
    PUSH32(esp, ebp); /* 0x10027FE9: push ebp */
    ebp = esp; /* 0x10027FEA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10027FEC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10027FED: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10027FF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100337FF; /* 0x10027FF2: je 0x100337ff */
L_10027FF8:
    /* cmp MEM16(esi), 0 */ /* 0x10027FF8: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100337FF; /* 0x10027FFC: je 0x100337ff */
L_10028002:
    PUSH32(esp, 0x1001F7CCu); /* 0x10028002: push 0x1001f7cc */
    PUSH32(esp, esi); /* 0x10028007: push esi */
    RECOMP_CALL(sub_1001310D); /* 0x10028008: call 0x1001310d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002800D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002800E: pop ecx */
    /* test eax, eax */ /* 0x1002800F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100337FF; /* 0x10028011: je 0x100337ff */
L_10028017:
    PUSH32(esp, 0x100284B4u); /* 0x10028017: push 0x100284b4 */
    PUSH32(esp, esi); /* 0x1002801C: push esi */
    RECOMP_CALL(sub_1001310D); /* 0x1002801D: call 0x1001310d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028022: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028023: pop ecx */
    /* test eax, eax */ /* 0x10028024: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060505; /* 0x10028026: je 0x10060505 */
L_1002802C:
    PUSH32(esp, esi); /* 0x1002802C: push esi */
    RECOMP_CALL(sub_1001C8E3); /* 0x1002802D: call 0x1001c8e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028032: pop ecx */
L_10028033:
    esi = POP32_VAL(esp); /* 0x10028033: pop esi */
    ebp = POP32_VAL(esp); /* 0x10028034: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028035: ret  */
L_100337FF:
    PUSH32(esp, 2); /* 0x100337FF: push 2 */
    eax = ebp + 0x8; /* 0x10033801: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10033804: push eax */
    eax = MEM32(ebp + 0xC); /* 0x10033805: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x250u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x250u; /* 0x10033808: add eax, 0x250 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x20001004u); /* 0x1003380D: push 0x20001004 */
    PUSH32(esp, eax); /* 0x10033812: push eax */
    RECOMP_CALL(sub_10020F41); /* 0x10033813: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10033818: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1003381B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006052D; /* 0x1003381D: je 0x1006052d */
L_10033823:
    eax = MEM32(ebp + 0x8); /* 0x10033823: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10033826: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028033; /* 0x10033828: jne 0x10028033 */
L_1003382E:
    goto L_10060534; /* 0x1003382E: jmp 0x10060534 */
L_10060505:
    PUSH32(esp, 2); /* 0x10060505: push 2 */
    eax = ebp + 0x8; /* 0x10060507: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1006050A: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1006050B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x250u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x250u; /* 0x1006050E: add eax, 0x250 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x2000000Bu); /* 0x10060513: push 0x2000000b */
    PUSH32(esp, eax); /* 0x10060518: push eax */
    RECOMP_CALL(sub_10020F41); /* 0x10060519: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1006051E: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060521: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006052D; /* 0x10060523: je 0x1006052d */
L_10060525:
    eax = MEM32(ebp + 0x8); /* 0x10060525: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10028033; /* 0x10060528: jmp 0x10028033 */
L_1006052D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006052D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10028033; /* 0x1006052F: jmp 0x10028033 */
L_10060534:
    esi = POP32_VAL(esp); /* 0x10060534: pop esi */
    ebp = POP32_VAL(esp); /* 0x10060535: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x100E51D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10028036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028036u);

L_10028036:
    PUSH32(esp, ebp); /* 0x10028036: push ebp */
    ebp = esp; /* 0x10028037: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10028039: push ecx */
    PUSH32(esp, ebx); /* 0x1002803A: push ebx */
    PUSH32(esp, esi); /* 0x1002803B: push esi */
    PUSH32(esp, edi); /* 0x1002803C: push edi */
    RECOMP_CALL(sub_1000F750); /* 0x1002803D: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x10028042: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10028045: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax + 0x9C; /* 0x10028047: lea esi, [eax + 0x9c] */
    eax = esi + 0x250; /* 0x1002804D: lea eax, [esi + 0x250] */
    MEM32(esi + 0x8) = ecx; /* 0x10028053: mov dword ptr [esi + 8], ecx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10028056: mov word ptr [eax], cx */
    edi = esi + 0x4; /* 0x10028059: lea edi, [esi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002805C: mov dword ptr [ebp - 4], eax */
    eax = ebx + 0x80; /* 0x1002805F: lea eax, [ebx + 0x80] */
    MEM32(esi) = ebx; /* 0x10028065: mov dword ptr [esi], ebx */
    MEM32(edi) = eax; /* 0x10028067: mov dword ptr [edi], eax */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10028069: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028785; /* 0x1002806C: jne 0x10028785 */
L_10028072:
    eax = MEM32(esi); /* 0x10028072: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x10028074: push esi */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10028075: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287AA; /* 0x10028078: jne 0x100287aa */
L_1002807E:
    RECOMP_CALL(sub_100283EE); /* 0x1002807E: call 0x100283ee */
    RECOMP_FLAGS_IN();
L_10028083:
    ecx = POP32_VAL(esp); /* 0x10028083: pop ecx */
L_10028084:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10028084: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x10028086: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287A3; /* 0x10028089: je 0x100287a3 */
L_1002808F:
    eax = ebx + 0x100; /* 0x1002808F: lea eax, [ebx + 0x100] */
    PUSH32(esp, esi); /* 0x10028095: push esi */
    PUSH32(esp, eax); /* 0x10028096: push eax */
    RECOMP_CALL(sub_10027FE9); /* 0x10028097: call 0x10027fe9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002809C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1002809E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002809F: pop ecx */
    /* test esi, esi */ /* 0x100280A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287A3; /* 0x100280A2: je 0x100287a3 */
L_100280A8:
    /* cmp esi, 0xFDE8u */ /* 0x100280A8: cmp esi, 0xfde8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFDE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287A3; /* 0x100280AE: je 0x100287a3 */
L_100280B4:
    /* cmp esi, 0xFDE9u */ /* 0x100280B4: cmp esi, 0xfde9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFDE9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287A3; /* 0x100280BA: je 0x100287a3 */
L_100280C0:
    eax = (uint32_t)LO16(esi); /* 0x100280C0: movzx eax, si */
    PUSH32(esp, eax); /* 0x100280C3: push eax */
    RECOMP_ICALL(MEM32(0x100E51D0)); /* 0x100280C4: call dword ptr [0x100e51d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100280CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287A3; /* 0x100280CC: je 0x100287a3 */
L_100280D2:
    eax = MEM32(ebp + 0xC); /* 0x100280D2: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x100280D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100280DB; /* 0x100280D7: je 0x100280db */
L_100280D9:
    MEM32(eax) = esi; /* 0x100280D9: mov dword ptr [eax], esi */
L_100280DB:
    edi = MEM32(ebp + 0x10); /* 0x100280DB: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x100280DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028187; /* 0x100280E0: je 0x10028187 */
L_100280E6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100280E6: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100280E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi + 0x120; /* 0x100280EB: lea ebx, [edi + 0x120] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x100280F1: mov word ptr [ebx], ax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100280F4: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100280F9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x100280FA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100280FB: push dword ptr [ebp - 4] */
    PUSH32(esp, 0x55u); /* 0x100280FE: push 0x55 */
    PUSH32(esp, ebx); /* 0x10028100: push ebx */
    RECOMP_CALL(sub_1001218A); /* 0x10028101: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10028106: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028109: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100605A8; /* 0x1002810B: jne 0x100605a8 */
L_10028111:
    PUSH32(esp, 0x40u); /* 0x10028111: push 0x40 */
    PUSH32(esp, edi); /* 0x10028113: push edi */
    PUSH32(esp, 0x1001u); /* 0x10028114: push 0x1001 */
    PUSH32(esp, ebx); /* 0x10028119: push ebx */
    RECOMP_CALL(sub_10020F41); /* 0x1002811A: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002811F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287A3; /* 0x10028124: je 0x100287a3 */
L_1002812A:
    PUSH32(esp, 0x40u); /* 0x1002812A: push 0x40 */
    ebx = edi + 0x80; /* 0x1002812C: lea ebx, [edi + 0x80] */
    PUSH32(esp, ebx); /* 0x10028132: push ebx */
    eax = edi + 0x120; /* 0x10028133: lea eax, [edi + 0x120] */
    PUSH32(esp, 0x1002u); /* 0x10028139: push 0x1002 */
    PUSH32(esp, eax); /* 0x1002813E: push eax */
    RECOMP_CALL(sub_10020F41); /* 0x1002813F: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10028144: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028147: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287A3; /* 0x10028149: je 0x100287a3 */
L_1002814F:
    PUSH32(esp, 0x5Fu); /* 0x1002814F: push 0x5f */
    PUSH32(esp, ebx); /* 0x10028151: push ebx */
    RECOMP_CALL(sub_10011236); /* 0x10028152: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028157: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028158: pop ecx */
    /* test eax, eax */ /* 0x10028159: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060587; /* 0x1002815B: jne 0x10060587 */
L_10028161:
    PUSH32(esp, 0x2Eu); /* 0x10028161: push 0x2e */
    PUSH32(esp, ebx); /* 0x10028163: push ebx */
    RECOMP_CALL(sub_10011236); /* 0x10028164: call 0x10011236 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028169: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002816A: pop ecx */
    /* test eax, eax */ /* 0x1002816B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060587; /* 0x1002816D: jne 0x10060587 */
L_10028173:
    PUSH32(esp, 0xAu); /* 0x10028173: push 0xa */
    PUSH32(esp, 0x10u); /* 0x10028175: push 0x10 */
    eax = edi + 0x100; /* 0x10028177: lea eax, [edi + 0x100] */
    PUSH32(esp, eax); /* 0x1002817D: push eax */
    PUSH32(esp, esi); /* 0x1002817E: push esi */
    RECOMP_CALL(sub_1001CB95); /* 0x1002817F: call 0x1001cb95 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10028184: add esp, 0x10 */
    _flag_k = FK_ADD;
L_10028187:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10028187: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10028189: inc eax */
    _flag_k = FK_INC;
L_1002818A:
    edi = POP32_VAL(esp); /* 0x1002818A: pop edi */
    esi = POP32_VAL(esp); /* 0x1002818B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002818C: pop ebx */
    esp = ebp; /* 0x1002818D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002818F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028190: ret  */
L_10028785:
    PUSH32(esp, edi); /* 0x10028785: push edi */
    PUSH32(esp, 0x16u); /* 0x10028786: push 0x16 */
    PUSH32(esp, 0x10028808u); /* 0x10028788: push 0x10028808 */
    RECOMP_CALL(sub_1002872A); /* 0x1002878D: call 0x1002872a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10028792: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10028795: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10028072; /* 0x10028797: jmp 0x10028072 */
L_1002879C:
    RECOMP_CALL(sub_100A935F); /* 0x1002879C: call 0x100a935f */
    RECOMP_FLAGS_IN();
    goto L_100287B6; /* 0x100287A1: jmp 0x100287b6 */
L_100287A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100287A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002818A; /* 0x100287A5: jmp 0x1002818a */
L_100287AA:
    eax = MEM32(edi); /* 0x100287AA: mov eax, dword ptr [edi] */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x100287AC: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002879C; /* 0x100287AF: je 0x1002879c */
L_100287B1:
    RECOMP_CALL(sub_10028683); /* 0x100287B1: call 0x10028683 */
    RECOMP_FLAGS_IN();
L_100287B6:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x100287B6: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100287BA: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028084; /* 0x100287BB: jne 0x10028084 */
L_100287C1:
    goto L_10060551; /* 0x100287C1: jmp 0x10060551 */
L_10060551:
    PUSH32(esp, esi); /* 0x10060551: push esi */
    PUSH32(esp, 0x40u); /* 0x10060552: push 0x40 */
    PUSH32(esp, 0x10063068u); /* 0x10060554: push 0x10063068 */
    RECOMP_CALL(sub_1002872A); /* 0x10060559: call 0x1002872a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1006055E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10060561: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028084; /* 0x10060563: je 0x10028084 */
L_10060569:
    eax = MEM32(edi); /* 0x10060569: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006056B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006056D: push esi */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1006056E: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006057D; /* 0x10060571: je 0x1006057d */
L_10060573:
    RECOMP_CALL(sub_10028683); /* 0x10060573: call 0x10028683 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10028083; /* 0x10060578: jmp 0x10028083 */
L_1006057D:
    RECOMP_CALL(sub_100A935F); /* 0x1006057D: call 0x100a935f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10028083; /* 0x10060582: jmp 0x10028083 */
L_10060587:
    PUSH32(esp, 0x40u); /* 0x10060587: push 0x40 */
    PUSH32(esp, ebx); /* 0x10060589: push ebx */
    eax = edi + 0x120; /* 0x1006058A: lea eax, [edi + 0x120] */
    PUSH32(esp, 7); /* 0x10060590: push 7 */
    PUSH32(esp, eax); /* 0x10060592: push eax */
    RECOMP_CALL(sub_10020F41); /* 0x10060593: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10060598: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1006059B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028173; /* 0x1006059D: jne 0x10028173 */
L_100605A3:
    RECOMP_BACKEDGE();
    goto L_100287A3; /* 0x100605A3: jmp 0x100287a3 */
L_100605A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100605A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100605AA: push eax */
    PUSH32(esp, eax); /* 0x100605AB: push eax */
    PUSH32(esp, eax); /* 0x100605AC: push eax */
    PUSH32(esp, eax); /* 0x100605AD: push eax */
    PUSH32(esp, eax); /* 0x100605AE: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100605AF: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100605B4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002826A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002826Au);

L_1002826A:
    PUSH32(esp, ebp); /* 0x1002826A: push ebp */
    ebp = esp; /* 0x1002826B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002826D: push esi */
    PUSH32(esp, edi); /* 0x1002826E: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1002826F: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10028272: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10028273: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10028276: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10011693); /* 0x10028279: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002827E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10028281: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10028283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F741; /* 0x10028285: jne 0x1005f741 */
L_1002828B:
    eax = edi + 0x80; /* 0x1002828B: lea eax, [edi + 0x80] */
    /* cmp MEM16(eax), LO16(esi) */ /* 0x10028291: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100282AC; /* 0x10028294: je 0x100282ac */
L_10028296:
    PUSH32(esp, eax); /* 0x10028296: push eax */
    PUSH32(esp, 0x100282D4u); /* 0x10028297: push 0x100282d4 */
    PUSH32(esp, 2); /* 0x1002829C: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002829E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100282A1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002126C); /* 0x100282A4: call 0x1002126c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100282A9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100282AC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x100u; /* 0x100282AC: add edi, 0x100 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edi), LO16(esi) */ /* 0x100282B2: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100282CD; /* 0x100282B5: je 0x100282cd */
L_100282B7:
    PUSH32(esp, edi); /* 0x100282B7: push edi */
    PUSH32(esp, 0x100282D8u); /* 0x100282B8: push 0x100282d8 */
    PUSH32(esp, 2); /* 0x100282BD: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100282BF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100282C2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002126C); /* 0x100282C5: call 0x1002126c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100282CA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100282CD:
    edi = POP32_VAL(esp); /* 0x100282CD: pop edi */
    esi = POP32_VAL(esp); /* 0x100282CE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100282CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100282D0: ret  */
L_1005F741:
    PUSH32(esp, esi); /* 0x1005F741: push esi */
    PUSH32(esp, esi); /* 0x1005F742: push esi */
    PUSH32(esp, esi); /* 0x1005F743: push esi */
    PUSH32(esp, esi); /* 0x1005F744: push esi */
    PUSH32(esp, esi); /* 0x1005F745: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1005F746: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005F74Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100282D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100282D4u);

L_100282D4:
    edi = POP32_VAL(esp); /* 0x100282D4: pop edi */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100282D5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100282D7: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100282D9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100282DB: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100282DE: in al, dx */
    PUSH32(esp, ecx); /* 0x100282DF: push ecx */
    PUSH32(esp, ebx); /* 0x100282E0: push ebx */
    PUSH32(esp, esi); /* 0x100282E1: push esi */
    PUSH32(esp, edi); /* 0x100282E2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100282E3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100282E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1CAu); /* 0x100282E8: push 0x1ca */
    PUSH32(esp, ebx); /* 0x100282ED: push ebx */
    PUSH32(esp, edi); /* 0x100282EE: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100282EF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x100282F4: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100282F7: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x100282FA: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100282FD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028300: je 0x100283c7 */
L_10028306:
    PUSH32(esp, 0x2Eu); /* 0x10028306: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x10028308: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10028309: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028398; /* 0x1002830C: je 0x10028398 */
L_10028312:
    MEM32(ebp + 0xC) = ebx; /* 0x10028312: mov dword ptr [ebp + 0xc], ebx */
L_10028315:
    PUSH32(esp, 0x10028390u); /* 0x10028315: push 0x10028390 */
    PUSH32(esp, esi); /* 0x1002831A: push esi */
    RECOMP_CALL(sub_1001C8F7); /* 0x1002831B: call 0x1001c8f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028320: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028321: pop ecx */
    /* test eax, eax */ /* 0x10028322: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028324: je 0x100287ff */
L_1002832A:
    ecx = esi + eax * 2; /* 0x1002832A: lea ecx, [esi + eax*2] */
    ebx = (uint32_t)MEM16(ecx); /* 0x1002832D: movzx ebx, word ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10028330: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10028333: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x2Cu); /* 0x10028336: push 0x2c */
    edx = POP32_VAL(esp); /* 0x10028338: pop edx */
    /* test ecx, ecx */ /* 0x10028339: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287E8; /* 0x1002833B: je 0x100287e8 */
L_10028341:
    /* cmp ecx, 1 */ /* 0x10028341: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287C6; /* 0x10028344: jne 0x100287c6 */
L_1002834A:
    /* cmp eax, 0x40u */ /* 0x1002834A: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x1002834D: jae 0x100287ff */
L_10028353:
    /* cmp ebx, 0x5Fu */ /* 0x10028353: cmp ebx, 0x5f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028356: je 0x100287ff */
L_1002835C:
    PUSH32(esp, eax); /* 0x1002835C: push eax */
    PUSH32(esp, esi); /* 0x1002835D: push esi */
    PUSH32(esp, 0x40u); /* 0x1002835E: push 0x40 */
    eax = edi + 0x80; /* 0x10028360: lea eax, [edi + 0x80] */
L_10028366:
    PUSH32(esp, eax); /* 0x10028366: push eax */
L_10028367:
    RECOMP_CALL(sub_1001218A); /* 0x10028367: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002836C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002836F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F75A; /* 0x10028371: jne 0x1005f75a */
L_10028377:
    PUSH32(esp, 0x2Cu); /* 0x10028377: push 0x2c */
    eax = POP32_VAL(esp); /* 0x10028379: pop eax */
    /* cmp LO16(ebx), LO16(eax) */ /* 0x1002837A: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100283C7; /* 0x1002837D: je 0x100283c7 */
L_1002837F:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1002837F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028382: je 0x100283c7 */
L_10028384:
    esi = MEM32(ebp + (-0x4)); /* 0x10028384: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10028387: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1002838A: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028315; /* 0x1002838D: jmp 0x10028315 */
L_10028398:
    eax = esi + 0x2; /* 0x10028398: lea eax, [esi + 2] */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1002839B: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028312; /* 0x1002839E: je 0x10028312 */
L_100283A4:
    PUSH32(esp, 0xFu); /* 0x100283A4: push 0xf */
    PUSH32(esp, eax); /* 0x100283A6: push eax */
    eax = edi + 0x100; /* 0x100283A7: lea eax, [edi + 0x100] */
    PUSH32(esp, 0x10u); /* 0x100283AD: push 0x10 */
    PUSH32(esp, eax); /* 0x100283AF: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100283B0: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100283B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100283B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F763; /* 0x100283BA: jne 0x1005f763 */
L_100283C0:
    MEM16(edi + 0x11E) = (uint16_t)(LO16(eax)); /* 0x100283C0: mov word ptr [edi + 0x11e], ax */
L_100283C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100283C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100283C9:
    edi = POP32_VAL(esp); /* 0x100283C9: pop edi */
    esi = POP32_VAL(esp); /* 0x100283CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100283CB: pop ebx */
    esp = ebp; /* 0x100283CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100283CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100283CF: ret  */
L_100287C6:
    /* cmp ecx, 2 */ /* 0x100287C6: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287C9: jne 0x100287ff */
L_100287CB:
    /* cmp eax, 0x10u */ /* 0x100287CB: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287CE: jae 0x100287ff */
L_100287D0:
    /* test LO16(ebx), LO16(ebx) */ /* 0x100287D0: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F74C; /* 0x100287D3: jne 0x1005f74c */
L_100287D9:
    PUSH32(esp, eax); /* 0x100287D9: push eax */
    PUSH32(esp, esi); /* 0x100287DA: push esi */
    PUSH32(esp, 0x10u); /* 0x100287DB: push 0x10 */
    eax = edi + 0x100; /* 0x100287DD: lea eax, [edi + 0x100] */
    RECOMP_BACKEDGE();
    goto L_10028366; /* 0x100287E3: jmp 0x10028366 */
L_100287E8:
    /* cmp eax, 0x40u */ /* 0x100287E8: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287EB: jae 0x100287ff */
L_100287ED:
    PUSH32(esp, 0x2Eu); /* 0x100287ED: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x100287EF: pop ecx */
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x100287F0: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287F3: je 0x100287ff */
L_100287F5:
    PUSH32(esp, eax); /* 0x100287F5: push eax */
    PUSH32(esp, esi); /* 0x100287F6: push esi */
    PUSH32(esp, 0x40u); /* 0x100287F7: push 0x40 */
    PUSH32(esp, edi); /* 0x100287F9: push edi */
    RECOMP_BACKEDGE();
    goto L_10028367; /* 0x100287FA: jmp 0x10028367 */
L_100287FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100287FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100283C9; /* 0x10028802: jmp 0x100283c9 */
L_1005F74C:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x1005F74C: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287D9; /* 0x1005F74F: je 0x100287d9 */
L_1005F755:
    RECOMP_BACKEDGE();
    goto L_100287FF; /* 0x1005F755: jmp 0x100287ff */
L_1005F75A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005F75C: push eax */
    PUSH32(esp, eax); /* 0x1005F75D: push eax */
    PUSH32(esp, eax); /* 0x1005F75E: push eax */
    PUSH32(esp, eax); /* 0x1005F75F: push eax */
    PUSH32(esp, eax); /* 0x1005F760: push eax */
    goto L_1005F768; /* 0x1005F761: jmp 0x1005f768 */
L_1005F763:
    PUSH32(esp, ebx); /* 0x1005F763: push ebx */
    PUSH32(esp, ebx); /* 0x1005F764: push ebx */
    PUSH32(esp, ebx); /* 0x1005F765: push ebx */
    PUSH32(esp, ebx); /* 0x1005F766: push ebx */
    PUSH32(esp, ebx); /* 0x1005F767: push ebx */
L_1005F768:
    RECOMP_CALL(sub_100A469B); /* 0x1005F768: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005F76Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100282D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100282D8u);

L_100282D8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100282D8: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100282DB: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100282DE: in al, dx */
    PUSH32(esp, ecx); /* 0x100282DF: push ecx */
    PUSH32(esp, ebx); /* 0x100282E0: push ebx */
    PUSH32(esp, esi); /* 0x100282E1: push esi */
    PUSH32(esp, edi); /* 0x100282E2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100282E3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100282E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1CAu); /* 0x100282E8: push 0x1ca */
    PUSH32(esp, ebx); /* 0x100282ED: push ebx */
    PUSH32(esp, edi); /* 0x100282EE: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100282EF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x100282F4: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100282F7: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x100282FA: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100282FD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028300: je 0x100283c7 */
L_10028306:
    PUSH32(esp, 0x2Eu); /* 0x10028306: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x10028308: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10028309: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028398; /* 0x1002830C: je 0x10028398 */
L_10028312:
    MEM32(ebp + 0xC) = ebx; /* 0x10028312: mov dword ptr [ebp + 0xc], ebx */
L_10028315:
    PUSH32(esp, 0x10028390u); /* 0x10028315: push 0x10028390 */
    PUSH32(esp, esi); /* 0x1002831A: push esi */
    RECOMP_CALL(sub_1001C8F7); /* 0x1002831B: call 0x1001c8f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028320: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028321: pop ecx */
    /* test eax, eax */ /* 0x10028322: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028324: je 0x100287ff */
L_1002832A:
    ecx = esi + eax * 2; /* 0x1002832A: lea ecx, [esi + eax*2] */
    ebx = (uint32_t)MEM16(ecx); /* 0x1002832D: movzx ebx, word ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10028330: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10028333: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x2Cu); /* 0x10028336: push 0x2c */
    edx = POP32_VAL(esp); /* 0x10028338: pop edx */
    /* test ecx, ecx */ /* 0x10028339: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287E8; /* 0x1002833B: je 0x100287e8 */
L_10028341:
    /* cmp ecx, 1 */ /* 0x10028341: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287C6; /* 0x10028344: jne 0x100287c6 */
L_1002834A:
    /* cmp eax, 0x40u */ /* 0x1002834A: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x1002834D: jae 0x100287ff */
L_10028353:
    /* cmp ebx, 0x5Fu */ /* 0x10028353: cmp ebx, 0x5f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028356: je 0x100287ff */
L_1002835C:
    PUSH32(esp, eax); /* 0x1002835C: push eax */
    PUSH32(esp, esi); /* 0x1002835D: push esi */
    PUSH32(esp, 0x40u); /* 0x1002835E: push 0x40 */
    eax = edi + 0x80; /* 0x10028360: lea eax, [edi + 0x80] */
L_10028366:
    PUSH32(esp, eax); /* 0x10028366: push eax */
L_10028367:
    RECOMP_CALL(sub_1001218A); /* 0x10028367: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002836C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002836F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F75A; /* 0x10028371: jne 0x1005f75a */
L_10028377:
    PUSH32(esp, 0x2Cu); /* 0x10028377: push 0x2c */
    eax = POP32_VAL(esp); /* 0x10028379: pop eax */
    /* cmp LO16(ebx), LO16(eax) */ /* 0x1002837A: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100283C7; /* 0x1002837D: je 0x100283c7 */
L_1002837F:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1002837F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028382: je 0x100283c7 */
L_10028384:
    esi = MEM32(ebp + (-0x4)); /* 0x10028384: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10028387: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1002838A: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028315; /* 0x1002838D: jmp 0x10028315 */
L_10028398:
    eax = esi + 0x2; /* 0x10028398: lea eax, [esi + 2] */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1002839B: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028312; /* 0x1002839E: je 0x10028312 */
L_100283A4:
    PUSH32(esp, 0xFu); /* 0x100283A4: push 0xf */
    PUSH32(esp, eax); /* 0x100283A6: push eax */
    eax = edi + 0x100; /* 0x100283A7: lea eax, [edi + 0x100] */
    PUSH32(esp, 0x10u); /* 0x100283AD: push 0x10 */
    PUSH32(esp, eax); /* 0x100283AF: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100283B0: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100283B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100283B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F763; /* 0x100283BA: jne 0x1005f763 */
L_100283C0:
    MEM16(edi + 0x11E) = (uint16_t)(LO16(eax)); /* 0x100283C0: mov word ptr [edi + 0x11e], ax */
L_100283C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100283C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100283C9:
    edi = POP32_VAL(esp); /* 0x100283C9: pop edi */
    esi = POP32_VAL(esp); /* 0x100283CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100283CB: pop ebx */
    esp = ebp; /* 0x100283CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100283CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100283CF: ret  */
L_100287C6:
    /* cmp ecx, 2 */ /* 0x100287C6: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287C9: jne 0x100287ff */
L_100287CB:
    /* cmp eax, 0x10u */ /* 0x100287CB: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287CE: jae 0x100287ff */
L_100287D0:
    /* test LO16(ebx), LO16(ebx) */ /* 0x100287D0: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F74C; /* 0x100287D3: jne 0x1005f74c */
L_100287D9:
    PUSH32(esp, eax); /* 0x100287D9: push eax */
    PUSH32(esp, esi); /* 0x100287DA: push esi */
    PUSH32(esp, 0x10u); /* 0x100287DB: push 0x10 */
    eax = edi + 0x100; /* 0x100287DD: lea eax, [edi + 0x100] */
    RECOMP_BACKEDGE();
    goto L_10028366; /* 0x100287E3: jmp 0x10028366 */
L_100287E8:
    /* cmp eax, 0x40u */ /* 0x100287E8: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287EB: jae 0x100287ff */
L_100287ED:
    PUSH32(esp, 0x2Eu); /* 0x100287ED: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x100287EF: pop ecx */
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x100287F0: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287F3: je 0x100287ff */
L_100287F5:
    PUSH32(esp, eax); /* 0x100287F5: push eax */
    PUSH32(esp, esi); /* 0x100287F6: push esi */
    PUSH32(esp, 0x40u); /* 0x100287F7: push 0x40 */
    PUSH32(esp, edi); /* 0x100287F9: push edi */
    RECOMP_BACKEDGE();
    goto L_10028367; /* 0x100287FA: jmp 0x10028367 */
L_100287FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100287FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100283C9; /* 0x10028802: jmp 0x100283c9 */
L_1005F74C:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x1005F74C: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287D9; /* 0x1005F74F: je 0x100287d9 */
L_1005F755:
    RECOMP_BACKEDGE();
    goto L_100287FF; /* 0x1005F755: jmp 0x100287ff */
L_1005F75A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005F75C: push eax */
    PUSH32(esp, eax); /* 0x1005F75D: push eax */
    PUSH32(esp, eax); /* 0x1005F75E: push eax */
    PUSH32(esp, eax); /* 0x1005F75F: push eax */
    PUSH32(esp, eax); /* 0x1005F760: push eax */
    goto L_1005F768; /* 0x1005F761: jmp 0x1005f768 */
L_1005F763:
    PUSH32(esp, ebx); /* 0x1005F763: push ebx */
    PUSH32(esp, ebx); /* 0x1005F764: push ebx */
    PUSH32(esp, ebx); /* 0x1005F765: push ebx */
    PUSH32(esp, ebx); /* 0x1005F766: push ebx */
    PUSH32(esp, ebx); /* 0x1005F767: push ebx */
L_1005F768:
    RECOMP_CALL(sub_100A469B); /* 0x1005F768: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005F76Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100282DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100282DCu);

L_100282DC:
    PUSH32(esp, ebp); /* 0x100282DC: push ebp */
    ebp = esp; /* 0x100282DD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100282DF: push ecx */
    PUSH32(esp, ebx); /* 0x100282E0: push ebx */
    PUSH32(esp, esi); /* 0x100282E1: push esi */
    PUSH32(esp, edi); /* 0x100282E2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100282E3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100282E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1CAu); /* 0x100282E8: push 0x1ca */
    PUSH32(esp, ebx); /* 0x100282ED: push ebx */
    PUSH32(esp, edi); /* 0x100282EE: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100282EF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x100282F4: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100282F7: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x100282FA: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x100282FD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028300: je 0x100283c7 */
L_10028306:
    PUSH32(esp, 0x2Eu); /* 0x10028306: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x10028308: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10028309: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028398; /* 0x1002830C: je 0x10028398 */
L_10028312:
    MEM32(ebp + 0xC) = ebx; /* 0x10028312: mov dword ptr [ebp + 0xc], ebx */
L_10028315:
    PUSH32(esp, 0x10028390u); /* 0x10028315: push 0x10028390 */
    PUSH32(esp, esi); /* 0x1002831A: push esi */
    RECOMP_CALL(sub_1001C8F7); /* 0x1002831B: call 0x1001c8f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028320: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028321: pop ecx */
    /* test eax, eax */ /* 0x10028322: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028324: je 0x100287ff */
L_1002832A:
    ecx = esi + eax * 2; /* 0x1002832A: lea ecx, [esi + eax*2] */
    ebx = (uint32_t)MEM16(ecx); /* 0x1002832D: movzx ebx, word ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10028330: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10028333: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x2Cu); /* 0x10028336: push 0x2c */
    edx = POP32_VAL(esp); /* 0x10028338: pop edx */
    /* test ecx, ecx */ /* 0x10028339: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287E8; /* 0x1002833B: je 0x100287e8 */
L_10028341:
    /* cmp ecx, 1 */ /* 0x10028341: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287C6; /* 0x10028344: jne 0x100287c6 */
L_1002834A:
    /* cmp eax, 0x40u */ /* 0x1002834A: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x1002834D: jae 0x100287ff */
L_10028353:
    /* cmp ebx, 0x5Fu */ /* 0x10028353: cmp ebx, 0x5f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028356: je 0x100287ff */
L_1002835C:
    PUSH32(esp, eax); /* 0x1002835C: push eax */
    PUSH32(esp, esi); /* 0x1002835D: push esi */
    PUSH32(esp, 0x40u); /* 0x1002835E: push 0x40 */
    eax = edi + 0x80; /* 0x10028360: lea eax, [edi + 0x80] */
L_10028366:
    PUSH32(esp, eax); /* 0x10028366: push eax */
L_10028367:
    RECOMP_CALL(sub_1001218A); /* 0x10028367: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002836C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002836F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F75A; /* 0x10028371: jne 0x1005f75a */
L_10028377:
    PUSH32(esp, 0x2Cu); /* 0x10028377: push 0x2c */
    eax = POP32_VAL(esp); /* 0x10028379: pop eax */
    /* cmp LO16(ebx), LO16(eax) */ /* 0x1002837A: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100283C7; /* 0x1002837D: je 0x100283c7 */
L_1002837F:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1002837F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028382: je 0x100283c7 */
L_10028384:
    esi = MEM32(ebp + (-0x4)); /* 0x10028384: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10028387: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1002838A: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028315; /* 0x1002838D: jmp 0x10028315 */
L_10028398:
    eax = esi + 0x2; /* 0x10028398: lea eax, [esi + 2] */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1002839B: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028312; /* 0x1002839E: je 0x10028312 */
L_100283A4:
    PUSH32(esp, 0xFu); /* 0x100283A4: push 0xf */
    PUSH32(esp, eax); /* 0x100283A6: push eax */
    eax = edi + 0x100; /* 0x100283A7: lea eax, [edi + 0x100] */
    PUSH32(esp, 0x10u); /* 0x100283AD: push 0x10 */
    PUSH32(esp, eax); /* 0x100283AF: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100283B0: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100283B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100283B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F763; /* 0x100283BA: jne 0x1005f763 */
L_100283C0:
    MEM16(edi + 0x11E) = (uint16_t)(LO16(eax)); /* 0x100283C0: mov word ptr [edi + 0x11e], ax */
L_100283C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100283C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100283C9:
    edi = POP32_VAL(esp); /* 0x100283C9: pop edi */
    esi = POP32_VAL(esp); /* 0x100283CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100283CB: pop ebx */
    esp = ebp; /* 0x100283CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100283CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100283CF: ret  */
L_100287C6:
    /* cmp ecx, 2 */ /* 0x100287C6: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287C9: jne 0x100287ff */
L_100287CB:
    /* cmp eax, 0x10u */ /* 0x100287CB: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287CE: jae 0x100287ff */
L_100287D0:
    /* test LO16(ebx), LO16(ebx) */ /* 0x100287D0: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F74C; /* 0x100287D3: jne 0x1005f74c */
L_100287D9:
    PUSH32(esp, eax); /* 0x100287D9: push eax */
    PUSH32(esp, esi); /* 0x100287DA: push esi */
    PUSH32(esp, 0x10u); /* 0x100287DB: push 0x10 */
    eax = edi + 0x100; /* 0x100287DD: lea eax, [edi + 0x100] */
    RECOMP_BACKEDGE();
    goto L_10028366; /* 0x100287E3: jmp 0x10028366 */
L_100287E8:
    /* cmp eax, 0x40u */ /* 0x100287E8: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287EB: jae 0x100287ff */
L_100287ED:
    PUSH32(esp, 0x2Eu); /* 0x100287ED: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x100287EF: pop ecx */
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x100287F0: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287F3: je 0x100287ff */
L_100287F5:
    PUSH32(esp, eax); /* 0x100287F5: push eax */
    PUSH32(esp, esi); /* 0x100287F6: push esi */
    PUSH32(esp, 0x40u); /* 0x100287F7: push 0x40 */
    PUSH32(esp, edi); /* 0x100287F9: push edi */
    RECOMP_BACKEDGE();
    goto L_10028367; /* 0x100287FA: jmp 0x10028367 */
L_100287FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100287FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100283C9; /* 0x10028802: jmp 0x100283c9 */
L_1005F74C:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x1005F74C: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287D9; /* 0x1005F74F: je 0x100287d9 */
L_1005F755:
    RECOMP_BACKEDGE();
    goto L_100287FF; /* 0x1005F755: jmp 0x100287ff */
L_1005F75A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005F75C: push eax */
    PUSH32(esp, eax); /* 0x1005F75D: push eax */
    PUSH32(esp, eax); /* 0x1005F75E: push eax */
    PUSH32(esp, eax); /* 0x1005F75F: push eax */
    PUSH32(esp, eax); /* 0x1005F760: push eax */
    goto L_1005F768; /* 0x1005F761: jmp 0x1005f768 */
L_1005F763:
    PUSH32(esp, ebx); /* 0x1005F763: push ebx */
    PUSH32(esp, ebx); /* 0x1005F764: push ebx */
    PUSH32(esp, ebx); /* 0x1005F765: push ebx */
    PUSH32(esp, ebx); /* 0x1005F766: push ebx */
    PUSH32(esp, ebx); /* 0x1005F767: push ebx */
L_1005F768:
    RECOMP_CALL(sub_100A469B); /* 0x1005F768: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005F76Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028390u);

    goto L_10028390;
L_10028312:
    MEM32(ebp + 0xC) = ebx; /* 0x10028312: mov dword ptr [ebp + 0xc], ebx */
L_10028315:
    PUSH32(esp, 0x10028390u); /* 0x10028315: push 0x10028390 */
    PUSH32(esp, esi); /* 0x1002831A: push esi */
    RECOMP_CALL(sub_1001C8F7); /* 0x1002831B: call 0x1001c8f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028320: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028321: pop ecx */
    /* test eax, eax */ /* 0x10028322: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028324: je 0x100287ff */
L_1002832A:
    ecx = esi + eax * 2; /* 0x1002832A: lea ecx, [esi + eax*2] */
    ebx = (uint32_t)MEM16(ecx); /* 0x1002832D: movzx ebx, word ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10028330: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10028333: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x2Cu); /* 0x10028336: push 0x2c */
    edx = POP32_VAL(esp); /* 0x10028338: pop edx */
    /* test ecx, ecx */ /* 0x10028339: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100287E8; /* 0x1002833B: je 0x100287e8 */
L_10028341:
    /* cmp ecx, 1 */ /* 0x10028341: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287C6; /* 0x10028344: jne 0x100287c6 */
L_1002834A:
    /* cmp eax, 0x40u */ /* 0x1002834A: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x1002834D: jae 0x100287ff */
L_10028353:
    /* cmp ebx, 0x5Fu */ /* 0x10028353: cmp ebx, 0x5f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x10028356: je 0x100287ff */
L_1002835C:
    PUSH32(esp, eax); /* 0x1002835C: push eax */
    PUSH32(esp, esi); /* 0x1002835D: push esi */
    PUSH32(esp, 0x40u); /* 0x1002835E: push 0x40 */
    eax = edi + 0x80; /* 0x10028360: lea eax, [edi + 0x80] */
L_10028366:
    PUSH32(esp, eax); /* 0x10028366: push eax */
L_10028367:
    RECOMP_CALL(sub_1001218A); /* 0x10028367: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002836C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1002836F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F75A; /* 0x10028371: jne 0x1005f75a */
L_10028377:
    PUSH32(esp, 0x2Cu); /* 0x10028377: push 0x2c */
    eax = POP32_VAL(esp); /* 0x10028379: pop eax */
    /* cmp LO16(ebx), LO16(eax) */ /* 0x1002837A: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100283C7; /* 0x1002837D: je 0x100283c7 */
L_1002837F:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1002837F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100283C7; /* 0x10028382: je 0x100283c7 */
L_10028384:
    esi = MEM32(ebp + (-0x4)); /* 0x10028384: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10028387: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1002838A: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028315; /* 0x1002838D: jmp 0x10028315 */
L_10028390:
    edi = POP32_VAL(esp); /* 0x10028390: pop edi */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x10028391: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x10028393: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028396: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = esi + 0x2; /* 0x10028398: lea eax, [esi + 2] */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1002839B: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028312; /* 0x1002839E: je 0x10028312 */
L_100283A4:
    PUSH32(esp, 0xFu); /* 0x100283A4: push 0xf */
    PUSH32(esp, eax); /* 0x100283A6: push eax */
    eax = edi + 0x100; /* 0x100283A7: lea eax, [edi + 0x100] */
    PUSH32(esp, 0x10u); /* 0x100283AD: push 0x10 */
    PUSH32(esp, eax); /* 0x100283AF: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100283B0: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100283B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100283B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F763; /* 0x100283BA: jne 0x1005f763 */
L_100283C0:
    MEM16(edi + 0x11E) = (uint16_t)(LO16(eax)); /* 0x100283C0: mov word ptr [edi + 0x11e], ax */
L_100283C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100283C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100283C9:
    edi = POP32_VAL(esp); /* 0x100283C9: pop edi */
    esi = POP32_VAL(esp); /* 0x100283CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100283CB: pop ebx */
    esp = ebp; /* 0x100283CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100283CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100283CF: ret  */
L_100287C6:
    /* cmp ecx, 2 */ /* 0x100287C6: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287C9: jne 0x100287ff */
L_100287CB:
    /* cmp eax, 0x10u */ /* 0x100287CB: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287CE: jae 0x100287ff */
L_100287D0:
    /* test LO16(ebx), LO16(ebx) */ /* 0x100287D0: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005F74C; /* 0x100287D3: jne 0x1005f74c */
L_100287D9:
    PUSH32(esp, eax); /* 0x100287D9: push eax */
    PUSH32(esp, esi); /* 0x100287DA: push esi */
    PUSH32(esp, 0x10u); /* 0x100287DB: push 0x10 */
    eax = edi + 0x100; /* 0x100287DD: lea eax, [edi + 0x100] */
    RECOMP_BACKEDGE();
    goto L_10028366; /* 0x100287E3: jmp 0x10028366 */
L_100287E8:
    /* cmp eax, 0x40u */ /* 0x100287E8: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287EB: jae 0x100287ff */
L_100287ED:
    PUSH32(esp, 0x2Eu); /* 0x100287ED: push 0x2e */
    ecx = POP32_VAL(esp); /* 0x100287EF: pop ecx */
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x100287F0: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287FF; /* 0x100287F3: je 0x100287ff */
L_100287F5:
    PUSH32(esp, eax); /* 0x100287F5: push eax */
    PUSH32(esp, esi); /* 0x100287F6: push esi */
    PUSH32(esp, 0x40u); /* 0x100287F7: push 0x40 */
    PUSH32(esp, edi); /* 0x100287F9: push edi */
    RECOMP_BACKEDGE();
    goto L_10028367; /* 0x100287FA: jmp 0x10028367 */
L_100287FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100287FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100283C9; /* 0x10028802: jmp 0x100283c9 */
L_1005F74C:
    /* cmp LO16(ebx), LO16(edx) */ /* 0x1005F74C: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100287D9; /* 0x1005F74F: je 0x100287d9 */
L_1005F755:
    RECOMP_BACKEDGE();
    goto L_100287FF; /* 0x1005F755: jmp 0x100287ff */
L_1005F75A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005F75C: push eax */
    PUSH32(esp, eax); /* 0x1005F75D: push eax */
    PUSH32(esp, eax); /* 0x1005F75E: push eax */
    PUSH32(esp, eax); /* 0x1005F75F: push eax */
    PUSH32(esp, eax); /* 0x1005F760: push eax */
    goto L_1005F768; /* 0x1005F761: jmp 0x1005f768 */
L_1005F763:
    PUSH32(esp, ebx); /* 0x1005F763: push ebx */
    PUSH32(esp, ebx); /* 0x1005F764: push ebx */
    PUSH32(esp, ebx); /* 0x1005F765: push ebx */
    PUSH32(esp, ebx); /* 0x1005F766: push ebx */
    PUSH32(esp, ebx); /* 0x1005F767: push ebx */
L_1005F768:
    RECOMP_CALL(sub_100A469B); /* 0x1005F768: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005F76Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100283D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100283D0u);

L_100283D0:
    PUSH32(esp, ebp); /* 0x100283D0: push ebp */
    ebp = esp; /* 0x100283D1: mov ebp, esp */
    eax = MEM32(0x100DFA68); /* 0x100283D3: mov eax, dword ptr [0x100dfa68] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100283D8: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100283DE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100283E1: push dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FC34; /* 0x100283E4: je 0x1005fc34 */
L_100283EA:
    RECOMP_ICALL(eax); /* 0x100283EA: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100283EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100283ED: ret  */
L_1005FC34:
    RECOMP_ICALL(MEM32(0x100E52AC)); /* 0x1005FC34: call dword ptr [0x100e52ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005FC3A: push eax */
    RECOMP_CALL(sub_100A5FA8); /* 0x1005FC3B: call 0x100a5fa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005FC40: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1005FC43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005FC44: ret  */
    RECOMP_REGS_OUT();
}

void sub_100283EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100283EEu);

L_100283EE:
    PUSH32(esp, ebp); /* 0x100283EE: push ebp */
    ebp = esp; /* 0x100283EF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB0u; /* 0x100283F1: sub esp, 0xb0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100283F7: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100283FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100283FE: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x10028401: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10028402: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0xB0); /* 0x10028405: lea eax, [ebp - 0xb0] */
    PUSH32(esp, 0x55u); /* 0x1002840B: push 0x55 */
    PUSH32(esp, eax); /* 0x1002840D: push eax */
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 0x104u)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 0x104u));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 0x104u; /* 0x1002840E: or dword ptr [esi + 8], 0x104 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100283D0); /* 0x10028415: call 0x100283d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002841A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002841B: pop ecx */
    /* cmp eax, 1 */ /* 0x1002841C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002844F; /* 0x1002841F: jle 0x1002844f */
L_10028421:
    eax = ebp + (-0xB0); /* 0x10028421: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10028427: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x10028428: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002842D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1002842E: push eax */
    eax = ebp + (-0xB0); /* 0x1002842F: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x10028435: push eax */
    eax = esi + 0x250; /* 0x10028436: lea eax, [esi + 0x250] */
    PUSH32(esp, 0x55u); /* 0x1002843C: push 0x55 */
    PUSH32(esp, eax); /* 0x1002843E: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x1002843F: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10028444: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028447: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060448; /* 0x10028449: jne 0x10060448 */
L_1002844F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002844F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028452: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10028454: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028455: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002845A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002845C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002845D: ret  */
L_10060448:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10060448: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1006044A: push eax */
    PUSH32(esp, eax); /* 0x1006044B: push eax */
    PUSH32(esp, eax); /* 0x1006044C: push eax */
    PUSH32(esp, eax); /* 0x1006044D: push eax */
    PUSH32(esp, eax); /* 0x1006044E: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1006044F: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10060454u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002845E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002845Eu);

L_1002845E:
    PUSH32(esp, ebp); /* 0x1002845E: push ebp */
    ebp = esp; /* 0x1002845F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10028461: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10028464: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10028469: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1002846B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1002846E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002846F: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x10028472: lea eax, [ebp - 0x18] */
    PUSH32(esp, 9); /* 0x10028475: push 9 */
    PUSH32(esp, eax); /* 0x10028477: push eax */
    PUSH32(esp, 0x59u); /* 0x10028478: push 0x59 */
    PUSH32(esp, esi); /* 0x1002847A: push esi */
    RECOMP_CALL(sub_10020F41); /* 0x1002847B: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10028480: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028483: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002849B; /* 0x10028485: je 0x1002849b */
L_10028487:
    PUSH32(esp, 9); /* 0x10028487: push 9 */
    eax = ebp + (-0x18); /* 0x10028489: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1002848C: push esi */
    PUSH32(esp, eax); /* 0x1002848D: push eax */
    RECOMP_CALL(sub_100123EE); /* 0x1002848E: call 0x100123ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10028493: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10028496: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10028498: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002849A: inc eax */
    _flag_k = FK_INC;
L_1002849B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002849B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1002849E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100284A0: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100284A1: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100284A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100284A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100284A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100284B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100284B4u);

L_100284B4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100284B4: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100284B5: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x100284B8: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100284B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x304084B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + 0x304084B) = (uint8_t)(MEM8(ecx + 0x304084B) + LO8(eax)); /* 0x100284BB: add byte ptr [ecx + 0x304084b], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100284C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10028556; /* 0x100284C3: jmp 0x10028556 */
L_100284C8:
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & 0; /* 0x100284C8: and dword ptr [ebx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100284CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100284CE: inc eax */
    _flag_k = FK_INC;
    goto L_1002864D; /* 0x100284CF: jmp 0x1002864d */
L_10028556:
    PUSH32(esp, esi); /* 0x10028556: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10028557: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002855C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1002855D: push eax */
    PUSH32(esp, esi); /* 0x1002855E: push esi */
    eax = ebx + 0x250; /* 0x1002855F: lea eax, [ebx + 0x250] */
    PUSH32(esp, 0x55u); /* 0x10028565: push 0x55 */
    PUSH32(esp, eax); /* 0x10028567: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x10028568: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002856D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100285EF; /* 0x10028572: je 0x100285ef */
L_10028574:
    goto L_100604F8; /* 0x10028574: jmp 0x100604f8 */
L_100285EF:
    eax = MEM32(ebx + 0x8); /* 0x100285EF: mov eax, dword ptr [ebx + 8] */
    ecx = 0x300u; /* 0x100285F2: mov ecx, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100285F7: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x100285F9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028642; /* 0x100285FB: je 0x10028642 */
L_100285FD:
    ecx = MEM32(ebx + 0x10); /* 0x100285FD: mov ecx, dword ptr [ebx + 0x10] */
    eax = ebp + (-0x84); /* 0x10028600: lea eax, [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10028606: neg ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x80u); /* 0x10028608: push 0x80 */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002860D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1002860F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10028611: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1001u; /* 0x10028612: add ecx, 0x1001 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x10028618: push ecx */
    PUSH32(esp, esi); /* 0x10028619: push esi */
    RECOMP_CALL(sub_10020F41); /* 0x1002861A: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002861F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100284C8; /* 0x10028624: je 0x100284c8 */
L_1002862A:
    eax = ebp + (-0x84); /* 0x1002862A: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x10028630: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x10028631: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F840); /* 0x10028633: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028638: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028639: pop ecx */
    /* test eax, eax */ /* 0x1002863A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060473; /* 0x1002863C: je 0x10060473 */
L_10028642:
    eax = MEM32(ebx + 0x8); /* 0x10028642: mov eax, dword ptr [ebx + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10028645: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x10028645: shr eax, 2 */
    eax = ~eax; /* 0x10028648: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1002864A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002864D:
    edi = POP32_VAL(esp); /* 0x1002864D: pop edi */
    ecx = MEM32(ebp + (-0x4)); /* 0x1002864E: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10028651: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028652: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10028654: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028655: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002865A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002865C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1002865D: ret 0xc */
L_10060473:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x200u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x200u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x200u; /* 0x10060473: or dword ptr [ebx + 8], 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006047A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x1006047C: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100604B9; /* 0x1006047F: je 0x100604b9 */
L_10060481:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x100u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x100u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x100u; /* 0x10060481: or dword ptr [ebx + 8], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x250), LO16(edi) */ /* 0x10060488: cmp word ptr [ebx + 0x250], di */
    _flag_a = (uint32_t)(MEM16(ebx + 0x250)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028642; /* 0x1006048F: jne 0x10028642 */
L_10060495:
    PUSH32(esp, esi); /* 0x10060495: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10060496: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006049B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1006049C: push eax */
    PUSH32(esp, esi); /* 0x1006049D: push esi */
    eax = ebx + 0x250; /* 0x1006049E: lea eax, [ebx + 0x250] */
    PUSH32(esp, 0x55u); /* 0x100604A4: push 0x55 */
    PUSH32(esp, eax); /* 0x100604A6: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100604A7: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100604AC: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100604AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028642; /* 0x100604B1: je 0x10028642 */
L_100604B7:
    goto L_100604FA; /* 0x100604B7: jmp 0x100604fa */
L_100604B9:
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x100604B9: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060481; /* 0x100604BC: je 0x10060481 */
L_100604BE:
    PUSH32(esp, MEM32(ebx)); /* 0x100604BE: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100604C0: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604C5: pop ecx */
    /* cmp eax, MEM32(ebx + 0xC) */ /* 0x100604C6: cmp eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060481; /* 0x100604C9: jne 0x10060481 */
L_100604CB:
    PUSH32(esp, esi); /* 0x100604CB: push esi */
    RECOMP_CALL(sub_1002845E); /* 0x100604CC: call 0x1002845e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604D1: pop ecx */
    /* test eax, eax */ /* 0x100604D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060481; /* 0x100604D4: jne 0x10060481 */
L_100604D6:
    PUSH32(esp, MEM32(ebx)); /* 0x100604D6: push dword ptr [ebx] */
    RECOMP_CALL(sub_100286F8); /* 0x100604D8: call 0x100286f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx)); /* 0x100604DD: push dword ptr [ebx] */
    esi = eax; /* 0x100604DF: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100604E1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100604E7: pop ecx */
    /* cmp esi, eax */ /* 0x100604E8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028642; /* 0x100604EA: je 0x10028642 */
L_100604F0:
    esi = MEM32(ebp + (-0x88)); /* 0x100604F0: mov esi, dword ptr [ebp - 0x88] */
    RECOMP_BACKEDGE();
    goto L_10060481; /* 0x100604F6: jmp 0x10060481 */
L_100604F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100604F8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100604FA:
    PUSH32(esp, edi); /* 0x100604FA: push edi */
    PUSH32(esp, edi); /* 0x100604FB: push edi */
    PUSH32(esp, edi); /* 0x100604FC: push edi */
    PUSH32(esp, edi); /* 0x100604FD: push edi */
    PUSH32(esp, edi); /* 0x100604FE: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x100604FF: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10060504u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028579(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028579u);

    goto L_10028579;
L_100284BC:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x304u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x304u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x304u; /* 0x100284BC: or dword ptr [ebx + 8], 0x304 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10028556; /* 0x100284C3: jmp 0x10028556 */
L_100284C8:
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & 0; /* 0x100284C8: and dword ptr [ebx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100284CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100284CE: inc eax */
    _flag_k = FK_INC;
    goto L_1002864D; /* 0x100284CF: jmp 0x1002864d */
L_100284D4:
    PUSH32(esp, 0x40u); /* 0x100284D4: push 0x40 */
    eax = ebp + (-0x84); /* 0x100284D6: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x100284DC: push eax */
    eax = MEM32(ebx + 0x10); /* 0x100284DD: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100284E0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100284E2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100284E4: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1001u; /* 0x100284E6: add eax, 0x1001 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100284EB: push eax */
    PUSH32(esp, esi); /* 0x100284EC: push esi */
    RECOMP_CALL(sub_10020F41); /* 0x100284ED: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100284F2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100284F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100284C8; /* 0x100284F7: je 0x100284c8 */
L_100284F9:
    eax = ebp + (-0x84); /* 0x100284F9: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x100284FF: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x10028500: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F840); /* 0x10028502: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028507: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028508: pop ecx */
    /* test eax, eax */ /* 0x10028509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100284BC; /* 0x1002850B: je 0x100284bc */
L_1002850D:
    /* test MEM8(ebx + 0x8), 2 */ /* 0x1002850D: test byte ptr [ebx + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100285EF; /* 0x10028511: jne 0x100285ef */
L_10028517:
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x10028517: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028539; /* 0x1002851B: je 0x10028539 */
L_1002851D:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1002851D: push dword ptr [ebx + 0xc] */
    eax = ebp + (-0x84); /* 0x10028520: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x10028526: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x10028527: push dword ptr [ebx] */
    RECOMP_CALL(sub_1001C986); /* 0x10028529: call 0x1001c986 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002852E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028531: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006046A; /* 0x10028533: je 0x1006046a */
L_10028539:
    /* test MEM8(ebx + 0x8), 1 */ /* 0x10028539: test byte ptr [ebx + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100285EF; /* 0x1002853D: jne 0x100285ef */
L_10028543:
    PUSH32(esp, esi); /* 0x10028543: push esi */
    RECOMP_CALL(sub_1002845E); /* 0x10028544: call 0x1002845e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028549: pop ecx */
    /* test eax, eax */ /* 0x1002854A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100285EF; /* 0x1002854C: je 0x100285ef */
L_10028552:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 1));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 1; /* 0x10028552: or dword ptr [ebx + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10028556:
    PUSH32(esp, esi); /* 0x10028556: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10028557: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002855C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1002855D: push eax */
    PUSH32(esp, esi); /* 0x1002855E: push esi */
    eax = ebx + 0x250; /* 0x1002855F: lea eax, [ebx + 0x250] */
    PUSH32(esp, 0x55u); /* 0x10028565: push 0x55 */
    PUSH32(esp, eax); /* 0x10028567: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x10028568: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002856D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100285EF; /* 0x10028572: je 0x100285ef */
L_10028574:
    goto L_100604F8; /* 0x10028574: jmp 0x100604f8 */
L_10028579:
    PUSH32(esp, ebp); /* 0x10028579: push ebp */
    ebp = esp; /* 0x1002857A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x1002857C: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10028582: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10028587: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10028589: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1002858C: push ebx */
    PUSH32(esp, esi); /* 0x1002858D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1002858E: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x88)) = esi; /* 0x10028591: mov dword ptr [ebp - 0x88], esi */
    RECOMP_CALL(sub_1000F750); /* 0x10028597: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x40u); /* 0x1002859C: push 0x40 */
    ebx = eax + 0x9C; /* 0x1002859E: lea ebx, [eax + 0x9c] */
    ecx = MEM32(ebx + 0x14); /* 0x100285A4: mov ecx, dword ptr [ebx + 0x14] */
    eax = ebp + (-0x84); /* 0x100285A7: lea eax, [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100285AD: neg ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100285AF: push eax */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100285B0: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF005u);
    ecx = ecx & 0xFFFFF005u; /* 0x100285B2: and ecx, 0xfffff005 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1002u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1002u; /* 0x100285B8: add ecx, 0x1002 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x100285BE: push ecx */
    PUSH32(esp, esi); /* 0x100285BF: push esi */
    RECOMP_CALL(sub_10020F41); /* 0x100285C0: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100285C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100285C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060461; /* 0x100285CA: je 0x10060461 */
L_100285D0:
    PUSH32(esp, edi); /* 0x100285D0: push edi */
    eax = ebp + (-0x84); /* 0x100285D1: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x100285D7: push eax */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x100285D8: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000F840); /* 0x100285DB: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    edi = 0xFFFFF002u; /* 0x100285E0: mov edi, 0xfffff002 */
    ecx = POP32_VAL(esp); /* 0x100285E5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100285E6: pop ecx */
    /* test eax, eax */ /* 0x100285E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100284D4; /* 0x100285E9: je 0x100284d4 */
L_100285EF:
    eax = MEM32(ebx + 0x8); /* 0x100285EF: mov eax, dword ptr [ebx + 8] */
    ecx = 0x300u; /* 0x100285F2: mov ecx, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100285F7: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x100285F9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028642; /* 0x100285FB: je 0x10028642 */
L_100285FD:
    ecx = MEM32(ebx + 0x10); /* 0x100285FD: mov ecx, dword ptr [ebx + 0x10] */
    eax = ebp + (-0x84); /* 0x10028600: lea eax, [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10028606: neg ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x80u); /* 0x10028608: push 0x80 */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1002860D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1002860F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10028611: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1001u; /* 0x10028612: add ecx, 0x1001 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x10028618: push ecx */
    PUSH32(esp, esi); /* 0x10028619: push esi */
    RECOMP_CALL(sub_10020F41); /* 0x1002861A: call 0x10020f41 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002861F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10028622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100284C8; /* 0x10028624: je 0x100284c8 */
L_1002862A:
    eax = ebp + (-0x84); /* 0x1002862A: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x10028630: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x10028631: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F840); /* 0x10028633: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028638: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028639: pop ecx */
    /* test eax, eax */ /* 0x1002863A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10060473; /* 0x1002863C: je 0x10060473 */
L_10028642:
    eax = MEM32(ebx + 0x8); /* 0x10028642: mov eax, dword ptr [ebx + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10028645: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x10028645: shr eax, 2 */
    eax = ~eax; /* 0x10028648: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1002864A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002864D:
    edi = POP32_VAL(esp); /* 0x1002864D: pop edi */
L_1002864E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002864E: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10028651: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028652: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10028654: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028655: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1002865A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002865C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1002865D: ret 0xc */
L_10060461:
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(eax);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & eax; /* 0x10060461: and dword ptr [ebx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10060464: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002864E; /* 0x10060465: jmp 0x1002864e */
L_1006046A:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 2)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 2));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 2; /* 0x1006046A: or dword ptr [ebx + 8], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10028556; /* 0x1006046E: jmp 0x10028556 */
L_10060473:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x200u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x200u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x200u; /* 0x10060473: or dword ptr [ebx + 8], 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1006047A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x1006047C: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100604B9; /* 0x1006047F: je 0x100604b9 */
L_10060481:
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x100u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x100u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x100u; /* 0x10060481: or dword ptr [ebx + 8], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x250), LO16(edi) */ /* 0x10060488: cmp word ptr [ebx + 0x250], di */
    _flag_a = (uint32_t)(MEM16(ebx + 0x250)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10028642; /* 0x1006048F: jne 0x10028642 */
L_10060495:
    PUSH32(esp, esi); /* 0x10060495: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10060496: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006049B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1006049C: push eax */
    PUSH32(esp, esi); /* 0x1006049D: push esi */
    eax = ebx + 0x250; /* 0x1006049E: lea eax, [ebx + 0x250] */
    PUSH32(esp, 0x55u); /* 0x100604A4: push 0x55 */
    PUSH32(esp, eax); /* 0x100604A6: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x100604A7: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100604AC: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100604AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028642; /* 0x100604B1: je 0x10028642 */
L_100604B7:
    goto L_100604FA; /* 0x100604B7: jmp 0x100604fa */
L_100604B9:
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x100604B9: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10060481; /* 0x100604BC: je 0x10060481 */
L_100604BE:
    PUSH32(esp, MEM32(ebx)); /* 0x100604BE: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100604C0: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604C5: pop ecx */
    /* cmp eax, MEM32(ebx + 0xC) */ /* 0x100604C6: cmp eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060481; /* 0x100604C9: jne 0x10060481 */
L_100604CB:
    PUSH32(esp, esi); /* 0x100604CB: push esi */
    RECOMP_CALL(sub_1002845E); /* 0x100604CC: call 0x1002845e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604D1: pop ecx */
    /* test eax, eax */ /* 0x100604D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10060481; /* 0x100604D4: jne 0x10060481 */
L_100604D6:
    PUSH32(esp, MEM32(ebx)); /* 0x100604D6: push dword ptr [ebx] */
    RECOMP_CALL(sub_100286F8); /* 0x100604D8: call 0x100286f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx)); /* 0x100604DD: push dword ptr [ebx] */
    esi = eax; /* 0x100604DF: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100604E1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100604E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100604E7: pop ecx */
    /* cmp esi, eax */ /* 0x100604E8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028642; /* 0x100604EA: je 0x10028642 */
L_100604F0:
    esi = MEM32(ebp + (-0x88)); /* 0x100604F0: mov esi, dword ptr [ebp - 0x88] */
    RECOMP_BACKEDGE();
    goto L_10060481; /* 0x100604F6: jmp 0x10060481 */
L_100604F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100604F8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100604FA:
    PUSH32(esp, edi); /* 0x100604FA: push edi */
    PUSH32(esp, edi); /* 0x100604FB: push edi */
    PUSH32(esp, edi); /* 0x100604FC: push edi */
    PUSH32(esp, edi); /* 0x100604FD: push edi */
    PUSH32(esp, edi); /* 0x100604FE: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x100604FF: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10060504u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028660u);

L_10028660:
    PUSH32(esp, ebp); /* 0x10028660: push ebp */
    ebp = esp; /* 0x10028661: mov ebp, esp */
    eax = MEM32(0x100DFA58); /* 0x10028663: mov eax, dword ptr [0x100dfa58] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10028668: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FC07; /* 0x1002866E: je 0x1005fc07 */
L_10028674:
    PUSH32(esp, 0); /* 0x10028674: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10028676: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10028679: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002867C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1002867F: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10028681: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028682: ret  */
L_1005FC07:
    eax = MEM32(ebp + 0x8); /* 0x1005FC07: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1005FC0A: push 1 */
    PUSH32(esp, 0x100A604Eu); /* 0x1005FC0C: push 0x100a604e */
    MEM32(0x100E4430) = eax; /* 0x1005FC11: mov dword ptr [0x100e4430], eax */
    RECOMP_ICALL(MEM32(0x100E52B0)); /* 0x1005FC16: call dword ptr [0x100e52b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E4430)); _flag_b = (uint32_t)(0);
    MEM32(0x100E4430) = MEM32(0x100E4430) & 0; /* 0x1005FC1C: and dword ptr [0x100e4430], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005FC23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005FC24: ret  */
    RECOMP_REGS_OUT();
}

void sub_10028683(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028683u);

L_10028683:
    PUSH32(esp, ebp); /* 0x10028683: push ebp */
    ebp = esp; /* 0x10028684: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10028686: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10028687: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x1002868A: push dword ptr [esi] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002868C: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10028691: push dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10028694: sub eax, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10028697: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10028699: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002869B: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x10) = eax; /* 0x1002869C: mov dword ptr [esi + 0x10], eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002869F: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x100286A4: sub eax, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100286A7: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100286A9: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100286AA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100286AC: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x100286AD: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100286B1: pop ecx */
    MEM32(esi + 0x14) = eax; /* 0x100286B2: mov dword ptr [esi + 0x14], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10060455; /* 0x100286B5: jne 0x10060455 */
L_100286BB:
    PUSH32(esp, MEM32(esi)); /* 0x100286BB: push dword ptr [esi] */
    RECOMP_CALL(sub_100286F8); /* 0x100286BD: call 0x100286f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100286C2: pop ecx */
L_100286C3:
    PUSH32(esp, 0); /* 0x100286C3: push 0 */
    PUSH32(esp, 3); /* 0x100286C5: push 3 */
    PUSH32(esp, 0x10028579u); /* 0x100286C7: push 0x10028579 */
    MEM32(esi + 0xC) = eax; /* 0x100286CC: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_10028660); /* 0x100286CF: call 0x10028660 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100286D4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM32(esi + 0x8), 0x100u */ /* 0x100286D7: test dword ptr [esi + 8], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100286F2; /* 0x100286DE: je 0x100286f2 */
L_100286E0:
    /* test MEM32(esi + 0x8), 0x200u */ /* 0x100286E0: test dword ptr [esi + 8], 0x200 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100286F2; /* 0x100286E7: je 0x100286f2 */
L_100286E9:
    /* test MEM8(esi + 0x8), 7 */ /* 0x100286E9: test byte ptr [esi + 8], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100286F2; /* 0x100286ED: je 0x100286f2 */
L_100286EF:
    esi = POP32_VAL(esp); /* 0x100286EF: pop esi */
    ebp = POP32_VAL(esp); /* 0x100286F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100286F1: ret  */
L_100286F2:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x100286F2: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100286EF; /* 0x100286F6: jmp 0x100286ef */
L_10060455:
    PUSH32(esp, 2); /* 0x10060455: push 2 */
    eax = POP32_VAL(esp); /* 0x10060457: pop eax */
    RECOMP_BACKEDGE();
    goto L_100286C3; /* 0x10060458: jmp 0x100286c3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100286F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100286F8u);

L_100286F8:
    PUSH32(esp, ebp); /* 0x100286F8: push ebp */
    ebp = esp; /* 0x100286F9: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100286FB: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100286FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x10028700: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006045D; /* 0x10028702: je 0x1006045d */
L_10028708:
    eax = (uint32_t)MEM16(ecx); /* 0x10028708: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1002870B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), 0x41u */ /* 0x1002870E: cmp ax, 0x41 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x41u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1002871A; /* 0x10028712: jb 0x1002871a */
L_10028714:
    /* cmp LO16(eax), 0x5Au */ /* 0x10028714: cmp ax, 0x5a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x5Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_10028723; /* 0x10028718: jbe 0x10028723 */
L_1002871A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF9Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF9Fu; /* 0x1002871A: add eax, -0x61 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), 0x19u */ /* 0x1002871D: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_10028726; /* 0x10028721: ja 0x10028726 */
L_10028723:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10028723: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10028708; /* 0x10028724: jmp 0x10028708 */
L_10028726:
    eax = edx; /* 0x10028726: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x10028728: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028729: ret  */
L_1006045D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006045D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1006045F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10060460: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002872A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002872Au);

L_1002872A:
    PUSH32(esp, ebp); /* 0x1002872A: push ebp */
    ebp = esp; /* 0x1002872B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002872D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1002872E: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10028731: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10028733: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10028734: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10028735: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10028737: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002877A; /* 0x10028739: js 0x1002877a */
L_1002873B:
    PUSH32(esp, ebx); /* 0x1002873B: push ebx */
L_1002873C:
    /* test edx, edx */ /* 0x1002873C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028779; /* 0x1002873E: je 0x10028779 */
L_10028740:
    eax = edi + esi; /* 0x10028740: lea eax, [edi + esi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10028743: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10028744: sub eax, edx */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x10028746: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x10028748: mov eax, dword ptr [ebp + 8] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1002874B: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    ecx = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x1002874D: imul ecx, ebx, 0xc */
    MEM32(ebp + 0xC) = ecx; /* 0x10028750: mov dword ptr [ebp + 0xc], ecx */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x10028753: push dword ptr [ecx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x10028756: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax)); /* 0x10028759: push dword ptr [eax] */
    RECOMP_CALL(sub_1000F840); /* 0x1002875B: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10028760: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10028762: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10028763: pop ecx */
    /* test edx, edx */ /* 0x10028764: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006053C; /* 0x10028766: je 0x1006053c */
L_1002876C:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10029DD1; /* 0x1002876C: js 0x10029dd1 */
L_10028772:
    edi = ebx + 0x1; /* 0x10028772: lea edi, [ebx + 1] */
L_10028775:
    /* cmp edi, esi */ /* 0x10028775: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002873C; /* 0x10028777: jle 0x1002873c */
L_10028779:
    ebx = POP32_VAL(esp); /* 0x10028779: pop ebx */
L_1002877A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002877A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1002877C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1002877E: pop edi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002877F: sete al */
    esi = POP32_VAL(esp); /* 0x10028782: pop esi */
    ebp = POP32_VAL(esp); /* 0x10028783: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028784: ret  */
L_10029DD1:
    esi = ebx + (-0x1); /* 0x10029DD1: lea esi, [ebx - 1] */
    RECOMP_BACKEDGE();
    goto L_10028775; /* 0x10029DD4: jmp 0x10028775 */
L_1006053C:
    eax = MEM32(ebp + 0x8); /* 0x1006053C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1006053F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10060542: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x10060545: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x10060547: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x1006054A: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_10028775; /* 0x1006054C: jmp 0x10028775 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028808(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028808u);

L_10028808:
    { uint32_t _sa = LO8(eax), _sb = 0x89u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10028808: sbb al, 0x89 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002880A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1002880C: push ebp */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(edx)); /* 0x1002880D: add byte ptr [ebx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10028810: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028811: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ecx * 4)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ecx * 4) = (uint8_t)(MEM8(ecx + ecx * 4) + HI8(ecx)); /* 0x10028813: add byte ptr [ecx + ecx*4], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10028816: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10028818: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x10028819: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x1002881C: push edx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002881D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ecx * 4)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ecx * 4) = (uint8_t)(MEM8(ecx + ecx * 4) + HI8(ebx)); /* 0x1002881F: add byte ptr [ecx + ecx*4], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10028822: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10028824: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(ecx)); /* 0x10028825: add byte ptr [eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10028828: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028829: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x77))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x77)) = (uint8_t)(MEM8(eax + (-0x77)) + LO8(ecx)); /* 0x1002882B: add byte ptr [eax - 0x77], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002882E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10028830: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x10028831: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x10028834: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028835: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ecx * 4 + 0x2)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ecx * 4 + 0x2) = (uint8_t)(MEM8(ecx + ecx * 4 + 0x2) + LO8(edx)); /* 0x10028837: add byte ptr [ecx + ecx*4 + 2], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002883B: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002883E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x1002883F: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028842: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(FS_BASE + (edx)) = eax; /* 0x10028844: mov dword ptr fs:[edx], eax */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10028847: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1002884A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x1002884B: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002884E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(ecx + 0x4E1002) | 0x4Cu)) << 24; _flag_b = (uint32_t)((MEM8(ecx + 0x4E1002) | 0x4Cu)) << 24;
    MEM8(ecx + 0x4E1002) = (uint8_t)(MEM8(ecx + 0x4E1002) | 0x4Cu); /* 0x10028850: or byte ptr [ecx + 0x4e1002], 0x4c */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(eax)); /* 0x10028857: add byte ptr [eax + eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x48100289)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x48100289) = (uint8_t)(MEM8(eax + 0x48100289) + LO8(edx)); /* 0x1002885B: add byte ptr [eax + 0x48100289], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(ecx)); /* 0x10028861: add byte ptr [ebx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10028864: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028865: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx + ecx * 4 + 0x4E1002)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ecx * 4 + 0x4E1002) = (uint8_t)(MEM8(ecx + ecx * 4 + 0x4E1002) + HI8(eax)); /* 0x10028867: add byte ptr [ecx + ecx*4 + 0x4e1002], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1002886E; /* falls through past a gap */
L_1002886C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002886C: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ebx)); /* 0x1002886D: add byte ptr [edx], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10028870; /* falls through past a gap */
L_1002886E:
    edx = POP32_VAL(esp); /* 0x1002886E: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(ecx)); /* 0x1002886F: add byte ptr [eax + eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10028873; /* falls through past a gap */
L_10028870:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x10028870: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028871: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_10028873:
    _flag_a = (uint32_t)(MEM8(ecx + ecx * 4 + 0x4E1002)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + ecx * 4 + 0x4E1002) = (uint8_t)(MEM8(ecx + ecx * 4 + 0x4E1002) + HI8(ebx)); /* 0x10028873: add byte ptr [ecx + ecx*4 + 0x4e1002], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x1002887A: pop edx */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + LO8(ecx)); /* 0x1002887B: add byte ptr [eax + eax], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(eax)); /* 0x1002887F: add ah, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(edx) = eax; /* 0x10028881: mov dword ptr [edx], eax */
    { uint32_t _aa = MEM8(ebx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10028883: adc byte ptr [ebx], al */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10028886: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x10028887: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002888A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _st[0] *= (double)*(float*)ADDR(ecx + 0x431002); /* 0x1002888C: fmul dword ptr [ecx + 0x431002] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10028892: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x10028893: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028896: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x10028898: in al, dx */
    MEM32(edx) = eax; /* 0x10028899: mov dword ptr [edx], eax */
    { uint32_t _aa = MEM8(eax), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002889B: adc byte ptr [eax], dl */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x1002889E: push edx */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x1002889F: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x8Au) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x8Au); /* 0x100288A4: add al, 0x8a */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100288A6: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebx); /* 0x100288A8: push ebx */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100288A9: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100288AC: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288AD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + ecx * 4)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + ecx * 4) = (uint8_t)(MEM8(edx + ecx * 4) + LO8(edx)); /* 0x100288AF: add byte ptr [edx + ecx*4], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100288B2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edx = POP32_VAL(esp); /* 0x100288B4: pop edx */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x100288B5: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100288B8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288B9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100288BB: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(edx)); /* 0x100288BD: mov al, byte ptr [edx] */
    { uint32_t _aa = MEM8(ebx), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100288BF: adc byte ptr [ebx], cl */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100288C2: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100288C3: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288C6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100288C8: dec eax */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(edx)); /* 0x100288C9: mov al, byte ptr [edx] */
    { uint32_t _aa = MEM8(edx), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100288CB: adc byte ptr [edx], bl */
      MEM8(edx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100288CE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(eax)); /* 0x100288CF: add byte ptr [esi], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(FS_BASE + (edx))); /* 0x100288D4: mov al, byte ptr fs:[edx] */
    { uint32_t _aa = MEM8(ebx), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100288D7: adc byte ptr [ebx], cl */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100288DA: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100288DB: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_1002886C; /* 0x100288E0: jl 0x1002886c */
L_100288E2:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100288E2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100288E4: push esp */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x4F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x4F) = (uint8_t)(MEM8(eax + eax + 0x4F) + LO8(edx)); /* 0x100288E5: add byte ptr [eax + eax + 0x4f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + LO8(ebx)); /* 0x100288EB: add ah, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(edx)); /* 0x100288ED: mov al, byte ptr [edx] */
    { uint32_t _aa = MEM8(edi), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100288EF: adc byte ptr [edi], al */
      MEM8(edi) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100288F2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100288F3: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100288F6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(0x4710028A)); /* 0x100288F8: mov al, byte ptr [0x4710028a] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100288FD: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, edx); /* 0x10028900: push edx */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028901: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x10028903: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(edx)); /* 0x10028905: mov al, byte ptr [edx] */
    { uint32_t _aa = MEM8(ebp), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10028907: adc byte ptr [ebp], dl */
      MEM8(ebp) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x1002890A: push ebx */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x1002890B: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002890E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x10028910: lodsb al, byte ptr [esi] */
    /* test MEM8(edx), LO8(eax) */ /* 0x10028911: test byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = MEM8(ebp), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10028913: adc byte ptr [ebp], dl */
      MEM8(ebp) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x10028916: push ebx */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(eax)); /* 0x10028917: add byte ptr [ecx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002891A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x1002891C: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x1002891D: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x10028920: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00610063u); /* 0x10028924: imul eax, dword ptr [eax], 0x610063 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002892A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1002892Cu, "bound eax, qword ptr [eax]");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028930; /* 0x1002892E: jb 0x10028930 */
L_10028930:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00610074u); /* 0x10028930: imul eax, dword ptr [eax], 0x610074 */
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x6Eu); /* 0x10028936: imul eax, dword ptr [eax], 0x6e */
    void_lift_trap(0x1002893Cu, "arpl word ptr [eax], ax");
    PUSH32(esp, 0x6E006900u); /* 0x1002893E: push 0x6e006900 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x10028943: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028946: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10028948u, "arpl word ptr [eax], ax");
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_1002894C; /* 0x1002894A: jp 0x1002894c */
L_1002894C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(eax)); /* 0x1002894C: add byte ptr gs:[ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x65000000u); /* 0x10028950: push 0x65000000 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x10028955: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x10028958: add byte ptr [si], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x1002895C: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1002895D: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) + LO8(eax)); /* 0x10028960: add byte ptr fs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x10028963: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028968; /* 0x10028966: jb 0x10028968 */
L_10028968:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + HI8(eax)); /* 0x10028968: add byte ptr gs:[ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002896E; /* 0x1002896C: je 0x1002896e */
L_1002896E:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1002896E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x10028970u, "bound eax, qword ptr [eax]");
    if (0) goto L_10028974; /* 0x10028972: jb 0x10028974 */
L_10028974:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00610074u); /* 0x10028974: imul eax, dword ptr [eax], 0x610074 */
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x6Eu); /* 0x1002897A: imul eax, dword ptr [eax], 0x6e */
    PUSH32(esp, 0x6C006F00u); /* 0x10028980: push 0x6c006f00 */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(ecx)); /* 0x10028985: add byte ptr [eax + eax + 0x61], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x10028989: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) + LO8(eax)); /* 0x1002898C: add byte ptr fs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ecx)); /* 0x1002898F: add byte ptr [eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x10028992: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x10028993: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x10028996: add byte ptr [di], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x10028999: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x1002899C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1002899D: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + LO8(eax)); /* 0x100289A0: add byte ptr [bx + si], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100289A3: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edi)) = (uint8_t)(MEM8(GS_BASE + (edi)) + HI8(edx)); /* 0x100289A6: add byte ptr gs:[edi], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65007A00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x65007A00u; /* 0x100289AA: sub eax, 0x65007a00 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100289AF: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100289B2u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100289B3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100289B6: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x100289B7: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100289BB: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (RECOMP_PF((_flag_a + _flag_b), 24)) goto L_100289C0; /* 0x100289BE: jp 0x100289c0 */
L_100289C0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100289C0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100289C2: nop  */
    /* nop */ /* 0x100289C3: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100289C6; /* 0x100289C4: jo 0x100289c6 */
L_100289C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100289C8; /* 0x100289C6: jb 0x100289c8 */
L_100289C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100289C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100289CAu, "arpl word ptr [eax], ax");
    PUSH32(esp, 0x6E006900u); /* 0x100289CC: push 0x6e006900 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100289D1: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100289D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100289D6: nop  */
    /* nop */ /* 0x100289D7: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100289DA; /* 0x100289D8: jo 0x100289da */
L_100289DA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100289DC; /* 0x100289DA: jb 0x100289dc */
L_100289DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68006300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x68006300u; /* 0x100289DC: sub eax, 0x68006300 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100289E1: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100289E4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100289E5: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100289E8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100289EA: nop  */
    /* nop */ /* 0x100289EB: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100289EE; /* 0x100289EC: jo 0x100289ee */
L_100289EE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100289F0; /* 0x100289EE: jne 0x100289f0 */
L_100289F0:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100289F0: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100289F6; /* 0x100289F4: je 0x100289f6 */
L_100289F6:
    /* outsd: no port I/O under Win32 */ /* 0x100289F6: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(0x69007200)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x69007200) = (uint8_t)(MEM8(0x69007200) + HI8(ecx)); /* 0x100289F7: add byte ptr [0x69007200], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100289FD: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x10028A00: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10028A03: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10028A06u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x10028A07: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_BE)) goto L_10028A0C; /* 0x10028A0A: jbe 0x10028a0c */
L_10028A0C:
    POPAD(); /* 0x10028A0C: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x10028A0D: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A10: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10028A12: nop  */
    /* nop */ /* 0x10028A13: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10028A16; /* 0x10028A14: jae 0x10028a16 */
L_10028A16:
    /* outsd: no port I/O under Win32 */ /* 0x10028A16: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x10028A17: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028A1C; /* 0x10028A1A: je 0x10028a1c */
L_10028A1C:
    PUSH32(esp, 0x61002000u); /* 0x10028A1C: push 0x61002000 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x10028A21: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028A26; /* 0x10028A24: jb 0x10028a26 */
L_10028A26:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00610063u); /* 0x10028A26: imul eax, dword ptr [eax], 0x610063 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A2C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10028A2E: nop  */
    /* nop */ /* 0x10028A2F: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10028A32; /* 0x10028A30: jae 0x10028a32 */
L_10028A32:
    /* outsd: no port I/O under Win32 */ /* 0x10028A32: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x10028A33: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028A38; /* 0x10028A36: je 0x10028a38 */
L_10028A38:
    PUSH32(esp, 0x6B002000u); /* 0x10028A38: push 0x6b002000 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x10028A3D: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028A42; /* 0x10028A40: jb 0x10028a42 */
L_10028A42:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + HI8(eax)); /* 0x10028A42: add byte ptr gs:[ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A46: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10028A4A; /* 0x10028A48: jae 0x10028a4a */
L_10028A4A:
    /* outsd: no port I/O under Win32 */ /* 0x10028A4A: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x10028A4B: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028A50; /* 0x10028A4E: je 0x10028a50 */
L_10028A50:
    PUSH32(esp, 0x61002D00u); /* 0x10028A50: push 0x61002d00 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x10028A55: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028A5A; /* 0x10028A58: jb 0x10028a5a */
L_10028A5A:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00610063u); /* 0x10028A5A: imul eax, dword ptr [eax], 0x610063 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x10028A62: nop  */
    /* nop */ /* 0x10028A63: nop  */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_10028A66; /* 0x10028A64: jae 0x10028a66 */
L_10028A66:
    /* outsd: no port I/O under Win32 */ /* 0x10028A66: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x10028A67: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028A6C; /* 0x10028A6A: je 0x10028a6c */
L_10028A6C:
    PUSH32(esp, 0x6B002D00u); /* 0x10028A6C: push 0x6b002d00 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x10028A71: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10028A76; /* 0x10028A74: jb 0x10028a76 */
L_10028A76:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ecx)) = (uint8_t)(MEM8(GS_BASE + (ecx)) + HI8(eax)); /* 0x10028A76: add byte ptr gs:[ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A7A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028A7E; /* 0x10028A7C: je 0x10028a7e */
L_10028A7E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10028A80; /* 0x10028A7E: jb 0x10028a80 */
L_10028A80:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0069006Eu); /* 0x10028A80: imul eax, dword ptr [eax], 0x69006e */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(eax)); /* 0x10028A86: add byte ptr fs:[ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) + HI8(eax)); /* 0x10028A8A: add byte ptr fs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(eax)); /* 0x10028A8D: add byte ptr [esi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x10028A8F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6F) = (uint8_t)(MEM8(eax + eax + 0x6F) + HI8(edx)); /* 0x10028A91: add byte ptr [eax + eax + 0x6f], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x10028A95: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x10028A98: popal  */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x10028A99: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x10028A9C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028A9D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x10028A9F: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x10028AA2: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x10028AA3: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028AA8; /* 0x10028AA6: je 0x10028aa8 */
L_10028AA8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax + 0x2D))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax + 0x2D)) = (uint8_t)(MEM8(GS_BASE + (eax + eax + 0x2D)) + HI8(eax)); /* 0x10028AA8: add byte ptr gs:[eax + eax + 0x2d], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(ecx)); /* 0x10028AAD: add byte ptr [ebx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0067006Eu); /* 0x10028AB0: imul eax, dword ptr [eax], 0x67006e */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x10028AB6: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10028ABAu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028ABB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6E007590)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x6E007590) = (uint8_t)(MEM8(eax + 0x6E007590) + LO8(edx)); /* 0x10028ABD: add byte ptr [eax + 0x6e007590], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x10028AC3: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028AC8; /* 0x10028AC6: je 0x10028ac8 */
L_10028AC8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax + 0x2D))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax + 0x2D)) = (uint8_t)(MEM8(GS_BASE + (eax + eax + 0x2D)) + HI8(eax)); /* 0x10028AC8: add byte ptr gs:[eax + eax + 0x2d], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10028ACD: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10028AD2; /* 0x10028AD0: je 0x10028ad2 */
L_10028AD2:
    POPAD(); /* 0x10028AD2: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(edx)); /* 0x10028AD3: add byte ptr [eax + eax + 0x65], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10028AD7: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10028ADA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10028ADE; /* 0x10028ADC: jne 0x10028ade */
L_10028ADE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0); /* 0x10028ADE: imul eax, dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x10190E4C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x10190E4C) = (uint8_t)(MEM8(eax + 0x10190E4C) + LO8(eax)); /* 0x10028AE1: add byte ptr [eax + 0x10190e4c], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10028AE7; /* falls through past a gap */
L_10028AE2:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 0x10u); /* 0x10028AE2: or byte ptr [esi + ecx + 0x19], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10028AE7:
    SET_LO8(eax, MEM8(ebp + ecx + (-0x204))); /* 0x10028AE7: mov al, byte ptr [ebp + ecx - 0x204] */
L_10028AEE:
    MEM8(esi + ecx + 0x119) = (uint8_t)(LO8(eax)); /* 0x10028AEE: mov byte ptr [esi + ecx + 0x119], al */
    goto L_10028BDF; /* 0x10028AF5: jmp 0x10028bdf */
L_10028BC4:
    eax = (uint32_t)MEM16(ebp + ecx * 2 + (-0x504)); /* 0x10028BC4: movzx eax, word ptr [ebp + ecx*2 - 0x504] */
    /* test LO8(eax), 1 */ /* 0x10028BCC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028AE2; /* 0x10028BCE: jne 0x10028ae2 */
L_10028BD4:
    /* test LO8(eax), 2 */ /* 0x10028BD4: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028BF5; /* 0x10028BD6: jne 0x10028bf5 */
L_10028BD8:
    MEM8(esi + ecx + 0x119) = (uint8_t)(LO8(ebx)); /* 0x10028BD8: mov byte ptr [esi + ecx + 0x119], bl */
L_10028BDF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10028BDF: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x10028BE0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10028BC4; /* 0x10028BE2: jb 0x10028bc4 */
L_10028BE4:
    ecx = MEM32(ebp + (-0x4)); /* 0x10028BE4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10028BE7: pop edi */
    esi = POP32_VAL(esp); /* 0x10028BE8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028BE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10028BEB: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028BEC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10028BF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10028BF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028BF4: ret  */
L_10028BF5:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x20u)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 0x20u); /* 0x10028BF5: or byte ptr [esi + ecx + 0x19], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + ecx + (-0x304))); /* 0x10028BFA: mov al, byte ptr [ebp + ecx - 0x304] */
    RECOMP_BACKEDGE();
    goto L_10028AEE; /* 0x10028C01: jmp 0x10028aee */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028AFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028AFAu);

    goto L_10028AFA;
L_10028AE2:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 0x10u); /* 0x10028AE2: or byte ptr [esi + ecx + 0x19], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + ecx + (-0x204))); /* 0x10028AE7: mov al, byte ptr [ebp + ecx - 0x204] */
L_10028AEE:
    MEM8(esi + ecx + 0x119) = (uint8_t)(LO8(eax)); /* 0x10028AEE: mov byte ptr [esi + ecx + 0x119], al */
    goto L_10028BDF; /* 0x10028AF5: jmp 0x10028bdf */
L_10028AFA:
    PUSH32(esp, ebp); /* 0x10028AFA: push ebp */
    ebp = esp; /* 0x10028AFB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x520u; /* 0x10028AFD: sub esp, 0x520 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10028B03: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10028B08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10028B0A: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10028B0D: push ebx */
    PUSH32(esp, esi); /* 0x10028B0E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10028B0F: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x518); /* 0x10028B12: lea eax, [ebp - 0x518] */
    PUSH32(esp, edi); /* 0x10028B18: push edi */
    PUSH32(esp, eax); /* 0x10028B19: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10028B1A: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x100E51DC)); /* 0x10028B1D: call dword ptr [0x100e51dc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10028B23: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x100u; /* 0x10028B25: mov edi, 0x100 */
    /* test eax, eax */ /* 0x10028B2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005750F; /* 0x10028B2C: je 0x1005750f */
L_10028B32:
    eax = ebx; /* 0x10028B32: mov eax, ebx */
L_10028B34:
    MEM8(ebp + eax + (-0x104)) = (uint8_t)(LO8(eax)); /* 0x10028B34: mov byte ptr [ebp + eax - 0x104], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10028B3B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x10028B3C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10028B34; /* 0x10028B3E: jb 0x10028b34 */
L_10028B40:
    SET_LO8(eax, MEM8(ebp + (-0x512))); /* 0x10028B40: mov al, byte ptr [ebp - 0x512] */
    ecx = ebp + (-0x512); /* 0x10028B46: lea ecx, [ebp - 0x512] */
    MEM8(ebp + (-0x104)) = (uint8_t)(0x20u); /* 0x10028B4C: mov byte ptr [ebp - 0x104], 0x20 */
L_10028B53:
    /* test LO8(eax), LO8(eax) */ /* 0x10028B53: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100574EB; /* 0x10028B55: jne 0x100574eb */
L_10028B5B:
    PUSH32(esp, ebx); /* 0x10028B5B: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10028B5C: push dword ptr [esi + 4] */
    eax = ebp + (-0x504); /* 0x10028B5F: lea eax, [ebp - 0x504] */
    PUSH32(esp, eax); /* 0x10028B65: push eax */
    PUSH32(esp, edi); /* 0x10028B66: push edi */
    eax = ebp + (-0x104); /* 0x10028B67: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x10028B6D: push eax */
    PUSH32(esp, 1); /* 0x10028B6E: push 1 */
    PUSH32(esp, ebx); /* 0x10028B70: push ebx */
    RECOMP_CALL(sub_100211C4); /* 0x10028B71: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10028B76: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10028B77: push dword ptr [esi + 4] */
    eax = ebp + (-0x204); /* 0x10028B7A: lea eax, [ebp - 0x204] */
    PUSH32(esp, edi); /* 0x10028B80: push edi */
    PUSH32(esp, eax); /* 0x10028B81: push eax */
    PUSH32(esp, edi); /* 0x10028B82: push edi */
    eax = ebp + (-0x104); /* 0x10028B83: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x10028B89: push eax */
    PUSH32(esp, edi); /* 0x10028B8A: push edi */
    PUSH32(esp, MEM32(esi + 0x21C)); /* 0x10028B8B: push dword ptr [esi + 0x21c] */
    PUSH32(esp, ebx); /* 0x10028B91: push ebx */
    RECOMP_CALL(sub_10020EFE); /* 0x10028B92: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x40u; /* 0x10028B97: add esp, 0x40 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x304); /* 0x10028B9A: lea eax, [ebp - 0x304] */
    PUSH32(esp, ebx); /* 0x10028BA0: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10028BA1: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x10028BA4: push edi */
    PUSH32(esp, eax); /* 0x10028BA5: push eax */
    PUSH32(esp, edi); /* 0x10028BA6: push edi */
    eax = ebp + (-0x104); /* 0x10028BA7: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x10028BAD: push eax */
    PUSH32(esp, 0x200u); /* 0x10028BAE: push 0x200 */
    PUSH32(esp, MEM32(esi + 0x21C)); /* 0x10028BB3: push dword ptr [esi + 0x21c] */
    PUSH32(esp, ebx); /* 0x10028BB9: push ebx */
    RECOMP_CALL(sub_10020EFE); /* 0x10028BBA: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x10028BBF: add esp, 0x24 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x10028BC2: mov ecx, ebx */
L_10028BC4:
    eax = (uint32_t)MEM16(ebp + ecx * 2 + (-0x504)); /* 0x10028BC4: movzx eax, word ptr [ebp + ecx*2 - 0x504] */
    /* test LO8(eax), 1 */ /* 0x10028BCC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028AE2; /* 0x10028BCE: jne 0x10028ae2 */
L_10028BD4:
    /* test LO8(eax), 2 */ /* 0x10028BD4: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10028BF5; /* 0x10028BD6: jne 0x10028bf5 */
L_10028BD8:
    MEM8(esi + ecx + 0x119) = (uint8_t)(LO8(ebx)); /* 0x10028BD8: mov byte ptr [esi + ecx + 0x119], bl */
L_10028BDF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10028BDF: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x10028BE0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10028BC4; /* 0x10028BE2: jb 0x10028bc4 */
L_10028BE4:
    ecx = MEM32(ebp + (-0x4)); /* 0x10028BE4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10028BE7: pop edi */
    esi = POP32_VAL(esp); /* 0x10028BE8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028BE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10028BEB: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028BEC: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10028BF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10028BF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028BF4: ret  */
L_10028BF5:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x20u)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 0x20u); /* 0x10028BF5: or byte ptr [esi + ecx + 0x19], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + ecx + (-0x304))); /* 0x10028BFA: mov al, byte ptr [ebp + ecx - 0x304] */
    RECOMP_BACKEDGE();
    goto L_10028AEE; /* 0x10028C01: jmp 0x10028aee */
L_100574EB:
    edx = (uint32_t)MEM8(ecx + 0x1); /* 0x100574EB: movzx edx, byte ptr [ecx + 1] */
    eax = (uint32_t)LO8(eax); /* 0x100574EF: movzx eax, al */
    goto L_10057501; /* 0x100574F2: jmp 0x10057501 */
L_100574F4:
    /* cmp eax, edi */ /* 0x100574F4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10057505; /* 0x100574F6: jae 0x10057505 */
L_100574F8:
    MEM8(ebp + eax + (-0x104)) = (uint8_t)(0x20u); /* 0x100574F8: mov byte ptr [ebp + eax - 0x104], 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10057500: inc eax */
    _flag_k = FK_INC;
L_10057501:
    /* cmp eax, edx */ /* 0x10057501: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100574F4; /* 0x10057503: jbe 0x100574f4 */
L_10057505:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10057505: add ecx, 2 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx)); /* 0x10057508: mov al, byte ptr [ecx] */
    RECOMP_BACKEDGE();
    goto L_10028B53; /* 0x1005750A: jmp 0x10028b53 */
L_1005750F:
    PUSH32(esp, 0xFFFFFF9Fu); /* 0x1005750F: push -0x61 */
    edx = esi + 0x119; /* 0x10057511: lea edx, [esi + 0x119] */
    ecx = ebx; /* 0x10057517: mov ecx, ebx */
    eax = POP32_VAL(esp); /* 0x10057519: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1005751A: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x520)) = eax; /* 0x1005751C: mov dword ptr [ebp - 0x520], eax */
L_10057522:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10057522: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10057524: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x51C)) = eax; /* 0x10057526: mov dword ptr [ebp - 0x51c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1005752C: add eax, 0x20 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x19u */ /* 0x1005752F: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005753E; /* 0x10057532: ja 0x1005753e */
L_10057534:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 0x10u)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 0x10u); /* 0x10057534: or byte ptr [esi + ecx + 0x19], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx + 0x20; /* 0x10057539: lea eax, [ecx + 0x20] */
    goto L_10057551; /* 0x1005753C: jmp 0x10057551 */
L_1005753E:
    /* cmp MEM32(ebp + (-0x51C)), 0x19u */ /* 0x1005753E: cmp dword ptr [ebp - 0x51c], 0x19 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x51C))); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10057555; /* 0x10057545: ja 0x10057555 */
L_10057547:
    eax = esi + ecx; /* 0x10057547: lea eax, [esi + ecx] */
    _flag_a = (uint32_t)((MEM8(eax + 0x19) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x19) | 0x20u)) << 24;
    MEM8(eax + 0x19) = (uint8_t)(MEM8(eax + 0x19) | 0x20u); /* 0x1005754A: or byte ptr [eax + 0x19], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx + (-0x20); /* 0x1005754E: lea eax, [ecx - 0x20] */
L_10057551:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x10057551: mov byte ptr [edx], al */
    goto L_10057557; /* 0x10057553: jmp 0x10057557 */
L_10057555:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x10057555: mov byte ptr [edx], bl */
L_10057557:
    eax = MEM32(ebp + (-0x520)); /* 0x10057557: mov eax, dword ptr [ebp - 0x520] */
    edx = esi + 0x119; /* 0x1005755D: lea edx, [esi + 0x119] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10057563: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x10057564: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10028BE4; /* 0x10057566: jae 0x10028be4 */
L_1005756C:
    RECOMP_BACKEDGE();
    goto L_10057522; /* 0x1005756C: jmp 0x10057522 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028C06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028C06u);

L_10028C06:
    PUSH32(esp, ebp); /* 0x10028C06: push ebp */
    ebp = esp; /* 0x10028C07: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10028C09: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x10028C0C: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x10028C0F: push 0 */
    RECOMP_CALL(sub_1000F764); /* 0x10028C11: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E0BE8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0BE8) = MEM32(0x100E0BE8) & 0; /* 0x10028C16: and dword ptr [0x100e0be8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x10028C1D: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10028C20: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100574C1; /* 0x10028C23: je 0x100574c1 */
L_10028C29:
    /* cmp eax, 0xFFFFFFFDu */ /* 0x10028C29: cmp eax, -3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002C633; /* 0x10028C2C: je 0x1002c633 */
L_10028C32:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x10028C32: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100574D6; /* 0x10028C35: je 0x100574d6 */
L_10028C3B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10028C3B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028C48; /* 0x10028C3F: je 0x10028c48 */
L_10028C41:
    ecx = MEM32(ebp + (-0x8)); /* 0x10028C41: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10028C44: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10028C48:
    esp = ebp; /* 0x10028C48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10028C4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028C4B: ret  */
L_1002C633:
    MEM32(0x100E0BE8) = 1; /* 0x1002C633: mov dword ptr [0x100e0be8], 1 */
    RECOMP_ICALL(MEM32(0x100E51D4)); /* 0x1002C63D: call dword ptr [0x100e51d4] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10028C3B; /* 0x1002C643: jmp 0x10028c3b */
L_100574C1:
    MEM32(0x100E0BE8) = 1; /* 0x100574C1: mov dword ptr [0x100e0be8], 1 */
    RECOMP_ICALL(MEM32(0x100E51D8)); /* 0x100574CB: call dword ptr [0x100e51d8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10028C3B; /* 0x100574D1: jmp 0x10028c3b */
L_100574D6:
    eax = MEM32(ebp + (-0x10)); /* 0x100574D6: mov eax, dword ptr [ebp - 0x10] */
    MEM32(0x100E0BE8) = 1; /* 0x100574D9: mov dword ptr [0x100e0be8], 1 */
    eax = MEM32(eax + 0x4); /* 0x100574E3: mov eax, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_10028C3B; /* 0x100574E6: jmp 0x10028c3b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028C4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028C4Cu);

L_10028C4C:
    PUSH32(esp, ebp); /* 0x10028C4C: push ebp */
    ebp = esp; /* 0x10028C4D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10028C4F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10028C52: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10028C57: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10028C59: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10028C5C: push ebx */
    PUSH32(esp, esi); /* 0x10028C5D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10028C5E: push dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0xC); /* 0x10028C61: mov esi, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10028C06); /* 0x10028C64: call 0x10028c06 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10028C69: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10028C6B: pop ecx */
    /* test ebx, ebx */ /* 0x10028C6C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100575EF; /* 0x10028C6E: je 0x100575ef */
L_10028C74:
    PUSH32(esp, edi); /* 0x10028C74: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10028C75: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x10028C77: mov ecx, edi */
    eax = edi; /* 0x10028C79: mov eax, edi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10028C7B: mov dword ptr [ebp - 0x1c], ecx */
L_10028C7E:
    /* cmp MEM32(eax + 0x100E0AF8), ebx */ /* 0x10028C7E: cmp dword ptr [eax + 0x100e0af8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x100E0AF8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057666; /* 0x10028C84: je 0x10057666 */
L_10028C8A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10028C8A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x10028C8B: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10028C8E: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, 0xF0u */ /* 0x10028C91: cmp eax, 0xf0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10028C7E; /* 0x10028C96: jb 0x10028c7e */
L_10028C98:
    /* cmp ebx, 0xFDE8u */ /* 0x10028C98: cmp ebx, 0xfde8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFDE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028D15; /* 0x10028C9E: je 0x10028d15 */
L_10028CA0:
    /* cmp ebx, 0xFDE9u */ /* 0x10028CA0: cmp ebx, 0xfde9 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFDE9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028D15; /* 0x10028CA6: je 0x10028d15 */
L_10028CA8:
    eax = (uint32_t)LO16(ebx); /* 0x10028CA8: movzx eax, bx */
    PUSH32(esp, eax); /* 0x10028CAB: push eax */
    RECOMP_ICALL(MEM32(0x100E51D0)); /* 0x10028CAC: call dword ptr [0x100e51d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10028CB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10028D15; /* 0x10028CB4: je 0x10028d15 */
L_10028CB6:
    eax = ebp + (-0x18); /* 0x10028CB6: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x10028CB9: push eax */
    PUSH32(esp, ebx); /* 0x10028CBA: push ebx */
    RECOMP_ICALL(MEM32(0x100E51DC)); /* 0x10028CBB: call dword ptr [0x100e51dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10028CC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005764F; /* 0x10028CC3: je 0x1005764f */
L_10028CC9:
    PUSH32(esp, 0x101u); /* 0x10028CC9: push 0x101 */
    eax = esi + 0x18; /* 0x10028CCE: lea eax, [esi + 0x18] */
    PUSH32(esp, edi); /* 0x10028CD1: push edi */
    PUSH32(esp, eax); /* 0x10028CD2: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10028CD3: call 0x10011533 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = ebx; /* 0x10028CD8: mov dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10028CDB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10028CDE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x21C) = edi; /* 0x10028CE0: mov dword ptr [esi + 0x21c], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10028CE6: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x10028CE7: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100575FD; /* 0x10028CEA: ja 0x100575fd */
L_10028CF0:
    MEM32(esi + 0x8) = edi; /* 0x10028CF0: mov dword ptr [esi + 8], edi */
L_10028CF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10028CF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0xC; /* 0x10028CF5: lea edi, [esi + 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10028CF8: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10028CF9: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x10028CFA: stosd dword ptr es:[edi], eax */
L_10028CFB:
    PUSH32(esp, esi); /* 0x10028CFB: push esi */
    RECOMP_CALL(sub_10028AFA); /* 0x10028CFC: call 0x10028afa */
    RECOMP_FLAGS_IN();
L_10028D01:
    ecx = POP32_VAL(esp); /* 0x10028D01: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10028D02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10028D04:
    edi = POP32_VAL(esp); /* 0x10028D04: pop edi */
L_10028D05:
    ecx = MEM32(ebp + (-0x4)); /* 0x10028D05: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x10028D08: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10028D09: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10028D0B: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10028D0C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10028D11: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10028D13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D14: ret  */
L_10028D15:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10028D15: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10028D04; /* 0x10028D18: jmp 0x10028d04 */
L_100575EF:
    PUSH32(esp, esi); /* 0x100575EF: push esi */
    RECOMP_CALL(sub_1008AEE0); /* 0x100575F0: call 0x1008aee0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100575F5: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100575F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10028D05; /* 0x100575F8: jmp 0x10028d05 */
L_100575FD:
    /* cmp MEM8(ebp + (-0x12)), 0 */ /* 0x100575FD: cmp byte ptr [ebp - 0x12], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x12); /* 0x10057601: lea eax, [ebp - 0x12] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10057627; /* 0x10057604: je 0x10057627 */
L_10057606:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x10057606: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10057609: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057627; /* 0x1005760B: je 0x10057627 */
L_1005760D:
    edx = (uint32_t)LO8(ecx); /* 0x1005760D: movzx edx, cl */
    ecx = (uint32_t)MEM8(eax); /* 0x10057610: movzx ecx, byte ptr [eax] */
    goto L_1005761B; /* 0x10057613: jmp 0x1005761b */
L_10057615:
    _flag_a = (uint32_t)((MEM8(esi + ecx + 0x19) | 4)) << 24; _flag_b = (uint32_t)((MEM8(esi + ecx + 0x19) | 4)) << 24;
    MEM8(esi + ecx + 0x19) = (uint8_t)(MEM8(esi + ecx + 0x19) | 4); /* 0x10057615: or byte ptr [esi + ecx + 0x19], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005761A: inc ecx */
    _flag_k = FK_INC;
L_1005761B:
    /* cmp ecx, edx */ /* 0x1005761B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10057615; /* 0x1005761D: jbe 0x10057615 */
L_1005761F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1005761F: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x10057622: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10057606; /* 0x10057625: jne 0x10057606 */
L_10057627:
    eax = esi + 0x1A; /* 0x10057627: lea eax, [esi + 0x1a] */
    ecx = 0xFEu; /* 0x1005762A: mov ecx, 0xfe */
L_1005762F:
    _flag_a = (uint32_t)((MEM8(eax) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax) | 8)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | 8); /* 0x1005762F: or byte ptr [eax], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10057632: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10057633: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005762F; /* 0x10057634: jne 0x1005762f */
L_10057636:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10057636: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1008AE95); /* 0x10057639: call 0x1008ae95 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1005763E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x21C) = eax; /* 0x10057641: mov dword ptr [esi + 0x21c], eax */
    MEM32(esi + 0x8) = ebx; /* 0x10057647: mov dword ptr [esi + 8], ebx */
    RECOMP_BACKEDGE();
    goto L_10028CF3; /* 0x1005764A: jmp 0x10028cf3 */
L_1005764F:
    /* cmp MEM32(0x100E0BE8), edi */ /* 0x1005764F: cmp dword ptr [0x100e0be8], edi */
    _flag_a = (uint32_t)(MEM32(0x100E0BE8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10028D15; /* 0x10057655: je 0x10028d15 */
L_1005765B:
    PUSH32(esp, esi); /* 0x1005765B: push esi */
    RECOMP_CALL(sub_1008AEE0); /* 0x1005765C: call 0x1008aee0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10028D01; /* 0x10057661: jmp 0x10028d01 */
L_10057666:
    PUSH32(esp, 0x101u); /* 0x10057666: push 0x101 */
    eax = esi + 0x18; /* 0x1005766B: lea eax, [esi + 0x18] */
    PUSH32(esp, edi); /* 0x1005766E: push edi */
    PUSH32(esp, eax); /* 0x1005766F: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10057670: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10057675: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x1C)) * (int32_t)0x30u); /* 0x10057678: imul eax, dword ptr [ebp - 0x1c], 0x30 */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005767C: mov dword ptr [ebp - 0x20], eax */
    eax = eax + 0x100E0B08; /* 0x1005767F: lea eax, [eax + 0x100e0b08] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10057685: mov dword ptr [ebp - 0x1c], eax */
L_10057688:
    /* cmp MEM8(eax), 0 */ /* 0x10057688: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x1005768B: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100576C4; /* 0x1005768D: je 0x100576c4 */
L_1005768F:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1005768F: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x10057692: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100576C1; /* 0x10057694: je 0x100576c1 */
L_10057696:
    edx = (uint32_t)MEM8(ecx); /* 0x10057696: movzx edx, byte ptr [ecx] */
    eax = (uint32_t)LO8(eax); /* 0x10057699: movzx eax, al */
    goto L_100576B5; /* 0x1005769C: jmp 0x100576b5 */
L_1005769E:
    /* cmp edx, 0x100u */ /* 0x1005769E: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100576B9; /* 0x100576A4: jae 0x100576b9 */
L_100576A6:
    SET_LO8(eax, MEM8(edi + 0x100E149C)); /* 0x100576A6: mov al, byte ptr [edi + 0x100e149c] */
    _flag_a = (uint32_t)((MEM8(esi + edx + 0x19) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(esi + edx + 0x19) | LO8(eax))) << 24;
    MEM8(esi + edx + 0x19) = (uint8_t)(MEM8(esi + edx + 0x19) | LO8(eax)); /* 0x100576AC: or byte ptr [esi + edx + 0x19], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100576B0: inc edx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x100576B1: movzx eax, byte ptr [ecx + 1] */
L_100576B5:
    /* cmp edx, eax */ /* 0x100576B5: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005769E; /* 0x100576B7: jbe 0x1005769e */
L_100576B9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100576B9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ecx), 0 */ /* 0x100576BC: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005768F; /* 0x100576BF: jne 0x1005768f */
L_100576C1:
    eax = MEM32(ebp + (-0x1C)); /* 0x100576C1: mov eax, dword ptr [ebp - 0x1c] */
L_100576C4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100576C4: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x100576C5: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x100576C8: mov dword ptr [ebp - 0x1c], eax */
    /* cmp edi, 4 */ /* 0x100576CB: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10057688; /* 0x100576CE: jb 0x10057688 */
L_100576D0:
    PUSH32(esp, ebx); /* 0x100576D0: push ebx */
    MEM32(esi + 0x4) = ebx; /* 0x100576D1: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = 1; /* 0x100576D4: mov dword ptr [esi + 8], 1 */
    RECOMP_CALL(sub_1008AE95); /* 0x100576DB: call 0x1008ae95 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100576E0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x21C) = eax; /* 0x100576E3: mov dword ptr [esi + 0x21c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x100576E9: mov eax, dword ptr [ebp - 0x20] */
    ecx = esi + 0xC; /* 0x100576EC: lea ecx, [esi + 0xc] */
    PUSH32(esp, 6); /* 0x100576EF: push 6 */
    edx = eax + 0x100E0AFC; /* 0x100576F1: lea edx, [eax + 0x100e0afc] */
    edi = POP32_VAL(esp); /* 0x100576F7: pop edi */
L_100576F8:
    SET_LO16(eax, MEM16(edx)); /* 0x100576F8: mov ax, word ptr [edx] */
    edx = edx + 0x2; /* 0x100576FB: lea edx, [edx + 2] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100576FE: mov word ptr [ecx], ax */
    ecx = ecx + 0x2; /* 0x10057701: lea ecx, [ecx + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10057704: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10028CFB; /* 0x10057705: je 0x10028cfb */
L_1005770B:
    RECOMP_BACKEDGE();
    goto L_100576F8; /* 0x1005770B: jmp 0x100576f8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10028D1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028D1Au);

L_10028D1A:
    eax = 0x100DF290u; /* 0x10028D1A: mov eax, 0x100df290 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10028D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028D20u);

L_10028D20:
    eax = 0x100DF280u; /* 0x10028D20: mov eax, 0x100df280 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D25: ret  */
    RECOMP_REGS_OUT();
}

void sub_10028D26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028D26u);

L_10028D26:
    eax = 0x100DF284u; /* 0x10028D26: mov eax, 0x100df284 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10028D2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10028D2Cu);

L_10028D2C:
    PUSH32(esp, 7); /* 0x10028D2C: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10028D2E: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10028D33: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D34: ret  */
    RECOMP_REGS_OUT();
}
