#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0053C0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C0A0u);

L_0053C0A0:
    PUSH32(esp, ebp); /* 0x0053C0A0: push ebp */
    ebp = esp; /* 0x0053C0A1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0053C0A3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0053C0A4: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0053C0A7: push esi */
    esi = ecx; /* 0x0053C0A8: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x0053C0AA: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x0053C0AD: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x0053C0AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C0DF; /* 0x0053C0B1: je 0x53c0df */
L_0053C0B3:
    eax = MEM32(esi + 0xC); /* 0x0053C0B3: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(eax), ecx */ /* 0x0053C0B6: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053C0DF; /* 0x0053C0B8: jae 0x53c0df */
L_0053C0BA:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x0053C0BA: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C0C7; /* 0x0053C0BD: je 0x53c0c7 */
L_0053C0BF:
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x0053C0BF: movzx eax, byte ptr [ecx - 1] */
    /* cmp eax, ebx */ /* 0x0053C0C3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C0DF; /* 0x0053C0C5: jne 0x53c0df */
L_0053C0C7:
    eax = MEM32(esi + 0x2C); /* 0x0053C0C7: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x0053C0CA: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x1C); /* 0x0053C0CC: mov eax, dword ptr [esi + 0x1c] */
    esi = POP32_VAL(esp); /* 0x0053C0CF: pop esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x0053C0D0: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C0D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x0053C0D4: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = ebx; } /* 0x0053C0D7: cmovne eax, ebx */
    ebx = POP32_VAL(esp); /* 0x0053C0DA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053C0DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053C0DC: ret 4 */
L_0053C0DF:
    eax = MEM32(esi + 0x50); /* 0x0053C0DF: mov eax, dword ptr [esi + 0x50] */
    /* test eax, eax */ /* 0x0053C0E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C11F; /* 0x0053C0E4: je 0x53c11f */
L_0053C0E6:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x0053C0E6: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C11F; /* 0x0053C0E9: je 0x53c11f */
L_0053C0EB:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x0053C0EB: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C104; /* 0x0053C0EF: jne 0x53c104 */
L_0053C0F1:
    PUSH32(esp, eax); /* 0x0053C0F1: push eax */
    ecx = (uint32_t)LO8(ebx); /* 0x0053C0F2: movzx ecx, bl */
    PUSH32(esp, ecx); /* 0x0053C0F5: push ecx */
    RECOMP_ICALL(MEM32(0x7CC464)); /* 0x0053C0F6: call dword ptr [0x7cc464] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C0FC: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053C0FF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C117; /* 0x0053C102: jne 0x53c117 */
L_0053C104:
    eax = MEM32(esi + 0x1C); /* 0x0053C104: mov eax, dword ptr [esi + 0x1c] */
    ecx = esi + 0x44; /* 0x0053C107: lea ecx, [esi + 0x44] */
    /* cmp MEM32(eax), ecx */ /* 0x0053C10A: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C11F; /* 0x0053C10C: je 0x53c11f */
L_0053C10E:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0053C10E: mov byte ptr [ecx], bl */
    ecx = esi; /* 0x0053C110: mov ecx, esi */
    RECOMP_CALL(sub_0053D250); /* 0x0053C112: call 0x53d250 */
    RECOMP_FLAGS_IN();
L_0053C117:
    esi = POP32_VAL(esp); /* 0x0053C117: pop esi */
    eax = ebx; /* 0x0053C118: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x0053C11A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053C11B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053C11C: ret 4 */
L_0053C11F:
    esi = POP32_VAL(esp); /* 0x0053C11F: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0053C120: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053C123: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053C124: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053C125: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053C130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C130u);

L_0053C130:
    PUSH32(esp, esi); /* 0x0053C130: push esi */
    esi = ecx; /* 0x0053C131: mov esi, ecx */
    eax = MEM32(esi + 0x1C); /* 0x0053C133: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x0053C136: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x0053C138: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C14C; /* 0x0053C13A: je 0x53c14c */
L_0053C13C:
    eax = MEM32(esi + 0x2C); /* 0x0053C13C: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax); /* 0x0053C13F: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0053C141: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x0053C143: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053C14C; /* 0x0053C145: jae 0x53c14c */
L_0053C147:
    eax = (uint32_t)MEM8(ecx); /* 0x0053C147: movzx eax, byte ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x0053C14A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C14B: ret  */
L_0053C14C:
    eax = MEM32(esi); /* 0x0053C14C: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0053C14E: mov ecx, esi */
    PUSH32(esp, edi); /* 0x0053C150: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0053C151: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053C154: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x0053C156: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C160; /* 0x0053C159: jne 0x53c160 */
L_0053C15B:
    edi = POP32_VAL(esp); /* 0x0053C15B: pop edi */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x0053C15C: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0053C15E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C15F: ret  */
L_0053C160:
    eax = MEM32(esi); /* 0x0053C160: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0053C162: mov ecx, esi */
    PUSH32(esp, edi); /* 0x0053C164: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0053C165: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x0053C168: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053C16A: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C16B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C16C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C170u);

L_0053C170:
    PUSH32(esp, ebp); /* 0x0053C170: push ebp */
    ebp = esp; /* 0x0053C171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053C173: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C176: push -1 */
    PUSH32(esp, 0x0078E318u); /* 0x0053C178: push 0x78e318 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C17D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C183: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0053C184: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053C187: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0053C18C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x0053C18E: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x0053C192: push ebx */
    PUSH32(esp, esi); /* 0x0053C193: push esi */
    PUSH32(esp, edi); /* 0x0053C194: push edi */
    eax = MEM32(0x855000); /* 0x0053C195: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0053C19A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C19C: push eax */
    eax = esp + 0x40; /* 0x0053C19D: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C1A1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053C1A7: mov edi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x0053C1A9: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(eax); /* 0x0053C1AC: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x0053C1AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C1CD; /* 0x0053C1B0: je 0x53c1cd */
L_0053C1B2:
    eax = MEM32(edi + 0x2C); /* 0x0053C1B2: mov eax, dword ptr [edi + 0x2c] */
    eax = MEM32(eax); /* 0x0053C1B5: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0053C1B7: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x0053C1B9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053C1CD; /* 0x0053C1BB: jae 0x53c1cd */
L_0053C1BD:
    ecx = edi; /* 0x0053C1BD: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x7CC32C)); /* 0x0053C1BF: call dword ptr [0x7cc32c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(eax); /* 0x0053C1C5: movzx eax, byte ptr [eax] */
    goto L_0053C35E; /* 0x0053C1C8: jmp 0x53c35e */
L_0053C1CD:
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x0053C1CD: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C1DB; /* 0x0053C1D1: jne 0x53c1db */
L_0053C1D3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0053C1D3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0053C35E; /* 0x0053C1D6: jmp 0x53c35e */
L_0053C1DB:
    eax = MEM32(edi + 0xC); /* 0x0053C1DB: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x0053C1DE: mov ecx, dword ptr [eax] */
    eax = edi + 0x44; /* 0x0053C1E0: lea eax, [edi + 0x44] */
    /* cmp ecx, eax */ /* 0x0053C1E3: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C1F7; /* 0x0053C1E5: jne 0x53c1f7 */
L_0053C1E7:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x0053C1E7: push dword ptr [edi + 0x3c] */
    eax = MEM32(edi + 0x38); /* 0x0053C1EA: mov eax, dword ptr [edi + 0x38] */
    ecx = edi; /* 0x0053C1ED: mov ecx, edi */
    PUSH32(esp, eax); /* 0x0053C1EF: push eax */
    PUSH32(esp, eax); /* 0x0053C1F0: push eax */
    RECOMP_ICALL(MEM32(0x7CC430)); /* 0x0053C1F1: call dword ptr [0x7cc430] */
    RECOMP_FLAGS_IN();
L_0053C1F7:
    /* cmp MEM32(edi + 0x40), 0 */ /* 0x0053C1F7: cmp dword ptr [edi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C216; /* 0x0053C1FB: jne 0x53c216 */
L_0053C1FD:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x0053C1FD: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC478)); /* 0x0053C200: call dword ptr [0x7cc478] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C206: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053C209: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C1D3; /* 0x0053C20C: je 0x53c1d3 */
L_0053C20E:
    eax = (uint32_t)LO8(eax); /* 0x0053C20E: movzx eax, al */
    goto L_0053C35E; /* 0x0053C211: jmp 0x53c35e */
L_0053C216:
    MEM32(esp + 0x30) = 0; /* 0x0053C216: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x0053C21E: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x34) = 0xFu; /* 0x0053C226: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x0053C22E: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x0053C236: mov byte ptr [esp + 0x20], 0 */
    MEM32(esp + 0x48) = 0; /* 0x0053C23B: mov dword ptr [esp + 0x48], 0 */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x0053C243: push dword ptr [edi + 0x50] */
    ebx = MEM32(0x7CC478); /* 0x0053C246: mov ebx, dword ptr [0x7cc478] */
    RECOMP_ICALL(ebx); /* 0x0053C24C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C24E: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053C251: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C328; /* 0x0053C254: je 0x53c328 */
L_0053C25A:
    ebx = ebx; /* 0x0053C25A: lea ebx, [ebx] */
L_0053C260:
    PUSH32(esp, eax); /* 0x0053C260: push eax */
    PUSH32(esp, 1); /* 0x0053C261: push 1 */
    ecx = esp + 0x28; /* 0x0053C263: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_00429FC0); /* 0x0053C267: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0053C26C: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x1C; /* 0x0053C271: lea eax, [esp + 0x1c] */
    ecx = MEM32(edi + 0x40); /* 0x0053C275: mov ecx, dword ptr [edi + 0x40] */
    esi = esp + 0x20; /* 0x0053C278: lea esi, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { esi = MEM32(esp + 0x20); } /* 0x0053C27C: cmovae esi, dword ptr [esp + 0x20] */
    edx = esp + 0x20; /* 0x0053C281: lea edx, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(esp + 0x20); } /* 0x0053C285: cmovae edx, dword ptr [esp + 0x20] */
    PUSH32(esp, eax); /* 0x0053C28A: push eax */
    eax = esp + 0x1C; /* 0x0053C28B: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x0053C28F: push eax */
    eax = esp + 0x1F; /* 0x0053C290: lea eax, [esp + 0x1f] */
    PUSH32(esp, eax); /* 0x0053C294: push eax */
    eax = esp + 0x24; /* 0x0053C295: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x0053C299: push eax */
    eax = MEM32(esp + 0x40); /* 0x0053C29A: mov eax, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0053C29E: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0053C2A0: push eax */
    PUSH32(esp, edx); /* 0x0053C2A1: push edx */
    eax = edi + 0x48; /* 0x0053C2A2: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x0053C2A5: push eax */
    RECOMP_ICALL(MEM32(0x7CC324)); /* 0x0053C2A6: call dword ptr [0x7cc324] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0053C2AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053C328; /* 0x0053C2AE: js 0x53c328 */
L_0053C2B0:
    /* cmp eax, 1 */ /* 0x0053C2B0: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0053C2E9; /* 0x0053C2B3: jle 0x53c2e9 */
L_0053C2B5:
    /* cmp eax, 3 */ /* 0x0053C2B5: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C328; /* 0x0053C2B8: jne 0x53c328 */
L_0053C2BA:
    /* cmp MEM32(esp + 0x30), 1 */ /* 0x0053C2BA: cmp dword ptr [esp + 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053C317; /* 0x0053C2BF: jb 0x53c317 */
L_0053C2C1:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0053C2C1: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x20; /* 0x0053C2C6: lea eax, [esp + 0x20] */
    PUSH32(esp, 1); /* 0x0053C2CA: push 1 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x24); } /* 0x0053C2CC: cmovae eax, dword ptr [esp + 0x24] */
    PUSH32(esp, eax); /* 0x0053C2D1: push eax */
    eax = esp + 0x1F; /* 0x0053C2D2: lea eax, [esp + 0x1f] */
    PUSH32(esp, 1); /* 0x0053C2D6: push 1 */
    PUSH32(esp, eax); /* 0x0053C2D8: push eax */
    RECOMP_ICALL(MEM32(0x7CC488)); /* 0x0053C2D9: call dword ptr [0x7cc488] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053C2DF: add esp, 0x10 */
    _flag_k = FK_ADD;
L_0053C2E2:
    esi = (uint32_t)MEM8(esp + 0x17); /* 0x0053C2E2: movzx esi, byte ptr [esp + 0x17] */
    goto L_0053C32B; /* 0x0053C2E7: jmp 0x53c32b */
L_0053C2E9:
    eax = esp + 0x17; /* 0x0053C2E9: lea eax, [esp + 0x17] */
    /* cmp MEM32(esp + 0x1C), eax */ /* 0x0053C2ED: cmp dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x18); /* 0x0053C2F1: mov eax, dword ptr [esp + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C37C; /* 0x0053C2F5: jne 0x53c37c */
L_0053C2FB:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0053C2FB: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x0053C300: lea ecx, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x20); } /* 0x0053C304: cmovae ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0053C309: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = esp + 0x20; /* 0x0053C30B: lea ecx, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x0053C30F: push eax */
    PUSH32(esp, 0); /* 0x0053C310: push 0 */
    RECOMP_CALL(sub_0040A150); /* 0x0053C312: call 0x40a150 */
    RECOMP_FLAGS_IN();
L_0053C317:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x0053C317: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(ebx); /* 0x0053C31A: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C31C: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053C31F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C260; /* 0x0053C322: jne 0x53c260 */
L_0053C328:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x0053C328: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053C32B:
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x0053C32B: mov dword ptr [esp + 0x48], 0xffffffff */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0053C333: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053C347; /* 0x0053C338: jb 0x53c347 */
L_0053C33A:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x0053C33A: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053C33E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C344: add esp, 4 */
    _flag_k = FK_ADD;
L_0053C347:
    MEM32(esp + 0x34) = 0xFu; /* 0x0053C347: mov dword ptr [esp + 0x34], 0xf */
    eax = esi; /* 0x0053C34F: mov eax, esi */
    MEM32(esp + 0x30) = 0; /* 0x0053C351: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x0053C359: mov byte ptr [esp + 0x20], 0 */
L_0053C35E:
    ecx = MEM32(esp + 0x40); /* 0x0053C35E: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053C362: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053C369: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053C36A: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C36B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053C36C: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x0053C36D: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0053C371: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0053C373: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053C378: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C37A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C37B: ret  */
L_0053C37C:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0053C37C: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esp + 0x20; /* 0x0053C381: lea esi, [esp + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) { esi = MEM32(esp + 0x20); } /* 0x0053C385: cmovae esi, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x0053C38A: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(esp + 0x30); /* 0x0053C38C: add esi, dword ptr [esp + 0x30] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0053C390: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053C2E2; /* 0x0053C392: jle 0x53c2e2 */
L_0053C398:
    ebx = MEM32(0x7CC464); /* 0x0053C398: mov ebx, dword ptr [0x7cc464] */
    edi = edi; /* 0x0053C39E: mov edi, edi */
L_0053C3A0:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x0053C3A0: push dword ptr [edi + 0x50] */
    eax = (int32_t)(int8_t)MEM8(esi + eax + (-0x1)); /* 0x0053C3A3: movsx eax, byte ptr [esi + eax - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0053C3A8: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x0053C3A9: push eax */
    RECOMP_ICALL(ebx); /* 0x0053C3AA: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C3AC: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0053C3AF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053C2E2; /* 0x0053C3B1: jle 0x53c2e2 */
L_0053C3B7:
    eax = MEM32(esp + 0x18); /* 0x0053C3B7: mov eax, dword ptr [esp + 0x18] */
    RECOMP_BACKEDGE();
    goto L_0053C3A0; /* 0x0053C3BB: jmp 0x53c3a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053C3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C3C0u);

L_0053C3C0:
    PUSH32(esp, ebp); /* 0x0053C3C0: push ebp */
    ebp = esp; /* 0x0053C3C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053C3C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053C3C6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053C3C9: push ebx */
    PUSH32(esp, esi); /* 0x0053C3CA: push esi */
    esi = ecx; /* 0x0053C3CB: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053C3CD: push edi */
    edx = MEM32(esi + 0x1C); /* 0x0053C3CE: mov edx, dword ptr [esi + 0x1c] */
    eax = esi + 0x44; /* 0x0053C3D1: lea eax, [esi + 0x44] */
    /* cmp MEM32(edx), eax */ /* 0x0053C3D4: cmp dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C3F2; /* 0x0053C3D6: jne 0x53c3f2 */
L_0053C3D8:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x0053C3D8: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C3F2; /* 0x0053C3DC: jne 0x53c3f2 */
L_0053C3DE:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x0053C3DE: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C3F2; /* 0x0053C3E2: jne 0x53c3f2 */
L_0053C3E4:
    edi = MEM32(ebp + 0xC); /* 0x0053C3E4: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x0053C3E7: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFFu; /* 0x0053C3EA: add edi, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0053C3ED: adc ebx, -1 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_0053C3F8; /* 0x0053C3F0: jmp 0x53c3f8 */
L_0053C3F2:
    ebx = MEM32(ebp + 0x10); /* 0x0053C3F2: mov ebx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x0053C3F5: mov edi, dword ptr [ebp + 0xc] */
L_0053C3F8:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x0053C3F8: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C471; /* 0x0053C3FC: je 0x53c471 */
L_0053C3FE:
    RECOMP_CALL(sub_0053D050); /* 0x0053C3FE: call 0x53d050 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053C403: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C471; /* 0x0053C405: je 0x53c471 */
L_0053C407:
    eax = edi; /* 0x0053C407: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x0053C409: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x14); /* 0x0053C40B: mov eax, dword ptr [ebp + 0x14] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C415; /* 0x0053C40E: jne 0x53c415 */
L_0053C410:
    /* cmp eax, 1 */ /* 0x0053C410: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C428; /* 0x0053C413: je 0x53c428 */
L_0053C415:
    PUSH32(esp, eax); /* 0x0053C415: push eax */
    PUSH32(esp, ebx); /* 0x0053C416: push ebx */
    PUSH32(esp, edi); /* 0x0053C417: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C418: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC470)); /* 0x0053C41B: call dword ptr [0x7cc470] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053C421: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C424: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C471; /* 0x0053C426: jne 0x53c471 */
L_0053C428:
    eax = esp + 0x10; /* 0x0053C428: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x0053C42C: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C42D: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC46C)); /* 0x0053C430: call dword ptr [0x7cc46c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C436: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C439: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C471; /* 0x0053C43B: jne 0x53c471 */
L_0053C43D:
    ecx = esi; /* 0x0053C43D: mov ecx, esi */
    RECOMP_CALL(sub_0053D220); /* 0x0053C43F: call 0x53d220 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x0053C444: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x0053C447: mov ecx, dword ptr [esp + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x0053C44B: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(esp + 0x14); /* 0x0053C44E: mov ecx, dword ptr [esp + 0x14] */
    MEM32(eax + 0xC) = ecx; /* 0x0053C452: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x0053C455: mov ecx, dword ptr [esi + 0x48] */
    MEM32(eax) = 0; /* 0x0053C458: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0053C45E: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x10) = ecx; /* 0x0053C465: mov dword ptr [eax + 0x10], ecx */
    edi = POP32_VAL(esp); /* 0x0053C468: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C469: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053C46A: pop ebx */
    esp = ebp; /* 0x0053C46B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C46D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0053C46E: ret 0x14 */
L_0053C471:
    eax = MEM32(ebp + 0x8); /* 0x0053C471: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(0x7CC41C); /* 0x0053C474: mov edx, dword ptr [0x7cc41c] */
    edi = POP32_VAL(esp); /* 0x0053C47A: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C47B: pop esi */
    MEM32(eax + 0x8) = 0; /* 0x0053C47C: mov dword ptr [eax + 8], 0 */
    ecx = MEM32(edx); /* 0x0053C483: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x0053C485: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x0053C487: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x0053C48A: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0xC) = 0; /* 0x0053C48D: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x0053C494: mov dword ptr [eax + 0x10], 0 */
    ebx = POP32_VAL(esp); /* 0x0053C49B: pop ebx */
    esp = ebp; /* 0x0053C49C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C49E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0053C49F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_0053C4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C4B0u);

L_0053C4B0:
    PUSH32(esp, ebp); /* 0x0053C4B0: push ebp */
    ebp = esp; /* 0x0053C4B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053C4B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053C4B6: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x0053C4B9: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x0053C4BC: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x0053C4BD: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x0053C4C0: push esi */
    esi = ecx; /* 0x0053C4C1: mov esi, ecx */
    MEM32(esp + 0xC) = eax; /* 0x0053C4C3: mov dword ptr [esp + 0xc], eax */
    eax = MEM32(ebp + 0x18); /* 0x0053C4C7: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x0053C4CA: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0053C4CB: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x0053C4CE: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x14) = eax; /* 0x0053C4D2: mov dword ptr [esp + 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C563; /* 0x0053C4D6: je 0x53c563 */
L_0053C4DC:
    RECOMP_CALL(sub_0053D050); /* 0x0053C4DC: call 0x53d050 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053C4E1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C563; /* 0x0053C4E3: je 0x53c563 */
L_0053C4E5:
    eax = esp + 0x10; /* 0x0053C4E5: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x0053C4E9: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C4EA: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC47C)); /* 0x0053C4ED: call dword ptr [0x7cc47c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C4F3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C4F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C563; /* 0x0053C4F8: jne 0x53c563 */
L_0053C4FA:
    eax = edi; /* 0x0053C4FA: mov eax, edi */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x0053C4FC: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C514; /* 0x0053C4FE: je 0x53c514 */
L_0053C500:
    PUSH32(esp, 1); /* 0x0053C500: push 1 */
    PUSH32(esp, ebx); /* 0x0053C502: push ebx */
    PUSH32(esp, edi); /* 0x0053C503: push edi */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C504: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC470)); /* 0x0053C507: call dword ptr [0x7cc470] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053C50D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C510: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C563; /* 0x0053C512: jne 0x53c563 */
L_0053C514:
    eax = esp + 0x10; /* 0x0053C514: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x0053C518: push eax */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C519: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC46C)); /* 0x0053C51C: call dword ptr [0x7cc46c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C522: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C525: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C563; /* 0x0053C527: jne 0x53c563 */
L_0053C529:
    eax = MEM32(ebp + 0x1C); /* 0x0053C529: mov eax, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x0053C52C: mov ecx, esi */
    MEM32(esi + 0x48) = eax; /* 0x0053C52E: mov dword ptr [esi + 0x48], eax */
    RECOMP_CALL(sub_0053D220); /* 0x0053C531: call 0x53d220 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x0053C536: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x0053C539: mov ecx, dword ptr [esp + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x0053C53D: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(esp + 0x14); /* 0x0053C540: mov ecx, dword ptr [esp + 0x14] */
    MEM32(eax + 0xC) = ecx; /* 0x0053C544: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(esi + 0x48); /* 0x0053C547: mov ecx, dword ptr [esi + 0x48] */
    MEM32(eax) = 0; /* 0x0053C54A: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0053C550: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x10) = ecx; /* 0x0053C557: mov dword ptr [eax + 0x10], ecx */
    edi = POP32_VAL(esp); /* 0x0053C55A: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C55B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053C55C: pop ebx */
    esp = ebp; /* 0x0053C55D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C55F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x0053C560: ret 0x20 */
L_0053C563:
    eax = MEM32(ebp + 0x8); /* 0x0053C563: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(0x7CC41C); /* 0x0053C566: mov edx, dword ptr [0x7cc41c] */
    edi = POP32_VAL(esp); /* 0x0053C56C: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C56D: pop esi */
    MEM32(eax + 0x8) = 0; /* 0x0053C56E: mov dword ptr [eax + 8], 0 */
    ecx = MEM32(edx); /* 0x0053C575: mov ecx, dword ptr [edx] */
    MEM32(eax) = ecx; /* 0x0053C577: mov dword ptr [eax], ecx */
    ecx = MEM32(edx + 0x4); /* 0x0053C579: mov ecx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x0053C57C: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0xC) = 0; /* 0x0053C57F: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x0053C586: mov dword ptr [eax + 0x10], 0 */
    ebx = POP32_VAL(esp); /* 0x0053C58D: pop ebx */
    esp = ebp; /* 0x0053C58E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C590: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x0053C591: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_0053C5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C5A0u);

L_0053C5A0:
    PUSH32(esp, ebp); /* 0x0053C5A0: push ebp */
    ebp = esp; /* 0x0053C5A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0053C5A3: push esi */
    esi = ecx; /* 0x0053C5A4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053C5A6: push edi */
    ecx = MEM32(esi + 0x50); /* 0x0053C5A7: mov ecx, dword ptr [esi + 0x50] */
    /* test ecx, ecx */ /* 0x0053C5AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C621; /* 0x0053C5AC: je 0x53c621 */
L_0053C5AE:
    edx = MEM32(ebp + 0x8); /* 0x0053C5AE: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x0053C5B1: mov edi, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x0053C5B4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C5C6; /* 0x0053C5B6: jne 0x53c5c6 */
L_0053C5B8:
    eax = edi; /* 0x0053C5B8: mov eax, edi */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x0053C5BA: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C5C6; /* 0x0053C5BD: jne 0x53c5c6 */
L_0053C5BF:
    eax = 4; /* 0x0053C5BF: mov eax, 4 */
    goto L_0053C5C8; /* 0x0053C5C4: jmp 0x53c5c8 */
L_0053C5C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C5C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053C5C8:
    PUSH32(esp, edi); /* 0x0053C5C8: push edi */
    PUSH32(esp, eax); /* 0x0053C5C9: push eax */
    PUSH32(esp, edx); /* 0x0053C5CA: push edx */
    PUSH32(esp, ecx); /* 0x0053C5CB: push ecx */
    RECOMP_ICALL(MEM32(0x7CC480)); /* 0x0053C5CC: call dword ptr [0x7cc480] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053C5D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C5D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053C621; /* 0x0053C5D7: jne 0x53c621 */
L_0053C5D9:
    edi = MEM32(esi + 0x50); /* 0x0053C5D9: mov edi, dword ptr [esi + 0x50] */
    ecx = esi; /* 0x0053C5DC: mov ecx, esi */
    MEM8(esi + 0x4C) = (uint8_t)(1); /* 0x0053C5DE: mov byte ptr [esi + 0x4c], 1 */
    MEM8(esi + 0x45) = (uint8_t)(LO8(eax)); /* 0x0053C5E2: mov byte ptr [esi + 0x45], al */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053C5E5: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x0053C5EB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C607; /* 0x0053C5ED: je 0x53c607 */
L_0053C5EF:
    eax = edi + 0x8; /* 0x0053C5EF: lea eax, [edi + 8] */
    MEM32(esi + 0x1C) = edi; /* 0x0053C5F2: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0xC) = eax; /* 0x0053C5F5: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x0053C5F8: mov dword ptr [esi + 0x10], eax */
    eax = edi + 0x4; /* 0x0053C5FB: lea eax, [edi + 4] */
    MEM32(esi + 0x20) = edi; /* 0x0053C5FE: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x2C) = eax; /* 0x0053C601: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x30) = eax; /* 0x0053C604: mov dword ptr [esi + 0x30], eax */
L_0053C607:
    eax = MEM32(0x927B74); /* 0x0053C607: mov eax, dword ptr [0x927b74] */
    MEM32(esi + 0x50) = edi; /* 0x0053C60C: mov dword ptr [esi + 0x50], edi */
    MEM32(esi + 0x48) = eax; /* 0x0053C60F: mov dword ptr [esi + 0x48], eax */
    eax = esi; /* 0x0053C612: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x0053C614: pop edi */
    MEM32(esi + 0x40) = 0; /* 0x0053C615: mov dword ptr [esi + 0x40], 0 */
    esi = POP32_VAL(esp); /* 0x0053C61C: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053C61D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053C61E: ret 0xc */
L_0053C621:
    edi = POP32_VAL(esp); /* 0x0053C621: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C622: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0053C624: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053C625: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053C626: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053C630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C630u);

L_0053C630:
    PUSH32(esp, esi); /* 0x0053C630: push esi */
    esi = ecx; /* 0x0053C631: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x0053C633: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C65A; /* 0x0053C637: je 0x53c65a */
L_0053C639:
    eax = MEM32(esi); /* 0x0053C639: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C63B: push -1 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x0053C63D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053C640: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053C65A; /* 0x0053C643: je 0x53c65a */
L_0053C645:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053C645: push dword ptr [esi + 0x50] */
    RECOMP_ICALL(MEM32(0x7CC474)); /* 0x0053C648: call dword ptr [0x7cc474] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C64E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053C651: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053C65A; /* 0x0053C653: jns 0x53c65a */
L_0053C655:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0053C655: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0053C658: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C659: ret  */
L_0053C65A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C65A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0053C65C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C65D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C660u);

L_0053C660:
    PUSH32(esp, ebp); /* 0x0053C660: push ebp */
    ebp = esp; /* 0x0053C661: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0053C663: push esi */
    esi = ecx; /* 0x0053C664: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053C666: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0053C669: push edi */
    RECOMP_CALL(sub_0053E140); /* 0x0053C66A: call 0x53e140 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053C66F: mov edi, eax */
    ecx = edi; /* 0x0053C671: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x7CC310)); /* 0x0053C673: call dword ptr [0x7cc310] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053C679: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C68A; /* 0x0053C67B: je 0x53c68a */
L_0053C67D:
    edi = POP32_VAL(esp); /* 0x0053C67D: pop edi */
    MEM32(esi + 0x40) = 0; /* 0x0053C67E: mov dword ptr [esi + 0x40], 0 */
    esi = POP32_VAL(esp); /* 0x0053C685: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053C686: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053C687: ret 4 */
L_0053C68A:
    ecx = esi; /* 0x0053C68A: mov ecx, esi */
    MEM32(esi + 0x40) = edi; /* 0x0053C68C: mov dword ptr [esi + 0x40], edi */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053C68F: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053C695: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C696: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053C697: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053C698: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053C6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C6A0u);

L_0053C6A0:
    PUSH32(esp, esi); /* 0x0053C6A0: push esi */
    esi = ecx; /* 0x0053C6A1: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0053C6A3: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053C6A6: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x0053C6AC: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053C6AF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C6B5: add esp, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x0053C6B8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C6B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C6C0u);

L_0053C6C0:
    PUSH32(esp, ebp); /* 0x0053C6C0: push ebp */
    ebp = esp; /* 0x0053C6C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C6C3: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0053C6C5: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C6CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C6D0: push eax */
    PUSH32(esp, esi); /* 0x0053C6D1: push esi */
    PUSH32(esp, edi); /* 0x0053C6D2: push edi */
    eax = MEM32(0x855000); /* 0x0053C6D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053C6D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C6DA: push eax */
    eax = ebp + (-0xC); /* 0x0053C6DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C6DE: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053C6E4: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x0053C6E6: push ecx */
    RECOMP_CALL(sub_0053D290); /* 0x0053C6E7: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053C6EC: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0053C6EF: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x0053C6F2: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053C700; /* 0x0053C6F5: jbe 0x53c700 */
L_0053C6F7:
    PUSH32(esp, ecx); /* 0x0053C6F7: push ecx */
    ecx = edi + 0x4; /* 0x0053C6F8: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_0053EE50); /* 0x0053C6FB: call 0x53ee50 */
    RECOMP_FLAGS_IN();
L_0053C700:
    ecx = MEM32(edi + 0x10); /* 0x0053C700: mov ecx, dword ptr [edi + 0x10] */
    eax = ecx + 0x8; /* 0x0053C703: lea eax, [ecx + 8] */
    MEM32(edi + 0x10) = eax; /* 0x0053C706: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053C709: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053C710: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C71E; /* 0x0053C712: je 0x53c71e */
L_0053C714:
    MEM32(ecx) = 0; /* 0x0053C714: mov dword ptr [ecx], 0 */
    MEM8(ecx + 0x4) = (uint8_t)(0); /* 0x0053C71A: mov byte ptr [ecx + 4], 0 */
L_0053C71E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053C71E: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(edi); /* 0x0053C725: mov esi, dword ptr [edi] */
    eax = MEM32(esi + 0xC); /* 0x0053C727: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0053C72A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053C72B: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053C739; /* 0x0053C72E: jbe 0x53c739 */
L_0053C730:
    PUSH32(esp, 1); /* 0x0053C730: push 1 */
    ecx = esi; /* 0x0053C732: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0053C734: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0053C739:
    ecx = MEM32(esi + 0xC); /* 0x0053C739: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x1; /* 0x0053C73C: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x0053C73F: mov dword ptr [esi + 0xc], eax */
    SET_LO8(eax, 1); /* 0x0053C742: mov al, 1 */
    MEM8(ecx) = (uint8_t)(0x7Bu); /* 0x0053C744: mov byte ptr [ecx], 0x7b */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053C747: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053C74A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053C751: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053C752: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C753: pop esi */
    esp = ebp; /* 0x0053C754: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C756: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C757: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C760u);

L_0053C760:
    PUSH32(esp, ebp); /* 0x0053C760: push ebp */
    ebp = esp; /* 0x0053C761: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C763: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0053C765: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C76A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C770: push eax */
    PUSH32(esp, esi); /* 0x0053C771: push esi */
    PUSH32(esp, edi); /* 0x0053C772: push edi */
    eax = MEM32(0x855000); /* 0x0053C773: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053C778: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C77A: push eax */
    eax = ebp + (-0xC); /* 0x0053C77B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C77E: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053C784: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x0053C786: push ecx */
    RECOMP_CALL(sub_0053D290); /* 0x0053C787: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053C78C: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0053C78F: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x0053C792: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053C7A0; /* 0x0053C795: jbe 0x53c7a0 */
L_0053C797:
    PUSH32(esp, ecx); /* 0x0053C797: push ecx */
    ecx = edi + 0x4; /* 0x0053C798: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_0053EE50); /* 0x0053C79B: call 0x53ee50 */
    RECOMP_FLAGS_IN();
L_0053C7A0:
    ecx = MEM32(edi + 0x10); /* 0x0053C7A0: mov ecx, dword ptr [edi + 0x10] */
    eax = ecx + 0x8; /* 0x0053C7A3: lea eax, [ecx + 8] */
    MEM32(edi + 0x10) = eax; /* 0x0053C7A6: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053C7A9: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053C7B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C7BE; /* 0x0053C7B2: je 0x53c7be */
L_0053C7B4:
    MEM32(ecx) = 0; /* 0x0053C7B4: mov dword ptr [ecx], 0 */
    MEM8(ecx + 0x4) = (uint8_t)(1); /* 0x0053C7BA: mov byte ptr [ecx + 4], 1 */
L_0053C7BE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053C7BE: mov dword ptr [ebp - 4], 0xffffffff */
    esi = MEM32(edi); /* 0x0053C7C5: mov esi, dword ptr [edi] */
    eax = MEM32(esi + 0xC); /* 0x0053C7C7: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0053C7CA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053C7CB: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053C7D9; /* 0x0053C7CE: jbe 0x53c7d9 */
L_0053C7D0:
    PUSH32(esp, 1); /* 0x0053C7D0: push 1 */
    ecx = esi; /* 0x0053C7D2: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0053C7D4: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0053C7D9:
    ecx = MEM32(esi + 0xC); /* 0x0053C7D9: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x1; /* 0x0053C7DC: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x0053C7DF: mov dword ptr [esi + 0xc], eax */
    SET_LO8(eax, 1); /* 0x0053C7E2: mov al, 1 */
    MEM8(ecx) = (uint8_t)(0x5Bu); /* 0x0053C7E4: mov byte ptr [ecx], 0x5b */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053C7E7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053C7EA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053C7F1: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053C7F2: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C7F3: pop esi */
    esp = ebp; /* 0x0053C7F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C7F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C7F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C800u);

L_0053C800:
    PUSH32(esp, ebp); /* 0x0053C800: push ebp */
    ebp = esp; /* 0x0053C801: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C803: push -1 */
    PUSH32(esp, 0x0079C41Cu); /* 0x0053C805: push 0x79c41c */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C80A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C810: push eax */
    PUSH32(esp, ecx); /* 0x0053C811: push ecx */
    PUSH32(esp, esi); /* 0x0053C812: push esi */
    eax = MEM32(0x855000); /* 0x0053C813: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053C818: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C81A: push eax */
    eax = ebp + (-0xC); /* 0x0053C81B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C81E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053C824: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053C826: mov dword ptr [ebp - 0x10], esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053C829: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C82C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    xmm_st(esi, _xmm[0]); /* 0x0053C82E: movdqu xmmword ptr [esi], xmm0 */
    MEM16(esi + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053C832: mov word ptr [esi + 0xe], ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x0053C836: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x10) = eax; /* 0x0053C839: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x0053C83C: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = eax; /* 0x0053C83F: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x0053C842: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x20) = eax; /* 0x0053C845: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = eax; /* 0x0053C848: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x28) = eax; /* 0x0053C84B: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = 0x400u; /* 0x0053C84E: mov dword ptr [esi + 0x2c], 0x400 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053C855: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x30) = eax; /* 0x0053C859: mov dword ptr [esi + 0x30], eax */
    MEM32(esi + 0x34) = eax; /* 0x0053C85C: mov dword ptr [esi + 0x34], eax */
    /* cmp MEM32(esi + 0x10), eax */ /* 0x0053C85F: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053C8AA; /* 0x0053C862: jne 0x53c8aa */
L_0053C864:
    PUSH32(esp, 0x14u); /* 0x0053C864: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053C866: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053C86C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x0053C86F: mov dword ptr [ebp - 0x10], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053C872: mov byte ptr [ebp - 4], 2 */
    /* test eax, eax */ /* 0x0053C876: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C89E; /* 0x0053C878: je 0x53c89e */
L_0053C87A:
    MEM32(eax) = 0; /* 0x0053C87A: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0x00010000u; /* 0x0053C880: mov dword ptr [eax + 4], 0x10000 */
    MEM32(eax + 0x8) = 0; /* 0x0053C887: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x0053C88E: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x0053C895: mov dword ptr [eax + 0x10], 0 */
    goto L_0053C8A0; /* 0x0053C89C: jmp 0x53c8a0 */
L_0053C89E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053C89E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053C8A0:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053C8A0: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x10) = eax; /* 0x0053C8A4: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x0053C8A7: mov dword ptr [esi + 0x14], eax */
L_0053C8AA:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053C8AA: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053C8B1: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053C8B3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053C8B6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053C8BD: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053C8BE: pop esi */
    esp = ebp; /* 0x0053C8BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C8C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053C8C2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053C8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C8D0u);

L_0053C8D0:
    PUSH32(esp, ebp); /* 0x0053C8D0: push ebp */
    ebp = esp; /* 0x0053C8D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C8D3: push -1 */
    PUSH32(esp, 0x0079C450u); /* 0x0053C8D5: push 0x79c450 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C8DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C8E0: push eax */
    PUSH32(esp, ecx); /* 0x0053C8E1: push ecx */
    PUSH32(esp, ebx); /* 0x0053C8E2: push ebx */
    PUSH32(esp, esi); /* 0x0053C8E3: push esi */
    PUSH32(esp, edi); /* 0x0053C8E4: push edi */
    eax = MEM32(0x855000); /* 0x0053C8E5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053C8EA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C8EC: push eax */
    eax = ebp + (-0xC); /* 0x0053C8ED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C8F0: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053C8F6: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x0053C8F8: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0053C8FB: mov dword ptr [ebp - 4], 1 */
    esi = MEM32(edi + 0x14); /* 0x0053C902: mov esi, dword ptr [edi + 0x14] */
    ebx = MEM32(0x7CC694); /* 0x0053C905: mov ebx, dword ptr [0x7cc694] */
    /* test esi, esi */ /* 0x0053C90B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053C921; /* 0x0053C90D: je 0x53c921 */
L_0053C90F:
    ecx = esi; /* 0x0053C90F: mov ecx, esi */
    RECOMP_CALL(sub_0053D5C0); /* 0x0053C911: call 0x53d5c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x0053C916: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(ebx); /* 0x0053C919: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0053C91B: push esi */
    RECOMP_ICALL(ebx); /* 0x0053C91C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C91E: add esp, 8 */
    _flag_k = FK_ADD;
L_0053C921:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053C921: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x0053C925: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053C928: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x0053C92E: push dword ptr [edi + 0x1c] */
    RECOMP_ICALL(ebx); /* 0x0053C931: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053C933: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053C936: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053C93D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053C940: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053C947: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053C948: pop edi */
    esi = POP32_VAL(esp); /* 0x0053C949: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053C94A: pop ebx */
    esp = ebp; /* 0x0053C94B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053C94D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053C94E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053C950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053C950u);

L_0053C950:
    PUSH32(esp, ebp); /* 0x0053C950: push ebp */
    ebp = esp; /* 0x0053C951: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053C953: push -1 */
    PUSH32(esp, 0x0079C4ADu); /* 0x0053C955: push 0x79c4ad */
    eax = MEM32(FS_BASE + (0)); /* 0x0053C95A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053C960: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053C961: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0053C964: push esi */
    PUSH32(esp, edi); /* 0x0053C965: push edi */
    eax = MEM32(0x855000); /* 0x0053C966: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053C96B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053C96D: push eax */
    eax = ebp + (-0xC); /* 0x0053C96E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053C971: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053C977: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0053C979: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = 0; /* 0x0053C97C: mov dword ptr [ebp - 0x10], 0 */
    ecx = esi + 0x60; /* 0x0053C983: lea ecx, [esi + 0x60] */
    MEM32(esi) = 0x007ED910u; /* 0x0053C986: mov dword ptr [esi], 0x7ed910 */
    RECOMP_ICALL(MEM32(0x7CC428)); /* 0x0053C98C: call dword ptr [0x7cc428] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053C992: mov dword ptr [ebp - 4], 0 */
    edi = esi + 0x4; /* 0x0053C999: lea edi, [esi + 4] */
    PUSH32(esp, 0); /* 0x0053C99C: push 0 */
    PUSH32(esp, 0); /* 0x0053C99E: push 0 */
    PUSH32(esp, edi); /* 0x0053C9A0: push edi */
    ecx = esi; /* 0x0053C9A1: mov ecx, esi */
    MEM32(ebp + (-0x10)) = 1; /* 0x0053C9A3: mov dword ptr [ebp - 0x10], 1 */
    RECOMP_ICALL(MEM32(0x7CC318)); /* 0x0053C9AA: call dword ptr [0x7cc318] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0053C9B0: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x0053C9B7: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x0053C9B9: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(eax + 0x4); /* 0x0053C9BC: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x007EDD1Cu; /* 0x0053C9BF: mov dword ptr [esi + eax], 0x7edd1c */
    eax = MEM32(esi); /* 0x0053C9C6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x0053C9C8: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x60); /* 0x0053C9CB: lea eax, [ecx - 0x60] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x0053C9CE: mov dword ptr [ecx + esi - 4], eax */
    ecx = edi; /* 0x0053C9D2: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x7CC420)); /* 0x0053C9D4: call dword ptr [0x7cc420] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053C9DA: mov byte ptr [ebp - 4], 2 */
    ecx = edi; /* 0x0053C9DE: mov ecx, edi */
    MEM32(edi) = 0x007EE9C4u; /* 0x0053C9E0: mov dword ptr [edi], 0x7ee9c4 */
    MEM8(edi + 0x4C) = (uint8_t)(0); /* 0x0053C9E6: mov byte ptr [edi + 0x4c], 0 */
    MEM8(edi + 0x45) = (uint8_t)(0); /* 0x0053C9EA: mov byte ptr [edi + 0x45], 0 */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053C9EE: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927B74); /* 0x0053C9F4: mov eax, dword ptr [0x927b74] */
    MEM32(edi + 0x50) = 0; /* 0x0053C9F9: mov dword ptr [edi + 0x50], 0 */
    MEM32(edi + 0x48) = eax; /* 0x0053CA00: mov dword ptr [edi + 0x48], eax */
    MEM32(edi + 0x40) = 0; /* 0x0053CA03: mov dword ptr [edi + 0x40], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0053CA0A: mov byte ptr [ebp - 4], 3 */
    ecx = MEM32(ebp + 0x8); /* 0x0053CA0E: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x0053CA11: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053CA19; /* 0x0053CA15: jb 0x53ca19 */
L_0053CA17:
    ecx = MEM32(ecx); /* 0x0053CA17: mov ecx, dword ptr [ecx] */
L_0053CA19:
    eax = MEM32(ebp + 0xC); /* 0x0053CA19: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x0053CA1C: push ecx */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x0053CA1D: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CA20: push eax */
    PUSH32(esp, ecx); /* 0x0053CA21: push ecx */
    ecx = edi; /* 0x0053CA22: mov ecx, edi */
    RECOMP_CALL(sub_0053CEE0); /* 0x0053CA24: call 0x53cee0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0053CA29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053CA3D; /* 0x0053CA2B: jne 0x53ca3d */
L_0053CA2D:
    PUSH32(esp, eax); /* 0x0053CA2D: push eax */
    eax = MEM32(esi); /* 0x0053CA2E: mov eax, dword ptr [esi] */
    PUSH32(esp, 2); /* 0x0053CA30: push 2 */
    ecx = MEM32(eax + 0x4); /* 0x0053CA32: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x0053CA35: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC314)); /* 0x0053CA37: call dword ptr [0x7cc314] */
    RECOMP_FLAGS_IN();
L_0053CA3D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CA3D: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053CA44: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CA46: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CA49: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CA50: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CA51: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CA52: pop esi */
    esp = ebp; /* 0x0053CA53: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CA55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0053CA56: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0053CA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CA60u);

L_0053CA60:
    MEM32(0x927B7C) = 0; /* 0x0053CA60: mov dword ptr [0x927b7c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CA6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CA70u);

L_0053CA70:
    PUSH32(esp, ebp); /* 0x0053CA70: push ebp */
    ebp = esp; /* 0x0053CA71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CA73: push -1 */
    PUSH32(esp, 0x0079C4D0u); /* 0x0053CA75: push 0x79c4d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CA7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CA80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053CA81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053CA84: push ebx */
    PUSH32(esp, esi); /* 0x0053CA85: push esi */
    PUSH32(esp, edi); /* 0x0053CA86: push edi */
    eax = MEM32(0x855000); /* 0x0053CA87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CA8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CA8E: push eax */
    eax = ebp + (-0xC); /* 0x0053CA8F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CA92: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053CA98: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0053CA9B: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x0053CA9D: mov dword ptr [ebp - 0x14], ebx */
    esi = MEM32(ebx + 0x4); /* 0x0053CAA0: mov esi, dword ptr [ebx + 4] */
    edx = esi; /* 0x0053CAA3: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx); /* 0x0053CAA5: sub edx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053CAA7: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0053CAAC: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053CAAE: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    ecx = edx; /* 0x0053CAB1: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x0053CAB3: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x0053CAB3: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x0053CAB6: add ecx, edx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x0053CAB8: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, edi */ /* 0x0053CABB: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053CAE0; /* 0x0053CABD: jbe 0x53cae0 */
L_0053CABF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x0053CABF: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)edi * (int32_t)0x2630u); /* 0x0053CAC1: imul eax, edi, 0x2630 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0053CAC7: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x0053CAC9: mov dword ptr [ebx + 4], eax */
L_0053CACC:
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CACC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CACF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CAD6: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CAD7: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CAD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053CAD9: pop ebx */
    esp = ebp; /* 0x0053CADA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CADC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053CADD: ret 4 */
L_0053CAE0:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_0053CACC; /* 0x0053CAE0: jae 0x53cacc */
L_0053CAE2:
    eax = edi; /* 0x0053CAE2: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0053CAE4: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x0053CAE6: push eax */
    ecx = ebx; /* 0x0053CAE7: mov ecx, ebx */
    RECOMP_CALL(sub_0053D310); /* 0x0053CAE9: call 0x53d310 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053CAEE: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebx + 0x4); /* 0x0053CAF5: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x0053CAF8: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053CAFA: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0053CAFF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053CB01: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    eax = edx; /* 0x0053CB04: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0053CB06: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0053CB06: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053CB09: add eax, edx */
    _flag_k = FK_ADD;
    edx = edi; /* 0x0053CB0B: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x0053CB0D: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053CB0F: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053CB12: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x4); /* 0x0053CB15: mov ecx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_0053EB10); /* 0x0053CB18: call 0x53eb10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053CB1D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CB20: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx + 0x4); /* 0x0053CB27: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x0053CB2A: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053CB2C: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0053CB31: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053CB33: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    eax = edx; /* 0x0053CB36: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0053CB38: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0053CB38: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053CB3B: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0053CB3D: sub edi, eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)edi * (int32_t)0x2630u); /* 0x0053CB3F: imul eax, edi, 0x2630 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + eax; /* 0x0053CB45: add dword ptr [ebx + 4], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CB48: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CB4B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CB52: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CB53: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CB54: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053CB55: pop ebx */
    esp = ebp; /* 0x0053CB56: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CB58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053CB59: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053CB5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CB5Cu);

L_0053CB5C:
    ecx = MEM32(ebp + (-0x14)); /* 0x0053CB5C: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x0053CB5F: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0053CB64: push 0 */
    PUSH32(esp, 0); /* 0x0053CB66: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053CB68: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053CB6Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053CB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CB70u);

L_0053CB70:
    PUSH32(esp, ebp); /* 0x0053CB70: push ebp */
    ebp = esp; /* 0x0053CB71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CB73: push -1 */
    PUSH32(esp, 0x00789280u); /* 0x0053CB75: push 0x789280 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CB7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CB80: push eax */
    PUSH32(esp, ecx); /* 0x0053CB81: push ecx */
    PUSH32(esp, esi); /* 0x0053CB82: push esi */
    eax = MEM32(0x855000); /* 0x0053CB83: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CB88: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CB8A: push eax */
    eax = ebp + (-0xC); /* 0x0053CB8B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CB8E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053CB94: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053CB96: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053CB99: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_0053CBD0); /* 0x0053CBA0: call 0x53cbd0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CBA5: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0053CBAC: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053CBAE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CBB4: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CBB7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CBBA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CBC1: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053CBC2: pop esi */
    esp = ebp; /* 0x0053CBC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CBC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CBC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CBD0u);

L_0053CBD0:
    PUSH32(esp, ebp); /* 0x0053CBD0: push ebp */
    ebp = esp; /* 0x0053CBD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CBD3: push -1 */
    PUSH32(esp, 0x0079C4FBu); /* 0x0053CBD5: push 0x79c4fb */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CBDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CBE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053CBE1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053CBE4: push ebx */
    PUSH32(esp, esi); /* 0x0053CBE5: push esi */
    PUSH32(esp, edi); /* 0x0053CBE6: push edi */
    eax = MEM32(0x855000); /* 0x0053CBE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CBEC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CBEE: push eax */
    eax = ebp + (-0xC); /* 0x0053CBEF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CBF2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0053CBF8: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(ecx); /* 0x0053CBFB: mov eax, dword ptr [ecx] */
    edi = MEM32(eax); /* 0x0053CBFD: mov edi, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0053CBFF: mov dword ptr [eax], eax */
    eax = MEM32(ecx); /* 0x0053CC01: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x4) = eax; /* 0x0053CC03: mov dword ptr [eax + 4], eax */
    MEM32(ecx + 0x4) = 0; /* 0x0053CC06: mov dword ptr [ecx + 4], 0 */
    /* cmp edi, MEM32(ecx) */ /* 0x0053CC0D: cmp edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053CC5E; /* 0x0053CC0F: je 0x53cc5e */
L_0053CC11:
    eax = MEM32(0x7CC694); /* 0x0053CC11: mov eax, dword ptr [0x7cc694] */
L_0053CC16:
    ebx = MEM32(edi); /* 0x0053CC16: mov ebx, dword ptr [edi] */
    esi = edi + 0x8; /* 0x0053CC18: lea esi, [edi + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x0053CC1B: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CC1E: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x0053CC25: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053CC38; /* 0x0053CC29: jb 0x53cc38 */
L_0053CC2B:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x0053CC2B: push dword ptr [esi + 8] */
    RECOMP_ICALL(eax); /* 0x0053CC2E: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x7CC694); /* 0x0053CC30: mov eax, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CC35: add esp, 4 */
    _flag_k = FK_ADD;
L_0053CC38:
    MEM32(esi + 0x1C) = 0xFu; /* 0x0053CC38: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x0053CC3F: mov dword ptr [esi + 0x18], 0 */
    PUSH32(esp, edi); /* 0x0053CC46: push edi */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x0053CC47: mov byte ptr [esi + 8], 0 */
    RECOMP_ICALL(eax); /* 0x0053CC4B: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x0053CC4D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CC50: add esp, 4 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x0053CC53: mov edi, ebx */
    /* cmp ebx, MEM32(eax) */ /* 0x0053CC55: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x7CC694); /* 0x0053CC57: mov eax, dword ptr [0x7cc694] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053CC16; /* 0x0053CC5C: jne 0x53cc16 */
L_0053CC5E:
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CC5E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CC61: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CC68: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CC69: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CC6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053CC6B: pop ebx */
    esp = ebp; /* 0x0053CC6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CC6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CC6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CC70u);

L_0053CC70:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x0053CC70: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007EDA74u; /* 0x0053CC74: mov dword ptr [ecx], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CC84; /* 0x0053CC7A: je 0x53cc84 */
L_0053CC7C:
    PUSH32(esp, ecx); /* 0x0053CC7C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x0053CC7D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0053CC83: pop ecx */
L_0053CC84:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CC84: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CC90u);

L_0053CC90:
    eax = 0x18u; /* 0x0053CC90: mov eax, 0x18 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CC95: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CCA0u);

L_0053CCA0:
    eax = 4; /* 0x0053CCA0: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CCA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CCB0u);

L_0053CCB0:
    eax = 8; /* 0x0053CCB0: mov eax, 8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CCB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CCC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CCC0u);

L_0053CCC0:
    PUSH32(esp, ebp); /* 0x0053CCC0: push ebp */
    ebp = esp; /* 0x0053CCC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CCC3: push -1 */
    PUSH32(esp, 0x0079C530u); /* 0x0053CCC5: push 0x79c530 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CCCA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CCD0: push eax */
    PUSH32(esp, ecx); /* 0x0053CCD1: push ecx */
    PUSH32(esp, esi); /* 0x0053CCD2: push esi */
    eax = MEM32(0x855000); /* 0x0053CCD3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CCD8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CCDA: push eax */
    eax = ebp + (-0xC); /* 0x0053CCDB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CCDE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053CCE4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053CCE6: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, 0); /* 0x0053CCE9: push 0 */
    PUSH32(esp, 0); /* 0x0053CCEB: push 0 */
    MEM32(esi) = 0; /* 0x0053CCED: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x0053CCF3: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_0053D6C0); /* 0x0053CCFA: call 0x53d6c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x0053CCFF: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CD01: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053CD08: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CD0A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CD0D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CD14: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053CD15: pop esi */
    esp = ebp; /* 0x0053CD16: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CD18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CD19: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CD20u);

L_0053CD20:
    PUSH32(esp, ebp); /* 0x0053CD20: push ebp */
    ebp = esp; /* 0x0053CD21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CD23: push -1 */
    PUSH32(esp, 0x00789280u); /* 0x0053CD25: push 0x789280 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CD2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CD30: push eax */
    PUSH32(esp, ecx); /* 0x0053CD31: push ecx */
    PUSH32(esp, esi); /* 0x0053CD32: push esi */
    eax = MEM32(0x855000); /* 0x0053CD33: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CD38: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CD3A: push eax */
    eax = ebp + (-0xC); /* 0x0053CD3B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CD3E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053CD44: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053CD46: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053CD49: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_0053CDD0); /* 0x0053CD50: call 0x53cdd0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CD55: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0053CD5C: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053CD5E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CD64: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CD67: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CD6A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CD71: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053CD72: pop esi */
    esp = ebp; /* 0x0053CD73: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CD75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CD76: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CD80u);

L_0053CD80:
    PUSH32(esp, ebp); /* 0x0053CD80: push ebp */
    ebp = esp; /* 0x0053CD81: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0053CD83: push esi */
    PUSH32(esp, edi); /* 0x0053CD84: push edi */
    edi = MEM32(0x8F8CB8); /* 0x0053CD85: mov edi, dword ptr [0x8f8cb8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053CD8B: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x0053CD8E: push dword ptr [edi + 4] */
    PUSH32(esp, edi); /* 0x0053CD91: push edi */
    RECOMP_CALL(sub_0053ECB0); /* 0x0053CD92: call 0x53ecb0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x8F8CBC); /* 0x0053CD97: mov edx, dword ptr [0x8f8cbc] */
    ecx = 0x01414140u; /* 0x0053CD9D: mov ecx, 0x1414140 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x0053CDA2: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x0053CDA4: mov esi, eax */
    /* cmp ecx, 1 */ /* 0x0053CDA6: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053CDB6; /* 0x0053CDA9: jae 0x53cdb6 */
L_0053CDAB:
    PUSH32(esp, 0x007E1400u); /* 0x0053CDAB: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0053CDB0: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0053CDB6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0053CDB6: inc edx */
    _flag_k = FK_INC;
    MEM32(0x8F8CBC) = edx; /* 0x0053CDB7: mov dword ptr [0x8f8cbc], edx */
    MEM32(edi + 0x4) = esi; /* 0x0053CDBD: mov dword ptr [edi + 4], esi */
    eax = MEM32(esi + 0x4); /* 0x0053CDC0: mov eax, dword ptr [esi + 4] */
    edi = POP32_VAL(esp); /* 0x0053CDC3: pop edi */
    MEM32(eax) = esi; /* 0x0053CDC4: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x0053CDC6: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053CDC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053CDC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053CDD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CDD0u);

L_0053CDD0:
    PUSH32(esp, ebx); /* 0x0053CDD0: push ebx */
    ebx = ecx; /* 0x0053CDD1: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x0053CDD3: push esi */
    eax = MEM32(ebx); /* 0x0053CDD4: mov eax, dword ptr [ebx] */
    esi = MEM32(eax); /* 0x0053CDD6: mov esi, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0053CDD8: mov dword ptr [eax], eax */
    eax = MEM32(ebx); /* 0x0053CDDA: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x4) = eax; /* 0x0053CDDC: mov dword ptr [eax + 4], eax */
    MEM32(ebx + 0x4) = 0; /* 0x0053CDDF: mov dword ptr [ebx + 4], 0 */
    /* cmp esi, MEM32(ebx) */ /* 0x0053CDE6: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053CE0B; /* 0x0053CDE8: je 0x53ce0b */
L_0053CDEA:
    PUSH32(esp, edi); /* 0x0053CDEA: push edi */
    goto L_0053CDF0; /* 0x0053CDEB: jmp 0x53cdf0 */
L_0053CDF0:
    edi = MEM32(esi); /* 0x0053CDF0: mov edi, dword ptr [esi] */
    ecx = esi + 0x8; /* 0x0053CDF2: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_005350A0); /* 0x0053CDF5: call 0x5350a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0053CDFA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053CDFB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CE01: add esp, 4 */
    _flag_k = FK_ADD;
    esi = edi; /* 0x0053CE04: mov esi, edi */
    /* cmp edi, MEM32(ebx) */ /* 0x0053CE06: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053CDF0; /* 0x0053CE08: jne 0x53cdf0 */
L_0053CE0A:
    edi = POP32_VAL(esp); /* 0x0053CE0A: pop edi */
L_0053CE0B:
    esi = POP32_VAL(esp); /* 0x0053CE0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053CE0C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053CE0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053CE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CE10u);

L_0053CE10:
    PUSH32(esp, ebp); /* 0x0053CE10: push ebp */
    ebp = esp; /* 0x0053CE11: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0053CE13: push esi */
    esi = ecx; /* 0x0053CE14: mov esi, ecx */
    RECOMP_CALL(sub_0053BD90); /* 0x0053CE16: call 0x53bd90 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0053CE1B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CE2B; /* 0x0053CE1F: je 0x53ce2b */
L_0053CE21:
    PUSH32(esp, esi); /* 0x0053CE21: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053CE22: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053CE28: add esp, 4 */
    _flag_k = FK_ADD;
L_0053CE2B:
    eax = esi; /* 0x0053CE2B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0053CE2D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053CE2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053CE2F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053CEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CEE0u);

L_0053CEE0:
    PUSH32(esp, ebp); /* 0x0053CEE0: push ebp */
    ebp = esp; /* 0x0053CEE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053CEE3: push -1 */
    PUSH32(esp, 0x0079C598u); /* 0x0053CEE5: push 0x79c598 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053CEEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053CEF0: push eax */
    PUSH32(esp, esi); /* 0x0053CEF1: push esi */
    PUSH32(esp, edi); /* 0x0053CEF2: push edi */
    eax = MEM32(0x855000); /* 0x0053CEF3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053CEF8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053CEFA: push eax */
    eax = ebp + (-0xC); /* 0x0053CEFB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053CEFE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053CF04: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x0053CF06: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053CFD5; /* 0x0053CF0A: jne 0x53cfd5 */
L_0053CF10:
    PUSH32(esp, 0x40u); /* 0x0053CF10: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053CF12: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053CF15: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC34C)); /* 0x0053CF18: call dword ptr [0x7cc34c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053CF1E: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053CF20: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0053CF23: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CFD5; /* 0x0053CF25: je 0x53cfd5 */
L_0053CF2B:
    ecx = esi; /* 0x0053CF2B: mov ecx, esi */
    MEM8(esi + 0x4C) = (uint8_t)(1); /* 0x0053CF2D: mov byte ptr [esi + 0x4c], 1 */
    MEM8(esi + 0x45) = (uint8_t)(0); /* 0x0053CF31: mov byte ptr [esi + 0x45], 0 */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053CF35: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    eax = edi + 0x4; /* 0x0053CF3B: lea eax, [edi + 4] */
    MEM32(esi + 0x1C) = edi; /* 0x0053CF3E: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0x2C) = eax; /* 0x0053CF41: mov dword ptr [esi + 0x2c], eax */
    ecx = edi + 0x8; /* 0x0053CF44: lea ecx, [edi + 8] */
    MEM32(esi + 0x30) = eax; /* 0x0053CF47: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(0x927B74); /* 0x0053CF4A: mov eax, dword ptr [0x927b74] */
    MEM32(esi + 0x48) = eax; /* 0x0053CF4F: mov dword ptr [esi + 0x48], eax */
    eax = ebp + 0xC; /* 0x0053CF52: lea eax, [ebp + 0xc] */
    MEM32(esi + 0xC) = ecx; /* 0x0053CF55: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = ecx; /* 0x0053CF58: mov dword ptr [esi + 0x10], ecx */
    ecx = esi; /* 0x0053CF5B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0053CF5D: push eax */
    MEM32(esi + 0x20) = edi; /* 0x0053CF5E: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x50) = edi; /* 0x0053CF61: mov dword ptr [esi + 0x50], edi */
    MEM32(esi + 0x40) = 0; /* 0x0053CF64: mov dword ptr [esi + 0x40], 0 */
    RECOMP_ICALL(MEM32(0x7CC334)); /* 0x0053CF6B: call dword ptr [0x7cc334] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053CF71: mov dword ptr [ebp - 4], 0 */
    ecx = eax; /* 0x0053CF78: mov ecx, eax */
    RECOMP_CALL(sub_0053E140); /* 0x0053CF7A: call 0x53e140 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053CF7F: mov edi, eax */
    ecx = edi; /* 0x0053CF81: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x7CC310)); /* 0x0053CF83: call dword ptr [0x7cc310] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053CF89: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CF96; /* 0x0053CF8B: je 0x53cf96 */
L_0053CF8D:
    MEM32(esi + 0x40) = 0; /* 0x0053CF8D: mov dword ptr [esi + 0x40], 0 */
    goto L_0053CFA1; /* 0x0053CF94: jmp 0x53cfa1 */
L_0053CF96:
    ecx = esi; /* 0x0053CF96: mov ecx, esi */
    MEM32(esi + 0x40) = edi; /* 0x0053CF98: mov dword ptr [esi + 0x40], edi */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053CF9B: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
L_0053CFA1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053CFA1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + 0xC); /* 0x0053CFA8: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x0053CFAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CFC0; /* 0x0053CFAD: je 0x53cfc0 */
L_0053CFAF:
    eax = MEM32(ecx); /* 0x0053CFAF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0053CFB1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0053CFB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053CFC0; /* 0x0053CFB6: je 0x53cfc0 */
L_0053CFB8:
    edx = MEM32(eax); /* 0x0053CFB8: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x0053CFBA: mov ecx, eax */
    PUSH32(esp, 1); /* 0x0053CFBC: push 1 */
    RECOMP_ICALL(MEM32(edx)); /* 0x0053CFBE: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_0053CFC0:
    eax = esi; /* 0x0053CFC0: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CFC2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CFC5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CFCC: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CFCD: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CFCE: pop esi */
    esp = ebp; /* 0x0053CFCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CFD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053CFD2: ret 0xc */
L_0053CFD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053CFD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x0053CFD7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053CFDA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053CFE1: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053CFE2: pop edi */
    esi = POP32_VAL(esp); /* 0x0053CFE3: pop esi */
    esp = ebp; /* 0x0053CFE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053CFE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053CFE7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053CFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053CFF0u);

L_0053CFF0:
    PUSH32(esp, esi); /* 0x0053CFF0: push esi */
    esi = ecx; /* 0x0053CFF1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053CFF3: push edi */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x0053CFF4: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053CFFE; /* 0x0053CFF8: jne 0x53cffe */
L_0053CFFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0053CFFA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0053D01F; /* 0x0053CFFC: jmp 0x53d01f */
L_0053CFFE:
    RECOMP_CALL(sub_0053D050); /* 0x0053CFFE: call 0x53d050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x0053D003: push dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053D006: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x0053D008: mov edi, esi */
    /* test LO8(eax), LO8(eax) */ /* 0x0053D00A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edi = ecx; } /* 0x0053D00C: cmove edi, ecx */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x0053D00F: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053D015: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D017: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053D01A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ecx; } /* 0x0053D01C: cmovne edi, ecx */
L_0053D01F:
    ecx = esi; /* 0x0053D01F: mov ecx, esi */
    MEM8(esi + 0x4C) = (uint8_t)(0); /* 0x0053D021: mov byte ptr [esi + 0x4c], 0 */
    MEM8(esi + 0x45) = (uint8_t)(0); /* 0x0053D025: mov byte ptr [esi + 0x45], 0 */
    RECOMP_ICALL(MEM32(0x7CC338)); /* 0x0053D029: call dword ptr [0x7cc338] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B74); /* 0x0053D02F: mov ecx, dword ptr [0x927b74] */
    eax = edi; /* 0x0053D035: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053D037: pop edi */
    MEM32(esi + 0x50) = 0; /* 0x0053D038: mov dword ptr [esi + 0x50], 0 */
    MEM32(esi + 0x48) = ecx; /* 0x0053D03F: mov dword ptr [esi + 0x48], ecx */
    MEM32(esi + 0x40) = 0; /* 0x0053D042: mov dword ptr [esi + 0x40], 0 */
    esi = POP32_VAL(esp); /* 0x0053D049: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D04A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053D050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D050u);

L_0053D050:
    PUSH32(esp, ebp); /* 0x0053D050: push ebp */
    ebp = esp; /* 0x0053D051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053D053: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053D056: push -1 */
    PUSH32(esp, 0x0078FB58u); /* 0x0053D058: push 0x78fb58 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053D05D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053D063: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x0053D064: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053D067: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0053D06C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x0053D06E: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, ebx); /* 0x0053D072: push ebx */
    PUSH32(esp, esi); /* 0x0053D073: push esi */
    PUSH32(esp, edi); /* 0x0053D074: push edi */
    eax = MEM32(0x855000); /* 0x0053D075: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0053D07A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053D07C: push eax */
    eax = esp + 0x38; /* 0x0053D07D: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053D081: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0053D087: mov ebx, ecx */
    MEM32(esp + 0x10) = ebx; /* 0x0053D089: mov dword ptr [esp + 0x10], ebx */
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x0053D08D: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D1F1; /* 0x0053D091: je 0x53d1f1 */
L_0053D097:
    /* cmp MEM8(ebx + 0x45), 0 */ /* 0x0053D097: cmp byte ptr [ebx + 0x45], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x45)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D1F1; /* 0x0053D09B: je 0x53d1f1 */
L_0053D0A1:
    eax = MEM32(ebx); /* 0x0053D0A1: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053D0A3: push -1 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x0053D0A5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053D0A8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D0B4; /* 0x0053D0AB: jne 0x53d0b4 */
L_0053D0AD:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0053D0AD: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_0053D1F3; /* 0x0053D0AF: jmp 0x53d1f3 */
L_0053D0B4:
    ecx = 0xFu; /* 0x0053D0B4: mov ecx, 0xf */
    MEM32(esp + 0x2C) = 0; /* 0x0053D0B9: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x2C) = ecx; /* 0x0053D0C1: mov dword ptr [esp + 0x2c], ecx */
    eax = esp + 0x18; /* 0x0053D0C5: lea eax, [esp + 0x18] */
    MEM8(esp + 0x18) = (uint8_t)(0); /* 0x0053D0C9: mov byte ptr [esp + 0x18], 0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053D0CE: xorps xmm0, xmm0 */
    /* cmp ecx, 0x10u */ /* 0x0053D0D1: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM64(esp + 0x18) = _xmm[0].u64[0]; /* 0x0053D0D4: movq qword ptr [esp + 0x18], xmm0 */
    MEM32(esp + 0x28) = 0; /* 0x0053D0DA: mov dword ptr [esp + 0x28], 0 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x18); } /* 0x0053D0E2: cmovae eax, dword ptr [esp + 0x18] */
    MEM32(esp + 0x28) = 0; /* 0x0053D0E7: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x28) = 8; /* 0x0053D0EF: mov dword ptr [esp + 0x28], 8 */
    MEM8(eax + 0x8) = (uint8_t)(0); /* 0x0053D0F7: mov byte ptr [eax + 8], 0 */
    MEM32(esp + 0x40) = 0; /* 0x0053D0FB: mov dword ptr [esp + 0x40], 0 */
L_0053D103:
    edi = MEM32(esp + 0x18); /* 0x0053D103: mov edi, dword ptr [esp + 0x18] */
    esi = MEM32(esp + 0x2C); /* 0x0053D107: mov esi, dword ptr [esp + 0x2c] */
    goto L_0053D110; /* 0x0053D10B: jmp 0x53d110 */
L_0053D110:
    /* cmp esi, 0x10u */ /* 0x0053D110: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x14; /* 0x0053D113: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x0053D117: push eax */
    eax = MEM32(esp + 0x2C); /* 0x0053D118: mov eax, dword ptr [esp + 0x2c] */
    edx = esp + 0x1C; /* 0x0053D11C: lea edx, [esp + 0x1c] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = edi; } /* 0x0053D120: cmovae edx, edi */
    ecx = esp + 0x1C; /* 0x0053D123: lea ecx, [esp + 0x1c] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = edi; } /* 0x0053D127: cmovae ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D12A: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0053D12C: push eax */
    PUSH32(esp, ecx); /* 0x0053D12D: push ecx */
    ecx = MEM32(ebx + 0x40); /* 0x0053D12E: mov ecx, dword ptr [ebx + 0x40] */
    eax = ebx + 0x48; /* 0x0053D131: lea eax, [ebx + 0x48] */
    PUSH32(esp, eax); /* 0x0053D134: push eax */
    RECOMP_ICALL(MEM32(0x7CC330)); /* 0x0053D135: call dword ptr [0x7cc330] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x0053D13B: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053D14C; /* 0x0053D13E: je 0x53d14c */
L_0053D140:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0053D140: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053D150; /* 0x0053D141: je 0x53d150 */
L_0053D143:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x0053D143: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053D1BA; /* 0x0053D146: je 0x53d1ba */
L_0053D148:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x0053D148: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_0053D1BC; /* 0x0053D14A: jmp 0x53d1bc */
L_0053D14C:
    MEM8(ebx + 0x45) = (uint8_t)(0); /* 0x0053D14C: mov byte ptr [ebx + 0x45], 0 */
L_0053D150:
    esi = MEM32(esp + 0x2C); /* 0x0053D150: mov esi, dword ptr [esp + 0x2c] */
    eax = esp + 0x18; /* 0x0053D154: lea eax, [esp + 0x18] */
    edi = MEM32(esp + 0x18); /* 0x0053D158: mov edi, dword ptr [esp + 0x18] */
    /* cmp esi, 0x10u */ /* 0x0053D15C: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esp + 0x14); /* 0x0053D15F: mov ebx, dword ptr [esp + 0x14] */
    if (CMP_AE(_flag_a, _flag_b)) { eax = edi; } /* 0x0053D163: cmovae eax, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0053D166: sub ebx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053D194; /* 0x0053D168: je 0x53d194 */
L_0053D16A:
    ecx = MEM32(esp + 0x10); /* 0x0053D16A: mov ecx, dword ptr [esp + 0x10] */
    eax = esp + 0x18; /* 0x0053D16E: lea eax, [esp + 0x18] */
    /* cmp esi, 0x10u */ /* 0x0053D172: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { eax = edi; } /* 0x0053D175: cmovae eax, edi */
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x0053D178: push dword ptr [ecx + 0x50] */
    PUSH32(esp, ebx); /* 0x0053D17B: push ebx */
    PUSH32(esp, 1); /* 0x0053D17C: push 1 */
    PUSH32(esp, eax); /* 0x0053D17E: push eax */
    RECOMP_ICALL(MEM32(0x7CC48C)); /* 0x0053D17F: call dword ptr [0x7cc48c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053D185: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x0053D188: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D148; /* 0x0053D18A: jne 0x53d148 */
L_0053D18C:
    esi = MEM32(esp + 0x2C); /* 0x0053D18C: mov esi, dword ptr [esp + 0x2c] */
    edi = MEM32(esp + 0x18); /* 0x0053D190: mov edi, dword ptr [esp + 0x18] */
L_0053D194:
    eax = MEM32(esp + 0x10); /* 0x0053D194: mov eax, dword ptr [esp + 0x10] */
    /* cmp MEM8(eax + 0x45), 0 */ /* 0x0053D198: cmp byte ptr [eax + 0x45], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x45)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D1BA; /* 0x0053D19C: je 0x53d1ba */
L_0053D19E:
    /* test ebx, ebx */ /* 0x0053D19E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x0053D1A0: mov ebx, eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D110; /* 0x0053D1A2: jne 0x53d110 */
L_0053D1A8:
    PUSH32(esp, 0); /* 0x0053D1A8: push 0 */
    PUSH32(esp, 8); /* 0x0053D1AA: push 8 */
    ecx = esp + 0x20; /* 0x0053D1AC: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_00429FC0); /* 0x0053D1B0: call 0x429fc0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_0053D103; /* 0x0053D1B5: jmp 0x53d103 */
L_0053D1BA:
    SET_LO8(ebx, 1); /* 0x0053D1BA: mov bl, 1 */
L_0053D1BC:
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x0053D1BC: mov dword ptr [esp + 0x40], 0xffffffff */
    /* cmp MEM32(esp + 0x2C), 0x10u */ /* 0x0053D1C4: cmp dword ptr [esp + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053D1D8; /* 0x0053D1C9: jb 0x53d1d8 */
L_0053D1CB:
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x0053D1CB: push dword ptr [esp + 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053D1CF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D1D5: add esp, 4 */
    _flag_k = FK_ADD;
L_0053D1D8:
    MEM32(esp + 0x2C) = 0xFu; /* 0x0053D1D8: mov dword ptr [esp + 0x2c], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x0053D1E0: mov al, bl */
    MEM32(esp + 0x28) = 0; /* 0x0053D1E2: mov dword ptr [esp + 0x28], 0 */
    MEM8(esp + 0x18) = (uint8_t)(0); /* 0x0053D1EA: mov byte ptr [esp + 0x18], 0 */
    goto L_0053D1F3; /* 0x0053D1EF: jmp 0x53d1f3 */
L_0053D1F1:
    SET_LO8(eax, 1); /* 0x0053D1F1: mov al, 1 */
L_0053D1F3:
    ecx = MEM32(esp + 0x38); /* 0x0053D1F3: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053D1F7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053D1FE: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053D1FF: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D200: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D201: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x0053D202: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0053D206: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0053D208: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053D20D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D20F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D210: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053D220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D220u);

L_0053D220:
    PUSH32(esp, edi); /* 0x0053D220: push edi */
    edi = MEM32(ecx + 0xC); /* 0x0053D221: mov edi, dword ptr [ecx + 0xc] */
    eax = ecx + 0x44; /* 0x0053D224: lea eax, [ecx + 0x44] */
    /* cmp MEM32(edi), eax */ /* 0x0053D227: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D241; /* 0x0053D229: jne 0x53d241 */
L_0053D22B:
    edx = MEM32(ecx + 0x38); /* 0x0053D22B: mov edx, dword ptr [ecx + 0x38] */
    PUSH32(esp, esi); /* 0x0053D22E: push esi */
    esi = MEM32(ecx + 0x3C); /* 0x0053D22F: mov esi, dword ptr [ecx + 0x3c] */
    MEM32(edi) = edx; /* 0x0053D232: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x0053D234: sub esi, edx */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x0053D236: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(eax) = edx; /* 0x0053D239: mov dword ptr [eax], edx */
    eax = MEM32(ecx + 0x2C); /* 0x0053D23B: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(eax) = esi; /* 0x0053D23E: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x0053D240: pop esi */
L_0053D241:
    edi = POP32_VAL(esp); /* 0x0053D241: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D242: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053D250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D250u);

L_0053D250:
    edx = ecx; /* 0x0053D250: mov edx, ecx */
    PUSH32(esp, esi); /* 0x0053D252: push esi */
    PUSH32(esp, edi); /* 0x0053D253: push edi */
    edi = MEM32(edx + 0xC); /* 0x0053D254: mov edi, dword ptr [edx + 0xc] */
    esi = edx + 0x44; /* 0x0053D257: lea esi, [edx + 0x44] */
    eax = MEM32(edi); /* 0x0053D25A: mov eax, dword ptr [edi] */
    /* cmp eax, esi */ /* 0x0053D25C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D270; /* 0x0053D25E: je 0x53d270 */
L_0053D260:
    ecx = MEM32(edx + 0x1C); /* 0x0053D260: mov ecx, dword ptr [edx + 0x1c] */
    MEM32(edx + 0x38) = eax; /* 0x0053D263: mov dword ptr [edx + 0x38], eax */
    eax = MEM32(edx + 0x2C); /* 0x0053D266: mov eax, dword ptr [edx + 0x2c] */
    eax = MEM32(eax); /* 0x0053D269: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x0053D26B: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(edx + 0x3C) = eax; /* 0x0053D26D: mov dword ptr [edx + 0x3c], eax */
L_0053D270:
    MEM32(edi) = esi; /* 0x0053D270: mov dword ptr [edi], esi */
    ecx = edx; /* 0x0053D272: mov ecx, edx */
    eax = MEM32(edx + 0x1C); /* 0x0053D274: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0053D277: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x45u; /* 0x0053D279: add ecx, 0x45 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0053D27C: pop edi */
    MEM32(eax) = esi; /* 0x0053D27D: mov dword ptr [eax], esi */
    eax = MEM32(edx + 0x2C); /* 0x0053D27F: mov eax, dword ptr [edx + 0x2c] */
    esi = POP32_VAL(esp); /* 0x0053D282: pop esi */
    MEM32(eax) = ecx; /* 0x0053D283: mov dword ptr [eax], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D285: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053D290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D290u);

L_0053D290:
    eax = MEM32(ecx + 0x10); /* 0x0053D290: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0xC); /* 0x0053D293: sub eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053D304; /* 0x0053D296: je 0x53d304 */
L_0053D298:
    PUSH32(esp, ebx); /* 0x0053D298: push ebx */
    PUSH32(esp, esi); /* 0x0053D299: push esi */
    esi = MEM32(ecx + 0x10); /* 0x0053D29A: mov esi, dword ptr [ecx + 0x10] */
    ebx = MEM32(esi + (-0x8)); /* 0x0053D29D: mov ebx, dword ptr [esi - 8] */
    /* test ebx, ebx */ /* 0x0053D2A0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D2FC; /* 0x0053D2A2: je 0x53d2fc */
L_0053D2A4:
    /* cmp MEM8(esi + (-0x4)), 0 */ /* 0x0053D2A4: cmp byte ptr [esi - 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x0053D2A8: push edi */
    edi = MEM32(ecx); /* 0x0053D2A9: mov edi, dword ptr [ecx] */
    eax = MEM32(edi + 0xC); /* 0x0053D2AB: mov eax, dword ptr [edi + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D2D4; /* 0x0053D2AE: je 0x53d2d4 */
L_0053D2B0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0053D2B0: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x0053D2B1: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053D2BF; /* 0x0053D2B4: jbe 0x53d2bf */
L_0053D2B6:
    PUSH32(esp, 1); /* 0x0053D2B6: push 1 */
    ecx = edi; /* 0x0053D2B8: mov ecx, edi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0053D2BA: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0053D2BF:
    ecx = MEM32(edi + 0xC); /* 0x0053D2BF: mov ecx, dword ptr [edi + 0xc] */
    eax = ecx + 0x1; /* 0x0053D2C2: lea eax, [ecx + 1] */
    MEM32(edi + 0xC) = eax; /* 0x0053D2C5: mov dword ptr [edi + 0xc], eax */
    edi = POP32_VAL(esp); /* 0x0053D2C8: pop edi */
    MEM8(ecx) = (uint8_t)(0x2Cu); /* 0x0053D2C9: mov byte ptr [ecx], 0x2c */
    _flag_a = (uint32_t)(MEM32(esi + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(esi + (-0x8)) = MEM32(esi + (-0x8)) + 1; /* 0x0053D2CC: inc dword ptr [esi - 8] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x0053D2CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D2D0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D2D1: ret 4 */
L_0053D2D4:
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x0053D2D4: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (LO8(ebx)) != 0;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx))); /* 0x0053D2D7: neg bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ebx), _sb = LO8(ebx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0053D2D9: sbb bl, bl */
      SET_LO8(ebx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0053D2DB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xEu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xEu); /* 0x0053D2DC: and bl, 0xe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x2Cu); /* 0x0053D2DF: add bl, 0x2c */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x0053D2E2: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053D2F0; /* 0x0053D2E5: jbe 0x53d2f0 */
L_0053D2E7:
    PUSH32(esp, 1); /* 0x0053D2E7: push 1 */
    ecx = edi; /* 0x0053D2E9: mov ecx, edi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0053D2EB: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0053D2F0:
    ecx = MEM32(edi + 0xC); /* 0x0053D2F0: mov ecx, dword ptr [edi + 0xc] */
    eax = ecx + 0x1; /* 0x0053D2F3: lea eax, [ecx + 1] */
    MEM32(edi + 0xC) = eax; /* 0x0053D2F6: mov dword ptr [edi + 0xc], eax */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x0053D2F9: mov byte ptr [ecx], bl */
    edi = POP32_VAL(esp); /* 0x0053D2FB: pop edi */
L_0053D2FC:
    _flag_a = (uint32_t)(MEM32(esi + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(esi + (-0x8)) = MEM32(esi + (-0x8)) + 1; /* 0x0053D2FC: inc dword ptr [esi - 8] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x0053D2FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D300: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D301: ret 4 */
L_0053D304:
    MEM8(ecx + 0x20) = (uint8_t)(1); /* 0x0053D304: mov byte ptr [ecx + 0x20], 1 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D308: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053D310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D310u);

L_0053D310:
    PUSH32(esp, ebp); /* 0x0053D310: push ebp */
    ebp = esp; /* 0x0053D311: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0053D313: push ebx */
    ebx = MEM32(ecx + 0x8); /* 0x0053D314: mov ebx, dword ptr [ecx + 8] */
    eax = 0x6B429E61u; /* 0x0053D317: mov eax, 0x6b429e61 */
    PUSH32(esp, esi); /* 0x0053D31C: push esi */
    esi = MEM32(ecx + 0x4); /* 0x0053D31D: mov esi, dword ptr [ecx + 4] */
    edx = ebx; /* 0x0053D320: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x0053D322: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0053D324: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x0053D326: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0053D327: mov edi, dword ptr [ebp + 8] */
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053D32A: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    eax = edx; /* 0x0053D32D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0053D32F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0053D32F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D332: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x0053D334: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053D3AB; /* 0x0053D336: jae 0x53d3ab */
L_0053D338:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x0053D338: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053D33A: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x0053D33F: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x0006B429u; /* 0x0053D341: mov eax, 0x6b429 */
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053D346: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    esi = edx; /* 0x0053D349: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x0053D34B: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x0053D34B: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x0053D34E: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0053D350: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x0053D352: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053D361; /* 0x0053D354: jae 0x53d361 */
L_0053D356:
    PUSH32(esp, 0x007DFAB0u); /* 0x0053D356: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0053D35B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0053D361:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ecx); /* 0x0053D361: sub ebx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053D363: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0053D368: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x0053D36A: add esi, edi */
    _flag_k = FK_ADD;
    edi = 0x0006B429u; /* 0x0053D36C: mov edi, 0x6b429 */
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053D371: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    eax = edx; /* 0x0053D374: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0053D376: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0053D376: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D379: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x0053D37B: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0053D37D: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0053D37D: shr edx, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x0053D37F: sub edi, edx */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x0053D381: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053D398; /* 0x0053D383: jae 0x53d398 */
L_0053D385:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053D385: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x0053D387: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0053D389: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x0053D38A: cmovb eax, esi */
    esi = POP32_VAL(esp); /* 0x0053D38D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D38E: pop ebx */
    MEM32(ebp + 0x8) = eax; /* 0x0053D38F: mov dword ptr [ebp + 8], eax */
    ebp = POP32_VAL(esp); /* 0x0053D392: pop ebp */
    goto L_0053D4D0; /* 0x0053D393: jmp 0x53d4d0 */
L_0053D398:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D398: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x0053D39A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0053D39C: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x0053D39D: cmovb eax, esi */
    esi = POP32_VAL(esp); /* 0x0053D3A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D3A1: pop ebx */
    MEM32(ebp + 0x8) = eax; /* 0x0053D3A2: mov dword ptr [ebp + 8], eax */
    ebp = POP32_VAL(esp); /* 0x0053D3A5: pop ebp */
    goto L_0053D4D0; /* 0x0053D3A6: jmp 0x53d4d0 */
L_0053D3AB:
    edi = POP32_VAL(esp); /* 0x0053D3AB: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D3AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D3AD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053D3AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D3AF: ret 4 */
L_0053D4D0:
    PUSH32(esp, ebp); /* 0x0053D4D0: push ebp */
    ebp = esp; /* 0x0053D4D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053D4D3: push -1 */
    PUSH32(esp, 0x0079C5C0u); /* 0x0053D4D5: push 0x79c5c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053D4DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053D4E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053D4E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053D4E4: push ebx */
    PUSH32(esp, esi); /* 0x0053D4E5: push esi */
    PUSH32(esp, edi); /* 0x0053D4E6: push edi */
    eax = MEM32(0x855000); /* 0x0053D4E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053D4EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053D4EE: push eax */
    eax = ebp + (-0xC); /* 0x0053D4EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053D4F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053D4F8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x0053D4FB: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053D4FD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x0053D4FF: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x0053D502: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x0053D505: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D530; /* 0x0053D507: je 0x53d530 */
L_0053D509:
    /* cmp ebx, 0x0006B429u */ /* 0x0053D509: cmp ebx, 0x6b429 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x0006B429u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0053D52A; /* 0x0053D50F: ja 0x53d52a */
L_0053D511:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x2630u); /* 0x0053D511: imul eax, ebx, 0x2630 */
    PUSH32(esp, eax); /* 0x0053D517: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053D518: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D51E: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0053D521: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x0053D523: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x0053D526: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D530; /* 0x0053D528: jne 0x53d530 */
L_0053D52A:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0053D52A: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0053D530:
    MEM32(ebp + (-0x4)) = 0; /* 0x0053D530: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053D537: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053D53A: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0053D53D: push esi */
    edx = MEM32(edi + 0x4); /* 0x0053D53E: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x0053D541: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_0053F0C0); /* 0x0053D543: call 0x53f0c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0053D548: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053D54B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x0053D552: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x0053D555: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x6B429E61u; /* 0x0053D557: mov eax, 0x6b429e61 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0053D55C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x0053D55E: sar edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 12u);
    eax = edx; /* 0x0053D561: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0053D563: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0053D563: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D566: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x0053D568: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi); /* 0x0053D56B: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x0053D56D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D57B; /* 0x0053D56F: je 0x53d57b */
L_0053D571:
    PUSH32(esp, eax); /* 0x0053D571: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053D572: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D578: add esp, 4 */
    _flag_k = FK_ADD;
L_0053D57B:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x2630u); /* 0x0053D57B: imul eax, ebx, 0x2630 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0053D581: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x0053D583: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x2630u); /* 0x0053D586: imul eax, dword ptr [ebp + 8], 0x2630 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0053D58D: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x0053D58F: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x0053D592: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053D594: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053D597: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053D59E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053D59F: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D5A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D5A1: pop ebx */
    esp = ebp; /* 0x0053D5A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D5A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D5A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053D3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D3C0u);

L_0053D3C0:
    PUSH32(esp, ebp); /* 0x0053D3C0: push ebp */
    ebp = esp; /* 0x0053D3C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053D3C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053D3C6: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053D3C9: push ebx */
    PUSH32(esp, esi); /* 0x0053D3CA: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0053D3CB: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x0053D3CE: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x0053D3D0: push edi */
    ecx = MEM32(ebx); /* 0x0053D3D1: mov ecx, dword ptr [ebx] */
    eax = esi + esi * 2; /* 0x0053D3D3: lea eax, [esi + esi*2] */
    edx = eax * 2 + 0x2; /* 0x0053D3D6: lea edx, [eax*2 + 2] */
    eax = MEM32(ecx + 0xC); /* 0x0053D3DD: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0053D3E0: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x0053D3E2: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053D3ED; /* 0x0053D3E5: jbe 0x53d3ed */
L_0053D3E7:
    PUSH32(esp, edx); /* 0x0053D3E7: push edx */
    RECOMP_CALL(sub_0053EDC0); /* 0x0053D3E8: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0053D3ED:
    edx = MEM32(ebx); /* 0x0053D3ED: mov edx, dword ptr [ebx] */
    edi = MEM32(ebp + 0x8); /* 0x0053D3EF: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0xC); /* 0x0053D3F2: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0053D3F5: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0053D3F8: mov dword ptr [edx + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x22u); /* 0x0053D3FB: mov byte ptr [ecx], 0x22 */
    /* test esi, esi */ /* 0x0053D3FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D4AC; /* 0x0053D400: je 0x53d4ac */
L_0053D406:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053D406: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053D408:
    SET_LO8(ecx, MEM8(edi)); /* 0x0053D408: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0053D40A: inc eax */
    _flag_k = FK_INC;
    esi = MEM32(ebx); /* 0x0053D40B: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0053D40D: inc edi */
    _flag_k = FK_INC;
    MEM8(esp + 0x13) = (uint8_t)(LO8(ecx)); /* 0x0053D40E: mov byte ptr [esp + 0x13], cl */
    ecx = (uint32_t)LO8(ecx); /* 0x0053D412: movzx ecx, cl */
    MEM32(esp + 0x14) = ecx; /* 0x0053D415: mov dword ptr [esp + 0x14], ecx */
    edx = MEM32(esi + 0xC); /* 0x0053D419: mov edx, dword ptr [esi + 0xc] */
    SET_LO8(ecx, MEM8(ecx + 0x7EDA90)); /* 0x0053D41C: mov cl, byte ptr [ecx + 0x7eda90] */
    MEM8(esp + 0x12) = (uint8_t)(LO8(ecx)); /* 0x0053D422: mov byte ptr [esp + 0x12], cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x0053D426: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = edx + 0x1; /* 0x0053D428: lea ecx, [edx + 1] */
    MEM32(esi + 0xC) = ecx; /* 0x0053D42B: mov dword ptr [esi + 0xc], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D49D; /* 0x0053D42E: je 0x53d49d */
L_0053D430:
    MEM8(edx) = (uint8_t)(0x5Cu); /* 0x0053D430: mov byte ptr [edx], 0x5c */
    esi = MEM32(ebx); /* 0x0053D433: mov esi, dword ptr [ebx] */
    edx = MEM32(esi + 0xC); /* 0x0053D435: mov edx, dword ptr [esi + 0xc] */
    ecx = edx + 0x1; /* 0x0053D438: lea ecx, [edx + 1] */
    MEM32(esi + 0xC) = ecx; /* 0x0053D43B: mov dword ptr [esi + 0xc], ecx */
    SET_LO8(ecx, MEM8(esp + 0x12)); /* 0x0053D43E: mov cl, byte ptr [esp + 0x12] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0053D442: mov byte ptr [edx], cl */
    /* cmp LO8(ecx), 0x75u */ /* 0x0053D444: cmp cl, 0x75 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D4A3; /* 0x0053D447: jne 0x53d4a3 */
L_0053D449:
    esi = MEM32(ebx); /* 0x0053D449: mov esi, dword ptr [ebx] */
    edx = MEM32(esi + 0xC); /* 0x0053D44B: mov edx, dword ptr [esi + 0xc] */
    ecx = edx + 0x1; /* 0x0053D44E: lea ecx, [edx + 1] */
    MEM32(esi + 0xC) = ecx; /* 0x0053D451: mov dword ptr [esi + 0xc], ecx */
    MEM8(edx) = (uint8_t)(0x30u); /* 0x0053D454: mov byte ptr [edx], 0x30 */
    esi = MEM32(ebx); /* 0x0053D457: mov esi, dword ptr [ebx] */
    edx = MEM32(esi + 0xC); /* 0x0053D459: mov edx, dword ptr [esi + 0xc] */
    ecx = edx + 0x1; /* 0x0053D45C: lea ecx, [edx + 1] */
    MEM32(esi + 0xC) = ecx; /* 0x0053D45F: mov dword ptr [esi + 0xc], ecx */
    MEM8(edx) = (uint8_t)(0x30u); /* 0x0053D462: mov byte ptr [edx], 0x30 */
    edx = MEM32(ebx); /* 0x0053D465: mov edx, dword ptr [ebx] */
    esi = MEM32(edx + 0xC); /* 0x0053D467: mov esi, dword ptr [edx + 0xc] */
    ecx = esi + 0x1; /* 0x0053D46A: lea ecx, [esi + 1] */
    MEM32(edx + 0xC) = ecx; /* 0x0053D46D: mov dword ptr [edx + 0xc], ecx */
    ecx = MEM32(esp + 0x14); /* 0x0053D470: mov ecx, dword ptr [esp + 0x14] */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x0053D474: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x0053D474: shr ecx, 4 */
    ecx = (uint32_t)MEM8(ecx + 0x7ED920); /* 0x0053D477: movzx ecx, byte ptr [ecx + 0x7ed920] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x0053D47E: mov byte ptr [esi], cl */
    edx = MEM32(ebx); /* 0x0053D480: mov edx, dword ptr [ebx] */
    esi = MEM32(edx + 0xC); /* 0x0053D482: mov esi, dword ptr [edx + 0xc] */
    ecx = esi + 0x1; /* 0x0053D485: lea ecx, [esi + 1] */
    MEM32(edx + 0xC) = ecx; /* 0x0053D488: mov dword ptr [edx + 0xc], ecx */
    ecx = MEM32(esp + 0x14); /* 0x0053D48B: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x0053D48F: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(ecx + 0x7ED920); /* 0x0053D492: movzx ecx, byte ptr [ecx + 0x7ed920] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x0053D499: mov byte ptr [esi], cl */
    goto L_0053D4A3; /* 0x0053D49B: jmp 0x53d4a3 */
L_0053D49D:
    SET_LO8(ecx, MEM8(esp + 0x13)); /* 0x0053D49D: mov cl, byte ptr [esp + 0x13] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x0053D4A1: mov byte ptr [edx], cl */
L_0053D4A3:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x0053D4A3: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0053D408; /* 0x0053D4A6: jb 0x53d408 */
L_0053D4AC:
    edx = MEM32(ebx); /* 0x0053D4AC: mov edx, dword ptr [ebx] */
    edi = POP32_VAL(esp); /* 0x0053D4AE: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D4AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D4B0: pop ebx */
    ecx = MEM32(edx + 0xC); /* 0x0053D4B1: mov ecx, dword ptr [edx + 0xc] */
    eax = ecx + 0x1; /* 0x0053D4B4: lea eax, [ecx + 1] */
    MEM32(edx + 0xC) = eax; /* 0x0053D4B7: mov dword ptr [edx + 0xc], eax */
    SET_LO8(eax, 1); /* 0x0053D4BA: mov al, 1 */
    MEM8(ecx) = (uint8_t)(0x22u); /* 0x0053D4BC: mov byte ptr [ecx], 0x22 */
    esp = ebp; /* 0x0053D4BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D4C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053D4C2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053D5A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D5A8u);

L_0053D5A8:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0053D5A8: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053D5AB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D5B1: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0053D5B4: push 0 */
    PUSH32(esp, 0); /* 0x0053D5B6: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053D5B8: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053D5BDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053D5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D5C0u);

L_0053D5C0:
    PUSH32(esp, esi); /* 0x0053D5C0: push esi */
    esi = ecx; /* 0x0053D5C1: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x0053D5C3: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D5FF; /* 0x0053D5C6: je 0x53d5ff */
L_0053D5C8:
    PUSH32(esp, ebx); /* 0x0053D5C8: push ebx */
    ebx = MEM32(0x7CC44C); /* 0x0053D5C9: mov ebx, dword ptr [0x7cc44c] */
    PUSH32(esp, edi); /* 0x0053D5CF: push edi */
L_0053D5D0:
    edi = MEM32(esi); /* 0x0053D5D0: mov edi, dword ptr [esi] */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x0053D5D2: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D5EB; /* 0x0053D5D5: je 0x53d5eb */
L_0053D5D7:
    PUSH32(esp, MEM32(esi)); /* 0x0053D5D7: push dword ptr [esi] */
    edi = MEM32(edi + 0x8); /* 0x0053D5D9: mov edi, dword ptr [edi + 8] */
    RECOMP_ICALL(ebx); /* 0x0053D5DC: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D5DE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = edi; /* 0x0053D5E1: mov dword ptr [esi], edi */
    /* test edi, edi */ /* 0x0053D5E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D5D0; /* 0x0053D5E5: jne 0x53d5d0 */
L_0053D5E7:
    edi = POP32_VAL(esp); /* 0x0053D5E7: pop edi */
    ebx = POP32_VAL(esp); /* 0x0053D5E8: pop ebx */
    esi = POP32_VAL(esp); /* 0x0053D5E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D5EA: ret  */
L_0053D5EB:
    eax = edi; /* 0x0053D5EB: mov eax, edi */
    /* test eax, eax */ /* 0x0053D5ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D5FD; /* 0x0053D5EF: je 0x53d5fd */
L_0053D5F1:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x0053D5F1: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D5FD; /* 0x0053D5F4: jne 0x53d5fd */
L_0053D5F6:
    MEM32(eax + 0x4) = 0; /* 0x0053D5F6: mov dword ptr [eax + 4], 0 */
L_0053D5FD:
    edi = POP32_VAL(esp); /* 0x0053D5FD: pop edi */
    ebx = POP32_VAL(esp); /* 0x0053D5FE: pop ebx */
L_0053D5FF:
    esi = POP32_VAL(esp); /* 0x0053D5FF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053D600: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053D610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D610u);

L_0053D610:
    PUSH32(esp, ebp); /* 0x0053D610: push ebp */
    ebp = esp; /* 0x0053D611: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053D613: push -1 */
    PUSH32(esp, 0x0079C5EAu); /* 0x0053D615: push 0x79c5ea */
    eax = MEM32(FS_BASE + (0)); /* 0x0053D61A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053D620: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053D621: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053D624: push ebx */
    PUSH32(esp, esi); /* 0x0053D625: push esi */
    PUSH32(esp, edi); /* 0x0053D626: push edi */
    eax = MEM32(0x855000); /* 0x0053D627: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053D62C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053D62E: push eax */
    eax = ebp + (-0xC); /* 0x0053D62F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053D632: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053D638: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x28u); /* 0x0053D63B: push 0x28 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053D63D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D643: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x0053D646: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x0053D649: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D653; /* 0x0053D64B: jne 0x53d653 */
L_0053D64D:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0053D64D: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0053D653:
    ecx = MEM32(ebp + 0x8); /* 0x0053D653: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x0053D656: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D660; /* 0x0053D658: jne 0x53d660 */
L_0053D65A:
    ecx = eax; /* 0x0053D65A: mov ecx, eax */
    edx = eax; /* 0x0053D65C: mov edx, eax */
    goto L_0053D663; /* 0x0053D65E: jmp 0x53d663 */
L_0053D660:
    edx = MEM32(ebp + 0xC); /* 0x0053D660: mov edx, dword ptr [ebp + 0xc] */
L_0053D663:
    MEM32(ebp + (-0x4)) = 1; /* 0x0053D663: mov dword ptr [ebp - 4], 1 */
    MEM32(eax) = ecx; /* 0x0053D66A: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053D66C: mov byte ptr [ebp - 4], 0 */
    ecx = eax + 0x4; /* 0x0053D670: lea ecx, [eax + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053D673: mov byte ptr [ebp - 4], 2 */
    /* test ecx, ecx */ /* 0x0053D677: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D67D; /* 0x0053D679: je 0x53d67d */
L_0053D67B:
    MEM32(ecx) = edx; /* 0x0053D67B: mov dword ptr [ecx], edx */
L_0053D67D:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053D67D: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053D681: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053D688: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053D68B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053D692: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053D693: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D694: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D695: pop ebx */
    esp = ebp; /* 0x0053D696: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D698: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053D699: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053D69C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D69Cu);

L_0053D69C:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0053D69C: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053D69F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D6A5: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0053D6A8: push 0 */
    PUSH32(esp, 0); /* 0x0053D6AA: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053D6AC: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053D6B1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053D6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D6C0u);

L_0053D6C0:
    PUSH32(esp, ebp); /* 0x0053D6C0: push ebp */
    ebp = esp; /* 0x0053D6C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053D6C3: push -1 */
    PUSH32(esp, 0x0079C61Au); /* 0x0053D6C5: push 0x79c61a */
    eax = MEM32(FS_BASE + (0)); /* 0x0053D6CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053D6D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053D6D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053D6D4: push ebx */
    PUSH32(esp, esi); /* 0x0053D6D5: push esi */
    PUSH32(esp, edi); /* 0x0053D6D6: push edi */
    eax = MEM32(0x855000); /* 0x0053D6D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053D6DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053D6DE: push eax */
    eax = ebp + (-0xC); /* 0x0053D6DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053D6E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053D6E8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0xCCu); /* 0x0053D6EB: push 0xcc */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053D6F0: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D6F6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x0053D6F9: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x0053D6FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D706; /* 0x0053D6FE: jne 0x53d706 */
L_0053D700:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0053D700: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0053D706:
    ecx = MEM32(ebp + 0x8); /* 0x0053D706: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x0053D709: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D713; /* 0x0053D70B: jne 0x53d713 */
L_0053D70D:
    ecx = eax; /* 0x0053D70D: mov ecx, eax */
    edx = eax; /* 0x0053D70F: mov edx, eax */
    goto L_0053D716; /* 0x0053D711: jmp 0x53d716 */
L_0053D713:
    edx = MEM32(ebp + 0xC); /* 0x0053D713: mov edx, dword ptr [ebp + 0xc] */
L_0053D716:
    MEM32(ebp + (-0x4)) = 1; /* 0x0053D716: mov dword ptr [ebp - 4], 1 */
    MEM32(eax) = ecx; /* 0x0053D71D: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053D71F: mov byte ptr [ebp - 4], 0 */
    ecx = eax + 0x4; /* 0x0053D723: lea ecx, [eax + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053D726: mov byte ptr [ebp - 4], 2 */
    /* test ecx, ecx */ /* 0x0053D72A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D730; /* 0x0053D72C: je 0x53d730 */
L_0053D72E:
    MEM32(ecx) = edx; /* 0x0053D72E: mov dword ptr [ecx], edx */
L_0053D730:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053D730: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053D734: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053D73B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053D73E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053D745: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053D746: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D747: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D748: pop ebx */
    esp = ebp; /* 0x0053D749: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D74B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053D74C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053D74F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D74Fu);

L_0053D74F:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0053D74F: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053D752: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053D758: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0053D75B: push 0 */
    PUSH32(esp, 0); /* 0x0053D75D: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053D75F: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053D764u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053D770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053D770u);

L_0053D770:
    PUSH32(esp, ebp); /* 0x0053D770: push ebp */
    ebp = esp; /* 0x0053D771: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0053D773: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053D776: push ebx */
    PUSH32(esp, esi); /* 0x0053D777: push esi */
    PUSH32(esp, edi); /* 0x0053D778: push edi */
    edi = ecx; /* 0x0053D779: mov edi, ecx */
    ecx = (uint32_t)MEM16(edi + 0xE); /* 0x0053D77B: movzx ecx, word ptr [edi + 0xe] */
    eax = ecx; /* 0x0053D77F: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x0053D781: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 5 */ /* 0x0053D784: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0053D951; /* 0x0053D787: ja 0x53d951 */
L_0053D78D:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x53DA10)); goto _ljump; }
L_0053D794:
    ecx = MEM32(ebp + 0x8); /* 0x0053D794: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053E240); /* 0x0053D797: call 0x53e240 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D79C: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D79D: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D79E: pop ebx */
    esp = ebp; /* 0x0053D79F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D7A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D7A2: ret 4 */
L_0053D7A5:
    esi = MEM32(ebp + 0x8); /* 0x0053D7A5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0053D7A8: push ecx */
    ecx = esi; /* 0x0053D7A9: mov ecx, esi */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D7AB: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D7B0: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x66u); /* 0x0053D7B2: push 0x66 */
    ecx = MEM32(ecx); /* 0x0053D7B4: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D7B6: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D7BC: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x61u); /* 0x0053D7BE: push 0x61 */
    ecx = MEM32(ecx); /* 0x0053D7C0: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D7C2: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D7C8: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x6Cu); /* 0x0053D7CA: push 0x6c */
    ecx = MEM32(ecx); /* 0x0053D7CC: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D7CE: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x73u); /* 0x0053D7D4: push 0x73 */
L_0053D7D6:
    ecx = MEM32(esi); /* 0x0053D7D6: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x0053D7D8: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D7DA: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D7E0: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x65u); /* 0x0053D7E2: push 0x65 */
    ecx = MEM32(ecx); /* 0x0053D7E4: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D7E6: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x0053D7EC: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053D7EE: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D7EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D7F0: pop ebx */
    esp = ebp; /* 0x0053D7F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D7F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D7F4: ret 4 */
L_0053D7F7:
    esi = MEM32(ebp + 0x8); /* 0x0053D7F7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0053D7FA: push ecx */
    ecx = esi; /* 0x0053D7FB: mov ecx, esi */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D7FD: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D802: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x74u); /* 0x0053D804: push 0x74 */
    ecx = MEM32(ecx); /* 0x0053D806: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D808: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053D80E: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x72u); /* 0x0053D810: push 0x72 */
    ecx = MEM32(ecx); /* 0x0053D812: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053D814: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x75u); /* 0x0053D81A: push 0x75 */
    RECOMP_BACKEDGE();
    goto L_0053D7D6; /* 0x0053D81C: jmp 0x53d7d6 */
L_0053D81E:
    ebx = MEM32(ebp + 0x8); /* 0x0053D81E: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x0053D821: mov ecx, ebx */
    RECOMP_CALL(sub_0053E280); /* 0x0053D823: call 0x53e280 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053D828: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D837; /* 0x0053D82A: jne 0x53d837 */
L_0053D82C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0053D82C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x0053D82E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D82F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D830: pop ebx */
    esp = ebp; /* 0x0053D831: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D833: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D834: ret 4 */
L_0053D837:
    ecx = MEM32(edi); /* 0x0053D837: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + 0x8); /* 0x0053D839: mov eax, dword ptr [edi + 8] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x0053D83C: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x0053D83C: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0053D83F: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x0053D841: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D8B5; /* 0x0053D843: je 0x53d8b5 */
L_0053D845:
    esi = eax + 0xE; /* 0x0053D845: lea esi, [eax + 0xe] */
    eax = 0x1000u; /* 0x0053D848: mov eax, 0x1000 */
    ecx = ecx; /* 0x0053D84D: lea ecx, [ecx] */
L_0053D850:
    SET_LO16(ecx, MEM16(esi)); /* 0x0053D850: mov cx, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    SET_LO16(ecx, LO16(ecx) & LO16(eax)); /* 0x0053D853: and cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D865; /* 0x0053D856: je 0x53d865 */
L_0053D858:
    eax = (int32_t)(int8_t)MEM8(esi + (-0x1)); /* 0x0053D858: movsx eax, byte ptr [esi - 1] */
    ebx = 0xDu; /* 0x0053D85C: mov ebx, 0xd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0053D861: sub ebx, eax */
    _flag_k = FK_CMP;
    goto L_0053D868; /* 0x0053D863: jmp 0x53d868 */
L_0053D865:
    ebx = MEM32(esi + (-0xE)); /* 0x0053D865: mov ebx, dword ptr [esi - 0xe] */
L_0053D868:
    eax = esi + (-0xE); /* 0x0053D868: lea eax, [esi - 0xe] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x0053D86B: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D873; /* 0x0053D86E: jne 0x53d873 */
L_0053D870:
    eax = MEM32(esi + (-0x6)); /* 0x0053D870: mov eax, dword ptr [esi - 6] */
L_0053D873:
    PUSH32(esp, ecx); /* 0x0053D873: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053D874: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x0053D877: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D87A: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x0053D87F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0053D880: push dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0x8); /* 0x0053D883: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x0053D886: mov ecx, ebx */
    RECOMP_CALL(sub_0053E950); /* 0x0053D888: call 0x53e950 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053D88D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D82C; /* 0x0053D88F: je 0x53d82c */
L_0053D891:
    PUSH32(esp, ebx); /* 0x0053D891: push ebx */
    ecx = esi + 0x2; /* 0x0053D892: lea ecx, [esi + 2] */
    RECOMP_CALL(sub_0053D770); /* 0x0053D895: call 0x53d770 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053D89A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D82C; /* 0x0053D89C: je 0x53d82c */
L_0053D89E:
    ecx = MEM32(edi); /* 0x0053D89E: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x0053D8A0: add esi, 0x20 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x0053D8A3: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x0053D8A3: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0x8); /* 0x0053D8A6: add ecx, dword ptr [edi + 8] */
    _flag_k = FK_ADD;
    eax = esi + (-0xE); /* 0x0053D8A9: lea eax, [esi - 0xe] */
    /* cmp eax, ecx */ /* 0x0053D8AC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x1000u; /* 0x0053D8AE: mov eax, 0x1000 */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D850; /* 0x0053D8B3: jne 0x53d850 */
L_0053D8B5:
    PUSH32(esp, ecx); /* 0x0053D8B5: push ecx */
    ecx = ebx; /* 0x0053D8B6: mov ecx, ebx */
    RECOMP_CALL(sub_0053E310); /* 0x0053D8B8: call 0x53e310 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D8BD: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D8BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D8BF: pop ebx */
    esp = ebp; /* 0x0053D8C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D8C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D8C3: ret 4 */
L_0053D8C6:
    ebx = MEM32(ebp + 0x8); /* 0x0053D8C6: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x0053D8C9: mov ecx, ebx */
    RECOMP_CALL(sub_0053E390); /* 0x0053D8CB: call 0x53e390 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053D8D0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D82C; /* 0x0053D8D2: je 0x53d82c */
L_0053D8D8:
    eax = MEM32(edi); /* 0x0053D8D8: mov eax, dword ptr [edi] */
    esi = MEM32(edi + 0x8); /* 0x0053D8DA: mov esi, dword ptr [edi + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x0053D8DD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x0053D8DD: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x0053D8E0: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x0053D8E2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053D905; /* 0x0053D8E4: je 0x53d905 */
L_0053D8E6:
    PUSH32(esp, ebx); /* 0x0053D8E6: push ebx */
    ecx = esi; /* 0x0053D8E7: mov ecx, esi */
    RECOMP_CALL(sub_0053D770); /* 0x0053D8E9: call 0x53d770 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0053D8EE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D82C; /* 0x0053D8F0: je 0x53d82c */
L_0053D8F6:
    eax = MEM32(edi); /* 0x0053D8F6: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x0053D8F8: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x0053D8FB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x0053D8FB: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x8); /* 0x0053D8FE: add eax, dword ptr [edi + 8] */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x0053D901: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053D8E6; /* 0x0053D903: jne 0x53d8e6 */
L_0053D905:
    PUSH32(esp, ecx); /* 0x0053D905: push ecx */
    ecx = ebx; /* 0x0053D906: mov ecx, ebx */
    RECOMP_CALL(sub_0053E420); /* 0x0053D908: call 0x53e420 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D90D: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D90E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D90F: pop ebx */
    esp = ebp; /* 0x0053D910: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D912: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D913: ret 4 */
L_0053D916:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    ecx = ecx & 0x1000u; /* 0x0053D916: and ecx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D92B; /* 0x0053D91C: je 0x53d92b */
L_0053D91E:
    eax = (int32_t)(int8_t)MEM8(edi + 0xD); /* 0x0053D91E: movsx eax, byte ptr [edi + 0xd] */
    ebx = 0xDu; /* 0x0053D922: mov ebx, 0xd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0053D927: sub ebx, eax */
    _flag_k = FK_CMP;
    goto L_0053D92D; /* 0x0053D929: jmp 0x53d92d */
L_0053D92B:
    ebx = MEM32(edi); /* 0x0053D92B: mov ebx, dword ptr [edi] */
L_0053D92D:
    /* test LO16(ecx), LO16(ecx) */ /* 0x0053D92D: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053D935; /* 0x0053D930: jne 0x53d935 */
L_0053D932:
    edi = MEM32(edi + 0x8); /* 0x0053D932: mov edi, dword ptr [edi + 8] */
L_0053D935:
    PUSH32(esp, ecx); /* 0x0053D935: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053D936: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D939: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0053D93E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x0053D941: push ebx */
    PUSH32(esp, edi); /* 0x0053D942: push edi */
    RECOMP_CALL(sub_0053E950); /* 0x0053D943: call 0x53e950 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D948: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D949: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D94A: pop ebx */
    esp = ebp; /* 0x0053D94B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D94D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D94E: ret 4 */
L_0053D951:
    eax = ecx; /* 0x0053D951: mov eax, ecx */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x0053D953: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x0053D953: shr eax, 9 */
    /* test LO8(eax), 1 */ /* 0x0053D956: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D982; /* 0x0053D958: je 0x53d982 */
L_0053D95A:
    _xmm[0].u64[0] = MEM64(edi); _xmm[0].u64[1] = 0; /* 0x0053D95A: movsd xmm0, qword ptr [edi] */
    PUSH32(esp, ecx); /* 0x0053D95E: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053D95F: mov ecx, dword ptr [ebp + 8] */
    MEM64(ebp + (-0xC)) = _xmm[0].u64[0]; /* 0x0053D962: movsd qword ptr [ebp - 0xc], xmm0 */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D967: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(ebp + (-0xC)); _xmm[1].u64[1] = 0; /* 0x0053D96C: movsd xmm1, qword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x0053D971: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053E8B0); /* 0x0053D974: call 0x53e8b0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D979: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D97A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D97B: pop ebx */
    esp = ebp; /* 0x0053D97C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D97E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D97F: ret 4 */
L_0053D982:
    SET_LO8(eax, LO8(ecx)); /* 0x0053D982: mov al, cl */
    if (5u) _cf = (((LO8(eax)) >> 4) & 1u); /* 0x0053D984: shr al, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 5u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 5u); /* 0x0053D984: shr al, 5 */
    /* test LO8(eax), 1 */ /* 0x0053D987: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D9A8; /* 0x0053D989: je 0x53d9a8 */
L_0053D98B:
    edi = MEM32(edi); /* 0x0053D98B: mov edi, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x0053D98D: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053D98E: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D991: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0053D996: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0053D999: push edi */
    RECOMP_CALL(sub_0053E6C0); /* 0x0053D99A: call 0x53e6c0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D99F: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D9A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D9A1: pop ebx */
    esp = ebp; /* 0x0053D9A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D9A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D9A5: ret 4 */
L_0053D9A8:
    SET_LO8(eax, LO8(ecx)); /* 0x0053D9A8: mov al, cl */
    if (6u) _cf = (((LO8(eax)) >> 5) & 1u); /* 0x0053D9AA: shr al, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 6u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 6u); /* 0x0053D9AA: shr al, 6 */
    /* test LO8(eax), 1 */ /* 0x0053D9AD: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D9CE; /* 0x0053D9AF: je 0x53d9ce */
L_0053D9B1:
    edi = MEM32(edi); /* 0x0053D9B1: mov edi, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x0053D9B3: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x0053D9B4: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D9B7: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0053D9BC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0053D9BF: push edi */
    RECOMP_CALL(sub_0053E740); /* 0x0053D9C0: call 0x53e740 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D9C5: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D9C6: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D9C7: pop ebx */
    esp = ebp; /* 0x0053D9C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D9CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D9CB: ret 4 */
L_0053D9CE:
    ebx = MEM32(edi); /* 0x0053D9CE: mov ebx, dword ptr [edi] */
    esi = MEM32(edi + 0x4); /* 0x0053D9D0: mov esi, dword ptr [edi + 4] */
    if (7u) _cf = (((LO8(ecx)) >> 6) & 1u); /* 0x0053D9D3: shr cl, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) >> 7u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) >> 7u); /* 0x0053D9D3: shr cl, 7 */
    PUSH32(esp, ecx); /* 0x0053D9D6: push ecx */
    /* test LO8(ecx), 1 */ /* 0x0053D9D7: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x8); /* 0x0053D9DA: mov ecx, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053D9F7; /* 0x0053D9DD: je 0x53d9f7 */
L_0053D9DF:
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D9DF: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0053D9E4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0053D9E7: push esi */
    PUSH32(esp, ebx); /* 0x0053D9E8: push ebx */
    RECOMP_CALL(sub_0053E7B0); /* 0x0053D9E9: call 0x53e7b0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053D9EE: pop edi */
    esi = POP32_VAL(esp); /* 0x0053D9EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053D9F0: pop ebx */
    esp = ebp; /* 0x0053D9F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053D9F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053D9F4: ret 4 */
L_0053D9F7:
    RECOMP_CALL(sub_0053E5B0); /* 0x0053D9F7: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0053D9FC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0053D9FF: push esi */
    PUSH32(esp, ebx); /* 0x0053DA00: push ebx */
    RECOMP_CALL(sub_0053E840); /* 0x0053DA01: call 0x53e840 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053DA06: pop edi */
    esi = POP32_VAL(esp); /* 0x0053DA07: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053DA08: pop ebx */
    esp = ebp; /* 0x0053DA09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053DA0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053DA0C: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x0053D794u: goto L_0053D794;
      case 0x0053D7A5u: goto L_0053D7A5;
      case 0x0053D7F7u: goto L_0053D7F7;
      case 0x0053D81Eu: goto L_0053D81E;
      case 0x0053D8C6u: goto L_0053D8C6;
      case 0x0053D916u: goto L_0053D916;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0053DA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DA30u);

L_0053DA30:
    PUSH32(esp, ebp); /* 0x0053DA30: push ebp */
    ebp = esp; /* 0x0053DA31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053DA33: push -1 */
    PUSH32(esp, 0x0079C648u); /* 0x0053DA35: push 0x79c648 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053DA3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053DA40: push eax */
    PUSH32(esp, ecx); /* 0x0053DA41: push ecx */
    PUSH32(esp, esi); /* 0x0053DA42: push esi */
    eax = MEM32(0x855000); /* 0x0053DA43: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053DA48: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053DA4A: push eax */
    eax = ebp + (-0xC); /* 0x0053DA4B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053DA4E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053DA54: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053DA56: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x0053DA59: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0053DA5D: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007EDA74u; /* 0x0053DA64: mov dword ptr [esi], 0x7eda74 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053DA6A: mov dword ptr [ebp - 4], 0 */
    eax = 0x0052EFE0u; /* 0x0053DA71: mov eax, 0x52efe0 */
    MEM32(esi) = 0x007EDFFCu; /* 0x0053DA76: mov dword ptr [esi], 0x7edffc */
    MEM32(esi + 0xC) = 0; /* 0x0053DA7C: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0053DA83: mov dword ptr [esi + 0x10], 0 */
    /* test eax, eax */ /* 0x0053DA8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DABB; /* 0x0053DA8C: je 0x53dabb */
L_0053DA8E:
    /* test MEM8(esi + 0x4), 1 */ /* 0x0053DA8E: test byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DA9E; /* 0x0053DA92: je 0x53da9e */
L_0053DA94:
    PUSH32(esp, esi); /* 0x0053DA94: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x0053DA95: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053DA9B: add esp, 4 */
    _flag_k = FK_ADD;
L_0053DA9E:
    PUSH32(esp, 0xD4Eu); /* 0x0053DA9E: push 0xd4e */
    PUSH32(esp, esi); /* 0x0053DAA3: push esi */
    MEM32(esi + 0xC) = 0x008F8CC0u; /* 0x0053DAA4: mov dword ptr [esi + 0xc], 0x8f8cc0 */
    MEM32(esi + 0x10) = 0x0052EFE0u; /* 0x0053DAAB: mov dword ptr [esi + 0x10], 0x52efe0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x0053DAB2: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053DAB8: add esp, 8 */
    _flag_k = FK_ADD;
L_0053DABB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053DABB: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053DAC2: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053DAC4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053DAC7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053DACE: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053DACF: pop esi */
    esp = ebp; /* 0x0053DAD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053DAD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053DAD3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053DAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DAE0u);

L_0053DAE0:
    PUSH32(esp, ebp); /* 0x0053DAE0: push ebp */
    ebp = esp; /* 0x0053DAE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053DAE3: push -1 */
    PUSH32(esp, 0x0079C648u); /* 0x0053DAE5: push 0x79c648 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053DAEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053DAF0: push eax */
    PUSH32(esp, ecx); /* 0x0053DAF1: push ecx */
    PUSH32(esp, esi); /* 0x0053DAF2: push esi */
    eax = MEM32(0x855000); /* 0x0053DAF3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053DAF8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053DAFA: push eax */
    eax = ebp + (-0xC); /* 0x0053DAFB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053DAFE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053DB04: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053DB06: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x0053DB09: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x0053DB0D: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007EDA74u; /* 0x0053DB14: mov dword ptr [esi], 0x7eda74 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053DB1A: mov dword ptr [ebp - 4], 0 */
    eax = 0x00533000u; /* 0x0053DB21: mov eax, 0x533000 */
    MEM32(esi) = 0x007EDC44u; /* 0x0053DB26: mov dword ptr [esi], 0x7edc44 */
    MEM32(esi + 0xC) = 0; /* 0x0053DB2C: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0053DB33: mov dword ptr [esi + 0x10], 0 */
    /* test eax, eax */ /* 0x0053DB3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DB6B; /* 0x0053DB3C: je 0x53db6b */
L_0053DB3E:
    /* test MEM8(esi + 0x4), 1 */ /* 0x0053DB3E: test byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DB4E; /* 0x0053DB42: je 0x53db4e */
L_0053DB44:
    PUSH32(esp, esi); /* 0x0053DB44: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x0053DB45: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053DB4B: add esp, 4 */
    _flag_k = FK_ADD;
L_0053DB4E:
    PUSH32(esp, 0x1F9u); /* 0x0053DB4E: push 0x1f9 */
    PUSH32(esp, esi); /* 0x0053DB53: push esi */
    MEM32(esi + 0xC) = 0x008F8CC0u; /* 0x0053DB54: mov dword ptr [esi + 0xc], 0x8f8cc0 */
    MEM32(esi + 0x10) = 0x00533000u; /* 0x0053DB5B: mov dword ptr [esi + 0x10], 0x533000 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x0053DB62: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053DB68: add esp, 8 */
    _flag_k = FK_ADD;
L_0053DB6B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053DB6B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053DB72: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053DB74: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053DB77: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053DB7E: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053DB7F: pop esi */
    esp = ebp; /* 0x0053DB80: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053DB82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053DB83: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053DB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DB90u);

L_0053DB90:
    PUSH32(esp, esi); /* 0x0053DB90: push esi */
    esi = ecx; /* 0x0053DB91: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DB93: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DB96: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DB98: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DB9B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x007EDA5Cu; /* 0x0053DB9D: mov dword ptr [esi], 0x7eda5c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DBBF; /* 0x0053DBA3: je 0x53dbbf */
L_0053DBA5:
    PUSH32(esp, ecx); /* 0x0053DBA5: push ecx */
    PUSH32(esp, edx); /* 0x0053DBA6: push edx */
    PUSH32(esp, esi); /* 0x0053DBA7: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DBA8: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DBAE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x0053DBB1: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0053DBB8: mov dword ptr [esi + 0x14], 0 */
L_0053DBBF:
    esi = POP32_VAL(esp); /* 0x0053DBBF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DBC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DBD0u);

L_0053DBD0:
    PUSH32(esp, ebp); /* 0x0053DBD0: push ebp */
    ebp = esp; /* 0x0053DBD1: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x0053DBD3: mov eax, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x0053DBD6: mov edx, ecx */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x0053DBD8: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053DC01; /* 0x0053DBDB: jne 0x53dc01 */
L_0053DBDD:
    eax = MEM32(ebp + 0x14); /* 0x0053DBDD: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(edx + 0x14) */ /* 0x0053DBE0: cmp eax, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053DC01; /* 0x0053DBE3: jne 0x53dc01 */
L_0053DBE5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053DBE5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x18); /* 0x0053DBE8: mov ecx, dword ptr [edx + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053DBEB: push dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x1C); /* 0x0053DBEE: mov eax, dword ptr [edx + 0x1c] */
    MEM32(edx + 0x10) = 0; /* 0x0053DBF1: mov dword ptr [edx + 0x10], 0 */
    MEM32(edx + 0x14) = 0; /* 0x0053DBF8: mov dword ptr [edx + 0x14], 0 */
    RECOMP_ICALL(eax); /* 0x0053DBFF: call eax */
    RECOMP_FLAGS_IN();
L_0053DC01:
    ebp = POP32_VAL(esp); /* 0x0053DC01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0053DC02: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0053DC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DC10u);

L_0053DC10:
    PUSH32(esp, ebp); /* 0x0053DC10: push ebp */
    ebp = esp; /* 0x0053DC11: mov ebp, esp */
    eax = ecx; /* 0x0053DC13: mov eax, ecx */
    PUSH32(esp, 0); /* 0x0053DC15: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053DC17: push dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x18); /* 0x0053DC1A: mov ecx, dword ptr [eax + 0x18] */
    MEM32(eax + 0x10) = 0; /* 0x0053DC1D: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x0053DC24: mov dword ptr [eax + 0x14], 0 */
    eax = MEM32(eax + 0x1C); /* 0x0053DC2B: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_ICALL(eax); /* 0x0053DC2E: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0053DC30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053DC31: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053DC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DC40u);

L_0053DC40:
    PUSH32(esp, esi); /* 0x0053DC40: push esi */
    esi = ecx; /* 0x0053DC41: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DC43: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DC46: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DC48: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DC4B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x007EDFDCu; /* 0x0053DC4D: mov dword ptr [esi], 0x7edfdc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DC6F; /* 0x0053DC53: je 0x53dc6f */
L_0053DC55:
    PUSH32(esp, ecx); /* 0x0053DC55: push ecx */
    PUSH32(esp, edx); /* 0x0053DC56: push edx */
    PUSH32(esp, esi); /* 0x0053DC57: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DC58: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DC5E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x0053DC61: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0053DC68: mov dword ptr [esi + 0x14], 0 */
L_0053DC6F:
    esi = POP32_VAL(esp); /* 0x0053DC6F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DC70: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DC80u);

L_0053DC80:
    PUSH32(esp, ebp); /* 0x0053DC80: push ebp */
    ebp = esp; /* 0x0053DC81: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0053DC83: push esi */
    esi = ecx; /* 0x0053DC84: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DC86: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DC89: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DC8B: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DC8E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DC9E; /* 0x0053DC90: je 0x53dc9e */
L_0053DC92:
    PUSH32(esp, ecx); /* 0x0053DC92: push ecx */
    PUSH32(esp, edx); /* 0x0053DC93: push edx */
    PUSH32(esp, esi); /* 0x0053DC94: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DC95: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DC9B: add esp, 0xc */
    _flag_k = FK_ADD;
L_0053DC9E:
    eax = MEM32(ebp + 0x10); /* 0x0053DC9E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x0053DCA1: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x0053DCA4: mov edx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x18) = eax; /* 0x0053DCA7: mov dword ptr [esi + 0x18], eax */
    eax = ecx; /* 0x0053DCAA: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0053DCAC: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ecx; /* 0x0053DCAE: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = edx; /* 0x0053DCB1: mov dword ptr [esi + 0x14], edx */
    MEM32(esi + 0x1C) = 0x0052E660u; /* 0x0053DCB4: mov dword ptr [esi + 0x1c], 0x52e660 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DCC9; /* 0x0053DCBB: je 0x53dcc9 */
L_0053DCBD:
    PUSH32(esp, edx); /* 0x0053DCBD: push edx */
    PUSH32(esp, ecx); /* 0x0053DCBE: push ecx */
    PUSH32(esp, esi); /* 0x0053DCBF: push esi */
    RECOMP_ICALL(MEM32(0x7CC994)); /* 0x0053DCC0: call dword ptr [0x7cc994] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DCC6: add esp, 0xc */
    _flag_k = FK_ADD;
L_0053DCC9:
    esi = POP32_VAL(esp); /* 0x0053DCC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053DCCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0053DCCB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0053DCD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DCD0u);

L_0053DCD0:
    PUSH32(esp, esi); /* 0x0053DCD0: push esi */
    esi = ecx; /* 0x0053DCD1: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DCD3: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DCD6: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DCD8: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DCDB: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x007EDFECu; /* 0x0053DCDD: mov dword ptr [esi], 0x7edfec */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DCFF; /* 0x0053DCE3: je 0x53dcff */
L_0053DCE5:
    PUSH32(esp, ecx); /* 0x0053DCE5: push ecx */
    PUSH32(esp, edx); /* 0x0053DCE6: push edx */
    PUSH32(esp, esi); /* 0x0053DCE7: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DCE8: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DCEE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x0053DCF1: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0053DCF8: mov dword ptr [esi + 0x14], 0 */
L_0053DCFF:
    esi = POP32_VAL(esp); /* 0x0053DCFF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DD00: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DD10u);

L_0053DD10:
    PUSH32(esp, esi); /* 0x0053DD10: push esi */
    esi = ecx; /* 0x0053DD11: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DD13: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DD16: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DD18: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DD1B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x007EDA84u; /* 0x0053DD1D: mov dword ptr [esi], 0x7eda84 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DD3F; /* 0x0053DD23: je 0x53dd3f */
L_0053DD25:
    PUSH32(esp, ecx); /* 0x0053DD25: push ecx */
    PUSH32(esp, edx); /* 0x0053DD26: push edx */
    PUSH32(esp, esi); /* 0x0053DD27: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DD28: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DD2E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x0053DD31: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0053DD38: mov dword ptr [esi + 0x14], 0 */
L_0053DD3F:
    esi = POP32_VAL(esp); /* 0x0053DD3F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DD40: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DD50u);

L_0053DD50:
    PUSH32(esp, esi); /* 0x0053DD50: push esi */
    esi = ecx; /* 0x0053DD51: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x0053DD53: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x0053DD56: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x0053DD58: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0053DD5B: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x007EE00Cu; /* 0x0053DD5D: mov dword ptr [esi], 0x7ee00c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DD7F; /* 0x0053DD63: je 0x53dd7f */
L_0053DD65:
    PUSH32(esp, ecx); /* 0x0053DD65: push ecx */
    PUSH32(esp, edx); /* 0x0053DD66: push edx */
    PUSH32(esp, esi); /* 0x0053DD67: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x0053DD68: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053DD6E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x0053DD71: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0053DD78: mov dword ptr [esi + 0x14], 0 */
L_0053DD7F:
    esi = POP32_VAL(esp); /* 0x0053DD7F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DD80: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DD90u);

L_0053DD90:
    PUSH32(esp, ebp); /* 0x0053DD90: push ebp */
    ebp = esp; /* 0x0053DD91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053DD93: push -1 */
    PUSH32(esp, 0x0078A151u); /* 0x0053DD95: push 0x78a151 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053DD9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053DDA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x0053DDA1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053DDA4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053DDA9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0053DDAB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0053DDAE: push esi */
    PUSH32(esp, edi); /* 0x0053DDAF: push edi */
    PUSH32(esp, eax); /* 0x0053DDB0: push eax */
    eax = ebp + (-0xC); /* 0x0053DDB1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053DDB4: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053DDBA: mov esi, ecx */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0053DDBC: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0053DDC3: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0053DDCA: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x30)) = esi; /* 0x0053DDD1: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0053DDD4: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0053DDDB: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0053DDE2: mov byte ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0053DDE6: mov dword ptr [ebp - 4], 1 */
    /* test edx, edx */ /* 0x0053DDED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053DE03; /* 0x0053DDEF: jne 0x53de03 */
L_0053DDF1:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0053DDF1: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x28); /* 0x0053DDF5: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = edx; /* 0x0053DDF8: mov dword ptr [ebp - 0x18], edx */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x0053DDFB: cmovae eax, dword ptr [ebp - 0x28] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x0053DDFF: mov byte ptr [eax], dl */
    goto L_0053DE24; /* 0x0053DE01: jmp 0x53de24 */
L_0053DE03:
    /* cmp MEM8(edx), 0 */ /* 0x0053DE03: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053DE0C; /* 0x0053DE06: jne 0x53de0c */
L_0053DE08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053DE08: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0053DE1A; /* 0x0053DE0A: jmp 0x53de1a */
L_0053DE0C:
    ecx = edx; /* 0x0053DE0C: mov ecx, edx */
    edi = ecx + 0x1; /* 0x0053DE0E: lea edi, [ecx + 1] */
L_0053DE11:
    SET_LO8(eax, MEM8(ecx)); /* 0x0053DE11: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0053DE13: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0053DE14: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053DE11; /* 0x0053DE16: jne 0x53de11 */
L_0053DE18:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x0053DE18: sub ecx, edi */
    _flag_k = FK_CMP;
L_0053DE1A:
    PUSH32(esp, ecx); /* 0x0053DE1A: push ecx */
    PUSH32(esp, edx); /* 0x0053DE1B: push edx */
    ecx = ebp + (-0x28); /* 0x0053DE1C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0053DE1F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
L_0053DE24:
    edx = ebp + (-0x28); /* 0x0053DE24: lea edx, [ebp - 0x28] */
    ecx = esi; /* 0x0053DE27: mov ecx, esi */
    RECOMP_CALL(sub_0052DC70); /* 0x0053DE29: call 0x52dc70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = 1; /* 0x0053DE2E: mov dword ptr [ebp - 0x2c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053DE35: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0053DE39: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053DE4B; /* 0x0053DE3D: jb 0x53de4b */
L_0053DE3F:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0053DE3F: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053DE42: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053DE48: add esp, 4 */
    _flag_k = FK_ADD;
L_0053DE4B:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0053DE4B: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0053DE52: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0053DE59: mov byte ptr [ebp - 0x28], 0 */
    eax = esi; /* 0x0053DE5D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053DE5F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053DE62: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053DE69: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053DE6A: pop edi */
    esi = POP32_VAL(esp); /* 0x0053DE6B: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0053DE6C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053DE6F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0053DE71: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053DE76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053DE78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053DE79: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053DE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053DE80u);

L_0053DE80:
    PUSH32(esp, ebp); /* 0x0053DE80: push ebp */
    ebp = esp; /* 0x0053DE81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053DE83: push -1 */
    PUSH32(esp, 0x0079C6BDu); /* 0x0053DE85: push 0x79c6bd */
    eax = MEM32(FS_BASE + (0)); /* 0x0053DE8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053DE90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x0053DE91: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053DE97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053DE9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0053DE9E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0053DEA1: push ebx */
    PUSH32(esp, esi); /* 0x0053DEA2: push esi */
    PUSH32(esp, edi); /* 0x0053DEA3: push edi */
    PUSH32(esp, eax); /* 0x0053DEA4: push eax */
    eax = ebp + (-0xC); /* 0x0053DEA5: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053DEA8: mov dword ptr fs:[0], eax */
    /* cmp MEM32(0x8F8CBC), 2 */ /* 0x0053DEAE: cmp dword ptr [0x8f8cbc], 2 */
    _flag_a = (uint32_t)(MEM32(0x8F8CBC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x0053DEB5: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xF8)) = eax; /* 0x0053DEB8: mov dword ptr [ebp - 0xf8], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_0053E11D; /* 0x0053DEBE: jb 0x53e11d */
L_0053DEC4:
    PUSH32(esp, 0); /* 0x0053DEC4: push 0 */
    PUSH32(esp, 0); /* 0x0053DEC6: push 0 */
    MEM32(ebp + (-0xEC)) = 0; /* 0x0053DEC8: mov dword ptr [ebp - 0xec], 0 */
    MEM32(ebp + (-0xE8)) = 0; /* 0x0053DED2: mov dword ptr [ebp - 0xe8], 0 */
    RECOMP_CALL(sub_0053D6C0); /* 0x0053DEDC: call 0x53d6c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053DEE1: mov edi, eax */
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053DEE3: mov dword ptr [ebp - 0xf0], edi */
    MEM32(ebp + (-0xEC)) = edi; /* 0x0053DEE9: mov dword ptr [ebp - 0xec], edi */
    MEM32(ebp + (-0x4)) = 2; /* 0x0053DEEF: mov dword ptr [ebp - 4], 2 */
    eax = ebp + (-0xE4); /* 0x0053DEF6: lea eax, [ebp - 0xe4] */
    PUSH32(esp, 0x0053CD20u); /* 0x0053DEFC: push 0x53cd20 */
    PUSH32(esp, 0x0053CCC0u); /* 0x0053DF01: push 0x53ccc0 */
    PUSH32(esp, 0x1Au); /* 0x0053DF06: push 0x1a */
    PUSH32(esp, 8); /* 0x0053DF08: push 8 */
    PUSH32(esp, eax); /* 0x0053DF0A: push eax */
    RECOMP_CALL(sub_0077F6F5); /* 0x0053DF0B: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0053DF10: mov byte ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053DF14: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xF4)) = esi; /* 0x0053DF16: mov dword ptr [ebp - 0xf4], esi */
    /* cmp MEM32(0x8F8CBC), esi */ /* 0x0053DF1C: cmp dword ptr [0x8f8cbc], esi */
    _flag_a = (uint32_t)(MEM32(0x8F8CBC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E059; /* 0x0053DF22: je 0x53e059 */
L_0053DF28:
    goto L_0053DF30; /* 0x0053DF28: jmp 0x53df30 */
L_0053DF30:
    eax = MEM32(0x8F8CB8); /* 0x0053DF30: mov eax, dword ptr [0x8f8cb8] */
    ecx = ebp + (-0xEC); /* 0x0053DF35: lea ecx, [ebp - 0xec] */
    PUSH32(esp, 1); /* 0x0053DF3B: push 1 */
    eax = MEM32(eax); /* 0x0053DF3D: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(eax)); /* 0x0053DF3F: push dword ptr [eax] */
    PUSH32(esp, eax); /* 0x0053DF41: push eax */
    PUSH32(esp, 0x008F8CB8u); /* 0x0053DF42: push 0x8f8cb8 */
    PUSH32(esp, MEM32(edi)); /* 0x0053DF47: push dword ptr [edi] */
    RECOMP_CALL(sub_0053E530); /* 0x0053DF49: call 0x53e530 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xEC)); /* 0x0053DF4E: mov edi, dword ptr [ebp - 0xec] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0053DF54: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x0053DF56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053DFF8; /* 0x0053DF58: je 0x53dff8 */
L_0053DF5E:
    esi = ebp + (-0xE4); /* 0x0053DF5E: lea esi, [ebp - 0xe4] */
L_0053DF64:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x0053DF64: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053DFBE; /* 0x0053DF68: je 0x53dfbe */
L_0053DF6A:
    PUSH32(esp, MEM32(ebp + (-0xF8))); /* 0x0053DF6A: push dword ptr [ebp - 0xf8] */
    eax = ebp + (-0xEC); /* 0x0053DF70: lea eax, [ebp - 0xec] */
    ecx = esi; /* 0x0053DF76: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0053DF78: push eax */
    RECOMP_CALL(sub_0053EA80); /* 0x0053DF79: call 0x53ea80 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xEC); /* 0x0053DF7E: lea eax, [ebp - 0xec] */
    /* cmp esi, eax */ /* 0x0053DF84: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053DFAC; /* 0x0053DF86: je 0x53dfac */
L_0053DF88:
    edi = MEM32(esi); /* 0x0053DF88: mov edi, dword ptr [esi] */
    eax = MEM32(ebp + (-0xEC)); /* 0x0053DF8A: mov eax, dword ptr [ebp - 0xec] */
    MEM32(ebp + (-0xEC)) = edi; /* 0x0053DF90: mov dword ptr [ebp - 0xec], edi */
    MEM32(esi) = eax; /* 0x0053DF96: mov dword ptr [esi], eax */
    ecx = MEM32(esi + 0x4); /* 0x0053DF98: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0xE8)); /* 0x0053DF9B: mov eax, dword ptr [ebp - 0xe8] */
    MEM32(esi + 0x4) = eax; /* 0x0053DFA1: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x0053DFA4: mov dword ptr [ebp - 0xe8], ecx */
    goto L_0053DFB2; /* 0x0053DFAA: jmp 0x53dfb2 */
L_0053DFAC:
    edi = MEM32(ebp + (-0xEC)); /* 0x0053DFAC: mov edi, dword ptr [ebp - 0xec] */
L_0053DFB2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0053DFB2: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x0053DFB3: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0xF4)) */ /* 0x0053DFB6: cmp ebx, dword ptr [ebp - 0xf4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xF4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0053DF64; /* 0x0053DFBC: jb 0x53df64 */
L_0053DFBE:
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053DFBE: mov dword ptr [ebp - 0xf0], edi */
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053DFC4: mov dword ptr [ebp - 0xf0], edi */
    /* cmp ebx, 0x19u */ /* 0x0053DFCA: cmp ebx, 0x19 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053DFF2; /* 0x0053DFCD: jne 0x53dff2 */
L_0053DFCF:
    PUSH32(esp, MEM32(ebp + (-0xF8))); /* 0x0053DFCF: push dword ptr [ebp - 0xf8] */
    eax = ebp + (-0xEC); /* 0x0053DFD5: lea eax, [ebp - 0xec] */
    PUSH32(esp, eax); /* 0x0053DFDB: push eax */
    ecx = ebp + (-0x24); /* 0x0053DFDC: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_0053EA80); /* 0x0053DFDF: call 0x53ea80 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xEC)); /* 0x0053DFE4: mov edi, dword ptr [ebp - 0xec] */
    esi = MEM32(ebp + (-0xF4)); /* 0x0053DFEA: mov esi, dword ptr [ebp - 0xf4] */
    goto L_0053E034; /* 0x0053DFF0: jmp 0x53e034 */
L_0053DFF2:
    esi = MEM32(ebp + (-0xF4)); /* 0x0053DFF2: mov esi, dword ptr [ebp - 0xf4] */
L_0053DFF8:
    edx = ebp + (-0xE4); /* 0x0053DFF8: lea edx, [ebp - 0xe4] */
    edx = edx + ebx * 8; /* 0x0053DFFE: lea edx, [edx + ebx*8] */
    eax = ebp + (-0xEC); /* 0x0053E001: lea eax, [ebp - 0xec] */
    /* cmp edx, eax */ /* 0x0053E007: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E029; /* 0x0053E009: je 0x53e029 */
L_0053E00B:
    eax = MEM32(edx); /* 0x0053E00B: mov eax, dword ptr [edx] */
    MEM32(edx) = edi; /* 0x0053E00D: mov dword ptr [edx], edi */
    edi = eax; /* 0x0053E00F: mov edi, eax */
    MEM32(ebp + (-0xEC)) = edi; /* 0x0053E011: mov dword ptr [ebp - 0xec], edi */
    ecx = MEM32(edx + 0x4); /* 0x0053E017: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(ebp + (-0xE8)); /* 0x0053E01A: mov eax, dword ptr [ebp - 0xe8] */
    MEM32(edx + 0x4) = eax; /* 0x0053E020: mov dword ptr [edx + 4], eax */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x0053E023: mov dword ptr [ebp - 0xe8], ecx */
L_0053E029:
    /* cmp ebx, esi */ /* 0x0053E029: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E034; /* 0x0053E02B: jne 0x53e034 */
L_0053E02D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E02D: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xF4)) = esi; /* 0x0053E02E: mov dword ptr [ebp - 0xf4], esi */
L_0053E034:
    /* cmp MEM32(0x8F8CBC), 0 */ /* 0x0053E034: cmp dword ptr [0x8f8cbc], 0 */
    _flag_a = (uint32_t)(MEM32(0x8F8CBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053DF30; /* 0x0053E03B: jne 0x53df30 */
L_0053E041:
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053E041: mov dword ptr [ebp - 0xf0], edi */
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053E047: mov dword ptr [ebp - 0xf0], edi */
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053E04D: mov dword ptr [ebp - 0xf0], edi */
    MEM32(ebp + (-0xF0)) = edi; /* 0x0053E053: mov dword ptr [ebp - 0xf0], edi */
L_0053E059:
    /* cmp esi, 1 */ /* 0x0053E059: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053E08E; /* 0x0053E05C: jbe 0x53e08e */
L_0053E05E:
    edi = esi + (-0x1); /* 0x0053E05E: lea edi, [esi - 1] */
    esi = MEM32(ebp + (-0xF8)); /* 0x0053E061: mov esi, dword ptr [ebp - 0xf8] */
    ebx = ebp + (-0xDC); /* 0x0053E067: lea ebx, [ebp - 0xdc] */
    ecx = ecx; /* 0x0053E06D: lea ecx, [ecx] */
L_0053E070:
    PUSH32(esp, esi); /* 0x0053E070: push esi */
    eax = ebx + (-0x8); /* 0x0053E071: lea eax, [ebx - 8] */
    ecx = ebx; /* 0x0053E074: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x0053E076: push eax */
    RECOMP_CALL(sub_0053EA80); /* 0x0053E077: call 0x53ea80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x0053E07C: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0053E07F: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0053E070; /* 0x0053E080: jne 0x53e070 */
L_0053E082:
    edi = MEM32(ebp + (-0xF0)); /* 0x0053E082: mov edi, dword ptr [ebp - 0xf0] */
    esi = MEM32(ebp + (-0xF4)); /* 0x0053E088: mov esi, dword ptr [ebp - 0xf4] */
L_0053E08E:
    ecx = MEM32(0x8F8CB8); /* 0x0053E08E: mov ecx, dword ptr [0x8f8cb8] */
    edx = ebp + esi * 8 + (-0xEC); /* 0x0053E094: lea edx, [ebp + esi*8 - 0xec] */
    /* cmp edx, 0x008F8CB8u */ /* 0x0053E09B: cmp edx, 0x8f8cb8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x008F8CB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E0BD; /* 0x0053E0A1: je 0x53e0bd */
L_0053E0A3:
    esi = MEM32(edx + 0x4); /* 0x0053E0A3: mov esi, dword ptr [edx + 4] */
    /* test esi, esi */ /* 0x0053E0A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E0BD; /* 0x0053E0A8: je 0x53e0bd */
L_0053E0AA:
    eax = MEM32(edx); /* 0x0053E0AA: mov eax, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x0053E0AC: push esi */
    PUSH32(esp, eax); /* 0x0053E0AD: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0053E0AE: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x0053E0B0: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x0053E0B1: push dword ptr [ecx] */
    ecx = 0x008F8CB8u; /* 0x0053E0B3: mov ecx, 0x8f8cb8 */
    RECOMP_CALL(sub_0053E530); /* 0x0053E0B8: call 0x53e530 */
    RECOMP_FLAGS_IN();
L_0053E0BD:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053E0BD: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0xE4); /* 0x0053E0C1: lea eax, [ebp - 0xe4] */
    PUSH32(esp, 0x0053CD20u); /* 0x0053E0C7: push 0x53cd20 */
    PUSH32(esp, 0x1Au); /* 0x0053E0CC: push 0x1a */
    PUSH32(esp, 8); /* 0x0053E0CE: push 8 */
    PUSH32(esp, eax); /* 0x0053E0D0: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0053E0D1: call 0x77f628 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x0053E0D6: mov dword ptr [ebp - 4], 4 */
    ebx = MEM32(edi); /* 0x0053E0DD: mov ebx, dword ptr [edi] */
    MEM32(edi) = edi; /* 0x0053E0DF: mov dword ptr [edi], edi */
    MEM32(edi + 0x4) = edi; /* 0x0053E0E1: mov dword ptr [edi + 4], edi */
    MEM32(ebp + (-0xE8)) = 0; /* 0x0053E0E4: mov dword ptr [ebp - 0xe8], 0 */
    /* cmp ebx, edi */ /* 0x0053E0EE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E10C; /* 0x0053E0F0: je 0x53e10c */
L_0053E0F2:
    esi = MEM32(ebx); /* 0x0053E0F2: mov esi, dword ptr [ebx] */
    ecx = ebx + 0x8; /* 0x0053E0F4: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_005350A0); /* 0x0053E0F7: call 0x5350a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x0053E0FC: push ebx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053E0FD: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053E103: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = esi; /* 0x0053E106: mov ebx, esi */
    /* cmp esi, edi */ /* 0x0053E108: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E0F2; /* 0x0053E10A: jne 0x53e0f2 */
L_0053E10C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053E10C: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, edi); /* 0x0053E113: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053E114: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053E11A: add esp, 4 */
    _flag_k = FK_ADD;
L_0053E11D:
    ecx = MEM32(ebp + (-0xC)); /* 0x0053E11D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053E120: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053E127: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053E128: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E129: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053E12A: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0053E12B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E12E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E130: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E135: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E138: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E140u);

L_0053E140:
    PUSH32(esp, ebp); /* 0x0053E140: push ebp */
    ebp = esp; /* 0x0053E141: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053E143: push -1 */
    PUSH32(esp, 0x0079C6F9u); /* 0x0053E145: push 0x79c6f9 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053E14A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053E150: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0053E151: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053E154: push ebx */
    PUSH32(esp, esi); /* 0x0053E155: push esi */
    PUSH32(esp, edi); /* 0x0053E156: push edi */
    eax = MEM32(0x855000); /* 0x0053E157: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E15C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053E15E: push eax */
    eax = ebp + (-0xC); /* 0x0053E15F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053E162: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0053E168: mov ebx, ecx */
    PUSH32(esp, 0); /* 0x0053E16A: push 0 */
    ecx = ebp + (-0x14); /* 0x0053E16C: lea ecx, [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC354)); /* 0x0053E16F: call dword ptr [0x7cc354] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053E175: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(0x927B88); /* 0x0053E17C: mov eax, dword ptr [0x927b88] */
    ecx = MEM32(0x7CC348); /* 0x0053E181: mov ecx, dword ptr [0x7cc348] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0053E187: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(0x7CC30C)); /* 0x0053E18A: call dword ptr [0x7cc30c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0053E190: mov edi, eax */
    eax = MEM32(ebx); /* 0x0053E192: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x0053E194: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053E1A5; /* 0x0053E197: jae 0x53e1a5 */
L_0053E199:
    ecx = MEM32(eax + 0x8); /* 0x0053E199: mov ecx, dword ptr [eax + 8] */
    esi = MEM32(ecx + edi * 4); /* 0x0053E19C: mov esi, dword ptr [ecx + edi*4] */
    /* test esi, esi */ /* 0x0053E19F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E211; /* 0x0053E1A1: jne 0x53e211 */
L_0053E1A3:
    goto L_0053E1A7; /* 0x0053E1A3: jmp 0x53e1a7 */
L_0053E1A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E1A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053E1A7:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x0053E1A7: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E1BE; /* 0x0053E1AB: je 0x53e1be */
L_0053E1AD:
    RECOMP_ICALL(MEM32(0x7CC350)); /* 0x0053E1AD: call dword ptr [0x7cc350] */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x0053E1B3: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053E1C2; /* 0x0053E1B6: jae 0x53e1c2 */
L_0053E1B8:
    eax = MEM32(eax + 0x8); /* 0x0053E1B8: mov eax, dword ptr [eax + 8] */
    esi = MEM32(eax + edi * 4); /* 0x0053E1BB: mov esi, dword ptr [eax + edi*4] */
L_0053E1BE:
    /* test esi, esi */ /* 0x0053E1BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E211; /* 0x0053E1C0: jne 0x53e211 */
L_0053E1C2:
    esi = MEM32(ebp + (-0x10)); /* 0x0053E1C2: mov esi, dword ptr [ebp - 0x10] */
    /* test esi, esi */ /* 0x0053E1C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E211; /* 0x0053E1C7: jne 0x53e211 */
L_0053E1C9:
    eax = ebp + (-0x10); /* 0x0053E1C9: lea eax, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x0053E1CC: push ebx */
    PUSH32(esp, eax); /* 0x0053E1CD: push eax */
    RECOMP_ICALL(MEM32(0x7CC340)); /* 0x0053E1CE: call dword ptr [0x7cc340] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053E1D4: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0053E1D7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E1F8; /* 0x0053E1DA: jne 0x53e1f8 */
L_0053E1DC:
    PUSH32(esp, 0x007DEB94u); /* 0x0053E1DC: push 0x7deb94 */
    ecx = ebp + (-0x20); /* 0x0053E1E1: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x7CC6C0)); /* 0x0053E1E4: call dword ptr [0x7cc6c0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0084FEACu); /* 0x0053E1EA: push 0x84feac */
    eax = ebp + (-0x20); /* 0x0053E1EF: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x0053E1F2: push eax */
    RECOMP_CALL(sub_00780016); /* 0x0053E1F3: call 0x780016 */
    RECOMP_FLAGS_IN();
L_0053E1F8:
    esi = MEM32(ebp + (-0x10)); /* 0x0053E1F8: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x0053E1FB: mov ecx, esi */
    MEM32(0x927B88) = esi; /* 0x0053E1FD: mov dword ptr [0x927b88], esi */
    edx = MEM32(esi); /* 0x0053E203: mov edx, dword ptr [esi] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x0053E205: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0053E208: push esi */
    RECOMP_CALL(sub_0077F457); /* 0x0053E209: call 0x77f457 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053E20E: add esp, 4 */
    _flag_k = FK_ADD;
L_0053E211:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053E211: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x14); /* 0x0053E218: lea ecx, [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC358)); /* 0x0053E21B: call dword ptr [0x7cc358] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x0053E221: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053E223: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053E226: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053E22D: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053E22E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E22F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053E230: pop ebx */
    esp = ebp; /* 0x0053E231: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E233: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E234: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E240u);

L_0053E240:
    PUSH32(esp, esi); /* 0x0053E240: push esi */
    PUSH32(esp, ecx); /* 0x0053E241: push ecx */
    esi = ecx; /* 0x0053E242: mov esi, ecx */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053E244: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053E249: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x6Eu); /* 0x0053E24B: push 0x6e */
    ecx = MEM32(ecx); /* 0x0053E24D: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E24F: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053E255: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x75u); /* 0x0053E257: push 0x75 */
    ecx = MEM32(ecx); /* 0x0053E259: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E25B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053E261: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x6Cu); /* 0x0053E263: push 0x6c */
    ecx = MEM32(ecx); /* 0x0053E265: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E267: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053E26D: mov ecx, dword ptr [esi] */
    PUSH32(esp, 0x6Cu); /* 0x0053E26F: push 0x6c */
    ecx = MEM32(ecx); /* 0x0053E271: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E273: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x0053E279: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x0053E27B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E27C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E280u);

L_0053E280:
    PUSH32(esp, ebp); /* 0x0053E280: push ebp */
    ebp = esp; /* 0x0053E281: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053E283: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0053E285: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053E28A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053E290: push eax */
    PUSH32(esp, esi); /* 0x0053E291: push esi */
    PUSH32(esp, edi); /* 0x0053E292: push edi */
    eax = MEM32(0x855000); /* 0x0053E293: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E298: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053E29A: push eax */
    eax = ebp + (-0xC); /* 0x0053E29B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053E29E: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053E2A4: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x0053E2A6: push ecx */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053E2A7: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053E2AC: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0053E2AF: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x0053E2B2: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053E2C0; /* 0x0053E2B5: jbe 0x53e2c0 */
L_0053E2B7:
    PUSH32(esp, ecx); /* 0x0053E2B7: push ecx */
    ecx = edi + 0x4; /* 0x0053E2B8: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_0053EE50); /* 0x0053E2BB: call 0x53ee50 */
    RECOMP_FLAGS_IN();
L_0053E2C0:
    ecx = MEM32(edi + 0x10); /* 0x0053E2C0: mov ecx, dword ptr [edi + 0x10] */
    eax = ecx + 0x8; /* 0x0053E2C3: lea eax, [ecx + 8] */
    MEM32(edi + 0x10) = eax; /* 0x0053E2C6: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053E2C9: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053E2D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E2DE; /* 0x0053E2D2: je 0x53e2de */
L_0053E2D4:
    MEM32(ecx) = 0; /* 0x0053E2D4: mov dword ptr [ecx], 0 */
    MEM8(ecx + 0x4) = (uint8_t)(0); /* 0x0053E2DA: mov byte ptr [ecx + 4], 0 */
L_0053E2DE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053E2DE: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi); /* 0x0053E2E5: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0x7Bu); /* 0x0053E2E7: push 0x7b */
    ecx = MEM32(ecx); /* 0x0053E2E9: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E2EB: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x0053E2F1: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053E2F3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053E2F6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053E2FD: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053E2FE: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E2FF: pop esi */
    esp = ebp; /* 0x0053E300: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E303: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E310u);

L_0053E310:
    PUSH32(esp, ebp); /* 0x0053E310: push ebp */
    ebp = esp; /* 0x0053E311: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053E313: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0053E316: push edi */
    edi = ecx; /* 0x0053E317: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x0053E319: mov dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFFFFFFF8u; /* 0x0053E31C: add dword ptr [edi + 0x10], -8 */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x10); /* 0x0053E320: mov eax, dword ptr [edi + 0x10] */
    /* cmp MEM32(eax), 0 */ /* 0x0053E323: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E365; /* 0x0053E326: je 0x53e365 */
L_0053E328:
    ecx = MEM32(edi); /* 0x0053E328: mov ecx, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x0053E32A: push esi */
    PUSH32(esp, 0xAu); /* 0x0053E32B: push 0xa */
    ecx = MEM32(ecx); /* 0x0053E32D: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E32F: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x10); /* 0x0053E335: mov esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0xC); /* 0x0053E338: sub esi, dword ptr [edi + 0xc] */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(edi + 0x24)); /* 0x0053E33B: mov al, byte ptr [edi + 0x24] */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x0053E33E: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x0053E33E: shr esi, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi + 0x28)); /* 0x0053E341: imul esi, dword ptr [edi + 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0053E345: mov byte ptr [ebp - 4], al */
    eax = MEM32(edi); /* 0x0053E348: mov eax, dword ptr [edi] */
    /* test esi, esi */ /* 0x0053E34A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E364; /* 0x0053E34C: je 0x53e364 */
L_0053E34E:
    PUSH32(esp, ebx); /* 0x0053E34E: push ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x0053E34F: mov ebx, dword ptr [ebp - 4] */
    edi = eax; /* 0x0053E352: mov edi, eax */
L_0053E354:
    ecx = MEM32(edi); /* 0x0053E354: mov ecx, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x0053E356: push ebx */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E357: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0053E35D: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0053E354; /* 0x0053E35E: jne 0x53e354 */
L_0053E360:
    edi = MEM32(ebp + (-0xC)); /* 0x0053E360: mov edi, dword ptr [ebp - 0xc] */
    ebx = POP32_VAL(esp); /* 0x0053E363: pop ebx */
L_0053E364:
    esi = POP32_VAL(esp); /* 0x0053E364: pop esi */
L_0053E365:
    ecx = MEM32(edi); /* 0x0053E365: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0x7Du); /* 0x0053E367: push 0x7d */
    ecx = MEM32(ecx); /* 0x0053E369: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E36B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053E371: mov eax, dword ptr [edi + 0x10] */
    /* cmp eax, MEM32(edi + 0xC) */ /* 0x0053E374: cmp eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E383; /* 0x0053E377: jne 0x53e383 */
L_0053E379:
    ecx = MEM32(edi); /* 0x0053E379: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x0053E37B: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC33C)); /* 0x0053E37D: call dword ptr [0x7cc33c] */
    RECOMP_FLAGS_IN();
L_0053E383:
    SET_LO8(eax, 1); /* 0x0053E383: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E385: pop edi */
    esp = ebp; /* 0x0053E386: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E388: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E389: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E390u);

L_0053E390:
    PUSH32(esp, ebp); /* 0x0053E390: push ebp */
    ebp = esp; /* 0x0053E391: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053E393: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0053E395: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053E39A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053E3A0: push eax */
    PUSH32(esp, esi); /* 0x0053E3A1: push esi */
    PUSH32(esp, edi); /* 0x0053E3A2: push edi */
    eax = MEM32(0x855000); /* 0x0053E3A3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E3A8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053E3AA: push eax */
    eax = ebp + (-0xC); /* 0x0053E3AB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053E3AE: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053E3B4: mov edi, ecx */
    PUSH32(esp, ecx); /* 0x0053E3B6: push ecx */
    RECOMP_CALL(sub_0053E5B0); /* 0x0053E3B7: call 0x53e5b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053E3BC: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0053E3BF: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x0053E3C2: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053E3D0; /* 0x0053E3C5: jbe 0x53e3d0 */
L_0053E3C7:
    PUSH32(esp, ecx); /* 0x0053E3C7: push ecx */
    ecx = edi + 0x4; /* 0x0053E3C8: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_0053EE50); /* 0x0053E3CB: call 0x53ee50 */
    RECOMP_FLAGS_IN();
L_0053E3D0:
    ecx = MEM32(edi + 0x10); /* 0x0053E3D0: mov ecx, dword ptr [edi + 0x10] */
    eax = ecx + 0x8; /* 0x0053E3D3: lea eax, [ecx + 8] */
    MEM32(edi + 0x10) = eax; /* 0x0053E3D6: mov dword ptr [edi + 0x10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053E3D9: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053E3E0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E3EE; /* 0x0053E3E2: je 0x53e3ee */
L_0053E3E4:
    MEM32(ecx) = 0; /* 0x0053E3E4: mov dword ptr [ecx], 0 */
    MEM8(ecx + 0x4) = (uint8_t)(1); /* 0x0053E3EA: mov byte ptr [ecx + 4], 1 */
L_0053E3EE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053E3EE: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi); /* 0x0053E3F5: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0x5Bu); /* 0x0053E3F7: push 0x5b */
    ecx = MEM32(ecx); /* 0x0053E3F9: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E3FB: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x0053E401: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053E403: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053E406: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053E40D: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053E40E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E40F: pop esi */
    esp = ebp; /* 0x0053E410: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E412: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E413: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E420u);

L_0053E420:
    PUSH32(esp, ebp); /* 0x0053E420: push ebp */
    ebp = esp; /* 0x0053E421: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053E423: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0053E426: push edi */
    edi = ecx; /* 0x0053E427: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x0053E429: mov dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) + 0xFFFFFFF8u; /* 0x0053E42C: add dword ptr [edi + 0x10], -8 */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x10); /* 0x0053E430: mov eax, dword ptr [edi + 0x10] */
    /* cmp MEM32(eax), 0 */ /* 0x0053E433: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E475; /* 0x0053E436: je 0x53e475 */
L_0053E438:
    ecx = MEM32(edi); /* 0x0053E438: mov ecx, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x0053E43A: push esi */
    PUSH32(esp, 0xAu); /* 0x0053E43B: push 0xa */
    ecx = MEM32(ecx); /* 0x0053E43D: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E43F: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x10); /* 0x0053E445: mov esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0xC); /* 0x0053E448: sub esi, dword ptr [edi + 0xc] */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(edi + 0x24)); /* 0x0053E44B: mov al, byte ptr [edi + 0x24] */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x0053E44E: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x0053E44E: shr esi, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi + 0x28)); /* 0x0053E451: imul esi, dword ptr [edi + 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0053E455: mov byte ptr [ebp - 4], al */
    eax = MEM32(edi); /* 0x0053E458: mov eax, dword ptr [edi] */
    /* test esi, esi */ /* 0x0053E45A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E474; /* 0x0053E45C: je 0x53e474 */
L_0053E45E:
    PUSH32(esp, ebx); /* 0x0053E45E: push ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x0053E45F: mov ebx, dword ptr [ebp - 4] */
    edi = eax; /* 0x0053E462: mov edi, eax */
L_0053E464:
    ecx = MEM32(edi); /* 0x0053E464: mov ecx, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x0053E466: push ebx */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E467: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0053E46D: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0053E464; /* 0x0053E46E: jne 0x53e464 */
L_0053E470:
    edi = MEM32(ebp + (-0xC)); /* 0x0053E470: mov edi, dword ptr [ebp - 0xc] */
    ebx = POP32_VAL(esp); /* 0x0053E473: pop ebx */
L_0053E474:
    esi = POP32_VAL(esp); /* 0x0053E474: pop esi */
L_0053E475:
    ecx = MEM32(edi); /* 0x0053E475: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0x5Du); /* 0x0053E477: push 0x5d */
    ecx = MEM32(ecx); /* 0x0053E479: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E47B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x0053E481: mov eax, dword ptr [edi + 0x10] */
    /* cmp eax, MEM32(edi + 0xC) */ /* 0x0053E484: cmp eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E493; /* 0x0053E487: jne 0x53e493 */
L_0053E489:
    ecx = MEM32(edi); /* 0x0053E489: mov ecx, dword ptr [edi] */
    ecx = MEM32(ecx); /* 0x0053E48B: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC33C)); /* 0x0053E48D: call dword ptr [0x7cc33c] */
    RECOMP_FLAGS_IN();
L_0053E493:
    SET_LO8(eax, 1); /* 0x0053E493: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E495: pop edi */
    esp = ebp; /* 0x0053E496: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E498: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E499: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E4A0u);

L_0053E4A0:
    PUSH32(esp, ebp); /* 0x0053E4A0: push ebp */
    ebp = esp; /* 0x0053E4A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053E4A3: push -1 */
    PUSH32(esp, 0x007818B0u); /* 0x0053E4A5: push 0x7818b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053E4AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053E4B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053E4B1: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E4B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E4B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053E4BB: push eax */
    eax = ebp + (-0xC); /* 0x0053E4BC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053E4BF: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927B7C); /* 0x0053E4C5: mov eax, dword ptr [0x927b7c] */
    /* test eax, eax */ /* 0x0053E4CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E516; /* 0x0053E4CC: jne 0x53e516 */
L_0053E4CE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0053E4CE: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0053E4D1: mov ecx, esp */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053E4D3: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x007CCE84u); /* 0x0053E4D6: push 0x7cce84 */
    RECOMP_CALL(sub_00409FA0); /* 0x0053E4DB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053E4E0: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0053E4E7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x0053E4EA: mov ecx, esp */
    MEM32(ebp + (-0x14)) = esp; /* 0x0053E4EC: mov dword ptr [ebp - 0x14], esp */
    PUSH32(esp, 0x007CCEC4u); /* 0x0053E4EF: push 0x7ccec4 */
    RECOMP_CALL(sub_00409FA0); /* 0x0053E4F4: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053E4F9: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053E4FD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = 0x15u; /* 0x0053E504: mov ecx, 0x15 */
    RECOMP_CALL(sub_00668DA0); /* 0x0053E509: call 0x668da0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927B7C); /* 0x0053E50E: mov eax, dword ptr [0x927b7c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x0053E513: add esp, 0x30 */
    _flag_k = FK_ADD;
L_0053E516:
    ecx = MEM32(ebp + (-0xC)); /* 0x0053E516: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053E519: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053E520: pop ecx */
    esp = ebp; /* 0x0053E521: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E523: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E524: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E530u);

L_0053E530:
    PUSH32(esp, ebp); /* 0x0053E530: push ebp */
    ebp = esp; /* 0x0053E531: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x0053E533: mov edx, dword ptr [ebp + 0xc] */
    /* cmp ecx, edx */ /* 0x0053E536: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E563; /* 0x0053E538: je 0x53e563 */
L_0053E53A:
    PUSH32(esp, esi); /* 0x0053E53A: push esi */
    esi = MEM32(ebp + 0x18); /* 0x0053E53B: mov esi, dword ptr [ebp + 0x18] */
    eax = 0x01414140u; /* 0x0053E53E: mov eax, 0x1414140 */
    PUSH32(esp, edi); /* 0x0053E543: push edi */
    edi = MEM32(ecx + 0x4); /* 0x0053E544: mov edi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x0053E547: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x0053E549: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0053E558; /* 0x0053E54B: jae 0x53e558 */
L_0053E54D:
    PUSH32(esp, 0x007E1400u); /* 0x0053E54D: push 0x7e1400 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0053E552: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0053E558:
    eax = edi + esi; /* 0x0053E558: lea eax, [edi + esi] */
    MEM32(ecx + 0x4) = eax; /* 0x0053E55B: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - esi; /* 0x0053E55E: sub dword ptr [edx + 4], esi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0053E561: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E562: pop esi */
L_0053E563:
    eax = MEM32(ebp + 0x10); /* 0x0053E563: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x0053E566: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x14); /* 0x0053E569: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x0053E56C: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x14); /* 0x0053E56E: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax + 0x4); /* 0x0053E571: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x0053E574: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x0053E577: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x0053E579: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x0053E57C: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x10); /* 0x0053E57F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x0053E582: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x8); /* 0x0053E584: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x14); /* 0x0053E587: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ecx + 0x4); /* 0x0053E58A: mov edx, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4); /* 0x0053E58D: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0053E590: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x0053E593: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x0053E596: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x14); /* 0x0053E599: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x0053E59C: mov dword ptr [eax + 4], ecx */
    eax = MEM32(ebp + 0x10); /* 0x0053E59F: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = edx; /* 0x0053E5A2: mov dword ptr [eax + 4], edx */
    ebp = POP32_VAL(esp); /* 0x0053E5A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0053E5A6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_0053E5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E5B0u);

L_0053E5B0:
    PUSH32(esp, ebp); /* 0x0053E5B0: push ebp */
    ebp = esp; /* 0x0053E5B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053E5B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0053E5B6: push esi */
    esi = ecx; /* 0x0053E5B7: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x0053E5B9: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0xC); /* 0x0053E5BC: sub eax, dword ptr [esi + 0xc] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0053E670; /* 0x0053E5BF: je 0x53e670 */
L_0053E5C5:
    PUSH32(esp, ebx); /* 0x0053E5C5: push ebx */
    ebx = MEM32(esi + 0x10); /* 0x0053E5C6: mov ebx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 8; /* 0x0053E5C9: sub ebx, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0053E5CC: push edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x0053E5CD: mov dword ptr [ebp - 0xc], ebx */
    /* cmp MEM8(ebx + 0x4), 0 */ /* 0x0053E5D0: cmp byte ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E62B; /* 0x0053E5D4: je 0x53e62b */
L_0053E5D6:
    /* cmp MEM32(ebx), 0 */ /* 0x0053E5D6: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x0053E5D9: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x0053E5DB: mov ecx, dword ptr [ecx] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053E5EB; /* 0x0053E5DD: jbe 0x53e5eb */
L_0053E5DF:
    PUSH32(esp, 0x2Cu); /* 0x0053E5DF: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E5E1: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x0053E5E7: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x0053E5E9: mov ecx, dword ptr [ecx] */
L_0053E5EB:
    PUSH32(esp, 0xAu); /* 0x0053E5EB: push 0xa */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E5ED: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x10); /* 0x0053E5F3: mov edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0xC); /* 0x0053E5F6: sub edi, dword ptr [esi + 0xc] */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(esi + 0x24)); /* 0x0053E5F9: mov al, byte ptr [esi + 0x24] */
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x0053E5FC: shr edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 3u; /* 0x0053E5FC: shr edi, 3 */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi + 0x28)); /* 0x0053E5FF: imul edi, dword ptr [esi + 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0053E603: mov byte ptr [ebp - 4], al */
    eax = MEM32(esi); /* 0x0053E606: mov eax, dword ptr [esi] */
    /* test edi, edi */ /* 0x0053E608: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E659; /* 0x0053E60A: je 0x53e659 */
L_0053E60C:
    esi = MEM32(ebp + (-0x4)); /* 0x0053E60C: mov esi, dword ptr [ebp - 4] */
    ebx = eax; /* 0x0053E60F: mov ebx, eax */
L_0053E611:
    ecx = MEM32(ebx); /* 0x0053E611: mov ecx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x0053E613: push esi */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E614: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0053E61A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0053E611; /* 0x0053E61B: jne 0x53e611 */
L_0053E61D:
    ebx = MEM32(ebp + (-0xC)); /* 0x0053E61D: mov ebx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x0053E620: pop edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x0053E621: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    ebx = POP32_VAL(esp); /* 0x0053E623: pop ebx */
    esi = POP32_VAL(esp); /* 0x0053E624: pop esi */
    esp = ebp; /* 0x0053E625: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E627: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E628: ret 4 */
L_0053E62B:
    eax = MEM32(ebx); /* 0x0053E62B: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x0053E62D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E641; /* 0x0053E62F: je 0x53e641 */
L_0053E631:
    ecx = MEM32(esi); /* 0x0053E631: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x0053E633: mov ecx, dword ptr [ecx] */
    /* test LO8(eax), 1 */ /* 0x0053E635: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E664; /* 0x0053E637: jne 0x53e664 */
L_0053E639:
    PUSH32(esp, 0x2Cu); /* 0x0053E639: push 0x2c */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E63B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
L_0053E641:
    PUSH32(esp, 0xAu); /* 0x0053E641: push 0xa */
L_0053E643:
    ecx = MEM32(esi); /* 0x0053E643: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x0053E645: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E647: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebx), 1 */ /* 0x0053E64D: test byte ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E659; /* 0x0053E650: jne 0x53e659 */
L_0053E652:
    ecx = esi; /* 0x0053E652: mov ecx, esi */
    RECOMP_CALL(sub_0053E680); /* 0x0053E654: call 0x53e680 */
    RECOMP_FLAGS_IN();
L_0053E659:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x0053E659: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x0053E65B: pop edi */
    ebx = POP32_VAL(esp); /* 0x0053E65C: pop ebx */
    esi = POP32_VAL(esp); /* 0x0053E65D: pop esi */
    esp = ebp; /* 0x0053E65E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E660: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E661: ret 4 */
L_0053E664:
    PUSH32(esp, 0x3Au); /* 0x0053E664: push 0x3a */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E666: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x0053E66C: push 0x20 */
    RECOMP_BACKEDGE();
    goto L_0053E643; /* 0x0053E66E: jmp 0x53e643 */
L_0053E670:
    MEM8(esi + 0x20) = (uint8_t)(1); /* 0x0053E670: mov byte ptr [esi + 0x20], 1 */
    esi = POP32_VAL(esp); /* 0x0053E674: pop esi */
    esp = ebp; /* 0x0053E675: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E677: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E678: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E680u);

L_0053E680:
    PUSH32(esp, ebp); /* 0x0053E680: push ebp */
    ebp = esp; /* 0x0053E681: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0053E683: push ecx */
    SET_LO8(eax, MEM8(ecx + 0x24)); /* 0x0053E684: mov al, byte ptr [ecx + 0x24] */
    PUSH32(esp, ebx); /* 0x0053E687: push ebx */
    ebx = MEM32(ecx); /* 0x0053E688: mov ebx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x0053E68A: push esi */
    esi = MEM32(ecx + 0x10); /* 0x0053E68B: mov esi, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0xC); /* 0x0053E68E: sub esi, dword ptr [ecx + 0xc] */
    _flag_k = FK_CMP;
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x0053E691: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x0053E691: shr esi, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ecx + 0x28)); /* 0x0053E694: imul esi, dword ptr [ecx + 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x0053E698: mov byte ptr [ebp - 4], al */
    /* test esi, esi */ /* 0x0053E69B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E6B0; /* 0x0053E69D: je 0x53e6b0 */
L_0053E69F:
    PUSH32(esp, edi); /* 0x0053E69F: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x0053E6A0: mov edi, dword ptr [ebp - 4] */
L_0053E6A3:
    ecx = MEM32(ebx); /* 0x0053E6A3: mov ecx, dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x0053E6A5: push edi */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E6A6: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0053E6AC: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0053E6A3; /* 0x0053E6AD: jne 0x53e6a3 */
L_0053E6AF:
    edi = POP32_VAL(esp); /* 0x0053E6AF: pop edi */
L_0053E6B0:
    esi = POP32_VAL(esp); /* 0x0053E6B0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053E6B1: pop ebx */
    esp = ebp; /* 0x0053E6B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E6B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E6B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E6C0u);

L_0053E6C0:
    PUSH32(esp, ebp); /* 0x0053E6C0: push ebp */
    ebp = esp; /* 0x0053E6C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0053E6C3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E6C6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E6CB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E6CD: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x0053E6D0: mov dword ptr [ebp - 0x14], ecx */
    edx = ebp + (-0x10); /* 0x0053E6D3: lea edx, [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x0053E6D6: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x0053E6D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053E6E7; /* 0x0053E6DB: jns 0x53e6e7 */
L_0053E6DD:
    ecx = ~ecx; /* 0x0053E6DD: not ecx */
    MEM8(ebp + (-0x10)) = (uint8_t)(0x2Du); /* 0x0053E6DF: mov byte ptr [ebp - 0x10], 0x2d */
    edx = ebp + (-0xF); /* 0x0053E6E3: lea edx, [ebp - 0xf] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0053E6E6: inc ecx */
    _flag_k = FK_INC;
L_0053E6E7:
    PUSH32(esp, ebx); /* 0x0053E6E7: push ebx */
    PUSH32(esp, esi); /* 0x0053E6E8: push esi */
    PUSH32(esp, edi); /* 0x0053E6E9: push edi */
    RECOMP_CALL(sub_0052C800); /* 0x0053E6EA: call 0x52c800 */
    RECOMP_FLAGS_IN();
    edi = ebp + (-0x10); /* 0x0053E6EF: lea edi, [ebp - 0x10] */
    ebx = eax; /* 0x0053E6F2: mov ebx, eax */
    ecx = edi; /* 0x0053E6F4: mov ecx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E6F6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053E6F8: sub ebx, ecx */
    _flag_k = FK_CMP;
    edx = edi; /* 0x0053E6FA: mov edx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053E6FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x0053E6FE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = ecx; } /* 0x0053E700: cmova ebx, ecx */
    /* test ebx, ebx */ /* 0x0053E703: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E720; /* 0x0053E705: je 0x53e720 */
L_0053E707:
    eax = (uint32_t)MEM8(edi); /* 0x0053E707: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x0053E70A: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x0053E70B: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x0053E70E: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E710: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E712: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E718: inc esi */
    _flag_k = FK_INC;
    edi = edi + 0x1; /* 0x0053E719: lea edi, [edi + 1] */
    /* cmp esi, ebx */ /* 0x0053E71C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E707; /* 0x0053E71E: jne 0x53e707 */
L_0053E720:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E720: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0053E723: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E725: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E726: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E727: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053E729: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E72A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E72F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E731: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E732: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E740u);

L_0053E740:
    PUSH32(esp, ebp); /* 0x0053E740: push ebp */
    ebp = esp; /* 0x0053E741: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0053E743: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E746: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E74B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E74D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0053E750: push ebx */
    PUSH32(esp, esi); /* 0x0053E751: push esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x0053E752: mov dword ptr [ebp - 0x14], ecx */
    edx = ebp + (-0x10); /* 0x0053E755: lea edx, [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x0053E758: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x0053E75B: push edi */
    RECOMP_CALL(sub_0052C800); /* 0x0053E75C: call 0x52c800 */
    RECOMP_FLAGS_IN();
    edi = ebp + (-0x10); /* 0x0053E761: lea edi, [ebp - 0x10] */
    ebx = eax; /* 0x0053E764: mov ebx, eax */
    ecx = edi; /* 0x0053E766: mov ecx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E768: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053E76A: sub ebx, ecx */
    _flag_k = FK_CMP;
    edx = edi; /* 0x0053E76C: mov edx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053E76E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x0053E770: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = ecx; } /* 0x0053E772: cmova ebx, ecx */
    /* test ebx, ebx */ /* 0x0053E775: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E799; /* 0x0053E777: je 0x53e799 */
L_0053E779:
    esp = esp; /* 0x0053E779: lea esp, [esp] */
L_0053E780:
    eax = (uint32_t)MEM8(edi); /* 0x0053E780: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x0053E783: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x0053E784: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x0053E787: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E789: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E78B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E791: inc esi */
    _flag_k = FK_INC;
    edi = edi + 0x1; /* 0x0053E792: lea edi, [edi + 1] */
    /* cmp esi, ebx */ /* 0x0053E795: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E780; /* 0x0053E797: jne 0x53e780 */
L_0053E799:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E799: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0053E79C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E79E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E79F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E7A0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053E7A2: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E7A3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E7A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E7AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053E7AB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053E7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E7B0u);

L_0053E7B0:
    PUSH32(esp, ebp); /* 0x0053E7B0: push ebp */
    ebp = esp; /* 0x0053E7B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x0053E7B3: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E7B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E7BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E7BD: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x0053E7C0: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x0053E7C3: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x0053E7C6: mov dword ptr [ebp - 0x20], ecx */
    ecx = ebp + (-0x1C); /* 0x0053E7C9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x0053E7CC: push ebx */
    PUSH32(esp, esi); /* 0x0053E7CD: push esi */
    PUSH32(esp, edi); /* 0x0053E7CE: push edi */
    /* test edx, edx */ /* 0x0053E7CF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053E7EA; /* 0x0053E7D1: jg 0x53e7ea */
L_0053E7D3:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053E7D9; /* 0x0053E7D3: jl 0x53e7d9 */
L_0053E7D5:
    /* test eax, eax */ /* 0x0053E7D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0053E7EA; /* 0x0053E7D7: jae 0x53e7ea */
L_0053E7D9:
    eax = ~eax; /* 0x0053E7D9: not eax */
    MEM8(ebp + (-0x1C)) = (uint8_t)(0x2Du); /* 0x0053E7DB: mov byte ptr [ebp - 0x1c], 0x2d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x0053E7DF: add eax, 1 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x1B); /* 0x0053E7E2: lea ecx, [ebp - 0x1b] */
    edx = ~edx; /* 0x0053E7E5: not edx */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0053E7E7: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_0053E7EA:
    PUSH32(esp, edx); /* 0x0053E7EA: push edx */
    PUSH32(esp, eax); /* 0x0053E7EB: push eax */
    RECOMP_CALL(sub_0052CA00); /* 0x0053E7EC: call 0x52ca00 */
    RECOMP_FLAGS_IN();
    edi = ebp + (-0x1C); /* 0x0053E7F1: lea edi, [ebp - 0x1c] */
    ebx = eax; /* 0x0053E7F4: mov ebx, eax */
    ecx = edi; /* 0x0053E7F6: mov ecx, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053E7F8: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053E7FB: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E7FD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053E7FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x0053E801: mov edx, edi */
    /* cmp edx, eax */ /* 0x0053E803: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = ecx; } /* 0x0053E805: cmova ebx, ecx */
    /* test ebx, ebx */ /* 0x0053E808: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E829; /* 0x0053E80A: je 0x53e829 */
L_0053E80C:
    esp = esp; /* 0x0053E80C: lea esp, [esp] */
L_0053E810:
    eax = (uint32_t)MEM8(edi); /* 0x0053E810: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x0053E813: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x0053E814: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x0053E817: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E819: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E81B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E821: inc esi */
    _flag_k = FK_INC;
    edi = edi + 0x1; /* 0x0053E822: lea edi, [edi + 1] */
    /* cmp esi, ebx */ /* 0x0053E825: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E810; /* 0x0053E827: jne 0x53e810 */
L_0053E829:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E829: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0053E82C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E82E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E82F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E830: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053E832: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E833: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E838: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E83A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053E83B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053E840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E840u);

L_0053E840:
    PUSH32(esp, ebp); /* 0x0053E840: push ebp */
    ebp = esp; /* 0x0053E841: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0053E843: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E846: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E84B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E84D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x0053E850: push ebx */
    PUSH32(esp, esi); /* 0x0053E851: push esi */
    PUSH32(esp, edi); /* 0x0053E852: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053E853: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x0053E856: mov dword ptr [ebp - 0x1c], ecx */
    ecx = ebp + (-0x18); /* 0x0053E859: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053E85C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0052CA00); /* 0x0053E85F: call 0x52ca00 */
    RECOMP_FLAGS_IN();
    edi = ebp + (-0x18); /* 0x0053E864: lea edi, [ebp - 0x18] */
    ebx = eax; /* 0x0053E867: mov ebx, eax */
    ecx = edi; /* 0x0053E869: mov ecx, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053E86B: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053E86E: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E870: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053E872: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x0053E874: mov edx, edi */
    /* cmp edx, eax */ /* 0x0053E876: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = ecx; } /* 0x0053E878: cmova ebx, ecx */
    /* test ebx, ebx */ /* 0x0053E87B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E899; /* 0x0053E87D: je 0x53e899 */
L_0053E87F:
    /* nop */ /* 0x0053E87F: nop  */
L_0053E880:
    eax = (uint32_t)MEM8(edi); /* 0x0053E880: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x0053E883: push eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x0053E884: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x0053E887: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E889: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E88B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E891: inc esi */
    _flag_k = FK_INC;
    edi = edi + 0x1; /* 0x0053E892: lea edi, [edi + 1] */
    /* cmp esi, ebx */ /* 0x0053E895: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E880; /* 0x0053E897: jne 0x53e880 */
L_0053E899:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E899: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0053E89C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E89E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E89F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E8A0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053E8A2: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E8A3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E8A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E8AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053E8AB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053E8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E8B0u);

L_0053E8B0:
    PUSH32(esp, ebp); /* 0x0053E8B0: push ebp */
    ebp = esp; /* 0x0053E8B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x0053E8B3: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0053E8B6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053E8BB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E8BD: mov dword ptr [ebp - 4], eax */
    _xmm[0] = _xmm[1]; /* 0x0053E8C0: movapd xmm0, xmm1 */
    eax = ecx; /* 0x0053E8C4: mov eax, ecx */
    MEM64(ebp + (-0x30)) = _xmm[0].u64[0]; /* 0x0053E8C6: movsd qword ptr [ebp - 0x30], xmm0 */
    ecx = MEM32(ebp + (-0x2C)); /* 0x0053E8CB: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x0053E8CE: push ebx */
    PUSH32(esp, esi); /* 0x0053E8CF: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF00000u);
    ecx = ecx & 0x7FF00000u; /* 0x0053E8D0: and ecx, 0x7ff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x0053E8D6: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0053E8D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0053E8DB: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053E8F9; /* 0x0053E8DC: jne 0x53e8f9 */
L_0053E8DE:
    /* cmp ecx, 0x7FF00000u */ /* 0x0053E8DE: cmp ecx, 0x7ff00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E8F9; /* 0x0053E8E4: jne 0x53e8f9 */
L_0053E8E6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0053E8E6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x0053E8E8: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E8E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053E8EA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E8EB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E8EE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E8F0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E8F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E8F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E8F8: ret  */
L_0053E8F9:
    edx = MEM32(eax + 0x1C); /* 0x0053E8F9: mov edx, dword ptr [eax + 0x1c] */
    ecx = ebp + (-0x20); /* 0x0053E8FC: lea ecx, [ebp - 0x20] */
    _xmm[2] = _xmm[0]; /* 0x0053E8FF: movapd xmm2, xmm0 */
    RECOMP_CALL(sub_0052D730); /* 0x0053E903: call 0x52d730 */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x20); /* 0x0053E908: lea esi, [ebp - 0x20] */
    ebx = eax; /* 0x0053E90B: mov ebx, eax */
    ecx = esi; /* 0x0053E90D: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0053E90F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053E911: sub ebx, ecx */
    _flag_k = FK_CMP;
    edx = esi; /* 0x0053E913: mov edx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0053E915: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x0053E917: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ebx = ecx; } /* 0x0053E919: cmova ebx, ecx */
    /* test ebx, ebx */ /* 0x0053E91C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053E939; /* 0x0053E91E: je 0x53e939 */
L_0053E920:
    eax = (uint32_t)MEM8(esi); /* 0x0053E920: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x0053E923: push eax */
    eax = MEM32(ebp + (-0x24)); /* 0x0053E924: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x0053E927: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E929: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E92B: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0053E931: inc edi */
    _flag_k = FK_INC;
    esi = esi + 0x1; /* 0x0053E932: lea esi, [esi + 1] */
    /* cmp edi, ebx */ /* 0x0053E935: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053E920; /* 0x0053E937: jne 0x53e920 */
L_0053E939:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E939: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, 1); /* 0x0053E93C: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x0053E93E: pop edi */
    esi = POP32_VAL(esp); /* 0x0053E93F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0053E940: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0053E942: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0053E943: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053E948: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053E94A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053E94B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053E950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053E950u);

L_0053E950:
    PUSH32(esp, ebp); /* 0x0053E950: push ebp */
    ebp = esp; /* 0x0053E951: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0053E953: push ecx */
    eax = ecx; /* 0x0053E954: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x0053E956: push ebx */
    PUSH32(esp, esi); /* 0x0053E957: push esi */
    PUSH32(esp, edi); /* 0x0053E958: push edi */
    ecx = MEM32(eax); /* 0x0053E959: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x22u); /* 0x0053E95B: push 0x22 */
    MEM32(ebp + (-0x4)) = eax; /* 0x0053E95D: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ecx); /* 0x0053E960: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E962: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x0053E968: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x0053E96C: mov ebx, dword ptr [ebp + 8] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053EA15; /* 0x0053E96F: jbe 0x53ea15 */
L_0053E975:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0053E975: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_0053E977:
    SET_LO8(eax, MEM8(ebx)); /* 0x0053E977: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0053E979: inc esi */
    _flag_k = FK_INC;
    edi = (uint32_t)LO8(eax); /* 0x0053E97A: movzx edi, al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0053E97D: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(edi + 0x7EDA90), 0 */ /* 0x0053E97E: cmp byte ptr [edi + 0x7eda90], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x7EDA90)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053E9F9; /* 0x0053E985: je 0x53e9f9 */
L_0053E987:
    ecx = MEM32(ebp + (-0x4)); /* 0x0053E987: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 0x5Cu); /* 0x0053E98A: push 0x5c */
    ecx = MEM32(ecx); /* 0x0053E98C: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx); /* 0x0053E98E: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E990: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(edi + 0x7EDA90); /* 0x0053E996: movzx eax, byte ptr [edi + 0x7eda90] */
    PUSH32(esp, eax); /* 0x0053E99D: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x0053E99E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x0053E9A1: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E9A3: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E9A5: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x7EDA90), 0x75u */ /* 0x0053E9AB: cmp byte ptr [edi + 0x7eda90], 0x75 */
    _flag_a = (uint32_t)(MEM8(edi + 0x7EDA90)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053EA0C; /* 0x0053E9B2: jne 0x53ea0c */
L_0053E9B4:
    eax = MEM32(ebp + (-0x4)); /* 0x0053E9B4: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x30u); /* 0x0053E9B7: push 0x30 */
    ecx = MEM32(eax); /* 0x0053E9B9: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E9BB: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E9BD: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0053E9C3: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x30u); /* 0x0053E9C6: push 0x30 */
    ecx = MEM32(eax); /* 0x0053E9C8: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E9CA: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E9CC: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x0053E9D2: mov eax, edi */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0053E9D4: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x0053E9D4: shr eax, 4 */
    eax = (uint32_t)MEM8(eax + 0x7ED920); /* 0x0053E9D7: movzx eax, byte ptr [eax + 0x7ed920] */
    PUSH32(esp, eax); /* 0x0053E9DE: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x0053E9DF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x0053E9E2: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053E9E4: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053E9E6: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x0053E9EC: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edi + 0x7ED920); /* 0x0053E9EF: movzx eax, byte ptr [edi + 0x7ed920] */
    PUSH32(esp, eax); /* 0x0053E9F6: push eax */
    goto L_0053E9FF; /* 0x0053E9F7: jmp 0x53e9ff */
L_0053E9F9:
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x0053E9F9: mov byte ptr [ebp + 8], al */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053E9FC: push dword ptr [ebp + 8] */
L_0053E9FF:
    eax = MEM32(ebp + (-0x4)); /* 0x0053E9FF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x0053EA02: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053EA04: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053EA06: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
L_0053EA0C:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x0053EA0C: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0053E977; /* 0x0053EA0F: jb 0x53e977 */
L_0053EA15:
    eax = MEM32(ebp + (-0x4)); /* 0x0053EA15: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x22u); /* 0x0053EA18: push 0x22 */
    ecx = MEM32(eax); /* 0x0053EA1A: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x0053EA1C: mov ecx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC344)); /* 0x0053EA1E: call dword ptr [0x7cc344] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0053EA24: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EA25: pop esi */
    SET_LO8(eax, 1); /* 0x0053EA26: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x0053EA28: pop ebx */
    esp = ebp; /* 0x0053EA29: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053EA2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053EA2C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053EA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EA30u);

L_0053EA30:
    PUSH32(esp, ebp); /* 0x0053EA30: push ebp */
    ebp = esp; /* 0x0053EA31: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0053EA33: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0053EA36: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0053EA37: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x0053EA3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053EA64; /* 0x0053EA3C: jl 0x53ea64 */
L_0053EA3E:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053EA44; /* 0x0053EA3E: jg 0x53ea44 */
L_0053EA40:
    /* test edx, edx */ /* 0x0053EA40: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EA5A; /* 0x0053EA42: je 0x53ea5a */
L_0053EA44:
    eax = MEM32(ecx); /* 0x0053EA44: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFFFu; /* 0x0053EA46: add edx, -1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0053EA49: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax); /* 0x0053EA4C: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x0053EA4E: mov dword ptr [ecx], eax */
    /* test esi, esi */ /* 0x0053EA50: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053EA44; /* 0x0053EA52: jg 0x53ea44 */
L_0053EA54:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053EA64; /* 0x0053EA54: jl 0x53ea64 */
L_0053EA56:
    /* test edx, edx */ /* 0x0053EA56: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EA44; /* 0x0053EA58: jne 0x53ea44 */
L_0053EA5A:
    /* test esi, esi */ /* 0x0053EA5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053EA79; /* 0x0053EA5C: jg 0x53ea79 */
L_0053EA5E:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053EA64; /* 0x0053EA5E: jl 0x53ea64 */
L_0053EA60:
    /* test edx, edx */ /* 0x0053EA60: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_0053EA79; /* 0x0053EA62: jae 0x53ea79 */
L_0053EA64:
    eax = MEM32(ecx); /* 0x0053EA64: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x0053EA66: add edx, 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0053EA69: adc esi, 0 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(eax + 0x4); /* 0x0053EA6C: mov eax, dword ptr [eax + 4] */
    MEM32(ecx) = eax; /* 0x0053EA6F: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_0053EA64; /* 0x0053EA71: js 0x53ea64 */
L_0053EA73:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_0053EA79; /* 0x0053EA73: jg 0x53ea79 */
L_0053EA75:
    /* test edx, edx */ /* 0x0053EA75: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_0053EA64; /* 0x0053EA77: jb 0x53ea64 */
L_0053EA79:
    esi = POP32_VAL(esp); /* 0x0053EA79: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053EA7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EA7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053EA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EA80u);

L_0053EA80:
    PUSH32(esp, ebp); /* 0x0053EA80: push ebp */
    ebp = esp; /* 0x0053EA81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053EA83: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x0053EA86: mov edx, ecx */
    PUSH32(esp, ebx); /* 0x0053EA88: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0053EA89: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0053EA8C: mov dword ptr [ebp - 4], edx */
    /* cmp ebx, edx */ /* 0x0053EA8F: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053EB00; /* 0x0053EA91: je 0x53eb00 */
L_0053EA93:
    ecx = MEM32(edx); /* 0x0053EA93: mov ecx, dword ptr [edx] */
    eax = MEM32(ebx); /* 0x0053EA95: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x0053EA97: push esi */
    PUSH32(esp, edi); /* 0x0053EA98: push edi */
    edi = MEM32(ecx); /* 0x0053EA99: mov edi, dword ptr [ecx] */
    esi = MEM32(eax); /* 0x0053EA9B: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0053EA9D: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x0053EAA0: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + 0x8) = esi; /* 0x0053EAA3: mov dword ptr [ebp + 8], esi */
    /* cmp edi, ecx */ /* 0x0053EAA6: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053EAEC; /* 0x0053EAA8: je 0x53eaec */
L_0053EAAA:
    ebx = ebx; /* 0x0053EAAA: lea ebx, [ebx] */
L_0053EAB0:
    /* cmp esi, eax */ /* 0x0053EAB0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053EAFE; /* 0x0053EAB2: je 0x53eafe */
L_0053EAB4:
    eax = edi + 0x8; /* 0x0053EAB4: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x0053EAB7: push eax */
    eax = esi + 0x8; /* 0x0053EAB8: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x0053EABB: push eax */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x0053EABC: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053EABF: add esp, 8 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x0053EAC2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EADD; /* 0x0053EAC4: je 0x53eadd */
L_0053EAC6:
    esi = MEM32(esi); /* 0x0053EAC6: mov esi, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x0053EAC8: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 1); /* 0x0053EACB: push 1 */
    PUSH32(esp, esi); /* 0x0053EACD: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053EACE: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x0053EAD1: push ebx */
    PUSH32(esp, edi); /* 0x0053EAD2: push edi */
    RECOMP_CALL(sub_0053E530); /* 0x0053EAD3: call 0x53e530 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = esi; /* 0x0053EAD8: mov dword ptr [ebp + 8], esi */
    goto L_0053EADF; /* 0x0053EADB: jmp 0x53eadf */
L_0053EADD:
    edi = MEM32(edi); /* 0x0053EADD: mov edi, dword ptr [edi] */
L_0053EADF:
    ecx = MEM32(ebp + (-0x8)); /* 0x0053EADF: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x0053EAE2: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edi, ecx */ /* 0x0053EAE5: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053EAB0; /* 0x0053EAE7: jne 0x53eab0 */
L_0053EAE9:
    edx = MEM32(ebp + (-0x4)); /* 0x0053EAE9: mov edx, dword ptr [ebp - 4] */
L_0053EAEC:
    /* cmp esi, eax */ /* 0x0053EAEC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053EAFE; /* 0x0053EAEE: je 0x53eafe */
L_0053EAF0:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x0053EAF0: push dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x0053EAF3: push eax */
    PUSH32(esp, esi); /* 0x0053EAF4: push esi */
    PUSH32(esp, ebx); /* 0x0053EAF5: push ebx */
    PUSH32(esp, ecx); /* 0x0053EAF6: push ecx */
    ecx = edx; /* 0x0053EAF7: mov ecx, edx */
    RECOMP_CALL(sub_0053E530); /* 0x0053EAF9: call 0x53e530 */
    RECOMP_FLAGS_IN();
L_0053EAFE:
    edi = POP32_VAL(esp); /* 0x0053EAFE: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EAFF: pop esi */
L_0053EB00:
    ebx = POP32_VAL(esp); /* 0x0053EB00: pop ebx */
    esp = ebp; /* 0x0053EB01: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053EB03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053EB04: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053EB10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EB10u);

L_0053EB10:
    PUSH32(esp, ebp); /* 0x0053EB10: push ebp */
    ebp = esp; /* 0x0053EB11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053EB13: push -1 */
    PUSH32(esp, 0x0079C720u); /* 0x0053EB15: push 0x79c720 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053EB1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053EB20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053EB21: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053EB24: push ebx */
    PUSH32(esp, esi); /* 0x0053EB25: push esi */
    PUSH32(esp, edi); /* 0x0053EB26: push edi */
    eax = MEM32(0x855000); /* 0x0053EB27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053EB2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053EB2E: push eax */
    eax = ebp + (-0xC); /* 0x0053EB2F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053EB32: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053EB38: mov dword ptr [ebp - 0x10], esp */
    edi = edx; /* 0x0053EB3B: mov edi, edx */
    esi = ecx; /* 0x0053EB3D: mov esi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053EB3F: mov dword ptr [ebp - 4], 0 */
L_0053EB46:
    /* test edi, edi */ /* 0x0053EB46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EB6D; /* 0x0053EB48: je 0x53eb6d */
L_0053EB4A:
    /* test esi, esi */ /* 0x0053EB4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EB5E; /* 0x0053EB4C: je 0x53eb5e */
L_0053EB4E:
    PUSH32(esp, 0x2630u); /* 0x0053EB4E: push 0x2630 */
    PUSH32(esp, 0); /* 0x0053EB53: push 0 */
    PUSH32(esp, esi); /* 0x0053EB55: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x0053EB56: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053EB5B: add esp, 0xc */
    _flag_k = FK_ADD;
L_0053EB5E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0053EB5E: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = edi; /* 0x0053EB5F: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2630u; /* 0x0053EB62: add esi, 0x2630 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x0053EB68: mov dword ptr [ebp - 0x18], esi */
    RECOMP_BACKEDGE();
    goto L_0053EB46; /* 0x0053EB6B: jmp 0x53eb46 */
L_0053EB6D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053EB6D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053EB74: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053EB77: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053EB7E: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053EB7F: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EB80: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EB81: pop ebx */
    esp = ebp; /* 0x0053EB82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053EB84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EB85: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053EB86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EB86u);

L_0053EB86:
    PUSH32(esp, 0); /* 0x0053EB86: push 0 */
    PUSH32(esp, 0); /* 0x0053EB88: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053EB8A: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053EB8Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053EB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EB90u);

L_0053EB90:
    PUSH32(esp, ebp); /* 0x0053EB90: push ebp */
    ebp = esp; /* 0x0053EB91: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0053EB93: push ebx */
    PUSH32(esp, esi); /* 0x0053EB94: push esi */
    ebx = edx; /* 0x0053EB95: mov ebx, edx */
    esi = ecx; /* 0x0053EB97: mov esi, ecx */
    /* cmp esi, ebx */ /* 0x0053EB99: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053EBC7; /* 0x0053EB9B: je 0x53ebc7 */
L_0053EB9D:
    PUSH32(esp, edi); /* 0x0053EB9D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0053EB9E: mov edi, dword ptr [ebp + 8] */
L_0053EBA1:
    PUSH32(esp, 0x2630u); /* 0x0053EBA1: push 0x2630 */
    PUSH32(esp, esi); /* 0x0053EBA6: push esi */
    PUSH32(esp, edi); /* 0x0053EBA7: push edi */
    RECOMP_CALL(sub_00780838); /* 0x0053EBA8: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2630u; /* 0x0053EBAD: add esi, 0x2630 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053EBB3: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2630u; /* 0x0053EBB6: add edi, 0x2630 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x0053EBBC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053EBA1; /* 0x0053EBBE: jne 0x53eba1 */
L_0053EBC0:
    eax = edi; /* 0x0053EBC0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053EBC2: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EBC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EBC4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053EBC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EBC6: ret  */
L_0053EBC7:
    eax = MEM32(ebp + 0x8); /* 0x0053EBC7: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x0053EBCA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EBCB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053EBCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EBCD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053EBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EBD0u);

L_0053EBD0:
    PUSH32(esp, ebp); /* 0x0053EBD0: push ebp */
    ebp = esp; /* 0x0053EBD1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053EBD3: push -1 */
    PUSH32(esp, 0x0079C750u); /* 0x0053EBD5: push 0x79c750 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053EBDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053EBE0: push eax */
    PUSH32(esp, ecx); /* 0x0053EBE1: push ecx */
    PUSH32(esp, ebx); /* 0x0053EBE2: push ebx */
    PUSH32(esp, esi); /* 0x0053EBE3: push esi */
    PUSH32(esp, edi); /* 0x0053EBE4: push edi */
    eax = MEM32(0x855000); /* 0x0053EBE5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053EBEA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053EBEC: push eax */
    eax = ebp + (-0xC); /* 0x0053EBED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053EBF0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053EBF6: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053EBF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053EBFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053D610); /* 0x0053EBFF: call 0x53d610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0053EC04: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x0053EC06: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053EC09: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x8; /* 0x0053EC10: lea ecx, [esi + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x0053EC13: mov dword ptr [ebp + 8], ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053EC16: mov byte ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x0053EC1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EC6E; /* 0x0053EC1C: je 0x53ec6e */
L_0053EC1E:
    edx = MEM32(ebp + 0x10); /* 0x0053EC1E: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx); /* 0x0053EC21: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x0053EC23: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x4); /* 0x0053EC25: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0053EC28: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x0053EC2B: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x10) = 0; /* 0x0053EC2E: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = 0; /* 0x0053EC35: mov dword ptr [ecx + 0x14], 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053EC3C: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053EC43: mov dword ptr [ecx + 0x10], 0 */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x0053EC4A: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053EC54; /* 0x0053EC4E: jb 0x53ec54 */
L_0053EC50:
    eax = MEM32(ecx); /* 0x0053EC50: mov eax, dword ptr [ecx] */
    goto L_0053EC56; /* 0x0053EC52: jmp 0x53ec56 */
L_0053EC54:
    eax = ecx; /* 0x0053EC54: mov eax, ecx */
L_0053EC56:
    MEM8(eax) = (uint8_t)(0); /* 0x0053EC56: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053EC59: push -1 */
    PUSH32(esp, 0); /* 0x0053EC5B: push 0 */
    eax = edx + 0x8; /* 0x0053EC5D: lea eax, [edx + 8] */
    PUSH32(esp, eax); /* 0x0053EC60: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0053EC61: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053EC66: mov byte ptr [ebp - 4], 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053EC6A: mov byte ptr [ebp - 4], 1 */
L_0053EC6E:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053EC6E: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053EC72: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053EC79: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053EC7B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053EC7E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053EC85: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053EC86: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EC87: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EC88: pop ebx */
    esp = ebp; /* 0x0053EC89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053EC8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053EC8C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053EC8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EC8Fu);

L_0053EC8F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053EC8F: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053EC92: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EC98: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0053EC9B: push 0 */
    PUSH32(esp, 0); /* 0x0053EC9D: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053EC9F: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053ECA4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053ECB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053ECB0u);

L_0053ECB0:
    PUSH32(esp, ebp); /* 0x0053ECB0: push ebp */
    ebp = esp; /* 0x0053ECB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053ECB3: push -1 */
    PUSH32(esp, 0x0079C775u); /* 0x0053ECB5: push 0x79c775 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053ECBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053ECC0: push eax */
    PUSH32(esp, ecx); /* 0x0053ECC1: push ecx */
    PUSH32(esp, ebx); /* 0x0053ECC2: push ebx */
    PUSH32(esp, esi); /* 0x0053ECC3: push esi */
    PUSH32(esp, edi); /* 0x0053ECC4: push edi */
    eax = MEM32(0x855000); /* 0x0053ECC5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053ECCA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053ECCC: push eax */
    eax = ebp + (-0xC); /* 0x0053ECCD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053ECD0: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053ECD6: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053ECD9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053ECDC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053D6C0); /* 0x0053ECDF: call 0x53d6c0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0053ECE4: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x0053ECE6: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053ECE9: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x8; /* 0x0053ECF0: lea ecx, [esi + 8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053ECF3: mov byte ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x0053ECF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053ED03; /* 0x0053ECF9: je 0x53ed03 */
L_0053ECFB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0053ECFB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_0053F270); /* 0x0053ECFE: call 0x53f270 */
    RECOMP_FLAGS_IN();
L_0053ED03:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053ED03: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053ED07: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0053ED0E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053ED10: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053ED13: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053ED1A: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053ED1B: pop edi */
    esi = POP32_VAL(esp); /* 0x0053ED1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053ED1D: pop ebx */
    esp = ebp; /* 0x0053ED1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053ED20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053ED21: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053ED24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053ED24u);

L_0053ED24:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053ED24: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053ED27: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053ED2D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0053ED30: push 0 */
    PUSH32(esp, 0); /* 0x0053ED32: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053ED34: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053ED39u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053ED40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053ED40u);

L_0053ED40:
    ecx = MEM32(ecx); /* 0x0053ED40: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x0053ED42: add ecx, 0x18 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x8); /* 0x0053ED45: mov eax, dword ptr [ecx + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x0053ED48: mov dword ptr [ecx + 0xc], eax */
    goto L_0053ED50; /* 0x0053ED4B: jmp 0x53ed50 */
L_0053ED50:
    PUSH32(esp, esi); /* 0x0053ED50: push esi */
    esi = ecx; /* 0x0053ED51: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053ED53: push edi */
    edi = MEM32(esi + 0xC); /* 0x0053ED54: mov edi, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x0053ED57: mov eax, dword ptr [esi + 8] */
    /* cmp edi, eax */ /* 0x0053ED5A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053ED80; /* 0x0053ED5C: jne 0x53ed80 */
L_0053ED5E:
    PUSH32(esp, eax); /* 0x0053ED5E: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053ED5F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053ED65: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0053ED68: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0053ED6F: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0053ED76: mov dword ptr [esi + 0x10], 0 */
    edi = POP32_VAL(esp); /* 0x0053ED7D: pop edi */
    esi = POP32_VAL(esp); /* 0x0053ED7E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053ED7F: ret  */
L_0053ED80:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0053ED80: sub edi, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_0053EDA1; /* 0x0053ED82: jne 0x53eda1 */
L_0053ED84:
    PUSH32(esp, eax); /* 0x0053ED84: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053ED85: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053ED8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053ED8D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053ED90: mov dword ptr [esi + 8], eax */
    ecx = eax + edi; /* 0x0053ED93: lea ecx, [eax + edi] */
    eax = edi; /* 0x0053ED96: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053ED98: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053ED99: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053ED9C: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053ED9F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EDA0: ret  */
L_0053EDA1:
    PUSH32(esp, edi); /* 0x0053EDA1: push edi */
    PUSH32(esp, eax); /* 0x0053EDA2: push eax */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x0053EDA3: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053EDA9: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053EDAC: mov dword ptr [esi + 8], eax */
    ecx = eax + edi; /* 0x0053EDAF: lea ecx, [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0053EDB2: add eax, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0053EDB4: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053EDB5: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053EDB8: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053EDBB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EDBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053ED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053ED50u);

L_0053ED50:
    PUSH32(esp, esi); /* 0x0053ED50: push esi */
    esi = ecx; /* 0x0053ED51: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053ED53: push edi */
    edi = MEM32(esi + 0xC); /* 0x0053ED54: mov edi, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x0053ED57: mov eax, dword ptr [esi + 8] */
    /* cmp edi, eax */ /* 0x0053ED5A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053ED80; /* 0x0053ED5C: jne 0x53ed80 */
L_0053ED5E:
    PUSH32(esp, eax); /* 0x0053ED5E: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053ED5F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053ED65: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0053ED68: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0053ED6F: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0053ED76: mov dword ptr [esi + 0x10], 0 */
    edi = POP32_VAL(esp); /* 0x0053ED7D: pop edi */
    esi = POP32_VAL(esp); /* 0x0053ED7E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053ED7F: ret  */
L_0053ED80:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0053ED80: sub edi, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_0053EDA1; /* 0x0053ED82: jne 0x53eda1 */
L_0053ED84:
    PUSH32(esp, eax); /* 0x0053ED84: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053ED85: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053ED8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053ED8D: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053ED90: mov dword ptr [esi + 8], eax */
    ecx = eax + edi; /* 0x0053ED93: lea ecx, [eax + edi] */
    eax = edi; /* 0x0053ED96: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053ED98: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053ED99: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053ED9C: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053ED9F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EDA0: ret  */
L_0053EDA1:
    PUSH32(esp, edi); /* 0x0053EDA1: push edi */
    PUSH32(esp, eax); /* 0x0053EDA2: push eax */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x0053EDA3: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053EDA9: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053EDAC: mov dword ptr [esi + 8], eax */
    ecx = eax + edi; /* 0x0053EDAF: lea ecx, [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0053EDB2: add eax, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0053EDB4: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053EDB5: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053EDB8: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053EDBB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EDBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053EDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EDC0u);

L_0053EDC0:
    PUSH32(esp, ebp); /* 0x0053EDC0: push ebp */
    ebp = esp; /* 0x0053EDC1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0053EDC3: push ebx */
    PUSH32(esp, esi); /* 0x0053EDC4: push esi */
    esi = ecx; /* 0x0053EDC5: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053EDC7: push edi */
    eax = MEM32(esi + 0x8); /* 0x0053EDC8: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0053EDCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EDFB; /* 0x0053EDCD: jne 0x53edfb */
L_0053EDCF:
    /* cmp MEM32(esi), eax */ /* 0x0053EDCF: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053EDF6; /* 0x0053EDD1: jne 0x53edf6 */
L_0053EDD3:
    PUSH32(esp, 1); /* 0x0053EDD3: push 1 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053EDD5: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EDDB: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053EDDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EDEF; /* 0x0053EDE0: je 0x53edef */
L_0053EDE2:
    MEM8(eax) = (uint8_t)(0); /* 0x0053EDE2: mov byte ptr [eax], 0 */
    edi = MEM32(esi + 0x14); /* 0x0053EDE5: mov edi, dword ptr [esi + 0x14] */
    MEM32(esi) = eax; /* 0x0053EDE8: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x0053EDEA: mov dword ptr [esi + 4], eax */
    goto L_0053EE07; /* 0x0053EDED: jmp 0x53ee07 */
L_0053EDEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053EDEF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x0053EDF1: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x0053EDF3: mov dword ptr [esi + 4], eax */
L_0053EDF6:
    edi = MEM32(esi + 0x14); /* 0x0053EDF6: mov edi, dword ptr [esi + 0x14] */
    goto L_0053EE07; /* 0x0053EDF9: jmp 0x53ee07 */
L_0053EDFB:
    edi = MEM32(esi + 0x10); /* 0x0053EDFB: mov edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0053EDFE: sub edi, eax */
    _flag_k = FK_CMP;
    eax = edi + 0x1; /* 0x0053EE00: lea eax, [edi + 1] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0053EE03: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0053EE03: shr eax, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0053EE05: add edi, eax */
    _flag_k = FK_ADD;
L_0053EE07:
    ebx = MEM32(esi + 0xC); /* 0x0053EE07: mov ebx, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x0053EE0A: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053EE0D: sub ebx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x0053EE0F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x0053EE12: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0053EE14: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = eax; } /* 0x0053EE16: cmovb edi, eax */
    /* test edi, edi */ /* 0x0053EE19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EE2B; /* 0x0053EE1B: jne 0x53ee2b */
L_0053EE1D:
    PUSH32(esp, ecx); /* 0x0053EE1D: push ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053EE1E: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EE24: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053EE27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0053EE36; /* 0x0053EE29: jmp 0x53ee36 */
L_0053EE2B:
    PUSH32(esp, edi); /* 0x0053EE2B: push edi */
    PUSH32(esp, ecx); /* 0x0053EE2C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x0053EE2D: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053EE33: add esp, 8 */
    _flag_k = FK_ADD;
L_0053EE36:
    ecx = eax + ebx; /* 0x0053EE36: lea ecx, [eax + ebx] */
    MEM32(esi + 0x8) = eax; /* 0x0053EE39: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0053EE3C: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = ecx; /* 0x0053EE3E: mov dword ptr [esi + 0xc], ecx */
    edi = POP32_VAL(esp); /* 0x0053EE41: pop edi */
    MEM32(esi + 0x10) = eax; /* 0x0053EE42: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053EE45: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EE46: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0053EE47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053EE48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053EE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EE50u);

L_0053EE50:
    PUSH32(esp, ebx); /* 0x0053EE50: push ebx */
    PUSH32(esp, esi); /* 0x0053EE51: push esi */
    esi = ecx; /* 0x0053EE52: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0053EE54: push edi */
    eax = MEM32(esi + 0x8); /* 0x0053EE55: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0053EE58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EE88; /* 0x0053EE5A: jne 0x53ee88 */
L_0053EE5C:
    /* cmp MEM32(esi), eax */ /* 0x0053EE5C: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053EE83; /* 0x0053EE5E: jne 0x53ee83 */
L_0053EE60:
    PUSH32(esp, 1); /* 0x0053EE60: push 1 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0053EE62: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EE68: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0053EE6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053EE7C; /* 0x0053EE6D: je 0x53ee7c */
L_0053EE6F:
    MEM8(eax) = (uint8_t)(0); /* 0x0053EE6F: mov byte ptr [eax], 0 */
    edi = MEM32(esi + 0x14); /* 0x0053EE72: mov edi, dword ptr [esi + 0x14] */
    MEM32(esi) = eax; /* 0x0053EE75: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x0053EE77: mov dword ptr [esi + 4], eax */
    goto L_0053EE94; /* 0x0053EE7A: jmp 0x53ee94 */
L_0053EE7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053EE7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x0053EE7E: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x0053EE80: mov dword ptr [esi + 4], eax */
L_0053EE83:
    edi = MEM32(esi + 0x14); /* 0x0053EE83: mov edi, dword ptr [esi + 0x14] */
    goto L_0053EE94; /* 0x0053EE86: jmp 0x53ee94 */
L_0053EE88:
    edi = MEM32(esi + 0x10); /* 0x0053EE88: mov edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x0053EE8B: sub edi, eax */
    _flag_k = FK_CMP;
    eax = edi + 0x1; /* 0x0053EE8D: lea eax, [edi + 1] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0053EE90: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0053EE90: shr eax, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x0053EE92: add edi, eax */
    _flag_k = FK_ADD;
L_0053EE94:
    ebx = MEM32(esi + 0xC); /* 0x0053EE94: mov ebx, dword ptr [esi + 0xc] */
    eax = ebx; /* 0x0053EE97: mov eax, ebx */
    ecx = MEM32(esi + 0x8); /* 0x0053EE99: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x0053EE9C: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0053EE9E: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0053EEA1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = eax; } /* 0x0053EEA3: cmovb edi, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x0053EEA6: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x0053EEA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EECC; /* 0x0053EEAA: jne 0x53eecc */
L_0053EEAC:
    PUSH32(esp, ecx); /* 0x0053EEAC: push ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053EEAD: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053EEB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EEB5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053EEB8: mov dword ptr [esi + 8], eax */
    ecx = eax + ebx; /* 0x0053EEBB: lea ecx, [eax + ebx] */
    eax = edi; /* 0x0053EEBE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0053EEC0: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053EEC1: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053EEC4: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053EEC7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EEC8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053EEC9: ret 4 */
L_0053EECC:
    PUSH32(esp, edi); /* 0x0053EECC: push edi */
    PUSH32(esp, ecx); /* 0x0053EECD: push ecx */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x0053EECE: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0053EED4: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x0053EED7: mov dword ptr [esi + 8], eax */
    ecx = eax + ebx; /* 0x0053EEDA: lea ecx, [eax + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0053EEDD: add eax, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0053EEDF: pop edi */
    MEM32(esi + 0xC) = ecx; /* 0x0053EEE0: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = eax; /* 0x0053EEE3: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x0053EEE6: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053EEE7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053EEE8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053EEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EEF0u);

L_0053EEF0:
    PUSH32(esp, ebp); /* 0x0053EEF0: push ebp */
    ebp = esp; /* 0x0053EEF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053EEF3: push -1 */
    PUSH32(esp, 0x0079C7B0u); /* 0x0053EEF5: push 0x79c7b0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053EEFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053EF00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x0053EF01: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0053EF04: push esi */
    PUSH32(esp, edi); /* 0x0053EF05: push edi */
    eax = MEM32(0x855000); /* 0x0053EF06: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053EF0B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053EF0D: push eax */
    eax = ebp + (-0xC); /* 0x0053EF0E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053EF11: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053EF17: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x0053EF19: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(esi + 0x18); /* 0x0053EF1C: mov eax, dword ptr [esi + 0x18] */
    edi = esi + 0x18; /* 0x0053EF1F: lea edi, [esi + 0x18] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053EF22: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x40)) = eax; /* 0x0053EF25: mov dword ptr [ebp - 0x40], eax */
    xmm_st(ebp + (-0x3C), _xmm[0]); /* 0x0053EF28: movdqu xmmword ptr [ebp - 0x3c], xmm0 */
    MEM32(ebp + (-0x2C)) = 0x100u; /* 0x0053EF2D: mov dword ptr [ebp - 0x2c], 0x100 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053EF34: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x0053EF3B: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x0053EF42: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0053EF49: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x18)) = esi; /* 0x0053EF50: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053EF53: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x20); /* 0x0053EF57: lea eax, [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x0053EF5A: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053EF5B: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x40); /* 0x0053EF5E: lea ecx, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0053EF61: push eax */
    RECOMP_CALL(sub_0053EFF0); /* 0x0053EF62: call 0x53eff0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x0053EF67: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x30) = ecx; /* 0x0053EF69: mov dword ptr [esi + 0x30], ecx */
    eax = MEM32(eax + 0x4); /* 0x0053EF6C: mov eax, dword ptr [eax + 4] */
    MEM32(esi + 0x34) = eax; /* 0x0053EF6F: mov dword ptr [esi + 0x34], eax */
    /* test ecx, ecx */ /* 0x0053EF72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053EF9B; /* 0x0053EF74: jne 0x53ef9b */
L_0053EF76:
    esi = MEM32(edi + 0xC); /* 0x0053EF76: mov esi, dword ptr [edi + 0xc] */
    ecx = MEM32(ebp + (-0x14)); /* 0x0053EF79: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFF0u; /* 0x0053EF7C: add esi, -0x10 */
    _flag_k = FK_ADD;
    MEM32(edi + 0xC) = esi; /* 0x0053EF7F: mov dword ptr [edi + 0xc], esi */
    RECOMP_CALL(sub_00409980); /* 0x0053EF82: call 0x409980 */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(esi); /* 0x0053EF87: movdqu xmm0, xmmword ptr [esi] */
    eax = MEM32(ebp + (-0x14)); /* 0x0053EF8B: mov eax, dword ptr [ebp - 0x14] */
    xmm_st(eax, _xmm[0]); /* 0x0053EF8E: movdqu xmmword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053EF92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053EF94: mov word ptr [esi + 0xe], ax */
    esi = MEM32(ebp + (-0x14)); /* 0x0053EF98: mov esi, dword ptr [ebp - 0x14] */
L_0053EF9B:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053EF9B: mov byte ptr [ebp - 4], 1 */
    ecx = edi; /* 0x0053EF9F: mov ecx, edi */
    eax = MEM32(edi + 0x8); /* 0x0053EFA1: mov eax, dword ptr [edi + 8] */
    MEM32(edi + 0xC) = eax; /* 0x0053EFA4: mov dword ptr [edi + 0xc], eax */
    RECOMP_CALL(sub_0053ED50); /* 0x0053EFA7: call 0x53ed50 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053EFAC: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x0053EFB3: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0053EFB6: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EFBC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0053EFBF: push dword ptr [ebp - 0x3c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0053EFC2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0053EFC8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x0053EFCB: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053EFCD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053EFD0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053EFD7: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053EFD8: pop edi */
    esi = POP32_VAL(esp); /* 0x0053EFD9: pop esi */
    esp = ebp; /* 0x0053EFDA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053EFDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053EFDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053EFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EFE0u);

L_0053EFE0:
    ecx = MEM32(ecx); /* 0x0053EFE0: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx + 0x8); /* 0x0053EFE2: mov eax, dword ptr [ecx + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x0053EFE5: mov dword ptr [ecx + 0xc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053EFE8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053EFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053EFF0u);

L_0053EFF0:
    PUSH32(esp, ebp); /* 0x0053EFF0: push ebp */
    ebp = esp; /* 0x0053EFF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053EFF3: push -1 */
    PUSH32(esp, 0x0079C7D8u); /* 0x0053EFF5: push 0x79c7d8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053EFFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F000: push eax */
    PUSH32(esp, ecx); /* 0x0053F001: push ecx */
    PUSH32(esp, esi); /* 0x0053F002: push esi */
    PUSH32(esp, edi); /* 0x0053F003: push edi */
    eax = MEM32(0x855000); /* 0x0053F004: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F009: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F00B: push eax */
    eax = ebp + (-0xC); /* 0x0053F00C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F00F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0053F015: mov esi, ecx */
    MEM32(esi + 0x18) = 0; /* 0x0053F017: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x0053F01E: mov dword ptr [esi + 0x1c], 0 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0053F025: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F028: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0xC); /* 0x0053F02F: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x0053F032: mov ecx, edi */
    RECOMP_CALL(sub_0053FBA0); /* 0x0053F034: call 0x53fba0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x0053F039: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053F086; /* 0x0053F03D: jne 0x53f086 */
L_0053F03F:
    ecx = MEM32(edi); /* 0x0053F03F: mov ecx, dword ptr [edi] */
    SET_LO8(eax, MEM8(ecx)); /* 0x0053F041: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x0053F043: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053F053; /* 0x0053F045: jne 0x53f053 */
L_0053F047:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x4); /* 0x0053F047: sub ecx, dword ptr [edi + 4] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x18) = 1; /* 0x0053F04A: mov dword ptr [esi + 0x18], 1 */
    goto L_0053F083; /* 0x0053F051: jmp 0x53f083 */
L_0053F053:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0053F053: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x0053F056: mov ecx, esi */
    PUSH32(esp, edi); /* 0x0053F058: push edi */
    RECOMP_CALL(sub_0053F160); /* 0x0053F059: call 0x53f160 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x0053F05E: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053F086; /* 0x0053F062: jne 0x53f086 */
L_0053F064:
    ecx = edi; /* 0x0053F064: mov ecx, edi */
    RECOMP_CALL(sub_0053FBA0); /* 0x0053F066: call 0x53fba0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x0053F06B: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0053F086; /* 0x0053F06F: jne 0x53f086 */
L_0053F071:
    ecx = MEM32(edi); /* 0x0053F071: mov ecx, dword ptr [edi] */
    SET_LO8(eax, MEM8(ecx)); /* 0x0053F073: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x0053F075: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F086; /* 0x0053F077: je 0x53f086 */
L_0053F079:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x4); /* 0x0053F079: sub ecx, dword ptr [edi + 4] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x18) = 2; /* 0x0053F07C: mov dword ptr [esi + 0x18], 2 */
L_0053F083:
    MEM32(esi + 0x1C) = ecx; /* 0x0053F083: mov dword ptr [esi + 0x1c], ecx */
L_0053F086:
    eax = MEM32(ebp + 0x8); /* 0x0053F086: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x18); /* 0x0053F089: mov ecx, dword ptr [esi + 0x18] */
    MEM32(eax) = ecx; /* 0x0053F08C: mov dword ptr [eax], ecx */
    ecx = MEM32(esi + 0x1C); /* 0x0053F08E: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(eax + 0x4) = ecx; /* 0x0053F091: mov dword ptr [eax + 4], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F094: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi + 0x8); /* 0x0053F09B: mov ecx, dword ptr [esi + 8] */
    MEM32(esi + 0xC) = ecx; /* 0x0053F09E: mov dword ptr [esi + 0xc], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F0A1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F0A4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F0AB: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053F0AC: pop edi */
    esi = POP32_VAL(esp); /* 0x0053F0AD: pop esi */
    esp = ebp; /* 0x0053F0AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F0B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053F0B1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053F0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F0C0u);

L_0053F0C0:
    PUSH32(esp, ebp); /* 0x0053F0C0: push ebp */
    ebp = esp; /* 0x0053F0C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F0C3: push -1 */
    PUSH32(esp, 0x0079C805u); /* 0x0053F0C5: push 0x79c805 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F0CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F0D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0053F0D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0053F0D4: push ebx */
    PUSH32(esp, esi); /* 0x0053F0D5: push esi */
    PUSH32(esp, edi); /* 0x0053F0D6: push edi */
    eax = MEM32(0x855000); /* 0x0053F0D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F0DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F0DE: push eax */
    eax = ebp + (-0xC); /* 0x0053F0DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F0E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0053F0E8: mov dword ptr [ebp - 0x10], esp */
    esi = edx; /* 0x0053F0EB: mov esi, edx */
    ebx = ecx; /* 0x0053F0ED: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F0EF: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0x8); /* 0x0053F0F6: mov edi, dword ptr [ebp + 8] */
    esp = esp; /* 0x0053F0F9: lea esp, [esp] */
L_0053F100:
    /* cmp ebx, esi */ /* 0x0053F100: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0053F133; /* 0x0053F102: je 0x53f133 */
L_0053F104:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053F104: mov byte ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x0053F108: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F11B; /* 0x0053F10A: je 0x53f11b */
L_0053F10C:
    PUSH32(esp, 0x2630u); /* 0x0053F10C: push 0x2630 */
    PUSH32(esp, ebx); /* 0x0053F111: push ebx */
    PUSH32(esp, edi); /* 0x0053F112: push edi */
    RECOMP_CALL(sub_00780838); /* 0x0053F113: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0053F118: add esp, 0xc */
    _flag_k = FK_ADD;
L_0053F11B:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0053F11B: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2630u; /* 0x0053F11F: add edi, 0x2630 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x0053F125: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2630u; /* 0x0053F128: add ebx, 0x2630 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ebx; /* 0x0053F12E: mov dword ptr [ebp - 0x14], ebx */
    RECOMP_BACKEDGE();
    goto L_0053F100; /* 0x0053F131: jmp 0x53f100 */
L_0053F133:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F133: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x0053F13A: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F13C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F13F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F146: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053F147: pop edi */
    esi = POP32_VAL(esp); /* 0x0053F148: pop esi */
    ebx = POP32_VAL(esp); /* 0x0053F149: pop ebx */
    esp = ebp; /* 0x0053F14A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F14C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053F14D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053F14E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F14Eu);

L_0053F14E:
    PUSH32(esp, 0); /* 0x0053F14E: push 0 */
    PUSH32(esp, 0); /* 0x0053F150: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0053F152: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0053F157u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0053F160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F160u);

L_0053F160:
    PUSH32(esp, ebp); /* 0x0053F160: push ebp */
    ebp = esp; /* 0x0053F161: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0053F163: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x0053F166: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x0053F169: mov eax, dword ptr [edx] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x0053F16B: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDEu; /* 0x0053F16E: add eax, -0x22 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x59u */ /* 0x0053F171: cmp eax, 0x59 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0053F1E0; /* 0x0053F174: ja 0x53f1e0 */
L_0053F176:
    eax = (uint32_t)MEM8(eax + 0x53F20C); /* 0x0053F176: movzx eax, byte ptr [eax + 0x53f20c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x53F1F0)); goto _ljump; }
L_0053F184:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F184: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F187: push edx */
    RECOMP_CALL(sub_0053FC20); /* 0x0053F188: call 0x53fc20 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F18D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F18F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F190: ret 8 */
L_0053F193:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F193: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F196: push edx */
    RECOMP_CALL(sub_0053FC80); /* 0x0053F197: call 0x53fc80 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F19C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F19E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F19F: ret 8 */
L_0053F1A2:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F1A2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F1A5: push edx */
    RECOMP_CALL(sub_0053FD40); /* 0x0053F1A6: call 0x53fd40 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F1AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F1AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F1AE: ret 8 */
L_0053F1B1:
    PUSH32(esp, 0); /* 0x0053F1B1: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F1B3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F1B6: push edx */
    RECOMP_CALL(sub_0053FDB0); /* 0x0053F1B7: call 0x53fdb0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F1BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F1BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F1BF: ret 8 */
L_0053F1C2:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F1C2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F1C5: push edx */
    RECOMP_CALL(sub_00540040); /* 0x0053F1C6: call 0x540040 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F1CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F1CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F1CE: ret 8 */
L_0053F1D1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F1D1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F1D4: push edx */
    RECOMP_CALL(sub_00540250); /* 0x0053F1D5: call 0x540250 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F1DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F1DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F1DD: ret 8 */
L_0053F1E0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F1E0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0053F1E3: push edx */
    RECOMP_CALL(sub_005403D0); /* 0x0053F1E4: call 0x5403d0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0053F1E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F1EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F1EC: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x0053F184u: goto L_0053F184;
      case 0x0053F193u: goto L_0053F193;
      case 0x0053F1A2u: goto L_0053F1A2;
      case 0x0053F1B1u: goto L_0053F1B1;
      case 0x0053F1C2u: goto L_0053F1C2;
      case 0x0053F1D1u: goto L_0053F1D1;
      case 0x0053F1E0u: goto L_0053F1E0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0053F270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F270u);

L_0053F270:
    PUSH32(esp, ebp); /* 0x0053F270: push ebp */
    ebp = esp; /* 0x0053F271: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F273: push -1 */
    PUSH32(esp, 0x0079B658u); /* 0x0053F275: push 0x79b658 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F27A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F280: push eax */
    PUSH32(esp, ecx); /* 0x0053F281: push ecx */
    PUSH32(esp, esi); /* 0x0053F282: push esi */
    PUSH32(esp, edi); /* 0x0053F283: push edi */
    eax = MEM32(0x855000); /* 0x0053F284: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F289: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F28B: push eax */
    eax = ebp + (-0xC); /* 0x0053F28C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F28F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053F295: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x0053F297: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x0053F29A: mov esi, dword ptr [ebp + 8] */
    ecx = edi + 0x4; /* 0x0053F29D: lea ecx, [edi + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F2A0: push -1 */
    PUSH32(esp, 0); /* 0x0053F2A2: push 0 */
    eax = (uint32_t)MEM8(esi); /* 0x0053F2A4: movzx eax, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x0053F2A7: mov byte ptr [edi], al */
    eax = esi + 0x4; /* 0x0053F2A9: lea eax, [esi + 4] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F2AC: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F2B3: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0053F2BA: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F2BB: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0053F2BE: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F2C3: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x1C; /* 0x0053F2CA: lea ecx, [edi + 0x1c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F2CD: push -1 */
    PUSH32(esp, 0); /* 0x0053F2CF: push 0 */
    eax = esi + 0x1C; /* 0x0053F2D1: lea eax, [esi + 0x1c] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F2D4: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F2DB: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0053F2E2: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F2E3: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0053F2E6: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0053F2EB: mov byte ptr [ebp - 4], 1 */
    ecx = edi + 0x34; /* 0x0053F2EF: lea ecx, [edi + 0x34] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F2F2: push -1 */
    PUSH32(esp, 0); /* 0x0053F2F4: push 0 */
    eax = esi + 0x34; /* 0x0053F2F6: lea eax, [esi + 0x34] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F2F9: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F300: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0053F307: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F308: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0053F30B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0053F310: mov byte ptr [ebp - 4], 2 */
    ecx = edi + 0x68; /* 0x0053F314: lea ecx, [edi + 0x68] */
    eax = MEM32(esi + 0x4C); /* 0x0053F317: mov eax, dword ptr [esi + 0x4c] */
    MEM32(edi + 0x4C) = eax; /* 0x0053F31A: mov dword ptr [edi + 0x4c], eax */
    eax = MEM32(esi + 0x50); /* 0x0053F31D: mov eax, dword ptr [esi + 0x50] */
    MEM32(edi + 0x50) = eax; /* 0x0053F320: mov dword ptr [edi + 0x50], eax */
    eax = (uint32_t)MEM8(esi + 0x54); /* 0x0053F323: movzx eax, byte ptr [esi + 0x54] */
    MEM8(edi + 0x54) = (uint8_t)(LO8(eax)); /* 0x0053F327: mov byte ptr [edi + 0x54], al */
    eax = MEM32(esi + 0x58); /* 0x0053F32A: mov eax, dword ptr [esi + 0x58] */
    MEM32(edi + 0x58) = eax; /* 0x0053F32D: mov dword ptr [edi + 0x58], eax */
    eax = MEM32(esi + 0x5C); /* 0x0053F330: mov eax, dword ptr [esi + 0x5c] */
    MEM32(edi + 0x5C) = eax; /* 0x0053F333: mov dword ptr [edi + 0x5c], eax */
    eax = MEM32(esi + 0x60); /* 0x0053F336: mov eax, dword ptr [esi + 0x60] */
    MEM32(edi + 0x60) = eax; /* 0x0053F339: mov dword ptr [edi + 0x60], eax */
    eax = MEM32(esi + 0x64); /* 0x0053F33C: mov eax, dword ptr [esi + 0x64] */
    MEM32(edi + 0x64) = eax; /* 0x0053F33F: mov dword ptr [edi + 0x64], eax */
    eax = esi + 0x68; /* 0x0053F342: lea eax, [esi + 0x68] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F345: push -1 */
    PUSH32(esp, 0); /* 0x0053F347: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F349: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F350: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0053F357: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F358: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0053F35B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0053F360: mov byte ptr [ebp - 4], 3 */
    ecx = edi + 0x80; /* 0x0053F364: lea ecx, [edi + 0x80] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F36A: push -1 */
    PUSH32(esp, 0); /* 0x0053F36C: push 0 */
    eax = esi + 0x80; /* 0x0053F36E: lea eax, [esi + 0x80] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F374: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F37B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0053F382: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F383: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0053F386: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0053F38B: mov byte ptr [ebp - 4], 4 */
    ecx = edi + 0x9C; /* 0x0053F38F: lea ecx, [edi + 0x9c] */
    eax = (uint32_t)MEM8(esi + 0x98); /* 0x0053F395: movzx eax, byte ptr [esi + 0x98] */
    MEM8(edi + 0x98) = (uint8_t)(LO8(eax)); /* 0x0053F39C: mov byte ptr [edi + 0x98], al */
    eax = esi + 0x9C; /* 0x0053F3A2: lea eax, [esi + 0x9c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F3A8: push -1 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x0053F3AA: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x0053F3B1: mov dword ptr [ecx + 0x10], 0 */
    MEM8(ecx) = (uint8_t)(0); /* 0x0053F3B8: mov byte ptr [ecx], 0 */
    PUSH32(esp, 0); /* 0x0053F3BB: push 0 */
    PUSH32(esp, eax); /* 0x0053F3BD: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0053F3BE: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0053F3C3: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(esi + 0xB4); /* 0x0053F3C7: mov eax, dword ptr [esi + 0xb4] */
    MEM32(edi + 0xB4) = eax; /* 0x0053F3CD: mov dword ptr [edi + 0xb4], eax */
    eax = (uint32_t)MEM8(esi + 0xB8); /* 0x0053F3D3: movzx eax, byte ptr [esi + 0xb8] */
    MEM8(edi + 0xB8) = (uint8_t)(LO8(eax)); /* 0x0053F3DA: mov byte ptr [edi + 0xb8], al */
    eax = MEM32(esi + 0xB9); /* 0x0053F3E0: mov eax, dword ptr [esi + 0xb9] */
    MEM32(edi + 0xB9) = eax; /* 0x0053F3E6: mov dword ptr [edi + 0xb9], eax */
    eax = MEM32(esi + 0xBD); /* 0x0053F3EC: mov eax, dword ptr [esi + 0xbd] */
    MEM32(edi + 0xBD) = eax; /* 0x0053F3F2: mov dword ptr [edi + 0xbd], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F3F8: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x0053F3FF: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F401: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F404: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F40B: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053F40C: pop edi */
    esi = POP32_VAL(esp); /* 0x0053F40D: pop esi */
    esp = ebp; /* 0x0053F40E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F410: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053F411: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053F420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F420u);

L_0053F420:
    PUSH32(esp, ebp); /* 0x0053F420: push ebp */
    ebp = esp; /* 0x0053F421: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F423: push -1 */
    PUSH32(esp, 0x0079C825u); /* 0x0053F425: push 0x79c825 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F42A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F430: push eax */
    PUSH32(esp, esi); /* 0x0053F431: push esi */
    eax = MEM32(0x855000); /* 0x0053F432: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F437: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F439: push eax */
    eax = ebp + (-0xC); /* 0x0053F43A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F43D: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F443: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F446: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F449: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F44C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F459; /* 0x0053F44F: jbe 0x53f459 */
L_0053F451:
    PUSH32(esp, ecx); /* 0x0053F451: push ecx */
    ecx = esi; /* 0x0053F452: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F454: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F459:
    ecx = MEM32(esi + 0xC); /* 0x0053F459: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F45C: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F45F: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F462: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F469: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F47A; /* 0x0053F46B: je 0x53f47a */
L_0053F46D:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F46D: xorps xmm0, xmm0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053F470: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    xmm_st(ecx, _xmm[0]); /* 0x0053F472: movdqu xmmword ptr [ecx], xmm0 */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F476: mov word ptr [ecx + 0xe], ax */
L_0053F47A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F47A: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F481: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F483: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F486: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F48D: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F48E: pop esi */
    esp = ebp; /* 0x0053F48F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F491: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053F492: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053F4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F4A0u);

L_0053F4A0:
    PUSH32(esp, ebp); /* 0x0053F4A0: push ebp */
    ebp = esp; /* 0x0053F4A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F4A3: push -1 */
    PUSH32(esp, 0x0079C825u); /* 0x0053F4A5: push 0x79c825 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F4AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F4B0: push eax */
    PUSH32(esp, esi); /* 0x0053F4B1: push esi */
    eax = MEM32(0x855000); /* 0x0053F4B2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F4B7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F4B9: push eax */
    eax = ebp + (-0xC); /* 0x0053F4BA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F4BD: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F4C3: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F4C6: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F4C9: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F4CC: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F4D9; /* 0x0053F4CF: jbe 0x53f4d9 */
L_0053F4D1:
    PUSH32(esp, ecx); /* 0x0053F4D1: push ecx */
    ecx = esi; /* 0x0053F4D2: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F4D4: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F4D9:
    ecx = MEM32(esi + 0xC); /* 0x0053F4D9: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F4DC: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F4DF: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F4E2: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F4E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F503; /* 0x0053F4EB: je 0x53f503 */
L_0053F4ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053F4ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F4EF: xorps xmm0, xmm0 */
    /* cmp MEM8(ebp + 0x8), LO8(eax) */ /* 0x0053F4F2: cmp byte ptr [ebp + 8], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    xmm_st(ecx, _xmm[0]); /* 0x0053F4F5: movdqu xmmword ptr [ecx], xmm0 */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0053F4F9: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x0053F4FC: add eax, 9 */
    _flag_k = FK_ADD;
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F4FF: mov word ptr [ecx + 0xe], ax */
L_0053F503:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F503: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F50A: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F50C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F50F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F516: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F517: pop esi */
    esp = ebp; /* 0x0053F518: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F51A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053F51B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053F520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F520u);

L_0053F520:
    PUSH32(esp, ebp); /* 0x0053F520: push ebp */
    ebp = esp; /* 0x0053F521: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F523: push -1 */
    PUSH32(esp, 0x00782475u); /* 0x0053F525: push 0x782475 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F52A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F530: push eax */
    PUSH32(esp, esi); /* 0x0053F531: push esi */
    PUSH32(esp, edi); /* 0x0053F532: push edi */
    eax = MEM32(0x855000); /* 0x0053F533: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F538: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F53A: push eax */
    eax = ebp + (-0xC); /* 0x0053F53B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F53E: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F544: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F547: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F54A: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F54D: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F55A; /* 0x0053F550: jbe 0x53f55a */
L_0053F552:
    PUSH32(esp, ecx); /* 0x0053F552: push ecx */
    ecx = esi; /* 0x0053F553: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F555: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F55A:
    edi = MEM32(esi + 0xC); /* 0x0053F55A: mov edi, dword ptr [esi + 0xc] */
    eax = edi + 0x10; /* 0x0053F55D: lea eax, [edi + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F560: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F563: mov dword ptr [ebp - 4], 0 */
    /* test edi, edi */ /* 0x0053F56A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F593; /* 0x0053F56C: je 0x53f593 */
L_0053F56E:
    ecx = MEM32(ebp + 0x8); /* 0x0053F56E: mov ecx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F571: xorps xmm0, xmm0 */
    eax = ecx; /* 0x0053F574: mov eax, ecx */
    /* test ecx, ecx */ /* 0x0053F576: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0053F578: cdq  */
    xmm_st(edi, _xmm[0]); /* 0x0053F579: movdqu xmmword ptr [edi], xmm0 */
    MEM32(edi) = eax; /* 0x0053F57D: mov dword ptr [edi], eax */
    eax = 0xB6u; /* 0x0053F57F: mov eax, 0xb6 */
    MEM32(edi + 0x4) = edx; /* 0x0053F584: mov dword ptr [edi + 4], edx */
    edx = 0x1F6u; /* 0x0053F587: mov edx, 0x1f6 */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = edx; } /* 0x0053F58C: cmovns eax, edx */
    MEM16(edi + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F58F: mov word ptr [edi + 0xe], ax */
L_0053F593:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F593: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F59A: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F59C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F59F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F5A6: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053F5A7: pop edi */
    esi = POP32_VAL(esp); /* 0x0053F5A8: pop esi */
    esp = ebp; /* 0x0053F5A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F5AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053F5AC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053F5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F5B0u);

L_0053F5B0:
    PUSH32(esp, ebp); /* 0x0053F5B0: push ebp */
    ebp = esp; /* 0x0053F5B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F5B3: push -1 */
    PUSH32(esp, 0x0079C825u); /* 0x0053F5B5: push 0x79c825 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F5BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F5C0: push eax */
    PUSH32(esp, esi); /* 0x0053F5C1: push esi */
    eax = MEM32(0x855000); /* 0x0053F5C2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F5C7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F5C9: push eax */
    eax = ebp + (-0xC); /* 0x0053F5CA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F5CD: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F5D3: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F5D6: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F5D9: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F5DC: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F5E9; /* 0x0053F5DF: jbe 0x53f5e9 */
L_0053F5E1:
    PUSH32(esp, ecx); /* 0x0053F5E1: push ecx */
    ecx = esi; /* 0x0053F5E2: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F5E4: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F5E9:
    ecx = MEM32(esi + 0xC); /* 0x0053F5E9: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F5EC: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F5EF: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F5F2: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F5F9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F621; /* 0x0053F5FB: je 0x53f621 */
L_0053F5FD:
    eax = MEM32(ebp + 0x8); /* 0x0053F5FD: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F600: xorps xmm0, xmm0 */
    xmm_st(ecx, _xmm[0]); /* 0x0053F603: movdqu xmmword ptr [ecx], xmm0 */
    MEM32(ecx) = eax; /* 0x0053F607: mov dword ptr [ecx], eax */
    if (26u) _cf = (((eax) >> 25) & 1u); /* 0x0053F609: shr eax, 0x1a */
    if (26u) { _flag_a = recomp_flags_pack((eax >> 26u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 26u; /* 0x0053F609: shr eax, 0x1a */
    eax = ~eax; /* 0x0053F60C: not eax */
    MEM32(ecx + 0x4) = 0; /* 0x0053F60E: mov dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x0053F615: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x1D6u)); _flag_b = (uint32_t)((eax | 0x1D6u));
    eax = eax | 0x1D6u; /* 0x0053F618: or eax, 0x1d6 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F61D: mov word ptr [ecx + 0xe], ax */
L_0053F621:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F621: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F628: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F62A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F62D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F634: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F635: pop esi */
    esp = ebp; /* 0x0053F636: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F638: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0053F639: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0053F640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F640u);

L_0053F640:
    PUSH32(esp, ebp); /* 0x0053F640: push ebp */
    ebp = esp; /* 0x0053F641: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F643: push -1 */
    PUSH32(esp, 0x0079C825u); /* 0x0053F645: push 0x79c825 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F64A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F650: push eax */
    PUSH32(esp, esi); /* 0x0053F651: push esi */
    eax = MEM32(0x855000); /* 0x0053F652: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F657: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F659: push eax */
    eax = ebp + (-0xC); /* 0x0053F65A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F65D: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F663: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F666: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F669: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F66C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F679; /* 0x0053F66F: jbe 0x53f679 */
L_0053F671:
    PUSH32(esp, ecx); /* 0x0053F671: push ecx */
    ecx = esi; /* 0x0053F672: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F674: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F679:
    ecx = MEM32(esi + 0xC); /* 0x0053F679: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F67C: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F67F: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F682: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F689: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F698; /* 0x0053F68B: je 0x53f698 */
L_0053F68D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F68D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053F690: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053F860); /* 0x0053F693: call 0x53f860 */
    RECOMP_FLAGS_IN();
L_0053F698:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F698: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F69F: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F6A1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F6A4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F6AB: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F6AC: pop esi */
    esp = ebp; /* 0x0053F6AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F6AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F6B0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053F6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F6C0u);

L_0053F6C0:
    PUSH32(esp, ebp); /* 0x0053F6C0: push ebp */
    ebp = esp; /* 0x0053F6C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F6C3: push -1 */
    PUSH32(esp, 0x0079C825u); /* 0x0053F6C5: push 0x79c825 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F6CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F6D0: push eax */
    PUSH32(esp, esi); /* 0x0053F6D1: push esi */
    eax = MEM32(0x855000); /* 0x0053F6D2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F6D7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F6D9: push eax */
    eax = ebp + (-0xC); /* 0x0053F6DA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F6DD: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx + 0x24); /* 0x0053F6E3: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F6E6: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F6E9: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F6EC: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F6F9; /* 0x0053F6EF: jbe 0x53f6f9 */
L_0053F6F1:
    PUSH32(esp, ecx); /* 0x0053F6F1: push ecx */
    ecx = esi; /* 0x0053F6F2: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F6F4: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F6F9:
    ecx = MEM32(esi + 0xC); /* 0x0053F6F9: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F6FC: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F6FF: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F702: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F709: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F718; /* 0x0053F70B: je 0x53f718 */
L_0053F70D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F70D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053F710: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053F8E0); /* 0x0053F713: call 0x53f8e0 */
    RECOMP_FLAGS_IN();
L_0053F718:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F718: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F71F: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F721: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F724: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F72B: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F72C: pop esi */
    esp = ebp; /* 0x0053F72D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F72F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F730: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0053F740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F740u);

L_0053F740:
    PUSH32(esp, ebp); /* 0x0053F740: push ebp */
    ebp = esp; /* 0x0053F741: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F743: push -1 */
    PUSH32(esp, 0x00789255u); /* 0x0053F745: push 0x789255 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F74A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F750: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0053F751: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0053F754: push esi */
    eax = MEM32(0x855000); /* 0x0053F755: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F75A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F75C: push eax */
    eax = ebp + (-0xC); /* 0x0053F75D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F760: mov dword ptr fs:[0], eax */
    MEM64(ebp + (-0x18)) = _xmm[1].u64[0]; /* 0x0053F766: movsd qword ptr [ebp - 0x18], xmm1 */
    eax = MEM32(ecx + 0x24); /* 0x0053F76B: mov eax, dword ptr [ecx + 0x24] */
    esi = ecx + 0x18; /* 0x0053F76E: lea esi, [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F771: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0053F774: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F786; /* 0x0053F777: jbe 0x53f786 */
L_0053F779:
    PUSH32(esp, ecx); /* 0x0053F779: push ecx */
    ecx = esi; /* 0x0053F77A: mov ecx, esi */
    RECOMP_CALL(sub_00540B80); /* 0x0053F77C: call 0x540b80 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM64(ebp + (-0x18)); _xmm[1].u64[1] = 0; /* 0x0053F781: movsd xmm1, qword ptr [ebp - 0x18] */
L_0053F786:
    ecx = MEM32(esi + 0xC); /* 0x0053F786: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x10; /* 0x0053F789: lea eax, [ecx + 0x10] */
    MEM32(esi + 0xC) = eax; /* 0x0053F78C: mov dword ptr [esi + 0xc], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F78F: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F796: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F7AE; /* 0x0053F798: je 0x53f7ae */
L_0053F79A:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F79A: xorps xmm0, xmm0 */
    eax = 0x216u; /* 0x0053F79D: mov eax, 0x216 */
    xmm_st(ecx, _xmm[0]); /* 0x0053F7A2: movdqu xmmword ptr [ecx], xmm0 */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F7A6: mov word ptr [ecx + 0xe], ax */
    MEM64(ecx) = _xmm[1].u64[0]; /* 0x0053F7AA: movsd qword ptr [ecx], xmm1 */
L_0053F7AE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F7AE: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F7B5: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F7B7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F7BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F7C1: pop ecx */
    esi = POP32_VAL(esp); /* 0x0053F7C2: pop esi */
    esp = ebp; /* 0x0053F7C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F7C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0053F7C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0053F7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F7D0u);

L_0053F7D0:
    PUSH32(esp, ebp); /* 0x0053F7D0: push ebp */
    ebp = esp; /* 0x0053F7D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0053F7D3: push -1 */
    PUSH32(esp, 0x0079C845u); /* 0x0053F7D5: push 0x79c845 */
    eax = MEM32(FS_BASE + (0)); /* 0x0053F7DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0053F7E0: push eax */
    PUSH32(esp, ecx); /* 0x0053F7E1: push ecx */
    PUSH32(esp, esi); /* 0x0053F7E2: push esi */
    PUSH32(esp, edi); /* 0x0053F7E3: push edi */
    eax = MEM32(0x855000); /* 0x0053F7E4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0053F7E9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0053F7EB: push eax */
    eax = ebp + (-0xC); /* 0x0053F7EC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0053F7EF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0053F7F5: mov edi, ecx */
    eax = MEM32(edi + 0x24); /* 0x0053F7F7: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x0053F7FA: add eax, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x28) */ /* 0x0053F7FD: cmp eax, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0053F80B; /* 0x0053F800: jbe 0x53f80b */
L_0053F802:
    PUSH32(esp, ecx); /* 0x0053F802: push ecx */
    ecx = edi + 0x18; /* 0x0053F803: lea ecx, [edi + 0x18] */
    RECOMP_CALL(sub_00540B80); /* 0x0053F806: call 0x540b80 */
    RECOMP_FLAGS_IN();
L_0053F80B:
    ecx = MEM32(edi + 0x24); /* 0x0053F80B: mov ecx, dword ptr [edi + 0x24] */
    eax = ecx + 0x10; /* 0x0053F80E: lea eax, [ecx + 0x10] */
    MEM32(edi + 0x24) = eax; /* 0x0053F811: mov dword ptr [edi + 0x24], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0053F814: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x0053F81B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0053F835; /* 0x0053F81D: je 0x53f835 */
L_0053F81F:
    eax = MEM32(edi + 0x10); /* 0x0053F81F: mov eax, dword ptr [edi + 0x10] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F822: xorps xmm0, xmm0 */
    PUSH32(esp, eax); /* 0x0053F825: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0053F826: push dword ptr [ebp + 0xc] */
    xmm_st(ecx, _xmm[0]); /* 0x0053F829: movdqu xmmword ptr [ecx], xmm0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0053F82D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0053FAA0); /* 0x0053F830: call 0x53faa0 */
    RECOMP_FLAGS_IN();
L_0053F835:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0053F835: mov dword ptr [ebp - 4], 0xffffffff */
    SET_LO8(eax, 1); /* 0x0053F83C: mov al, 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0053F83E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0053F841: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0053F848: pop ecx */
    edi = POP32_VAL(esp); /* 0x0053F849: pop edi */
    esi = POP32_VAL(esp); /* 0x0053F84A: pop esi */
    esp = ebp; /* 0x0053F84B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0053F84D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0053F84E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0053F860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0053F860u);

L_0053F860:
    PUSH32(esp, ebp); /* 0x0053F860: push ebp */
    ebp = esp; /* 0x0053F861: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0053F863: mov edx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0053F866: xorps xmm0, xmm0 */
    PUSH32(esp, esi); /* 0x0053F869: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0053F86A: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x96u; /* 0x0053F86D: mov eax, 0x96 */
    xmm_st(ecx, _xmm[0]); /* 0x0053F872: movdqu xmmword ptr [ecx], xmm0 */
    MEM32(ecx) = edx; /* 0x0053F876: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = esi; /* 0x0053F878: mov dword ptr [ecx + 4], esi */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F87B: mov word ptr [ecx + 0xe], ax */
    /* test esi, esi */ /* 0x0053F87F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0053F8B7; /* 0x0053F881: jl 0x53f8b7 */
L_0053F883:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0053F889; /* 0x0053F883: jg 0x53f889 */
L_0053F885:
    /* test edx, edx */ /* 0x0053F885: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_0053F8B7; /* 0x0053F887: jb 0x53f8b7 */
L_0053F889:
    eax = 0x196u; /* 0x0053F889: mov eax, 0x196 */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F88E: mov word ptr [ecx + 0xe], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0053F892: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x0053F894: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053F8A1; /* 0x0053F896: jne 0x53f8a1 */
L_0053F898:
    eax = 0x1D6u; /* 0x0053F898: mov eax, 0x1d6 */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F89D: mov word ptr [ecx + 0xe], ax */
L_0053F8A1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    edx = edx & 0x80000000u; /* 0x0053F8A1: and edx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x0053F8A7: mov eax, ecx */
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x0053F8A9: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0053F8D1; /* 0x0053F8AB: jne 0x53f8d1 */
L_0053F8AD:
    _flag_a = (uint32_t)((MEM16(ecx + 0xE) | 0x20u)) << 16; _flag_b = (uint32_t)((MEM16(ecx + 0xE) | 0x20u)) << 16;
    MEM16(ecx + 0xE) = (uint16_t)(MEM16(ecx + 0xE) | 0x20u); /* 0x0053F8AD: or word ptr [ecx + 0xe], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x0053F8B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053F8B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F8B4: ret 8 */
L_0053F8B7:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x0053F8B7: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0053F8CF; /* 0x0053F8BA: jl 0x53f8cf */
L_0053F8BC:
    if (CMP_G(_flag_a, _flag_b)) goto L_0053F8C6; /* 0x0053F8BC: jg 0x53f8c6 */
L_0053F8BE:
    /* cmp edx, 0x80000000u */ /* 0x0053F8BE: cmp edx, 0x80000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0053F8CF; /* 0x0053F8C4: jb 0x53f8cf */
L_0053F8C6:
    eax = 0xB6u; /* 0x0053F8C6: mov eax, 0xb6 */
    MEM16(ecx + 0xE) = (uint16_t)(LO16(eax)); /* 0x0053F8CB: mov word ptr [ecx + 0xe], ax */
L_0053F8CF:
    eax = ecx; /* 0x0053F8CF: mov eax, ecx */
L_0053F8D1:
    esi = POP32_VAL(esp); /* 0x0053F8D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x0053F8D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0053F8D3: ret 8 */
    RECOMP_REGS_OUT();
}
