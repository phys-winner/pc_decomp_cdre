#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1214F9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F9C0u);

L_1214F9C0:
    edi = edi; /* 0x1214F9C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F9C2: push ebp */
    ebp = esp; /* 0x1214F9C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F9C5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F9C6: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0xCAu */ /* 0x1214F9C9: cmp dword ptr [esi + 0x14], 0xca */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F9F6; /* 0x1214F9D0: jne 0x1214f9f6 */
L_1214F9D2:
    PUSH32(esp, esi); /* 0x1214F9D2: push esi */
    RECOMP_CALL(sub_12154040); /* 0x1214F9D3: call 0x12154040 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x1214F9D8: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F9EF; /* 0x1214F9DC: je 0x1214f9ef */
L_1214F9DE:
    MEM32(esi + 0x14) = 0xCFu; /* 0x1214F9DE: mov dword ptr [esi + 0x14], 0xcf */
    eax = 1; /* 0x1214F9E5: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x1214F9EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F9EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F9EC: ret 4 */
L_1214F9EF:
    MEM32(esi + 0x14) = 0xCBu; /* 0x1214F9EF: mov dword ptr [esi + 0x14], 0xcb */
L_1214F9F6:
    eax = MEM32(esi + 0x14); /* 0x1214F9F6: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xCBu */ /* 0x1214F9F9: cmp eax, 0xcb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214FA77; /* 0x1214F9FE: jne 0x1214fa77 */
L_1214FA00:
    eax = MEM32(esi + 0x1B8); /* 0x1214FA00: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1214FA06: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FA61; /* 0x1214FA0A: je 0x1214fa61 */
L_1214FA0C:
    esp = esp; /* 0x1214FA0C: lea esp, [esp] */
L_1214FA10:
    eax = MEM32(esi + 0x8); /* 0x1214FA10: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x1214FA13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FA1C; /* 0x1214FA15: je 0x1214fa1c */
L_1214FA17:
    eax = MEM32(eax); /* 0x1214FA17: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FA19: push esi */
    RECOMP_ICALL(eax); /* 0x1214FA1A: call eax */
    RECOMP_FLAGS_IN();
L_1214FA1C:
    eax = MEM32(esi + 0x1B8); /* 0x1214FA1C: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax); /* 0x1214FA22: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FA24: push esi */
    RECOMP_ICALL(eax); /* 0x1214FA25: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FA27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FA5A; /* 0x1214FA29: je 0x1214fa5a */
L_1214FA2B:
    /* cmp eax, 2 */ /* 0x1214FA2B: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FA61; /* 0x1214FA2E: je 0x1214fa61 */
L_1214FA30:
    ecx = MEM32(esi + 0x8); /* 0x1214FA30: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x1214FA33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FA10; /* 0x1214FA35: je 0x1214fa10 */
L_1214FA37:
    /* cmp eax, 3 */ /* 0x1214FA37: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FA41; /* 0x1214FA3A: je 0x1214fa41 */
L_1214FA3C:
    /* cmp eax, 1 */ /* 0x1214FA3C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214FA10; /* 0x1214FA3F: jne 0x1214fa10 */
L_1214FA41:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) + 1; /* 0x1214FA41: inc dword ptr [ecx + 4] */
    _flag_k = FK_INC;
    ecx = MEM32(ecx + 0x4); /* 0x1214FA44: mov ecx, dword ptr [ecx + 4] */
    edx = MEM32(esi + 0x8); /* 0x1214FA47: mov edx, dword ptr [esi + 8] */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x1214FA4A: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214FA10; /* 0x1214FA4D: jl 0x1214fa10 */
L_1214FA4F:
    eax = MEM32(esi + 0x144); /* 0x1214FA4F: mov eax, dword ptr [esi + 0x144] */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) + eax; /* 0x1214FA55: add dword ptr [edx + 8], eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214FA10; /* 0x1214FA58: jmp 0x1214fa10 */
L_1214FA5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214FA5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214FA5C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214FA5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214FA5E: ret 4 */
L_1214FA61:
    eax = MEM32(esi + 0x94); /* 0x1214FA61: mov eax, dword ptr [esi + 0x94] */
    MEM32(esi + 0x9C) = eax; /* 0x1214FA67: mov dword ptr [esi + 0x9c], eax */
    RECOMP_CALL(sub_1214F8B0); /* 0x1214FA6D: call 0x1214f8b0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1214FA72: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214FA73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214FA74: ret 4 */
L_1214FA77:
    /* cmp eax, 0xCCu */ /* 0x1214FA77: cmp eax, 0xcc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FA96; /* 0x1214FA7C: je 0x1214fa96 */
L_1214FA7E:
    eax = MEM32(esi); /* 0x1214FA7E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x1214FA80: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x1214FA87: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x1214FA8A: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1214FA8C: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x1214FA8F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214FA91: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FA93: push esi */
    RECOMP_ICALL(eax); /* 0x1214FA94: call eax */
    RECOMP_FLAGS_IN();
L_1214FA96:
    RECOMP_CALL(sub_1214F8B0); /* 0x1214FA96: call 0x1214f8b0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1214FA9B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214FA9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214FA9D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214FAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214FAB0u);

L_1214FAB0:
    eax = MEM32(esi); /* 0x1214FAB0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x66u; /* 0x1214FAB2: mov dword ptr [eax + 0x14], 0x66 */
    eax = MEM32(esi); /* 0x1214FAB9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214FABB: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214FABE: push 1 */
    PUSH32(esp, esi); /* 0x1214FAC0: push esi */
    RECOMP_ICALL(eax); /* 0x1214FAC1: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x1214FAC3: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x1214FAC9: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FADF; /* 0x1214FACD: je 0x1214fadf */
L_1214FACF:
    eax = MEM32(esi); /* 0x1214FACF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x3Du; /* 0x1214FAD1: mov dword ptr [eax + 0x14], 0x3d */
    eax = MEM32(esi); /* 0x1214FAD8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214FADA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FADC: push esi */
    RECOMP_ICALL(eax); /* 0x1214FADD: call eax */
    RECOMP_FLAGS_IN();
L_1214FADF:
    eax = esi + 0xF8; /* 0x1214FADF: lea eax, [esi + 0xf8] */
    ecx = 0x10u; /* 0x1214FAE5: mov ecx, 0x10 */
    ebx = ebx; /* 0x1214FAEA: lea ebx, [ebx] */
L_1214FAF0:
    MEM8(eax + (-0x10)) = (uint8_t)(0); /* 0x1214FAF0: mov byte ptr [eax - 0x10], 0 */
    MEM8(eax) = (uint8_t)(1); /* 0x1214FAF4: mov byte ptr [eax], 1 */
    MEM8(eax + 0x10) = (uint8_t)(5); /* 0x1214FAF7: mov byte ptr [eax + 0x10], 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214FAFB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214FAFC: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FAF0; /* 0x1214FAFD: jne 0x1214faf0 */
L_1214FAFF:
    MEM32(esi + 0x118) = ecx; /* 0x1214FAFF: mov dword ptr [esi + 0x118], ecx */
    MEM32(esi + 0x28) = ecx; /* 0x1214FB05: mov dword ptr [esi + 0x28], ecx */
    MEM32(esi + 0x130) = ecx; /* 0x1214FB08: mov dword ptr [esi + 0x130], ecx */
    MEM32(esi + 0x11C) = ecx; /* 0x1214FB0E: mov dword ptr [esi + 0x11c], ecx */
    MEM8(esi + 0x122) = (uint8_t)(LO8(ecx)); /* 0x1214FB14: mov byte ptr [esi + 0x122], cl */
    MEM32(esi + 0x128) = ecx; /* 0x1214FB1A: mov dword ptr [esi + 0x128], ecx */
    MEM8(esi + 0x12C) = (uint8_t)(LO8(ecx)); /* 0x1214FB20: mov byte ptr [esi + 0x12c], cl */
    ecx = MEM32(esi + 0x1BC); /* 0x1214FB26: mov ecx, dword ptr [esi + 0x1bc] */
    MEM16(esi + 0x120) = (uint16_t)(0x101u); /* 0x1214FB2C: mov word ptr [esi + 0x120], 0x101 */
    MEM32(esi + 0x124) = 0x00010001u; /* 0x1214FB35: mov dword ptr [esi + 0x124], 0x10001 */
    MEM32(ecx + 0xC) = 1; /* 0x1214FB3F: mov dword ptr [ecx + 0xc], 1 */
    eax = 1; /* 0x1214FB46: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214FB4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214FB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214FB60u);

L_1214FB60:
    edi = edi; /* 0x1214FB60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214FB62: push ebp */
    ebp = esp; /* 0x1214FB63: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214FB65: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1214FB66: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214FB69: push ebx */
    PUSH32(esp, esi); /* 0x1214FB6A: push esi */
    PUSH32(esp, edi); /* 0x1214FB6B: push edi */
    edi = MEM32(ecx + 0x18); /* 0x1214FB6C: mov edi, dword ptr [ecx + 0x18] */
    esi = MEM32(edi + 0x4); /* 0x1214FB6F: mov esi, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x1214FB72: mov ebx, dword ptr [edi] */
    MEM32(ecx + 0xE0) = eax; /* 0x1214FB74: mov dword ptr [ecx + 0xe0], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214FB7A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0xE4) = eax; /* 0x1214FB7D: mov dword ptr [ecx + 0xe4], eax */
    /* test esi, esi */ /* 0x1214FB83: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FBA4; /* 0x1214FB85: jne 0x1214fba4 */
L_1214FB87:
    eax = MEM32(edi + 0xC); /* 0x1214FB87: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FB8A: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FB8B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FB8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FB9C; /* 0x1214FB8F: jne 0x1214fb9c */
L_1214FB91:
    edi = POP32_VAL(esp); /* 0x1214FB91: pop edi */
    esi = POP32_VAL(esp); /* 0x1214FB92: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214FB93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214FB95: pop ebx */
    esp = ebp; /* 0x1214FB96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1214FB98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214FB99: ret 8 */
L_1214FB9C:
    ebx = MEM32(edi); /* 0x1214FB9C: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FB9E: mov esi, dword ptr [edi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FBA1: mov ecx, dword ptr [ebp + 8] */
L_1214FBA4:
    edx = (uint32_t)MEM8(ebx); /* 0x1214FBA4: movzx edx, byte ptr [ebx] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1214FBA7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1214FBA7: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FBAA: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FBAB: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edx; /* 0x1214FBAC: mov dword ptr [ebp + 0xc], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FBC3; /* 0x1214FBAF: jne 0x1214fbc3 */
L_1214FBB1:
    eax = MEM32(edi + 0xC); /* 0x1214FBB1: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FBB4: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FBB5: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FBB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FBB9: je 0x1214fb91 */
L_1214FBBB:
    ebx = MEM32(edi); /* 0x1214FBBB: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FBBD: mov esi, dword ptr [edi + 4] */
    edx = MEM32(ebp + 0xC); /* 0x1214FBC0: mov edx, dword ptr [ebp + 0xc] */
L_1214FBC3:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FBC3: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1214FBC6: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FBC8: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FBC9: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edx; /* 0x1214FBCA: mov dword ptr [ebp + 0xc], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FBE0; /* 0x1214FBCD: jne 0x1214fbe0 */
L_1214FBCF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214FBCF: push dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x1214FBD2: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1214FBD5: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FBD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FBD9: je 0x1214fb91 */
L_1214FBDB:
    ebx = MEM32(edi); /* 0x1214FBDB: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FBDD: mov esi, dword ptr [edi + 4] */
L_1214FBE0:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FBE0: movzx eax, byte ptr [ebx] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FBE3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FBE6: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FBE7: dec esi */
    _flag_k = FK_DEC;
    MEM32(ecx + 0xD8) = eax; /* 0x1214FBE8: mov dword ptr [ecx + 0xd8], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FC02; /* 0x1214FBEE: jne 0x1214fc02 */
L_1214FBF0:
    eax = MEM32(edi + 0xC); /* 0x1214FBF0: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FBF3: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FBF4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FBF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FBF8: je 0x1214fb91 */
L_1214FBFA:
    ebx = MEM32(edi); /* 0x1214FBFA: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FBFC: mov esi, dword ptr [edi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FBFF: mov ecx, dword ptr [ebp + 8] */
L_1214FC02:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FC02: movzx eax, byte ptr [ebx] */
    edx = ecx + 0x20; /* 0x1214FC05: lea edx, [ecx + 0x20] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1214FC08: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1214FC08: shl eax, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FC0B: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FC0C: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x1214FC0D: mov dword ptr [ebp - 4], edx */
    MEM32(edx) = eax; /* 0x1214FC10: mov dword ptr [edx], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FC2D; /* 0x1214FC12: jne 0x1214fc2d */
L_1214FC14:
    eax = MEM32(edi + 0xC); /* 0x1214FC14: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FC17: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FC18: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FC1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FC1C: je 0x1214fb91 */
L_1214FC22:
    ebx = MEM32(edi); /* 0x1214FC22: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FC24: mov esi, dword ptr [edi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FC27: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x1214FC2A: mov edx, dword ptr [ebp - 4] */
L_1214FC2D:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FC2D: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x1214FC30: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FC32: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FC33: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FC49; /* 0x1214FC34: jne 0x1214fc49 */
L_1214FC36:
    eax = MEM32(edi + 0xC); /* 0x1214FC36: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FC39: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FC3A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FC3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FC3E: je 0x1214fb91 */
L_1214FC44:
    ebx = MEM32(edi); /* 0x1214FC44: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FC46: mov esi, dword ptr [edi + 4] */
L_1214FC49:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FC49: movzx eax, byte ptr [ebx] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FC4C: mov ecx, dword ptr [ebp + 8] */
    edx = ecx + 0x1C; /* 0x1214FC4F: lea edx, [ecx + 0x1c] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1214FC52: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1214FC52: shl eax, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FC55: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FC56: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x1214FC57: mov dword ptr [ebp - 4], edx */
    MEM32(edx) = eax; /* 0x1214FC5A: mov dword ptr [edx], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FC77; /* 0x1214FC5C: jne 0x1214fc77 */
L_1214FC5E:
    eax = MEM32(edi + 0xC); /* 0x1214FC5E: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FC61: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FC62: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FC64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FC66: je 0x1214fb91 */
L_1214FC6C:
    ebx = MEM32(edi); /* 0x1214FC6C: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FC6E: mov esi, dword ptr [edi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1214FC71: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x1214FC74: mov edx, dword ptr [ebp - 4] */
L_1214FC77:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FC77: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x1214FC7A: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FC7C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FC7D: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FC93; /* 0x1214FC7E: jne 0x1214fc93 */
L_1214FC80:
    eax = MEM32(edi + 0xC); /* 0x1214FC80: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, ecx); /* 0x1214FC83: push ecx */
    RECOMP_ICALL(eax); /* 0x1214FC84: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FC86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FC88: je 0x1214fb91 */
L_1214FC8E:
    ebx = MEM32(edi); /* 0x1214FC8E: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FC90: mov esi, dword ptr [edi + 4] */
L_1214FC93:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FC93: movzx eax, byte ptr [ebx] */
    edx = MEM32(ebp + 0x8); /* 0x1214FC96: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1214FC99: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 8; /* 0x1214FC9B: sub dword ptr [ebp + 0xc], 8 */
    _flag_k = FK_CMP;
    MEM32(edx + 0x24) = eax; /* 0x1214FC9F: mov dword ptr [edx + 0x24], eax */
    eax = MEM32(edx + 0x1A4); /* 0x1214FCA2: mov eax, dword ptr [edx + 0x1a4] */
    MEM32(ecx + 0x18) = eax; /* 0x1214FCA8: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx + 0x1C); /* 0x1214FCAB: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ecx + 0x1C) = eax; /* 0x1214FCAE: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(edx + 0x20); /* 0x1214FCB1: mov eax, dword ptr [edx + 0x20] */
    MEM32(ecx + 0x20) = eax; /* 0x1214FCB4: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(edx + 0x24); /* 0x1214FCB7: mov eax, dword ptr [edx + 0x24] */
    MEM32(ecx + 0x24) = eax; /* 0x1214FCBA: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(edx); /* 0x1214FCBD: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x64u; /* 0x1214FCBF: mov dword ptr [eax + 0x14], 0x64 */
    eax = MEM32(edx); /* 0x1214FCC6: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1214FCC8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214FCCB: push 1 */
    PUSH32(esp, edx); /* 0x1214FCCD: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FCCE: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FCCF: inc ebx */
    _flag_k = FK_INC;
    RECOMP_ICALL(eax); /* 0x1214FCD0: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1214FCD2: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x1BC); /* 0x1214FCD5: mov eax, dword ptr [edx + 0x1bc] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1214FCDB: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FCF4; /* 0x1214FCDF: je 0x1214fcf4 */
L_1214FCE1:
    eax = MEM32(edx); /* 0x1214FCE1: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x3Au; /* 0x1214FCE3: mov dword ptr [eax + 0x14], 0x3a */
    eax = MEM32(edx); /* 0x1214FCEA: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x1214FCEC: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1214FCEE: push edx */
    RECOMP_ICALL(eax); /* 0x1214FCEF: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1214FCF1: mov edx, dword ptr [ebp + 8] */
L_1214FCF4:
    /* cmp MEM32(edx + 0x20), 0 */ /* 0x1214FCF4: cmp dword ptr [edx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214FD06; /* 0x1214FCF8: jbe 0x1214fd06 */
L_1214FCFA:
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x1214FCFA: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214FD06; /* 0x1214FCFE: jbe 0x1214fd06 */
L_1214FD00:
    /* cmp MEM32(edx + 0x24), 0 */ /* 0x1214FD00: cmp dword ptr [edx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214FD19; /* 0x1214FD04: jg 0x1214fd19 */
L_1214FD06:
    eax = MEM32(edx); /* 0x1214FD06: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x20u; /* 0x1214FD08: mov dword ptr [eax + 0x14], 0x20 */
    eax = MEM32(edx); /* 0x1214FD0F: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x1214FD11: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1214FD13: push edx */
    RECOMP_ICALL(eax); /* 0x1214FD14: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1214FD16: mov edx, dword ptr [ebp + 8] */
L_1214FD19:
    eax = MEM32(edx + 0x24); /* 0x1214FD19: mov eax, dword ptr [edx + 0x24] */
    eax = eax + eax * 2; /* 0x1214FD1C: lea eax, [eax + eax*2] */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1214FD1F: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FD37; /* 0x1214FD22: je 0x1214fd37 */
L_1214FD24:
    eax = MEM32(edx); /* 0x1214FD24: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0xBu; /* 0x1214FD26: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(edx); /* 0x1214FD2D: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x1214FD2F: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1214FD31: push edx */
    RECOMP_ICALL(eax); /* 0x1214FD32: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1214FD34: mov edx, dword ptr [ebp + 8] */
L_1214FD37:
    /* cmp MEM32(edx + 0xDC), 0 */ /* 0x1214FD37: cmp dword ptr [edx + 0xdc], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0xDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214FD5A; /* 0x1214FD3E: jne 0x1214fd5a */
L_1214FD40:
    eax = MEM32(edx + 0x24); /* 0x1214FD40: mov eax, dword ptr [edx + 0x24] */
    ecx = MEM32(edx + 0x4); /* 0x1214FD43: mov ecx, dword ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54u); /* 0x1214FD46: imul eax, eax, 0x54 */
    PUSH32(esp, eax); /* 0x1214FD49: push eax */
    eax = MEM32(ecx); /* 0x1214FD4A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214FD4C: push 1 */
    PUSH32(esp, edx); /* 0x1214FD4E: push edx */
    RECOMP_ICALL(eax); /* 0x1214FD4F: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1214FD51: mov edx, dword ptr [ebp + 8] */
    MEM32(edx + 0xDC) = eax; /* 0x1214FD54: mov dword ptr [edx + 0xdc], eax */
L_1214FD5A:
    eax = MEM32(edx + 0xDC); /* 0x1214FD5A: mov eax, dword ptr [edx + 0xdc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214FD60: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214FD62: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1214FD65: mov dword ptr [ebp + 0xc], eax */
    /* cmp MEM32(edx + 0x24), ecx */ /* 0x1214FD68: cmp dword ptr [edx + 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x24)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214FE3F; /* 0x1214FD6B: jle 0x1214fe3f */
L_1214FD71:
    MEM32(eax + 0x4) = ecx; /* 0x1214FD71: mov dword ptr [eax + 4], ecx */
    /* test esi, esi */ /* 0x1214FD74: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FD8E; /* 0x1214FD76: jne 0x1214fd8e */
L_1214FD78:
    eax = MEM32(edi + 0xC); /* 0x1214FD78: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, edx); /* 0x1214FD7B: push edx */
    RECOMP_ICALL(eax); /* 0x1214FD7C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FD7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FD80: je 0x1214fb91 */
L_1214FD86:
    ebx = MEM32(edi); /* 0x1214FD86: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FD88: mov esi, dword ptr [edi + 4] */
    edx = MEM32(ebp + 0x8); /* 0x1214FD8B: mov edx, dword ptr [ebp + 8] */
L_1214FD8E:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FD8E: movzx eax, byte ptr [ebx] */
    ecx = MEM32(ebp + 0xC); /* 0x1214FD91: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FD94: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FD95: dec esi */
    _flag_k = FK_DEC;
    MEM32(ecx) = eax; /* 0x1214FD96: mov dword ptr [ecx], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FDAD; /* 0x1214FD98: jne 0x1214fdad */
L_1214FD9A:
    eax = MEM32(edi + 0xC); /* 0x1214FD9A: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, edx); /* 0x1214FD9D: push edx */
    RECOMP_ICALL(eax); /* 0x1214FD9E: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FDA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FDA2: je 0x1214fb91 */
L_1214FDA8:
    ebx = MEM32(edi); /* 0x1214FDA8: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FDAA: mov esi, dword ptr [edi + 4] */
L_1214FDAD:
    ecx = (uint32_t)MEM8(ebx); /* 0x1214FDAD: movzx ecx, byte ptr [ebx] */
    edx = MEM32(ebp + 0xC); /* 0x1214FDB0: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x1214FDB3: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1214FDB5: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1214FDB8: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x1214FDBB: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FDBE: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FDBF: dec esi */
    _flag_k = FK_DEC;
    MEM32(edx + 0x8) = eax; /* 0x1214FDC0: mov dword ptr [edx + 8], eax */
    MEM32(edx + 0xC) = ecx; /* 0x1214FDC3: mov dword ptr [edx + 0xc], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FDE0; /* 0x1214FDC6: jne 0x1214fde0 */
L_1214FDC8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214FDC8: push dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x1214FDCB: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1214FDCE: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FDD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FB91; /* 0x1214FDD2: je 0x1214fb91 */
L_1214FDD8:
    ebx = MEM32(edi); /* 0x1214FDD8: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x1214FDDA: mov esi, dword ptr [edi + 4] */
    edx = MEM32(ebp + 0xC); /* 0x1214FDDD: mov edx, dword ptr [ebp + 0xc] */
L_1214FDE0:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FDE0: movzx eax, byte ptr [ebx] */
    MEM32(edx + 0x10) = eax; /* 0x1214FDE3: mov dword ptr [edx + 0x10], eax */
    edx = MEM32(ebp + 0x8); /* 0x1214FDE6: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x1214FDE9: mov ecx, dword ptr [edx] */
    eax = MEM32(ebp + 0xC); /* 0x1214FDEB: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x1214FDEE: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x18) = eax; /* 0x1214FDF0: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214FDF3: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1214FDF6: mov eax, dword ptr [eax + 8] */
    MEM32(ecx + 0x1C) = eax; /* 0x1214FDF9: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214FDFC: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x1214FDFF: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx + 0x20) = eax; /* 0x1214FE02: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214FE05: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1214FE08: mov eax, dword ptr [eax + 0x10] */
    MEM32(ecx + 0x24) = eax; /* 0x1214FE0B: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(edx); /* 0x1214FE0E: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x65u; /* 0x1214FE10: mov dword ptr [eax + 0x14], 0x65 */
    eax = MEM32(edx); /* 0x1214FE17: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1214FE19: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214FE1C: push 1 */
    PUSH32(esp, edx); /* 0x1214FE1E: push edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214FE1F: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FE20: inc ebx */
    _flag_k = FK_INC;
    RECOMP_ICALL(eax); /* 0x1214FE21: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1214FE23: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x1214FE26: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1214FE29: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214FE2C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x54u; /* 0x1214FE2D: add eax, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214FE30: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1214FE33: mov dword ptr [ebp + 0xc], eax */
    /* cmp ecx, MEM32(edx + 0x24) */ /* 0x1214FE36: cmp ecx, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214FD71; /* 0x1214FE39: jl 0x1214fd71 */
L_1214FE3F:
    eax = MEM32(edx + 0x1BC); /* 0x1214FE3F: mov eax, dword ptr [edx + 0x1bc] */
    MEM32(eax + 0x10) = 1; /* 0x1214FE45: mov dword ptr [eax + 0x10], 1 */
    MEM32(edi) = ebx; /* 0x1214FE4C: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x1214FE4E: mov dword ptr [edi + 4], esi */
    edi = POP32_VAL(esp); /* 0x1214FE51: pop edi */
    esi = POP32_VAL(esp); /* 0x1214FE52: pop esi */
    eax = 1; /* 0x1214FE53: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x1214FE58: pop ebx */
    esp = ebp; /* 0x1214FE59: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1214FE5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214FE5C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214FE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214FE70u);

L_1214FE70:
    edi = edi; /* 0x1214FE70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214FE72: push ebp */
    ebp = esp; /* 0x1214FE73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1214FE75: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x18); /* 0x1214FE78: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x1BC); /* 0x1214FE7B: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1214FE81: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214FE85: push ebx */
    ebx = MEM32(ecx); /* 0x1214FE86: mov ebx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1214FE88: push edi */
    edi = MEM32(ecx + 0x4); /* 0x1214FE89: mov edi, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214FE8C: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214FEA4; /* 0x1214FE8F: jne 0x1214fea4 */
L_1214FE91:
    eax = MEM32(esi); /* 0x1214FE91: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x3Eu; /* 0x1214FE93: mov dword ptr [eax + 0x14], 0x3e */
    eax = MEM32(esi); /* 0x1214FE9A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214FE9C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FE9E: push esi */
    RECOMP_ICALL(eax); /* 0x1214FE9F: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1214FEA1: mov ecx, dword ptr [ebp - 4] */
L_1214FEA4:
    /* test edi, edi */ /* 0x1214FEA4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FEC2; /* 0x1214FEA6: jne 0x1214fec2 */
L_1214FEA8:
    eax = MEM32(ecx + 0xC); /* 0x1214FEA8: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1214FEAB: push esi */
    RECOMP_ICALL(eax); /* 0x1214FEAC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FEAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FEBA; /* 0x1214FEB0: jne 0x1214feba */
L_1214FEB2:
    edi = POP32_VAL(esp); /* 0x1214FEB2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214FEB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214FEB5: pop ebx */
    esp = ebp; /* 0x1214FEB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1214FEB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214FEB9: ret  */
L_1214FEBA:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214FEBA: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(ecx); /* 0x1214FEBD: mov ebx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x1214FEBF: mov edi, dword ptr [ecx + 4] */
L_1214FEC2:
    edx = (uint32_t)MEM8(ebx); /* 0x1214FEC2: movzx edx, byte ptr [ebx] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1214FEC5: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1214FEC5: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FEC8: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214FEC9: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1214FECA: mov dword ptr [ebp - 8], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FEE4; /* 0x1214FECD: jne 0x1214fee4 */
L_1214FECF:
    eax = MEM32(ecx + 0xC); /* 0x1214FECF: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1214FED2: push esi */
    RECOMP_ICALL(eax); /* 0x1214FED3: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FED5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1214FED7: je 0x1214feb2 */
L_1214FED9:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214FED9: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(ecx); /* 0x1214FEDC: mov ebx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x1214FEDE: mov edi, dword ptr [ecx + 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1214FEE1: mov edx, dword ptr [ebp - 8] */
L_1214FEE4:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FEE4: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1214FEE7: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FEE9: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214FEEA: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1214FEEB: mov dword ptr [ebp - 8], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FF02; /* 0x1214FEEE: jne 0x1214ff02 */
L_1214FEF0:
    eax = MEM32(ecx + 0xC); /* 0x1214FEF0: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1214FEF3: push esi */
    RECOMP_ICALL(eax); /* 0x1214FEF4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FEF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1214FEF8: je 0x1214feb2 */
L_1214FEFA:
    eax = MEM32(ebp + (-0x4)); /* 0x1214FEFA: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(eax); /* 0x1214FEFD: mov ebx, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x1214FEFF: mov edi, dword ptr [eax + 4] */
L_1214FF02:
    ecx = (uint32_t)MEM8(ebx); /* 0x1214FF02: movzx ecx, byte ptr [ebx] */
    eax = MEM32(esi); /* 0x1214FF05: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x67u; /* 0x1214FF07: mov dword ptr [eax + 0x14], 0x67 */
    eax = MEM32(esi); /* 0x1214FF0E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x1214FF10: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x1214FF13: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214FF15: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214FF18: push 1 */
    PUSH32(esp, esi); /* 0x1214FF1A: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214FF1B: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1214FF1C: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FF1F: inc ebx */
    _flag_k = FK_INC;
    RECOMP_ICALL(eax); /* 0x1214FF20: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1214FF22: mov ecx, dword ptr [ebp - 0xc] */
    eax = ecx + ecx + 0x6; /* 0x1214FF25: lea eax, [ecx + ecx + 6] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1214FF29: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214FF38; /* 0x1214FF2C: jne 0x1214ff38 */
L_1214FF2E:
    /* cmp ecx, 1 */ /* 0x1214FF2E: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214FF38; /* 0x1214FF31: jl 0x1214ff38 */
L_1214FF33:
    /* cmp ecx, 4 */ /* 0x1214FF33: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214FF4B; /* 0x1214FF36: jle 0x1214ff4b */
L_1214FF38:
    eax = MEM32(esi); /* 0x1214FF38: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xBu; /* 0x1214FF3A: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(esi); /* 0x1214FF41: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214FF43: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FF45: push esi */
    RECOMP_ICALL(eax); /* 0x1214FF46: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1214FF48: mov ecx, dword ptr [ebp - 0xc] */
L_1214FF4B:
    MEM32(esi + 0x14C) = ecx; /* 0x1214FF4B: mov dword ptr [esi + 0x14c], ecx */
    MEM32(ebp + (-0x18)) = 0; /* 0x1214FF51: mov dword ptr [ebp - 0x18], 0 */
    /* test ecx, ecx */ /* 0x1214FF58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215004C; /* 0x1214FF5A: jle 0x1215004c */
L_1214FF60:
    eax = esi + 0x150; /* 0x1214FF60: lea eax, [esi + 0x150] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214FF66: mov dword ptr [ebp - 8], eax */
    esp = esp; /* 0x1214FF69: lea esp, [esp] */
L_1214FF70:
    /* test edi, edi */ /* 0x1214FF70: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214FF8F; /* 0x1214FF72: jne 0x1214ff8f */
L_1214FF74:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214FF74: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0xC); /* 0x1214FF77: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1214FF7A: push esi */
    RECOMP_ICALL(eax); /* 0x1214FF7B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FF7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1214FF7F: je 0x1214feb2 */
L_1214FF85:
    eax = MEM32(ebp + (-0x4)); /* 0x1214FF85: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(eax); /* 0x1214FF88: mov ebx, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x1214FF8A: mov edi, dword ptr [eax + 4] */
    goto L_1214FF92; /* 0x1214FF8D: jmp 0x1214ff92 */
L_1214FF8F:
    eax = MEM32(ebp + (-0x4)); /* 0x1214FF8F: mov eax, dword ptr [ebp - 4] */
L_1214FF92:
    ecx = (uint32_t)MEM8(ebx); /* 0x1214FF92: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FF95: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214FF96: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1214FF97: mov dword ptr [ebp - 0x14], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214FFB5; /* 0x1214FF9A: jne 0x1214ffb5 */
L_1214FF9C:
    eax = MEM32(eax + 0xC); /* 0x1214FF9C: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1214FF9F: push esi */
    RECOMP_ICALL(eax); /* 0x1214FFA0: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214FFA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1214FFA4: je 0x1214feb2 */
L_1214FFAA:
    eax = MEM32(ebp + (-0x4)); /* 0x1214FFAA: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(eax); /* 0x1214FFAD: mov ebx, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x1214FFAF: mov edi, dword ptr [eax + 4] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1214FFB2: mov ecx, dword ptr [ebp - 0x14] */
L_1214FFB5:
    eax = (uint32_t)MEM8(ebx); /* 0x1214FFB5: movzx eax, byte ptr [ebx] */
    edx = MEM32(esi + 0xDC); /* 0x1214FFB8: mov edx, dword ptr [esi + 0xdc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1214FFBE: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214FFC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214FFC3: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214FFC4: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edx; /* 0x1214FFC5: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(esi + 0x24), eax */ /* 0x1214FFC8: cmp dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214FFE0; /* 0x1214FFCB: jle 0x1214ffe0 */
L_1214FFCD:
    ecx = ecx; /* 0x1214FFCD: lea ecx, [ecx] */
L_1214FFD0:
    /* cmp ecx, MEM32(edx) */ /* 0x1214FFD0: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214FFF8; /* 0x1214FFD2: je 0x1214fff8 */
L_1214FFD4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214FFD4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x1214FFD5: add edx, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x1214FFD8: mov dword ptr [ebp - 0x10], edx */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x1214FFDB: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214FFD0; /* 0x1214FFDE: jl 0x1214ffd0 */
L_1214FFE0:
    eax = MEM32(esi); /* 0x1214FFE0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 5; /* 0x1214FFE2: mov dword ptr [eax + 0x14], 5 */
    eax = MEM32(esi); /* 0x1214FFE9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x1214FFEB: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x1214FFEE: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214FFF0: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214FFF2: push esi */
    RECOMP_ICALL(eax); /* 0x1214FFF3: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1214FFF5: mov edx, dword ptr [ebp - 0x10] */
L_1214FFF8:
    eax = MEM32(ebp + (-0x8)); /* 0x1214FFF8: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1214FFFB: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax) = edx; /* 0x1214FFFE: mov dword ptr [eax], edx */
    eax = ecx; /* 0x12150000: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x12150002: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x12150005: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x14) = eax; /* 0x12150008: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1215000B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x1215000E: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x18) = ecx; /* 0x12150011: mov dword ptr [edx + 0x18], ecx */
    ecx = MEM32(esi); /* 0x12150014: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12150016: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx + 0x14); /* 0x12150019: mov eax, dword ptr [edx + 0x14] */
    MEM32(ecx + 0x1C) = eax; /* 0x1215001C: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(edx + 0x18); /* 0x1215001F: mov eax, dword ptr [edx + 0x18] */
    MEM32(ecx + 0x20) = eax; /* 0x12150022: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(esi); /* 0x12150025: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x68u; /* 0x12150027: mov dword ptr [eax + 0x14], 0x68 */
    eax = MEM32(esi); /* 0x1215002E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12150030: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150033: push 1 */
    PUSH32(esp, esi); /* 0x12150035: push esi */
    RECOMP_ICALL(eax); /* 0x12150036: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x12150038: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x1215003B: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215003F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x12150040: mov dword ptr [ebp - 0x18], eax */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x12150043: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214FF70; /* 0x12150046: jl 0x1214ff70 */
L_1215004C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215004C: mov ecx, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x1215004F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150069; /* 0x12150051: jne 0x12150069 */
L_12150053:
    eax = MEM32(ecx + 0xC); /* 0x12150053: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12150056: push esi */
    RECOMP_ICALL(eax); /* 0x12150057: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150059: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1215005B: je 0x1214feb2 */
L_12150061:
    ecx = MEM32(ebp + (-0x4)); /* 0x12150061: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(ecx); /* 0x12150064: mov ebx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x12150066: mov edi, dword ptr [ecx + 4] */
L_12150069:
    eax = (uint32_t)MEM8(ebx); /* 0x12150069: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215006C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1215006D: dec edi */
    _flag_k = FK_DEC;
    MEM32(esi + 0x194) = eax; /* 0x1215006E: mov dword ptr [esi + 0x194], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215008C; /* 0x12150074: jne 0x1215008c */
L_12150076:
    eax = MEM32(ecx + 0xC); /* 0x12150076: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12150079: push esi */
    RECOMP_ICALL(eax); /* 0x1215007A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215007C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x1215007E: je 0x1214feb2 */
L_12150084:
    ecx = MEM32(ebp + (-0x4)); /* 0x12150084: mov ecx, dword ptr [ebp - 4] */
    ebx = MEM32(ecx); /* 0x12150087: mov ebx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x12150089: mov edi, dword ptr [ecx + 4] */
L_1215008C:
    eax = (uint32_t)MEM8(ebx); /* 0x1215008C: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215008F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12150090: dec edi */
    _flag_k = FK_DEC;
    MEM32(esi + 0x198) = eax; /* 0x12150091: mov dword ptr [esi + 0x198], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121500AF; /* 0x12150097: jne 0x121500af */
L_12150099:
    eax = MEM32(ecx + 0xC); /* 0x12150099: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215009C: push esi */
    RECOMP_ICALL(eax); /* 0x1215009D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215009F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214FEB2; /* 0x121500A1: je 0x1214feb2 */
L_121500A7:
    eax = MEM32(ebp + (-0x4)); /* 0x121500A7: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(eax); /* 0x121500AA: mov ebx, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x121500AC: mov edi, dword ptr [eax + 4] */
L_121500AF:
    ecx = (uint32_t)MEM8(ebx); /* 0x121500AF: movzx ecx, byte ptr [ebx] */
    eax = ecx; /* 0x121500B2: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x121500B4: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x121500B7: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x19C) = eax; /* 0x121500BA: mov dword ptr [esi + 0x19c], eax */
    eax = MEM32(esi + 0x194); /* 0x121500C0: mov eax, dword ptr [esi + 0x194] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x121500C6: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1A0) = ecx; /* 0x121500C9: mov dword ptr [esi + 0x1a0], ecx */
    ecx = MEM32(esi); /* 0x121500CF: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121500D1: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi + 0x198); /* 0x121500D4: mov eax, dword ptr [esi + 0x198] */
    MEM32(ecx + 0x1C) = eax; /* 0x121500DA: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(esi + 0x19C); /* 0x121500DD: mov eax, dword ptr [esi + 0x19c] */
    MEM32(ecx + 0x20) = eax; /* 0x121500E3: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(esi + 0x1A0); /* 0x121500E6: mov eax, dword ptr [esi + 0x1a0] */
    MEM32(ecx + 0x24) = eax; /* 0x121500EC: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(esi); /* 0x121500EF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x69u; /* 0x121500F1: mov dword ptr [eax + 0x14], 0x69 */
    eax = MEM32(esi); /* 0x121500F8: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x121500FA: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x121500FD: push 1 */
    PUSH32(esp, esi); /* 0x121500FF: push esi */
    RECOMP_ICALL(eax); /* 0x12150100: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x12150102: mov eax, dword ptr [esi + 0x1bc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150108: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0; /* 0x1215010B: mov dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x94)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x94) = MEM32(esi + 0x94) + 1; /* 0x12150112: inc dword ptr [esi + 0x94] */
    _flag_k = FK_INC;
    eax = ebx + 0x1; /* 0x12150118: lea eax, [ebx + 1] */
    MEM32(ecx) = eax; /* 0x1215011B: mov dword ptr [ecx], eax */
    eax = edi + (-0x1); /* 0x1215011D: lea eax, [edi - 1] */
    edi = POP32_VAL(esp); /* 0x12150120: pop edi */
    MEM32(ecx + 0x4) = eax; /* 0x12150121: mov dword ptr [ecx + 4], eax */
    eax = 1; /* 0x12150124: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x12150129: pop ebx */
    esp = ebp; /* 0x1215012A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215012C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1215012D: ret  */
    RECOMP_REGS_OUT();
}

void sub_12150140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150140u);

L_12150140:
    edi = edi; /* 0x12150140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150142: push ebp */
    ebp = esp; /* 0x12150143: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x12150145: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215014B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12150150: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12150152: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12150155: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12150158: push ebx */
    PUSH32(esp, esi); /* 0x12150159: push esi */
    PUSH32(esp, edi); /* 0x1215015A: push edi */
    edi = MEM32(eax + 0x18); /* 0x1215015B: mov edi, dword ptr [eax + 0x18] */
    ebx = MEM32(edi + 0x4); /* 0x1215015E: mov ebx, dword ptr [edi + 4] */
    esi = MEM32(edi); /* 0x12150161: mov esi, dword ptr [edi] */
    MEM32(ebp + (-0x11C)) = eax; /* 0x12150163: mov dword ptr [ebp - 0x11c], eax */
    MEM32(ebp + (-0x130)) = edi; /* 0x12150169: mov dword ptr [ebp - 0x130], edi */
    /* test ebx, ebx */ /* 0x1215016F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215019D; /* 0x12150171: jne 0x1215019d */
L_12150173:
    PUSH32(esp, eax); /* 0x12150173: push eax */
    eax = MEM32(edi + 0xC); /* 0x12150174: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150177: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150179: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150192; /* 0x1215017B: jne 0x12150192 */
L_1215017D:
    edi = POP32_VAL(esp); /* 0x1215017D: pop edi */
    esi = POP32_VAL(esp); /* 0x1215017E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215017F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150181: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150182: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12150185: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12150187: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1215018C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215018E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215018F: ret 4 */
L_12150192:
    esi = MEM32(edi); /* 0x12150192: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x12150194: mov ebx, dword ptr [edi + 4] */
    eax = MEM32(ebp + (-0x11C)); /* 0x12150197: mov eax, dword ptr [ebp - 0x11c] */
L_1215019D:
    ecx = (uint32_t)MEM8(esi); /* 0x1215019D: movzx ecx, byte ptr [esi] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x121501A0: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x121501A0: shl ecx, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121501A3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121501A4: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x120)) = ecx; /* 0x121501A5: mov dword ptr [ebp - 0x120], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121501C2; /* 0x121501AB: jne 0x121501c2 */
L_121501AD:
    PUSH32(esp, eax); /* 0x121501AD: push eax */
    eax = MEM32(edi + 0xC); /* 0x121501AE: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x121501B1: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121501B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215017D; /* 0x121501B5: je 0x1215017d */
L_121501B7:
    esi = MEM32(edi); /* 0x121501B7: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x121501B9: mov ebx, dword ptr [edi + 4] */
    ecx = MEM32(ebp + (-0x120)); /* 0x121501BC: mov ecx, dword ptr [ebp - 0x120] */
L_121501C2:
    eax = (uint32_t)MEM8(esi); /* 0x121501C2: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121501C5: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121501C7: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121501C8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x121501C9: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x120)) = ecx; /* 0x121501CC: mov dword ptr [ebp - 0x120], ecx */
L_121501D2:
    /* cmp ecx, 0x10u */ /* 0x121501D2: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12150451; /* 0x121501D5: jle 0x12150451 */
L_121501DB:
    /* test ebx, ebx */ /* 0x121501DB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121501F3; /* 0x121501DD: jne 0x121501f3 */
L_121501DF:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x121501DF: push dword ptr [ebp - 0x11c] */
    eax = MEM32(edi + 0xC); /* 0x121501E5: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x121501E8: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121501EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215017D; /* 0x121501EC: je 0x1215017d */
L_121501EE:
    esi = MEM32(edi); /* 0x121501EE: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x121501F0: mov ebx, dword ptr [edi + 4] */
L_121501F3:
    ecx = MEM32(ebp + (-0x11C)); /* 0x121501F3: mov ecx, dword ptr [ebp - 0x11c] */
    edx = (uint32_t)MEM8(esi); /* 0x121501F9: movzx edx, byte ptr [esi] */
    eax = MEM32(ecx); /* 0x121501FC: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x50u; /* 0x121501FE: mov dword ptr [eax + 0x14], 0x50 */
    eax = MEM32(ecx); /* 0x12150205: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edx; /* 0x12150207: mov dword ptr [eax + 0x18], edx */
    eax = MEM32(ecx); /* 0x1215020A: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1215020C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1215020F: push 1 */
    PUSH32(esp, ecx); /* 0x12150211: push ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12150212: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x134)) = edx; /* 0x12150213: mov dword ptr [ebp - 0x134], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12150219: inc esi */
    _flag_k = FK_INC;
    RECOMP_ICALL(eax); /* 0x1215021A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215021C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 1; /* 0x1215021E: mov ecx, 1 */
    MEM8(ebp + (-0x18)) = (uint8_t)(0); /* 0x12150223: mov byte ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x128)) = edx; /* 0x12150227: mov dword ptr [ebp - 0x128], edx */
    MEM32(ebp + (-0x124)) = ecx; /* 0x1215022D: mov dword ptr [ebp - 0x124], ecx */
L_12150233:
    /* test ebx, ebx */ /* 0x12150233: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215025B; /* 0x12150235: jne 0x1215025b */
L_12150237:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x12150237: push dword ptr [ebp - 0x11c] */
    eax = MEM32(edi + 0xC); /* 0x1215023D: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150240: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150242: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215017D; /* 0x12150244: je 0x1215017d */
L_1215024A:
    esi = MEM32(edi); /* 0x1215024A: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x1215024C: mov ebx, dword ptr [edi + 4] */
    ecx = MEM32(ebp + (-0x124)); /* 0x1215024F: mov ecx, dword ptr [ebp - 0x124] */
    edx = MEM32(ebp + (-0x128)); /* 0x12150255: mov edx, dword ptr [ebp - 0x128] */
L_1215025B:
    SET_LO8(eax, MEM8(esi)); /* 0x1215025B: mov al, byte ptr [esi] */
    MEM8(ebp + ecx + (-0x18)) = (uint8_t)(LO8(eax)); /* 0x1215025D: mov byte ptr [ebp + ecx - 0x18], al */
    eax = (uint32_t)LO8(eax); /* 0x12150261: movzx eax, al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12150264: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12150265: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12150266: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12150268: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x12C)) = esi; /* 0x12150269: mov dword ptr [ebp - 0x12c], esi */
    MEM32(ebp + (-0x128)) = edx; /* 0x1215026F: mov dword ptr [ebp - 0x128], edx */
    MEM32(ebp + (-0x124)) = ecx; /* 0x12150275: mov dword ptr [ebp - 0x124], ecx */
    /* cmp ecx, 0x10u */ /* 0x1215027B: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12150233; /* 0x1215027E: jle 0x12150233 */
L_12150280:
    edx = MEM32(ebp + (-0x11C)); /* 0x12150280: mov edx, dword ptr [ebp - 0x11c] */
    ecx = MEM32(edx); /* 0x12150286: mov ecx, dword ptr [edx] */
    eax = (uint32_t)MEM8(ebp + (-0x17)); /* 0x12150288: movzx eax, byte ptr [ebp - 0x17] */
    MEM32(ecx + 0x18) = eax; /* 0x1215028C: mov dword ptr [ecx + 0x18], eax */
    eax = (uint32_t)MEM8(ebp + (-0x16)); /* 0x1215028F: movzx eax, byte ptr [ebp - 0x16] */
    MEM32(ecx + 0x1C) = eax; /* 0x12150293: mov dword ptr [ecx + 0x1c], eax */
    eax = (uint32_t)MEM8(ebp + (-0x15)); /* 0x12150296: movzx eax, byte ptr [ebp - 0x15] */
    MEM32(ecx + 0x20) = eax; /* 0x1215029A: mov dword ptr [ecx + 0x20], eax */
    eax = (uint32_t)MEM8(ebp + (-0x14)); /* 0x1215029D: movzx eax, byte ptr [ebp - 0x14] */
    MEM32(ecx + 0x24) = eax; /* 0x121502A1: mov dword ptr [ecx + 0x24], eax */
    eax = (uint32_t)MEM8(ebp + (-0x13)); /* 0x121502A4: movzx eax, byte ptr [ebp - 0x13] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x120)) = MEM32(ebp + (-0x120)) - 0x11u; /* 0x121502A8: sub dword ptr [ebp - 0x120], 0x11 */
    _flag_k = FK_CMP;
    MEM32(ecx + 0x28) = eax; /* 0x121502AF: mov dword ptr [ecx + 0x28], eax */
    eax = (uint32_t)MEM8(ebp + (-0x12)); /* 0x121502B2: movzx eax, byte ptr [ebp - 0x12] */
    MEM32(ecx + 0x2C) = eax; /* 0x121502B6: mov dword ptr [ecx + 0x2c], eax */
    eax = (uint32_t)MEM8(ebp + (-0x11)); /* 0x121502B9: movzx eax, byte ptr [ebp - 0x11] */
    MEM32(ecx + 0x30) = eax; /* 0x121502BD: mov dword ptr [ecx + 0x30], eax */
    eax = (uint32_t)MEM8(ebp + (-0x10)); /* 0x121502C0: movzx eax, byte ptr [ebp - 0x10] */
    MEM32(ecx + 0x34) = eax; /* 0x121502C4: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(edx); /* 0x121502C7: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x56u; /* 0x121502C9: mov dword ptr [eax + 0x14], 0x56 */
    eax = MEM32(edx); /* 0x121502D0: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x121502D2: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 2); /* 0x121502D5: push 2 */
    PUSH32(esp, edx); /* 0x121502D7: push edx */
    RECOMP_ICALL(eax); /* 0x121502D8: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x11C)); /* 0x121502DA: mov edx, dword ptr [ebp - 0x11c] */
    ecx = MEM32(edx); /* 0x121502E0: mov ecx, dword ptr [edx] */
    eax = (uint32_t)MEM8(ebp + (-0xF)); /* 0x121502E2: movzx eax, byte ptr [ebp - 0xf] */
    MEM32(ecx + 0x18) = eax; /* 0x121502E6: mov dword ptr [ecx + 0x18], eax */
    eax = (uint32_t)MEM8(ebp + (-0xE)); /* 0x121502E9: movzx eax, byte ptr [ebp - 0xe] */
    MEM32(ecx + 0x1C) = eax; /* 0x121502ED: mov dword ptr [ecx + 0x1c], eax */
    eax = (uint32_t)MEM8(ebp + (-0xD)); /* 0x121502F0: movzx eax, byte ptr [ebp - 0xd] */
    MEM32(ecx + 0x20) = eax; /* 0x121502F4: mov dword ptr [ecx + 0x20], eax */
    eax = (uint32_t)MEM8(ebp + (-0xC)); /* 0x121502F7: movzx eax, byte ptr [ebp - 0xc] */
    MEM32(ecx + 0x24) = eax; /* 0x121502FB: mov dword ptr [ecx + 0x24], eax */
    eax = (uint32_t)MEM8(ebp + (-0xB)); /* 0x121502FE: movzx eax, byte ptr [ebp - 0xb] */
    MEM32(ecx + 0x28) = eax; /* 0x12150302: mov dword ptr [ecx + 0x28], eax */
    eax = (uint32_t)MEM8(ebp + (-0xA)); /* 0x12150305: movzx eax, byte ptr [ebp - 0xa] */
    MEM32(ecx + 0x2C) = eax; /* 0x12150309: mov dword ptr [ecx + 0x2c], eax */
    eax = (uint32_t)MEM8(ebp + (-0x9)); /* 0x1215030C: movzx eax, byte ptr [ebp - 9] */
    MEM32(ecx + 0x30) = eax; /* 0x12150310: mov dword ptr [ecx + 0x30], eax */
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x12150313: movzx eax, byte ptr [ebp - 8] */
    MEM32(ecx + 0x34) = eax; /* 0x12150317: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(edx); /* 0x1215031A: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x56u; /* 0x1215031C: mov dword ptr [eax + 0x14], 0x56 */
    eax = MEM32(edx); /* 0x12150323: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x12150325: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 2); /* 0x12150328: push 2 */
    PUSH32(esp, edx); /* 0x1215032A: push edx */
    RECOMP_ICALL(eax); /* 0x1215032B: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x128)); /* 0x1215032D: mov eax, dword ptr [ebp - 0x128] */
    /* cmp eax, 0x100u */ /* 0x12150333: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12150342; /* 0x12150338: jg 0x12150342 */
L_1215033A:
    /* cmp eax, MEM32(ebp + (-0x120)) */ /* 0x1215033A: cmp eax, dword ptr [ebp - 0x120] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x120)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215035E; /* 0x12150340: jle 0x1215035e */
L_12150342:
    ecx = MEM32(ebp + (-0x11C)); /* 0x12150342: mov ecx, dword ptr [ebp - 0x11c] */
    eax = MEM32(ecx); /* 0x12150348: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 8; /* 0x1215034A: mov dword ptr [eax + 0x14], 8 */
    eax = MEM32(ecx); /* 0x12150351: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12150353: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12150355: push ecx */
    RECOMP_ICALL(eax); /* 0x12150356: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x128)); /* 0x12150358: mov eax, dword ptr [ebp - 0x128] */
L_1215035E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215035E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x124)) = ecx; /* 0x12150360: mov dword ptr [ebp - 0x124], ecx */
    /* test eax, eax */ /* 0x12150366: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121503B4; /* 0x12150368: jle 0x121503b4 */
L_1215036A:
    ebx = ebx; /* 0x1215036A: lea ebx, [ebx] */
L_12150370:
    /* test ebx, ebx */ /* 0x12150370: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150392; /* 0x12150372: jne 0x12150392 */
L_12150374:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x12150374: push dword ptr [ebp - 0x11c] */
    eax = MEM32(edi + 0xC); /* 0x1215037A: mov eax, dword ptr [edi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1215037D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215037F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215017D; /* 0x12150381: je 0x1215017d */
L_12150387:
    esi = MEM32(edi); /* 0x12150387: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x12150389: mov ebx, dword ptr [edi + 4] */
    ecx = MEM32(ebp + (-0x124)); /* 0x1215038C: mov ecx, dword ptr [ebp - 0x124] */
L_12150392:
    SET_LO8(eax, MEM8(esi)); /* 0x12150392: mov al, byte ptr [esi] */
    MEM8(ebp + ecx + (-0x118)) = (uint8_t)(LO8(eax)); /* 0x12150394: mov byte ptr [ebp + ecx - 0x118], al */
    eax = MEM32(ebp + (-0x128)); /* 0x1215039B: mov eax, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121503A1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121503A2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121503A3: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x12C)) = esi; /* 0x121503A4: mov dword ptr [ebp - 0x12c], esi */
    MEM32(ebp + (-0x124)) = ecx; /* 0x121503AA: mov dword ptr [ebp - 0x124], ecx */
    /* cmp ecx, eax */ /* 0x121503B0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12150370; /* 0x121503B2: jl 0x12150370 */
L_121503B4:
    ecx = MEM32(ebp + (-0x134)); /* 0x121503B4: mov ecx, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x120)) = MEM32(ebp + (-0x120)) - eax; /* 0x121503BA: sub dword ptr [ebp - 0x120], eax */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x11C)); /* 0x121503C0: mov esi, dword ptr [ebp - 0x11c] */
    /* test LO8(ecx), 0x10u */ /* 0x121503C6: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121503D7; /* 0x121503C9: je 0x121503d7 */
L_121503CB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x10u; /* 0x121503CB: sub ecx, 0x10 */
    _flag_k = FK_CMP;
    edi = esi + ecx * 4 + 0xC8; /* 0x121503CE: lea edi, [esi + ecx*4 + 0xc8] */
    goto L_121503DE; /* 0x121503D5: jmp 0x121503de */
L_121503D7:
    edi = esi + ecx * 4 + 0xB8; /* 0x121503D7: lea edi, [esi + ecx*4 + 0xb8] */
L_121503DE:
    /* test ecx, ecx */ /* 0x121503DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121503E7; /* 0x121503E0: js 0x121503e7 */
L_121503E2:
    /* cmp ecx, 4 */ /* 0x121503E2: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121503FC; /* 0x121503E5: jl 0x121503fc */
L_121503E7:
    eax = MEM32(esi); /* 0x121503E7: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Eu; /* 0x121503E9: mov dword ptr [eax + 0x14], 0x1e */
    eax = MEM32(esi); /* 0x121503F0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x121503F2: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x121503F5: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121503F7: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121503F9: push esi */
    RECOMP_ICALL(eax); /* 0x121503FA: call eax */
    RECOMP_FLAGS_IN();
L_121503FC:
    /* cmp MEM32(edi), 0 */ /* 0x121503FC: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150409; /* 0x121503FF: jne 0x12150409 */
L_12150401:
    PUSH32(esp, esi); /* 0x12150401: push esi */
    RECOMP_CALL(sub_121538F0); /* 0x12150402: call 0x121538f0 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x12150407: mov dword ptr [edi], eax */
L_12150409:
    ecx = MEM32(edi); /* 0x12150409: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + (-0x18)); /* 0x1215040B: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x1215040E: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x12150410: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ecx + 0x4) = eax; /* 0x12150413: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12150416: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x12150419: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1215041C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x1215041F: mov dword ptr [ecx + 0xc], eax */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x12150422: mov al, byte ptr [ebp - 8] */
    MEM8(ecx + 0x10) = (uint8_t)(LO8(eax)); /* 0x12150425: mov byte ptr [ecx + 0x10], al */
    edi = MEM32(edi); /* 0x12150428: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x11u; /* 0x1215042A: add edi, 0x11 */
    _flag_k = FK_ADD;
    ecx = 0x40u; /* 0x1215042D: mov ecx, 0x40 */
    esi = ebp + (-0x118); /* 0x12150432: lea esi, [ebp - 0x118] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12150438: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x120)); /* 0x1215043A: mov ecx, dword ptr [ebp - 0x120] */
    esi = MEM32(ebp + (-0x12C)); /* 0x12150440: mov esi, dword ptr [ebp - 0x12c] */
    edi = MEM32(ebp + (-0x130)); /* 0x12150446: mov edi, dword ptr [ebp - 0x130] */
    RECOMP_BACKEDGE();
    goto L_121501D2; /* 0x1215044C: jmp 0x121501d2 */
L_12150451:
    /* test ecx, ecx */ /* 0x12150451: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215046B; /* 0x12150453: je 0x1215046b */
L_12150455:
    ecx = MEM32(ebp + (-0x11C)); /* 0x12150455: mov ecx, dword ptr [ebp - 0x11c] */
    eax = MEM32(ecx); /* 0x1215045B: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0xBu; /* 0x1215045D: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(ecx); /* 0x12150464: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12150466: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12150468: push ecx */
    RECOMP_ICALL(eax); /* 0x12150469: call eax */
    RECOMP_FLAGS_IN();
L_1215046B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215046B: mov ecx, dword ptr [ebp - 4] */
    MEM32(edi) = esi; /* 0x1215046E: mov dword ptr [edi], esi */
    MEM32(edi + 0x4) = ebx; /* 0x12150470: mov dword ptr [edi + 4], ebx */
    edi = POP32_VAL(esp); /* 0x12150473: pop edi */
    esi = POP32_VAL(esp); /* 0x12150474: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12150475: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x12150477: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x1215047C: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1215047D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12150482: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150484: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150485: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150490u);

L_12150490:
    edi = edi; /* 0x12150490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150492: push ebp */
    ebp = esp; /* 0x12150493: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12150495: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x12150498: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1215049B: push ebx */
    ebx = MEM32(eax + 0x18); /* 0x1215049C: mov ebx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x1215049F: push esi */
    esi = MEM32(ebx + 0x4); /* 0x121504A0: mov esi, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x121504A3: push edi */
    edi = MEM32(ebx); /* 0x121504A4: mov edi, dword ptr [ebx] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x121504A6: mov dword ptr [ebp - 0x1c], ebx */
    /* test esi, esi */ /* 0x121504A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121504CA; /* 0x121504AB: jne 0x121504ca */
L_121504AD:
    PUSH32(esp, eax); /* 0x121504AD: push eax */
    eax = MEM32(ebx + 0xC); /* 0x121504AE: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_ICALL(eax); /* 0x121504B1: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121504B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121504C2; /* 0x121504B5: jne 0x121504c2 */
L_121504B7:
    edi = POP32_VAL(esp); /* 0x121504B7: pop edi */
    esi = POP32_VAL(esp); /* 0x121504B8: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121504B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121504BB: pop ebx */
    esp = ebp; /* 0x121504BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121504BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121504BF: ret 4 */
L_121504C2:
    edi = MEM32(ebx); /* 0x121504C2: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121504C4: mov esi, dword ptr [ebx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x121504C7: mov eax, dword ptr [ebp + 8] */
L_121504CA:
    edx = (uint32_t)MEM8(edi); /* 0x121504CA: movzx edx, byte ptr [edi] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x121504CD: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x121504CD: shl edx, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121504D0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121504D1: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x121504D2: mov dword ptr [ebp - 4], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121504E9; /* 0x121504D5: jne 0x121504e9 */
L_121504D7:
    PUSH32(esp, eax); /* 0x121504D7: push eax */
    eax = MEM32(ebx + 0xC); /* 0x121504D8: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_ICALL(eax); /* 0x121504DB: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121504DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121504B7; /* 0x121504DF: je 0x121504b7 */
L_121504E1:
    edi = MEM32(ebx); /* 0x121504E1: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121504E3: mov esi, dword ptr [ebx + 4] */
    edx = MEM32(ebp + (-0x4)); /* 0x121504E6: mov edx, dword ptr [ebp - 4] */
L_121504E9:
    eax = (uint32_t)MEM8(edi); /* 0x121504E9: movzx eax, byte ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x121504EC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x121504EF: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x121504F1: sub edx, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121504F4: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121504F5: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x121504F6: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x121504F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121506CB; /* 0x121504FB: jle 0x121506cb */
L_12150501:
    /* test esi, esi */ /* 0x12150501: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150514; /* 0x12150503: jne 0x12150514 */
L_12150505:
    eax = MEM32(ebx + 0xC); /* 0x12150505: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x12150508: push ecx */
    RECOMP_ICALL(eax); /* 0x12150509: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215050B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121504B7; /* 0x1215050D: je 0x121504b7 */
L_1215050F:
    edi = MEM32(ebx); /* 0x1215050F: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12150511: mov esi, dword ptr [ebx + 4] */
L_12150514:
    edx = (uint32_t)MEM8(edi); /* 0x12150514: movzx edx, byte ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x12150517: mov ecx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1215051A: mov eax, edx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1215051C: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(ebp + (-0xC)) = eax; /* 0x1215051F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx); /* 0x12150522: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x51u; /* 0x12150524: mov dword ptr [eax + 0x14], 0x51 */
    eax = MEM32(ecx); /* 0x1215052B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x1215052D: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = edx; /* 0x12150530: mov dword ptr [eax + 0x18], edx */
    eax = MEM32(ecx); /* 0x12150533: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x8)) = edx; /* 0x12150535: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x12150538: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x1C) = edx; /* 0x1215053B: mov dword ptr [eax + 0x1c], edx */
    eax = MEM32(ecx); /* 0x1215053E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x12150540: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150543: push 1 */
    PUSH32(esp, ecx); /* 0x12150545: push ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12150546: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12150547: inc edi */
    _flag_k = FK_INC;
    RECOMP_ICALL(eax); /* 0x12150548: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1215054A: mov edx, dword ptr [ebp - 8] */
    /* cmp edx, 4 */ /* 0x1215054D: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215056D; /* 0x12150550: jl 0x1215056d */
L_12150552:
    ecx = MEM32(ebp + 0x8); /* 0x12150552: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12150555: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x1Fu; /* 0x12150557: mov dword ptr [eax + 0x14], 0x1f */
    eax = MEM32(ecx); /* 0x1215055E: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edx; /* 0x12150560: mov dword ptr [eax + 0x18], edx */
    eax = MEM32(ecx); /* 0x12150563: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12150565: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12150567: push ecx */
    RECOMP_ICALL(eax); /* 0x12150568: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1215056A: mov edx, dword ptr [ebp - 8] */
L_1215056D:
    eax = MEM32(ebp + 0x8); /* 0x1215056D: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + edx * 4 + 0xA8), 0 */ /* 0x12150570: cmp dword ptr [eax + edx*4 + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4 + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215058F; /* 0x12150578: jne 0x1215058f */
L_1215057A:
    PUSH32(esp, eax); /* 0x1215057A: push eax */
    RECOMP_CALL(sub_121538C0); /* 0x1215057B: call 0x121538c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x12150580: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x12150583: mov edx, dword ptr [ebp - 8] */
    MEM32(ecx + edx * 4 + 0xA8) = eax; /* 0x12150586: mov dword ptr [ecx + edx*4 + 0xa8], eax */
    eax = ecx; /* 0x1215058D: mov eax, ecx */
L_1215058F:
    ecx = MEM32(eax + edx * 4 + 0xA8); /* 0x1215058F: mov ecx, dword ptr [eax + edx*4 + 0xa8] */
    edx = 0x12012F60u; /* 0x12150596: mov edx, 0x12012f60 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215059B: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1215059E: mov dword ptr [ebp - 8], edx */
L_121505A1:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x121505A1: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121505EE; /* 0x121505A5: je 0x121505ee */
L_121505A7:
    /* test esi, esi */ /* 0x121505A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121505C1; /* 0x121505A9: jne 0x121505c1 */
L_121505AB:
    PUSH32(esp, eax); /* 0x121505AB: push eax */
    eax = MEM32(ebx + 0xC); /* 0x121505AC: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_ICALL(eax); /* 0x121505AF: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121505B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121504B7; /* 0x121505B3: je 0x121504b7 */
L_121505B9:
    edi = MEM32(ebx); /* 0x121505B9: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121505BB: mov esi, dword ptr [ebx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x121505BE: mov eax, dword ptr [ebp + 8] */
L_121505C1:
    ecx = (uint32_t)MEM8(edi); /* 0x121505C1: movzx ecx, byte ptr [edi] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x121505C4: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x121505C4: shl ecx, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121505C7: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121505C8: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x121505C9: mov dword ptr [ebp - 0x18], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121505E4; /* 0x121505CC: jne 0x121505e4 */
L_121505CE:
    PUSH32(esp, eax); /* 0x121505CE: push eax */
    eax = MEM32(ebx + 0xC); /* 0x121505CF: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_ICALL(eax); /* 0x121505D2: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121505D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121504B7; /* 0x121505D6: je 0x121504b7 */
L_121505DC:
    edi = MEM32(ebx); /* 0x121505DC: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121505DE: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x121505E1: mov ecx, dword ptr [ebp - 0x18] */
L_121505E4:
    eax = (uint32_t)MEM8(edi); /* 0x121505E4: movzx eax, byte ptr [edi] */
    edx = MEM32(ebp + (-0x8)); /* 0x121505E7: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121505EA: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_1215060B; /* 0x121505EC: jmp 0x1215060b */
L_121505EE:
    /* test esi, esi */ /* 0x121505EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150608; /* 0x121505F0: jne 0x12150608 */
L_121505F2:
    PUSH32(esp, eax); /* 0x121505F2: push eax */
    eax = MEM32(ebx + 0xC); /* 0x121505F3: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_ICALL(eax); /* 0x121505F6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121505F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121504B7; /* 0x121505FA: je 0x121504b7 */
L_12150600:
    edi = MEM32(ebx); /* 0x12150600: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12150602: mov esi, dword ptr [ebx + 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x12150605: mov edx, dword ptr [ebp - 8] */
L_12150608:
    ecx = (uint32_t)MEM8(edi); /* 0x12150608: movzx ecx, byte ptr [edi] */
L_1215060B:
    eax = MEM32(edx); /* 0x1215060B: mov eax, dword ptr [edx] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1215060D: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12150610: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12150613: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12150614: inc edi */
    _flag_k = FK_INC;
    MEM16(ebx + eax * 2) = (uint16_t)(LO16(ecx)); /* 0x12150615: mov word ptr [ebx + eax*2], cx */
    ebx = MEM32(ebp + (-0x1C)); /* 0x12150619: mov ebx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x1215061C: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = edi; /* 0x1215061F: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x14)) = esi; /* 0x12150622: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x8)) = edx; /* 0x12150625: mov dword ptr [ebp - 8], edx */
    /* cmp edx, 0x12013060u */ /* 0x12150628: cmp edx, 0x12013060 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x12013060u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121505A1; /* 0x1215062E: jl 0x121505a1 */
L_12150634:
    ecx = eax; /* 0x12150634: mov ecx, eax */
    eax = MEM32(ecx); /* 0x12150636: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x68), 2 */ /* 0x12150638: cmp dword ptr [eax + 0x68], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121506AE; /* 0x1215063C: jl 0x121506ae */
L_1215063E:
    edi = MEM32(ebp + (-0x10)); /* 0x1215063E: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12150641: add edi, 4 */
    _flag_k = FK_ADD;
    esi = 8; /* 0x12150644: mov esi, 8 */
    ebx = ecx; /* 0x12150649: mov ebx, ecx */
    goto L_12150650; /* 0x1215064B: jmp 0x12150650 */
L_12150650:
    eax = (uint32_t)MEM16(edi + (-0x4)); /* 0x12150650: movzx eax, word ptr [edi - 4] */
    ecx = MEM32(ebx); /* 0x12150654: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x18) = eax; /* 0x12150656: mov dword ptr [ecx + 0x18], eax */
    eax = (uint32_t)MEM16(edi + (-0x2)); /* 0x12150659: movzx eax, word ptr [edi - 2] */
    MEM32(ecx + 0x1C) = eax; /* 0x1215065D: mov dword ptr [ecx + 0x1c], eax */
    eax = (uint32_t)MEM16(edi); /* 0x12150660: movzx eax, word ptr [edi] */
    MEM32(ecx + 0x20) = eax; /* 0x12150663: mov dword ptr [ecx + 0x20], eax */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x12150666: movzx eax, word ptr [edi + 2] */
    MEM32(ecx + 0x24) = eax; /* 0x1215066A: mov dword ptr [ecx + 0x24], eax */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x1215066D: movzx eax, word ptr [edi + 4] */
    MEM32(ecx + 0x28) = eax; /* 0x12150671: mov dword ptr [ecx + 0x28], eax */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x12150674: movzx eax, word ptr [edi + 6] */
    MEM32(ecx + 0x2C) = eax; /* 0x12150678: mov dword ptr [ecx + 0x2c], eax */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x1215067B: movzx eax, word ptr [edi + 8] */
    MEM32(ecx + 0x30) = eax; /* 0x1215067F: mov dword ptr [ecx + 0x30], eax */
    eax = (uint32_t)MEM16(edi + 0xA); /* 0x12150682: movzx eax, word ptr [edi + 0xa] */
    MEM32(ecx + 0x34) = eax; /* 0x12150686: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(ebx); /* 0x12150689: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x5Du; /* 0x1215068B: mov dword ptr [eax + 0x14], 0x5d */
    eax = MEM32(ebx); /* 0x12150692: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x4); /* 0x12150694: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 2); /* 0x12150697: push 2 */
    PUSH32(esp, ebx); /* 0x12150699: push ebx */
    RECOMP_ICALL(eax); /* 0x1215069A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1215069C: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1215069F: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12150650; /* 0x121506A0: jne 0x12150650 */
L_121506A2:
    esi = MEM32(ebp + (-0x14)); /* 0x121506A2: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x18)); /* 0x121506A5: mov edi, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x121506A8: mov ebx, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x121506AB: mov ecx, dword ptr [ebp + 8] */
L_121506AE:
    edx = MEM32(ebp + (-0x4)); /* 0x121506AE: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x41u; /* 0x121506B1: sub edx, 0x41 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x121506B4: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x121506B8: mov dword ptr [ebp - 4], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121506C3; /* 0x121506BB: je 0x121506c3 */
L_121506BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x40u; /* 0x121506BD: sub edx, 0x40 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x121506C0: mov dword ptr [ebp - 4], edx */
L_121506C3:
    /* test edx, edx */ /* 0x121506C3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12150501; /* 0x121506C5: jg 0x12150501 */
L_121506CB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121506DD; /* 0x121506CB: je 0x121506dd */
L_121506CD:
    eax = MEM32(ecx); /* 0x121506CD: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0xBu; /* 0x121506CF: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(ecx); /* 0x121506D6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x121506D8: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x121506DA: push ecx */
    RECOMP_ICALL(eax); /* 0x121506DB: call eax */
    RECOMP_FLAGS_IN();
L_121506DD:
    MEM32(ebx) = edi; /* 0x121506DD: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x121506DF: pop edi */
    MEM32(ebx + 0x4) = esi; /* 0x121506E0: mov dword ptr [ebx + 4], esi */
    esi = POP32_VAL(esp); /* 0x121506E3: pop esi */
    eax = 1; /* 0x121506E4: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x121506E9: pop ebx */
    esp = ebp; /* 0x121506EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121506EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121506ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150700u);

L_12150700:
    edi = edi; /* 0x12150700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150702: push ebp */
    ebp = esp; /* 0x12150703: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12150705: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12150706: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12150709: push ebx */
    PUSH32(esp, esi); /* 0x1215070A: push esi */
    esi = MEM32(eax + 0x18); /* 0x1215070B: mov esi, dword ptr [eax + 0x18] */
    ebx = MEM32(esi); /* 0x1215070E: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12150710: push edi */
    edi = MEM32(esi + 0x4); /* 0x12150711: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x12150714: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150735; /* 0x12150716: jne 0x12150735 */
L_12150718:
    PUSH32(esp, eax); /* 0x12150718: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150719: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1215071C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215071E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215072D; /* 0x12150720: jne 0x1215072d */
L_12150722:
    edi = POP32_VAL(esp); /* 0x12150722: pop edi */
    esi = POP32_VAL(esp); /* 0x12150723: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150724: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150726: pop ebx */
    esp = ebp; /* 0x12150727: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150729: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215072A: ret 4 */
L_1215072D:
    ebx = MEM32(esi); /* 0x1215072D: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x1215072F: mov edi, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x12150732: mov eax, dword ptr [ebp + 8] */
L_12150735:
    ecx = (uint32_t)MEM8(ebx); /* 0x12150735: movzx ecx, byte ptr [ebx] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x12150738: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x12150738: shl ecx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215073B: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1215073C: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1215073D: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12150754; /* 0x12150740: jne 0x12150754 */
L_12150742:
    PUSH32(esp, eax); /* 0x12150742: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150743: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150746: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150748: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150722; /* 0x1215074A: je 0x12150722 */
L_1215074C:
    ebx = MEM32(esi); /* 0x1215074C: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x1215074E: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150751: mov ecx, dword ptr [ebp - 4] */
L_12150754:
    eax = (uint32_t)MEM8(ebx); /* 0x12150754: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12150757: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12150759: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215075A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ecx, 4 */ /* 0x1215075B: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150773; /* 0x1215075E: je 0x12150773 */
L_12150760:
    ecx = MEM32(ebp + 0x8); /* 0x12150760: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12150763: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0xBu; /* 0x12150765: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(ecx); /* 0x1215076C: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x1215076E: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12150770: push ecx */
    RECOMP_ICALL(eax); /* 0x12150771: call eax */
    RECOMP_FLAGS_IN();
L_12150773:
    /* test edi, edi */ /* 0x12150773: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150788; /* 0x12150775: jne 0x12150788 */
L_12150777:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12150777: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xC); /* 0x1215077A: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1215077D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215077F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150722; /* 0x12150781: je 0x12150722 */
L_12150783:
    ebx = MEM32(esi); /* 0x12150783: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x12150785: mov edi, dword ptr [esi + 4] */
L_12150788:
    edx = (uint32_t)MEM8(ebx); /* 0x12150788: movzx edx, byte ptr [ebx] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1215078B: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1215078B: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215078E: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1215078F: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x12150790: mov dword ptr [ebp - 4], edx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121507A9; /* 0x12150793: jne 0x121507a9 */
L_12150795:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12150795: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xC); /* 0x12150798: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x1215079B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215079D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150722; /* 0x1215079F: je 0x12150722 */
L_121507A1:
    ebx = MEM32(esi); /* 0x121507A1: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x121507A3: mov edi, dword ptr [esi + 4] */
    edx = MEM32(ebp + (-0x4)); /* 0x121507A6: mov edx, dword ptr [ebp - 4] */
L_121507A9:
    eax = (uint32_t)MEM8(ebx); /* 0x121507A9: movzx eax, byte ptr [ebx] */
    ecx = MEM32(ebp + 0x8); /* 0x121507AC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x121507AF: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x121507B1: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x52u; /* 0x121507B3: mov dword ptr [eax + 0x14], 0x52 */
    eax = MEM32(ecx); /* 0x121507BA: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edx; /* 0x121507BC: mov dword ptr [eax + 0x18], edx */
    eax = MEM32(ecx); /* 0x121507BF: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x121507C1: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x121507C4: push 1 */
    PUSH32(esp, ecx); /* 0x121507C6: push ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x121507C7: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(eax); /* 0x121507CA: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121507CC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x121507CF: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x118) = ecx; /* 0x121507D2: mov dword ptr [eax + 0x118], ecx */
    eax = ebx + 0x1; /* 0x121507D8: lea eax, [ebx + 1] */
    MEM32(esi) = eax; /* 0x121507DB: mov dword ptr [esi], eax */
    eax = edi + (-0x1); /* 0x121507DD: lea eax, [edi - 1] */
    edi = POP32_VAL(esp); /* 0x121507E0: pop edi */
    MEM32(esi + 0x4) = eax; /* 0x121507E1: mov dword ptr [esi + 4], eax */
    esi = POP32_VAL(esp); /* 0x121507E4: pop esi */
    eax = 1; /* 0x121507E5: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x121507EA: pop ebx */
    esp = ebp; /* 0x121507EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121507ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121507EE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150800u);

L_12150800:
    edi = edi; /* 0x12150800: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12150802: push ebx */
    ebx = ecx + eax; /* 0x12150803: lea ebx, [ecx + eax] */
    /* cmp ecx, 0xEu */ /* 0x12150806: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12150978; /* 0x12150809: jb 0x12150978 */
L_1215080F:
    /* cmp MEM8(edi), 0x4Au */ /* 0x1215080F: cmp byte ptr [edi], 0x4a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x4Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150978; /* 0x12150812: jne 0x12150978 */
L_12150818:
    /* cmp MEM8(edi + 0x1), 0x46u */ /* 0x12150818: cmp byte ptr [edi + 1], 0x46 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x46u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150978; /* 0x1215081C: jne 0x12150978 */
L_12150822:
    /* cmp MEM8(edi + 0x2), 0x49u */ /* 0x12150822: cmp byte ptr [edi + 2], 0x49 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150978; /* 0x12150826: jne 0x12150978 */
L_1215082C:
    /* cmp MEM8(edi + 0x3), 0x46u */ /* 0x1215082C: cmp byte ptr [edi + 3], 0x46 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0x46u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150978; /* 0x12150830: jne 0x12150978 */
L_12150836:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x12150836: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150978; /* 0x1215083A: jne 0x12150978 */
L_12150840:
    MEM32(esi + 0x11C) = 1; /* 0x12150840: mov dword ptr [esi + 0x11c], 1 */
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x1215084A: movzx eax, byte ptr [edi + 5] */
    MEM8(esi + 0x120) = (uint8_t)(LO8(eax)); /* 0x1215084E: mov byte ptr [esi + 0x120], al */
    eax = (uint32_t)MEM8(edi + 0x6); /* 0x12150854: movzx eax, byte ptr [edi + 6] */
    MEM8(esi + 0x121) = (uint8_t)(LO8(eax)); /* 0x12150858: mov byte ptr [esi + 0x121], al */
    eax = (uint32_t)MEM8(edi + 0x7); /* 0x1215085E: movzx eax, byte ptr [edi + 7] */
    MEM8(esi + 0x122) = (uint8_t)(LO8(eax)); /* 0x12150862: mov byte ptr [esi + 0x122], al */
    ecx = (uint32_t)MEM8(edi + 0x8); /* 0x12150868: movzx ecx, byte ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi + 0x9); /* 0x1215086C: movzx eax, byte ptr [edi + 9] */
    edx = 0x100u; /* 0x12150870: mov edx, 0x100 */
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx))); /* 0x12150875: imul cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x12150879: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(esi + 0x124) = (uint16_t)(LO16(ecx)); /* 0x1215087C: mov word ptr [esi + 0x124], cx */
    ecx = (uint32_t)MEM8(edi + 0xA); /* 0x12150883: movzx ecx, byte ptr [edi + 0xa] */
    eax = (uint32_t)MEM8(edi + 0xB); /* 0x12150887: movzx eax, byte ptr [edi + 0xb] */
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx))); /* 0x1215088B: imul cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x1215088F: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    /* cmp MEM8(esi + 0x120), 1 */ /* 0x12150892: cmp byte ptr [esi + 0x120], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x120)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM16(esi + 0x126) = (uint16_t)(LO16(ecx)); /* 0x12150899: mov word ptr [esi + 0x126], cx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121508CD; /* 0x121508A0: je 0x121508cd */
L_121508A2:
    eax = MEM32(esi); /* 0x121508A2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x77u; /* 0x121508A4: mov dword ptr [eax + 0x14], 0x77 */
    ecx = (uint32_t)MEM8(esi + 0x120); /* 0x121508AB: movzx ecx, byte ptr [esi + 0x120] */
    eax = MEM32(esi); /* 0x121508B2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x121508B4: mov dword ptr [eax + 0x18], ecx */
    ecx = (uint32_t)MEM8(esi + 0x121); /* 0x121508B7: movzx ecx, byte ptr [esi + 0x121] */
    eax = MEM32(esi); /* 0x121508BE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = ecx; /* 0x121508C0: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(esi); /* 0x121508C3: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x121508C5: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121508C8: push -1 */
    PUSH32(esp, esi); /* 0x121508CA: push esi */
    RECOMP_ICALL(eax); /* 0x121508CB: call eax */
    RECOMP_FLAGS_IN();
L_121508CD:
    eax = (uint32_t)MEM8(esi + 0x120); /* 0x121508CD: movzx eax, byte ptr [esi + 0x120] */
    ecx = MEM32(esi); /* 0x121508D4: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121508D6: mov dword ptr [ecx + 0x18], eax */
    eax = (uint32_t)MEM8(esi + 0x121); /* 0x121508D9: movzx eax, byte ptr [esi + 0x121] */
    MEM32(ecx + 0x1C) = eax; /* 0x121508E0: mov dword ptr [ecx + 0x1c], eax */
    eax = (uint32_t)MEM16(esi + 0x124); /* 0x121508E3: movzx eax, word ptr [esi + 0x124] */
    MEM32(ecx + 0x20) = eax; /* 0x121508EA: mov dword ptr [ecx + 0x20], eax */
    eax = (uint32_t)MEM16(esi + 0x126); /* 0x121508ED: movzx eax, word ptr [esi + 0x126] */
    MEM32(ecx + 0x24) = eax; /* 0x121508F4: mov dword ptr [ecx + 0x24], eax */
    eax = (uint32_t)MEM8(esi + 0x122); /* 0x121508F7: movzx eax, byte ptr [esi + 0x122] */
    MEM32(ecx + 0x28) = eax; /* 0x121508FE: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(esi); /* 0x12150901: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x57u; /* 0x12150903: mov dword ptr [eax + 0x14], 0x57 */
    eax = MEM32(esi); /* 0x1215090A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215090C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1215090F: push 1 */
    PUSH32(esp, esi); /* 0x12150911: push esi */
    RECOMP_ICALL(eax); /* 0x12150912: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi + 0xC)); /* 0x12150914: mov al, byte ptr [edi + 0xc] */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(edi + 0xD))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(edi + 0xD))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(edi + 0xD)); /* 0x12150917: or al, byte ptr [edi + 0xd] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = edi + 0xD; /* 0x1215091A: lea edx, [edi + 0xd] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150946; /* 0x1215091D: je 0x12150946 */
L_1215091F:
    eax = MEM32(esi); /* 0x1215091F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x5Au; /* 0x12150921: mov dword ptr [eax + 0x14], 0x5a */
    ecx = (uint32_t)MEM8(edi + 0xC); /* 0x12150928: movzx ecx, byte ptr [edi + 0xc] */
    eax = MEM32(esi); /* 0x1215092C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x1215092E: mov dword ptr [eax + 0x18], ecx */
    ecx = (uint32_t)MEM8(edx); /* 0x12150931: movzx ecx, byte ptr [edx] */
    eax = MEM32(esi); /* 0x12150934: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = ecx; /* 0x12150936: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(esi); /* 0x12150939: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215093B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1215093E: push 1 */
    PUSH32(esp, esi); /* 0x12150940: push esi */
    RECOMP_ICALL(eax); /* 0x12150941: call eax */
    RECOMP_FLAGS_IN();
    edx = edi + 0xD; /* 0x12150943: lea edx, [edi + 0xd] */
L_12150946:
    eax = (uint32_t)MEM8(edx); /* 0x12150946: movzx eax, byte ptr [edx] */
    ecx = (uint32_t)MEM8(edi + 0xC); /* 0x12150949: movzx ecx, byte ptr [edi + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1215094D: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0xEu; /* 0x12150950: sub ebx, 0xe */
    _flag_k = FK_CMP;
    eax = ecx + ecx * 2; /* 0x12150953: lea eax, [ecx + ecx*2] */
    /* cmp ebx, eax */ /* 0x12150956: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150A39; /* 0x12150958: je 0x12150a39 */
L_1215095E:
    eax = MEM32(esi); /* 0x1215095E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x58u; /* 0x12150960: mov dword ptr [eax + 0x14], 0x58 */
    eax = MEM32(esi); /* 0x12150967: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12150969: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x1215096C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215096E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150971: push 1 */
    PUSH32(esp, esi); /* 0x12150973: push esi */
    RECOMP_ICALL(eax); /* 0x12150974: call eax */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12150976: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12150977: ret  */
L_12150978:
    /* cmp ecx, 6 */ /* 0x12150978: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12150A21; /* 0x1215097B: jb 0x12150a21 */
L_12150981:
    /* cmp MEM8(edi), 0x4Au */ /* 0x12150981: cmp byte ptr [edi], 0x4a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x4Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150A21; /* 0x12150984: jne 0x12150a21 */
L_1215098A:
    /* cmp MEM8(edi + 0x1), 0x46u */ /* 0x1215098A: cmp byte ptr [edi + 1], 0x46 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x46u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150A21; /* 0x1215098E: jne 0x12150a21 */
L_12150994:
    /* cmp MEM8(edi + 0x2), 0x58u */ /* 0x12150994: cmp byte ptr [edi + 2], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150A21; /* 0x12150998: jne 0x12150a21 */
L_1215099E:
    /* cmp MEM8(edi + 0x3), 0x58u */ /* 0x1215099E: cmp byte ptr [edi + 3], 0x58 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150A21; /* 0x121509A2: jne 0x12150a21 */
L_121509A4:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x121509A4: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150A21; /* 0x121509A8: jne 0x12150a21 */
L_121509AA:
    eax = (uint32_t)MEM8(edi + 0x5); /* 0x121509AA: movzx eax, byte ptr [edi + 5] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x121509AE: sub eax, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x121509B1: push 1 */
    PUSH32(esp, esi); /* 0x121509B3: push esi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12150A0A; /* 0x121509B4: je 0x12150a0a */
L_121509B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121509B6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121509F3; /* 0x121509B7: je 0x121509f3 */
L_121509B9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x121509B9: sub eax, 2 */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x121509BC: mov eax, dword ptr [esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121509DE; /* 0x121509BE: je 0x121509de */
L_121509C0:
    MEM32(eax + 0x14) = 0x59u; /* 0x121509C0: mov dword ptr [eax + 0x14], 0x59 */
    ecx = (uint32_t)MEM8(edi + 0x5); /* 0x121509C7: movzx ecx, byte ptr [edi + 5] */
    eax = MEM32(esi); /* 0x121509CB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x121509CD: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x121509D0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = ebx; /* 0x121509D2: mov dword ptr [eax + 0x1c], ebx */
    eax = MEM32(esi); /* 0x121509D5: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x121509D7: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x121509DA: call eax */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x121509DC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121509DD: ret  */
L_121509DE:
    MEM32(eax + 0x14) = 0x6Eu; /* 0x121509DE: mov dword ptr [eax + 0x14], 0x6e */
    eax = MEM32(esi); /* 0x121509E5: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x121509E7: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x121509EA: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x121509EC: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x121509EF: call eax */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x121509F1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121509F2: ret  */
L_121509F3:
    eax = MEM32(esi); /* 0x121509F3: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x6Du; /* 0x121509F5: mov dword ptr [eax + 0x14], 0x6d */
    eax = MEM32(esi); /* 0x121509FC: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x121509FE: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12150A01: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12150A03: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x12150A06: call eax */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12150A08: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12150A09: ret  */
L_12150A0A:
    eax = MEM32(esi); /* 0x12150A0A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x6Cu; /* 0x12150A0C: mov dword ptr [eax + 0x14], 0x6c */
    eax = MEM32(esi); /* 0x12150A13: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12150A15: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12150A18: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12150A1A: mov eax, dword ptr [eax + 4] */
    RECOMP_ICALL(eax); /* 0x12150A1D: call eax */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12150A1F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12150A20: ret  */
L_12150A21:
    eax = MEM32(esi); /* 0x12150A21: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x4Du; /* 0x12150A23: mov dword ptr [eax + 0x14], 0x4d */
    eax = MEM32(esi); /* 0x12150A2A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12150A2C: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12150A2F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12150A31: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150A34: push 1 */
    PUSH32(esp, esi); /* 0x12150A36: push esi */
    RECOMP_ICALL(eax); /* 0x12150A37: call eax */
    RECOMP_FLAGS_IN();
L_12150A39:
    ebx = POP32_VAL(esp); /* 0x12150A39: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12150A3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_12150A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150A40u);

L_12150A40:
    edi = edi; /* 0x12150A40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150A42: push ebp */
    ebp = esp; /* 0x12150A43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12150A45: push esi */
    esi = ecx; /* 0x12150A46: mov esi, ecx */
    PUSH32(esp, edi); /* 0x12150A48: push edi */
    edi = eax; /* 0x12150A49: mov edi, eax */
    /* cmp esi, 0xCu */ /* 0x12150A4B: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A4E: jb 0x12150ae5 */
L_12150A54:
    ecx = MEM32(ebp + 0xC); /* 0x12150A54: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM8(ecx), 0x41u */ /* 0x12150A57: cmp byte ptr [ecx], 0x41 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A5A: jne 0x12150ae5 */
L_12150A60:
    /* cmp MEM8(ecx + 0x1), 0x64u */ /* 0x12150A60: cmp byte ptr [ecx + 1], 0x64 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A64: jne 0x12150ae5 */
L_12150A66:
    /* cmp MEM8(ecx + 0x2), 0x6Fu */ /* 0x12150A66: cmp byte ptr [ecx + 2], 0x6f */
    _flag_a = (uint32_t)(MEM8(ecx + 0x2)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A6A: jne 0x12150ae5 */
L_12150A6C:
    /* cmp MEM8(ecx + 0x3), 0x62u */ /* 0x12150A6C: cmp byte ptr [ecx + 3], 0x62 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x3)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A70: jne 0x12150ae5 */
L_12150A72:
    /* cmp MEM8(ecx + 0x4), 0x65u */ /* 0x12150A72: cmp byte ptr [ecx + 4], 0x65 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150AE5; /* 0x12150A76: jne 0x12150ae5 */
L_12150A78:
    edi = (uint32_t)MEM8(ecx + 0x7); /* 0x12150A78: movzx edi, byte ptr [ecx + 7] */
    eax = (uint32_t)MEM8(ecx + 0x8); /* 0x12150A7C: movzx eax, byte ptr [ecx + 8] */
    esi = (uint32_t)MEM8(ecx + 0x9); /* 0x12150A80: movzx esi, byte ptr [ecx + 9] */
    edx = MEM32(ebp + 0x8); /* 0x12150A84: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx); /* 0x12150A87: mov edx, dword ptr [edx] */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x12150A89: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x12150A89: shl edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12150A8C: add edi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx + 0xA); /* 0x12150A8E: movzx eax, byte ptr [ecx + 0xa] */
    PUSH32(esp, ebx); /* 0x12150A92: push ebx */
    ebx = (uint32_t)MEM8(ecx + 0xB); /* 0x12150A93: movzx ebx, byte ptr [ecx + 0xb] */
    ecx = (uint32_t)MEM8(ecx + 0x5); /* 0x12150A97: movzx ecx, byte ptr [ecx + 5] */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x12150A9B: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x12150A9B: shl esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12150A9E: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x12150AA0: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(eax + 0x6); /* 0x12150AA3: movzx eax, byte ptr [eax + 6] */
    MEM32(edx + 0x20) = esi; /* 0x12150AA7: mov dword ptr [edx + 0x20], esi */
    esi = MEM32(ebp + 0x8); /* 0x12150AAA: mov esi, dword ptr [ebp + 8] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x12150AAD: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x12150AAD: shl ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12150AB0: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = ecx; /* 0x12150AB2: mov dword ptr [edx + 0x18], ecx */
    MEM32(edx + 0x1C) = edi; /* 0x12150AB5: mov dword ptr [edx + 0x1c], edi */
    MEM32(edx + 0x24) = ebx; /* 0x12150AB8: mov dword ptr [edx + 0x24], ebx */
    eax = MEM32(esi); /* 0x12150ABB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x4Cu; /* 0x12150ABD: mov dword ptr [eax + 0x14], 0x4c */
    eax = MEM32(esi); /* 0x12150AC4: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12150AC6: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150AC9: push 1 */
    PUSH32(esp, esi); /* 0x12150ACB: push esi */
    RECOMP_ICALL(eax); /* 0x12150ACC: call eax */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x12C) = (uint8_t)(LO8(ebx)); /* 0x12150ACE: mov byte ptr [esi + 0x12c], bl */
    ebx = POP32_VAL(esp); /* 0x12150AD4: pop ebx */
    edi = POP32_VAL(esp); /* 0x12150AD5: pop edi */
    MEM32(esi + 0x128) = 1; /* 0x12150AD6: mov dword ptr [esi + 0x128], 1 */
    esi = POP32_VAL(esp); /* 0x12150AE0: pop esi */
    ebp = POP32_VAL(esp); /* 0x12150AE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12150AE2: ret 8 */
L_12150AE5:
    edx = MEM32(ebp + 0x8); /* 0x12150AE5: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x12150AE8: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x4Eu; /* 0x12150AEA: mov dword ptr [eax + 0x14], 0x4e */
    eax = MEM32(edx); /* 0x12150AF1: mov eax, dword ptr [edx] */
    ecx = esi + edi; /* 0x12150AF3: lea ecx, [esi + edi] */
    MEM32(eax + 0x18) = ecx; /* 0x12150AF6: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(edx); /* 0x12150AF9: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x12150AFB: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150AFE: push 1 */
    PUSH32(esp, edx); /* 0x12150B00: push edx */
    RECOMP_ICALL(eax); /* 0x12150B01: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12150B03: pop edi */
    esi = POP32_VAL(esp); /* 0x12150B04: pop esi */
    ebp = POP32_VAL(esp); /* 0x12150B05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12150B06: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12150B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150B10u);

L_12150B10:
    edi = edi; /* 0x12150B10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150B12: push ebp */
    ebp = esp; /* 0x12150B13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12150B15: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12150B18: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12150B1D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12150B1F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12150B22: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12150B25: push ebx */
    PUSH32(esp, esi); /* 0x12150B26: push esi */
    esi = MEM32(eax + 0x18); /* 0x12150B27: mov esi, dword ptr [eax + 0x18] */
    ebx = MEM32(esi + 0x4); /* 0x12150B2A: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x12150B2D: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12150B2F: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x28)) = esi; /* 0x12150B32: mov dword ptr [ebp - 0x28], esi */
    /* test ebx, ebx */ /* 0x12150B35: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150B5D; /* 0x12150B37: jne 0x12150b5d */
L_12150B39:
    PUSH32(esp, eax); /* 0x12150B39: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150B3A: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150B3D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150B3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150B55; /* 0x12150B41: jne 0x12150b55 */
L_12150B43:
    esi = POP32_VAL(esp); /* 0x12150B43: pop esi */
    ebx = POP32_VAL(esp); /* 0x12150B44: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150B45: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12150B48: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12150B4A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12150B4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150B52: ret 4 */
L_12150B55:
    ecx = MEM32(esi); /* 0x12150B55: mov ecx, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x12150B57: mov ebx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x12150B5A: mov eax, dword ptr [ebp - 0x1c] */
L_12150B5D:
    PUSH32(esp, edi); /* 0x12150B5D: push edi */
    edi = (uint32_t)MEM8(ecx); /* 0x12150B5E: movzx edi, byte ptr [ecx] */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x12150B61: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x12150B61: shl edi, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12150B64: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12150B65: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12150B7B; /* 0x12150B66: jne 0x12150b7b */
L_12150B68:
    PUSH32(esp, eax); /* 0x12150B68: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150B69: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150B6C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150B6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150C15; /* 0x12150B70: je 0x12150c15 */
L_12150B76:
    ecx = MEM32(esi); /* 0x12150B76: mov ecx, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x12150B78: mov ebx, dword ptr [esi + 4] */
L_12150B7B:
    eax = (uint32_t)MEM8(ecx); /* 0x12150B7B: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12150B7E: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12150B80: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x12150B81: sub edi, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12150B84: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x12150B85: mov dword ptr [ebp - 0x24], ecx */
    /* cmp edi, 0xEu */ /* 0x12150B88: cmp edi, 0xe */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12150B94; /* 0x12150B8B: jl 0x12150b94 */
L_12150B8D:
    eax = 0xEu; /* 0x12150B8D: mov eax, 0xe */
    goto L_12150B9E; /* 0x12150B92: jmp 0x12150b9e */
L_12150B94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150B94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x12150B96: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) ? 1 : 0); /* 0x12150B98: setle al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12150B9B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x12150B9C: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12150B9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12150B9E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x12150BA0: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x12150BA3: mov dword ptr [ebp - 0x18], edx */
    /* test eax, eax */ /* 0x12150BA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150BDE; /* 0x12150BA8: je 0x12150bde */
L_12150BAA:
    ebx = ebx; /* 0x12150BAA: lea ebx, [ebx] */
L_12150BB0:
    /* test ebx, ebx */ /* 0x12150BB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150BC8; /* 0x12150BB2: jne 0x12150bc8 */
L_12150BB4:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x12150BB4: push dword ptr [ebp - 0x1c] */
    eax = MEM32(esi + 0xC); /* 0x12150BB7: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150BBA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150BBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150C15; /* 0x12150BBE: je 0x12150c15 */
L_12150BC0:
    ecx = MEM32(esi); /* 0x12150BC0: mov ecx, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x12150BC2: mov ebx, dword ptr [esi + 4] */
    edx = MEM32(ebp + (-0x18)); /* 0x12150BC5: mov edx, dword ptr [ebp - 0x18] */
L_12150BC8:
    SET_LO8(eax, MEM8(ecx)); /* 0x12150BC8: mov al, byte ptr [ecx] */
    MEM8(ebp + edx + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x12150BCA: mov byte ptr [ebp + edx - 0x14], al */
    eax = MEM32(ebp + (-0x20)); /* 0x12150BCE: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12150BD1: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12150BD2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12150BD3: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x12150BD4: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x18)) = edx; /* 0x12150BD7: mov dword ptr [ebp - 0x18], edx */
    /* cmp edx, eax */ /* 0x12150BDA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12150BB0; /* 0x12150BDC: jb 0x12150bb0 */
L_12150BDE:
    edx = MEM32(ebp + (-0x1C)); /* 0x12150BDE: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x12150BE1: sub edi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x1A4); /* 0x12150BE3: mov eax, dword ptr [edx + 0x1a4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xE0u; /* 0x12150BE9: sub eax, 0xe0 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edi; /* 0x12150BEE: mov dword ptr [ebp - 0x18], edi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12150C3B; /* 0x12150BF1: je 0x12150c3b */
L_12150BF3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEu; /* 0x12150BF3: sub eax, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12150C2A; /* 0x12150BF6: je 0x12150c2a */
L_12150BF8:
    eax = MEM32(edx); /* 0x12150BF8: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x44u; /* 0x12150BFA: mov dword ptr [eax + 0x14], 0x44 */
    eax = MEM32(edx + 0x1A4); /* 0x12150C01: mov eax, dword ptr [edx + 0x1a4] */
    ecx = MEM32(edx); /* 0x12150C07: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x18) = eax; /* 0x12150C09: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx); /* 0x12150C0C: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x12150C0E: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x12150C10: push edx */
    RECOMP_ICALL(eax); /* 0x12150C11: call eax */
    RECOMP_FLAGS_IN();
    goto L_12150C50; /* 0x12150C13: jmp 0x12150c50 */
L_12150C15:
    edi = POP32_VAL(esp); /* 0x12150C15: pop edi */
    esi = POP32_VAL(esp); /* 0x12150C16: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150C17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150C19: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150C1A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12150C1D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12150C1F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12150C24: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150C26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150C27: ret 4 */
L_12150C2A:
    ecx = MEM32(ebp + (-0x20)); /* 0x12150C2A: mov ecx, dword ptr [ebp - 0x20] */
    eax = ebp + (-0x14); /* 0x12150C2D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x12150C30: push eax */
    PUSH32(esp, edx); /* 0x12150C31: push edx */
    eax = edi; /* 0x12150C32: mov eax, edi */
    RECOMP_CALL(sub_12150A40); /* 0x12150C34: call 0x12150a40 */
    RECOMP_FLAGS_IN();
    goto L_12150C50; /* 0x12150C39: jmp 0x12150c50 */
L_12150C3B:
    ecx = MEM32(ebp + (-0x20)); /* 0x12150C3B: mov ecx, dword ptr [ebp - 0x20] */
    eax = edi; /* 0x12150C3E: mov eax, edi */
    edi = ebp + (-0x14); /* 0x12150C40: lea edi, [ebp - 0x14] */
    esi = edx; /* 0x12150C43: mov esi, edx */
    RECOMP_CALL(sub_12150800); /* 0x12150C45: call 0x12150800 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x28)); /* 0x12150C4A: mov esi, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x18)); /* 0x12150C4D: mov edi, dword ptr [ebp - 0x18] */
L_12150C50:
    eax = MEM32(ebp + (-0x24)); /* 0x12150C50: mov eax, dword ptr [ebp - 0x24] */
    MEM32(esi) = eax; /* 0x12150C53: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = ebx; /* 0x12150C55: mov dword ptr [esi + 4], ebx */
    /* test edi, edi */ /* 0x12150C58: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12150C69; /* 0x12150C5A: jle 0x12150c69 */
L_12150C5C:
    ecx = MEM32(ebp + (-0x1C)); /* 0x12150C5C: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ecx + 0x18); /* 0x12150C5F: mov eax, dword ptr [ecx + 0x18] */
    eax = MEM32(eax + 0x10); /* 0x12150C62: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x12150C65: push edi */
    PUSH32(esp, ecx); /* 0x12150C66: push ecx */
    RECOMP_ICALL(eax); /* 0x12150C67: call eax */
    RECOMP_FLAGS_IN();
L_12150C69:
    ecx = MEM32(ebp + (-0x4)); /* 0x12150C69: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12150C6C: pop edi */
    esi = POP32_VAL(esp); /* 0x12150C6D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12150C6E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x12150C70: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x12150C75: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12150C76: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12150C7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150C7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150C7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150C90u);

L_12150C90:
    edi = edi; /* 0x12150C90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150C92: push ebp */
    ebp = esp; /* 0x12150C93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12150C95: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12150C96: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12150C99: push ebx */
    PUSH32(esp, esi); /* 0x12150C9A: push esi */
    esi = MEM32(eax + 0x18); /* 0x12150C9B: mov esi, dword ptr [eax + 0x18] */
    ebx = MEM32(esi); /* 0x12150C9E: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12150CA0: push edi */
    edi = MEM32(esi + 0x4); /* 0x12150CA1: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x12150CA4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150CC5; /* 0x12150CA6: jne 0x12150cc5 */
L_12150CA8:
    PUSH32(esp, eax); /* 0x12150CA8: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150CA9: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150CAC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150CAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150CBD; /* 0x12150CB0: jne 0x12150cbd */
L_12150CB2:
    edi = POP32_VAL(esp); /* 0x12150CB2: pop edi */
    esi = POP32_VAL(esp); /* 0x12150CB3: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150CB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150CB6: pop ebx */
    esp = ebp; /* 0x12150CB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150CB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150CBA: ret 4 */
L_12150CBD:
    ebx = MEM32(esi); /* 0x12150CBD: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x12150CBF: mov edi, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x12150CC2: mov eax, dword ptr [ebp + 8] */
L_12150CC5:
    ecx = (uint32_t)MEM8(ebx); /* 0x12150CC5: movzx ecx, byte ptr [ebx] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x12150CC8: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x12150CC8: shl ecx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12150CCB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12150CCC: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12150CCD: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12150CE4; /* 0x12150CD0: jne 0x12150ce4 */
L_12150CD2:
    PUSH32(esp, eax); /* 0x12150CD2: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150CD3: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150CD6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150CD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150CB2; /* 0x12150CDA: je 0x12150cb2 */
L_12150CDC:
    ebx = MEM32(esi); /* 0x12150CDC: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x12150CDE: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150CE1: mov ecx, dword ptr [ebp - 4] */
L_12150CE4:
    eax = (uint32_t)MEM8(ebx); /* 0x12150CE4: movzx eax, byte ptr [ebx] */
    edx = MEM32(ebp + 0x8); /* 0x12150CE7: mov edx, dword ptr [ebp + 8] */
    eax = ecx + eax + (-0x2); /* 0x12150CEA: lea eax, [ecx + eax - 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12150CEE: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edx); /* 0x12150CF1: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x5Bu; /* 0x12150CF3: mov dword ptr [eax + 0x14], 0x5b */
    ecx = MEM32(edx); /* 0x12150CFA: mov ecx, dword ptr [edx] */
    eax = MEM32(edx + 0x1A4); /* 0x12150CFC: mov eax, dword ptr [edx + 0x1a4] */
    MEM32(ecx + 0x18) = eax; /* 0x12150D02: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx); /* 0x12150D05: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150D07: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x1C) = ecx; /* 0x12150D0A: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(edx); /* 0x12150D0D: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x12150D0F: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x12150D12: push 1 */
    PUSH32(esp, edx); /* 0x12150D14: push edx */
    RECOMP_ICALL(eax); /* 0x12150D15: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12150D17: mov ecx, dword ptr [ebp - 4] */
    eax = ebx + 0x1; /* 0x12150D1A: lea eax, [ebx + 1] */
    MEM32(esi) = eax; /* 0x12150D1D: mov dword ptr [esi], eax */
    eax = edi + (-0x1); /* 0x12150D1F: lea eax, [edi - 1] */
    MEM32(esi + 0x4) = eax; /* 0x12150D22: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12150D25: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x18); /* 0x12150D28: mov edx, dword ptr [eax + 0x18] */
    /* cmp ecx, MEM32(edx + 0x4) */ /* 0x12150D2B: cmp ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_12150CB2; /* 0x12150D2E: jg 0x12150cb2 */
L_12150D30:
    /* test ecx, ecx */ /* 0x12150D30: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12150D3B; /* 0x12150D32: jle 0x12150d3b */
L_12150D34:
    PUSH32(esp, ecx); /* 0x12150D34: push ecx */
    PUSH32(esp, eax); /* 0x12150D35: push eax */
    eax = MEM32(edx + 0x10); /* 0x12150D36: mov eax, dword ptr [edx + 0x10] */
    RECOMP_ICALL(eax); /* 0x12150D39: call eax */
    RECOMP_FLAGS_IN();
L_12150D3B:
    edi = POP32_VAL(esp); /* 0x12150D3B: pop edi */
    esi = POP32_VAL(esp); /* 0x12150D3C: pop esi */
    eax = 1; /* 0x12150D3D: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x12150D42: pop ebx */
    esp = ebp; /* 0x12150D43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150D45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150D46: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150D50u);

L_12150D50:
    edi = edi; /* 0x12150D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150D52: push ebp */
    ebp = esp; /* 0x12150D53: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12150D55: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x12150D56: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12150D59: push ebx */
    ebx = MEM32(ecx + 0x18); /* 0x12150D5A: mov ebx, dword ptr [ecx + 0x18] */
    PUSH32(esp, esi); /* 0x12150D5D: push esi */
    esi = MEM32(ebx + 0x4); /* 0x12150D5E: mov esi, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x12150D61: push edi */
    edi = MEM32(ebx); /* 0x12150D62: mov edi, dword ptr [ebx] */
L_12150D64:
    /* test esi, esi */ /* 0x12150D64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150D7E; /* 0x12150D66: jne 0x12150d7e */
L_12150D68:
    eax = MEM32(ebx + 0xC); /* 0x12150D68: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x12150D6B: push ecx */
    RECOMP_ICALL(eax); /* 0x12150D6C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150D6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150DFD; /* 0x12150D70: je 0x12150dfd */
L_12150D76:
    edi = MEM32(ebx); /* 0x12150D76: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12150D78: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12150D7B: mov ecx, dword ptr [ebp + 8] */
L_12150D7E:
    eax = (uint32_t)MEM8(edi); /* 0x12150D7E: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12150D81: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12150D82: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x12150D83: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150DC0; /* 0x12150D88: je 0x12150dc0 */
L_12150D8A:
    ebx = ebx; /* 0x12150D8A: lea ebx, [ebx] */
L_12150D90:
    eax = MEM32(ecx + 0x1BC); /* 0x12150D90: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1; /* 0x12150D96: inc dword ptr [eax + 0x18] */
    _flag_k = FK_INC;
    MEM32(ebx) = edi; /* 0x12150D99: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x12150D9B: mov dword ptr [ebx + 4], esi */
    /* test esi, esi */ /* 0x12150D9E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150DB4; /* 0x12150DA0: jne 0x12150db4 */
L_12150DA2:
    eax = MEM32(ebx + 0xC); /* 0x12150DA2: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x12150DA5: push ecx */
    RECOMP_ICALL(eax); /* 0x12150DA6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150DA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150DFD; /* 0x12150DAA: je 0x12150dfd */
L_12150DAC:
    edi = MEM32(ebx); /* 0x12150DAC: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12150DAE: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12150DB1: mov ecx, dword ptr [ebp + 8] */
L_12150DB4:
    eax = (uint32_t)MEM8(edi); /* 0x12150DB4: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12150DB7: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12150DB8: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x12150DB9: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150D90; /* 0x12150DBE: jne 0x12150d90 */
L_12150DC0:
    /* test esi, esi */ /* 0x12150DC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150DD3; /* 0x12150DC2: jne 0x12150dd3 */
L_12150DC4:
    eax = MEM32(ebx + 0xC); /* 0x12150DC4: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x12150DC7: push ecx */
    RECOMP_ICALL(eax); /* 0x12150DC8: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150DCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150DFD; /* 0x12150DCC: je 0x12150dfd */
L_12150DCE:
    edi = MEM32(ebx); /* 0x12150DCE: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12150DD0: mov esi, dword ptr [ebx + 4] */
L_12150DD3:
    eax = (uint32_t)MEM8(edi); /* 0x12150DD3: movzx eax, byte ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x12150DD6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12150DD9: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12150DDA: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x12150DDB: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0xFFu */ /* 0x12150DDE: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150DC0; /* 0x12150DE3: je 0x12150dc0 */
L_12150DE5:
    /* test eax, eax */ /* 0x12150DE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150E08; /* 0x12150DE7: jne 0x12150e08 */
L_12150DE9:
    eax = MEM32(ecx + 0x1BC); /* 0x12150DE9: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 2; /* 0x12150DEF: add dword ptr [eax + 0x18], 2 */
    _flag_k = FK_ADD;
    MEM32(ebx) = edi; /* 0x12150DF3: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x12150DF5: mov dword ptr [ebx + 4], esi */
    RECOMP_BACKEDGE();
    goto L_12150D64; /* 0x12150DF8: jmp 0x12150d64 */
L_12150DFD:
    edi = POP32_VAL(esp); /* 0x12150DFD: pop edi */
    esi = POP32_VAL(esp); /* 0x12150DFE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150DFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150E01: pop ebx */
    esp = ebp; /* 0x12150E02: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150E04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150E05: ret 4 */
L_12150E08:
    edx = ecx; /* 0x12150E08: mov edx, ecx */
    eax = MEM32(edx + 0x1BC); /* 0x12150E0A: mov eax, dword ptr [edx + 0x1bc] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x12150E10: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150E4F; /* 0x12150E14: je 0x12150e4f */
L_12150E16:
    eax = MEM32(edx); /* 0x12150E16: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x74u; /* 0x12150E18: mov dword ptr [eax + 0x14], 0x74 */
    eax = MEM32(edx + 0x1BC); /* 0x12150E1F: mov eax, dword ptr [edx + 0x1bc] */
    eax = MEM32(eax + 0x18); /* 0x12150E25: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(edx); /* 0x12150E28: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x18) = eax; /* 0x12150E2A: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx); /* 0x12150E2D: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150E2F: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x1C) = ecx; /* 0x12150E32: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(edx); /* 0x12150E35: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x12150E37: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12150E3A: push -1 */
    PUSH32(esp, edx); /* 0x12150E3C: push edx */
    RECOMP_ICALL(eax); /* 0x12150E3D: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x12150E3F: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x1BC); /* 0x12150E42: mov eax, dword ptr [edx + 0x1bc] */
    MEM32(eax + 0x18) = 0; /* 0x12150E48: mov dword ptr [eax + 0x18], 0 */
L_12150E4F:
    eax = MEM32(ebp + (-0x4)); /* 0x12150E4F: mov eax, dword ptr [ebp - 4] */
    MEM32(edx + 0x1A4) = eax; /* 0x12150E52: mov dword ptr [edx + 0x1a4], eax */
    MEM32(ebx) = edi; /* 0x12150E58: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x12150E5A: pop edi */
    MEM32(ebx + 0x4) = esi; /* 0x12150E5B: mov dword ptr [ebx + 4], esi */
    esi = POP32_VAL(esp); /* 0x12150E5E: pop esi */
    eax = 1; /* 0x12150E5F: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x12150E64: pop ebx */
    esp = ebp; /* 0x12150E65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150E68: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150E70u);

L_12150E70:
    edi = edi; /* 0x12150E70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150E72: push ebp */
    ebp = esp; /* 0x12150E73: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12150E75: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12150E78: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12150E7B: push ebx */
    PUSH32(esp, esi); /* 0x12150E7C: push esi */
    esi = MEM32(eax + 0x18); /* 0x12150E7D: mov esi, dword ptr [eax + 0x18] */
    ebx = MEM32(esi); /* 0x12150E80: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12150E82: push edi */
    edi = MEM32(esi + 0x4); /* 0x12150E83: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x12150E86: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150EA7; /* 0x12150E88: jne 0x12150ea7 */
L_12150E8A:
    PUSH32(esp, eax); /* 0x12150E8A: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150E8B: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150E8E: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150E90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12150E9F; /* 0x12150E92: jne 0x12150e9f */
L_12150E94:
    edi = POP32_VAL(esp); /* 0x12150E94: pop edi */
    esi = POP32_VAL(esp); /* 0x12150E95: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150E96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12150E98: pop ebx */
    esp = ebp; /* 0x12150E99: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150E9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150E9C: ret 4 */
L_12150E9F:
    ebx = MEM32(esi); /* 0x12150E9F: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x12150EA1: mov edi, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x12150EA4: mov eax, dword ptr [ebp + 8] */
L_12150EA7:
    ecx = (uint32_t)MEM8(ebx); /* 0x12150EA7: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12150EAA: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12150EAB: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x12150EAC: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12150EC3; /* 0x12150EAF: jne 0x12150ec3 */
L_12150EB1:
    PUSH32(esp, eax); /* 0x12150EB1: push eax */
    eax = MEM32(esi + 0xC); /* 0x12150EB2: mov eax, dword ptr [esi + 0xc] */
    RECOMP_ICALL(eax); /* 0x12150EB5: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150EB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150E94; /* 0x12150EB9: je 0x12150e94 */
L_12150EBB:
    ebx = MEM32(esi); /* 0x12150EBB: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x12150EBD: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12150EC0: mov ecx, dword ptr [ebp - 4] */
L_12150EC3:
    edx = (uint32_t)MEM8(ebx); /* 0x12150EC3: movzx edx, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12150EC6: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12150EC7: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x12150EC8: mov dword ptr [ebp - 8], edx */
    /* cmp ecx, 0xFFu */ /* 0x12150ECB: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150EDB; /* 0x12150ED1: jne 0x12150edb */
L_12150ED3:
    /* cmp edx, 0xD8u */ /* 0x12150ED3: cmp edx, 0xd8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12150F01; /* 0x12150ED9: je 0x12150f01 */
L_12150EDB:
    ecx = MEM32(ebp + 0x8); /* 0x12150EDB: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12150EDE: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + (-0x4)); /* 0x12150EE0: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x35u; /* 0x12150EE3: mov dword ptr [eax + 0x14], 0x35 */
    eax = MEM32(ecx); /* 0x12150EEA: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edx; /* 0x12150EEC: mov dword ptr [eax + 0x18], edx */
    eax = MEM32(ecx); /* 0x12150EEF: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + (-0x8)); /* 0x12150EF1: mov edx, dword ptr [ebp - 8] */
    MEM32(eax + 0x1C) = edx; /* 0x12150EF4: mov dword ptr [eax + 0x1c], edx */
    eax = MEM32(ecx); /* 0x12150EF7: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12150EF9: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12150EFB: push ecx */
    RECOMP_ICALL(eax); /* 0x12150EFC: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x12150EFE: mov edx, dword ptr [ebp - 8] */
L_12150F01:
    eax = MEM32(ebp + 0x8); /* 0x12150F01: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x1A4) = edx; /* 0x12150F04: mov dword ptr [eax + 0x1a4], edx */
    MEM32(esi + 0x4) = edi; /* 0x12150F0A: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x12150F0D: pop edi */
    MEM32(esi) = ebx; /* 0x12150F0E: mov dword ptr [esi], ebx */
    esi = POP32_VAL(esp); /* 0x12150F10: pop esi */
    eax = 1; /* 0x12150F11: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x12150F16: pop ebx */
    esp = ebp; /* 0x12150F17: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12150F19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150F1A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12150F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12150F30u);

L_12150F30:
    edi = edi; /* 0x12150F30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12150F32: push ebp */
    ebp = esp; /* 0x12150F33: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12150F35: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12150F36: mov esi, dword ptr [ebp + 8] */
    esp = esp; /* 0x12150F39: lea esp, [esp] */
L_12150F40:
    /* cmp MEM32(esi + 0x1A4), 0 */ /* 0x12150F40: cmp dword ptr [esi + 0x1a4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1A4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150F66; /* 0x12150F47: jne 0x12150f66 */
L_12150F49:
    eax = MEM32(esi + 0x1BC); /* 0x12150F49: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x12150F4F: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12150F53: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12150F5D; /* 0x12150F54: jne 0x12150f5d */
L_12150F56:
    RECOMP_CALL(sub_12150E70); /* 0x12150F56: call 0x12150e70 */
    RECOMP_FLAGS_IN();
    goto L_12150F62; /* 0x12150F5B: jmp 0x12150f62 */
L_12150F5D:
    RECOMP_CALL(sub_12150D50); /* 0x12150F5D: call 0x12150d50 */
    RECOMP_FLAGS_IN();
L_12150F62:
    /* test eax, eax */ /* 0x12150F62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150F95; /* 0x12150F64: je 0x12150f95 */
L_12150F66:
    ecx = MEM32(esi + 0x1A4); /* 0x12150F66: mov ecx, dword ptr [esi + 0x1a4] */
    eax = ecx + (-0x1); /* 0x12150F6C: lea eax, [ecx - 1] */
    /* cmp eax, 0xFDu */ /* 0x12150F6F: cmp eax, 0xfd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215105E; /* 0x12150F74: ja 0x1215105e */
L_12150F7A:
    eax = (uint32_t)MEM8(eax + 0x12151110); /* 0x12150F7A: movzx eax, byte ptr [eax + 0x12151110] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x121510D0)); goto _ljump; }
L_12150F88:
    RECOMP_CALL(sub_1214FAB0); /* 0x12150F88: call 0x1214fab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150F8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151079; /* 0x12150F8F: jne 0x12151079 */
L_12150F95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150F95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12150F97: pop esi */
    ebp = POP32_VAL(esp); /* 0x12150F98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12150F99: ret 4 */
L_12150F9C:
    PUSH32(esp, 0); /* 0x12150F9C: push 0 */
L_12150F9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12150F9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12150FA0:
    PUSH32(esp, esi); /* 0x12150FA0: push esi */
    RECOMP_CALL(sub_1214FB60); /* 0x12150FA1: call 0x1214fb60 */
    RECOMP_FLAGS_IN();
L_12150FA6:
    /* test eax, eax */ /* 0x12150FA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150F95; /* 0x12150FA8: je 0x12150f95 */
L_12150FAA:
    MEM32(esi + 0x1A4) = 0; /* 0x12150FAA: mov dword ptr [esi + 0x1a4], 0 */
    RECOMP_BACKEDGE();
    goto L_12150F40; /* 0x12150FB4: jmp 0x12150f40 */
L_12150FB6:
    PUSH32(esp, 0); /* 0x12150FB6: push 0 */
    PUSH32(esp, esi); /* 0x12150FB8: push esi */
    eax = 1; /* 0x12150FB9: mov eax, 1 */
    RECOMP_CALL(sub_1214FB60); /* 0x12150FBE: call 0x1214fb60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12150FC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150F95; /* 0x12150FC5: je 0x12150f95 */
L_12150FC7:
    MEM32(esi + 0x1A4) = 0; /* 0x12150FC7: mov dword ptr [esi + 0x1a4], 0 */
    RECOMP_BACKEDGE();
    goto L_12150F40; /* 0x12150FD1: jmp 0x12150f40 */
L_12150FD6:
    PUSH32(esp, 1); /* 0x12150FD6: push 1 */
    RECOMP_BACKEDGE();
    goto L_12150F9E; /* 0x12150FD8: jmp 0x12150f9e */
L_12150FDA:
    PUSH32(esp, 1); /* 0x12150FDA: push 1 */
    eax = 1; /* 0x12150FDC: mov eax, 1 */
    RECOMP_BACKEDGE();
    goto L_12150FA0; /* 0x12150FE1: jmp 0x12150fa0 */
L_12150FE3:
    eax = MEM32(esi); /* 0x12150FE3: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x3Cu; /* 0x12150FE5: mov dword ptr [eax + 0x14], 0x3c */
    goto L_12151067; /* 0x12150FEC: jmp 0x12151067 */
L_12150FEE:
    PUSH32(esp, esi); /* 0x12150FEE: push esi */
    RECOMP_CALL(sub_12150C90); /* 0x12150FEF: call 0x12150c90 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x12150FF4: jmp 0x12150fa6 */
L_12150FF6:
    PUSH32(esp, esi); /* 0x12150FF6: push esi */
    RECOMP_CALL(sub_12150140); /* 0x12150FF7: call 0x12150140 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x12150FFC: jmp 0x12150fa6 */
L_12150FFE:
    PUSH32(esp, esi); /* 0x12150FFE: push esi */
    RECOMP_CALL(sub_12150490); /* 0x12150FFF: call 0x12150490 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x12151004: jmp 0x12150fa6 */
L_12151006:
    PUSH32(esp, esi); /* 0x12151006: push esi */
    RECOMP_CALL(sub_12150700); /* 0x12151007: call 0x12150700 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x1215100C: jmp 0x12150fa6 */
L_1215100E:
    eax = MEM32(esi + 0x1BC); /* 0x1215100E: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax + ecx * 4 + (-0x360)); /* 0x12151014: mov eax, dword ptr [eax + ecx*4 - 0x360] */
    PUSH32(esp, esi); /* 0x1215101B: push esi */
    RECOMP_ICALL(eax); /* 0x1215101C: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x1215101E: jmp 0x12150fa6 */
L_12151020:
    eax = MEM32(esi + 0x1BC); /* 0x12151020: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax + 0x1C); /* 0x12151026: mov eax, dword ptr [eax + 0x1c] */
    PUSH32(esp, esi); /* 0x12151029: push esi */
    RECOMP_ICALL(eax); /* 0x1215102A: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12150FA6; /* 0x1215102C: jmp 0x12150fa6 */
L_12151031:
    eax = MEM32(esi); /* 0x12151031: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x5Cu; /* 0x12151033: mov dword ptr [eax + 0x14], 0x5c */
    eax = MEM32(esi + 0x1A4); /* 0x1215103A: mov eax, dword ptr [esi + 0x1a4] */
    ecx = MEM32(esi); /* 0x12151040: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12151042: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151045: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12151047: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1215104A: push 1 */
    PUSH32(esp, esi); /* 0x1215104C: push esi */
    RECOMP_ICALL(eax); /* 0x1215104D: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = 0; /* 0x1215104F: mov dword ptr [esi + 0x1a4], 0 */
    RECOMP_BACKEDGE();
    goto L_12150F40; /* 0x12151059: jmp 0x12150f40 */
L_1215105E:
    eax = MEM32(esi); /* 0x1215105E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x44u; /* 0x12151060: mov dword ptr [eax + 0x14], 0x44 */
L_12151067:
    eax = MEM32(esi + 0x1A4); /* 0x12151067: mov eax, dword ptr [esi + 0x1a4] */
    ecx = MEM32(esi); /* 0x1215106D: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1215106F: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151072: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151074: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151076: push esi */
    RECOMP_ICALL(eax); /* 0x12151077: call eax */
    RECOMP_FLAGS_IN();
L_12151079:
    MEM32(esi + 0x1A4) = 0; /* 0x12151079: mov dword ptr [esi + 0x1a4], 0 */
    RECOMP_BACKEDGE();
    goto L_12150F40; /* 0x12151083: jmp 0x12150f40 */
L_12151088:
    RECOMP_CALL(sub_1214FE70); /* 0x12151088: call 0x1214fe70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215108D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12150F95; /* 0x1215108F: je 0x12150f95 */
L_12151095:
    MEM32(esi + 0x1A4) = 0; /* 0x12151095: mov dword ptr [esi + 0x1a4], 0 */
    eax = 1; /* 0x1215109F: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x121510A4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121510A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121510A6: ret 4 */
L_121510A9:
    eax = MEM32(esi); /* 0x121510A9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x55u; /* 0x121510AB: mov dword ptr [eax + 0x14], 0x55 */
    eax = MEM32(esi); /* 0x121510B2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x121510B4: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x121510B7: push 1 */
    PUSH32(esp, esi); /* 0x121510B9: push esi */
    RECOMP_ICALL(eax); /* 0x121510BA: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = 0; /* 0x121510BC: mov dword ptr [esi + 0x1a4], 0 */
    eax = 2; /* 0x121510C6: mov eax, 2 */
    esi = POP32_VAL(esp); /* 0x121510CB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121510CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121510CD: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12150F88u: goto L_12150F88;
      case 0x12150F9Cu: goto L_12150F9C;
      case 0x12150FB6u: goto L_12150FB6;
      case 0x12150FD6u: goto L_12150FD6;
      case 0x12150FDAu: goto L_12150FDA;
      case 0x12150FE3u: goto L_12150FE3;
      case 0x12150FEEu: goto L_12150FEE;
      case 0x12150FF6u: goto L_12150FF6;
      case 0x12150FFEu: goto L_12150FFE;
      case 0x12151006u: goto L_12151006;
      case 0x1215100Eu: goto L_1215100E;
      case 0x12151020u: goto L_12151020;
      case 0x12151031u: goto L_12151031;
      case 0x1215105Eu: goto L_1215105E;
      case 0x12151088u: goto L_12151088;
      case 0x121510A9u: goto L_121510A9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12151220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151220u);

L_12151220:
    edi = edi; /* 0x12151220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151222: push ebp */
    ebp = esp; /* 0x12151223: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12151225: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151226: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x1A4), 0 */ /* 0x12151229: cmp dword ptr [esi + 0x1a4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1A4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12151243; /* 0x12151230: jne 0x12151243 */
L_12151232:
    PUSH32(esp, esi); /* 0x12151232: push esi */
    RECOMP_CALL(sub_12150D50); /* 0x12151233: call 0x12150d50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12151238: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151243; /* 0x1215123A: jne 0x12151243 */
L_1215123C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215123C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1215123E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215123F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12151240: ret 4 */
L_12151243:
    eax = MEM32(esi + 0x1BC); /* 0x12151243: mov eax, dword ptr [esi + 0x1bc] */
    ecx = MEM32(eax + 0x14); /* 0x12151249: mov ecx, dword ptr [eax + 0x14] */
    eax = ecx + 0xD0; /* 0x1215124C: lea eax, [ecx + 0xd0] */
    /* cmp MEM32(esi + 0x1A4), eax */ /* 0x12151252: cmp dword ptr [esi + 0x1a4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x1A4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12151287; /* 0x12151258: jne 0x12151287 */
L_1215125A:
    eax = MEM32(esi); /* 0x1215125A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x62u; /* 0x1215125C: mov dword ptr [eax + 0x14], 0x62 */
    eax = MEM32(esi + 0x1BC); /* 0x12151263: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax + 0x14); /* 0x12151269: mov eax, dword ptr [eax + 0x14] */
    ecx = MEM32(esi); /* 0x1215126C: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1215126E: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151271: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12151273: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x12151276: push 3 */
    PUSH32(esp, esi); /* 0x12151278: push esi */
    RECOMP_ICALL(eax); /* 0x12151279: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = 0; /* 0x1215127B: mov dword ptr [esi + 0x1a4], 0 */
    goto L_12151295; /* 0x12151285: jmp 0x12151295 */
L_12151287:
    eax = MEM32(esi + 0x18); /* 0x12151287: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x14); /* 0x1215128A: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, ecx); /* 0x1215128D: push ecx */
    PUSH32(esp, esi); /* 0x1215128E: push esi */
    RECOMP_ICALL(eax); /* 0x1215128F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12151291: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215123C; /* 0x12151293: je 0x1215123c */
L_12151295:
    ecx = MEM32(esi + 0x1BC); /* 0x12151295: mov ecx, dword ptr [esi + 0x1bc] */
    eax = MEM32(ecx + 0x14); /* 0x1215129B: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215129E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1215129F: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = eax; /* 0x121512A2: mov dword ptr [ecx + 0x14], eax */
    eax = 1; /* 0x121512A5: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x121512AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x121512AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121512AC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121512C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121512C0u);

L_121512C0:
    edi = edi; /* 0x121512C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121512C2: push ebp */
    ebp = esp; /* 0x121512C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121512C5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x121512C6: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x121512C9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x121512CB: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121512CC: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121512CF: push esi */
    PUSH32(esp, edi); /* 0x121512D0: push edi */
    edi = MEM32(ecx + 0x1A4); /* 0x121512D1: mov edi, dword ptr [ecx + 0x1a4] */
    MEM32(eax + 0x14) = 0x79u; /* 0x121512D7: mov dword ptr [eax + 0x14], 0x79 */
    eax = MEM32(ecx); /* 0x121512DE: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edi; /* 0x121512E0: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(ecx); /* 0x121512E3: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x1C) = ebx; /* 0x121512E5: mov dword ptr [eax + 0x1c], ebx */
    eax = MEM32(ecx); /* 0x121512E8: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x121512EA: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121512ED: push -1 */
    PUSH32(esp, ecx); /* 0x121512EF: push ecx */
    RECOMP_ICALL(eax); /* 0x121512F0: call eax */
    RECOMP_FLAGS_IN();
L_121512F2:
    edx = MEM32(ebp + 0x8); /* 0x121512F2: mov edx, dword ptr [ebp + 8] */
L_121512F5:
    /* cmp edi, 0xC0u */ /* 0x121512F5: cmp edi, 0xc0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12151304; /* 0x121512FB: jge 0x12151304 */
L_121512FD:
    esi = 2; /* 0x121512FD: mov esi, 2 */
    goto L_12151357; /* 0x12151302: jmp 0x12151357 */
L_12151304:
    eax = edi + (-0xD0); /* 0x12151304: lea eax, [edi - 0xd0] */
    /* cmp eax, 7 */ /* 0x1215130A: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12151352; /* 0x1215130D: ja 0x12151352 */
L_1215130F:
    eax = ebx + 0x1; /* 0x1215130F: lea eax, [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x12151312: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x12151315: add eax, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x1215131A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151352; /* 0x1215131C: je 0x12151352 */
L_1215131E:
    eax = ebx + 0x2; /* 0x1215131E: lea eax, [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x12151321: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x12151324: add eax, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x12151329: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151352; /* 0x1215132B: je 0x12151352 */
L_1215132D:
    eax = ebx + (-0x1); /* 0x1215132D: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x12151330: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x12151333: add eax, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x12151338: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121512FD; /* 0x1215133A: je 0x121512fd */
L_1215133C:
    eax = ebx + (-0x2); /* 0x1215133C: lea eax, [ebx - 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1215133F: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x12151342: add eax, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x12151347: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121512FD; /* 0x12151349: je 0x121512fd */
L_1215134B:
    esi = 1; /* 0x1215134B: mov esi, 1 */
    goto L_12151357; /* 0x12151350: jmp 0x12151357 */
L_12151352:
    esi = 3; /* 0x12151352: mov esi, 3 */
L_12151357:
    eax = MEM32(edx); /* 0x12151357: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x61u; /* 0x12151359: mov dword ptr [eax + 0x14], 0x61 */
    eax = MEM32(edx); /* 0x12151360: mov eax, dword ptr [edx] */
    MEM32(eax + 0x18) = edi; /* 0x12151362: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(edx); /* 0x12151365: mov eax, dword ptr [edx] */
    MEM32(eax + 0x1C) = esi; /* 0x12151367: mov dword ptr [eax + 0x1c], esi */
    eax = MEM32(edx); /* 0x1215136A: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1215136C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 4); /* 0x1215136F: push 4 */
    PUSH32(esp, edx); /* 0x12151371: push edx */
    RECOMP_ICALL(eax); /* 0x12151372: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12151374: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121514A3; /* 0x12151375: je 0x121514a3 */
L_1215137B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1215137B: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1215138A; /* 0x1215137C: je 0x1215138a */
L_1215137E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1215137E: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121514B0; /* 0x1215137F: je 0x121514b0 */
L_12151385:
    RECOMP_BACKEDGE();
    goto L_121512F2; /* 0x12151385: jmp 0x121512f2 */
L_1215138A:
    ecx = MEM32(ebp + 0x8); /* 0x1215138A: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(ecx + 0x18); /* 0x1215138D: mov ebx, dword ptr [ecx + 0x18] */
    edi = MEM32(ebx); /* 0x12151390: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12151392: mov esi, dword ptr [ebx + 4] */
L_12151395:
    /* test esi, esi */ /* 0x12151395: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121513AF; /* 0x12151397: jne 0x121513af */
L_12151399:
    eax = MEM32(ebx + 0xC); /* 0x12151399: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x1215139C: push ecx */
    RECOMP_ICALL(eax); /* 0x1215139D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215139F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151498; /* 0x121513A1: je 0x12151498 */
L_121513A7:
    edi = MEM32(ebx); /* 0x121513A7: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121513A9: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x121513AC: mov ecx, dword ptr [ebp + 8] */
L_121513AF:
    eax = (uint32_t)MEM8(edi); /* 0x121513AF: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121513B2: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121513B3: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x121513B4: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121513F4; /* 0x121513B9: je 0x121513f4 */
L_121513BB:
    goto L_121513C0; /* 0x121513BB: jmp 0x121513c0 */
L_121513C0:
    eax = MEM32(ecx + 0x1BC); /* 0x121513C0: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1; /* 0x121513C6: inc dword ptr [eax + 0x18] */
    _flag_k = FK_INC;
    MEM32(ebx) = edi; /* 0x121513C9: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x121513CB: mov dword ptr [ebx + 4], esi */
    /* test esi, esi */ /* 0x121513CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121513E8; /* 0x121513D0: jne 0x121513e8 */
L_121513D2:
    eax = MEM32(ebx + 0xC); /* 0x121513D2: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x121513D5: push ecx */
    RECOMP_ICALL(eax); /* 0x121513D6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121513D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151498; /* 0x121513DA: je 0x12151498 */
L_121513E0:
    edi = MEM32(ebx); /* 0x121513E0: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x121513E2: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x121513E5: mov ecx, dword ptr [ebp + 8] */
L_121513E8:
    eax = (uint32_t)MEM8(edi); /* 0x121513E8: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121513EB: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121513EC: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x121513ED: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121513C0; /* 0x121513F2: jne 0x121513c0 */
L_121513F4:
    /* test esi, esi */ /* 0x121513F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215140B; /* 0x121513F6: jne 0x1215140b */
L_121513F8:
    eax = MEM32(ebx + 0xC); /* 0x121513F8: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x121513FB: push ecx */
    RECOMP_ICALL(eax); /* 0x121513FC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121513FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151498; /* 0x12151400: je 0x12151498 */
L_12151406:
    edi = MEM32(ebx); /* 0x12151406: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x12151408: mov esi, dword ptr [ebx + 4] */
L_1215140B:
    eax = (uint32_t)MEM8(edi); /* 0x1215140B: movzx eax, byte ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x1215140E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12151411: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12151412: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x12151413: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 0xFFu */ /* 0x12151416: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121513F4; /* 0x1215141B: je 0x121513f4 */
L_1215141D:
    /* test eax, eax */ /* 0x1215141D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151435; /* 0x1215141F: jne 0x12151435 */
L_12151421:
    eax = MEM32(ecx + 0x1BC); /* 0x12151421: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 2; /* 0x12151427: add dword ptr [eax + 0x18], 2 */
    _flag_k = FK_ADD;
    MEM32(ebx) = edi; /* 0x1215142B: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x1215142D: mov dword ptr [ebx + 4], esi */
    RECOMP_BACKEDGE();
    goto L_12151395; /* 0x12151430: jmp 0x12151395 */
L_12151435:
    edx = ecx; /* 0x12151435: mov edx, ecx */
    eax = MEM32(edx + 0x1BC); /* 0x12151437: mov eax, dword ptr [edx + 0x1bc] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x1215143D: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215147C; /* 0x12151441: je 0x1215147c */
L_12151443:
    eax = MEM32(edx); /* 0x12151443: mov eax, dword ptr [edx] */
    MEM32(eax + 0x14) = 0x74u; /* 0x12151445: mov dword ptr [eax + 0x14], 0x74 */
    eax = MEM32(edx + 0x1BC); /* 0x1215144C: mov eax, dword ptr [edx + 0x1bc] */
    eax = MEM32(eax + 0x18); /* 0x12151452: mov eax, dword ptr [eax + 0x18] */
    ecx = MEM32(edx); /* 0x12151455: mov ecx, dword ptr [edx] */
    MEM32(ecx + 0x18) = eax; /* 0x12151457: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx); /* 0x1215145A: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215145C: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x1C) = ecx; /* 0x1215145F: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(edx); /* 0x12151462: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x12151464: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12151467: push -1 */
    PUSH32(esp, edx); /* 0x12151469: push edx */
    RECOMP_ICALL(eax); /* 0x1215146A: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1215146C: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x1BC); /* 0x1215146F: mov eax, dword ptr [edx + 0x1bc] */
    MEM32(eax + 0x18) = 0; /* 0x12151475: mov dword ptr [eax + 0x18], 0 */
L_1215147C:
    eax = MEM32(ebp + (-0x4)); /* 0x1215147C: mov eax, dword ptr [ebp - 4] */
    MEM32(edx + 0x1A4) = eax; /* 0x1215147F: mov dword ptr [edx + 0x1a4], eax */
    MEM32(ebx) = edi; /* 0x12151485: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x12151487: mov dword ptr [ebx + 4], esi */
    edi = MEM32(edx + 0x1A4); /* 0x1215148A: mov edi, dword ptr [edx + 0x1a4] */
    ebx = MEM32(ebp + 0xC); /* 0x12151490: mov ebx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_121512F5; /* 0x12151493: jmp 0x121512f5 */
L_12151498:
    edi = POP32_VAL(esp); /* 0x12151498: pop edi */
    esi = POP32_VAL(esp); /* 0x12151499: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215149A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1215149C: pop ebx */
    esp = ebp; /* 0x1215149D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215149F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121514A0: ret 8 */
L_121514A3:
    ecx = MEM32(ebp + 0x8); /* 0x121514A3: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x1A4) = 0; /* 0x121514A6: mov dword ptr [ecx + 0x1a4], 0 */
L_121514B0:
    edi = POP32_VAL(esp); /* 0x121514B0: pop edi */
    esi = POP32_VAL(esp); /* 0x121514B1: pop esi */
    eax = 1; /* 0x121514B2: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x121514B7: pop ebx */
    esp = ebp; /* 0x121514B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121514BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121514BB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121514D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121514D0u);

L_121514D0:
    edi = edi; /* 0x121514D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121514D2: push ebp */
    ebp = esp; /* 0x121514D3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121514D5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1BC); /* 0x121514D8: mov ecx, dword ptr [eax + 0x1bc] */
    MEM32(eax + 0xDC) = 0; /* 0x121514DE: mov dword ptr [eax + 0xdc], 0 */
    MEM32(eax + 0x94) = 0; /* 0x121514E8: mov dword ptr [eax + 0x94], 0 */
    MEM32(eax + 0x1A4) = 0; /* 0x121514F2: mov dword ptr [eax + 0x1a4], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x121514FC: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 0; /* 0x12151503: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x18) = 0; /* 0x1215150A: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0xA4) = 0; /* 0x12151511: mov dword ptr [ecx + 0xa4], 0 */
    ebp = POP32_VAL(esp); /* 0x1215151B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215151C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12151530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151530u);

L_12151530:
    edi = edi; /* 0x12151530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151532: push ebp */
    ebp = esp; /* 0x12151533: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12151535: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151536: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12151539: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215153C: mov eax, dword ptr [eax] */
    PUSH32(esp, 0xACu); /* 0x1215153E: push 0xac */
    PUSH32(esp, 0); /* 0x12151543: push 0 */
    PUSH32(esp, esi); /* 0x12151545: push esi */
    RECOMP_ICALL(eax); /* 0x12151546: call eax */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12151548: mov edx, eax */
    MEM32(esi + 0x1BC) = edx; /* 0x1215154A: mov dword ptr [esi + 0x1bc], edx */
    MEM32(edx) = 0x121514D0u; /* 0x12151550: mov dword ptr [edx], 0x121514d0 */
    MEM32(edx + 0x4) = 0x12150F30u; /* 0x12151556: mov dword ptr [edx + 4], 0x12150f30 */
    MEM32(edx + 0x8) = 0x12151220u; /* 0x1215155D: mov dword ptr [edx + 8], 0x12151220 */
    MEM32(edx + 0x1C) = 0x12150C90u; /* 0x12151564: mov dword ptr [edx + 0x1c], 0x12150c90 */
    MEM32(edx + 0x60) = 0; /* 0x1215156B: mov dword ptr [edx + 0x60], 0 */
    ecx = edx + 0x64; /* 0x12151572: lea ecx, [edx + 0x64] */
    eax = 0x10u; /* 0x12151575: mov eax, 0x10 */
    ebx = ebx; /* 0x1215157A: lea ebx, [ebx] */
L_12151580:
    MEM32(ecx + (-0x44)) = 0x12150C90u; /* 0x12151580: mov dword ptr [ecx - 0x44], 0x12150c90 */
    MEM32(ecx) = 0; /* 0x12151587: mov dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215158D: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12151590: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12151580; /* 0x12151591: jne 0x12151580 */
L_12151593:
    MEM32(edx + 0x20) = 0x12150B10u; /* 0x12151593: mov dword ptr [edx + 0x20], 0x12150b10 */
    MEM32(edx + 0x58) = 0x12150B10u; /* 0x1215159A: mov dword ptr [edx + 0x58], 0x12150b10 */
    eax = MEM32(esi + 0x1BC); /* 0x121515A1: mov eax, dword ptr [esi + 0x1bc] */
    MEM32(esi + 0xDC) = 0; /* 0x121515A7: mov dword ptr [esi + 0xdc], 0 */
    MEM32(esi + 0x94) = 0; /* 0x121515B1: mov dword ptr [esi + 0x94], 0 */
    MEM32(esi + 0x1A4) = 0; /* 0x121515BB: mov dword ptr [esi + 0x1a4], 0 */
    MEM32(eax + 0xC) = 0; /* 0x121515C5: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x121515CC: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x18) = 0; /* 0x121515D3: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0xA4) = 0; /* 0x121515DA: mov dword ptr [eax + 0xa4], 0 */
    esi = POP32_VAL(esp); /* 0x121515E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121515E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121515E6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121515F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121515F0u);

L_121515F0:
    edi = edi; /* 0x121515F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121515F2: push ebp */
    ebp = esp; /* 0x121515F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121515F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121515F6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x121515F9: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x8); /* 0x121515FB: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x121515FE: push esi */
    RECOMP_ICALL(eax); /* 0x121515FF: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12151601: push esi */
    RECOMP_CALL(sub_12153890); /* 0x12151602: call 0x12153890 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x12151607: push 1 */
    RECOMP_CALL(sub_121BF9CA); /* 0x12151609: call 0x121bf9ca */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1215160Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12151620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151620u);

L_12151620:
    edi = edi; /* 0x12151620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151622: push ebp */
    ebp = esp; /* 0x12151623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x12151625: sub esp, 0xcc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215162B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12151630: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12151632: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x12151635: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12151638: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0xC); /* 0x1215163A: mov eax, dword ptr [eax + 0xc] */
    edx = ebp + (-0xCC); /* 0x1215163D: lea edx, [ebp - 0xcc] */
    PUSH32(esp, edx); /* 0x12151643: push edx */
    PUSH32(esp, ecx); /* 0x12151644: push ecx */
    RECOMP_ICALL(eax); /* 0x12151645: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12151647: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1215164A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x1215164C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12151651: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12151653: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12151654: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12151660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151660u);

L_12151660:
    edi = edi; /* 0x12151660: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151662: push ebp */
    ebp = esp; /* 0x12151663: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12151665: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x12151668: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1215166B: mov eax, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x1215166D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1215168E; /* 0x1215166F: jns 0x1215168e */
L_12151671:
    /* cmp MEM32(eax + 0x6C), 0 */ /* 0x12151671: cmp dword ptr [eax + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12151675: push esi */
    esi = eax + 0x6C; /* 0x12151676: lea esi, [eax + 0x6c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151681; /* 0x12151679: je 0x12151681 */
L_1215167B:
    /* cmp MEM32(eax + 0x68), 3 */ /* 0x1215167B: cmp dword ptr [eax + 0x68], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12151687; /* 0x1215167F: jl 0x12151687 */
L_12151681:
    eax = MEM32(eax + 0x8); /* 0x12151681: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x12151684: push edx */
    RECOMP_ICALL(eax); /* 0x12151685: call eax */
    RECOMP_FLAGS_IN();
L_12151687:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x12151687: inc dword ptr [esi] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x12151689: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215168A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215168B: ret 8 */
L_1215168E:
    /* cmp MEM32(eax + 0x68), ecx */ /* 0x1215168E: cmp dword ptr [eax + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12151699; /* 0x12151691: jl 0x12151699 */
L_12151693:
    eax = MEM32(eax + 0x8); /* 0x12151693: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x12151696: push edx */
    RECOMP_ICALL(eax); /* 0x12151697: call eax */
    RECOMP_FLAGS_IN();
L_12151699:
    ebp = POP32_VAL(esp); /* 0x12151699: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215169A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121516B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121516B0u);

L_121516B0:
    edi = edi; /* 0x121516B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121516B2: push ebp */
    ebp = esp; /* 0x121516B3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x121516B5: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x121516B8: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x6C) = 0; /* 0x121516BA: mov dword ptr [eax + 0x6c], 0 */
    eax = MEM32(ecx); /* 0x121516C1: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0; /* 0x121516C3: mov dword ptr [eax + 0x14], 0 */
    ebp = POP32_VAL(esp); /* 0x121516CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121516CB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121516E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121516E0u);

L_121516E0:
    edi = edi; /* 0x121516E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121516E2: push ebp */
    ebp = esp; /* 0x121516E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121516E5: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x121516E8: mov edx, dword ptr [eax] */
    ecx = MEM32(edx + 0x14); /* 0x121516EA: mov ecx, dword ptr [edx + 0x14] */
    PUSH32(esp, esi); /* 0x121516ED: push esi */
    /* test ecx, ecx */ /* 0x121516EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121516FF; /* 0x121516F0: jle 0x121516ff */
L_121516F2:
    /* cmp ecx, MEM32(edx + 0x74) */ /* 0x121516F2: cmp ecx, dword ptr [edx + 0x74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121516FF; /* 0x121516F5: jg 0x121516ff */
L_121516F7:
    eax = MEM32(edx + 0x70); /* 0x121516F7: mov eax, dword ptr [edx + 0x70] */
    esi = MEM32(eax + ecx * 4); /* 0x121516FA: mov esi, dword ptr [eax + ecx*4] */
    goto L_1215171B; /* 0x121516FD: jmp 0x1215171b */
L_121516FF:
    esi = MEM32(edx + 0x78); /* 0x121516FF: mov esi, dword ptr [edx + 0x78] */
    /* test esi, esi */ /* 0x12151702: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215171F; /* 0x12151704: je 0x1215171f */
L_12151706:
    /* cmp ecx, MEM32(edx + 0x7C) */ /* 0x12151706: cmp ecx, dword ptr [edx + 0x7c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x7C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215171F; /* 0x12151709: jl 0x1215171f */
L_1215170B:
    /* cmp ecx, MEM32(edx + 0x80) */ /* 0x1215170B: cmp ecx, dword ptr [edx + 0x80] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1215171F; /* 0x12151711: jg 0x1215171f */
L_12151713:
    eax = ecx; /* 0x12151713: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x7C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x7C); /* 0x12151715: sub eax, dword ptr [edx + 0x7c] */
    _flag_k = FK_CMP;
    esi = MEM32(esi + eax * 4); /* 0x12151718: mov esi, dword ptr [esi + eax*4] */
L_1215171B:
    /* test esi, esi */ /* 0x1215171B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151727; /* 0x1215171D: jne 0x12151727 */
L_1215171F:
    eax = MEM32(edx + 0x70); /* 0x1215171F: mov eax, dword ptr [edx + 0x70] */
    MEM32(edx + 0x18) = ecx; /* 0x12151722: mov dword ptr [edx + 0x18], ecx */
    esi = MEM32(eax); /* 0x12151725: mov esi, dword ptr [eax] */
L_12151727:
    SET_LO8(ecx, MEM8(esi)); /* 0x12151727: mov cl, byte ptr [esi] */
    eax = esi; /* 0x12151729: mov eax, esi */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1215172B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215173C; /* 0x1215172D: je 0x1215173c */
L_1215172F:
    /* nop */ /* 0x1215172F: nop  */
L_12151730:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12151730: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x25u */ /* 0x12151731: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215176A; /* 0x12151734: je 0x1215176a */
L_12151736:
    SET_LO8(ecx, MEM8(eax)); /* 0x12151736: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x12151738: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151730; /* 0x1215173A: jne 0x12151730 */
L_1215173C:
    PUSH32(esp, MEM32(edx + 0x34)); /* 0x1215173C: push dword ptr [edx + 0x34] */
    PUSH32(esp, MEM32(edx + 0x30)); /* 0x1215173F: push dword ptr [edx + 0x30] */
    PUSH32(esp, MEM32(edx + 0x2C)); /* 0x12151742: push dword ptr [edx + 0x2c] */
    PUSH32(esp, MEM32(edx + 0x28)); /* 0x12151745: push dword ptr [edx + 0x28] */
    PUSH32(esp, MEM32(edx + 0x24)); /* 0x12151748: push dword ptr [edx + 0x24] */
    PUSH32(esp, MEM32(edx + 0x20)); /* 0x1215174B: push dword ptr [edx + 0x20] */
    PUSH32(esp, MEM32(edx + 0x1C)); /* 0x1215174E: push dword ptr [edx + 0x1c] */
    PUSH32(esp, MEM32(edx + 0x18)); /* 0x12151751: push dword ptr [edx + 0x18] */
    PUSH32(esp, esi); /* 0x12151754: push esi */
    PUSH32(esp, 0xC8u); /* 0x12151755: push 0xc8 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215175A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_12050FC5); /* 0x1215175D: call 0x12050fc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x12151762: add esp, 0x2c */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x12151765: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151766: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151767: ret 8 */
L_1215176A:
    /* cmp MEM8(eax), 0x73u */ /* 0x1215176A: cmp byte ptr [eax], 0x73 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x73u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215173C; /* 0x1215176D: jne 0x1215173c */
L_1215176F:
    eax = edx + 0x18; /* 0x1215176F: lea eax, [edx + 0x18] */
    PUSH32(esp, eax); /* 0x12151772: push eax */
    PUSH32(esp, esi); /* 0x12151773: push esi */
    PUSH32(esp, 0xC8u); /* 0x12151774: push 0xc8 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12151779: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_12050FC5); /* 0x1215177C: call 0x12050fc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12151781: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x12151784: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151785: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151786: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12151790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151790u);

L_12151790:
    edi = edi; /* 0x12151790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151792: push ebp */
    ebp = esp; /* 0x12151793: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12151795: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x121515F0u; /* 0x12151798: mov dword ptr [eax], 0x121515f0 */
    MEM32(eax + 0x4) = 0x12151660u; /* 0x1215179E: mov dword ptr [eax + 4], 0x12151660 */
    MEM32(eax + 0x8) = 0x12151620u; /* 0x121517A5: mov dword ptr [eax + 8], 0x12151620 */
    MEM32(eax + 0xC) = 0x121516E0u; /* 0x121517AC: mov dword ptr [eax + 0xc], 0x121516e0 */
    MEM32(eax + 0x10) = 0x121516B0u; /* 0x121517B3: mov dword ptr [eax + 0x10], 0x121516b0 */
    MEM32(eax + 0x68) = 0; /* 0x121517BA: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x6C) = 0; /* 0x121517C1: mov dword ptr [eax + 0x6c], 0 */
    MEM32(eax + 0x14) = 0; /* 0x121517C8: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x70) = 0x120129B0u; /* 0x121517CF: mov dword ptr [eax + 0x70], 0x120129b0 */
    MEM32(eax + 0x74) = 0x7Bu; /* 0x121517D6: mov dword ptr [eax + 0x74], 0x7b */
    MEM32(eax + 0x78) = 0; /* 0x121517DD: mov dword ptr [eax + 0x78], 0 */
    MEM32(eax + 0x7C) = 0; /* 0x121517E4: mov dword ptr [eax + 0x7c], 0 */
    MEM32(eax + 0x80) = 0; /* 0x121517EB: mov dword ptr [eax + 0x80], 0 */
    ebp = POP32_VAL(esp); /* 0x121517F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121517F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12151800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151800u);

L_12151800:
    edi = edi; /* 0x12151800: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151802: push ebp */
    ebp = esp; /* 0x12151803: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12151805: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12151808: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12151809: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1215180C: push esi */
    PUSH32(esp, edi); /* 0x1215180D: push edi */
    MEM32(ebx + 0x4) = 0; /* 0x1215180E: mov dword ptr [ebx + 4], 0 */
    /* cmp ecx, 0x3Eu */ /* 0x12151815: cmp ecx, 0x3e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151838; /* 0x12151818: je 0x12151838 */
L_1215181A:
    eax = MEM32(ebx); /* 0x1215181A: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xCu; /* 0x1215181C: mov dword ptr [eax + 0x14], 0xc */
    eax = MEM32(ebx); /* 0x12151823: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = 0x3Eu; /* 0x12151825: mov dword ptr [eax + 0x18], 0x3e */
    eax = MEM32(ebx); /* 0x1215182C: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x1C) = ecx; /* 0x1215182E: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(ebx); /* 0x12151831: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12151833: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12151835: push ebx */
    RECOMP_ICALL(eax); /* 0x12151836: call eax */
    RECOMP_FLAGS_IN();
L_12151838:
    ecx = MEM32(ebp + 0x10); /* 0x12151838: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 0x180u */ /* 0x1215183B: cmp ecx, 0x180 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x180u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151861; /* 0x12151841: je 0x12151861 */
L_12151843:
    eax = MEM32(ebx); /* 0x12151843: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x15u; /* 0x12151845: mov dword ptr [eax + 0x14], 0x15 */
    eax = MEM32(ebx); /* 0x1215184C: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = 0x180u; /* 0x1215184E: mov dword ptr [eax + 0x18], 0x180 */
    eax = MEM32(ebx); /* 0x12151855: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x1C) = ecx; /* 0x12151857: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(ebx); /* 0x1215185A: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1215185C: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215185E: push ebx */
    RECOMP_ICALL(eax); /* 0x1215185F: call eax */
    RECOMP_FLAGS_IN();
L_12151861:
    edi = MEM32(ebx); /* 0x12151861: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0xC); /* 0x12151863: mov esi, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0x180u); /* 0x12151866: push 0x180 */
    PUSH32(esp, 0); /* 0x1215186B: push 0 */
    PUSH32(esp, ebx); /* 0x1215186D: push ebx */
    RECOMP_CALL(sub_121BF434); /* 0x1215186E: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12151873: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x12151876: push ebx */
    MEM32(ebx) = edi; /* 0x12151877: mov dword ptr [ebx], edi */
    MEM32(ebx + 0xC) = esi; /* 0x12151879: mov dword ptr [ebx + 0xc], esi */
    MEM32(ebx + 0x10) = 0; /* 0x1215187C: mov dword ptr [ebx + 0x10], 0 */
    RECOMP_CALL(sub_12153760); /* 0x12151883: call 0x12153760 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x12151888: fld1  */
    MEM32(ebx + 0x8) = 0; /* 0x1215188A: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0x18) = 0; /* 0x12151891: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0x44) = 0; /* 0x12151898: mov dword ptr [ebx + 0x44], 0 */
    MEM32(ebx + 0x48) = 0; /* 0x1215189F: mov dword ptr [ebx + 0x48], 0 */
    MEM32(ebx + 0x4C) = 0; /* 0x121518A6: mov dword ptr [ebx + 0x4c], 0 */
    MEM32(ebx + 0x50) = 0; /* 0x121518AD: mov dword ptr [ebx + 0x50], 0 */
    MEM32(ebx + 0x54) = 0; /* 0x121518B4: mov dword ptr [ebx + 0x54], 0 */
    MEM32(ebx + 0x58) = 0; /* 0x121518BB: mov dword ptr [ebx + 0x58], 0 */
    MEM32(ebx + 0x68) = 0; /* 0x121518C2: mov dword ptr [ebx + 0x68], 0 */
    MEM32(ebx + 0x5C) = 0; /* 0x121518C9: mov dword ptr [ebx + 0x5c], 0 */
    MEM32(ebx + 0x6C) = 0; /* 0x121518D0: mov dword ptr [ebx + 0x6c], 0 */
    MEM32(ebx + 0x60) = 0; /* 0x121518D7: mov dword ptr [ebx + 0x60], 0 */
    MEM32(ebx + 0x70) = 0; /* 0x121518DE: mov dword ptr [ebx + 0x70], 0 */
    MEM32(ebx + 0x64) = 0; /* 0x121518E5: mov dword ptr [ebx + 0x64], 0 */
    MEM32(ebx + 0x74) = 0; /* 0x121518EC: mov dword ptr [ebx + 0x74], 0 */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x30) = _v; } /* 0x121518F3: fstp qword ptr [ebx + 0x30] */
    edi = POP32_VAL(esp); /* 0x121518F6: pop edi */
    esi = POP32_VAL(esp); /* 0x121518F7: pop esi */
    MEM32(ebx + 0x178) = 0; /* 0x121518F8: mov dword ptr [ebx + 0x178], 0 */
    MEM32(ebx + 0x14) = 0x64u; /* 0x12151902: mov dword ptr [ebx + 0x14], 0x64 */
    ebx = POP32_VAL(esp); /* 0x12151909: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1215190A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1215190B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12151920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151920u);

L_12151920:
    edi = edi; /* 0x12151920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151922: push ebp */
    ebp = esp; /* 0x12151923: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x12151925: pop ebp */
    goto L_12153890; /* 0x12151926: jmp 0x12153890 */
L_12153890:
    edi = edi; /* 0x12153890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153892: push ebp */
    ebp = esp; /* 0x12153893: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12153895: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12153896: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12153899: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1215389C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121538A6; /* 0x1215389E: je 0x121538a6 */
L_121538A0:
    eax = MEM32(eax + 0x28); /* 0x121538A0: mov eax, dword ptr [eax + 0x28] */
    PUSH32(esp, esi); /* 0x121538A3: push esi */
    RECOMP_ICALL(eax); /* 0x121538A4: call eax */
    RECOMP_FLAGS_IN();
L_121538A6:
    MEM32(esi + 0x14) = 0; /* 0x121538A6: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x4) = 0; /* 0x121538AD: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x121538B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121538B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121538B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12151930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151930u);

L_12151930:
    edi = edi; /* 0x12151930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151932: push ebp */
    ebp = esp; /* 0x12151933: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12151935: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x48); /* 0x12151938: mov ecx, dword ptr [eax + 0x48] */
    edx = MEM32(ebp + 0xC); /* 0x1215193B: mov edx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1215193E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151948; /* 0x12151940: je 0x12151948 */
L_12151942:
    MEM32(ecx + 0x80) = edx; /* 0x12151942: mov dword ptr [ecx + 0x80], edx */
L_12151948:
    ecx = MEM32(eax + 0x4C); /* 0x12151948: mov ecx, dword ptr [eax + 0x4c] */
    /* test ecx, ecx */ /* 0x1215194B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151955; /* 0x1215194D: je 0x12151955 */
L_1215194F:
    MEM32(ecx + 0x80) = edx; /* 0x1215194F: mov dword ptr [ecx + 0x80], edx */
L_12151955:
    ecx = MEM32(eax + 0x50); /* 0x12151955: mov ecx, dword ptr [eax + 0x50] */
    /* test ecx, ecx */ /* 0x12151958: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151962; /* 0x1215195A: je 0x12151962 */
L_1215195C:
    MEM32(ecx + 0x80) = edx; /* 0x1215195C: mov dword ptr [ecx + 0x80], edx */
L_12151962:
    ecx = MEM32(eax + 0x54); /* 0x12151962: mov ecx, dword ptr [eax + 0x54] */
    /* test ecx, ecx */ /* 0x12151965: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215196F; /* 0x12151967: je 0x1215196f */
L_12151969:
    MEM32(ecx + 0x80) = edx; /* 0x12151969: mov dword ptr [ecx + 0x80], edx */
L_1215196F:
    PUSH32(esp, esi); /* 0x1215196F: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x68u; /* 0x12151970: add eax, 0x68 */
    _flag_k = FK_ADD;
    esi = 4; /* 0x12151973: mov esi, 4 */
L_12151978:
    ecx = MEM32(eax + (-0x10)); /* 0x12151978: mov ecx, dword ptr [eax - 0x10] */
    /* test ecx, ecx */ /* 0x1215197B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151985; /* 0x1215197D: je 0x12151985 */
L_1215197F:
    MEM32(ecx + 0x114) = edx; /* 0x1215197F: mov dword ptr [ecx + 0x114], edx */
L_12151985:
    ecx = MEM32(eax); /* 0x12151985: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x12151987: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151991; /* 0x12151989: je 0x12151991 */
L_1215198B:
    MEM32(ecx + 0x114) = edx; /* 0x1215198B: mov dword ptr [ecx + 0x114], edx */
L_12151991:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12151991: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12151994: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12151978; /* 0x12151995: jne 0x12151978 */
L_12151997:
    esi = POP32_VAL(esp); /* 0x12151997: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151998: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151999: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121519B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121519B0u);

L_121519B0:
    edi = edi; /* 0x121519B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121519B2: push ebp */
    ebp = esp; /* 0x121519B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121519B5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121519B6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x121519B9: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0x65u */ /* 0x121519BC: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121519E2; /* 0x121519BF: je 0x121519e2 */
L_121519C1:
    /* cmp eax, 0x66u */ /* 0x121519C1: cmp eax, 0x66 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121519E2; /* 0x121519C4: je 0x121519e2 */
L_121519C6:
    /* cmp eax, 0x67u */ /* 0x121519C6: cmp eax, 0x67 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151A09; /* 0x121519C9: je 0x12151a09 */
L_121519CB:
    eax = MEM32(esi); /* 0x121519CB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x121519CD: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x121519D4: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x121519D7: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121519D9: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121519DC: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121519DE: mov eax, dword ptr [eax] */
    goto L_12151A06; /* 0x121519E0: jmp 0x12151a06 */
L_121519E2:
    eax = MEM32(esi + 0xE8); /* 0x121519E2: mov eax, dword ptr [esi + 0xe8] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x121519E8: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121519FD; /* 0x121519EB: jae 0x121519fd */
L_121519ED:
    eax = MEM32(esi); /* 0x121519ED: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x43u; /* 0x121519EF: mov dword ptr [eax + 0x14], 0x43 */
    eax = MEM32(esi); /* 0x121519F6: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121519F8: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121519FA: push esi */
    RECOMP_ICALL(eax); /* 0x121519FB: call eax */
    RECOMP_FLAGS_IN();
L_121519FD:
    eax = MEM32(esi + 0x154); /* 0x121519FD: mov eax, dword ptr [esi + 0x154] */
    eax = MEM32(eax + 0x8); /* 0x12151A03: mov eax, dword ptr [eax + 8] */
L_12151A06:
    PUSH32(esp, esi); /* 0x12151A06: push esi */
    RECOMP_ICALL(eax); /* 0x12151A07: call eax */
    RECOMP_FLAGS_IN();
L_12151A09:
    eax = MEM32(esi + 0x154); /* 0x12151A09: mov eax, dword ptr [esi + 0x154] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x12151A0F: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12151A89; /* 0x12151A13: jne 0x12151a89 */
L_12151A15:
    PUSH32(esp, edi); /* 0x12151A15: push edi */
L_12151A16:
    eax = MEM32(eax); /* 0x12151A16: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151A18: push esi */
    RECOMP_ICALL(eax); /* 0x12151A19: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12151A1B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xF8), edi */ /* 0x12151A1D: cmp dword ptr [esi + 0xf8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xF8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12151A70; /* 0x12151A23: jbe 0x12151a70 */
L_12151A25:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x12151A25: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151A45; /* 0x12151A29: je 0x12151a45 */
L_12151A2B:
    eax = MEM32(esi + 0x8); /* 0x12151A2B: mov eax, dword ptr [esi + 8] */
    MEM32(eax + 0x4) = edi; /* 0x12151A2E: mov dword ptr [eax + 4], edi */
    eax = MEM32(esi + 0xF8); /* 0x12151A31: mov eax, dword ptr [esi + 0xf8] */
    ecx = MEM32(esi + 0x8); /* 0x12151A37: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12151A3A: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x8); /* 0x12151A3D: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x12151A40: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151A42: push esi */
    RECOMP_ICALL(eax); /* 0x12151A43: call eax */
    RECOMP_FLAGS_IN();
L_12151A45:
    eax = MEM32(esi + 0x160); /* 0x12151A45: mov eax, dword ptr [esi + 0x160] */
    eax = MEM32(eax + 0x4); /* 0x12151A4B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0); /* 0x12151A4E: push 0 */
    PUSH32(esp, esi); /* 0x12151A50: push esi */
    RECOMP_ICALL(eax); /* 0x12151A51: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12151A53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12151A67; /* 0x12151A55: jne 0x12151a67 */
L_12151A57:
    eax = MEM32(esi); /* 0x12151A57: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12151A59: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12151A60: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151A62: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151A64: push esi */
    RECOMP_ICALL(eax); /* 0x12151A65: call eax */
    RECOMP_FLAGS_IN();
L_12151A67:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12151A67: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0xF8) */ /* 0x12151A68: cmp edi, dword ptr [esi + 0xf8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xF8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12151A25; /* 0x12151A6E: jb 0x12151a25 */
L_12151A70:
    eax = MEM32(esi + 0x154); /* 0x12151A70: mov eax, dword ptr [esi + 0x154] */
    eax = MEM32(eax + 0x8); /* 0x12151A76: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12151A79: push esi */
    RECOMP_ICALL(eax); /* 0x12151A7A: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x154); /* 0x12151A7C: mov eax, dword ptr [esi + 0x154] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x12151A82: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151A16; /* 0x12151A86: je 0x12151a16 */
L_12151A88:
    edi = POP32_VAL(esp); /* 0x12151A88: pop edi */
L_12151A89:
    eax = MEM32(esi + 0x164); /* 0x12151A89: mov eax, dword ptr [esi + 0x164] */
    eax = MEM32(eax + 0xC); /* 0x12151A8F: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x12151A92: push esi */
    RECOMP_ICALL(eax); /* 0x12151A93: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x12151A95: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x10); /* 0x12151A98: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x12151A9B: push esi */
    RECOMP_ICALL(eax); /* 0x12151A9C: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12151A9E: push esi */
    RECOMP_CALL(sub_12153840); /* 0x12151A9F: call 0x12153840 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12151AA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151AA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12151AA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12151AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151AB0u);

L_12151AB0:
    edi = edi; /* 0x12151AB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151AB2: push ebp */
    ebp = esp; /* 0x12151AB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12151AB5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151AB6: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x64u */ /* 0x12151AB9: cmp dword ptr [esi + 0x14], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151AD7; /* 0x12151ABD: je 0x12151ad7 */
L_12151ABF:
    eax = MEM32(esi); /* 0x12151ABF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x12151AC1: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x12151AC8: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x12151ACB: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12151ACD: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151AD0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151AD2: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151AD4: push esi */
    RECOMP_ICALL(eax); /* 0x12151AD5: call eax */
    RECOMP_FLAGS_IN();
L_12151AD7:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12151AD7: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151AE5; /* 0x12151ADB: je 0x12151ae5 */
L_12151ADD:
    PUSH32(esp, 0); /* 0x12151ADD: push 0 */
    PUSH32(esp, esi); /* 0x12151ADF: push esi */
    RECOMP_CALL(sub_12151930); /* 0x12151AE0: call 0x12151930 */
    RECOMP_FLAGS_IN();
L_12151AE5:
    eax = MEM32(esi); /* 0x12151AE5: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x12151AE7: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x12151AEA: push esi */
    RECOMP_ICALL(eax); /* 0x12151AEB: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x12151AED: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x8); /* 0x12151AF0: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12151AF3: push esi */
    RECOMP_ICALL(eax); /* 0x12151AF4: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12151AF6: push esi */
    RECOMP_CALL(sub_12155470); /* 0x12151AF7: call 0x12155470 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x154); /* 0x12151AFC: mov eax, dword ptr [esi + 0x154] */
    eax = MEM32(eax); /* 0x12151B02: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151B04: push esi */
    RECOMP_ICALL(eax); /* 0x12151B05: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12151B07: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xB0), eax */ /* 0x12151B09: cmp dword ptr [esi + 0xb0], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xE8) = 0; /* 0x12151B0F: mov dword ptr [esi + 0xe8], 0 */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12151B19: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x65u; /* 0x12151B1C: add eax, 0x65 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x12151B1F: mov dword ptr [esi + 0x14], eax */
    esi = POP32_VAL(esp); /* 0x12151B22: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151B23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151B24: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12151B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151B30u);

L_12151B30:
    edi = edi; /* 0x12151B30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151B32: push ebp */
    ebp = esp; /* 0x12151B33: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12151B35: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151B36: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x65u */ /* 0x12151B39: cmp dword ptr [esi + 0x14], 0x65 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12151B3D: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151B58; /* 0x12151B3E: je 0x12151b58 */
L_12151B40:
    eax = MEM32(esi); /* 0x12151B40: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x12151B42: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x12151B49: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x12151B4C: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12151B4E: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151B51: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151B53: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151B55: push esi */
    RECOMP_ICALL(eax); /* 0x12151B56: call eax */
    RECOMP_FLAGS_IN();
L_12151B58:
    eax = MEM32(esi + 0xE8); /* 0x12151B58: mov eax, dword ptr [esi + 0xe8] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x12151B5E: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12151B76; /* 0x12151B61: jb 0x12151b76 */
L_12151B63:
    eax = MEM32(esi); /* 0x12151B63: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x7Bu; /* 0x12151B65: mov dword ptr [eax + 0x14], 0x7b */
    eax = MEM32(esi); /* 0x12151B6C: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x12151B6E: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12151B71: push -1 */
    PUSH32(esp, esi); /* 0x12151B73: push esi */
    RECOMP_ICALL(eax); /* 0x12151B74: call eax */
    RECOMP_FLAGS_IN();
L_12151B76:
    ecx = MEM32(esi + 0x8); /* 0x12151B76: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x12151B79: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12151B97; /* 0x12151B7B: je 0x12151b97 */
L_12151B7D:
    eax = MEM32(esi + 0xE8); /* 0x12151B7D: mov eax, dword ptr [esi + 0xe8] */
    MEM32(ecx + 0x4) = eax; /* 0x12151B83: mov dword ptr [ecx + 4], eax */
    eax = MEM32(esi + 0x20); /* 0x12151B86: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(esi + 0x8); /* 0x12151B89: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12151B8C: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x8); /* 0x12151B8F: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x12151B92: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151B94: push esi */
    RECOMP_ICALL(eax); /* 0x12151B95: call eax */
    RECOMP_FLAGS_IN();
L_12151B97:
    eax = MEM32(esi + 0x154); /* 0x12151B97: mov eax, dword ptr [esi + 0x154] */
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x12151B9D: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151BA9; /* 0x12151BA1: je 0x12151ba9 */
L_12151BA3:
    eax = MEM32(eax + 0x4); /* 0x12151BA3: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x12151BA6: push esi */
    RECOMP_ICALL(eax); /* 0x12151BA7: call eax */
    RECOMP_FLAGS_IN();
L_12151BA9:
    eax = MEM32(esi + 0x20); /* 0x12151BA9: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xE8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0xE8); /* 0x12151BAC: sub eax, dword ptr [esi + 0xe8] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x12151BB2: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x12151BB5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12151BBB; /* 0x12151BB7: jbe 0x12151bbb */
L_12151BB9:
    ecx = eax; /* 0x12151BB9: mov ecx, eax */
L_12151BBB:
    eax = MEM32(esi + 0x158); /* 0x12151BBB: mov eax, dword ptr [esi + 0x158] */
    PUSH32(esp, ecx); /* 0x12151BC1: push ecx */
    ecx = ebp + 0x8; /* 0x12151BC2: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12151BC5: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12151BC6: push dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = 0; /* 0x12151BC9: mov dword ptr [ebp + 8], 0 */
    eax = MEM32(eax + 0x4); /* 0x12151BD0: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x12151BD3: push esi */
    RECOMP_ICALL(eax); /* 0x12151BD4: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12151BD6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0xE8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xE8) = MEM32(esi + 0xE8) + eax; /* 0x12151BD9: add dword ptr [esi + 0xe8], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x12151BDF: pop edi */
    esi = POP32_VAL(esp); /* 0x12151BE0: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151BE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12151BE2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12151BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151BF0u);

L_12151BF0:
    edi = edi; /* 0x12151BF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151BF2: push ebp */
    ebp = esp; /* 0x12151BF3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12151BF5: push ebx */
    PUSH32(esp, esi); /* 0x12151BF6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151BF7: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x64u */ /* 0x12151BFA: cmp dword ptr [esi + 0x14], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12151BFE: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151C19; /* 0x12151BFF: je 0x12151c19 */
L_12151C01:
    eax = MEM32(esi); /* 0x12151C01: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x12151C03: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x12151C0A: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x12151C0D: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12151C0F: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151C12: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151C14: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151C16: push esi */
    RECOMP_ICALL(eax); /* 0x12151C17: call eax */
    RECOMP_FLAGS_IN();
L_12151C19:
    ebx = MEM32(ebp + 0xC); /* 0x12151C19: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x12151C1C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12151C25; /* 0x12151C1E: js 0x12151c25 */
L_12151C20:
    /* cmp ebx, 4 */ /* 0x12151C20: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12151C3A; /* 0x12151C23: jl 0x12151c3a */
L_12151C25:
    eax = MEM32(esi); /* 0x12151C25: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Fu; /* 0x12151C27: mov dword ptr [eax + 0x14], 0x1f */
    eax = MEM32(esi); /* 0x12151C2E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12151C30: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12151C33: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151C35: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151C37: push esi */
    RECOMP_ICALL(eax); /* 0x12151C38: call eax */
    RECOMP_FLAGS_IN();
L_12151C3A:
    /* cmp MEM32(esi + ebx * 4 + 0x48), 0 */ /* 0x12151C3A: cmp dword ptr [esi + ebx*4 + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + ebx * 4 + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12151C4B; /* 0x12151C3F: jne 0x12151c4b */
L_12151C41:
    PUSH32(esp, esi); /* 0x12151C41: push esi */
    RECOMP_CALL(sub_121538C0); /* 0x12151C42: call 0x121538c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + ebx * 4 + 0x48) = eax; /* 0x12151C47: mov dword ptr [esi + ebx*4 + 0x48], eax */
L_12151C4B:
    eax = MEM32(ebp + 0x10); /* 0x12151C4B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12151C4E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12151C50:
    ecx = MEM32(eax); /* 0x12151C50: mov ecx, dword ptr [eax] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x14)); /* 0x12151C52: imul ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x32u; /* 0x12151C56: add ecx, 0x32 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x12151C59: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x12151C5E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x12151C60: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edx; /* 0x12151C63: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x12151C65: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x12151C65: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x12151C68: add ecx, edx */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x12151C6A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12151C75; /* 0x12151C6C: jg 0x12151c75 */
L_12151C6E:
    ecx = 1; /* 0x12151C6E: mov ecx, 1 */
    goto L_12151C82; /* 0x12151C73: jmp 0x12151c82 */
L_12151C75:
    /* cmp ecx, 0x7FFFu */ /* 0x12151C75: cmp ecx, 0x7fff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12151C82; /* 0x12151C7B: jle 0x12151c82 */
L_12151C7D:
    ecx = 0x7FFFu; /* 0x12151C7D: mov ecx, 0x7fff */
L_12151C82:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x12151C82: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151C95; /* 0x12151C86: je 0x12151c95 */
L_12151C88:
    /* cmp ecx, 0xFFu */ /* 0x12151C88: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12151C95; /* 0x12151C8E: jle 0x12151c95 */
L_12151C90:
    ecx = 0xFFu; /* 0x12151C90: mov ecx, 0xff */
L_12151C95:
    eax = MEM32(esi + ebx * 4 + 0x48); /* 0x12151C95: mov eax, dword ptr [esi + ebx*4 + 0x48] */
    MEM16(edi + eax) = (uint16_t)(LO16(ecx)); /* 0x12151C99: mov word ptr [edi + eax], cx */
    eax = MEM32(ebp + 0x10); /* 0x12151C9D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12151CA0: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x12151CA3: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x12151CA6: mov dword ptr [ebp + 0x10], eax */
    /* cmp edi, 0x80u */ /* 0x12151CA9: cmp edi, 0x80 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12151C50; /* 0x12151CAF: jl 0x12151c50 */
L_12151CB1:
    eax = MEM32(esi + ebx * 4 + 0x48); /* 0x12151CB1: mov eax, dword ptr [esi + ebx*4 + 0x48] */
    edi = POP32_VAL(esp); /* 0x12151CB5: pop edi */
    esi = POP32_VAL(esp); /* 0x12151CB6: pop esi */
    MEM32(eax + 0x80) = 0; /* 0x12151CB7: mov dword ptr [eax + 0x80], 0 */
    ebx = POP32_VAL(esp); /* 0x12151CC1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12151CC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12151CC3: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12151CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151CD0u);

L_12151CD0:
    edi = edi; /* 0x12151CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151CD2: push ebp */
    ebp = esp; /* 0x12151CD3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12151CD5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12151CD8: push ebx */
    /* test ecx, ecx */ /* 0x12151CD9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12151CEE; /* 0x12151CDB: jg 0x12151cee */
L_12151CDD:
    eax = 0x1388u; /* 0x12151CDD: mov eax, 0x1388 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x12151CE2: cdq  */
    ecx = 1; /* 0x12151CE3: mov ecx, 1 */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x12151CE8: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x12151CEA: mov ebx, eax */
    goto L_12151D01; /* 0x12151CEC: jmp 0x12151d01 */
L_12151CEE:
    /* cmp ecx, 0x64u */ /* 0x12151CEE: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12151D2C; /* 0x12151CF1: jle 0x12151d2c */
L_12151CF3:
    ecx = 0x64u; /* 0x12151CF3: mov ecx, 0x64 */
L_12151CF8:
    ebx = 0x64u; /* 0x12151CF8: mov ebx, 0x64 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12151CFD: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x12151CFF: add ebx, ebx */
    _flag_k = FK_ADD;
L_12151D01:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12151D01: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12151D04: push ebx */
    PUSH32(esp, 0x12012CA8u); /* 0x12151D05: push 0x12012ca8 */
    PUSH32(esp, 0); /* 0x12151D0A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12151D0C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12151BF0); /* 0x12151D0F: call 0x12151bf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12151D14: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12151D17: push ebx */
    PUSH32(esp, 0x12012BA8u); /* 0x12151D18: push 0x12012ba8 */
    PUSH32(esp, 1); /* 0x12151D1D: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12151D1F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12151BF0); /* 0x12151D22: call 0x12151bf0 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12151D27: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12151D28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12151D29: ret 0xc */
L_12151D2C:
    /* cmp ecx, 0x32u */ /* 0x12151D2C: cmp ecx, 0x32 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_12151CF8; /* 0x12151D2F: jge 0x12151cf8 */
L_12151D31:
    eax = 0x1388u; /* 0x12151D31: mov eax, 0x1388 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x12151D36: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x12151D37: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x12151D39: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_12151D01; /* 0x12151D3B: jmp 0x12151d01 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12151D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151D50u);

L_12151D50:
    edi = edi; /* 0x12151D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151D52: push ebp */
    ebp = esp; /* 0x12151D53: mov ebp, esp */
    /* cmp MEM32(ebx), 0 */ /* 0x12151D55: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12151D58: push esi */
    PUSH32(esp, edi); /* 0x12151D59: push edi */
    edi = eax; /* 0x12151D5A: mov edi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12151D68; /* 0x12151D5C: jne 0x12151d68 */
L_12151D5E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12151D5E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121538F0); /* 0x12151D61: call 0x121538f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x12151D66: mov dword ptr [ebx], eax */
L_12151D68:
    eax = MEM32(edi); /* 0x12151D68: mov eax, dword ptr [edi] */
    ecx = MEM32(ebx); /* 0x12151D6A: mov ecx, dword ptr [ebx] */
    MEM32(ecx) = eax; /* 0x12151D6C: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x4); /* 0x12151D6E: mov eax, dword ptr [edi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x12151D71: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edi + 0x8); /* 0x12151D74: mov eax, dword ptr [edi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12151D77: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edi + 0xC); /* 0x12151D7A: mov eax, dword ptr [edi + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x12151D7D: mov dword ptr [ecx + 0xc], eax */
    SET_LO8(eax, MEM8(edi + 0x10)); /* 0x12151D80: mov al, byte ptr [edi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12151D83: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + 0x10) = (uint8_t)(LO8(eax)); /* 0x12151D85: mov byte ptr [ecx + 0x10], al */
    ecx = edi + 0x2; /* 0x12151D88: lea ecx, [edi + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12151D8B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x8; /* 0x12151D8D: lea edi, [esi + 8] */
L_12151D90:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x12151D90: movzx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12151D94: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx); /* 0x12151D96: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12151D99: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12151D9B: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12151D9E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12151D90; /* 0x12151D9F: jne 0x12151d90 */
L_12151DA1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x12151DA1: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x12151DA3: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12151DB0; /* 0x12151DA6: jl 0x12151db0 */
L_12151DA8:
    /* cmp esi, 0x100u */ /* 0x12151DA8: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12151DC3; /* 0x12151DAE: jle 0x12151dc3 */
L_12151DB0:
    ecx = MEM32(ebp + 0x8); /* 0x12151DB0: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12151DB3: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 8; /* 0x12151DB5: mov dword ptr [eax + 0x14], 8 */
    eax = MEM32(ecx); /* 0x12151DBC: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12151DBE: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12151DC0: push ecx */
    RECOMP_ICALL(eax); /* 0x12151DC1: call eax */
    RECOMP_FLAGS_IN();
L_12151DC3:
    eax = MEM32(ebx); /* 0x12151DC3: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x12151DC5: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12151DC6: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11u; /* 0x12151DC9: add eax, 0x11 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12151DCC: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x12151DCD: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x12151DD2: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12151DD4: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x12151DD7: pop edi */
    MEM32(eax + 0x114) = 0; /* 0x12151DD8: mov dword ptr [eax + 0x114], 0 */
    esi = POP32_VAL(esp); /* 0x12151DE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151DE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151DE4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12151DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12151DF0u);

L_12151DF0:
    edi = edi; /* 0x12151DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12151DF2: push ebp */
    ebp = esp; /* 0x12151DF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12151DF5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12151DF6: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x64u */ /* 0x12151DF9: cmp dword ptr [esi + 0x14], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12151E17; /* 0x12151DFD: je 0x12151e17 */
L_12151DFF:
    eax = MEM32(esi); /* 0x12151DFF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x12151E01: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x12151E08: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x12151E0B: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12151E0D: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12151E10: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12151E12: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12151E14: push esi */
    RECOMP_ICALL(eax); /* 0x12151E15: call eax */
    RECOMP_FLAGS_IN();
L_12151E17:
    eax = MEM32(ebp + 0xC); /* 0x12151E17: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x40) = eax; /* 0x12151E1A: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0xD0) = 0; /* 0x12151E1D: mov dword ptr [esi + 0xd0], 0 */
    MEM32(esi + 0xDC) = 0; /* 0x12151E27: mov dword ptr [esi + 0xdc], 0 */
    MEM32(esi + 0xE0) = 1; /* 0x12151E31: mov dword ptr [esi + 0xe0], 1 */
    MEM32(esi + 0xE4) = 1; /* 0x12151E3B: mov dword ptr [esi + 0xe4], 1 */
    /* cmp eax, 5 */ /* 0x12151E45: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215223F; /* 0x12151E48: ja 0x1215223f */
L_12151E4E:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x12152254)); goto _ljump; }
L_12151E55:
    eax = MEM32(esi + 0x44); /* 0x12151E55: mov eax, dword ptr [esi + 0x44] */
    MEM32(esi + 0xD0) = 1; /* 0x12151E58: mov dword ptr [esi + 0xd0], 1 */
    MEM32(esi + 0x3C) = 1; /* 0x12151E62: mov dword ptr [esi + 0x3c], 1 */
    MEM32(eax) = 1; /* 0x12151E69: mov dword ptr [eax], 1 */
    MEM32(eax + 0x8) = 1; /* 0x12151E6F: mov dword ptr [eax + 8], 1 */
    MEM32(eax + 0xC) = 1; /* 0x12151E76: mov dword ptr [eax + 0xc], 1 */
    MEM32(eax + 0x10) = 0; /* 0x12151E7D: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12151E84: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x12151E8B: mov dword ptr [eax + 0x18], 0 */
    esi = POP32_VAL(esp); /* 0x12151E92: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151E93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151E94: ret 8 */
L_12151E97:
    eax = MEM32(esi + 0x44); /* 0x12151E97: mov eax, dword ptr [esi + 0x44] */
    MEM32(esi + 0xDC) = 1; /* 0x12151E9A: mov dword ptr [esi + 0xdc], 1 */
    MEM32(esi + 0x3C) = 3; /* 0x12151EA4: mov dword ptr [esi + 0x3c], 3 */
    MEM32(eax) = 0x52u; /* 0x12151EAB: mov dword ptr [eax], 0x52 */
    MEM32(eax + 0x8) = 1; /* 0x12151EB1: mov dword ptr [eax + 8], 1 */
    MEM32(eax + 0xC) = 1; /* 0x12151EB8: mov dword ptr [eax + 0xc], 1 */
    MEM32(eax + 0x10) = 0; /* 0x12151EBF: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12151EC6: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x12151ECD: mov dword ptr [eax + 0x18], 0 */
    eax = MEM32(esi + 0x44); /* 0x12151ED4: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0x54) = 0x47u; /* 0x12151ED7: mov dword ptr [eax + 0x54], 0x47 */
    MEM32(eax + 0x5C) = 1; /* 0x12151EDE: mov dword ptr [eax + 0x5c], 1 */
    MEM32(eax + 0x60) = 1; /* 0x12151EE5: mov dword ptr [eax + 0x60], 1 */
    MEM32(eax + 0x64) = 0; /* 0x12151EEC: mov dword ptr [eax + 0x64], 0 */
    MEM32(eax + 0x68) = 0; /* 0x12151EF3: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x6C) = 0; /* 0x12151EFA: mov dword ptr [eax + 0x6c], 0 */
    eax = MEM32(esi + 0x44); /* 0x12151F01: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xA8) = 0x42u; /* 0x12151F04: mov dword ptr [eax + 0xa8], 0x42 */
    MEM32(eax + 0xB0) = 1; /* 0x12151F0E: mov dword ptr [eax + 0xb0], 1 */
    MEM32(eax + 0xB4) = 1; /* 0x12151F18: mov dword ptr [eax + 0xb4], 1 */
    MEM32(eax + 0xB8) = 0; /* 0x12151F22: mov dword ptr [eax + 0xb8], 0 */
    MEM32(eax + 0xBC) = 0; /* 0x12151F2C: mov dword ptr [eax + 0xbc], 0 */
    MEM32(eax + 0xC0) = 0; /* 0x12151F36: mov dword ptr [eax + 0xc0], 0 */
    esi = POP32_VAL(esp); /* 0x12151F40: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151F41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151F42: ret 8 */
L_12151F45:
    eax = MEM32(esi + 0x44); /* 0x12151F45: mov eax, dword ptr [esi + 0x44] */
    MEM32(esi + 0xD0) = 1; /* 0x12151F48: mov dword ptr [esi + 0xd0], 1 */
    MEM32(esi + 0x3C) = 3; /* 0x12151F52: mov dword ptr [esi + 0x3c], 3 */
    MEM32(eax) = 1; /* 0x12151F59: mov dword ptr [eax], 1 */
    MEM32(eax + 0x8) = 2; /* 0x12151F5F: mov dword ptr [eax + 8], 2 */
    MEM32(eax + 0xC) = 2; /* 0x12151F66: mov dword ptr [eax + 0xc], 2 */
    MEM32(eax + 0x10) = 0; /* 0x12151F6D: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12151F74: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x12151F7B: mov dword ptr [eax + 0x18], 0 */
    eax = MEM32(esi + 0x44); /* 0x12151F82: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0x54) = 2; /* 0x12151F85: mov dword ptr [eax + 0x54], 2 */
    MEM32(eax + 0x5C) = 1; /* 0x12151F8C: mov dword ptr [eax + 0x5c], 1 */
    MEM32(eax + 0x60) = 1; /* 0x12151F93: mov dword ptr [eax + 0x60], 1 */
    MEM32(eax + 0x64) = 1; /* 0x12151F9A: mov dword ptr [eax + 0x64], 1 */
    MEM32(eax + 0x68) = 1; /* 0x12151FA1: mov dword ptr [eax + 0x68], 1 */
    MEM32(eax + 0x6C) = 1; /* 0x12151FA8: mov dword ptr [eax + 0x6c], 1 */
    eax = MEM32(esi + 0x44); /* 0x12151FAF: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xA8) = 3; /* 0x12151FB2: mov dword ptr [eax + 0xa8], 3 */
    MEM32(eax + 0xB0) = 1; /* 0x12151FBC: mov dword ptr [eax + 0xb0], 1 */
    MEM32(eax + 0xB4) = 1; /* 0x12151FC6: mov dword ptr [eax + 0xb4], 1 */
    MEM32(eax + 0xB8) = 1; /* 0x12151FD0: mov dword ptr [eax + 0xb8], 1 */
    MEM32(eax + 0xBC) = 1; /* 0x12151FDA: mov dword ptr [eax + 0xbc], 1 */
    MEM32(eax + 0xC0) = 1; /* 0x12151FE4: mov dword ptr [eax + 0xc0], 1 */
    esi = POP32_VAL(esp); /* 0x12151FEE: pop esi */
    ebp = POP32_VAL(esp); /* 0x12151FEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12151FF0: ret 8 */
L_12151FF3:
    eax = MEM32(esi + 0x44); /* 0x12151FF3: mov eax, dword ptr [esi + 0x44] */
    MEM32(esi + 0xDC) = 1; /* 0x12151FF6: mov dword ptr [esi + 0xdc], 1 */
    MEM32(esi + 0x3C) = 4; /* 0x12152000: mov dword ptr [esi + 0x3c], 4 */
    MEM32(eax) = 0x43u; /* 0x12152007: mov dword ptr [eax], 0x43 */
    MEM32(eax + 0x8) = 1; /* 0x1215200D: mov dword ptr [eax + 8], 1 */
    MEM32(eax + 0xC) = 1; /* 0x12152014: mov dword ptr [eax + 0xc], 1 */
    MEM32(eax + 0x10) = 0; /* 0x1215201B: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12152022: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x12152029: mov dword ptr [eax + 0x18], 0 */
    eax = MEM32(esi + 0x44); /* 0x12152030: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0x54) = 0x4Du; /* 0x12152033: mov dword ptr [eax + 0x54], 0x4d */
    MEM32(eax + 0x5C) = 1; /* 0x1215203A: mov dword ptr [eax + 0x5c], 1 */
    MEM32(eax + 0x60) = 1; /* 0x12152041: mov dword ptr [eax + 0x60], 1 */
    MEM32(eax + 0x64) = 0; /* 0x12152048: mov dword ptr [eax + 0x64], 0 */
    MEM32(eax + 0x68) = 0; /* 0x1215204F: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x6C) = 0; /* 0x12152056: mov dword ptr [eax + 0x6c], 0 */
    eax = MEM32(esi + 0x44); /* 0x1215205D: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xA8) = 0x59u; /* 0x12152060: mov dword ptr [eax + 0xa8], 0x59 */
    MEM32(eax + 0xB0) = 1; /* 0x1215206A: mov dword ptr [eax + 0xb0], 1 */
    MEM32(eax + 0xB4) = 1; /* 0x12152074: mov dword ptr [eax + 0xb4], 1 */
    MEM32(eax + 0xB8) = 0; /* 0x1215207E: mov dword ptr [eax + 0xb8], 0 */
    MEM32(eax + 0xBC) = 0; /* 0x12152088: mov dword ptr [eax + 0xbc], 0 */
    MEM32(eax + 0xC0) = 0; /* 0x12152092: mov dword ptr [eax + 0xc0], 0 */
    eax = MEM32(esi + 0x44); /* 0x1215209C: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xFC) = 0x4Bu; /* 0x1215209F: mov dword ptr [eax + 0xfc], 0x4b */
    MEM32(eax + 0x104) = 1; /* 0x121520A9: mov dword ptr [eax + 0x104], 1 */
    MEM32(eax + 0x108) = 1; /* 0x121520B3: mov dword ptr [eax + 0x108], 1 */
    MEM32(eax + 0x10C) = 0; /* 0x121520BD: mov dword ptr [eax + 0x10c], 0 */
    MEM32(eax + 0x110) = 0; /* 0x121520C7: mov dword ptr [eax + 0x110], 0 */
    MEM32(eax + 0x114) = 0; /* 0x121520D1: mov dword ptr [eax + 0x114], 0 */
    esi = POP32_VAL(esp); /* 0x121520DB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121520DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121520DD: ret 8 */
L_121520E0:
    eax = MEM32(esi + 0x44); /* 0x121520E0: mov eax, dword ptr [esi + 0x44] */
    MEM32(esi + 0xDC) = 1; /* 0x121520E3: mov dword ptr [esi + 0xdc], 1 */
    MEM32(esi + 0x3C) = 4; /* 0x121520ED: mov dword ptr [esi + 0x3c], 4 */
    MEM32(eax) = 1; /* 0x121520F4: mov dword ptr [eax], 1 */
    MEM32(eax + 0x8) = 2; /* 0x121520FA: mov dword ptr [eax + 8], 2 */
    MEM32(eax + 0xC) = 2; /* 0x12152101: mov dword ptr [eax + 0xc], 2 */
    MEM32(eax + 0x10) = 0; /* 0x12152108: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x1215210F: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x12152116: mov dword ptr [eax + 0x18], 0 */
    eax = MEM32(esi + 0x44); /* 0x1215211D: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0x54) = 2; /* 0x12152120: mov dword ptr [eax + 0x54], 2 */
    MEM32(eax + 0x5C) = 1; /* 0x12152127: mov dword ptr [eax + 0x5c], 1 */
    MEM32(eax + 0x60) = 1; /* 0x1215212E: mov dword ptr [eax + 0x60], 1 */
    MEM32(eax + 0x64) = 1; /* 0x12152135: mov dword ptr [eax + 0x64], 1 */
    MEM32(eax + 0x68) = 1; /* 0x1215213C: mov dword ptr [eax + 0x68], 1 */
    MEM32(eax + 0x6C) = 1; /* 0x12152143: mov dword ptr [eax + 0x6c], 1 */
    eax = MEM32(esi + 0x44); /* 0x1215214A: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xA8) = 3; /* 0x1215214D: mov dword ptr [eax + 0xa8], 3 */
    MEM32(eax + 0xB0) = 1; /* 0x12152157: mov dword ptr [eax + 0xb0], 1 */
    MEM32(eax + 0xB4) = 1; /* 0x12152161: mov dword ptr [eax + 0xb4], 1 */
    MEM32(eax + 0xB8) = 1; /* 0x1215216B: mov dword ptr [eax + 0xb8], 1 */
    MEM32(eax + 0xBC) = 1; /* 0x12152175: mov dword ptr [eax + 0xbc], 1 */
    MEM32(eax + 0xC0) = 1; /* 0x1215217F: mov dword ptr [eax + 0xc0], 1 */
    eax = MEM32(esi + 0x44); /* 0x12152189: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax + 0xFC) = 4; /* 0x1215218C: mov dword ptr [eax + 0xfc], 4 */
    MEM32(eax + 0x104) = 2; /* 0x12152196: mov dword ptr [eax + 0x104], 2 */
    MEM32(eax + 0x108) = 2; /* 0x121521A0: mov dword ptr [eax + 0x108], 2 */
    MEM32(eax + 0x10C) = 0; /* 0x121521AA: mov dword ptr [eax + 0x10c], 0 */
    MEM32(eax + 0x110) = 0; /* 0x121521B4: mov dword ptr [eax + 0x110], 0 */
    MEM32(eax + 0x114) = 0; /* 0x121521BE: mov dword ptr [eax + 0x114], 0 */
    esi = POP32_VAL(esp); /* 0x121521C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x121521C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121521CA: ret 8 */
L_121521CD:
    eax = MEM32(esi + 0x24); /* 0x121521CD: mov eax, dword ptr [esi + 0x24] */
    MEM32(esi + 0x3C) = eax; /* 0x121521D0: mov dword ptr [esi + 0x3c], eax */
    /* cmp eax, 1 */ /* 0x121521D3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121521DD; /* 0x121521D6: jl 0x121521dd */
L_121521D8:
    /* cmp eax, 0xAu */ /* 0x121521D8: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121521FE; /* 0x121521DB: jle 0x121521fe */
L_121521DD:
    eax = MEM32(esi); /* 0x121521DD: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x121521DF: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(esi + 0x3C); /* 0x121521E6: mov eax, dword ptr [esi + 0x3c] */
    ecx = MEM32(esi); /* 0x121521E9: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121521EB: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121521EE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = 0xAu; /* 0x121521F0: mov dword ptr [eax + 0x1c], 0xa */
    eax = MEM32(esi); /* 0x121521F7: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121521F9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121521FB: push esi */
    RECOMP_ICALL(eax); /* 0x121521FC: call eax */
    RECOMP_FLAGS_IN();
L_121521FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121521FE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), ecx */ /* 0x12152200: cmp dword ptr [esi + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215224F; /* 0x12152203: jle 0x1215224f */
L_12152205:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12152205: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12152207:
    eax = MEM32(esi + 0x44); /* 0x12152207: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1215220A: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1215220C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215220E: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x8) = 1; /* 0x1215220F: mov dword ptr [eax + 8], 1 */
    MEM32(eax + 0xC) = 1; /* 0x12152216: mov dword ptr [eax + 0xc], 1 */
    MEM32(eax + 0x10) = 0; /* 0x1215221D: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12152224: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x1215222B: mov dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x12152232: add edx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x3C) */ /* 0x12152235: cmp ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12152207; /* 0x12152238: jl 0x12152207 */
L_1215223A:
    esi = POP32_VAL(esp); /* 0x1215223A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215223B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215223C: ret 8 */
L_1215223F:
    eax = MEM32(esi); /* 0x1215223F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x12152241: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x12152248: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215224A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215224C: push esi */
    RECOMP_ICALL(eax); /* 0x1215224D: call eax */
    RECOMP_FLAGS_IN();
L_1215224F:
    esi = POP32_VAL(esp); /* 0x1215224F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152250: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12152251: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12151E55u: goto L_12151E55;
      case 0x12151E97u: goto L_12151E97;
      case 0x12151F45u: goto L_12151F45;
      case 0x12151FF3u: goto L_12151FF3;
      case 0x121520E0u: goto L_121520E0;
      case 0x121521CDu: goto L_121521CD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12152280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152280u);

L_12152280:
    edi = edi; /* 0x12152280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152282: push ebp */
    ebp = esp; /* 0x12152283: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12152285: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152286: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0x64u */ /* 0x12152289: cmp dword ptr [esi + 0x14], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121522A7; /* 0x1215228D: je 0x121522a7 */
L_1215228F:
    eax = MEM32(esi); /* 0x1215228F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x12152291: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x12152298: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x1215229B: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1215229D: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121522A0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121522A2: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121522A4: push esi */
    RECOMP_ICALL(eax); /* 0x121522A5: call eax */
    RECOMP_FLAGS_IN();
L_121522A7:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x121522A7: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121522BF; /* 0x121522AB: jne 0x121522bf */
L_121522AD:
    eax = MEM32(esi + 0x4); /* 0x121522AD: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x121522B0: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x348u); /* 0x121522B2: push 0x348 */
    PUSH32(esp, 0); /* 0x121522B7: push 0 */
    PUSH32(esp, esi); /* 0x121522B9: push esi */
    RECOMP_ICALL(eax); /* 0x121522BA: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x44) = eax; /* 0x121522BC: mov dword ptr [esi + 0x44], eax */
L_121522BF:
    PUSH32(esp, ebx); /* 0x121522BF: push ebx */
    PUSH32(esp, 1); /* 0x121522C0: push 1 */
    PUSH32(esp, 0x32u); /* 0x121522C2: push 0x32 */
    PUSH32(esp, 0x12012CA8u); /* 0x121522C4: push 0x12012ca8 */
    PUSH32(esp, 0); /* 0x121522C9: push 0 */
    PUSH32(esp, esi); /* 0x121522CB: push esi */
    MEM32(esi + 0x38) = 8; /* 0x121522CC: mov dword ptr [esi + 0x38], 8 */
    RECOMP_CALL(sub_12151BF0); /* 0x121522D3: call 0x12151bf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x121522D8: push 1 */
    PUSH32(esp, 0x32u); /* 0x121522DA: push 0x32 */
    PUSH32(esp, 0x12012BA8u); /* 0x121522DC: push 0x12012ba8 */
    PUSH32(esp, 1); /* 0x121522E1: push 1 */
    PUSH32(esp, esi); /* 0x121522E3: push esi */
    RECOMP_CALL(sub_12151BF0); /* 0x121522E4: call 0x12151bf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12012E78u); /* 0x121522E9: push 0x12012e78 */
    ebx = esi + 0x58; /* 0x121522EE: lea ebx, [esi + 0x58] */
    PUSH32(esp, esi); /* 0x121522F1: push esi */
    eax = 0x12012F3Cu; /* 0x121522F2: mov eax, 0x12012f3c */
    RECOMP_CALL(sub_12151D50); /* 0x121522F7: call 0x12151d50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12012E98u); /* 0x121522FC: push 0x12012e98 */
    ebx = esi + 0x68; /* 0x12152301: lea ebx, [esi + 0x68] */
    PUSH32(esp, esi); /* 0x12152304: push esi */
    eax = 0x12012E84u; /* 0x12152305: mov eax, 0x12012e84 */
    RECOMP_CALL(sub_12151D50); /* 0x1215230A: call 0x12151d50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12012E78u); /* 0x1215230F: push 0x12012e78 */
    ebx = esi + 0x5C; /* 0x12152314: lea ebx, [esi + 0x5c] */
    PUSH32(esp, esi); /* 0x12152317: push esi */
    eax = 0x12012E64u; /* 0x12152318: mov eax, 0x12012e64 */
    RECOMP_CALL(sub_12151D50); /* 0x1215231D: call 0x12151d50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12012DC0u); /* 0x12152322: push 0x12012dc0 */
    ebx = esi + 0x6C; /* 0x12152327: lea ebx, [esi + 0x6c] */
    PUSH32(esp, esi); /* 0x1215232A: push esi */
    eax = 0x12012DA8u; /* 0x1215232B: mov eax, 0x12012da8 */
    RECOMP_CALL(sub_12151D50); /* 0x12152330: call 0x12151d50 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x88; /* 0x12152335: lea eax, [esi + 0x88] */
    ecx = 0x10u; /* 0x1215233B: mov ecx, 0x10 */
    ebx = POP32_VAL(esp); /* 0x12152340: pop ebx */
L_12152341:
    MEM8(eax + (-0x10)) = (uint8_t)(0); /* 0x12152341: mov byte ptr [eax - 0x10], 0 */
    MEM8(eax) = (uint8_t)(1); /* 0x12152345: mov byte ptr [eax], 1 */
    MEM8(eax + 0x10) = (uint8_t)(5); /* 0x12152348: mov byte ptr [eax + 0x10], 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215234C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1215234D: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12152341; /* 0x1215234E: jne 0x12152341 */
L_12152350:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x12152350: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xAC) = ecx; /* 0x12152354: mov dword ptr [esi + 0xac], ecx */
    MEM32(esi + 0xA8) = ecx; /* 0x1215235A: mov dword ptr [esi + 0xa8], ecx */
    MEM32(esi + 0xB0) = ecx; /* 0x12152360: mov dword ptr [esi + 0xb0], ecx */
    MEM32(esi + 0xB4) = ecx; /* 0x12152366: mov dword ptr [esi + 0xb4], ecx */
    MEM32(esi + 0xB8) = ecx; /* 0x1215236C: mov dword ptr [esi + 0xb8], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215237E; /* 0x12152372: jle 0x1215237e */
L_12152374:
    MEM32(esi + 0xB8) = 1; /* 0x12152374: mov dword ptr [esi + 0xb8], 1 */
L_1215237E:
    eax = MEM32(esi + 0x28); /* 0x1215237E: mov eax, dword ptr [esi + 0x28] */
    MEM32(esi + 0xBC) = 0; /* 0x12152381: mov dword ptr [esi + 0xbc], 0 */
    MEM32(esi + 0xC0) = 0; /* 0x1215238B: mov dword ptr [esi + 0xc0], 0 */
    MEM32(esi + 0xC4) = 0; /* 0x12152395: mov dword ptr [esi + 0xc4], 0 */
    MEM32(esi + 0xC8) = 0; /* 0x1215239F: mov dword ptr [esi + 0xc8], 0 */
    MEM32(esi + 0xCC) = 0; /* 0x121523A9: mov dword ptr [esi + 0xcc], 0 */
    MEM16(esi + 0xD4) = (uint16_t)(0x101u); /* 0x121523B3: mov word ptr [esi + 0xd4], 0x101 */
    MEM8(esi + 0xD6) = (uint8_t)(0); /* 0x121523BC: mov byte ptr [esi + 0xd6], 0 */
    MEM32(esi + 0xD8) = 0x00010001u; /* 0x121523C3: mov dword ptr [esi + 0xd8], 0x10001 */
    /* cmp eax, 8 */ /* 0x121523CD: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215241A; /* 0x121523D0: ja 0x1215241a */
L_121523D2:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x12152430)); goto _ljump; }
L_121523D9:
    PUSH32(esp, 1); /* 0x121523D9: push 1 */
    PUSH32(esp, esi); /* 0x121523DB: push esi */
    RECOMP_CALL(sub_12151DF0); /* 0x121523DC: call 0x12151df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x121523E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x121523E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121523E3: ret 4 */
L_121523E6:
    PUSH32(esp, 3); /* 0x121523E6: push 3 */
    PUSH32(esp, esi); /* 0x121523E8: push esi */
    RECOMP_CALL(sub_12151DF0); /* 0x121523E9: call 0x12151df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x121523EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x121523EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121523F0: ret 4 */
L_121523F3:
    PUSH32(esp, 4); /* 0x121523F3: push 4 */
    PUSH32(esp, esi); /* 0x121523F5: push esi */
    RECOMP_CALL(sub_12151DF0); /* 0x121523F6: call 0x12151df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x121523FB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121523FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121523FD: ret 4 */
L_12152400:
    PUSH32(esp, 5); /* 0x12152400: push 5 */
    PUSH32(esp, esi); /* 0x12152402: push esi */
    RECOMP_CALL(sub_12151DF0); /* 0x12152403: call 0x12151df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12152408: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152409: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215240A: ret 4 */
L_1215240D:
    PUSH32(esp, 0); /* 0x1215240D: push 0 */
    PUSH32(esp, esi); /* 0x1215240F: push esi */
    RECOMP_CALL(sub_12151DF0); /* 0x12152410: call 0x12151df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12152415: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152416: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152417: ret 4 */
L_1215241A:
    eax = MEM32(esi); /* 0x1215241A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 9; /* 0x1215241C: mov dword ptr [eax + 0x14], 9 */
    eax = MEM32(esi); /* 0x12152423: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152425: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152427: push esi */
    RECOMP_ICALL(eax); /* 0x12152428: call eax */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1215242A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215242B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215242C: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x121523D9u: goto L_121523D9;
      case 0x121523E6u: goto L_121523E6;
      case 0x121523F3u: goto L_121523F3;
      case 0x12152400u: goto L_12152400;
      case 0x1215240Du: goto L_1215240D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12152460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152460u);

L_12152460:
    /* cmp MEM32(esi + 0x20), 0xFFDCu */ /* 0x12152460: cmp dword ptr [esi + 0x20], 0xffdc */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0xFFDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12152472; /* 0x12152467: jg 0x12152472 */
L_12152469:
    /* cmp MEM32(esi + 0x1C), 0xFFDCu */ /* 0x12152469: cmp dword ptr [esi + 0x1c], 0xffdc */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0xFFDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215248B; /* 0x12152470: jle 0x1215248b */
L_12152472:
    eax = MEM32(esi); /* 0x12152472: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x12152474: mov dword ptr [eax + 0x14], 0x29 */
    eax = MEM32(esi); /* 0x1215247B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = 0xFFDCu; /* 0x1215247D: mov dword ptr [eax + 0x18], 0xffdc */
    eax = MEM32(esi); /* 0x12152484: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152486: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152488: push esi */
    RECOMP_ICALL(eax); /* 0x12152489: call eax */
    RECOMP_FLAGS_IN();
L_1215248B:
    /* cmp MEM32(esi + 0xD8), 8 */ /* 0x1215248B: cmp dword ptr [esi + 0xd8], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121524AF; /* 0x12152492: je 0x121524af */
L_12152494:
    eax = MEM32(esi); /* 0x12152494: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xFu; /* 0x12152496: mov dword ptr [eax + 0x14], 0xf */
    eax = MEM32(esi + 0xD8); /* 0x1215249D: mov eax, dword ptr [esi + 0xd8] */
    ecx = MEM32(esi); /* 0x121524A3: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121524A5: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121524A8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121524AA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121524AC: push esi */
    RECOMP_ICALL(eax); /* 0x121524AD: call eax */
    RECOMP_FLAGS_IN();
L_121524AF:
    /* cmp MEM32(esi + 0x24), 0xAu */ /* 0x121524AF: cmp dword ptr [esi + 0x24], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121524D6; /* 0x121524B3: jle 0x121524d6 */
L_121524B5:
    eax = MEM32(esi); /* 0x121524B5: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x121524B7: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(esi + 0x24); /* 0x121524BE: mov eax, dword ptr [esi + 0x24] */
    ecx = MEM32(esi); /* 0x121524C1: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121524C3: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121524C6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = 0xAu; /* 0x121524C8: mov dword ptr [eax + 0x1c], 0xa */
    eax = MEM32(esi); /* 0x121524CF: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121524D1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121524D3: push esi */
    RECOMP_ICALL(eax); /* 0x121524D4: call eax */
    RECOMP_FLAGS_IN();
L_121524D6:
    PUSH32(esp, ebx); /* 0x121524D6: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121524D7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121524D9: push edi */
    edi = MEM32(esi + 0xDC); /* 0x121524DA: mov edi, dword ptr [esi + 0xdc] */
    MEM32(esi + 0x138) = 1; /* 0x121524E0: mov dword ptr [esi + 0x138], 1 */
    MEM32(esi + 0x13C) = 1; /* 0x121524EA: mov dword ptr [esi + 0x13c], 1 */
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x121524F4: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12152559; /* 0x121524F7: jle 0x12152559 */
L_121524F9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x121524F9: add edi, 0xc */
    _flag_k = FK_ADD;
    esp = esp; /* 0x121524FC: lea esp, [esp] */
L_12152500:
    eax = MEM32(edi + (-0x4)); /* 0x12152500: mov eax, dword ptr [edi - 4] */
    /* test eax, eax */ /* 0x12152503: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12152517; /* 0x12152505: jle 0x12152517 */
L_12152507:
    /* cmp eax, 4 */ /* 0x12152507: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12152517; /* 0x1215250A: jg 0x12152517 */
L_1215250C:
    eax = MEM32(edi); /* 0x1215250C: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x1215250E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12152517; /* 0x12152510: jle 0x12152517 */
L_12152512:
    /* cmp eax, 4 */ /* 0x12152512: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12152527; /* 0x12152515: jle 0x12152527 */
L_12152517:
    eax = MEM32(esi); /* 0x12152517: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x12u; /* 0x12152519: mov dword ptr [eax + 0x14], 0x12 */
    eax = MEM32(esi); /* 0x12152520: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152522: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152524: push esi */
    RECOMP_ICALL(eax); /* 0x12152525: call eax */
    RECOMP_FLAGS_IN();
L_12152527:
    eax = MEM32(esi + 0x138); /* 0x12152527: mov eax, dword ptr [esi + 0x138] */
    ecx = MEM32(edi + (-0x4)); /* 0x1215252D: mov ecx, dword ptr [edi - 4] */
    /* cmp eax, ecx */ /* 0x12152530: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12152536; /* 0x12152532: jg 0x12152536 */
L_12152534:
    eax = ecx; /* 0x12152534: mov eax, ecx */
L_12152536:
    MEM32(esi + 0x138) = eax; /* 0x12152536: mov dword ptr [esi + 0x138], eax */
    eax = MEM32(esi + 0x13C); /* 0x1215253C: mov eax, dword ptr [esi + 0x13c] */
    ecx = MEM32(edi); /* 0x12152542: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x12152544: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1215254A; /* 0x12152546: jg 0x1215254a */
L_12152548:
    eax = ecx; /* 0x12152548: mov eax, ecx */
L_1215254A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215254A: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi + 0x13C) = eax; /* 0x1215254B: mov dword ptr [esi + 0x13c], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x12152551: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x24) */ /* 0x12152554: cmp ebx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12152500; /* 0x12152557: jl 0x12152500 */
L_12152559:
    edi = MEM32(esi + 0xDC); /* 0x12152559: mov edi, dword ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215255F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x140) = 8; /* 0x12152561: mov dword ptr [esi + 0x140], 8 */
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x1215256B: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12152609; /* 0x1215256E: jle 0x12152609 */
L_12152574:
    ecx = esi + 0x1C; /* 0x12152574: lea ecx, [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1Cu; /* 0x12152577: add edi, 0x1c */
    _flag_k = FK_ADD;
    ebx = ebx; /* 0x1215257A: lea ebx, [ebx] */
L_12152580:
    MEM32(edi + 0x8) = 8; /* 0x12152580: mov dword ptr [edi + 8], 8 */
    eax = MEM32(esi + 0x138); /* 0x12152587: mov eax, dword ptr [esi + 0x138] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215258D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215258F: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152591: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12152593: push eax */
    eax = MEM32(edi + (-0x14)); /* 0x12152594: mov eax, dword ptr [edi - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx)); /* 0x12152597: imul eax, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1215259A: push eax */
    RECOMP_CALL(sub_12154080); /* 0x1215259B: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x121525A0: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x13C); /* 0x121525A2: mov eax, dword ptr [esi + 0x13c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121525A8: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121525AA: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121525AC: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121525AE: push eax */
    eax = MEM32(edi + (-0x10)); /* 0x121525AF: mov eax, dword ptr [edi - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x121525B2: imul eax, dword ptr [esi + 0x20] */
    PUSH32(esp, eax); /* 0x121525B6: push eax */
    RECOMP_CALL(sub_12154080); /* 0x121525B7: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x121525BC: mov dword ptr [edi + 4], eax */
    eax = MEM32(edi + (-0x14)); /* 0x121525BF: mov eax, dword ptr [edi - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x121525C2: imul eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x138)); /* 0x121525C6: push dword ptr [esi + 0x138] */
    PUSH32(esp, eax); /* 0x121525CC: push eax */
    RECOMP_CALL(sub_12154080); /* 0x121525CD: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x121525D2: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(edi + (-0x10)); /* 0x121525D5: mov eax, dword ptr [edi - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x121525D8: imul eax, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(esi + 0x13C)); /* 0x121525DC: push dword ptr [esi + 0x13c] */
    PUSH32(esp, eax); /* 0x121525E2: push eax */
    RECOMP_CALL(sub_12154080); /* 0x121525E3: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x121525E8: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = 1; /* 0x121525EB: mov dword ptr [edi + 0x14], 1 */
    MEM32(edi + 0x30) = 0; /* 0x121525F2: mov dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121525F9: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x121525FA: add edi, 0x54 */
    _flag_k = FK_ADD;
    ecx = esi + 0x1C; /* 0x121525FD: lea ecx, [esi + 0x1c] */
    /* cmp ebx, MEM32(esi + 0x24) */ /* 0x12152600: cmp ebx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12152580; /* 0x12152603: jl 0x12152580 */
L_12152609:
    eax = MEM32(esi + 0x13C); /* 0x12152609: mov eax, dword ptr [esi + 0x13c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215260F: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152611: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152613: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12152615: push eax */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12152616: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_12154080); /* 0x12152619: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x144) = eax; /* 0x1215261E: mov dword ptr [esi + 0x144], eax */
    eax = MEM32(esi + 0x14C); /* 0x12152624: mov eax, dword ptr [esi + 0x14c] */
    edi = POP32_VAL(esp); /* 0x1215262A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1215262B: pop ebx */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x1215262C: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152648; /* 0x1215262F: jl 0x12152648 */
L_12152631:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x12152631: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12152648; /* 0x12152638: jne 0x12152648 */
L_1215263A:
    eax = MEM32(esi + 0x1B8); /* 0x1215263A: mov eax, dword ptr [esi + 0x1b8] */
    MEM32(eax + 0x10) = 0; /* 0x12152640: mov dword ptr [eax + 0x10], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12152647: ret  */
L_12152648:
    eax = MEM32(esi + 0x1B8); /* 0x12152648: mov eax, dword ptr [esi + 0x1b8] */
    MEM32(eax + 0x10) = 1; /* 0x1215264E: mov dword ptr [eax + 0x10], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12152655: ret  */
    RECOMP_REGS_OUT();
}

void sub_12152660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152660u);

L_12152660:
    edi = edi; /* 0x12152660: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152662: push ebp */
    ebp = esp; /* 0x12152663: mov ebp, esp */
    eax = MEM32(ebx + 0x14C); /* 0x12152665: mov eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1215266B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1215266E: push esi */
    /* cmp eax, 1 */ /* 0x1215266F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121526DA; /* 0x12152672: jne 0x121526da */
L_12152674:
    ecx = MEM32(ebx + 0x150); /* 0x12152674: mov ecx, dword ptr [ebx + 0x150] */
    eax = MEM32(ecx + 0x1C); /* 0x1215267A: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ebx + 0x160) = eax; /* 0x1215267D: mov dword ptr [ebx + 0x160], eax */
    eax = MEM32(ecx + 0x20); /* 0x12152683: mov eax, dword ptr [ecx + 0x20] */
    MEM32(ebx + 0x164) = eax; /* 0x12152686: mov dword ptr [ebx + 0x164], eax */
    eax = MEM32(ecx + 0x24); /* 0x1215268C: mov eax, dword ptr [ecx + 0x24] */
    esi = MEM32(ecx + 0xC); /* 0x1215268F: mov esi, dword ptr [ecx + 0xc] */
    MEM32(ecx + 0x40) = eax; /* 0x12152692: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ecx + 0x20); /* 0x12152695: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12152698: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1215269A: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x34) = 1; /* 0x1215269C: mov dword ptr [ecx + 0x34], 1 */
    MEM32(ecx + 0x38) = 1; /* 0x121526A3: mov dword ptr [ecx + 0x38], 1 */
    MEM32(ecx + 0x3C) = 1; /* 0x121526AA: mov dword ptr [ecx + 0x3c], 1 */
    MEM32(ecx + 0x44) = 1; /* 0x121526B1: mov dword ptr [ecx + 0x44], 1 */
    /* test edx, edx */ /* 0x121526B8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121526BE; /* 0x121526BA: jne 0x121526be */
L_121526BC:
    edx = esi; /* 0x121526BC: mov edx, esi */
L_121526BE:
    MEM32(ecx + 0x48) = edx; /* 0x121526BE: mov dword ptr [ecx + 0x48], edx */
    MEM32(ebx + 0x168) = 1; /* 0x121526C1: mov dword ptr [ebx + 0x168], 1 */
    MEM32(ebx + 0x16C) = 0; /* 0x121526CB: mov dword ptr [ebx + 0x16c], 0 */
    esi = POP32_VAL(esp); /* 0x121526D5: pop esi */
    esp = ebp; /* 0x121526D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121526D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121526D9: ret  */
L_121526DA:
    /* test eax, eax */ /* 0x121526DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121526E3; /* 0x121526DC: jle 0x121526e3 */
L_121526DE:
    /* cmp eax, 4 */ /* 0x121526DE: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12152707; /* 0x121526E1: jle 0x12152707 */
L_121526E3:
    eax = MEM32(ebx); /* 0x121526E3: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x121526E5: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(ebx + 0x14C); /* 0x121526EC: mov eax, dword ptr [ebx + 0x14c] */
    ecx = MEM32(ebx); /* 0x121526F2: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x18) = eax; /* 0x121526F4: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebx); /* 0x121526F7: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x1C) = 4; /* 0x121526F9: mov dword ptr [eax + 0x1c], 4 */
    eax = MEM32(ebx); /* 0x12152700: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12152702: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12152704: push ebx */
    RECOMP_ICALL(eax); /* 0x12152705: call eax */
    RECOMP_FLAGS_IN();
L_12152707:
    eax = MEM32(ebx + 0x138); /* 0x12152707: mov eax, dword ptr [ebx + 0x138] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215270D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215270F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12152711: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152712: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12152714: push eax */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x12152715: push dword ptr [ebx + 0x1c] */
    RECOMP_CALL(sub_12154080); /* 0x12152718: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x160) = eax; /* 0x1215271D: mov dword ptr [ebx + 0x160], eax */
    eax = MEM32(ebx + 0x13C); /* 0x12152723: mov eax, dword ptr [ebx + 0x13c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152729: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215272B: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215272D: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215272F: push eax */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x12152730: push dword ptr [ebx + 0x20] */
    RECOMP_CALL(sub_12154080); /* 0x12152733: call 0x12154080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12152738: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x164) = eax; /* 0x1215273A: mov dword ptr [ebx + 0x164], eax */
    MEM32(ebx + 0x168) = 0; /* 0x12152740: mov dword ptr [ebx + 0x168], 0 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215274A: mov dword ptr [ebp - 0x10], ecx */
    /* cmp MEM32(ebx + 0x14C), ecx */ /* 0x1215274D: cmp dword ptr [ebx + 0x14c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12152811; /* 0x12152753: jle 0x12152811 */
L_12152759:
    eax = ebx + 0x150; /* 0x12152759: lea eax, [ebx + 0x150] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1215275F: mov dword ptr [ebp - 0x14], eax */
L_12152762:
    edx = MEM32(eax); /* 0x12152762: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x8); /* 0x12152764: mov eax, dword ptr [edx + 8] */
    esi = MEM32(edx + 0xC); /* 0x12152767: mov esi, dword ptr [edx + 0xc] */
    MEM32(edx + 0x34) = eax; /* 0x1215276A: mov dword ptr [edx + 0x34], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1215276D: mov dword ptr [ebp - 4], eax */
    MEM32(edx + 0x38) = esi; /* 0x12152770: mov dword ptr [edx + 0x38], esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x12152773: mov dword ptr [ebp - 8], esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x12152776: imul esi, eax */
    eax = MEM32(edx + 0x24); /* 0x12152779: mov eax, dword ptr [edx + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx + 0x8)); /* 0x1215277C: imul eax, dword ptr [edx + 8] */
    MEM32(edx + 0x40) = eax; /* 0x12152780: mov dword ptr [edx + 0x40], eax */
    eax = MEM32(edx + 0x1C); /* 0x12152783: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0xC)) = edx; /* 0x12152786: mov dword ptr [ebp - 0xc], edx */
    MEM32(edx + 0x3C) = esi; /* 0x12152789: mov dword ptr [edx + 0x3c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215278C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x4)); /* 0x1215278E: div dword ptr [ebp - 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x12152791: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152798; /* 0x12152793: jne 0x12152798 */
L_12152795:
    edx = MEM32(ebp + (-0x4)); /* 0x12152795: mov edx, dword ptr [ebp - 4] */
L_12152798:
    eax = MEM32(ebp + (-0xC)); /* 0x12152798: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x44) = edx; /* 0x1215279B: mov dword ptr [eax + 0x44], edx */
    eax = MEM32(eax + 0x20); /* 0x1215279E: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121527A1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x8)); /* 0x121527A3: div dword ptr [ebp - 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x121527A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121527AD; /* 0x121527A8: jne 0x121527ad */
L_121527AA:
    edx = MEM32(ebp + (-0x8)); /* 0x121527AA: mov edx, dword ptr [ebp - 8] */
L_121527AD:
    eax = MEM32(ebp + (-0xC)); /* 0x121527AD: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x48) = edx; /* 0x121527B0: mov dword ptr [eax + 0x48], edx */
    eax = MEM32(ebx + 0x168); /* 0x121527B3: mov eax, dword ptr [ebx + 0x168] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x121527B9: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, 0xAu */ /* 0x121527BB: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121527D3; /* 0x121527BE: jle 0x121527d3 */
L_121527C0:
    eax = MEM32(ebx); /* 0x121527C0: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xDu; /* 0x121527C2: mov dword ptr [eax + 0x14], 0xd */
    eax = MEM32(ebx); /* 0x121527C9: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121527CB: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121527CD: push ebx */
    RECOMP_ICALL(eax); /* 0x121527CE: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x121527D0: mov ecx, dword ptr [ebp - 0x10] */
L_121527D3:
    /* test esi, esi */ /* 0x121527D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121527F8; /* 0x121527D5: jle 0x121527f8 */
L_121527D7:
    goto L_121527E0; /* 0x121527D7: jmp 0x121527e0 */
L_121527E0:
    eax = MEM32(ebx + 0x168); /* 0x121527E0: mov eax, dword ptr [ebx + 0x168] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121527E6: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebx + eax * 4 + 0x16C) = ecx; /* 0x121527E7: mov dword ptr [ebx + eax*4 + 0x16c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x168)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x168) = MEM32(ebx + 0x168) + 1; /* 0x121527EE: inc dword ptr [ebx + 0x168] */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x121527F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121527E0; /* 0x121527F6: jg 0x121527e0 */
L_121527F8:
    eax = MEM32(ebp + (-0x14)); /* 0x121527F8: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121527FB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x121527FC: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x121527FF: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x12152802: mov dword ptr [ebp - 0x14], eax */
    /* cmp ecx, MEM32(ebx + 0x14C) */ /* 0x12152805: cmp ecx, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x14C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12152762; /* 0x1215280B: jl 0x12152762 */
L_12152811:
    edi = POP32_VAL(esp); /* 0x12152811: pop edi */
    esi = POP32_VAL(esp); /* 0x12152812: pop esi */
    esp = ebp; /* 0x12152813: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12152815: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12152816: ret  */
    RECOMP_REGS_OUT();
}

void sub_12152820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152820u);

L_12152820:
    edi = edi; /* 0x12152820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152822: push ebp */
    ebp = esp; /* 0x12152823: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12152825: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12152828: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215282A: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebx + 0x14C), eax */ /* 0x1215282D: cmp dword ptr [ebx + 0x14c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121528B1; /* 0x12152833: jle 0x121528b1 */
L_12152835:
    ecx = ebx + 0x150; /* 0x12152835: lea ecx, [ebx + 0x150] */
    PUSH32(esp, esi); /* 0x1215283B: push esi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1215283C: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, edi); /* 0x1215283F: push edi */
L_12152840:
    edx = MEM32(ecx); /* 0x12152840: mov edx, dword ptr [ecx] */
    /* cmp MEM32(edx + 0x4C), 0 */ /* 0x12152842: cmp dword ptr [edx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x12152846: mov dword ptr [ebp - 0xc], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215289D; /* 0x12152849: jne 0x1215289d */
L_1215284B:
    esi = MEM32(edx + 0x10); /* 0x1215284B: mov esi, dword ptr [edx + 0x10] */
    /* cmp esi, 3 */ /* 0x1215284E: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215285D; /* 0x12152851: ja 0x1215285d */
L_12152853:
    /* cmp MEM32(ebx + esi * 4 + 0xA8), 0 */ /* 0x12152853: cmp dword ptr [ebx + esi*4 + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + esi * 4 + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12152872; /* 0x1215285B: jne 0x12152872 */
L_1215285D:
    eax = MEM32(ebx); /* 0x1215285D: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x34u; /* 0x1215285F: mov dword ptr [eax + 0x14], 0x34 */
    eax = MEM32(ebx); /* 0x12152866: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = esi; /* 0x12152868: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(ebx); /* 0x1215286B: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1215286D: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215286F: push ebx */
    RECOMP_ICALL(eax); /* 0x12152870: call eax */
    RECOMP_FLAGS_IN();
L_12152872:
    eax = MEM32(ebx + 0x4); /* 0x12152872: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax); /* 0x12152875: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x84u); /* 0x12152877: push 0x84 */
    PUSH32(esp, 1); /* 0x1215287C: push 1 */
    PUSH32(esp, ebx); /* 0x1215287E: push ebx */
    RECOMP_ICALL(eax); /* 0x1215287F: call eax */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + esi * 4 + 0xA8); /* 0x12152881: mov esi, dword ptr [ebx + esi*4 + 0xa8] */
    edi = eax; /* 0x12152888: mov edi, eax */
    ecx = 0x21u; /* 0x1215288A: mov ecx, 0x21 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1215288F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0xC)); /* 0x12152891: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x4C) = eax; /* 0x12152894: mov dword ptr [ecx + 0x4c], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12152897: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1215289A: mov ecx, dword ptr [ebp - 8] */
L_1215289D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215289D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215289E: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x121528A1: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x121528A4: mov dword ptr [ebp - 8], ecx */
    /* cmp eax, MEM32(ebx + 0x14C) */ /* 0x121528A7: cmp eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x14C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12152840; /* 0x121528AD: jl 0x12152840 */
L_121528AF:
    edi = POP32_VAL(esp); /* 0x121528AF: pop edi */
    esi = POP32_VAL(esp); /* 0x121528B0: pop esi */
L_121528B1:
    esp = ebp; /* 0x121528B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121528B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121528B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_121528C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121528C0u);

L_121528C0:
    edi = edi; /* 0x121528C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121528C2: push ebp */
    ebp = esp; /* 0x121528C3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121528C5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121528C6: mov ebx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152660); /* 0x121528C9: call 0x12152660 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12152820); /* 0x121528CE: call 0x12152820 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x1C0); /* 0x121528D3: mov eax, dword ptr [ebx + 0x1c0] */
    eax = MEM32(eax); /* 0x121528D9: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121528DB: push ebx */
    RECOMP_ICALL(eax); /* 0x121528DC: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x1B0); /* 0x121528DE: mov eax, dword ptr [ebx + 0x1b0] */
    eax = MEM32(eax); /* 0x121528E4: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121528E6: push ebx */
    RECOMP_ICALL(eax); /* 0x121528E7: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x1B0); /* 0x121528E9: mov eax, dword ptr [ebx + 0x1b0] */
    ecx = MEM32(ebx + 0x1B8); /* 0x121528EF: mov ecx, dword ptr [ebx + 0x1b8] */
    eax = MEM32(eax + 0x4); /* 0x121528F5: mov eax, dword ptr [eax + 4] */
    MEM32(ecx) = eax; /* 0x121528F8: mov dword ptr [ecx], eax */
    ebx = POP32_VAL(esp); /* 0x121528FA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121528FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121528FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12152910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152910u);

L_12152910:
    edi = edi; /* 0x12152910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152912: push ebp */
    ebp = esp; /* 0x12152913: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12152915: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152916: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12152919: push edi */
    edi = MEM32(esi + 0x1B8); /* 0x1215291A: mov edi, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x12152920: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12152931; /* 0x12152924: je 0x12152931 */
L_12152926:
    edi = POP32_VAL(esp); /* 0x12152926: pop edi */
    eax = 2; /* 0x12152927: mov eax, 2 */
    esi = POP32_VAL(esp); /* 0x1215292C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215292D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215292E: ret 4 */
L_12152931:
    eax = MEM32(esi + 0x1BC); /* 0x12152931: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax + 0x4); /* 0x12152937: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x1215293A: push ebx */
    PUSH32(esp, esi); /* 0x1215293B: push esi */
    RECOMP_ICALL(eax); /* 0x1215293C: call eax */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1215293E: mov ebx, eax */
    ecx = ebx; /* 0x12152940: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12152942: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12152999; /* 0x12152943: je 0x12152999 */
L_12152945:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12152945: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121529D0; /* 0x12152946: jne 0x121529d0 */
L_1215294C:
    MEM32(edi + 0x14) = 1; /* 0x1215294C: mov dword ptr [edi + 0x14], 1 */
    /* cmp MEM32(edi + 0x18), ecx */ /* 0x12152953: cmp dword ptr [edi + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215297C; /* 0x12152956: je 0x1215297c */
L_12152958:
    eax = MEM32(esi + 0x1BC); /* 0x12152958: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0x10), ecx */ /* 0x1215295E: cmp dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121529D0; /* 0x12152961: je 0x121529d0 */
L_12152963:
    eax = MEM32(esi); /* 0x12152963: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x3Bu; /* 0x12152965: mov dword ptr [eax + 0x14], 0x3b */
    eax = MEM32(esi); /* 0x1215296C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215296E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152970: push esi */
    RECOMP_ICALL(eax); /* 0x12152971: call eax */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x12152973: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12152975: pop ebx */
    edi = POP32_VAL(esp); /* 0x12152976: pop edi */
    esi = POP32_VAL(esp); /* 0x12152977: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152978: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152979: ret 4 */
L_1215297C:
    eax = MEM32(esi + 0x94); /* 0x1215297C: mov eax, dword ptr [esi + 0x94] */
    /* cmp MEM32(esi + 0x9C), eax */ /* 0x12152982: cmp dword ptr [esi + 0x9c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x9C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121529D0; /* 0x12152988: jle 0x121529d0 */
L_1215298A:
    MEM32(esi + 0x9C) = eax; /* 0x1215298A: mov dword ptr [esi + 0x9c], eax */
    eax = ebx; /* 0x12152990: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12152992: pop ebx */
    edi = POP32_VAL(esp); /* 0x12152993: pop edi */
    esi = POP32_VAL(esp); /* 0x12152994: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152995: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152996: ret 4 */
L_12152999:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x12152999: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121529B4; /* 0x1215299D: je 0x121529b4 */
L_1215299F:
    RECOMP_CALL(sub_12152460); /* 0x1215299F: call 0x12152460 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x121529A4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x121529A6: pop ebx */
    MEM32(edi + 0x18) = 0; /* 0x121529A7: mov dword ptr [edi + 0x18], 0 */
    edi = POP32_VAL(esp); /* 0x121529AE: pop edi */
    esi = POP32_VAL(esp); /* 0x121529AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x121529B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121529B1: ret 4 */
L_121529B4:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x121529B4: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121529CA; /* 0x121529B8: jne 0x121529ca */
L_121529BA:
    eax = MEM32(esi); /* 0x121529BA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x23u; /* 0x121529BC: mov dword ptr [eax + 0x14], 0x23 */
    eax = MEM32(esi); /* 0x121529C3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121529C5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121529C7: push esi */
    RECOMP_ICALL(eax); /* 0x121529C8: call eax */
    RECOMP_FLAGS_IN();
L_121529CA:
    PUSH32(esp, esi); /* 0x121529CA: push esi */
    RECOMP_CALL(sub_121528C0); /* 0x121529CB: call 0x121528c0 */
    RECOMP_FLAGS_IN();
L_121529D0:
    eax = ebx; /* 0x121529D0: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x121529D2: pop ebx */
    edi = POP32_VAL(esp); /* 0x121529D3: pop edi */
    esi = POP32_VAL(esp); /* 0x121529D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121529D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121529D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121529E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121529E0u);

L_121529E0:
    edi = edi; /* 0x121529E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121529E2: push ebp */
    ebp = esp; /* 0x121529E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121529E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121529E6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1B8); /* 0x121529E9: mov eax, dword ptr [esi + 0x1b8] */
    MEM32(eax) = 0x12152910u; /* 0x121529EF: mov dword ptr [eax], 0x12152910 */
    MEM32(eax + 0x10) = 0; /* 0x121529F5: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x121529FC: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 1; /* 0x12152A03: mov dword ptr [eax + 0x18], 1 */
    eax = MEM32(esi); /* 0x12152A0A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x12152A0C: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x12152A0F: push esi */
    RECOMP_ICALL(eax); /* 0x12152A10: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x12152A12: mov eax, dword ptr [esi + 0x1bc] */
    eax = MEM32(eax); /* 0x12152A18: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152A1A: push esi */
    RECOMP_ICALL(eax); /* 0x12152A1B: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xA4) = 0; /* 0x12152A1D: mov dword ptr [esi + 0xa4], 0 */
    esi = POP32_VAL(esp); /* 0x12152A27: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152A28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152A29: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12152A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152A40u);

L_12152A40:
    edi = edi; /* 0x12152A40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152A42: push ebp */
    ebp = esp; /* 0x12152A43: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12152A45: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x1B8); /* 0x12152A48: mov eax, dword ptr [eax + 0x1b8] */
    MEM32(eax) = 0x12152910u; /* 0x12152A4E: mov dword ptr [eax], 0x12152910 */
    ebp = POP32_VAL(esp); /* 0x12152A54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152A55: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12152A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152A60u);

L_12152A60:
    edi = edi; /* 0x12152A60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152A62: push ebp */
    ebp = esp; /* 0x12152A63: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12152A65: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152A66: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12152A69: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x12152A6C: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x1Cu); /* 0x12152A6E: push 0x1c */
    PUSH32(esp, 0); /* 0x12152A70: push 0 */
    PUSH32(esp, esi); /* 0x12152A72: push esi */
    RECOMP_ICALL(eax); /* 0x12152A73: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1B8) = eax; /* 0x12152A75: mov dword ptr [esi + 0x1b8], eax */
    MEM32(eax) = 0x12152910u; /* 0x12152A7B: mov dword ptr [eax], 0x12152910 */
    MEM32(eax + 0x4) = 0x121529E0u; /* 0x12152A81: mov dword ptr [eax + 4], 0x121529e0 */
    MEM32(eax + 0x8) = 0x121528C0u; /* 0x12152A88: mov dword ptr [eax + 8], 0x121528c0 */
    MEM32(eax + 0xC) = 0x12152A40u; /* 0x12152A8F: mov dword ptr [eax + 0xc], 0x12152a40 */
    MEM32(eax + 0x10) = 0; /* 0x12152A96: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x12152A9D: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 1; /* 0x12152AA4: mov dword ptr [eax + 0x18], 1 */
    esi = POP32_VAL(esp); /* 0x12152AAB: pop esi */
    ebp = POP32_VAL(esp); /* 0x12152AAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12152AAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12152AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152AC0u);

L_12152AC0:
    edi = edi; /* 0x12152AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152AC2: push ebp */
    ebp = esp; /* 0x12152AC3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12152AC5: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x12152AC6: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12152AC9: push esi */
    PUSH32(esp, edi); /* 0x12152ACA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12152ACB: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x12152ACE: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x12152AD1: mov dword ptr [ebp + 8], eax */
    /* cmp ebx, 0x3B9AC9F0u */ /* 0x12152AD4: cmp ebx, 0x3b9ac9f0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3B9AC9F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12152AF5; /* 0x12152ADA: jbe 0x12152af5 */
L_12152ADC:
    eax = MEM32(edi); /* 0x12152ADC: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x12152ADE: mov dword ptr [eax + 0x14], 0x36 */
    eax = MEM32(edi); /* 0x12152AE5: mov eax, dword ptr [edi] */
    MEM32(eax + 0x18) = 1; /* 0x12152AE7: mov dword ptr [eax + 0x18], 1 */
    eax = MEM32(edi); /* 0x12152AEE: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x12152AF0: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12152AF2: push edi */
    RECOMP_ICALL(eax); /* 0x12152AF3: call eax */
    RECOMP_FLAGS_IN();
L_12152AF5:
    ecx = ebx; /* 0x12152AF5: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x12152AF7: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152B05; /* 0x12152AFA: jbe 0x12152b05 */
L_12152AFC:
    eax = 8; /* 0x12152AFC: mov eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12152B01: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x12152B03: add ebx, eax */
    _flag_k = FK_ADD;
L_12152B05:
    esi = MEM32(ebp + 0xC); /* 0x12152B05: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x12152B08: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12152B11; /* 0x12152B0A: js 0x12152b11 */
L_12152B0C:
    /* cmp esi, 2 */ /* 0x12152B0C: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152B26; /* 0x12152B0F: jl 0x12152b26 */
L_12152B11:
    eax = MEM32(edi); /* 0x12152B11: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12152B13: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(edi); /* 0x12152B1A: mov eax, dword ptr [edi] */
    MEM32(eax + 0x18) = esi; /* 0x12152B1C: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(edi); /* 0x12152B1F: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x12152B21: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12152B23: push edi */
    RECOMP_ICALL(eax); /* 0x12152B24: call eax */
    RECOMP_FLAGS_IN();
L_12152B26:
    edx = MEM32(ebp + 0x8); /* 0x12152B26: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + esi * 4 + 0x34); /* 0x12152B29: mov edx, dword ptr [edx + esi*4 + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12152B2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x12152B2F: mov dword ptr [ebp + 0x10], eax */
    /* test edx, edx */ /* 0x12152B32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152B4A; /* 0x12152B34: je 0x12152b4a */
L_12152B36:
    /* cmp MEM32(edx + 0x8), ebx */ /* 0x12152B36: cmp dword ptr [edx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12152BE0; /* 0x12152B39: jae 0x12152be0 */
L_12152B3F:
    eax = edx; /* 0x12152B3F: mov eax, edx */
    MEM32(ebp + 0x10) = edx; /* 0x12152B41: mov dword ptr [ebp + 0x10], edx */
    edx = MEM32(edx); /* 0x12152B44: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x12152B46: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152B36; /* 0x12152B48: jne 0x12152b36 */
L_12152B4A:
    ecx = ebx + 0x10; /* 0x12152B4A: lea ecx, [ebx + 0x10] */
    /* test eax, eax */ /* 0x12152B4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152B5A; /* 0x12152B4F: jne 0x12152b5a */
L_12152B51:
    esi = MEM32(esi * 4 + 0x12012F50); /* 0x12152B51: mov esi, dword ptr [esi*4 + 0x12012f50] */
    goto L_12152B61; /* 0x12152B58: jmp 0x12152b61 */
L_12152B5A:
    esi = MEM32(esi * 4 + 0x12012F58); /* 0x12152B5A: mov esi, dword ptr [esi*4 + 0x12012f58] */
L_12152B61:
    eax = 0x3B9ACA00u; /* 0x12152B61: mov eax, 0x3b9aca00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12152B66: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x12152B68: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12152B6E; /* 0x12152B6A: jbe 0x12152b6e */
L_12152B6C:
    esi = eax; /* 0x12152B6C: mov esi, eax */
L_12152B6E:
    eax = esi + ecx; /* 0x12152B6E: lea eax, [esi + ecx] */
    PUSH32(esp, eax); /* 0x12152B71: push eax */
    PUSH32(esp, edi); /* 0x12152B72: push edi */
    RECOMP_CALL(sub_12155530); /* 0x12152B73: call 0x12155530 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12152B78: mov edx, eax */
    /* test edx, edx */ /* 0x12152B7A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152BB1; /* 0x12152B7C: jne 0x12152bb1 */
L_12152B7E:
    edi = edi; /* 0x12152B7E: mov edi, edi */
L_12152B80:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x12152B80: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x12152B80: shr esi, 1 */
    /* cmp esi, 0x32u */ /* 0x12152B82: cmp esi, 0x32 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12152BA0; /* 0x12152B85: jae 0x12152ba0 */
L_12152B87:
    eax = MEM32(edi); /* 0x12152B87: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x12152B89: mov dword ptr [eax + 0x14], 0x36 */
    eax = MEM32(edi); /* 0x12152B90: mov eax, dword ptr [edi] */
    MEM32(eax + 0x18) = 2; /* 0x12152B92: mov dword ptr [eax + 0x18], 2 */
    eax = MEM32(edi); /* 0x12152B99: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x12152B9B: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12152B9D: push edi */
    RECOMP_ICALL(eax); /* 0x12152B9E: call eax */
    RECOMP_FLAGS_IN();
L_12152BA0:
    eax = esi + ebx + 0x10; /* 0x12152BA0: lea eax, [esi + ebx + 0x10] */
    PUSH32(esp, eax); /* 0x12152BA4: push eax */
    PUSH32(esp, edi); /* 0x12152BA5: push edi */
    RECOMP_CALL(sub_12155530); /* 0x12152BA6: call 0x12155530 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12152BAB: mov edx, eax */
    /* test edx, edx */ /* 0x12152BAD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152B80; /* 0x12152BAF: je 0x12152b80 */
L_12152BB1:
    edi = MEM32(ebp + 0x8); /* 0x12152BB1: mov edi, dword ptr [ebp + 8] */
    eax = esi + ebx + 0x10; /* 0x12152BB4: lea eax, [esi + ebx + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4C) = MEM32(edi + 0x4C) + eax; /* 0x12152BB8: add dword ptr [edi + 0x4c], eax */
    _flag_k = FK_ADD;
    eax = esi + ebx; /* 0x12152BBB: lea eax, [esi + ebx] */
    MEM32(edx + 0x8) = eax; /* 0x12152BBE: mov dword ptr [edx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x12152BC1: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx) = 0; /* 0x12152BC4: mov dword ptr [edx], 0 */
    MEM32(edx + 0x4) = 0; /* 0x12152BCA: mov dword ptr [edx + 4], 0 */
    /* test eax, eax */ /* 0x12152BD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152BDE; /* 0x12152BD3: jne 0x12152bde */
L_12152BD5:
    eax = MEM32(ebp + 0xC); /* 0x12152BD5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi + eax * 4 + 0x34) = edx; /* 0x12152BD8: mov dword ptr [edi + eax*4 + 0x34], edx */
    goto L_12152BE0; /* 0x12152BDC: jmp 0x12152be0 */
L_12152BDE:
    MEM32(eax) = edx; /* 0x12152BDE: mov dword ptr [eax], edx */
L_12152BE0:
    ecx = MEM32(edx + 0x4); /* 0x12152BE0: mov ecx, dword ptr [edx + 4] */
    edi = POP32_VAL(esp); /* 0x12152BE3: pop edi */
    eax = ecx + edx + 0x10; /* 0x12152BE4: lea eax, [ecx + edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x12152BE8: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) - ebx; /* 0x12152BEA: sub dword ptr [edx + 8], ebx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x12152BED: pop esi */
    MEM32(edx + 0x4) = ecx; /* 0x12152BEE: mov dword ptr [edx + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x12152BF1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12152BF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12152BF3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12152C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152C00u);

L_12152C00:
    edi = edi; /* 0x12152C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152C02: push ebp */
    ebp = esp; /* 0x12152C03: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12152C05: push ecx */
    PUSH32(esp, ebx); /* 0x12152C06: push ebx */
    PUSH32(esp, esi); /* 0x12152C07: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152C08: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12152C0B: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x12152C0E: push edi */
    edi = MEM32(ebp + 0x10); /* 0x12152C0F: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12152C12: mov dword ptr [ebp - 4], eax */
    /* cmp edi, 0x3B9AC9F0u */ /* 0x12152C15: cmp edi, 0x3b9ac9f0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3B9AC9F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12152C36; /* 0x12152C1B: jbe 0x12152c36 */
L_12152C1D:
    eax = MEM32(esi); /* 0x12152C1D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x12152C1F: mov dword ptr [eax + 0x14], 0x36 */
    eax = MEM32(esi); /* 0x12152C26: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = 3; /* 0x12152C28: mov dword ptr [eax + 0x18], 3 */
    eax = MEM32(esi); /* 0x12152C2F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152C31: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152C33: push esi */
    RECOMP_ICALL(eax); /* 0x12152C34: call eax */
    RECOMP_FLAGS_IN();
L_12152C36:
    ecx = edi; /* 0x12152C36: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x12152C38: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152C46; /* 0x12152C3B: jbe 0x12152c46 */
L_12152C3D:
    eax = 8; /* 0x12152C3D: mov eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12152C42: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12152C44: add edi, eax */
    _flag_k = FK_ADD;
L_12152C46:
    ebx = MEM32(ebp + 0xC); /* 0x12152C46: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x12152C49: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12152C52; /* 0x12152C4B: js 0x12152c52 */
L_12152C4D:
    /* cmp ebx, 2 */ /* 0x12152C4D: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152C67; /* 0x12152C50: jl 0x12152c67 */
L_12152C52:
    eax = MEM32(esi); /* 0x12152C52: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12152C54: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(esi); /* 0x12152C5B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12152C5D: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12152C60: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152C62: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152C64: push esi */
    RECOMP_ICALL(eax); /* 0x12152C65: call eax */
    RECOMP_FLAGS_IN();
L_12152C67:
    eax = edi + 0x10; /* 0x12152C67: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x12152C6A: push eax */
    PUSH32(esp, esi); /* 0x12152C6B: push esi */
    RECOMP_CALL(sub_12155530); /* 0x12152C6C: call 0x12155530 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12152C71: mov edx, eax */
    MEM32(ebp + 0x8) = edx; /* 0x12152C73: mov dword ptr [ebp + 8], edx */
    /* test edx, edx */ /* 0x12152C76: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152C96; /* 0x12152C78: jne 0x12152c96 */
L_12152C7A:
    ecx = MEM32(esi); /* 0x12152C7A: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x36u; /* 0x12152C7C: mov dword ptr [ecx + 0x14], 0x36 */
    ecx = MEM32(esi); /* 0x12152C83: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = 4; /* 0x12152C85: mov dword ptr [ecx + 0x18], 4 */
    eax = MEM32(esi); /* 0x12152C8C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152C8E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152C90: push esi */
    RECOMP_ICALL(eax); /* 0x12152C91: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x12152C93: mov edx, dword ptr [ebp + 8] */
L_12152C96:
    esi = MEM32(ebp + (-0x4)); /* 0x12152C96: mov esi, dword ptr [ebp - 4] */
    eax = edi + 0x10; /* 0x12152C99: lea eax, [edi + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) + eax; /* 0x12152C9C: add dword ptr [esi + 0x4c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + ebx * 4 + 0x3C); /* 0x12152C9F: mov eax, dword ptr [esi + ebx*4 + 0x3c] */
    MEM32(edx + 0x4) = edi; /* 0x12152CA3: mov dword ptr [edx + 4], edi */
    MEM32(edx) = eax; /* 0x12152CA6: mov dword ptr [edx], eax */
    edi = POP32_VAL(esp); /* 0x12152CA8: pop edi */
    MEM32(edx + 0x8) = 0; /* 0x12152CA9: mov dword ptr [edx + 8], 0 */
    MEM32(esi + ebx * 4 + 0x3C) = edx; /* 0x12152CB0: mov dword ptr [esi + ebx*4 + 0x3c], edx */
    esi = POP32_VAL(esp); /* 0x12152CB4: pop esi */
    eax = edx + 0x10; /* 0x12152CB5: lea eax, [edx + 0x10] */
    ebx = POP32_VAL(esp); /* 0x12152CB8: pop ebx */
    esp = ebp; /* 0x12152CB9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12152CBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12152CBC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12152CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152CD0u);

L_12152CD0:
    edi = edi; /* 0x12152CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152CD2: push ebp */
    ebp = esp; /* 0x12152CD3: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12152CD5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3B9AC9F0u; /* 0x12152CD7: mov eax, 0x3b9ac9f0 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x12152CDC: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, ebx); /* 0x12152CDF: push ebx */
    PUSH32(esp, esi); /* 0x12152CE0: push esi */
    PUSH32(esp, edi); /* 0x12152CE1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12152CE2: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x4); /* 0x12152CE5: mov esi, dword ptr [edi + 4] */
    ebx = eax; /* 0x12152CE8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12152CEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12152CFE; /* 0x12152CEC: jg 0x12152cfe */
L_12152CEE:
    ecx = MEM32(edi); /* 0x12152CEE: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x14) = 0x46u; /* 0x12152CF0: mov dword ptr [ecx + 0x14], 0x46 */
    ecx = MEM32(edi); /* 0x12152CF7: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x12152CF9: mov ecx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x12152CFB: push edi */
    RECOMP_ICALL(ecx); /* 0x12152CFC: call ecx */
    RECOMP_FLAGS_IN();
L_12152CFE:
    eax = MEM32(ebp + 0x14); /* 0x12152CFE: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, eax */ /* 0x12152D01: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152D07; /* 0x12152D03: jl 0x12152d07 */
L_12152D05:
    ebx = eax; /* 0x12152D05: mov ebx, eax */
L_12152D07:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152D07: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12152D09: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12152D0B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12152D0C: push dword ptr [ebp + 0xc] */
    MEM32(esi + 0x50) = ebx; /* 0x12152D0F: mov dword ptr [esi + 0x50], ebx */
    PUSH32(esp, edi); /* 0x12152D12: push edi */
    RECOMP_CALL(sub_12152AC0); /* 0x12152D13: call 0x12152ac0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12152D18: mov edi, eax */
    eax = MEM32(ebp + 0x14); /* 0x12152D1A: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12152D1D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12152D1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152D58; /* 0x12152D21: je 0x12152d58 */
L_12152D23:
    ecx = eax; /* 0x12152D23: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12152D25: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ebx, ecx */ /* 0x12152D27: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12152D2D; /* 0x12152D29: jb 0x12152d2d */
L_12152D2B:
    ebx = ecx; /* 0x12152D2B: mov ebx, ecx */
L_12152D2D:
    eax = ebx; /* 0x12152D2D: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x12152D2F: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x12152D33: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12152D34: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12152D37: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152C00); /* 0x12152D3A: call 0x12152c00 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x12152D3F: mov ecx, ebx */
    /* test ebx, ebx */ /* 0x12152D41: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152D51; /* 0x12152D43: je 0x12152d51 */
L_12152D45:
    edx = MEM32(ebp + 0x10); /* 0x12152D45: mov edx, dword ptr [ebp + 0x10] */
L_12152D48:
    MEM32(edi + esi * 4) = eax; /* 0x12152D48: mov dword ptr [edi + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12152D4B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12152D4C: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12152D4E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12152D48; /* 0x12152D4F: jne 0x12152d48 */
L_12152D51:
    eax = MEM32(ebp + 0x14); /* 0x12152D51: mov eax, dword ptr [ebp + 0x14] */
    /* cmp esi, eax */ /* 0x12152D54: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12152D23; /* 0x12152D56: jb 0x12152d23 */
L_12152D58:
    eax = edi; /* 0x12152D58: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12152D5A: pop edi */
    esi = POP32_VAL(esp); /* 0x12152D5B: pop esi */
    ebx = POP32_VAL(esp); /* 0x12152D5C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12152D5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12152D5E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12152D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152D70u);

L_12152D70:
    edi = edi; /* 0x12152D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152D72: push ebp */
    ebp = esp; /* 0x12152D73: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12152D75: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12152D76: mov ecx, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x12152D79: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x12152D79: shl ecx, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12152D7C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3B9AC9F0u; /* 0x12152D7E: mov eax, 0x3b9ac9f0 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12152D83: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, ebx); /* 0x12152D85: push ebx */
    PUSH32(esp, esi); /* 0x12152D86: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152D87: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12152D8A: push edi */
    edi = MEM32(esi + 0x4); /* 0x12152D8B: mov edi, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12152D8E: mov dword ptr [ebp - 4], ecx */
    ebx = eax; /* 0x12152D91: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12152D93: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12152DA0; /* 0x12152D95: jle 0x12152da0 */
L_12152D97:
    /* cmp MEM32(ebp + 0x10), 0x01FFFFFFu */ /* 0x12152D97: cmp dword ptr [ebp + 0x10], 0x1ffffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x01FFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12152DB3; /* 0x12152D9E: jbe 0x12152db3 */
L_12152DA0:
    ecx = MEM32(esi); /* 0x12152DA0: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x46u; /* 0x12152DA2: mov dword ptr [ecx + 0x14], 0x46 */
    eax = MEM32(esi); /* 0x12152DA9: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152DAB: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152DAD: push esi */
    RECOMP_ICALL(eax); /* 0x12152DAE: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12152DB0: mov ecx, dword ptr [ebp - 4] */
L_12152DB3:
    esi = MEM32(ebp + 0x14); /* 0x12152DB3: mov esi, dword ptr [ebp + 0x14] */
    /* cmp ebx, esi */ /* 0x12152DB6: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152DBC; /* 0x12152DB8: jl 0x12152dbc */
L_12152DBA:
    ebx = esi; /* 0x12152DBA: mov ebx, esi */
L_12152DBC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x12152DBC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12152DBF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12152DC1: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp ebx, eax */ /* 0x12152DC3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12152DDA; /* 0x12152DC5: jbe 0x12152dda */
L_12152DC7:
    ecx = MEM32(ebp + 0x8); /* 0x12152DC7: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12152DCA: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x46u; /* 0x12152DCC: mov dword ptr [eax + 0x14], 0x46 */
    eax = MEM32(ecx); /* 0x12152DD3: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x12152DD5: mov eax, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x12152DD7: push ecx */
    RECOMP_ICALL(eax); /* 0x12152DD8: call eax */
    RECOMP_FLAGS_IN();
L_12152DDA:
    eax = esi * 4; /* 0x12152DDA: lea eax, [esi*4] */
    PUSH32(esp, eax); /* 0x12152DE1: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12152DE2: push dword ptr [ebp + 0xc] */
    MEM32(edi + 0x50) = ebx; /* 0x12152DE5: mov dword ptr [edi + 0x50], ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12152DE8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152AC0); /* 0x12152DEB: call 0x12152ac0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12152DF0: mov edi, eax */
    eax = MEM32(ebp + 0x14); /* 0x12152DF2: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12152DF5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12152DF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152E38; /* 0x12152DF9: je 0x12152e38 */
L_12152DFB:
    goto L_12152E00; /* 0x12152DFB: jmp 0x12152e00 */
L_12152E00:
    ecx = eax; /* 0x12152E00: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12152E02: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ebx, ecx */ /* 0x12152E04: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12152E0A; /* 0x12152E06: jb 0x12152e0a */
L_12152E08:
    ebx = ecx; /* 0x12152E08: mov ebx, ecx */
L_12152E0A:
    eax = ebx; /* 0x12152E0A: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x12152E0C: imul eax, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x12152E10: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x12152E10: shl eax, 7 */
    PUSH32(esp, eax); /* 0x12152E13: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12152E14: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12152E17: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152C00); /* 0x12152E1A: call 0x12152c00 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x12152E1F: mov ecx, ebx */
    /* test ebx, ebx */ /* 0x12152E21: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152E31; /* 0x12152E23: je 0x12152e31 */
L_12152E25:
    edx = MEM32(ebp + (-0x4)); /* 0x12152E25: mov edx, dword ptr [ebp - 4] */
L_12152E28:
    MEM32(edi + esi * 4) = eax; /* 0x12152E28: mov dword ptr [edi + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12152E2B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12152E2C: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12152E2E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12152E28; /* 0x12152E2F: jne 0x12152e28 */
L_12152E31:
    eax = MEM32(ebp + 0x14); /* 0x12152E31: mov eax, dword ptr [ebp + 0x14] */
    /* cmp esi, eax */ /* 0x12152E34: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12152E00; /* 0x12152E36: jb 0x12152e00 */
L_12152E38:
    eax = edi; /* 0x12152E38: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12152E3A: pop edi */
    esi = POP32_VAL(esp); /* 0x12152E3B: pop esi */
    ebx = POP32_VAL(esp); /* 0x12152E3C: pop ebx */
    esp = ebp; /* 0x12152E3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12152E3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12152E40: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12152E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152E50u);

L_12152E50:
    edi = edi; /* 0x12152E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152E52: push ebp */
    ebp = esp; /* 0x12152E53: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12152E55: push ebx */
    PUSH32(esp, esi); /* 0x12152E56: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152E57: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0x4); /* 0x12152E5A: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x12152E5D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12152E5E: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 1 */ /* 0x12152E61: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12152E7B; /* 0x12152E64: je 0x12152e7b */
L_12152E66:
    eax = MEM32(esi); /* 0x12152E66: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12152E68: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(esi); /* 0x12152E6F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edi; /* 0x12152E71: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(esi); /* 0x12152E74: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152E76: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152E78: push esi */
    RECOMP_ICALL(eax); /* 0x12152E79: call eax */
    RECOMP_FLAGS_IN();
L_12152E7B:
    PUSH32(esp, 0x248u); /* 0x12152E7B: push 0x248 */
    PUSH32(esp, edi); /* 0x12152E80: push edi */
    PUSH32(esp, esi); /* 0x12152E81: push esi */
    RECOMP_CALL(sub_12152AC0); /* 0x12152E82: call 0x12152ac0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x12152E87: mov ecx, dword ptr [ebp + 0x18] */
    edx = eax; /* 0x12152E8A: mov edx, eax */
    MEM32(edx + 0x4) = ecx; /* 0x12152E8C: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x12152E8F: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x8) = ecx; /* 0x12152E92: mov dword ptr [edx + 8], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x12152E95: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0xC) = ecx; /* 0x12152E98: mov dword ptr [edx + 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12152E9B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edx) = 0; /* 0x12152E9E: mov dword ptr [edx], 0 */
    MEM32(edx + 0x20) = ecx; /* 0x12152EA4: mov dword ptr [edx + 0x20], ecx */
    MEM32(edx + 0x28) = 0; /* 0x12152EA7: mov dword ptr [edx + 0x28], 0 */
    eax = MEM32(ebx + 0x44); /* 0x12152EAE: mov eax, dword ptr [ebx + 0x44] */
    edi = POP32_VAL(esp); /* 0x12152EB1: pop edi */
    MEM32(edx + 0x2C) = eax; /* 0x12152EB2: mov dword ptr [edx + 0x2c], eax */
    esi = POP32_VAL(esp); /* 0x12152EB5: pop esi */
    MEM32(ebx + 0x44) = edx; /* 0x12152EB6: mov dword ptr [ebx + 0x44], edx */
    eax = edx; /* 0x12152EB9: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x12152EBB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12152EBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12152EBD: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12152ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152ED0u);

L_12152ED0:
    edi = edi; /* 0x12152ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152ED2: push ebp */
    ebp = esp; /* 0x12152ED3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12152ED5: push ebx */
    PUSH32(esp, esi); /* 0x12152ED6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12152ED7: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0x4); /* 0x12152EDA: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x12152EDD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12152EDE: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 1 */ /* 0x12152EE1: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12152EFB; /* 0x12152EE4: je 0x12152efb */
L_12152EE6:
    eax = MEM32(esi); /* 0x12152EE6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12152EE8: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(esi); /* 0x12152EEF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edi; /* 0x12152EF1: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(esi); /* 0x12152EF4: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12152EF6: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12152EF8: push esi */
    RECOMP_ICALL(eax); /* 0x12152EF9: call eax */
    RECOMP_FLAGS_IN();
L_12152EFB:
    PUSH32(esp, 0x248u); /* 0x12152EFB: push 0x248 */
    PUSH32(esp, edi); /* 0x12152F00: push edi */
    PUSH32(esp, esi); /* 0x12152F01: push esi */
    RECOMP_CALL(sub_12152AC0); /* 0x12152F02: call 0x12152ac0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x12152F07: mov ecx, dword ptr [ebp + 0x18] */
    edx = eax; /* 0x12152F0A: mov edx, eax */
    MEM32(edx + 0x4) = ecx; /* 0x12152F0C: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x12152F0F: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x8) = ecx; /* 0x12152F12: mov dword ptr [edx + 8], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x12152F15: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0xC) = ecx; /* 0x12152F18: mov dword ptr [edx + 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12152F1B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edx) = 0; /* 0x12152F1E: mov dword ptr [edx], 0 */
    MEM32(edx + 0x20) = ecx; /* 0x12152F24: mov dword ptr [edx + 0x20], ecx */
    MEM32(edx + 0x28) = 0; /* 0x12152F27: mov dword ptr [edx + 0x28], 0 */
    eax = MEM32(ebx + 0x48); /* 0x12152F2E: mov eax, dword ptr [ebx + 0x48] */
    edi = POP32_VAL(esp); /* 0x12152F31: pop edi */
    MEM32(edx + 0x2C) = eax; /* 0x12152F32: mov dword ptr [edx + 0x2c], eax */
    esi = POP32_VAL(esp); /* 0x12152F35: pop esi */
    MEM32(ebx + 0x48) = edx; /* 0x12152F36: mov dword ptr [ebx + 0x48], edx */
    eax = edx; /* 0x12152F39: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x12152F3B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12152F3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12152F3D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12152F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12152F50u);

L_12152F50:
    edi = edi; /* 0x12152F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12152F52: push ebp */
    ebp = esp; /* 0x12152F53: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12152F55: push ecx */
    PUSH32(esp, ebx); /* 0x12152F56: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12152F57: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x4); /* 0x12152F5A: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x44); /* 0x12152F5D: mov edx, dword ptr [eax + 0x44] */
    PUSH32(esp, esi); /* 0x12152F60: push esi */
    PUSH32(esp, edi); /* 0x12152F61: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12152F62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12152F64: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12152F66: mov dword ptr [ebp - 4], eax */
    /* test edx, edx */ /* 0x12152F69: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152F92; /* 0x12152F6B: je 0x12152f92 */
L_12152F6D:
    ecx = ecx; /* 0x12152F6D: lea ecx, [ecx] */
L_12152F70:
    /* cmp MEM32(edx), 0 */ /* 0x12152F70: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12152F88; /* 0x12152F73: jne 0x12152f88 */
L_12152F75:
    ecx = MEM32(edx + 0x8); /* 0x12152F75: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0xC); /* 0x12152F78: mov eax, dword ptr [edx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12152F7B: imul eax, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12152F7E: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x4); /* 0x12152F80: mov eax, dword ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12152F83: imul eax, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12152F86: add edi, eax */
    _flag_k = FK_ADD;
L_12152F88:
    edx = MEM32(edx + 0x2C); /* 0x12152F88: mov edx, dword ptr [edx + 0x2c] */
    /* test edx, edx */ /* 0x12152F8B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152F70; /* 0x12152F8D: jne 0x12152f70 */
L_12152F8F:
    eax = MEM32(ebp + (-0x4)); /* 0x12152F8F: mov eax, dword ptr [ebp - 4] */
L_12152F92:
    edx = MEM32(eax + 0x48); /* 0x12152F92: mov edx, dword ptr [eax + 0x48] */
    /* test edx, edx */ /* 0x12152F95: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12152FC8; /* 0x12152F97: je 0x12152fc8 */
L_12152F99:
    esp = esp; /* 0x12152F99: lea esp, [esp] */
L_12152FA0:
    /* cmp MEM32(edx), 0 */ /* 0x12152FA0: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12152FBE; /* 0x12152FA3: jne 0x12152fbe */
L_12152FA5:
    ecx = MEM32(edx + 0x8); /* 0x12152FA5: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0xC); /* 0x12152FA8: mov eax, dword ptr [edx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12152FAB: imul eax, ecx */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x12152FAE: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x12152FAE: shl eax, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12152FB1: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x4); /* 0x12152FB3: mov eax, dword ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12152FB6: imul eax, ecx */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x12152FB9: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x12152FB9: shl eax, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12152FBC: add edi, eax */
    _flag_k = FK_ADD;
L_12152FBE:
    edx = MEM32(edx + 0x2C); /* 0x12152FBE: mov edx, dword ptr [edx + 0x2c] */
    /* test edx, edx */ /* 0x12152FC1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12152FA0; /* 0x12152FC3: jne 0x12152fa0 */
L_12152FC5:
    eax = MEM32(ebp + (-0x4)); /* 0x12152FC5: mov eax, dword ptr [ebp - 4] */
L_12152FC8:
    /* test esi, esi */ /* 0x12152FC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121530F6; /* 0x12152FCA: jle 0x121530f6 */
L_12152FD0:
    PUSH32(esp, MEM32(eax + 0x4C)); /* 0x12152FD0: push dword ptr [eax + 0x4c] */
    PUSH32(esp, edi); /* 0x12152FD3: push edi */
    PUSH32(esp, esi); /* 0x12152FD4: push esi */
    PUSH32(esp, ebx); /* 0x12152FD5: push ebx */
    RECOMP_CALL(sub_121555A0); /* 0x12152FD6: call 0x121555a0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x12152FDB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12152FE6; /* 0x12152FDD: jl 0x12152fe6 */
L_12152FDF:
    ebx = 0x3B9ACA00u; /* 0x12152FDF: mov ebx, 0x3b9aca00 */
    goto L_12152FF4; /* 0x12152FE4: jmp 0x12152ff4 */
L_12152FE6:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x12152FE6: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x12152FE7: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x12152FE9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x12152FEB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12152FF4; /* 0x12152FED: jg 0x12152ff4 */
L_12152FEF:
    ebx = 1; /* 0x12152FEF: mov ebx, 1 */
L_12152FF4:
    eax = MEM32(ebp + (-0x4)); /* 0x12152FF4: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(eax + 0x44); /* 0x12152FF7: mov esi, dword ptr [eax + 0x44] */
    /* test esi, esi */ /* 0x12152FFA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153076; /* 0x12152FFC: je 0x12153076 */
L_12152FFE:
    edi = edi; /* 0x12152FFE: mov edi, edi */
L_12153000:
    /* cmp MEM32(esi), 0 */ /* 0x12153000: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215306C; /* 0x12153003: jne 0x1215306c */
L_12153005:
    ecx = MEM32(esi + 0x4); /* 0x12153005: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(esi + 0xC); /* 0x12153008: mov edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215300B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + (-0x1); /* 0x1215300D: lea eax, [ecx - 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x12153010: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12153012: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x12153013: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1215301C; /* 0x12153015: jg 0x1215301c */
L_12153017:
    MEM32(esi + 0x10) = ecx; /* 0x12153017: mov dword ptr [esi + 0x10], ecx */
    goto L_1215303C; /* 0x1215301A: jmp 0x1215303c */
L_1215301C:
    eax = MEM32(esi + 0x8); /* 0x1215301C: mov eax, dword ptr [esi + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x1215301F: imul edi, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x12153022: imul eax, ecx */
    PUSH32(esp, eax); /* 0x12153025: push eax */
    eax = esi + 0x30; /* 0x12153026: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x12153029: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215302A: push dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = edi; /* 0x1215302D: mov dword ptr [esi + 0x10], edi */
    RECOMP_CALL(sub_12155700); /* 0x12153030: call 0x12155700 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = 1; /* 0x12153035: mov dword ptr [esi + 0x28], 1 */
L_1215303C:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1215303C: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1215303F: push dword ptr [esi + 8] */
    PUSH32(esp, 1); /* 0x12153042: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12153044: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152CD0); /* 0x12153047: call 0x12152cd0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1215304C: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1215304E: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x50); /* 0x12153051: mov eax, dword ptr [eax + 0x50] */
    MEM32(esi + 0x14) = eax; /* 0x12153054: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = 0; /* 0x12153057: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x1215305E: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x24) = 0; /* 0x12153065: mov dword ptr [esi + 0x24], 0 */
L_1215306C:
    esi = MEM32(esi + 0x2C); /* 0x1215306C: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x1215306F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153000; /* 0x12153071: jne 0x12153000 */
L_12153073:
    eax = MEM32(ebp + (-0x4)); /* 0x12153073: mov eax, dword ptr [ebp - 4] */
L_12153076:
    esi = MEM32(eax + 0x48); /* 0x12153076: mov esi, dword ptr [eax + 0x48] */
    /* test esi, esi */ /* 0x12153079: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121530F6; /* 0x1215307B: je 0x121530f6 */
L_1215307D:
    ecx = ecx; /* 0x1215307D: lea ecx, [ecx] */
L_12153080:
    /* cmp MEM32(esi), 0 */ /* 0x12153080: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121530EF; /* 0x12153083: jne 0x121530ef */
L_12153085:
    ecx = MEM32(esi + 0x4); /* 0x12153085: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(esi + 0xC); /* 0x12153088: mov edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215308B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + (-0x1); /* 0x1215308D: lea eax, [ecx - 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x12153090: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12153092: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x12153093: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1215309C; /* 0x12153095: jg 0x1215309c */
L_12153097:
    MEM32(esi + 0x10) = ecx; /* 0x12153097: mov dword ptr [esi + 0x10], ecx */
    goto L_121530BF; /* 0x1215309A: jmp 0x121530bf */
L_1215309C:
    eax = MEM32(esi + 0x8); /* 0x1215309C: mov eax, dword ptr [esi + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x1215309F: imul edi, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x121530A2: imul eax, ecx */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x121530A5: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x121530A5: shl eax, 7 */
    PUSH32(esp, eax); /* 0x121530A8: push eax */
    eax = esi + 0x30; /* 0x121530A9: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x121530AC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121530AD: push dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = edi; /* 0x121530B0: mov dword ptr [esi + 0x10], edi */
    RECOMP_CALL(sub_12155700); /* 0x121530B3: call 0x12155700 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = 1; /* 0x121530B8: mov dword ptr [esi + 0x28], 1 */
L_121530BF:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x121530BF: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121530C2: push dword ptr [esi + 8] */
    PUSH32(esp, 1); /* 0x121530C5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121530C7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12152D70); /* 0x121530CA: call 0x12152d70 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x121530CF: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x121530D1: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x50); /* 0x121530D4: mov eax, dword ptr [eax + 0x50] */
    MEM32(esi + 0x14) = eax; /* 0x121530D7: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = 0; /* 0x121530DA: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x121530E1: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x24) = 0; /* 0x121530E8: mov dword ptr [esi + 0x24], 0 */
L_121530EF:
    esi = MEM32(esi + 0x2C); /* 0x121530EF: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x121530F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153080; /* 0x121530F4: jne 0x12153080 */
L_121530F6:
    edi = POP32_VAL(esp); /* 0x121530F6: pop edi */
    esi = POP32_VAL(esp); /* 0x121530F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x121530F8: pop ebx */
    esp = ebp; /* 0x121530F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121530FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121530FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12153110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153110u);

L_12153110:
    edi = edi; /* 0x12153110: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153112: push ebp */
    ebp = esp; /* 0x12153113: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12153115: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x8); /* 0x12153118: mov eax, dword ptr [edi + 8] */
    edx = MEM32(edi + 0x18); /* 0x1215311B: mov edx, dword ptr [edi + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x1215311E: imul edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x12153121: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x10); /* 0x12153124: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, ebx); /* 0x12153127: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12153128: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1215312A: mov dword ptr [ebp - 4], edx */
    /* test eax, eax */ /* 0x1215312D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215319A; /* 0x1215312F: jle 0x1215319a */
L_12153131:
    ecx = edi + 0x14; /* 0x12153131: lea ecx, [edi + 0x14] */
    PUSH32(esp, esi); /* 0x12153134: push esi */
L_12153135:
    esi = MEM32(ecx); /* 0x12153135: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x12153137: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x12153139: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215313F; /* 0x1215313B: jl 0x1215313f */
L_1215313D:
    esi = eax; /* 0x1215313D: mov esi, eax */
L_1215313F:
    ecx = MEM32(edi + 0x18); /* 0x1215313F: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x1C); /* 0x12153142: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x12153145: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12153147: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x12153149: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215314F; /* 0x1215314B: jl 0x1215314f */
L_1215314D:
    esi = eax; /* 0x1215314D: mov esi, eax */
L_1215314F:
    eax = MEM32(edi + 0x4); /* 0x1215314F: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12153152: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x12153154: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215315A; /* 0x12153156: jl 0x1215315a */
L_12153158:
    esi = eax; /* 0x12153158: mov esi, eax */
L_1215315A:
    /* test esi, esi */ /* 0x1215315A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12153199; /* 0x1215315C: jle 0x12153199 */
L_1215315E:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x8))); /* 0x1215315E: imul esi, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12153162: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x12153166: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x12153168: push esi */
    PUSH32(esp, edx); /* 0x12153169: push edx */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1215316A: push dword ptr [eax + ebx*4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153178; /* 0x1215316D: je 0x12153178 */
L_1215316F:
    eax = edi + 0x30; /* 0x1215316F: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x12153172: push eax */
    eax = MEM32(edi + 0x34); /* 0x12153173: mov eax, dword ptr [edi + 0x34] */
    goto L_1215317F; /* 0x12153176: jmp 0x1215317f */
L_12153178:
    eax = MEM32(edi + 0x30); /* 0x12153178: mov eax, dword ptr [edi + 0x30] */
    ecx = edi + 0x30; /* 0x1215317B: lea ecx, [edi + 0x30] */
    PUSH32(esp, ecx); /* 0x1215317E: push ecx */
L_1215317F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215317F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x12153182: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x12153184: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edi + 0x14); /* 0x12153187: add ebx, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x10); /* 0x1215318A: mov eax, dword ptr [edi + 0x10] */
    ecx = edi + 0x14; /* 0x1215318D: lea ecx, [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x12153190: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x12153192: mov dword ptr [ebp - 4], edx */
    /* cmp ebx, eax */ /* 0x12153195: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12153135; /* 0x12153197: jl 0x12153135 */
L_12153199:
    esi = POP32_VAL(esp); /* 0x12153199: pop esi */
L_1215319A:
    ebx = POP32_VAL(esp); /* 0x1215319A: pop ebx */
    esp = ebp; /* 0x1215319B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215319D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215319E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121531B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121531B0u);

L_121531B0:
    edi = edi; /* 0x121531B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121531B2: push ebp */
    ebp = esp; /* 0x121531B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x121531B5: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x8); /* 0x121531B8: mov eax, dword ptr [edi + 8] */
    edx = MEM32(edi + 0x18); /* 0x121531BB: mov edx, dword ptr [edi + 0x18] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x121531BE: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x121531BE: shl eax, 7 */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x121531C1: imul edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x121531C4: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edi + 0x10); /* 0x121531C7: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, ebx); /* 0x121531CA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121531CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x121531CD: mov dword ptr [ebp - 4], edx */
    /* test eax, eax */ /* 0x121531D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215323D; /* 0x121531D2: jle 0x1215323d */
L_121531D4:
    ecx = edi + 0x14; /* 0x121531D4: lea ecx, [edi + 0x14] */
    PUSH32(esp, esi); /* 0x121531D7: push esi */
L_121531D8:
    esi = MEM32(ecx); /* 0x121531D8: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x121531DA: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x121531DC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121531E2; /* 0x121531DE: jl 0x121531e2 */
L_121531E0:
    esi = eax; /* 0x121531E0: mov esi, eax */
L_121531E2:
    ecx = MEM32(edi + 0x18); /* 0x121531E2: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x1C); /* 0x121531E5: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x121531E8: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x121531EA: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x121531EC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121531F2; /* 0x121531EE: jl 0x121531f2 */
L_121531F0:
    esi = eax; /* 0x121531F0: mov esi, eax */
L_121531F2:
    eax = MEM32(edi + 0x4); /* 0x121531F2: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x121531F5: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x121531F7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121531FD; /* 0x121531F9: jl 0x121531fd */
L_121531FB:
    esi = eax; /* 0x121531FB: mov esi, eax */
L_121531FD:
    /* test esi, esi */ /* 0x121531FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215323C; /* 0x121531FF: jle 0x1215323c */
L_12153201:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x8))); /* 0x12153201: imul esi, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12153205: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x12153209: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1215320B: push esi */
    PUSH32(esp, edx); /* 0x1215320C: push edx */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1215320D: push dword ptr [eax + ebx*4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215321B; /* 0x12153210: je 0x1215321b */
L_12153212:
    eax = edi + 0x30; /* 0x12153212: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x12153215: push eax */
    eax = MEM32(edi + 0x34); /* 0x12153216: mov eax, dword ptr [edi + 0x34] */
    goto L_12153222; /* 0x12153219: jmp 0x12153222 */
L_1215321B:
    eax = MEM32(edi + 0x30); /* 0x1215321B: mov eax, dword ptr [edi + 0x30] */
    ecx = edi + 0x30; /* 0x1215321E: lea ecx, [edi + 0x30] */
    PUSH32(esp, ecx); /* 0x12153221: push ecx */
L_12153222:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12153222: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x12153225: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x12153227: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edi + 0x14); /* 0x1215322A: add ebx, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x10); /* 0x1215322D: mov eax, dword ptr [edi + 0x10] */
    ecx = edi + 0x14; /* 0x12153230: lea ecx, [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x12153233: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x12153235: mov dword ptr [ebp - 4], edx */
    /* cmp ebx, eax */ /* 0x12153238: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121531D8; /* 0x1215323A: jl 0x121531d8 */
L_1215323C:
    esi = POP32_VAL(esp); /* 0x1215323C: pop esi */
L_1215323D:
    ebx = POP32_VAL(esp); /* 0x1215323D: pop ebx */
    esp = ebp; /* 0x1215323E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12153240: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12153241: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12153250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153250u);

L_12153250:
    edi = edi; /* 0x12153250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153252: push ebp */
    ebp = esp; /* 0x12153253: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x12153255: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x12153258: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12153259: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1215325C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1215325D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12153260: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12153261: mov edi, dword ptr [ebp + 0xc] */
    ecx = esi + eax; /* 0x12153264: lea ecx, [esi + eax] */
    MEM32(ebp + 0x14) = ecx; /* 0x12153267: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, MEM32(edi + 0x4) */ /* 0x1215326A: cmp ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12153279; /* 0x1215326D: ja 0x12153279 */
L_1215326F:
    /* cmp eax, MEM32(edi + 0xC) */ /* 0x1215326F: cmp eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12153279; /* 0x12153272: ja 0x12153279 */
L_12153274:
    /* cmp MEM32(edi), 0 */ /* 0x12153274: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215328C; /* 0x12153277: jne 0x1215328c */
L_12153279:
    eax = MEM32(ebx); /* 0x12153279: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x1215327B: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x12153282: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12153284: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12153286: push ebx */
    RECOMP_ICALL(eax); /* 0x12153287: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x12153289: mov ecx, dword ptr [ebp + 0x14] */
L_1215328C:
    edx = MEM32(edi + 0x18); /* 0x1215328C: mov edx, dword ptr [edi + 0x18] */
    /* cmp esi, edx */ /* 0x1215328F: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1215329C; /* 0x12153291: jb 0x1215329c */
L_12153293:
    eax = MEM32(edi + 0x10); /* 0x12153293: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12153296: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x12153298: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121532E9; /* 0x1215329A: jbe 0x121532e9 */
L_1215329C:
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x1215329C: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121532B2; /* 0x121532A0: jne 0x121532b2 */
L_121532A2:
    eax = MEM32(ebx); /* 0x121532A2: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x45u; /* 0x121532A4: mov dword ptr [eax + 0x14], 0x45 */
    eax = MEM32(ebx); /* 0x121532AB: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121532AD: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121532AF: push ebx */
    RECOMP_ICALL(eax); /* 0x121532B0: call eax */
    RECOMP_FLAGS_IN();
L_121532B2:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x121532B2: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121532C7; /* 0x121532B6: je 0x121532c7 */
L_121532B8:
    PUSH32(esp, 1); /* 0x121532B8: push 1 */
    PUSH32(esp, ebx); /* 0x121532BA: push ebx */
    RECOMP_CALL(sub_12153110); /* 0x121532BB: call 0x12153110 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x24) = 0; /* 0x121532C0: mov dword ptr [edi + 0x24], 0 */
L_121532C7:
    /* cmp esi, MEM32(edi + 0x18) */ /* 0x121532C7: cmp esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121532D1; /* 0x121532CA: jbe 0x121532d1 */
L_121532CC:
    MEM32(edi + 0x18) = esi; /* 0x121532CC: mov dword ptr [edi + 0x18], esi */
    goto L_121532DE; /* 0x121532CF: jmp 0x121532de */
L_121532D1:
    eax = MEM32(ebp + 0x14); /* 0x121532D1: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x10); /* 0x121532D4: sub eax, dword ptr [edi + 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_121532DB; /* 0x121532D7: jns 0x121532db */
L_121532D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121532D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121532DB:
    MEM32(edi + 0x18) = eax; /* 0x121532DB: mov dword ptr [edi + 0x18], eax */
L_121532DE:
    PUSH32(esp, 0); /* 0x121532DE: push 0 */
    PUSH32(esp, ebx); /* 0x121532E0: push ebx */
    RECOMP_CALL(sub_12153110); /* 0x121532E1: call 0x12153110 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x121532E6: mov ecx, dword ptr [ebp + 0x14] */
L_121532E9:
    esi = MEM32(edi + 0x1C); /* 0x121532E9: mov esi, dword ptr [edi + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x121532EC: mov edx, dword ptr [ebp + 0x18] */
    /* cmp esi, ecx */ /* 0x121532EF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215334B; /* 0x121532F1: jae 0x1215334b */
L_121532F3:
    eax = MEM32(ebp + 0x10); /* 0x121532F3: mov eax, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x121532F6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12153319; /* 0x121532F8: jae 0x12153319 */
L_121532FA:
    /* test edx, edx */ /* 0x121532FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153317; /* 0x121532FC: je 0x12153317 */
L_121532FE:
    eax = MEM32(ebx); /* 0x121532FE: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x12153300: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x12153307: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12153309: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215330B: push ebx */
    RECOMP_ICALL(eax); /* 0x1215330C: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x1215330E: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x12153311: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x18); /* 0x12153314: mov edx, dword ptr [ebp + 0x18] */
L_12153317:
    esi = eax; /* 0x12153317: mov esi, eax */
L_12153319:
    /* test edx, edx */ /* 0x12153319: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153320; /* 0x1215331B: je 0x12153320 */
L_1215331D:
    MEM32(edi + 0x1C) = ecx; /* 0x1215331D: mov dword ptr [edi + 0x1c], ecx */
L_12153320:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x12153320: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153368; /* 0x12153324: je 0x12153368 */
L_12153326:
    eax = MEM32(edi + 0x18); /* 0x12153326: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x8); /* 0x12153329: mov ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1215332C: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1215332E: sub esi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ecx; /* 0x12153330: mov dword ptr [ebp + 0x14], ecx */
    /* cmp esi, ecx */ /* 0x12153333: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215334B; /* 0x12153335: jae 0x1215334b */
L_12153337:
    eax = MEM32(edi); /* 0x12153337: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x12153339: push ebx */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x1215333A: push dword ptr [eax + esi*4] */
    RECOMP_CALL(sub_12154150); /* 0x1215333D: call 0x12154150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12153342: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x12153343: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12153337; /* 0x12153346: jb 0x12153337 */
L_12153348:
    edx = MEM32(ebp + 0x18); /* 0x12153348: mov edx, dword ptr [ebp + 0x18] */
L_1215334B:
    /* test edx, edx */ /* 0x1215334B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153356; /* 0x1215334D: je 0x12153356 */
L_1215334F:
    MEM32(edi + 0x24) = 1; /* 0x1215334F: mov dword ptr [edi + 0x24], 1 */
L_12153356:
    ecx = MEM32(ebp + 0x10); /* 0x12153356: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x12153359: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x1215335C: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x1215335E: pop edi */
    esi = POP32_VAL(esp); /* 0x1215335F: pop esi */
    eax = eax + ecx * 4; /* 0x12153360: lea eax, [eax + ecx*4] */
    ebx = POP32_VAL(esp); /* 0x12153363: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12153364: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12153365: ret 0x14 */
L_12153368:
    /* test edx, edx */ /* 0x12153368: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215334F; /* 0x1215336A: jne 0x1215334f */
L_1215336C:
    eax = MEM32(ebx); /* 0x1215336C: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x1215336E: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x12153375: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12153377: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12153379: push ebx */
    RECOMP_ICALL(eax); /* 0x1215337A: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1215337C: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x1215337F: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x12153382: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x12153384: pop edi */
    esi = POP32_VAL(esp); /* 0x12153385: pop esi */
    eax = eax + ecx * 4; /* 0x12153386: lea eax, [eax + ecx*4] */
    ebx = POP32_VAL(esp); /* 0x12153389: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1215338A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1215338B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121533A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121533A0u);

L_121533A0:
    edi = edi; /* 0x121533A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121533A2: push ebp */
    ebp = esp; /* 0x121533A3: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x121533A5: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x121533A8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121533A9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121533AC: push esi */
    esi = MEM32(ebp + 0x10); /* 0x121533AD: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x121533B0: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121533B1: mov edi, dword ptr [ebp + 0xc] */
    ecx = esi + eax; /* 0x121533B4: lea ecx, [esi + eax] */
    MEM32(ebp + 0x14) = ecx; /* 0x121533B7: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, MEM32(edi + 0x4) */ /* 0x121533BA: cmp ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121533C9; /* 0x121533BD: ja 0x121533c9 */
L_121533BF:
    /* cmp eax, MEM32(edi + 0xC) */ /* 0x121533BF: cmp eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121533C9; /* 0x121533C2: ja 0x121533c9 */
L_121533C4:
    /* cmp MEM32(edi), 0 */ /* 0x121533C4: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121533DC; /* 0x121533C7: jne 0x121533dc */
L_121533C9:
    eax = MEM32(ebx); /* 0x121533C9: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x121533CB: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x121533D2: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121533D4: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121533D6: push ebx */
    RECOMP_ICALL(eax); /* 0x121533D7: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x121533D9: mov ecx, dword ptr [ebp + 0x14] */
L_121533DC:
    edx = MEM32(edi + 0x18); /* 0x121533DC: mov edx, dword ptr [edi + 0x18] */
    /* cmp esi, edx */ /* 0x121533DF: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121533EC; /* 0x121533E1: jb 0x121533ec */
L_121533E3:
    eax = MEM32(edi + 0x10); /* 0x121533E3: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121533E6: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x121533E8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12153439; /* 0x121533EA: jbe 0x12153439 */
L_121533EC:
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x121533EC: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153402; /* 0x121533F0: jne 0x12153402 */
L_121533F2:
    eax = MEM32(ebx); /* 0x121533F2: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x45u; /* 0x121533F4: mov dword ptr [eax + 0x14], 0x45 */
    eax = MEM32(ebx); /* 0x121533FB: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121533FD: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121533FF: push ebx */
    RECOMP_ICALL(eax); /* 0x12153400: call eax */
    RECOMP_FLAGS_IN();
L_12153402:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x12153402: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153417; /* 0x12153406: je 0x12153417 */
L_12153408:
    PUSH32(esp, 1); /* 0x12153408: push 1 */
    PUSH32(esp, ebx); /* 0x1215340A: push ebx */
    RECOMP_CALL(sub_121531B0); /* 0x1215340B: call 0x121531b0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x24) = 0; /* 0x12153410: mov dword ptr [edi + 0x24], 0 */
L_12153417:
    /* cmp esi, MEM32(edi + 0x18) */ /* 0x12153417: cmp esi, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12153421; /* 0x1215341A: jbe 0x12153421 */
L_1215341C:
    MEM32(edi + 0x18) = esi; /* 0x1215341C: mov dword ptr [edi + 0x18], esi */
    goto L_1215342E; /* 0x1215341F: jmp 0x1215342e */
L_12153421:
    eax = MEM32(ebp + 0x14); /* 0x12153421: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x10); /* 0x12153424: sub eax, dword ptr [edi + 0x10] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_1215342B; /* 0x12153427: jns 0x1215342b */
L_12153429:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153429: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1215342B:
    MEM32(edi + 0x18) = eax; /* 0x1215342B: mov dword ptr [edi + 0x18], eax */
L_1215342E:
    PUSH32(esp, 0); /* 0x1215342E: push 0 */
    PUSH32(esp, ebx); /* 0x12153430: push ebx */
    RECOMP_CALL(sub_121531B0); /* 0x12153431: call 0x121531b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x12153436: mov ecx, dword ptr [ebp + 0x14] */
L_12153439:
    esi = MEM32(edi + 0x1C); /* 0x12153439: mov esi, dword ptr [edi + 0x1c] */
    edx = MEM32(ebp + 0x18); /* 0x1215343C: mov edx, dword ptr [ebp + 0x18] */
    /* cmp esi, ecx */ /* 0x1215343F: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121534A4; /* 0x12153441: jae 0x121534a4 */
L_12153443:
    eax = MEM32(ebp + 0x10); /* 0x12153443: mov eax, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x12153446: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12153469; /* 0x12153448: jae 0x12153469 */
L_1215344A:
    /* test edx, edx */ /* 0x1215344A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153467; /* 0x1215344C: je 0x12153467 */
L_1215344E:
    eax = MEM32(ebx); /* 0x1215344E: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x12153450: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x12153457: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12153459: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215345B: push ebx */
    RECOMP_ICALL(eax); /* 0x1215345C: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x1215345E: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x12153461: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x18); /* 0x12153464: mov edx, dword ptr [ebp + 0x18] */
L_12153467:
    esi = eax; /* 0x12153467: mov esi, eax */
L_12153469:
    /* test edx, edx */ /* 0x12153469: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153470; /* 0x1215346B: je 0x12153470 */
L_1215346D:
    MEM32(edi + 0x1C) = ecx; /* 0x1215346D: mov dword ptr [edi + 0x1c], ecx */
L_12153470:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x12153470: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121534C1; /* 0x12153474: je 0x121534c1 */
L_12153476:
    eax = MEM32(edi + 0x18); /* 0x12153476: mov eax, dword ptr [edi + 0x18] */
    ebx = MEM32(edi + 0x8); /* 0x12153479: mov ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1215347C: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1215347E: sub esi, eax */
    _flag_k = FK_CMP;
    if (7u) _cf = (((ebx) >> 25) & 1u); /* 0x12153480: shl ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 7u; /* 0x12153480: shl ebx, 7 */
    MEM32(ebp + 0x14) = ecx; /* 0x12153483: mov dword ptr [ebp + 0x14], ecx */
    /* cmp esi, ecx */ /* 0x12153486: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121534A4; /* 0x12153488: jae 0x121534a4 */
L_1215348A:
    ebx = ebx; /* 0x1215348A: lea ebx, [ebx] */
L_12153490:
    eax = MEM32(edi); /* 0x12153490: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x12153492: push ebx */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x12153493: push dword ptr [eax + esi*4] */
    RECOMP_CALL(sub_12154150); /* 0x12153496: call 0x12154150 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215349B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1215349C: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12153490; /* 0x1215349F: jb 0x12153490 */
L_121534A1:
    edx = MEM32(ebp + 0x18); /* 0x121534A1: mov edx, dword ptr [ebp + 0x18] */
L_121534A4:
    /* test edx, edx */ /* 0x121534A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121534AF; /* 0x121534A6: je 0x121534af */
L_121534A8:
    MEM32(edi + 0x24) = 1; /* 0x121534A8: mov dword ptr [edi + 0x24], 1 */
L_121534AF:
    ecx = MEM32(ebp + 0x10); /* 0x121534AF: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x121534B2: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x121534B5: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x121534B7: pop edi */
    esi = POP32_VAL(esp); /* 0x121534B8: pop esi */
    eax = eax + ecx * 4; /* 0x121534B9: lea eax, [eax + ecx*4] */
    ebx = POP32_VAL(esp); /* 0x121534BC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121534BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121534BE: ret 0x14 */
L_121534C1:
    /* test edx, edx */ /* 0x121534C1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121534A8; /* 0x121534C3: jne 0x121534a8 */
L_121534C5:
    eax = MEM32(ebx); /* 0x121534C5: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x16u; /* 0x121534C7: mov dword ptr [eax + 0x14], 0x16 */
    eax = MEM32(ebx); /* 0x121534CE: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121534D0: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121534D2: push ebx */
    RECOMP_ICALL(eax); /* 0x121534D3: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x121534D5: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x18); /* 0x121534D8: sub ecx, dword ptr [edi + 0x18] */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x121534DB: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x121534DD: pop edi */
    esi = POP32_VAL(esp); /* 0x121534DE: pop esi */
    eax = eax + ecx * 4; /* 0x121534DF: lea eax, [eax + ecx*4] */
    ebx = POP32_VAL(esp); /* 0x121534E2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121534E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121534E4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121534F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121534F0u);

L_121534F0:
    edi = edi; /* 0x121534F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121534F2: push ebp */
    ebp = esp; /* 0x121534F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121534F5: push ecx */
    PUSH32(esp, ebx); /* 0x121534F6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121534F7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121534FA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121534FB: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121534FE: push edi */
    edi = MEM32(ebx + 0x4); /* 0x121534FF: mov edi, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x12153502: mov dword ptr [ebp - 4], edi */
    /* test esi, esi */ /* 0x12153505: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215350E; /* 0x12153507: js 0x1215350e */
L_12153509:
    /* cmp esi, 2 */ /* 0x12153509: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12153523; /* 0x1215350C: jl 0x12153523 */
L_1215350E:
    eax = MEM32(ebx); /* 0x1215350E: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12153510: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(ebx); /* 0x12153517: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = esi; /* 0x12153519: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(ebx); /* 0x1215351C: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1215351E: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12153520: push ebx */
    RECOMP_ICALL(eax); /* 0x12153521: call eax */
    RECOMP_FLAGS_IN();
L_12153523:
    /* cmp esi, 1 */ /* 0x12153523: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153588; /* 0x12153526: jne 0x12153588 */
L_12153528:
    esi = MEM32(edi + 0x44); /* 0x12153528: mov esi, dword ptr [edi + 0x44] */
    /* test esi, esi */ /* 0x1215352B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215354E; /* 0x1215352D: je 0x1215354e */
L_1215352F:
    /* nop */ /* 0x1215352F: nop  */
L_12153530:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x12153530: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153547; /* 0x12153534: je 0x12153547 */
L_12153536:
    eax = esi + 0x30; /* 0x12153536: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x12153539: push eax */
    eax = MEM32(esi + 0x38); /* 0x1215353A: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, ebx); /* 0x1215353D: push ebx */
    MEM32(esi + 0x28) = 0; /* 0x1215353E: mov dword ptr [esi + 0x28], 0 */
    RECOMP_ICALL(eax); /* 0x12153545: call eax */
    RECOMP_FLAGS_IN();
L_12153547:
    esi = MEM32(esi + 0x2C); /* 0x12153547: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x1215354A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153530; /* 0x1215354C: jne 0x12153530 */
L_1215354E:
    esi = MEM32(edi + 0x48); /* 0x1215354E: mov esi, dword ptr [edi + 0x48] */
    MEM32(edi + 0x44) = 0; /* 0x12153551: mov dword ptr [edi + 0x44], 0 */
    /* test esi, esi */ /* 0x12153558: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215357E; /* 0x1215355A: je 0x1215357e */
L_1215355C:
    esp = esp; /* 0x1215355C: lea esp, [esp] */
L_12153560:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x12153560: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153577; /* 0x12153564: je 0x12153577 */
L_12153566:
    eax = esi + 0x30; /* 0x12153566: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x12153569: push eax */
    eax = MEM32(esi + 0x38); /* 0x1215356A: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, ebx); /* 0x1215356D: push ebx */
    MEM32(esi + 0x28) = 0; /* 0x1215356E: mov dword ptr [esi + 0x28], 0 */
    RECOMP_ICALL(eax); /* 0x12153575: call eax */
    RECOMP_FLAGS_IN();
L_12153577:
    esi = MEM32(esi + 0x2C); /* 0x12153577: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x1215357A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153560; /* 0x1215357C: jne 0x12153560 */
L_1215357E:
    esi = MEM32(ebp + 0xC); /* 0x1215357E: mov esi, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x48) = 0; /* 0x12153581: mov dword ptr [edi + 0x48], 0 */
L_12153588:
    edx = MEM32(edi + esi * 4 + 0x3C); /* 0x12153588: mov edx, dword ptr [edi + esi*4 + 0x3c] */
    MEM32(edi + esi * 4 + 0x3C) = 0; /* 0x1215358C: mov dword ptr [edi + esi*4 + 0x3c], 0 */
    /* test edx, edx */ /* 0x12153594: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121535C5; /* 0x12153596: je 0x121535c5 */
L_12153598:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x4Cu; /* 0x12153598: add edi, 0x4c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x1215359B: mov dword ptr [ebp + 8], edi */
    edi = edi; /* 0x1215359E: mov edi, edi */
L_121535A0:
    ecx = MEM32(edx + 0x8); /* 0x121535A0: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x121535A3: mov eax, dword ptr [edx + 4] */
    edi = MEM32(edx); /* 0x121535A6: mov edi, dword ptr [edx] */
    esi = ecx + eax + 0x10; /* 0x121535A8: lea esi, [ecx + eax + 0x10] */
    PUSH32(esp, esi); /* 0x121535AC: push esi */
    PUSH32(esp, edx); /* 0x121535AD: push edx */
    PUSH32(esp, ebx); /* 0x121535AE: push ebx */
    RECOMP_CALL(sub_12155570); /* 0x121535AF: call 0x12155570 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121535B4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x121535B7: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    edx = edi; /* 0x121535B9: mov edx, edi */
    /* test edi, edi */ /* 0x121535BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121535A0; /* 0x121535BD: jne 0x121535a0 */
L_121535BF:
    edi = MEM32(ebp + (-0x4)); /* 0x121535BF: mov edi, dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0xC); /* 0x121535C2: mov esi, dword ptr [ebp + 0xc] */
L_121535C5:
    edx = MEM32(edi + esi * 4 + 0x34); /* 0x121535C5: mov edx, dword ptr [edi + esi*4 + 0x34] */
    MEM32(edi + esi * 4 + 0x34) = 0; /* 0x121535C9: mov dword ptr [edi + esi*4 + 0x34], 0 */
    /* test edx, edx */ /* 0x121535D1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121535FF; /* 0x121535D3: je 0x121535ff */
L_121535D5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x4Cu; /* 0x121535D5: add edi, 0x4c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edi; /* 0x121535D8: mov dword ptr [ebp + 0xc], edi */
    goto L_121535E0; /* 0x121535DB: jmp 0x121535e0 */
L_121535E0:
    ecx = MEM32(edx + 0x8); /* 0x121535E0: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x121535E3: mov eax, dword ptr [edx + 4] */
    edi = MEM32(edx); /* 0x121535E6: mov edi, dword ptr [edx] */
    esi = ecx + eax + 0x10; /* 0x121535E8: lea esi, [ecx + eax + 0x10] */
    PUSH32(esp, esi); /* 0x121535EC: push esi */
    PUSH32(esp, edx); /* 0x121535ED: push edx */
    PUSH32(esp, ebx); /* 0x121535EE: push ebx */
    RECOMP_CALL(sub_12155570); /* 0x121535EF: call 0x12155570 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x121535F4: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x121535F7: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    edx = edi; /* 0x121535F9: mov edx, edi */
    /* test edi, edi */ /* 0x121535FB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121535E0; /* 0x121535FD: jne 0x121535e0 */
L_121535FF:
    edi = POP32_VAL(esp); /* 0x121535FF: pop edi */
    esi = POP32_VAL(esp); /* 0x12153600: pop esi */
    ebx = POP32_VAL(esp); /* 0x12153601: pop ebx */
    esp = ebp; /* 0x12153602: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12153604: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12153605: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12153610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153610u);

L_12153610:
    edi = edi; /* 0x12153610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153612: push ebp */
    ebp = esp; /* 0x12153613: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12153615: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12153618: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12153619: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1215361C: push esi */
    esi = 1; /* 0x1215361D: mov esi, 1 */
    PUSH32(esp, edi); /* 0x12153622: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x12153623: mov dword ptr [ebp - 4], esi */
L_12153626:
    edi = MEM32(ebx + 0x4); /* 0x12153626: mov edi, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x12153629: mov dword ptr [ebp - 8], edi */
    /* test esi, esi */ /* 0x1215362C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12153635; /* 0x1215362E: js 0x12153635 */
L_12153630:
    /* cmp esi, 2 */ /* 0x12153630: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215364A; /* 0x12153633: jl 0x1215364a */
L_12153635:
    eax = MEM32(ebx); /* 0x12153635: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xEu; /* 0x12153637: mov dword ptr [eax + 0x14], 0xe */
    eax = MEM32(ebx); /* 0x1215363E: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = esi; /* 0x12153640: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(ebx); /* 0x12153643: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12153645: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x12153647: push ebx */
    RECOMP_ICALL(eax); /* 0x12153648: call eax */
    RECOMP_FLAGS_IN();
L_1215364A:
    /* cmp esi, 1 */ /* 0x1215364A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121536AA; /* 0x1215364D: jne 0x121536aa */
L_1215364F:
    esi = MEM32(edi + 0x44); /* 0x1215364F: mov esi, dword ptr [edi + 0x44] */
    /* test esi, esi */ /* 0x12153652: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153674; /* 0x12153654: je 0x12153674 */
L_12153656:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x12153656: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215366D; /* 0x1215365A: je 0x1215366d */
L_1215365C:
    eax = esi + 0x30; /* 0x1215365C: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x1215365F: push eax */
    eax = MEM32(esi + 0x38); /* 0x12153660: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, ebx); /* 0x12153663: push ebx */
    MEM32(esi + 0x28) = 0; /* 0x12153664: mov dword ptr [esi + 0x28], 0 */
    RECOMP_ICALL(eax); /* 0x1215366B: call eax */
    RECOMP_FLAGS_IN();
L_1215366D:
    esi = MEM32(esi + 0x2C); /* 0x1215366D: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x12153670: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153656; /* 0x12153672: jne 0x12153656 */
L_12153674:
    esi = MEM32(edi + 0x48); /* 0x12153674: mov esi, dword ptr [edi + 0x48] */
    MEM32(edi + 0x44) = 0; /* 0x12153677: mov dword ptr [edi + 0x44], 0 */
    /* test esi, esi */ /* 0x1215367E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121536A0; /* 0x12153680: je 0x121536a0 */
L_12153682:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x12153682: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153699; /* 0x12153686: je 0x12153699 */
L_12153688:
    eax = esi + 0x30; /* 0x12153688: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x1215368B: push eax */
    eax = MEM32(esi + 0x38); /* 0x1215368C: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, ebx); /* 0x1215368F: push ebx */
    MEM32(esi + 0x28) = 0; /* 0x12153690: mov dword ptr [esi + 0x28], 0 */
    RECOMP_ICALL(eax); /* 0x12153697: call eax */
    RECOMP_FLAGS_IN();
L_12153699:
    esi = MEM32(esi + 0x2C); /* 0x12153699: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x1215369C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153682; /* 0x1215369E: jne 0x12153682 */
L_121536A0:
    esi = MEM32(ebp + (-0x4)); /* 0x121536A0: mov esi, dword ptr [ebp - 4] */
    MEM32(edi + 0x48) = 0; /* 0x121536A3: mov dword ptr [edi + 0x48], 0 */
L_121536AA:
    edx = MEM32(edi + esi * 4 + 0x3C); /* 0x121536AA: mov edx, dword ptr [edi + esi*4 + 0x3c] */
    MEM32(edi + esi * 4 + 0x3C) = 0; /* 0x121536AE: mov dword ptr [edi + esi*4 + 0x3c], 0 */
    /* test edx, edx */ /* 0x121536B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121536E5; /* 0x121536B8: je 0x121536e5 */
L_121536BA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x4Cu; /* 0x121536BA: add edi, 0x4c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x121536BD: mov dword ptr [ebp + 8], edi */
L_121536C0:
    ecx = MEM32(edx + 0x8); /* 0x121536C0: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x121536C3: mov eax, dword ptr [edx + 4] */
    edi = MEM32(edx); /* 0x121536C6: mov edi, dword ptr [edx] */
    esi = ecx + eax + 0x10; /* 0x121536C8: lea esi, [ecx + eax + 0x10] */
    PUSH32(esp, esi); /* 0x121536CC: push esi */
    PUSH32(esp, edx); /* 0x121536CD: push edx */
    PUSH32(esp, ebx); /* 0x121536CE: push ebx */
    RECOMP_CALL(sub_12155570); /* 0x121536CF: call 0x12155570 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x121536D4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x121536D7: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    edx = edi; /* 0x121536D9: mov edx, edi */
    /* test edi, edi */ /* 0x121536DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121536C0; /* 0x121536DD: jne 0x121536c0 */
L_121536DF:
    edi = MEM32(ebp + (-0x8)); /* 0x121536DF: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x121536E2: mov esi, dword ptr [ebp - 4] */
L_121536E5:
    edx = MEM32(edi + esi * 4 + 0x34); /* 0x121536E5: mov edx, dword ptr [edi + esi*4 + 0x34] */
    MEM32(edi + esi * 4 + 0x34) = 0; /* 0x121536E9: mov dword ptr [edi + esi*4 + 0x34], 0 */
    /* test edx, edx */ /* 0x121536F1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153722; /* 0x121536F3: je 0x12153722 */
L_121536F5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x4Cu; /* 0x121536F5: add edi, 0x4c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x121536F8: mov dword ptr [ebp + 8], edi */
    goto L_12153700; /* 0x121536FB: jmp 0x12153700 */
L_12153700:
    ecx = MEM32(edx + 0x8); /* 0x12153700: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x12153703: mov eax, dword ptr [edx + 4] */
    edi = MEM32(edx); /* 0x12153706: mov edi, dword ptr [edx] */
    esi = ecx + eax + 0x10; /* 0x12153708: lea esi, [ecx + eax + 0x10] */
    PUSH32(esp, esi); /* 0x1215370C: push esi */
    PUSH32(esp, edx); /* 0x1215370D: push edx */
    PUSH32(esp, ebx); /* 0x1215370E: push ebx */
    RECOMP_CALL(sub_12155570); /* 0x1215370F: call 0x12155570 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12153714: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x12153717: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    edx = edi; /* 0x12153719: mov edx, edi */
    /* test edi, edi */ /* 0x1215371B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12153700; /* 0x1215371D: jne 0x12153700 */
L_1215371F:
    esi = MEM32(ebp + (-0x4)); /* 0x1215371F: mov esi, dword ptr [ebp - 4] */
L_12153722:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12153722: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = esi; /* 0x12153723: mov dword ptr [ebp - 4], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12153626; /* 0x12153726: jns 0x12153626 */
L_1215372C:
    PUSH32(esp, 0x54u); /* 0x1215372C: push 0x54 */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1215372E: push dword ptr [ebx + 4] */
    PUSH32(esp, ebx); /* 0x12153731: push ebx */
    RECOMP_CALL(sub_12155570); /* 0x12153732: call 0x12155570 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12153737: push ebx */
    MEM32(ebx + 0x4) = 0; /* 0x12153738: mov dword ptr [ebx + 4], 0 */
    RECOMP_CALL(sub_121556F0); /* 0x1215373F: call 0x121556f0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12153744: pop edi */
    esi = POP32_VAL(esp); /* 0x12153745: pop esi */
    ebx = POP32_VAL(esp); /* 0x12153746: pop ebx */
    esp = ebp; /* 0x12153747: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12153749: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215374A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12153760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153760u);

L_12153760:
    edi = edi; /* 0x12153760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153762: push ebp */
    ebp = esp; /* 0x12153763: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12153765: push ebx */
    PUSH32(esp, esi); /* 0x12153766: push esi */
    PUSH32(esp, edi); /* 0x12153767: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12153768: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1215376B: push edi */
    MEM32(edi + 0x4) = 0; /* 0x1215376C: mov dword ptr [edi + 4], 0 */
    RECOMP_CALL(sub_121556E0); /* 0x12153773: call 0x121556e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x54u); /* 0x12153778: push 0x54 */
    PUSH32(esp, edi); /* 0x1215377A: push edi */
    ebx = eax; /* 0x1215377B: mov ebx, eax */
    RECOMP_CALL(sub_12155530); /* 0x1215377D: call 0x12155530 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12153782: mov esi, eax */
    /* test esi, esi */ /* 0x12153784: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121537A3; /* 0x12153786: jne 0x121537a3 */
L_12153788:
    PUSH32(esp, edi); /* 0x12153788: push edi */
    RECOMP_CALL(sub_121556F0); /* 0x12153789: call 0x121556f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1215378E: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x14) = 0x36u; /* 0x12153790: mov dword ptr [ecx + 0x14], 0x36 */
    ecx = MEM32(edi); /* 0x12153797: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x18) = esi; /* 0x12153799: mov dword ptr [ecx + 0x18], esi */
    eax = MEM32(edi); /* 0x1215379C: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1215379E: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121537A0: push edi */
    RECOMP_ICALL(eax); /* 0x121537A1: call eax */
    RECOMP_FLAGS_IN();
L_121537A3:
    MEM32(esi + 0x2C) = ebx; /* 0x121537A3: mov dword ptr [esi + 0x2c], ebx */
    MEM32(esi) = 0x12152AC0u; /* 0x121537A6: mov dword ptr [esi], 0x12152ac0 */
    MEM32(esi + 0x4) = 0x12152C00u; /* 0x121537AC: mov dword ptr [esi + 4], 0x12152c00 */
    MEM32(esi + 0x8) = 0x12152CD0u; /* 0x121537B3: mov dword ptr [esi + 8], 0x12152cd0 */
    MEM32(esi + 0xC) = 0x12152D70u; /* 0x121537BA: mov dword ptr [esi + 0xc], 0x12152d70 */
    MEM32(esi + 0x10) = 0x12152E50u; /* 0x121537C1: mov dword ptr [esi + 0x10], 0x12152e50 */
    MEM32(esi + 0x14) = 0x12152ED0u; /* 0x121537C8: mov dword ptr [esi + 0x14], 0x12152ed0 */
    MEM32(esi + 0x18) = 0x12152F50u; /* 0x121537CF: mov dword ptr [esi + 0x18], 0x12152f50 */
    MEM32(esi + 0x1C) = 0x12153250u; /* 0x121537D6: mov dword ptr [esi + 0x1c], 0x12153250 */
    MEM32(esi + 0x20) = 0x121533A0u; /* 0x121537DD: mov dword ptr [esi + 0x20], 0x121533a0 */
    MEM32(esi + 0x24) = 0x121534F0u; /* 0x121537E4: mov dword ptr [esi + 0x24], 0x121534f0 */
    MEM32(esi + 0x28) = 0x12153610u; /* 0x121537EB: mov dword ptr [esi + 0x28], 0x12153610 */
    MEM32(esi + 0x30) = 0x3B9ACA00u; /* 0x121537F2: mov dword ptr [esi + 0x30], 0x3b9aca00 */
    MEM32(esi + 0x38) = 0; /* 0x121537F9: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x40) = 0; /* 0x12153800: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x34) = 0; /* 0x12153807: mov dword ptr [esi + 0x34], 0 */
    MEM32(esi + 0x3C) = 0; /* 0x1215380E: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x44) = 0; /* 0x12153815: mov dword ptr [esi + 0x44], 0 */
    MEM32(esi + 0x48) = 0; /* 0x1215381C: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0x54u; /* 0x12153823: mov dword ptr [esi + 0x4c], 0x54 */
    MEM32(edi + 0x4) = esi; /* 0x1215382A: mov dword ptr [edi + 4], esi */
    edi = POP32_VAL(esp); /* 0x1215382D: pop edi */
    esi = POP32_VAL(esp); /* 0x1215382E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215382F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12153830: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153831: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12153840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153840u);

L_12153840:
    edi = edi; /* 0x12153840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153842: push ebp */
    ebp = esp; /* 0x12153843: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12153845: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12153846: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12153849: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1215384C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215387B; /* 0x1215384E: je 0x1215387b */
L_12153850:
    eax = MEM32(eax + 0x24); /* 0x12153850: mov eax, dword ptr [eax + 0x24] */
    PUSH32(esp, 1); /* 0x12153853: push 1 */
    PUSH32(esp, esi); /* 0x12153855: push esi */
    RECOMP_ICALL(eax); /* 0x12153856: call eax */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x12153858: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153874; /* 0x1215385C: je 0x12153874 */
L_1215385E:
    MEM32(esi + 0x14) = 0xC8u; /* 0x1215385E: mov dword ptr [esi + 0x14], 0xc8 */
    MEM32(esi + 0x134) = 0; /* 0x12153865: mov dword ptr [esi + 0x134], 0 */
    esi = POP32_VAL(esp); /* 0x1215386F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12153870: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153871: ret 4 */
L_12153874:
    MEM32(esi + 0x14) = 0x64u; /* 0x12153874: mov dword ptr [esi + 0x14], 0x64 */
L_1215387B:
    esi = POP32_VAL(esp); /* 0x1215387B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215387C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215387D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12153890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153890u);

L_12153890:
    edi = edi; /* 0x12153890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153892: push ebp */
    ebp = esp; /* 0x12153893: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12153895: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12153896: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12153899: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1215389C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121538A6; /* 0x1215389E: je 0x121538a6 */
L_121538A0:
    eax = MEM32(eax + 0x28); /* 0x121538A0: mov eax, dword ptr [eax + 0x28] */
    PUSH32(esp, esi); /* 0x121538A3: push esi */
    RECOMP_ICALL(eax); /* 0x121538A4: call eax */
    RECOMP_FLAGS_IN();
L_121538A6:
    MEM32(esi + 0x14) = 0; /* 0x121538A6: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x4) = 0; /* 0x121538AD: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x121538B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x121538B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121538B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121538C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121538C0u);

L_121538C0:
    edi = edi; /* 0x121538C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121538C2: push ebp */
    ebp = esp; /* 0x121538C3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121538C5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x121538C8: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x84u); /* 0x121538CB: push 0x84 */
    PUSH32(esp, 0); /* 0x121538D0: push 0 */
    PUSH32(esp, eax); /* 0x121538D2: push eax */
    eax = MEM32(ecx); /* 0x121538D3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x121538D5: call eax */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x80) = 0; /* 0x121538D7: mov dword ptr [eax + 0x80], 0 */
    ebp = POP32_VAL(esp); /* 0x121538E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121538E2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121538F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121538F0u);

L_121538F0:
    edi = edi; /* 0x121538F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121538F2: push ebp */
    ebp = esp; /* 0x121538F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121538F5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x121538F8: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x118u); /* 0x121538FB: push 0x118 */
    PUSH32(esp, 0); /* 0x12153900: push 0 */
    PUSH32(esp, eax); /* 0x12153902: push eax */
    eax = MEM32(ecx); /* 0x12153903: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x12153905: call eax */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x114) = 0; /* 0x12153907: mov dword ptr [eax + 0x114], 0 */
    ebp = POP32_VAL(esp); /* 0x12153911: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153912: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12153920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153920u);

L_12153920:
    /* cmp MEM32(eax + 0x4C), 0 */ /* 0x12153920: cmp dword ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153924: jne 0x12153995 */
L_12153926:
    /* cmp MEM32(eax + 0x130), 0 */ /* 0x12153926: cmp dword ptr [eax + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x1215392D: jne 0x12153995 */
L_1215392F:
    /* cmp MEM32(eax + 0x28), 3 */ /* 0x1215392F: cmp dword ptr [eax + 0x28], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153933: jne 0x12153995 */
L_12153935:
    /* cmp MEM32(eax + 0x24), 3 */ /* 0x12153935: cmp dword ptr [eax + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153939: jne 0x12153995 */
L_1215393B:
    /* cmp MEM32(eax + 0x2C), 2 */ /* 0x1215393B: cmp dword ptr [eax + 0x2c], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x1215393F: jne 0x12153995 */
L_12153941:
    /* cmp MEM32(eax + 0x78), 3 */ /* 0x12153941: cmp dword ptr [eax + 0x78], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x78)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153945: jne 0x12153995 */
L_12153947:
    ecx = MEM32(eax + 0xDC); /* 0x12153947: mov ecx, dword ptr [eax + 0xdc] */
    /* cmp MEM32(ecx + 0x8), 2 */ /* 0x1215394D: cmp dword ptr [ecx + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153951: jne 0x12153995 */
L_12153953:
    /* cmp MEM32(ecx + 0x5C), 1 */ /* 0x12153953: cmp dword ptr [ecx + 0x5c], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x5C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153957: jne 0x12153995 */
L_12153959:
    /* cmp MEM32(ecx + 0xB0), 1 */ /* 0x12153959: cmp dword ptr [ecx + 0xb0], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xB0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153960: jne 0x12153995 */
L_12153962:
    /* cmp MEM32(ecx + 0xC), 2 */ /* 0x12153962: cmp dword ptr [ecx + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12153995; /* 0x12153966: jg 0x12153995 */
L_12153968:
    /* cmp MEM32(ecx + 0x60), 1 */ /* 0x12153968: cmp dword ptr [ecx + 0x60], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x60)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x1215396C: jne 0x12153995 */
L_1215396E:
    /* cmp MEM32(ecx + 0xB4), 1 */ /* 0x1215396E: cmp dword ptr [ecx + 0xb4], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xB4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153975: jne 0x12153995 */
L_12153977:
    eax = MEM32(eax + 0x140); /* 0x12153977: mov eax, dword ptr [eax + 0x140] */
    /* cmp MEM32(ecx + 0x24), eax */ /* 0x1215397D: cmp dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153980: jne 0x12153995 */
L_12153982:
    /* cmp MEM32(ecx + 0x78), eax */ /* 0x12153982: cmp dword ptr [ecx + 0x78], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x78)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x12153985: jne 0x12153995 */
L_12153987:
    /* cmp MEM32(ecx + 0xCC), eax */ /* 0x12153987: cmp dword ptr [ecx + 0xcc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xCC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153995; /* 0x1215398D: jne 0x12153995 */
L_1215398F:
    eax = 1; /* 0x1215398F: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12153994: ret  */
L_12153995:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153995: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12153997: ret  */
    RECOMP_REGS_OUT();
}

void sub_121539A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121539A0u);

L_121539A0:
    edi = edi; /* 0x121539A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121539A2: push ebp */
    ebp = esp; /* 0x121539A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121539A5: push ecx */
    PUSH32(esp, esi); /* 0x121539A6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121539A7: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0xCAu */ /* 0x121539AA: cmp dword ptr [esi + 0x14], 0xca */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121539CB; /* 0x121539B1: je 0x121539cb */
L_121539B3:
    eax = MEM32(esi); /* 0x121539B3: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x121539B5: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x121539BC: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x121539BF: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121539C1: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121539C4: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121539C6: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121539C8: push esi */
    RECOMP_ICALL(eax); /* 0x121539C9: call eax */
    RECOMP_FLAGS_IN();
L_121539CB:
    ecx = MEM32(esi + 0x30); /* 0x121539CB: mov ecx, dword ptr [esi + 0x30] */
    edx = MEM32(esi + 0x34); /* 0x121539CE: mov edx, dword ptr [esi + 0x34] */
    eax = ecx * 8; /* 0x121539D1: lea eax, [ecx*8] */
    /* cmp eax, edx */ /* 0x121539D8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121539FF; /* 0x121539DA: ja 0x121539ff */
L_121539DC:
    PUSH32(esp, 8); /* 0x121539DC: push 8 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x121539DE: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_12154080); /* 0x121539E1: call 0x12154080 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x121539E6: push 8 */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x121539E8: push dword ptr [esi + 0x20] */
    MEM32(esi + 0x70) = eax; /* 0x121539EB: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_12154080); /* 0x121539EE: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 1; /* 0x121539F3: mov dword ptr [esi + 0x140], 1 */
    goto L_12153A6A; /* 0x121539FD: jmp 0x12153a6a */
L_121539FF:
    eax = ecx * 4; /* 0x121539FF: lea eax, [ecx*4] */
    /* cmp eax, edx */ /* 0x12153A06: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12153A2D; /* 0x12153A08: ja 0x12153a2d */
L_12153A0A:
    PUSH32(esp, 4); /* 0x12153A0A: push 4 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x12153A0C: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_12154080); /* 0x12153A0F: call 0x12154080 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x12153A14: push 4 */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12153A16: push dword ptr [esi + 0x20] */
    MEM32(esi + 0x70) = eax; /* 0x12153A19: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_12154080); /* 0x12153A1C: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 2; /* 0x12153A21: mov dword ptr [esi + 0x140], 2 */
    goto L_12153A6A; /* 0x12153A2B: jmp 0x12153a6a */
L_12153A2D:
    eax = ecx + ecx; /* 0x12153A2D: lea eax, [ecx + ecx] */
    /* cmp eax, edx */ /* 0x12153A30: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12153A57; /* 0x12153A32: ja 0x12153a57 */
L_12153A34:
    PUSH32(esp, 2); /* 0x12153A34: push 2 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x12153A36: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_12154080); /* 0x12153A39: call 0x12154080 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x12153A3E: push 2 */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12153A40: push dword ptr [esi + 0x20] */
    MEM32(esi + 0x70) = eax; /* 0x12153A43: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_12154080); /* 0x12153A46: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 4; /* 0x12153A4B: mov dword ptr [esi + 0x140], 4 */
    goto L_12153A6A; /* 0x12153A55: jmp 0x12153a6a */
L_12153A57:
    eax = MEM32(esi + 0x1C); /* 0x12153A57: mov eax, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x70) = eax; /* 0x12153A5A: mov dword ptr [esi + 0x70], eax */
    eax = MEM32(esi + 0x20); /* 0x12153A5D: mov eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x140) = 8; /* 0x12153A60: mov dword ptr [esi + 0x140], 8 */
L_12153A6A:
    MEM32(esi + 0x74) = eax; /* 0x12153A6A: mov dword ptr [esi + 0x74], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153A6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12153A6F: push ebx */
    PUSH32(esp, edi); /* 0x12153A70: push edi */
    edi = MEM32(esi + 0xDC); /* 0x12153A71: mov edi, dword ptr [esi + 0xdc] */
    MEM32(ebp + 0x8) = eax; /* 0x12153A77: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(esi + 0x24), eax */ /* 0x12153A7A: cmp dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12153ADC; /* 0x12153A7D: jle 0x12153adc */
L_12153A7F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x12153A7F: add edi, 0xc */
    _flag_k = FK_ADD;
L_12153A82:
    ebx = MEM32(esi + 0x140); /* 0x12153A82: mov ebx, dword ptr [esi + 0x140] */
    edx = ebx; /* 0x12153A88: mov edx, ebx */
    /* cmp edx, 8 */ /* 0x12153A8A: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12153ACD; /* 0x12153A8D: jge 0x12153acd */
L_12153A8F:
    ecx = MEM32(esi + 0x138); /* 0x12153A8F: mov ecx, dword ptr [esi + 0x138] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x12153A95: imul ecx, ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12153A98: mov dword ptr [ebp - 4], ecx */
    goto L_12153AA0; /* 0x12153A9B: jmp 0x12153aa0 */
L_12153AA0:
    eax = MEM32(edi + (-0x4)); /* 0x12153AA0: mov eax, dword ptr [edi - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x12153AA3: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153AA6: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x12153AA8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12153ACA; /* 0x12153AAA: jg 0x12153aca */
L_12153AAC:
    eax = MEM32(edi); /* 0x12153AAC: mov eax, dword ptr [edi] */
    ecx = MEM32(esi + 0x13C); /* 0x12153AAE: mov ecx, dword ptr [esi + 0x13c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x12153AB4: imul eax, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x12153AB7: imul ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153ABA: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x12153ABC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12153ACA; /* 0x12153ABE: jg 0x12153aca */
L_12153AC0:
    ecx = MEM32(ebp + (-0x4)); /* 0x12153AC0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x12153AC3: add edx, edx */
    _flag_k = FK_ADD;
    /* cmp edx, 8 */ /* 0x12153AC5: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12153AA0; /* 0x12153AC8: jl 0x12153aa0 */
L_12153ACA:
    eax = MEM32(ebp + 0x8); /* 0x12153ACA: mov eax, dword ptr [ebp + 8] */
L_12153ACD:
    MEM32(edi + 0x18) = edx; /* 0x12153ACD: mov dword ptr [edi + 0x18], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12153AD0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x12153AD1: add edi, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x12153AD4: mov dword ptr [ebp + 8], eax */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x12153AD7: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12153A82; /* 0x12153ADA: jl 0x12153a82 */
L_12153ADC:
    edi = MEM32(esi + 0xDC); /* 0x12153ADC: mov edi, dword ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12153AE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x12153AE4: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12153B39; /* 0x12153AE7: jle 0x12153b39 */
L_12153AE9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x12153AE9: add edi, 0x24 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x12153AEC: lea esp, [esp] */
L_12153AF0:
    eax = MEM32(esi + 0x138); /* 0x12153AF0: mov eax, dword ptr [esi + 0x138] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153AF6: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153AF8: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153AFA: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12153AFC: push eax */
    eax = MEM32(edi + (-0x1C)); /* 0x12153AFD: mov eax, dword ptr [edi - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x12153B00: imul eax, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x12153B03: imul eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x12153B07: push eax */
    RECOMP_CALL(sub_12154080); /* 0x12153B08: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x12153B0D: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi + 0x13C); /* 0x12153B10: mov eax, dword ptr [esi + 0x13c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153B16: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153B18: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12153B1A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12153B1C: push eax */
    eax = MEM32(edi + (-0x18)); /* 0x12153B1D: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x12153B20: imul eax, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x12153B23: imul eax, dword ptr [esi + 0x20] */
    PUSH32(esp, eax); /* 0x12153B27: push eax */
    RECOMP_CALL(sub_12154080); /* 0x12153B28: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x12153B2D: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12153B30: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x12153B31: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x24) */ /* 0x12153B34: cmp ebx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12153AF0; /* 0x12153B37: jl 0x12153af0 */
L_12153B39:
    ecx = MEM32(esi + 0x2C); /* 0x12153B39: mov ecx, dword ptr [esi + 0x2c] */
    eax = ecx + (-0x1); /* 0x12153B3C: lea eax, [ecx - 1] */
    edi = POP32_VAL(esp); /* 0x12153B3F: pop edi */
    ebx = POP32_VAL(esp); /* 0x12153B40: pop ebx */
    /* cmp eax, 4 */ /* 0x12153B41: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12153B68; /* 0x12153B44: ja 0x12153b68 */
L_12153B46:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x12153C10)); goto _ljump; }
L_12153B4D:
    MEM32(esi + 0x78) = 1; /* 0x12153B4D: mov dword ptr [esi + 0x78], 1 */
    goto L_12153B6E; /* 0x12153B54: jmp 0x12153b6e */
L_12153B56:
    MEM32(esi + 0x78) = 3; /* 0x12153B56: mov dword ptr [esi + 0x78], 3 */
    goto L_12153B6E; /* 0x12153B5D: jmp 0x12153b6e */
L_12153B5F:
    MEM32(esi + 0x78) = 4; /* 0x12153B5F: mov dword ptr [esi + 0x78], 4 */
    goto L_12153B6E; /* 0x12153B66: jmp 0x12153b6e */
L_12153B68:
    eax = MEM32(esi + 0x24); /* 0x12153B68: mov eax, dword ptr [esi + 0x24] */
    MEM32(esi + 0x78) = eax; /* 0x12153B6B: mov dword ptr [esi + 0x78], eax */
L_12153B6E:
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x12153B6E: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 1; /* 0x12153B72: mov eax, 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153B7C; /* 0x12153B77: jne 0x12153b7c */
L_12153B79:
    eax = MEM32(esi + 0x78); /* 0x12153B79: mov eax, dword ptr [esi + 0x78] */
L_12153B7C:
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x12153B7C: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x7C) = eax; /* 0x12153B80: mov dword ptr [esi + 0x7c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153B83: jne 0x12153bfe */
L_12153B85:
    /* cmp MEM32(esi + 0x130), 0 */ /* 0x12153B85: cmp dword ptr [esi + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153B8C: jne 0x12153bfe */
L_12153B8E:
    /* cmp MEM32(esi + 0x28), 3 */ /* 0x12153B8E: cmp dword ptr [esi + 0x28], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153B92: jne 0x12153bfe */
L_12153B94:
    /* cmp MEM32(esi + 0x24), 3 */ /* 0x12153B94: cmp dword ptr [esi + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153B98: jne 0x12153bfe */
L_12153B9A:
    /* cmp ecx, 2 */ /* 0x12153B9A: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153B9D: jne 0x12153bfe */
L_12153B9F:
    /* cmp MEM32(esi + 0x78), 3 */ /* 0x12153B9F: cmp dword ptr [esi + 0x78], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BA3: jne 0x12153bfe */
L_12153BA5:
    eax = MEM32(esi + 0xDC); /* 0x12153BA5: mov eax, dword ptr [esi + 0xdc] */
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x12153BAB: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BAE: jne 0x12153bfe */
L_12153BB0:
    /* cmp MEM32(eax + 0x5C), 1 */ /* 0x12153BB0: cmp dword ptr [eax + 0x5c], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x5C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BB4: jne 0x12153bfe */
L_12153BB6:
    /* cmp MEM32(eax + 0xB0), 1 */ /* 0x12153BB6: cmp dword ptr [eax + 0xb0], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xB0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BBD: jne 0x12153bfe */
L_12153BBF:
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x12153BBF: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BC2: jg 0x12153bfe */
L_12153BC4:
    /* cmp MEM32(eax + 0x60), 1 */ /* 0x12153BC4: cmp dword ptr [eax + 0x60], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x60)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BC8: jne 0x12153bfe */
L_12153BCA:
    /* cmp MEM32(eax + 0xB4), 1 */ /* 0x12153BCA: cmp dword ptr [eax + 0xb4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xB4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BD1: jne 0x12153bfe */
L_12153BD3:
    ecx = MEM32(esi + 0x140); /* 0x12153BD3: mov ecx, dword ptr [esi + 0x140] */
    /* cmp MEM32(eax + 0x24), ecx */ /* 0x12153BD9: cmp dword ptr [eax + 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BDC: jne 0x12153bfe */
L_12153BDE:
    /* cmp MEM32(eax + 0x78), ecx */ /* 0x12153BDE: cmp dword ptr [eax + 0x78], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x78)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BE1: jne 0x12153bfe */
L_12153BE3:
    /* cmp MEM32(eax + 0xCC), ecx */ /* 0x12153BE3: cmp dword ptr [eax + 0xcc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xCC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153BFE; /* 0x12153BE9: jne 0x12153bfe */
L_12153BEB:
    eax = MEM32(esi + 0x13C); /* 0x12153BEB: mov eax, dword ptr [esi + 0x13c] */
    MEM32(esi + 0x80) = eax; /* 0x12153BF1: mov dword ptr [esi + 0x80], eax */
    esi = POP32_VAL(esp); /* 0x12153BF7: pop esi */
    esp = ebp; /* 0x12153BF8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12153BFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153BFB: ret 4 */
L_12153BFE:
    MEM32(esi + 0x80) = 1; /* 0x12153BFE: mov dword ptr [esi + 0x80], 1 */
    esi = POP32_VAL(esp); /* 0x12153C08: pop esi */
    esp = ebp; /* 0x12153C09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12153C0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153C0C: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12153B4Du: goto L_12153B4D;
      case 0x12153B56u: goto L_12153B56;
      case 0x12153B5Fu: goto L_12153B5F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12153C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153C30u);

L_12153C30:
    edi = edi; /* 0x12153C30: mov edi, edi */
    PUSH32(esp, esi); /* 0x12153C32: push esi */
    PUSH32(esp, edi); /* 0x12153C33: push edi */
    esi = eax; /* 0x12153C34: mov esi, eax */
    eax = MEM32(esi + 0x4); /* 0x12153C36: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x12153C39: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x580u); /* 0x12153C3B: push 0x580 */
    PUSH32(esp, 1); /* 0x12153C40: push 1 */
    PUSH32(esp, esi); /* 0x12153C42: push esi */
    RECOMP_ICALL(eax); /* 0x12153C43: call eax */
    RECOMP_FLAGS_IN();
    edi = eax + 0x100; /* 0x12153C45: lea edi, [eax + 0x100] */
    PUSH32(esp, 0x100u); /* 0x12153C4B: push 0x100 */
    ecx = edi + (-0x100); /* 0x12153C50: lea ecx, [edi - 0x100] */
    PUSH32(esp, 0); /* 0x12153C56: push 0 */
    PUSH32(esp, ecx); /* 0x12153C58: push ecx */
    MEM32(esi + 0x148) = edi; /* 0x12153C59: mov dword ptr [esi + 0x148], edi */
    RECOMP_CALL(sub_121BF434); /* 0x12153C5F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12153C64: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153C67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x12153C69: lea esp, [esp] */
L_12153C70:
    MEM8(eax + edi) = (uint8_t)(LO8(eax)); /* 0x12153C70: mov byte ptr [eax + edi], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12153C73: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x12153C74: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12153C70; /* 0x12153C79: jle 0x12153c70 */
L_12153C7B:
    PUSH32(esp, 0x180u); /* 0x12153C7B: push 0x180 */
    eax = edi + 0x100; /* 0x12153C80: lea eax, [edi + 0x100] */
    PUSH32(esp, 0xFFu); /* 0x12153C86: push 0xff */
    PUSH32(esp, eax); /* 0x12153C8B: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12153C8C: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x180u); /* 0x12153C91: push 0x180 */
    eax = edi + 0x280; /* 0x12153C96: lea eax, [edi + 0x280] */
    PUSH32(esp, 0); /* 0x12153C9C: push 0 */
    PUSH32(esp, eax); /* 0x12153C9E: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12153C9F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x148); /* 0x12153CA4: mov esi, dword ptr [esi + 0x148] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x400u; /* 0x12153CAA: add edi, 0x400 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x12153CB0: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = 0x20u; /* 0x12153CB3: mov ecx, 0x20 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12153CB8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12153CBA: pop edi */
    esi = POP32_VAL(esp); /* 0x12153CBB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12153CBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_12153CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153CD0u);

L_12153CD0:
    edi = edi; /* 0x12153CD0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12153CD2: push ebx */
    PUSH32(esp, edi); /* 0x12153CD3: push edi */
    edi = MEM32(esi + 0x1A8); /* 0x12153CD4: mov edi, dword ptr [esi + 0x1a8] */
    PUSH32(esp, esi); /* 0x12153CDA: push esi */
    RECOMP_CALL(sub_121539A0); /* 0x12153CDB: call 0x121539a0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12153CE0: mov eax, esi */
    RECOMP_CALL(sub_12153C30); /* 0x12153CE2: call 0x12153c30 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12153CE7: mov eax, esi */
    MEM32(edi + 0xC) = 0; /* 0x12153CE9: mov dword ptr [edi + 0xc], 0 */
    RECOMP_CALL(sub_12153920); /* 0x12153CF0: call 0x12153920 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x12153CF5: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = 0; /* 0x12153CF8: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x12153CFF: mov dword ptr [edi + 0x18], 0 */
    eax = MEM32(esi + 0x54); /* 0x12153D06: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x12153D09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153D13; /* 0x12153D0B: je 0x12153d13 */
L_12153D0D:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x12153D0D: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153D28; /* 0x12153D11: jne 0x12153d28 */
L_12153D13:
    MEM32(esi + 0x64) = 0; /* 0x12153D13: mov dword ptr [esi + 0x64], 0 */
    MEM32(esi + 0x68) = 0; /* 0x12153D1A: mov dword ptr [esi + 0x68], 0 */
    MEM32(esi + 0x6C) = 0; /* 0x12153D21: mov dword ptr [esi + 0x6c], 0 */
L_12153D28:
    /* test eax, eax */ /* 0x12153D28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153D99; /* 0x12153D2A: je 0x12153d99 */
L_12153D2C:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x12153D2C: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153D42; /* 0x12153D30: je 0x12153d42 */
L_12153D32:
    eax = MEM32(esi); /* 0x12153D32: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x2Fu; /* 0x12153D34: mov dword ptr [eax + 0x14], 0x2f */
    eax = MEM32(esi); /* 0x12153D3B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153D3D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153D3F: push esi */
    RECOMP_ICALL(eax); /* 0x12153D40: call eax */
    RECOMP_FLAGS_IN();
L_12153D42:
    /* cmp MEM32(esi + 0x78), 3 */ /* 0x12153D42: cmp dword ptr [esi + 0x78], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153DAD; /* 0x12153D46: je 0x12153dad */
L_12153D48:
    MEM32(esi + 0x68) = 0; /* 0x12153D48: mov dword ptr [esi + 0x68], 0 */
    MEM32(esi + 0x6C) = 0; /* 0x12153D4F: mov dword ptr [esi + 0x6c], 0 */
    MEM32(esi + 0x88) = 0; /* 0x12153D56: mov dword ptr [esi + 0x88], 0 */
L_12153D60:
    MEM32(esi + 0x64) = 1; /* 0x12153D60: mov dword ptr [esi + 0x64], 1 */
L_12153D67:
    /* cmp MEM32(esi + 0x64), 0 */ /* 0x12153D67: cmp dword ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153D7D; /* 0x12153D6B: je 0x12153d7d */
L_12153D6D:
    eax = MEM32(esi); /* 0x12153D6D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x12153D6F: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(esi); /* 0x12153D76: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153D78: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153D7A: push esi */
    RECOMP_ICALL(eax); /* 0x12153D7B: call eax */
    RECOMP_FLAGS_IN();
L_12153D7D:
    /* cmp MEM32(esi + 0x6C), 0 */ /* 0x12153D7D: cmp dword ptr [esi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153D89; /* 0x12153D81: jne 0x12153d89 */
L_12153D83:
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x12153D83: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153D99; /* 0x12153D87: je 0x12153d99 */
L_12153D89:
    eax = MEM32(esi); /* 0x12153D89: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x12153D8B: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(esi); /* 0x12153D92: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153D94: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153D96: push esi */
    RECOMP_ICALL(eax); /* 0x12153D97: call eax */
    RECOMP_FLAGS_IN();
L_12153D99:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x12153D99: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153DE2; /* 0x12153D9D: jne 0x12153de2 */
L_12153D9F:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x12153D9F: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12153DA3: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153DCE; /* 0x12153DA4: je 0x12153dce */
L_12153DA6:
    RECOMP_CALL(sub_1215BA60); /* 0x12153DA6: call 0x1215ba60 */
    RECOMP_FLAGS_IN();
    goto L_12153DD9; /* 0x12153DAB: jmp 0x12153dd9 */
L_12153DAD:
    /* cmp MEM32(esi + 0x88), 0 */ /* 0x12153DAD: cmp dword ptr [esi + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153DBF; /* 0x12153DB4: je 0x12153dbf */
L_12153DB6:
    MEM32(esi + 0x68) = 1; /* 0x12153DB6: mov dword ptr [esi + 0x68], 1 */
    RECOMP_BACKEDGE();
    goto L_12153D67; /* 0x12153DBD: jmp 0x12153d67 */
L_12153DBF:
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x12153DBF: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153D60; /* 0x12153DC3: je 0x12153d60 */
L_12153DC5:
    MEM32(esi + 0x6C) = 1; /* 0x12153DC5: mov dword ptr [esi + 0x6c], 1 */
    RECOMP_BACKEDGE();
    goto L_12153D67; /* 0x12153DCC: jmp 0x12153d67 */
L_12153DCE:
    RECOMP_CALL(sub_1215AD60); /* 0x12153DCE: call 0x1215ad60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12153DD3: push esi */
    RECOMP_CALL(sub_12159D70); /* 0x12153DD4: call 0x12159d70 */
    RECOMP_FLAGS_IN();
L_12153DD9:
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x12153DD9: push dword ptr [esi + 0x6c] */
    PUSH32(esp, esi); /* 0x12153DDC: push esi */
    RECOMP_CALL(sub_12158E40); /* 0x12153DDD: call 0x12158e40 */
    RECOMP_FLAGS_IN();
L_12153DE2:
    PUSH32(esp, esi); /* 0x12153DE2: push esi */
    RECOMP_CALL(sub_12158C90); /* 0x12153DE3: call 0x12158c90 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xE4), 0 */ /* 0x12153DE8: cmp dword ptr [esi + 0xe4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12153DEF: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153E03; /* 0x12153DF0: je 0x12153e03 */
L_12153DF2:
    eax = MEM32(esi); /* 0x12153DF2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 1; /* 0x12153DF4: mov dword ptr [eax + 0x14], 1 */
    eax = MEM32(esi); /* 0x12153DFB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153DFD: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x12153DFF: call eax */
    RECOMP_FLAGS_IN();
    goto L_12153E18; /* 0x12153E01: jmp 0x12153e18 */
L_12153E03:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x12153E03: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153E13; /* 0x12153E0A: je 0x12153e13 */
L_12153E0C:
    RECOMP_CALL(sub_12158930); /* 0x12153E0C: call 0x12158930 */
    RECOMP_FLAGS_IN();
    goto L_12153E18; /* 0x12153E11: jmp 0x12153e18 */
L_12153E13:
    RECOMP_CALL(sub_12157B00); /* 0x12153E13: call 0x12157b00 */
    RECOMP_FLAGS_IN();
L_12153E18:
    eax = MEM32(esi + 0x1B8); /* 0x12153E18: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x12153E1E: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153E2E; /* 0x12153E22: jne 0x12153e2e */
L_12153E24:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x12153E24: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153E2E; /* 0x12153E28: jne 0x12153e2e */
L_12153E2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153E2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12153E33; /* 0x12153E2C: jmp 0x12153e33 */
L_12153E2E:
    eax = 1; /* 0x12153E2E: mov eax, 1 */
L_12153E33:
    PUSH32(esp, eax); /* 0x12153E33: push eax */
    PUSH32(esp, esi); /* 0x12153E34: push esi */
    RECOMP_CALL(sub_12156E60); /* 0x12153E35: call 0x12156e60 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x12153E3A: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153E48; /* 0x12153E3E: jne 0x12153e48 */
L_12153E40:
    PUSH32(esp, 0); /* 0x12153E40: push 0 */
    PUSH32(esp, esi); /* 0x12153E42: push esi */
    RECOMP_CALL(sub_12155D90); /* 0x12153E43: call 0x12155d90 */
    RECOMP_FLAGS_IN();
L_12153E48:
    eax = MEM32(esi + 0x4); /* 0x12153E48: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x18); /* 0x12153E4B: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x12153E4E: push esi */
    RECOMP_ICALL(eax); /* 0x12153E4F: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1B8); /* 0x12153E51: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax + 0x8); /* 0x12153E57: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12153E5A: push esi */
    RECOMP_ICALL(eax); /* 0x12153E5B: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x12153E5D: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x12153E60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153EBA; /* 0x12153E62: je 0x12153eba */
L_12153E64:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x12153E64: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153EBA; /* 0x12153E68: jne 0x12153eba */
L_12153E6A:
    eax = MEM32(esi + 0x1B8); /* 0x12153E6A: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x12153E70: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153EBA; /* 0x12153E74: je 0x12153eba */
L_12153E76:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x12153E76: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x24); /* 0x12153E7D: mov eax, dword ptr [esi + 0x24] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153E86; /* 0x12153E80: je 0x12153e86 */
L_12153E82:
    eax = eax + eax * 2 + 0x2; /* 0x12153E82: lea eax, [eax + eax*2 + 2] */
L_12153E86:
    MEM32(ecx + 0x4) = 0; /* 0x12153E86: mov dword ptr [ecx + 4], 0 */
    ecx = MEM32(esi + 0x144); /* 0x12153E8D: mov ecx, dword ptr [esi + 0x144] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12153E93: imul ecx, eax */
    eax = MEM32(esi + 0x8); /* 0x12153E96: mov eax, dword ptr [esi + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x12153E99: mov dword ptr [eax + 8], ecx */
    eax = MEM32(esi + 0x8); /* 0x12153E9C: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12153E9F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = 0; /* 0x12153EA1: mov dword ptr [eax + 0xc], 0 */
    /* cmp MEM32(esi + 0x6C), ecx */ /* 0x12153EA8: cmp dword ptr [esi + 0x6c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x8); /* 0x12153EAB: mov eax, dword ptr [esi + 8] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12153EAE: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12153EB1: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x10) = ecx; /* 0x12153EB4: mov dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1; /* 0x12153EB7: inc dword ptr [edi + 0xc] */
    _flag_k = FK_INC;
L_12153EBA:
    edi = POP32_VAL(esp); /* 0x12153EBA: pop edi */
    ebx = POP32_VAL(esp); /* 0x12153EBB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12153EBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_12153ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12153ED0u);

L_12153ED0:
    edi = edi; /* 0x12153ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12153ED2: push ebp */
    ebp = esp; /* 0x12153ED3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12153ED5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12153ED6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12153ED9: push edi */
    edi = MEM32(esi + 0x1A8); /* 0x12153EDA: mov edi, dword ptr [esi + 0x1a8] */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x12153EE0: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153EFB; /* 0x12153EE4: je 0x12153efb */
L_12153EE6:
    eax = MEM32(esi); /* 0x12153EE6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x12153EE8: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(esi); /* 0x12153EEF: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153EF1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153EF3: push esi */
    RECOMP_ICALL(eax); /* 0x12153EF4: call eax */
    RECOMP_FLAGS_IN();
    goto L_12153FB9; /* 0x12153EF6: jmp 0x12153fb9 */
L_12153EFB:
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x12153EFB: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153F49; /* 0x12153EFF: je 0x12153f49 */
L_12153F01:
    /* cmp MEM32(esi + 0x88), 0 */ /* 0x12153F01: cmp dword ptr [esi + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153F49; /* 0x12153F08: jne 0x12153f49 */
L_12153F0A:
    /* cmp MEM32(esi + 0x5C), 0 */ /* 0x12153F0A: cmp dword ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153F28; /* 0x12153F0E: je 0x12153f28 */
L_12153F10:
    /* cmp MEM32(esi + 0x6C), 0 */ /* 0x12153F10: cmp dword ptr [esi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153F28; /* 0x12153F14: je 0x12153f28 */
L_12153F16:
    eax = MEM32(edi + 0x18); /* 0x12153F16: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x1D0) = eax; /* 0x12153F19: mov dword ptr [esi + 0x1d0], eax */
    MEM32(edi + 0x8) = 1; /* 0x12153F1F: mov dword ptr [edi + 8], 1 */
    goto L_12153F49; /* 0x12153F26: jmp 0x12153f49 */
L_12153F28:
    /* cmp MEM32(esi + 0x64), 0 */ /* 0x12153F28: cmp dword ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153F39; /* 0x12153F2C: je 0x12153f39 */
L_12153F2E:
    eax = MEM32(edi + 0x14); /* 0x12153F2E: mov eax, dword ptr [edi + 0x14] */
    MEM32(esi + 0x1D0) = eax; /* 0x12153F31: mov dword ptr [esi + 0x1d0], eax */
    goto L_12153F49; /* 0x12153F37: jmp 0x12153f49 */
L_12153F39:
    eax = MEM32(esi); /* 0x12153F39: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x2Eu; /* 0x12153F3B: mov dword ptr [eax + 0x14], 0x2e */
    eax = MEM32(esi); /* 0x12153F42: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12153F44: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153F46: push esi */
    RECOMP_ICALL(eax); /* 0x12153F47: call eax */
    RECOMP_FLAGS_IN();
L_12153F49:
    eax = MEM32(esi + 0x1C4); /* 0x12153F49: mov eax, dword ptr [esi + 0x1c4] */
    eax = MEM32(eax); /* 0x12153F4F: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153F51: push esi */
    RECOMP_ICALL(eax); /* 0x12153F52: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1B0); /* 0x12153F54: mov eax, dword ptr [esi + 0x1b0] */
    eax = MEM32(eax + 0x8); /* 0x12153F5A: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12153F5D: push esi */
    RECOMP_ICALL(eax); /* 0x12153F5E: call eax */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x12153F60: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153FB9; /* 0x12153F64: jne 0x12153fb9 */
L_12153F66:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x12153F66: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153F77; /* 0x12153F6A: jne 0x12153f77 */
L_12153F6C:
    eax = MEM32(esi + 0x1CC); /* 0x12153F6C: mov eax, dword ptr [esi + 0x1cc] */
    eax = MEM32(eax); /* 0x12153F72: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153F74: push esi */
    RECOMP_ICALL(eax); /* 0x12153F75: call eax */
    RECOMP_FLAGS_IN();
L_12153F77:
    eax = MEM32(esi + 0x1C8); /* 0x12153F77: mov eax, dword ptr [esi + 0x1c8] */
    eax = MEM32(eax); /* 0x12153F7D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153F7F: push esi */
    RECOMP_ICALL(eax); /* 0x12153F80: call eax */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x12153F82: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153F96; /* 0x12153F86: je 0x12153f96 */
L_12153F88:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12153F88: push dword ptr [edi + 8] */
    eax = MEM32(esi + 0x1D0); /* 0x12153F8B: mov eax, dword ptr [esi + 0x1d0] */
    eax = MEM32(eax); /* 0x12153F91: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12153F93: push esi */
    RECOMP_ICALL(eax); /* 0x12153F94: call eax */
    RECOMP_FLAGS_IN();
L_12153F96:
    eax = MEM32(edi + 0x8); /* 0x12153F96: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(esi + 0x1B4); /* 0x12153F99: mov ecx, dword ptr [esi + 0x1b4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12153F9F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12153FA1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x12153FA3: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x12153FA6: push eax */
    eax = MEM32(ecx); /* 0x12153FA7: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12153FA9: push esi */
    RECOMP_ICALL(eax); /* 0x12153FAA: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1AC); /* 0x12153FAC: mov eax, dword ptr [esi + 0x1ac] */
    eax = MEM32(eax); /* 0x12153FB2: mov eax, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x12153FB4: push 0 */
    PUSH32(esp, esi); /* 0x12153FB6: push esi */
    RECOMP_ICALL(eax); /* 0x12153FB7: call eax */
    RECOMP_FLAGS_IN();
L_12153FB9:
    ecx = MEM32(esi + 0x8); /* 0x12153FB9: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x12153FBC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12153FF9; /* 0x12153FBE: je 0x12153ff9 */
L_12153FC0:
    eax = MEM32(edi + 0xC); /* 0x12153FC0: mov eax, dword ptr [edi + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x12153FC3: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(esi + 0x8); /* 0x12153FC6: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12153FC9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), ecx */ /* 0x12153FCB: cmp dword ptr [edi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12153FCE: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12153FD1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x12153FD2: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    MEM32(eax + 0x10) = ecx; /* 0x12153FD5: mov dword ptr [eax + 0x10], ecx */
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x12153FD8: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12153FF9; /* 0x12153FDC: je 0x12153ff9 */
L_12153FDE:
    eax = MEM32(esi + 0x1B8); /* 0x12153FDE: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x12153FE4: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12153FF9; /* 0x12153FE8: jne 0x12153ff9 */
L_12153FEA:
    ecx = MEM32(esi + 0x8); /* 0x12153FEA: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12153FED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x6C), eax */ /* 0x12153FEF: cmp dword ptr [esi + 0x6c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12153FF2: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12153FF5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + eax; /* 0x12153FF6: add dword ptr [ecx + 0x10], eax */
    _flag_k = FK_ADD;
L_12153FF9:
    edi = POP32_VAL(esp); /* 0x12153FF9: pop edi */
    esi = POP32_VAL(esp); /* 0x12153FFA: pop esi */
    ebp = POP32_VAL(esp); /* 0x12153FFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12153FFC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12154010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154010u);

L_12154010:
    edi = edi; /* 0x12154010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154012: push ebp */
    ebp = esp; /* 0x12154013: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12154015: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x54), 0 */ /* 0x12154018: cmp dword ptr [ecx + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1215401C: push esi */
    esi = MEM32(ecx + 0x1A8); /* 0x1215401D: mov esi, dword ptr [ecx + 0x1a8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12154031; /* 0x12154023: je 0x12154031 */
L_12154025:
    eax = MEM32(ecx + 0x1D0); /* 0x12154025: mov eax, dword ptr [ecx + 0x1d0] */
    eax = MEM32(eax + 0x8); /* 0x1215402B: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ecx); /* 0x1215402E: push ecx */
    RECOMP_ICALL(eax); /* 0x1215402F: call eax */
    RECOMP_FLAGS_IN();
L_12154031:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x12154031: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x12154034: pop esi */
    ebp = POP32_VAL(esp); /* 0x12154035: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12154036: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12154040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154040u);

L_12154040:
    edi = edi; /* 0x12154040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154042: push ebp */
    ebp = esp; /* 0x12154043: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12154045: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12154046: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12154049: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215404C: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x1Cu); /* 0x1215404E: push 0x1c */
    PUSH32(esp, 1); /* 0x12154050: push 1 */
    PUSH32(esp, esi); /* 0x12154052: push esi */
    RECOMP_ICALL(eax); /* 0x12154053: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A8) = eax; /* 0x12154055: mov dword ptr [esi + 0x1a8], eax */
    MEM32(eax) = 0x12153ED0u; /* 0x1215405B: mov dword ptr [eax], 0x12153ed0 */
    MEM32(eax + 0x4) = 0x12154010u; /* 0x12154061: mov dword ptr [eax + 4], 0x12154010 */
    MEM32(eax + 0x8) = 0; /* 0x12154068: mov dword ptr [eax + 8], 0 */
    RECOMP_CALL(sub_12153CD0); /* 0x1215406F: call 0x12153cd0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12154074: pop esi */
    ebp = POP32_VAL(esp); /* 0x12154075: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12154076: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12154080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154080u);

L_12154080:
    edi = edi; /* 0x12154080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154082: push ebp */
    ebp = esp; /* 0x12154083: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12154085: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12154088: mov eax, dword ptr [ebp + 8] */
    eax = eax + ecx + (-0x1); /* 0x1215408B: lea eax, [eax + ecx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215408F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x12154090: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebp = POP32_VAL(esp); /* 0x12154092: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12154093: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121540A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121540A0u);

L_121540A0:
    edi = edi; /* 0x121540A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121540A2: push ebp */
    ebp = esp; /* 0x121540A3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121540A5: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x121540A8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121540AB: push esi */
    esi = eax + ecx + (-0x1); /* 0x121540AC: lea esi, [eax + ecx - 1] */
    eax = esi; /* 0x121540B0: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x121540B2: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x121540B3: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x121540B5: sub esi, edx */
    _flag_k = FK_CMP;
    eax = esi; /* 0x121540B7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121540B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x121540BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121540BB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121540D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121540D0u);

L_121540D0:
    edi = edi; /* 0x121540D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121540D2: push ebp */
    ebp = esp; /* 0x121540D3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121540D5: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x121540D8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x121540DB: push ebx */
    PUSH32(esp, esi); /* 0x121540DC: push esi */
    esi = MEM32(ebp + 0x18); /* 0x121540DD: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x121540E0: push edi */
    edi = eax + ecx * 4; /* 0x121540E1: lea edi, [eax + ecx*4] */
    ecx = MEM32(ebp + 0x14); /* 0x121540E4: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x121540E7: mov eax, dword ptr [ebp + 0x10] */
    ebx = eax + ecx * 4; /* 0x121540EA: lea ebx, [eax + ecx*4] */
    /* test esi, esi */ /* 0x121540ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215410D; /* 0x121540EF: jle 0x1215410d */
L_121540F1:
    ecx = MEM32(edi); /* 0x121540F1: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x121540F3: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ebx); /* 0x121540F6: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x121540F8: push ecx */
    PUSH32(esp, eax); /* 0x121540F9: push eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x121540FA: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x121540FD: add ebx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_121BF440); /* 0x12154100: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12154105: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12154106: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x12154109: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121540F1; /* 0x1215410B: jg 0x121540f1 */
L_1215410D:
    edi = POP32_VAL(esp); /* 0x1215410D: pop edi */
    esi = POP32_VAL(esp); /* 0x1215410E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215410F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12154110: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12154111: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12154120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154120u);

L_12154120:
    edi = edi; /* 0x12154120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154122: push ebp */
    ebp = esp; /* 0x12154123: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12154125: mov eax, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x12154128: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x12154128: shl eax, 7 */
    PUSH32(esp, eax); /* 0x1215412B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215412C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215412F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x12154132: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12154137: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1215413A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1215413B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12154150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154150u);

L_12154150:
    edi = edi; /* 0x12154150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154152: push ebp */
    ebp = esp; /* 0x12154153: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12154155: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x12154158: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215415A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF434); /* 0x1215415D: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12154162: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x12154165: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12154166: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12154170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154170u);

L_12154170:
    ecx = MEM32(esi + 0x18); /* 0x12154170: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154173: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x12154175: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154178: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1215417A: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154199; /* 0x1215417D: jne 0x12154199 */
L_1215417F:
    eax = MEM32(ecx + 0xC); /* 0x1215417F: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154182: push esi */
    RECOMP_ICALL(eax); /* 0x12154183: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154185: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154199; /* 0x12154187: jne 0x12154199 */
L_12154189:
    eax = MEM32(esi); /* 0x12154189: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215418B: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154192: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154194: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154196: push esi */
    RECOMP_ICALL(eax); /* 0x12154197: call eax */
    RECOMP_FLAGS_IN();
L_12154199:
    ecx = MEM32(esi + 0x18); /* 0x12154199: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215419C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1215419E: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121541A0: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121541A2: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121541C1; /* 0x121541A5: jne 0x121541c1 */
L_121541A7:
    eax = MEM32(ecx + 0xC); /* 0x121541A7: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121541AA: push esi */
    RECOMP_ICALL(eax); /* 0x121541AB: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121541AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121541C1; /* 0x121541AF: jne 0x121541c1 */
L_121541B1:
    eax = MEM32(esi); /* 0x121541B1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121541B3: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121541BA: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121541BC: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121541BE: push esi */
    RECOMP_ICALL(eax); /* 0x121541BF: call eax */
    RECOMP_FLAGS_IN();
L_121541C1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121541C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_121541D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121541D0u);

L_121541D0:
    edx = MEM32(esi + 0x18); /* 0x121541D0: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(edx); /* 0x121541D3: mov eax, dword ptr [edx] */
    ecx = ebx; /* 0x121541D5: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x121541D7: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121541DA: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121541DC: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121541DE: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121541FD; /* 0x121541E1: jne 0x121541fd */
L_121541E3:
    eax = MEM32(edx + 0xC); /* 0x121541E3: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121541E6: push esi */
    RECOMP_ICALL(eax); /* 0x121541E7: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121541E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121541FD; /* 0x121541EB: jne 0x121541fd */
L_121541ED:
    eax = MEM32(esi); /* 0x121541ED: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121541EF: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121541F6: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121541F8: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121541FA: push esi */
    RECOMP_ICALL(eax); /* 0x121541FB: call eax */
    RECOMP_FLAGS_IN();
L_121541FD:
    ecx = MEM32(esi + 0x18); /* 0x121541FD: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154200: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x12154202: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154204: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154206: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154225; /* 0x12154209: jne 0x12154225 */
L_1215420B:
    eax = MEM32(ecx + 0xC); /* 0x1215420B: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215420E: push esi */
    RECOMP_ICALL(eax); /* 0x1215420F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154211: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154225; /* 0x12154213: jne 0x12154225 */
L_12154215:
    eax = MEM32(esi); /* 0x12154215: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154217: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215421E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154220: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154222: push esi */
    RECOMP_ICALL(eax); /* 0x12154223: call eax */
    RECOMP_FLAGS_IN();
L_12154225:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12154225: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154230u);

L_12154230:
    edi = edi; /* 0x12154230: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154232: push ebp */
    ebp = esp; /* 0x12154233: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12154235: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12154238: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1215423B: push ebx */
    PUSH32(esp, edi); /* 0x1215423C: push edi */
    edi = MEM32(esi + ecx * 4 + 0x48); /* 0x1215423D: mov edi, dword ptr [esi + ecx*4 + 0x48] */
    MEM32(ebp + (-0x4)) = edi; /* 0x12154241: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x12154244: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215425D; /* 0x12154246: jne 0x1215425d */
L_12154248:
    eax = MEM32(esi); /* 0x12154248: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x34u; /* 0x1215424A: mov dword ptr [eax + 0x14], 0x34 */
    eax = MEM32(esi); /* 0x12154251: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12154253: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12154256: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154258: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215425A: push esi */
    RECOMP_ICALL(eax); /* 0x1215425B: call eax */
    RECOMP_FLAGS_IN();
L_1215425D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215425D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x4; /* 0x1215425F: lea eax, [edi + 4] */
    ecx = ebx + 0x10; /* 0x12154262: lea ecx, [ebx + 0x10] */
L_12154265:
    /* cmp MEM16(eax + (-0x4)), 0xFFu */ /* 0x12154265: cmp word ptr [eax - 4], 0xff */
    _flag_a = (uint32_t)(MEM16(eax + (-0x4))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_12154272; /* 0x1215426B: jbe 0x12154272 */
L_1215426D:
    ebx = 1; /* 0x1215426D: mov ebx, 1 */
L_12154272:
    /* cmp MEM16(eax + (-0x2)), 0xFFu */ /* 0x12154272: cmp word ptr [eax - 2], 0xff */
    _flag_a = (uint32_t)(MEM16(eax + (-0x2))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1215427F; /* 0x12154278: jbe 0x1215427f */
L_1215427A:
    ebx = 1; /* 0x1215427A: mov ebx, 1 */
L_1215427F:
    /* cmp MEM16(eax), 0xFFu */ /* 0x1215427F: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1215428B; /* 0x12154284: jbe 0x1215428b */
L_12154286:
    ebx = 1; /* 0x12154286: mov ebx, 1 */
L_1215428B:
    /* cmp MEM16(eax + 0x2), 0xFFu */ /* 0x1215428B: cmp word ptr [eax + 2], 0xff */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_12154298; /* 0x12154291: jbe 0x12154298 */
L_12154293:
    ebx = 1; /* 0x12154293: mov ebx, 1 */
L_12154298:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12154298: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1215429B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154265; /* 0x1215429C: jne 0x12154265 */
L_1215429E:
    /* cmp MEM32(edi + 0x80), ecx */ /* 0x1215429E: cmp dword ptr [edi + 0x80], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x80)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12154420; /* 0x121542A4: jne 0x12154420 */
L_121542AA:
    ecx = MEM32(esi + 0x18); /* 0x121542AA: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121542AD: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x121542AF: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121542B2: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121542B4: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121542D3; /* 0x121542B7: jne 0x121542d3 */
L_121542B9:
    eax = MEM32(ecx + 0xC); /* 0x121542B9: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121542BC: push esi */
    RECOMP_ICALL(eax); /* 0x121542BD: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121542BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121542D3; /* 0x121542C1: jne 0x121542d3 */
L_121542C3:
    eax = MEM32(esi); /* 0x121542C3: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121542C5: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121542CC: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121542CE: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121542D0: push esi */
    RECOMP_ICALL(eax); /* 0x121542D1: call eax */
    RECOMP_FLAGS_IN();
L_121542D3:
    ecx = MEM32(esi + 0x18); /* 0x121542D3: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121542D6: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xDBu); /* 0x121542D8: mov byte ptr [eax], 0xdb */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121542DB: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121542DD: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121542FC; /* 0x121542E0: jne 0x121542fc */
L_121542E2:
    eax = MEM32(ecx + 0xC); /* 0x121542E2: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121542E5: push esi */
    RECOMP_ICALL(eax); /* 0x121542E6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121542E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121542FC; /* 0x121542EA: jne 0x121542fc */
L_121542EC:
    eax = MEM32(esi); /* 0x121542EC: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121542EE: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121542F5: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121542F7: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121542F9: push esi */
    RECOMP_ICALL(eax); /* 0x121542FA: call eax */
    RECOMP_FLAGS_IN();
L_121542FC:
    edx = MEM32(esi + 0x18); /* 0x121542FC: mov edx, dword ptr [esi + 0x18] */
    eax = ebx; /* 0x121542FF: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12154301: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12154303: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x12154305: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x43u; /* 0x12154308: add eax, 0x43 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1215430B: mov ecx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215430D: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edx); /* 0x12154310: mov eax, dword ptr [edx] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12154312: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x12154315: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154317: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154319: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154338; /* 0x1215431C: jne 0x12154338 */
L_1215431E:
    eax = MEM32(edx + 0xC); /* 0x1215431E: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154321: push esi */
    RECOMP_ICALL(eax); /* 0x12154322: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154324: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154338; /* 0x12154326: jne 0x12154338 */
L_12154328:
    eax = MEM32(esi); /* 0x12154328: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215432A: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154331: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154333: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154335: push esi */
    RECOMP_ICALL(eax); /* 0x12154336: call eax */
    RECOMP_FLAGS_IN();
L_12154338:
    ecx = MEM32(esi + 0x18); /* 0x12154338: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215433B: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215433D: mov edx, dword ptr [ebp - 8] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x12154340: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154342: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154344: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154363; /* 0x12154347: jne 0x12154363 */
L_12154349:
    eax = MEM32(ecx + 0xC); /* 0x12154349: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215434C: push esi */
    RECOMP_ICALL(eax); /* 0x1215434D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215434F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154363; /* 0x12154351: jne 0x12154363 */
L_12154353:
    eax = MEM32(esi); /* 0x12154353: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154355: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215435C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215435E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154360: push esi */
    RECOMP_ICALL(eax); /* 0x12154361: call eax */
    RECOMP_FLAGS_IN();
L_12154363:
    edx = MEM32(esi + 0x18); /* 0x12154363: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(edx); /* 0x12154366: mov eax, dword ptr [edx] */
    SET_LO8(ecx, LO8(ebx)); /* 0x12154368: mov cl, bl */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x1215436A: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x1215436A: shl cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x8)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0x8)); /* 0x1215436D: add cl, byte ptr [ebp + 8] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x12154370: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154372: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154374: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154393; /* 0x12154377: jne 0x12154393 */
L_12154379:
    eax = MEM32(edx + 0xC); /* 0x12154379: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1215437C: push esi */
    RECOMP_ICALL(eax); /* 0x1215437D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215437F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154393; /* 0x12154381: jne 0x12154393 */
L_12154383:
    eax = MEM32(esi); /* 0x12154383: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154385: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215438C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215438E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154390: push esi */
    RECOMP_ICALL(eax); /* 0x12154391: call eax */
    RECOMP_FLAGS_IN();
L_12154393:
    edi = 0x12012F60u; /* 0x12154393: mov edi, 0x12012f60 */
    goto L_121543A0; /* 0x12154398: jmp 0x121543a0 */
L_121543A0:
    eax = MEM32(edi); /* 0x121543A0: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x121543A2: mov ecx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x121543A5: movzx eax, word ptr [ecx + eax*2] */
    MEM32(ebp + 0x8) = eax; /* 0x121543A9: mov dword ptr [ebp + 8], eax */
    /* test ebx, ebx */ /* 0x121543AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121543DD; /* 0x121543AE: je 0x121543dd */
L_121543B0:
    edx = MEM32(esi + 0x18); /* 0x121543B0: mov edx, dword ptr [esi + 0x18] */
    ecx = eax; /* 0x121543B3: mov ecx, eax */
    eax = MEM32(edx); /* 0x121543B5: mov eax, dword ptr [edx] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x121543B7: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x121543B7: shr ecx, 8 */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121543BA: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121543BC: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121543BE: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121543DD; /* 0x121543C1: jne 0x121543dd */
L_121543C3:
    eax = MEM32(edx + 0xC); /* 0x121543C3: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121543C6: push esi */
    RECOMP_ICALL(eax); /* 0x121543C7: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121543C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121543DD; /* 0x121543CB: jne 0x121543dd */
L_121543CD:
    eax = MEM32(esi); /* 0x121543CD: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121543CF: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121543D6: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121543D8: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121543DA: push esi */
    RECOMP_ICALL(eax); /* 0x121543DB: call eax */
    RECOMP_FLAGS_IN();
L_121543DD:
    ecx = MEM32(esi + 0x18); /* 0x121543DD: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121543E0: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x8); /* 0x121543E2: mov edx, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x121543E5: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121543E7: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121543E9: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154408; /* 0x121543EC: jne 0x12154408 */
L_121543EE:
    eax = MEM32(ecx + 0xC); /* 0x121543EE: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121543F1: push esi */
    RECOMP_ICALL(eax); /* 0x121543F2: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121543F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154408; /* 0x121543F6: jne 0x12154408 */
L_121543F8:
    eax = MEM32(esi); /* 0x121543F8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121543FA: mov dword ptr [eax + 0x14], 0x18 */
    ecx = MEM32(esi); /* 0x12154401: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x12154403: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12154405: push esi */
    RECOMP_ICALL(ecx); /* 0x12154406: call ecx */
    RECOMP_FLAGS_IN();
L_12154408:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12154408: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x12013060u */ /* 0x1215440B: cmp edi, 0x12013060 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x12013060u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121543A0; /* 0x12154411: jl 0x121543a0 */
L_12154413:
    eax = MEM32(ebp + (-0x4)); /* 0x12154413: mov eax, dword ptr [ebp - 4] */
    MEM32(eax + 0x80) = 1; /* 0x12154416: mov dword ptr [eax + 0x80], 1 */
L_12154420:
    edi = POP32_VAL(esp); /* 0x12154420: pop edi */
    eax = ebx; /* 0x12154421: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12154423: pop ebx */
    esp = ebp; /* 0x12154424: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12154426: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12154427: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12154430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154430u);

L_12154430:
    edi = edi; /* 0x12154430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154432: push ebp */
    ebp = esp; /* 0x12154433: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12154435: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12154436: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1215443A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1215443D: push esi */
    PUSH32(esp, edi); /* 0x1215443E: push edi */
    esi = eax; /* 0x1215443F: mov esi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215444F; /* 0x12154441: je 0x1215444f */
L_12154443:
    edi = MEM32(esi + ecx * 4 + 0x68); /* 0x12154443: mov edi, dword ptr [esi + ecx*4 + 0x68] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x12154447: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x1215444A: mov dword ptr [ebp + 8], ecx */
    goto L_12154453; /* 0x1215444D: jmp 0x12154453 */
L_1215444F:
    edi = MEM32(esi + ecx * 4 + 0x58); /* 0x1215444F: mov edi, dword ptr [esi + ecx*4 + 0x58] */
L_12154453:
    MEM32(ebp + (-0x4)) = edi; /* 0x12154453: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x12154456: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215446F; /* 0x12154458: jne 0x1215446f */
L_1215445A:
    eax = MEM32(esi); /* 0x1215445A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x32u; /* 0x1215445C: mov dword ptr [eax + 0x14], 0x32 */
    eax = MEM32(esi); /* 0x12154463: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12154465: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12154468: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215446A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215446C: push esi */
    RECOMP_ICALL(eax); /* 0x1215446D: call eax */
    RECOMP_FLAGS_IN();
L_1215446F:
    /* cmp MEM32(edi + 0x114), 0 */ /* 0x1215446F: cmp dword ptr [edi + 0x114], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x114)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121545BD; /* 0x12154476: jne 0x121545bd */
L_1215447C:
    PUSH32(esp, ebx); /* 0x1215447C: push ebx */
    ebx = 0xC4u; /* 0x1215447D: mov ebx, 0xc4 */
    RECOMP_CALL(sub_12154170); /* 0x12154482: call 0x12154170 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x12154487: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215448A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = 0; /* 0x1215448C: mov dword ptr [ebp + 0xc], 0 */
    ecx = ebx + 0x2; /* 0x12154493: lea ecx, [ebx + 2] */
    edi = edx + 0x8; /* 0x12154496: lea edi, [edx + 8] */
    esp = esp; /* 0x12154499: lea esp, [esp] */
L_121544A0:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x121544A0: movzx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x121544A4: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx); /* 0x121544A7: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x121544AA: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x121544AC: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x121544AF: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121544A0; /* 0x121544B0: jne 0x121544a0 */
L_121544B2:
    eax = MEM32(ebp + 0xC); /* 0x121544B2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121544B5: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x18); /* 0x121544B7: mov edx, dword ptr [esi + 0x18] */
    MEM32(ebp + 0xC) = eax; /* 0x121544BA: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x121544BD: add eax, 0x13 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x121544C0: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x121544C2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edx); /* 0x121544C5: mov eax, dword ptr [edx] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x121544C7: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121544CA: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121544CC: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121544CE: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121544ED; /* 0x121544D1: jne 0x121544ed */
L_121544D3:
    eax = MEM32(edx + 0xC); /* 0x121544D3: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121544D6: push esi */
    RECOMP_ICALL(eax); /* 0x121544D7: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121544D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121544ED; /* 0x121544DB: jne 0x121544ed */
L_121544DD:
    eax = MEM32(esi); /* 0x121544DD: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121544DF: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121544E6: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121544E8: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121544EA: push esi */
    RECOMP_ICALL(eax); /* 0x121544EB: call eax */
    RECOMP_FLAGS_IN();
L_121544ED:
    ecx = MEM32(esi + 0x18); /* 0x121544ED: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121544F0: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + (-0x4)); /* 0x121544F2: mov edx, dword ptr [ebp - 4] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x121544F5: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121544F7: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121544F9: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154518; /* 0x121544FC: jne 0x12154518 */
L_121544FE:
    eax = MEM32(ecx + 0xC); /* 0x121544FE: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154501: push esi */
    RECOMP_ICALL(eax); /* 0x12154502: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154504: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154518; /* 0x12154506: jne 0x12154518 */
L_12154508:
    eax = MEM32(esi); /* 0x12154508: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215450A: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154511: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154513: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154515: push esi */
    RECOMP_ICALL(eax); /* 0x12154516: call eax */
    RECOMP_FLAGS_IN();
L_12154518:
    edx = MEM32(esi + 0x18); /* 0x12154518: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(edx); /* 0x1215451B: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + 0x8); /* 0x1215451D: mov ecx, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x12154520: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154522: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154524: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154543; /* 0x12154527: jne 0x12154543 */
L_12154529:
    eax = MEM32(edx + 0xC); /* 0x12154529: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1215452C: push esi */
    RECOMP_ICALL(eax); /* 0x1215452D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215452F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154543; /* 0x12154531: jne 0x12154543 */
L_12154533:
    eax = MEM32(esi); /* 0x12154533: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154535: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215453C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215453E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154540: push esi */
    RECOMP_ICALL(eax); /* 0x12154541: call eax */
    RECOMP_FLAGS_IN();
L_12154543:
    edi = 1; /* 0x12154543: mov edi, 1 */
L_12154548:
    edx = MEM32(esi + 0x18); /* 0x12154548: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(edi + ebx)); /* 0x1215454B: mov al, byte ptr [edi + ebx] */
    ecx = MEM32(edx); /* 0x1215454E: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154550: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154552: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154554: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154573; /* 0x12154557: jne 0x12154573 */
L_12154559:
    eax = MEM32(edx + 0xC); /* 0x12154559: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1215455C: push esi */
    RECOMP_ICALL(eax); /* 0x1215455D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215455F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154573; /* 0x12154561: jne 0x12154573 */
L_12154563:
    eax = MEM32(esi); /* 0x12154563: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154565: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215456C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215456E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154570: push esi */
    RECOMP_ICALL(eax); /* 0x12154571: call eax */
    RECOMP_FLAGS_IN();
L_12154573:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12154573: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 0x10u */ /* 0x12154574: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12154548; /* 0x12154577: jle 0x12154548 */
L_12154579:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12154579: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1215457B: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121545B2; /* 0x1215457E: jle 0x121545b2 */
L_12154580:
    edx = MEM32(esi + 0x18); /* 0x12154580: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(ebx + edi + 0x11)); /* 0x12154583: mov al, byte ptr [ebx + edi + 0x11] */
    ecx = MEM32(edx); /* 0x12154587: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154589: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1215458B: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x1215458D: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121545AC; /* 0x12154590: jne 0x121545ac */
L_12154592:
    eax = MEM32(edx + 0xC); /* 0x12154592: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154595: push esi */
    RECOMP_ICALL(eax); /* 0x12154596: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154598: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121545AC; /* 0x1215459A: jne 0x121545ac */
L_1215459C:
    eax = MEM32(esi); /* 0x1215459C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215459E: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121545A5: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121545A7: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121545A9: push esi */
    RECOMP_ICALL(eax); /* 0x121545AA: call eax */
    RECOMP_FLAGS_IN();
L_121545AC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121545AC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x121545AD: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12154580; /* 0x121545B0: jl 0x12154580 */
L_121545B2:
    MEM32(ebx + 0x114) = 1; /* 0x121545B2: mov dword ptr [ebx + 0x114], 1 */
    ebx = POP32_VAL(esp); /* 0x121545BC: pop ebx */
L_121545BD:
    edi = POP32_VAL(esp); /* 0x121545BD: pop edi */
    esi = POP32_VAL(esp); /* 0x121545BE: pop esi */
    esp = ebp; /* 0x121545BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121545C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121545C2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121545D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121545D0u);

L_121545D0:
    edi = edi; /* 0x121545D0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x121545D2: push ebx */
    PUSH32(esp, esi); /* 0x121545D3: push esi */
    esi = eax; /* 0x121545D4: mov esi, eax */
    ecx = MEM32(esi + 0x18); /* 0x121545D6: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121545D9: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x121545DB: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121545DE: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121545E0: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121545FF; /* 0x121545E3: jne 0x121545ff */
L_121545E5:
    eax = MEM32(ecx + 0xC); /* 0x121545E5: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121545E8: push esi */
    RECOMP_ICALL(eax); /* 0x121545E9: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121545EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121545FF; /* 0x121545ED: jne 0x121545ff */
L_121545EF:
    eax = MEM32(esi); /* 0x121545EF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121545F1: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121545F8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121545FA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121545FC: push esi */
    RECOMP_ICALL(eax); /* 0x121545FD: call eax */
    RECOMP_FLAGS_IN();
L_121545FF:
    ecx = MEM32(esi + 0x18); /* 0x121545FF: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154602: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xDDu); /* 0x12154604: mov byte ptr [eax], 0xdd */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154607: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154609: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154628; /* 0x1215460C: jne 0x12154628 */
L_1215460E:
    eax = MEM32(ecx + 0xC); /* 0x1215460E: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154611: push esi */
    RECOMP_ICALL(eax); /* 0x12154612: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154614: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154628; /* 0x12154616: jne 0x12154628 */
L_12154618:
    eax = MEM32(esi); /* 0x12154618: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215461A: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154621: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154623: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154625: push esi */
    RECOMP_ICALL(eax); /* 0x12154626: call eax */
    RECOMP_FLAGS_IN();
L_12154628:
    ecx = MEM32(esi + 0x18); /* 0x12154628: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215462B: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x1215462D: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154630: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154632: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154651; /* 0x12154635: jne 0x12154651 */
L_12154637:
    eax = MEM32(ecx + 0xC); /* 0x12154637: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215463A: push esi */
    RECOMP_ICALL(eax); /* 0x1215463B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215463D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154651; /* 0x1215463F: jne 0x12154651 */
L_12154641:
    eax = MEM32(esi); /* 0x12154641: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154643: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215464A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215464C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215464E: push esi */
    RECOMP_ICALL(eax); /* 0x1215464F: call eax */
    RECOMP_FLAGS_IN();
L_12154651:
    ecx = MEM32(esi + 0x18); /* 0x12154651: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154654: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(4); /* 0x12154656: mov byte ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154659: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1215465B: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215467A; /* 0x1215465E: jne 0x1215467a */
L_12154660:
    eax = MEM32(ecx + 0xC); /* 0x12154660: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154663: push esi */
    RECOMP_ICALL(eax); /* 0x12154664: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154666: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215467A; /* 0x12154668: jne 0x1215467a */
L_1215466A:
    eax = MEM32(esi); /* 0x1215466A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215466C: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154673: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154675: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154677: push esi */
    RECOMP_ICALL(eax); /* 0x12154678: call eax */
    RECOMP_FLAGS_IN();
L_1215467A:
    ebx = MEM32(esi + 0xC8); /* 0x1215467A: mov ebx, dword ptr [esi + 0xc8] */
    RECOMP_CALL(sub_121541D0); /* 0x12154680: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12154685: pop esi */
    ebx = POP32_VAL(esp); /* 0x12154686: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12154687: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154690u);

L_12154690:
    edi = edi; /* 0x12154690: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12154692: push ebx */
    PUSH32(esp, esi); /* 0x12154693: push esi */
    esi = ecx; /* 0x12154694: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x12154696: mov ecx, dword ptr [esi + 0x18] */
    ebx = eax; /* 0x12154699: mov ebx, eax */
    eax = MEM32(ecx); /* 0x1215469B: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x1215469D: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121546A0: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121546A2: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x121546A5: push edi */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121546C2; /* 0x121546A6: jne 0x121546c2 */
L_121546A8:
    eax = MEM32(ecx + 0xC); /* 0x121546A8: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121546AB: push esi */
    RECOMP_ICALL(eax); /* 0x121546AC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121546AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121546C2; /* 0x121546B0: jne 0x121546c2 */
L_121546B2:
    eax = MEM32(esi); /* 0x121546B2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121546B4: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121546BB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121546BD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121546BF: push esi */
    RECOMP_ICALL(eax); /* 0x121546C0: call eax */
    RECOMP_FLAGS_IN();
L_121546C2:
    ecx = MEM32(esi + 0x18); /* 0x121546C2: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121546C5: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x121546C7: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121546C9: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121546CB: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121546EA; /* 0x121546CE: jne 0x121546ea */
L_121546D0:
    eax = MEM32(ecx + 0xC); /* 0x121546D0: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121546D3: push esi */
    RECOMP_ICALL(eax); /* 0x121546D4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121546D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121546EA; /* 0x121546D8: jne 0x121546ea */
L_121546DA:
    eax = MEM32(esi); /* 0x121546DA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121546DC: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121546E3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121546E5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121546E7: push esi */
    RECOMP_ICALL(eax); /* 0x121546E8: call eax */
    RECOMP_FLAGS_IN();
L_121546EA:
    eax = MEM32(esi + 0x3C); /* 0x121546EA: mov eax, dword ptr [esi + 0x3c] */
    ebx = eax + eax * 2 + 0x8; /* 0x121546ED: lea ebx, [eax + eax*2 + 8] */
    RECOMP_CALL(sub_121541D0); /* 0x121546F1: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x20), 0xFFFFu */ /* 0x121546F6: cmp dword ptr [esi + 0x20], 0xffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12154708; /* 0x121546FD: jg 0x12154708 */
L_121546FF:
    /* cmp MEM32(esi + 0x1C), 0xFFFFu */ /* 0x121546FF: cmp dword ptr [esi + 0x1c], 0xffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12154721; /* 0x12154706: jle 0x12154721 */
L_12154708:
    eax = MEM32(esi); /* 0x12154708: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x1215470A: mov dword ptr [eax + 0x14], 0x29 */
    eax = MEM32(esi); /* 0x12154711: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = 0xFFFFu; /* 0x12154713: mov dword ptr [eax + 0x18], 0xffff */
    eax = MEM32(esi); /* 0x1215471A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215471C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215471E: push esi */
    RECOMP_ICALL(eax); /* 0x1215471F: call eax */
    RECOMP_FLAGS_IN();
L_12154721:
    edx = MEM32(esi + 0x18); /* 0x12154721: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0x38)); /* 0x12154724: mov al, byte ptr [esi + 0x38] */
    ecx = MEM32(edx); /* 0x12154727: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154729: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1215472B: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x1215472D: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215474C; /* 0x12154730: jne 0x1215474c */
L_12154732:
    eax = MEM32(edx + 0xC); /* 0x12154732: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154735: push esi */
    RECOMP_ICALL(eax); /* 0x12154736: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154738: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215474C; /* 0x1215473A: jne 0x1215474c */
L_1215473C:
    eax = MEM32(esi); /* 0x1215473C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215473E: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154745: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154747: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154749: push esi */
    RECOMP_ICALL(eax); /* 0x1215474A: call eax */
    RECOMP_FLAGS_IN();
L_1215474C:
    ebx = MEM32(esi + 0x20); /* 0x1215474C: mov ebx, dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_121541D0); /* 0x1215474F: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x1C); /* 0x12154754: mov ebx, dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_121541D0); /* 0x12154757: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x18); /* 0x1215475C: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0x3C)); /* 0x1215475F: mov al, byte ptr [esi + 0x3c] */
    ecx = MEM32(edx); /* 0x12154762: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154764: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154766: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154768: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154787; /* 0x1215476B: jne 0x12154787 */
L_1215476D:
    eax = MEM32(edx + 0xC); /* 0x1215476D: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154770: push esi */
    RECOMP_ICALL(eax); /* 0x12154771: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154773: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154787; /* 0x12154775: jne 0x12154787 */
L_12154777:
    eax = MEM32(esi); /* 0x12154777: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154779: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154780: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154782: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154784: push esi */
    RECOMP_ICALL(eax); /* 0x12154785: call eax */
    RECOMP_FLAGS_IN();
L_12154787:
    edi = MEM32(esi + 0x44); /* 0x12154787: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215478A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x1215478C: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12154828; /* 0x1215478F: jle 0x12154828 */
L_12154795:
    edx = MEM32(esi + 0x18); /* 0x12154795: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(edi)); /* 0x12154798: mov al, byte ptr [edi] */
    ecx = MEM32(edx); /* 0x1215479A: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1215479C: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1215479E: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121547A0: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121547BF; /* 0x121547A3: jne 0x121547bf */
L_121547A5:
    eax = MEM32(edx + 0xC); /* 0x121547A5: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121547A8: push esi */
    RECOMP_ICALL(eax); /* 0x121547A9: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121547AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121547BF; /* 0x121547AD: jne 0x121547bf */
L_121547AF:
    eax = MEM32(esi); /* 0x121547AF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121547B1: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121547B8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121547BA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121547BC: push esi */
    RECOMP_ICALL(eax); /* 0x121547BD: call eax */
    RECOMP_FLAGS_IN();
L_121547BF:
    SET_LO8(ecx, MEM8(edi + 0x8)); /* 0x121547BF: mov cl, byte ptr [edi + 8] */
    edx = MEM32(esi + 0x18); /* 0x121547C2: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(edx); /* 0x121547C5: mov eax, dword ptr [edx] */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x121547C7: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x121547C7: shl cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0xC)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(edi + 0xC)); /* 0x121547CA: add cl, byte ptr [edi + 0xc] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121547CD: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121547CF: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121547D1: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121547F0; /* 0x121547D4: jne 0x121547f0 */
L_121547D6:
    eax = MEM32(edx + 0xC); /* 0x121547D6: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121547D9: push esi */
    RECOMP_ICALL(eax); /* 0x121547DA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121547DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121547F0; /* 0x121547DE: jne 0x121547f0 */
L_121547E0:
    eax = MEM32(esi); /* 0x121547E0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121547E2: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121547E9: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121547EB: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121547ED: push esi */
    RECOMP_ICALL(eax); /* 0x121547EE: call eax */
    RECOMP_FLAGS_IN();
L_121547F0:
    edx = MEM32(esi + 0x18); /* 0x121547F0: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(edi + 0x10)); /* 0x121547F3: mov al, byte ptr [edi + 0x10] */
    ecx = MEM32(edx); /* 0x121547F6: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121547F8: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121547FA: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121547FC: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215481B; /* 0x121547FF: jne 0x1215481b */
L_12154801:
    eax = MEM32(edx + 0xC); /* 0x12154801: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154804: push esi */
    RECOMP_ICALL(eax); /* 0x12154805: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154807: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215481B; /* 0x12154809: jne 0x1215481b */
L_1215480B:
    eax = MEM32(esi); /* 0x1215480B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215480D: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154814: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154816: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154818: push esi */
    RECOMP_ICALL(eax); /* 0x12154819: call eax */
    RECOMP_FLAGS_IN();
L_1215481B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215481B: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x1215481C: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x1215481F: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12154795; /* 0x12154822: jl 0x12154795 */
L_12154828:
    edi = POP32_VAL(esp); /* 0x12154828: pop edi */
    esi = POP32_VAL(esp); /* 0x12154829: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215482A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1215482B: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154840u);

L_12154840:
    edi = edi; /* 0x12154840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154842: push ebp */
    ebp = esp; /* 0x12154843: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12154845: push ecx */
    PUSH32(esp, esi); /* 0x12154846: push esi */
    esi = eax; /* 0x12154847: mov esi, eax */
    ecx = MEM32(esi + 0x18); /* 0x12154849: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215484C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x1215484E: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154851: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154853: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154872; /* 0x12154856: jne 0x12154872 */
L_12154858:
    eax = MEM32(ecx + 0xC); /* 0x12154858: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215485B: push esi */
    RECOMP_ICALL(eax); /* 0x1215485C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215485E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154872; /* 0x12154860: jne 0x12154872 */
L_12154862:
    eax = MEM32(esi); /* 0x12154862: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154864: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215486B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215486D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215486F: push esi */
    RECOMP_ICALL(eax); /* 0x12154870: call eax */
    RECOMP_FLAGS_IN();
L_12154872:
    ecx = MEM32(esi + 0x18); /* 0x12154872: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154875: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xDAu); /* 0x12154877: mov byte ptr [eax], 0xda */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1215487A: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1215487C: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215489B; /* 0x1215487F: jne 0x1215489b */
L_12154881:
    eax = MEM32(ecx + 0xC); /* 0x12154881: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154884: push esi */
    RECOMP_ICALL(eax); /* 0x12154885: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154887: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215489B; /* 0x12154889: jne 0x1215489b */
L_1215488B:
    eax = MEM32(esi); /* 0x1215488B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215488D: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154894: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154896: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154898: push esi */
    RECOMP_ICALL(eax); /* 0x12154899: call eax */
    RECOMP_FLAGS_IN();
L_1215489B:
    eax = MEM32(esi + 0xFC); /* 0x1215489B: mov eax, dword ptr [esi + 0xfc] */
    PUSH32(esp, ebx); /* 0x121548A1: push ebx */
    ebx = eax + eax + 0x6; /* 0x121548A2: lea ebx, [eax + eax + 6] */
    RECOMP_CALL(sub_121541D0); /* 0x121548A6: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x18); /* 0x121548AB: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0xFC)); /* 0x121548AE: mov al, byte ptr [esi + 0xfc] */
    ecx = MEM32(edx); /* 0x121548B4: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121548B6: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121548B8: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121548BA: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121548D9; /* 0x121548BD: jne 0x121548d9 */
L_121548BF:
    eax = MEM32(edx + 0xC); /* 0x121548BF: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121548C2: push esi */
    RECOMP_ICALL(eax); /* 0x121548C3: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121548C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121548D9; /* 0x121548C7: jne 0x121548d9 */
L_121548C9:
    eax = MEM32(esi); /* 0x121548C9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121548CB: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121548D2: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121548D4: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121548D6: push esi */
    RECOMP_ICALL(eax); /* 0x121548D7: call eax */
    RECOMP_FLAGS_IN();
L_121548D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121548D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xFC), ebx */ /* 0x121548DB: cmp dword ptr [esi + 0xfc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xFC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215498D; /* 0x121548E1: jle 0x1215498d */
L_121548E7:
    eax = esi + 0x100; /* 0x121548E7: lea eax, [esi + 0x100] */
    MEM32(ebp + (-0x4)) = eax; /* 0x121548ED: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x121548F0: push edi */
L_121548F1:
    edi = MEM32(eax); /* 0x121548F1: mov edi, dword ptr [eax] */
    edx = MEM32(esi + 0x18); /* 0x121548F3: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(edi)); /* 0x121548F6: mov al, byte ptr [edi] */
    ecx = MEM32(edx); /* 0x121548F8: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121548FA: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121548FC: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121548FE: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215491D; /* 0x12154901: jne 0x1215491d */
L_12154903:
    eax = MEM32(edx + 0xC); /* 0x12154903: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154906: push esi */
    RECOMP_ICALL(eax); /* 0x12154907: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154909: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215491D; /* 0x1215490B: jne 0x1215491d */
L_1215490D:
    eax = MEM32(esi); /* 0x1215490D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215490F: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154916: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154918: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215491A: push esi */
    RECOMP_ICALL(eax); /* 0x1215491B: call eax */
    RECOMP_FLAGS_IN();
L_1215491D:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x1215491D: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x14); /* 0x12154924: mov ecx, dword ptr [edi + 0x14] */
    eax = MEM32(edi + 0x18); /* 0x12154927: mov eax, dword ptr [edi + 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12154949; /* 0x1215492A: je 0x12154949 */
L_1215492C:
    /* cmp MEM32(esi + 0x144), 0 */ /* 0x1215492C: cmp dword ptr [esi + 0x144], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x144)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12154947; /* 0x12154933: jne 0x12154947 */
L_12154935:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12154935: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14C), eax */ /* 0x12154937: cmp dword ptr [esi + 0x14c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12154949; /* 0x1215493D: je 0x12154949 */
L_1215493F:
    /* cmp MEM32(esi + 0xB4), eax */ /* 0x1215493F: cmp dword ptr [esi + 0xb4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12154949; /* 0x12154945: jne 0x12154949 */
L_12154947:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12154947: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12154949:
    edx = MEM32(esi + 0x18); /* 0x12154949: mov edx, dword ptr [esi + 0x18] */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x1215494C: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x1215494C: shl cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x1215494F: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(edx); /* 0x12154951: mov eax, dword ptr [edx] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x12154953: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154955: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154957: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154976; /* 0x1215495A: jne 0x12154976 */
L_1215495C:
    eax = MEM32(edx + 0xC); /* 0x1215495C: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1215495F: push esi */
    RECOMP_ICALL(eax); /* 0x12154960: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154962: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154976; /* 0x12154964: jne 0x12154976 */
L_12154966:
    eax = MEM32(esi); /* 0x12154966: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154968: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215496F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154971: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154973: push esi */
    RECOMP_ICALL(eax); /* 0x12154974: call eax */
    RECOMP_FLAGS_IN();
L_12154976:
    eax = MEM32(ebp + (-0x4)); /* 0x12154976: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12154979: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1215497A: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215497D: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, MEM32(esi + 0xFC) */ /* 0x12154980: cmp ebx, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121548F1; /* 0x12154986: jl 0x121548f1 */
L_1215498C:
    edi = POP32_VAL(esp); /* 0x1215498C: pop edi */
L_1215498D:
    edx = MEM32(esi + 0x18); /* 0x1215498D: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0x144)); /* 0x12154990: mov al, byte ptr [esi + 0x144] */
    ecx = MEM32(edx); /* 0x12154996: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154998: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1215499A: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x1215499C: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x1215499F: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121549BC; /* 0x121549A0: jne 0x121549bc */
L_121549A2:
    eax = MEM32(edx + 0xC); /* 0x121549A2: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121549A5: push esi */
    RECOMP_ICALL(eax); /* 0x121549A6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121549A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121549BC; /* 0x121549AA: jne 0x121549bc */
L_121549AC:
    eax = MEM32(esi); /* 0x121549AC: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121549AE: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121549B5: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121549B7: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121549B9: push esi */
    RECOMP_ICALL(eax); /* 0x121549BA: call eax */
    RECOMP_FLAGS_IN();
L_121549BC:
    edx = MEM32(esi + 0x18); /* 0x121549BC: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0x148)); /* 0x121549BF: mov al, byte ptr [esi + 0x148] */
    ecx = MEM32(edx); /* 0x121549C5: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121549C7: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x121549C9: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x121549CB: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121549EA; /* 0x121549CE: jne 0x121549ea */
L_121549D0:
    eax = MEM32(edx + 0xC); /* 0x121549D0: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x121549D3: push esi */
    RECOMP_ICALL(eax); /* 0x121549D4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121549D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121549EA; /* 0x121549D8: jne 0x121549ea */
L_121549DA:
    eax = MEM32(esi); /* 0x121549DA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121549DC: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121549E3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121549E5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121549E7: push esi */
    RECOMP_ICALL(eax); /* 0x121549E8: call eax */
    RECOMP_FLAGS_IN();
L_121549EA:
    SET_LO8(ecx, MEM8(esi + 0x14C)); /* 0x121549EA: mov cl, byte ptr [esi + 0x14c] */
    edx = MEM32(esi + 0x18); /* 0x121549F0: mov edx, dword ptr [esi + 0x18] */
    eax = MEM32(edx); /* 0x121549F3: mov eax, dword ptr [edx] */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x121549F5: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x121549F5: shl cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x150)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi + 0x150)); /* 0x121549F8: add cl, byte ptr [esi + 0x150] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121549FE: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154A00: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154A02: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154A21; /* 0x12154A05: jne 0x12154a21 */
L_12154A07:
    eax = MEM32(edx + 0xC); /* 0x12154A07: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154A0A: push esi */
    RECOMP_ICALL(eax); /* 0x12154A0B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154A0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154A21; /* 0x12154A0F: jne 0x12154a21 */
L_12154A11:
    eax = MEM32(esi); /* 0x12154A11: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154A13: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154A1A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154A1C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154A1E: push esi */
    RECOMP_ICALL(eax); /* 0x12154A1F: call eax */
    RECOMP_FLAGS_IN();
L_12154A21:
    esi = POP32_VAL(esp); /* 0x12154A21: pop esi */
    esp = ebp; /* 0x12154A22: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12154A24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12154A25: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154A30u);

L_12154A30:
    edi = edi; /* 0x12154A30: mov edi, edi */
    PUSH32(esp, esi); /* 0x12154A32: push esi */
    esi = eax; /* 0x12154A33: mov esi, eax */
    ecx = MEM32(esi + 0x18); /* 0x12154A35: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154A38: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x12154A3A: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154A3D: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154A3F: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154A5E; /* 0x12154A42: jne 0x12154a5e */
L_12154A44:
    eax = MEM32(ecx + 0xC); /* 0x12154A44: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154A47: push esi */
    RECOMP_ICALL(eax); /* 0x12154A48: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154A4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154A5E; /* 0x12154A4C: jne 0x12154a5e */
L_12154A4E:
    eax = MEM32(esi); /* 0x12154A4E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154A50: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154A57: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154A59: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154A5B: push esi */
    RECOMP_ICALL(eax); /* 0x12154A5C: call eax */
    RECOMP_FLAGS_IN();
L_12154A5E:
    ecx = MEM32(esi + 0x18); /* 0x12154A5E: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154A61: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xE0u); /* 0x12154A63: mov byte ptr [eax], 0xe0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154A66: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154A68: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154A87; /* 0x12154A6B: jne 0x12154a87 */
L_12154A6D:
    eax = MEM32(ecx + 0xC); /* 0x12154A6D: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154A70: push esi */
    RECOMP_ICALL(eax); /* 0x12154A71: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154A73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154A87; /* 0x12154A75: jne 0x12154a87 */
L_12154A77:
    eax = MEM32(esi); /* 0x12154A77: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154A79: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154A80: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154A82: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154A84: push esi */
    RECOMP_ICALL(eax); /* 0x12154A85: call eax */
    RECOMP_FLAGS_IN();
L_12154A87:
    ecx = MEM32(esi + 0x18); /* 0x12154A87: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154A8A: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154A8C: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154A8F: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154A91: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154AB0; /* 0x12154A94: jne 0x12154ab0 */
L_12154A96:
    eax = MEM32(ecx + 0xC); /* 0x12154A96: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154A99: push esi */
    RECOMP_ICALL(eax); /* 0x12154A9A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154A9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154AB0; /* 0x12154A9E: jne 0x12154ab0 */
L_12154AA0:
    eax = MEM32(esi); /* 0x12154AA0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154AA2: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154AA9: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154AAB: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154AAD: push esi */
    RECOMP_ICALL(eax); /* 0x12154AAE: call eax */
    RECOMP_FLAGS_IN();
L_12154AB0:
    ecx = MEM32(esi + 0x18); /* 0x12154AB0: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154AB3: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x10u); /* 0x12154AB5: mov byte ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154AB8: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154ABA: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154AD9; /* 0x12154ABD: jne 0x12154ad9 */
L_12154ABF:
    eax = MEM32(ecx + 0xC); /* 0x12154ABF: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154AC2: push esi */
    RECOMP_ICALL(eax); /* 0x12154AC3: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154AC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154AD9; /* 0x12154AC7: jne 0x12154ad9 */
L_12154AC9:
    eax = MEM32(esi); /* 0x12154AC9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154ACB: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154AD2: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154AD4: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154AD6: push esi */
    RECOMP_ICALL(eax); /* 0x12154AD7: call eax */
    RECOMP_FLAGS_IN();
L_12154AD9:
    ecx = MEM32(esi + 0x18); /* 0x12154AD9: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154ADC: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x4Au); /* 0x12154ADE: mov byte ptr [eax], 0x4a */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154AE1: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154AE3: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154B02; /* 0x12154AE6: jne 0x12154b02 */
L_12154AE8:
    eax = MEM32(ecx + 0xC); /* 0x12154AE8: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154AEB: push esi */
    RECOMP_ICALL(eax); /* 0x12154AEC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154AEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154B02; /* 0x12154AF0: jne 0x12154b02 */
L_12154AF2:
    eax = MEM32(esi); /* 0x12154AF2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154AF4: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154AFB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154AFD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154AFF: push esi */
    RECOMP_ICALL(eax); /* 0x12154B00: call eax */
    RECOMP_FLAGS_IN();
L_12154B02:
    ecx = MEM32(esi + 0x18); /* 0x12154B02: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154B05: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x46u); /* 0x12154B07: mov byte ptr [eax], 0x46 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154B0A: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154B0C: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154B2B; /* 0x12154B0F: jne 0x12154b2b */
L_12154B11:
    eax = MEM32(ecx + 0xC); /* 0x12154B11: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154B14: push esi */
    RECOMP_ICALL(eax); /* 0x12154B15: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154B17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154B2B; /* 0x12154B19: jne 0x12154b2b */
L_12154B1B:
    eax = MEM32(esi); /* 0x12154B1B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154B1D: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154B24: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154B26: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154B28: push esi */
    RECOMP_ICALL(eax); /* 0x12154B29: call eax */
    RECOMP_FLAGS_IN();
L_12154B2B:
    ecx = MEM32(esi + 0x18); /* 0x12154B2B: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154B2E: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x49u); /* 0x12154B30: mov byte ptr [eax], 0x49 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154B33: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154B35: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154B54; /* 0x12154B38: jne 0x12154b54 */
L_12154B3A:
    eax = MEM32(ecx + 0xC); /* 0x12154B3A: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154B3D: push esi */
    RECOMP_ICALL(eax); /* 0x12154B3E: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154B40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154B54; /* 0x12154B42: jne 0x12154b54 */
L_12154B44:
    eax = MEM32(esi); /* 0x12154B44: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154B46: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154B4D: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154B4F: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154B51: push esi */
    RECOMP_ICALL(eax); /* 0x12154B52: call eax */
    RECOMP_FLAGS_IN();
L_12154B54:
    ecx = MEM32(esi + 0x18); /* 0x12154B54: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154B57: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x46u); /* 0x12154B59: mov byte ptr [eax], 0x46 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154B5C: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154B5E: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154B7D; /* 0x12154B61: jne 0x12154b7d */
L_12154B63:
    eax = MEM32(ecx + 0xC); /* 0x12154B63: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154B66: push esi */
    RECOMP_ICALL(eax); /* 0x12154B67: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154B69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154B7D; /* 0x12154B6B: jne 0x12154b7d */
L_12154B6D:
    eax = MEM32(esi); /* 0x12154B6D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154B6F: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154B76: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154B78: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154B7A: push esi */
    RECOMP_ICALL(eax); /* 0x12154B7B: call eax */
    RECOMP_FLAGS_IN();
L_12154B7D:
    ecx = MEM32(esi + 0x18); /* 0x12154B7D: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154B80: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154B82: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154B85: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154B87: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154BA6; /* 0x12154B8A: jne 0x12154ba6 */
L_12154B8C:
    eax = MEM32(ecx + 0xC); /* 0x12154B8C: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154B8F: push esi */
    RECOMP_ICALL(eax); /* 0x12154B90: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154B92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154BA6; /* 0x12154B94: jne 0x12154ba6 */
L_12154B96:
    eax = MEM32(esi); /* 0x12154B96: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154B98: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154B9F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154BA1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154BA3: push esi */
    RECOMP_ICALL(eax); /* 0x12154BA4: call eax */
    RECOMP_FLAGS_IN();
L_12154BA6:
    edx = MEM32(esi + 0x18); /* 0x12154BA6: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0xD4)); /* 0x12154BA9: mov al, byte ptr [esi + 0xd4] */
    ecx = MEM32(edx); /* 0x12154BAF: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154BB1: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154BB3: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154BB5: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154BD4; /* 0x12154BB8: jne 0x12154bd4 */
L_12154BBA:
    eax = MEM32(edx + 0xC); /* 0x12154BBA: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154BBD: push esi */
    RECOMP_ICALL(eax); /* 0x12154BBE: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154BD4; /* 0x12154BC2: jne 0x12154bd4 */
L_12154BC4:
    eax = MEM32(esi); /* 0x12154BC4: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154BC6: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154BCD: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154BCF: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154BD1: push esi */
    RECOMP_ICALL(eax); /* 0x12154BD2: call eax */
    RECOMP_FLAGS_IN();
L_12154BD4:
    edx = MEM32(esi + 0x18); /* 0x12154BD4: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0xD5)); /* 0x12154BD7: mov al, byte ptr [esi + 0xd5] */
    ecx = MEM32(edx); /* 0x12154BDD: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154BDF: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154BE1: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154BE3: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154C02; /* 0x12154BE6: jne 0x12154c02 */
L_12154BE8:
    eax = MEM32(edx + 0xC); /* 0x12154BE8: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154BEB: push esi */
    RECOMP_ICALL(eax); /* 0x12154BEC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154BEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154C02; /* 0x12154BF0: jne 0x12154c02 */
L_12154BF2:
    eax = MEM32(esi); /* 0x12154BF2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154BF4: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154BFB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154BFD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154BFF: push esi */
    RECOMP_ICALL(eax); /* 0x12154C00: call eax */
    RECOMP_FLAGS_IN();
L_12154C02:
    edx = MEM32(esi + 0x18); /* 0x12154C02: mov edx, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(esi + 0xD6)); /* 0x12154C05: mov al, byte ptr [esi + 0xd6] */
    ecx = MEM32(edx); /* 0x12154C0B: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154C0D: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154C0F: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154C11: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154C30; /* 0x12154C14: jne 0x12154c30 */
L_12154C16:
    eax = MEM32(edx + 0xC); /* 0x12154C16: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154C19: push esi */
    RECOMP_ICALL(eax); /* 0x12154C1A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154C1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154C30; /* 0x12154C1E: jne 0x12154c30 */
L_12154C20:
    eax = MEM32(esi); /* 0x12154C20: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154C22: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154C29: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154C2B: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154C2D: push esi */
    RECOMP_ICALL(eax); /* 0x12154C2E: call eax */
    RECOMP_FLAGS_IN();
L_12154C30:
    PUSH32(esp, ebx); /* 0x12154C30: push ebx */
    ebx = (uint32_t)MEM16(esi + 0xD8); /* 0x12154C31: movzx ebx, word ptr [esi + 0xd8] */
    RECOMP_CALL(sub_121541D0); /* 0x12154C38: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)MEM16(esi + 0xDA); /* 0x12154C3D: movzx ebx, word ptr [esi + 0xda] */
    RECOMP_CALL(sub_121541D0); /* 0x12154C44: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x12154C49: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154C4C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154C4E: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154C51: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154C53: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x12154C56: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154C73; /* 0x12154C57: jne 0x12154c73 */
L_12154C59:
    eax = MEM32(ecx + 0xC); /* 0x12154C59: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154C5C: push esi */
    RECOMP_ICALL(eax); /* 0x12154C5D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154C5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154C73; /* 0x12154C61: jne 0x12154c73 */
L_12154C63:
    eax = MEM32(esi); /* 0x12154C63: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154C65: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154C6C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154C6E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154C70: push esi */
    RECOMP_ICALL(eax); /* 0x12154C71: call eax */
    RECOMP_FLAGS_IN();
L_12154C73:
    ecx = MEM32(esi + 0x18); /* 0x12154C73: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154C76: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154C78: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154C7B: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154C7D: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154C9C; /* 0x12154C80: jne 0x12154c9c */
L_12154C82:
    eax = MEM32(ecx + 0xC); /* 0x12154C82: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154C85: push esi */
    RECOMP_ICALL(eax); /* 0x12154C86: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154C88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154C9C; /* 0x12154C8A: jne 0x12154c9c */
L_12154C8C:
    eax = MEM32(esi); /* 0x12154C8C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154C8E: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154C95: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154C97: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154C99: push esi */
    RECOMP_ICALL(eax); /* 0x12154C9A: call eax */
    RECOMP_FLAGS_IN();
L_12154C9C:
    esi = POP32_VAL(esp); /* 0x12154C9C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12154C9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154CB0u);

L_12154CB0:
    ecx = MEM32(esi + 0x18); /* 0x12154CB0: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154CB3: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x12154CB5: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154CB8: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154CBA: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154CD9; /* 0x12154CBD: jne 0x12154cd9 */
L_12154CBF:
    eax = MEM32(ecx + 0xC); /* 0x12154CBF: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154CC2: push esi */
    RECOMP_ICALL(eax); /* 0x12154CC3: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154CC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154CD9; /* 0x12154CC7: jne 0x12154cd9 */
L_12154CC9:
    eax = MEM32(esi); /* 0x12154CC9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154CCB: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154CD2: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154CD4: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154CD6: push esi */
    RECOMP_ICALL(eax); /* 0x12154CD7: call eax */
    RECOMP_FLAGS_IN();
L_12154CD9:
    ecx = MEM32(esi + 0x18); /* 0x12154CD9: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154CDC: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xEEu); /* 0x12154CDE: mov byte ptr [eax], 0xee */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154CE1: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154CE3: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154D02; /* 0x12154CE6: jne 0x12154d02 */
L_12154CE8:
    eax = MEM32(ecx + 0xC); /* 0x12154CE8: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154CEB: push esi */
    RECOMP_ICALL(eax); /* 0x12154CEC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154CEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154D02; /* 0x12154CF0: jne 0x12154d02 */
L_12154CF2:
    eax = MEM32(esi); /* 0x12154CF2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154CF4: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154CFB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154CFD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154CFF: push esi */
    RECOMP_ICALL(eax); /* 0x12154D00: call eax */
    RECOMP_FLAGS_IN();
L_12154D02:
    ecx = MEM32(esi + 0x18); /* 0x12154D02: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154D05: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154D07: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154D0A: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154D0C: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154D2B; /* 0x12154D0F: jne 0x12154d2b */
L_12154D11:
    eax = MEM32(ecx + 0xC); /* 0x12154D11: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154D14: push esi */
    RECOMP_ICALL(eax); /* 0x12154D15: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154D17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154D2B; /* 0x12154D19: jne 0x12154d2b */
L_12154D1B:
    eax = MEM32(esi); /* 0x12154D1B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154D1D: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154D24: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154D26: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154D28: push esi */
    RECOMP_ICALL(eax); /* 0x12154D29: call eax */
    RECOMP_FLAGS_IN();
L_12154D2B:
    ecx = MEM32(esi + 0x18); /* 0x12154D2B: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154D2E: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xEu); /* 0x12154D30: mov byte ptr [eax], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154D33: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154D35: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154D54; /* 0x12154D38: jne 0x12154d54 */
L_12154D3A:
    eax = MEM32(ecx + 0xC); /* 0x12154D3A: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154D3D: push esi */
    RECOMP_ICALL(eax); /* 0x12154D3E: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154D40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154D54; /* 0x12154D42: jne 0x12154d54 */
L_12154D44:
    eax = MEM32(esi); /* 0x12154D44: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154D46: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154D4D: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154D4F: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154D51: push esi */
    RECOMP_ICALL(eax); /* 0x12154D52: call eax */
    RECOMP_FLAGS_IN();
L_12154D54:
    ecx = MEM32(esi + 0x18); /* 0x12154D54: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154D57: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x41u); /* 0x12154D59: mov byte ptr [eax], 0x41 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154D5C: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154D5E: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154D7D; /* 0x12154D61: jne 0x12154d7d */
L_12154D63:
    eax = MEM32(ecx + 0xC); /* 0x12154D63: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154D66: push esi */
    RECOMP_ICALL(eax); /* 0x12154D67: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154D69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154D7D; /* 0x12154D6B: jne 0x12154d7d */
L_12154D6D:
    eax = MEM32(esi); /* 0x12154D6D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154D6F: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154D76: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154D78: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154D7A: push esi */
    RECOMP_ICALL(eax); /* 0x12154D7B: call eax */
    RECOMP_FLAGS_IN();
L_12154D7D:
    ecx = MEM32(esi + 0x18); /* 0x12154D7D: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154D80: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x64u); /* 0x12154D82: mov byte ptr [eax], 0x64 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154D85: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154D87: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154DA6; /* 0x12154D8A: jne 0x12154da6 */
L_12154D8C:
    eax = MEM32(ecx + 0xC); /* 0x12154D8C: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154D8F: push esi */
    RECOMP_ICALL(eax); /* 0x12154D90: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154D92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154DA6; /* 0x12154D94: jne 0x12154da6 */
L_12154D96:
    eax = MEM32(esi); /* 0x12154D96: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154D98: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154D9F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154DA1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154DA3: push esi */
    RECOMP_ICALL(eax); /* 0x12154DA4: call eax */
    RECOMP_FLAGS_IN();
L_12154DA6:
    ecx = MEM32(esi + 0x18); /* 0x12154DA6: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154DA9: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x6Fu); /* 0x12154DAB: mov byte ptr [eax], 0x6f */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154DAE: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154DB0: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154DCF; /* 0x12154DB3: jne 0x12154dcf */
L_12154DB5:
    eax = MEM32(ecx + 0xC); /* 0x12154DB5: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154DB8: push esi */
    RECOMP_ICALL(eax); /* 0x12154DB9: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154DBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154DCF; /* 0x12154DBD: jne 0x12154dcf */
L_12154DBF:
    eax = MEM32(esi); /* 0x12154DBF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154DC1: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154DC8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154DCA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154DCC: push esi */
    RECOMP_ICALL(eax); /* 0x12154DCD: call eax */
    RECOMP_FLAGS_IN();
L_12154DCF:
    ecx = MEM32(esi + 0x18); /* 0x12154DCF: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154DD2: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x62u); /* 0x12154DD4: mov byte ptr [eax], 0x62 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154DD7: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154DD9: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154DF8; /* 0x12154DDC: jne 0x12154df8 */
L_12154DDE:
    eax = MEM32(ecx + 0xC); /* 0x12154DDE: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154DE1: push esi */
    RECOMP_ICALL(eax); /* 0x12154DE2: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154DE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154DF8; /* 0x12154DE6: jne 0x12154df8 */
L_12154DE8:
    eax = MEM32(esi); /* 0x12154DE8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154DEA: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154DF1: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154DF3: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154DF5: push esi */
    RECOMP_ICALL(eax); /* 0x12154DF6: call eax */
    RECOMP_FLAGS_IN();
L_12154DF8:
    ecx = MEM32(esi + 0x18); /* 0x12154DF8: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154DFB: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x65u); /* 0x12154DFD: mov byte ptr [eax], 0x65 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154E00: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154E02: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154E21; /* 0x12154E05: jne 0x12154e21 */
L_12154E07:
    eax = MEM32(ecx + 0xC); /* 0x12154E07: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154E0A: push esi */
    RECOMP_ICALL(eax); /* 0x12154E0B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154E0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154E21; /* 0x12154E0F: jne 0x12154e21 */
L_12154E11:
    eax = MEM32(esi); /* 0x12154E11: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154E13: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154E1A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154E1C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154E1E: push esi */
    RECOMP_ICALL(eax); /* 0x12154E1F: call eax */
    RECOMP_FLAGS_IN();
L_12154E21:
    ecx = MEM32(esi + 0x18); /* 0x12154E21: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154E24: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154E26: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154E29: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154E2B: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154E4A; /* 0x12154E2E: jne 0x12154e4a */
L_12154E30:
    eax = MEM32(ecx + 0xC); /* 0x12154E30: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154E33: push esi */
    RECOMP_ICALL(eax); /* 0x12154E34: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154E36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154E4A; /* 0x12154E38: jne 0x12154e4a */
L_12154E3A:
    eax = MEM32(esi); /* 0x12154E3A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154E3C: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154E43: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154E45: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154E47: push esi */
    RECOMP_ICALL(eax); /* 0x12154E48: call eax */
    RECOMP_FLAGS_IN();
L_12154E4A:
    ecx = MEM32(esi + 0x18); /* 0x12154E4A: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154E4D: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x64u); /* 0x12154E4F: mov byte ptr [eax], 0x64 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154E52: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154E54: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154E73; /* 0x12154E57: jne 0x12154e73 */
L_12154E59:
    eax = MEM32(ecx + 0xC); /* 0x12154E59: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154E5C: push esi */
    RECOMP_ICALL(eax); /* 0x12154E5D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154E5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154E73; /* 0x12154E61: jne 0x12154e73 */
L_12154E63:
    eax = MEM32(esi); /* 0x12154E63: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154E65: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154E6C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154E6E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154E70: push esi */
    RECOMP_ICALL(eax); /* 0x12154E71: call eax */
    RECOMP_FLAGS_IN();
L_12154E73:
    ecx = MEM32(esi + 0x18); /* 0x12154E73: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154E76: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154E78: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154E7B: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154E7D: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154E9C; /* 0x12154E80: jne 0x12154e9c */
L_12154E82:
    eax = MEM32(ecx + 0xC); /* 0x12154E82: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154E85: push esi */
    RECOMP_ICALL(eax); /* 0x12154E86: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154E88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154E9C; /* 0x12154E8A: jne 0x12154e9c */
L_12154E8C:
    eax = MEM32(esi); /* 0x12154E8C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154E8E: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154E95: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154E97: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154E99: push esi */
    RECOMP_ICALL(eax); /* 0x12154E9A: call eax */
    RECOMP_FLAGS_IN();
L_12154E9C:
    ecx = MEM32(esi + 0x18); /* 0x12154E9C: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154E9F: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154EA1: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154EA4: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154EA6: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154EC5; /* 0x12154EA9: jne 0x12154ec5 */
L_12154EAB:
    eax = MEM32(ecx + 0xC); /* 0x12154EAB: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154EAE: push esi */
    RECOMP_ICALL(eax); /* 0x12154EAF: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154EB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154EC5; /* 0x12154EB3: jne 0x12154ec5 */
L_12154EB5:
    eax = MEM32(esi); /* 0x12154EB5: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154EB7: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154EBE: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154EC0: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154EC2: push esi */
    RECOMP_ICALL(eax); /* 0x12154EC3: call eax */
    RECOMP_FLAGS_IN();
L_12154EC5:
    ecx = MEM32(esi + 0x18); /* 0x12154EC5: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154EC8: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154ECA: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154ECD: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154ECF: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154EEE; /* 0x12154ED2: jne 0x12154eee */
L_12154ED4:
    eax = MEM32(ecx + 0xC); /* 0x12154ED4: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154ED7: push esi */
    RECOMP_ICALL(eax); /* 0x12154ED8: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154EDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154EEE; /* 0x12154EDC: jne 0x12154eee */
L_12154EDE:
    eax = MEM32(esi); /* 0x12154EDE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154EE0: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154EE7: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154EE9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154EEB: push esi */
    RECOMP_ICALL(eax); /* 0x12154EEC: call eax */
    RECOMP_FLAGS_IN();
L_12154EEE:
    ecx = MEM32(esi + 0x18); /* 0x12154EEE: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154EF1: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0); /* 0x12154EF3: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154EF6: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154EF8: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154F17; /* 0x12154EFB: jne 0x12154f17 */
L_12154EFD:
    eax = MEM32(ecx + 0xC); /* 0x12154EFD: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154F00: push esi */
    RECOMP_ICALL(eax); /* 0x12154F01: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154F03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154F17; /* 0x12154F05: jne 0x12154f17 */
L_12154F07:
    eax = MEM32(esi); /* 0x12154F07: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154F09: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154F10: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154F12: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154F14: push esi */
    RECOMP_ICALL(eax); /* 0x12154F15: call eax */
    RECOMP_FLAGS_IN();
L_12154F17:
    eax = MEM32(esi + 0x40); /* 0x12154F17: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x12154F1A: sub eax, 3 */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x18); /* 0x12154F1D: mov ecx, dword ptr [esi + 0x18] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12154F33; /* 0x12154F20: je 0x12154f33 */
L_12154F22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x12154F22: sub eax, 2 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x12154F25: mov eax, dword ptr [ecx] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12154F2E; /* 0x12154F27: je 0x12154f2e */
L_12154F29:
    MEM8(eax) = (uint8_t)(0); /* 0x12154F29: mov byte ptr [eax], 0 */
    goto L_12154F38; /* 0x12154F2C: jmp 0x12154f38 */
L_12154F2E:
    MEM8(eax) = (uint8_t)(2); /* 0x12154F2E: mov byte ptr [eax], 2 */
    goto L_12154F38; /* 0x12154F31: jmp 0x12154f38 */
L_12154F33:
    eax = MEM32(ecx); /* 0x12154F33: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(1); /* 0x12154F35: mov byte ptr [eax], 1 */
L_12154F38:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154F38: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154F3A: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154F59; /* 0x12154F3D: jne 0x12154f59 */
L_12154F3F:
    eax = MEM32(ecx + 0xC); /* 0x12154F3F: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154F42: push esi */
    RECOMP_ICALL(eax); /* 0x12154F43: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154F45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154F59; /* 0x12154F47: jne 0x12154f59 */
L_12154F49:
    eax = MEM32(esi); /* 0x12154F49: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154F4B: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154F52: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154F54: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154F56: push esi */
    RECOMP_ICALL(eax); /* 0x12154F57: call eax */
    RECOMP_FLAGS_IN();
L_12154F59:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12154F59: ret  */
    RECOMP_REGS_OUT();
}

void sub_12154F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154F60u);

L_12154F60:
    edi = edi; /* 0x12154F60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154F62: push ebp */
    ebp = esp; /* 0x12154F63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12154F65: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x12154F66: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12154F69: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12154F6A: mov esi, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFFDu */ /* 0x12154F6D: cmp ebx, 0xfffd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12154F85; /* 0x12154F73: jbe 0x12154f85 */
L_12154F75:
    eax = MEM32(esi); /* 0x12154F75: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xBu; /* 0x12154F77: mov dword ptr [eax + 0x14], 0xb */
    eax = MEM32(esi); /* 0x12154F7E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154F80: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154F82: push esi */
    RECOMP_ICALL(eax); /* 0x12154F83: call eax */
    RECOMP_FLAGS_IN();
L_12154F85:
    ecx = MEM32(esi + 0x18); /* 0x12154F85: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12154F88: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x12154F8A: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12154F8D: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12154F8F: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154FAE; /* 0x12154F92: jne 0x12154fae */
L_12154F94:
    eax = MEM32(ecx + 0xC); /* 0x12154F94: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12154F97: push esi */
    RECOMP_ICALL(eax); /* 0x12154F98: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154F9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154FAE; /* 0x12154F9C: jne 0x12154fae */
L_12154F9E:
    eax = MEM32(esi); /* 0x12154F9E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154FA0: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154FA7: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154FA9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154FAB: push esi */
    RECOMP_ICALL(eax); /* 0x12154FAC: call eax */
    RECOMP_FLAGS_IN();
L_12154FAE:
    edx = MEM32(esi + 0x18); /* 0x12154FAE: mov edx, dword ptr [esi + 0x18] */
    ecx = MEM32(edx); /* 0x12154FB1: mov ecx, dword ptr [edx] */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x12154FB3: mov al, byte ptr [ebp + 0xc] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12154FB6: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12154FB8: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12154FBA: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12154FD9; /* 0x12154FBD: jne 0x12154fd9 */
L_12154FBF:
    eax = MEM32(edx + 0xC); /* 0x12154FBF: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x12154FC2: push esi */
    RECOMP_ICALL(eax); /* 0x12154FC3: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12154FC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12154FD9; /* 0x12154FC7: jne 0x12154fd9 */
L_12154FC9:
    eax = MEM32(esi); /* 0x12154FC9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12154FCB: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12154FD2: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12154FD4: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12154FD6: push esi */
    RECOMP_ICALL(eax); /* 0x12154FD7: call eax */
    RECOMP_FLAGS_IN();
L_12154FD9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x12154FD9: add ebx, 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_121541D0); /* 0x12154FDC: call 0x121541d0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12154FE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x12154FE2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12154FE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12154FE4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12154FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12154FF0u);

L_12154FF0:
    edi = edi; /* 0x12154FF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12154FF2: push ebp */
    ebp = esp; /* 0x12154FF3: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x12154FF5: mov al, byte ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12154FF8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12154FF9: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x18); /* 0x12154FFC: mov edx, dword ptr [esi + 0x18] */
    ecx = MEM32(edx); /* 0x12154FFF: mov ecx, dword ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12155001: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12155003: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x12155005: dec dword ptr [edx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155024; /* 0x12155008: jne 0x12155024 */
L_1215500A:
    eax = MEM32(edx + 0xC); /* 0x1215500A: mov eax, dword ptr [edx + 0xc] */
    PUSH32(esp, esi); /* 0x1215500D: push esi */
    RECOMP_ICALL(eax); /* 0x1215500E: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12155010: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12155024; /* 0x12155012: jne 0x12155024 */
L_12155014:
    eax = MEM32(esi); /* 0x12155014: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12155016: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215501D: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215501F: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155021: push esi */
    RECOMP_ICALL(eax); /* 0x12155022: call eax */
    RECOMP_FLAGS_IN();
L_12155024:
    esi = POP32_VAL(esp); /* 0x12155024: pop esi */
    ebp = POP32_VAL(esp); /* 0x12155025: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12155026: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12155030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155030u);

L_12155030:
    edi = edi; /* 0x12155030: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155032: push ebp */
    ebp = esp; /* 0x12155033: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12155035: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12155036: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x18); /* 0x12155039: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215503C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1215503E: push edi */
    edi = MEM32(esi + 0x164); /* 0x1215503F: mov edi, dword ptr [esi + 0x164] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x12155045: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12155048: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1215504A: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155069; /* 0x1215504D: jne 0x12155069 */
L_1215504F:
    eax = MEM32(ecx + 0xC); /* 0x1215504F: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12155052: push esi */
    RECOMP_ICALL(eax); /* 0x12155053: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12155055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12155069; /* 0x12155057: jne 0x12155069 */
L_12155059:
    eax = MEM32(esi); /* 0x12155059: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215505B: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12155062: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12155064: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155066: push esi */
    RECOMP_ICALL(eax); /* 0x12155067: call eax */
    RECOMP_FLAGS_IN();
L_12155069:
    ecx = MEM32(esi + 0x18); /* 0x12155069: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215506C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xD8u); /* 0x1215506E: mov byte ptr [eax], 0xd8 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12155071: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12155073: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155092; /* 0x12155076: jne 0x12155092 */
L_12155078:
    eax = MEM32(ecx + 0xC); /* 0x12155078: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215507B: push esi */
    RECOMP_ICALL(eax); /* 0x1215507C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215507E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12155092; /* 0x12155080: jne 0x12155092 */
L_12155082:
    eax = MEM32(esi); /* 0x12155082: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12155084: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215508B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215508D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215508F: push esi */
    RECOMP_ICALL(eax); /* 0x12155090: call eax */
    RECOMP_FLAGS_IN();
L_12155092:
    MEM32(edi + 0x1C) = 0; /* 0x12155092: mov dword ptr [edi + 0x1c], 0 */
    /* cmp MEM32(esi + 0xD0), 0 */ /* 0x12155099: cmp dword ptr [esi + 0xd0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121550A9; /* 0x121550A0: je 0x121550a9 */
L_121550A2:
    eax = esi; /* 0x121550A2: mov eax, esi */
    RECOMP_CALL(sub_12154A30); /* 0x121550A4: call 0x12154a30 */
    RECOMP_FLAGS_IN();
L_121550A9:
    /* cmp MEM32(esi + 0xDC), 0 */ /* 0x121550A9: cmp dword ptr [esi + 0xdc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121550B7; /* 0x121550B0: je 0x121550b7 */
L_121550B2:
    RECOMP_CALL(sub_12154CB0); /* 0x121550B2: call 0x12154cb0 */
    RECOMP_FLAGS_IN();
L_121550B7:
    edi = POP32_VAL(esp); /* 0x121550B7: pop edi */
    esi = POP32_VAL(esp); /* 0x121550B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x121550B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121550BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121550D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121550D0u);

L_121550D0:
    edi = edi; /* 0x121550D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121550D2: push ebp */
    ebp = esp; /* 0x121550D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121550D5: push ecx */
    PUSH32(esp, ebx); /* 0x121550D6: push ebx */
    PUSH32(esp, esi); /* 0x121550D7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121550D8: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0x44); /* 0x121550DB: mov ebx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121550DE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121550E0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121550E1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x121550E3: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(esi + 0x3C), edx */ /* 0x121550E6: cmp dword ptr [esi + 0x3c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12155108; /* 0x121550E9: jle 0x12155108 */
L_121550EB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x121550EB: add ebx, 0x10 */
    _flag_k = FK_ADD;
    edi = edi; /* 0x121550EE: mov edi, edi */
L_121550F0:
    PUSH32(esp, MEM32(ebx)); /* 0x121550F0: push dword ptr [ebx] */
    RECOMP_CALL(sub_12154230); /* 0x121550F2: call 0x12154230 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x121550F7: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x121550FA: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121550FC: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x121550FD: add ebx, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x12155100: mov dword ptr [ebp - 4], edx */
    /* cmp edi, MEM32(esi + 0x3C) */ /* 0x12155103: cmp edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121550F0; /* 0x12155106: jl 0x121550f0 */
L_12155108:
    /* cmp MEM32(esi + 0xB4), 0 */ /* 0x12155108: cmp dword ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155163; /* 0x1215510F: jne 0x12155163 */
L_12155111:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12155111: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155163; /* 0x12155118: jne 0x12155163 */
L_1215511A:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x1215511A: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155163; /* 0x1215511E: jne 0x12155163 */
L_12155120:
    ecx = MEM32(esi + 0x3C); /* 0x12155120: mov ecx, dword ptr [esi + 0x3c] */
    eax = MEM32(esi + 0x44); /* 0x12155123: mov eax, dword ptr [esi + 0x44] */
    edi = 1; /* 0x12155126: mov edi, 1 */
    /* test ecx, ecx */ /* 0x1215512B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12155145; /* 0x1215512D: jle 0x12155145 */
L_1215512F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1215512F: add eax, 0x18 */
    _flag_k = FK_ADD;
L_12155132:
    /* cmp MEM32(eax + (-0x4)), 1 */ /* 0x12155132: cmp dword ptr [eax - 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1215513D; /* 0x12155136: jg 0x1215513d */
L_12155138:
    /* cmp MEM32(eax), 1 */ /* 0x12155138: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215513F; /* 0x1215513B: jle 0x1215513f */
L_1215513D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215513D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1215513F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x54u; /* 0x1215513F: add eax, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12155142: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155132; /* 0x12155143: jne 0x12155132 */
L_12155145:
    /* test edx, edx */ /* 0x12155145: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12155165; /* 0x12155147: je 0x12155165 */
L_12155149:
    /* test edi, edi */ /* 0x12155149: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12155165; /* 0x1215514B: je 0x12155165 */
L_1215514D:
    eax = MEM32(esi); /* 0x1215514D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215514F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x14) = 0x4Bu; /* 0x12155151: mov dword ptr [eax + 0x14], 0x4b */
    eax = MEM32(esi); /* 0x12155158: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215515A: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x1215515D: push edi */
    PUSH32(esp, esi); /* 0x1215515E: push esi */
    RECOMP_ICALL(eax); /* 0x1215515F: call eax */
    RECOMP_FLAGS_IN();
    goto L_12155165; /* 0x12155161: jmp 0x12155165 */
L_12155163:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12155163: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12155165:
    /* cmp MEM32(esi + 0xB4), 0 */ /* 0x12155165: cmp dword ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12155183; /* 0x1215516C: je 0x12155183 */
L_1215516E:
    eax = 0xC9u; /* 0x1215516E: mov eax, 0xc9 */
    ecx = esi; /* 0x12155173: mov ecx, esi */
    RECOMP_CALL(sub_12154690); /* 0x12155175: call 0x12154690 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215517A: pop edi */
    esi = POP32_VAL(esp); /* 0x1215517B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215517C: pop ebx */
    esp = ebp; /* 0x1215517D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215517F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12155180: ret 4 */
L_12155183:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12155183: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121551A1; /* 0x1215518A: je 0x121551a1 */
L_1215518C:
    eax = 0xC2u; /* 0x1215518C: mov eax, 0xc2 */
    ecx = esi; /* 0x12155191: mov ecx, esi */
    RECOMP_CALL(sub_12154690); /* 0x12155193: call 0x12154690 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12155198: pop edi */
    esi = POP32_VAL(esp); /* 0x12155199: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215519A: pop ebx */
    esp = ebp; /* 0x1215519B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215519D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215519E: ret 4 */
L_121551A1:
    eax = 0xC0u; /* 0x121551A1: mov eax, 0xc0 */
    /* test edi, edi */ /* 0x121551A6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121551AF; /* 0x121551A8: jne 0x121551af */
L_121551AA:
    eax = 0xC1u; /* 0x121551AA: mov eax, 0xc1 */
L_121551AF:
    ecx = esi; /* 0x121551AF: mov ecx, esi */
    RECOMP_CALL(sub_12154690); /* 0x121551B1: call 0x12154690 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x121551B6: pop edi */
    esi = POP32_VAL(esp); /* 0x121551B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x121551B8: pop ebx */
    esp = ebp; /* 0x121551B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121551BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121551BC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121551D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121551D0u);

L_121551D0:
    edi = edi; /* 0x121551D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121551D2: push ebp */
    ebp = esp; /* 0x121551D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121551D5: push ecx */
    PUSH32(esp, ebx); /* 0x121551D6: push ebx */
    PUSH32(esp, esi); /* 0x121551D7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121551D8: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0xB4), 0 */ /* 0x121551DB: cmp dword ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0x164); /* 0x121551E2: mov ebx, dword ptr [esi + 0x164] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x121551E8: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155252; /* 0x121551EB: jne 0x12155252 */
L_121551ED:
    PUSH32(esp, edi); /* 0x121551ED: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121551EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xFC), edi */ /* 0x121551F0: cmp dword ptr [esi + 0xfc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xFC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12155251; /* 0x121551F6: jle 0x12155251 */
L_121551F8:
    ebx = esi + 0x100; /* 0x121551F8: lea ebx, [esi + 0x100] */
    edi = edi; /* 0x121551FE: mov edi, edi */
L_12155200:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12155200: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx); /* 0x12155207: mov eax, dword ptr [ebx] */
    MEM32(ebp + 0x8) = eax; /* 0x12155209: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12155227; /* 0x1215520C: je 0x12155227 */
L_1215520E:
    /* cmp MEM32(esi + 0x144), 0 */ /* 0x1215520E: cmp dword ptr [esi + 0x144], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x144)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155236; /* 0x12155215: jne 0x12155236 */
L_12155217:
    /* cmp MEM32(esi + 0x14C), 0 */ /* 0x12155217: cmp dword ptr [esi + 0x14c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12155242; /* 0x1215521E: jne 0x12155242 */
L_12155220:
    PUSH32(esp, 0); /* 0x12155220: push 0 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x12155222: push dword ptr [eax + 0x14] */
    goto L_1215523B; /* 0x12155225: jmp 0x1215523b */
L_12155227:
    PUSH32(esp, 0); /* 0x12155227: push 0 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x12155229: push dword ptr [eax + 0x14] */
    eax = esi; /* 0x1215522C: mov eax, esi */
    RECOMP_CALL(sub_12154430); /* 0x1215522E: call 0x12154430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12155233: mov eax, dword ptr [ebp + 8] */
L_12155236:
    PUSH32(esp, 1); /* 0x12155236: push 1 */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x12155238: push dword ptr [eax + 0x18] */
L_1215523B:
    eax = esi; /* 0x1215523B: mov eax, esi */
    RECOMP_CALL(sub_12154430); /* 0x1215523D: call 0x12154430 */
    RECOMP_FLAGS_IN();
L_12155242:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12155242: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12155243: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0xFC) */ /* 0x12155246: cmp edi, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12155200; /* 0x1215524C: jl 0x12155200 */
L_1215524E:
    ebx = MEM32(ebp + (-0x4)); /* 0x1215524E: mov ebx, dword ptr [ebp - 4] */
L_12155251:
    edi = POP32_VAL(esp); /* 0x12155251: pop edi */
L_12155252:
    ecx = MEM32(esi + 0xC8); /* 0x12155252: mov ecx, dword ptr [esi + 0xc8] */
    /* cmp ecx, MEM32(ebx + 0x1C) */ /* 0x12155258: cmp ecx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215526D; /* 0x1215525B: je 0x1215526d */
L_1215525D:
    eax = esi; /* 0x1215525D: mov eax, esi */
    RECOMP_CALL(sub_121545D0); /* 0x1215525F: call 0x121545d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC8); /* 0x12155264: mov ecx, dword ptr [esi + 0xc8] */
    MEM32(ebx + 0x1C) = ecx; /* 0x1215526A: mov dword ptr [ebx + 0x1c], ecx */
L_1215526D:
    eax = esi; /* 0x1215526D: mov eax, esi */
    RECOMP_CALL(sub_12154840); /* 0x1215526F: call 0x12154840 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12155274: pop esi */
    ebx = POP32_VAL(esp); /* 0x12155275: pop ebx */
    esp = ebp; /* 0x12155276: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12155278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12155279: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155290u);

L_12155290:
    edi = edi; /* 0x12155290: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155292: push ebp */
    ebp = esp; /* 0x12155293: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12155295: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12155296: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x18); /* 0x12155299: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215529C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x1215529E: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121552A1: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121552A3: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121552C2; /* 0x121552A6: jne 0x121552c2 */
L_121552A8:
    eax = MEM32(ecx + 0xC); /* 0x121552A8: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121552AB: push esi */
    RECOMP_ICALL(eax); /* 0x121552AC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121552AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121552C2; /* 0x121552B0: jne 0x121552c2 */
L_121552B2:
    eax = MEM32(esi); /* 0x121552B2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121552B4: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121552BB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121552BD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121552BF: push esi */
    RECOMP_ICALL(eax); /* 0x121552C0: call eax */
    RECOMP_FLAGS_IN();
L_121552C2:
    ecx = MEM32(esi + 0x18); /* 0x121552C2: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121552C5: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xD9u); /* 0x121552C7: mov byte ptr [eax], 0xd9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121552CA: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121552CC: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121552EB; /* 0x121552CF: jne 0x121552eb */
L_121552D1:
    eax = MEM32(ecx + 0xC); /* 0x121552D1: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121552D4: push esi */
    RECOMP_ICALL(eax); /* 0x121552D5: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121552D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121552EB; /* 0x121552D9: jne 0x121552eb */
L_121552DB:
    eax = MEM32(esi); /* 0x121552DB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121552DD: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121552E4: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121552E6: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121552E8: push esi */
    RECOMP_ICALL(eax); /* 0x121552E9: call eax */
    RECOMP_FLAGS_IN();
L_121552EB:
    esi = POP32_VAL(esp); /* 0x121552EB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121552EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121552ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155300u);

L_12155300:
    edi = edi; /* 0x12155300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155302: push ebp */
    ebp = esp; /* 0x12155303: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12155305: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12155306: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x18); /* 0x12155309: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x1215530C: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x1215530E: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x12155311: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x12155313: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155332; /* 0x12155316: jne 0x12155332 */
L_12155318:
    eax = MEM32(ecx + 0xC); /* 0x12155318: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1215531B: push esi */
    RECOMP_ICALL(eax); /* 0x1215531C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215531E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12155332; /* 0x12155320: jne 0x12155332 */
L_12155322:
    eax = MEM32(esi); /* 0x12155322: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x12155324: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x1215532B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215532D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215532F: push esi */
    RECOMP_ICALL(eax); /* 0x12155330: call eax */
    RECOMP_FLAGS_IN();
L_12155332:
    ecx = MEM32(esi + 0x18); /* 0x12155332: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x12155335: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xD8u); /* 0x12155337: mov byte ptr [eax], 0xd8 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1215533A: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x1215533C: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215535B; /* 0x1215533F: jne 0x1215535b */
L_12155341:
    eax = MEM32(ecx + 0xC); /* 0x12155341: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12155344: push esi */
    RECOMP_ICALL(eax); /* 0x12155345: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12155347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215535B; /* 0x12155349: jne 0x1215535b */
L_1215534B:
    eax = MEM32(esi); /* 0x1215534B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x1215534D: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x12155354: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12155356: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155358: push esi */
    RECOMP_ICALL(eax); /* 0x12155359: call eax */
    RECOMP_FLAGS_IN();
L_1215535B:
    PUSH32(esp, ebx); /* 0x1215535B: push ebx */
    PUSH32(esp, edi); /* 0x1215535C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215535D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x48; /* 0x1215535F: lea ebx, [esi + 0x48] */
L_12155362:
    /* cmp MEM32(ebx), 0 */ /* 0x12155362: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215536D; /* 0x12155365: je 0x1215536d */
L_12155367:
    PUSH32(esp, edi); /* 0x12155367: push edi */
    RECOMP_CALL(sub_12154230); /* 0x12155368: call 0x12154230 */
    RECOMP_FLAGS_IN();
L_1215536D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215536D: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1215536E: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 4 */ /* 0x12155371: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12155362; /* 0x12155374: jl 0x12155362 */
L_12155376:
    /* cmp MEM32(esi + 0xB4), 0 */ /* 0x12155376: cmp dword ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121553AC; /* 0x1215537D: jne 0x121553ac */
L_1215537F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215537F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x68; /* 0x12155381: lea ebx, [esi + 0x68] */
L_12155384:
    /* cmp MEM32(ebx + (-0x10)), 0 */ /* 0x12155384: cmp dword ptr [ebx - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12155394; /* 0x12155388: je 0x12155394 */
L_1215538A:
    PUSH32(esp, 0); /* 0x1215538A: push 0 */
    PUSH32(esp, edi); /* 0x1215538C: push edi */
    eax = esi; /* 0x1215538D: mov eax, esi */
    RECOMP_CALL(sub_12154430); /* 0x1215538F: call 0x12154430 */
    RECOMP_FLAGS_IN();
L_12155394:
    /* cmp MEM32(ebx), 0 */ /* 0x12155394: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121553A3; /* 0x12155397: je 0x121553a3 */
L_12155399:
    PUSH32(esp, 1); /* 0x12155399: push 1 */
    PUSH32(esp, edi); /* 0x1215539B: push edi */
    eax = esi; /* 0x1215539C: mov eax, esi */
    RECOMP_CALL(sub_12154430); /* 0x1215539E: call 0x12154430 */
    RECOMP_FLAGS_IN();
L_121553A3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121553A3: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x121553A4: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 4 */ /* 0x121553A7: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12155384; /* 0x121553AA: jl 0x12155384 */
L_121553AC:
    ecx = MEM32(esi + 0x18); /* 0x121553AC: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121553AF: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xFFu); /* 0x121553B1: mov byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121553B4: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121553B6: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x121553B9: pop edi */
    ebx = POP32_VAL(esp); /* 0x121553BA: pop ebx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121553D7; /* 0x121553BB: jne 0x121553d7 */
L_121553BD:
    eax = MEM32(ecx + 0xC); /* 0x121553BD: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121553C0: push esi */
    RECOMP_ICALL(eax); /* 0x121553C1: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121553C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121553D7; /* 0x121553C5: jne 0x121553d7 */
L_121553C7:
    eax = MEM32(esi); /* 0x121553C7: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121553C9: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121553D0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121553D2: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121553D4: push esi */
    RECOMP_ICALL(eax); /* 0x121553D5: call eax */
    RECOMP_FLAGS_IN();
L_121553D7:
    ecx = MEM32(esi + 0x18); /* 0x121553D7: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x121553DA: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0xD9u); /* 0x121553DC: mov byte ptr [eax], 0xd9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x121553DF: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121553E1: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12155400; /* 0x121553E4: jne 0x12155400 */
L_121553E6:
    eax = MEM32(ecx + 0xC); /* 0x121553E6: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x121553E9: push esi */
    RECOMP_ICALL(eax); /* 0x121553EA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121553EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12155400; /* 0x121553EE: jne 0x12155400 */
L_121553F0:
    eax = MEM32(esi); /* 0x121553F0: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x18u; /* 0x121553F2: mov dword ptr [eax + 0x14], 0x18 */
    eax = MEM32(esi); /* 0x121553F9: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121553FB: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121553FD: push esi */
    RECOMP_ICALL(eax); /* 0x121553FE: call eax */
    RECOMP_FLAGS_IN();
L_12155400:
    esi = POP32_VAL(esp); /* 0x12155400: pop esi */
    ebp = POP32_VAL(esp); /* 0x12155401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12155402: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155410u);

L_12155410:
    edi = edi; /* 0x12155410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155412: push ebp */
    ebp = esp; /* 0x12155413: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12155415: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12155416: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12155419: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215541C: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x20u); /* 0x1215541E: push 0x20 */
    PUSH32(esp, 1); /* 0x12155420: push 1 */
    PUSH32(esp, esi); /* 0x12155422: push esi */
    RECOMP_ICALL(eax); /* 0x12155423: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x164) = eax; /* 0x12155425: mov dword ptr [esi + 0x164], eax */
    MEM32(eax) = 0x12155030u; /* 0x1215542B: mov dword ptr [eax], 0x12155030 */
    MEM32(eax + 0x4) = 0x121550D0u; /* 0x12155431: mov dword ptr [eax + 4], 0x121550d0 */
    MEM32(eax + 0x8) = 0x121551D0u; /* 0x12155438: mov dword ptr [eax + 8], 0x121551d0 */
    MEM32(eax + 0xC) = 0x12155290u; /* 0x1215543F: mov dword ptr [eax + 0xc], 0x12155290 */
    MEM32(eax + 0x10) = 0x12155300u; /* 0x12155446: mov dword ptr [eax + 0x10], 0x12155300 */
    MEM32(eax + 0x14) = 0x12154F60u; /* 0x1215544D: mov dword ptr [eax + 0x14], 0x12154f60 */
    MEM32(eax + 0x18) = 0x12154FF0u; /* 0x12155454: mov dword ptr [eax + 0x18], 0x12154ff0 */
    MEM32(eax + 0x1C) = 0; /* 0x1215545B: mov dword ptr [eax + 0x1c], 0 */
    esi = POP32_VAL(esp); /* 0x12155462: pop esi */
    ebp = POP32_VAL(esp); /* 0x12155463: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12155464: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155470u);

L_12155470:
    edi = edi; /* 0x12155470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155472: push ebp */
    ebp = esp; /* 0x12155473: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12155475: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12155476: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x12155479: push 0 */
    PUSH32(esp, esi); /* 0x1215547B: push esi */
    RECOMP_CALL(sub_12161430); /* 0x1215547C: call 0x12161430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xB0), 0 */ /* 0x12155481: cmp dword ptr [esi + 0xb0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215549E; /* 0x12155488: jne 0x1215549e */
L_1215548A:
    PUSH32(esp, esi); /* 0x1215548A: push esi */
    RECOMP_CALL(sub_12160630); /* 0x1215548B: call 0x12160630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12155490: push esi */
    RECOMP_CALL(sub_1215FDA0); /* 0x12155491: call 0x1215fda0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x12155496: push 0 */
    PUSH32(esp, esi); /* 0x12155498: push esi */
    RECOMP_CALL(sub_1215F250); /* 0x12155499: call 0x1215f250 */
    RECOMP_FLAGS_IN();
L_1215549E:
    PUSH32(esp, esi); /* 0x1215549E: push esi */
    RECOMP_CALL(sub_1215EC10); /* 0x1215549F: call 0x1215ec10 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xB4), 0 */ /* 0x121554A4: cmp dword ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121554AB: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121554BF; /* 0x121554AC: je 0x121554bf */
L_121554AE:
    eax = MEM32(esi); /* 0x121554AE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 1; /* 0x121554B0: mov dword ptr [eax + 0x14], 1 */
    eax = MEM32(esi); /* 0x121554B7: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121554B9: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x121554BB: call eax */
    RECOMP_FLAGS_IN();
    goto L_121554D4; /* 0x121554BD: jmp 0x121554d4 */
L_121554BF:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x121554BF: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121554CF; /* 0x121554C6: je 0x121554cf */
L_121554C8:
    RECOMP_CALL(sub_1215E5B0); /* 0x121554C8: call 0x1215e5b0 */
    RECOMP_FLAGS_IN();
    goto L_121554D4; /* 0x121554CD: jmp 0x121554d4 */
L_121554CF:
    RECOMP_CALL(sub_1215D6F0); /* 0x121554CF: call 0x1215d6f0 */
    RECOMP_FLAGS_IN();
L_121554D4:
    /* cmp MEM32(esi + 0xA8), 1 */ /* 0x121554D4: cmp dword ptr [esi + 0xa8], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121554EA; /* 0x121554DB: jg 0x121554ea */
L_121554DD:
    /* cmp MEM32(esi + 0xB8), 0 */ /* 0x121554DD: cmp dword ptr [esi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121554EA; /* 0x121554E4: jne 0x121554ea */
L_121554E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121554E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121554EF; /* 0x121554E8: jmp 0x121554ef */
L_121554EA:
    eax = 1; /* 0x121554EA: mov eax, 1 */
L_121554EF:
    PUSH32(esp, eax); /* 0x121554EF: push eax */
    PUSH32(esp, esi); /* 0x121554F0: push esi */
    RECOMP_CALL(sub_1215C400); /* 0x121554F1: call 0x1215c400 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x121554F6: push 0 */
    PUSH32(esp, esi); /* 0x121554F8: push esi */
    RECOMP_CALL(sub_1215BC10); /* 0x121554F9: call 0x1215bc10 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121554FE: push esi */
    RECOMP_CALL(sub_12155410); /* 0x121554FF: call 0x12155410 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x12155504: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x18); /* 0x12155507: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x1215550A: push esi */
    RECOMP_ICALL(eax); /* 0x1215550B: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x164); /* 0x1215550D: mov eax, dword ptr [esi + 0x164] */
    eax = MEM32(eax); /* 0x12155513: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155515: push esi */
    RECOMP_ICALL(eax); /* 0x12155516: call eax */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12155518: pop esi */
    ebp = POP32_VAL(esp); /* 0x12155519: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215551A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155530u);

L_12155530:
    edi = edi; /* 0x12155530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155532: push ebp */
    ebp = esp; /* 0x12155533: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12155535: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x12155538: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215553B: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x1215553C: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12155541: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12155543: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x12155546: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215554E; /* 0x12155548: jne 0x1215554e */
L_1215554A:
    ebp = POP32_VAL(esp); /* 0x1215554A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215554B: ret 8 */
L_1215554E:
    eax = edx + 0x10; /* 0x1215554E: lea eax, [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x12155551: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, LO8(eax)); /* 0x12155554: mov cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - LO8(edx)); /* 0x12155556: sub cl, dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x12155558: mov byte ptr [eax - 1], cl */
    ebp = POP32_VAL(esp); /* 0x1215555B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215555C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12155570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155570u);

L_12155570:
    edi = edi; /* 0x12155570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155572: push ebp */
    ebp = esp; /* 0x12155573: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12155575: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x12155578: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215558B; /* 0x1215557A: je 0x1215558b */
L_1215557C:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1215557C: movzx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12155580: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x12155582: push ecx */
    RECOMP_CALL(sub_121BF586); /* 0x12155583: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12155588: add esp, 4 */
    _flag_k = FK_ADD;
L_1215558B:
    ebp = POP32_VAL(esp); /* 0x1215558B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1215558C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121555A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121555A0u);

L_121555A0:
    edi = edi; /* 0x121555A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121555A2: push ebp */
    ebp = esp; /* 0x121555A3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121555A5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x121555A8: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x2C); /* 0x121555AB: mov eax, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x14); /* 0x121555AE: sub eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x121555B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121555B2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121555C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121555C0u);

L_121555C0:
    edi = edi; /* 0x121555C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121555C2: push ebp */
    ebp = esp; /* 0x121555C3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121555C5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121555C6: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121555C9: push esi */
    esi = MEM32(ebp + 0x14); /* 0x121555CA: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x121555CD: push edi */
    PUSH32(esp, 0); /* 0x121555CE: push 0 */
    PUSH32(esp, 0); /* 0x121555D0: push 0 */
    PUSH32(esp, esi); /* 0x121555D2: push esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x121555D3: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x121555D6: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x121555DC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x121555DE: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x121555E1: mov dword ptr [ebp + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121555F6; /* 0x121555E4: je 0x121555f6 */
L_121555E6:
    eax = MEM32(esi); /* 0x121555E6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x41u; /* 0x121555E8: mov dword ptr [eax + 0x14], 0x41 */
    eax = MEM32(esi); /* 0x121555EF: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121555F1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121555F3: push esi */
    RECOMP_ICALL(eax); /* 0x121555F4: call eax */
    RECOMP_FLAGS_IN();
L_121555F6:
    edi = MEM32(ebp + 0x18); /* 0x121555F6: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x121555F9: push 0 */
    eax = ebp + 0xC; /* 0x121555FB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x121555FE: push eax */
    PUSH32(esp, edi); /* 0x121555FF: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12155600: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x12155603: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x12155606: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215560C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12155615; /* 0x1215560E: je 0x12155615 */
L_12155610:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x12155610: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12155625; /* 0x12155613: je 0x12155625 */
L_12155615:
    eax = MEM32(esi); /* 0x12155615: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x40u; /* 0x12155617: mov dword ptr [eax + 0x14], 0x40 */
    eax = MEM32(esi); /* 0x1215561E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12155620: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155622: push esi */
    RECOMP_ICALL(eax); /* 0x12155623: call eax */
    RECOMP_FLAGS_IN();
L_12155625:
    edi = POP32_VAL(esp); /* 0x12155625: pop edi */
    esi = POP32_VAL(esp); /* 0x12155626: pop esi */
    ebx = POP32_VAL(esp); /* 0x12155627: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12155628: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12155629: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12155640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155640u);

L_12155640:
    edi = edi; /* 0x12155640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155642: push ebp */
    ebp = esp; /* 0x12155643: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12155645: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12155646: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12155649: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1215564A: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1215564D: push edi */
    PUSH32(esp, 0); /* 0x1215564E: push 0 */
    PUSH32(esp, 0); /* 0x12155650: push 0 */
    PUSH32(esp, esi); /* 0x12155652: push esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x12155653: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x12155656: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1215565C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x1215565E: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x12155661: mov dword ptr [ebp + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12155676; /* 0x12155664: je 0x12155676 */
L_12155666:
    eax = MEM32(esi); /* 0x12155666: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x41u; /* 0x12155668: mov dword ptr [eax + 0x14], 0x41 */
    eax = MEM32(esi); /* 0x1215566F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12155671: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12155673: push esi */
    RECOMP_ICALL(eax); /* 0x12155674: call eax */
    RECOMP_FLAGS_IN();
L_12155676:
    edi = MEM32(ebp + 0x18); /* 0x12155676: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x12155679: push 0 */
    eax = ebp + 0xC; /* 0x1215567B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1215567E: push eax */
    PUSH32(esp, edi); /* 0x1215567F: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12155680: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x12155683: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12155686: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1215568C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12155695; /* 0x1215568E: je 0x12155695 */
L_12155690:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x12155690: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121556A5; /* 0x12155693: je 0x121556a5 */
L_12155695:
    eax = MEM32(esi); /* 0x12155695: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x42u; /* 0x12155697: mov dword ptr [eax + 0x14], 0x42 */
    eax = MEM32(esi); /* 0x1215569E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121556A0: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121556A2: push esi */
    RECOMP_ICALL(eax); /* 0x121556A3: call eax */
    RECOMP_FLAGS_IN();
L_121556A5:
    edi = POP32_VAL(esp); /* 0x121556A5: pop edi */
    esi = POP32_VAL(esp); /* 0x121556A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x121556A7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121556A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121556A9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121556C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121556C0u);

L_121556C0:
    edi = edi; /* 0x121556C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121556C2: push ebp */
    ebp = esp; /* 0x121556C3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121556C5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121556C8: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121556CB: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121556D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121556D2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121556E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121556E0u);

L_121556E0:
    eax = 0x00140000u; /* 0x121556E0: mov eax, 0x140000 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121556E5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121556F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121556F0u);

L_121556F0:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121556F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12155700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12155700u);

L_12155700:
    edi = edi; /* 0x12155700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12155702: push ebp */
    ebp = esp; /* 0x12155703: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x12155705: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215570B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12155710: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12155712: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12155715: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12155716: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12155719: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1215571A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1215571D: push edi */
    PUSH32(esp, 0x104u); /* 0x1215571E: push 0x104 */
    eax = ebp + (-0x108); /* 0x12155723: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x12155729: push eax */
    PUSH32(esp, 0x120130A8u); /* 0x1215572A: push 0x120130a8 */
    RECOMP_ICALL(MEM32(0x12001154)); /* 0x1215572F: call dword ptr [0x12001154] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x108); /* 0x12155735: lea eax, [ebp - 0x108] */
    PUSH32(esp, 0x120130A0u); /* 0x1215573B: push 0x120130a0 */
    PUSH32(esp, eax); /* 0x12155740: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x12155741: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_121BF9D6); /* 0x12155745: call 0x121bf9d6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1215574A: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1215574C: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1215574F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215578A; /* 0x12155751: je 0x1215578a */
L_12155753:
    PUSH32(esp, 0); /* 0x12155753: push 0 */
    PUSH32(esp, 0x04000100u); /* 0x12155755: push 0x4000100 */
    PUSH32(esp, 1); /* 0x1215575A: push 1 */
    PUSH32(esp, 0); /* 0x1215575C: push 0 */
    PUSH32(esp, 0); /* 0x1215575E: push 0 */
    PUSH32(esp, 0x10000000u); /* 0x12155760: push 0x10000000 */
    PUSH32(esp, edi); /* 0x12155765: push edi */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x12155766: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1215576C: mov dword ptr [esi + 0xc], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1215576F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215578A; /* 0x12155772: je 0x1215578a */
L_12155774:
    MEM32(esi) = 0x121555C0u; /* 0x12155774: mov dword ptr [esi], 0x121555c0 */
    MEM32(esi + 0x4) = 0x12155640u; /* 0x1215577A: mov dword ptr [esi + 4], 0x12155640 */
    MEM32(esi + 0x8) = 0x121556C0u; /* 0x12155781: mov dword ptr [esi + 8], 0x121556c0 */
    goto L_121557CA; /* 0x12155788: jmp 0x121557ca */
L_1215578A:
    eax = MEM32(ebx); /* 0x1215578A: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x3Fu; /* 0x1215578C: mov dword ptr [eax + 0x14], 0x3f */
    ecx = MEM32(ebx); /* 0x12155793: mov ecx, dword ptr [ebx] */
    esi = 0x120111D8u; /* 0x12155795: mov esi, 0x120111d8 */
    edx = 0x50u; /* 0x1215579A: mov edx, 0x50 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x1215579F: add ecx, 0x18 */
    _flag_k = FK_ADD;
L_121557A2:
    eax = edx + 0x7FFFFFAE; /* 0x121557A2: lea eax, [edx + 0x7fffffae] */
    /* test eax, eax */ /* 0x121557A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121557BB; /* 0x121557AA: je 0x121557bb */
L_121557AC:
    SET_LO8(eax, MEM8(esi)); /* 0x121557AC: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x121557AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121557BB; /* 0x121557B0: je 0x121557bb */
L_121557B2:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121557B2: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121557B4: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121557B5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x121557B6: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121557A2; /* 0x121557B7: jne 0x121557a2 */
L_121557B9:
    goto L_121557BF; /* 0x121557B9: jmp 0x121557bf */
L_121557BB:
    /* test edx, edx */ /* 0x121557BB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121557C0; /* 0x121557BD: jne 0x121557c0 */
L_121557BF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121557BF: dec ecx */
    _flag_k = FK_DEC;
L_121557C0:
    MEM8(ecx) = (uint8_t)(0); /* 0x121557C0: mov byte ptr [ecx], 0 */
    eax = MEM32(ebx); /* 0x121557C3: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121557C5: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121557C7: push ebx */
    RECOMP_ICALL(eax); /* 0x121557C8: call eax */
    RECOMP_FLAGS_IN();
L_121557CA:
    /* test edi, edi */ /* 0x121557CA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121557D7; /* 0x121557CC: je 0x121557d7 */
L_121557CE:
    PUSH32(esp, edi); /* 0x121557CE: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x121557CF: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x121557D4: add esp, 4 */
    _flag_k = FK_ADD;
L_121557D7:
    ecx = MEM32(ebp + (-0x4)); /* 0x121557D7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121557DA: pop edi */
    esi = POP32_VAL(esp); /* 0x121557DB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121557DC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121557DE: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121557DF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x121557E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121557E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121557E7: ret 0xc */
    RECOMP_REGS_OUT();
}
