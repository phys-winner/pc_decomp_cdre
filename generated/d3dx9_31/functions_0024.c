#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171052C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171052C8u);

L_171052C8:
    edi = edi; /* 0x171052C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171052CA: push ebp */
    ebp = esp; /* 0x171052CB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171052CD: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171052D0: push ebx */
    PUSH32(esp, esi); /* 0x171052D1: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171052D2: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x34); /* 0x171052D5: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, edi); /* 0x171052D8: push edi */
    ebx = ecx; /* 0x171052D9: mov ebx, ecx */
    ecx = MEM32(eax); /* 0x171052DB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171052DD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171052DE: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171052E1: mov ecx, dword ptr [ebp + 8] */
    edi = eax; /* 0x171052E4: mov edi, eax */
    eax = ebp + (-0x1C); /* 0x171052E6: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171052E9: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0xC); /* 0x171052EC: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x171052EF: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x4); /* 0x171052F1: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171052F4: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171052F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebx + 0x134), 1 */ /* 0x171052F9: test byte ptr [ebx + 0x134], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x134)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0xC) = eax; /* 0x17105300: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17105303: mov dword ptr [ebp - 4], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17105330; /* 0x17105306: jne 0x17105330 */
L_17105308:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x17105308: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105330; /* 0x1710530B: je 0x17105330 */
L_1710530D:
    PUSH32(esp, eax); /* 0x1710530D: push eax */
    PUSH32(esp, eax); /* 0x1710530E: push eax */
    RECOMP_CALL(sub_1721B200); /* 0x1710530F: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x17105314: push 0x30000 */
    PUSH32(esp, 0); /* 0x17105319: push 0 */
    MEM32(ebx + 0x130) = eax; /* 0x1710531B: mov dword ptr [ebx + 0x130], eax */
    RECOMP_CALL(sub_1721B200); /* 0x17105321: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17105326: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebx + 0x134) | 1)); _flag_b = (uint32_t)((MEM32(ebx + 0x134) | 1));
    MEM32(ebx + 0x134) = MEM32(ebx + 0x134) | 1; /* 0x17105329: or dword ptr [ebx + 0x134], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17105330:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17105330: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x38), edx */ /* 0x17105332: cmp dword ptr [esi + 0x38], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105412; /* 0x17105335: je 0x17105412 */
L_1710533B:
    eax = MEM32(ebp + 0x8); /* 0x1710533B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1710533E: mov eax, dword ptr [eax] */
    ecx = MEM32(edi + 0x10); /* 0x17105340: mov ecx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17105343: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x17105345: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(edi + 0x14); /* 0x17105348: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1710534B: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1710534D: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(edi + 0x18); /* 0x17105350: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17105353: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM16(esi + 0x4A), LO16(edx) */ /* 0x17105355: cmp word ptr [esi + 0x4a], dx */
    _flag_a = (uint32_t)(MEM16(esi + 0x4A)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x10)) = ecx; /* 0x17105359: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x1710535C: mov dword ptr [ebp + 0xc], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17105401; /* 0x1710535F: jbe 0x17105401 */
L_17105365:
    eax = (uint32_t)MEM16(ebp + 0xC); /* 0x17105365: movzx eax, word ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x30); /* 0x17105369: mov ecx, dword ptr [esi + 0x30] */
    eax = eax + eax * 2; /* 0x1710536C: lea eax, [eax + eax*2] */
    eax = ecx + eax * 8; /* 0x1710536F: lea eax, [ecx + eax*8] */
    ecx = MEM32(eax + 0x4); /* 0x17105372: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x17105375: mov edx, dword ptr [ecx + 8] */
    edx = MEM32(edx); /* 0x17105378: mov edx, dword ptr [edx] */
    /* cmp edx, MEM32(ebx + 0x34) */ /* 0x1710537A: cmp edx, dword ptr [ebx + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171053EE; /* 0x1710537D: jbe 0x171053ee */
L_1710537F:
    eax = MEM32(eax + 0x8); /* 0x1710537F: mov eax, dword ptr [eax + 8] */
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x17105382: movzx edx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0; /* 0x17105386: sub edx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171053CC; /* 0x17105389: je 0x171053cc */
L_1710538B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710538B: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171053A8; /* 0x1710538C: je 0x171053a8 */
L_1710538E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710538E: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171053EE; /* 0x1710538F: jne 0x171053ee */
L_17105391:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17105391: push -1 */
    edx = ebp + 0x10; /* 0x17105393: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x17105396: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x17105397: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x1710539B: push eax */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x1710539C: movzx eax, word ptr [eax + 6] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171053A0: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171053A0: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x171053A3: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    goto L_171053BD; /* 0x171053A6: jmp 0x171053bd */
L_171053A8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171053A8: push -1 */
    edx = ebp + 0x10; /* 0x171053AA: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x171053AD: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x171053AE: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x171053B2: push eax */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x171053B3: movzx eax, word ptr [eax + 6] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171053B7: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171053B7: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x171053BA: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
L_171053BD:
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171053BD: push dword ptr [esi + 0x38] */
    PUSH32(esp, edx); /* 0x171053C0: push edx */
    PUSH32(esp, eax); /* 0x171053C1: push eax */
    PUSH32(esp, ecx); /* 0x171053C2: push ecx */
    ecx = ebx; /* 0x171053C3: mov ecx, ebx */
    RECOMP_CALL(sub_1710427D); /* 0x171053C5: call 0x1710427d */
    RECOMP_FLAGS_IN();
    goto L_171053EE; /* 0x171053CA: jmp 0x171053ee */
L_171053CC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171053CC: push -1 */
    edx = ebp + 0x10; /* 0x171053CE: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x171053D1: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x171053D2: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x171053D6: push eax */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171053D7: push dword ptr [esi + 0x38] */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x171053DA: movzx eax, word ptr [eax + 6] */
    PUSH32(esp, edx); /* 0x171053DE: push edx */
    edx = MEM32(ebp + (-0x14)); /* 0x171053DF: mov edx, dword ptr [ebp - 0x14] */
    eax = edx + eax * 8; /* 0x171053E2: lea eax, [edx + eax*8] */
    PUSH32(esp, eax); /* 0x171053E5: push eax */
    PUSH32(esp, ecx); /* 0x171053E6: push ecx */
    ecx = ebx; /* 0x171053E7: mov ecx, ebx */
    RECOMP_CALL(sub_1710461B); /* 0x171053E9: call 0x1710461b */
    RECOMP_FLAGS_IN();
L_171053EE:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171053EE: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x171053F1: mov ax, word ptr [ebp + 0xc] */
    /* cmp LO16(eax), MEM16(esi + 0x4A) */ /* 0x171053F5: cmp ax, word ptr [esi + 0x4a] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x4A)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17105365; /* 0x171053F9: jb 0x17105365 */
L_171053FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171053FF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17105401:
    eax = MEM32(edi + 0x10); /* 0x17105401: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17105404: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x17105407: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x17105409: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0x8); /* 0x1710540C: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1710540F: mov dword ptr [ebp + 0xc], eax */
L_17105412:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17105412: push dword ptr [ebp - 4] */
    eax = ebp + (-0x1C); /* 0x17105415: lea eax, [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17105418: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1710541B: push dword ptr [ebp - 4] */
    PUSH32(esp, edx); /* 0x1710541E: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710541F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x17105422: push edx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17105423: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17105426: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17105429: push dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x1710542C: push edx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1710542D: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x17105430: push eax */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x17105431: push dword ptr [esi + 0x40] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x17105434: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_170EA22F); /* 0x17105437: call 0x170ea22f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1710543C: pop edi */
    esi = POP32_VAL(esp); /* 0x1710543D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710543E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710543F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17105440: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17105448(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105448u);

L_17105448:
    edi = edi; /* 0x17105448: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710544A: push ebp */
    ebp = esp; /* 0x1710544B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1710544D: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17105450: push ebx */
    PUSH32(esp, esi); /* 0x17105451: push esi */
    PUSH32(esp, edi); /* 0x17105452: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17105453: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x34); /* 0x17105456: mov eax, dword ptr [edi + 0x34] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17105459: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(eax); /* 0x1710545C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710545E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1710545F: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17105462: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x17105466: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x17105468: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1710546B: mov eax, dword ptr [eax] */
    edx = MEM32(esi + 0x1C); /* 0x1710546D: mov edx, dword ptr [esi + 0x1c] */
    ebx = MEM32(esi + 0x24); /* 0x17105470: mov ebx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x17105473: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x17105475: mov dword ptr [ebp - 8], edx */
    edx = MEM32(esi + 0x20); /* 0x17105478: mov edx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1710547B: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x1710547D: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(esi + 0xC); /* 0x17105480: mov edx, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x28)) = edx; /* 0x17105483: mov dword ptr [ebp - 0x28], edx */
    edx = MEM32(esi + 0x10); /* 0x17105486: mov edx, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x20)) = edx; /* 0x17105489: mov dword ptr [ebp - 0x20], edx */
    edx = MEM32(esi + 0x14); /* 0x1710548C: mov edx, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x24)) = edx; /* 0x1710548F: mov dword ptr [ebp - 0x24], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x17105492: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17105494: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x38), edx */ /* 0x17105496: cmp dword ptr [edi + 0x38], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebp + (-0x34); /* 0x17105499: lea ecx, [ebp - 0x34] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1710549C: mov dword ptr [ebp - 0x2c], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105577; /* 0x1710549F: je 0x17105577 */
L_171054A5:
    ecx = MEM32(esi + 0x34); /* 0x171054A5: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171054A8: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171054AA: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(esi + 0x38); /* 0x171054AD: mov ecx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171054B0: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171054B2: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(esi + 0x3C); /* 0x171054B5: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171054B8: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM16(edi + 0x4A), LO16(edx) */ /* 0x171054BA: cmp word ptr [edi + 0x4a], dx */
    _flag_a = (uint32_t)(MEM16(edi + 0x4A)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x18)) = ecx; /* 0x171054BE: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + 0xC) = edx; /* 0x171054C1: mov dword ptr [ebp + 0xc], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710556A; /* 0x171054C4: jbe 0x1710556a */
L_171054CA:
    eax = (uint32_t)MEM16(ebp + 0xC); /* 0x171054CA: movzx eax, word ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x30); /* 0x171054CE: mov ecx, dword ptr [edi + 0x30] */
    eax = eax + eax * 2; /* 0x171054D1: lea eax, [eax + eax*2] */
    eax = ecx + eax * 8; /* 0x171054D4: lea eax, [ecx + eax*8] */
    ecx = MEM32(eax + 0x4); /* 0x171054D7: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171054DA: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ecx + 0x8); /* 0x171054DD: mov ecx, dword ptr [ecx + 8] */
    edx = MEM32(ecx); /* 0x171054E0: mov edx, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x10)); /* 0x171054E2: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp edx, MEM32(ecx + 0x34) */ /* 0x171054E5: cmp edx, dword ptr [ecx + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17105559; /* 0x171054E8: jbe 0x17105559 */
L_171054EA:
    eax = MEM32(eax + 0x8); /* 0x171054EA: mov eax, dword ptr [eax + 8] */
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x171054ED: movzx edx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0; /* 0x171054F1: sub edx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17105537; /* 0x171054F4: je 0x17105537 */
L_171054F6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171054F6: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17105513; /* 0x171054F7: je 0x17105513 */
L_171054F9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171054F9: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17105559; /* 0x171054FA: jne 0x17105559 */
L_171054FC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171054FC: push -1 */
    edx = ebp + (-0x4); /* 0x171054FE: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x17105501: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x17105502: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x17105506: push eax */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x17105507: movzx eax, word ptr [eax + 6] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1710550B: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1710550B: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x1710550E: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    goto L_17105528; /* 0x17105511: jmp 0x17105528 */
L_17105513:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17105513: push -1 */
    edx = ebp + (-0x4); /* 0x17105515: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x17105518: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x17105519: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x1710551D: push eax */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x1710551E: movzx eax, word ptr [eax + 6] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17105522: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17105522: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x17105525: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
L_17105528:
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x17105528: push dword ptr [edi + 0x38] */
    PUSH32(esp, edx); /* 0x1710552B: push edx */
    PUSH32(esp, eax); /* 0x1710552C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1710552D: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1710427D); /* 0x17105530: call 0x1710427d */
    RECOMP_FLAGS_IN();
    goto L_17105559; /* 0x17105535: jmp 0x17105559 */
L_17105537:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17105537: push -1 */
    edx = ebp + (-0x4); /* 0x17105539: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1710553C: push edx */
    edx = (uint32_t)MEM16(eax + 0x8); /* 0x1710553D: movzx edx, word ptr [eax + 8] */
    PUSH32(esp, eax); /* 0x17105541: push eax */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x17105542: push dword ptr [edi + 0x38] */
    eax = (uint32_t)MEM16(eax + 0x6); /* 0x17105545: movzx eax, word ptr [eax + 6] */
    PUSH32(esp, edx); /* 0x17105549: push edx */
    edx = MEM32(ebp + (-0x1C)); /* 0x1710554A: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + eax * 8; /* 0x1710554D: lea eax, [edx + eax*8] */
    PUSH32(esp, eax); /* 0x17105550: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17105551: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1710461B); /* 0x17105554: call 0x1710461b */
    RECOMP_FLAGS_IN();
L_17105559:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x17105559: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1710555C: mov ax, word ptr [ebp + 0xc] */
    /* cmp LO16(eax), MEM16(edi + 0x4A) */ /* 0x17105560: cmp ax, word ptr [edi + 0x4a] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x4A)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171054CA; /* 0x17105564: jb 0x171054ca */
L_1710556A:
    eax = MEM32(ebp + 0x8); /* 0x1710556A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x34); /* 0x1710556D: mov ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x17105570: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x18); /* 0x17105572: mov eax, dword ptr [esi + 0x18] */
    goto L_1710557A; /* 0x17105575: jmp 0x1710557a */
L_17105577:
    eax = MEM32(ebp + 0xC); /* 0x17105577: mov eax, dword ptr [ebp + 0xc] */
L_1710557A:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1710557A: push dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1710557D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1710557F: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x17105582: push dword ptr [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x17105585: push edx */
    PUSH32(esp, eax); /* 0x17105586: push eax */
    PUSH32(esp, edx); /* 0x17105587: push edx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17105588: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x34); /* 0x1710558B: lea eax, [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x1710558E: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1710558F: push dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x17105592: push edx */
    PUSH32(esp, ecx); /* 0x17105593: push ecx */
    PUSH32(esp, eax); /* 0x17105594: push eax */
    PUSH32(esp, MEM32(edi + 0x40)); /* 0x17105595: push dword ptr [edi + 0x40] */
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x17105598: push dword ptr [edi + 0x3c] */
    RECOMP_CALL(sub_170EA22F); /* 0x1710559B: call 0x170ea22f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x4C), 0 */ /* 0x171055A0: cmp dword ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710560C; /* 0x171055A4: je 0x1710560c */
L_171055A6:
    eax = MEM32(ebp + 0x8); /* 0x171055A6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x5C); /* 0x171055A9: mov ecx, dword ptr [esi + 0x5c] */
    ebx = MEM32(esi + 0x28); /* 0x171055AC: mov ebx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax); /* 0x171055AF: add ebx, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171055B1: add ecx, esi */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x171055B3: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171055B5: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171055B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710560C; /* 0x171055BA: jbe 0x1710560c */
L_171055BC:
    MEM32(ebp + 0xC) = eax; /* 0x171055BC: mov dword ptr [ebp + 0xc], eax */
L_171055BF:
    edx = MEM32(ecx); /* 0x171055BF: mov edx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x171055C1: mov edi, dword ptr [ecx + 4] */
    eax = edx; /* 0x171055C4: mov eax, edx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171055C6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171055C6: shl eax, 4 */
    if (5u) _cf = (((edx) >> 27) & 1u); /* 0x171055C9: shl edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 5u; /* 0x171055C9: shl edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x171055CC: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171055CF: add eax, ebx */
    _flag_k = FK_ADD;
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x171055D1: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x171055D1: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171055D4: add edi, eax */
    _flag_k = FK_ADD;
    goto L_17105600; /* 0x171055D6: jmp 0x17105600 */
L_171055D8:
    fp_push(*(double*)ADDR(edx)); /* 0x171055D8: fld qword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x171055DA: add edx, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171055DD: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171055DF: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(edx)); /* 0x171055E2: fld qword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x171055E4: add edx, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171055E7: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171055E9: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(edx)); /* 0x171055EC: fld qword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x171055EE: add edx, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171055F1: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171055F3: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(edx)); /* 0x171055F6: fld qword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171055F8: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171055FA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x171055FD: add edx, 8 */
    _flag_k = FK_ADD;
L_17105600:
    /* cmp eax, edi */ /* 0x17105600: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171055D8; /* 0x17105602: jb 0x171055d8 */
L_17105604:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x17105604: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x17105607: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171055BF; /* 0x1710560A: jne 0x171055bf */
L_1710560C:
    /* cmp MEM32(esi + 0x54), 0 */ /* 0x1710560C: cmp dword ptr [esi + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105672; /* 0x17105610: je 0x17105672 */
L_17105612:
    eax = MEM32(ebp + 0x8); /* 0x17105612: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(esi + 0x64); /* 0x17105615: mov edi, dword ptr [esi + 0x64] */
    ecx = MEM32(esi + 0x30); /* 0x17105618: mov ecx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x1710561B: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1710561D: add edi, esi */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x1710561F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17105621: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x17105624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ecx; /* 0x17105626: mov dword ptr [ebp - 0x24], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105672; /* 0x17105629: jbe 0x17105672 */
L_1710562B:
    MEM32(ebp + (-0x8)) = eax; /* 0x1710562B: mov dword ptr [ebp - 8], eax */
L_1710562E:
    eax = MEM32(edi); /* 0x1710562E: mov eax, dword ptr [edi] */
    ebx = eax; /* 0x17105630: mov ebx, eax */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17105632: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17105632: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x17105635: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x17105638: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x17105638: shl ebx, 4 */
    MEM32(ebp + 0xC) = eax; /* 0x1710563B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edi + 0x4); /* 0x1710563E: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x17105641: add ebx, ecx */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x17105643: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x17105643: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17105646: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x17105648: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x1710564A: mov dword ptr [ebp - 0x28], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710566A; /* 0x1710564D: jae 0x1710566a */
L_1710564F:
    eax = MEM32(ebp + 0xC); /* 0x1710564F: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax)); /* 0x17105652: fld qword ptr [eax] */
    RECOMP_CALL(sub_1721B050); /* 0x17105654: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8; /* 0x17105659: add dword ptr [ebp + 0xc], 8 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x1710565D: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1710565F: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0x28)) */ /* 0x17105662: cmp ebx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710564F; /* 0x17105665: jb 0x1710564f */
L_17105667:
    ecx = MEM32(ebp + (-0x24)); /* 0x17105667: mov ecx, dword ptr [ebp - 0x24] */
L_1710566A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1710566A: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1710566D: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710562E; /* 0x17105670: jne 0x1710562e */
L_17105672:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x17105672: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171056CC; /* 0x17105676: je 0x171056cc */
L_17105678:
    eax = MEM32(ebp + 0x8); /* 0x17105678: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(esi + 0x60); /* 0x1710567B: mov edi, dword ptr [esi + 0x60] */
    ebx = MEM32(esi + 0x2C); /* 0x1710567E: mov ebx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax); /* 0x17105681: add ebx, dword ptr [eax] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x17105683: add edi, esi */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x17105685: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17105687: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1710568A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171056CC; /* 0x1710568C: jbe 0x171056cc */
L_1710568E:
    MEM32(ebp + 0xC) = eax; /* 0x1710568E: mov dword ptr [ebp + 0xc], eax */
L_17105691:
    eax = MEM32(edi); /* 0x17105691: mov eax, dword ptr [edi] */
    esi = ebx + eax * 4; /* 0x17105693: lea esi, [ebx + eax*4] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17105696: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17105696: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x17105699: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1710569C: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x1710569F: mov eax, dword ptr [edi + 4] */
    eax = esi + eax * 4; /* 0x171056A2: lea eax, [esi + eax*4] */
    /* cmp esi, eax */ /* 0x171056A5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = eax; /* 0x171056A7: mov dword ptr [ebp - 0x2c], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171056C4; /* 0x171056AA: jae 0x171056c4 */
L_171056AC:
    eax = MEM32(ebp + 0x8); /* 0x171056AC: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax)); /* 0x171056AF: fld qword ptr [eax] */
    RECOMP_CALL(sub_1721B050); /* 0x171056B1: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x20u; /* 0x171056B6: add dword ptr [ebp + 8], 0x20 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x171056BA: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171056BC: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x2C)) */ /* 0x171056BF: cmp esi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171056AC; /* 0x171056C2: jb 0x171056ac */
L_171056C4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171056C4: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x171056C7: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17105691; /* 0x171056CA: jne 0x17105691 */
L_171056CC:
    edi = POP32_VAL(esp); /* 0x171056CC: pop edi */
    esi = POP32_VAL(esp); /* 0x171056CD: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171056CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171056D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171056D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171056D2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171056DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171056DAu);

L_171056DA:
    edi = edi; /* 0x171056DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171056DC: push ebp */
    ebp = esp; /* 0x171056DD: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171056DF: mov eax, dword ptr [ebp + 0xc] */
    ecx = 0x80000003u; /* 0x171056E2: mov ecx, 0x80000003 */
    edx = eax; /* 0x171056E7: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x171056E9: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x171056EB: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171056ED: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171056EE: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105710; /* 0x171056F1: jne 0x17105710 */
L_171056F3:
    eax = ~eax; /* 0x171056F3: not eax */
L_171056F5:
    /* cmp MEM32(ebx + 0x58), 3 */ /* 0x171056F5: cmp dword ptr [ebx + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105727; /* 0x171056F9: jne 0x17105727 */
L_171056FB:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171056FB: push dword ptr [ebp + 0x18] */
    eax = ~eax; /* 0x171056FE: not eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17105700: push dword ptr [ebp + 0x14] */
    ecx = ebx; /* 0x17105703: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105705: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17105708: push eax */
    RECOMP_CALL(sub_1710B416); /* 0x17105709: call 0x1710b416 */
    RECOMP_FLAGS_IN();
    goto L_17105765; /* 0x1710570E: jmp 0x17105765 */
L_17105710:
    PUSH32(esp, 0); /* 0x17105710: push 0 */
    PUSH32(esp, 1); /* 0x17105712: push 1 */
    PUSH32(esp, eax); /* 0x17105714: push eax */
    ecx = ebx; /* 0x17105715: mov ecx, ebx */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105717: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710571C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171056F5; /* 0x1710571E: jne 0x171056f5 */
L_17105720:
    eax = 0x8876086Cu; /* 0x17105720: mov eax, 0x8876086c */
    goto L_17105765; /* 0x17105725: jmp 0x17105765 */
L_17105727:
    ecx = MEM32(ebp + 0x18); /* 0x17105727: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1710572A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1710572B: mov esi, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1710572E: mov edx, ecx */
    PUSH32(esp, edi); /* 0x17105730: push edi */
    edi = MEM32(eax); /* 0x17105731: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x14); /* 0x17105733: add edi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17105736: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17105736: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17105739: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1710573B: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710573D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17105740: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) & 0; /* 0x17105742: and dword ptr [ebx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x38); /* 0x17105746: mov ecx, dword ptr [ebx + 0x38] */
    ecx = MEM32(ecx); /* 0x17105749: mov ecx, dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x1710574B: mov edx, dword ptr [eax + 8] */
    MEM32(edx) = ecx; /* 0x1710574E: mov dword ptr [edx], ecx */
    ecx = MEM32(ebx + 0x40); /* 0x17105750: mov ecx, dword ptr [ebx + 0x40] */
    /* cmp MEM32(ecx), 0 */ /* 0x17105753: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17105756: pop edi */
    esi = POP32_VAL(esp); /* 0x17105757: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105762; /* 0x17105758: je 0x17105762 */
L_1710575A:
    PUSH32(esp, eax); /* 0x1710575A: push eax */
    ecx = ebx; /* 0x1710575B: mov ecx, ebx */
    RECOMP_CALL(sub_17102498); /* 0x1710575D: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105762:
    eax = MEM32(ebx + 0x28); /* 0x17105762: mov eax, dword ptr [ebx + 0x28] */
L_17105765:
    ebx = POP32_VAL(esp); /* 0x17105765: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17105766: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17105767: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1710576F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710576Fu);

L_1710576F:
    edi = edi; /* 0x1710576F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105771: push ebp */
    ebp = esp; /* 0x17105772: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17105774: push ecx */
    PUSH32(esp, ecx); /* 0x17105775: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17105776: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x17105779: push ebx */
    PUSH32(esp, esi); /* 0x1710577A: push esi */
    eax = 0x80000003u; /* 0x1710577B: mov eax, 0x80000003 */
    edx = ecx; /* 0x17105780: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17105782: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x17105784: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17105786: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x17105787: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17105789: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1710578A: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105795; /* 0x1710578D: jne 0x17105795 */
L_1710578F:
    ecx = ~ecx; /* 0x1710578F: not ecx */
    ebx = ecx; /* 0x17105791: mov ebx, ecx */
    goto L_171057D2; /* 0x17105793: jmp 0x171057d2 */
L_17105795:
    ebx = MEM32(ebp + 0x14); /* 0x17105795: mov ebx, dword ptr [ebp + 0x14] */
    eax = edi + 0xE0; /* 0x17105798: lea eax, [edi + 0xe0] */
    edx = MEM32(eax); /* 0x1710579E: mov edx, dword ptr [eax] */
    MEM32(edx + 0x4) = esi; /* 0x171057A0: mov dword ptr [edx + 4], esi */
    edx = MEM32(eax); /* 0x171057A3: mov edx, dword ptr [eax] */
    MEM32(edx) = 3; /* 0x171057A5: mov dword ptr [edx], 3 */
    edx = MEM32(eax); /* 0x171057AB: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ebx; /* 0x171057AD: mov dword ptr [edx + 0x10], ebx */
    edx = MEM32(eax); /* 0x171057B0: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171057B2: push esi */
    MEM32(edx + 0x14) = 4; /* 0x171057B3: mov dword ptr [edx + 0x14], 4 */
    eax = MEM32(eax); /* 0x171057BA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171057BC: push esi */
    PUSH32(esp, ecx); /* 0x171057BD: push ecx */
    ecx = edi; /* 0x171057BE: mov ecx, edi */
    MEM32(eax + 0x18) = esi; /* 0x171057C0: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x171057C3: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171057C8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171057CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710591B; /* 0x171057CC: je 0x1710591b */
L_171057D2:
    eax = MEM32(ebx + 0x4); /* 0x171057D2: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x10); /* 0x171057D5: mov edx, dword ptr [eax + 0x10] */
    /* test edx, edx */ /* 0x171057D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710591B; /* 0x171057DA: je 0x1710591b */
L_171057E0:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x171057E0: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710591B; /* 0x171057E4: jne 0x1710591b */
L_171057EA:
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x171057EA: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1710591B; /* 0x171057ED: ja 0x1710591b */
L_171057F3:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x171057F3: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710580E; /* 0x171057F7: jne 0x1710580e */
L_171057F9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171057F9: push dword ptr [ebp + 0x14] */
    ebx = ~ebx; /* 0x171057FC: not ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171057FE: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x17105801: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x17105803: push ebx */
    RECOMP_CALL(sub_1710ABC9); /* 0x17105804: call 0x1710abc9 */
    RECOMP_FLAGS_IN();
    goto L_17105920; /* 0x17105809: jmp 0x17105920 */
L_1710580E:
    ecx = MEM32(eax + 0x4); /* 0x1710580E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17105811: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710591B; /* 0x17105812: jne 0x1710591b */
L_17105818:
    ecx = MEM32(eax); /* 0x17105818: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x14); /* 0x1710581A: mov eax, dword ptr [eax + 0x14] */
    /* cmp eax, 4 */ /* 0x1710581D: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebx); /* 0x17105820: mov edx, dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = edx; /* 0x17105822: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0xC) = 4; /* 0x17105825: mov dword ptr [ebp + 0xc], 4 */
    if (CMP_A(_flag_a, _flag_b)) goto L_17105831; /* 0x1710582C: ja 0x17105831 */
L_1710582E:
    MEM32(ebp + 0xC) = eax; /* 0x1710582E: mov dword ptr [ebp + 0xc], eax */
L_17105831:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17105831: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171058A7; /* 0x17105832: je 0x171058a7 */
L_17105834:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17105834: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710585F; /* 0x17105835: je 0x1710585f */
L_17105837:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17105837: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710591B; /* 0x17105838: jne 0x1710591b */
L_1710583E:
    ecx = MEM32(ebp + 0x14); /* 0x1710583E: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x17105841: mov esi, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x17105844: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x17105844: shl ecx, 4 */
    eax = ecx; /* 0x17105847: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17105849: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17105849: shr ecx, 2 */
    edi = edx; /* 0x1710584C: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710584E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17105850: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17105852: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17105855: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x17105857: mov edi, dword ptr [ebp + 8] */
    goto L_171058F8; /* 0x1710585A: jmp 0x171058f8 */
L_1710585F:
    eax = MEM32(ebp + 0x14); /* 0x1710585F: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x17105862: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171058F8; /* 0x17105864: je 0x171058f8 */
L_1710586A:
    MEM32(ebp + (-0x8)) = eax; /* 0x1710586A: mov dword ptr [ebp - 8], eax */
L_1710586D:
    eax = MEM32(ebp + 0xC); /* 0x1710586D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17105870: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105896; /* 0x17105872: jbe 0x17105896 */
L_17105874:
    edi = MEM32(ebp + 0x10); /* 0x17105874: mov edi, dword ptr [ebp + 0x10] */
    esi = edx; /* 0x17105877: mov esi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x17105879: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x1710587B: mov dword ptr [ebp + 0x14], eax */
L_1710587E:
    fp_push(*(float*)&MEM32(edi + esi)); /* 0x1710587E: fld dword ptr [edi + esi] */
    RECOMP_CALL(sub_1721B050); /* 0x17105881: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x17105886: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17105888: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710588B: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710587E; /* 0x1710588E: jne 0x1710587e */
L_17105890:
    edi = MEM32(ebp + 0x8); /* 0x17105890: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x17105893: mov edx, dword ptr [ebp - 4] */
L_17105896:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x17105896: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1710589A: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1710589D: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x171058A0: mov dword ptr [ebp - 4], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710586D; /* 0x171058A3: jne 0x1710586d */
L_171058A5:
    goto L_171058F8; /* 0x171058A5: jmp 0x171058f8 */
L_171058A7:
    eax = MEM32(ebp + 0x14); /* 0x171058A7: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171058AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171058F8; /* 0x171058AC: je 0x171058f8 */
L_171058AE:
    MEM32(ebp + 0x8) = eax; /* 0x171058AE: mov dword ptr [ebp + 8], eax */
L_171058B1:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171058B1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171058EC; /* 0x171058B5: jbe 0x171058ec */
L_171058B7:
    eax = MEM32(ebp + 0x10); /* 0x171058B7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171058BA: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171058BC: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x171058BF: mov eax, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x171058C2: mov ecx, edx */
    MEM32(ebp + 0x14) = eax; /* 0x171058C4: mov dword ptr [ebp + 0x14], eax */
L_171058C7:
    eax = MEM32(ebp + (-0x8)); /* 0x171058C7: mov eax, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x171058CA: fld dword ptr [ecx + eax] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171058CD: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171058D3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171058D5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171058D7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171058E0; /* 0x171058DA: jnp 0x171058e0 */
L_171058DC:
    eax = esi; /* 0x171058DC: mov eax, esi */
    goto L_171058E2; /* 0x171058DE: jmp 0x171058e2 */
L_171058E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171058E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171058E2:
    MEM32(ecx) = eax; /* 0x171058E2: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171058E4: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171058E7: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171058C7; /* 0x171058EA: jne 0x171058c7 */
L_171058EC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x171058EC: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x171058F0: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171058F3: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171058B1; /* 0x171058F6: jne 0x171058b1 */
L_171058F8:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x171058F8: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x171058FC: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x171058FF: mov eax, dword ptr [eax] */
    ecx = MEM32(ebx + 0x8); /* 0x17105901: mov ecx, dword ptr [ebx + 8] */
    MEM32(ecx) = eax; /* 0x17105904: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x17105906: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105909: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105916; /* 0x1710590C: je 0x17105916 */
L_1710590E:
    PUSH32(esp, ebx); /* 0x1710590E: push ebx */
    ecx = edi; /* 0x1710590F: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x17105911: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105916:
    eax = MEM32(edi + 0x28); /* 0x17105916: mov eax, dword ptr [edi + 0x28] */
    goto L_17105920; /* 0x17105919: jmp 0x17105920 */
L_1710591B:
    eax = 0x8876086Cu; /* 0x1710591B: mov eax, 0x8876086c */
L_17105920:
    edi = POP32_VAL(esp); /* 0x17105920: pop edi */
    esi = POP32_VAL(esp); /* 0x17105921: pop esi */
    ebx = POP32_VAL(esp); /* 0x17105922: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17105923: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17105924: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1710592C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710592Cu);

L_1710592C:
    edi = edi; /* 0x1710592C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710592E: push ebp */
    ebp = esp; /* 0x1710592F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17105931: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x17105932: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x17105935: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17105936: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105939: mov eax, 0x80000003 */
    ecx = esi; /* 0x1710593E: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105940: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105942: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17105944: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17105945: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710594E; /* 0x17105948: jne 0x1710594e */
L_1710594A:
    esi = ~esi; /* 0x1710594A: not esi */
    goto L_17105989; /* 0x1710594C: jmp 0x17105989 */
L_1710594E:
    eax = edi + 0xE0; /* 0x1710594E: lea eax, [edi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105954: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105956: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x1710595D: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x1710595F: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105965: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x10) = ebx; /* 0x17105967: mov dword ptr [ecx + 0x10], ebx */
    edx = MEM32(eax); /* 0x1710596A: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x1710596C: push 4 */
    ecx = POP32_VAL(esp); /* 0x1710596E: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x1710596F: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105972: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105974: push 1 */
    PUSH32(esp, 1); /* 0x17105976: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105978: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x1710597B: push esi */
    ecx = edi; /* 0x1710597C: mov ecx, edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x1710597E: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17105983: mov esi, eax */
    /* test esi, esi */ /* 0x17105985: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171059E2; /* 0x17105987: je 0x171059e2 */
L_17105989:
    eax = MEM32(esi + 0x4); /* 0x17105989: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x1710598C: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171059E2; /* 0x17105990: jne 0x171059e2 */
L_17105992:
    /* cmp ebx, MEM32(eax + 0x10) */ /* 0x17105992: cmp ebx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171059E2; /* 0x17105995: ja 0x171059e2 */
L_17105997:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x17105997: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171059E2; /* 0x1710599B: jne 0x171059e2 */
L_1710599D:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x1710599D: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171059A1: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171059A2: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x171059A5: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171059B3; /* 0x171059A7: jne 0x171059b3 */
L_171059A9:
    esi = ~esi; /* 0x171059A9: not esi */
    PUSH32(esp, esi); /* 0x171059AB: push esi */
    RECOMP_CALL(sub_1710AD16); /* 0x171059AC: call 0x1710ad16 */
    RECOMP_FLAGS_IN();
    goto L_171059E7; /* 0x171059B1: jmp 0x171059e7 */
L_171059B3:
    PUSH32(esp, MEM32(esi)); /* 0x171059B3: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x171059B5: push eax */
    RECOMP_CALL(sub_17100744); /* 0x171059B6: call 0x17100744 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171059BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171059E7; /* 0x171059BD: jl 0x171059e7 */
L_171059BF:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x171059BF: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x171059C3: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x171059C6: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x171059C8: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x171059CB: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x171059CD: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x171059D0: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171059DD; /* 0x171059D3: je 0x171059dd */
L_171059D5:
    PUSH32(esp, esi); /* 0x171059D5: push esi */
    ecx = edi; /* 0x171059D6: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x171059D8: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_171059DD:
    eax = MEM32(edi + 0x28); /* 0x171059DD: mov eax, dword ptr [edi + 0x28] */
    goto L_171059E7; /* 0x171059E0: jmp 0x171059e7 */
L_171059E2:
    eax = 0x8876086Cu; /* 0x171059E2: mov eax, 0x8876086c */
L_171059E7:
    edi = POP32_VAL(esp); /* 0x171059E7: pop edi */
    esi = POP32_VAL(esp); /* 0x171059E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x171059E9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171059EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171059EB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171059F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171059F3u);

L_171059F3:
    edi = edi; /* 0x171059F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171059F5: push ebp */
    ebp = esp; /* 0x171059F6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171059F8: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x171059F9: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x171059FC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171059FD: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105A00: mov eax, 0x80000003 */
    ecx = esi; /* 0x17105A05: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105A07: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105A09: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17105A0B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17105A0C: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105A15; /* 0x17105A0F: jne 0x17105a15 */
L_17105A11:
    esi = ~esi; /* 0x17105A11: not esi */
    goto L_17105A50; /* 0x17105A13: jmp 0x17105a50 */
L_17105A15:
    eax = edi + 0xE0; /* 0x17105A15: lea eax, [edi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105A1B: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105A1D: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x17105A24: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x17105A26: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105A2C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x10) = ebx; /* 0x17105A2E: mov dword ptr [ecx + 0x10], ebx */
    edx = MEM32(eax); /* 0x17105A31: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x17105A33: push 4 */
    ecx = POP32_VAL(esp); /* 0x17105A35: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x17105A36: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105A39: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105A3B: push 1 */
    PUSH32(esp, 1); /* 0x17105A3D: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105A3F: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x17105A42: push esi */
    ecx = edi; /* 0x17105A43: mov ecx, edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105A45: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17105A4A: mov esi, eax */
    /* test esi, esi */ /* 0x17105A4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105AA9; /* 0x17105A4E: je 0x17105aa9 */
L_17105A50:
    eax = MEM32(esi + 0x4); /* 0x17105A50: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x17105A53: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105AA9; /* 0x17105A57: jne 0x17105aa9 */
L_17105A59:
    /* cmp ebx, MEM32(eax + 0x10) */ /* 0x17105A59: cmp ebx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17105AA9; /* 0x17105A5C: ja 0x17105aa9 */
L_17105A5E:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x17105A5E: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105AA9; /* 0x17105A62: jne 0x17105aa9 */
L_17105A64:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x17105A64: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17105A68: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105A69: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x17105A6C: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105A7A; /* 0x17105A6E: jne 0x17105a7a */
L_17105A70:
    esi = ~esi; /* 0x17105A70: not esi */
    PUSH32(esp, esi); /* 0x17105A72: push esi */
    RECOMP_CALL(sub_1710ADD2); /* 0x17105A73: call 0x1710add2 */
    RECOMP_FLAGS_IN();
    goto L_17105AAE; /* 0x17105A78: jmp 0x17105aae */
L_17105A7A:
    PUSH32(esp, MEM32(esi)); /* 0x17105A7A: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17105A7C: push eax */
    RECOMP_CALL(sub_17100C7F); /* 0x17105A7D: call 0x17100c7f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17105A82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17105AAE; /* 0x17105A84: jl 0x17105aae */
L_17105A86:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x17105A86: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x17105A8A: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x17105A8D: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x17105A8F: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x17105A92: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x17105A94: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105A97: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105AA4; /* 0x17105A9A: je 0x17105aa4 */
L_17105A9C:
    PUSH32(esp, esi); /* 0x17105A9C: push esi */
    ecx = edi; /* 0x17105A9D: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x17105A9F: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105AA4:
    eax = MEM32(edi + 0x28); /* 0x17105AA4: mov eax, dword ptr [edi + 0x28] */
    goto L_17105AAE; /* 0x17105AA7: jmp 0x17105aae */
L_17105AA9:
    eax = 0x8876086Cu; /* 0x17105AA9: mov eax, 0x8876086c */
L_17105AAE:
    edi = POP32_VAL(esp); /* 0x17105AAE: pop edi */
    esi = POP32_VAL(esp); /* 0x17105AAF: pop esi */
    ebx = POP32_VAL(esp); /* 0x17105AB0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17105AB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17105AB2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17105ABA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105ABAu);

L_17105ABA:
    edi = edi; /* 0x17105ABA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105ABC: push ebp */
    ebp = esp; /* 0x17105ABD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17105ABF: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x17105AC0: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x17105AC3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17105AC4: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105AC7: mov eax, 0x80000003 */
    ecx = esi; /* 0x17105ACC: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105ACE: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105AD0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17105AD2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17105AD3: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105ADC; /* 0x17105AD6: jne 0x17105adc */
L_17105AD8:
    esi = ~esi; /* 0x17105AD8: not esi */
    goto L_17105B17; /* 0x17105ADA: jmp 0x17105b17 */
L_17105ADC:
    eax = edi + 0xE0; /* 0x17105ADC: lea eax, [edi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105AE2: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105AE4: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x17105AEB: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x17105AED: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105AF3: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x10) = ebx; /* 0x17105AF5: mov dword ptr [ecx + 0x10], ebx */
    edx = MEM32(eax); /* 0x17105AF8: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x17105AFA: push 4 */
    ecx = POP32_VAL(esp); /* 0x17105AFC: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x17105AFD: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105B00: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105B02: push 1 */
    PUSH32(esp, 1); /* 0x17105B04: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105B06: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x17105B09: push esi */
    ecx = edi; /* 0x17105B0A: mov ecx, edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105B0C: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17105B11: mov esi, eax */
    /* test esi, esi */ /* 0x17105B13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105B70; /* 0x17105B15: je 0x17105b70 */
L_17105B17:
    eax = MEM32(esi + 0x4); /* 0x17105B17: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x17105B1A: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105B70; /* 0x17105B1E: jne 0x17105b70 */
L_17105B20:
    /* cmp ebx, MEM32(eax + 0x10) */ /* 0x17105B20: cmp ebx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17105B70; /* 0x17105B23: ja 0x17105b70 */
L_17105B25:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x17105B25: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105B70; /* 0x17105B29: jne 0x17105b70 */
L_17105B2B:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x17105B2B: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17105B2F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105B30: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x17105B33: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105B41; /* 0x17105B35: jne 0x17105b41 */
L_17105B37:
    esi = ~esi; /* 0x17105B37: not esi */
    PUSH32(esp, esi); /* 0x17105B39: push esi */
    RECOMP_CALL(sub_1710AF2C); /* 0x17105B3A: call 0x1710af2c */
    RECOMP_FLAGS_IN();
    goto L_17105B75; /* 0x17105B3F: jmp 0x17105b75 */
L_17105B41:
    PUSH32(esp, MEM32(esi)); /* 0x17105B41: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17105B43: push eax */
    RECOMP_CALL(sub_171005DF); /* 0x17105B44: call 0x171005df */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17105B49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17105B75; /* 0x17105B4B: jl 0x17105b75 */
L_17105B4D:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x17105B4D: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x17105B51: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x17105B54: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x17105B56: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x17105B59: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x17105B5B: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105B5E: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105B6B; /* 0x17105B61: je 0x17105b6b */
L_17105B63:
    PUSH32(esp, esi); /* 0x17105B63: push esi */
    ecx = edi; /* 0x17105B64: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x17105B66: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105B6B:
    eax = MEM32(edi + 0x28); /* 0x17105B6B: mov eax, dword ptr [edi + 0x28] */
    goto L_17105B75; /* 0x17105B6E: jmp 0x17105b75 */
L_17105B70:
    eax = 0x8876086Cu; /* 0x17105B70: mov eax, 0x8876086c */
L_17105B75:
    edi = POP32_VAL(esp); /* 0x17105B75: pop edi */
    esi = POP32_VAL(esp); /* 0x17105B76: pop esi */
    ebx = POP32_VAL(esp); /* 0x17105B77: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17105B78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17105B79: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17105B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105B81u);

L_17105B81:
    edi = edi; /* 0x17105B81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105B83: push ebp */
    ebp = esp; /* 0x17105B84: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17105B86: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x17105B87: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x17105B8A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17105B8B: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105B8E: mov eax, 0x80000003 */
    ecx = esi; /* 0x17105B93: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105B95: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105B97: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17105B99: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17105B9A: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105BA3; /* 0x17105B9D: jne 0x17105ba3 */
L_17105B9F:
    esi = ~esi; /* 0x17105B9F: not esi */
    goto L_17105BDE; /* 0x17105BA1: jmp 0x17105bde */
L_17105BA3:
    eax = edi + 0xE0; /* 0x17105BA3: lea eax, [edi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105BA9: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105BAB: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x17105BB2: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x17105BB4: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105BBA: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x10) = ebx; /* 0x17105BBC: mov dword ptr [ecx + 0x10], ebx */
    edx = MEM32(eax); /* 0x17105BBF: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x17105BC1: push 4 */
    ecx = POP32_VAL(esp); /* 0x17105BC3: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x17105BC4: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105BC7: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105BC9: push 1 */
    PUSH32(esp, 1); /* 0x17105BCB: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105BCD: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x17105BD0: push esi */
    ecx = edi; /* 0x17105BD1: mov ecx, edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105BD3: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17105BD8: mov esi, eax */
    /* test esi, esi */ /* 0x17105BDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105C37; /* 0x17105BDC: je 0x17105c37 */
L_17105BDE:
    eax = MEM32(esi + 0x4); /* 0x17105BDE: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x17105BE1: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105C37; /* 0x17105BE5: jne 0x17105c37 */
L_17105BE7:
    /* cmp ebx, MEM32(eax + 0x10) */ /* 0x17105BE7: cmp ebx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17105C37; /* 0x17105BEA: ja 0x17105c37 */
L_17105BEC:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x17105BEC: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105C37; /* 0x17105BF0: jne 0x17105c37 */
L_17105BF2:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x17105BF2: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17105BF6: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105BF7: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x17105BFA: mov ecx, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105C08; /* 0x17105BFC: jne 0x17105c08 */
L_17105BFE:
    esi = ~esi; /* 0x17105BFE: not esi */
    PUSH32(esp, esi); /* 0x17105C00: push esi */
    RECOMP_CALL(sub_1710AFFD); /* 0x17105C01: call 0x1710affd */
    RECOMP_FLAGS_IN();
    goto L_17105C3C; /* 0x17105C06: jmp 0x17105c3c */
L_17105C08:
    PUSH32(esp, MEM32(esi)); /* 0x17105C08: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17105C0A: push eax */
    RECOMP_CALL(sub_17100B7A); /* 0x17105C0B: call 0x17100b7a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17105C10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17105C3C; /* 0x17105C12: jl 0x17105c3c */
L_17105C14:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x17105C14: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x17105C18: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x17105C1B: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x17105C1D: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x17105C20: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x17105C22: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105C25: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105C32; /* 0x17105C28: je 0x17105c32 */
L_17105C2A:
    PUSH32(esp, esi); /* 0x17105C2A: push esi */
    ecx = edi; /* 0x17105C2B: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x17105C2D: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105C32:
    eax = MEM32(edi + 0x28); /* 0x17105C32: mov eax, dword ptr [edi + 0x28] */
    goto L_17105C3C; /* 0x17105C35: jmp 0x17105c3c */
L_17105C37:
    eax = 0x8876086Cu; /* 0x17105C37: mov eax, 0x8876086c */
L_17105C3C:
    edi = POP32_VAL(esp); /* 0x17105C3C: pop edi */
    esi = POP32_VAL(esp); /* 0x17105C3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x17105C3E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17105C3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17105C40: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17105C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105C48u);

L_17105C48:
    edi = edi; /* 0x17105C48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105C4A: push ebp */
    ebp = esp; /* 0x17105C4B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17105C4D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17105C4E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17105C51: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17105C52: mov edi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105C55: mov eax, 0x80000003 */
    ecx = edi; /* 0x17105C5A: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105C5C: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105C5E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105C66; /* 0x17105C60: jne 0x17105c66 */
L_17105C62:
    edi = ~edi; /* 0x17105C62: not edi */
    goto L_17105CA2; /* 0x17105C64: jmp 0x17105ca2 */
L_17105C66:
    eax = esi + 0xE0; /* 0x17105C66: lea eax, [esi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105C6C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105C6E: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x17105C75: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x17105C77: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105C7D: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0; /* 0x17105C7F: and dword ptr [ecx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x17105C83: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x17105C85: push 4 */
    ecx = POP32_VAL(esp); /* 0x17105C87: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x17105C88: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105C8B: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105C8D: push 1 */
    PUSH32(esp, 1); /* 0x17105C8F: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105C91: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, edi); /* 0x17105C94: push edi */
    ecx = esi; /* 0x17105C95: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105C97: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17105C9C: mov edi, eax */
    /* test edi, edi */ /* 0x17105C9E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105CF7; /* 0x17105CA0: je 0x17105cf7 */
L_17105CA2:
    eax = MEM32(edi + 0x4); /* 0x17105CA2: mov eax, dword ptr [edi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x17105CA5: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105CF7; /* 0x17105CA9: jne 0x17105cf7 */
L_17105CAB:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17105CAB: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105CB7; /* 0x17105CAF: je 0x17105cb7 */
L_17105CB1:
    /* cmp MEM32(edi + 0xC), 0xFFFFFFFFu */ /* 0x17105CB1: cmp dword ptr [edi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105CF7; /* 0x17105CB5: je 0x17105cf7 */
L_17105CB7:
    /* cmp MEM32(esi + 0x58), 3 */ /* 0x17105CB7: cmp dword ptr [esi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105CBB: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x17105CBE: mov ecx, esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105CCC; /* 0x17105CC0: jne 0x17105ccc */
L_17105CC2:
    edi = ~edi; /* 0x17105CC2: not edi */
    PUSH32(esp, edi); /* 0x17105CC4: push edi */
    RECOMP_CALL(sub_1710AC85); /* 0x17105CC5: call 0x1710ac85 */
    RECOMP_FLAGS_IN();
    goto L_17105CFC; /* 0x17105CCA: jmp 0x17105cfc */
L_17105CCC:
    PUSH32(esp, MEM32(edi)); /* 0x17105CCC: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x17105CCE: push eax */
    RECOMP_CALL(sub_1710067D); /* 0x17105CCF: call 0x1710067d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17105CD4: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x17105CD8: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x17105CDB: mov eax, dword ptr [eax] */
    ecx = MEM32(edi + 0x8); /* 0x17105CDD: mov ecx, dword ptr [edi + 8] */
    MEM32(ecx) = eax; /* 0x17105CE0: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x17105CE2: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105CE5: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105CF2; /* 0x17105CE8: je 0x17105cf2 */
L_17105CEA:
    PUSH32(esp, edi); /* 0x17105CEA: push edi */
    ecx = esi; /* 0x17105CEB: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x17105CED: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105CF2:
    eax = MEM32(esi + 0x28); /* 0x17105CF2: mov eax, dword ptr [esi + 0x28] */
    goto L_17105CFC; /* 0x17105CF5: jmp 0x17105cfc */
L_17105CF7:
    eax = 0x8876086Cu; /* 0x17105CF7: mov eax, 0x8876086c */
L_17105CFC:
    edi = POP32_VAL(esp); /* 0x17105CFC: pop edi */
    esi = POP32_VAL(esp); /* 0x17105CFD: pop esi */
    ebp = POP32_VAL(esp); /* 0x17105CFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17105CFF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17105D07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105D07u);

L_17105D07:
    edi = edi; /* 0x17105D07: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105D09: push ebp */
    ebp = esp; /* 0x17105D0A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17105D0C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17105D0D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17105D10: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17105D11: mov edi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17105D14: mov eax, 0x80000003 */
    ecx = edi; /* 0x17105D19: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105D1B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17105D1D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105D25; /* 0x17105D1F: jne 0x17105d25 */
L_17105D21:
    edi = ~edi; /* 0x17105D21: not edi */
    goto L_17105D61; /* 0x17105D23: jmp 0x17105d61 */
L_17105D25:
    eax = esi + 0xE0; /* 0x17105D25: lea eax, [esi + 0xe0] */
    ecx = MEM32(eax); /* 0x17105D2B: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 2; /* 0x17105D2D: mov dword ptr [ecx + 4], 2 */
    ecx = MEM32(eax); /* 0x17105D34: mov ecx, dword ptr [eax] */
    MEM32(ecx) = 3; /* 0x17105D36: mov dword ptr [ecx], 3 */
    ecx = MEM32(eax); /* 0x17105D3C: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) & 0; /* 0x17105D3E: and dword ptr [ecx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x17105D42: mov edx, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x17105D44: push 4 */
    ecx = POP32_VAL(esp); /* 0x17105D46: pop ecx */
    MEM32(edx + 0x14) = ecx; /* 0x17105D47: mov dword ptr [edx + 0x14], ecx */
    eax = MEM32(eax); /* 0x17105D4A: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17105D4C: push 1 */
    PUSH32(esp, 1); /* 0x17105D4E: push 1 */
    MEM32(eax + 0x18) = ecx; /* 0x17105D50: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, edi); /* 0x17105D53: push edi */
    ecx = esi; /* 0x17105D54: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105D56: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17105D5B: mov edi, eax */
    /* test edi, edi */ /* 0x17105D5D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105DBF; /* 0x17105D5F: je 0x17105dbf */
L_17105D61:
    eax = MEM32(edi + 0x4); /* 0x17105D61: mov eax, dword ptr [edi + 4] */
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x17105D64: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105DBF; /* 0x17105D68: jne 0x17105dbf */
L_17105D6A:
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17105D6A: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105D76; /* 0x17105D6E: je 0x17105d76 */
L_17105D70:
    /* cmp MEM32(edi + 0xC), 0xFFFFFFFFu */ /* 0x17105D70: cmp dword ptr [edi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105DBF; /* 0x17105D74: je 0x17105dbf */
L_17105D76:
    /* cmp MEM32(esi + 0x58), 3 */ /* 0x17105D76: cmp dword ptr [esi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x17105D7A: mov ecx, esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105D8B; /* 0x17105D7C: jne 0x17105d8b */
L_17105D7E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105D7E: push dword ptr [ebp + 0x10] */
    edi = ~edi; /* 0x17105D81: not edi */
    PUSH32(esp, edi); /* 0x17105D83: push edi */
    RECOMP_CALL(sub_1710AE95); /* 0x17105D84: call 0x1710ae95 */
    RECOMP_FLAGS_IN();
    goto L_17105DC4; /* 0x17105D89: jmp 0x17105dc4 */
L_17105D8B:
    PUSH32(esp, 1); /* 0x17105D8B: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105D8D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi)); /* 0x17105D90: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x17105D92: push eax */
    RECOMP_CALL(sub_171005DF); /* 0x17105D93: call 0x171005df */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17105D98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17105DC4; /* 0x17105D9A: jl 0x17105dc4 */
L_17105D9C:
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17105D9C: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x17105DA0: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x17105DA3: mov eax, dword ptr [eax] */
    ecx = MEM32(edi + 0x8); /* 0x17105DA5: mov ecx, dword ptr [edi + 8] */
    MEM32(ecx) = eax; /* 0x17105DA8: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x17105DAA: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17105DAD: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105DBA; /* 0x17105DB0: je 0x17105dba */
L_17105DB2:
    PUSH32(esp, edi); /* 0x17105DB2: push edi */
    ecx = esi; /* 0x17105DB3: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x17105DB5: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17105DBA:
    eax = MEM32(esi + 0x28); /* 0x17105DBA: mov eax, dword ptr [esi + 0x28] */
    goto L_17105DC4; /* 0x17105DBD: jmp 0x17105dc4 */
L_17105DBF:
    eax = 0x8876086Cu; /* 0x17105DBF: mov eax, 0x8876086c */
L_17105DC4:
    edi = POP32_VAL(esp); /* 0x17105DC4: pop edi */
    esi = POP32_VAL(esp); /* 0x17105DC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x17105DC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17105DC7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17105DCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17105DCFu);

L_17105DCF:
    edi = edi; /* 0x17105DCF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17105DD1: push ebp */
    ebp = esp; /* 0x17105DD2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17105DD4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17105DD7: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17105DD8: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17105DDB: push esi */
    eax = 0x80000003u; /* 0x17105DDC: mov eax, 0x80000003 */
    PUSH32(esp, edi); /* 0x17105DE1: push edi */
    ecx = ebx; /* 0x17105DE2: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17105DE4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17105DE6: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17105DE8: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x17105DE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x17105DEB: push 3 */
    edi = POP32_VAL(esp); /* 0x17105DED: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105DF4; /* 0x17105DEE: jne 0x17105df4 */
L_17105DF0:
    ebx = ~ebx; /* 0x17105DF0: not ebx */
    goto L_17105E2C; /* 0x17105DF2: jmp 0x17105e2c */
L_17105DF4:
    ecx = MEM32(ebp + 0x8); /* 0x17105DF4: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0xE0; /* 0x17105DF7: lea eax, [ecx + 0xe0] */
    edx = MEM32(eax); /* 0x17105DFD: mov edx, dword ptr [eax] */
    MEM32(edx + 0x4) = esi; /* 0x17105DFF: mov dword ptr [edx + 4], esi */
    edx = MEM32(eax); /* 0x17105E02: mov edx, dword ptr [eax] */
    MEM32(edx) = edi; /* 0x17105E04: mov dword ptr [edx], edi */
    edx = MEM32(eax); /* 0x17105E06: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x10) = MEM32(edx + 0x10) & 0; /* 0x17105E08: and dword ptr [edx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x17105E0C: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x17105E0E: push esi */
    MEM32(edx + 0x14) = 4; /* 0x17105E0F: mov dword ptr [edx + 0x14], 4 */
    eax = MEM32(eax); /* 0x17105E16: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x17105E18: push esi */
    PUSH32(esp, ebx); /* 0x17105E19: push ebx */
    MEM32(eax + 0x18) = esi; /* 0x17105E1A: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17105E1D: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17105E22: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17105E24: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106048; /* 0x17105E26: je 0x17106048 */
L_17105E2C:
    eax = MEM32(ebx + 0x4); /* 0x17105E2C: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x4); /* 0x17105E2F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17105E32: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x10), edx */ /* 0x17105E34: cmp dword ptr [eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105E43; /* 0x17105E37: je 0x17105e43 */
L_17105E39:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x17105E39: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106048; /* 0x17105E3D: je 0x17106048 */
L_17105E43:
    /* cmp ecx, esi */ /* 0x17105E43: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17105E4F; /* 0x17105E45: je 0x17105e4f */
L_17105E47:
    /* cmp ecx, edx */ /* 0x17105E47: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106048; /* 0x17105E49: jne 0x17106048 */
L_17105E4F:
    ecx = MEM32(ebp + 0x8); /* 0x17105E4F: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x58), edi */ /* 0x17105E52: cmp dword ptr [ecx + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105E67; /* 0x17105E55: jne 0x17105e67 */
L_17105E57:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17105E57: push dword ptr [ebp + 0x10] */
    ebx = ~ebx; /* 0x17105E5A: not ebx */
    PUSH32(esp, ebx); /* 0x17105E5C: push ebx */
    RECOMP_CALL(sub_1710AB39); /* 0x17105E5D: call 0x1710ab39 */
    RECOMP_FLAGS_IN();
    goto L_1710604D; /* 0x17105E62: jmp 0x1710604d */
L_17105E67:
    ecx = MEM32(eax + 0x14); /* 0x17105E67: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(eax); /* 0x17105E6A: mov eax, dword ptr [eax] */
    /* cmp eax, edi */ /* 0x17105E6C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105E7C; /* 0x17105E6E: jne 0x17105e7c */
L_17105E70:
    esi = MEM32(ebp + 0x10); /* 0x17105E70: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebx); /* 0x17105E73: mov edi, dword ptr [ebx] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17105E75: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_17106021; /* 0x17105E77: jmp 0x17106021 */
L_17105E7C:
    /* cmp eax, 2 */ /* 0x17105E7C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105FE8; /* 0x17105E7F: jne 0x17105fe8 */
L_17105E85:
    /* cmp ecx, esi */ /* 0x17105E85: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17105FAC; /* 0x17105E87: jne 0x17105fac */
L_17105E8D:
    eax = MEM32(ebp + 0x10); /* 0x17105E8D: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x17105E90: mov ecx, dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x17105E92: fld dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17105E95: fld dword ptr [0x17001424] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17105E9B: mov dword ptr [ebp - 0x18], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17105E9E: fld dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x17105EA1: mov ecx, dword ptr [eax + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17105EA4: fcomp st(1) */
    fp_pop();
    MEM32(ebp + (-0x14)) = ecx; /* 0x17105EA6: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(eax + 0x8); /* 0x17105EA9: mov ecx, dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17105EAC: fld dword ptr [0x17001430] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17105EB2: mov dword ptr [ebp - 0x10], ecx */
    esi = 0xFFu; /* 0x17105EB5: mov esi, 0xff */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105EBA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17105EBC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17105EC6; /* 0x17105EBF: jne 0x17105ec6 */
L_17105EC1:
    MEM32(ebp + 0x10) = esi; /* 0x17105EC1: mov dword ptr [ebp + 0x10], esi */
    goto L_17105EEE; /* 0x17105EC4: jmp 0x17105eee */
L_17105EC6:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17105EC6: fld dword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17105EC9: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105ECB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17105ECD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17105ED7; /* 0x17105ED0: jp 0x17105ed7 */
L_17105ED2:
    MEM32(ebp + 0x10) = edx; /* 0x17105ED2: mov dword ptr [ebp + 0x10], edx */
    goto L_17105EEE; /* 0x17105ED5: jmp 0x17105eee */
L_17105ED7:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17105ED7: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17105EDA: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17105EE0: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17105EE6: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x17105EEB: mov dword ptr [ebp + 0x10], eax */
L_17105EEE:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17105EEE: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17105EF1: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105EF3: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17105EF5: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17105EFF; /* 0x17105EF8: jne 0x17105eff */
L_17105EFA:
    MEM32(ebp + 0xC) = esi; /* 0x17105EFA: mov dword ptr [ebp + 0xc], esi */
    goto L_17105F28; /* 0x17105EFD: jmp 0x17105f28 */
L_17105EFF:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17105EFF: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17105F02: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105F04: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17105F06: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17105F11; /* 0x17105F09: jp 0x17105f11 */
L_17105F0B:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17105F0B: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17105F28; /* 0x17105F0F: jmp 0x17105f28 */
L_17105F11:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17105F11: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17105F14: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17105F1A: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17105F20: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x17105F25: mov dword ptr [ebp + 0xc], eax */
L_17105F28:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17105F28: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17105F2B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105F2D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17105F2F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17105F3A; /* 0x17105F32: jne 0x17105f3a */
L_17105F34:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17105F34: fstp st(0) */
    edi = esi; /* 0x17105F36: mov edi, esi */
    goto L_17105F60; /* 0x17105F38: jmp 0x17105f60 */
L_17105F3A:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17105F3A: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17105F3D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105F3F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17105F41: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17105F4A; /* 0x17105F44: jp 0x17105f4a */
L_17105F46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17105F46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17105F60; /* 0x17105F48: jmp 0x17105f60 */
L_17105F4A:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17105F4A: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17105F4D: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17105F53: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17105F59: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17105F5E: mov edi, eax */
L_17105F60:
    fp_push(_st[1]); /* 0x17105F60: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17105F62: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105F64: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17105F66: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17105F71; /* 0x17105F69: jne 0x17105f71 */
L_17105F6B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17105F6B: fstp st(0) */
    eax = esi; /* 0x17105F6D: mov eax, esi */
    goto L_17105F95; /* 0x17105F6F: jmp 0x17105f95 */
L_17105F71:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17105F71: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17105F77: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17105F79: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17105F84; /* 0x17105F7C: jp 0x17105f84 */
L_17105F7E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17105F7E: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17105F80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17105F95; /* 0x17105F82: jmp 0x17105f95 */
L_17105F84:
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17105F84: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17105F8A: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17105F90: call 0x1721b050 */
    RECOMP_FLAGS_IN();
L_17105F95:
    ecx = MEM32(ebx); /* 0x17105F95: mov ecx, dword ptr [ebx] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x17105F97: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x17105F97: shl eax, 8 */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x10)));
    eax = eax | MEM32(ebp + 0x10); /* 0x17105F9A: or eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x17105F9D: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x17105F9D: shl eax, 8 */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0xC))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0xC)));
    eax = eax | MEM32(ebp + 0xC); /* 0x17105FA0: or eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x17105FA3: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x17105FA3: shl eax, 8 */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x17105FA6: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x17105FA8: mov dword ptr [ecx], eax */
    goto L_17106021; /* 0x17105FAA: jmp 0x17106021 */
L_17105FAC:
    MEM16(ebp + 0xC) = _fpu_cw; /* 0x17105FAC: fnstcw word ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x17105FAF: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x17105FB2: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17105FB7: mov dword ptr [ebp - 4], eax */
    _fpu_cw = MEM16(ebp + (-0x4)); /* 0x17105FBA: fldcw word ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x17105FBD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x17105FBF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17105FC2: mov dword ptr [ebp - 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17105FE3; /* 0x17105FC5: jbe 0x17105fe3 */
L_17105FC7:
    eax = MEM32(ebp + 0x10); /* 0x17105FC7: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x17105FCA: fld dword ptr [eax + edx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17105FCD: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17105FD0: fld dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x17105FD3: fistp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x17105FD6: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebx); /* 0x17105FD9: mov esi, dword ptr [ebx] */
    MEM32(esi + edx * 4) = eax; /* 0x17105FDB: mov dword ptr [esi + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17105FDE: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x17105FDF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17105FC7; /* 0x17105FE1: jb 0x17105fc7 */
L_17105FE3:
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x17105FE3: fldcw word ptr [ebp - 8] */
    goto L_17106021; /* 0x17105FE6: jmp 0x17106021 */
L_17105FE8:
    /* cmp eax, esi */ /* 0x17105FE8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106048; /* 0x17105FEA: jne 0x17106048 */
L_17105FEC:
    /* cmp ecx, edx */ /* 0x17105FEC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x17105FEE: mov dword ptr [ebp + 0xc], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106021; /* 0x17105FF1: jbe 0x17106021 */
L_17105FF3:
    edx = MEM32(ebp + 0xC); /* 0x17105FF3: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x17105FF6: mov eax, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17105FF9: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17105FF9: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + eax)); /* 0x17105FFC: fld dword ptr [edx + eax] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17105FFF: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17106005: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17106007: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17106009: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17106012; /* 0x1710600C: jnp 0x17106012 */
L_1710600E:
    eax = esi; /* 0x1710600E: mov eax, esi */
    goto L_17106014; /* 0x17106010: jmp 0x17106014 */
L_17106012:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106012: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17106014:
    edi = MEM32(ebx); /* 0x17106014: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x17106016: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x17106019: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edx + edi) = eax; /* 0x1710601C: mov dword ptr [edx + edi], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17105FF3; /* 0x1710601F: jb 0x17105ff3 */
L_17106021:
    ecx = MEM32(ebp + 0x8); /* 0x17106021: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x28) = MEM32(ecx + 0x28) & 0; /* 0x17106024: and dword ptr [ecx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x38); /* 0x17106028: mov eax, dword ptr [ecx + 0x38] */
    eax = MEM32(eax); /* 0x1710602B: mov eax, dword ptr [eax] */
    edx = MEM32(ebx + 0x8); /* 0x1710602D: mov edx, dword ptr [ebx + 8] */
    MEM32(edx) = eax; /* 0x17106030: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x40); /* 0x17106032: mov eax, dword ptr [ecx + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17106035: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106040; /* 0x17106038: je 0x17106040 */
L_1710603A:
    PUSH32(esp, ebx); /* 0x1710603A: push ebx */
    RECOMP_CALL(sub_17102498); /* 0x1710603B: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17106040:
    eax = MEM32(ebp + 0x8); /* 0x17106040: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x28); /* 0x17106043: mov eax, dword ptr [eax + 0x28] */
    goto L_1710604D; /* 0x17106046: jmp 0x1710604d */
L_17106048:
    eax = 0x8876086Cu; /* 0x17106048: mov eax, 0x8876086c */
L_1710604D:
    edi = POP32_VAL(esp); /* 0x1710604D: pop edi */
    esi = POP32_VAL(esp); /* 0x1710604E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710604F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106050: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17106051: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17106059(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106059u);

L_17106059:
    edi = edi; /* 0x17106059: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710605B: push ebp */
    ebp = esp; /* 0x1710605C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1710605E: push ebx */
    PUSH32(esp, esi); /* 0x1710605F: push esi */
    PUSH32(esp, edi); /* 0x17106060: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17106061: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x17106064: push 4 */
    ebx = POP32_VAL(esp); /* 0x17106066: pop ebx */
    eax = edi + 0xE0; /* 0x17106067: lea eax, [edi + 0xe0] */
    ecx = MEM32(eax); /* 0x1710606D: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = ebx; /* 0x1710606F: mov dword ptr [ecx + 4], ebx */
    ecx = MEM32(eax); /* 0x17106072: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17106074: push 1 */
    MEM32(ecx) = ebx; /* 0x17106076: mov dword ptr [ecx], ebx */
    eax = MEM32(eax); /* 0x17106078: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x1710607A: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x1710607E: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17106080: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x17106083: mov ecx, edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106085: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710608A: mov esi, eax */
    /* test esi, esi */ /* 0x1710608C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106103; /* 0x1710608E: je 0x17106103 */
L_17106090:
    eax = MEM32(esi + 0x4); /* 0x17106090: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17106093: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710609F; /* 0x17106097: je 0x1710609f */
L_17106099:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x17106099: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106103; /* 0x1710609D: je 0x17106103 */
L_1710609F:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x1710609F: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106103; /* 0x171060A2: jne 0x17106103 */
L_171060A4:
    /* cmp MEM32(eax), ebx */ /* 0x171060A4: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106103; /* 0x171060A6: jne 0x17106103 */
L_171060A8:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x171060A8: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171060BD; /* 0x171060AC: jne 0x171060bd */
L_171060AE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171060AE: push dword ptr [ebp + 0x10] */
    esi = ~esi; /* 0x171060B1: not esi */
    PUSH32(esp, esi); /* 0x171060B3: push esi */
    ecx = edi; /* 0x171060B4: mov ecx, edi */
    RECOMP_CALL(sub_1710B0C7); /* 0x171060B6: call 0x1710b0c7 */
    RECOMP_FLAGS_IN();
    goto L_17106108; /* 0x171060BB: jmp 0x17106108 */
L_171060BD:
    ecx = MEM32(edi + 0xD0); /* 0x171060BD: mov ecx, dword ptr [edi + 0xd0] */
    eax = MEM32(esi + 0x18); /* 0x171060C3: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x171060C6: mov eax, dword ptr [ecx + eax*4] */
    eax = MEM32(eax + 0x48); /* 0x171060C9: mov eax, dword ptr [eax + 0x48] */
    ecx = MEM32(esi); /* 0x171060CC: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x171060CE: mov ecx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x171060D0: push eax */
    PUSH32(esp, ecx); /* 0x171060D1: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171060D2: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x171060D5: mov ecx, edi */
    RECOMP_CALL(sub_170FBD60); /* 0x171060D7: call 0x170fbd60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171060DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17106108; /* 0x171060DE: jl 0x17106108 */
L_171060E0:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x171060E0: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x171060E4: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x171060E7: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x171060E9: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x171060EC: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x40); /* 0x171060EE: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x171060F1: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171060FE; /* 0x171060F4: je 0x171060fe */
L_171060F6:
    PUSH32(esp, esi); /* 0x171060F6: push esi */
    ecx = edi; /* 0x171060F7: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x171060F9: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_171060FE:
    eax = MEM32(edi + 0x28); /* 0x171060FE: mov eax, dword ptr [edi + 0x28] */
    goto L_17106108; /* 0x17106101: jmp 0x17106108 */
L_17106103:
    eax = 0x8876086Cu; /* 0x17106103: mov eax, 0x8876086c */
L_17106108:
    edi = POP32_VAL(esp); /* 0x17106108: pop edi */
    esi = POP32_VAL(esp); /* 0x17106109: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710610A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1710610B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710610C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17106114(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106114u);

L_17106114:
    edi = edi; /* 0x17106114: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106116: push ebp */
    ebp = esp; /* 0x17106117: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17106119: push ebx */
    PUSH32(esp, esi); /* 0x1710611A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710611B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1710611E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1710611F: mov edi, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17106122: mov eax, 0x80000003 */
    ecx = edi; /* 0x17106127: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17106129: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1710612B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 5); /* 0x1710612D: push 5 */
    ebx = POP32_VAL(esp); /* 0x1710612F: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106136; /* 0x17106130: jne 0x17106136 */
L_17106132:
    edi = ~edi; /* 0x17106132: not edi */
    goto L_17106165; /* 0x17106134: jmp 0x17106165 */
L_17106136:
    eax = esi + 0xE0; /* 0x17106136: lea eax, [esi + 0xe0] */
    ecx = MEM32(eax); /* 0x1710613C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x4) = 4; /* 0x1710613E: mov dword ptr [ecx + 4], 4 */
    ecx = MEM32(eax); /* 0x17106145: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x17106147: push 1 */
    MEM32(ecx) = ebx; /* 0x17106149: mov dword ptr [ecx], ebx */
    eax = MEM32(eax); /* 0x1710614B: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x1710614D: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17106151: push 1 */
    PUSH32(esp, edi); /* 0x17106153: push edi */
    ecx = esi; /* 0x17106154: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106156: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710615B: mov edi, eax */
    /* test edi, edi */ /* 0x1710615D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106206; /* 0x1710615F: je 0x17106206 */
L_17106165:
    eax = MEM32(edi + 0x4); /* 0x17106165: mov eax, dword ptr [edi + 4] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x17106168: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106178; /* 0x1710616C: je 0x17106178 */
L_1710616E:
    /* cmp MEM32(edi + 0xC), 0xFFFFFFFFu */ /* 0x1710616E: cmp dword ptr [edi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106206; /* 0x17106172: je 0x17106206 */
L_17106178:
    eax = MEM32(eax); /* 0x17106178: mov eax, dword ptr [eax] */
    /* cmp eax, ebx */ /* 0x1710617A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17106206; /* 0x1710617C: jl 0x17106206 */
L_17106182:
    /* cmp eax, 9 */ /* 0x17106182: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17106206; /* 0x17106185: jg 0x17106206 */
L_17106187:
    /* cmp MEM32(esi + 0x58), 3 */ /* 0x17106187: cmp dword ptr [esi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710619C; /* 0x1710618B: jne 0x1710619c */
L_1710618D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710618D: push dword ptr [ebp + 0x10] */
    edi = ~edi; /* 0x17106190: not edi */
    PUSH32(esp, edi); /* 0x17106192: push edi */
    ecx = esi; /* 0x17106193: mov ecx, esi */
    RECOMP_CALL(sub_1710B1E2); /* 0x17106195: call 0x1710b1e2 */
    RECOMP_FLAGS_IN();
    goto L_1710620B; /* 0x1710619A: jmp 0x1710620b */
L_1710619C:
    ecx = MEM32(esi + 0xD0); /* 0x1710619C: mov ecx, dword ptr [esi + 0xd0] */
    eax = MEM32(edi + 0x18); /* 0x171061A2: mov eax, dword ptr [edi + 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x171061A5: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(eax + 0x48); /* 0x171061A8: mov ecx, dword ptr [eax + 0x48] */
    /* test ecx, ecx */ /* 0x171061AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x171061AD: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x171061AF: mov eax, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x171061B1: mov dword ptr [ebp + 0xc], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171061BA; /* 0x171061B4: jne 0x171061ba */
L_171061B6:
    ecx = eax; /* 0x171061B6: mov ecx, eax */
    goto L_171061C0; /* 0x171061B8: jmp 0x171061c0 */
L_171061BA:
    ecx = MEM32(ecx + 0x8); /* 0x171061BA: mov ecx, dword ptr [ecx + 8] */
    ecx = MEM32(ecx + eax * 4); /* 0x171061BD: mov ecx, dword ptr [ecx + eax*4] */
L_171061C0:
    ebx = MEM32(esi + 0x18); /* 0x171061C0: mov ebx, dword ptr [esi + 0x18] */
    edx = ecx + ecx * 2; /* 0x171061C3: lea edx, [ecx + ecx*2] */
    ecx = MEM32(ebp + 0x10); /* 0x171061C6: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(ebx + edx * 8 + 0x4) */ /* 0x171061C9: cmp ecx, dword ptr [ebx + edx*8 + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + edx * 8 + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171061D3; /* 0x171061CD: jne 0x171061d3 */
L_171061CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171061CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1710620B; /* 0x171061D1: jmp 0x1710620b */
L_171061D3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171061D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171061D6: push eax */
    PUSH32(esp, ecx); /* 0x171061D7: push ecx */
    ecx = esi; /* 0x171061D8: mov ecx, esi */
    RECOMP_CALL(sub_170FBCB7); /* 0x171061DA: call 0x170fbcb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171061DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710620B; /* 0x171061E1: jl 0x1710620b */
L_171061E3:
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x171061E3: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x171061E7: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x171061EA: mov eax, dword ptr [eax] */
    ecx = MEM32(edi + 0x8); /* 0x171061EC: mov ecx, dword ptr [edi + 8] */
    MEM32(ecx) = eax; /* 0x171061EF: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x171061F1: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x171061F4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106201; /* 0x171061F7: je 0x17106201 */
L_171061F9:
    PUSH32(esp, edi); /* 0x171061F9: push edi */
    ecx = esi; /* 0x171061FA: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x171061FC: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17106201:
    eax = MEM32(esi + 0x28); /* 0x17106201: mov eax, dword ptr [esi + 0x28] */
    goto L_1710620B; /* 0x17106204: jmp 0x1710620b */
L_17106206:
    eax = 0x8876086Cu; /* 0x17106206: mov eax, 0x8876086c */
L_1710620B:
    edi = POP32_VAL(esp); /* 0x1710620B: pop edi */
    esi = POP32_VAL(esp); /* 0x1710620C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710620D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1710620E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710620F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17106217(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106217u);

L_17106217:
    edi = edi; /* 0x17106217: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106219: push ebp */
    ebp = esp; /* 0x1710621A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710621C: push ecx */
    PUSH32(esp, ebx); /* 0x1710621D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710621E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17106220: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x17106223: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106234; /* 0x17106226: jne 0x17106234 */
L_17106228:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x17106228: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_171062D7; /* 0x1710622F: jmp 0x171062d7 */
L_17106234:
    PUSH32(esp, esi); /* 0x17106234: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17106235: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17106238: push ebx */
    PUSH32(esp, 1); /* 0x17106239: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710623B: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1710623E: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106240: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17106245: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171062CF; /* 0x17106247: je 0x171062cf */
L_1710624D:
    ecx = MEM32(eax + 0x4); /* 0x1710624D: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + 0x10), ebx */ /* 0x17106250: cmp dword ptr [ecx + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710625B; /* 0x17106253: je 0x1710625b */
L_17106255:
    /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu */ /* 0x17106255: cmp dword ptr [eax + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171062CF; /* 0x17106259: je 0x171062cf */
L_1710625B:
    /* cmp MEM32(ecx + 0x4), 4 */ /* 0x1710625B: cmp dword ptr [ecx + 4], 4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171062CF; /* 0x1710625F: jne 0x171062cf */
L_17106261:
    /* cmp MEM32(ecx), 0xFu */ /* 0x17106261: cmp dword ptr [ecx], 0xf */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171062CF; /* 0x17106264: jne 0x171062cf */
L_17106266:
    ecx = MEM32(eax + 0x18); /* 0x17106266: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(esi + 0xD0); /* 0x17106269: mov edx, dword ptr [esi + 0xd0] */
    ecx = MEM32(edx + ecx * 4); /* 0x1710626F: mov ecx, dword ptr [edx + ecx*4] */
    /* cmp MEM32(ecx + 0x48), ebx */ /* 0x17106272: cmp dword ptr [ecx + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106285; /* 0x17106275: jne 0x17106285 */
L_17106277:
    ecx = MEM32(ecx + 0x38); /* 0x17106277: mov ecx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x1710627A: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x20); /* 0x1710627D: mov edx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx + edx); /* 0x17106280: mov eax, dword ptr [ecx + edx] */
    goto L_171062B4; /* 0x17106283: jmp 0x171062b4 */
L_17106285:
    edx = MEM32(eax + 0x18); /* 0x17106285: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, edi); /* 0x17106288: push edi */
    edi = MEM32(esi + 0xD0); /* 0x17106289: mov edi, dword ptr [esi + 0xd0] */
    edx = MEM32(edi + edx * 4); /* 0x1710628F: mov edx, dword ptr [edi + edx*4] */
    edi = MEM32(edx + 0x48); /* 0x17106292: mov edi, dword ptr [edx + 0x48] */
    /* cmp edi, ebx */ /* 0x17106295: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710629E; /* 0x17106297: jne 0x1710629e */
L_17106299:
    edx = MEM32(esi + 0x20); /* 0x17106299: mov edx, dword ptr [esi + 0x20] */
    goto L_171062A4; /* 0x1710629C: jmp 0x171062a4 */
L_1710629E:
    edx = MEM32(esi + 0x54); /* 0x1710629E: mov edx, dword ptr [esi + 0x54] */
    edx = MEM32(edx + 0x10); /* 0x171062A1: mov edx, dword ptr [edx + 0x10] */
L_171062A4:
    ecx = MEM32(ecx + 0x38); /* 0x171062A4: mov ecx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x171062A7: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + edx); /* 0x171062AA: mov eax, dword ptr [ecx + edx] */
    ecx = MEM32(edi + 0x8); /* 0x171062AD: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(ecx + eax * 4); /* 0x171062B0: mov eax, dword ptr [ecx + eax*4] */
    edi = POP32_VAL(esp); /* 0x171062B3: pop edi */
L_171062B4:
    ecx = MEM32(esi + 0x18); /* 0x171062B4: mov ecx, dword ptr [esi + 0x18] */
    eax = eax + eax * 2; /* 0x171062B7: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 8 + 0x4); /* 0x171062BA: mov eax, dword ptr [ecx + eax*8 + 4] */
    /* cmp eax, ebx */ /* 0x171062BE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x171062C0: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x171062C3: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171062D6; /* 0x171062C5: je 0x171062d6 */
L_171062C7:
    ecx = MEM32(eax); /* 0x171062C7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171062C9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171062CA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_171062D6; /* 0x171062CD: jmp 0x171062d6 */
L_171062CF:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x171062CF: mov dword ptr [ebp - 4], 0x8876086c */
L_171062D6:
    esi = POP32_VAL(esp); /* 0x171062D6: pop esi */
L_171062D7:
    eax = MEM32(ebp + (-0x4)); /* 0x171062D7: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x171062DA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171062DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171062DC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171062E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171062E4u);

L_171062E4:
    edi = edi; /* 0x171062E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171062E6: push ebp */
    ebp = esp; /* 0x171062E7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171062E9: push ecx */
    PUSH32(esp, ebx); /* 0x171062EA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171062EB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x171062ED: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171062F0: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106301; /* 0x171062F3: jne 0x17106301 */
L_171062F5:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x171062F5: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_171063A4; /* 0x171062FC: jmp 0x171063a4 */
L_17106301:
    PUSH32(esp, esi); /* 0x17106301: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17106302: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17106305: push ebx */
    PUSH32(esp, 1); /* 0x17106306: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17106308: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1710630B: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x1710630D: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17106312: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710639C; /* 0x17106314: je 0x1710639c */
L_1710631A:
    ecx = MEM32(eax + 0x4); /* 0x1710631A: mov ecx, dword ptr [eax + 4] */
    /* cmp MEM32(ecx + 0x10), ebx */ /* 0x1710631D: cmp dword ptr [ecx + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106328; /* 0x17106320: je 0x17106328 */
L_17106322:
    /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu */ /* 0x17106322: cmp dword ptr [eax + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710639C; /* 0x17106326: je 0x1710639c */
L_17106328:
    /* cmp MEM32(ecx + 0x4), 4 */ /* 0x17106328: cmp dword ptr [ecx + 4], 4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710639C; /* 0x1710632C: jne 0x1710639c */
L_1710632E:
    /* cmp MEM32(ecx), 0x10u */ /* 0x1710632E: cmp dword ptr [ecx], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710639C; /* 0x17106331: jne 0x1710639c */
L_17106333:
    ecx = MEM32(eax + 0x18); /* 0x17106333: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(esi + 0xD0); /* 0x17106336: mov edx, dword ptr [esi + 0xd0] */
    ecx = MEM32(edx + ecx * 4); /* 0x1710633C: mov ecx, dword ptr [edx + ecx*4] */
    /* cmp MEM32(ecx + 0x48), ebx */ /* 0x1710633F: cmp dword ptr [ecx + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106352; /* 0x17106342: jne 0x17106352 */
L_17106344:
    ecx = MEM32(ecx + 0x38); /* 0x17106344: mov ecx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x17106347: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x20); /* 0x1710634A: mov edx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx + edx); /* 0x1710634D: mov eax, dword ptr [ecx + edx] */
    goto L_17106381; /* 0x17106350: jmp 0x17106381 */
L_17106352:
    edx = MEM32(eax + 0x18); /* 0x17106352: mov edx, dword ptr [eax + 0x18] */
    PUSH32(esp, edi); /* 0x17106355: push edi */
    edi = MEM32(esi + 0xD0); /* 0x17106356: mov edi, dword ptr [esi + 0xd0] */
    edx = MEM32(edi + edx * 4); /* 0x1710635C: mov edx, dword ptr [edi + edx*4] */
    edi = MEM32(edx + 0x48); /* 0x1710635F: mov edi, dword ptr [edx + 0x48] */
    /* cmp edi, ebx */ /* 0x17106362: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710636B; /* 0x17106364: jne 0x1710636b */
L_17106366:
    edx = MEM32(esi + 0x20); /* 0x17106366: mov edx, dword ptr [esi + 0x20] */
    goto L_17106371; /* 0x17106369: jmp 0x17106371 */
L_1710636B:
    edx = MEM32(esi + 0x54); /* 0x1710636B: mov edx, dword ptr [esi + 0x54] */
    edx = MEM32(edx + 0x10); /* 0x1710636E: mov edx, dword ptr [edx + 0x10] */
L_17106371:
    ecx = MEM32(ecx + 0x38); /* 0x17106371: mov ecx, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x20); /* 0x17106374: add ecx, dword ptr [eax + 0x20] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + edx); /* 0x17106377: mov eax, dword ptr [ecx + edx] */
    ecx = MEM32(edi + 0x8); /* 0x1710637A: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(ecx + eax * 4); /* 0x1710637D: mov eax, dword ptr [ecx + eax*4] */
    edi = POP32_VAL(esp); /* 0x17106380: pop edi */
L_17106381:
    ecx = MEM32(esi + 0x18); /* 0x17106381: mov ecx, dword ptr [esi + 0x18] */
    eax = eax + eax * 2; /* 0x17106384: lea eax, [eax + eax*2] */
    eax = MEM32(ecx + eax * 8 + 0x4); /* 0x17106387: mov eax, dword ptr [ecx + eax*8 + 4] */
    /* cmp eax, ebx */ /* 0x1710638B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1710638D: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x17106390: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171063A3; /* 0x17106392: je 0x171063a3 */
L_17106394:
    ecx = MEM32(eax); /* 0x17106394: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17106396: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17106397: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_171063A3; /* 0x1710639A: jmp 0x171063a3 */
L_1710639C:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1710639C: mov dword ptr [ebp - 4], 0x8876086c */
L_171063A3:
    esi = POP32_VAL(esp); /* 0x171063A3: pop esi */
L_171063A4:
    eax = MEM32(ebp + (-0x4)); /* 0x171063A4: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x171063A7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171063A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171063A9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171063B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171063B1u);

L_171063B1:
    edi = edi; /* 0x171063B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171063B3: push ebp */
    ebp = esp; /* 0x171063B4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171063B6: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x171063B9: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171063BC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171063BD: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171063C0: push esi */
    eax = 0x80000003u; /* 0x171063C1: mov eax, 0x80000003 */
    edx = ecx; /* 0x171063C6: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171063C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171063CA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171063CB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x171063CD: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171063CF: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x171063D0: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171063D2: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171063DB; /* 0x171063D5: jne 0x171063db */
L_171063D7:
    ecx = ~ecx; /* 0x171063D7: not ecx */
    goto L_17106411; /* 0x171063D9: jmp 0x17106411 */
L_171063DB:
    eax = ebx + 0xE0; /* 0x171063DB: lea eax, [ebx + 0xe0] */
    edx = MEM32(eax); /* 0x171063E1: mov edx, dword ptr [eax] */
    MEM32(edx + 0x4) = edi; /* 0x171063E3: mov dword ptr [edx + 4], edi */
    edx = MEM32(eax); /* 0x171063E6: mov edx, dword ptr [eax] */
    MEM32(edx) = 2; /* 0x171063E8: mov dword ptr [edx], 2 */
    edx = MEM32(eax); /* 0x171063EE: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = edi; /* 0x171063F0: mov dword ptr [edx + 0x10], edi */
    edx = MEM32(eax); /* 0x171063F3: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171063F5: push esi */
    MEM32(edx + 0x14) = esi; /* 0x171063F6: mov dword ptr [edx + 0x14], esi */
    eax = MEM32(eax); /* 0x171063F9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171063FB: push esi */
    PUSH32(esp, ecx); /* 0x171063FC: push ecx */
    ecx = ebx; /* 0x171063FD: mov ecx, ebx */
    MEM32(eax + 0x18) = esi; /* 0x171063FF: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106402: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x17106407: mov ecx, eax */
    /* cmp ecx, edi */ /* 0x17106409: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106548; /* 0x1710640B: je 0x17106548 */
L_17106411:
    eax = MEM32(ecx + 0x4); /* 0x17106411: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(eax + 0x10), edi */ /* 0x17106414: cmp dword ptr [eax + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106423; /* 0x17106417: je 0x17106423 */
L_17106419:
    /* cmp MEM32(ecx + 0xC), 0xFFFFFFFFu */ /* 0x17106419: cmp dword ptr [ecx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106548; /* 0x1710641D: je 0x17106548 */
L_17106423:
    /* cmp MEM32(ebx + 0x58), 3 */ /* 0x17106423: cmp dword ptr [ebx + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710643E; /* 0x17106427: jne 0x1710643e */
L_17106429:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17106429: push dword ptr [ebp + 0x10] */
    ecx = ~ecx; /* 0x1710642C: not ecx */
    PUSH32(esp, ecx); /* 0x1710642E: push ecx */
    ecx = ebx; /* 0x1710642F: mov ecx, ebx */
    RECOMP_CALL(sub_1710A8BE); /* 0x17106431: call 0x1710a8be */
    RECOMP_FLAGS_IN();
L_17106436:
    MEM32(ebp + (-0x4)) = eax; /* 0x17106436: mov dword ptr [ebp - 4], eax */
    goto L_17106553; /* 0x17106439: jmp 0x17106553 */
L_1710643E:
    edx = MEM32(eax + 0x4); /* 0x1710643E: mov edx, dword ptr [eax + 4] */
    /* cmp edx, edi */ /* 0x17106441: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17106548; /* 0x17106443: jl 0x17106548 */
L_17106449:
    /* cmp edx, 3 */ /* 0x17106449: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17106548; /* 0x1710644C: jg 0x17106548 */
L_17106452:
    edi = MEM32(eax + 0x14); /* 0x17106452: mov edi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x18); /* 0x17106455: mov edx, dword ptr [eax + 0x18] */
    eax = MEM32(eax); /* 0x17106458: mov eax, dword ptr [eax] */
    /* cmp eax, 3 */ /* 0x1710645A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171064CF; /* 0x1710645D: jne 0x171064cf */
L_1710645F:
    /* cmp edx, esi */ /* 0x1710645F: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171064CF; /* 0x17106461: jne 0x171064cf */
L_17106463:
    /* cmp edi, eax */ /* 0x17106463: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710646C; /* 0x17106465: je 0x1710646c */
L_17106467:
    /* cmp edi, 4 */ /* 0x17106467: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171064CF; /* 0x1710646A: jne 0x171064cf */
L_1710646C:
    eax = MEM32(ebp + 0x10); /* 0x1710646C: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x1710646F: fld dword ptr [0x17001428] */
    edx = eax; /* 0x17106475: mov edx, eax */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x17106477: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x17106477: shr edx, 0x10 */
    edx = (uint32_t)LO8(edx); /* 0x1710647A: movzx edx, dl */
    MEM32(ebp + 0x10) = edx; /* 0x1710647D: mov dword ptr [ebp + 0x10], edx */
    edx = eax; /* 0x17106480: mov edx, eax */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x17106482: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x17106482: shr edx, 8 */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x17106485: fild dword ptr [ebp + 0x10] */
    edx = (uint32_t)LO8(edx); /* 0x17106488: movzx edx, dl */
    _st[0] *= _st[1]; /* 0x1710648B: fmul st(1) */
    MEM32(ebp + 0x10) = edx; /* 0x1710648D: mov dword ptr [ebp + 0x10], edx */
    edx = (uint32_t)LO8(eax); /* 0x17106490: movzx edx, al */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17106493: fstp dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x17106496: fild dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = edx; /* 0x17106499: mov dword ptr [ebp + 0x10], edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x1710649C: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x1710649C: shr eax, 0x18 */
    _st[0] *= _st[1]; /* 0x1710649F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171064A1: fstp dword ptr [ebp - 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x171064A4: fild dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = eax; /* 0x171064A7: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171064AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171064AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x171064AE: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171064B0: fstp dword ptr [ebp - 0xc] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x171064B3: fild dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x171064B6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171064B8: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171064BB: fstp st(0) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106522; /* 0x171064BD: jbe 0x17106522 */
L_171064BF:
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x14))); /* 0x171064BF: fld dword ptr [ebp + eax*4 - 0x14] */
    edx = MEM32(ecx); /* 0x171064C3: mov edx, dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax * 4) = _v; } /* 0x171064C5: fstp dword ptr [edx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171064C8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x171064C9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171064BF; /* 0x171064CB: jb 0x171064bf */
L_171064CD:
    goto L_17106522; /* 0x171064CD: jmp 0x17106522 */
L_171064CF:
    /* cmp edi, esi */ /* 0x171064CF: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106548; /* 0x171064D1: jne 0x17106548 */
L_171064D3:
    /* cmp edx, esi */ /* 0x171064D3: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106548; /* 0x171064D5: jne 0x17106548 */
L_171064D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171064D7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106503; /* 0x171064D8: je 0x17106503 */
L_171064DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171064DA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171064F6; /* 0x171064DB: je 0x171064f6 */
L_171064DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171064DD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17106548; /* 0x171064DE: jne 0x17106548 */
L_171064E0:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x171064E0: fild dword ptr [ebp + 0x10] */
    edx = MEM32(ecx); /* 0x171064E3: mov edx, dword ptr [ecx] */
    fp_push(_st[0]); /* 0x171064E5: fld st(0) */
    fp_push(*(float*)&MEM32(edx)); /* 0x171064E7: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171064E9: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171064EB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171064ED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17106551; /* 0x171064F0: jnp 0x17106551 */
L_171064F2:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x171064F2: fstp dword ptr [edx] */
    goto L_17106522; /* 0x171064F4: jmp 0x17106522 */
L_171064F6:
    eax = MEM32(ecx); /* 0x171064F6: mov eax, dword ptr [ecx] */
    edx = MEM32(ebp + 0x10); /* 0x171064F8: mov edx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), edx */ /* 0x171064FB: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106553; /* 0x171064FD: je 0x17106553 */
L_171064FF:
    MEM32(eax) = edx; /* 0x171064FF: mov dword ptr [eax], edx */
    goto L_17106522; /* 0x17106501: jmp 0x17106522 */
L_17106503:
    esi = MEM32(ecx); /* 0x17106503: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106505: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x17106507: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710650A: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1710650D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edx */ /* 0x1710650F: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17106511: sete dl */
    /* cmp edx, eax */ /* 0x17106514: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106553; /* 0x17106516: je 0x17106553 */
L_17106518:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106518: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1710651A: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710651D: setne al */
    MEM32(esi) = eax; /* 0x17106520: mov dword ptr [esi], eax */
L_17106522:
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) & 0; /* 0x17106522: and dword ptr [ebx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x38); /* 0x17106526: mov eax, dword ptr [ebx + 0x38] */
    eax = MEM32(eax); /* 0x17106529: mov eax, dword ptr [eax] */
    edx = MEM32(ecx + 0x8); /* 0x1710652B: mov edx, dword ptr [ecx + 8] */
    MEM32(edx) = eax; /* 0x1710652E: mov dword ptr [edx], eax */
    eax = MEM32(ebx + 0x40); /* 0x17106530: mov eax, dword ptr [ebx + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17106533: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106540; /* 0x17106536: je 0x17106540 */
L_17106538:
    PUSH32(esp, ecx); /* 0x17106538: push ecx */
    ecx = ebx; /* 0x17106539: mov ecx, ebx */
    RECOMP_CALL(sub_17102498); /* 0x1710653B: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17106540:
    eax = MEM32(ebx + 0x28); /* 0x17106540: mov eax, dword ptr [ebx + 0x28] */
    RECOMP_BACKEDGE();
    goto L_17106436; /* 0x17106543: jmp 0x17106436 */
L_17106548:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x17106548: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_17106553; /* 0x1710654F: jmp 0x17106553 */
L_17106551:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17106551: fstp st(0) */
L_17106553:
    eax = MEM32(ebp + (-0x4)); /* 0x17106553: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17106556: pop edi */
    esi = POP32_VAL(esp); /* 0x17106557: pop esi */
    ebx = POP32_VAL(esp); /* 0x17106558: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106559: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710655A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17106562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106562u);

L_17106562:
    edi = edi; /* 0x17106562: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106564: push ebp */
    ebp = esp; /* 0x17106565: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17106567: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17106568: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1710656B: push ebx */
    PUSH32(esp, esi); /* 0x1710656C: push esi */
    eax = 0x80000003u; /* 0x1710656D: mov eax, 0x80000003 */
    edx = ecx; /* 0x17106572: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17106574: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17106576: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x17106578: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1710657A: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x1710657B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1710657D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1710657E: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17106581: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710658A; /* 0x17106584: jne 0x1710658a */
L_17106586:
    ecx = ~ecx; /* 0x17106586: not ecx */
    goto L_171065BC; /* 0x17106588: jmp 0x171065bc */
L_1710658A:
    eax = edi + 0xE0; /* 0x1710658A: lea eax, [edi + 0xe0] */
    edx = MEM32(eax); /* 0x17106590: mov edx, dword ptr [eax] */
    MEM32(edx + 0x4) = ebx; /* 0x17106592: mov dword ptr [edx + 4], ebx */
    edx = MEM32(eax); /* 0x17106595: mov edx, dword ptr [eax] */
    MEM32(edx) = esi; /* 0x17106597: mov dword ptr [edx], esi */
    edx = MEM32(eax); /* 0x17106599: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ebx; /* 0x1710659B: mov dword ptr [edx + 0x10], ebx */
    edx = MEM32(eax); /* 0x1710659E: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171065A0: push esi */
    MEM32(edx + 0x14) = esi; /* 0x171065A1: mov dword ptr [edx + 0x14], esi */
    eax = MEM32(eax); /* 0x171065A4: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171065A6: push esi */
    PUSH32(esp, ecx); /* 0x171065A7: push ecx */
    ecx = edi; /* 0x171065A8: mov ecx, edi */
    MEM32(eax + 0x18) = esi; /* 0x171065AA: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x171065AD: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171065B2: mov ecx, eax */
    /* cmp ecx, ebx */ /* 0x171065B4: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106677; /* 0x171065B6: je 0x17106677 */
L_171065BC:
    eax = MEM32(ecx + 0x4); /* 0x171065BC: mov eax, dword ptr [ecx + 4] */
    /* cmp MEM32(eax + 0x10), ebx */ /* 0x171065BF: cmp dword ptr [eax + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171065CE; /* 0x171065C2: je 0x171065ce */
L_171065C4:
    /* cmp MEM32(ecx + 0xC), 0xFFFFFFFFu */ /* 0x171065C4: cmp dword ptr [ecx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106677; /* 0x171065C8: je 0x17106677 */
L_171065CE:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x171065CE: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171065E9; /* 0x171065D2: jne 0x171065e9 */
L_171065D4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171065D4: push dword ptr [ebp + 0x10] */
    ecx = ~ecx; /* 0x171065D7: not ecx */
    PUSH32(esp, ecx); /* 0x171065D9: push ecx */
    ecx = edi; /* 0x171065DA: mov ecx, edi */
    RECOMP_CALL(sub_1710A80C); /* 0x171065DC: call 0x1710a80c */
    RECOMP_FLAGS_IN();
L_171065E1:
    MEM32(ebp + (-0x4)) = eax; /* 0x171065E1: mov dword ptr [ebp - 4], eax */
    goto L_17106682; /* 0x171065E4: jmp 0x17106682 */
L_171065E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171065E9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x171065EB: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171065EE: setne dl */
    ebx = edx; /* 0x171065F1: mov ebx, edx */
    edx = MEM32(eax + 0x4); /* 0x171065F3: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x171065F6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x171065F8: mov dword ptr [ebp + 0x10], ebx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17106677; /* 0x171065FB: jl 0x17106677 */
L_171065FD:
    /* cmp edx, 3 */ /* 0x171065FD: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17106677; /* 0x17106600: jg 0x17106677 */
L_17106602:
    /* cmp MEM32(eax + 0x14), esi */ /* 0x17106602: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106677; /* 0x17106605: jne 0x17106677 */
L_17106607:
    /* cmp MEM32(eax + 0x18), esi */ /* 0x17106607: cmp dword ptr [eax + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106677; /* 0x1710660A: jne 0x17106677 */
L_1710660C:
    eax = MEM32(eax); /* 0x1710660C: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1710660E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106637; /* 0x1710660F: je 0x17106637 */
L_17106611:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17106611: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710662D; /* 0x17106612: je 0x1710662d */
L_17106614:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17106614: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17106677; /* 0x17106615: jne 0x17106677 */
L_17106617:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x17106617: fild dword ptr [ebp + 0x10] */
    edx = MEM32(ecx); /* 0x1710661A: mov edx, dword ptr [ecx] */
    fp_push(_st[0]); /* 0x1710661C: fld st(0) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1710661E: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17106620: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17106622: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17106624: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17106680; /* 0x17106627: jnp 0x17106680 */
L_17106629:
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17106629: fstp dword ptr [edx] */
    goto L_17106651; /* 0x1710662B: jmp 0x17106651 */
L_1710662D:
    eax = MEM32(ecx); /* 0x1710662D: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax), ebx */ /* 0x1710662F: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106682; /* 0x17106631: je 0x17106682 */
L_17106633:
    MEM32(eax) = ebx; /* 0x17106633: mov dword ptr [eax], ebx */
    goto L_17106651; /* 0x17106635: jmp 0x17106651 */
L_17106637:
    esi = MEM32(ecx); /* 0x17106637: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106639: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), eax */ /* 0x1710663B: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710663D: sete al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17106640: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x17106642: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17106645: sete dl */
    /* cmp eax, edx */ /* 0x17106648: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106682; /* 0x1710664A: je 0x17106682 */
L_1710664C:
    eax = MEM32(ebp + 0x10); /* 0x1710664C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x1710664F: mov dword ptr [esi], eax */
L_17106651:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x17106651: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x17106655: mov eax, dword ptr [edi + 0x38] */
    eax = MEM32(eax); /* 0x17106658: mov eax, dword ptr [eax] */
    edx = MEM32(ecx + 0x8); /* 0x1710665A: mov edx, dword ptr [ecx + 8] */
    MEM32(edx) = eax; /* 0x1710665D: mov dword ptr [edx], eax */
    eax = MEM32(edi + 0x40); /* 0x1710665F: mov eax, dword ptr [edi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17106662: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710666F; /* 0x17106665: je 0x1710666f */
L_17106667:
    PUSH32(esp, ecx); /* 0x17106667: push ecx */
    ecx = edi; /* 0x17106668: mov ecx, edi */
    RECOMP_CALL(sub_17102498); /* 0x1710666A: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_1710666F:
    eax = MEM32(edi + 0x28); /* 0x1710666F: mov eax, dword ptr [edi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_171065E1; /* 0x17106672: jmp 0x171065e1 */
L_17106677:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x17106677: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_17106682; /* 0x1710667E: jmp 0x17106682 */
L_17106680:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17106680: fstp st(0) */
L_17106682:
    eax = MEM32(ebp + (-0x4)); /* 0x17106682: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17106685: pop edi */
    esi = POP32_VAL(esp); /* 0x17106686: pop esi */
    ebx = POP32_VAL(esp); /* 0x17106687: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106688: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17106689: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17106691(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106691u);

L_17106691:
    edi = edi; /* 0x17106691: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106693: push ebp */
    ebp = esp; /* 0x17106694: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17106696: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x17106699: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1710669C: push ebx */
    PUSH32(esp, esi); /* 0x1710669D: push esi */
    eax = 0x80000003u; /* 0x1710669E: mov eax, 0x80000003 */
    edx = ecx; /* 0x171066A3: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171066A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x171066A7: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171066A9: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x171066AA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171066AC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171066AD: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171066BB; /* 0x171066B0: jne 0x171066bb */
L_171066B2:
    ecx = ~ecx; /* 0x171066B2: not ecx */
    ebx = ecx; /* 0x171066B4: mov ebx, ecx */
    MEM32(ebp + 0xC) = ebx; /* 0x171066B6: mov dword ptr [ebp + 0xc], ebx */
    goto L_171066F0; /* 0x171066B9: jmp 0x171066f0 */
L_171066BB:
    ebx = MEM32(ebp + 0x14); /* 0x171066BB: mov ebx, dword ptr [ebp + 0x14] */
    eax = edi + 0xE0; /* 0x171066BE: lea eax, [edi + 0xe0] */
    edx = MEM32(eax); /* 0x171066C4: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x171066C6: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x171066CA: mov edx, dword ptr [eax] */
    MEM32(edx) = esi; /* 0x171066CC: mov dword ptr [edx], esi */
    edx = MEM32(eax); /* 0x171066CE: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ebx; /* 0x171066D0: mov dword ptr [edx + 0x10], ebx */
    edx = MEM32(eax); /* 0x171066D3: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171066D5: push esi */
    MEM32(edx + 0x14) = esi; /* 0x171066D6: mov dword ptr [edx + 0x14], esi */
    eax = MEM32(eax); /* 0x171066D9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171066DB: push esi */
    PUSH32(esp, ecx); /* 0x171066DC: push ecx */
    ecx = edi; /* 0x171066DD: mov ecx, edi */
    MEM32(eax + 0x18) = esi; /* 0x171066DF: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x171066E2: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171066E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x171066E9: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106728; /* 0x171066EC: je 0x17106728 */
L_171066EE:
    ebx = eax; /* 0x171066EE: mov ebx, eax */
L_171066F0:
    /* cmp MEM32(edi + 0x58), 3 */ /* 0x171066F0: cmp dword ptr [edi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106708; /* 0x171066F4: jne 0x17106708 */
L_171066F6:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171066F6: push dword ptr [ebp + 0x14] */
    ebx = ~ebx; /* 0x171066F9: not ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171066FB: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x171066FE: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x17106700: push ebx */
    RECOMP_CALL(sub_1710A917); /* 0x17106701: call 0x1710a917 */
    RECOMP_FLAGS_IN();
    goto L_1710672D; /* 0x17106706: jmp 0x1710672d */
L_17106708:
    edx = MEM32(ebx + 0x4); /* 0x17106708: mov edx, dword ptr [ebx + 4] */
    eax = MEM32(edx + 0x4); /* 0x1710670B: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x1710670E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17106728; /* 0x17106710: jl 0x17106728 */
L_17106712:
    /* cmp eax, esi */ /* 0x17106712: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171068F7; /* 0x17106714: jle 0x171068f7 */
L_1710671A:
    /* cmp eax, 2 */ /* 0x1710671A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106734; /* 0x1710671D: je 0x17106734 */
L_1710671F:
    /* cmp eax, 3 */ /* 0x1710671F: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171068F7; /* 0x17106722: je 0x171068f7 */
L_17106728:
    eax = 0x8876086Cu; /* 0x17106728: mov eax, 0x8876086c */
L_1710672D:
    edi = POP32_VAL(esp); /* 0x1710672D: pop edi */
    esi = POP32_VAL(esp); /* 0x1710672E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710672F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106730: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17106731: ret 0x10 */
L_17106734:
    ecx = MEM32(edx + 0x10); /* 0x17106734: mov ecx, dword ptr [edx + 0x10] */
    /* test ecx, ecx */ /* 0x17106737: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x14); /* 0x17106739: mov eax, dword ptr [edx + 0x14] */
    edi = MEM32(edx + 0x18); /* 0x1710673C: mov edi, dword ptr [edx + 0x18] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1710673F: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x17106742: mov dword ptr [ebp - 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710674D; /* 0x17106745: je 0x1710674d */
L_17106747:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x17106747: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106750; /* 0x1710674B: je 0x17106750 */
L_1710674D:
    MEM32(ebp + (-0x4)) = esi; /* 0x1710674D: mov dword ptr [ebp - 4], esi */
L_17106750:
    edx = MEM32(edx); /* 0x17106750: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106752: dec edx */
    _flag_k = FK_DEC;
    ebx = MEM32(ebx); /* 0x17106753: mov ebx, dword ptr [ebx] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710687A; /* 0x17106755: je 0x1710687a */
L_1710675B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710675B: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106805; /* 0x1710675C: je 0x17106805 */
L_17106762:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106762: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710676C; /* 0x17106763: je 0x1710676c */
L_17106765:
    eax = 0x80004005u; /* 0x17106765: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_1710672D; /* 0x1710676A: jmp 0x1710672d */
L_1710676C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710676C: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17106770: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067D9; /* 0x17106774: jbe 0x171067d9 */
L_17106776:
    edx = MEM32(ebp + 0x10); /* 0x17106776: mov edx, dword ptr [ebp + 0x10] */
L_17106779:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106779: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067D9; /* 0x1710677D: je 0x171067d9 */
L_1710677F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1710677F: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106783: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171067C3; /* 0x17106785: jbe 0x171067c3 */
L_17106787:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17106787: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17106789: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171067BB; /* 0x1710678B: jbe 0x171067bb */
L_1710678D:
    eax = MEM32(ebp + 0x10); /* 0x1710678D: mov eax, dword ptr [ebp + 0x10] */
    ecx = edx + eax * 4; /* 0x17106790: lea ecx, [edx + eax*4] */
L_17106793:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106793: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067B8; /* 0x17106797: je 0x171067b8 */
L_17106799:
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x17106799: fild dword ptr [ecx] */
    eax = MEM32(ebp + 0x10); /* 0x1710679B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710679E: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    eax = esi + eax * 4; /* 0x171067A1: lea eax, [esi + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4) = _v; } /* 0x171067A4: fstp dword ptr [ebx + eax*4] */
    eax = edi; /* 0x171067A7: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171067A9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171067A9: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171067AC: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x171067AE: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171067B1: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x171067B2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106793; /* 0x171067B4: jb 0x17106793 */
L_171067B6:
    goto L_171067BB; /* 0x171067B6: jmp 0x171067bb */
L_171067B8:
    eax = MEM32(ebp + (-0xC)); /* 0x171067B8: mov eax, dword ptr [ebp - 0xc] */
L_171067BB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x171067BB: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x171067BE: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106787; /* 0x171067C1: jb 0x17106787 */
L_171067C3:
    ecx = edi; /* 0x171067C3: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x171067C5: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x171067C8: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171067CB: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x171067CE: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171067D1: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x171067D4: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106779; /* 0x171067D7: jb 0x17106779 */
L_171067D9:
    ebx = MEM32(ebp + 0xC); /* 0x171067D9: mov ebx, dword ptr [ebp + 0xc] */
L_171067DC:
    esi = MEM32(ebp + 0x8); /* 0x171067DC: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x171067DF: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x171067E3: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x171067E6: mov eax, dword ptr [eax] */
    ecx = MEM32(ebx + 0x8); /* 0x171067E8: mov ecx, dword ptr [ebx + 8] */
    MEM32(ecx) = eax; /* 0x171067EB: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x171067ED: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x171067F0: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067FD; /* 0x171067F3: je 0x171067fd */
L_171067F5:
    PUSH32(esp, ebx); /* 0x171067F5: push ebx */
    ecx = esi; /* 0x171067F6: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x171067F8: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_171067FD:
    eax = MEM32(esi + 0x28); /* 0x171067FD: mov eax, dword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_1710672D; /* 0x17106800: jmp 0x1710672d */
L_17106805:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17106805: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17106809: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067D9; /* 0x1710680D: jbe 0x171067d9 */
L_1710680F:
    edx = MEM32(ebp + 0x10); /* 0x1710680F: mov edx, dword ptr [ebp + 0x10] */
L_17106812:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106812: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067D9; /* 0x17106816: je 0x171067d9 */
L_17106818:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106818: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1710681C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710685F; /* 0x1710681E: jbe 0x1710685f */
L_17106820:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17106820: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17106824: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106857; /* 0x17106826: jbe 0x17106857 */
L_17106828:
    ecx = MEM32(ebp + 0x10); /* 0x17106828: mov ecx, dword ptr [ebp + 0x10] */
    ecx = edx + ecx * 4; /* 0x1710682B: lea ecx, [edx + ecx*4] */
L_1710682E:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1710682E: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106857; /* 0x17106832: je 0x17106857 */
L_17106834:
    eax = MEM32(ebp + (-0x8)); /* 0x17106834: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x10); /* 0x17106837: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710683A: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1710683D: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = eax + esi * 4; /* 0x17106840: lea eax, [eax + esi*4] */
    esi = MEM32(ecx); /* 0x17106843: mov esi, dword ptr [ecx] */
    MEM32(ebx + eax * 4) = esi; /* 0x17106845: mov dword ptr [ebx + eax*4], esi */
    eax = edi; /* 0x17106848: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1710684A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1710684A: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1710684D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x1710684F: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x17106852: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710682E; /* 0x17106855: jb 0x1710682e */
L_17106857:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106857: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1710685A: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106820; /* 0x1710685D: jb 0x17106820 */
L_1710685F:
    ecx = edi; /* 0x1710685F: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17106861: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x17106864: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17106867: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x1710686A: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710686D: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x17106870: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106812; /* 0x17106873: jb 0x17106812 */
L_17106875:
    RECOMP_BACKEDGE();
    goto L_171067D9; /* 0x17106875: jmp 0x171067d9 */
L_1710687A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1710687A: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710687E: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067D9; /* 0x17106882: jbe 0x171067d9 */
L_17106888:
    edx = MEM32(ebp + 0x10); /* 0x17106888: mov edx, dword ptr [ebp + 0x10] */
L_1710688B:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1710688B: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067D9; /* 0x1710688F: je 0x171067d9 */
L_17106895:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106895: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106899: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171068DC; /* 0x1710689B: jbe 0x171068dc */
L_1710689D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710689D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171068A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171068D4; /* 0x171068A3: jbe 0x171068d4 */
L_171068A5:
    ecx = MEM32(ebp + 0x10); /* 0x171068A5: mov ecx, dword ptr [ebp + 0x10] */
    ecx = edx + ecx * 4; /* 0x171068A8: lea ecx, [edx + ecx*4] */
L_171068AB:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171068AB: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171068D4; /* 0x171068AF: je 0x171068d4 */
L_171068B1:
    eax = MEM32(ebp + (-0x8)); /* 0x171068B1: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x10); /* 0x171068B4: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171068B7: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171068BA: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = eax + esi * 4; /* 0x171068BD: lea eax, [eax + esi*4] */
    esi = MEM32(ecx); /* 0x171068C0: mov esi, dword ptr [ecx] */
    MEM32(ebx + eax * 4) = esi; /* 0x171068C2: mov dword ptr [ebx + eax*4], esi */
    eax = edi; /* 0x171068C5: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171068C7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171068C7: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171068CA: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x171068CC: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x171068CF: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171068AB; /* 0x171068D2: jb 0x171068ab */
L_171068D4:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x171068D4: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x171068D7: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710689D; /* 0x171068DA: jb 0x1710689d */
L_171068DC:
    ecx = edi; /* 0x171068DC: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x171068DE: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x171068E1: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x171068E4: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x171068E7: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171068EA: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x171068ED: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710688B; /* 0x171068F0: jb 0x1710688b */
L_171068F2:
    RECOMP_BACKEDGE();
    goto L_171067D9; /* 0x171068F2: jmp 0x171067d9 */
L_171068F7:
    eax = MEM32(edx + 0x10); /* 0x171068F7: mov eax, dword ptr [edx + 0x10] */
    /* test eax, eax */ /* 0x171068FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171068FC: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106907; /* 0x171068FF: je 0x17106907 */
L_17106901:
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x17106901: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710690A; /* 0x17106905: je 0x1710690a */
L_17106907:
    MEM32(ebp + (-0x4)) = esi; /* 0x17106907: mov dword ptr [ebp - 4], esi */
L_1710690A:
    esi = MEM32(edx + 0x14); /* 0x1710690A: mov esi, dword ptr [edx + 0x14] */
    edx = MEM32(edx); /* 0x1710690D: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710690F: dec edx */
    _flag_k = FK_DEC;
    ecx = MEM32(ebx); /* 0x17106910: mov ecx, dword ptr [ebx] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171069C2; /* 0x17106912: je 0x171069c2 */
L_17106918:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106918: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106972; /* 0x17106919: je 0x17106972 */
L_1710691B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710691B: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17106728; /* 0x1710691C: jne 0x17106728 */
L_17106922:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17106922: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17106926: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067DC; /* 0x1710692A: jbe 0x171067dc */
L_17106930:
    edx = MEM32(ebp + 0x10); /* 0x17106930: mov edx, dword ptr [ebp + 0x10] */
L_17106933:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106933: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x17106935: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067DC; /* 0x17106938: je 0x171067dc */
L_1710693E:
    /* cmp esi, eax */ /* 0x1710693E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710695A; /* 0x17106940: jbe 0x1710695a */
L_17106942:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106942: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710695A; /* 0x17106946: je 0x1710695a */
L_17106948:
    fp_push((double)(int32_t)MEM32(edx)); /* 0x17106948: fild dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1710694A: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710694D: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17106950: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17106952: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106955: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x17106956: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106942; /* 0x17106958: jb 0x17106942 */
L_1710695A:
    PUSH32(esp, 4); /* 0x1710695A: push 4 */
    eax = POP32_VAL(esp); /* 0x1710695C: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1710695D: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1710695F: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    ecx = ecx + eax * 4; /* 0x17106962: lea ecx, [ecx + eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x17106965: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x17106968: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106933; /* 0x1710696B: jb 0x17106933 */
L_1710696D:
    RECOMP_BACKEDGE();
    goto L_171067DC; /* 0x1710696D: jmp 0x171067dc */
L_17106972:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17106972: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17106976: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067DC; /* 0x1710697A: jbe 0x171067dc */
L_17106980:
    edx = MEM32(ebp + 0x10); /* 0x17106980: mov edx, dword ptr [ebp + 0x10] */
L_17106983:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106983: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x17106985: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067DC; /* 0x17106988: je 0x171067dc */
L_1710698E:
    /* cmp esi, eax */ /* 0x1710698E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171069AA; /* 0x17106990: jbe 0x171069aa */
L_17106992:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106992: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171069AA; /* 0x17106996: je 0x171069aa */
L_17106998:
    edi = MEM32(edx); /* 0x17106998: mov edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1710699A: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710699D: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(ecx) = edi; /* 0x171069A0: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171069A2: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171069A5: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x171069A6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106992; /* 0x171069A8: jb 0x17106992 */
L_171069AA:
    PUSH32(esp, 4); /* 0x171069AA: push 4 */
    eax = POP32_VAL(esp); /* 0x171069AC: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171069AD: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171069AF: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    ecx = ecx + eax * 4; /* 0x171069B2: lea ecx, [ecx + eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x171069B5: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x171069B8: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106983; /* 0x171069BB: jb 0x17106983 */
L_171069BD:
    RECOMP_BACKEDGE();
    goto L_171067DC; /* 0x171069BD: jmp 0x171067dc */
L_171069C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171069C2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x171069C4: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171067DC; /* 0x171069C7: jbe 0x171067dc */
L_171069CD:
    edx = MEM32(ebp + 0x10); /* 0x171069CD: mov edx, dword ptr [ebp + 0x10] */
L_171069D0:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171069D0: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171067DC; /* 0x171069D4: je 0x171067dc */
L_171069DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171069DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x171069DC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171069FB; /* 0x171069DE: jbe 0x171069fb */
L_171069E0:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171069E0: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171069F8; /* 0x171069E4: je 0x171069f8 */
L_171069E6:
    ebx = MEM32(edx); /* 0x171069E6: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171069E8: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171069EB: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(ecx) = ebx; /* 0x171069EE: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171069F0: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171069F3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x171069F4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171069E0; /* 0x171069F6: jb 0x171069e0 */
L_171069F8:
    ebx = MEM32(ebp + 0xC); /* 0x171069F8: mov ebx, dword ptr [ebp + 0xc] */
L_171069FB:
    PUSH32(esp, 4); /* 0x171069FB: push 4 */
    eax = POP32_VAL(esp); /* 0x171069FD: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171069FE: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17106A00: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x17106A01: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + eax * 4; /* 0x17106A04: lea ecx, [ecx + eax*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171069D0; /* 0x17106A07: jb 0x171069d0 */
L_17106A09:
    RECOMP_BACKEDGE();
    goto L_171067DC; /* 0x17106A09: jmp 0x171067dc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17106A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106A13u);

L_17106A13:
    edi = edi; /* 0x17106A13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106A15: push ebp */
    ebp = esp; /* 0x17106A16: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17106A18: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x17106A1B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x17106A1E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17106A1F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17106A22: push esi */
    eax = 0x80000003u; /* 0x17106A23: mov eax, 0x80000003 */
    PUSH32(esp, edi); /* 0x17106A28: push edi */
    edx = ecx; /* 0x17106A29: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17106A2B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x17106A2D: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x17106A2F: push 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17106A31: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x17106A32: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17106A34: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106A40; /* 0x17106A35: jne 0x17106a40 */
L_17106A37:
    ecx = ~ecx; /* 0x17106A37: not ecx */
    eax = ecx; /* 0x17106A39: mov eax, ecx */
    MEM32(ebp + 0xC) = eax; /* 0x17106A3B: mov dword ptr [ebp + 0xc], eax */
    goto L_17106A76; /* 0x17106A3E: jmp 0x17106a76 */
L_17106A40:
    eax = ebx + 0xE0; /* 0x17106A40: lea eax, [ebx + 0xe0] */
    edx = MEM32(eax); /* 0x17106A46: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x17106A48: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x17106A4C: mov edx, dword ptr [eax] */
    ebx = MEM32(ebp + 0x14); /* 0x17106A4E: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(edx) = edi; /* 0x17106A51: mov dword ptr [edx], edi */
    edx = MEM32(eax); /* 0x17106A53: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ebx; /* 0x17106A55: mov dword ptr [edx + 0x10], ebx */
    edx = MEM32(eax); /* 0x17106A58: mov edx, dword ptr [eax] */
    ebx = MEM32(ebp + 0x8); /* 0x17106A5A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17106A5D: push esi */
    MEM32(edx + 0x14) = esi; /* 0x17106A5E: mov dword ptr [edx + 0x14], esi */
    eax = MEM32(eax); /* 0x17106A61: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x17106A63: push esi */
    PUSH32(esp, ecx); /* 0x17106A64: push ecx */
    ecx = ebx; /* 0x17106A65: mov ecx, ebx */
    MEM32(eax + 0x18) = esi; /* 0x17106A67: mov dword ptr [eax + 0x18], esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106A6A: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17106A6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x17106A71: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106AB0; /* 0x17106A74: je 0x17106ab0 */
L_17106A76:
    /* cmp MEM32(ebx + 0x58), 3 */ /* 0x17106A76: cmp dword ptr [ebx + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106A91; /* 0x17106A7A: jne 0x17106a91 */
L_17106A7C:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17106A7C: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x17106A7F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17106A82: push dword ptr [ebp + 0x10] */
    eax = ~eax; /* 0x17106A85: not eax */
    PUSH32(esp, eax); /* 0x17106A87: push eax */
    ecx = ebx; /* 0x17106A88: mov ecx, ebx */
    RECOMP_CALL(sub_1710A9CD); /* 0x17106A8A: call 0x1710a9cd */
    RECOMP_FLAGS_IN();
    goto L_17106AB5; /* 0x17106A8F: jmp 0x17106ab5 */
L_17106A91:
    edx = MEM32(eax + 0x4); /* 0x17106A91: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx + 0x4); /* 0x17106A94: mov ecx, dword ptr [edx + 4] */
    /* test ecx, ecx */ /* 0x17106A97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17106AB0; /* 0x17106A99: jl 0x17106ab0 */
L_17106A9B:
    /* cmp ecx, esi */ /* 0x17106A9B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17106C78; /* 0x17106A9D: jle 0x17106c78 */
L_17106AA3:
    /* cmp ecx, edi */ /* 0x17106AA3: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106ABC; /* 0x17106AA5: je 0x17106abc */
L_17106AA7:
    /* cmp ecx, 3 */ /* 0x17106AA7: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106C78; /* 0x17106AAA: je 0x17106c78 */
L_17106AB0:
    eax = 0x8876086Cu; /* 0x17106AB0: mov eax, 0x8876086c */
L_17106AB5:
    edi = POP32_VAL(esp); /* 0x17106AB5: pop edi */
    esi = POP32_VAL(esp); /* 0x17106AB6: pop esi */
    ebx = POP32_VAL(esp); /* 0x17106AB7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106AB8: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17106AB9: ret 0x10 */
L_17106ABC:
    ecx = MEM32(edx + 0x10); /* 0x17106ABC: mov ecx, dword ptr [edx + 0x10] */
    /* test ecx, ecx */ /* 0x17106ABF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x14); /* 0x17106AC1: mov eax, dword ptr [edx + 0x14] */
    edi = MEM32(edx + 0x18); /* 0x17106AC4: mov edi, dword ptr [edx + 0x18] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17106AC7: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17106ACA: mov dword ptr [ebp - 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106AD8; /* 0x17106ACD: je 0x17106ad8 */
L_17106ACF:
    ebx = MEM32(ebp + 0xC); /* 0x17106ACF: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x17106AD2: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106ADD; /* 0x17106AD6: je 0x17106add */
L_17106AD8:
    ecx = esi; /* 0x17106AD8: mov ecx, esi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17106ADA: mov dword ptr [ebp - 0xc], ecx */
L_17106ADD:
    esi = MEM32(ebp + 0xC); /* 0x17106ADD: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(edx); /* 0x17106AE0: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106AE2: dec edx */
    _flag_k = FK_DEC;
    ebx = MEM32(esi); /* 0x17106AE3: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x17106AE5: mov dword ptr [ebp - 0x14], ebx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106BF2; /* 0x17106AE8: je 0x17106bf2 */
L_17106AEE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106AEE: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106B77; /* 0x17106AEF: je 0x17106b77 */
L_17106AF5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106AF5: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106AFF; /* 0x17106AF6: je 0x17106aff */
L_17106AF8:
    eax = 0x80004005u; /* 0x17106AF8: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_17106AB5; /* 0x17106AFD: jmp 0x17106ab5 */
L_17106AFF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17106AFF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17106B03: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106B05: jbe 0x17106d64 */
L_17106B0B:
    edx = MEM32(ebp + 0x10); /* 0x17106B0B: mov edx, dword ptr [ebp + 0x10] */
L_17106B0E:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106B0E: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106B12: je 0x17106d64 */
L_17106B18:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106B18: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106B1C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106B5C; /* 0x17106B1E: jbe 0x17106b5c */
L_17106B20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17106B20: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17106B22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106B54; /* 0x17106B24: jbe 0x17106b54 */
L_17106B26:
    eax = MEM32(ebp + 0x10); /* 0x17106B26: mov eax, dword ptr [ebp + 0x10] */
    ecx = edx + eax * 4; /* 0x17106B29: lea ecx, [edx + eax*4] */
L_17106B2C:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106B2C: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106B51; /* 0x17106B30: je 0x17106b51 */
L_17106B32:
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x17106B32: fild dword ptr [ecx] */
    eax = MEM32(ebp + 0x10); /* 0x17106B34: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106B37: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    eax = esi + eax * 4; /* 0x17106B3A: lea eax, [esi + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4) = _v; } /* 0x17106B3D: fstp dword ptr [ebx + eax*4] */
    eax = edi; /* 0x17106B40: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17106B42: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17106B42: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17106B45: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x17106B47: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17106B4A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x17106B4B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106B2C; /* 0x17106B4D: jb 0x17106b2c */
L_17106B4F:
    goto L_17106B54; /* 0x17106B4F: jmp 0x17106b54 */
L_17106B51:
    eax = MEM32(ebp + (-0x8)); /* 0x17106B51: mov eax, dword ptr [ebp - 8] */
L_17106B54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106B54: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17106B57: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106B20; /* 0x17106B5A: jb 0x17106b20 */
L_17106B5C:
    ecx = edi; /* 0x17106B5C: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17106B5E: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x17106B61: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17106B64: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x17106B67: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x17106B6A: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x17106B6D: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106B0E; /* 0x17106B70: jb 0x17106b0e */
L_17106B72:
    goto L_17106D64; /* 0x17106B72: jmp 0x17106d64 */
L_17106B77:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17106B77: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17106B7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106B7D: jbe 0x17106d64 */
L_17106B83:
    edx = MEM32(ebp + 0x10); /* 0x17106B83: mov edx, dword ptr [ebp + 0x10] */
L_17106B86:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106B86: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106B8A: je 0x17106d64 */
L_17106B90:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106B90: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106B94: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106BD7; /* 0x17106B96: jbe 0x17106bd7 */
L_17106B98:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17106B98: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17106B9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106BCF; /* 0x17106B9E: jbe 0x17106bcf */
L_17106BA0:
    ecx = MEM32(ebp + 0x10); /* 0x17106BA0: mov ecx, dword ptr [ebp + 0x10] */
    ecx = edx + ecx * 4; /* 0x17106BA3: lea ecx, [edx + ecx*4] */
L_17106BA6:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106BA6: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106BCF; /* 0x17106BAA: je 0x17106bcf */
L_17106BAC:
    eax = MEM32(ebp + (-0x4)); /* 0x17106BAC: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + 0x10); /* 0x17106BAF: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106BB2: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17106BB5: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = eax + esi * 4; /* 0x17106BB8: lea eax, [eax + esi*4] */
    esi = MEM32(ecx); /* 0x17106BBB: mov esi, dword ptr [ecx] */
    MEM32(ebx + eax * 4) = esi; /* 0x17106BBD: mov dword ptr [ebx + eax*4], esi */
    eax = edi; /* 0x17106BC0: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17106BC2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17106BC2: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17106BC5: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x17106BC7: mov eax, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x17106BCA: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106BA6; /* 0x17106BCD: jb 0x17106ba6 */
L_17106BCF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106BCF: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17106BD2: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106B98; /* 0x17106BD5: jb 0x17106b98 */
L_17106BD7:
    ecx = edi; /* 0x17106BD7: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17106BD9: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x17106BDC: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17106BDF: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x17106BE2: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x17106BE5: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x17106BE8: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106B86; /* 0x17106BEB: jb 0x17106b86 */
L_17106BED:
    goto L_17106D64; /* 0x17106BED: jmp 0x17106d64 */
L_17106BF2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17106BF2: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17106BF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106BF8: jbe 0x17106d64 */
L_17106BFE:
    edx = MEM32(ebp + 0x10); /* 0x17106BFE: mov edx, dword ptr [ebp + 0x10] */
L_17106C01:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106C01: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106C05: je 0x17106d64 */
L_17106C0B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106C0B: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106C0F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106C5A; /* 0x17106C11: jbe 0x17106c5a */
L_17106C13:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17106C13: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17106C17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106C52; /* 0x17106C19: jbe 0x17106c52 */
L_17106C1B:
    ecx = MEM32(ebp + 0x10); /* 0x17106C1B: mov ecx, dword ptr [ebp + 0x10] */
    ecx = edx + ecx * 4; /* 0x17106C1E: lea ecx, [edx + ecx*4] */
L_17106C21:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106C21: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106C52; /* 0x17106C25: je 0x17106c52 */
L_17106C27:
    esi = MEM32(ebp + (-0x4)); /* 0x17106C27: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x10); /* 0x17106C2A: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106C2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), eax */ /* 0x17106C2F: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esi + ebx * 4; /* 0x17106C31: lea esi, [esi + ebx*4] */
    ebx = MEM32(ebp + (-0x14)); /* 0x17106C34: mov ebx, dword ptr [ebp - 0x14] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17106C37: setne al */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106C3A: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17106C3D: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(ebx + esi * 4) = eax; /* 0x17106C40: mov dword ptr [ebx + esi*4], eax */
    eax = edi; /* 0x17106C43: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17106C45: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17106C45: shl eax, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17106C48: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x17106C4A: mov eax, dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x17106C4D: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106C21; /* 0x17106C50: jb 0x17106c21 */
L_17106C52:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106C52: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17106C55: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106C13; /* 0x17106C58: jb 0x17106c13 */
L_17106C5A:
    ecx = edi; /* 0x17106C5A: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17106C5C: imul ecx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x17106C5F: add ebx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17106C62: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edx = edx + ecx * 4; /* 0x17106C65: lea edx, [edx + ecx*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x17106C68: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x17106C6B: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ebx; /* 0x17106C6E: mov dword ptr [ebp - 0x14], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106C01; /* 0x17106C71: jb 0x17106c01 */
L_17106C73:
    goto L_17106D64; /* 0x17106C73: jmp 0x17106d64 */
L_17106C78:
    edi = MEM32(edx + 0x10); /* 0x17106C78: mov edi, dword ptr [edx + 0x10] */
    /* test edi, edi */ /* 0x17106C7B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x17106C7D: mov dword ptr [ebp - 0xc], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106C88; /* 0x17106C80: je 0x17106c88 */
L_17106C82:
    /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu */ /* 0x17106C82: cmp dword ptr [eax + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106C8D; /* 0x17106C86: je 0x17106c8d */
L_17106C88:
    edi = esi; /* 0x17106C88: mov edi, esi */
    MEM32(ebp + (-0xC)) = edi; /* 0x17106C8A: mov dword ptr [ebp - 0xc], edi */
L_17106C8D:
    esi = MEM32(edx + 0x14); /* 0x17106C8D: mov esi, dword ptr [edx + 0x14] */
    edx = MEM32(edx); /* 0x17106C90: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106C92: dec edx */
    _flag_k = FK_DEC;
    ecx = MEM32(eax); /* 0x17106C93: mov ecx, dword ptr [eax] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106D25; /* 0x17106C95: je 0x17106d25 */
L_17106C9B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106C9B: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106CE9; /* 0x17106C9C: je 0x17106ce9 */
L_17106C9E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17106C9E: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17106AB0; /* 0x17106C9F: jne 0x17106ab0 */
L_17106CA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106CA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106CA7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106CA9: jbe 0x17106d64 */
L_17106CAF:
    edi = MEM32(ebp + 0x10); /* 0x17106CAF: mov edi, dword ptr [ebp + 0x10] */
L_17106CB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17106CB2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x17106CB4: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106CB7: je 0x17106d64 */
L_17106CBD:
    /* cmp esi, edx */ /* 0x17106CBD: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106CD9; /* 0x17106CBF: jbe 0x17106cd9 */
L_17106CC1:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106CC1: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106CD9; /* 0x17106CC5: je 0x17106cd9 */
L_17106CC7:
    fp_push((double)(int32_t)MEM32(edi)); /* 0x17106CC7: fild dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17106CC9: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106CCC: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17106CCF: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17106CD1: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17106CD4: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x17106CD5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106CC1; /* 0x17106CD7: jb 0x17106cc1 */
L_17106CD9:
    PUSH32(esp, 4); /* 0x17106CD9: push 4 */
    edx = POP32_VAL(esp); /* 0x17106CDB: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x17106CDC: sub edx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106CDE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17106CDF: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + edx * 4; /* 0x17106CE2: lea ecx, [ecx + edx*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106CB2; /* 0x17106CE5: jb 0x17106cb2 */
L_17106CE7:
    goto L_17106D64; /* 0x17106CE7: jmp 0x17106d64 */
L_17106CE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106CE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106CEB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106CED: jbe 0x17106d64 */
L_17106CEF:
    edi = MEM32(ebp + 0x10); /* 0x17106CEF: mov edi, dword ptr [ebp + 0x10] */
L_17106CF2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17106CF2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x17106CF4: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106CF7: je 0x17106d64 */
L_17106CF9:
    /* cmp esi, edx */ /* 0x17106CF9: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106D15; /* 0x17106CFB: jbe 0x17106d15 */
L_17106CFD:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106CFD: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D15; /* 0x17106D01: je 0x17106d15 */
L_17106D03:
    ebx = MEM32(edi); /* 0x17106D03: mov ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17106D05: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106D08: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(ecx) = ebx; /* 0x17106D0B: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17106D0D: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17106D10: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x17106D11: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106CFD; /* 0x17106D13: jb 0x17106cfd */
L_17106D15:
    PUSH32(esp, 4); /* 0x17106D15: push 4 */
    edx = POP32_VAL(esp); /* 0x17106D17: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x17106D18: sub edx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106D1A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17106D1B: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + edx * 4; /* 0x17106D1E: lea ecx, [ecx + edx*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106CF2; /* 0x17106D21: jb 0x17106cf2 */
L_17106D23:
    goto L_17106D64; /* 0x17106D23: jmp 0x17106d64 */
L_17106D25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106D25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17106D27: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106D29: jbe 0x17106d64 */
L_17106D2B:
    edx = MEM32(ebp + 0x10); /* 0x17106D2B: mov edx, dword ptr [ebp + 0x10] */
L_17106D2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17106D2E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17106D30: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D64; /* 0x17106D33: je 0x17106d64 */
L_17106D35:
    /* cmp esi, edi */ /* 0x17106D35: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106D56; /* 0x17106D37: jbe 0x17106d56 */
L_17106D39:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106D39: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D56; /* 0x17106D3D: je 0x17106d56 */
L_17106D3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17106D3F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx), ebx */ /* 0x17106D41: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17106D43: setne bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17106D46: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106D49: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(ecx) = ebx; /* 0x17106D4C: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17106D4E: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17106D51: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x17106D52: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106D39; /* 0x17106D54: jb 0x17106d39 */
L_17106D56:
    PUSH32(esp, 4); /* 0x17106D56: push 4 */
    edi = POP32_VAL(esp); /* 0x17106D58: pop edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x17106D59: sub edi, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106D5B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17106D5C: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + edi * 4; /* 0x17106D5F: lea ecx, [ecx + edi*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106D2E; /* 0x17106D62: jb 0x17106d2e */
L_17106D64:
    esi = MEM32(ebp + 0x8); /* 0x17106D64: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17106D67: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x17106D6B: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(ebp + 0xC); /* 0x17106D6E: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x17106D71: mov eax, dword ptr [eax] */
    ecx = MEM32(ecx + 0x8); /* 0x17106D73: mov ecx, dword ptr [ecx + 8] */
    MEM32(ecx) = eax; /* 0x17106D76: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x17106D78: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x17106D7B: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106D8A; /* 0x17106D7E: je 0x17106d8a */
L_17106D80:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17106D80: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x17106D83: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x17106D85: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17106D8A:
    eax = MEM32(esi + 0x28); /* 0x17106D8A: mov eax, dword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_17106AB5; /* 0x17106D8D: jmp 0x17106ab5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17106D97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17106D97u);

L_17106D97:
    edi = edi; /* 0x17106D97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17106D99: push ebp */
    ebp = esp; /* 0x17106D9A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17106D9C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x17106D9F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x17106DA2: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x17106DA3: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x17106DA6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17106DA7: mov esi, dword ptr [ebp + 8] */
    eax = 0x80000003u; /* 0x17106DAA: mov eax, 0x80000003 */
    PUSH32(esp, edi); /* 0x17106DAF: push edi */
    edx = ecx; /* 0x17106DB0: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x17106DB2: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, eax */ /* 0x17106DB4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 3); /* 0x17106DB6: push 3 */
    edi = POP32_VAL(esp); /* 0x17106DB8: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106DC2; /* 0x17106DB9: jne 0x17106dc2 */
L_17106DBB:
    ecx = ~ecx; /* 0x17106DBB: not ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17106DBD: mov dword ptr [ebp - 0x14], ecx */
    goto L_17106DFB; /* 0x17106DC0: jmp 0x17106dfb */
L_17106DC2:
    eax = esi + 0xE0; /* 0x17106DC2: lea eax, [esi + 0xe0] */
    edx = MEM32(eax); /* 0x17106DC8: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x17106DCA: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x17106DCE: mov edx, dword ptr [eax] */
    MEM32(edx) = edi; /* 0x17106DD0: mov dword ptr [edx], edi */
    edx = MEM32(eax); /* 0x17106DD2: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ebx; /* 0x17106DD4: mov dword ptr [edx + 0x10], ebx */
    edx = MEM32(eax); /* 0x17106DD7: mov edx, dword ptr [eax] */
    MEM32(edx + 0x14) = 1; /* 0x17106DD9: mov dword ptr [edx + 0x14], 1 */
    edx = MEM32(eax); /* 0x17106DE0: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106DE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106DE4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x17106DE5: push eax */
    PUSH32(esp, eax); /* 0x17106DE6: push eax */
    PUSH32(esp, ecx); /* 0x17106DE7: push ecx */
    ecx = esi; /* 0x17106DE8: mov ecx, esi */
    MEM32(edx + 0x18) = eax; /* 0x17106DEA: mov dword ptr [edx + 0x18], eax */
    RECOMP_CALL(sub_170FE5B2); /* 0x17106DED: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x17106DF2: mov ecx, eax */
    /* test ecx, ecx */ /* 0x17106DF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17106DF6: mov dword ptr [ebp - 0x14], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106E32; /* 0x17106DF9: je 0x17106e32 */
L_17106DFB:
    /* cmp MEM32(esi + 0x58), edi */ /* 0x17106DFB: cmp dword ptr [esi + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17106E10; /* 0x17106DFE: jne 0x17106e10 */
L_17106E00:
    PUSH32(esp, ebx); /* 0x17106E00: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17106E01: push dword ptr [ebp + 0x10] */
    ecx = ~ecx; /* 0x17106E04: not ecx */
    PUSH32(esp, ecx); /* 0x17106E06: push ecx */
    ecx = esi; /* 0x17106E07: mov ecx, esi */
    RECOMP_CALL(sub_1710AA83); /* 0x17106E09: call 0x1710aa83 */
    RECOMP_FLAGS_IN();
    goto L_17106E37; /* 0x17106E0E: jmp 0x17106e37 */
L_17106E10:
    eax = MEM32(ecx + 0x4); /* 0x17106E10: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x4); /* 0x17106E13: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x17106E16: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17106E32; /* 0x17106E18: jl 0x17106e32 */
L_17106E1A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17106E1A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17106E1C: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x17106E1D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710700C; /* 0x17106E1F: jle 0x1710700c */
L_17106E25:
    /* cmp edx, 2 */ /* 0x17106E25: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106E3E; /* 0x17106E28: je 0x17106e3e */
L_17106E2A:
    /* cmp edx, edi */ /* 0x17106E2A: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710700C; /* 0x17106E2C: je 0x1710700c */
L_17106E32:
    eax = 0x8876086Cu; /* 0x17106E32: mov eax, 0x8876086c */
L_17106E37:
    edi = POP32_VAL(esp); /* 0x17106E37: pop edi */
    esi = POP32_VAL(esp); /* 0x17106E38: pop esi */
    ebx = POP32_VAL(esp); /* 0x17106E39: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17106E3A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17106E3B: ret 0x10 */
L_17106E3E:
    edi = MEM32(eax + 0x14); /* 0x17106E3E: mov edi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x10); /* 0x17106E41: mov edx, dword ptr [eax + 0x10] */
    ebx = MEM32(eax + 0x18); /* 0x17106E44: mov ebx, dword ptr [eax + 0x18] */
    MEM32(ebp + (-0x4)) = edi; /* 0x17106E47: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17106E4A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x17106E4C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x17106E4E: mov dword ptr [ebp - 0xc], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106E59; /* 0x17106E51: je 0x17106e59 */
L_17106E53:
    /* cmp MEM32(ecx + 0xC), 0xFFFFFFFFu */ /* 0x17106E53: cmp dword ptr [ecx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106E5E; /* 0x17106E57: je 0x17106e5e */
L_17106E59:
    edx = esi; /* 0x17106E59: mov edx, esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x17106E5B: mov dword ptr [ebp - 0xc], edx */
L_17106E5E:
    eax = MEM32(eax); /* 0x17106E5E: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17106E60: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ecx); /* 0x17106E61: mov ecx, dword ptr [ecx] */
    MEM32(ebp + 0xC) = ecx; /* 0x17106E63: mov dword ptr [ebp + 0xc], ecx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106F79; /* 0x17106E66: je 0x17106f79 */
L_17106E6C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17106E6C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106EF3; /* 0x17106E6D: je 0x17106ef3 */
L_17106E73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17106E73: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17106E7D; /* 0x17106E74: je 0x17106e7d */
L_17106E76:
    eax = 0x80004005u; /* 0x17106E76: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_17106E37; /* 0x17106E7B: jmp 0x17106e37 */
L_17106E7D:
    /* cmp edx, edi */ /* 0x17106E7D: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x17106E7F: mov dword ptr [ebp - 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x17106E82: jbe 0x17107126 */
L_17106E88:
    ecx = MEM32(ebp + 0x10); /* 0x17106E88: mov ecx, dword ptr [ebp + 0x10] */
L_17106E8B:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106E8B: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x17106E8F: je 0x17107126 */
L_17106E95:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106E95: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17106E99: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106ED6; /* 0x17106E9B: jbe 0x17106ed6 */
L_17106E9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17106E9D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x17106E9F: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106ECE; /* 0x17106EA2: jbe 0x17106ece */
L_17106EA4:
    eax = MEM32(ebp + 0x10); /* 0x17106EA4: mov eax, dword ptr [ebp + 0x10] */
    eax = ecx + eax * 4; /* 0x17106EA7: lea eax, [ecx + eax*4] */
L_17106EAA:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106EAA: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106ECE; /* 0x17106EAE: je 0x17106ece */
L_17106EB0:
    esi = MEM32(ebp + 0x10); /* 0x17106EB0: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17106EB3: fld dword ptr [eax] */
    edi = MEM32(ebp + 0xC); /* 0x17106EB5: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106EB8: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    esi = edx + esi * 4; /* 0x17106EBB: lea esi, [edx + esi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + esi * 4) = _v; } /* 0x17106EBE: fstp dword ptr [edi + esi*4] */
    esi = ebx; /* 0x17106EC1: mov esi, ebx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17106EC3: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17106EC3: shl esi, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17106EC6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17106EC7: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x17106EC9: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106EAA; /* 0x17106ECC: jb 0x17106eaa */
L_17106ECE:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106ECE: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17106ED1: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106E9D; /* 0x17106ED4: jb 0x17106e9d */
L_17106ED6:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x40u; /* 0x17106ED6: add dword ptr [ebp + 0xc], 0x40 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x17106EDA: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x17106EDC: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17106EE0: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = ecx + eax * 4; /* 0x17106EE3: lea ecx, [ecx + eax*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x17106EE6: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17106EE9: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106E8B; /* 0x17106EEC: jb 0x17106e8b */
L_17106EEE:
    goto L_17107126; /* 0x17106EEE: jmp 0x17107126 */
L_17106EF3:
    /* cmp edx, edi */ /* 0x17106EF3: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edi; /* 0x17106EF5: mov dword ptr [ebp - 0x10], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x17106EF8: jbe 0x17107126 */
L_17106EFE:
    edi = MEM32(ebp + 0x10); /* 0x17106EFE: mov edi, dword ptr [ebp + 0x10] */
L_17106F01:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106F01: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x17106F05: je 0x17107126 */
L_17106F0B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106F0B: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17106F0F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106F5C; /* 0x17106F11: jbe 0x17106f5c */
L_17106F13:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17106F13: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17106F17: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106F54; /* 0x17106F1B: jbe 0x17106f54 */
L_17106F1D:
    eax = MEM32(ebp + 0x10); /* 0x17106F1D: mov eax, dword ptr [ebp + 0x10] */
    esi = edi + eax * 4; /* 0x17106F20: lea esi, [edi + eax*4] */
L_17106F23:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106F23: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106F54; /* 0x17106F27: je 0x17106f54 */
L_17106F29:
    fp_push(*(float*)&MEM32(esi)); /* 0x17106F29: fld dword ptr [esi] */
    RECOMP_CALL(sub_1721B050); /* 0x17106F2B: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x17106F30: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x10); /* 0x17106F33: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106F36: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17106F39: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = ecx + edx * 4; /* 0x17106F3C: lea ecx, [ecx + edx*4] */
    edx = MEM32(ebp + 0xC); /* 0x17106F3F: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx + ecx * 4) = eax; /* 0x17106F42: mov dword ptr [edx + ecx*4], eax */
    eax = ebx; /* 0x17106F45: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17106F47: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17106F47: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17106F4A: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x17106F4C: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x17106F4F: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106F23; /* 0x17106F52: jb 0x17106f23 */
L_17106F54:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106F54: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17106F57: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106F13; /* 0x17106F5A: jb 0x17106f13 */
L_17106F5C:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x40u; /* 0x17106F5C: add dword ptr [ebp + 0xc], 0x40 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x17106F60: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x17106F62: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17106F66: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edi = edi + eax * 4; /* 0x17106F69: lea edi, [edi + eax*4] */
    eax = MEM32(ebp + (-0x10)); /* 0x17106F6C: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17106F6F: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106F01; /* 0x17106F72: jb 0x17106f01 */
L_17106F74:
    goto L_17107126; /* 0x17106F74: jmp 0x17107126 */
L_17106F79:
    /* cmp edx, edi */ /* 0x17106F79: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x17106F7B: mov dword ptr [ebp - 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x17106F7E: jbe 0x17107126 */
L_17106F84:
    ecx = MEM32(ebp + 0x10); /* 0x17106F84: mov ecx, dword ptr [ebp + 0x10] */
L_17106F87:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106F87: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x17106F8B: je 0x17107126 */
L_17106F91:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17106F91: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17106F95: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17106FEF; /* 0x17106F97: jbe 0x17106fef */
L_17106F99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17106F99: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x17106F9B: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17106FE7; /* 0x17106F9E: jbe 0x17106fe7 */
L_17106FA0:
    eax = MEM32(ebp + 0x10); /* 0x17106FA0: mov eax, dword ptr [ebp + 0x10] */
    eax = ecx + eax * 4; /* 0x17106FA3: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17106FA6: mov dword ptr [ebp - 0x10], eax */
L_17106FA9:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17106FA9: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17106FE7; /* 0x17106FAD: je 0x17106fe7 */
L_17106FAF:
    eax = MEM32(ebp + (-0x10)); /* 0x17106FAF: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17106FB2: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17106FB4: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17106FBA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17106FBC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17106FBE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17106FC8; /* 0x17106FC1: jnp 0x17106fc8 */
L_17106FC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106FC3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17106FC5: inc eax */
    _flag_k = FK_INC;
    goto L_17106FCA; /* 0x17106FC6: jmp 0x17106fca */
L_17106FC8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17106FC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17106FCA:
    esi = MEM32(ebp + 0x10); /* 0x17106FCA: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x17106FCD: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17106FD0: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    esi = edx + esi * 4; /* 0x17106FD3: lea esi, [edx + esi*4] */
    MEM32(edi + esi * 4) = eax; /* 0x17106FD6: mov dword ptr [edi + esi*4], eax */
    eax = ebx; /* 0x17106FD9: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17106FDB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17106FDB: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + eax; /* 0x17106FDE: add dword ptr [ebp - 0x10], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17106FE1: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x17106FE2: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106FA9; /* 0x17106FE5: jb 0x17106fa9 */
L_17106FE7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17106FE7: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17106FEA: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106F99; /* 0x17106FED: jb 0x17106f99 */
L_17106FEF:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x40u; /* 0x17106FEF: add dword ptr [ebp + 0xc], 0x40 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x17106FF3: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x17106FF5: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17106FF9: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = ecx + eax * 4; /* 0x17106FFC: lea ecx, [ecx + eax*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x17106FFF: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x17107002: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17106F87; /* 0x17107005: jb 0x17106f87 */
L_17107007:
    goto L_17107126; /* 0x17107007: jmp 0x17107126 */
L_1710700C:
    edx = MEM32(eax + 0x10); /* 0x1710700C: mov edx, dword ptr [eax + 0x10] */
    /* test edx, edx */ /* 0x1710700F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edx; /* 0x17107011: mov dword ptr [ebp + 0xc], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710701C; /* 0x17107014: je 0x1710701c */
L_17107016:
    /* cmp MEM32(ecx + 0xC), 0xFFFFFFFFu */ /* 0x17107016: cmp dword ptr [ecx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710701F; /* 0x1710701A: je 0x1710701f */
L_1710701C:
    MEM32(ebp + 0xC) = esi; /* 0x1710701C: mov dword ptr [ebp + 0xc], esi */
L_1710701F:
    ebx = MEM32(eax + 0x14); /* 0x1710701F: mov ebx, dword ptr [eax + 0x14] */
    eax = MEM32(eax); /* 0x17107022: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17107024: dec eax */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + (-0x14)); /* 0x17107025: mov ecx, dword ptr [ebp - 0x14] */
    esi = MEM32(ecx); /* 0x17107028: mov esi, dword ptr [ecx] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171070D5; /* 0x1710702A: je 0x171070d5 */
L_17107030:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17107030: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107082; /* 0x17107031: je 0x17107082 */
L_17107033:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17107033: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17106E32; /* 0x17107034: jne 0x17106e32 */
L_1710703A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1710703A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1710703C: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x1710703F: jbe 0x17107126 */
L_17107045:
    ecx = MEM32(ebp + 0x10); /* 0x17107045: mov ecx, dword ptr [ebp + 0x10] */
L_17107048:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107048: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x1710704A: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x1710704D: je 0x17107126 */
L_17107053:
    /* cmp ebx, eax */ /* 0x17107053: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710706F; /* 0x17107055: jbe 0x1710706f */
L_17107057:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17107057: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710706F; /* 0x1710705B: je 0x1710706f */
L_1710705D:
    edi = MEM32(ecx); /* 0x1710705D: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1710705F: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x17107062: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(esi) = edi; /* 0x17107065: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17107067: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710706A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x1710706B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107057; /* 0x1710706D: jb 0x17107057 */
L_1710706F:
    PUSH32(esp, 4); /* 0x1710706F: push 4 */
    eax = POP32_VAL(esp); /* 0x17107071: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x17107072: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17107074: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x17107075: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esi + eax * 4; /* 0x17107078: lea esi, [esi + eax*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107048; /* 0x1710707B: jb 0x17107048 */
L_1710707D:
    goto L_17107126; /* 0x1710707D: jmp 0x17107126 */
L_17107082:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17107082: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17107086: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x1710708A: jbe 0x17107126 */
L_17107090:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107090: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17107092: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x17107095: je 0x17107126 */
L_1710709B:
    /* cmp ebx, edi */ /* 0x1710709B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171070C0; /* 0x1710709D: jbe 0x171070c0 */
L_1710709F:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1710709F: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171070C0; /* 0x171070A3: je 0x171070c0 */
L_171070A5:
    eax = MEM32(ebp + 0x10); /* 0x171070A5: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171070A8: fld dword ptr [eax] */
    RECOMP_CALL(sub_1721B050); /* 0x171070AA: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x171070AF: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171070B3: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x171070B6: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171070B8: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171070BB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x171070BC: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710709F; /* 0x171070BE: jb 0x1710709f */
L_171070C0:
    PUSH32(esp, 4); /* 0x171070C0: push 4 */
    eax = POP32_VAL(esp); /* 0x171070C2: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171070C3: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x171070C5: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    esi = esi + eax * 4; /* 0x171070C8: lea esi, [esi + eax*4] */
    eax = MEM32(ebp + (-0x10)); /* 0x171070CB: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x171070CE: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107090; /* 0x171070D1: jb 0x17107090 */
L_171070D3:
    goto L_17107126; /* 0x171070D3: jmp 0x17107126 */
L_171070D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171070D5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x171070D7: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107126; /* 0x171070DA: jbe 0x17107126 */
L_171070DC:
    edx = MEM32(ebp + 0x10); /* 0x171070DC: mov edx, dword ptr [ebp + 0x10] */
L_171070DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171070DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x171070E1: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107126; /* 0x171070E4: je 0x17107126 */
L_171070E6:
    /* cmp ebx, ecx */ /* 0x171070E6: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107118; /* 0x171070E8: jbe 0x17107118 */
L_171070EA:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171070EA: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107118; /* 0x171070EE: je 0x17107118 */
L_171070F0:
    fp_push(*(float*)&MEM32(edx)); /* 0x171070F0: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171070F2: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171070F8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171070FA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171070FC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17107106; /* 0x171070FF: jnp 0x17107106 */
L_17107101:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107101: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107103: inc eax */
    _flag_k = FK_INC;
    goto L_17107108; /* 0x17107104: jmp 0x17107108 */
L_17107106:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107106: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17107108:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17107108: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1710710B: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x1710710E: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17107110: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17107113: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x17107114: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171070EA; /* 0x17107116: jb 0x171070ea */
L_17107118:
    PUSH32(esp, 4); /* 0x17107118: push 4 */
    eax = POP32_VAL(esp); /* 0x1710711A: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1710711B: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1710711D: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1710711E: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esi + eax * 4; /* 0x17107121: lea esi, [esi + eax*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171070DF; /* 0x17107124: jb 0x171070df */
L_17107126:
    esi = MEM32(ebp + 0x8); /* 0x17107126: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17107129: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x38); /* 0x1710712D: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(ebp + (-0x14)); /* 0x17107130: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ecx); /* 0x17107133: mov ecx, dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x17107135: mov edx, dword ptr [eax + 8] */
    MEM32(edx) = ecx; /* 0x17107138: mov dword ptr [edx], ecx */
    ecx = MEM32(esi + 0x40); /* 0x1710713A: mov ecx, dword ptr [esi + 0x40] */
    /* cmp MEM32(ecx), 0 */ /* 0x1710713D: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710714A; /* 0x17107140: je 0x1710714a */
L_17107142:
    PUSH32(esp, eax); /* 0x17107142: push eax */
    ecx = esi; /* 0x17107143: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x17107145: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_1710714A:
    eax = MEM32(esi + 0x28); /* 0x1710714A: mov eax, dword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_17106E37; /* 0x1710714D: jmp 0x17106e37 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17107157(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17107157u);

L_17107157:
    edi = edi; /* 0x17107157: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107159: push ebp */
    ebp = esp; /* 0x1710715A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710715C: push ecx */
    PUSH32(esp, ebx); /* 0x1710715D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1710715E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17107161: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17107162: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17107165: push edi */
    eax = 0x80000003u; /* 0x17107166: mov eax, 0x80000003 */
    edx = esi; /* 0x1710716B: mov edx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710716D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710716F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x17107171: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107173: inc edi */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x17107174: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17107176: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710717F; /* 0x17107179: jne 0x1710717f */
L_1710717B:
    esi = ~esi; /* 0x1710717B: not esi */
    goto L_171071B5; /* 0x1710717D: jmp 0x171071b5 */
L_1710717F:
    eax = ebx + 0xE0; /* 0x1710717F: lea eax, [ebx + 0xe0] */
    edx = MEM32(eax); /* 0x17107185: mov edx, dword ptr [eax] */
    MEM32(edx + 0x4) = ecx; /* 0x17107187: mov dword ptr [edx + 4], ecx */
    edx = MEM32(eax); /* 0x1710718A: mov edx, dword ptr [eax] */
    MEM32(edx) = 3; /* 0x1710718C: mov dword ptr [edx], 3 */
    edx = MEM32(eax); /* 0x17107192: mov edx, dword ptr [eax] */
    MEM32(edx + 0x10) = ecx; /* 0x17107194: mov dword ptr [edx + 0x10], ecx */
    ecx = MEM32(eax); /* 0x17107197: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x17107199: push edi */
    MEM32(ecx + 0x14) = edi; /* 0x1710719A: mov dword ptr [ecx + 0x14], edi */
    eax = MEM32(eax); /* 0x1710719D: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1710719F: push edi */
    PUSH32(esp, esi); /* 0x171071A0: push esi */
    ecx = ebx; /* 0x171071A1: mov ecx, ebx */
    MEM32(eax + 0x18) = edi; /* 0x171071A3: mov dword ptr [eax + 0x18], edi */
    RECOMP_CALL(sub_170FE5B2); /* 0x171071A6: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171071AB: mov esi, eax */
    /* test esi, esi */ /* 0x171071AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710729F; /* 0x171071AF: je 0x1710729f */
L_171071B5:
    eax = MEM32(esi + 0x4); /* 0x171071B5: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x171071B8: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171071C8; /* 0x171071BC: je 0x171071c8 */
L_171071BE:
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x171071BE: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710729F; /* 0x171071C2: je 0x1710729f */
L_171071C8:
    /* cmp MEM32(ebx + 0x58), 3 */ /* 0x171071C8: cmp dword ptr [ebx + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171071E7; /* 0x171071CC: jne 0x171071e7 */
L_171071CE:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x171071CE: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x171071D1: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171071D2: fstp dword ptr [esp] */
    esi = ~esi; /* 0x171071D5: not esi */
    PUSH32(esp, esi); /* 0x171071D7: push esi */
    ecx = ebx; /* 0x171071D8: mov ecx, ebx */
    RECOMP_CALL(sub_1710A865); /* 0x171071DA: call 0x1710a865 */
    RECOMP_FLAGS_IN();
L_171071DF:
    MEM32(ebp + (-0x4)) = eax; /* 0x171071DF: mov dword ptr [ebp - 4], eax */
    goto L_171072A6; /* 0x171071E2: jmp 0x171072a6 */
L_171071E7:
    ecx = MEM32(eax + 0x4); /* 0x171071E7: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x171071EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710729F; /* 0x171071EC: jl 0x1710729f */
L_171071F2:
    /* cmp ecx, 3 */ /* 0x171071F2: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1710729F; /* 0x171071F5: jg 0x1710729f */
L_171071FB:
    /* cmp MEM32(eax + 0x14), edi */ /* 0x171071FB: cmp dword ptr [eax + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710729F; /* 0x171071FE: jne 0x1710729f */
L_17107204:
    /* cmp MEM32(eax + 0x18), edi */ /* 0x17107204: cmp dword ptr [eax + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710729F; /* 0x17107207: jne 0x1710729f */
L_1710720D:
    eax = MEM32(eax); /* 0x1710720D: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1710720F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107245; /* 0x17107210: je 0x17107245 */
L_17107212:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17107212: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107233; /* 0x17107213: je 0x17107233 */
L_17107215:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17107215: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710729F; /* 0x17107216: jne 0x1710729f */
L_1710721C:
    ecx = MEM32(esi); /* 0x1710721C: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1710721E: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17107221: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17107223: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17107225: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17107227: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171072A6; /* 0x1710722A: jnp 0x171072a6 */
L_1710722C:
    eax = MEM32(ebp + 0x10); /* 0x1710722C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1710722F: mov dword ptr [ecx], eax */
    goto L_17107279; /* 0x17107231: jmp 0x17107279 */
L_17107233:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17107233: fld dword ptr [ebp + 0x10] */
    edi = MEM32(esi); /* 0x17107236: mov edi, dword ptr [esi] */
    RECOMP_CALL(sub_1721B050); /* 0x17107238: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), eax */ /* 0x1710723D: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171072A6; /* 0x1710723F: je 0x171072a6 */
L_17107241:
    MEM32(edi) = eax; /* 0x17107241: mov dword ptr [edi], eax */
    goto L_17107279; /* 0x17107243: jmp 0x17107279 */
L_17107245:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17107245: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17107248: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1710724E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17107250: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17107252: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1710725B; /* 0x17107255: jnp 0x1710725b */
L_17107257:
    eax = edi; /* 0x17107257: mov eax, edi */
    goto L_1710725D; /* 0x17107259: jmp 0x1710725d */
L_1710725B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710725B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710725D:
    ecx = MEM32(esi); /* 0x1710725D: mov ecx, dword ptr [esi] */
    /* cmp MEM32(ecx), eax */ /* 0x1710725F: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171072A6; /* 0x17107261: je 0x171072a6 */
L_17107263:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17107263: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17107266: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1710726C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1710726E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17107270: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17107277; /* 0x17107273: jp 0x17107277 */
L_17107275:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107275: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17107277:
    MEM32(ecx) = edi; /* 0x17107277: mov dword ptr [ecx], edi */
L_17107279:
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) & 0; /* 0x17107279: and dword ptr [ebx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x38); /* 0x1710727D: mov eax, dword ptr [ebx + 0x38] */
    eax = MEM32(eax); /* 0x17107280: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x17107282: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx) = eax; /* 0x17107285: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x40); /* 0x17107287: mov eax, dword ptr [ebx + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x1710728A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107297; /* 0x1710728D: je 0x17107297 */
L_1710728F:
    PUSH32(esp, esi); /* 0x1710728F: push esi */
    ecx = ebx; /* 0x17107290: mov ecx, ebx */
    RECOMP_CALL(sub_17102498); /* 0x17107292: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_17107297:
    eax = MEM32(ebx + 0x28); /* 0x17107297: mov eax, dword ptr [ebx + 0x28] */
    RECOMP_BACKEDGE();
    goto L_171071DF; /* 0x1710729A: jmp 0x171071df */
L_1710729F:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1710729F: mov dword ptr [ebp - 4], 0x8876086c */
L_171072A6:
    eax = MEM32(ebp + (-0x4)); /* 0x171072A6: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171072A9: pop edi */
    esi = POP32_VAL(esp); /* 0x171072AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x171072AB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171072AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171072AD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171072B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171072B5u);

L_171072B5:
    edi = edi; /* 0x171072B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171072B7: push ebp */
    ebp = esp; /* 0x171072B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171072BA: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171072BD: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171072BE: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0xC), 0xFFFFFFFFu */ /* 0x171072C1: cmp dword ptr [ebx + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x4); /* 0x171072C5: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, esi); /* 0x171072C8: push esi */
    PUSH32(esp, edi); /* 0x171072C9: push edi */
    edi = MEM32(ebx); /* 0x171072CA: mov edi, dword ptr [ebx] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171072CC: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + 0x8) = edi; /* 0x171072CF: mov dword ptr [ebp + 8], edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x171072D2: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171072DF; /* 0x171072D5: jne 0x171072df */
L_171072D7:
    ecx = MEM32(eax + 0x10); /* 0x171072D7: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 1 */ /* 0x171072DA: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171072E2; /* 0x171072DD: jae 0x171072e2 */
L_171072DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171072DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171072E1: inc ecx */
    _flag_k = FK_INC;
L_171072E2:
    edx = MEM32(eax + 0x4); /* 0x171072E2: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x171072E5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax); /* 0x171072E7: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171072E9: mov dword ptr [ebp - 4], ecx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107372; /* 0x171072EC: jl 0x17107372 */
L_171072F2:
    /* cmp edx, 1 */ /* 0x171072F2: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17107548; /* 0x171072F5: jle 0x17107548 */
L_171072FB:
    /* cmp edx, 3 */ /* 0x171072FB: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171073F9; /* 0x171072FE: jle 0x171073f9 */
L_17107304:
    /* cmp edx, 4 */ /* 0x17107304: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710735C; /* 0x17107307: je 0x1710735c */
L_17107309:
    /* cmp edx, 5 */ /* 0x17107309: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17107372; /* 0x1710730C: jne 0x17107372 */
L_1710730E:
    /* test ecx, ecx */ /* 0x1710730E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0x14); /* 0x17107310: mov esi, dword ptr [eax + 0x14] */
    edi = eax + 0x18; /* 0x17107313: lea edi, [eax + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x17107316: je 0x17107358 */
L_17107318:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17107318: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1710731C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x1710731E: mov dword ptr [ebp - 8], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107353; /* 0x17107321: jbe 0x17107353 */
L_17107323:
    eax = MEM32(ebp + (-0x8)); /* 0x17107323: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x10); /* 0x17107326: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, 1 */ /* 0x17107329: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17107331; /* 0x1710732C: jae 0x17107331 */
L_1710732E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710732E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107330: inc eax */
    _flag_k = FK_INC;
L_17107331:
    ecx = MEM32(ebp + (-0x10)); /* 0x17107331: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x17107334: push ebx */
    PUSH32(esp, eax); /* 0x17107335: push eax */
    eax = ebp + 0xC; /* 0x17107336: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17107339: push eax */
    eax = ebp + 0x8; /* 0x1710733A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1710733D: push eax */
    eax = ebp + (-0x8); /* 0x1710733E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x17107341: push eax */
    RECOMP_CALL(sub_1710349D); /* 0x17107342: call 0x1710349d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107377; /* 0x17107349: jl 0x17107377 */
L_1710734B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1710734B: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x1710734E: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107323; /* 0x17107351: jb 0x17107323 */
L_17107353:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17107353: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107318; /* 0x17107356: jne 0x17107318 */
L_17107358:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107358: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17107377; /* 0x1710735A: jmp 0x17107377 */
L_1710735C:
    /* cmp esi, 4 */ /* 0x1710735C: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171073BA; /* 0x1710735F: je 0x171073ba */
L_17107361:
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_17107358; /* 0x17107361: jle 0x17107358 */
L_17107363:
    /* cmp esi, 9 */ /* 0x17107363: cmp esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710737E; /* 0x17107366: jle 0x1710737e */
L_17107368:
    /* cmp esi, 0xEu */ /* 0x17107368: cmp esi, 0xe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_17107358; /* 0x1710736B: jle 0x17107358 */
L_1710736D:
    /* cmp esi, 0x10u */ /* 0x1710736D: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_17107358; /* 0x17107370: jg 0x17107358 */
L_17107372:
    eax = 0x80004005u; /* 0x17107372: mov eax, 0x80004005 */
L_17107377:
    edi = POP32_VAL(esp); /* 0x17107377: pop edi */
    esi = POP32_VAL(esp); /* 0x17107378: pop esi */
    ebx = POP32_VAL(esp); /* 0x17107379: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710737A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710737B: ret 8 */
L_1710737E:
    /* test ecx, ecx */ /* 0x1710737E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x17107380: je 0x17107358 */
L_17107382:
    esi = MEM32(ebp + (-0x10)); /* 0x17107382: mov esi, dword ptr [ebp - 0x10] */
    goto L_1710738A; /* 0x17107385: jmp 0x1710738a */
L_17107387:
    edi = MEM32(ebp + 0x8); /* 0x17107387: mov edi, dword ptr [ebp + 8] */
L_1710738A:
    ecx = MEM32(esi + 0xD0); /* 0x1710738A: mov ecx, dword ptr [esi + 0xd0] */
    eax = MEM32(ebx + 0x18); /* 0x17107390: mov eax, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x17107393: mov eax, dword ptr [ecx + eax*4] */
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x17107396: push dword ptr [eax + 0x48] */
    eax = MEM32(ebp + 0xC); /* 0x17107399: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x1710739C: push dword ptr [edi] */
    ecx = esi; /* 0x1710739E: mov ecx, esi */
    PUSH32(esp, MEM32(eax)); /* 0x171073A0: push dword ptr [eax] */
    RECOMP_CALL(sub_170FBCB7); /* 0x171073A2: call 0x170fbcb7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171073A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107377; /* 0x171073A9: jl 0x17107377 */
L_171073AB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x171073AB: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x171073AF: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x171073B3: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107387; /* 0x171073B6: jne 0x17107387 */
L_171073B8:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x171073B8: jmp 0x17107358 */
L_171073BA:
    /* test ecx, ecx */ /* 0x171073BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x171073BC: je 0x17107358 */
L_171073BE:
    esi = MEM32(ebp + (-0x10)); /* 0x171073BE: mov esi, dword ptr [ebp - 0x10] */
    goto L_171073C6; /* 0x171073C1: jmp 0x171073c6 */
L_171073C3:
    edi = MEM32(ebp + 0x8); /* 0x171073C3: mov edi, dword ptr [ebp + 8] */
L_171073C6:
    ecx = MEM32(esi + 0xD0); /* 0x171073C6: mov ecx, dword ptr [esi + 0xd0] */
    eax = MEM32(ebx + 0x18); /* 0x171073CC: mov eax, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x171073CF: mov eax, dword ptr [ecx + eax*4] */
    PUSH32(esp, MEM32(eax + 0x48)); /* 0x171073D2: push dword ptr [eax + 0x48] */
    eax = MEM32(ebp + 0xC); /* 0x171073D5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x171073D8: push dword ptr [edi] */
    ecx = esi; /* 0x171073DA: mov ecx, esi */
    PUSH32(esp, MEM32(eax)); /* 0x171073DC: push dword ptr [eax] */
    RECOMP_CALL(sub_170FBD60); /* 0x171073DE: call 0x170fbd60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171073E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107377; /* 0x171073E5: jl 0x17107377 */
L_171073E7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x171073E7: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x171073EB: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x171073EF: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171073C3; /* 0x171073F2: jne 0x171073c3 */
L_171073F4:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x171073F4: jmp 0x17107358 */
L_171073F9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171073F9: dec esi */
    _flag_k = FK_DEC;
    ebx = MEM32(eax + 0x14); /* 0x171073FA: mov ebx, dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0x18); /* 0x171073FD: mov eax, dword ptr [eax + 0x18] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x17107400: mov dword ptr [ebp - 0x10], ebx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171074DD; /* 0x17107403: je 0x171074dd */
L_17107409:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107409: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107477; /* 0x1710740A: je 0x17107477 */
L_1710740C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1710740C: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107358; /* 0x1710740D: jne 0x17107358 */
L_17107413:
    /* test ecx, ecx */ /* 0x17107413: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x17107415: jbe 0x17107358 */
L_1710741B:
    edi = eax; /* 0x1710741B: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x1710741D: imul edi, ebx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x17107420: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x17107420: shl edi, 2 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17107423: mov dword ptr [ebp - 0x14], ecx */
L_17107426:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17107426: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1710742A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107466; /* 0x1710742C: jbe 0x17107466 */
L_1710742E:
    /* test ebx, ebx */ /* 0x1710742E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710745E; /* 0x17107430: jbe 0x1710745e */
L_17107432:
    esi = MEM32(ebp + (-0x4)); /* 0x17107432: mov esi, dword ptr [ebp - 4] */
    edx = esi; /* 0x17107435: mov edx, esi */
    ecx = eax; /* 0x17107437: mov ecx, eax */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x17107439: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x17107439: shl edx, 4 */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1710743C: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1710743C: shl ecx, 2 */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1710743F: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1710743F: shl esi, 2 */
    MEM32(ebp + (-0xC)) = ebx; /* 0x17107442: mov dword ptr [ebp - 0xc], ebx */
L_17107445:
    ebx = MEM32(ebp + 0xC); /* 0x17107445: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + ebx)); /* 0x17107448: fld dword ptr [esi + ebx] */
    ebx = MEM32(ebp + 0x8); /* 0x1710744B: mov ebx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + ebx) = _v; } /* 0x1710744E: fstp dword ptr [edx + ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17107451: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x17107454: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x17107456: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107445; /* 0x17107459: jne 0x17107445 */
L_1710745B:
    ebx = MEM32(ebp + (-0x10)); /* 0x1710745B: mov ebx, dword ptr [ebp - 0x10] */
L_1710745E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1710745E: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x17107461: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710742E; /* 0x17107464: jb 0x1710742e */
L_17107466:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x40u; /* 0x17107466: add dword ptr [ebp + 8], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi; /* 0x1710746A: add dword ptr [ebp + 0xc], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x1710746D: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107426; /* 0x17107470: jne 0x17107426 */
L_17107472:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x17107472: jmp 0x17107358 */
L_17107477:
    /* test ecx, ecx */ /* 0x17107477: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x17107479: jbe 0x17107358 */
L_1710747F:
    edi = eax; /* 0x1710747F: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x17107481: imul edi, ebx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x17107484: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x17107484: shl edi, 2 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17107487: mov dword ptr [ebp - 0xc], ecx */
L_1710748A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710748A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1710748E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171074CC; /* 0x17107490: jbe 0x171074cc */
L_17107492:
    /* test ebx, ebx */ /* 0x17107492: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171074C4; /* 0x17107494: jbe 0x171074c4 */
L_17107496:
    ecx = MEM32(ebp + (-0x4)); /* 0x17107496: mov ecx, dword ptr [ebp - 4] */
    edx = ecx; /* 0x17107499: mov edx, ecx */
    esi = ecx; /* 0x1710749B: mov esi, ecx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1710749D: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1710749D: shl edx, 4 */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171074A0: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171074A0: shl esi, 2 */
    MEM32(ebp + (-0x14)) = ebx; /* 0x171074A3: mov dword ptr [ebp - 0x14], ebx */
L_171074A6:
    ecx = MEM32(ebp + 0xC); /* 0x171074A6: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + ecx); /* 0x171074A9: mov ecx, dword ptr [esi + ecx] */
    ebx = MEM32(ebp + 0x8); /* 0x171074AC: mov ebx, dword ptr [ebp + 8] */
    MEM32(edx + ebx) = ecx; /* 0x171074AF: mov dword ptr [edx + ebx], ecx */
    ecx = eax; /* 0x171074B2: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171074B4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171074B4: shl ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171074B7: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171074BA: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x171074BC: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171074A6; /* 0x171074BF: jne 0x171074a6 */
L_171074C1:
    ebx = MEM32(ebp + (-0x10)); /* 0x171074C1: mov ebx, dword ptr [ebp - 0x10] */
L_171074C4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171074C4: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x171074C7: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107492; /* 0x171074CA: jb 0x17107492 */
L_171074CC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x40u; /* 0x171074CC: add dword ptr [ebp + 8], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi; /* 0x171074D0: add dword ptr [ebp + 0xc], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x171074D3: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710748A; /* 0x171074D6: jne 0x1710748a */
L_171074D8:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x171074D8: jmp 0x17107358 */
L_171074DD:
    /* test ecx, ecx */ /* 0x171074DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107358; /* 0x171074DF: jbe 0x17107358 */
L_171074E5:
    edi = eax; /* 0x171074E5: mov edi, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171074E7: imul edi, ebx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171074EA: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171074EA: shl edi, 2 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171074ED: mov dword ptr [ebp - 0xc], ecx */
L_171074F0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171074F0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171074F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107537; /* 0x171074F6: jbe 0x17107537 */
L_171074F8:
    /* test ebx, ebx */ /* 0x171074F8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710752F; /* 0x171074FA: jbe 0x1710752f */
L_171074FC:
    ecx = MEM32(ebp + (-0x4)); /* 0x171074FC: mov ecx, dword ptr [ebp - 4] */
    edx = ecx; /* 0x171074FF: mov edx, ecx */
    esi = ecx; /* 0x17107501: mov esi, ecx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x17107503: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x17107503: shl edx, 4 */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17107506: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17107506: shl esi, 2 */
    MEM32(ebp + (-0x14)) = ebx; /* 0x17107509: mov dword ptr [ebp - 0x14], ebx */
L_1710750C:
    ebx = MEM32(ebp + 0xC); /* 0x1710750C: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710750F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + ebx), ecx */ /* 0x17107511: cmp dword ptr [esi + ebx], ecx */
    _flag_a = (uint32_t)(MEM32(esi + ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x17107514: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17107517: setne cl */
    MEM32(edx + ebx) = ecx; /* 0x1710751A: mov dword ptr [edx + ebx], ecx */
    ecx = eax; /* 0x1710751D: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1710751F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1710751F: shl ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17107522: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x17107525: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x17107527: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710750C; /* 0x1710752A: jne 0x1710750c */
L_1710752C:
    ebx = MEM32(ebp + (-0x10)); /* 0x1710752C: mov ebx, dword ptr [ebp - 0x10] */
L_1710752F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1710752F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x17107532: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171074F8; /* 0x17107535: jb 0x171074f8 */
L_17107537:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x40u; /* 0x17107537: add dword ptr [ebp + 8], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi; /* 0x1710753B: add dword ptr [ebp + 0xc], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x1710753E: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171074F0; /* 0x17107541: jne 0x171074f0 */
L_17107543:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x17107543: jmp 0x17107358 */
L_17107548:
    eax = MEM32(eax + 0x14); /* 0x17107548: mov eax, dword ptr [eax + 0x14] */
    esi = MEM32(ebp + 0xC); /* 0x1710754B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1710754E: push 4 */
    edx = POP32_VAL(esp); /* 0x17107550: pop edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x17107551: sub edx, eax */
    _flag_k = FK_CMP;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x17107553: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x17107553: shl ecx, 4 */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17107556: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17107556: shl edx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x17107559: add ecx, edi */
    _flag_k = FK_ADD;
    goto L_17107575; /* 0x1710755B: jmp 0x17107575 */
L_1710755D:
    /* test eax, eax */ /* 0x1710755D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107573; /* 0x1710755F: jbe 0x17107573 */
L_17107561:
    MEM32(ebp + (-0x14)) = eax; /* 0x17107561: mov dword ptr [ebp - 0x14], eax */
L_17107564:
    ebx = MEM32(esi); /* 0x17107564: mov ebx, dword ptr [esi] */
    MEM32(edi) = ebx; /* 0x17107566: mov dword ptr [edi], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17107568: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1710756B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x1710756E: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107564; /* 0x17107571: jne 0x17107564 */
L_17107573:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17107573: add edi, edx */
    _flag_k = FK_ADD;
L_17107575:
    /* cmp edi, ecx */ /* 0x17107575: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710755D; /* 0x17107577: jb 0x1710755d */
L_17107579:
    RECOMP_BACKEDGE();
    goto L_17107358; /* 0x17107579: jmp 0x17107358 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17107583(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17107583u);

L_17107583:
    edi = edi; /* 0x17107583: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107585: push ebp */
    ebp = esp; /* 0x17107586: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17107588: push dword ptr [ebp + 0x18] */
    eax = ebp + 0x10; /* 0x1710758B: lea eax, [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1710758E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x17107591: push eax */
    eax = ebp + 0xC; /* 0x17107592: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17107595: push eax */
    eax = ebp + 0x8; /* 0x17107596: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17107599: push eax */
    RECOMP_CALL(sub_171037A0); /* 0x1710759A: call 0x171037a0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1710759F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171075A0: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171075A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171075A8u);

L_171075A8:
    edi = edi; /* 0x171075A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171075AA: push ebp */
    ebp = esp; /* 0x171075AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171075AD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171075B0: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171075B5: push ebx */
    PUSH32(esp, esi); /* 0x171075B6: push esi */
    ebx = ecx; /* 0x171075B7: mov ebx, ecx */
    esi = (uint32_t)MEM16(ebx + 0x5E); /* 0x171075B9: movzx esi, word ptr [ebx + 0x5e] */
    ecx = MEM32(ebx + 0x134); /* 0x171075BD: mov ecx, dword ptr [ebx + 0x134] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC4u); /* 0x171075C3: imul esi, esi, 0xc4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC4); /* 0x171075C9: add esi, dword ptr [ebx + 0xc4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171075CF: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171075D2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171075D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 8 */ /* 0x171075D6: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x171075D9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171075DA: mov edi, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710770A; /* 0x171075DD: je 0x1710770a */
L_171075E3:
    /* test LO8(ecx), 0x10u */ /* 0x171075E3: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171076C7; /* 0x171075E6: je 0x171076c7 */
L_171075EC:
    /* cmp MEM32(esi + 0xA4), edx */ /* 0x171075EC: cmp dword ptr [esi + 0xa4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xA4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710762B; /* 0x171075F2: je 0x1710762b */
L_171075F4:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x171075F4: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107601; /* 0x171075F7: je 0x17107601 */
L_171075F9:
    /* cmp MEM32(esi + 0xAC), edx */ /* 0x171075F9: cmp dword ptr [esi + 0xac], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107633; /* 0x171075FF: je 0x17107633 */
L_17107601:
    SET_LO16(ecx, MEM16(esi + 0xB4)); /* 0x17107601: mov cx, word ptr [esi + 0xb4] */
    /* cmp LO16(ecx), MEM16(edi) */ /* 0x17107608: cmp cx, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1710762B; /* 0x1710760B: jb 0x1710762b */
L_1710760D:
    SET_LO16(ecx, MEM16(esi + 0xB6)); /* 0x1710760D: mov cx, word ptr [esi + 0xb6] */
    /* cmp LO16(ecx), MEM16(edi + 0x2) */ /* 0x17107614: cmp cx, word ptr [edi + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1710762B; /* 0x17107618: jb 0x1710762b */
L_1710761A:
    SET_LO16(ecx, MEM16(esi + 0xB8)); /* 0x1710761A: mov cx, word ptr [esi + 0xb8] */
    /* cmp LO16(ecx), MEM16(edi + 0x4) */ /* 0x17107621: cmp cx, word ptr [edi + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_171076C7; /* 0x17107625: jae 0x171076c7 */
L_1710762B:
    /* cmp MEM32(esi + 0xAC), edx */ /* 0x1710762B: cmp dword ptr [esi + 0xac], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710763B; /* 0x17107631: jne 0x1710763b */
L_17107633:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x17107633: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x17107636: mov dword ptr [ebp - 0x10], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107642; /* 0x17107639: je 0x17107642 */
L_1710763B:
    MEM32(ebp + (-0x10)) = 1; /* 0x1710763B: mov dword ptr [ebp - 0x10], 1 */
L_17107642:
    SET_LO16(eax, MEM16(esi + 0xB4)); /* 0x17107642: mov ax, word ptr [esi + 0xb4] */
    SET_LO16(ecx, MEM16(edi)); /* 0x17107649: mov cx, word ptr [edi] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1710764C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1710764F: mov word ptr [ebp - 0xc], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_17107659; /* 0x17107653: ja 0x17107659 */
L_17107655:
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(ecx)); /* 0x17107655: mov word ptr [ebp - 0xc], cx */
L_17107659:
    SET_LO16(eax, MEM16(esi + 0xB6)); /* 0x17107659: mov ax, word ptr [esi + 0xb6] */
    SET_LO16(ecx, MEM16(edi + 0x2)); /* 0x17107660: mov cx, word ptr [edi + 2] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x17107664: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x17107667: mov word ptr [ebp - 0xa], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_17107671; /* 0x1710766B: ja 0x17107671 */
L_1710766D:
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(ecx)); /* 0x1710766D: mov word ptr [ebp - 0xa], cx */
L_17107671:
    SET_LO16(eax, MEM16(esi + 0xB8)); /* 0x17107671: mov ax, word ptr [esi + 0xb8] */
    SET_LO16(ecx, MEM16(edi + 0x4)); /* 0x17107678: mov cx, word ptr [edi + 4] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1710767C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1710767F: mov word ptr [ebp - 8], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_17107689; /* 0x17107683: ja 0x17107689 */
L_17107685:
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(ecx)); /* 0x17107685: mov word ptr [ebp - 8], cx */
L_17107689:
    eax = ebp + (-0xC); /* 0x17107689: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1710768C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1710768D: push dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x17107690: mov ecx, ebx */
    RECOMP_CALL(sub_17104929); /* 0x17107692: call 0x17104929 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107697: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710770A; /* 0x17107699: jl 0x1710770a */
L_1710769B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1710769B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(esi + 0xAC) = ecx; /* 0x1710769E: mov dword ptr [esi + 0xac], ecx */
    SET_LO16(ecx, MEM16(ebp + (-0xC))); /* 0x171076A4: mov cx, word ptr [ebp - 0xc] */
    MEM16(esi + 0xB4) = (uint16_t)(LO16(ecx)); /* 0x171076A8: mov word ptr [esi + 0xb4], cx */
    SET_LO16(ecx, MEM16(ebp + (-0xA))); /* 0x171076AF: mov cx, word ptr [ebp - 0xa] */
    MEM16(esi + 0xB6) = (uint16_t)(LO16(ecx)); /* 0x171076B3: mov word ptr [esi + 0xb6], cx */
    SET_LO16(ecx, MEM16(ebp + (-0x8))); /* 0x171076BA: mov cx, word ptr [ebp - 8] */
    MEM16(esi + 0xB8) = (uint16_t)(LO16(ecx)); /* 0x171076BE: mov word ptr [esi + 0xb8], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171076C5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171076C7:
    /* cmp MEM32(esi + 0x9C), edx */ /* 0x171076C7: cmp dword ptr [esi + 0x9c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x9C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171076DC; /* 0x171076CD: je 0x171076dc */
L_171076CF:
    SET_LO16(ecx, MEM16(esi + 0xBA)); /* 0x171076CF: mov cx, word ptr [esi + 0xba] */
    /* cmp LO16(ecx), MEM16(edi + 0x6) */ /* 0x171076D6: cmp cx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710770A; /* 0x171076DA: jae 0x1710770a */
L_171076DC:
    SET_LO16(eax, MEM16(esi + 0xBA)); /* 0x171076DC: mov ax, word ptr [esi + 0xba] */
    SET_LO16(edi, MEM16(edi + 0x6)); /* 0x171076E3: mov di, word ptr [edi + 6] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x171076E7: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171076EF; /* 0x171076EA: jbe 0x171076ef */
L_171076EC:
    SET_LO16(edi, LO16(eax)); /* 0x171076EC: mov di, ax */
L_171076EF:
    eax = ebp + (-0xC); /* 0x171076EF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171076F2: push eax */
    PUSH32(esp, edx); /* 0x171076F3: push edx */
    ecx = ebx; /* 0x171076F4: mov ecx, ebx */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(edi)); /* 0x171076F6: mov word ptr [ebp - 6], di */
    RECOMP_CALL(sub_17104A5F); /* 0x171076FA: call 0x17104a5f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171076FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710770A; /* 0x17107701: jl 0x1710770a */
L_17107703:
    MEM16(esi + 0xBA) = (uint16_t)(LO16(edi)); /* 0x17107703: mov word ptr [esi + 0xba], di */
L_1710770A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1710770A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1710770D: pop edi */
    esi = POP32_VAL(esp); /* 0x1710770E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710770F: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17107710: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17107715: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17107716: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710771E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710771Eu);

L_1710771E:
    edi = edi; /* 0x1710771E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107720: push ebp */
    ebp = esp; /* 0x17107721: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17107723: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x17107726: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1710772B: push ebx */
    PUSH32(esp, esi); /* 0x1710772C: push esi */
    ebx = ecx; /* 0x1710772D: mov ebx, ecx */
    esi = (uint32_t)MEM16(ebx + 0x5E); /* 0x1710772F: movzx esi, word ptr [ebx + 0x5e] */
    ecx = MEM32(ebx + 0x134); /* 0x17107733: mov ecx, dword ptr [ebx + 0x134] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC4u); /* 0x17107739: imul esi, esi, 0xc4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC4); /* 0x1710773F: add esi, dword ptr [ebx + 0xc4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107745: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17107748: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710774A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 8 */ /* 0x1710774C: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1710774F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17107750: mov edi, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107880; /* 0x17107753: je 0x17107880 */
L_17107759:
    /* test LO8(ecx), 0x10u */ /* 0x17107759: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710783D; /* 0x1710775C: je 0x1710783d */
L_17107762:
    /* cmp MEM32(esi + 0xA8), edx */ /* 0x17107762: cmp dword ptr [esi + 0xa8], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171077A1; /* 0x17107768: je 0x171077a1 */
L_1710776A:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x1710776A: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107777; /* 0x1710776D: je 0x17107777 */
L_1710776F:
    /* cmp MEM32(esi + 0xB0), edx */ /* 0x1710776F: cmp dword ptr [esi + 0xb0], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171077A9; /* 0x17107775: je 0x171077a9 */
L_17107777:
    SET_LO16(ecx, MEM16(esi + 0xBC)); /* 0x17107777: mov cx, word ptr [esi + 0xbc] */
    /* cmp LO16(ecx), MEM16(edi) */ /* 0x1710777E: cmp cx, word ptr [edi] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171077A1; /* 0x17107781: jb 0x171077a1 */
L_17107783:
    SET_LO16(ecx, MEM16(esi + 0xBE)); /* 0x17107783: mov cx, word ptr [esi + 0xbe] */
    /* cmp LO16(ecx), MEM16(edi + 0x2) */ /* 0x1710778A: cmp cx, word ptr [edi + 2] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171077A1; /* 0x1710778E: jb 0x171077a1 */
L_17107790:
    SET_LO16(ecx, MEM16(esi + 0xC0)); /* 0x17107790: mov cx, word ptr [esi + 0xc0] */
    /* cmp LO16(ecx), MEM16(edi + 0x4) */ /* 0x17107797: cmp cx, word ptr [edi + 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710783D; /* 0x1710779B: jae 0x1710783d */
L_171077A1:
    /* cmp MEM32(esi + 0xB0), edx */ /* 0x171077A1: cmp dword ptr [esi + 0xb0], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171077B1; /* 0x171077A7: jne 0x171077b1 */
L_171077A9:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x171077A9: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x171077AC: mov dword ptr [ebp - 0x10], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171077B8; /* 0x171077AF: je 0x171077b8 */
L_171077B1:
    MEM32(ebp + (-0x10)) = 1; /* 0x171077B1: mov dword ptr [ebp - 0x10], 1 */
L_171077B8:
    SET_LO16(eax, MEM16(esi + 0xBC)); /* 0x171077B8: mov ax, word ptr [esi + 0xbc] */
    SET_LO16(ecx, MEM16(edi)); /* 0x171077BF: mov cx, word ptr [edi] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x171077C2: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x171077C5: mov word ptr [ebp - 0xc], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_171077CF; /* 0x171077C9: ja 0x171077cf */
L_171077CB:
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(ecx)); /* 0x171077CB: mov word ptr [ebp - 0xc], cx */
L_171077CF:
    SET_LO16(eax, MEM16(esi + 0xBE)); /* 0x171077CF: mov ax, word ptr [esi + 0xbe] */
    SET_LO16(ecx, MEM16(edi + 0x2)); /* 0x171077D6: mov cx, word ptr [edi + 2] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x171077DA: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x171077DD: mov word ptr [ebp - 0xa], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_171077E7; /* 0x171077E1: ja 0x171077e7 */
L_171077E3:
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(ecx)); /* 0x171077E3: mov word ptr [ebp - 0xa], cx */
L_171077E7:
    SET_LO16(eax, MEM16(esi + 0xC0)); /* 0x171077E7: mov ax, word ptr [esi + 0xc0] */
    SET_LO16(ecx, MEM16(edi + 0x4)); /* 0x171077EE: mov cx, word ptr [edi + 4] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x171077F2: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x171077F5: mov word ptr [ebp - 8], ax */
    if (CMP_A(_flag_a, _flag_b)) goto L_171077FF; /* 0x171077F9: ja 0x171077ff */
L_171077FB:
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(ecx)); /* 0x171077FB: mov word ptr [ebp - 8], cx */
L_171077FF:
    eax = ebp + (-0xC); /* 0x171077FF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x17107802: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x17107803: push dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x17107806: mov ecx, ebx */
    RECOMP_CALL(sub_17104B95); /* 0x17107808: call 0x17104b95 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710780D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107880; /* 0x1710780F: jl 0x17107880 */
L_17107811:
    ecx = MEM32(ebp + (-0x10)); /* 0x17107811: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(esi + 0xB0) = ecx; /* 0x17107814: mov dword ptr [esi + 0xb0], ecx */
    SET_LO16(ecx, MEM16(ebp + (-0xC))); /* 0x1710781A: mov cx, word ptr [ebp - 0xc] */
    MEM16(esi + 0xBC) = (uint16_t)(LO16(ecx)); /* 0x1710781E: mov word ptr [esi + 0xbc], cx */
    SET_LO16(ecx, MEM16(ebp + (-0xA))); /* 0x17107825: mov cx, word ptr [ebp - 0xa] */
    MEM16(esi + 0xBE) = (uint16_t)(LO16(ecx)); /* 0x17107829: mov word ptr [esi + 0xbe], cx */
    SET_LO16(ecx, MEM16(ebp + (-0x8))); /* 0x17107830: mov cx, word ptr [ebp - 8] */
    MEM16(esi + 0xC0) = (uint16_t)(LO16(ecx)); /* 0x17107834: mov word ptr [esi + 0xc0], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1710783B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710783D:
    /* cmp MEM32(esi + 0xA0), edx */ /* 0x1710783D: cmp dword ptr [esi + 0xa0], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xA0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107852; /* 0x17107843: je 0x17107852 */
L_17107845:
    SET_LO16(ecx, MEM16(esi + 0xC2)); /* 0x17107845: mov cx, word ptr [esi + 0xc2] */
    /* cmp LO16(ecx), MEM16(edi + 0x6) */ /* 0x1710784C: cmp cx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_17107880; /* 0x17107850: jae 0x17107880 */
L_17107852:
    SET_LO16(eax, MEM16(esi + 0xC2)); /* 0x17107852: mov ax, word ptr [esi + 0xc2] */
    SET_LO16(edi, MEM16(edi + 0x6)); /* 0x17107859: mov di, word ptr [edi + 6] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1710785D: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107865; /* 0x17107860: jbe 0x17107865 */
L_17107862:
    SET_LO16(edi, LO16(eax)); /* 0x17107862: mov di, ax */
L_17107865:
    eax = ebp + (-0xC); /* 0x17107865: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x17107868: push eax */
    PUSH32(esp, edx); /* 0x17107869: push edx */
    ecx = ebx; /* 0x1710786A: mov ecx, ebx */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(edi)); /* 0x1710786C: mov word ptr [ebp - 6], di */
    RECOMP_CALL(sub_17104CCB); /* 0x17107870: call 0x17104ccb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107880; /* 0x17107877: jl 0x17107880 */
L_17107879:
    MEM16(esi + 0xC2) = (uint16_t)(LO16(edi)); /* 0x17107879: mov word ptr [esi + 0xc2], di */
L_17107880:
    ecx = MEM32(ebp + (-0x4)); /* 0x17107880: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17107883: pop edi */
    esi = POP32_VAL(esp); /* 0x17107884: pop esi */
    ebx = POP32_VAL(esp); /* 0x17107885: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17107886: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710788B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710788C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17107894(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17107894u);

L_17107894:
    edi = edi; /* 0x17107894: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107896: push ebp */
    ebp = esp; /* 0x17107897: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17107899: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1710789C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x1710789F: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x171078A2: mov ecx, dword ptr [ecx] */
    edx = MEM32(ebp + 0xC); /* 0x171078A4: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171078A7: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x171078A8: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x171078AB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171078AD: push esi */
    PUSH32(esp, edi); /* 0x171078AE: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171078AF: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171078B2: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x171078B5: mov dword ptr [ebp - 0x14], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171078C2; /* 0x171078B8: je 0x171078c2 */
L_171078BA:
    ecx = MEM32(ebp + 0x18); /* 0x171078BA: mov ecx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ecx + 0xC); /* 0x171078BD: mov ecx, dword ptr [ecx + 0xc] */
    goto L_171078C4; /* 0x171078C0: jmp 0x171078c4 */
L_171078C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171078C2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171078C4:
    /* test ebx, ebx */ /* 0x171078C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171078D0; /* 0x171078C6: je 0x171078d0 */
L_171078C8:
    esi = ecx + ebx; /* 0x171078C8: lea esi, [ecx + ebx] */
    ecx = (uint32_t)MEM16(esi); /* 0x171078CB: movzx ecx, word ptr [esi] */
    goto L_171078D6; /* 0x171078CE: jmp 0x171078d6 */
L_171078D0:
    ecx = MEM32(eax + 0x4); /* 0x171078D0: mov ecx, dword ptr [eax + 4] */
    esi = MEM32(ebp + 0x10); /* 0x171078D3: mov esi, dword ptr [ebp + 0x10] */
L_171078D6:
    edi = MEM32(ebp + 0x20); /* 0x171078D6: mov edi, dword ptr [ebp + 0x20] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171078D9: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171078E3; /* 0x171078DC: je 0x171078e3 */
L_171078DE:
    MEM32(ebp + 0x8) = edi; /* 0x171078DE: mov dword ptr [ebp + 8], edi */
    goto L_171078F4; /* 0x171078E1: jmp 0x171078f4 */
L_171078E3:
    edi = MEM32(eax + 0x10); /* 0x171078E3: mov edi, dword ptr [eax + 0x10] */
    /* test edi, edi */ /* 0x171078E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edi; /* 0x171078E8: mov dword ptr [ebp + 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171078F4; /* 0x171078EB: jne 0x171078f4 */
L_171078ED:
    MEM32(ebp + 0x8) = 1; /* 0x171078ED: mov dword ptr [ebp + 8], 1 */
L_171078F4:
    /* test ecx, ecx */ /* 0x171078F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107C3D; /* 0x171078F6: jl 0x17107c3d */
L_171078FC:
    /* cmp ecx, 1 */ /* 0x171078FC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17107AE3; /* 0x171078FF: jle 0x17107ae3 */
L_17107905:
    /* cmp ecx, 2 */ /* 0x17107905: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171079AB; /* 0x17107908: je 0x171079ab */
L_1710790E:
    /* cmp ecx, 3 */ /* 0x1710790E: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107AE3; /* 0x17107911: je 0x17107ae3 */
L_17107917:
    /* cmp ecx, 5 */ /* 0x17107917: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x1710791A: jne 0x17107c3d */
L_17107920:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17107920: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17107924: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107930; /* 0x17107926: je 0x17107930 */
L_17107928:
    esi = MEM32(esi + 0xC); /* 0x17107928: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x1710792B: add esi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x1710792D: mov dword ptr [ebp - 8], esi */
L_17107930:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x17107930: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17107934: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(eax + 0x14); /* 0x17107938: mov edi, dword ptr [eax + 0x14] */
    ebx = eax + 0x18; /* 0x1710793B: lea ebx, [eax + 0x18] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x1710793E: jbe 0x17107c3d */
L_17107944:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x17107944: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107948: je 0x17107c3d */
L_1710794E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x1710794E: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17107952: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x17107954: mov dword ptr [ebp - 0x10], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710799B; /* 0x17107957: jbe 0x1710799b */
L_17107959:
    esi = MEM32(ebp + (-0x8)); /* 0x17107959: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1710795C: add esi, 4 */
    _flag_k = FK_ADD;
L_1710795F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1710795F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710799B; /* 0x17107963: je 0x1710799b */
L_17107965:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17107965: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107970; /* 0x17107969: je 0x17107970 */
L_1710796B:
    eax = MEM32(esi); /* 0x1710796B: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1710796D: mov dword ptr [ebp - 0xc], eax */
L_17107970:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17107970: push -1 */
    eax = ebp + 0x10; /* 0x17107972: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17107975: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17107976: push dword ptr [ebp - 0xc] */
    eax = ebp + 0xC; /* 0x17107979: lea eax, [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1710797C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1710797F: push eax */
    eax = ebp + (-0x4); /* 0x17107980: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17107983: push eax */
    eax = ebp + (-0x10); /* 0x17107984: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17107987: push eax */
    RECOMP_CALL(sub_17104E01); /* 0x17107988: call 0x17104e01 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x1710798D: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + 0xC); /* 0x17107990: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x17107993: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17107996: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710795F; /* 0x17107999: jb 0x1710795f */
L_1710799B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x1710799B: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x20); /* 0x1710799E: mov eax, dword ptr [ebp + 0x20] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x171079A1: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107944; /* 0x171079A4: jb 0x17107944 */
L_171079A6:
    goto L_17107C3D; /* 0x171079A6: jmp 0x17107c3d */
L_171079AB:
    ecx = MEM32(eax + 0x14); /* 0x171079AB: mov ecx, dword ptr [eax + 0x14] */
    MEM32(ebp + 0x18) = ecx; /* 0x171079AE: mov dword ptr [ebp + 0x18], ecx */
    ecx = MEM32(eax + 0x18); /* 0x171079B1: mov ecx, dword ptr [eax + 0x18] */
    eax = MEM32(eax); /* 0x171079B4: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171079B6: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = ecx; /* 0x171079B7: mov dword ptr [ebp + 0x14], ecx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107A87; /* 0x171079BA: je 0x17107a87 */
L_171079C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171079C0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107A2B; /* 0x171079C1: je 0x17107a2b */
L_171079C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171079C3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x171079C4: jne 0x17107c3d */
L_171079CA:
    eax = MEM32(ebp + (-0x4)); /* 0x171079CA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171079CD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171079D1: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edx; /* 0x171079D5: mov esi, edx */
    edx = MEM32(ebp + 0x10); /* 0x171079D7: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x20) = eax; /* 0x171079DA: mov dword ptr [ebp + 0x20], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107A24; /* 0x171079DD: jbe 0x17107a24 */
L_171079DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171079DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x171079E1: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107A24; /* 0x171079E3: je 0x17107a24 */
L_171079E5:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x171079E5: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107A15; /* 0x171079E8: jbe 0x17107a15 */
L_171079EA:
    ebx = MEM32(ebp + 0x20); /* 0x171079EA: mov ebx, dword ptr [ebp + 0x20] */
L_171079ED:
    /* test edx, edx */ /* 0x171079ED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107A15; /* 0x171079EF: je 0x17107a15 */
L_171079F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171079F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171079F3: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107A08; /* 0x171079F6: jbe 0x17107a08 */
L_171079F8:
    ecx = ebx; /* 0x171079F8: mov ecx, ebx */
L_171079FA:
    fp_push(*(float*)&MEM32(ecx)); /* 0x171079FA: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x171079FC: add ecx, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + eax * 4) = _v; } /* 0x171079FF: fstp dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107A02: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17107A03: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171079FA; /* 0x17107A06: jb 0x171079fa */
L_17107A08:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x17107A08: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17107A0B: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107A0C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x17107A0D: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0x18) */ /* 0x17107A10: cmp edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171079ED; /* 0x17107A13: jb 0x171079ed */
L_17107A15:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 0x40u; /* 0x17107A15: add dword ptr [ebp + 0x20], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17107A19: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x17107A1C: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17107A1F: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171079DF; /* 0x17107A22: jb 0x171079df */
L_17107A24:
    edx = esi; /* 0x17107A24: mov edx, esi */
    goto L_17107C3D; /* 0x17107A26: jmp 0x17107c3d */
L_17107A2B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x17107A2B: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17107A2F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x17107A33: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107A36: jbe 0x17107c3d */
L_17107A3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107A3C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x17107A3E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107A40: je 0x17107c3d */
L_17107A46:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17107A46: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107A77; /* 0x17107A49: jbe 0x17107a77 */
L_17107A4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107A4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x17107A4D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107A77; /* 0x17107A4F: je 0x17107a77 */
L_17107A51:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x17107A51: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107A6D; /* 0x17107A54: jbe 0x17107a6d */
L_17107A56:
    ecx = edi; /* 0x17107A56: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17107A58: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17107A58: shl ecx, 2 */
L_17107A5B:
    ebx = MEM32(ebp + (-0x4)); /* 0x17107A5B: mov ebx, dword ptr [ebp - 4] */
    fp_push((double)(int32_t)MEM32(ecx + ebx)); /* 0x17107A5E: fild dword ptr [ecx + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x17107A61: add ecx, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax * 4) = _v; } /* 0x17107A64: fstp dword ptr [edx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107A67: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17107A68: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107A5B; /* 0x17107A6B: jb 0x17107a5b */
L_17107A6D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17107A6D: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107A70: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107A71: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x18) */ /* 0x17107A72: cmp edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107A4B; /* 0x17107A75: jb 0x17107a4b */
L_17107A77:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x17107A77: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x20); /* 0x17107A7A: mov eax, dword ptr [ebp + 0x20] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17107A7D: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107A3C; /* 0x17107A80: jb 0x17107a3c */
L_17107A82:
    goto L_17107C3D; /* 0x17107A82: jmp 0x17107c3d */
L_17107A87:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & 0; /* 0x17107A87: and dword ptr [ebp + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17107A8B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x17107A8F: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107A92: jbe 0x17107c3d */
L_17107A98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107A98: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x17107A9A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107A9C: je 0x17107c3d */
L_17107AA2:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17107AA2: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107AD3; /* 0x17107AA5: jbe 0x17107ad3 */
L_17107AA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x17107AA9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107AD3; /* 0x17107AAB: je 0x17107ad3 */
L_17107AAD:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x17107AAD: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107AC9; /* 0x17107AB0: jbe 0x17107ac9 */
L_17107AB2:
    ecx = edi; /* 0x17107AB2: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17107AB4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17107AB4: shl ecx, 2 */
L_17107AB7:
    ebx = MEM32(ebp + (-0x4)); /* 0x17107AB7: mov ebx, dword ptr [ebp - 4] */
    fp_push((double)(int32_t)MEM32(ecx + ebx)); /* 0x17107ABA: fild dword ptr [ecx + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x17107ABD: add ecx, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax * 4) = _v; } /* 0x17107AC0: fstp dword ptr [edx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107AC3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17107AC4: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107AB7; /* 0x17107AC7: jb 0x17107ab7 */
L_17107AC9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17107AC9: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107ACC: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107ACD: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x18) */ /* 0x17107ACE: cmp edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107AA7; /* 0x17107AD1: jb 0x17107aa7 */
L_17107AD3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1; /* 0x17107AD3: inc dword ptr [ebp + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x20); /* 0x17107AD6: mov eax, dword ptr [ebp + 0x20] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17107AD9: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107A98; /* 0x17107ADC: jb 0x17107a98 */
L_17107ADE:
    goto L_17107C3D; /* 0x17107ADE: jmp 0x17107c3d */
L_17107AE3:
    edi = MEM32(eax + 0x14); /* 0x17107AE3: mov edi, dword ptr [eax + 0x14] */
    esi = MEM32(eax); /* 0x17107AE6: mov esi, dword ptr [eax] */
    eax = MEM32(eax + 0x18); /* 0x17107AE8: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17107AEB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x17107AED: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = edi; /* 0x17107AF0: mov dword ptr [ebp + 0x18], edi */
    MEM32(ebp + 0x14) = eax; /* 0x17107AF3: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + 0x20) = ebx; /* 0x17107AF6: mov dword ptr [ebp + 0x20], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17107B06; /* 0x17107AF9: jne 0x17107b06 */
L_17107AFB:
    PUSH32(esp, 4); /* 0x17107AFB: push 4 */
    ebx = POP32_VAL(esp); /* 0x17107AFD: pop ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x17107AFE: sub ebx, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x17107B00: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x17107B00: shl ebx, 2 */
    MEM32(ebp + 0x20) = ebx; /* 0x17107B03: mov dword ptr [ebp + 0x20], ebx */
L_17107B06:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107B06: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107BDA; /* 0x17107B07: je 0x17107bda */
L_17107B0D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107B0D: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107B6F; /* 0x17107B0E: je 0x17107b6f */
L_17107B10:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107B10: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107B11: jne 0x17107c3d */
L_17107B17:
    esi = MEM32(ebp + 0x10); /* 0x17107B17: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17107B1A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107B1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17107B1F: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107B22: jbe 0x17107c3d */
L_17107B28:
    /* test esi, esi */ /* 0x17107B28: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107C3D; /* 0x17107B2A: je 0x17107c3d */
L_17107B30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107B30: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17107B32: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107B5E; /* 0x17107B35: jbe 0x17107b5e */
L_17107B37:
    /* test esi, esi */ /* 0x17107B37: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107B5E; /* 0x17107B39: je 0x17107b5e */
L_17107B3B:
    ebx = MEM32(ecx); /* 0x17107B3B: mov ebx, dword ptr [ecx] */
    MEM32(edx) = ebx; /* 0x17107B3D: mov dword ptr [edx], ebx */
    ebx = MEM32(ecx + 0x4); /* 0x17107B3F: mov ebx, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = ebx; /* 0x17107B42: mov dword ptr [edx + 4], ebx */
    ebx = MEM32(ecx + 0x8); /* 0x17107B45: mov ebx, dword ptr [ecx + 8] */
    MEM32(edx + 0x8) = ebx; /* 0x17107B48: mov dword ptr [edx + 8], ebx */
    ebx = MEM32(ecx + 0xC); /* 0x17107B4B: mov ebx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17107B4E: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x17107B51: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x4)) = ebx; /* 0x17107B54: mov dword ptr [edx - 4], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17107B57: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107B58: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x17107B59: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107B37; /* 0x17107B5C: jb 0x17107b37 */
L_17107B5E:
    edi = MEM32(ebp + 0x20); /* 0x17107B5E: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107B61: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17107B62: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + edi * 4; /* 0x17107B65: lea ecx, [ecx + edi*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107B28; /* 0x17107B68: jb 0x17107b28 */
L_17107B6A:
    goto L_17107C3D; /* 0x17107B6A: jmp 0x17107c3d */
L_17107B6F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17107B6F: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17107B73: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x17107B77: mov edi, dword ptr [ebp + 0x10] */
    eax = edx; /* 0x17107B7A: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x17107B7C: mov edx, dword ptr [ebp - 4] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3B; /* 0x17107B7F: jbe 0x17107c3b */
L_17107B85:
    /* test edi, edi */ /* 0x17107B85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107C3B; /* 0x17107B87: je 0x17107c3b */
L_17107B8D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17107B8D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17107B91: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107BCA; /* 0x17107B95: jbe 0x17107bca */
L_17107B97:
    /* test edi, edi */ /* 0x17107B97: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107BCA; /* 0x17107B99: je 0x17107bca */
L_17107B9B:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x17107B9B: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107BB8; /* 0x17107B9F: jbe 0x17107bb8 */
L_17107BA1:
    ebx = MEM32(ebp + 0x18); /* 0x17107BA1: mov ebx, dword ptr [ebp + 0x18] */
    esi = edx; /* 0x17107BA4: mov esi, edx */
    ecx = eax; /* 0x17107BA6: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x17107BA8: sub esi, eax */
    _flag_k = FK_CMP;
L_17107BAA:
    fp_push((double)(int32_t)MEM32(esi + ecx)); /* 0x17107BAA: fild dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17107BAD: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17107BAF: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17107BB2: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107BAA; /* 0x17107BB3: jne 0x17107baa */
L_17107BB5:
    ebx = MEM32(ebp + 0x20); /* 0x17107BB5: mov ebx, dword ptr [ebp + 0x20] */
L_17107BB8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17107BB8: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17107BBB: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17107BBE: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17107BBF: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x8)); /* 0x17107BC2: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x17107BC5: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107B97; /* 0x17107BC8: jb 0x17107b97 */
L_17107BCA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17107BCA: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x17107BCD: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x17107BD0: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = edx + ebx * 4; /* 0x17107BD3: lea edx, [edx + ebx*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107B85; /* 0x17107BD6: jb 0x17107b85 */
L_17107BD8:
    goto L_17107C3B; /* 0x17107BD8: jmp 0x17107c3b */
L_17107BDA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17107BDA: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17107BDE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x17107BE2: mov edi, dword ptr [ebp + 0x10] */
    eax = edx; /* 0x17107BE5: mov eax, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x17107BE7: mov edx, dword ptr [ebp - 4] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C3B; /* 0x17107BEA: jbe 0x17107c3b */
L_17107BEC:
    /* test edi, edi */ /* 0x17107BEC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107C3B; /* 0x17107BEE: je 0x17107c3b */
L_17107BF0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17107BF0: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17107BF4: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C2D; /* 0x17107BF8: jbe 0x17107c2d */
L_17107BFA:
    /* test edi, edi */ /* 0x17107BFA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107C2D; /* 0x17107BFC: je 0x17107c2d */
L_17107BFE:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x17107BFE: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107C1B; /* 0x17107C02: jbe 0x17107c1b */
L_17107C04:
    ebx = MEM32(ebp + 0x18); /* 0x17107C04: mov ebx, dword ptr [ebp + 0x18] */
    esi = edx; /* 0x17107C07: mov esi, edx */
    ecx = eax; /* 0x17107C09: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x17107C0B: sub esi, eax */
    _flag_k = FK_CMP;
L_17107C0D:
    fp_push((double)(int32_t)MEM32(esi + ecx)); /* 0x17107C0D: fild dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17107C10: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17107C12: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x17107C15: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107C0D; /* 0x17107C16: jne 0x17107c0d */
L_17107C18:
    ebx = MEM32(ebp + 0x20); /* 0x17107C18: mov ebx, dword ptr [ebp + 0x20] */
L_17107C1B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x17107C1B: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17107C1E: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17107C21: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17107C22: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x17107C25: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x17107C28: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107BFA; /* 0x17107C2B: jb 0x17107bfa */
L_17107C2D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17107C2D: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x8)); /* 0x17107C30: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x17107C33: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = edx + ebx * 4; /* 0x17107C36: lea edx, [edx + ebx*4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107BEC; /* 0x17107C39: jb 0x17107bec */
L_17107C3B:
    edx = eax; /* 0x17107C3B: mov edx, eax */
L_17107C3D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x14)); /* 0x17107C3D: sub edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x17107C40: mov eax, dword ptr [ebp + 0x1c] */
    edi = POP32_VAL(esp); /* 0x17107C43: pop edi */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x17107C44: shr edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 4u; /* 0x17107C44: shr edx, 4 */
    esi = POP32_VAL(esp); /* 0x17107C47: pop esi */
    MEM32(eax) = edx; /* 0x17107C48: mov dword ptr [eax], edx */
    ebx = POP32_VAL(esp); /* 0x17107C4A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17107C4B: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17107C4C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17107C54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17107C54u);

L_17107C54:
    edi = edi; /* 0x17107C54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107C56: push ebp */
    ebp = esp; /* 0x17107C57: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17107C59: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17107C5C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17107C60: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17107C61: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x8); /* 0x17107C64: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x17107C67: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebx + 0xC); /* 0x17107C6A: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebx + 0x8) = eax; /* 0x17107C6D: mov dword ptr [ebx + 8], eax */
    PUSH32(esp, esi); /* 0x17107C70: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17107C71: mov esi, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x17107C74: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x17107C76: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x17107C79: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x17107C7B: mov ecx, esi */
    PUSH32(esp, edi); /* 0x17107C7D: push edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17107C7E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107C80: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17107C81: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x17107C84: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17107C87: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17107C87: shl eax, 1 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (LO8(ecx)) != 0;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx))); /* 0x17107C89: neg cl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17107C8B: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17107C8D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x17107C8E: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17107C91: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17107C93: mov ecx, esi */
    esi = (uint32_t)MEM16(ebx + 0x5E); /* 0x17107C95: movzx esi, word ptr [ebx + 0x5e] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x17107C99: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x17107C99: shl ecx, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC4u); /* 0x17107C9C: imul esi, esi, 0xc4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebx + 0xC4); /* 0x17107CA2: add esi, dword ptr [ebx + 0xc4] */
    _flag_k = FK_ADD;
    ecx = ~ecx; /* 0x17107CA8: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    ecx = ecx & 8; /* 0x17107CAA: and ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x17107CAD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x17107CAD: shl eax, 4 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17107CB0: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x134); /* 0x17107CB2: mov ecx, dword ptr [ebx + 0x134] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFC7u);
    ecx = ecx & 0xFFFFFFC7u; /* 0x17107CB8: and ecx, 0xffffffc7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17107CBB: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 8 */ /* 0x17107CBD: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebx + 0x134) = eax; /* 0x17107CBF: mov dword ptr [ebx + 0x134], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107E45; /* 0x17107CC5: je 0x17107e45 */
L_17107CCB:
    eax = esi + 0xB4; /* 0x17107CCB: lea eax, [esi + 0xb4] */
    PUSH32(esp, eax); /* 0x17107CD1: push eax */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x17107CD2: push dword ptr [esi + 0xac] */
    ecx = ebx; /* 0x17107CD8: mov ecx, ebx */
    RECOMP_CALL(sub_171075A8); /* 0x17107CDA: call 0x171075a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107CDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107CE1: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107CE4: jl 0x17107e80 */
L_17107CEA:
    eax = esi + 0xBC; /* 0x17107CEA: lea eax, [esi + 0xbc] */
    PUSH32(esp, eax); /* 0x17107CF0: push eax */
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x17107CF1: push dword ptr [esi + 0xb0] */
    ecx = ebx; /* 0x17107CF7: mov ecx, ebx */
    RECOMP_CALL(sub_1710771E); /* 0x17107CF9: call 0x1710771e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107CFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107D00: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107D03: jl 0x17107e80 */
L_17107D09:
    /* test MEM8(ebx + 0x134), 0x10u */ /* 0x17107D09: test byte ptr [ebx + 0x134], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x134)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107D40; /* 0x17107D10: je 0x17107d40 */
L_17107D12:
    eax = MEM32(esi + 0xA4); /* 0x17107D12: mov eax, dword ptr [esi + 0xa4] */
    ecx = MEM32(eax); /* 0x17107D18: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107D1A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17107D1B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107D1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107D20: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107D23: jl 0x17107e80 */
L_17107D29:
    eax = MEM32(esi + 0xA8); /* 0x17107D29: mov eax, dword ptr [esi + 0xa8] */
    ecx = MEM32(eax); /* 0x17107D2F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107D31: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17107D32: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107D35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107D37: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107D3A: jl 0x17107e80 */
L_17107D40:
    /* test MEM8(ebx + 0x134), 0x20u */ /* 0x17107D40: test byte ptr [ebx + 0x134], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x134)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107D77; /* 0x17107D47: je 0x17107d77 */
L_17107D49:
    eax = MEM32(esi + 0x9C); /* 0x17107D49: mov eax, dword ptr [esi + 0x9c] */
    ecx = MEM32(eax); /* 0x17107D4F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107D51: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17107D52: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107D55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107D57: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107D5A: jl 0x17107e80 */
L_17107D60:
    eax = MEM32(esi + 0xA0); /* 0x17107D60: mov eax, dword ptr [esi + 0xa0] */
    ecx = MEM32(eax); /* 0x17107D66: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107D68: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17107D69: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107D6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107D6E: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107D71: jl 0x17107e80 */
L_17107D77:
    /* cmp MEM32(esi + 0x98), 0 */ /* 0x17107D77: cmp dword ptr [esi + 0x98], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17107E32; /* 0x17107D7E: jne 0x17107e32 */
L_17107D84:
    eax = MEM32(ebx + 0xC); /* 0x17107D84: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17107D87: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0xC); /* 0x17107D8A: lea eax, [ebp - 0xc] */
    MEM32(ebx + 0x8) = eax; /* 0x17107D8D: mov dword ptr [ebx + 8], eax */
    PUSH32(esp, 0x11u); /* 0x17107D90: push 0x11 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107D92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17107D94: pop ecx */
    edi = esi + 0x4C; /* 0x17107D95: lea edi, [esi + 0x4c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17107D98: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x17107D9A: movzx ecx, word ptr [esi + 0x44] */
    edi = MEM32(esi + 0x48); /* 0x17107D9E: mov edi, dword ptr [esi + 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68u); /* 0x17107DA1: imul ecx, ecx, 0x68 */
    edx = ecx; /* 0x17107DA4: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17107DA6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17107DA6: shr ecx, 2 */
    MEM32(ebp + (-0xC)) = 0x17016100u; /* 0x17107DA9: mov dword ptr [ebp - 0xc], 0x17016100 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17107DB0: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x17107DB2: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17107DB4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17107DB7: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebx + 0xC); /* 0x17107DB9: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x17107DBC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107DBE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x17107DBF: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107DC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107DC7: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107DCA: jl 0x17107e80 */
L_17107DD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107DD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17107DD2: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x17107DD3: push eax */
    MEM32(ebx + 0x58) = eax; /* 0x17107DD4: mov dword ptr [ebx + 0x58], eax */
    RECOMP_CALL(sub_1702BB20); /* 0x17107DD7: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17107DDC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x38), edi */ /* 0x17107DDE: cmp dword ptr [esi + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17107DFC; /* 0x17107DE1: jbe 0x17107dfc */
L_17107DE3:
    eax = MEM32(ebx); /* 0x17107DE3: mov eax, dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x17107DE5: push edi */
    PUSH32(esp, ebx); /* 0x17107DE6: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x100)); /* 0x17107DE7: call dword ptr [eax + 0x100] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x17107DED: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x17107DEF: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x108)); /* 0x17107DF0: call dword ptr [eax + 0x108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17107DF6: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x38) */ /* 0x17107DF7: cmp edi, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17107DE3; /* 0x17107DFA: jb 0x17107de3 */
L_17107DFC:
    PUSH32(esp, 0); /* 0x17107DFC: push 0 */
    RECOMP_CALL(sub_1702BB20); /* 0x17107DFE: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x17107E03: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x17107E06: mov ecx, dword ptr [eax] */
    edi = esi + 0x98; /* 0x17107E08: lea edi, [esi + 0x98] */
    PUSH32(esp, edi); /* 0x17107E0E: push edi */
    PUSH32(esp, eax); /* 0x17107E0F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF4)); /* 0x17107E10: call dword ptr [ecx + 0xf4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107E16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107E18: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17107E2E; /* 0x17107E1B: jge 0x17107e2e */
L_17107E1D:
    eax = MEM32(edi); /* 0x17107E1D: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x17107E1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107E80; /* 0x17107E21: je 0x17107e80 */
L_17107E23:
    ecx = MEM32(eax); /* 0x17107E23: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107E25: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17107E26: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x17107E29: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17107E80; /* 0x17107E2C: jmp 0x17107e80 */
L_17107E2E:
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) & 0; /* 0x17107E2E: and dword ptr [ebx + 0x58], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17107E32:
    eax = MEM32(esi + 0x98); /* 0x17107E32: mov eax, dword ptr [esi + 0x98] */
    ecx = MEM32(eax); /* 0x17107E38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17107E3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17107E3B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17107E3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17107E40: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17107E80; /* 0x17107E43: jl 0x17107e80 */
L_17107E45:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x17107E45: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107E6D; /* 0x17107E49: je 0x17107e6d */
L_17107E4B:
    PUSH32(esp, 0x11u); /* 0x17107E4B: push 0x11 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107E4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17107E4F: pop ecx */
    edi = esi + 0x4C; /* 0x17107E50: lea edi, [esi + 0x4c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17107E53: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x17107E55: movzx ecx, word ptr [esi + 0x44] */
    edi = MEM32(esi + 0x48); /* 0x17107E59: mov edi, dword ptr [esi + 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68u); /* 0x17107E5C: imul ecx, ecx, 0x68 */
    edx = ecx; /* 0x17107E5F: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17107E61: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17107E61: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17107E64: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x17107E66: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17107E68: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17107E6B: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_17107E6D:
    eax = MEM32(ebp + 0xC); /* 0x17107E6D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17107E70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107E79; /* 0x17107E72: je 0x17107e79 */
L_17107E74:
    ecx = MEM32(esi + 0x38); /* 0x17107E74: mov ecx, dword ptr [esi + 0x38] */
    MEM32(eax) = ecx; /* 0x17107E77: mov dword ptr [eax], ecx */
L_17107E79:
    MEM32(ebx + 0x58) = 4; /* 0x17107E79: mov dword ptr [ebx + 0x58], 4 */
L_17107E80:
    eax = MEM32(ebp + 0x8); /* 0x17107E80: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x17107E83: pop edi */
    MEM32(ebx + 0x8) = eax; /* 0x17107E84: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17107E87: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x17107E8A: pop esi */
    ebx = POP32_VAL(esp); /* 0x17107E8B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17107E8C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17107E8D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17107E95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17107E95u);

L_17107E95:
    edi = edi; /* 0x17107E95: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17107E97: push ebp */
    ebp = esp; /* 0x17107E98: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17107E9A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17107E9D: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17107E9E: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + 0x2C); /* 0x17107EA1: mov eax, dword ptr [ebx + 0x2c] */
    /* test HI8(eax), 1 */ /* 0x17107EA4: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x17107EA7: push esi */
    esi = ecx; /* 0x17107EA8: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x17107EAA: mov dword ptr [ebp - 4], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710833C; /* 0x17107EAD: jne 0x1710833c */
L_17107EB3:
    /* test LO8(eax), 4 */ /* 0x17107EB3: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebx + 0x4); /* 0x17107EB5: mov edx, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x17107EB8: push edi */
    MEM32(ebp + 0xC) = edx; /* 0x17107EB9: mov dword ptr [ebp + 0xc], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17107ED6; /* 0x17107EBC: je 0x17107ed6 */
L_17107EBE:
    ecx = MEM32(ebx + 0x5C); /* 0x17107EBE: mov ecx, dword ptr [ebx + 0x5c] */
    esi = MEM32(ebx + 0x58); /* 0x17107EC1: mov esi, dword ptr [ebx + 0x58] */
    edi = MEM32(ebx); /* 0x17107EC4: mov edi, dword ptr [ebx] */
    eax = ecx; /* 0x17107EC6: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17107EC8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17107EC8: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17107ECB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17107ECD: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17107ECF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17107ED2: rep movsb byte ptr es:[edi], byte ptr [esi] */
    goto L_17107EFA; /* 0x17107ED4: jmp 0x17107efa */
L_17107ED6:
    /* cmp MEM32(ebx + 0x34), 0 */ /* 0x17107ED6: cmp dword ptr [ebx + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107EFD; /* 0x17107EDA: je 0x17107efd */
L_17107EDC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17107EDC: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17107EDF: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x17107EE2: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17107EE3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171052C8); /* 0x17107EE6: call 0x171052c8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x17107EEB: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x17107EEE: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17107EEF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1710284B); /* 0x17107EF2: call 0x1710284b */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x17107EF7: mov edx, dword ptr [ebp + 0xc] */
L_17107EFA:
    esi = MEM32(ebp + (-0x4)); /* 0x17107EFA: mov esi, dword ptr [ebp - 4] */
L_17107EFD:
    eax = MEM32(ebx); /* 0x17107EFD: mov eax, dword ptr [ebx] */
    edi = MEM32(ebx + 0x64); /* 0x17107EFF: mov edi, dword ptr [ebx + 0x64] */
    ecx = MEM32(edx); /* 0x17107F02: mov ecx, dword ptr [edx] */
    MEM32(ebp + 0x8) = eax; /* 0x17107F04: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)MEM16(ebx + 0x4E); /* 0x17107F07: movzx eax, word ptr [ebx + 0x4e] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17107F0B: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17107F0B: shl eax, 5 */
    ebx = MEM32(eax + 0x17014834); /* 0x17107F0E: mov ebx, dword ptr [eax + 0x17014834] */
    /* cmp ebx, 3 */ /* 0x17107F14: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x17107F17: mov dword ptr [ebp + 0xc], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108141; /* 0x17107F1A: je 0x17108141 */
L_17107F20:
    /* cmp ebx, 0x00F20000u */ /* 0x17107F20: cmp ebx, 0xf20000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00F20000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17107F3E; /* 0x17107F26: je 0x17107f3e */
L_17107F28:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17107F28: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710833B; /* 0x17107F2C: jl 0x1710833b */
L_17107F32:
    MEM32(esi + 0x28) = 0x80004005u; /* 0x17107F32: mov dword ptr [esi + 0x28], 0x80004005 */
    goto L_1710833B; /* 0x17107F39: jmp 0x1710833b */
L_17107F3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17107F3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17107F40: dec ecx */
    _flag_k = FK_DEC;
    edi = ebp + (-0x14); /* 0x17107F41: lea edi, [ebp - 0x14] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17107F44: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17107F45: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17107F46: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x17107F47: stosd dword ptr es:[edi], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108060; /* 0x17107F48: je 0x17108060 */
L_17107F4E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17107F4E: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108030; /* 0x17107F4F: je 0x17108030 */
L_17107F55:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17107F55: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17107F71; /* 0x17107F56: je 0x17107f71 */
L_17107F58:
    eax = MEM32(ebp + (-0x4)); /* 0x17107F58: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x17107F5B: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710833B; /* 0x17107F5F: jl 0x1710833b */
L_17107F65:
    MEM32(eax + 0x28) = 0x80004005u; /* 0x17107F65: mov dword ptr [eax + 0x28], 0x80004005 */
    goto L_1710833B; /* 0x17107F6C: jmp 0x1710833b */
L_17107F71:
    edx = MEM32(edx + 0x14); /* 0x17107F71: mov edx, dword ptr [edx + 0x14] */
    /* cmp edx, 1 */ /* 0x17107F74: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17107F8D; /* 0x17107F77: jne 0x17107f8d */
L_17107F79:
    eax = MEM32(ebp + 0x8); /* 0x17107F79: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17107F7C: fld dword ptr [eax] */
    RECOMP_CALL(sub_1721B050); /* 0x17107F7E: call 0x1721b050 */
    RECOMP_FLAGS_IN();
L_17107F83:
    ecx = MEM32(ebp + 0xC); /* 0x17107F83: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x17107F86: mov dword ptr [ecx], eax */
    goto L_1710833B; /* 0x17107F88: jmp 0x1710833b */
L_17107F8D:
    PUSH32(esp, 4); /* 0x17107F8D: push 4 */
    ecx = POP32_VAL(esp); /* 0x17107F8F: pop ecx */
    /* cmp edx, ecx */ /* 0x17107F90: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17107F96; /* 0x17107F92: ja 0x17107f96 */
L_17107F94:
    ecx = edx; /* 0x17107F94: mov ecx, edx */
L_17107F96:
    /* test ecx, ecx */ /* 0x17107F96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108098; /* 0x17107F98: jbe 0x17108098 */
L_17107F9E:
    esi = MEM32(ebp + 0x8); /* 0x17107F9E: mov esi, dword ptr [ebp + 8] */
    edi = ebp + (-0x14); /* 0x17107FA1: lea edi, [ebp - 0x14] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17107FA4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_17108098; /* 0x17107FA6: jmp 0x17108098 */
L_17107FAB:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17107FAB: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17107FAE: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17107FB4: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17107FBA: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x17107FBF: mov dword ptr [ebp + 8], eax */
L_17107FC2:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17107FC2: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17107FC5: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17107FC7: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17107FC9: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17107FD5; /* 0x17107FCC: jne 0x17107fd5 */
L_17107FCE:
    ebx = esi; /* 0x17107FCE: mov ebx, esi */
    goto L_171080EC; /* 0x17107FD0: jmp 0x171080ec */
L_17107FD5:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17107FD5: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17107FD8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17107FDA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17107FDC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171080D6; /* 0x17107FDF: jp 0x171080d6 */
L_17107FE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17107FE5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171080EC; /* 0x17107FE7: jmp 0x171080ec */
L_17107FEC:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17107FEC: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x17107FEF: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17107FF5: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17107FFB: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17108000: mov edi, eax */
L_17108002:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17108002: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17108005: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17108007: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17108009: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108015; /* 0x1710800C: jne 0x17108015 */
L_1710800E:
    eax = esi; /* 0x1710800E: mov eax, esi */
    goto L_1710812C; /* 0x17108010: jmp 0x1710812c */
L_17108015:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17108015: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17108018: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1710801E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17108020: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17108118; /* 0x17108023: jp 0x17108118 */
L_17108029:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17108029: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1710812C; /* 0x1710802B: jmp 0x1710812c */
L_17108030:
    edx = MEM32(edx + 0x14); /* 0x17108030: mov edx, dword ptr [edx + 0x14] */
    /* cmp edx, 1 */ /* 0x17108033: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108068; /* 0x17108036: je 0x17108068 */
L_17108038:
    /* cmp edx, 4 */ /* 0x17108038: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108040; /* 0x1710803B: jbe 0x17108040 */
L_1710803D:
    PUSH32(esp, 4); /* 0x1710803D: push 4 */
    edx = POP32_VAL(esp); /* 0x1710803F: pop edx */
L_17108040:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17108040: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x17108042: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108098; /* 0x17108044: jbe 0x17108098 */
L_17108046:
    ecx = MEM32(ebp + 0x8); /* 0x17108046: mov ecx, dword ptr [ebp + 8] */
    esi = ebp + (-0x14); /* 0x17108049: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1710804C: sub ecx, esi */
    _flag_k = FK_CMP;
L_1710804E:
    esi = ecx + eax * 4; /* 0x1710804E: lea esi, [ecx + eax*4] */
    fp_push((double)(int32_t)MEM32(ebp + esi + (-0x14))); /* 0x17108051: fild dword ptr [ebp + esi - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17108055: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x17108056: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x18)) = _v; } /* 0x17108058: fstp dword ptr [ebp + eax*4 - 0x18] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710804E; /* 0x1710805C: jb 0x1710804e */
L_1710805E:
    goto L_17108098; /* 0x1710805E: jmp 0x17108098 */
L_17108060:
    edx = MEM32(edx + 0x14); /* 0x17108060: mov edx, dword ptr [edx + 0x14] */
    /* cmp edx, 1 */ /* 0x17108063: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108072; /* 0x17108066: jne 0x17108072 */
L_17108068:
    eax = MEM32(ebp + 0x8); /* 0x17108068: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1710806B: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_17107F83; /* 0x1710806D: jmp 0x17107f83 */
L_17108072:
    /* cmp edx, 4 */ /* 0x17108072: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710807A; /* 0x17108075: jbe 0x1710807a */
L_17108077:
    PUSH32(esp, 4); /* 0x17108077: push 4 */
    edx = POP32_VAL(esp); /* 0x17108079: pop edx */
L_1710807A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710807A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1710807C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108098; /* 0x1710807E: jbe 0x17108098 */
L_17108080:
    ecx = MEM32(ebp + 0x8); /* 0x17108080: mov ecx, dword ptr [ebp + 8] */
    esi = ebp + (-0x14); /* 0x17108083: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x17108086: sub ecx, esi */
    _flag_k = FK_CMP;
L_17108088:
    esi = ecx + eax * 4; /* 0x17108088: lea esi, [ecx + eax*4] */
    fp_push((double)(int32_t)MEM32(ebp + esi + (-0x14))); /* 0x1710808B: fild dword ptr [ebp + esi - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710808F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x17108090: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x18)) = _v; } /* 0x17108092: fstp dword ptr [ebp + eax*4 - 0x18] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17108088; /* 0x17108096: jb 0x17108088 */
L_17108098:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17108098: fld dword ptr [0x17001424] */
    esi = 0xFFu; /* 0x1710809E: mov esi, 0xff */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171080A3: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171080A6: fcomp st(1) */
    fp_pop();
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171080A8: fld dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171080AE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171080B0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171080BD; /* 0x171080B3: jne 0x171080bd */
L_171080B5:
    MEM32(ebp + 0x8) = esi; /* 0x171080B5: mov dword ptr [ebp + 8], esi */
    RECOMP_BACKEDGE();
    goto L_17107FC2; /* 0x171080B8: jmp 0x17107fc2 */
L_171080BD:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171080BD: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171080C0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171080C2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171080C4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17107FAB; /* 0x171080C7: jp 0x17107fab */
L_171080CD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171080CD: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17107FC2; /* 0x171080D1: jmp 0x17107fc2 */
L_171080D6:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171080D6: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x171080D9: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x171080DF: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x171080E5: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171080EA: mov ebx, eax */
L_171080EC:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171080EC: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171080EF: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171080F1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171080F3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108101; /* 0x171080F6: jne 0x17108101 */
L_171080F8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171080F8: fstp st(0) */
    edi = esi; /* 0x171080FA: mov edi, esi */
    RECOMP_BACKEDGE();
    goto L_17108002; /* 0x171080FC: jmp 0x17108002 */
L_17108101:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17108101: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17108104: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17108106: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17108108: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17107FEC; /* 0x1710810B: jp 0x17107fec */
L_17108111:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17108111: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17108002; /* 0x17108113: jmp 0x17108002 */
L_17108118:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17108118: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(0x1700186C); /* 0x1710811B: fmul dword ptr [0x1700186c] */
    _st[0] += (double)*(float*)ADDR(0x1700141C); /* 0x17108121: fadd dword ptr [0x1700141c] */
    RECOMP_CALL(sub_1721B050); /* 0x17108127: call 0x1721b050 */
    RECOMP_FLAGS_IN();
L_1710812C:
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1710812C: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1710812C: shl eax, 8 */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x1710812F: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x17108132: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x17108132: shl eax, 8 */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x17108135: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x17108137: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x17108137: shl eax, 8 */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x1710813A: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17107F83; /* 0x1710813C: jmp 0x17107f83 */
L_17108141:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17108141: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171082CB; /* 0x17108142: je 0x171082cb */
L_17108148:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17108148: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171081DB; /* 0x17108149: je 0x171081db */
L_1710814F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1710814F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17107F28; /* 0x17108150: jne 0x17107f28 */
L_17108156:
    eax = MEM32(edx + 0x14); /* 0x17108156: mov eax, dword ptr [edx + 0x14] */
    edx = MEM32(edx + 0x18); /* 0x17108159: mov edx, dword ptr [edx + 0x18] */
    /* cmp edx, 1 */ /* 0x1710815C: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108189; /* 0x1710815F: jne 0x17108189 */
L_17108161:
    PUSH32(esp, 0x10u); /* 0x17108161: push 0x10 */
    edx = POP32_VAL(esp); /* 0x17108163: pop edx */
    /* cmp eax, edx */ /* 0x17108164: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1710816A; /* 0x17108166: ja 0x1710816a */
L_17108168:
    edx = eax; /* 0x17108168: mov edx, eax */
L_1710816A:
    /* test edx, edx */ /* 0x1710816A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x1710816C: jbe 0x1710833b */
L_17108172:
    ecx = MEM32(ebp + 0x8); /* 0x17108172: mov ecx, dword ptr [ebp + 8] */
    eax = edi; /* 0x17108175: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x17108177: sub ecx, edi */
    _flag_k = FK_CMP;
L_17108179:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x17108179: fld dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1710817C: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1710817E: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17108181: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17108179; /* 0x17108182: jne 0x17108179 */
L_17108184:
    goto L_1710833B; /* 0x17108184: jmp 0x1710833b */
L_17108189:
    PUSH32(esp, 4); /* 0x17108189: push 4 */
    ecx = POP32_VAL(esp); /* 0x1710818B: pop ecx */
    /* cmp eax, ecx */ /* 0x1710818C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x1710818E: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_17108196; /* 0x17108191: ja 0x17108196 */
L_17108193:
    MEM32(ebp + 0xC) = eax; /* 0x17108193: mov dword ptr [ebp + 0xc], eax */
L_17108196:
    /* cmp edx, ecx */ /* 0x17108196: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1710819C; /* 0x17108198: ja 0x1710819c */
L_1710819A:
    ecx = edx; /* 0x1710819A: mov ecx, edx */
L_1710819C:
    /* test ecx, ecx */ /* 0x1710819C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x1710819E: jbe 0x1710833b */
L_171081A4:
    ebx = MEM32(ebp + 0x8); /* 0x171081A4: mov ebx, dword ptr [ebp + 8] */
    edx = eax; /* 0x171081A7: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x171081A9: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x171081A9: shl edx, 2 */
    MEM32(ebp + 0x10) = ecx; /* 0x171081AC: mov dword ptr [ebp + 0x10], ecx */
L_171081AF:
    esi = MEM32(ebp + 0xC); /* 0x171081AF: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171081B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171081CC; /* 0x171081B4: jbe 0x171081cc */
L_171081B6:
    ecx = edi; /* 0x171081B6: mov ecx, edi */
    eax = ebx; /* 0x171081B8: mov eax, ebx */
    MEM32(ebp + 0x8) = esi; /* 0x171081BA: mov dword ptr [ebp + 8], esi */
L_171081BD:
    esi = MEM32(eax); /* 0x171081BD: mov esi, dword ptr [eax] */
    MEM32(ecx) = esi; /* 0x171081BF: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171081C1: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171081C4: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171081C7: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171081BD; /* 0x171081CA: jne 0x171081bd */
L_171081CC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171081CC: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171081CF: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x171081D1: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171081AF; /* 0x171081D4: jne 0x171081af */
L_171081D6:
    goto L_1710833B; /* 0x171081D6: jmp 0x1710833b */
L_171081DB:
    ecx = MEM32(edx + 0x14); /* 0x171081DB: mov ecx, dword ptr [edx + 0x14] */
    edx = MEM32(edx + 0x18); /* 0x171081DE: mov edx, dword ptr [edx + 0x18] */
    /* cmp edx, 1 */ /* 0x171081E1: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108281; /* 0x171081E4: jne 0x17108281 */
L_171081EA:
    /* cmp ecx, edx */ /* 0x171081EA: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710825A; /* 0x171081EC: jne 0x1710825a */
L_171081EE:
    /* cmp MEM32(eax + 0x1701483C), edx */ /* 0x171081EE: cmp dword ptr [eax + 0x1701483c], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1701483C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108262; /* 0x171081F4: jne 0x17108262 */
L_171081F6:
    /* cmp MEM32(eax + 0x17014840), 4 */ /* 0x171081F6: cmp dword ptr [eax + 0x17014840], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x17014840)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108262; /* 0x171081FD: jne 0x17108262 */
L_171081FF:
    eax = MEM32(ebp + 0x8); /* 0x171081FF: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001428)); /* 0x17108202: fld dword ptr [0x17001428] */
    eax = MEM32(eax); /* 0x17108208: mov eax, dword ptr [eax] */
    ecx = eax; /* 0x1710820A: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1710820C: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1710820C: shr ecx, 0x10 */
    ecx = (uint32_t)LO8(ecx); /* 0x1710820F: movzx ecx, cl */
    MEM32(ebp + 0x8) = ecx; /* 0x17108212: mov dword ptr [ebp + 8], ecx */
    ecx = eax; /* 0x17108215: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x17108217: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x17108217: shr ecx, 8 */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1710821A: fild dword ptr [ebp + 8] */
    ecx = (uint32_t)LO8(ecx); /* 0x1710821D: movzx ecx, cl */
    _st[0] *= _st[1]; /* 0x17108220: fmul st(1) */
    MEM32(ebp + 0x8) = ecx; /* 0x17108222: mov dword ptr [ebp + 8], ecx */
    ecx = (uint32_t)LO8(eax); /* 0x17108225: movzx ecx, al */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17108228: fstp dword ptr [ebp - 0x14] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1710822B: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x1710822E: mov dword ptr [ebp + 8], ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x17108231: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x17108231: shr eax, 0x18 */
    esi = ebp + (-0x14); /* 0x17108234: lea esi, [ebp - 0x14] */
    _st[0] *= _st[1]; /* 0x17108237: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17108239: fstp dword ptr [ebp - 0x10] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1710823C: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1710823F: mov dword ptr [ebp + 8], eax */
    _st[0] *= _st[1]; /* 0x17108242: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17108244: fstp dword ptr [ebp - 0xc] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x17108247: fild dword ptr [ebp + 8] */
    _st[0] *= _st[1]; /* 0x1710824A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1710824C: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710824F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108250: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17108251: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108253: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108254: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1710833B; /* 0x17108255: jmp 0x1710833b */
L_1710825A:
    /* cmp ecx, 0x10u */ /* 0x1710825A: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108262; /* 0x1710825D: jbe 0x17108262 */
L_1710825F:
    PUSH32(esp, 0x10u); /* 0x1710825F: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17108261: pop ecx */
L_17108262:
    /* test ecx, ecx */ /* 0x17108262: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x17108264: jbe 0x1710833b */
L_1710826A:
    edx = MEM32(ebp + 0x8); /* 0x1710826A: mov edx, dword ptr [ebp + 8] */
    eax = edi; /* 0x1710826D: mov eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1710826F: sub edx, edi */
    _flag_k = FK_CMP;
L_17108271:
    fp_push((double)(int32_t)MEM32(eax + edx)); /* 0x17108271: fild dword ptr [eax + edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17108274: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17108276: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17108279: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17108271; /* 0x1710827A: jne 0x17108271 */
L_1710827C:
    goto L_1710833B; /* 0x1710827C: jmp 0x1710833b */
L_17108281:
    PUSH32(esp, 4); /* 0x17108281: push 4 */
    eax = POP32_VAL(esp); /* 0x17108283: pop eax */
    /* cmp ecx, eax */ /* 0x17108284: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x17108286: mov dword ptr [ebp + 0xc], eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_1710828E; /* 0x17108289: ja 0x1710828e */
L_1710828B:
    MEM32(ebp + 0xC) = ecx; /* 0x1710828B: mov dword ptr [ebp + 0xc], ecx */
L_1710828E:
    /* cmp edx, eax */ /* 0x1710828E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17108294; /* 0x17108290: ja 0x17108294 */
L_17108292:
    eax = edx; /* 0x17108292: mov eax, edx */
L_17108294:
    /* test eax, eax */ /* 0x17108294: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x17108296: jbe 0x1710833b */
L_1710829C:
    ebx = MEM32(ebp + 0x8); /* 0x1710829C: mov ebx, dword ptr [ebp + 8] */
    edx = ecx; /* 0x1710829F: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x171082A1: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x171082A1: shl edx, 2 */
    MEM32(ebp + 0x8) = eax; /* 0x171082A4: mov dword ptr [ebp + 8], eax */
L_171082A7:
    esi = MEM32(ebp + 0xC); /* 0x171082A7: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171082AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171082BF; /* 0x171082AC: jbe 0x171082bf */
L_171082AE:
    ecx = edi; /* 0x171082AE: mov ecx, edi */
    eax = ebx; /* 0x171082B0: mov eax, ebx */
L_171082B2:
    fp_push((double)(int32_t)MEM32(eax)); /* 0x171082B2: fild dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171082B4: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x171082B7: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171082B9: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171082BC: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171082B2; /* 0x171082BD: jne 0x171082b2 */
L_171082BF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171082BF: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171082C2: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171082C4: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171082A7; /* 0x171082C7: jne 0x171082a7 */
L_171082C9:
    goto L_1710833B; /* 0x171082C9: jmp 0x1710833b */
L_171082CB:
    eax = MEM32(edx + 0x14); /* 0x171082CB: mov eax, dword ptr [edx + 0x14] */
    edx = MEM32(edx + 0x18); /* 0x171082CE: mov edx, dword ptr [edx + 0x18] */
    /* cmp edx, 1 */ /* 0x171082D1: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171082F7; /* 0x171082D4: jne 0x171082f7 */
L_171082D6:
    PUSH32(esp, 0x10u); /* 0x171082D6: push 0x10 */
    edx = POP32_VAL(esp); /* 0x171082D8: pop edx */
    /* cmp eax, edx */ /* 0x171082D9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171082DF; /* 0x171082DB: ja 0x171082df */
L_171082DD:
    edx = eax; /* 0x171082DD: mov edx, eax */
L_171082DF:
    /* test edx, edx */ /* 0x171082DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x171082E1: jbe 0x1710833b */
L_171082E3:
    ecx = MEM32(ebp + 0x8); /* 0x171082E3: mov ecx, dword ptr [ebp + 8] */
    eax = edi; /* 0x171082E6: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171082E8: sub ecx, edi */
    _flag_k = FK_CMP;
L_171082EA:
    fp_push((double)(int32_t)MEM32(eax + ecx)); /* 0x171082EA: fild dword ptr [eax + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171082ED: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171082EF: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171082F2: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171082EA; /* 0x171082F3: jne 0x171082ea */
L_171082F5:
    goto L_1710833B; /* 0x171082F5: jmp 0x1710833b */
L_171082F7:
    PUSH32(esp, 4); /* 0x171082F7: push 4 */
    ecx = POP32_VAL(esp); /* 0x171082F9: pop ecx */
    /* cmp eax, ecx */ /* 0x171082FA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x171082FC: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_17108304; /* 0x171082FF: ja 0x17108304 */
L_17108301:
    MEM32(ebp + 0xC) = eax; /* 0x17108301: mov dword ptr [ebp + 0xc], eax */
L_17108304:
    /* cmp edx, ecx */ /* 0x17108304: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1710830A; /* 0x17108306: ja 0x1710830a */
L_17108308:
    ecx = edx; /* 0x17108308: mov ecx, edx */
L_1710830A:
    /* test ecx, ecx */ /* 0x1710830A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710833B; /* 0x1710830C: jbe 0x1710833b */
L_1710830E:
    ebx = MEM32(ebp + 0x8); /* 0x1710830E: mov ebx, dword ptr [ebp + 8] */
    edx = eax; /* 0x17108311: mov edx, eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17108313: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17108313: shl edx, 2 */
    MEM32(ebp + 0x8) = ecx; /* 0x17108316: mov dword ptr [ebp + 8], ecx */
L_17108319:
    esi = MEM32(ebp + 0xC); /* 0x17108319: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1710831C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108331; /* 0x1710831E: jbe 0x17108331 */
L_17108320:
    ecx = edi; /* 0x17108320: mov ecx, edi */
    eax = ebx; /* 0x17108322: mov eax, ebx */
L_17108324:
    fp_push((double)(int32_t)MEM32(eax)); /* 0x17108324: fild dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17108326: add eax, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17108329: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1710832B: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1710832E: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17108324; /* 0x1710832F: jne 0x17108324 */
L_17108331:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x17108331: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x17108334: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17108336: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17108319; /* 0x17108339: jne 0x17108319 */
L_1710833B:
    edi = POP32_VAL(esp); /* 0x1710833B: pop edi */
L_1710833C:
    esi = POP32_VAL(esp); /* 0x1710833C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710833D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710833E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710833F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17108347(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17108347u);

L_17108347:
    edi = edi; /* 0x17108347: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17108349: push ebp */
    ebp = esp; /* 0x1710834A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1710834C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1710834D: mov ebx, dword ptr [ebp + 0xc] */
    eax = 0x80000003u; /* 0x17108350: mov eax, 0x80000003 */
    ecx = ebx; /* 0x17108355: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x17108357: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17108359: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710835B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710835C: mov esi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108365; /* 0x1710835F: jne 0x17108365 */
L_17108361:
    ebx = ~ebx; /* 0x17108361: not ebx */
    goto L_17108377; /* 0x17108363: jmp 0x17108377 */
L_17108365:
    PUSH32(esp, 0); /* 0x17108365: push 0 */
    PUSH32(esp, 1); /* 0x17108367: push 1 */
    PUSH32(esp, ebx); /* 0x17108369: push ebx */
    ecx = esi; /* 0x1710836A: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x1710836C: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17108371: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17108373: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108384; /* 0x17108375: je 0x17108384 */
L_17108377:
    eax = MEM32(ebp + 0x14); /* 0x17108377: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1710837A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710838B; /* 0x1710837D: je 0x1710838b */
L_1710837F:
    /* cmp MEM32(ebx + 0x10), eax */ /* 0x1710837F: cmp dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710838B; /* 0x17108382: jbe 0x1710838b */
L_17108384:
    eax = 0x8876086Cu; /* 0x17108384: mov eax, 0x8876086c */
    goto L_171083F4; /* 0x17108389: jmp 0x171083f4 */
L_1710838B:
    /* cmp MEM32(esi + 0x58), 3 */ /* 0x1710838B: cmp dword ptr [esi + 0x58], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171083A1; /* 0x1710838F: jne 0x171083a1 */
L_17108391:
    PUSH32(esp, eax); /* 0x17108391: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17108392: push dword ptr [ebp + 0x10] */
    ebx = ~ebx; /* 0x17108395: not ebx */
    PUSH32(esp, ebx); /* 0x17108397: push ebx */
    ecx = esi; /* 0x17108398: mov ecx, esi */
    RECOMP_CALL(sub_1710B2A0); /* 0x1710839A: call 0x1710b2a0 */
    RECOMP_FLAGS_IN();
    goto L_171083F4; /* 0x1710839F: jmp 0x171083f4 */
L_171083A1:
    /* cmp MEM8(ebx + 0x15), 0 */ /* 0x171083A1: cmp byte ptr [ebx + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171083C4; /* 0x171083A5: je 0x171083c4 */
L_171083A7:
    ecx = MEM32(ebx + 0x10); /* 0x171083A7: mov ecx, dword ptr [ebx + 0x10] */
    esi = MEM32(ebp + 0x10); /* 0x171083AA: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x171083AD: mov eax, ecx */
    PUSH32(esp, edi); /* 0x171083AF: push edi */
    edi = MEM32(ebx); /* 0x171083B0: mov edi, dword ptr [ebx] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171083B2: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171083B2: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171083B5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171083B7: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171083B9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171083BC: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x171083BE: mov esi, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x171083C1: pop edi */
    goto L_171083D3; /* 0x171083C2: jmp 0x171083d3 */
L_171083C4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171083C4: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x171083C7: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x171083C9: push ebx */
    RECOMP_CALL(sub_171072B5); /* 0x171083CA: call 0x171072b5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171083CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171083F4; /* 0x171083D1: jl 0x171083f4 */
L_171083D3:
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x171083D3: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x38); /* 0x171083D7: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x171083DA: mov eax, dword ptr [eax] */
    ecx = MEM32(ebx + 0x8); /* 0x171083DC: mov ecx, dword ptr [ebx + 8] */
    MEM32(ecx) = eax; /* 0x171083DF: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x171083E1: mov eax, dword ptr [esi + 0x40] */
    /* cmp MEM32(eax), 0 */ /* 0x171083E4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171083F1; /* 0x171083E7: je 0x171083f1 */
L_171083E9:
    PUSH32(esp, ebx); /* 0x171083E9: push ebx */
    ecx = esi; /* 0x171083EA: mov ecx, esi */
    RECOMP_CALL(sub_17102498); /* 0x171083EC: call 0x17102498 */
    RECOMP_FLAGS_IN();
L_171083F1:
    eax = MEM32(esi + 0x28); /* 0x171083F1: mov eax, dword ptr [esi + 0x28] */
L_171083F4:
    esi = POP32_VAL(esp); /* 0x171083F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x171083F5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171083F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171083F7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171083FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171083FFu);

L_171083FF:
    edi = edi; /* 0x171083FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17108401: push ebp */
    ebp = esp; /* 0x17108402: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17108404: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17108405: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x17108408: push 0 */
    PUSH32(esp, 1); /* 0x1710840A: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710840C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1710840F: mov ecx, esi */
    RECOMP_CALL(sub_170FE5B2); /* 0x17108411: call 0x170fe5b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17108416: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108421; /* 0x17108418: jne 0x17108421 */
L_1710841A:
    eax = 0x8876086Cu; /* 0x1710841A: mov eax, 0x8876086c */
    goto L_17108456; /* 0x1710841F: jmp 0x17108456 */
L_17108421:
    ecx = MEM32(ebp + 0x14); /* 0x17108421: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x17108424: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710842E; /* 0x17108427: je 0x1710842e */
L_17108429:
    /* cmp MEM32(eax + 0x10), ecx */ /* 0x17108429: cmp dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1710841A; /* 0x1710842C: ja 0x1710841a */
L_1710842E:
    edx = MEM32(esi + 0xD0); /* 0x1710842E: mov edx, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17108434: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), 0xFFFFFFFFu */ /* 0x17108436: cmp dword ptr [eax + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710843A: setne cl */
    PUSH32(esp, ecx); /* 0x1710843D: push ecx */
    ecx = MEM32(eax + 0x18); /* 0x1710843E: mov ecx, dword ptr [eax + 0x18] */
    ecx = MEM32(edx + ecx * 4); /* 0x17108441: mov ecx, dword ptr [edx + ecx*4] */
    PUSH32(esp, MEM32(ecx + 0x48)); /* 0x17108444: push dword ptr [ecx + 0x48] */
    ecx = esi; /* 0x17108447: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17108449: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax)); /* 0x1710844C: push dword ptr [eax] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1710844E: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_17107583); /* 0x17108451: call 0x17107583 */
    RECOMP_FLAGS_IN();
L_17108456:
    esi = POP32_VAL(esp); /* 0x17108456: pop esi */
    ebp = POP32_VAL(esp); /* 0x17108457: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17108458: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17108460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17108460u);

L_17108460:
    edi = edi; /* 0x17108460: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17108462: push ebp */
    ebp = esp; /* 0x17108463: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17108465: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x17108468: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1710846B: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710846E: push ebx */
    ebx = ecx; /* 0x1710846F: mov ebx, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710857D; /* 0x17108471: jae 0x1710857d */
L_17108477:
    PUSH32(esp, esi); /* 0x17108477: push esi */
    PUSH32(esp, edi); /* 0x17108478: push edi */
L_17108479:
    ecx = (uint32_t)MEM16(edx + 0x14); /* 0x17108479: movzx ecx, word ptr [edx + 0x14] */
    eax = MEM32(edx); /* 0x1710847D: mov eax, dword ptr [edx] */
    edi = MEM32(edx + 0x10); /* 0x1710847F: mov edi, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17108482: mov dword ptr [ebp - 4], ecx */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x17108485: movzx ecx, word ptr [eax + 2] */
    eax = (uint32_t)MEM16(eax); /* 0x17108489: movzx eax, word ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1710848C: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x48); /* 0x1710848E: mov eax, dword ptr [ebx + 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6Cu); /* 0x17108491: imul ecx, ecx, 0x6c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x17108494: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6Cu); /* 0x1710849A: imul edi, edi, 0x6c */
    eax = ecx + eax + (-0x6C); /* 0x1710849D: lea eax, [ecx + eax - 0x6c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171084A1: add edi, eax */
    _flag_k = FK_ADD;
    goto L_17108561; /* 0x171084A3: jmp 0x17108561 */
L_171084A8:
    ecx = (uint32_t)MEM16(eax + 0x3E); /* 0x171084A8: movzx ecx, word ptr [eax + 0x3e] */
    esi = MEM32(eax + 0x8); /* 0x171084AC: mov esi, dword ptr [eax + 8] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x171084AF: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x171084AF: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171084B2: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x171084B4: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171084B6: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710855B; /* 0x171084B9: jae 0x1710855b */
L_171084BF:
    eax = (uint32_t)MEM8(esi + 0xB); /* 0x171084BF: movzx eax, byte ptr [esi + 0xb] */
    /* cmp eax, 3 */ /* 0x171084C3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108520; /* 0x171084C6: jne 0x17108520 */
L_171084C8:
    /* test MEM8(esi + 0x12), 4 */ /* 0x171084C8: test byte ptr [esi + 0x12], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x12)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171084FE; /* 0x171084CC: jne 0x171084fe */
L_171084CE:
    eax = MEM32(esi + 0x4); /* 0x171084CE: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171084D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171084E0; /* 0x171084D3: je 0x171084e0 */
L_171084D5:
    eax = MEM32(eax); /* 0x171084D5: mov eax, dword ptr [eax] */
    /* cmp MEM32(ebx + 0x34), eax */ /* 0x171084D7: cmp dword ptr [ebx + 0x34], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171084DA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171084DC: neg eax */
    _flag_k = FK_CMP;
    goto L_171084EB; /* 0x171084DE: jmp 0x171084eb */
L_171084E0:
    PUSH32(esp, MEM32(ebx + 0x34)); /* 0x171084E0: push dword ptr [ebx + 0x34] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171084E3: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_170FF4FA); /* 0x171084E6: call 0x170ff4fa */
    RECOMP_FLAGS_IN();
L_171084EB:
    /* test eax, eax */ /* 0x171084EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171084FE; /* 0x171084ED: je 0x171084fe */
L_171084EF:
    PUSH32(esp, 0); /* 0x171084EF: push 0 */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171084F1: push dword ptr [esi + 0xc] */
    ecx = ebx; /* 0x171084F4: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171084F6: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_17107E95); /* 0x171084F9: call 0x17107e95 */
    RECOMP_FLAGS_IN();
L_171084FE:
    edx = MEM32(esi); /* 0x171084FE: mov edx, dword ptr [esi] */
    PUSH32(esp, MEM32(edx)); /* 0x17108500: push dword ptr [edx] */
    edx = MEM32(esi + 0x8); /* 0x17108502: mov edx, dword ptr [esi + 8] */
    eax = MEM32(ebx + 0x8); /* 0x17108505: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(eax); /* 0x17108508: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FFFFFFu);
    edx = edx & 0x00FFFFFFu; /* 0x1710850A: and edx, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x17108510: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17108511: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x17108514: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x17108515: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
L_1710851B:
    ecx = MEM32(ebp + (-0xC)); /* 0x1710851B: mov ecx, dword ptr [ebp - 0xc] */
    goto L_17108541; /* 0x1710851E: jmp 0x17108541 */
L_17108520:
    /* cmp eax, 9 */ /* 0x17108520: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710853C; /* 0x17108523: jne 0x1710853c */
L_17108525:
    edx = MEM32(esi + 0x1A); /* 0x17108525: mov edx, dword ptr [esi + 0x1a] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x17108528: push dword ptr [edx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x1710852B: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1710852E: push dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17108531: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17108533: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x17108534: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1710851B; /* 0x1710853A: jmp 0x1710851b */
L_1710853C:
    eax = 0x80004005u; /* 0x1710853C: mov eax, 0x80004005 */
L_17108541:
    /* cmp MEM32(ebx + 0x28), 0 */ /* 0x17108541: cmp dword ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710854A; /* 0x17108545: jl 0x1710854a */
L_17108547:
    MEM32(ebx + 0x28) = eax; /* 0x17108547: mov dword ptr [ebx + 0x28], eax */
L_1710854A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x1710854A: add esi, 0x20 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x1710854D: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171084BF; /* 0x1710854F: jb 0x171084bf */
L_17108555:
    edx = MEM32(ebp + 0xC); /* 0x17108555: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x17108558: mov eax, dword ptr [ebp - 8] */
L_1710855B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1710855B: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6Cu; /* 0x1710855E: add eax, 0x6c */
    _flag_k = FK_ADD;
L_17108561:
    /* cmp eax, edi */ /* 0x17108561: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x17108563: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171084A8; /* 0x17108566: jb 0x171084a8 */
L_1710856C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x1710856C: add edx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1710856F: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x17108572: mov dword ptr [ebp + 0xc], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17108479; /* 0x17108575: jb 0x17108479 */
L_1710857B:
    edi = POP32_VAL(esp); /* 0x1710857B: pop edi */
    esi = POP32_VAL(esp); /* 0x1710857C: pop esi */
L_1710857D:
    ebx = POP32_VAL(esp); /* 0x1710857D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710857E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710857F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17108587(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17108587u);

L_17108587:
    edi = edi; /* 0x17108587: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17108589: push ebp */
    ebp = esp; /* 0x1710858A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1710858C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710858F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17108590: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xC); /* 0x17108593: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x17108596: push esi */
    esi = ecx; /* 0x17108597: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17108599: push edi */
    edi = MEM32(ebx + 0x8); /* 0x1710859A: mov edi, dword ptr [ebx + 8] */
    ecx = MEM32(edi + 0x4); /* 0x1710859D: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx); /* 0x171085A0: mov ecx, dword ptr [ecx] */
    if (29u) _cf = (((eax) >> 3) & 1u); /* 0x171085A2: shl eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((eax << 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 29u; /* 0x171085A2: shl eax, 0x1d */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x171085A5: sar eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 31u);
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x171085A8: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x171085AB: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171085AE: mov dword ptr [ebp - 4], eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_171085DF; /* 0x171085B1: ja 0x171085df */
L_171085B3:
    edx = MEM32(edi + 0x1A); /* 0x171085B3: mov edx, dword ptr [edi + 0x1a] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x171085B6: push dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x171085B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x8); /* 0x171085BB: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x171085BE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171085C0: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171085CB; /* 0x171085C1: je 0x171085cb */
L_171085C3:
    RECOMP_ICALL(MEM32(ecx + 0x170)); /* 0x171085C3: call dword ptr [ecx + 0x170] */
    RECOMP_FLAGS_IN();
    goto L_171085D1; /* 0x171085C9: jmp 0x171085d1 */
L_171085CB:
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x171085CB: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
L_171085D1:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x171085D1: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171085D5: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171085ED; /* 0x171085D8: jl 0x171085ed */
L_171085DA:
    MEM32(esi + 0x28) = eax; /* 0x171085DA: mov dword ptr [esi + 0x28], eax */
    goto L_171085ED; /* 0x171085DD: jmp 0x171085ed */
L_171085DF:
    PUSH32(esp, 0xFFFFu); /* 0x171085DF: push 0xffff */
    PUSH32(esp, edi); /* 0x171085E4: push edi */
    PUSH32(esp, ebx); /* 0x171085E5: push ebx */
    ecx = esi; /* 0x171085E6: mov ecx, esi */
    RECOMP_CALL(sub_171089E6); /* 0x171085E8: call 0x171089e6 */
    RECOMP_FLAGS_IN();
L_171085ED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x171085ED: add edi, 0x20 */
    _flag_k = FK_ADD;
    /* test MEM8(ebx + 0xC), 8 */ /* 0x171085F0: test byte ptr [ebx + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = edi; /* 0x171085F4: mov dword ptr [ebp - 8], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171086E5; /* 0x171085F7: je 0x171086e5 */
L_171085FD:
    eax = MEM32(ebx + 0x4); /* 0x171085FD: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6Cu; /* 0x17108600: add eax, 0x6c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17108603: push eax */
    PUSH32(esp, ebx); /* 0x17108604: push ebx */
    ecx = esi; /* 0x17108605: mov ecx, esi */
    RECOMP_CALL(sub_17105448); /* 0x17108607: call 0x17105448 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebx + 0xC), 0x20u */ /* 0x1710860C: test byte ptr [ebx + 0xc], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171086DF; /* 0x17108610: je 0x171086df */
L_17108616:
    SET_LO16(edx, MEM16(ebx + 0x5A)); /* 0x17108616: mov dx, word ptr [ebx + 0x5a] */
    /* test LO16(edx), LO16(edx) */ /* 0x1710861A: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108657; /* 0x1710861D: jbe 0x17108657 */
L_1710861F:
    SET_LO16(eax, MEM16(ebx + 0x54)); /* 0x1710861F: mov ax, word ptr [ebx + 0x54] */
    /* cmp LO16(eax), MEM16(ebx + 0x56) */ /* 0x17108623: cmp ax, word ptr [ebx + 0x56] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x56)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108657; /* 0x17108627: jne 0x17108657 */
L_17108629:
    eax = MEM32(ebx + 0x48); /* 0x17108629: mov eax, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x1710862C: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710862E: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x17108632: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x17108635: mov ecx, dword ptr [ecx] */
    edx = (uint32_t)LO16(edx); /* 0x17108637: movzx edx, dx */
    PUSH32(esp, edx); /* 0x1710863A: push edx */
    PUSH32(esp, eax); /* 0x1710863B: push eax */
    eax = (uint32_t)MEM16(ebx + 0x58); /* 0x1710863C: movzx eax, word ptr [ebx + 0x58] */
    PUSH32(esp, eax); /* 0x17108640: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17108641: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710864E; /* 0x17108644: je 0x1710864e */
L_17108646:
    RECOMP_ICALL(MEM32(ecx + 0x178)); /* 0x17108646: call dword ptr [ecx + 0x178] */
    RECOMP_FLAGS_IN();
    goto L_17108654; /* 0x1710864C: jmp 0x17108654 */
L_1710864E:
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x1710864E: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
L_17108654:
    MEM32(ebp + 0x8) = eax; /* 0x17108654: mov dword ptr [ebp + 8], eax */
L_17108657:
    SET_LO16(edx, MEM16(ebx + 0x60)); /* 0x17108657: mov dx, word ptr [ebx + 0x60] */
    /* test LO16(edx), LO16(edx) */ /* 0x1710865B: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108695; /* 0x1710865E: jbe 0x17108695 */
L_17108660:
    SET_LO16(eax, MEM16(ebx + 0x5C)); /* 0x17108660: mov ax, word ptr [ebx + 0x5c] */
    /* cmp LO16(eax), MEM16(ebx + 0x5E) */ /* 0x17108664: cmp ax, word ptr [ebx + 0x5e] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x5E)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108695; /* 0x17108668: jne 0x17108695 */
L_1710866A:
    eax = MEM32(ebx + 0x4C); /* 0x1710866A: mov eax, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x1710866D: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710866F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x17108673: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x17108676: mov ecx, dword ptr [ecx] */
    edx = (uint32_t)LO16(edx); /* 0x17108678: movzx edx, dx */
    PUSH32(esp, edx); /* 0x1710867B: push edx */
    PUSH32(esp, eax); /* 0x1710867C: push eax */
    PUSH32(esp, 0); /* 0x1710867D: push 0 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710867F: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710868C; /* 0x17108682: je 0x1710868c */
L_17108684:
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x17108684: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    goto L_17108692; /* 0x1710868A: jmp 0x17108692 */
L_1710868C:
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x1710868C: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
L_17108692:
    MEM32(ebp + 0x8) = eax; /* 0x17108692: mov dword ptr [ebp + 8], eax */
L_17108695:
    SET_LO16(edx, MEM16(ebx + 0x66)); /* 0x17108695: mov dx, word ptr [ebx + 0x66] */
    /* test LO16(edx), LO16(edx) */ /* 0x17108699: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171086D3; /* 0x1710869C: jbe 0x171086d3 */
L_1710869E:
    SET_LO16(eax, MEM16(ebx + 0x62)); /* 0x1710869E: mov ax, word ptr [ebx + 0x62] */
    /* cmp LO16(eax), MEM16(ebx + 0x64) */ /* 0x171086A2: cmp ax, word ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x64)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171086D3; /* 0x171086A6: jne 0x171086d3 */
L_171086A8:
    eax = MEM32(ebx + 0x50); /* 0x171086A8: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x171086AB: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171086AD: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x171086B1: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x171086B4: mov ecx, dword ptr [ecx] */
    edx = (uint32_t)LO16(edx); /* 0x171086B6: movzx edx, dx */
    PUSH32(esp, edx); /* 0x171086B9: push edx */
    PUSH32(esp, eax); /* 0x171086BA: push eax */
    PUSH32(esp, 0); /* 0x171086BB: push 0 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171086BD: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171086CA; /* 0x171086C0: je 0x171086ca */
L_171086C2:
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x171086C2: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    goto L_171086D0; /* 0x171086C8: jmp 0x171086d0 */
L_171086CA:
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x171086CA: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
L_171086D0:
    MEM32(ebp + 0x8) = eax; /* 0x171086D0: mov dword ptr [ebp + 8], eax */
L_171086D3:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x171086D3: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171086DF; /* 0x171086D7: jl 0x171086df */
L_171086D9:
    eax = MEM32(ebp + 0x8); /* 0x171086D9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x28) = eax; /* 0x171086DC: mov dword ptr [esi + 0x28], eax */
L_171086DF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x171086DF: add edi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edi; /* 0x171086E2: mov dword ptr [ebp - 8], edi */
L_171086E5:
    eax = (uint32_t)MEM16(ebx + 0x56); /* 0x171086E5: movzx eax, word ptr [ebx + 0x56] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171086E9: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171086E9: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x171086EC: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171086EF: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171086F1: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171087A6; /* 0x171086F4: jae 0x171087a6 */
L_171086FA:
    ecx = MEM32(edi + 0x4); /* 0x171086FA: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx); /* 0x171086FD: mov ecx, dword ptr [ecx] */
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x171086FF: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108767; /* 0x17108702: jbe 0x17108767 */
L_17108704:
    ecx = MEM32(edi + 0x10); /* 0x17108704: mov ecx, dword ptr [edi + 0x10] */
    /* test ecx, 0x00400000u */ /* 0x17108707: test ecx, 0x400000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00400000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1710870D: mov dword ptr [ebp - 0x10], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108731; /* 0x17108710: je 0x17108731 */
L_17108712:
    ecx = (uint32_t)MEM16(edi + 0x1E); /* 0x17108712: movzx ecx, word ptr [edi + 0x1e] */
    esi = MEM32(edi + 0x1A); /* 0x17108716: mov esi, dword ptr [edi + 0x1a] */
    edi = MEM32(edi); /* 0x17108719: mov edi, dword ptr [edi] */
    edx = ecx; /* 0x1710871B: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710871D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710871D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17108720: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17108722: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17108724: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17108727: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + (-0x8)); /* 0x17108729: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x1710872C: mov esi, dword ptr [ebp - 0xc] */
    goto L_17108767; /* 0x1710872F: jmp 0x17108767 */
L_17108731:
    eax = MEM32(edi + 0xC); /* 0x17108731: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + 0x18); /* 0x17108734: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(esi + 0xD0); /* 0x17108737: mov edx, dword ptr [esi + 0xd0] */
    ecx = MEM32(edx + ecx * 4); /* 0x1710873D: mov ecx, dword ptr [edx + ecx*4] */
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x17108740: push dword ptr [ecx + 0x50] */
    ecx = ebp + (-0x10); /* 0x17108743: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x17108746: push ecx */
    ecx = MEM32(eax + 0x30); /* 0x17108747: mov ecx, dword ptr [eax + 0x30] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1710874A: push dword ptr [ecx + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1710874D: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(eax + 0x38)); /* 0x17108750: push dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x17108753: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x17108759: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x1710875A: push dword ptr [edi] */
    ecx = esi; /* 0x1710875C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1710875E: push eax */
    RECOMP_CALL(sub_17107894); /* 0x1710875F: call 0x17107894 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17108764: mov eax, dword ptr [ebp + 8] */
L_17108767:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x17108767: add edi, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x1710876A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x1710876C: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171086FA; /* 0x1710876F: jb 0x171086fa */
L_17108771:
    edx = (uint32_t)MEM16(ebx + 0x5A); /* 0x17108771: movzx edx, word ptr [ebx + 0x5a] */
    eax = MEM32(ebx + 0x48); /* 0x17108775: mov eax, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x17108778: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710877A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x1710877E: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x17108781: mov ecx, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x17108783: push edx */
    PUSH32(esp, eax); /* 0x17108784: push eax */
    eax = (uint32_t)MEM16(ebx + 0x58); /* 0x17108785: movzx eax, word ptr [ebx + 0x58] */
    PUSH32(esp, eax); /* 0x17108789: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710878A: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108797; /* 0x1710878D: je 0x17108797 */
L_1710878F:
    RECOMP_ICALL(MEM32(ecx + 0x178)); /* 0x1710878F: call dword ptr [ecx + 0x178] */
    RECOMP_FLAGS_IN();
    goto L_1710879D; /* 0x17108795: jmp 0x1710879d */
L_17108797:
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x17108797: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
L_1710879D:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x1710879D: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171087A6; /* 0x171087A1: jl 0x171087a6 */
L_171087A3:
    MEM32(esi + 0x28) = eax; /* 0x171087A3: mov dword ptr [esi + 0x28], eax */
L_171087A6:
    SET_LO16(eax, MEM16(ebx + 0x56)); /* 0x171087A6: mov ax, word ptr [ebx + 0x56] */
    /* cmp LO16(eax), MEM16(ebx + 0x3E) */ /* 0x171087AA: cmp ax, word ptr [ebx + 0x3e] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x3E)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171088E0; /* 0x171087AE: je 0x171088e0 */
L_171087B4:
    eax = (uint32_t)MEM16(ebx + 0x5E); /* 0x171087B4: movzx eax, word ptr [ebx + 0x5e] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171087B8: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171087B8: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x171087BB: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171087BE: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171087C0: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710883E; /* 0x171087C3: jae 0x1710883e */
L_171087C5:
    ecx = MEM32(edi + 0x4); /* 0x171087C5: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx); /* 0x171087C8: mov ecx, dword ptr [ecx] */
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x171087CA: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108805; /* 0x171087CD: jbe 0x17108805 */
L_171087CF:
    eax = MEM32(edi + 0xC); /* 0x171087CF: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + 0x18); /* 0x171087D2: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(esi + 0xD0); /* 0x171087D5: mov edx, dword ptr [esi + 0xd0] */
    ecx = MEM32(edx + ecx * 4); /* 0x171087DB: mov ecx, dword ptr [edx + ecx*4] */
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x171087DE: push dword ptr [ecx + 0x50] */
    ecx = ebp + (-0x10); /* 0x171087E1: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x171087E4: push ecx */
    ecx = MEM32(eax + 0x30); /* 0x171087E5: mov ecx, dword ptr [eax + 0x30] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x171087E8: push dword ptr [ecx + 8] */
    ecx = MEM32(edi + 0x10); /* 0x171087EB: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0x38)); /* 0x171087EE: push dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x171087F1: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171087F7: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x171087F8: push dword ptr [edi] */
    ecx = esi; /* 0x171087FA: mov ecx, esi */
    PUSH32(esp, eax); /* 0x171087FC: push eax */
    RECOMP_CALL(sub_17103B3C); /* 0x171087FD: call 0x17103b3c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17108802: mov eax, dword ptr [ebp + 8] */
L_17108805:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x17108805: add edi, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x17108808: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171087C5; /* 0x1710880A: jb 0x171087c5 */
L_1710880C:
    edx = (uint32_t)MEM16(ebx + 0x60); /* 0x1710880C: movzx edx, word ptr [ebx + 0x60] */
    eax = MEM32(ebx + 0x4C); /* 0x17108810: mov eax, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x17108813: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17108815: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x17108819: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x1710881C: mov ecx, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1710881E: push edx */
    PUSH32(esp, eax); /* 0x1710881F: push eax */
    PUSH32(esp, 0); /* 0x17108820: push 0 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17108822: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710882F; /* 0x17108825: je 0x1710882f */
L_17108827:
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x17108827: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    goto L_17108835; /* 0x1710882D: jmp 0x17108835 */
L_1710882F:
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x1710882F: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
L_17108835:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17108835: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710883E; /* 0x17108839: jl 0x1710883e */
L_1710883B:
    MEM32(esi + 0x28) = eax; /* 0x1710883B: mov dword ptr [esi + 0x28], eax */
L_1710883E:
    eax = (uint32_t)MEM16(ebx + 0x64); /* 0x1710883E: movzx eax, word ptr [ebx + 0x64] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17108842: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17108842: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x17108845: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x17108848: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1710884A: mov dword ptr [ebp + 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171088C8; /* 0x1710884D: jae 0x171088c8 */
L_1710884F:
    ecx = MEM32(edi + 0x4); /* 0x1710884F: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx); /* 0x17108852: mov ecx, dword ptr [ecx] */
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x17108854: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710888F; /* 0x17108857: jbe 0x1710888f */
L_17108859:
    eax = MEM32(edi + 0xC); /* 0x17108859: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax + 0x18); /* 0x1710885C: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(esi + 0xD0); /* 0x1710885F: mov edx, dword ptr [esi + 0xd0] */
    ecx = MEM32(edx + ecx * 4); /* 0x17108865: mov ecx, dword ptr [edx + ecx*4] */
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x17108868: push dword ptr [ecx + 0x50] */
    ecx = ebp + (-0x10); /* 0x1710886B: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1710886E: push ecx */
    ecx = MEM32(eax + 0x30); /* 0x1710886F: mov ecx, dword ptr [eax + 0x30] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x17108872: push dword ptr [ecx + 8] */
    ecx = MEM32(edi + 0x10); /* 0x17108875: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0x38)); /* 0x17108878: push dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x1710887B: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x17108881: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x17108882: push dword ptr [edi] */
    ecx = esi; /* 0x17108884: mov ecx, esi */
    PUSH32(esp, eax); /* 0x17108886: push eax */
    RECOMP_CALL(sub_17103F47); /* 0x17108887: call 0x17103f47 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1710888C: mov eax, dword ptr [ebp + 8] */
L_1710888F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x1710888F: add edi, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x17108892: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710884F; /* 0x17108894: jb 0x1710884f */
L_17108896:
    edx = (uint32_t)MEM16(ebx + 0x66); /* 0x17108896: movzx edx, word ptr [ebx + 0x66] */
    eax = MEM32(ebx + 0x50); /* 0x1710889A: mov eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x1710889D: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710889F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x171088A3: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx); /* 0x171088A6: mov ecx, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x171088A8: push edx */
    PUSH32(esp, eax); /* 0x171088A9: push eax */
    PUSH32(esp, 0); /* 0x171088AA: push 0 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171088AC: push dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171088B9; /* 0x171088AF: je 0x171088b9 */
L_171088B1:
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x171088B1: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    goto L_171088BF; /* 0x171088B7: jmp 0x171088bf */
L_171088B9:
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x171088B9: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
L_171088BF:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x171088BF: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171088C8; /* 0x171088C3: jl 0x171088c8 */
L_171088C5:
    MEM32(esi + 0x28) = eax; /* 0x171088C5: mov dword ptr [esi + 0x28], eax */
L_171088C8:
    eax = (uint32_t)MEM16(ebx + 0x6A); /* 0x171088C8: movzx eax, word ptr [ebx + 0x6a] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171088CC: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171088CC: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x8); /* 0x171088CF: add eax, dword ptr [ebx + 8] */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171088D2: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171088E0; /* 0x171088D4: jae 0x171088e0 */
L_171088D6:
    PUSH32(esp, eax); /* 0x171088D6: push eax */
    PUSH32(esp, edi); /* 0x171088D7: push edi */
    PUSH32(esp, ebx); /* 0x171088D8: push ebx */
    ecx = esi; /* 0x171088D9: mov ecx, esi */
    RECOMP_CALL(sub_17108460); /* 0x171088DB: call 0x17108460 */
    RECOMP_FLAGS_IN();
L_171088E0:
    edi = POP32_VAL(esp); /* 0x171088E0: pop edi */
    esi = POP32_VAL(esp); /* 0x171088E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171088E2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171088E3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171088E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171088EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171088ECu);

L_171088EC:
    edi = edi; /* 0x171088EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171088EE: push ebp */
    ebp = esp; /* 0x171088EF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171088F1: push ecx */
    PUSH32(esp, ebx); /* 0x171088F2: push ebx */
    PUSH32(esp, esi); /* 0x171088F3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171088F4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171088F7: push edi */
    edi = ecx; /* 0x171088F8: mov edi, ecx */
    /* test MEM8(edi + 0x134), 8 */ /* 0x171088FA: test byte ptr [edi + 0x134], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0x134)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710892F; /* 0x17108901: je 0x1710892f */
L_17108903:
    eax = esi + 0x24; /* 0x17108903: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x17108906: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17108907: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x20), 0xFFFFu */ /* 0x17108909: cmp word ptr [esi + 0x20], 0xffff */
    _flag_a = (uint32_t)(MEM16(esi + 0x20)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710890F: setne al */
    PUSH32(esp, eax); /* 0x17108912: push eax */
    RECOMP_CALL(sub_171075A8); /* 0x17108913: call 0x171075a8 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x2C; /* 0x17108918: lea eax, [esi + 0x2c] */
    PUSH32(esp, eax); /* 0x1710891B: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710891C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x22), 0xFFFFu */ /* 0x1710891E: cmp word ptr [esi + 0x22], 0xffff */
    _flag_a = (uint32_t)(MEM16(esi + 0x22)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = edi; /* 0x17108924: mov ecx, edi */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17108926: setne al */
    PUSH32(esp, eax); /* 0x17108929: push eax */
    RECOMP_CALL(sub_1710771E); /* 0x1710892A: call 0x1710771e */
    RECOMP_FLAGS_IN();
L_1710892F:
    /* test MEM8(esi + 0xC), 0x10u */ /* 0x1710892F: test byte ptr [esi + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108950; /* 0x17108933: je 0x17108950 */
L_17108935:
    /* cmp MEM16(esi + 0x20), 0xFFFFu */ /* 0x17108935: cmp word ptr [esi + 0x20], 0xffff */
    _flag_a = (uint32_t)(MEM16(esi + 0x20)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = edi; /* 0x1710893B: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1710893D: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108947; /* 0x1710893E: je 0x17108947 */
L_17108940:
    RECOMP_CALL(sub_171010A0); /* 0x17108940: call 0x171010a0 */
    RECOMP_FLAGS_IN();
    goto L_1710894C; /* 0x17108945: jmp 0x1710894c */
L_17108947:
    RECOMP_CALL(sub_171010A0); /* 0x17108947: call 0x171010a0 */
    RECOMP_FLAGS_IN();
L_1710894C:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 1)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 1));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 1; /* 0x1710894C: or dword ptr [esi + 0xc], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17108950:
    eax = MEM32(edi + 0x34); /* 0x17108950: mov eax, dword ptr [edi + 0x34] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17108953: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x10); /* 0x17108956: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x34) = eax; /* 0x17108959: mov dword ptr [edi + 0x34], eax */
    eax = MEM32(edi + 0x60); /* 0x1710895C: mov eax, dword ptr [edi + 0x60] */
    eax = MEM32(eax); /* 0x1710895F: mov eax, dword ptr [eax] */
    MEM32(esi + 0x10) = eax; /* 0x17108961: mov dword ptr [esi + 0x10], eax */
    /* cmp MEM32(edi + 0x58), 4 */ /* 0x17108964: cmp dword ptr [edi + 0x58], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171089A6; /* 0x17108968: jne 0x171089a6 */
L_1710896A:
    /* test MEM8(esi + 0xC), 2 */ /* 0x1710896A: test byte ptr [esi + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710897A; /* 0x1710896E: je 0x1710897a */
L_17108970:
    PUSH32(esp, esi); /* 0x17108970: push esi */
    ecx = edi; /* 0x17108971: mov ecx, edi */
    RECOMP_CALL(sub_17108587); /* 0x17108973: call 0x17108587 */
    RECOMP_FLAGS_IN();
    goto L_171089D4; /* 0x17108978: jmp 0x171089d4 */
L_1710897A:
    ebx = (uint32_t)MEM16(esi + 0x3E); /* 0x1710897A: movzx ebx, word ptr [esi + 0x3e] */
    eax = MEM32(esi + 0x8); /* 0x1710897E: mov eax, dword ptr [esi + 8] */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x17108981: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x17108981: shl ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x17108984: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x17108986: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17108988: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171089D4; /* 0x1710898B: je 0x171089d4 */
L_1710898D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710898D: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x17108990: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108992: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17108995: push esi */
    RECOMP_CALL(sub_171089E6); /* 0x17108996: call 0x171089e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x20u; /* 0x1710899B: add dword ptr [ebp + 8], 0x20 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1710899F: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710898D; /* 0x171089A2: jne 0x1710898d */
L_171089A4:
    goto L_171089D4; /* 0x171089A4: jmp 0x171089d4 */
L_171089A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171089A6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x3E), LO16(ebx) */ /* 0x171089A8: cmp word ptr [esi + 0x3e], bx */
    _flag_a = (uint32_t)(MEM16(esi + 0x3E)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171089CA; /* 0x171089AC: jbe 0x171089ca */
L_171089AE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171089AE: push dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(ebx); /* 0x171089B1: movzx eax, bx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171089B4: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171089B4: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x8); /* 0x171089B7: add eax, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x171089BA: mov ecx, edi */
    PUSH32(esp, eax); /* 0x171089BC: push eax */
    PUSH32(esp, esi); /* 0x171089BD: push esi */
    RECOMP_CALL(sub_171089E6); /* 0x171089BE: call 0x171089e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171089C3: inc ebx */
    _flag_k = FK_INC;
    /* cmp LO16(ebx), MEM16(esi + 0x3E) */ /* 0x171089C4: cmp bx, word ptr [esi + 0x3e] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x3E)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171089AE; /* 0x171089C8: jb 0x171089ae */
L_171089CA:
    /* cmp MEM32(edi + 0x58), 1 */ /* 0x171089CA: cmp dword ptr [edi + 0x58], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171089D4; /* 0x171089CE: jne 0x171089d4 */
L_171089D0:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0; /* 0x171089D0: and dword ptr [edi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171089D4:
    eax = MEM32(ebp + (-0x4)); /* 0x171089D4: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x34) = eax; /* 0x171089D7: mov dword ptr [edi + 0x34], eax */
    edi = POP32_VAL(esp); /* 0x171089DA: pop edi */
    esi = POP32_VAL(esp); /* 0x171089DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171089DC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171089DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171089DE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171089E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171089E6u);

L_171089E6:
    edi = edi; /* 0x171089E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171089E8: push ebp */
    ebp = esp; /* 0x171089E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x194u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x194u; /* 0x171089EB: sub esp, 0x194 */
    _flag_k = FK_CMP;
    /* cmp MEM16(ebp + 0x10), 0xFFFFu */ /* 0x171089F1: cmp word ptr [ebp + 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, ebx); /* 0x171089F7: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171089F8: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171089FB: push esi */
    esi = ecx; /* 0x171089FC: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171089FE: push edi */
    MEM32(ebp + (-0x18)) = esi; /* 0x171089FF: mov dword ptr [ebp - 0x18], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108A0C; /* 0x17108A02: jne 0x17108a0c */
L_17108A04:
    SET_LO16(eax, MEM16(ebx + 0x14)); /* 0x17108A04: mov ax, word ptr [ebx + 0x14] */
    MEM16(ebp + 0x10) = (uint16_t)(LO16(eax)); /* 0x17108A08: mov word ptr [ebp + 0x10], ax */
L_17108A0C:
    edi = MEM32(ebx + 0x10); /* 0x17108A0C: mov edi, dword ptr [ebx + 0x10] */
    ecx = 0x00080000u; /* 0x17108A0F: mov ecx, 0x80000 */
    /* test ecx, edi */ /* 0x17108A14: test ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108A16: jne 0x17108e46 */
L_17108A1C:
    eax = MEM32(ebx); /* 0x17108A1C: mov eax, dword ptr [ebx] */
    edx = MEM32(ebx + 0x8); /* 0x17108A1E: mov edx, dword ptr [ebx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x17108A21: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x17108A24: mov eax, dword ptr [ebx + 4] */
    /* test eax, eax */ /* 0x17108A27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = edx; /* 0x17108A29: mov dword ptr [ebp - 0x20], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108A39; /* 0x17108A2C: je 0x17108a39 */
L_17108A2E:
    eax = MEM32(eax); /* 0x17108A2E: mov eax, dword ptr [eax] */
    /* cmp MEM32(esi + 0x34), eax */ /* 0x17108A30: cmp dword ptr [esi + 0x34], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17108A33: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17108A35: neg eax */
    _flag_k = FK_CMP;
    goto L_17108A4C; /* 0x17108A37: jmp 0x17108a4c */
L_17108A39:
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x17108A39: push dword ptr [esi + 0x34] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108A3C: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_170FF4FA); /* 0x17108A3F: call 0x170ff4fa */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x20)); /* 0x17108A44: mov edx, dword ptr [ebp - 0x20] */
    ecx = 0x00080000u; /* 0x17108A47: mov ecx, 0x80000 */
L_17108A4C:
    /* test eax, eax */ /* 0x17108A4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108A4E: je 0x17108e46 */
L_17108A54:
    eax = edx; /* 0x17108A54: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x17108A56: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x17108A56: shr eax, 0x18 */
    /* cmp eax, 0xDu */ /* 0x17108A59: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17108D85; /* 0x17108A5C: ja 0x17108d85 */
L_17108A62:
    /* cmp eax, 0xCu */ /* 0x17108A62: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17108C3B; /* 0x17108A65: jae 0x17108c3b */
L_17108A6B:
    /* cmp eax, 3 */ /* 0x17108A6B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108B57; /* 0x17108A6E: je 0x17108b57 */
L_17108A74:
    /* cmp eax, 9 */ /* 0x17108A74: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108A94; /* 0x17108A77: je 0x17108a94 */
L_17108A79:
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108E32; /* 0x17108A79: jbe 0x17108e32 */
L_17108A7F:
    /* cmp eax, 0xBu */ /* 0x17108A7F: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17108E32; /* 0x17108A82: ja 0x17108e32 */
L_17108A88:
    eax = MEM32(ebp + 0x8); /* 0x17108A88: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 1)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 1));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 1; /* 0x17108A8B: or dword ptr [eax + 0xc], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17108E46; /* 0x17108A8F: jmp 0x17108e46 */
L_17108A94:
    /* cmp MEM32(esi + 0x58), 4 */ /* 0x17108A94: cmp dword ptr [esi + 0x58], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108A98: jne 0x17108e46 */
L_17108A9E:
    /* cmp MEM16(ebp + 0x10), 0xFFFFu */ /* 0x17108A9E: cmp word ptr [ebp + 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108AA4: jne 0x17108e46 */
L_17108AAA:
    eax = MEM32(ebp + 0x8); /* 0x17108AAA: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x44); /* 0x17108AAD: movzx eax, word ptr [eax + 0x44] */
    ecx = MEM32(esi + 0xD8); /* 0x17108AB1: mov ecx, dword ptr [esi + 0xd8] */
    eax = MEM32(ecx + eax * 4); /* 0x17108AB7: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + 0x10) = eax; /* 0x17108ABA: mov dword ptr [ebp + 0x10], eax */
    goto L_17108B48; /* 0x17108ABD: jmp 0x17108b48 */
L_17108AC2:
    eax = (uint32_t)MEM16(ecx + 0xC); /* 0x17108AC2: movzx eax, word ptr [ecx + 0xc] */
    edx = MEM32(esi + 0x48); /* 0x17108AC6: mov edx, dword ptr [esi + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6Cu); /* 0x17108AC9: imul eax, eax, 0x6c */
    ecx = MEM32(ecx); /* 0x17108ACC: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0xC); /* 0x17108ACE: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17108AD1: add eax, edx */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0xC), 1 */ /* 0x17108AD3: test byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0xC) = ecx; /* 0x17108AD7: mov dword ptr [ebp + 0xc], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108B41; /* 0x17108ADA: je 0x17108b41 */
L_17108ADC:
    ecx = MEM32(ecx + 0x44); /* 0x17108ADC: mov ecx, dword ptr [ecx + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x17108ADF: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x17108AE1: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17108AE4: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17108AE6: cdq  */
    PUSH32(esp, 0x6Cu); /* 0x17108AE7: push 0x6c */
    edi = POP32_VAL(esp); /* 0x17108AE9: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x17108AEA: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = (uint32_t)MEM16(ecx + 0x2); /* 0x17108AEC: movzx edx, word ptr [ecx + 2] */
    ecx = (uint32_t)MEM16(ecx); /* 0x17108AF0: movzx ecx, word ptr [ecx] */
    edi = ecx + edx + (-0x1); /* 0x17108AF3: lea edi, [ecx + edx - 1] */
    eax = (uint32_t)LO16(eax); /* 0x17108AF7: movzx eax, ax */
    /* cmp edi, eax */ /* 0x17108AFA: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x17108AFC: mov dword ptr [ebp - 4], eax */
    if (CMP_G(_flag_a, _flag_b)) goto L_17108B41; /* 0x17108AFF: jg 0x17108b41 */
L_17108B01:
    edi = MEM32(ebp + 0xC); /* 0x17108B01: mov edi, dword ptr [ebp + 0xc] */
    edi = (uint32_t)MEM16(edi + 0x52); /* 0x17108B04: movzx edi, word ptr [edi + 0x52] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x17108B08: add edi, ecx */
    _flag_k = FK_ADD;
    edi = edi + edx + (-0x1); /* 0x17108B0A: lea edi, [edi + edx - 1] */
    /* cmp eax, edi */ /* 0x17108B0E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17108B41; /* 0x17108B10: jge 0x17108b41 */
L_17108B12:
    edi = MEM32(ebx + 0x1A); /* 0x17108B12: mov edi, dword ptr [ebx + 0x1a] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x17108B15: push dword ptr [edi + 4] */
    edi = MEM32(ebp + 0xC); /* 0x17108B18: mov edi, dword ptr [ebp + 0xc] */
    edi = (uint32_t)MEM16(edi + 0x50); /* 0x17108B1B: movzx edi, word ptr [edi + 0x50] */
    eax = MEM32(esi + 0x8); /* 0x17108B1F: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x17108B22: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x17108B24: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x17108B26: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x17108B29: sub edi, edx */
    _flag_k = FK_CMP;
    ecx = edi + ecx + 0x1; /* 0x17108B2B: lea ecx, [edi + ecx + 1] */
    PUSH32(esp, ecx); /* 0x17108B2F: push ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17108B30: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x104)); /* 0x17108B33: call dword ptr [eax + 0x104] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17108B39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17108C2C; /* 0x17108B3B: jl 0x17108c2c */
L_17108B41:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x17108B41: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x17108B45: mov eax, dword ptr [ebp + 0x10] */
L_17108B48:
    ecx = MEM32(eax); /* 0x17108B48: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x17108B4A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108AC2; /* 0x17108B4C: jne 0x17108ac2 */
L_17108B52:
    goto L_171096C0; /* 0x17108B52: jmp 0x171096c0 */
L_17108B57:
    if (11u) _cf = (((edi) >> 21) & 1u); /* 0x17108B57: shl edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((edi << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 11u; /* 0x17108B57: shl edi, 0xb */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x17108B5A: sar edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 31u);
    PUSH32(esp, edi); /* 0x17108B5D: push edi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108B5E: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108B61: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108B63: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17107E95); /* 0x17108B66: call 0x17107e95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x58), 4 */ /* 0x17108B6B: cmp dword ptr [esi + 0x58], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108B6F: jne 0x17108e46 */
L_17108B75:
    /* cmp MEM16(ebp + 0x10), 0xFFFFu */ /* 0x17108B75: cmp word ptr [ebp + 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108B7B: jne 0x17108e46 */
L_17108B81:
    eax = MEM32(ebp + 0x8); /* 0x17108B81: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x44); /* 0x17108B84: movzx eax, word ptr [eax + 0x44] */
    ecx = MEM32(esi + 0xD8); /* 0x17108B88: mov ecx, dword ptr [esi + 0xd8] */
    eax = MEM32(ecx + eax * 4); /* 0x17108B8E: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + 0x10) = eax; /* 0x17108B91: mov dword ptr [ebp + 0x10], eax */
    goto L_17108C1D; /* 0x17108B94: jmp 0x17108c1d */
L_17108B99:
    eax = (uint32_t)MEM16(ecx + 0xC); /* 0x17108B99: movzx eax, word ptr [ecx + 0xc] */
    edx = MEM32(esi + 0x48); /* 0x17108B9D: mov edx, dword ptr [esi + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6Cu); /* 0x17108BA0: imul eax, eax, 0x6c */
    ecx = MEM32(ecx); /* 0x17108BA3: mov ecx, dword ptr [ecx] */
    edi = MEM32(ecx + 0xC); /* 0x17108BA5: mov edi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17108BA8: add eax, edx */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0xC), 1 */ /* 0x17108BAA: test byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108C16; /* 0x17108BAE: je 0x17108c16 */
L_17108BB0:
    ecx = MEM32(edi + 0x44); /* 0x17108BB0: mov ecx, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax); /* 0x17108BB3: add ecx, dword ptr [eax] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x17108BB5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17108BB8: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x17108BBA: cdq  */
    PUSH32(esp, 0x6Cu); /* 0x17108BBB: push 0x6c */
    ebx = POP32_VAL(esp); /* 0x17108BBD: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x17108BBE: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = (uint32_t)MEM16(ecx + 0x2); /* 0x17108BC0: movzx edx, word ptr [ecx + 2] */
    ecx = (uint32_t)MEM16(ecx); /* 0x17108BC4: movzx ecx, word ptr [ecx] */
    ebx = ecx + edx + (-0x1); /* 0x17108BC7: lea ebx, [ecx + edx - 1] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17108BCB: mov dword ptr [ebp - 4], ecx */
    eax = (uint32_t)LO16(eax); /* 0x17108BCE: movzx eax, ax */
    /* cmp ebx, eax */ /* 0x17108BD1: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x17108BD3: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_G(_flag_a, _flag_b)) goto L_17108C16; /* 0x17108BD6: jg 0x17108c16 */
L_17108BD8:
    ebx = (uint32_t)MEM16(edi + 0x52); /* 0x17108BD8: movzx ebx, word ptr [edi + 0x52] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x17108BDC: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = ebx + edx + (-0x1); /* 0x17108BDE: lea ecx, [ebx + edx - 1] */
    /* cmp eax, ecx */ /* 0x17108BE2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17108C16; /* 0x17108BE4: jge 0x17108c16 */
L_17108BE6:
    edi = (uint32_t)MEM16(edi + 0x50); /* 0x17108BE6: movzx edi, word ptr [edi + 0x50] */
    ebx = MEM32(ebp + 0xC); /* 0x17108BEA: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebx)); /* 0x17108BED: push dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x17108BEF: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x20)); /* 0x17108BF2: mov ebx, dword ptr [ebp - 0x20] */
    eax = MEM32(esi + 0x8); /* 0x17108BF5: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x17108BF8: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x17108BFA: sub edi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x1C)); /* 0x17108BFC: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00FFFFFFu);
    ebx = ebx & 0x00FFFFFFu; /* 0x17108BFF: and ebx, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17108C05: push ebx */
    edx = edi + edx + 0x1; /* 0x17108C06: lea edx, [edi + edx + 1] */
    PUSH32(esp, edx); /* 0x17108C0A: push edx */
    PUSH32(esp, eax); /* 0x17108C0B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x17108C0C: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17108C12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17108C2C; /* 0x17108C14: jl 0x17108c2c */
L_17108C16:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x17108C16: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x17108C1A: mov eax, dword ptr [ebp + 0x10] */
L_17108C1D:
    ecx = MEM32(eax); /* 0x17108C1D: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x17108C1F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108B99; /* 0x17108C21: jne 0x17108b99 */
L_17108C27:
    goto L_171096C0; /* 0x17108C27: jmp 0x171096c0 */
L_17108C2C:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17108C2C: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171096C0; /* 0x17108C30: jl 0x171096c0 */
L_17108C36:
    goto L_171096BD; /* 0x17108C36: jmp 0x171096bd */
L_17108C3B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x24)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x24)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) | 0xFFFFFFFFu; /* 0x17108C3B: or dword ptr [ebp - 0x24], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17108C3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x16), eax */ /* 0x17108C41: cmp dword ptr [ebx + 0x16], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x16)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x17108C44: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17108C47: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebx + 0xC); /* 0x17108C4A: mov eax, dword ptr [ebx + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108CB4; /* 0x17108C4D: je 0x17108cb4 */
L_17108C4F:
    /* test edi, 0x00040000u */ /* 0x17108C4F: test edi, 0x40000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00040000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108C63; /* 0x17108C55: je 0x17108c63 */
L_17108C57:
    _flag_a = (uint32_t)((MEM8(eax + 0x2D) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x2D) | 2)) << 24;
    MEM8(eax + 0x2D) = (uint8_t)(MEM8(eax + 0x2D) | 2); /* 0x17108C57: or byte ptr [eax + 0x2d], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(ebx + 0x10) | ecx)); _flag_b = (uint32_t)((MEM32(ebx + 0x10) | ecx));
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) | ecx; /* 0x17108C5B: or dword ptr [ebx + 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17108E46; /* 0x17108C5E: jmp 0x17108e46 */
L_17108C63:
    eax = MEM32(eax + 0x34); /* 0x17108C63: mov eax, dword ptr [eax + 0x34] */
    ecx = MEM32(eax); /* 0x17108C66: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17108C68: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17108C69: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x17108C6C: push 0 */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108C6E: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108C71: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108C73: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171052C8); /* 0x17108C76: call 0x171052c8 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), 0x0C000000u */ /* 0x17108C7B: cmp dword ptr [ebp - 0x20], 0xc000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108C9F; /* 0x17108C82: je 0x17108c9f */
L_17108C84:
    /* cmp MEM32(ebp + (-0x20)), 0x0D000000u */ /* 0x17108C84: cmp dword ptr [ebp - 0x20], 0xd000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0x0D000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108C9F; /* 0x17108C8B: je 0x17108c9f */
L_17108C8D:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108C8D: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108C90: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108C92: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1710284B); /* 0x17108C95: call 0x1710284b */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x20)); /* 0x17108C9A: mov edx, dword ptr [ebp - 0x20] */
    goto L_17108CD9; /* 0x17108C9D: jmp 0x17108cd9 */
L_17108C9F:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108C9F: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108CA2: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17108CA4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108CA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17102E53); /* 0x17108CAA: call 0x17102e53 */
    RECOMP_FLAGS_IN();
    goto L_17108E46; /* 0x17108CAF: jmp 0x17108e46 */
L_17108CB4:
    ecx = MEM32(eax + 0x38); /* 0x17108CB4: mov ecx, dword ptr [eax + 0x38] */
    /* test ecx, ecx */ /* 0x17108CB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17108CD9; /* 0x17108CB9: je 0x17108cd9 */
L_17108CBB:
    MEM32(ebp + (-0x4)) = ecx; /* 0x17108CBB: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(eax + 0x30); /* 0x17108CBE: mov ecx, dword ptr [eax + 0x30] */
    ecx = MEM32(ecx + 0x8); /* 0x17108CC1: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(eax + 0x18); /* 0x17108CC4: mov eax, dword ptr [eax + 0x18] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17108CC7: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(esi + 0xD0); /* 0x17108CCA: mov ecx, dword ptr [esi + 0xd0] */
    eax = MEM32(ecx + eax * 4); /* 0x17108CD0: mov eax, dword ptr [ecx + eax*4] */
    eax = MEM32(eax + 0x50); /* 0x17108CD3: mov eax, dword ptr [eax + 0x50] */
    MEM32(ebp + (-0x24)) = eax; /* 0x17108CD6: mov dword ptr [ebp - 0x24], eax */
L_17108CD9:
    /* cmp edx, 0x0C000000u */ /* 0x17108CD9: cmp edx, 0xc000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108D5D; /* 0x17108CDF: je 0x17108d5d */
L_17108CE1:
    /* cmp edx, 0x0C010000u */ /* 0x17108CE1: cmp edx, 0xc010000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0C010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108D35; /* 0x17108CE7: je 0x17108d35 */
L_17108CE9:
    /* cmp edx, 0x0C020000u */ /* 0x17108CE9: cmp edx, 0xc020000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0C020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108D0D; /* 0x17108CEF: je 0x17108d0d */
L_17108CF1:
    /* cmp edx, 0x0D000000u */ /* 0x17108CF1: cmp edx, 0xd000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0D000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108D5D; /* 0x17108CF7: je 0x17108d5d */
L_17108CF9:
    /* cmp edx, 0x0D010000u */ /* 0x17108CF9: cmp edx, 0xd010000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0D010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108D35; /* 0x17108CFF: je 0x17108d35 */
L_17108D01:
    /* cmp edx, 0x0D020000u */ /* 0x17108D01: cmp edx, 0xd020000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0D020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E46; /* 0x17108D07: jne 0x17108e46 */
L_17108D0D:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17108D0D: push dword ptr [ebp - 0x24] */
    eax = ebp + 0xC; /* 0x17108D10: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17108D13: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17108D14: push dword ptr [ebp - 0x1c] */
    eax = MEM32(ebx + 0x10); /* 0x17108D17: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17108D1A: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17108D1D: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17108D22: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17108D23: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x17108D26: mov ecx, esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108D28: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_17103B3C); /* 0x17108D2B: call 0x17103b3c */
    RECOMP_FLAGS_IN();
    goto L_17108E46; /* 0x17108D30: jmp 0x17108e46 */
L_17108D35:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17108D35: push dword ptr [ebp - 0x24] */
    eax = ebp + 0xC; /* 0x17108D38: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17108D3B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17108D3C: push dword ptr [ebp - 0x1c] */
    eax = MEM32(ebx + 0x10); /* 0x17108D3F: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17108D42: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17108D45: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17108D4A: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17108D4B: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x17108D4E: mov ecx, esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108D50: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_17103F47); /* 0x17108D53: call 0x17103f47 */
    RECOMP_FLAGS_IN();
    goto L_17108E46; /* 0x17108D58: jmp 0x17108e46 */
L_17108D5D:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17108D5D: push dword ptr [ebp - 0x24] */
    eax = ebp + 0xC; /* 0x17108D60: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17108D63: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17108D64: push dword ptr [ebp - 0x1c] */
    eax = MEM32(ebx + 0x10); /* 0x17108D67: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17108D6A: push dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17108D6D: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17108D72: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17108D73: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x17108D76: mov ecx, esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108D78: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_17107894); /* 0x17108D7B: call 0x17107894 */
    RECOMP_FLAGS_IN();
    goto L_17108E46; /* 0x17108D80: jmp 0x17108e46 */
L_17108D85:
    /* cmp eax, 0xEu */ /* 0x17108D85: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17108E32; /* 0x17108D88: jb 0x17108e32 */
L_17108D8E:
    /* cmp eax, 0xFu */ /* 0x17108D8E: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17108DB3; /* 0x17108D91: jbe 0x17108db3 */
L_17108D93:
    /* cmp eax, 0x10u */ /* 0x17108D93: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108DA1; /* 0x17108D96: je 0x17108da1 */
L_17108D98:
    /* cmp eax, 0x11u */ /* 0x17108D98: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108E32; /* 0x17108D9B: jne 0x17108e32 */
L_17108DA1:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108DA1: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108DA4: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108DA6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17105448); /* 0x17108DA9: call 0x17105448 */
    RECOMP_FLAGS_IN();
    goto L_17108E46; /* 0x17108DAE: jmp 0x17108e46 */
L_17108DB3:
    /* cmp MEM32(ebx + 0x16), 0 */ /* 0x17108DB3: cmp dword ptr [ebx + 0x16], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x16)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17108DC1; /* 0x17108DB7: jne 0x17108dc1 */
L_17108DB9:
    eax = MEM32(ebx + 0xC); /* 0x17108DB9: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_BACKEDGE();
    goto L_17108C57; /* 0x17108DBC: jmp 0x17108c57 */
L_17108DC1:
    edi = MEM32(ebp + 0x8); /* 0x17108DC1: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x17108DC4: push 0 */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108DC6: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108DC9: mov ecx, esi */
    PUSH32(esp, edi); /* 0x17108DCB: push edi */
    RECOMP_CALL(sub_171052C8); /* 0x17108DCC: call 0x171052c8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x17108DD1: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + 0x34); /* 0x17108DD4: mov eax, dword ptr [eax + 0x34] */
    ecx = MEM32(eax); /* 0x17108DD7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17108DD9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17108DDA: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0xC); /* 0x17108DDD: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(edi); /* 0x17108DE0: mov ecx, dword ptr [edi] */
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x17108DE2: fld qword ptr [eax + ecx] */
    _st[0] += *(double*)ADDR(0x17014050); /* 0x17108DE5: fadd qword ptr [0x17014050] */
    RECOMP_CALL(sub_1721B050); /* 0x17108DEB: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x17108DF0: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x17108DF3: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17108E23; /* 0x17108DF7: je 0x17108e23 */
L_17108DF9:
    edx = MEM32(ebx + 0xC); /* 0x17108DF9: mov edx, dword ptr [ebx + 0xc] */
    edx = MEM32(edx + 0x4); /* 0x17108DFC: mov edx, dword ptr [edx + 4] */
    edi = (uint32_t)LO16(eax); /* 0x17108DFF: movzx edi, ax */
    /* cmp MEM32(edx + 0x10), edi */ /* 0x17108E02: cmp dword ptr [edx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17108E1D; /* 0x17108E05: ja 0x17108e1d */
L_17108E07:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17108E07: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171096C0; /* 0x17108E0B: jl 0x171096c0 */
L_17108E11:
    MEM32(esi + 0x28) = 0x80004005u; /* 0x17108E11: mov dword ptr [esi + 0x28], 0x80004005 */
    goto L_171096C0; /* 0x17108E18: jmp 0x171096c0 */
L_17108E1D:
    MEM16(ecx + 0x2) = (uint16_t)(LO16(eax)); /* 0x17108E1D: mov word ptr [ecx + 2], ax */
    goto L_17108E46; /* 0x17108E21: jmp 0x17108e46 */
L_17108E23:
    /* test MEM8(esi + 0x134), 4 */ /* 0x17108E23: test byte ptr [esi + 0x134], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171096C0; /* 0x17108E2A: jne 0x171096c0 */
L_17108E30:
    goto L_17108E46; /* 0x17108E30: jmp 0x17108e46 */
L_17108E32:
    if (11u) _cf = (((edi) >> 21) & 1u); /* 0x17108E32: shl edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((edi << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 11u; /* 0x17108E32: shl edi, 0xb */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x17108E35: sar edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 31u);
    PUSH32(esp, edi); /* 0x17108E38: push edi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17108E39: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17108E3C: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17108E3E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17107E95); /* 0x17108E41: call 0x17107e95 */
    RECOMP_FLAGS_IN();
L_17108E46:
    edi = MEM32(ebx + 0x8); /* 0x17108E46: mov edi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17108E49: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x17108E4D: mov eax, dword ptr [ebx] */
    ecx = edi; /* 0x17108E4F: mov ecx, edi */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x17108E51: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x17108E51: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17108E54: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 0x10u */ /* 0x17108E55: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17108E58: mov dword ptr [ebp - 4], edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171096B4; /* 0x17108E5B: ja 0x171096b4 */
L_17108E61:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x171096C7)); goto _ljump; }
L_17108E68:
    PUSH32(esp, MEM32(eax)); /* 0x17108E68: push dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x17108E6A: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17108E6D: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FFFFFFu);
    edi = edi & 0x00FFFFFFu; /* 0x17108E6F: and edi, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17108E75: push edi */
    PUSH32(esp, ecx); /* 0x17108E76: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xE4)); /* 0x17108E77: call dword ptr [edx + 0xe4] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108E7D: jmp 0x1710941e */
L_17108E82:
    PUSH32(esp, MEM32(eax)); /* 0x17108E82: push dword ptr [eax] */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x17108E84: movzx eax, word ptr [ebp + 0x10] */
    ecx = MEM32(esi + 0x8); /* 0x17108E88: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17108E8B: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FFFFFFu);
    edi = edi & 0x00FFFFFFu; /* 0x17108E8D: and edi, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17108E93: push edi */
    PUSH32(esp, eax); /* 0x17108E94: push eax */
    PUSH32(esp, ecx); /* 0x17108E95: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x10C)); /* 0x17108E96: call dword ptr [edx + 0x10c] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108E9C: jmp 0x1710941e */
L_17108EA1:
    PUSH32(esp, MEM32(eax)); /* 0x17108EA1: push dword ptr [eax] */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x17108EA3: movzx eax, word ptr [ebp + 0x10] */
    ecx = MEM32(esi + 0x8); /* 0x17108EA7: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17108EAA: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FFFFFFu);
    edi = edi & 0x00FFFFFFu; /* 0x17108EAC: and edi, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17108EB2: push edi */
    PUSH32(esp, eax); /* 0x17108EB3: push eax */
    PUSH32(esp, ecx); /* 0x17108EB4: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x114)); /* 0x17108EB5: call dword ptr [edx + 0x114] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108EBB: jmp 0x1710941e */
L_17108EC0:
    ecx = MEM32(esi + 0x8); /* 0x17108EC0: mov ecx, dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17108EC3: fld dword ptr [eax] */
    edx = MEM32(ecx); /* 0x17108EC5: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17108EC7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17108EC8: fstp dword ptr [esp] */
    PUSH32(esp, ecx); /* 0x17108ECB: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x13C)); /* 0x17108ECC: call dword ptr [edx + 0x13c] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108ED2: jmp 0x1710941e */
L_17108ED7:
    ecx = MEM32(esi + 0x8); /* 0x17108ED7: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x17108EDA: push dword ptr [eax] */
    edx = MEM32(ecx); /* 0x17108EDC: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17108EDE: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x164)); /* 0x17108EDF: call dword ptr [edx + 0x164] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108EE5: jmp 0x1710941e */
L_17108EEA:
    PUSH32(esp, eax); /* 0x17108EEA: push eax */
    eax = ebp + (-0x64); /* 0x17108EEB: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x17108EEE: push eax */
    RECOMP_CALL(sub_170419F4); /* 0x17108EEF: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x06000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x06000000u; /* 0x17108EF4: sub edi, 0x6000000 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F2F; /* 0x17108EFA: je 0x17108f2f */
L_17108EFC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108EFC: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F27; /* 0x17108EFD: je 0x17108f27 */
L_17108EFF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108EFF: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F16; /* 0x17108F00: je 0x17108f16 */
L_17108F02:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108F02: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171096B4; /* 0x17108F03: jne 0x171096b4 */
L_17108F09:
    edx = ebp + (-0x64); /* 0x17108F09: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x17108F0C: push edx */
    edx = (uint32_t)MEM16(ebp + 0x10); /* 0x17108F0D: movzx edx, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x17108F11: add edx, 0x10 */
    _flag_k = FK_ADD;
    goto L_17108F24; /* 0x17108F14: jmp 0x17108f24 */
L_17108F16:
    edx = ebp + (-0x64); /* 0x17108F16: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x17108F19: push edx */
    edx = (uint32_t)MEM16(ebp + 0x10); /* 0x17108F1A: movzx edx, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x100u; /* 0x17108F1E: add edx, 0x100 */
    _flag_k = FK_ADD;
L_17108F24:
    PUSH32(esp, edx); /* 0x17108F24: push edx */
    goto L_17108F35; /* 0x17108F25: jmp 0x17108f35 */
L_17108F27:
    edx = ebp + (-0x64); /* 0x17108F27: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x17108F2A: push edx */
    PUSH32(esp, 2); /* 0x17108F2B: push 2 */
    goto L_17108F35; /* 0x17108F2D: jmp 0x17108f35 */
L_17108F2F:
    edx = ebp + (-0x64); /* 0x17108F2F: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x17108F32: push edx */
    PUSH32(esp, 3); /* 0x17108F33: push 3 */
L_17108F35:
    eax = MEM32(esi + 0x8); /* 0x17108F35: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x17108F38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17108F3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x17108F3B: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108F41: jmp 0x1710941e */
L_17108F46:
    ecx = (uint32_t)MEM16(esi + 0x5E); /* 0x17108F46: movzx ecx, word ptr [esi + 0x5e] */
    edx = MEM32(esi + 0xC4); /* 0x17108F4A: mov edx, dword ptr [esi + 0xc4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC4u); /* 0x17108F50: imul ecx, ecx, 0xc4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x07000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x07000000u; /* 0x17108F56: sub edi, 0x7000000 */
    _flag_k = FK_CMP;
    ecx = ecx + edx + 0x4C; /* 0x17108F5C: lea ecx, [ecx + edx + 0x4c] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F84; /* 0x17108F60: je 0x17108f84 */
L_17108F62:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108F62: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F7F; /* 0x17108F63: je 0x17108f7f */
L_17108F65:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108F65: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F7A; /* 0x17108F66: je 0x17108f7a */
L_17108F68:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108F68: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17108F75; /* 0x17108F69: je 0x17108f75 */
L_17108F6B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17108F6B: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17108FA7; /* 0x17108F6C: jne 0x17108fa7 */
L_17108F6E:
    eax = MEM32(eax); /* 0x17108F6E: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x40) = eax; /* 0x17108F70: mov dword ptr [ecx + 0x40], eax */
    goto L_17108FA7; /* 0x17108F73: jmp 0x17108fa7 */
L_17108F75:
    edi = ecx + 0x30; /* 0x17108F75: lea edi, [ecx + 0x30] */
    goto L_17108F86; /* 0x17108F78: jmp 0x17108f86 */
L_17108F7A:
    edi = ecx + 0x20; /* 0x17108F7A: lea edi, [ecx + 0x20] */
    goto L_17108F86; /* 0x17108F7D: jmp 0x17108f86 */
L_17108F7F:
    edi = ecx + 0x10; /* 0x17108F7F: lea edi, [ecx + 0x10] */
    goto L_17108F86; /* 0x17108F82: jmp 0x17108f86 */
L_17108F84:
    edi = ecx; /* 0x17108F84: mov edi, ecx */
L_17108F86:
    edx = MEM32(eax); /* 0x17108F86: mov edx, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = edx; /* 0x17108F88: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(eax + 0x4); /* 0x17108F8B: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x17108F8E: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(eax + 0x8); /* 0x17108F91: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x17108F94: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17108F97: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x17108F9A: mov dword ptr [ebp - 0xc], edx */
    esi = ebp + (-0x14); /* 0x17108F9D: lea esi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108FA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108FA1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108FA2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17108FA3: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x18)); /* 0x17108FA4: mov esi, dword ptr [ebp - 0x18] */
L_17108FA7:
    /* test MEM8(ebx + 0x12), 1 */ /* 0x17108FA7: test byte ptr [ebx + 0x12], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x12)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17108FBA; /* 0x17108FAB: jne 0x17108fba */
L_17108FAD:
    /* test MEM8(esi + 0x134), 4 */ /* 0x17108FAD: test byte ptr [esi + 0x134], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x17108FB4: je 0x171096b4 */
L_17108FBA:
    eax = MEM32(esi + 0x8); /* 0x17108FBA: mov eax, dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x17108FBD: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x17108FBF: push ecx */
    PUSH32(esp, eax); /* 0x17108FC0: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC4)); /* 0x17108FC1: call dword ptr [edx + 0xc4] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17108FC7: jmp 0x1710941e */
L_17108FCC:
    /* cmp edi, 0x0800000Du */ /* 0x17108FCC: cmp edi, 0x800000d */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0800000Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171090BC; /* 0x17108FD2: je 0x171090bc */
L_17108FD8:
    ecx = MEM32(ebx + 0xC); /* 0x17108FD8: mov ecx, dword ptr [ebx + 0xc] */
    ecx = (uint32_t)MEM16(ecx + 0x48); /* 0x17108FDB: movzx ecx, word ptr [ecx + 0x48] */
    edx = (uint32_t)MEM16(esi + 0x5E); /* 0x17108FDF: movzx edx, word ptr [esi + 0x5e] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68u); /* 0x17108FE3: imul ecx, ecx, 0x68 */
    edi = MEM32(esi + 0xC4); /* 0x17108FE6: mov edi, dword ptr [esi + 0xc4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC4u); /* 0x17108FEC: imul edx, edx, 0xc4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + edi + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + edi + 0x48); /* 0x17108FF2: add ecx, dword ptr [edx + edi + 0x48] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x17108FF6: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF8000000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xF8000000u; /* 0x17108FF9: add edx, 0xf8000000 */
    _flag_k = FK_ADD;
    /* cmp edx, 0xCu */ /* 0x17108FFF: cmp edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17109092; /* 0x17109002: ja 0x17109092 */
L_17109008:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1710970B)); goto _ljump; }
L_1710900F:
    eax = MEM32(eax); /* 0x1710900F: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x17109011: mov dword ptr [ecx], eax */
    goto L_17109092; /* 0x17109013: jmp 0x17109092 */
L_17109015:
    edi = ecx + 0x4; /* 0x17109015: lea edi, [ecx + 4] */
L_17109018:
    edx = MEM32(eax); /* 0x17109018: mov edx, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = edx; /* 0x1710901A: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(eax + 0x4); /* 0x1710901D: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x17109020: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(eax + 0x8); /* 0x17109023: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109026: mov eax, dword ptr [eax + 0xc] */
    esi = ebp + (-0x14); /* 0x17109029: lea esi, [ebp - 0x14] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1710902C: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1710902F: mov dword ptr [ebp - 8], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17109032: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1710905B; /* 0x17109033: jmp 0x1710905b */
L_17109035:
    edi = ecx + 0x14; /* 0x17109035: lea edi, [ecx + 0x14] */
    RECOMP_BACKEDGE();
    goto L_17109018; /* 0x17109038: jmp 0x17109018 */
L_1710903A:
    edi = ecx + 0x24; /* 0x1710903A: lea edi, [ecx + 0x24] */
    RECOMP_BACKEDGE();
    goto L_17109018; /* 0x1710903D: jmp 0x17109018 */
L_1710903F:
    edi = ecx + 0x34; /* 0x1710903F: lea edi, [ecx + 0x34] */
    goto L_17109047; /* 0x17109042: jmp 0x17109047 */
L_17109044:
    edi = ecx + 0x40; /* 0x17109044: lea edi, [ecx + 0x40] */
L_17109047:
    edx = MEM32(eax); /* 0x17109047: mov edx, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = edx; /* 0x17109049: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(eax + 0x4); /* 0x1710904C: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x1710904F: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0xC)) = edx; /* 0x17109052: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17109055: mov dword ptr [ebp - 8], eax */
    esi = ebp + (-0x10); /* 0x17109058: lea esi, [ebp - 0x10] */
L_1710905B:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710905B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710905C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710905D: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x18)); /* 0x1710905E: mov esi, dword ptr [ebp - 0x18] */
    goto L_17109092; /* 0x17109061: jmp 0x17109092 */
L_17109063:
    eax = MEM32(eax); /* 0x17109063: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x64) = eax; /* 0x17109065: mov dword ptr [ecx + 0x64], eax */
    goto L_17109092; /* 0x17109068: jmp 0x17109092 */
L_1710906A:
    eax = MEM32(eax); /* 0x1710906A: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x60) = eax; /* 0x1710906C: mov dword ptr [ecx + 0x60], eax */
    goto L_17109092; /* 0x1710906F: jmp 0x17109092 */
L_17109071:
    eax = MEM32(eax); /* 0x17109071: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x4C) = eax; /* 0x17109073: mov dword ptr [ecx + 0x4c], eax */
    goto L_17109092; /* 0x17109076: jmp 0x17109092 */
L_17109078:
    eax = MEM32(eax); /* 0x17109078: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x50) = eax; /* 0x1710907A: mov dword ptr [ecx + 0x50], eax */
    goto L_17109092; /* 0x1710907D: jmp 0x17109092 */
L_1710907F:
    eax = MEM32(eax); /* 0x1710907F: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x54) = eax; /* 0x17109081: mov dword ptr [ecx + 0x54], eax */
    goto L_17109092; /* 0x17109084: jmp 0x17109092 */
L_17109086:
    eax = MEM32(eax); /* 0x17109086: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x58) = eax; /* 0x17109088: mov dword ptr [ecx + 0x58], eax */
    goto L_17109092; /* 0x1710908B: jmp 0x17109092 */
L_1710908D:
    eax = MEM32(eax); /* 0x1710908D: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x5C) = eax; /* 0x1710908F: mov dword ptr [ecx + 0x5c], eax */
L_17109092:
    /* test MEM8(ebx + 0x12), 1 */ /* 0x17109092: test byte ptr [ebx + 0x12], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x12)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171090A5; /* 0x17109096: jne 0x171090a5 */
L_17109098:
    /* test MEM8(esi + 0x134), 4 */ /* 0x17109098: test byte ptr [esi + 0x134], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710909F: je 0x171096b4 */
L_171090A5:
    eax = MEM32(esi + 0x8); /* 0x171090A5: mov eax, dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x171090A8: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x171090AA: push ecx */
    ecx = (uint32_t)MEM16(ebp + 0x10); /* 0x171090AB: movzx ecx, word ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x171090AF: push ecx */
    PUSH32(esp, eax); /* 0x171090B0: push eax */
    RECOMP_ICALL(MEM32(edx + 0xCC)); /* 0x171090B1: call dword ptr [edx + 0xcc] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171090B7: jmp 0x1710941e */
L_171090BC:
    PUSH32(esp, MEM32(eax)); /* 0x171090BC: push dword ptr [eax] */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x171090BE: movzx eax, word ptr [ebp + 0x10] */
    ecx = MEM32(esi + 0x8); /* 0x171090C2: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x171090C5: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x171090C7: push eax */
    PUSH32(esp, ecx); /* 0x171090C8: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xD4)); /* 0x171090C9: call dword ptr [edx + 0xd4] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171090CF: jmp 0x1710941e */
L_171090D4:
    /* cmp MEM32(esi + 0x58), 2 */ /* 0x171090D4: cmp dword ptr [esi + 0x58], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17109120; /* 0x171090D8: jne 0x17109120 */
L_171090DA:
    eax = MEM32(esi + 0xC); /* 0x171090DA: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x171090DD: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x194); /* 0x171090DF: lea edx, [ebp - 0x194] */
    PUSH32(esp, edx); /* 0x171090E5: push edx */
    PUSH32(esp, eax); /* 0x171090E6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x171090E7: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171090EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x171090EC: mov dword ptr [ebp + 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171096B4; /* 0x171090EF: jl 0x171096b4 */
L_171090F5:
    eax = MEM32(ebx + 0xC); /* 0x171090F5: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x171090F8: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171090FB: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x171090FD: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17109113; /* 0x17109100: je 0x17109113 */
L_17109102:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17109102: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17109120; /* 0x17109103: jne 0x17109120 */
L_17109105:
    /* test MEM8(ebp + (-0x157)), 8 */ /* 0x17109105: test byte ptr [ebp - 0x157], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x157))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109120; /* 0x1710910C: jne 0x17109120 */
L_1710910E:
    goto L_17109202; /* 0x1710910E: jmp 0x17109202 */
L_17109113:
    /* test MEM8(ebp + (-0x157)), 0x20u */ /* 0x17109113: test byte ptr [ebp - 0x157], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x157))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109202; /* 0x1710911A: je 0x17109202 */
L_17109120:
    edx = MEM32(ebx + 0x1A); /* 0x17109120: mov edx, dword ptr [ebx + 0x1a] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x17109123: push dword ptr [edx + 4] */
    edx = (uint32_t)MEM16(ebp + 0x10); /* 0x17109126: movzx edx, word ptr [ebp + 0x10] */
    eax = MEM32(esi + 0x8); /* 0x1710912A: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1710912D: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1710912F: push edx */
    PUSH32(esp, eax); /* 0x17109130: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x17109131: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17109137: jmp 0x1710941e */
L_1710913C:
    /* cmp MEM32(esi + 0x58), 2 */ /* 0x1710913C: cmp dword ptr [esi + 0x58], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171091DC; /* 0x17109140: jne 0x171091dc */
L_17109146:
    eax = MEM32(ebx + 0x1A); /* 0x17109146: mov eax, dword ptr [ebx + 0x1a] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17109149: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(eax + 0x14), 1 */ /* 0x1710914D: test byte ptr [eax + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109202; /* 0x17109151: je 0x17109202 */
L_17109157:
    edi = MEM32(eax + 0x4); /* 0x17109157: mov edi, dword ptr [eax + 4] */
    /* test edi, edi */ /* 0x1710915A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171091B6; /* 0x1710915C: je 0x171091b6 */
L_1710915E:
    /* test MEM8(esi + 0x25), 8 */ /* 0x1710915E: test byte ptr [esi + 0x25], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x25)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171091AA; /* 0x17109162: je 0x171091aa */
L_17109164:
    eax = MEM32(edi); /* 0x17109164: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17109166: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0x10; /* 0x1710916A: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1710916D: push ecx */
    PUSH32(esp, 0); /* 0x1710916E: push 0 */
    PUSH32(esp, edi); /* 0x17109170: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17109171: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17109174: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x17109176: mov dword ptr [ebp + 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171096B4; /* 0x17109179: jl 0x171096b4 */
L_1710917F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710917F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B01C); /* 0x17109182: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17109187: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17109189: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1710918A: mov dword ptr [ebp + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710919B; /* 0x1710918D: jne 0x1710919b */
L_1710918F:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1710918F: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_171096B4; /* 0x17109196: jmp 0x171096b4 */
L_1710919B:
    eax = MEM32(edi); /* 0x1710919B: mov eax, dword ptr [edi] */
    ecx = ebp + 0x10; /* 0x1710919D: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x171091A0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171091A1: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171091A4: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171091A5: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_171091B6; /* 0x171091A8: jmp 0x171091b6 */
L_171091AA:
    eax = MEM32(eax + 0x8); /* 0x171091AA: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x171091AD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171091AF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171091B0: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x171091B3: mov dword ptr [ebp + 8], eax */
L_171091B6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171091B6: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x171091B9: mov ecx, esi */
    RECOMP_CALL(sub_1710B925); /* 0x171091BB: call 0x1710b925 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x25), 8 */ /* 0x171091C0: test byte ptr [esi + 0x25], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x25)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0xC) = eax; /* 0x171091C4: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171091D2; /* 0x171091C7: je 0x171091d2 */
L_171091C9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171091C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x171091CC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171091D1: pop ecx */
L_171091D2:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171091D2: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171096B4; /* 0x171091D6: jl 0x171096b4 */
L_171091DC:
    edx = MEM32(ebx + 0x1A); /* 0x171091DC: mov edx, dword ptr [ebx + 0x1a] */
    eax = MEM32(esi + 0x8); /* 0x171091DF: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x171091E2: push dword ptr [edx + 4] */
    ecx = MEM32(eax); /* 0x171091E5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171091E7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x170)); /* 0x171091E8: call dword ptr [ecx + 0x170] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171091EE: jmp 0x1710941e */
L_171091F3:
    /* cmp MEM32(esi + 0x58), 2 */ /* 0x171091F3: cmp dword ptr [esi + 0x58], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710920E; /* 0x171091F7: jne 0x1710920e */
L_171091F9:
    eax = MEM32(ebx + 0x1A); /* 0x171091F9: mov eax, dword ptr [ebx + 0x1a] */
    /* test MEM8(eax + 0x14), 1 */ /* 0x171091FC: test byte ptr [eax + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710920E; /* 0x17109200: jne 0x1710920e */
L_17109202:
    MEM32(ebp + 0xC) = 0x80004005u; /* 0x17109202: mov dword ptr [ebp + 0xc], 0x80004005 */
    goto L_171096B4; /* 0x17109209: jmp 0x171096b4 */
L_1710920E:
    edx = MEM32(ebx + 0x1A); /* 0x1710920E: mov edx, dword ptr [ebx + 0x1a] */
    eax = MEM32(esi + 0x8); /* 0x17109211: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x17109214: push dword ptr [edx + 4] */
    ecx = MEM32(eax); /* 0x17109217: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109219: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x1710921A: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x17109220: jmp 0x1710941e */
L_17109225:
    edx = MEM32(esi + 0x134); /* 0x17109225: mov edx, dword ptr [esi + 0x134] */
    if (29u) _cf = (((edx) >> 3) & 1u); /* 0x1710922B: shl edx, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((edx << 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 29u; /* 0x1710922B: shl edx, 0x1d */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1710922E: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    ecx = 0x00010000u; /* 0x17109231: mov ecx, 0x10000 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17109241; /* 0x17109236: jne 0x17109241 */
L_17109238:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x17109238: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710923B: je 0x171096b4 */
L_17109241:
    /* cmp edi, 0x0C000000u */ /* 0x17109241: cmp edi, 0xc000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171092EB; /* 0x17109247: je 0x171092eb */
L_1710924D:
    /* cmp edi, 0x0C010000u */ /* 0x1710924D: cmp edi, 0xc010000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0C010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171092A6; /* 0x17109253: je 0x171092a6 */
L_17109255:
    /* cmp edi, 0x0C020000u */ /* 0x17109255: cmp edi, 0xc020000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0C020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710925B: jne 0x171096b4 */
L_17109261:
    edi = MEM32(ebp + 0x8); /* 0x17109261: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x36), 0 */ /* 0x17109264: cmp byte ptr [edi + 0x36], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x36)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109285; /* 0x17109268: je 0x17109285 */
L_1710926A:
    /* test edx, edx */ /* 0x1710926A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109285; /* 0x1710926C: jne 0x17109285 */
L_1710926E:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x1710926E: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109285; /* 0x17109271: je 0x17109285 */
L_17109273:
    edi = (uint32_t)MEM16(edi + 0x28); /* 0x17109273: movzx edi, word ptr [edi + 0x28] */
    PUSH32(esp, edi); /* 0x17109277: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x17109278: movzx edi, word ptr [ebx + 0x14] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1710927C: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1710927C: shl edi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1710927F: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x17109281: push eax */
    PUSH32(esp, edx); /* 0x17109282: push edx */
    goto L_17109295; /* 0x17109283: jmp 0x17109295 */
L_17109285:
    edi = MEM32(ebx + 0x10); /* 0x17109285: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x17109288: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1710928E: push edi */
    PUSH32(esp, eax); /* 0x1710928F: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x17109290: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17109294: push eax */
L_17109295:
    ecx = MEM32(esi + 0x8); /* 0x17109295: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17109298: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1710929A: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x180)); /* 0x1710929B: call dword ptr [edx + 0x180] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171092A1: jmp 0x1710941e */
L_171092A6:
    edi = MEM32(ebp + 0x8); /* 0x171092A6: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x35), 0 */ /* 0x171092A9: cmp byte ptr [edi + 0x35], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x35)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171092CA; /* 0x171092AD: je 0x171092ca */
L_171092AF:
    /* test edx, edx */ /* 0x171092AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171092CA; /* 0x171092B1: jne 0x171092ca */
L_171092B3:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x171092B3: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171092CA; /* 0x171092B6: je 0x171092ca */
L_171092B8:
    edi = (uint32_t)MEM16(edi + 0x26); /* 0x171092B8: movzx edi, word ptr [edi + 0x26] */
    PUSH32(esp, edi); /* 0x171092BC: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x171092BD: movzx edi, word ptr [ebx + 0x14] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171092C1: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171092C1: shl edi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171092C4: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171092C6: push eax */
    PUSH32(esp, edx); /* 0x171092C7: push edx */
    goto L_171092DA; /* 0x171092C8: jmp 0x171092da */
L_171092CA:
    edi = MEM32(ebx + 0x10); /* 0x171092CA: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x171092CD: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171092D3: push edi */
    PUSH32(esp, eax); /* 0x171092D4: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x171092D5: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171092D9: push eax */
L_171092DA:
    ecx = MEM32(esi + 0x8); /* 0x171092DA: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x171092DD: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171092DF: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x188)); /* 0x171092E0: call dword ptr [edx + 0x188] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171092E6: jmp 0x1710941e */
L_171092EB:
    edi = MEM32(ebp + 0x8); /* 0x171092EB: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x34), 0 */ /* 0x171092EE: cmp byte ptr [edi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x34)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710930F; /* 0x171092F2: je 0x1710930f */
L_171092F4:
    /* test edx, edx */ /* 0x171092F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710930F; /* 0x171092F6: jne 0x1710930f */
L_171092F8:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x171092F8: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710930F; /* 0x171092FB: je 0x1710930f */
L_171092FD:
    edi = (uint32_t)MEM16(edi + 0x24); /* 0x171092FD: movzx edi, word ptr [edi + 0x24] */
    PUSH32(esp, edi); /* 0x17109301: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x17109302: movzx edi, word ptr [ebx + 0x14] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x17109306: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x17109306: shl edi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17109309: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1710930B: push eax */
    PUSH32(esp, edx); /* 0x1710930C: push edx */
    goto L_1710931F; /* 0x1710930D: jmp 0x1710931f */
L_1710930F:
    edi = MEM32(ebx + 0x10); /* 0x1710930F: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x17109312: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17109318: push edi */
    PUSH32(esp, eax); /* 0x17109319: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x1710931A: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1710931E: push eax */
L_1710931F:
    ecx = MEM32(esi + 0x8); /* 0x1710931F: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17109322: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17109324: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x178)); /* 0x17109325: call dword ptr [edx + 0x178] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x1710932B: jmp 0x1710941e */
L_17109330:
    edx = MEM32(esi + 0x134); /* 0x17109330: mov edx, dword ptr [esi + 0x134] */
    if (29u) _cf = (((edx) >> 3) & 1u); /* 0x17109336: shl edx, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((edx << 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 29u; /* 0x17109336: shl edx, 0x1d */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x17109339: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    ecx = 0x00010000u; /* 0x1710933C: mov ecx, 0x10000 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1710934C; /* 0x17109341: jne 0x1710934c */
L_17109343:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x17109343: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x17109346: je 0x171096b4 */
L_1710934C:
    /* cmp edi, 0x0D000000u */ /* 0x1710934C: cmp edi, 0xd000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0D000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171093F0; /* 0x17109352: je 0x171093f0 */
L_17109358:
    /* cmp edi, 0x0D010000u */ /* 0x17109358: cmp edi, 0xd010000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0D010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171093AE; /* 0x1710935E: je 0x171093ae */
L_17109360:
    /* cmp edi, 0x0D020000u */ /* 0x17109360: cmp edi, 0xd020000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0D020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171096B4; /* 0x17109366: jne 0x171096b4 */
L_1710936C:
    edi = MEM32(ebp + 0x8); /* 0x1710936C: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x3A), 0 */ /* 0x1710936F: cmp byte ptr [edi + 0x3a], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3A)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109390; /* 0x17109373: je 0x17109390 */
L_17109375:
    /* test edx, edx */ /* 0x17109375: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109390; /* 0x17109377: jne 0x17109390 */
L_17109379:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x17109379: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109390; /* 0x1710937C: je 0x17109390 */
L_1710937E:
    edi = (uint32_t)MEM16(edi + 0x30); /* 0x1710937E: movzx edi, word ptr [edi + 0x30] */
    PUSH32(esp, edi); /* 0x17109382: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x17109383: movzx edi, word ptr [ebx + 0x14] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x17109387: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x17109387: shl edi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1710938A: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1710938C: push eax */
    PUSH32(esp, edx); /* 0x1710938D: push edx */
    goto L_171093A0; /* 0x1710938E: jmp 0x171093a0 */
L_17109390:
    edi = MEM32(ebx + 0x10); /* 0x17109390: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x17109393: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17109399: push edi */
    PUSH32(esp, eax); /* 0x1710939A: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x1710939B: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1710939F: push eax */
L_171093A0:
    ecx = MEM32(esi + 0x8); /* 0x171093A0: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x171093A3: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171093A5: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x1BC)); /* 0x171093A6: call dword ptr [edx + 0x1bc] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171093AC: jmp 0x1710941e */
L_171093AE:
    edi = MEM32(ebp + 0x8); /* 0x171093AE: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x39), 0 */ /* 0x171093B1: cmp byte ptr [edi + 0x39], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x39)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171093D2; /* 0x171093B5: je 0x171093d2 */
L_171093B7:
    /* test edx, edx */ /* 0x171093B7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171093D2; /* 0x171093B9: jne 0x171093d2 */
L_171093BB:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x171093BB: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171093D2; /* 0x171093BE: je 0x171093d2 */
L_171093C0:
    edi = (uint32_t)MEM16(edi + 0x2E); /* 0x171093C0: movzx edi, word ptr [edi + 0x2e] */
    PUSH32(esp, edi); /* 0x171093C4: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x171093C5: movzx edi, word ptr [ebx + 0x14] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171093C9: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171093C9: shl edi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171093CC: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171093CE: push eax */
    PUSH32(esp, edx); /* 0x171093CF: push edx */
    goto L_171093E2; /* 0x171093D0: jmp 0x171093e2 */
L_171093D2:
    edi = MEM32(ebx + 0x10); /* 0x171093D2: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x171093D5: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171093DB: push edi */
    PUSH32(esp, eax); /* 0x171093DC: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x171093DD: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171093E1: push eax */
L_171093E2:
    ecx = MEM32(esi + 0x8); /* 0x171093E2: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x171093E5: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171093E7: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x1C4)); /* 0x171093E8: call dword ptr [edx + 0x1c4] */
    RECOMP_FLAGS_IN();
    goto L_1710941E; /* 0x171093EE: jmp 0x1710941e */
L_171093F0:
    edi = MEM32(ebp + 0x8); /* 0x171093F0: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x38), 0 */ /* 0x171093F3: cmp byte ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x38)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109426; /* 0x171093F7: je 0x17109426 */
L_171093F9:
    /* test edx, edx */ /* 0x171093F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109426; /* 0x171093FB: jne 0x17109426 */
L_171093FD:
    /* test MEM32(ebx + 0x10), ecx */ /* 0x171093FD: test dword ptr [ebx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109426; /* 0x17109400: je 0x17109426 */
L_17109402:
    edi = (uint32_t)MEM16(edi + 0x2C); /* 0x17109402: movzx edi, word ptr [edi + 0x2c] */
    PUSH32(esp, edi); /* 0x17109406: push edi */
    edi = (uint32_t)MEM16(ebx + 0x14); /* 0x17109407: movzx edi, word ptr [ebx + 0x14] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1710940B: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1710940B: shl edi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1710940E: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x17109410: push eax */
    PUSH32(esp, edx); /* 0x17109411: push edx */
L_17109412:
    ecx = MEM32(esi + 0x8); /* 0x17109412: mov ecx, dword ptr [esi + 8] */
    edx = MEM32(ecx); /* 0x17109415: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17109417: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x1B4)); /* 0x17109418: call dword ptr [edx + 0x1b4] */
    RECOMP_FLAGS_IN();
L_1710941E:
    MEM32(ebp + 0xC) = eax; /* 0x1710941E: mov dword ptr [ebp + 0xc], eax */
    goto L_171096B4; /* 0x17109421: jmp 0x171096b4 */
L_17109426:
    edi = MEM32(ebx + 0x10); /* 0x17109426: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x17109429: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1710942F: push edi */
    PUSH32(esp, eax); /* 0x17109430: push eax */
    eax = (uint32_t)MEM16(ebp + 0x10); /* 0x17109431: movzx eax, word ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17109435: push eax */
    RECOMP_BACKEDGE();
    goto L_17109412; /* 0x17109436: jmp 0x17109412 */
L_17109438:
    SET_LO16(ecx, MEM16(eax)); /* 0x17109438: mov cx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1710943B: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710943E: je 0x171096b4 */
L_17109444:
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x17109444: movzx eax, word ptr [eax + 2] */
    edx = MEM32(ebx + 0x1A); /* 0x17109448: mov edx, dword ptr [ebx + 0x1a] */
    ecx = (uint32_t)LO16(ecx); /* 0x1710944B: movzx ecx, cx */
    edi = eax + ecx + (-0x1); /* 0x1710944E: lea edi, [eax + ecx - 1] */
    ecx = MEM32(esi + 0x48); /* 0x17109452: mov ecx, dword ptr [esi + 0x48] */
    eax = edi; /* 0x17109455: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6Cu); /* 0x17109457: imul eax, eax, 0x6c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1710945A: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp edi, edx */ /* 0x1710945C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x1710945E: mov dword ptr [ebp + 8], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710948E; /* 0x17109461: je 0x1710948e */
L_17109463:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x17109463: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109472; /* 0x17109466: je 0x17109472 */
L_17109468:
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6Cu); /* 0x17109468: imul edx, edx, 0x6c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x48); /* 0x1710946B: add edx, dword ptr [esi + 0x48] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0xFFFFFFFEu; /* 0x1710946E: and dword ptr [edx + 0xc], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109472:
    MEM32(ebx + 0x1A) = edi; /* 0x17109472: mov dword ptr [ebx + 0x1a], edi */
    _flag_a = (uint32_t)((MEM32(ecx + 0xC) | 1)); _flag_b = (uint32_t)((MEM32(ecx + 0xC) | 1));
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 1; /* 0x17109475: or dword ptr [ecx + 0xc], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi + 0x48); /* 0x17109479: mov edx, dword ptr [esi + 0x48] */
    /* test MEM8(edx + eax + 0xC), 4 */ /* 0x1710947C: test byte ptr [edx + eax + 0xc], 4 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0xC)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi + 0x60); /* 0x17109481: mov eax, dword ptr [esi + 0x60] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710948B; /* 0x17109484: je 0x1710948b */
L_17109486:
    MEM32(eax + 0x8) = ecx; /* 0x17109486: mov dword ptr [eax + 8], ecx */
    goto L_1710948E; /* 0x17109489: jmp 0x1710948e */
L_1710948B:
    MEM32(eax + 0xC) = ecx; /* 0x1710948B: mov dword ptr [eax + 0xc], ecx */
L_1710948E:
    PUSH32(esp, 0xFFFFu); /* 0x1710948E: push 0xffff */
    PUSH32(esp, ecx); /* 0x17109493: push ecx */
    goto L_171094D1; /* 0x17109494: jmp 0x171094d1 */
L_17109496:
    SET_LO16(ecx, MEM16(eax)); /* 0x17109496: mov cx, word ptr [eax] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x17109499: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710949C: je 0x171096b4 */
L_171094A2:
    /* cmp MEM32(esi + 0x58), 4 */ /* 0x171094A2: cmp dword ptr [esi + 0x58], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171094BC; /* 0x171094A6: jne 0x171094bc */
L_171094A8:
    eax = ebx + 0x20; /* 0x171094A8: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x171094AB: push eax */
    PUSH32(esp, ebx); /* 0x171094AC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171094AD: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x171094B0: mov ecx, esi */
    RECOMP_CALL(sub_17108460); /* 0x171094B2: call 0x17108460 */
    RECOMP_FLAGS_IN();
    goto L_171096B4; /* 0x171094B7: jmp 0x171096b4 */
L_171094BC:
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x171094BC: movzx eax, word ptr [eax + 2] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171094C0: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x171094C3: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171094C6: dec eax */
    _flag_k = FK_DEC;
    eax = (uint32_t)LO16(eax); /* 0x171094C7: movzx eax, ax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6Cu); /* 0x171094CA: imul eax, eax, 0x6c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x48); /* 0x171094CD: add eax, dword ptr [esi + 0x48] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171094D0: push eax */
L_171094D1:
    ecx = esi; /* 0x171094D1: mov ecx, esi */
    RECOMP_CALL(sub_171088EC); /* 0x171094D3: call 0x171088ec */
    RECOMP_FLAGS_IN();
    goto L_171096B4; /* 0x171094D8: jmp 0x171096b4 */
L_171094DD:
    ebx = MEM32(ebx + 0x16); /* 0x171094DD: mov ebx, dword ptr [ebx + 0x16] */
    eax = MEM32(ebx); /* 0x171094E0: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171094E2: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171094E3: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171094E6: mov ebx, eax */
    /* cmp MEM32(ebx + 0x4C), 0 */ /* 0x171094E8: cmp dword ptr [ebx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109531; /* 0x171094EC: je 0x17109531 */
L_171094EE:
    eax = MEM32(ebx + 0x28); /* 0x171094EE: mov eax, dword ptr [ebx + 0x28] */
    ecx = MEM32(ebp + 0x8); /* 0x171094F1: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x171094F4: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x5C); /* 0x171094F6: mov edi, dword ptr [ebx + 0x5c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171094F9: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171094FB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi); /* 0x171094FE: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17109500: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x17109503: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109531; /* 0x17109505: jbe 0x17109531 */
L_17109507:
    MEM32(ebp + 0x10) = eax; /* 0x17109507: mov dword ptr [ebp + 0x10], eax */
L_1710950A:
    ecx = MEM32(edi); /* 0x1710950A: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1710950C: push dword ptr [edi + 4] */
    eax = MEM32(esi + 0x8); /* 0x1710950F: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x17109512: mov eax, dword ptr [eax] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x17109514: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x17109514: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x17109517: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1710951A: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x1710951B: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710951D: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x1B4)); /* 0x17109520: call dword ptr [eax + 0x1b4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x17109526: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17109529: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x1710952C: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710950A; /* 0x1710952F: jne 0x1710950a */
L_17109531:
    /* cmp MEM32(ebx + 0x50), 0 */ /* 0x17109531: cmp dword ptr [ebx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710957A; /* 0x17109535: je 0x1710957a */
L_17109537:
    eax = MEM32(ebx + 0x2C); /* 0x17109537: mov eax, dword ptr [ebx + 0x2c] */
    ecx = MEM32(ebp + 0x8); /* 0x1710953A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x1710953D: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x60); /* 0x1710953F: mov edi, dword ptr [ebx + 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x17109542: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x17109544: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi); /* 0x17109547: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17109549: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1710954C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710957A; /* 0x1710954E: jbe 0x1710957a */
L_17109550:
    MEM32(ebp + 0x10) = eax; /* 0x17109550: mov dword ptr [ebp + 0x10], eax */
L_17109553:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x17109553: push dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x17109556: mov ecx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x4)); /* 0x17109558: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x8); /* 0x1710955B: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x1710955E: mov eax, dword ptr [eax] */
    ecx = edx + ecx * 4; /* 0x17109560: lea ecx, [edx + ecx*4] */
    PUSH32(esp, ecx); /* 0x17109563: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x17109564: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17109566: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x1C4)); /* 0x17109569: call dword ptr [eax + 0x1c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1710956F: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17109572: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x17109575: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17109553; /* 0x17109578: jne 0x17109553 */
L_1710957A:
    /* cmp MEM32(ebx + 0x54), 0 */ /* 0x1710957A: cmp dword ptr [ebx + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710957E: je 0x171096b4 */
L_17109584:
    eax = MEM32(ebx + 0x30); /* 0x17109584: mov eax, dword ptr [ebx + 0x30] */
    ecx = MEM32(ebp + 0x8); /* 0x17109587: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x1710958A: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x64); /* 0x1710958C: mov edi, dword ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1710958F: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x17109591: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi); /* 0x17109594: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17109596: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x17109599: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x1710959B: jbe 0x171096b4 */
L_171095A1:
    MEM32(ebp + 0x8) = eax; /* 0x171095A1: mov dword ptr [ebp + 8], eax */
L_171095A4:
    ecx = MEM32(edi); /* 0x171095A4: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171095A6: push dword ptr [edi + 4] */
    eax = MEM32(esi + 0x8); /* 0x171095A9: mov eax, dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x171095AC: mov edx, dword ptr [eax] */
    ebx = ecx; /* 0x171095AE: mov ebx, ecx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x171095B0: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x171095B0: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x10); /* 0x171095B3: add ebx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171095B6: push ebx */
    PUSH32(esp, ecx); /* 0x171095B7: push ecx */
    PUSH32(esp, eax); /* 0x171095B8: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1BC)); /* 0x171095B9: call dword ptr [edx + 0x1bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171095BF: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171095C2: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x171095C5: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171095A4; /* 0x171095C8: jne 0x171095a4 */
L_171095CA:
    goto L_171096B4; /* 0x171095CA: jmp 0x171096b4 */
L_171095CF:
    ebx = MEM32(ebx + 0x16); /* 0x171095CF: mov ebx, dword ptr [ebx + 0x16] */
    eax = MEM32(ebx); /* 0x171095D2: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171095D4: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171095D5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171095D8: mov ebx, eax */
    /* cmp MEM32(ebx + 0x4C), 0 */ /* 0x171095DA: cmp dword ptr [ebx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109623; /* 0x171095DE: je 0x17109623 */
L_171095E0:
    eax = MEM32(ebx + 0x28); /* 0x171095E0: mov eax, dword ptr [ebx + 0x28] */
    ecx = MEM32(ebp + 0x8); /* 0x171095E3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x171095E6: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x5C); /* 0x171095E8: mov edi, dword ptr [ebx + 0x5c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171095EB: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171095ED: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi); /* 0x171095F0: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171095F2: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171095F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109623; /* 0x171095F7: jbe 0x17109623 */
L_171095F9:
    MEM32(ebp + 0x10) = eax; /* 0x171095F9: mov dword ptr [ebp + 0x10], eax */
L_171095FC:
    ecx = MEM32(edi); /* 0x171095FC: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171095FE: push dword ptr [edi + 4] */
    eax = MEM32(esi + 0x8); /* 0x17109601: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x17109604: mov eax, dword ptr [eax] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x17109606: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x17109606: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x17109609: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1710960C: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x1710960D: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710960F: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x178)); /* 0x17109612: call dword ptr [eax + 0x178] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x17109618: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1710961B: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x1710961E: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171095FC; /* 0x17109621: jne 0x171095fc */
L_17109623:
    /* cmp MEM32(ebx + 0x50), 0 */ /* 0x17109623: cmp dword ptr [ebx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710966C; /* 0x17109627: je 0x1710966c */
L_17109629:
    eax = MEM32(ebx + 0x2C); /* 0x17109629: mov eax, dword ptr [ebx + 0x2c] */
    ecx = MEM32(ebp + 0x8); /* 0x1710962C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x1710962F: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x60); /* 0x17109631: mov edi, dword ptr [ebx + 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x17109634: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x17109636: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi); /* 0x17109639: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1710963B: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1710963E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710966C; /* 0x17109640: jbe 0x1710966c */
L_17109642:
    MEM32(ebp + 0x10) = eax; /* 0x17109642: mov dword ptr [ebp + 0x10], eax */
L_17109645:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x17109645: push dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x17109648: mov ecx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x4)); /* 0x1710964A: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x8); /* 0x1710964D: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x17109650: mov eax, dword ptr [eax] */
    ecx = edx + ecx * 4; /* 0x17109652: lea ecx, [edx + ecx*4] */
    PUSH32(esp, ecx); /* 0x17109655: push ecx */
    PUSH32(esp, MEM32(edi)); /* 0x17109656: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17109658: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x188)); /* 0x1710965B: call dword ptr [eax + 0x188] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x17109661: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17109664: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x17109667: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17109645; /* 0x1710966A: jne 0x17109645 */
L_1710966C:
    /* cmp MEM32(ebx + 0x54), 0 */ /* 0x1710966C: cmp dword ptr [ebx + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171096B4; /* 0x17109670: je 0x171096b4 */
L_17109672:
    eax = MEM32(ebx + 0x30); /* 0x17109672: mov eax, dword ptr [ebx + 0x30] */
    ecx = MEM32(ebp + 0x8); /* 0x17109675: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx); /* 0x17109678: add eax, dword ptr [ecx] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x64); /* 0x1710967A: mov edi, dword ptr [ebx + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1710967D: add edi, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1710967F: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(edi); /* 0x17109682: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17109684: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x17109687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171096B4; /* 0x17109689: jbe 0x171096b4 */
L_1710968B:
    MEM32(ebp + 0x8) = eax; /* 0x1710968B: mov dword ptr [ebp + 8], eax */
L_1710968E:
    ecx = MEM32(edi); /* 0x1710968E: mov ecx, dword ptr [edi] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x17109690: push dword ptr [edi + 4] */
    eax = MEM32(esi + 0x8); /* 0x17109693: mov eax, dword ptr [esi + 8] */
    edx = MEM32(eax); /* 0x17109696: mov edx, dword ptr [eax] */
    ebx = ecx; /* 0x17109698: mov ebx, ecx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1710969A: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1710969A: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x10); /* 0x1710969D: add ebx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171096A0: push ebx */
    PUSH32(esp, ecx); /* 0x171096A1: push ecx */
    PUSH32(esp, eax); /* 0x171096A2: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1BC)); /* 0x171096A3: call dword ptr [edx + 0x1bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171096A9: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171096AC: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x171096AF: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710968E; /* 0x171096B2: jne 0x1710968e */
L_171096B4:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x171096B4: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171096C0; /* 0x171096B8: jl 0x171096c0 */
L_171096BA:
    eax = MEM32(ebp + 0xC); /* 0x171096BA: mov eax, dword ptr [ebp + 0xc] */
L_171096BD:
    MEM32(esi + 0x28) = eax; /* 0x171096BD: mov dword ptr [esi + 0x28], eax */
L_171096C0:
    edi = POP32_VAL(esp); /* 0x171096C0: pop edi */
    esi = POP32_VAL(esp); /* 0x171096C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171096C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171096C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171096C4: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x17108E68u: goto L_17108E68;
      case 0x17108E82u: goto L_17108E82;
      case 0x17108EA1u: goto L_17108EA1;
      case 0x17108EC0u: goto L_17108EC0;
      case 0x17108ED7u: goto L_17108ED7;
      case 0x17108EEAu: goto L_17108EEA;
      case 0x17108F46u: goto L_17108F46;
      case 0x17108FCCu: goto L_17108FCC;
      case 0x1710900Fu: goto L_1710900F;
      case 0x17109015u: goto L_17109015;
      case 0x17109035u: goto L_17109035;
      case 0x1710903Au: goto L_1710903A;
      case 0x1710903Fu: goto L_1710903F;
      case 0x17109044u: goto L_17109044;
      case 0x17109063u: goto L_17109063;
      case 0x1710906Au: goto L_1710906A;
      case 0x17109071u: goto L_17109071;
      case 0x17109078u: goto L_17109078;
      case 0x1710907Fu: goto L_1710907F;
      case 0x17109086u: goto L_17109086;
      case 0x1710908Du: goto L_1710908D;
      case 0x171090D4u: goto L_171090D4;
      case 0x1710913Cu: goto L_1710913C;
      case 0x171091F3u: goto L_171091F3;
      case 0x17109225u: goto L_17109225;
      case 0x17109330u: goto L_17109330;
      case 0x17109438u: goto L_17109438;
      case 0x17109496u: goto L_17109496;
      case 0x171094DDu: goto L_171094DD;
      case 0x171095CFu: goto L_171095CF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17109744(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109744u);

L_17109744:
    edi = edi; /* 0x17109744: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109746: push ebp */
    ebp = esp; /* 0x17109747: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17109749: push ecx */
    PUSH32(esp, ecx); /* 0x1710974A: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710974B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710974F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17109750: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x17109753: mov eax, dword ptr [ebx + 8] */
    edx = MEM32(ebx); /* 0x17109756: mov edx, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17109758: push esi */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x17109759: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x17109759: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xCu; /* 0x1710975C: sub eax, 0xc */
    _flag_k = FK_CMP;
    esi = ecx; /* 0x1710975F: mov esi, ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x17109761: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + 0xC) = edx; /* 0x17109764: mov dword ptr [ebp + 0xc], edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710979A; /* 0x17109767: je 0x1710979a */
L_17109769:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17109769: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171097A1; /* 0x1710976A: je 0x171097a1 */
L_1710976C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1710976C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1710976D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17109786; /* 0x1710976E: je 0x17109786 */
L_17109770:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17109770: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710992A; /* 0x17109774: jl 0x1710992a */
L_1710977A:
    MEM32(esi + 0x28) = 0x80004005u; /* 0x1710977A: mov dword ptr [esi + 0x28], 0x80004005 */
    goto L_1710992A; /* 0x17109781: jmp 0x1710992a */
L_17109786:
    eax = ebx + 0x20; /* 0x17109786: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x17109789: push eax */
    PUSH32(esp, ebx); /* 0x1710978A: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1710978B: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1710978E: mov ecx, esi */
    RECOMP_CALL(sub_17108460); /* 0x17109790: call 0x17108460 */
    RECOMP_FLAGS_IN();
    goto L_1710992A; /* 0x17109795: jmp 0x1710992a */
L_1710979A:
    MEM32(ebp + (-0x4)) = 1; /* 0x1710979A: mov dword ptr [ebp - 4], 1 */
L_171097A1:
    eax = MEM32(ebx + 0xC); /* 0x171097A1: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax + 0x38); /* 0x171097A4: mov ecx, dword ptr [eax + 0x38] */
    PUSH32(esp, edi); /* 0x171097A7: push edi */
    edi = MEM32(eax + 0x30); /* 0x171097A8: mov edi, dword ptr [eax + 0x30] */
    edi = MEM32(edi + 0x8); /* 0x171097AB: mov edi, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x18); /* 0x171097AE: mov eax, dword ptr [eax + 0x18] */
    MEM32(ebp + 0x8) = edi; /* 0x171097B1: mov dword ptr [ebp + 8], edi */
    edi = MEM32(esi + 0xD0); /* 0x171097B4: mov edi, dword ptr [esi + 0xd0] */
    eax = MEM32(edi + eax * 4); /* 0x171097BA: mov eax, dword ptr [edi + eax*4] */
    edi = MEM32(eax + 0x50); /* 0x171097BD: mov edi, dword ptr [eax + 0x50] */
    eax = MEM32(ebx + 0x8); /* 0x171097C0: mov eax, dword ptr [ebx + 8] */
    /* cmp eax, 0x0C000000u */ /* 0x171097C3: cmp eax, 0xc000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710989D; /* 0x171097C8: je 0x1710989d */
L_171097CE:
    /* cmp eax, 0x0C010000u */ /* 0x171097CE: cmp eax, 0xc010000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710984E; /* 0x171097D3: je 0x1710984e */
L_171097D5:
    /* cmp eax, 0x0C020000u */ /* 0x171097D5: cmp eax, 0xc020000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0C020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171097FF; /* 0x171097DA: je 0x171097ff */
L_171097DC:
    /* cmp eax, 0x0D000000u */ /* 0x171097DC: cmp eax, 0xd000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0D000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710989D; /* 0x171097E1: je 0x1710989d */
L_171097E7:
    /* cmp eax, 0x0D010000u */ /* 0x171097E7: cmp eax, 0xd010000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0D010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710984E; /* 0x171097EC: je 0x1710984e */
L_171097EE:
    /* cmp eax, 0x0D020000u */ /* 0x171097EE: cmp eax, 0xd020000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0D020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171097FF; /* 0x171097F3: je 0x171097ff */
L_171097F5:
    eax = 0x80004005u; /* 0x171097F5: mov eax, 0x80004005 */
    goto L_17109920; /* 0x171097FA: jmp 0x17109920 */
L_171097FF:
    PUSH32(esp, edi); /* 0x171097FF: push edi */
    eax = ebp + 0x8; /* 0x17109800: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17109803: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17109804: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x17109807: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, ecx); /* 0x1710980A: push ecx */
    edi = 0xFFFFu; /* 0x1710980B: mov edi, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x17109810: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17109812: push eax */
    PUSH32(esp, edx); /* 0x17109813: push edx */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17109814: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17109817: mov ecx, esi */
    RECOMP_CALL(sub_17103B3C); /* 0x17109819: call 0x17103b3c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x10); /* 0x1710981E: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(esi + 0x8); /* 0x17109821: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x17109824: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x17109826: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17109828: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1710982C: push edx */
    edx = (uint32_t)MEM16(ebx + 0x14); /* 0x1710982D: movzx edx, word ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109831: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x17109834: push edx */
    PUSH32(esp, eax); /* 0x17109835: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109843; /* 0x17109836: je 0x17109843 */
L_17109838:
    RECOMP_ICALL(MEM32(ecx + 0x180)); /* 0x17109838: call dword ptr [ecx + 0x180] */
    RECOMP_FLAGS_IN();
    goto L_17109920; /* 0x1710983E: jmp 0x17109920 */
L_17109843:
    RECOMP_ICALL(MEM32(ecx + 0x1BC)); /* 0x17109843: call dword ptr [ecx + 0x1bc] */
    RECOMP_FLAGS_IN();
    goto L_17109920; /* 0x17109849: jmp 0x17109920 */
L_1710984E:
    PUSH32(esp, edi); /* 0x1710984E: push edi */
    eax = ebp + 0x8; /* 0x1710984F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17109852: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17109853: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x17109856: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, ecx); /* 0x17109859: push ecx */
    edi = 0xFFFFu; /* 0x1710985A: mov edi, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1710985F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17109861: push eax */
    PUSH32(esp, edx); /* 0x17109862: push edx */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17109863: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x17109866: mov ecx, esi */
    RECOMP_CALL(sub_17103F47); /* 0x17109868: call 0x17103f47 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x10); /* 0x1710986D: mov edx, dword ptr [ebx + 0x10] */
    eax = MEM32(esi + 0x8); /* 0x17109870: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x17109873: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x17109875: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17109877: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1710987B: push edx */
    edx = (uint32_t)MEM16(ebx + 0x14); /* 0x1710987C: movzx edx, word ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109880: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x17109883: push edx */
    PUSH32(esp, eax); /* 0x17109884: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109892; /* 0x17109885: je 0x17109892 */
L_17109887:
    RECOMP_ICALL(MEM32(ecx + 0x188)); /* 0x17109887: call dword ptr [ecx + 0x188] */
    RECOMP_FLAGS_IN();
    goto L_17109920; /* 0x1710988D: jmp 0x17109920 */
L_17109892:
    RECOMP_ICALL(MEM32(ecx + 0x1C4)); /* 0x17109892: call dword ptr [ecx + 0x1c4] */
    RECOMP_FLAGS_IN();
    goto L_17109920; /* 0x17109898: jmp 0x17109920 */
L_1710989D:
    eax = MEM32(ebx + 0x10); /* 0x1710989D: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, 0x00400000u */ /* 0x171098A0: test eax, 0x400000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171098CC; /* 0x171098A5: je 0x171098cc */
L_171098A7:
    eax = MEM32(ebx + 0xC); /* 0x171098A7: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax + 0x5C); /* 0x171098AA: mov ecx, dword ptr [eax + 0x5c] */
    esi = MEM32(eax + 0x58); /* 0x171098AD: mov esi, dword ptr [eax + 0x58] */
    eax = ecx; /* 0x171098B0: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171098B2: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171098B2: shr ecx, 2 */
    edi = edx; /* 0x171098B5: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171098B7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171098B9: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171098BB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171098BE: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0xC); /* 0x171098C0: mov eax, dword ptr [ebx + 0xc] */
    ecx = (uint32_t)MEM16(eax + 0x52); /* 0x171098C3: movzx ecx, word ptr [eax + 0x52] */
    esi = MEM32(ebp + (-0x8)); /* 0x171098C7: mov esi, dword ptr [ebp - 8] */
    goto L_171098EC; /* 0x171098CA: jmp 0x171098ec */
L_171098CC:
    PUSH32(esp, edi); /* 0x171098CC: push edi */
    edi = ebp + 0x8; /* 0x171098CD: lea edi, [ebp + 8] */
    PUSH32(esp, edi); /* 0x171098D0: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171098D1: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x171098D4: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171098D9: push ecx */
    PUSH32(esp, eax); /* 0x171098DA: push eax */
    PUSH32(esp, edx); /* 0x171098DB: push edx */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x171098DC: push dword ptr [ebx + 0xc] */
    ecx = esi; /* 0x171098DF: mov ecx, esi */
    RECOMP_CALL(sub_17107894); /* 0x171098E1: call 0x17107894 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171098E6: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x171098E9: mov edx, dword ptr [ebp + 0xc] */
L_171098EC:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171098EC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x8); /* 0x171098F0: mov eax, dword ptr [esi + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109907; /* 0x171098F3: je 0x17109907 */
L_171098F5:
    edi = MEM32(eax); /* 0x171098F5: mov edi, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x171098F7: push ecx */
    ecx = (uint32_t)MEM16(ebx + 0x14); /* 0x171098F8: movzx ecx, word ptr [ebx + 0x14] */
    PUSH32(esp, edx); /* 0x171098FC: push edx */
    PUSH32(esp, ecx); /* 0x171098FD: push ecx */
    PUSH32(esp, eax); /* 0x171098FE: push eax */
    RECOMP_ICALL(MEM32(edi + 0x178)); /* 0x171098FF: call dword ptr [edi + 0x178] */
    RECOMP_FLAGS_IN();
    goto L_17109920; /* 0x17109905: jmp 0x17109920 */
L_17109907:
    edi = MEM32(ebx + 0x10); /* 0x17109907: mov edi, dword ptr [ebx + 0x10] */
    ecx = MEM32(eax); /* 0x1710990A: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    edi = edi & 0xFFFFu; /* 0x1710990C: and edi, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17109912: push edi */
    PUSH32(esp, edx); /* 0x17109913: push edx */
    edx = (uint32_t)MEM16(ebx + 0x14); /* 0x17109914: movzx edx, word ptr [ebx + 0x14] */
    PUSH32(esp, edx); /* 0x17109918: push edx */
    PUSH32(esp, eax); /* 0x17109919: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x1710991A: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
L_17109920:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x17109920: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17109924: pop edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_1710992A; /* 0x17109925: jl 0x1710992a */
L_17109927:
    MEM32(esi + 0x28) = eax; /* 0x17109927: mov dword ptr [esi + 0x28], eax */
L_1710992A:
    esi = POP32_VAL(esp); /* 0x1710992A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710992B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710992C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710992D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109935(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109935u);

L_17109935:
    edi = edi; /* 0x17109935: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109937: push ebp */
    ebp = esp; /* 0x17109938: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710993A: push ecx */
    PUSH32(esp, esi); /* 0x1710993B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710993C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1710993F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17109940: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x12C), edi */ /* 0x17109942: cmp dword ptr [esi + 0x12c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x12C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109A9A; /* 0x17109948: jbe 0x17109a9a */
L_1710994E:
    _flag_a = (uint32_t)((MEM32(esi + 0x134) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x134) | 4));
    MEM32(esi + 0x134) = MEM32(esi + 0x134) | 4; /* 0x1710994E: or dword ptr [esi + 0x134], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x60); /* 0x17109955: mov eax, dword ptr [esi + 0x60] */
    ecx = MEM32(eax); /* 0x17109958: mov ecx, dword ptr [eax] */
    MEM32(esi + 0x34) = ecx; /* 0x1710995A: mov dword ptr [esi + 0x34], ecx */
    ecx = MEM32(esi + 0x38); /* 0x1710995D: mov ecx, dword ptr [esi + 0x38] */
    ecx = MEM32(ecx); /* 0x17109960: mov ecx, dword ptr [ecx] */
    MEM32(eax) = ecx; /* 0x17109962: mov dword ptr [eax], ecx */
    eax = MEM32(esi + 0x60); /* 0x17109964: mov eax, dword ptr [esi + 0x60] */
    eax = MEM32(eax); /* 0x17109967: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17109969: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x38); /* 0x1710996C: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1710996F: inc dword ptr [eax] */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x12C), edi */ /* 0x17109971: cmp dword ptr [esi + 0x12c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x12C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x17109977: mov dword ptr [ebp + 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109A2C; /* 0x1710997A: jbe 0x17109a2c */
L_17109980:
    PUSH32(esp, ebx); /* 0x17109980: push ebx */
L_17109981:
    eax = MEM32(ebp + 0x8); /* 0x17109981: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x128); /* 0x17109984: mov ecx, dword ptr [esi + 0x128] */
    edx = MEM32(esi + 0x124); /* 0x1710998A: mov edx, dword ptr [esi + 0x124] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17109990: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17109990: shl eax, 2 */
    ecx = MEM32(ecx + eax); /* 0x17109993: mov ecx, dword ptr [ecx + eax] */
    MEM8(ecx + edx) = (uint8_t)(0); /* 0x17109996: mov byte ptr [ecx + edx], 0 */
    ecx = MEM32(esi + 0x128); /* 0x1710999A: mov ecx, dword ptr [esi + 0x128] */
    eax = MEM32(eax + ecx); /* 0x171099A0: mov eax, dword ptr [eax + ecx] */
    ecx = MEM32(esi + 0xD8); /* 0x171099A3: mov ecx, dword ptr [esi + 0xd8] */
    ebx = MEM32(ecx + eax * 4); /* 0x171099A9: mov ebx, dword ptr [ecx + eax*4] */
    /* cmp ebx, edi */ /* 0x171099AC: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109A19; /* 0x171099AE: je 0x17109a19 */
L_171099B0:
    eax = MEM32(ebx); /* 0x171099B0: mov eax, dword ptr [ebx] */
    /* cmp eax, edi */ /* 0x171099B2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109A19; /* 0x171099B4: je 0x17109a19 */
L_171099B6:
    edi = (uint32_t)MEM16(eax + 0xC); /* 0x171099B6: movzx edi, word ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x171099BA: mov ecx, dword ptr [eax] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6Cu); /* 0x171099BC: imul edi, edi, 0x6c */
    eax = MEM32(ecx + 0x10); /* 0x171099BF: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x48); /* 0x171099C2: add edi, dword ptr [esi + 0x48] */
    _flag_k = FK_ADD;
    /* test eax, 0x00020000u */ /* 0x171099C5: test eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109A0E; /* 0x171099CA: jne 0x17109a0e */
L_171099CC:
    /* test MEM8(edi + 0xC), 1 */ /* 0x171099CC: test byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109A0E; /* 0x171099D0: je 0x17109a0e */
L_171099D2:
    edx = MEM32(ecx + 0x4); /* 0x171099D2: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x171099D5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171099E0; /* 0x171099D7: je 0x171099e0 */
L_171099D9:
    edx = MEM32(edx); /* 0x171099D9: mov edx, dword ptr [edx] */
    /* cmp edx, MEM32(esi + 0x34) */ /* 0x171099DB: cmp edx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109A0E; /* 0x171099DE: jbe 0x17109a0e */
L_171099E0:
    _flag_a = (uint32_t)((eax | 0x00020000u)); _flag_b = (uint32_t)((eax | 0x00020000u));
    eax = eax | 0x00020000u; /* 0x171099E0: or eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x00200000u */ /* 0x171099E5: test eax, 0x200000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x10) = eax; /* 0x171099EA: mov dword ptr [ecx + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171099FA; /* 0x171099ED: je 0x171099fa */
L_171099EF:
    PUSH32(esp, ecx); /* 0x171099EF: push ecx */
    PUSH32(esp, edi); /* 0x171099F0: push edi */
    ecx = esi; /* 0x171099F1: mov ecx, esi */
    RECOMP_CALL(sub_17109744); /* 0x171099F3: call 0x17109744 */
    RECOMP_FLAGS_IN();
    goto L_17109A08; /* 0x171099F8: jmp 0x17109a08 */
L_171099FA:
    PUSH32(esp, 0xFFFFu); /* 0x171099FA: push 0xffff */
    PUSH32(esp, ecx); /* 0x171099FF: push ecx */
    PUSH32(esp, edi); /* 0x17109A00: push edi */
    ecx = esi; /* 0x17109A01: mov ecx, esi */
    RECOMP_CALL(sub_171089E6); /* 0x17109A03: call 0x171089e6 */
    RECOMP_FLAGS_IN();
L_17109A08:
    eax = MEM32(ebp + (-0x4)); /* 0x17109A08: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x10) = eax; /* 0x17109A0B: mov dword ptr [edi + 0x10], eax */
L_17109A0E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x17109A0E: add ebx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx); /* 0x17109A11: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x17109A13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171099B6; /* 0x17109A15: jne 0x171099b6 */
L_17109A17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17109A17: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109A19:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17109A19: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17109A1C: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x12C) */ /* 0x17109A1F: cmp eax, dword ptr [esi + 0x12c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x12C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17109981; /* 0x17109A25: jb 0x17109981 */
L_17109A2B:
    ebx = POP32_VAL(esp); /* 0x17109A2B: pop ebx */
L_17109A2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17109A2C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x12C), edi */ /* 0x17109A2E: cmp dword ptr [esi + 0x12c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x12C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109A66; /* 0x17109A34: jbe 0x17109a66 */
L_17109A36:
    eax = MEM32(esi + 0x128); /* 0x17109A36: mov eax, dword ptr [esi + 0x128] */
    eax = MEM32(eax + edx * 4); /* 0x17109A3C: mov eax, dword ptr [eax + edx*4] */
    ecx = MEM32(esi + 0xD8); /* 0x17109A3F: mov ecx, dword ptr [esi + 0xd8] */
    ecx = MEM32(ecx + eax * 4); /* 0x17109A45: mov ecx, dword ptr [ecx + eax*4] */
    /* cmp ecx, edi */ /* 0x17109A48: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109A5D; /* 0x17109A4A: je 0x17109a5d */
L_17109A4C:
    goto L_17109A57; /* 0x17109A4C: jmp 0x17109a57 */
L_17109A4E:
    eax = MEM32(eax); /* 0x17109A4E: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM8(eax + 0x12)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    MEM8(eax + 0x12) = (uint8_t)(MEM8(eax + 0x12) & 0xFDu); /* 0x17109A50: and byte ptr [eax + 0x12], 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17109A54: add ecx, 4 */
    _flag_k = FK_ADD;
L_17109A57:
    eax = MEM32(ecx); /* 0x17109A57: mov eax, dword ptr [ecx] */
    /* cmp eax, edi */ /* 0x17109A59: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17109A4E; /* 0x17109A5B: jne 0x17109a4e */
L_17109A5D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17109A5D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(esi + 0x12C) */ /* 0x17109A5E: cmp edx, dword ptr [esi + 0x12c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x12C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17109A36; /* 0x17109A64: jb 0x17109a36 */
L_17109A66:
    /* test MEM8(esi + 0x134), 1 */ /* 0x17109A66: test byte ptr [esi + 0x134], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x12C) = edi; /* 0x17109A6D: mov dword ptr [esi + 0x12c], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109A93; /* 0x17109A73: je 0x17109a93 */
L_17109A75:
    RECOMP_CALL(sub_1721B218); /* 0x17109A75: call 0x1721b218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x17109A7A: push 0x30000 */
    PUSH32(esp, MEM32(esi + 0x130)); /* 0x17109A7F: push dword ptr [esi + 0x130] */
    RECOMP_CALL(sub_1721B200); /* 0x17109A85: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esi + 0x134) = MEM32(esi + 0x134) & 0xFFFFFFFEu; /* 0x17109A8A: and dword ptr [esi + 0x134], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17109A91: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17109A92: pop ecx */
L_17109A93:
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(esi + 0x134) = MEM32(esi + 0x134) & 0xFFFFFFFBu; /* 0x17109A93: and dword ptr [esi + 0x134], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109A9A:
    edi = POP32_VAL(esp); /* 0x17109A9A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109A9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17109A9D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17109A9E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17109A9F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17109AA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109AA7u);

L_17109AA7:
    edi = edi; /* 0x17109AA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109AA9: push ebp */
    ebp = esp; /* 0x17109AAA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17109AAC: push ecx */
    PUSH32(esp, ebx); /* 0x17109AAD: push ebx */
    PUSH32(esp, esi); /* 0x17109AAE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17109AAF: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0; /* 0x17109AB2: and dword ptr [esi + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x58), 0 */ /* 0x17109AB6: cmp dword ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17109ABA: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17109AC7; /* 0x17109ABB: jne 0x17109ac7 */
L_17109ABD:
    ebx = 0x8876086Cu; /* 0x17109ABD: mov ebx, 0x8876086c */
    goto L_17109BEF; /* 0x17109AC2: jmp 0x17109bef */
L_17109AC7:
    edi = (uint32_t)MEM16(esi + 0x5E); /* 0x17109AC7: movzx edi, word ptr [esi + 0x5e] */
    ebx = MEM32(ebp + 0xC); /* 0x17109ACB: mov ebx, dword ptr [ebp + 0xc] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xC4u); /* 0x17109ACE: imul edi, edi, 0xc4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xC4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0xC4); /* 0x17109AD4: add edi, dword ptr [esi + 0xc4] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x38), ebx */ /* 0x17109ADA: cmp dword ptr [edi + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17109ADD: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109ABD; /* 0x17109AE0: jbe 0x17109abd */
L_17109AE2:
    /* test MEM8(esi + 0x134), 0x40u */ /* 0x17109AE2: test byte ptr [esi + 0x134], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109ABD; /* 0x17109AE9: jne 0x17109abd */
L_17109AEB:
    eax = MEM32(esi + 0x38); /* 0x17109AEB: mov eax, dword ptr [esi + 0x38] */
    /* cmp MEM32(eax), 0x80000000u */ /* 0x17109AEE: cmp dword ptr [eax], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17109B2F; /* 0x17109AF4: jbe 0x17109b2f */
L_17109AF6:
    MEM32(eax) = 1; /* 0x17109AF6: mov dword ptr [eax], 1 */
    eax = MEM32(esi + 0x54); /* 0x17109AFC: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x17109AFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109B0C; /* 0x17109B01: jne 0x17109b0c */
L_17109B03:
    ecx = esi; /* 0x17109B03: mov ecx, esi */
    RECOMP_CALL(sub_170FF3DF); /* 0x17109B05: call 0x170ff3df */
    RECOMP_FLAGS_IN();
    goto L_17109B2F; /* 0x17109B0A: jmp 0x17109b2f */
L_17109B0C:
    eax = MEM32(eax + 0x24); /* 0x17109B0C: mov eax, dword ptr [eax + 0x24] */
    /* test eax, eax */ /* 0x17109B0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17109B11: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109B2F; /* 0x17109B14: je 0x17109b2f */
L_17109B16:
    goto L_17109B1B; /* 0x17109B16: jmp 0x17109b1b */
L_17109B18:
    eax = MEM32(ebp + 0x8); /* 0x17109B18: mov eax, dword ptr [ebp + 8] */
L_17109B1B:
    ecx = MEM32(eax); /* 0x17109B1B: mov ecx, dword ptr [eax] */
    RECOMP_CALL(sub_170FF3DF); /* 0x17109B1D: call 0x170ff3df */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17109B22: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x17109B25: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x17109B28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17109B2A: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109B18; /* 0x17109B2D: jne 0x17109b18 */
L_17109B2F:
    eax = MEM32(edi + 0x3C); /* 0x17109B2F: mov eax, dword ptr [edi + 0x3c] */
    edx = ebx + ebx * 8; /* 0x17109B32: lea edx, [ebx + ebx*8] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x17109B35: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x17109B35: shl edx, 3 */
    eax = MEM32(edx + eax); /* 0x17109B38: mov eax, dword ptr [edx + eax] */
    MEM32(esi + 0x34) = eax; /* 0x17109B3B: mov dword ptr [esi + 0x34], eax */
    ecx = MEM32(edi + 0x3C); /* 0x17109B3E: mov ecx, dword ptr [edi + 0x3c] */
    eax = MEM32(esi + 0x38); /* 0x17109B41: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax); /* 0x17109B44: mov eax, dword ptr [eax] */
    MEM32(edx + ecx) = eax; /* 0x17109B46: mov dword ptr [edx + ecx], eax */
    eax = MEM32(esi + 0x38); /* 0x17109B49: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17109B4C: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ecx = (uint32_t)MEM16(esi + 0x5E); /* 0x17109B4E: movzx ecx, word ptr [esi + 0x5e] */
    eax = MEM32(esi + 0xCC); /* 0x17109B52: mov eax, dword ptr [esi + 0xcc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC4u); /* 0x17109B58: imul ecx, ecx, 0xc4 */
    edi = MEM32(esi + 0xC4); /* 0x17109B5E: mov edi, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x17109B64: imul eax, ebx */
    ecx = MEM32(ecx + edi + 0x90); /* 0x17109B67: mov ecx, dword ptr [ecx + edi + 0x90] */
    edi = MEM32(esi + 0x124); /* 0x17109B6E: mov edi, dword ptr [esi + 0x124] */
    eax = ecx + eax * 4; /* 0x17109B74: lea eax, [ecx + eax*4] */
    ecx = MEM32(esi + 0xCC); /* 0x17109B77: mov ecx, dword ptr [esi + 0xcc] */
    MEM32(esi + 0xD8) = eax; /* 0x17109B7D: mov dword ptr [esi + 0xd8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109B83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x17109B85: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17109B87: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17109B87: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17109B8A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x17109B8C: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17109B8E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17109B91: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x4)); /* 0x17109B93: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x3C); /* 0x17109B96: mov eax, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x17109B99: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x60) = edx; /* 0x17109B9B: mov dword ptr [esi + 0x60], edx */
    eax = (uint32_t)MEM16(edx + 0x4); /* 0x17109B9E: movzx eax, word ptr [edx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6Cu); /* 0x17109BA2: imul eax, eax, 0x6c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x48); /* 0x17109BA5: add eax, dword ptr [esi + 0x48] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x17109BA8: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109BB5; /* 0x17109BAC: je 0x17109bb5 */
L_17109BAE:
    edx = MEM32(edx + 0x8); /* 0x17109BAE: mov edx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)((MEM32(edx + 0xC) | 1)); _flag_b = (uint32_t)((MEM32(edx + 0xC) | 1));
    MEM32(edx + 0xC) = MEM32(edx + 0xC) | 1; /* 0x17109BB1: or dword ptr [edx + 0xc], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109BB5:
    ecx = MEM32(esi + 0x60); /* 0x17109BB5: mov ecx, dword ptr [esi + 0x60] */
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x17109BB8: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109BC5; /* 0x17109BBC: je 0x17109bc5 */
L_17109BBE:
    ecx = MEM32(ecx + 0xC); /* 0x17109BBE: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((MEM32(ecx + 0xC) | 1)); _flag_b = (uint32_t)((MEM32(ecx + 0xC) | 1));
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 1; /* 0x17109BC1: or dword ptr [ecx + 0xc], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109BC5:
    PUSH32(esp, 0xFFFFu); /* 0x17109BC5: push 0xffff */
    PUSH32(esp, eax); /* 0x17109BCA: push eax */
    ecx = esi; /* 0x17109BCB: mov ecx, esi */
    RECOMP_CALL(sub_171088EC); /* 0x17109BCD: call 0x171088ec */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x28); /* 0x17109BD2: mov ebx, dword ptr [esi + 0x28] */
    /* test ebx, ebx */ /* 0x17109BD5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17109BEF; /* 0x17109BD7: jl 0x17109bef */
L_17109BD9:
    eax = MEM32(esi + 0x40); /* 0x17109BD9: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17109BDC: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x54); /* 0x17109BDE: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x17109BE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109BE8; /* 0x17109BE3: je 0x17109be8 */
L_17109BE5:
    MEM32(eax + 0xC) = esi; /* 0x17109BE5: mov dword ptr [eax + 0xc], esi */
L_17109BE8:
    _flag_a = (uint32_t)((MEM32(esi + 0x134) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x134) | 0x40u));
    MEM32(esi + 0x134) = MEM32(esi + 0x134) | 0x40u; /* 0x17109BE8: or dword ptr [esi + 0x134], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109BEF:
    edi = esi + 0x134; /* 0x17109BEF: lea edi, [esi + 0x134] */
    /* test MEM8(edi), 1 */ /* 0x17109BF5: test byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109C14; /* 0x17109BF8: je 0x17109c14 */
L_17109BFA:
    RECOMP_CALL(sub_1721B218); /* 0x17109BFA: call 0x1721b218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x17109BFF: push 0x30000 */
    PUSH32(esp, MEM32(esi + 0x130)); /* 0x17109C04: push dword ptr [esi + 0x130] */
    RECOMP_CALL(sub_1721B200); /* 0x17109C0A: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(edi) = MEM32(edi) & 0xFFFFFFFEu; /* 0x17109C0F: and dword ptr [edi], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17109C12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17109C13: pop ecx */
L_17109C14:
    edi = POP32_VAL(esp); /* 0x17109C14: pop edi */
    esi = POP32_VAL(esp); /* 0x17109C15: pop esi */
    eax = ebx; /* 0x17109C16: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x17109C18: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17109C19: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109C1A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109C56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109C56u);

L_17109C56:
    edi = edi; /* 0x17109C56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109C58: push ebp */
    ebp = esp; /* 0x17109C59: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17109C5B: push esi */
    PUSH32(esp, edi); /* 0x17109C5C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17109C5D: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x17109C60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x17109C62: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109C6C; /* 0x17109C64: je 0x17109c6c */
L_17109C66:
    eax = MEM32(edi); /* 0x17109C66: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17109C68: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17109C69: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_17109C6C:
    eax = MEM32(esi + 0x8); /* 0x17109C6C: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x17109C6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109C7D; /* 0x17109C71: je 0x17109c7d */
L_17109C73:
    ecx = MEM32(eax); /* 0x17109C73: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109C75: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17109C76: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x17109C79: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109C7D:
    MEM32(esi + 0x8) = edi; /* 0x17109C7D: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x4) = edi; /* 0x17109C80: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17109C83: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109C84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17109C86: pop esi */
    ebp = POP32_VAL(esp); /* 0x17109C87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17109C88: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17109C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109C90u);

L_17109C90:
    edi = edi; /* 0x17109C90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109C92: push ebp */
    ebp = esp; /* 0x17109C93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17109C95: push esi */
    PUSH32(esp, edi); /* 0x17109C96: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17109C97: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x17109C9A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x17109C9C: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109CA6; /* 0x17109C9E: je 0x17109ca6 */
L_17109CA0:
    eax = MEM32(edi); /* 0x17109CA0: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17109CA2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17109CA3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_17109CA6:
    eax = MEM32(esi + 0xC); /* 0x17109CA6: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x17109CA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17109CB7; /* 0x17109CAB: je 0x17109cb7 */
L_17109CAD:
    ecx = MEM32(eax); /* 0x17109CAD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109CAF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17109CB0: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x17109CB3: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109CB7:
    /* test edi, edi */ /* 0x17109CB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = edi; /* 0x17109CB9: mov dword ptr [esi + 0xc], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109CC6; /* 0x17109CBC: jne 0x17109cc6 */
L_17109CBE:
    eax = MEM32(esi + 0x8); /* 0x17109CBE: mov eax, dword ptr [esi + 8] */
    MEM32(esi + 0x4) = eax; /* 0x17109CC1: mov dword ptr [esi + 4], eax */
    goto L_17109CC9; /* 0x17109CC4: jmp 0x17109cc9 */
L_17109CC6:
    MEM32(esi + 0x4) = esi; /* 0x17109CC6: mov dword ptr [esi + 4], esi */
L_17109CC9:
    edi = POP32_VAL(esp); /* 0x17109CC9: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109CCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17109CCC: pop esi */
    ebp = POP32_VAL(esp); /* 0x17109CCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17109CCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17109CD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109CD6u);

L_17109CD6:
    edi = edi; /* 0x17109CD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109CD8: push ebp */
    ebp = esp; /* 0x17109CD9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17109CDB: push esi */
    esi = ecx; /* 0x17109CDC: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x17109CDE: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109CED; /* 0x17109CE2: je 0x17109ced */
L_17109CE4:
    eax = MEM32(esi + 0xC); /* 0x17109CE4: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x17109CE7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109CE9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17109CEA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_17109CED:
    eax = MEM32(esi + 0xC); /* 0x17109CED: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17109CF0: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x17109CF3: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109CF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17109CF7: pop esi */
    ebp = POP32_VAL(esp); /* 0x17109CF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17109CF9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17109D01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D01u);

L_17109D01:
    edi = edi; /* 0x17109D01: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109D03: push ebp */
    ebp = esp; /* 0x17109D04: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109D06: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17109D09: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109D0C: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109D0F: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109D12: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109D14: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17109D15: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109D18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17109D19: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17109D21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D21u);

L_17109D21:
    edi = edi; /* 0x17109D21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109D23: push ebp */
    ebp = esp; /* 0x17109D24: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17109D26: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109D29: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109D2C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109D2F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109D31: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17109D32: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109D35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109D36: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109D3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D3Eu);

L_17109D3E:
    edi = edi; /* 0x17109D3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109D40: push ebp */
    ebp = esp; /* 0x17109D41: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109D43: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17109D46: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109D49: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109D4C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109D4F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109D51: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x17109D52: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109D55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17109D56: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17109D5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D5Eu);

L_17109D5E:
    edi = edi; /* 0x17109D5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109D60: push ebp */
    ebp = esp; /* 0x17109D61: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109D63: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17109D66: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109D69: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109D6C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109D6F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109D71: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x17109D72: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109D75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17109D76: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17109D7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D7Eu);

L_17109D7E:
    edi = edi; /* 0x17109D7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109D80: push ebp */
    ebp = esp; /* 0x17109D81: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109D83: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17109D86: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109D89: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109D8C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109D8F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109D91: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x17109D92: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109D95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17109D96: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17109D9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109D9Eu);

L_17109D9E:
    edi = edi; /* 0x17109D9E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109DA0: push ebp */
    ebp = esp; /* 0x17109DA1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109DA3: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17109DA6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109DA9: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109DAC: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109DAF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109DB1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x17109DB2: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109DB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17109DB6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17109DBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109DBEu);

L_17109DBE:
    edi = edi; /* 0x17109DBE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109DC0: push ebp */
    ebp = esp; /* 0x17109DC1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109DC3: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109DC6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109DC9: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109DCC: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109DCF: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109DD2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109DD4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x17109DD5: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109DD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109DD9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109DE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109DE1u);

L_17109DE1:
    edi = edi; /* 0x17109DE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109DE3: push ebp */
    ebp = esp; /* 0x17109DE4: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109DE6: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109DE9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109DEC: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109DEF: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109DF2: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109DF5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109DF7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x17109DF8: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109DFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109DFC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109E04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E04u);

L_17109E04:
    edi = edi; /* 0x17109E04: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109E06: push ebp */
    ebp = esp; /* 0x17109E07: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17109E09: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17109E0C: fld dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x17109E0F: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x17109E12: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x17109E14: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17109E15: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17109E18: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17109E19: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109E1D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109E25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E25u);

L_17109E25:
    edi = edi; /* 0x17109E25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109E27: push ebp */
    ebp = esp; /* 0x17109E28: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17109E2A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109E2D: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109E30: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109E33: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109E35: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17109E36: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109E39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109E3A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109E42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E42u);

L_17109E42:
    edi = edi; /* 0x17109E42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109E44: push ebp */
    ebp = esp; /* 0x17109E45: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17109E47: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109E4A: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109E4D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109E50: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109E52: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x17109E53: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109E56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109E57: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109E5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E5Fu);

L_17109E5F:
    edi = edi; /* 0x17109E5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109E61: push ebp */
    ebp = esp; /* 0x17109E62: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17109E64: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x17109E67: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109E6A: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109E6D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109E6F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x17109E70: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109E73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109E74: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109E7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E7Cu);

L_17109E7C:
    edi = edi; /* 0x17109E7C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109E7E: push ebp */
    ebp = esp; /* 0x17109E7F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109E81: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109E84: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109E87: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109E8A: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109E8D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109E90: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109E92: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x17109E93: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109E96: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109E97: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109E9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109E9Fu);

L_17109E9F:
    edi = edi; /* 0x17109E9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109EA1: push ebp */
    ebp = esp; /* 0x17109EA2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109EA4: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109EA7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109EAA: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109EAD: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109EB0: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109EB3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109EB5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x3C)); /* 0x17109EB6: call dword ptr [ecx + 0x3c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109EB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109EBA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109EC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109EC2u);

L_17109EC2:
    edi = edi; /* 0x17109EC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109EC4: push ebp */
    ebp = esp; /* 0x17109EC5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109EC7: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109ECA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109ECD: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109ED0: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109ED3: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109ED6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109ED8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x17109ED9: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109EDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109EDD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109EE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109EE5u);

L_17109EE5:
    edi = edi; /* 0x17109EE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109EE7: push ebp */
    ebp = esp; /* 0x17109EE8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109EEA: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109EED: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109EF0: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109EF3: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109EF6: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109EF9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109EFB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x17109EFC: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109EFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109F00: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109F08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109F08u);

L_17109F08:
    edi = edi; /* 0x17109F08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109F0A: push ebp */
    ebp = esp; /* 0x17109F0B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109F0D: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109F10: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109F13: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109F16: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109F19: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109F1C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109F1E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x17109F1F: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109F22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109F23: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109F2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109F2Bu);

L_17109F2B:
    edi = edi; /* 0x17109F2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109F2D: push ebp */
    ebp = esp; /* 0x17109F2E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17109F30: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17109F33: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17109F36: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17109F39: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109F3C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17109F3F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17109F41: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x17109F42: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17109F45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17109F46: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17109F4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109F4Eu);

L_17109F4E:
    edi = edi; /* 0x17109F4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109F50: push ebp */
    ebp = esp; /* 0x17109F51: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x17109F53: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17109F56: push esi */
    eax = 0x80000003u; /* 0x17109F57: mov eax, 0x80000003 */
    esi = edx; /* 0x17109F5C: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x17109F5E: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x17109F60: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17109F62: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17109F8E; /* 0x17109F63: jne 0x17109f8e */
L_17109F65:
    eax = edx; /* 0x17109F65: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17109F67: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x17109F6C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17109F8E; /* 0x17109F6E: je 0x17109f8e */
L_17109F70:
    edx = ~edx; /* 0x17109F70: not edx */
    /* cmp MEM8(edx + 0x14), 4 */ /* 0x17109F72: cmp byte ptr [edx + 0x14], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17109F8E; /* 0x17109F76: jne 0x17109f8e */
L_17109F78:
    eax = MEM32(edx + 0x18); /* 0x17109F78: mov eax, dword ptr [edx + 0x18] */
    /* cmp eax, MEM32(ecx + 0xEC) */ /* 0x17109F7B: cmp eax, dword ptr [ecx + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17109F8E; /* 0x17109F81: jae 0x17109f8e */
L_17109F83:
    ecx = MEM32(ecx + 0xF4); /* 0x17109F83: mov ecx, dword ptr [ecx + 0xf4] */
    eax = MEM32(ecx + eax * 4); /* 0x17109F89: mov eax, dword ptr [ecx + eax*4] */
    goto L_17109F90; /* 0x17109F8C: jmp 0x17109f90 */
L_17109F8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17109F8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17109F90:
    ebp = POP32_VAL(esp); /* 0x17109F90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17109F91: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17109F99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17109F99u);

L_17109F99:
    edi = edi; /* 0x17109F99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17109F9B: push ebp */
    ebp = esp; /* 0x17109F9C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17109F9E: push esi */
    PUSH32(esp, edi); /* 0x17109F9F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17109FA0: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x17109FA3: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17109FA5: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x17109FA8: mov ecx, edi */
    RECOMP_CALL(sub_17109F4E); /* 0x17109FAA: call 0x17109f4e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17109FAF: mov esi, eax */
    /* test esi, esi */ /* 0x17109FB1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109FBF; /* 0x17109FB3: jne 0x17109fbf */
L_17109FB5:
    eax = 0x8876086Cu; /* 0x17109FB5: mov eax, 0x8876086c */
    goto L_1710A112; /* 0x17109FBA: jmp 0x1710a112 */
L_17109FBF:
    eax = MEM32(esi); /* 0x17109FBF: mov eax, dword ptr [esi] */
    /* cmp eax, 0xFu */ /* 0x17109FC1: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1710A0F7; /* 0x17109FC4: ja 0x1710a0f7 */
L_17109FCA:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1710A118)); goto _ljump; }
L_17109FD1:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x17109FD1: push dword ptr [esi + 0x10] */
    eax = MEM32(edi); /* 0x17109FD4: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17109FD6: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x17109FD9: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x17109FDC: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x17109FDF: push edi */
    RECOMP_ICALL(MEM32(eax + 0x138)); /* 0x17109FE0: call dword ptr [eax + 0x138] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x17109FE6: jmp 0x1710a0fc */
L_17109FEB:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17109FEB: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x17109FEE: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x17109FF0: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x17109FF3: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x17109FF6: push edi */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x17109FF7: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x17109FFA: jmp 0x1710a0fc */
L_17109FFF:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x17109FFF: push dword ptr [esi + 0xc] */
    eax = MEM32(edi); /* 0x1710A002: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A004: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A007: push edi */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x1710A008: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A00B: jmp 0x1710a0fc */
L_1710A010:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710A010: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x1710A013: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A015: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A018: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A01B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1710A01C: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A01F: jmp 0x1710a0fc */
L_1710A024:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A024: push dword ptr [esi + 0xc] */
    eax = MEM32(edi); /* 0x1710A027: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A029: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A02C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x68)); /* 0x1710A02D: call dword ptr [eax + 0x68] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A030: jmp 0x1710a0fc */
L_1710A035:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710A035: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x1710A038: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A03A: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A03D: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A040: push edi */
    RECOMP_ICALL(MEM32(eax + 0x70)); /* 0x1710A041: call dword ptr [eax + 0x70] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A044: jmp 0x1710a0fc */
L_1710A049:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1710A049: fld dword ptr [esi + 0xc] */
    eax = MEM32(edi); /* 0x1710A04C: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1710A04E: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1710A04F: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A052: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A055: push edi */
    RECOMP_ICALL(MEM32(eax + 0x78)); /* 0x1710A056: call dword ptr [eax + 0x78] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A059: jmp 0x1710a0fc */
L_1710A05E:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710A05E: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x1710A061: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A063: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A066: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A069: push edi */
    RECOMP_ICALL(MEM32(eax + 0x80)); /* 0x1710A06A: call dword ptr [eax + 0x80] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A070: jmp 0x1710a0fc */
L_1710A075:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A075: push dword ptr [esi + 0xc] */
    eax = MEM32(edi); /* 0x1710A078: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A07A: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A07D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x88)); /* 0x1710A07E: call dword ptr [eax + 0x88] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A084: jmp 0x1710a0fc */
L_1710A086:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710A086: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x1710A089: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A08B: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A08E: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A091: push edi */
    RECOMP_ICALL(MEM32(eax + 0x90)); /* 0x1710A092: call dword ptr [eax + 0x90] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A098: jmp 0x1710a0fc */
L_1710A09A:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A09A: push dword ptr [esi + 0xc] */
    eax = MEM32(edi); /* 0x1710A09D: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A09F: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A0A2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x98)); /* 0x1710A0A3: call dword ptr [eax + 0x98] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A0A9: jmp 0x1710a0fc */
L_1710A0AB:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1710A0AB: push dword ptr [esi + 8] */
    eax = MEM32(edi); /* 0x1710A0AE: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A0B0: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A0B3: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A0B6: push edi */
    RECOMP_ICALL(MEM32(eax + 0xA0)); /* 0x1710A0B7: call dword ptr [eax + 0xa0] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A0BD: jmp 0x1710a0fc */
L_1710A0BF:
    ecx = MEM32(esi + 0x14); /* 0x1710A0BF: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A0C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1710A0C4: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A0D4; /* 0x1710A0C7: je 0x1710a0d4 */
L_1710A0C9:
    eax = ecx; /* 0x1710A0C9: mov eax, ecx */
    eax = MEM32(eax + 0x4); /* 0x1710A0CB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x1710A0CE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710A0D0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1710A0D1: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
L_1710A0D4:
    ecx = MEM32(edi); /* 0x1710A0D4: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1710A0D6: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A0D7: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A0DA: push edi */
    RECOMP_ICALL(MEM32(ecx + 0xC8)); /* 0x1710A0DB: call dword ptr [ecx + 0xc8] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A0E1: jmp 0x1710a0fc */
L_1710A0E3:
    ecx = MEM32(esi + 0x14); /* 0x1710A0E3: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1710A0E6: push dword ptr [ecx + 4] */
    eax = MEM32(edi); /* 0x1710A0E9: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1710A0EB: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1710A0EE: push edi */
    RECOMP_ICALL(MEM32(eax + 0xD0)); /* 0x1710A0EF: call dword ptr [eax + 0xd0] */
    RECOMP_FLAGS_IN();
    goto L_1710A0FC; /* 0x1710A0F5: jmp 0x1710a0fc */
L_1710A0F7:
    eax = 0x80004005u; /* 0x1710A0F7: mov eax, 0x80004005 */
L_1710A0FC:
    /* test eax, eax */ /* 0x1710A0FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710A112; /* 0x1710A0FE: jl 0x1710a112 */
L_1710A100:
    esi = MEM32(esi + 0x18); /* 0x1710A100: mov esi, dword ptr [esi + 0x18] */
    /* test esi, esi */ /* 0x1710A103: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17109FBF; /* 0x1710A105: jne 0x17109fbf */
L_1710A10B:
    goto L_1710A112; /* 0x1710A10B: jmp 0x1710a112 */
L_1710A10D:
    eax = 0x80004005u; /* 0x1710A10D: mov eax, 0x80004005 */
L_1710A112:
    edi = POP32_VAL(esp); /* 0x1710A112: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A113: pop esi */
    ebp = POP32_VAL(esp); /* 0x1710A114: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A115: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x17109FD1u: goto L_17109FD1;
      case 0x17109FEBu: goto L_17109FEB;
      case 0x17109FFFu: goto L_17109FFF;
      case 0x1710A010u: goto L_1710A010;
      case 0x1710A024u: goto L_1710A024;
      case 0x1710A035u: goto L_1710A035;
      case 0x1710A049u: goto L_1710A049;
      case 0x1710A05Eu: goto L_1710A05E;
      case 0x1710A075u: goto L_1710A075;
      case 0x1710A086u: goto L_1710A086;
      case 0x1710A09Au: goto L_1710A09A;
      case 0x1710A0ABu: goto L_1710A0AB;
      case 0x1710A0BFu: goto L_1710A0BF;
      case 0x1710A0E3u: goto L_1710A0E3;
      case 0x1710A10Du: goto L_1710A10D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1710A15D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A15Du);

L_1710A15D:
    eax = ecx; /* 0x1710A15D: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710A15F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 4; /* 0x1710A161: mov dword ptr [eax], 4 */
    MEM32(eax + 0x10) = ecx; /* 0x1710A167: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x1710A16A: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1710A16D: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x1710A170: mov dword ptr [eax + 0x18], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1710A173: ret  */
    RECOMP_REGS_OUT();
}

void sub_1710A179(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A179u);

L_1710A179:
    eax = ecx; /* 0x1710A179: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1710A17B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 4; /* 0x1710A17F: mov dword ptr [eax], 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1710A185: ret  */
    RECOMP_REGS_OUT();
}

void sub_1710A18B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A18Bu);

L_1710A18B:
    edi = edi; /* 0x1710A18B: mov edi, edi */
    PUSH32(esp, esi); /* 0x1710A18D: push esi */
    esi = ecx; /* 0x1710A18E: mov esi, ecx */
    eax = MEM32(esi); /* 0x1710A190: mov eax, dword ptr [esi] */
    /* cmp eax, 4 */ /* 0x1710A192: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A1A8; /* 0x1710A195: je 0x1710a1a8 */
L_1710A197:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A1B9; /* 0x1710A197: jle 0x1710a1b9 */
L_1710A199:
    /* cmp eax, 9 */ /* 0x1710A199: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A1A8; /* 0x1710A19C: jle 0x1710a1a8 */
L_1710A19E:
    /* cmp eax, 0xFu */ /* 0x1710A19E: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A1A8; /* 0x1710A1A1: je 0x1710a1a8 */
L_1710A1A3:
    /* cmp eax, 0x10u */ /* 0x1710A1A3: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A1B9; /* 0x1710A1A6: jne 0x1710a1b9 */
L_1710A1A8:
    eax = MEM32(esi + 0x4); /* 0x1710A1A8: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1710A1AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A1B9; /* 0x1710A1AD: je 0x1710a1b9 */
L_1710A1AF:
    ecx = MEM32(eax); /* 0x1710A1AF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710A1B1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1710A1B2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1710A1B5: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A1B9:
    esi = POP32_VAL(esp); /* 0x1710A1B9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1710A1BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1710A1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A1C0u);

L_1710A1C0:
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1710A1C0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1710A1C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A1C8u);

L_1710A1C8:
    eax = 0x80004005u; /* 0x1710A1C8: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x1710A1CD: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_1710A1D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A1D5u);

L_1710A1D5:
    eax = 0x80004005u; /* 0x1710A1D5: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1710A1DA: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1710A1E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A1E2u);

L_1710A1E2:
    eax = 0x80004005u; /* 0x1710A1E2: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1710A1E7: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1710A1EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A1EFu);

L_1710A1EF:
    edi = edi; /* 0x1710A1EF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A1F1: push ebp */
    ebp = esp; /* 0x1710A1F2: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1710A1F4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710A1F7: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1710A1FA: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17109C90); /* 0x1710A1FD: call 0x17109c90 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1710A202: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A203: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A20B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A20Bu);

L_1710A20B:
    edi = edi; /* 0x1710A20B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A20D: push ebp */
    ebp = esp; /* 0x1710A20E: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1710A210: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A21D; /* 0x1710A214: jne 0x1710a21d */
L_1710A216:
    eax = 0x8876086Cu; /* 0x1710A216: mov eax, 0x8876086c */
    goto L_1710A22B; /* 0x1710A21B: jmp 0x1710a22b */
L_1710A21D:
    ecx = MEM32(ebp + 0x8); /* 0x1710A21D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710A220: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1710A223: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_17109CD6); /* 0x1710A226: call 0x17109cd6 */
    RECOMP_FLAGS_IN();
L_1710A22B:
    ebp = POP32_VAL(esp); /* 0x1710A22B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A22C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A234u);

L_1710A234:
    edi = edi; /* 0x1710A234: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A236: push ebp */
    ebp = esp; /* 0x1710A237: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710A239: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710A23C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1710A23D: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x58); /* 0x1710A240: mov eax, dword ptr [ebx + 0x58] */
    PUSH32(esp, edi); /* 0x1710A243: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710A244: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x1710A246: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1710A249: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1710A24C: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1710A24F: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A367; /* 0x1710A252: je 0x1710a367 */
L_1710A258:
    /* cmp eax, 3 */ /* 0x1710A258: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A367; /* 0x1710A25B: jne 0x1710a367 */
L_1710A261:
    eax = MEM32(ebx + 0xEC); /* 0x1710A261: mov eax, dword ptr [ebx + 0xec] */
    /* cmp eax, MEM32(ebx + 0xF0) */ /* 0x1710A267: cmp eax, dword ptr [ebx + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710A26D: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A2E7; /* 0x1710A26E: jne 0x1710a2e7 */
L_1710A270:
    eax = eax + eax + 0x1; /* 0x1710A270: lea eax, [eax + eax + 1] */
    esi = eax; /* 0x1710A274: mov esi, eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1710A276: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1710A276: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1710A279: push esi */
    MEM32(ebp + 0x8) = eax; /* 0x1710A27A: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710A27D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710A282: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710A284: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1710A285: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A366; /* 0x1710A288: je 0x1710a366 */
L_1710A28E:
    edi = MEM32(ebp + (-0x8)); /* 0x1710A28E: mov edi, dword ptr [ebp - 8] */
    ecx = esi; /* 0x1710A291: mov ecx, esi */
    edx = ecx; /* 0x1710A293: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710A295: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710A295: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A298: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1710A29A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1710A29C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710A29E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1710A2A1: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebx + 0xEC); /* 0x1710A2A3: mov ecx, dword ptr [ebx + 0xec] */
    esi = MEM32(ebx + 0xF4); /* 0x1710A2A9: mov esi, dword ptr [ebx + 0xf4] */
    edi = MEM32(ebp + (-0x8)); /* 0x1710A2AF: mov edi, dword ptr [ebp - 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1710A2B2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1710A2B2: shl ecx, 2 */
    eax = ecx; /* 0x1710A2B5: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710A2B7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710A2B7: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710A2BA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710A2BC: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710A2BE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710A2C1: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xF4)); /* 0x1710A2C3: push dword ptr [ebx + 0xf4] */
    RECOMP_CALL(sub_1721B010); /* 0x1710A2C9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1710A2CE: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710A2D1: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xF4) = eax; /* 0x1710A2D5: mov dword ptr [ebx + 0xf4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1710A2DB: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1710A2DE: pop ecx */
    MEM32(ebx + 0xF0) = eax; /* 0x1710A2DF: mov dword ptr [ebx + 0xf0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710A2E5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A2E7:
    ecx = MEM32(ebx + 0xEC); /* 0x1710A2E7: mov ecx, dword ptr [ebx + 0xec] */
    edx = MEM32(ebx + 0xF4); /* 0x1710A2ED: mov edx, dword ptr [ebx + 0xf4] */
    eax = ebx + 0x114; /* 0x1710A2F3: lea eax, [ebx + 0x114] */
    esi = MEM32(eax); /* 0x1710A2F9: mov esi, dword ptr [eax] */
    MEM32(ebx + 0x58) = edi; /* 0x1710A2FB: mov dword ptr [ebx + 0x58], edi */
    MEM32(edx + ecx * 4) = esi; /* 0x1710A2FE: mov dword ptr [edx + ecx*4], esi */
    PUSH32(esp, 0x2Cu); /* 0x1710A301: push 0x2c */
    MEM32(eax) = edi; /* 0x1710A303: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710A305: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710A30A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710A30C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A31B; /* 0x1710A30D: je 0x1710a31b */
L_1710A30F:
    ecx = eax; /* 0x1710A30F: mov ecx, eax */
    RECOMP_CALL(sub_170FAC20); /* 0x1710A311: call 0x170fac20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1710A316: mov dword ptr [ebp - 4], eax */
    goto L_1710A31E; /* 0x1710A319: jmp 0x1710a31e */
L_1710A31B:
    MEM32(ebp + (-0x4)) = edi; /* 0x1710A31B: mov dword ptr [ebp - 4], edi */
L_1710A31E:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1710A31E: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A366; /* 0x1710A321: je 0x1710a366 */
L_1710A323:
    eax = ebp + (-0x4); /* 0x1710A323: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1710A326: push eax */
    RECOMP_CALL(sub_170F52B2); /* 0x1710A327: call 0x170f52b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A32C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710A366; /* 0x1710A32E: jl 0x1710a366 */
L_1710A330:
    eax = MEM32(ebp + (-0x4)); /* 0x1710A330: mov eax, dword ptr [ebp - 4] */
    MEM8(eax + 0x14) = (uint8_t)(4); /* 0x1710A333: mov byte ptr [eax + 0x14], 4 */
    eax = MEM32(ebx + 0xEC); /* 0x1710A337: mov eax, dword ptr [ebx + 0xec] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710A33D: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x18) = eax; /* 0x1710A340: mov dword ptr [ecx + 0x18], eax */
    edx = MEM32(ebp + (-0x4)); /* 0x1710A343: mov edx, dword ptr [ebp - 4] */
    eax = ebx + 0xF8; /* 0x1710A346: lea eax, [ebx + 0xf8] */
    ecx = MEM32(eax); /* 0x1710A34C: mov ecx, dword ptr [eax] */
    MEM32(edx + 0x28) = ecx; /* 0x1710A34E: mov dword ptr [edx + 0x28], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710A351: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xEC)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xEC) = MEM32(ebx + 0xEC) + 1; /* 0x1710A354: inc dword ptr [ebx + 0xec] */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x1710A35A: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1710A35C: mov eax, ecx */
    eax = ~eax; /* 0x1710A35E: not eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x1710A360: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1710A363: mov dword ptr [ebp - 0xc], eax */
L_1710A366:
    esi = POP32_VAL(esp); /* 0x1710A366: pop esi */
L_1710A367:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1710A367: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1710A36A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1710A36F: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710A370: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, edi */ /* 0x1710A373: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1710A375: pop edi */
    ebx = POP32_VAL(esp); /* 0x1710A376: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A380; /* 0x1710A377: je 0x1710a380 */
L_1710A379:
    PUSH32(esp, 1); /* 0x1710A379: push 1 */
    RECOMP_CALL(sub_170F4144); /* 0x1710A37B: call 0x170f4144 */
    RECOMP_FLAGS_IN();
L_1710A380:
    eax = MEM32(ebp + (-0xC)); /* 0x1710A380: mov eax, dword ptr [ebp - 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710A383: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1710A384: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1710A38C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A38Cu);

L_1710A38C:
    edi = edi; /* 0x1710A38C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A38E: push ebp */
    ebp = esp; /* 0x1710A38F: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1710A391: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1710A395: push edi */
    edi = ecx; /* 0x1710A396: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A3BF; /* 0x1710A398: je 0x1710a3bf */
L_1710A39A:
    PUSH32(esp, esi); /* 0x1710A39A: push esi */
    PUSH32(esp, 0x1710A18Bu); /* 0x1710A39B: push 0x1710a18b */
    esi = edi + (-0x4); /* 0x1710A3A0: lea esi, [edi - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1710A3A3: push dword ptr [esi] */
    PUSH32(esp, 8); /* 0x1710A3A5: push 8 */
    PUSH32(esp, edi); /* 0x1710A3A7: push edi */
    RECOMP_CALL(sub_17039F0F); /* 0x1710A3A8: call 0x17039f0f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1710A3AD: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A3BA; /* 0x1710A3B1: je 0x1710a3ba */
L_1710A3B3:
    PUSH32(esp, esi); /* 0x1710A3B3: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1710A3B4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1710A3B9: pop ecx */
L_1710A3BA:
    eax = esi; /* 0x1710A3BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1710A3BC: pop esi */
    goto L_1710A3D5; /* 0x1710A3BD: jmp 0x1710a3d5 */
L_1710A3BF:
    ecx = edi; /* 0x1710A3BF: mov ecx, edi */
    RECOMP_CALL(sub_1710A18B); /* 0x1710A3C1: call 0x1710a18b */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1710A3C6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A3D3; /* 0x1710A3CA: je 0x1710a3d3 */
L_1710A3CC:
    PUSH32(esp, edi); /* 0x1710A3CC: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1710A3CD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1710A3D2: pop ecx */
L_1710A3D3:
    eax = edi; /* 0x1710A3D3: mov eax, edi */
L_1710A3D5:
    edi = POP32_VAL(esp); /* 0x1710A3D5: pop edi */
    ebp = POP32_VAL(esp); /* 0x1710A3D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1710A3D7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1710A3DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A3DFu);

L_1710A3DF:
    edi = edi; /* 0x1710A3DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A3E1: push ebp */
    ebp = esp; /* 0x1710A3E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710A3E4: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710A3E7: push ebx */
    PUSH32(esp, esi); /* 0x1710A3E8: push esi */
    PUSH32(esp, edi); /* 0x1710A3E9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1710A3EA: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x1710A3ED: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710A3EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1710A3F1: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x1710A3F4: mov dword ptr [ebp - 0xc], esi */
    ebx = MEM32(eax + 0x10); /* 0x1710A3F7: mov ebx, dword ptr [eax + 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x1710A3FA: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x1710A3FD: mov edx, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1710A3FF: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1710A402: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A410; /* 0x1710A405: je 0x1710a410 */
L_1710A407:
    MEM32(ebp + (-0x4)) = 1; /* 0x1710A407: mov dword ptr [ebp - 4], 1 */
    goto L_1710A41A; /* 0x1710A40E: jmp 0x1710a41a */
L_1710A410:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710A410: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1710A412: inc esi */
    _flag_k = FK_INC;
    /* cmp ebx, esi */ /* 0x1710A413: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710A41D; /* 0x1710A415: jae 0x1710a41d */
L_1710A417:
    MEM32(ebp + (-0x4)) = esi; /* 0x1710A417: mov dword ptr [ebp - 4], esi */
L_1710A41A:
    ebx = MEM32(ebp + (-0x4)); /* 0x1710A41A: mov ebx, dword ptr [ebp - 4] */
L_1710A41D:
    /* test ecx, ecx */ /* 0x1710A41D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710A64C; /* 0x1710A41F: jl 0x1710a64c */
L_1710A425:
    /* cmp ecx, 3 */ /* 0x1710A425: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A628; /* 0x1710A428: jle 0x1710a628 */
L_1710A42E:
    /* cmp ecx, 4 */ /* 0x1710A42E: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A486; /* 0x1710A431: je 0x1710a486 */
L_1710A433:
    /* cmp ecx, 5 */ /* 0x1710A433: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A64C; /* 0x1710A436: jne 0x1710a64c */
L_1710A43C:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1710A43C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(eax + 0x14); /* 0x1710A440: mov ebx, dword ptr [eax + 0x14] */
    esi = eax + 0x18; /* 0x1710A443: lea esi, [eax + 0x18] */
    MEM32(edi) = esi; /* 0x1710A446: mov dword ptr [edi], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A660; /* 0x1710A448: je 0x1710a660 */
L_1710A44E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1710A44E: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1710A452: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = esi; /* 0x1710A454: mov dword ptr [edi], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A47C; /* 0x1710A456: jbe 0x1710a47c */
L_1710A458:
    PUSH32(esp, 0); /* 0x1710A458: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1710A45A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710A45D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710A460: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1710A463: push edi */
    RECOMP_CALL(sub_1710A3DF); /* 0x1710A464: call 0x1710a3df */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A469: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1710A46B: mov dword ptr [ebp - 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710A653; /* 0x1710A46E: jl 0x1710a653 */
L_1710A474:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1710A474: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1710A477: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710A458; /* 0x1710A47A: jb 0x1710a458 */
L_1710A47C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1710A47C: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A44E; /* 0x1710A47F: jne 0x1710a44e */
L_1710A481:
    goto L_1710A653; /* 0x1710A481: jmp 0x1710a653 */
L_1710A486:
    /* cmp edx, 4 */ /* 0x1710A486: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A593; /* 0x1710A489: je 0x1710a593 */
L_1710A48F:
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A587; /* 0x1710A48F: jle 0x1710a587 */
L_1710A495:
    /* cmp edx, 9 */ /* 0x1710A495: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A540; /* 0x1710A498: jle 0x1710a540 */
L_1710A49E:
    /* cmp edx, 0xFu */ /* 0x1710A49E: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A4F3; /* 0x1710A4A1: je 0x1710a4f3 */
L_1710A4A3:
    /* cmp edx, 0x10u */ /* 0x1710A4A3: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A587; /* 0x1710A4A6: jne 0x1710a587 */
L_1710A4AC:
    /* test ebx, ebx */ /* 0x1710A4AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A623; /* 0x1710A4AE: je 0x1710a623 */
L_1710A4B4:
    esi = MEM32(ebp + 0x10); /* 0x1710A4B4: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1710A4B7: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x18) = ebx; /* 0x1710A4BA: mov dword ptr [ebp + 0x18], ebx */
L_1710A4BD:
    /* cmp MEM32(esi), 0 */ /* 0x1710A4BD: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A4E0; /* 0x1710A4C0: je 0x1710a4e0 */
L_1710A4C2:
    eax = MEM32(edi); /* 0x1710A4C2: mov eax, dword ptr [edi] */
    ebx = MEM32(eax); /* 0x1710A4C4: mov ebx, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x1710A4C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A4D0; /* 0x1710A4C8: je 0x1710a4d0 */
L_1710A4CA:
    eax = MEM32(ebx); /* 0x1710A4CA: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1710A4CC: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1710A4CD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1710A4D0:
    eax = MEM32(esi); /* 0x1710A4D0: mov eax, dword ptr [esi] */
    MEM32(eax) = 0x10u; /* 0x1710A4D2: mov dword ptr [eax], 0x10 */
    eax = MEM32(esi); /* 0x1710A4D8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = ebx; /* 0x1710A4DA: mov dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 8; /* 0x1710A4DD: add dword ptr [esi], 8 */
    _flag_k = FK_ADD;
L_1710A4E0:
    eax = MEM32(ebp + 0x14); /* 0x1710A4E0: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1710A4E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A4E9; /* 0x1710A4E5: je 0x1710a4e9 */
L_1710A4E7:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1710A4E7: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_1710A4E9:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x1710A4E9: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x1710A4EC: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A4BD; /* 0x1710A4EF: jne 0x1710a4bd */
L_1710A4F1:
    goto L_1710A538; /* 0x1710A4F1: jmp 0x1710a538 */
L_1710A4F3:
    /* test ebx, ebx */ /* 0x1710A4F3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A623; /* 0x1710A4F5: je 0x1710a623 */
L_1710A4FB:
    esi = MEM32(ebp + 0x10); /* 0x1710A4FB: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1710A4FE: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x18) = ebx; /* 0x1710A501: mov dword ptr [ebp + 0x18], ebx */
L_1710A504:
    /* cmp MEM32(esi), 0 */ /* 0x1710A504: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A527; /* 0x1710A507: je 0x1710a527 */
L_1710A509:
    eax = MEM32(edi); /* 0x1710A509: mov eax, dword ptr [edi] */
    ebx = MEM32(eax); /* 0x1710A50B: mov ebx, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x1710A50D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A517; /* 0x1710A50F: je 0x1710a517 */
L_1710A511:
    eax = MEM32(ebx); /* 0x1710A511: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1710A513: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1710A514: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1710A517:
    eax = MEM32(esi); /* 0x1710A517: mov eax, dword ptr [esi] */
    MEM32(eax) = 0xFu; /* 0x1710A519: mov dword ptr [eax], 0xf */
    eax = MEM32(esi); /* 0x1710A51F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = ebx; /* 0x1710A521: mov dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 8; /* 0x1710A524: add dword ptr [esi], 8 */
    _flag_k = FK_ADD;
L_1710A527:
    eax = MEM32(ebp + 0x14); /* 0x1710A527: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1710A52A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A530; /* 0x1710A52C: je 0x1710a530 */
L_1710A52E:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1710A52E: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_1710A530:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x1710A530: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x1710A533: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A504; /* 0x1710A536: jne 0x1710a504 */
L_1710A538:
    edi = MEM32(ebp + 0x8); /* 0x1710A538: mov edi, dword ptr [ebp + 8] */
    goto L_1710A623; /* 0x1710A53B: jmp 0x1710a623 */
L_1710A540:
    /* test ebx, ebx */ /* 0x1710A540: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A623; /* 0x1710A542: je 0x1710a623 */
L_1710A548:
    esi = MEM32(ebp + 0x10); /* 0x1710A548: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1710A54B: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x18) = ebx; /* 0x1710A54E: mov dword ptr [ebp + 0x18], ebx */
L_1710A551:
    /* cmp MEM32(esi), 0 */ /* 0x1710A551: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A574; /* 0x1710A554: je 0x1710a574 */
L_1710A556:
    eax = MEM32(edi); /* 0x1710A556: mov eax, dword ptr [edi] */
    ebx = MEM32(eax); /* 0x1710A558: mov ebx, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x1710A55A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A564; /* 0x1710A55C: je 0x1710a564 */
L_1710A55E:
    eax = MEM32(ebx); /* 0x1710A55E: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1710A560: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1710A561: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1710A564:
    eax = MEM32(esi); /* 0x1710A564: mov eax, dword ptr [esi] */
    MEM32(eax) = 5; /* 0x1710A566: mov dword ptr [eax], 5 */
    eax = MEM32(esi); /* 0x1710A56C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = ebx; /* 0x1710A56E: mov dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 8; /* 0x1710A571: add dword ptr [esi], 8 */
    _flag_k = FK_ADD;
L_1710A574:
    eax = MEM32(ebp + 0x14); /* 0x1710A574: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1710A577: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A57D; /* 0x1710A579: je 0x1710a57d */
L_1710A57B:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1710A57B: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_1710A57D:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x1710A57D: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x1710A580: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A551; /* 0x1710A583: jne 0x1710a551 */
L_1710A585:
    RECOMP_BACKEDGE();
    goto L_1710A538; /* 0x1710A585: jmp 0x1710a538 */
L_1710A587:
    MEM32(ebp + (-0x8)) = 0x80004005u; /* 0x1710A587: mov dword ptr [ebp - 8], 0x80004005 */
    goto L_1710A660; /* 0x1710A58E: jmp 0x1710a660 */
L_1710A593:
    /* test ebx, ebx */ /* 0x1710A593: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A623; /* 0x1710A595: je 0x1710a623 */
L_1710A59B:
    ebx = MEM32(ebp + 0x10); /* 0x1710A59B: mov ebx, dword ptr [ebp + 0x10] */
L_1710A59E:
    /* cmp MEM32(ebx), 0 */ /* 0x1710A59E: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A60B; /* 0x1710A5A1: je 0x1710a60b */
L_1710A5A3:
    eax = MEM32(ebp + 0xC); /* 0x1710A5A3: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x1710A5A6: mov eax, dword ptr [eax] */
    esi = MEM32(eax); /* 0x1710A5A8: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x1710A5AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A5F4; /* 0x1710A5AC: je 0x1710a5f4 */
L_1710A5AE:
    eax = esi; /* 0x1710A5AE: mov eax, esi */
    edx = eax + 0x1; /* 0x1710A5B0: lea edx, [eax + 1] */
L_1710A5B3:
    SET_LO8(ecx, MEM8(eax)); /* 0x1710A5B3: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710A5B5: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1710A5B6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A5B3; /* 0x1710A5B8: jne 0x1710a5b3 */
L_1710A5BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1710A5BA: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x1710A5BC: lea ecx, [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710A5BF: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1710A5C0: push ecx */
    PUSH32(esp, eax); /* 0x1710A5C1: push eax */
    MEM32(ebp + 0x10) = eax; /* 0x1710A5C2: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x1710A5C5: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A5CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1710A5CC: mov dword ptr [ebp - 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710A660; /* 0x1710A5CF: jl 0x1710a660 */
L_1710A5D5:
    eax = MEM32(ebp + (-0xC)); /* 0x1710A5D5: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x1710A5D8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710A5DA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1710A5DB: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1710A5DE: mov ecx, dword ptr [ebp + 0x10] */
    edi = eax; /* 0x1710A5E1: mov edi, eax */
    eax = ecx; /* 0x1710A5E3: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710A5E5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710A5E5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710A5E8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710A5EA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710A5EC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710A5EF: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1710A5F1: mov edi, dword ptr [ebp + 8] */
L_1710A5F4:
    eax = MEM32(ebx); /* 0x1710A5F4: mov eax, dword ptr [ebx] */
    MEM32(eax) = 4; /* 0x1710A5F6: mov dword ptr [eax], 4 */
    eax = MEM32(ebx); /* 0x1710A5FC: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1710A5FE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x1710A601: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1710A604: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 8; /* 0x1710A608: add dword ptr [ebx], 8 */
    _flag_k = FK_ADD;
L_1710A60B:
    eax = MEM32(ebp + 0x14); /* 0x1710A60B: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1710A60E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A614; /* 0x1710A610: je 0x1710a614 */
L_1710A612:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1710A612: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_1710A614:
    eax = MEM32(ebp + 0xC); /* 0x1710A614: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x1710A617: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1710A61A: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A59E; /* 0x1710A61D: jne 0x1710a59e */
L_1710A623:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x14u; /* 0x1710A623: add dword ptr [edi], 0x14 */
    _flag_k = FK_ADD;
    goto L_1710A653; /* 0x1710A626: jmp 0x1710a653 */
L_1710A628:
    ecx = MEM32(eax + 0x18); /* 0x1710A628: mov ecx, dword ptr [eax + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x14)); /* 0x1710A62B: imul ecx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x1710A62F: imul ecx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710A632: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710A63F; /* 0x1710A633: je 0x1710a63f */
L_1710A635:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710A635: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1710A63F; /* 0x1710A636: je 0x1710a63f */
L_1710A638:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1710A638: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710A587; /* 0x1710A639: jne 0x1710a587 */
L_1710A63F:
    eax = MEM32(ebp + 0xC); /* 0x1710A63F: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1710A642: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1710A642: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x1710A645: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 0x1Cu; /* 0x1710A647: add dword ptr [edi], 0x1c */
    _flag_k = FK_ADD;
    goto L_1710A653; /* 0x1710A64A: jmp 0x1710a653 */
L_1710A64C:
    MEM32(ebp + (-0x8)) = 0x80004005u; /* 0x1710A64C: mov dword ptr [ebp - 8], 0x80004005 */
L_1710A653:
    eax = MEM32(ebp + (-0xC)); /* 0x1710A653: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1710A656: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A660; /* 0x1710A658: je 0x1710a660 */
L_1710A65A:
    ecx = MEM32(eax); /* 0x1710A65A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710A65C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1710A65D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1710A660:
    eax = MEM32(ebp + (-0x8)); /* 0x1710A660: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x1710A663: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A664: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710A665: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710A666: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1710A667: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1710A66F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A66Fu);

L_1710A66F:
    edi = edi; /* 0x1710A66F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A671: push ebp */
    ebp = esp; /* 0x1710A672: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1710A674: push dword ptr [ebp + 0x18] */
    eax = ebp + 0x10; /* 0x1710A677: lea eax, [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1710A67A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1710A67D: push eax */
    eax = ebp + 0xC; /* 0x1710A67E: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1710A681: push eax */
    eax = ebp + 0x8; /* 0x1710A682: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1710A685: push eax */
    RECOMP_CALL(sub_1710A3DF); /* 0x1710A686: call 0x1710a3df */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1710A68B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1710A68C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1710A694(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A694u);

L_1710A694:
    eax = ecx; /* 0x1710A694: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710A696: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x170162E0u; /* 0x1710A698: mov dword ptr [eax], 0x170162e0 */
    MEM32(eax + 0xC) = ecx; /* 0x1710A69E: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1710A6A1: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x1710A6A4: mov dword ptr [eax + 4], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1710A6A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1710A6AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A6ADu);

L_1710A6AD:
    edi = edi; /* 0x1710A6AD: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1710A6AF: push ebx */
    PUSH32(esp, esi); /* 0x1710A6B0: push esi */
    esi = ecx; /* 0x1710A6B1: mov esi, ecx */
    ecx = MEM32(esi + 0x14); /* 0x1710A6B3: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710A6B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x1710A6B8: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A6C3; /* 0x1710A6BA: je 0x1710a6c3 */
L_1710A6BC:
    PUSH32(esp, 3); /* 0x1710A6BC: push 3 */
    RECOMP_CALL(sub_1710A38C); /* 0x1710A6BE: call 0x1710a38c */
    RECOMP_FLAGS_IN();
L_1710A6C3:
    eax = MEM32(esi); /* 0x1710A6C3: mov eax, dword ptr [esi] */
    /* cmp eax, ebx */ /* 0x1710A6C5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x14) = ebx; /* 0x1710A6C7: mov dword ptr [esi + 0x14], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1710A6F1; /* 0x1710A6CA: jl 0x1710a6f1 */
L_1710A6CC:
    /* cmp eax, 1 */ /* 0x1710A6CC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A6E5; /* 0x1710A6CF: jle 0x1710a6e5 */
L_1710A6D1:
    /* cmp eax, 3 */ /* 0x1710A6D1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A6E5; /* 0x1710A6D4: je 0x1710a6e5 */
L_1710A6D6:
    /* cmp eax, 5 */ /* 0x1710A6D6: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A6E5; /* 0x1710A6D9: je 0x1710a6e5 */
L_1710A6DB:
    /* cmp eax, 6 */ /* 0x1710A6DB: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1710A6F1; /* 0x1710A6DE: jle 0x1710a6f1 */
L_1710A6E0:
    /* cmp eax, 0xBu */ /* 0x1710A6E0: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1710A6F1; /* 0x1710A6E3: jg 0x1710a6f1 */
L_1710A6E5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1710A6E5: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1710A6E8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1710A6ED: pop ecx */
    MEM32(esi + 0xC) = ebx; /* 0x1710A6EE: mov dword ptr [esi + 0xc], ebx */
L_1710A6F1:
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x1710A6F1: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A717; /* 0x1710A6F4: je 0x1710a717 */
L_1710A6F6:
    PUSH32(esp, edi); /* 0x1710A6F6: push edi */
L_1710A6F7:
    edi = MEM32(esi + 0x18); /* 0x1710A6F7: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(edi + 0x18); /* 0x1710A6FA: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x1710A6FD: mov dword ptr [esi + 0x18], eax */
    ecx = edi; /* 0x1710A700: mov ecx, edi */
    MEM32(edi + 0x18) = ebx; /* 0x1710A702: mov dword ptr [edi + 0x18], ebx */
    RECOMP_CALL(sub_1710A6AD); /* 0x1710A705: call 0x1710a6ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1710A70A: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1710A70B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x18), ebx */ /* 0x1710A710: cmp dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710A713: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A6F7; /* 0x1710A714: jne 0x1710a6f7 */
L_1710A716:
    edi = POP32_VAL(esp); /* 0x1710A716: pop edi */
L_1710A717:
    esi = POP32_VAL(esp); /* 0x1710A717: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710A718: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1710A719: ret  */
    RECOMP_REGS_OUT();
}

void sub_1710A71F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A71Fu);

L_1710A71F:
    edi = edi; /* 0x1710A71F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A721: push ebp */
    ebp = esp; /* 0x1710A722: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1710A724: mov eax, dword ptr [ebp + 0xc] */
    ecx = 0x80000003u; /* 0x1710A727: mov ecx, 0x80000003 */
    edx = eax; /* 0x1710A72C: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1710A72E: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x1710A730: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710A732: push esi */
    PUSH32(esp, edi); /* 0x1710A733: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A7FC; /* 0x1710A734: jne 0x1710a7fc */
L_1710A73A:
    ecx = eax; /* 0x1710A73A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x1710A73C: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1710A742: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A7FC; /* 0x1710A744: je 0x1710a7fc */
L_1710A74A:
    eax = ~eax; /* 0x1710A74A: not eax */
    /* cmp MEM8(eax + 0x14), 4 */ /* 0x1710A74C: cmp byte ptr [eax + 0x14], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710A7FC; /* 0x1710A750: jne 0x1710a7fc */
L_1710A756:
    esi = MEM32(ebp + 0x8); /* 0x1710A756: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(eax + 0x18); /* 0x1710A759: mov edi, dword ptr [eax + 0x18] */
    /* cmp edi, MEM32(esi + 0xEC) */ /* 0x1710A75C: cmp edi, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xEC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710A7FC; /* 0x1710A762: jae 0x1710a7fc */
L_1710A768:
    eax = MEM32(esi + 0xF4); /* 0x1710A768: mov eax, dword ptr [esi + 0xf4] */
    ecx = MEM32(eax + edi * 4); /* 0x1710A76E: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x1710A771: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A77C; /* 0x1710A773: je 0x1710a77c */
L_1710A775:
    PUSH32(esp, 1); /* 0x1710A775: push 1 */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710A777: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710A77C:
    eax = MEM32(esi + 0xF4); /* 0x1710A77C: mov eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x1710A782: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xEC); /* 0x1710A786: mov eax, dword ptr [esi + 0xec] */
    ecx = eax + (-0x1); /* 0x1710A78C: lea ecx, [eax - 1] */
    /* cmp edi, ecx */ /* 0x1710A78F: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710A791: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A7AE; /* 0x1710A792: je 0x1710a7ae */
L_1710A794:
    eax = MEM32(esi + 0xF4); /* 0x1710A794: mov eax, dword ptr [esi + 0xf4] */
    ebx = ecx; /* 0x1710A79A: mov ebx, ecx */
    ecx = MEM32(eax + ebx * 4); /* 0x1710A79C: mov ecx, dword ptr [eax + ebx*4] */
    MEM32(eax + edi * 4) = ecx; /* 0x1710A79F: mov dword ptr [eax + edi*4], ecx */
    eax = MEM32(esi + 0xF4); /* 0x1710A7A2: mov eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & 0; /* 0x1710A7A8: and dword ptr [eax + ebx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1710A7B0; /* 0x1710A7AC: jmp 0x1710a7b0 */
L_1710A7AE:
    ebx = eax; /* 0x1710A7AE: mov ebx, eax */
L_1710A7B0:
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xEC) = MEM32(esi + 0xEC) - 1; /* 0x1710A7B0: dec dword ptr [esi + 0xec] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xF8u; /* 0x1710A7B6: add esi, 0xf8 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x1710A7BC: mov ecx, dword ptr [esi] */
    eax = esi; /* 0x1710A7BE: mov eax, esi */
    goto L_1710A7CC; /* 0x1710A7C0: jmp 0x1710a7cc */
L_1710A7C2:
    /* cmp MEM32(ecx + 0x18), edi */ /* 0x1710A7C2: cmp dword ptr [ecx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A7D2; /* 0x1710A7C5: je 0x1710a7d2 */
L_1710A7C7:
    eax = ecx + 0x28; /* 0x1710A7C7: lea eax, [ecx + 0x28] */
    ecx = MEM32(eax); /* 0x1710A7CA: mov ecx, dword ptr [eax] */
L_1710A7CC:
    /* test ecx, ecx */ /* 0x1710A7CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A7C2; /* 0x1710A7CE: jne 0x1710a7c2 */
L_1710A7D0:
    goto L_1710A7E2; /* 0x1710A7D0: jmp 0x1710a7e2 */
L_1710A7D2:
    edx = MEM32(ecx + 0x28); /* 0x1710A7D2: mov edx, dword ptr [ecx + 0x28] */
    MEM32(eax) = edx; /* 0x1710A7D5: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x28) = MEM32(ecx + 0x28) & 0; /* 0x1710A7D7: and dword ptr [ecx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x1710A7DB: push 1 */
    RECOMP_CALL(sub_170F4144); /* 0x1710A7DD: call 0x170f4144 */
    RECOMP_FLAGS_IN();
L_1710A7E2:
    eax = MEM32(esi); /* 0x1710A7E2: mov eax, dword ptr [esi] */
    goto L_1710A7EE; /* 0x1710A7E4: jmp 0x1710a7ee */
L_1710A7E6:
    /* cmp MEM32(eax + 0x18), ebx */ /* 0x1710A7E6: cmp dword ptr [eax + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710A7F4; /* 0x1710A7E9: je 0x1710a7f4 */
L_1710A7EB:
    eax = MEM32(eax + 0x28); /* 0x1710A7EB: mov eax, dword ptr [eax + 0x28] */
L_1710A7EE:
    /* test eax, eax */ /* 0x1710A7EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A7E6; /* 0x1710A7F0: jne 0x1710a7e6 */
L_1710A7F2:
    goto L_1710A7F7; /* 0x1710A7F2: jmp 0x1710a7f7 */
L_1710A7F4:
    MEM32(eax + 0x18) = edi; /* 0x1710A7F4: mov dword ptr [eax + 0x18], edi */
L_1710A7F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A7F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1710A7F9: pop ebx */
    goto L_1710A801; /* 0x1710A7FA: jmp 0x1710a801 */
L_1710A7FC:
    eax = 0x8876086Cu; /* 0x1710A7FC: mov eax, 0x8876086c */
L_1710A801:
    edi = POP32_VAL(esp); /* 0x1710A801: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A802: pop esi */
    ebp = POP32_VAL(esp); /* 0x1710A803: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A804: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A80C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A80Cu);

L_1710A80C:
    edi = edi; /* 0x1710A80C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A80E: push ebp */
    ebp = esp; /* 0x1710A80F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1710A811: push esi */
    PUSH32(esp, edi); /* 0x1710A812: push edi */
    PUSH32(esp, 0x1Cu); /* 0x1710A813: push 0x1c */
    esi = ecx; /* 0x1710A815: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710A817: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B01C); /* 0x1710A819: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A81E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A820: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A82C; /* 0x1710A821: je 0x1710a82c */
L_1710A823:
    ecx = eax; /* 0x1710A823: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710A825: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    goto L_1710A82E; /* 0x1710A82A: jmp 0x1710a82e */
L_1710A82C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A82C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A82E:
    /* test eax, eax */ /* 0x1710A82E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A839; /* 0x1710A830: jne 0x1710a839 */
L_1710A832:
    edi = 0x8007000Eu; /* 0x1710A832: mov edi, 0x8007000e */
    goto L_1710A858; /* 0x1710A837: jmp 0x1710a858 */
L_1710A839:
    ecx = MEM32(ebp + 0x8); /* 0x1710A839: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1710A83C: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1710A83F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x1710A842: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax) = 2; /* 0x1710A845: mov dword ptr [eax], 2 */
    ecx = esi + 0x118; /* 0x1710A84B: lea ecx, [esi + 0x118] */
    edx = MEM32(ecx); /* 0x1710A851: mov edx, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x1710A853: mov dword ptr [edx + 0x18], eax */
    MEM32(ecx) = eax; /* 0x1710A856: mov dword ptr [ecx], eax */
L_1710A858:
    eax = edi; /* 0x1710A858: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1710A85A: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A85B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1710A85C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A85D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A865(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A865u);

L_1710A865:
    edi = edi; /* 0x1710A865: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A867: push ebp */
    ebp = esp; /* 0x1710A868: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1710A86A: push esi */
    PUSH32(esp, edi); /* 0x1710A86B: push edi */
    PUSH32(esp, 0x1Cu); /* 0x1710A86C: push 0x1c */
    esi = ecx; /* 0x1710A86E: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710A870: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B01C); /* 0x1710A872: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A877: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A879: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A885; /* 0x1710A87A: je 0x1710a885 */
L_1710A87C:
    ecx = eax; /* 0x1710A87C: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710A87E: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    goto L_1710A887; /* 0x1710A883: jmp 0x1710a887 */
L_1710A885:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A885: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A887:
    /* test eax, eax */ /* 0x1710A887: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A892; /* 0x1710A889: jne 0x1710a892 */
L_1710A88B:
    edi = 0x8007000Eu; /* 0x1710A88B: mov edi, 0x8007000e */
    goto L_1710A8B1; /* 0x1710A890: jmp 0x1710a8b1 */
L_1710A892:
    ecx = MEM32(ebp + 0x8); /* 0x1710A892: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1710A895: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1710A898: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x1710A89B: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax) = 6; /* 0x1710A89E: mov dword ptr [eax], 6 */
    ecx = esi + 0x118; /* 0x1710A8A4: lea ecx, [esi + 0x118] */
    edx = MEM32(ecx); /* 0x1710A8AA: mov edx, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x1710A8AC: mov dword ptr [edx + 0x18], eax */
    MEM32(ecx) = eax; /* 0x1710A8AF: mov dword ptr [ecx], eax */
L_1710A8B1:
    eax = edi; /* 0x1710A8B1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1710A8B3: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A8B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1710A8B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A8B6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A8BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A8BEu);

L_1710A8BE:
    edi = edi; /* 0x1710A8BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A8C0: push ebp */
    ebp = esp; /* 0x1710A8C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1710A8C3: push esi */
    PUSH32(esp, edi); /* 0x1710A8C4: push edi */
    PUSH32(esp, 0x1Cu); /* 0x1710A8C5: push 0x1c */
    esi = ecx; /* 0x1710A8C7: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710A8C9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B01C); /* 0x1710A8CB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A8D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A8D2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A8DE; /* 0x1710A8D3: je 0x1710a8de */
L_1710A8D5:
    ecx = eax; /* 0x1710A8D5: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710A8D7: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    goto L_1710A8E0; /* 0x1710A8DC: jmp 0x1710a8e0 */
L_1710A8DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710A8DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A8E0:
    /* test eax, eax */ /* 0x1710A8E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A8EB; /* 0x1710A8E2: jne 0x1710a8eb */
L_1710A8E4:
    edi = 0x8007000Eu; /* 0x1710A8E4: mov edi, 0x8007000e */
    goto L_1710A90A; /* 0x1710A8E9: jmp 0x1710a90a */
L_1710A8EB:
    ecx = MEM32(ebp + 0x8); /* 0x1710A8EB: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1710A8EE: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1710A8F1: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x1710A8F4: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax) = 4; /* 0x1710A8F7: mov dword ptr [eax], 4 */
    ecx = esi + 0x118; /* 0x1710A8FD: lea ecx, [esi + 0x118] */
    edx = MEM32(ecx); /* 0x1710A903: mov edx, dword ptr [ecx] */
    MEM32(edx + 0x18) = eax; /* 0x1710A905: mov dword ptr [edx + 0x18], eax */
    MEM32(ecx) = eax; /* 0x1710A908: mov dword ptr [ecx], eax */
L_1710A90A:
    eax = edi; /* 0x1710A90A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1710A90C: pop edi */
    esi = POP32_VAL(esp); /* 0x1710A90D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1710A90E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710A90F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710A917(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A917u);

L_1710A917:
    edi = edi; /* 0x1710A917: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A919: push ebp */
    ebp = esp; /* 0x1710A91A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710A91C: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710A91F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710A923: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710A927: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710A928: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710A92A: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710A92D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A932: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A934: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A942; /* 0x1710A935: je 0x1710a942 */
L_1710A937:
    ecx = eax; /* 0x1710A937: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710A939: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710A93E: mov ebx, eax */
    goto L_1710A944; /* 0x1710A940: jmp 0x1710a944 */
L_1710A942:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710A942: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A944:
    /* test ebx, ebx */ /* 0x1710A944: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A951; /* 0x1710A946: jne 0x1710a951 */
L_1710A948:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710A948: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710A9AB; /* 0x1710A94F: jmp 0x1710a9ab */
L_1710A951:
    PUSH32(esp, esi); /* 0x1710A951: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1710A952: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1710A955: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A975; /* 0x1710A957: jbe 0x1710a975 */
L_1710A959:
    eax = esi; /* 0x1710A959: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1710A95B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1710A95B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1710A95E: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710A95F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A964: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A966: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710A967: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710A975; /* 0x1710A96A: jne 0x1710a975 */
L_1710A96C:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710A96C: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710A9AA; /* 0x1710A973: jmp 0x1710a9aa */
L_1710A975:
    eax = MEM32(ebp + 0x8); /* 0x1710A975: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1710A978: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1710A979: mov edi, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1710A97C: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x1710A97E: mov esi, dword ptr [ebp + 0xc] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710A981: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x4) = eax; /* 0x1710A983: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710A986: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710A989: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710A98C: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710A98F: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710A992: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 3; /* 0x1710A995: mov dword ptr [ebx], 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710A99B: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710A9A0: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710A9A2: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710A9A5: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710A9A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710A9A9: pop edi */
L_1710A9AA:
    esi = POP32_VAL(esp); /* 0x1710A9AA: pop esi */
L_1710A9AB:
    PUSH32(esp, 0); /* 0x1710A9AB: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710A9AD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710A9B2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A9B4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A9C0; /* 0x1710A9B5: je 0x1710a9c0 */
L_1710A9B7:
    PUSH32(esp, 1); /* 0x1710A9B7: push 1 */
    ecx = ebx; /* 0x1710A9B9: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710A9BB: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710A9C0:
    eax = MEM32(ebp + (-0x8)); /* 0x1710A9C0: mov eax, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1710A9C3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710A9C4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710A9C5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710A9CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710A9CDu);

L_1710A9CD:
    edi = edi; /* 0x1710A9CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710A9CF: push ebp */
    ebp = esp; /* 0x1710A9D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710A9D2: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710A9D5: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710A9D9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710A9DD: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710A9DE: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710A9E0: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710A9E3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710A9E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710A9EA: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710A9F8; /* 0x1710A9EB: je 0x1710a9f8 */
L_1710A9ED:
    ecx = eax; /* 0x1710A9ED: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710A9EF: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710A9F4: mov ebx, eax */
    goto L_1710A9FA; /* 0x1710A9F6: jmp 0x1710a9fa */
L_1710A9F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710A9F8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710A9FA:
    /* test ebx, ebx */ /* 0x1710A9FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AA07; /* 0x1710A9FC: jne 0x1710aa07 */
L_1710A9FE:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710A9FE: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AA61; /* 0x1710AA05: jmp 0x1710aa61 */
L_1710AA07:
    PUSH32(esp, esi); /* 0x1710AA07: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1710AA08: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1710AA0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AA2B; /* 0x1710AA0D: jbe 0x1710aa2b */
L_1710AA0F:
    eax = esi; /* 0x1710AA0F: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1710AA11: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1710AA11: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1710AA14: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AA15: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AA1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AA1C: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AA1D: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AA2B; /* 0x1710AA20: jne 0x1710aa2b */
L_1710AA22:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AA22: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AA60; /* 0x1710AA29: jmp 0x1710aa60 */
L_1710AA2B:
    eax = MEM32(ebp + 0x8); /* 0x1710AA2B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1710AA2E: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1710AA2F: mov edi, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1710AA32: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x1710AA34: mov esi, dword ptr [ebp + 0xc] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710AA37: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x4) = eax; /* 0x1710AA39: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710AA3C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710AA3F: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AA42: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AA45: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AA48: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 5; /* 0x1710AA4B: mov dword ptr [ebx], 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AA51: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AA56: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710AA58: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710AA5B: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AA5D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710AA5F: pop edi */
L_1710AA60:
    esi = POP32_VAL(esp); /* 0x1710AA60: pop esi */
L_1710AA61:
    PUSH32(esp, 0); /* 0x1710AA61: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710AA63: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710AA68: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AA6A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AA76; /* 0x1710AA6B: je 0x1710aa76 */
L_1710AA6D:
    PUSH32(esp, 1); /* 0x1710AA6D: push 1 */
    ecx = ebx; /* 0x1710AA6F: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AA71: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AA76:
    eax = MEM32(ebp + (-0x8)); /* 0x1710AA76: mov eax, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1710AA79: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AA7A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710AA7B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710AA83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AA83u);

L_1710AA83:
    edi = edi; /* 0x1710AA83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AA85: push ebp */
    ebp = esp; /* 0x1710AA86: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710AA88: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710AA8B: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710AA8F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710AA93: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710AA94: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710AA96: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AA99: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AA9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AAA0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AAAE; /* 0x1710AAA1: je 0x1710aaae */
L_1710AAA3:
    ecx = eax; /* 0x1710AAA3: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710AAA5: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710AAAA: mov ebx, eax */
    goto L_1710AAB0; /* 0x1710AAAC: jmp 0x1710aab0 */
L_1710AAAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AAAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AAB0:
    /* test ebx, ebx */ /* 0x1710AAB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AABD; /* 0x1710AAB2: jne 0x1710aabd */
L_1710AAB4:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AAB4: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AB17; /* 0x1710AABB: jmp 0x1710ab17 */
L_1710AABD:
    PUSH32(esp, esi); /* 0x1710AABD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1710AABE: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1710AAC1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AAE1; /* 0x1710AAC3: jbe 0x1710aae1 */
L_1710AAC5:
    eax = esi; /* 0x1710AAC5: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1710AAC7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1710AAC7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1710AACA: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AACB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AAD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AAD2: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AAD3: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AAE1; /* 0x1710AAD6: jne 0x1710aae1 */
L_1710AAD8:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AAD8: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AB16; /* 0x1710AADF: jmp 0x1710ab16 */
L_1710AAE1:
    eax = MEM32(ebp + 0x8); /* 0x1710AAE1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1710AAE4: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1710AAE5: mov edi, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1710AAE8: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x1710AAEA: mov esi, dword ptr [ebp + 0xc] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710AAED: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x4) = eax; /* 0x1710AAEF: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710AAF2: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710AAF5: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AAF8: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AAFB: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AAFE: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 7; /* 0x1710AB01: mov dword ptr [ebx], 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AB07: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AB0C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710AB0E: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710AB11: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AB13: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710AB15: pop edi */
L_1710AB16:
    esi = POP32_VAL(esp); /* 0x1710AB16: pop esi */
L_1710AB17:
    PUSH32(esp, 0); /* 0x1710AB17: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710AB19: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710AB1E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AB20: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AB2C; /* 0x1710AB21: je 0x1710ab2c */
L_1710AB23:
    PUSH32(esp, 1); /* 0x1710AB23: push 1 */
    ecx = ebx; /* 0x1710AB25: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AB27: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AB2C:
    eax = MEM32(ebp + (-0x8)); /* 0x1710AB2C: mov eax, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1710AB2F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AB30: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710AB31: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710AB39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AB39u);

L_1710AB39:
    edi = edi; /* 0x1710AB39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AB3B: push ebp */
    ebp = esp; /* 0x1710AB3C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710AB3E: push ecx */
    PUSH32(esp, ecx); /* 0x1710AB3F: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710AB40: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710AB44: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710AB45: push 0x1c */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1710AB47: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AB4A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AB4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AB51: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AB5F; /* 0x1710AB52: je 0x1710ab5f */
L_1710AB54:
    ecx = eax; /* 0x1710AB54: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710AB56: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710AB5B: mov ebx, eax */
    goto L_1710AB61; /* 0x1710AB5D: jmp 0x1710ab61 */
L_1710AB5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AB5F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AB61:
    /* test ebx, ebx */ /* 0x1710AB61: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AB6E; /* 0x1710AB63: jne 0x1710ab6e */
L_1710AB65:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710AB65: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710ABA7; /* 0x1710AB6C: jmp 0x1710aba7 */
L_1710AB6E:
    PUSH32(esp, 0x10u); /* 0x1710AB6E: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AB70: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AB75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AB77: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AB65; /* 0x1710AB78: je 0x1710ab65 */
L_1710AB7A:
    ecx = MEM32(ebp + 0x8); /* 0x1710AB7A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1710AB7D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1710AB7E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1710AB81: push edi */
    edi = eax; /* 0x1710AB82: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710AB84: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710AB85: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710AB86: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1710AB87: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AB88: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1710AB8B: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx) = 8; /* 0x1710AB8E: mov dword ptr [ebx], 8 */
    MEM32(ebx + 0x4) = ecx; /* 0x1710AB94: mov dword ptr [ebx + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AB97: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AB9C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710AB9E: mov dword ptr [ecx + 0x18], ebx */
    edi = POP32_VAL(esp); /* 0x1710ABA1: pop edi */
    MEM32(eax) = ebx; /* 0x1710ABA2: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ABA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1710ABA6: pop esi */
L_1710ABA7:
    PUSH32(esp, 0); /* 0x1710ABA7: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710ABA9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710ABAE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710ABB0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710ABBC; /* 0x1710ABB1: je 0x1710abbc */
L_1710ABB3:
    PUSH32(esp, 1); /* 0x1710ABB3: push 1 */
    ecx = ebx; /* 0x1710ABB5: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710ABB7: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710ABBC:
    eax = MEM32(ebp + (-0x4)); /* 0x1710ABBC: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x1710ABBF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710ABC0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710ABC1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710ABC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710ABC9u);

L_1710ABC9:
    edi = edi; /* 0x1710ABC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710ABCB: push ebp */
    ebp = esp; /* 0x1710ABCC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710ABCE: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710ABD1: push ebx */
    PUSH32(esp, esi); /* 0x1710ABD2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710ABD3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710ABD5: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710ABD7: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x1710ABDA: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1710ABDD: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710ABE0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710ABE5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710ABE7: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710ABF5; /* 0x1710ABE8: je 0x1710abf5 */
L_1710ABEA:
    ecx = eax; /* 0x1710ABEA: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710ABEC: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710ABF1: mov ebx, eax */
    goto L_1710ABF7; /* 0x1710ABF3: jmp 0x1710abf7 */
L_1710ABF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ABF5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710ABF7:
    /* cmp ebx, esi */ /* 0x1710ABF7: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710AC04; /* 0x1710ABF9: jne 0x1710ac04 */
L_1710ABFB:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710ABFB: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AC62; /* 0x1710AC02: jmp 0x1710ac62 */
L_1710AC04:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1710AC04: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710AC1D; /* 0x1710AC07: jbe 0x1710ac1d */
L_1710AC09:
    eax = MEM32(ebp + 0x10); /* 0x1710AC09: mov eax, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1710AC0C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1710AC0C: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1710AC0F: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AC10: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710AC15: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710AC17: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AC18: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710ABFB; /* 0x1710AC1B: je 0x1710abfb */
L_1710AC1D:
    ecx = MEM32(ebp + 0x10); /* 0x1710AC1D: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x1710AC20: mov esi, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1710AC23: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1710AC23: shl ecx, 4 */
    eax = ecx; /* 0x1710AC26: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710AC28: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710AC28: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1710AC2B: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1710AC2C: mov edi, dword ptr [ebp - 4] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710AC2F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710AC31: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1710AC33: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710AC36: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710AC39: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebx + 0x4) = eax; /* 0x1710AC3B: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710AC3E: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710AC41: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AC44: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AC47: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AC4A: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 9; /* 0x1710AC4D: mov dword ptr [ebx], 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AC53: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AC58: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710AC5A: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710AC5D: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AC5F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710AC61: pop edi */
L_1710AC62:
    PUSH32(esp, 0); /* 0x1710AC62: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710AC64: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710AC69: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AC6B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AC77; /* 0x1710AC6C: je 0x1710ac77 */
L_1710AC6E:
    PUSH32(esp, 1); /* 0x1710AC6E: push 1 */
    ecx = ebx; /* 0x1710AC70: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AC72: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AC77:
    eax = MEM32(ebp + (-0x8)); /* 0x1710AC77: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x1710AC7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710AC7B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AC7C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710AC7D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710AC85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AC85u);

L_1710AC85:
    edi = edi; /* 0x1710AC85: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AC87: push ebp */
    ebp = esp; /* 0x1710AC88: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710AC8A: push ecx */
    PUSH32(esp, ecx); /* 0x1710AC8B: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710AC8C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710AC90: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710AC91: push 0x1c */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1710AC93: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AC96: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AC9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AC9D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710ACAB; /* 0x1710AC9E: je 0x1710acab */
L_1710ACA0:
    ecx = eax; /* 0x1710ACA0: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710ACA2: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710ACA7: mov ebx, eax */
    goto L_1710ACAD; /* 0x1710ACA9: jmp 0x1710acad */
L_1710ACAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ACAB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710ACAD:
    /* test ebx, ebx */ /* 0x1710ACAD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710ACBA; /* 0x1710ACAF: jne 0x1710acba */
L_1710ACB1:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710ACB1: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710ACF4; /* 0x1710ACB8: jmp 0x1710acf4 */
L_1710ACBA:
    PUSH32(esp, 0x40u); /* 0x1710ACBA: push 0x40 */
    RECOMP_CALL(sub_1721B01C); /* 0x1710ACBC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710ACC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710ACC3: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710ACB1; /* 0x1710ACC4: je 0x1710acb1 */
L_1710ACC6:
    PUSH32(esp, esi); /* 0x1710ACC6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1710ACC7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1710ACCA: push edi */
    PUSH32(esp, 0x10u); /* 0x1710ACCB: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1710ACCD: pop ecx */
    edi = eax; /* 0x1710ACCE: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710ACD0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1710ACD2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx + 0xC) = eax; /* 0x1710ACD5: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1710ACD8: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx) = 0xAu; /* 0x1710ACDB: mov dword ptr [ebx], 0xa */
    MEM32(ebx + 0x4) = ecx; /* 0x1710ACE1: mov dword ptr [ebx + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710ACE4: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710ACE9: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710ACEB: mov dword ptr [ecx + 0x18], ebx */
    edi = POP32_VAL(esp); /* 0x1710ACEE: pop edi */
    MEM32(eax) = ebx; /* 0x1710ACEF: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ACF1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1710ACF3: pop esi */
L_1710ACF4:
    PUSH32(esp, 0); /* 0x1710ACF4: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710ACF6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710ACFB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710ACFD: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AD09; /* 0x1710ACFE: je 0x1710ad09 */
L_1710AD00:
    PUSH32(esp, 1); /* 0x1710AD00: push 1 */
    ecx = ebx; /* 0x1710AD02: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AD04: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AD09:
    eax = MEM32(ebp + (-0x4)); /* 0x1710AD09: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x1710AD0C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AD0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710AD0E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710AD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AD16u);

L_1710AD16:
    edi = edi; /* 0x1710AD16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AD18: push ebp */
    ebp = esp; /* 0x1710AD19: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710AD1B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710AD1E: push ebx */
    PUSH32(esp, esi); /* 0x1710AD1F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AD20: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710AD22: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710AD24: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x1710AD27: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1710AD2A: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AD2D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710AD32: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710AD34: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710AD42; /* 0x1710AD35: je 0x1710ad42 */
L_1710AD37:
    ecx = eax; /* 0x1710AD37: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710AD39: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710AD3E: mov ebx, eax */
    goto L_1710AD44; /* 0x1710AD40: jmp 0x1710ad44 */
L_1710AD42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AD42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AD44:
    /* cmp ebx, esi */ /* 0x1710AD44: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710AD51; /* 0x1710AD46: jne 0x1710ad51 */
L_1710AD48:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AD48: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710ADAF; /* 0x1710AD4F: jmp 0x1710adaf */
L_1710AD51:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1710AD51: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710AD6A; /* 0x1710AD54: jbe 0x1710ad6a */
L_1710AD56:
    eax = MEM32(ebp + 0x10); /* 0x1710AD56: mov eax, dword ptr [ebp + 0x10] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1710AD59: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1710AD59: shl eax, 6 */
    PUSH32(esp, eax); /* 0x1710AD5C: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AD5D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710AD62: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710AD64: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AD65: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710AD48; /* 0x1710AD68: je 0x1710ad48 */
L_1710AD6A:
    ecx = MEM32(ebp + 0x10); /* 0x1710AD6A: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x1710AD6D: mov esi, dword ptr [ebp + 0xc] */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1710AD70: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1710AD70: shl ecx, 6 */
    eax = ecx; /* 0x1710AD73: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710AD75: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710AD75: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1710AD78: push edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1710AD79: mov edi, dword ptr [ebp - 4] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710AD7C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710AD7E: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1710AD80: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710AD83: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710AD86: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebx + 0x4) = eax; /* 0x1710AD88: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710AD8B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710AD8E: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AD91: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AD94: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AD97: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 0xBu; /* 0x1710AD9A: mov dword ptr [ebx], 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710ADA0: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710ADA5: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710ADA7: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710ADAA: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ADAC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710ADAE: pop edi */
L_1710ADAF:
    PUSH32(esp, 0); /* 0x1710ADAF: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710ADB1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710ADB6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710ADB8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710ADC4; /* 0x1710ADB9: je 0x1710adc4 */
L_1710ADBB:
    PUSH32(esp, 1); /* 0x1710ADBB: push 1 */
    ecx = ebx; /* 0x1710ADBD: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710ADBF: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710ADC4:
    eax = MEM32(ebp + (-0x8)); /* 0x1710ADC4: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x1710ADC7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710ADC8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710ADC9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710ADCA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710ADD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710ADD2u);

L_1710ADD2:
    edi = edi; /* 0x1710ADD2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710ADD4: push ebp */
    ebp = esp; /* 0x1710ADD5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710ADD7: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710ADDA: push ebx */
    PUSH32(esp, esi); /* 0x1710ADDB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710ADDC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710ADDE: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710ADE0: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = esi; /* 0x1710ADE3: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1710ADE6: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710ADE9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710ADEE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710ADF0: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710ADFE; /* 0x1710ADF1: je 0x1710adfe */
L_1710ADF3:
    ecx = eax; /* 0x1710ADF3: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710ADF5: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710ADFA: mov ebx, eax */
    goto L_1710AE00; /* 0x1710ADFC: jmp 0x1710ae00 */
L_1710ADFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710ADFE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AE00:
    /* cmp ebx, esi */ /* 0x1710AE00: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710AE0D; /* 0x1710AE02: jne 0x1710ae0d */
L_1710AE04:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AE04: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AE73; /* 0x1710AE0B: jmp 0x1710ae73 */
L_1710AE0D:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1710AE0D: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710AE26; /* 0x1710AE10: jbe 0x1710ae26 */
L_1710AE12:
    eax = MEM32(ebp + 0x10); /* 0x1710AE12: mov eax, dword ptr [ebp + 0x10] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1710AE15: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1710AE15: shl eax, 6 */
    PUSH32(esp, eax); /* 0x1710AE18: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AE19: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710AE1E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710AE20: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AE21: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710AE04; /* 0x1710AE24: je 0x1710ae04 */
L_1710AE26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710AE26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1710AE28: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710AE4A; /* 0x1710AE2B: jbe 0x1710ae4a */
L_1710AE2D:
    edx = MEM32(ebp + (-0x4)); /* 0x1710AE2D: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1710AE30: push edi */
L_1710AE31:
    esi = MEM32(ebp + 0xC); /* 0x1710AE31: mov esi, dword ptr [ebp + 0xc] */
    esi = MEM32(esi + eax * 4); /* 0x1710AE34: mov esi, dword ptr [esi + eax*4] */
    PUSH32(esp, 0x10u); /* 0x1710AE37: push 0x10 */
    edi = edx; /* 0x1710AE39: mov edi, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710AE3B: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1710AE3C: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x40u; /* 0x1710AE3D: add edx, 0x40 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1710AE40: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710AE43: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710AE31; /* 0x1710AE45: jb 0x1710ae31 */
L_1710AE47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AE47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710AE49: pop edi */
L_1710AE4A:
    eax = MEM32(ebp + 0x8); /* 0x1710AE4A: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x4) = eax; /* 0x1710AE4D: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710AE50: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710AE53: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AE56: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = eax; /* 0x1710AE59: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AE5C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 0xBu; /* 0x1710AE5F: mov dword ptr [ebx], 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AE65: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AE6A: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710AE6C: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710AE6F: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710AE71: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AE73:
    PUSH32(esp, esi); /* 0x1710AE73: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1710AE74: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, esi */ /* 0x1710AE79: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710AE7B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710AE87; /* 0x1710AE7C: je 0x1710ae87 */
L_1710AE7E:
    PUSH32(esp, 1); /* 0x1710AE7E: push 1 */
    ecx = ebx; /* 0x1710AE80: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AE82: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AE87:
    eax = MEM32(ebp + (-0x8)); /* 0x1710AE87: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x1710AE8A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710AE8B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AE8C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710AE8D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710AE95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AE95u);

L_1710AE95:
    edi = edi; /* 0x1710AE95: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AE97: push ebp */
    ebp = esp; /* 0x1710AE98: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710AE9A: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710AE9B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710AE9F: push ebx */
    PUSH32(esp, esi); /* 0x1710AEA0: push esi */
    PUSH32(esp, 0x1Cu); /* 0x1710AEA1: push 0x1c */
    ebx = ecx; /* 0x1710AEA3: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AEA5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AEAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AEAC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AEBA; /* 0x1710AEAD: je 0x1710aeba */
L_1710AEAF:
    ecx = eax; /* 0x1710AEAF: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710AEB1: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710AEB6: mov esi, eax */
    goto L_1710AEBC; /* 0x1710AEB8: jmp 0x1710aebc */
L_1710AEBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AEBA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AEBC:
    /* test esi, esi */ /* 0x1710AEBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AEC9; /* 0x1710AEBE: jne 0x1710aec9 */
L_1710AEC0:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710AEC0: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710AF09; /* 0x1710AEC7: jmp 0x1710af09 */
L_1710AEC9:
    PUSH32(esp, edi); /* 0x1710AEC9: push edi */
    PUSH32(esp, 0x40u); /* 0x1710AECA: push 0x40 */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AECC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710AED1: mov edi, eax */
    /* test edi, edi */ /* 0x1710AED3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AED5: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AEE1; /* 0x1710AED6: jne 0x1710aee1 */
L_1710AED8:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710AED8: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710AF08; /* 0x1710AEDF: jmp 0x1710af08 */
L_1710AEE1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710AEE1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1710AEE4: push edi */
    RECOMP_CALL(sub_170419F4); /* 0x1710AEE5: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1710AEEA: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1710AEED: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0xAu; /* 0x1710AEF0: mov dword ptr [esi], 0xa */
    MEM32(esi + 0xC) = edi; /* 0x1710AEF6: mov dword ptr [esi + 0xc], edi */
    eax = ebx + 0x118; /* 0x1710AEF9: lea eax, [ebx + 0x118] */
    ecx = MEM32(eax); /* 0x1710AEFF: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = esi; /* 0x1710AF01: mov dword ptr [ecx + 0x18], esi */
    MEM32(eax) = esi; /* 0x1710AF04: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AF06: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AF08:
    edi = POP32_VAL(esp); /* 0x1710AF08: pop edi */
L_1710AF09:
    PUSH32(esp, 0); /* 0x1710AF09: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710AF0B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1710AF10: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AF12: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AF1E; /* 0x1710AF13: je 0x1710af1e */
L_1710AF15:
    PUSH32(esp, 1); /* 0x1710AF15: push 1 */
    ecx = esi; /* 0x1710AF17: mov ecx, esi */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AF19: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AF1E:
    eax = MEM32(ebp + (-0x4)); /* 0x1710AF1E: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1710AF21: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710AF22: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AF23: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710AF24: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710AF2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AF2Cu);

L_1710AF2C:
    edi = edi; /* 0x1710AF2C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AF2E: push ebp */
    ebp = esp; /* 0x1710AF2F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710AF31: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710AF34: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710AF38: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1710AF3C: push esi */
    PUSH32(esp, 0x1Cu); /* 0x1710AF3D: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710AF3F: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AF42: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AF47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AF49: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AF57; /* 0x1710AF4A: je 0x1710af57 */
L_1710AF4C:
    ecx = eax; /* 0x1710AF4C: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710AF4E: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710AF53: mov esi, eax */
    goto L_1710AF59; /* 0x1710AF55: jmp 0x1710af59 */
L_1710AF57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AF57: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AF59:
    /* test esi, esi */ /* 0x1710AF59: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AF66; /* 0x1710AF5B: jne 0x1710af66 */
L_1710AF5D:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AF5D: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AFDB; /* 0x1710AF64: jmp 0x1710afdb */
L_1710AF66:
    PUSH32(esp, ebx); /* 0x1710AF66: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1710AF67: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1710AF6A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AFB4; /* 0x1710AF6C: jbe 0x1710afb4 */
L_1710AF6E:
    eax = ebx; /* 0x1710AF6E: mov eax, ebx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1710AF70: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1710AF70: shl eax, 6 */
    PUSH32(esp, eax); /* 0x1710AF73: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710AF74: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710AF79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AF7B: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710AF7C: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710AF8A; /* 0x1710AF7F: jne 0x1710af8a */
L_1710AF81:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710AF81: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710AFDA; /* 0x1710AF88: jmp 0x1710afda */
L_1710AF8A:
    /* test ebx, ebx */ /* 0x1710AF8A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AFB4; /* 0x1710AF8C: jbe 0x1710afb4 */
L_1710AF8E:
    eax = MEM32(ebp + (-0x4)); /* 0x1710AF8E: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1710AF91: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1710AF92: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x1710AF95: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1710AF98: sub edi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ebx; /* 0x1710AF9A: mov dword ptr [ebp + 0xc], ebx */
L_1710AF9D:
    eax = MEM32(ebp + 0x10); /* 0x1710AF9D: mov eax, dword ptr [ebp + 0x10] */
    ecx = edi + eax; /* 0x1710AFA0: lea ecx, [edi + eax] */
    PUSH32(esp, ecx); /* 0x1710AFA3: push ecx */
    PUSH32(esp, eax); /* 0x1710AFA4: push eax */
    RECOMP_CALL(sub_170419F4); /* 0x1710AFA5: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x1710AFAA: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1710AFAE: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1710AF9D; /* 0x1710AFB1: jne 0x1710af9d */
L_1710AFB3:
    edi = POP32_VAL(esp); /* 0x1710AFB3: pop edi */
L_1710AFB4:
    eax = MEM32(ebp + 0x8); /* 0x1710AFB4: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1710AFB7: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710AFBA: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0xC) = eax; /* 0x1710AFBD: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710AFC0: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi) = 0xBu; /* 0x1710AFC3: mov dword ptr [esi], 0xb */
    MEM32(esi + 0x8) = ebx; /* 0x1710AFC9: mov dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710AFCC: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710AFD1: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = esi; /* 0x1710AFD3: mov dword ptr [ecx + 0x18], esi */
    MEM32(eax) = esi; /* 0x1710AFD6: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710AFD8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710AFDA:
    ebx = POP32_VAL(esp); /* 0x1710AFDA: pop ebx */
L_1710AFDB:
    PUSH32(esp, 0); /* 0x1710AFDB: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710AFDD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1710AFE2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710AFE4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710AFF0; /* 0x1710AFE5: je 0x1710aff0 */
L_1710AFE7:
    PUSH32(esp, 1); /* 0x1710AFE7: push 1 */
    ecx = esi; /* 0x1710AFE9: mov ecx, esi */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710AFEB: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710AFF0:
    eax = MEM32(ebp + (-0x8)); /* 0x1710AFF0: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x1710AFF3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710AFF4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710AFF5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710AFFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710AFFDu);

L_1710AFFD:
    edi = edi; /* 0x1710AFFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710AFFF: push ebp */
    ebp = esp; /* 0x1710B000: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710B002: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710B005: push ebx */
    PUSH32(esp, esi); /* 0x1710B006: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B007: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710B009: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710B00B: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1710B00E: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1710B011: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B014: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1710B019: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B01B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B029; /* 0x1710B01C: je 0x1710b029 */
L_1710B01E:
    ecx = eax; /* 0x1710B01E: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710B020: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710B025: mov esi, eax */
    goto L_1710B02B; /* 0x1710B027: jmp 0x1710b02b */
L_1710B029:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710B029: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B02B:
    /* cmp esi, ebx */ /* 0x1710B02B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B038; /* 0x1710B02D: jne 0x1710b038 */
L_1710B02F:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710B02F: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710B0A4; /* 0x1710B036: jmp 0x1710b0a4 */
L_1710B038:
    PUSH32(esp, edi); /* 0x1710B038: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1710B039: mov edi, dword ptr [ebp + 0x10] */
    /* cmp edi, ebx */ /* 0x1710B03C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710B05C; /* 0x1710B03E: jbe 0x1710b05c */
L_1710B040:
    eax = edi; /* 0x1710B040: mov eax, edi */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x1710B042: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x1710B042: shl eax, 6 */
    PUSH32(esp, eax); /* 0x1710B045: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B046: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1710B04B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B04D: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710B04E: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B05C; /* 0x1710B051: jne 0x1710b05c */
L_1710B053:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710B053: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710B0A3; /* 0x1710B05A: jmp 0x1710b0a3 */
L_1710B05C:
    /* test edi, edi */ /* 0x1710B05C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B07D; /* 0x1710B05E: jbe 0x1710b07d */
L_1710B060:
    eax = MEM32(ebp + (-0x4)); /* 0x1710B060: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = eax; /* 0x1710B063: mov dword ptr [ebp + 0x10], eax */
L_1710B066:
    eax = MEM32(ebp + 0xC); /* 0x1710B066: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1710B069: push dword ptr [eax + ebx*4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710B06C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_170419F4); /* 0x1710B06F: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x40u; /* 0x1710B074: add dword ptr [ebp + 0x10], 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1710B078: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x1710B079: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710B066; /* 0x1710B07B: jb 0x1710b066 */
L_1710B07D:
    eax = MEM32(ebp + 0x8); /* 0x1710B07D: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1710B080: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710B083: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0xC) = eax; /* 0x1710B086: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710B089: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi) = 0xBu; /* 0x1710B08C: mov dword ptr [esi], 0xb */
    MEM32(esi + 0x8) = edi; /* 0x1710B092: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710B095: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710B09A: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = esi; /* 0x1710B09C: mov dword ptr [ecx + 0x18], esi */
    MEM32(eax) = esi; /* 0x1710B09F: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710B0A1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B0A3:
    edi = POP32_VAL(esp); /* 0x1710B0A3: pop edi */
L_1710B0A4:
    PUSH32(esp, 0); /* 0x1710B0A4: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710B0A6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1710B0AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710B0AD: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B0B9; /* 0x1710B0AE: je 0x1710b0b9 */
L_1710B0B0:
    PUSH32(esp, 1); /* 0x1710B0B0: push 1 */
    ecx = esi; /* 0x1710B0B2: mov ecx, esi */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B0B4: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B0B9:
    eax = MEM32(ebp + (-0x8)); /* 0x1710B0B9: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x1710B0BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710B0BD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B0BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710B0BF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710B0C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B0C7u);

L_1710B0C7:
    edi = edi; /* 0x1710B0C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B0C9: push ebp */
    ebp = esp; /* 0x1710B0CA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710B0CC: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1710B0CF: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710B0D3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1710B0D7: push ebx */
    PUSH32(esp, 0x1Cu); /* 0x1710B0D8: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710B0DA: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B0DD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B0E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710B0E4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B0F2; /* 0x1710B0E5: je 0x1710b0f2 */
L_1710B0E7:
    ecx = eax; /* 0x1710B0E7: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710B0E9: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710B0EE: mov ebx, eax */
    goto L_1710B0F4; /* 0x1710B0F0: jmp 0x1710b0f4 */
L_1710B0F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B0F2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B0F4:
    /* test ebx, ebx */ /* 0x1710B0F4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1710B0F6: push esi */
    PUSH32(esp, edi); /* 0x1710B0F7: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710B106; /* 0x1710B0F8: jne 0x1710b106 */
L_1710B0FA:
    MEM32(ebp + (-0x8)) = 0x8007000Eu; /* 0x1710B0FA: mov dword ptr [ebp - 8], 0x8007000e */
    goto L_1710B1B5; /* 0x1710B101: jmp 0x1710b1b5 */
L_1710B106:
    esi = MEM32(ebp + 0xC); /* 0x1710B106: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1710B109: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B150; /* 0x1710B10B: je 0x1710b150 */
L_1710B10D:
    eax = esi; /* 0x1710B10D: mov eax, esi */
    edx = eax + 0x1; /* 0x1710B10F: lea edx, [eax + 1] */
L_1710B112:
    SET_LO8(ecx, MEM8(eax)); /* 0x1710B112: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710B114: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1710B115: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710B112; /* 0x1710B117: jne 0x1710b112 */
L_1710B119:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1710B119: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x4); /* 0x1710B11B: lea ecx, [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710B11E: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1710B11F: push ecx */
    PUSH32(esp, eax); /* 0x1710B120: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1710B121: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1702BAA3); /* 0x1710B124: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B129: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1710B12B: mov dword ptr [ebp - 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B1C2; /* 0x1710B12E: jl 0x1710b1c2 */
L_1710B134:
    eax = MEM32(ebp + (-0x4)); /* 0x1710B134: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1710B137: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B139: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1710B13A: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1710B13D: mov ecx, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x1710B140: mov edi, eax */
    eax = ecx; /* 0x1710B142: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710B144: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710B144: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710B147: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710B149: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710B14B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710B14E: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1710B150:
    PUSH32(esp, 0xCu); /* 0x1710B150: push 0xc */
    edi = POP32_VAL(esp); /* 0x1710B152: pop edi */
    PUSH32(esp, edi); /* 0x1710B153: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B154: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B159: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710B15B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B178; /* 0x1710B15C: je 0x1710b178 */
L_1710B15E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710B15E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1710A179u); /* 0x1710B160: push 0x1710a179 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1710B165: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1710B166: push ecx */
    esi = eax + 0x4; /* 0x1710B167: lea esi, [eax + 4] */
    PUSH32(esp, 8); /* 0x1710B16A: push 8 */
    PUSH32(esp, esi); /* 0x1710B16C: push esi */
    MEM32(eax) = ecx; /* 0x1710B16D: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_1702C116); /* 0x1710B16F: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1710B174: mov eax, esi */
    goto L_1710B17A; /* 0x1710B176: jmp 0x1710b17a */
L_1710B178:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710B178: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B17A:
    /* test eax, eax */ /* 0x1710B17A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B0FA; /* 0x1710B17C: je 0x1710b0fa */
L_1710B182:
    MEM32(eax) = 4; /* 0x1710B182: mov dword ptr [eax], 4 */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710B188: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1710B18B: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710B18E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1710B192: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x14) = eax; /* 0x1710B195: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710B198: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = edi; /* 0x1710B19B: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = ecx; /* 0x1710B19D: mov dword ptr [ebx + 4], ecx */
    MEM32(ebx + 0x10) = 1; /* 0x1710B1A0: mov dword ptr [ebx + 0x10], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710B1A7: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710B1AC: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710B1AE: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710B1B1: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B1B3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B1B5:
    eax = MEM32(ebp + (-0x4)); /* 0x1710B1B5: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1710B1B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B1C6; /* 0x1710B1BA: je 0x1710b1c6 */
L_1710B1BC:
    ecx = MEM32(eax); /* 0x1710B1BC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B1BE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1710B1BF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1710B1C2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1710B1C2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B1C6:
    /* test ebx, ebx */ /* 0x1710B1C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1710B1C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1710B1C9: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B1D5; /* 0x1710B1CA: je 0x1710b1d5 */
L_1710B1CC:
    PUSH32(esp, 1); /* 0x1710B1CC: push 1 */
    ecx = ebx; /* 0x1710B1CE: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B1D0: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B1D5:
    eax = MEM32(ebp + (-0x8)); /* 0x1710B1D5: mov eax, dword ptr [ebp - 8] */
    ebx = POP32_VAL(esp); /* 0x1710B1D8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B1D9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710B1DA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710B1E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B1E2u);

L_1710B1E2:
    edi = edi; /* 0x1710B1E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B1E4: push ebp */
    ebp = esp; /* 0x1710B1E5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710B1E7: push ecx */
    PUSH32(esp, ecx); /* 0x1710B1E8: push ecx */
    PUSH32(esp, esi); /* 0x1710B1E9: push esi */
    PUSH32(esp, edi); /* 0x1710B1EA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B1EB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710B1ED: push 0x1c */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1710B1EF: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1710B1F2: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B1F5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B1FA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B1FC: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B20A; /* 0x1710B1FD: je 0x1710b20a */
L_1710B1FF:
    ecx = eax; /* 0x1710B1FF: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710B201: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710B206: mov esi, eax */
    goto L_1710B20C; /* 0x1710B208: jmp 0x1710b20c */
L_1710B20A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710B20A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B20C:
    /* cmp esi, edi */ /* 0x1710B20C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B219; /* 0x1710B20E: jne 0x1710b219 */
L_1710B210:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710B210: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710B292; /* 0x1710B217: jmp 0x1710b292 */
L_1710B219:
    PUSH32(esp, ebx); /* 0x1710B219: push ebx */
    PUSH32(esp, 0xCu); /* 0x1710B21A: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B21C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B221: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1710B223: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1710B224: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B226: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B23C; /* 0x1710B227: je 0x1710b23c */
L_1710B229:
    PUSH32(esp, 0x1710A179u); /* 0x1710B229: push 0x1710a179 */
    PUSH32(esp, ebx); /* 0x1710B22E: push ebx */
    edi = eax + 0x4; /* 0x1710B22F: lea edi, [eax + 4] */
    PUSH32(esp, 8); /* 0x1710B232: push 8 */
    PUSH32(esp, edi); /* 0x1710B234: push edi */
    MEM32(eax) = ebx; /* 0x1710B235: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1710B237: call 0x1702c116 */
    RECOMP_FLAGS_IN();
L_1710B23C:
    /* test edi, edi */ /* 0x1710B23C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710B249; /* 0x1710B23E: jne 0x1710b249 */
L_1710B240:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710B240: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710B285; /* 0x1710B247: jmp 0x1710b285 */
L_1710B249:
    eax = MEM32(ebp + 0xC); /* 0x1710B249: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1710B24C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B259; /* 0x1710B24E: je 0x1710b259 */
L_1710B250:
    ecx = MEM32(eax); /* 0x1710B250: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B252: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1710B253: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1710B256: mov eax, dword ptr [ebp + 0xc] */
L_1710B259:
    MEM32(edi + 0x4) = eax; /* 0x1710B259: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1710B25C: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = 5; /* 0x1710B25F: mov dword ptr [edi], 5 */
    MEM32(esi + 0x4) = eax; /* 0x1710B265: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1710B268: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = 0xDu; /* 0x1710B26B: mov dword ptr [esi], 0xd */
    MEM32(esi + 0x10) = ebx; /* 0x1710B271: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = edi; /* 0x1710B274: mov dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710B277: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710B27C: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = esi; /* 0x1710B27E: mov dword ptr [ecx + 0x18], esi */
    MEM32(eax) = esi; /* 0x1710B281: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710B283: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B285:
    /* test esi, esi */ /* 0x1710B285: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B291; /* 0x1710B287: je 0x1710b291 */
L_1710B289:
    PUSH32(esp, ebx); /* 0x1710B289: push ebx */
    ecx = esi; /* 0x1710B28A: mov ecx, esi */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B28C: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B291:
    ebx = POP32_VAL(esp); /* 0x1710B291: pop ebx */
L_1710B292:
    eax = MEM32(ebp + (-0x4)); /* 0x1710B292: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1710B295: pop edi */
    esi = POP32_VAL(esp); /* 0x1710B296: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B297: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710B298: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710B2A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B2A0u);

L_1710B2A0:
    edi = edi; /* 0x1710B2A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B2A2: push ebp */
    ebp = esp; /* 0x1710B2A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1710B2A5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710B2A8: push ebx */
    PUSH32(esp, edi); /* 0x1710B2A9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B2AA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710B2AC: push 0x1c */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1710B2AE: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1710B2B1: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1710B2B4: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B2B7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B2BC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B2BE: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B2CC; /* 0x1710B2BF: je 0x1710b2cc */
L_1710B2C1:
    ecx = eax; /* 0x1710B2C1: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710B2C3: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710B2C8: mov ebx, eax */
    goto L_1710B2CE; /* 0x1710B2CA: jmp 0x1710b2ce */
L_1710B2CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B2CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B2CE:
    /* cmp ebx, edi */ /* 0x1710B2CE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B2DE; /* 0x1710B2D0: jne 0x1710b2de */
L_1710B2D2:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1710B2D2: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1710B3E4; /* 0x1710B2D9: jmp 0x1710b3e4 */
L_1710B2DE:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1710B2DE: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710B2E1: push esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710B318; /* 0x1710B2E2: jbe 0x1710b318 */
L_1710B2E4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710B2E4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B2E7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B2EC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B2EE: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1710B2EF: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B300; /* 0x1710B2F2: jne 0x1710b300 */
L_1710B2F4:
    MEM32(ebp + 0xC) = 0x8007000Eu; /* 0x1710B2F4: mov dword ptr [ebp + 0xc], 0x8007000e */
    goto L_1710B3E3; /* 0x1710B2FB: jmp 0x1710b3e3 */
L_1710B300:
    ecx = MEM32(ebp + 0x10); /* 0x1710B300: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x1710B303: mov esi, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x1710B306: mov edi, eax */
    eax = ecx; /* 0x1710B308: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710B30A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710B30A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710B30D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710B30F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710B311: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710B314: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B316: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B318:
    esi = MEM32(ebp + 0x8); /* 0x1710B318: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710B31B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ~esi; /* 0x1710B31D: not esi */
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x1710B31F: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x4); /* 0x1710B323: mov eax, dword ptr [esi + 4] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710B326: setne cl */
    MEM32(ebp + (-0x10)) = eax; /* 0x1710B329: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1710B32C: mov dword ptr [ebp - 0xc], edi */
    PUSH32(esp, ecx); /* 0x1710B32F: push ecx */
    ecx = ebp + (-0xC); /* 0x1710B330: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1710B333: push ecx */
    PUSH32(esp, edi); /* 0x1710B334: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1710B335: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1710B338: push eax */
    RECOMP_CALL(sub_1710A66F); /* 0x1710B339: call 0x1710a66f */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B33E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1710B340: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B3E3; /* 0x1710B343: jl 0x1710b3e3 */
L_1710B349:
    eax = MEM32(ebp + (-0xC)); /* 0x1710B349: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + 0xC) = eax; /* 0x1710B34C: mov dword ptr [ebp + 0xc], eax */
    eax = eax * 8 + 0x4; /* 0x1710B34F: lea eax, [eax*8 + 4] */
    PUSH32(esp, eax); /* 0x1710B356: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B357: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B35C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B35E: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B382; /* 0x1710B35F: je 0x1710b382 */
L_1710B361:
    ecx = MEM32(ebp + 0xC); /* 0x1710B361: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x1710A179u); /* 0x1710B364: push 0x1710a179 */
    PUSH32(esp, ecx); /* 0x1710B369: push ecx */
    MEM32(eax) = ecx; /* 0x1710B36A: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1710B36C: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x1710B36F: push 8 */
    PUSH32(esp, eax); /* 0x1710B371: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1710B372: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1702C116); /* 0x1710B375: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1710B37A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710B37D: mov dword ptr [ebp - 4], eax */
    goto L_1710B385; /* 0x1710B380: jmp 0x1710b385 */
L_1710B382:
    MEM32(ebp + (-0x4)) = edi; /* 0x1710B382: mov dword ptr [ebp - 4], edi */
L_1710B385:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1710B385: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B2F4; /* 0x1710B388: je 0x1710b2f4 */
L_1710B38E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710B38E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), 0xFFFFFFFFu */ /* 0x1710B390: cmp dword ptr [esi + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x8)); /* 0x1710B394: mov esi, dword ptr [ebp - 8] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1710B397: setne al */
    PUSH32(esp, eax); /* 0x1710B39A: push eax */
    PUSH32(esp, edi); /* 0x1710B39B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1710B39C: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1710B39F: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1710B3A0: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1710A66F); /* 0x1710B3A3: call 0x1710a66f */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B3A8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1710B3AA: mov dword ptr [ebp + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B3E3; /* 0x1710B3AD: jl 0x1710b3e3 */
L_1710B3AF:
    eax = MEM32(ebp + 0x8); /* 0x1710B3AF: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x4) = eax; /* 0x1710B3B2: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710B3B5: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x1710B3B8: mov dword ptr [ebx + 8], eax */
    MEM32(ebx) = edi; /* 0x1710B3BB: mov dword ptr [ebx], edi */
    MEM32(ebx + 0xC) = esi; /* 0x1710B3BD: mov dword ptr [ebx + 0xc], esi */
    eax = MEM32(ebp + (-0xC)); /* 0x1710B3C0: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x10) = eax; /* 0x1710B3C3: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710B3C6: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x14) = eax; /* 0x1710B3C9: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1710B3CC: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710B3CF: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710B3D4: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710B3D6: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710B3D9: mov dword ptr [eax], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1710B3DB: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1710B3DE: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B3E1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B3E3:
    esi = POP32_VAL(esp); /* 0x1710B3E3: pop esi */
L_1710B3E4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1710B3E4: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1710B3E7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1710B3EC: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710B3ED: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, edi */ /* 0x1710B3F0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B3FB; /* 0x1710B3F2: je 0x1710b3fb */
L_1710B3F4:
    PUSH32(esp, 3); /* 0x1710B3F4: push 3 */
    RECOMP_CALL(sub_1710A38C); /* 0x1710B3F6: call 0x1710a38c */
    RECOMP_FLAGS_IN();
L_1710B3FB:
    /* cmp ebx, edi */ /* 0x1710B3FB: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B408; /* 0x1710B3FD: je 0x1710b408 */
L_1710B3FF:
    PUSH32(esp, 1); /* 0x1710B3FF: push 1 */
    ecx = ebx; /* 0x1710B401: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B403: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B408:
    eax = MEM32(ebp + 0xC); /* 0x1710B408: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x1710B40B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1710B40C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B40D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710B40E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710B416(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B416u);

L_1710B416:
    edi = edi; /* 0x1710B416: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B418: push ebp */
    ebp = esp; /* 0x1710B419: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710B41B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710B41E: push ebx */
    PUSH32(esp, esi); /* 0x1710B41F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1710B420: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1Cu); /* 0x1710B422: push 0x1c */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1710B424: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1710B427: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B42A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1710B42F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1710B431: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B43F; /* 0x1710B432: je 0x1710b43f */
L_1710B434:
    ecx = eax; /* 0x1710B434: mov ecx, eax */
    RECOMP_CALL(sub_1710A15D); /* 0x1710B436: call 0x1710a15d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1710B43B: mov ebx, eax */
    goto L_1710B441; /* 0x1710B43D: jmp 0x1710b441 */
L_1710B43F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B43F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B441:
    /* cmp ebx, esi */ /* 0x1710B441: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B44E; /* 0x1710B443: jne 0x1710b44e */
L_1710B445:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710B445: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710B4B7; /* 0x1710B44C: jmp 0x1710b4b7 */
L_1710B44E:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1710B44E: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1710B451: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710B486; /* 0x1710B452: jbe 0x1710b486 */
L_1710B454:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1710B454: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1721B01C); /* 0x1710B457: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B45C: mov edi, eax */
    /* test edi, edi */ /* 0x1710B45E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710B460: pop ecx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1710B461: mov dword ptr [ebp - 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710B46F; /* 0x1710B464: jne 0x1710b46f */
L_1710B466:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1710B466: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1710B4B6; /* 0x1710B46D: jmp 0x1710b4b6 */
L_1710B46F:
    ecx = MEM32(ebp + 0x14); /* 0x1710B46F: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0xC); /* 0x1710B472: mov esi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x1710B475: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1710B477: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1710B477: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1710B47A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1710B47C: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1710B47E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1710B481: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x1710B483: mov esi, dword ptr [ebp - 8] */
L_1710B486:
    eax = MEM32(ebp + 0x8); /* 0x1710B486: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0; /* 0x1710B489: and dword ptr [ebx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = eax; /* 0x1710B48D: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1710B490: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebx + 0x8) = eax; /* 0x1710B493: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1710B496: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x1710B499: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1710B49C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = 1; /* 0x1710B49F: mov dword ptr [ebx], 1 */
    MEM32(ebx + 0xC) = esi; /* 0x1710B4A5: mov dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x1710B4A8: add eax, 0x118 */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1710B4AD: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0x18) = ebx; /* 0x1710B4AF: mov dword ptr [ecx + 0x18], ebx */
    MEM32(eax) = ebx; /* 0x1710B4B2: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B4B4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B4B6:
    edi = POP32_VAL(esp); /* 0x1710B4B6: pop edi */
L_1710B4B7:
    PUSH32(esp, 0); /* 0x1710B4B7: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1710B4B9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1710B4BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1710B4C0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B4CC; /* 0x1710B4C1: je 0x1710b4cc */
L_1710B4C3:
    PUSH32(esp, 1); /* 0x1710B4C3: push 1 */
    ecx = ebx; /* 0x1710B4C5: mov ecx, ebx */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B4C7: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B4CC:
    eax = MEM32(ebp + (-0x4)); /* 0x1710B4CC: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1710B4CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710B4D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B4D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1710B4D2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1710B4DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B4DAu);

L_1710B4DA:
    edi = edi; /* 0x1710B4DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B4DC: push ebp */
    ebp = esp; /* 0x1710B4DD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1710B4DF: push ebx */
    PUSH32(esp, esi); /* 0x1710B4E0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710B4E1: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x58); /* 0x1710B4E4: mov eax, dword ptr [esi + 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B4E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x1710B4E9: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B4F5; /* 0x1710B4EC: jne 0x1710b4f5 */
L_1710B4EE:
    ebx = 0x8876086Cu; /* 0x1710B4EE: mov ebx, 0x8876086c */
    goto L_1710B523; /* 0x1710B4F3: jmp 0x1710b523 */
L_1710B4F5:
    PUSH32(esp, 3); /* 0x1710B4F5: push 3 */
    ecx = POP32_VAL(esp); /* 0x1710B4F7: pop ecx */
    /* cmp eax, ecx */ /* 0x1710B4F8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B4EE; /* 0x1710B4FA: je 0x1710b4ee */
L_1710B4FC:
    PUSH32(esp, edi); /* 0x1710B4FC: push edi */
    edi = esi + 0x114; /* 0x1710B4FD: lea edi, [esi + 0x114] */
    MEM32(esi + 0x58) = ecx; /* 0x1710B503: mov dword ptr [esi + 0x58], ecx */
    ecx = MEM32(edi); /* 0x1710B506: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x1710B508: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B513; /* 0x1710B50A: je 0x1710b513 */
L_1710B50C:
    PUSH32(esp, 1); /* 0x1710B50C: push 1 */
    RECOMP_CALL(sub_170FA8B3); /* 0x1710B50E: call 0x170fa8b3 */
    RECOMP_FLAGS_IN();
L_1710B513:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1710B513: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0xFC; /* 0x1710B516: lea eax, [esi + 0xfc] */
    MEM32(esi + 0x118) = eax; /* 0x1710B51C: mov dword ptr [esi + 0x118], eax */
    edi = POP32_VAL(esp); /* 0x1710B522: pop edi */
L_1710B523:
    esi = POP32_VAL(esp); /* 0x1710B523: pop esi */
    eax = ebx; /* 0x1710B524: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1710B526: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1710B527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1710B528: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1710B530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B530u);

L_1710B530:
    edi = edi; /* 0x1710B530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B532: push ebp */
    ebp = esp; /* 0x1710B533: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1710B535: push ecx */
    PUSH32(esp, esi); /* 0x1710B536: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710B537: mov esi, dword ptr [ebp + 8] */
    SET_LO16(eax, MEM16(esi + 0x5E)); /* 0x1710B53A: mov ax, word ptr [esi + 0x5e] */
    PUSH32(esp, edi); /* 0x1710B53E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B53F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x58), edi */ /* 0x1710B541: cmp dword ptr [esi + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1710B544: mov dword ptr [ebp - 4], edi */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x1710B547: mov word ptr [ebp + 8], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B557; /* 0x1710B54B: je 0x1710b557 */
L_1710B54D:
    eax = 0x8876086Cu; /* 0x1710B54D: mov eax, 0x8876086c */
    goto L_1710B60B; /* 0x1710B552: jmp 0x1710b60b */
L_1710B557:
    PUSH32(esp, ebx); /* 0x1710B557: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1710B558: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, edi */ /* 0x1710B55B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B569; /* 0x1710B55D: jne 0x1710b569 */
L_1710B55F:
    eax = 0x8876086Cu; /* 0x1710B55F: mov eax, 0x8876086c */
    goto L_1710B60A; /* 0x1710B564: jmp 0x1710b60a */
L_1710B569:
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(esi + 0x134) = MEM32(esi + 0x134) & 0xFFFFFFBFu; /* 0x1710B569: and dword ptr [esi + 0x134], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1710B570: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x60) = edi; /* 0x1710B573: mov dword ptr [esi + 0x60], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B58A; /* 0x1710B576: jne 0x1710b58a */
L_1710B578:
    eax = MEM32(esi + 0xC4); /* 0x1710B578: mov eax, dword ptr [esi + 0xc4] */
    MEM16(esi + 0x5E) = (uint16_t)(LO16(edi)); /* 0x1710B57E: mov word ptr [esi + 0x5e], di */
    eax = MEM32(eax + 0x90); /* 0x1710B582: mov eax, dword ptr [eax + 0x90] */
    goto L_1710B5C2; /* 0x1710B588: jmp 0x1710b5c2 */
L_1710B58A:
    PUSH32(esp, 1); /* 0x1710B58A: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710B58C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1710B58F: mov ecx, esi */
    RECOMP_CALL(sub_170FB676); /* 0x1710B591: call 0x170fb676 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B596: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B55F; /* 0x1710B598: je 0x1710b55f */
L_1710B59A:
    SET_LO16(eax, MEM16(eax + 0x18)); /* 0x1710B59A: mov ax, word ptr [eax + 0x18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1710B59E: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(esi + 0x5E) = (uint16_t)(LO16(eax)); /* 0x1710B5A0: mov word ptr [esi + 0x5e], ax */
    eax = (uint32_t)LO16(eax); /* 0x1710B5A4: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0xC0) */ /* 0x1710B5A7: cmp eax, dword ptr [esi + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1710B5F9; /* 0x1710B5AD: jae 0x1710b5f9 */
L_1710B5AF:
    ecx = MEM32(esi + 0xC4); /* 0x1710B5AF: mov ecx, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B5B5: imul eax, eax, 0xc4 */
    eax = MEM32(eax + ecx + 0x90); /* 0x1710B5BB: mov eax, dword ptr [eax + ecx + 0x90] */
L_1710B5C2:
    MEM32(esi + 0xD8) = eax; /* 0x1710B5C2: mov dword ptr [esi + 0xd8], eax */
    goto L_1710B5F9; /* 0x1710B5C8: jmp 0x1710b5f9 */
L_1710B5CA:
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B5CA: movzx eax, word ptr [esi + 0x5e] */
    ecx = MEM32(esi + 0xC4); /* 0x1710B5CE: mov ecx, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B5D4: imul eax, eax, 0xc4 */
    eax = MEM32(eax + ecx + 0x90); /* 0x1710B5DA: mov eax, dword ptr [eax + ecx + 0x90] */
    PUSH32(esp, edi); /* 0x1710B5E1: push edi */
    MEM32(esi + 0xD8) = eax; /* 0x1710B5E2: mov dword ptr [esi + 0xd8], eax */
    eax = MEM32(esi); /* 0x1710B5E8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1710B5EA: push esi */
    RECOMP_ICALL(MEM32(eax + 0xF0)); /* 0x1710B5EB: call dword ptr [eax + 0xf0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B5F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1710B634; /* 0x1710B5F3: jge 0x1710b634 */
L_1710B5F5:
    _flag_a = (uint32_t)(MEM16(esi + 0x5E)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x5E) = (uint16_t)(MEM16(esi + 0x5E) + 1); /* 0x1710B5F5: inc word ptr [esi + 0x5e] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1710B5F9:
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B5F9: movzx eax, word ptr [esi + 0x5e] */
    /* cmp eax, MEM32(esi + 0xC0) */ /* 0x1710B5FD: cmp eax, dword ptr [esi + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710B5CA; /* 0x1710B603: jb 0x1710b5ca */
L_1710B605:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1710B605: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edi; /* 0x1710B607: mov dword ptr [ebx], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1710B609: inc eax */
    _flag_k = FK_INC;
L_1710B60A:
    ebx = POP32_VAL(esp); /* 0x1710B60A: pop ebx */
L_1710B60B:
    ecx = MEM32(ebp + 0x8); /* 0x1710B60B: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0xC4); /* 0x1710B60E: mov edx, dword ptr [esi + 0xc4] */
    MEM16(esi + 0x5E) = (uint16_t)(LO16(ecx)); /* 0x1710B614: mov word ptr [esi + 0x5e], cx */
    ecx = (uint32_t)LO16(ecx); /* 0x1710B618: movzx ecx, cx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC4u); /* 0x1710B61B: imul ecx, ecx, 0xc4 */
    ecx = MEM32(ecx + edx + 0x90); /* 0x1710B621: mov ecx, dword ptr [ecx + edx + 0x90] */
    edi = POP32_VAL(esp); /* 0x1710B628: pop edi */
    MEM32(esi + 0xD8) = ecx; /* 0x1710B629: mov dword ptr [esi + 0xd8], ecx */
    esi = POP32_VAL(esp); /* 0x1710B62F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B630: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710B631: ret 0xc */
L_1710B634:
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B634: movzx eax, word ptr [esi + 0x5e] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B638: imul eax, eax, 0xc4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC4); /* 0x1710B63E: add eax, dword ptr [esi + 0xc4] */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x1710B644: not eax */
    MEM32(ebx) = eax; /* 0x1710B646: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1710B648: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1710B60A; /* 0x1710B64B: jmp 0x1710b60a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1710B652(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B652u);

L_1710B652:
    edi = edi; /* 0x1710B652: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B654: push ebp */
    ebp = esp; /* 0x1710B655: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1710B657: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710B65A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1710B65B: mov esi, dword ptr [ebp + 8] */
    SET_LO16(eax, MEM16(esi + 0x5E)); /* 0x1710B65E: mov ax, word ptr [esi + 0x5e] */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(eax)); /* 0x1710B662: mov word ptr [ebp + 8], ax */
    eax = MEM32(esi + 0x60); /* 0x1710B666: mov eax, dword ptr [esi + 0x60] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710B669: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x8); /* 0x1710B66C: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1710B66F: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x1710B670: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0xC); /* 0x1710B673: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B676: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x58), edi */ /* 0x1710B678: cmp dword ptr [esi + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x8) = eax; /* 0x1710B67B: mov dword ptr [esi + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B68A; /* 0x1710B67E: je 0x1710b68a */
L_1710B680:
    edi = 0x8876086Cu; /* 0x1710B680: mov edi, 0x8876086c */
    goto L_1710B8E9; /* 0x1710B685: jmp 0x1710b8e9 */
L_1710B68A:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1710B68A: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B6D8; /* 0x1710B68D: je 0x1710b6d8 */
L_1710B68F:
    PUSH32(esp, 1); /* 0x1710B68F: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710B691: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1710B694: mov ecx, esi */
    RECOMP_CALL(sub_170FB676); /* 0x1710B696: call 0x170fb676 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1710B69B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B680; /* 0x1710B69D: je 0x1710b680 */
L_1710B69F:
    SET_LO16(ecx, MEM16(esi + 0x5E)); /* 0x1710B69F: mov cx, word ptr [esi + 0x5e] */
    /* cmp LO16(ecx), MEM16(eax + 0x18) */ /* 0x1710B6A3: cmp cx, word ptr [eax + 0x18] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x18)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B6BB; /* 0x1710B6A7: je 0x1710b6bb */
L_1710B6A9:
    _flag_a = (uint32_t)(MEM32(esi + 0x134)); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(esi + 0x134) = MEM32(esi + 0x134) & 0xFFFFFFBFu; /* 0x1710B6A9: and dword ptr [esi + 0x134], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x60) = edi; /* 0x1710B6B0: mov dword ptr [esi + 0x60], edi */
    SET_LO16(eax, MEM16(eax + 0x18)); /* 0x1710B6B3: mov ax, word ptr [eax + 0x18] */
    MEM16(esi + 0x5E) = (uint16_t)(LO16(eax)); /* 0x1710B6B7: mov word ptr [esi + 0x5e], ax */
L_1710B6BB:
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B6BB: movzx eax, word ptr [esi + 0x5e] */
    ecx = MEM32(esi + 0xC4); /* 0x1710B6BF: mov ecx, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B6C5: imul eax, eax, 0xc4 */
    eax = MEM32(eax + ecx + 0x90); /* 0x1710B6CB: mov eax, dword ptr [eax + ecx + 0x90] */
    MEM32(esi + 0xD8) = eax; /* 0x1710B6D2: mov dword ptr [esi + 0xd8], eax */
L_1710B6D8:
    PUSH32(esp, ebx); /* 0x1710B6D8: push ebx */
    ebx = esi + 0x11C; /* 0x1710B6D9: lea ebx, [esi + 0x11c] */
    /* cmp MEM32(ebx), edi */ /* 0x1710B6DF: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B701; /* 0x1710B6E1: jne 0x1710b701 */
L_1710B6E3:
    eax = MEM32(esi + 0xC); /* 0x1710B6E3: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B6E6: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1710B6E8: push ebx */
    PUSH32(esp, 0x170164C0u); /* 0x1710B6E9: push 0x170164c0 */
    PUSH32(esp, eax); /* 0x1710B6EE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x158)); /* 0x1710B6EF: call dword ptr [ecx + 0x158] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B6F5: mov edi, eax */
    /* test edi, edi */ /* 0x1710B6F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B8E8; /* 0x1710B6F9: jl 0x1710b8e8 */
L_1710B6FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1710B6FF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1710B701:
    /* cmp MEM32(esi + 0x120), edi */ /* 0x1710B701: cmp dword ptr [esi + 0x120], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x120)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B791; /* 0x1710B707: jne 0x1710b791 */
L_1710B70D:
    /* test MEM8(esi + 0x134), 0x80u */ /* 0x1710B70D: test byte ptr [esi + 0x134], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x134)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1710B791; /* 0x1710B714: jne 0x1710b791 */
L_1710B716:
    eax = MEM32(esi + 0xC); /* 0x1710B716: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B719: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B71B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF0)); /* 0x1710B71C: call dword ptr [ecx + 0xf0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B722: mov edi, eax */
    /* test edi, edi */ /* 0x1710B724: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B8E8; /* 0x1710B726: jl 0x1710b8e8 */
L_1710B72C:
    eax = MEM32(esi + 0xC); /* 0x1710B72C: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebx)); /* 0x1710B72F: push dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x1710B731: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B733: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1710B734: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B73A: mov edi, eax */
    /* test edi, edi */ /* 0x1710B73C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B86E; /* 0x1710B73E: jl 0x1710b86e */
L_1710B744:
    eax = MEM32(esi + 0xC); /* 0x1710B744: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B747: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1710B749: push 0 */
    PUSH32(esp, eax); /* 0x1710B74B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x170)); /* 0x1710B74C: call dword ptr [ecx + 0x170] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B752: mov edi, eax */
    /* test edi, edi */ /* 0x1710B754: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B86E; /* 0x1710B756: jl 0x1710b86e */
L_1710B75C:
    eax = MEM32(esi + 0xC); /* 0x1710B75C: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B75F: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1710B761: push 0 */
    PUSH32(esp, eax); /* 0x1710B763: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x1710B764: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B76A: mov edi, eax */
    /* test edi, edi */ /* 0x1710B76C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B86E; /* 0x1710B76E: jl 0x1710b86e */
L_1710B774:
    eax = MEM32(esi + 0xC); /* 0x1710B774: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(eax); /* 0x1710B777: mov edx, dword ptr [eax] */
    ecx = esi + 0x120; /* 0x1710B779: lea ecx, [esi + 0x120] */
    PUSH32(esp, ecx); /* 0x1710B77F: push ecx */
    PUSH32(esp, eax); /* 0x1710B780: push eax */
    RECOMP_ICALL(MEM32(edx + 0xF4)); /* 0x1710B781: call dword ptr [edx + 0xf4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B787: mov edi, eax */
    /* test edi, edi */ /* 0x1710B789: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B8E8; /* 0x1710B78B: jl 0x1710b8e8 */
L_1710B791:
    eax = MEM32(esi + 0x120); /* 0x1710B791: mov eax, dword ptr [esi + 0x120] */
    ecx = MEM32(eax); /* 0x1710B797: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B799: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1710B79A: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B79D: mov edi, eax */
    /* test edi, edi */ /* 0x1710B79F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B8E8; /* 0x1710B7A1: jl 0x1710b8e8 */
L_1710B7A7:
    eax = MEM32(esi + 0xC); /* 0x1710B7A7: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(ebx)); /* 0x1710B7AA: push dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x1710B7AC: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1710B7AE: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1710B7B2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1710B7B3: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B7B9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1710B7BB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8C1; /* 0x1710B7BD: jl 0x1710b8c1 */
L_1710B7C3:
    eax = MEM32(esi + 0xC); /* 0x1710B7C3: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B7C6: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1710B7C8: push ebx */
    PUSH32(esp, eax); /* 0x1710B7C9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x170)); /* 0x1710B7CA: call dword ptr [ecx + 0x170] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1710B7D0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8C1; /* 0x1710B7D2: jl 0x1710b8c1 */
L_1710B7D8:
    eax = MEM32(esi + 0xC); /* 0x1710B7D8: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B7DB: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1710B7DD: push ebx */
    PUSH32(esp, eax); /* 0x1710B7DE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1AC)); /* 0x1710B7DF: call dword ptr [ecx + 0x1ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1710B7E5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8C1; /* 0x1710B7E7: jl 0x1710b8c1 */
L_1710B7ED:
    eax = MEM32(esi); /* 0x1710B7ED: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1710B7EF: push ebx */
    PUSH32(esp, ebx); /* 0x1710B7F0: push ebx */
    PUSH32(esp, esi); /* 0x1710B7F1: push esi */
    RECOMP_ICALL(MEM32(eax + 0xFC)); /* 0x1710B7F2: call dword ptr [eax + 0xfc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1710B7F8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8C1; /* 0x1710B7FA: jl 0x1710b8c1 */
L_1710B800:
    PUSH32(esp, 1); /* 0x1710B800: push 1 */
    MEM32(esi + 0x58) = 2; /* 0x1710B802: mov dword ptr [esi + 0x58], 2 */
    RECOMP_CALL(sub_1702BB20); /* 0x1710B809: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B80E: movzx eax, word ptr [esi + 0x5e] */
    ecx = MEM32(esi + 0xC4); /* 0x1710B812: mov ecx, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B818: imul eax, eax, 0xc4 */
    /* cmp MEM32(eax + ecx + 0x38), ebx */ /* 0x1710B81E: cmp dword ptr [eax + ecx + 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710B8A0; /* 0x1710B822: jbe 0x1710b8a0 */
L_1710B824:
    eax = MEM32(esi); /* 0x1710B824: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1710B826: push ebx */
    PUSH32(esp, esi); /* 0x1710B827: push esi */
    RECOMP_ICALL(MEM32(eax + 0x100)); /* 0x1710B828: call dword ptr [eax + 0x100] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B82E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B89D; /* 0x1710B830: jl 0x1710b89d */
L_1710B832:
    eax = MEM32(esi + 0xC); /* 0x1710B832: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B835: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xC); /* 0x1710B837: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1710B83A: push edx */
    PUSH32(esp, eax); /* 0x1710B83B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x118)); /* 0x1710B83C: call dword ptr [ecx + 0x118] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B842: mov edi, eax */
    /* test edi, edi */ /* 0x1710B844: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x1710B846: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1710B848: push esi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B892; /* 0x1710B849: jl 0x1710b892 */
L_1710B84B:
    RECOMP_ICALL(MEM32(eax + 0x108)); /* 0x1710B84B: call dword ptr [eax + 0x108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B851: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1710B89D; /* 0x1710B853: jl 0x1710b89d */
L_1710B855:
    eax = (uint32_t)MEM16(esi + 0x5E); /* 0x1710B855: movzx eax, word ptr [esi + 0x5e] */
    ecx = MEM32(esi + 0xC4); /* 0x1710B859: mov ecx, dword ptr [esi + 0xc4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B85F: imul eax, eax, 0xc4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1710B865: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(eax + ecx + 0x38) */ /* 0x1710B866: cmp ebx, dword ptr [eax + ecx + 0x38] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710B824; /* 0x1710B86A: jb 0x1710b824 */
L_1710B86C:
    goto L_1710B8A0; /* 0x1710B86C: jmp 0x1710b8a0 */
L_1710B86E:
    eax = MEM32(esi + 0xC); /* 0x1710B86E: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B871: mov ecx, dword ptr [eax] */
    ebx = esi + 0x120; /* 0x1710B873: lea ebx, [esi + 0x120] */
    PUSH32(esp, ebx); /* 0x1710B879: push ebx */
    PUSH32(esp, eax); /* 0x1710B87A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xF4)); /* 0x1710B87B: call dword ptr [ecx + 0xf4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1710B881: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1710B883: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1710B8E8; /* 0x1710B885: je 0x1710b8e8 */
L_1710B887:
    ecx = MEM32(eax); /* 0x1710B887: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B889: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1710B88A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1710B88D: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1710B8E8; /* 0x1710B890: jmp 0x1710b8e8 */
L_1710B892:
    RECOMP_ICALL(MEM32(eax + 0x108)); /* 0x1710B892: call dword ptr [eax + 0x108] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = edi; /* 0x1710B898: mov dword ptr [ebp + 0xc], edi */
    goto L_1710B8A0; /* 0x1710B89B: jmp 0x1710b8a0 */
L_1710B89D:
    MEM32(ebp + 0xC) = eax; /* 0x1710B89D: mov dword ptr [ebp + 0xc], eax */
L_1710B8A0:
    PUSH32(esp, 0); /* 0x1710B8A0: push 0 */
    RECOMP_CALL(sub_1702BB20); /* 0x1710B8A2: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1710B8A7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1710B8A9: push esi */
    MEM32(esi + 0x58) = 4; /* 0x1710B8AA: mov dword ptr [esi + 0x58], 4 */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x1710B8B1: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1710B8B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1710B8C4; /* 0x1710B8B9: jge 0x1710b8c4 */
L_1710B8BB:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1710B8BB: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8C4; /* 0x1710B8BF: jl 0x1710b8c4 */
L_1710B8C1:
    MEM32(ebp + 0xC) = eax; /* 0x1710B8C1: mov dword ptr [ebp + 0xc], eax */
L_1710B8C4:
    eax = MEM32(esi + 0x120); /* 0x1710B8C4: mov eax, dword ptr [esi + 0x120] */
    ecx = MEM32(eax); /* 0x1710B8CA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B8CC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1710B8CD: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1710B8D0: mov edi, eax */
    /* test edi, edi */ /* 0x1710B8D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1710B8DF; /* 0x1710B8D4: jge 0x1710b8df */
L_1710B8D6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1710B8D6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710B8E5; /* 0x1710B8DA: jl 0x1710b8e5 */
L_1710B8DC:
    MEM32(ebp + 0xC) = edi; /* 0x1710B8DC: mov dword ptr [ebp + 0xc], edi */
L_1710B8DF:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1710B8DF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1710B8E8; /* 0x1710B8E3: jge 0x1710b8e8 */
L_1710B8E5:
    edi = MEM32(ebp + 0xC); /* 0x1710B8E5: mov edi, dword ptr [ebp + 0xc] */
L_1710B8E8:
    ebx = POP32_VAL(esp); /* 0x1710B8E8: pop ebx */
L_1710B8E9:
    eax = MEM32(ebp + 0x8); /* 0x1710B8E9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1710B8EC: mov ecx, dword ptr [ebp - 4] */
    MEM16(esi + 0x5E) = (uint16_t)(LO16(eax)); /* 0x1710B8EF: mov word ptr [esi + 0x5e], ax */
    eax = (uint32_t)LO16(eax); /* 0x1710B8F3: movzx eax, ax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC4u); /* 0x1710B8F6: imul eax, eax, 0xc4 */
    MEM32(esi + 0x60) = ecx; /* 0x1710B8FC: mov dword ptr [esi + 0x60], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1710B8FF: mov ecx, dword ptr [ebp - 8] */
    MEM32(esi + 0x8) = ecx; /* 0x1710B902: mov dword ptr [esi + 8], ecx */
    ecx = MEM32(esi + 0xC4); /* 0x1710B905: mov ecx, dword ptr [esi + 0xc4] */
    eax = MEM32(eax + ecx + 0x90); /* 0x1710B90B: mov eax, dword ptr [eax + ecx + 0x90] */
    MEM32(esi + 0xD8) = eax; /* 0x1710B912: mov dword ptr [esi + 0xd8], eax */
    eax = edi; /* 0x1710B918: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1710B91A: pop edi */
    esi = POP32_VAL(esp); /* 0x1710B91B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710B91C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1710B91D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1710B925(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710B925u);

L_1710B925:
    edi = edi; /* 0x1710B925: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710B927: push ebp */
    ebp = esp; /* 0x1710B928: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x414u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x414u; /* 0x1710B92A: sub esp, 0x414 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1710B930: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1710B931: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1710B933: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1710B936: push esi */
    PUSH32(esp, edi); /* 0x1710B937: push edi */
    edi = ecx; /* 0x1710B938: mov edi, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1710B93A: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1710B95B; /* 0x1710B93D: jne 0x1710b95b */
L_1710B93F:
    esi = edi + 0x11C; /* 0x1710B93F: lea esi, [edi + 0x11c] */
    /* cmp MEM32(esi), ebx */ /* 0x1710B945: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710B951; /* 0x1710B947: je 0x1710b951 */
L_1710B949:
    eax = MEM32(esi); /* 0x1710B949: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1710B94B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710B94D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1710B94E: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1710B951:
    eax = MEM32(esi); /* 0x1710B951: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1710B953: mov dword ptr [ebp - 4], eax */
    goto L_1710BA06; /* 0x1710B956: jmp 0x1710ba06 */
L_1710B95B:
    eax = ebp + 0x8; /* 0x1710B95B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1710B95E: push eax */
    eax = ebp + (-0x414); /* 0x1710B95F: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1710B965: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1710B966: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_170DB718); /* 0x1710B969: call 0x170db718 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710B96E: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1710B970: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710BA17; /* 0x1710B972: jl 0x1710ba17 */
L_1710B978:
    /* cmp MEM32(ebp + 0x8), 0x41u */ /* 0x1710B978: cmp dword ptr [ebp + 8], 0x41 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1710B988; /* 0x1710B97C: jb 0x1710b988 */
L_1710B97E:
    esi = 0x80004005u; /* 0x1710B97E: mov esi, 0x80004005 */
    goto L_1710BA17; /* 0x1710B983: jmp 0x1710ba17 */
L_1710B988:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1710B988: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1710B98A: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1710B9D1; /* 0x1710B98D: jbe 0x1710b9d1 */
L_1710B98F:
    eax = ecx; /* 0x1710B98F: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1710B991: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1710B991: shl eax, 3 */
    edx = ebp + eax + (-0x20A); /* 0x1710B994: lea edx, [ebp + eax - 0x20a] */
    esi = ecx + ecx * 2; /* 0x1710B99B: lea esi, [ecx + ecx*2] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1710B99E: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1710B99E: shl esi, 2 */
    MEM16(edx + (-0x2)) = (uint16_t)(LO16(ebx)); /* 0x1710B9A1: mov word ptr [edx - 2], bx */
    MEM16(edx) = (uint16_t)(LO16(esi)); /* 0x1710B9A5: mov word ptr [edx], si */
    MEM8(edx + 0x2) = (uint8_t)(2); /* 0x1710B9A8: mov byte ptr [edx + 2], 2 */
    MEM8(edx + 0x3) = (uint8_t)(LO8(ebx)); /* 0x1710B9AC: mov byte ptr [edx + 3], bl */
    SET_LO8(edx, MEM8(ebp + eax + (-0x414))); /* 0x1710B9AF: mov dl, byte ptr [ebp + eax - 0x414] */
    MEM8(ebp + eax + (-0x206)) = (uint8_t)(LO8(edx)); /* 0x1710B9B6: mov byte ptr [ebp + eax - 0x206], dl */
    SET_LO8(edx, MEM8(ebp + eax + (-0x410))); /* 0x1710B9BD: mov dl, byte ptr [ebp + eax - 0x410] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1710B9C4: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1710B9C5: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + eax + (-0x205)) = (uint8_t)(LO8(edx)); /* 0x1710B9C8: mov byte ptr [ebp + eax - 0x205], dl */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1710B98F; /* 0x1710B9CF: jb 0x1710b98f */
L_1710B9D1:
    eax = MEM32(0x17016510); /* 0x1710B9D1: mov eax, dword ptr [0x17016510] */
    MEM32(ebp + ecx * 8 + (-0x20C)) = eax; /* 0x1710B9D6: mov dword ptr [ebp + ecx*8 - 0x20c], eax */
    eax = MEM32(0x17016514); /* 0x1710B9DD: mov eax, dword ptr [0x17016514] */
    edx = ebp + (-0x4); /* 0x1710B9E2: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1710B9E5: push edx */
    MEM32(ebp + ecx * 8 + (-0x208)) = eax; /* 0x1710B9E6: mov dword ptr [ebp + ecx*8 - 0x208], eax */
    eax = MEM32(edi + 0xC); /* 0x1710B9ED: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x1710B9F0: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20C); /* 0x1710B9F2: lea edx, [ebp - 0x20c] */
    PUSH32(esp, edx); /* 0x1710B9F8: push edx */
    PUSH32(esp, eax); /* 0x1710B9F9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x158)); /* 0x1710B9FA: call dword ptr [ecx + 0x158] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710BA00: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1710BA02: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1710BA17; /* 0x1710BA04: jl 0x1710ba17 */
L_1710BA06:
    eax = MEM32(edi + 0xC); /* 0x1710BA06: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1710BA09: push dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1710BA0C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710BA0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x15C)); /* 0x1710BA0F: call dword ptr [ecx + 0x15c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1710BA15: mov esi, eax */
L_1710BA17:
    eax = MEM32(ebp + (-0x4)); /* 0x1710BA17: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, ebx */ /* 0x1710BA1A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1710BA24; /* 0x1710BA1C: je 0x1710ba24 */
L_1710BA1E:
    ecx = MEM32(eax); /* 0x1710BA1E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710BA20: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1710BA21: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1710BA24:
    edi = POP32_VAL(esp); /* 0x1710BA24: pop edi */
    eax = esi; /* 0x1710BA25: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1710BA27: pop esi */
    ebx = POP32_VAL(esp); /* 0x1710BA28: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1710BA29: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1710BA2A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1710BA32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710BA32u);

L_1710BA32:
    edi = edi; /* 0x1710BA32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710BA34: push ebp */
    ebp = esp; /* 0x1710BA35: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710BA37: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1710BA3A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1710BA3D: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710BA40: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1710BA43: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710BA45: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x1710BA46: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1710BA4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710BA4D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1710BA55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1710BA55u);

L_1710BA55:
    edi = edi; /* 0x1710BA55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1710BA57: push ebp */
    ebp = esp; /* 0x1710BA58: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1710BA5A: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1710BA5D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1710BA60: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1710BA63: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1710BA66: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1710BA68: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x1710BA69: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1710BA6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1710BA70: ret 0xc */
    RECOMP_REGS_OUT();
}
